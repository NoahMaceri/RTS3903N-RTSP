/*
 * Copyright (c) 2025 Noah Maceri
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include <cstdlib>
#include <unistd.h>
#include <cstring>
#include <map>

#include <rtsisp.h>
#include <rtsavapi.h>
#include <rtsvideo.h>

#include <zlog.h>

zlog_category_t *isp_adj = nullptr;

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
    {"gray_mode", RTS_VIDEO_CTRL_ID_GRAY_MODE},
    {"smart_ir_mode", RTS_VIDEO_CTRL_ID_SMART_IR_MODE},
    {"smart_ir_manual_level", RTS_VIDEO_CTRL_ID_SMART_IR_MANUAL_LEVEL}
};

static uint8_t change_isp_setting(const enum enum_rts_video_ctrl_id type, int32_t value, zlog_category_t *logger) {
    rts_video_control ctrl{};
    int ret = rts_av_get_isp_ctrl(type, &ctrl);
    if (ret) {
        zlog_error(logger, "Failed to change get control for %s", ctrl.name);
        return RTS_FALSE;
    }
    // check if the value is already set
    if (ctrl.current_value == value) {
        // zlog_debug(logger, "%s is already set to %d, no change needed", ctrl.name, value);
        return RTS_TRUE;
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
        return RTS_FALSE;
    }
    zlog_info(logger, "Changed %s to %d", ctrl.name, value);

    return RTS_TRUE;
}

static int32_t get_isp_setting(const enum enum_rts_video_ctrl_id type, zlog_category_t *logger) {
    rts_video_control ctrl{};
    const int ret = rts_av_get_isp_ctrl(type, &ctrl);
    if (ret) {
        zlog_error(logger, "Failed to get control for %s", ctrl.name);
        return 0;
    }
    return ctrl.current_value;
}

static void get_all_isp_options() {
    rts_video_control ctrl{};

    fprintf(stdout, "Name,Min,Max,Step,Default,Current\n");

    for (int i = 1; i < RTS_VIDEO_CTRL_ID_RESERVED; i++) {
        const int ret = rts_av_get_isp_ctrl(i, &ctrl);
        if (ret)
            continue;
        fprintf(stdout, "%s,%d,%d,%d,%d,%d\n", ctrl.name, ctrl.minimum, ctrl.maximum, ctrl.step, ctrl.default_value, ctrl.current_value);
    }
}

int main(int argc, char *argv[]) {
    if (zlog_init("zlog.conf") < 0 || (isp_adj = zlog_get_category("isp_adj")) == NULL) {
        fprintf(stderr, "Failed to initialize zlog\n");
        return -1;
    }

    zlog_info(isp_adj, "Started ISP adjustment utility");

    if (rts_av_init()) {
        zlog_fatal(isp_adj, "Failed to initialize RTS AV");
        return -1;
    }

    if (argc == 3) {
        const int32_t val = std::atoi(argv[2]);

        if (param_setting_map.count(argv[1])) {
            const enum enum_rts_video_ctrl_id ctrl_type = param_setting_map.at(argv[1]);
            if (change_isp_setting(ctrl_type, val, isp_adj)) {
                const int32_t new_val = get_isp_setting(ctrl_type, isp_adj);
                zlog_info(isp_adj, "Parameter '%s' is now set to %d", argv[1], new_val);
            } else {
                zlog_error(isp_adj, "Failed to change parameter '%s'", argv[1]);
            }
        } else {
            zlog_warn(isp_adj, "Unknown parameter '%s'\n", argv[1]);
            get_all_isp_options();
        }
    } else if (argc == 2) {
        if (param_setting_map.count(argv[1])) {
            const enum enum_rts_video_ctrl_id ctrl_type = param_setting_map.at(argv[1]);
            const int32_t cur_val = get_isp_setting(ctrl_type, isp_adj);
            zlog_info(isp_adj, "Parameter '%s' is currently set to %d", argv[1], cur_val);
        } else {
            zlog_warn(isp_adj, "Unknown parameter '%s'\n", argv[1]);
            get_all_isp_options();
        }
    } else {
        zlog_info(isp_adj, "Usage: %s <parameter>", argv[0]);
        get_all_isp_options();
        return 1;
    }

     rts_av_release();
     return 0;
 }
