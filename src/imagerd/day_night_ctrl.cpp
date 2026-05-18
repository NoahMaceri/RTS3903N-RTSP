#include "day_night_ctrl.h"

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <fcntl.h>
#include <unistd.h>

#include <rtsavapi.h>

#include "cpld.h"

// Tuneables. Lifted to file-scope constants so they're easy to find;
// the public mode/cutoff/duty knobs come from settings.json.
namespace {
constexpr double   EMA_ALPHA   = 0.75;   // 0..1, higher = faster response
constexpr uint32_t HYST_BAND   = 100;    // ± around adc_cutoff
constexpr int      WARMUP_SECS = 15;     // sensor-stabilise delay at boot
constexpr int      TICK_SECS   = 2;      // poll cadence

// State file colocated with settings.json (imagerd loads both from CWD).
// Single line, "normal\n" or "inverted\n", recording the polarity that
// ADC_AUTO has converged on so it survives reboots.
constexpr const char *POLARITY_STATE_FILE = "daynight_polarity.state";
} // namespace

DayNightMode parse_day_night_mode(const std::string &s) {
    if (s == "sdk_statis")     return DayNightMode::SDK_STATIS;
    if (s == "adc_single")     return DayNightMode::ADC_SINGLE;
    if (s == "adc_hysteresis") return DayNightMode::ADC_HYSTERESIS;
    if (s == "adc_zero")       return DayNightMode::ADC_ZERO;
    if (s == "adc_raw_bool")   return DayNightMode::ADC_RAW_BOOL;
    if (s == "adc_auto")       return DayNightMode::ADC_AUTO;
    return DayNightMode::ADC_AUTO;
}

const char *day_night_mode_name(DayNightMode m) {
    switch (m) {
        case DayNightMode::SDK_STATIS:     return "sdk_statis";
        case DayNightMode::ADC_SINGLE:     return "adc_single";
        case DayNightMode::ADC_HYSTERESIS: return "adc_hysteresis";
        case DayNightMode::ADC_ZERO:       return "adc_zero";
        case DayNightMode::ADC_RAW_BOOL:   return "adc_raw_bool";
        case DayNightMode::ADC_AUTO:       return "adc_auto";
    }
    return "unknown";
}

day_night_ctrl::day_night_ctrl(const DayNightMode mode,
                               const int32_t cutoff,
                               const int32_t cutoff_inverted,
                               const bool invert,
                               const uint8_t ir_led_pwm_duty,
                               zlog_category_t *vid_c)
    : vid_c(vid_c),
      mode(mode),
      cutoff(static_cast<uint32_t>(invert ? cutoff_inverted : cutoff)),
      ir_led_pwm_duty(ir_led_pwm_duty),
      invert(invert) {
    // ADC_AUTO: restore polarity learned on a previous boot so we
    // don't re-discover it every reboot. Only the polarity bit is
    // restored — the cutoff stays as-configured.
    if (mode == DayNightMode::ADC_AUTO) {
        load_cached_polarity();
    }

    zlog_info(vid_c, "IR control: mode=%s cutoff=%u invert=%u pwm_duty=%u",
              day_night_mode_name(mode), this->cutoff, this->invert, this->ir_led_pwm_duty);

    // Init to day mode (IR cut filter in, IR LED off).
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

    // Sensor / AE stabilisation. Interruptible so stop() doesn't have
    // to wait for the full delay.
    for (int i = 0; i < WARMUP_SECS && ctrl->running.load(); ++i) sleep(1);

    while (ctrl->running.load()) {
        ctrl->check_light_level();
        sleep(TICK_SECS);
    }
    zlog_info(ctrl->vid_c, "IR control thread exiting");
    return nullptr;
}

// One channel of /sys/class/hwmon/hwmon0/device/inN_input. Sysfs values
// don't update on an open fd, so we re-open per read.
uint16_t day_night_ctrl::get_adc_value(const uint8_t channel) const {
    char path[48];
    snprintf(path, sizeof(path), "/sys/class/hwmon/hwmon0/device/in%u_input", channel);
    const int fd = open(path, O_RDONLY);
    if (fd < 0) {
        zlog_error(vid_c, "Failed to open ADC channel %u", channel);
        return 0;
    }
    char buf[16];
    const ssize_t n = read(fd, buf, sizeof(buf) - 1);
    close(fd);
    if (n < 0) {
        zlog_error(vid_c, "Failed to read ADC channel %u", channel);
        return 0;
    }
    buf[n] = '\0';
    return static_cast<uint16_t>(strtol(buf, nullptr, 10));
}

