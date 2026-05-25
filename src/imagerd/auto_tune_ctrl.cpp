/*
 * Copyright (c) 2025 Noah Maceri
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, version 3.
*/

#include "auto_tune_ctrl.h"

#include <algorithm>
#include <cstdint>
#include <cstdlib>
#include <unistd.h>

#include "isp_utils.h"

extern std::atomic<bool> g_exit;

namespace {

// Per-iteration ceiling on how far any single knob can move. Keeps the
// camera from ever making a visible jump in one step, even if the scene
// flips between buckets — convergence then takes a few iterations rather
// than one.
constexpr int MAX_STEP_PER_TICK = 5;

// Hysteresis margin on the luma-bucket boundaries. We pick the next bucket
// only if y_mean has moved at least HYSTERESIS past the boundary; otherwise
// we keep using the previous bucket. Without this, a scene sitting near a
// boundary (e.g. y_mean ≈ 80) would flip-flop targets every period.
constexpr uint8_t HYSTERESIS = 6;

constexpr uint8_t LUMA_BUCKETS[] = {30, 80, 180, 220};

// Walk `hist` low to high, return the luma value at which the running
// pixel-count fraction first exceeds `pct/100`. Bin index is mapped back
// to a 0–255 luma estimate using the bin width (256 / num_bins), so the
// result is comparable to `y_mean` regardless of histogram resolution.
uint8_t histogram_percentile(const std::vector<uint16_t> &hist, int pct) {
    if (hist.empty()) return 0;
    uint64_t total = 0;
    for (auto v : hist) total += v;
    if (total == 0) return 0;

    const uint64_t target = (total * static_cast<uint64_t>(pct)) / 100;
    const size_t   bin_width = 256u / hist.size();   // truncates if not exact

    uint64_t accum = 0;
    for (size_t i = 0; i < hist.size(); ++i) {
        accum += hist[i];
        if (accum >= target) {
            // mid-of-bin estimate
            const size_t lum = i * bin_width + bin_width / 2;
            return static_cast<uint8_t>(std::min<size_t>(lum, 255));
        }
    }
    return 255;
}

struct Targets { int contrast; int sharpness; int wdr_level; };

// Map a bucket index (0–4) to a target tuple. The values are deliberately
// closer together than they used to be — see "WAY too aggressive" feedback
// from v0.5.1 testing. The big visible offender was WDR jumping by 20–30
// between buckets; we now cap that to ~5 per step (see MAX_STEP_PER_TICK).
Targets targets_for_bucket(int bucket) {
    switch (bucket) {
        case 0: return {52, 48, 30};  // night / very dark
        case 1: return {51, 50, 35};  // low light
        case 2: return {50, 52, 40};  // normal mid-tones (≈ settings.json defaults)
        case 3: return {49, 54, 45};  // bright
        default: return {48, 50, 50}; // overexposed / sunny
    }
}

// Pick a bucket index for `y_mean` with hysteresis around the boundaries.
// `prev_bucket` is the bucket we picked last time (or -1 for first run).
int pick_bucket(uint8_t y_mean, int prev_bucket) {
    // No prior bucket — pick by hard thresholds.
    auto hard_bucket = [](uint8_t y) -> int {
        for (int i = 0; i < 4; ++i) {
            if (y < LUMA_BUCKETS[i]) return i;
        }
        return 4;
    };

    if (prev_bucket < 0) return hard_bucket(y_mean);

    // Only move to the adjacent bucket if y_mean has crossed the boundary
    // by HYSTERESIS. This stops oscillation when the scene sits right on
    // a threshold.
    const int next = hard_bucket(y_mean);
    if (next == prev_bucket) return prev_bucket;

    if (next > prev_bucket) {
        const uint8_t boundary = LUMA_BUCKETS[prev_bucket];
        return (y_mean >= static_cast<int>(boundary) + HYSTERESIS) ? next : prev_bucket;
    }
    // next < prev_bucket
    const uint8_t boundary = LUMA_BUCKETS[next]; // boundary we just dipped below
    return (y_mean + HYSTERESIS <= boundary) ? next : prev_bucket;
}

// Apply a per-iteration cap so no single tick moves a knob by more than
// MAX_STEP_PER_TICK. `current` of -1 means "we don't know the prior value
// yet, do one capped step from the camera's own current setting".
int capped_step(int current, int target) {
    if (current < 0) return target;       // caller already supplied baseline
    const int delta = target - current;
    if (delta == 0) return current;
    if (std::abs(delta) <= MAX_STEP_PER_TICK) return target;
    return current + (delta > 0 ? MAX_STEP_PER_TICK : -MAX_STEP_PER_TICK);
}

int clamp01(int x) { return std::min(100, std::max(0, x)); }

// Aggressiveness re-shapes the target by pulling it toward / pushing it
// from the camera's natural midpoint of 50. aggressiveness=0 is half the
// natural delta (very gentle), aggressiveness=1 is the table value as-is,
// aggressiveness=2 is 1.5× (bigger swings). The per-iteration cap above
// still applies regardless.
int scale_aggressiveness(int target, uint8_t aggr) {
    constexpr int CENTER = 50;
    int delta = target - CENTER;
    if (aggr == 0) delta /= 2;
    else if (aggr >= 2) delta = (delta * 3) / 2;
    return clamp01(CENTER + delta);
}

void apply_if_changed(enum enum_rts_video_ctrl_id id, int target,
                      int *last, zlog_category_t *log) {
    if (target == *last) return;             // unchanged — skip ISP write
    if (change_isp_setting(id, target, log)) {
        *last = target;
    }
}

} // namespace

