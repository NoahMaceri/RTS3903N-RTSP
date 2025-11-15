#ifndef IMAGER_STREAMER_H
#define IMAGER_STREAMER_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <signal.h>
#include <rtsisp.h>
#include <rtscamkit.h>
#include <rtsavapi.h>
#include <rtsvideo.h>
#include <rts_pthreadpool.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <rts_io_adc.h>
#include <sys/resource.h>
#include <pthread.h>
#include <zlog.h>
#include <ini.h>
#include <ver.h>
#include <globals.h>
#include <isp_funcs.h>

#define ADC_ITERATIONS 15

typedef struct {
    int32_t noise_reduction;
    int32_t ldc;
    int32_t detail_enhancement;
    int32_t three_dnr;
    int32_t mirror;
    int32_t flip;
    int32_t adc_cutoff_inverted;
    int32_t adc_cutoff;
    int32_t in_out_door_mode;
    int32_t dehaze;
    int32_t brightness;
    int32_t contrast;
    int32_t hue;
    int32_t saturation;
    int32_t sharpness;
    int32_t gamma;
    int32_t backlight_compensation;
    int32_t power_line_frequency;
    int32_t exposure_auto;
    int32_t exposure_auto_priority;
    int32_t zoom_absolute;
    int32_t wdr_mode;
    int32_t wdr_level;
    int32_t wb_green;
    int32_t wb_blue;
    int32_t wb_red;
    int32_t smart_ir_mode;
    int32_t smart_ir_manual_level;
    uint32_t min_bitrate;
    uint32_t max_bitrate;
    uint32_t width;
    uint32_t height;
    uint32_t fps;
    int32_t invert_ir_cut;
} streamer_settings;

typedef struct {
    PthreadPool tpool;
    int32_t vid_cap;
    int32_t vid_enc;
} handlers;

#endif //IMAGER_STREAMER_H