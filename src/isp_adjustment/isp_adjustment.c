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

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <rtsisp.h>
#include <rtsavapi.h>
#include <rtsvideo.h>
#include <zlog.h>
#include <isp_funcs.h>
#include <errno.h>
#include <limits.h>

zlog_category_t *isp_adj = NULL;

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

    if (argc != 3) {
        zlog_info(isp_adj, "Usage: %s <parameter> <value>", argv[0]);
        get_all_isp_options();
        rts_av_release();
        return 0;
    }

    const int32_t val = parse_int(argv[2], isp_adj);

    if (strcmp(argv[1], "noise_reduction") == 0)    {
        zlog_info(isp_adj, "Changing noise reduction to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_NOISE_REDUCTION, (int)val, isp_adj);
    } else if (strcmp(argv[1], "ldc") == 0)    {
        zlog_info(isp_adj, "Changing LDC to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_LDC, (int)val, isp_adj);
    } else if (strcmp(argv[1], "detail_enhancement") == 0)    {
        zlog_info(isp_adj, "Changing detail enhancement to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_DETAIL_ENHANCEMENT, (int)val, isp_adj);
    } else if (strcmp(argv[1], "three_dnr") == 0)    {
        zlog_info(isp_adj, "Changing 3DNR to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_3DNR, (int)val, isp_adj);
    } else if (strcmp(argv[1], "mirror") == 0) {
        zlog_info(isp_adj, "Changing mirror to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_MIRROR, (int)val, isp_adj);
    } else if (strcmp(argv[1], "flip") == 0) {
        zlog_info(isp_adj, "Changing flip to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_FLIP, (int)val, isp_adj);
    } else if (strcmp(argv[1], "in_out_door_mode") == 0) {
        zlog_info(isp_adj, "Changing in/out door mode to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_IN_OUT_DOOR_MODE, (int)val, isp_adj);
    } else if (strcmp(argv[1], "dehaze") == 0) {
        zlog_info(isp_adj, "Changing dehaze to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_DEHAZE, (int)val, isp_adj);
    } else if (strcmp(argv[1], "brightness") == 0) {
        zlog_info(isp_adj, "Changing brightness to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_BRIGHTNESS, (int)val, isp_adj);
    } else if (strcmp(argv[1], "contrast") == 0) {
        zlog_info(isp_adj, "Changing contrast to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_CONTRAST, (int)val, isp_adj);
    } else if (strcmp(argv[1], "hue") == 0) {
        zlog_info(isp_adj, "Changing hue to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_HUE, (int)val, isp_adj);
    } else if (strcmp(argv[1], "saturation") == 0) {
        zlog_info(isp_adj, "Changing saturation to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_SATURATION, (int)val, isp_adj);
    } else if (strcmp(argv[1], "sharpness") == 0) {
        zlog_info(isp_adj, "Changing sharpness to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_SHARPNESS, (int)val, isp_adj);
    } else if (strcmp(argv[1], "gamma") == 0) {
        zlog_info(isp_adj, "Changing gamma to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_GAMMA, (int)val, isp_adj);
    } else if (strcmp(argv[1], "blc") == 0 || strcmp(argv[1], "backlight_compensation") == 0) {
        zlog_info(isp_adj, "Changing backlight compensation to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_BLC, (int)val, isp_adj);
    } else if (strcmp(argv[1], "power_line_frequency") == 0 || strcmp(argv[1], "pwr_frequency") == 0) {
        zlog_info(isp_adj, "Changing power line frequency to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_PWR_FREQUENCY, (int)val, isp_adj);
    } else if (strcmp(argv[1], "exposure_mode") == 0) {
        zlog_info(isp_adj, "Changing exposure mode to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_EXPOSURE_MODE, (int)val, isp_adj);
    } else if (strcmp(argv[1], "exposure_priority") == 0) {
        zlog_info(isp_adj, "Changing exposure priority to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_EXPOSURE_PRIORITY, (int)val, isp_adj);
    } else if (strcmp(argv[1], "zoom") == 0) {
        zlog_info(isp_adj, "Changing zoom to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_ZOOM, (int)val, isp_adj);
    } else if (strcmp(argv[1], "wdr_mode") == 0) {
        zlog_info(isp_adj, "Changing WDR mode to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_WDR_MODE, (int)val, isp_adj);
    } else if (strcmp(argv[1], "wdr_level") == 0) {
        zlog_info(isp_adj, "Changing WDR level to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_WDR_LEVEL, (int)val, isp_adj);
    } else if (strcmp(argv[1], "green_balance") == 0 || strcmp(argv[1], "wb_green") == 0) {
        zlog_info(isp_adj, "Changing green balance to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_GREEN_BALANCE, (int)val, isp_adj);
    } else if (strcmp(argv[1], "blue_balance") == 0 || strcmp(argv[1], "wb_blue") == 0) {
        zlog_info(isp_adj, "Changing blue balance to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_BLUE_BALANCE, (int)val, isp_adj);
    } else if (strcmp(argv[1], "red_balance") == 0 || strcmp(argv[1], "wb_red") == 0) {
        zlog_info(isp_adj, "Changing red balance to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_RED_BALANCE, (int)val, isp_adj);
    } else if (strcmp(argv[1], "smart_ir_mode") == 0) {
        zlog_info(isp_adj, "Changing smart IR mode to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_SMART_IR_MODE, (int)val, isp_adj);
    } else if (strcmp(argv[1], "smart_ir_manual_level") == 0) {
        zlog_info(isp_adj, "Changing smart IR manual level to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_SMART_IR_MANUAL_LEVEL, (int)val, isp_adj);
    } else if (strcmp(argv[1], "gray_mode") == 0) {
        zlog_info(isp_adj, "Changing gray mode to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_GRAY_MODE, (int)val, isp_adj);
    } else if (strcmp(argv[1], "ir_mode") == 0) {
        zlog_info(isp_adj, "Changing IR mode to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_IR_MODE, (int)val, isp_adj);
    } else if (strcmp(argv[1], "awb_mode") == 0) {
        zlog_info(isp_adj, "Changing AWB mode to %s", argv[2]);
        change_isp_setting(RTS_VIDEO_CTRL_ID_AWB_CTRL, (int)val, isp_adj);
    } else {
         zlog_warn(isp_adj, "Unknown parameter '%s'\n", argv[1]);
         get_all_isp_options();
    }

     rts_av_release();
     return 0;
 }
