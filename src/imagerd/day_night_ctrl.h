#ifndef DAY_NIGHT_CTRL_H
#define DAY_NIGHT_CTRL_H

#include <atomic>
#include <cstdint>
#include <pthread.h>
#include <string>

#include <rtsvideo.h>
#include <zlog.h>

#include "isp_utils.h"

// Detection method — first five mirror the hardware-variant modes in
// stock rmm (selected by g_factory_data_ptr[3]); ADC_AUTO is our own
// addition that learns polarity at runtime by cross-checking against
// the SDK's daynight estimator.
enum class DayNightMode : uint8_t {
    SDK_STATIS     = 1,  // rts_av_get_isp_daynight_statis() returns 0/1
    ADC_SINGLE     = 2,  // one ADC threshold, debounce-only (no hyst band)
    ADC_HYSTERESIS = 3,  // ADC ± hyst around cutoff
    ADC_ZERO       = 4,  // night iff ADC reads exactly 0
    ADC_RAW_BOOL   = 5,  // night iff raw ADC value > 0 (sensor-as-flag)
    ADC_AUTO       = 6   // ADC_HYSTERESIS + auto-flip polarity using SDK as ground truth (default)
};

DayNightMode parse_day_night_mode(const std::string &s);
const char *day_night_mode_name(DayNightMode m);

class day_night_ctrl {
public:
    day_night_ctrl(DayNightMode mode,
                   int32_t cutoff,
                   int32_t cutoff_inverted,
                   bool invert,
                   uint8_t ir_led_pwm_duty,
                   zlog_category_t *vid_c);
    ~day_night_ctrl();

    bool begin();
    void stop();

private:
    // Thread / lifecycle plumbing.
    pthread_t thread{0};
    bool thread_created{false};
    std::atomic<bool> running{false};
    zlog_category_t *vid_c;

    // Runtime tuning constants — fixed once at construction.
    DayNightMode mode;
    uint32_t cutoff;
    uint8_t  ir_led_pwm_duty;
    bool     invert;            // mutated by ADC_AUTO polarity-flip

    // Per-cycle ADC smoothing state.
    double adc_ema{-1.0};       // -1 = uninitialised, seeded on first sample

    // Debounce — only commit a transition after this many consecutive
    // agreeing samples. Smooths over single-sample glitches.
    static constexpr uint8_t STABLE_NEEDED = 3;
    uint8_t want_day_count{0};
    uint8_t want_night_count{0};

    // ADC_AUTO: how many consecutive cycles ADC and SDK have disagreed.
    // When this hits FLIP_THRESHOLD we flip `invert` and persist.
    static constexpr uint16_t FLIP_THRESHOLD = 150;  // ≈ 5 min at 2 s cadence
    uint16_t polarity_disagree_count{0};

    // Last-sample diagnostics — populated each cycle, printed on
    // transitions so a user reading the log can see what value
    // triggered the switch and adjust `adc_cutoff` if needed.
    uint32_t last_raw_adc{0};       // 0 if mode is sdk_statis
    uint32_t last_ema_adc{0};       // 0 if mode skips EMA
    int      last_sdk_raw{-1};      // -1 if SDK wasn't consulted this cycle

    // ADC plumbing.
    uint16_t get_adc_value(uint8_t channel) const;
    uint32_t read_adc_mean(int32_t samples, int32_t delay_ms);

    // Decision pipeline.
    bool sample_wants_night(uint8_t current_ir_mode);
    void check_light_level();
    void apply_transition(bool to_night);

    // ADC_AUTO bits — load/store the learned polarity to disk so we
    // don't have to relearn on every boot.
    bool load_cached_polarity();
    void save_cached_polarity() const;

    static void *ir_ctrl_thread(void *arg);
};

#endif // DAY_NIGHT_CTRL_H