// Mean across all 4 hwmon channels, averaged over `samples` rounds.
// Most boards only wire one of them to the actual photoresistor; the
// rest read ~0 and just dilute the mean. Cheap insurance vs. having
// to know which channel is "the real one" per board.
uint32_t day_night_ctrl::read_adc_mean(const int32_t samples, const int32_t delay_ms) {
    int64_t sums[4] = {0, 0, 0, 0};
    for (int i = 0; i < samples; ++i) {
        for (uint8_t ch = 0; ch < 4; ++ch) sums[ch] += get_adc_value(ch);
        usleep(delay_ms * 1000);
    }
    const int64_t mean = ((sums[0] + sums[1] + sums[2] + sums[3]) / samples) / 4;
    if (mean < 0)            return 0;
    if (mean > 0xFFFFFFFFLL) return 0xFFFFFFFFu;
    return static_cast<uint32_t>(mean);
}

bool day_night_ctrl::sample_wants_night(const uint8_t current_ir_mode) {
    // Reset diagnostics — branches set what's relevant; the rest stay
    // at sentinel so the transition logger can tell what to print.
    last_raw_adc = 0;
    last_ema_adc = 0;
    last_sdk_raw = -1;

    // Apply user-pinned polarity inversion on top of the raw "is dark"
    // verdict. The hysteresis case bakes invert in directly because it
    // also needs to know which threshold to compare against.
    auto with_invert = [this](bool wants_night) {
        return invert ? !wants_night : wants_night;
    };

    switch (mode) {
        case DayNightMode::SDK_STATIS: {
            // SDK returns 1 when its AE-histogram estimator says dark.
            const int sdk = rts_av_get_isp_daynight_statis();
            last_sdk_raw = sdk;
            return with_invert(sdk == 1);
        }
        case DayNightMode::ADC_ZERO: {
            last_raw_adc = read_adc_mean(/*samples=*/4, /*delay_ms=*/40);
            return with_invert(last_raw_adc == 0);
        }
        case DayNightMode::ADC_RAW_BOOL: {
            last_raw_adc = read_adc_mean(/*samples=*/4, /*delay_ms=*/40);
            return with_invert(last_raw_adc > 0);
        }
        case DayNightMode::ADC_SINGLE: {
            last_raw_adc = read_adc_mean(/*samples=*/8, /*delay_ms=*/75);
            if (adc_ema < 0.0) adc_ema = last_raw_adc;
            adc_ema = EMA_ALPHA * last_raw_adc + (1.0 - EMA_ALPHA) * adc_ema;
            last_ema_adc = static_cast<uint32_t>(lround(adc_ema));
            // Single-edge: no hyst band, just one cutoff.
            return invert ? (last_ema_adc > cutoff) : (last_ema_adc < cutoff);
        }
        case DayNightMode::ADC_HYSTERESIS:
        case DayNightMode::ADC_AUTO: {
            last_raw_adc = read_adc_mean(/*samples=*/8, /*delay_ms=*/75);
            if (adc_ema < 0.0) adc_ema = last_raw_adc;
            adc_ema = EMA_ALPHA * last_raw_adc + (1.0 - EMA_ALPHA) * adc_ema;
            last_ema_adc = static_cast<uint32_t>(lround(adc_ema));

            // Two-edge hysteresis. In non-inverted polarity "dark"
            // means below the lower bound; in inverted it means above
            // the upper bound. We treat readings inside the band as
            // "no opinion" by returning the *current* state, which the
            // debounce counters quietly absorb.
            const uint32_t low  = (cutoff > HYST_BAND) ? (cutoff - HYST_BAND) : 0;
            const uint32_t high = cutoff + HYST_BAND;

            const bool is_dark  = invert ? (last_ema_adc > high) : (last_ema_adc < low);
            const bool is_light = invert ? (last_ema_adc < low)  : (last_ema_adc > high);

            if (current_ir_mode == RTS_ISP_IR_NIGHT) return !is_light;
            if (current_ir_mode == RTS_ISP_IR_DAY)   return  is_dark;
            return (current_ir_mode == RTS_ISP_IR_NIGHT);
        }
    }
    return false;  // unreachable; switch is exhaustive
}

