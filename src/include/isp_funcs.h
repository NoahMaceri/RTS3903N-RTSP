#ifndef ISP_FUNCS_H
#define ISP_FUNCS_H

#include <stdio.h>
#include <stdint.h>
#include <errno.h>
#include <limits.h>
#include <rtscamkit.h>
#include <rtsvideo.h>
#include <zlog.h>

static uint8_t change_isp_setting(const enum enum_rts_video_ctrl_id type, int value, zlog_category_t *logger) {
    struct rts_video_control ctrl;
    int ret = rts_av_get_isp_ctrl(type, &ctrl);
    if (ret) {
        zlog_error(logger, "Failed to change get control for %s", ctrl.name);
        return RTS_FALSE;
    }
    if (value >= ctrl.minimum && value <= ctrl.maximum && (value - ctrl.minimum) % ctrl.step == 0) {
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

static void get_all_isp_options() {
    struct rts_video_control ctrl;

    fprintf(stdout, "Name,Min,Max,Step,Default,Current\n");

    for (int i = 1; i < RTS_VIDEO_CTRL_ID_RESERVED; i++) {
        const int ret = rts_av_get_isp_ctrl(i, &ctrl);
        if (ret)
            continue;
        fprintf(stdout, "%s,%d,%d,%d,%d,%d\n", ctrl.name, ctrl.minimum, ctrl.maximum, ctrl.step, ctrl.default_value, ctrl.current_value);
    }
}

static int32_t parse_int(const char *str, zlog_category_t *logger) {
    /* parse numeric value once with error checking */
    char *endptr;
    errno = 0;
    long val = strtol(str, &endptr, 10);
    if (str[0] == '\0' || *endptr != '\0' || (errno == ERANGE && (val == LONG_MAX || val == LONG_MIN))) {
        zlog_warn(logger, "Invalid numeric value '%s'",str);
        return 0;
    }
    if (val < INT_MIN || val > INT_MAX) {
        zlog_warn(logger, "Value out of range: %ld", val);
        return 0;
    }
    return (int32_t)val;
}

#endif //ISP_FUNCS_H