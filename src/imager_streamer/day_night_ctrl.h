#ifndef DAY_NIGHT_CTRL_H
#define DAY_NIGHT_CTRL_H

#include <cstdint>
#include <cstdio>
#include <fcntl.h>
#include <unistd.h>
#include <algorithm>
#include <cmath>
#include <pthread.h>
#include <atomic>

#include <rtsvideo.h>

#include <zlog.h>

#include "isp_utils.h"

class day_night_ctrl {
public:
    day_night_ctrl(int32_t cutoff, int32_t cutoff_inverted, bool inverted, zlog_category_t* vid_c);
    ~day_night_ctrl();

    bool begin();
    void stop();

private:
    pthread_t thread;
    zlog_category_t* vid_c;
    uint8_t current_ir_mode = RTS_ISP_IR_DAY; // initial state
    std::atomic<bool> running{false};  // Thread-safe running flag

    struct ir_ctrl_state {
        double ema_alpha;
        uint8_t stable_needed;
        uint8_t want_day_count;
        uint8_t want_night_count;
        double adc_ema;
        uint32_t cutoff;
        bool invert;
        zlog_category_t* vid_c;
    } st{};

    uint16_t get_adc_value(uint8_t channel) const;
    uint32_t read_adc_mean(int32_t samples, int32_t delay);
    void check_light_level(ir_ctrl_state &st_thread);

    static void* ir_ctrl_thread(void* arg);

};



#endif // DAY_NIGHT_CTRL_H