// Single INFO-level transition record. Combines the "why" (mode-aware
// diagnostics) and the "what" (resulting IR-cut + LED state) into one
// line so users grepping the log see the full story at once.
void day_night_ctrl::apply_transition(const bool to_night) {
    char diag[160] = {};
    const char *target = to_night ? "night" : "day";

    switch (mode) {
        case DayNightMode::SDK_STATIS:
            snprintf(diag, sizeof(diag), "sdk_statis=%d invert=%u",
                     last_sdk_raw, invert);
            break;
        case DayNightMode::ADC_ZERO:
            snprintf(diag, sizeof(diag), "adc=%u (zero=night) invert=%u",
                     last_raw_adc, invert);
            break;
        case DayNightMode::ADC_RAW_BOOL:
            snprintf(diag, sizeof(diag), "adc=%u (>0=night) invert=%u",
                     last_raw_adc, invert);
            break;
        case DayNightMode::ADC_SINGLE:
            snprintf(diag, sizeof(diag), "adc_raw=%u adc_ema=%u cutoff=%u invert=%u",
                     last_raw_adc, last_ema_adc, cutoff, invert);
            break;
        case DayNightMode::ADC_HYSTERESIS:
        case DayNightMode::ADC_AUTO: {
            const uint32_t low  = (cutoff > HYST_BAND) ? (cutoff - HYST_BAND) : 0;
            const uint32_t high = cutoff + HYST_BAND;
            const char *sdk_str = (mode == DayNightMode::ADC_AUTO)
                ? (last_sdk_raw == 0 ? " sdk=day"
                 : last_sdk_raw == 1 ? " sdk=night"
                 :                     " sdk=n/a")
                : "";
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

    bool cached;
    if      (strncmp(buf, "inverted", 8) == 0) cached = true;
    else if (strncmp(buf, "normal",   6) == 0) cached = false;
    else return false;

    if (cached != invert) {
        zlog_info(vid_c, "IR control: cached polarity (%s) overrides config (%s)",
                  cached ? "inverted" : "normal",
                  invert ? "inverted" : "normal");
    }
    invert = cached;
    return true;
}

void day_night_ctrl::save_cached_polarity() const {
    FILE *f = fopen(POLARITY_STATE_FILE, "w");
    if (f == nullptr) {
        zlog_warn(vid_c, "Failed to write %s; polarity will re-learn next boot",
                  POLARITY_STATE_FILE);
        return;
    }
    fprintf(f, "%s\n", invert ? "inverted" : "normal");
    fclose(f);
    zlog_info(vid_c, "Polarity cached to %s", POLARITY_STATE_FILE);
}

void day_night_ctrl::check_light_level() {
    const uint8_t current_ir_mode = get_isp_setting(RTS_VIDEO_CTRL_ID_IR_MODE, vid_c);

    bool wants_night = sample_wants_night(current_ir_mode);

    // ADC_AUTO: cross-check our ADC verdict against the SDK's image-
    // histogram estimator. Sustained disagreement means our polarity
    // is wrong — flip it, persist, and re-evaluate this tick.
    //
    // Caveats:
    //   - SDK estimator needs AE to have converged; the WARMUP_SECS
    //     delay in ir_ctrl_thread() handles startup. Runtime AE re-
    //     convergence after a big scene change can briefly disagree
    //     and reset our counter, which is fine.
    //   - In environments where the SDK is *consistently* wrong (e.g.
    //     a camera that only ever sees a dark IR-illuminated scene),
    //     this can mis-flip. The 5-min hold-off makes it unlikely;
    //     if it bites you, set detection_mode to `adc_hysteresis` and
    //     pin polarity manually.
    if (mode == DayNightMode::ADC_AUTO) {
        const int sdk_raw = rts_av_get_isp_daynight_statis();
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
                // Re-sample so this tick reflects the corrected
                // polarity. Costs an extra ADC read (~600 ms) but
                // only happens on the rare flip event, so the impact
                // is negligible.
                wants_night = sample_wants_night(current_ir_mode);
            }
        }
    }

    if (wants_night) {
        ++want_night_count;
        want_day_count = 0;
    } else {
        ++want_day_count;
        want_night_count = 0;
    }

    if (want_day_count >= STABLE_NEEDED && current_ir_mode != RTS_ISP_IR_DAY) {
        apply_transition(/*to_night=*/false);
        want_day_count = want_night_count = 0;
    } else if (want_night_count >= STABLE_NEEDED && current_ir_mode != RTS_ISP_IR_NIGHT) {
        apply_transition(/*to_night=*/true);
        want_day_count = want_night_count = 0;
    }
}
