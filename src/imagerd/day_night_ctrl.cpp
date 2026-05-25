#include "day_night_ctrl.h"

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <fcntl.h>
#include <unistd.h>

#include <rtsavapi.h>

#include "cpld.h"

namespace {
constexpr double   EMA_ALPHA   = 0.75;
constexpr uint32_t HYST_BAND   = 100;
constexpr int      WARMUP_SECS = 15;
constexpr int      TICK_SECS   = 2;

// Both files live next to settings.json (loaded from CWD).
constexpr const char *POLARITY_STATE_FILE   = "daynight_polarity.state";
constexpr const char *IR_CUT_OVERRIDE_FILE  = "ir_cut_override.state";

enum class IrCutOverride { AUTO, DAY, NIGHT };

static IrCutOverride read_ir_cut_override() {
    FILE *f = fopen(IR_CUT_OVERRIDE_FILE, "r");
    if (f == nullptr) return IrCutOverride::AUTO;
    char buf[16] = {};
    const size_t n = fread(buf, 1, sizeof(buf) - 1, f);
    fclose(f);
    if (n == 0) return IrCutOverride::AUTO;
    if (strncmp(buf, "day",   3) == 0) return IrCutOverride::DAY;
    if (strncmp(buf, "night", 5) == 0) return IrCutOverride::NIGHT;
    return IrCutOverride::AUTO;
}
} // namespace

DayNightMode parse_day_night_mode(const std::string &s) {
    if (s == "sdk_statis")   return DayNightMode::SDK_STATIS;
    if (s == "adc_zero")     return DayNightMode::ADC_ZERO;
    if (s == "adc_raw_bool") return DayNightMode::ADC_RAW_BOOL;
    // Unknown / dropped modes fall back to the smart default.
    return DayNightMode::ADC_AUTO;
}

const char *day_night_mode_name(DayNightMode m) {
    switch (m) {
        case DayNightMode::SDK_STATIS:   return "sdk_statis";
        case DayNightMode::ADC_ZERO:     return "adc_zero";
        case DayNightMode::ADC_RAW_BOOL: return "adc_raw_bool";
        case DayNightMode::ADC_AUTO:     return "adc_auto";
    }
    return "unknown";
}

day_night_ctrl::day_night_ctrl(const DayNightMode mode,
                               const int32_t cutoff,
                               const uint8_t ir_led_pwm_duty,
                               zlog_category_t *vid_c)
    : vid_c(vid_c),
      mode(mode),
      cutoff(static_cast<uint32_t>(cutoff < 0 ? 0 : cutoff)),
      ir_led_pwm_duty(ir_led_pwm_duty) {
    if (mode == DayNightMode::ADC_AUTO) {
        load_cached_polarity();
    }

    zlog_info(vid_c, "IR control: mode=%s cutoff=%u pwm_duty=%u%s",
              day_night_mode_name(mode), this->cutoff, this->ir_led_pwm_duty,
              (mode == DayNightMode::ADC_AUTO && invert) ? " (learned: inverted)" : "");

    // One-shot ADC channel probe — most boards wire only one of four.
    // Logging here (rather than per-read) keeps the runtime quiet.
    for (uint8_t ch = 0; ch < 4; ++ch) {
        char path[48];
        snprintf(path, sizeof(path), "/sys/class/hwmon/hwmon0/device/in%u_input", ch);
        const int fd = open(path, O_RDONLY);
        if (fd >= 0) {
            close(fd);
            zlog_info(vid_c, "ADC channel %u available", ch);
        } else {
            zlog_info(vid_c, "ADC channel %u unavailable (will read as 0)", ch);
        }
    }

    apply_transition(/*to_night=*/false);
}

day_night_ctrl::~day_night_ctrl() {
    stop();
}

bool day_night_ctrl::begin() {
    running.store(true);
    if (pthread_create(&thread, nullptr, ir_ctrl_thread, this) != 0) {
        running.store(false);
        return false;
    }
    thread_created = true;
    return true;
}

void day_night_ctrl::stop() {
    if (!thread_created) return;
    running.store(false);
    pthread_join(thread, nullptr);
    thread_created = false;
}

void *day_night_ctrl::ir_ctrl_thread(void *arg) {
    auto *ctrl = static_cast<day_night_ctrl *>(arg);
    zlog_info(ctrl->vid_c, "Starting IR control thread");

    // Interruptible warmup: stop() doesn't have to wait the full delay.
    for (int i = 0; i < WARMUP_SECS && ctrl->running.load(); ++i) sleep(1);

    while (ctrl->running.load()) {
        ctrl->check_light_level();
        sleep(TICK_SECS);
    }
    zlog_info(ctrl->vid_c, "IR control thread exiting");
    return nullptr;
}

