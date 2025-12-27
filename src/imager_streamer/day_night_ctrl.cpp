#include "day_night_ctrl.h"

#include "cpld.h"

day_night_ctrl::day_night_ctrl(const int32_t cutoff, const int32_t cutoff_inverted, const bool inverted, zlog_category_t* vid_c) : vid_c(vid_c) {
    st = ir_ctrl_state();
    st.stable_needed = 3;
    st.ema_alpha = 0.75;   // 0..1 higher = faster response
    st.adc_ema = -1.0;
    st.want_day_count = 0;
    st.want_night_count = 0;
    st.vid_c = vid_c;

    if (inverted) {
        st.invert = true;
        st.cutoff = cutoff_inverted;
    } else {
        st.invert = false;
        st.cutoff = cutoff;
    }
    // init to day mode
    ir_cut(false);
    change_isp_setting(RTS_VIDEO_CTRL_ID_GRAY_MODE, 0, vid_c);
    change_isp_setting(RTS_VIDEO_CTRL_ID_IR_MODE, RTS_ISP_IR_DAY, vid_c);

    thread = 0;
}

day_night_ctrl::~day_night_ctrl() {
    stop();
}

bool day_night_ctrl::begin() {
    const int ret = pthread_create(&thread, nullptr, ir_ctrl_thread, this);
    if (ret != 0) return false;
    return true;
}

void day_night_ctrl::stop() {
    if (thread == 0 || st.running == false) return;
    st.running = false;
    pthread_join(thread, nullptr);
}

void* day_night_ctrl::ir_ctrl_thread(void* arg) {
    auto* ctrl = static_cast<day_night_ctrl*>(arg);
    zlog_info(ctrl->st.vid_c, "Starting IR control thread");
    sleep(15);

    ctrl->st.running = true;

    while (ctrl->st.running) {
        ctrl->check_light_level(ctrl->st);
        sleep(2); // check every 2s; tuning happens via EMA + stable_needed
    }
    zlog_info(ctrl->st.vid_c, "IR control thread exiting");
    return nullptr;
}

// RTS agnostic approach
// you can also use rts_io_adc_get_value, but it seems broken in C++
uint16_t day_night_ctrl::get_adc_value(const uint8_t channel) const {
    char buffer[16];
    char path[41];
    snprintf(path, sizeof(path), "/sys/class/hwmon/hwmon0/device/in%d_input", channel);
    const int fd = open(path, O_RDONLY);
    if (fd < 0) {
        zlog_error(vid_c, "Failed to open ADC channel %d", channel);
        return 0;
    }
    const ssize_t len = read(fd, buffer, sizeof(buffer) - 1);
    if (len < 0) {
        zlog_error(vid_c, "Failed to read ADC channel %d", channel);
        close(fd);
        return 0;
    }
    buffer[len] = '\0';
    close(fd);
    return static_cast<uint16_t>(strtol(buffer, nullptr, 10));
}

uint32_t day_night_ctrl::read_adc_mean(const int32_t samples, const int32_t delay) {
    int64_t s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    for (int i = 0; i < samples; ++i) {
        s0 += get_adc_value(0);
        s1 += get_adc_value(1);
        s2 += get_adc_value(2);
        s3 += get_adc_value(3);
        usleep(delay * 1000);
    }
    int64_t mean0 = s0 / samples;
    int64_t mean1 = s1 / samples;
    int64_t mean2 = s2 / samples;
    int64_t mean3 = s3 / samples;
    int64_t tot = (mean0 + mean1 + mean2 + mean3) / 4;
    if (tot < 0) tot = 0;
    if (tot > 0xFFFFFFFFLL) tot = 0xFFFFFFFFLL;
    return static_cast<uint32_t>(tot);
}

void day_night_ctrl::check_light_level(ir_ctrl_state &st_thread) {
    current_ir_mode = get_isp_setting(RTS_VIDEO_CTRL_ID_IR_MODE, vid_c);
    // faster sampling: e.g. 8 samples * 75ms = 600ms
    const uint32_t adc = read_adc_mean(/*samples=*/8, /*delay=*/75);

    // EMA smoothing across cycles
    if (st.adc_ema < 0.0) st.adc_ema = static_cast<double>(adc);
    st.adc_ema = st.ema_alpha * static_cast<double>(adc) + (1.0 - st.ema_alpha) * st.adc_ema;

    const auto adc_s = static_cast<uint32_t>(lround(st.adc_ema + 0.5));

    // Hysteresis band
    constexpr uint32_t hyst = 100;

    // Build enter thresholds with hysteresis:
    // - When currently DAY, require "darker than (cutoff - hyst)" to go NIGHT
    // - When currently NIGHT, require "brighter than (cutoff + hyst)" to go DAY
    // (Invert flips the sense.)

    bool want_night = false;
    bool want_day = false;

    if (!st.invert) {
        if (current_ir_mode == RTS_ISP_IR_DAY) want_night = adc_s < static_cast<uint32_t>(std::max<int32_t>(0, st.cutoff - static_cast<int32_t>(hyst)));
        if (current_ir_mode == RTS_ISP_IR_NIGHT) want_day = adc_s > static_cast<uint32_t>(st.cutoff + static_cast<int32_t>(hyst));
    } else {
        if (current_ir_mode == RTS_ISP_IR_DAY) want_night = adc_s > static_cast<uint32_t>(st.cutoff + static_cast<int32_t>(hyst));
        if (current_ir_mode == RTS_ISP_IR_NIGHT) want_day = adc_s < static_cast<uint32_t>(std::max<int32_t>(0, st.cutoff - static_cast<int32_t>(hyst)));
    }

    // Stable-count debounce
    if (want_day) {
        st.want_day_count++;
        st.want_night_count = 0;
    } else if (want_night) {
        st.want_night_count++;
        st.want_day_count = 0;
    } else {
        st.want_day_count = 0;
        st.want_night_count = 0;
    }

    // Switch only after N consecutive confirmations
    if (st.want_day_count >= st.stable_needed && current_ir_mode != RTS_ISP_IR_DAY) {
        zlog_debug(vid_c, "IR control: adc_raw=%u adc_ema=%u cutoff=%d hyst=%u invert=%u", adc, adc_s, st.cutoff, hyst, st.invert);
        zlog_info(vid_c, "Switching to day mode");
        change_isp_setting(RTS_VIDEO_CTRL_ID_GRAY_MODE, 0, vid_c);
        change_isp_setting(RTS_VIDEO_CTRL_ID_IR_MODE, RTS_ISP_IR_DAY, vid_c);
        ir_cut(false);
        st.want_day_count = st.want_night_count = 0;
    } else if (st.want_night_count >= st.stable_needed && current_ir_mode != RTS_ISP_IR_NIGHT) {
        zlog_debug(vid_c, "IR control: adc_raw=%u adc_ema=%u cutoff=%d hyst=%u invert=%u", adc, adc_s, st.cutoff, hyst, st.invert);
        zlog_info(vid_c, "Switching to night mode");
        change_isp_setting(RTS_VIDEO_CTRL_ID_GRAY_MODE, 1, vid_c);
        change_isp_setting(RTS_VIDEO_CTRL_ID_IR_MODE, RTS_ISP_IR_NIGHT, vid_c);
        ir_cut(true);
        st.want_day_count = st.want_night_count = 0;
    }
}