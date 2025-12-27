#ifndef ISP_UTILS_H
#define ISP_UTILS_H

#include <cstdint>
#include <map>

static const std::map<std::string, enum enum_rts_video_ctrl_id> param_setting_map = {
    {"noise_reduction", RTS_VIDEO_CTRL_ID_NOISE_REDUCTION},
    {"ldc", RTS_VIDEO_CTRL_ID_LDC},
    {"detail_enhancement", RTS_VIDEO_CTRL_ID_DETAIL_ENHANCEMENT},
    {"three_dnr", RTS_VIDEO_CTRL_ID_3DNR},
    {"3dnr", RTS_VIDEO_CTRL_ID_3DNR},
    {"mirror", RTS_VIDEO_CTRL_ID_MIRROR},
    {"flip", RTS_VIDEO_CTRL_ID_FLIP},
    {"in_out_door_mode", RTS_VIDEO_CTRL_ID_IN_OUT_DOOR_MODE},
    {"dehaze", RTS_VIDEO_CTRL_ID_DEHAZE},
    {"brightness", RTS_VIDEO_CTRL_ID_BRIGHTNESS},
    {"contrast", RTS_VIDEO_CTRL_ID_CONTRAST},
    {"hue", RTS_VIDEO_CTRL_ID_HUE},
    {"saturation", RTS_VIDEO_CTRL_ID_SATURATION},
    {"sharpness", RTS_VIDEO_CTRL_ID_SHARPNESS},
    {"gamma", RTS_VIDEO_CTRL_ID_GAMMA},
    {"backlight_compensation", RTS_VIDEO_CTRL_ID_BLC},
    {"blc", RTS_VIDEO_CTRL_ID_BLC},
    {"power_line_frequency", RTS_VIDEO_CTRL_ID_PWR_FREQUENCY},
    {"pwr_frequency", RTS_VIDEO_CTRL_ID_PWR_FREQUENCY},
    {"exposure_auto", RTS_VIDEO_CTRL_ID_EXPOSURE_MODE},
    {"exposure_mode", RTS_VIDEO_CTRL_ID_EXPOSURE_MODE},
    {"exposure_auto_priority", RTS_VIDEO_CTRL_ID_EXPOSURE_PRIORITY},
    {"exposure_priority", RTS_VIDEO_CTRL_ID_EXPOSURE_PRIORITY},
    {"exposure_time", RTS_VIDEO_CTRL_ID_EXPOSURE_TIME},
    {"exposure_absolute", RTS_VIDEO_CTRL_ID_EXPOSURE_TIME},
    {"ae_gain", RTS_VIDEO_CTRL_ID_AE_GAIN},
    {"AE Gain", RTS_VIDEO_CTRL_ID_AE_GAIN},
    {"zoom_absolute", RTS_VIDEO_CTRL_ID_ZOOM},
    {"zoom", RTS_VIDEO_CTRL_ID_ZOOM},
    {"pan_absolute", RTS_VIDEO_CTRL_ID_PAN},
    {"pan", RTS_VIDEO_CTRL_ID_PAN},
    {"tilt_absolute", RTS_VIDEO_CTRL_ID_TILT},
    {"tilt", RTS_VIDEO_CTRL_ID_TILT},
    {"roll_absolute", RTS_VIDEO_CTRL_ID_ROLL},
    {"roll", RTS_VIDEO_CTRL_ID_ROLL},
    {"wdr_mode", RTS_VIDEO_CTRL_ID_WDR_MODE},
    {"wdr", RTS_VIDEO_CTRL_ID_WDR_MODE},
    {"wdr_level", RTS_VIDEO_CTRL_ID_WDR_LEVEL},
    {"wb_green", RTS_VIDEO_CTRL_ID_GREEN_BALANCE},
    {"wb_red", RTS_VIDEO_CTRL_ID_RED_BALANCE},
    {"wb_blue", RTS_VIDEO_CTRL_ID_BLUE_BALANCE},
    {"awb_mode", RTS_VIDEO_CTRL_ID_AWB_CTRL},
    {"awb", RTS_VIDEO_CTRL_ID_AWB_CTRL},
    {"ir_mode", RTS_VIDEO_CTRL_ID_IR_MODE},
    {"gray_mode", RTS_VIDEO_CTRL_ID_GRAY_MODE}
};

static bool change_isp_setting(const enum enum_rts_video_ctrl_id type, int32_t value, zlog_category_t *logger) {
    rts_video_control ctrl{};
    int ret = rts_av_get_isp_ctrl(type, &ctrl);
    if (ret) {
        zlog_error(logger, "Failed to change get control for %s", ctrl.name);
        return false;
    }
    // check if the value is already set
    if (ctrl.current_value == value) {
        // zlog_debug(logger, "%s is already set to %d, no change needed", ctrl.name, value);
        return true;
    }
    if ((value < ctrl.minimum) || value > ctrl.maximum || (value - ctrl.minimum) % ctrl.step != 0) {
        zlog_error(logger, "Invalid value %d for %s (min: %d, max: %d, step: %d)", value, ctrl.name, ctrl.minimum, ctrl.maximum, ctrl.step);
        zlog_warn(logger, "Setting to default value %d", ctrl.default_value);
        value = ctrl.default_value;
    }
    ctrl.current_value = value;
    ret = rts_av_set_isp_ctrl(type, &ctrl);
    if (ret) {
        zlog_error(logger, "Failed to set new value for %d: ret = %d", type, ret);
        return false;
    }
    zlog_info(logger, "Changed %s to %d", ctrl.name, value);

    return true;
}

static int32_t get_isp_setting(const enum enum_rts_video_ctrl_id type, zlog_category_t *logger) {
    rts_video_control ctrl{};
    const int ret = rts_av_get_isp_ctrl(type, &ctrl);
    if (ret) {
        zlog_error(logger, "Failed to get control for %s", ctrl.name);
        return UINT32_MAX;
    }
    return ctrl.current_value;
}

#endif // ISP_UTILS_H