// Sysfs values don't update on an open fd, so we re-open per read.
// Silent on failure — unwired channels are expected (see read_adc_mean).
// Operators get a one-shot per-channel summary from the constructor probe.
uint16_t day_night_ctrl::get_adc_value(const uint8_t channel) const {
    char path[48];
    snprintf(path, sizeof(path), "/sys/class/hwmon/hwmon0/device/in%u_input", channel);
    const int fd = open(path, O_RDONLY);
    if (fd < 0) return 0;
    char buf[16];
    const ssize_t n = read(fd, buf, sizeof(buf) - 1);
    close(fd);
    if (n < 0) return 0;
    buf[n] = '\0';
    return static_cast<uint16_t>(strtol(buf, nullptr, 10));
}

// Most boards wire only one of the 4 hwmon channels; unwired channels
// read ~0 and just dilute the mean. Cheaper than per-board channel maps.
uint32_t day_night_ctrl::read_adc_mean(const int32_t samples, const int32_t delay_ms) {
    int64_t sum = 0;
    for (int i = 0; i < samples; ++i) {
        for (uint8_t ch = 0; ch < 4; ++ch) sum += get_adc_value(ch);
        usleep(delay_ms * 1000);
    }
    const int64_t mean = sum / (samples * 4);
    if (mean < 0)            return 0;
    if (mean > 0xFFFFFFFFLL) return 0xFFFFFFFFu;
    return static_cast<uint32_t>(mean);
}

bool day_night_ctrl::sample_wants_night(const uint8_t current_ir_mode) {
    last_raw_adc = 0;
    last_ema_adc = 0;
    last_sdk_raw = -1;

    switch (mode) {
        case DayNightMode::SDK_STATIS:
            last_sdk_raw = rts_av_get_isp_daynight_statis();
            return last_sdk_raw == 1;

        case DayNightMode::ADC_ZERO:
            last_raw_adc = read_adc_mean(/*samples=*/4, /*delay_ms=*/40);
            return last_raw_adc == 0;

        case DayNightMode::ADC_RAW_BOOL:
            last_raw_adc = read_adc_mean(/*samples=*/4, /*delay_ms=*/40);
            return last_raw_adc > 0;

        case DayNightMode::ADC_AUTO: {
            last_raw_adc = read_adc_mean(/*samples=*/8, /*delay_ms=*/75);
            if (adc_ema < 0.0) adc_ema = last_raw_adc;
            adc_ema = EMA_ALPHA * last_raw_adc + (1.0 - EMA_ALPHA) * adc_ema;
            last_ema_adc = static_cast<uint32_t>(lround(adc_ema));

            // In-band readings hold the current state — debounce absorbs noise.
            const uint32_t low  = (cutoff > HYST_BAND) ? (cutoff - HYST_BAND) : 0u;
            const uint32_t high = cutoff + HYST_BAND;
            const bool is_dark  = invert ? (last_ema_adc > high) : (last_ema_adc < low);
            const bool is_light = invert ? (last_ema_adc < low)  : (last_ema_adc > high);

            if (current_ir_mode == RTS_ISP_IR_NIGHT) return !is_light;
            if (current_ir_mode == RTS_ISP_IR_DAY)   return  is_dark;
            return false;  // unknown state (e.g. WHITE_LIGHT) → prefer day
        }
    }
    return false;  // unreachable; switch is exhaustive
}

void day_night_ctrl::apply_transition(const bool to_night) {
    char diag[160] = {};

    switch (mode) {
        case DayNightMode::SDK_STATIS:
            snprintf(diag, sizeof(diag), "sdk_statis=%d", last_sdk_raw);
            break;
        case DayNightMode::ADC_ZERO:
            snprintf(diag, sizeof(diag), "adc=%u (zero=night)", last_raw_adc);
            break;
        case DayNightMode::ADC_RAW_BOOL:
            snprintf(diag, sizeof(diag), "adc=%u (>0=night)", last_raw_adc);
            break;
        case DayNightMode::ADC_AUTO: {
            const uint32_t low  = (cutoff > HYST_BAND) ? (cutoff - HYST_BAND) : 0u;
            const uint32_t high = cutoff + HYST_BAND;
            const char *sdk_str = last_sdk_raw == 0 ? " sdk=day"
                                : last_sdk_raw == 1 ? " sdk=night"
                                :                     " sdk=n/a";
            snprintf(diag, sizeof(diag),
                     "adc_raw=%u adc_ema=%u cutoff=%u band=[%u,%u] invert=%u%s",
                     last_raw_adc, last_ema_adc, cutoff, low, high, invert, sdk_str);
            break;
        }
    }

    if (to_night) {
        zlog_info(vid_c, "→ night mode  [%s]  (IR cut out, IR LED duty=%u)",
                  diag, ir_led_pwm_duty);
    } else {
        zlog_info(vid_c, "→ day mode    [%s]  (IR cut in,  IR LED off)", diag);
    }

    change_isp_setting(RTS_VIDEO_CTRL_ID_GRAY_MODE, to_night ? 1 : 0, vid_c);
    change_isp_setting(RTS_VIDEO_CTRL_ID_IR_MODE,
                       to_night ? RTS_ISP_IR_NIGHT : RTS_ISP_IR_DAY, vid_c);
    set_ir_cut(to_night);
    set_ir_led_duty(to_night ? ir_led_pwm_duty : 0);
}