auto_tune_ctrl::auto_tune_ctrl(const Config &cfg, zlog_category_t *logger)
    : cfg_(cfg), log_(logger) {}

auto_tune_ctrl::~auto_tune_ctrl() { stop(); }

bool auto_tune_ctrl::begin() {
    if (!cfg_.enabled) {
        zlog_info(log_, "Auto-tune disabled by settings.json");
        return true;
    }
    running_.store(true);
    if (pthread_create(&thread_, nullptr, &auto_tune_ctrl::thread_fn, this) != 0) {
        zlog_error(log_, "Failed to start auto-tune thread");
        running_.store(false);
        return false;
    }
    thread_created_ = true;
    zlog_info(log_, "Auto-tune started (period=%us, aggressiveness=%u)",
              cfg_.period_s, cfg_.aggressiveness);
    return true;
}

void auto_tune_ctrl::stop() {
    if (!thread_created_) return;
    running_.store(false);
    pthread_join(thread_, nullptr);
    thread_created_ = false;
    zlog_info(log_, "Auto-tune stopped");
}

void *auto_tune_ctrl::thread_fn(void *arg) {
    static_cast<auto_tune_ctrl *>(arg)->run_loop();
    return nullptr;
}

void auto_tune_ctrl::run_loop() {
    // Seed the baselines from whatever the camera is currently set to so
    // the first tick is a small capped step rather than a jump to bucket
    // target. Fall back to 50 (centre of all three knobs) if the read fails.
    auto seed = [&](enum enum_rts_video_ctrl_id id) -> int {
        int32_t v = 0;
        return get_isp_setting(id, v, log_) ? v : 50;
    };
    last_contrast_  = seed(RTS_VIDEO_CTRL_ID_CONTRAST);
    last_sharpness_ = seed(RTS_VIDEO_CTRL_ID_SHARPNESS);
    last_wdr_level_ = seed(RTS_VIDEO_CTRL_ID_WDR_LEVEL);

    // Sleep loop is built from short polls so g_exit / running_ shutdown
    // is responsive (≤1 s) even with a long period_s.
    while (running_.load() && !g_exit.load()) {
        tune_once();
        for (uint32_t s = 0; s < cfg_.period_s; ++s) {
            if (!running_.load() || g_exit.load()) return;
            sleep(1);
        }
    }
}

void auto_tune_ctrl::tune_once() {
    AeStats stats;
    if (!read_ae_stats(stats, log_)) return;

    last_bucket_ = pick_bucket(stats.y_mean, last_bucket_);
    Targets raw = targets_for_bucket(last_bucket_);
    Targets agg{
        scale_aggressiveness(raw.contrast,  cfg_.aggressiveness),
        scale_aggressiveness(raw.sharpness, cfg_.aggressiveness),
        scale_aggressiveness(raw.wdr_level, cfg_.aggressiveness),
    };

    const int contrast  = capped_step(last_contrast_,  agg.contrast);
    const int sharpness = capped_step(last_sharpness_, agg.sharpness);
    const int wdr       = capped_step(last_wdr_level_, agg.wdr_level);

    zlog_debug(log_, "auto-tune: y=%u bucket=%d -> contrast=%d sharpness=%d wdr_level=%d",
               stats.y_mean, last_bucket_, contrast, sharpness, wdr);

    apply_if_changed(RTS_VIDEO_CTRL_ID_CONTRAST,  contrast,  &last_contrast_,  log_);
    apply_if_changed(RTS_VIDEO_CTRL_ID_SHARPNESS, sharpness, &last_sharpness_, log_);
    apply_if_changed(RTS_VIDEO_CTRL_ID_WDR_LEVEL, wdr,       &last_wdr_level_, log_);
}
