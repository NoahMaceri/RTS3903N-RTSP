#ifndef DAY_NIGHT_CTRL_H
#define DAY_NIGHT_CTRL_H

#include <atomic>
#include <cstdint>
#include <pthread.h>
#include <string>

#include <rtsvideo.h>
#include <zlog.h>

#include "isp_utils.h"

// ADC_ZERO / ADC_RAW_BOOL mirror two of stock rmm's hw-variant modes
// (g_factory_data_ptr[3] = '4' / '5'); ADC_AUTO is our default.
enum class DayNightMode : uint8_t {
    SDK_STATIS,    // rts_av_get_isp_daynight_statis() returns 0/1
    ADC_ZERO,      // night iff ADC reads exactly 0
    ADC_RAW_BOOL,  // night iff raw ADC value > 0 (sensor-as-flag)
    ADC_AUTO       // ADC ± hyst + auto-learn polarity via SDK cross-check
};

DayNightMode parse_day_night_mode(const std::string &s);
const char *day_night_mode_name(DayNightMode m);

class day_night_ctrl {
public:
    day_night_ctrl(DayNightMode mode,
                   int32_t cutoff,
                   uint8_t ir_led_pwm_duty,
                   zlog_category_t *vid_c);
    ~day_night_ctrl();

    bool begin();
    void stop();

private:
    pthread_t thread{0};
    bool thread_created{false};
    std::atomic<bool> running{false};
    zlog_category_t *vid_c;

    DayNightMode mode;
    uint32_t cutoff;
    uint8_t  ir_led_pwm_duty;

    // Only ADC_AUTO mutates this (via SDK cross-check) and persists it to
    // POLARITY_STATE_FILE. Other modes keep the default.
    bool invert{false};

    double adc_ema{-1.0};       // -1 = uninitialised, seeded on first sample

    // Signed debounce: + builds toward night, − toward day, ±STABLE commits.
    static constexpr int8_t STABLE_NEEDED = 3;
    int8_t debounce{0};

    // ADC_AUTO polarity-flip threshold (~5 min at 2 s cadence).
    static constexpr uint16_t FLIP_THRESHOLD = 150;
    uint16_t polarity_disagree_count{0};

    // Last-sample diagnostics — printed on transitions for log-side tuning.
    uint32_t last_raw_adc{0};
    uint32_t last_ema_adc{0};
    int      last_sdk_raw{-1};

    uint16_t get_adc_value(uint8_t channel) const;
    uint32_t read_adc_mean(int32_t samples, int32_t delay_ms);

    bool sample_wants_night(uint8_t current_ir_mode);
    void check_light_level();
    void apply_transition(bool to_night);

    bool load_cached_polarity();
    void save_cached_polarity() const;

    static void *ir_ctrl_thread(void *arg);
};

#endif // DAY_NIGHT_CTRL_H
