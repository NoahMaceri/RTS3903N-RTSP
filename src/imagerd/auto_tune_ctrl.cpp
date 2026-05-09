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
#include <unistd.h>

#include "isp_utils.h"

extern std::atomic<bool> g_exit;

namespace {

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

// Pick a target tuple from luma + histogram-spread features. Hand-tuned
// lookup, intentionally chunky — easier to debug visually than a PID.
//   y_mean  : 0–255 frame mean luma
//   spread  : 0–255 (P95 − P5); how wide the histogram is
Targets pick_targets(uint8_t y_mean, int spread) {
    Targets t{};
    if (y_mean < 30) {                        // night / very dark
        t = {60, 30,  0};                     // boost contrast, kill noise sharpening
    } else if (y_mean < 80) {                 // low light
        t = {55, 45, 20};
    } else if (y_mean < 180) {                // normal mid-tones
        t = {50, 60, 30};
    } else if (y_mean < 220) {                // bright
        t = {45, 65, 50};
    } else {                                  // overexposed / sunny
        t = {40, 50, 70};
    }
    // Hard-backlight or sun-with-shadows scene: very wide histogram.
    // Crank WDR up and back off contrast slightly so we don't crush
    // the highlights into clipping.
    if (spread > 180) {
        t.wdr_level = std::min(100, t.wdr_level + 30);
        t.contrast  = std::max(0,   t.contrast  - 5);
    }
    return t;
}

// Scale (target − 50) by the aggressiveness factor. With the camera's
// natural midpoint at 50, this makes aggressiveness=0 a small nudge and
// aggressiveness=2 push the same direction harder.
int clamp01(int x) { return std::min(100, std::max(0, x)); }

int scale_aggressiveness(int target, uint8_t aggr) {
    constexpr int CENTER = 50;
    int delta = target - CENTER;
    if (aggr == 0) delta /= 2;
    else if (aggr >= 2) delta = (delta * 3) / 2;
    return clamp01(CENTER + delta);
}

// Half-step EMA toward the target. With period_s=5, a stable scene
// transition settles within ~30 s — slow enough to not strobe the
// viewer, fast enough to follow real lighting changes.
int smooth_toward(int current, int target) {
    if (current < 0) return target;          // first iteration: jump
    return current + (target - current) / 2;
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

    const uint8_t p5     = histogram_percentile(stats.hist, 5);
    const uint8_t p95    = histogram_percentile(stats.hist, 95);
    const int     spread = static_cast<int>(p95) - static_cast<int>(p5);

    Targets raw = pick_targets(stats.y_mean, spread);
    Targets agg{
        scale_aggressiveness(raw.contrast,  cfg_.aggressiveness),
        scale_aggressiveness(raw.sharpness, cfg_.aggressiveness),
        scale_aggressiveness(raw.wdr_level, cfg_.aggressiveness),
    };

    const int contrast  = smooth_toward(last_contrast_,  agg.contrast);
    const int sharpness = smooth_toward(last_sharpness_, agg.sharpness);
    const int wdr       = smooth_toward(last_wdr_level_, agg.wdr_level);

    zlog_debug(log_, "auto-tune: y=%u p5=%u p95=%u spread=%d -> "
                     "contrast=%d sharpness=%d wdr_level=%d",
               stats.y_mean, p5, p95, spread, contrast, sharpness, wdr);

    apply_if_changed(RTS_VIDEO_CTRL_ID_CONTRAST,  contrast,  &last_contrast_,  log_);
    apply_if_changed(RTS_VIDEO_CTRL_ID_SHARPNESS, sharpness, &last_sharpness_, log_);
    apply_if_changed(RTS_VIDEO_CTRL_ID_WDR_LEVEL, wdr,       &last_wdr_level_, log_);
}