bool day_night_ctrl::load_cached_polarity() {
    FILE *f = fopen(POLARITY_STATE_FILE, "r");
    if (f == nullptr) return false;
    char buf[16] = {};
    const size_t n = fread(buf, 1, sizeof(buf) - 1, f);
    fclose(f);
    if (n == 0) return false;

    if      (strncmp(buf, "inverted", 8) == 0) invert = true;
    else if (strncmp(buf, "normal",   6) == 0) invert = false;
    else return false;

    zlog_info(vid_c, "Restored learned polarity: %s",
              invert ? "inverted" : "normal");
    return true;
}

void day_night_ctrl::save_cached_polarity() const {
    // write-tmp + rename so a reader can't see a half-written file.
    char tmp[64];
    snprintf(tmp, sizeof(tmp), "%s.tmp", POLARITY_STATE_FILE);

    FILE *f = fopen(tmp, "w");
    if (f == nullptr) {
        zlog_warn(vid_c, "Failed to write %s; polarity will re-learn next boot",
                  POLARITY_STATE_FILE);
        return;
    }
    fprintf(f, "%s\n", invert ? "inverted" : "normal");
    if (fclose(f) != 0 || rename(tmp, POLARITY_STATE_FILE) != 0) {
        zlog_warn(vid_c, "Failed to persist %s; polarity will re-learn next boot",
                  POLARITY_STATE_FILE);
        unlink(tmp);
        return;
    }
    zlog_info(vid_c, "Polarity cached to %s", POLARITY_STATE_FILE);
}

void day_night_ctrl::check_light_level() {
    int32_t ir_mode_raw = 0;
    if (!get_isp_setting(RTS_VIDEO_CTRL_ID_IR_MODE, ir_mode_raw, vid_c)) {
        // ISP read failed; skip this tick rather than acting on garbage —
        // a 0xFF would otherwise make the override branch fire every tick.
        return;
    }
    const uint8_t current_ir_mode = static_cast<uint8_t>(ir_mode_raw);

    const IrCutOverride ov = read_ir_cut_override();
    if (ov != IrCutOverride::AUTO) {
        const bool to_night = (ov == IrCutOverride::NIGHT);
        const uint8_t want = to_night ? RTS_ISP_IR_NIGHT : RTS_ISP_IR_DAY;
        if (current_ir_mode != want) apply_transition(to_night);
        debounce = 0;
        return;
    }

    bool wants_night = sample_wants_night(current_ir_mode);

    // ADC_AUTO: sustained SDK disagreement (FLIP_THRESHOLD ticks) means
    // polarity is wrong — flip, persist, re-sample. Mis-flips if the SDK
    // is consistently wrong (rare); delete daynight_polarity.state to reset.
    if (mode == DayNightMode::ADC_AUTO) {
        const int sdk_raw = rts_av_get_isp_daynight_statis();
        last_sdk_raw = sdk_raw;
        if (sdk_raw == 0 || sdk_raw == 1) {
            const bool wants_night_sdk = (sdk_raw == 1);
            if (wants_night == wants_night_sdk) {
                polarity_disagree_count = 0;
            } else if (++polarity_disagree_count >= FLIP_THRESHOLD) {
                invert = !invert;
                polarity_disagree_count = 0;
                zlog_warn(vid_c,
                          "ADC polarity auto-flipped to %s "
                          "(SDK disagreed for %u consecutive samples)",
                          invert ? "inverted" : "normal",
                          static_cast<unsigned>(FLIP_THRESHOLD));
                save_cached_polarity();
                wants_night = sample_wants_night(current_ir_mode);
            }
        }
    }

    if (wants_night) {
        if (debounce < STABLE_NEEDED)  ++debounce;
    } else {
        if (debounce > -STABLE_NEEDED) --debounce;
    }

    if (debounce ==  STABLE_NEEDED && current_ir_mode != RTS_ISP_IR_NIGHT) {
        apply_transition(/*to_night=*/true);
        debounce = 0;
    } else if (debounce == -STABLE_NEEDED && current_ir_mode != RTS_ISP_IR_DAY) {
        apply_transition(/*to_night=*/false);
        debounce = 0;
    }
}
