/*
 * Copyright (c) 2021 Colin Jensen
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

#include "imager_streamer.h"

uint8_t g_exit = RTS_FALSE;
// This is used for "debouncing" the IR mode changes
int8_t g_ir_cut_mode = -1; // 0 = day, 1 = night

zlog_category_t *vid_c = NULL;

static void terminate() {
    g_exit = RTS_TRUE;
}

uint8_t set_c_vbr(const int h264_ch, const uint32_t max_bitrate, const uint32_t min_bitrate) {
    struct rts_video_h264_ctrl *h264_ctl = NULL;

    const int ret = rts_av_query_h264_ctrl(h264_ch, &h264_ctl);
    if (h264_ctl == NULL)
        return RTS_FALSE;
    rts_av_get_h264_ctrl(h264_ctl);

    if (!ret) {
        h264_ctl->bitrate_mode = RTS_BITRATE_MODE_C_VBR;
        h264_ctl->max_bitrate = max_bitrate;
        h264_ctl->min_bitrate = min_bitrate;
        rts_av_set_h264_ctrl(h264_ctl);
        rts_av_release_h264_ctrl(h264_ctl);
        zlog_info(vid_c, "Set encoder to CVBR mode with max_bitrate=%d, min_bitrate=%d", max_bitrate, min_bitrate);
    }
    return RTS_TRUE;
}

void set_fps(const uint8_t fps) {
    struct rts_video_control ctrl;

    rts_av_get_isp_ctrl(RTS_VIDEO_CTRL_ID_EXPOSURE_PRIORITY, &ctrl);
    if (fps) {
        ctrl.current_value = RTS_ISP_AE_PRIORITY_MANUAL;
        rts_av_set_isp_ctrl(RTS_VIDEO_CTRL_ID_EXPOSURE_PRIORITY, &ctrl);

        const uint8_t tmp = rts_av_get_isp_dynamic_fps();
        rts_av_set_isp_dynamic_fps(fps);

        zlog_info(vid_c, "Changed sensor fps from %d to %d", tmp, rts_av_get_isp_dynamic_fps());
    } else {
        ctrl.current_value = RTS_ISP_AE_PRIORITY_AUTO;
        rts_av_set_isp_ctrl(RTS_VIDEO_CTRL_ID_EXPOSURE_PRIORITY, &ctrl);
        zlog_info(vid_c, "Sensor fps is %d", rts_av_get_isp_dynamic_fps());
    }
}

int change_ir_cut(const int action) {
    const int driver = open("/dev/cpld_periph", O_RDWR);
    if (action == 0) {
        ioctl(driver, _IOC(_IOC_NONE, 0x70, 0x15, 0), 0);
    } else {
        ioctl(driver, _IOC(_IOC_NONE, 0x70, 0x16, 0), 0);
    }
    close(driver);
    return RTS_TRUE;
}

static void check_ir_mode(const int32_t cutoff_inverted, const int32_t cutoff, const uint8_t invert) {
    // ADC return 3297 in total darkness and <100 in just a little bit of light.
    // The ADC is very noisy
    int32_t adc_value_0 = 0;
    int32_t adc_value_1 = 0;
    int32_t adc_value_2 = 0;
    int32_t adc_value_3 = 0;
    // Read the ADC value multiple times to get a stable reading
    for (int i = 0; i < ADC_ITERATIONS; i++) {
        adc_value_0 += rts_io_adc_get_value(ADC_CHANNEL_0);
        adc_value_1 += rts_io_adc_get_value(ADC_CHANNEL_1);
        adc_value_2 += rts_io_adc_get_value(ADC_CHANNEL_2);
        adc_value_3 += rts_io_adc_get_value(ADC_CHANNEL_3);
        // Sleep for a short time to allow the ADC to stabilize
        sleep(1);
    }
    adc_value_0 = adc_value_0 / ADC_ITERATIONS;
    adc_value_1 = adc_value_1 / ADC_ITERATIONS;
    adc_value_2 = adc_value_2 / ADC_ITERATIONS;
    adc_value_3 = adc_value_3 / ADC_ITERATIONS;

    const uint32_t adc_value = (adc_value_0 + adc_value_1 + adc_value_2 + adc_value_3) / 4;

    if ((invert && adc_value > cutoff_inverted) || (adc_value < cutoff)) {
        if (g_ir_cut_mode != 0) {
            zlog_debug(vid_c, "IR control: ADC_tot=%d, ADC_0=%d, ADC_1=%d, ADC_2=%d, ADC_3=%d cutoff=%d", adc_value, adc_value_0, adc_value_1, adc_value_2, adc_value_3, invert ? cutoff_inverted : cutoff);
            zlog_info(vid_c, "Switching to day mode");
            change_isp_setting(RTS_VIDEO_CTRL_ID_GRAY_MODE, 0, vid_c);
            change_isp_setting(RTS_VIDEO_CTRL_ID_IR_MODE, RTS_ISP_IR_DAY, vid_c);
            change_ir_cut(0);
            g_ir_cut_mode = 0;
        }
    } else {
        if (g_ir_cut_mode != 1) {
            zlog_debug(vid_c, "IR control: ADC_tot=%d, ADC_0=%d, ADC_1=%d, ADC_2=%d, ADC_3=%d cutoff=%d", adc_value, adc_value_0, adc_value_1, adc_value_2, adc_value_3, invert ? cutoff_inverted : cutoff);
            zlog_info(vid_c, "Switching to night mode");
            change_isp_setting(RTS_VIDEO_CTRL_ID_GRAY_MODE, 1, vid_c);
            change_isp_setting(RTS_VIDEO_CTRL_ID_IR_MODE, RTS_ISP_IR_NIGHT, vid_c);
            change_ir_cut(1);
            g_ir_cut_mode = 1;
        }
    }
}

static void ir_ctrl_thread(void *arg) {
    zlog_info(vid_c, "Starting IR control thread");
    const streamer_settings *settings = (streamer_settings *) arg;
    // Wait for any other apps controlling the IR cut to end
    sleep(30);
    zlog_info(vid_c, "Beginning IR control");
    while (g_exit == RTS_FALSE) {
        check_ir_mode(settings->adc_cutoff_inverted, settings->adc_cutoff, settings->invert_ir_cut);
        sleep(30 - ADC_ITERATIONS);
    }
    zlog_info(vid_c, "IR control thread exiting");
}

void* unlock_fifo_thread(void *data) {
    const char* fifo_name = (const char *) data;
    unsigned char buffer_fifo[1024];

    const int fd = open(fifo_name, O_RDONLY);
    read(fd, buffer_fifo, 1024);
    close(fd);

    return NULL;
}

void sigpipe_handler(int unused) {
    // Do nothing
}

uint8_t create_sink(FILE** sink, const char* path) {
    const struct sigaction sa = {
        .sa_handler = sigpipe_handler,
        .sa_flags = 0
    };
    sigaction(SIGPIPE, &sa, NULL);
    // remove any existing fifo file
    if (unlink(path) == 0) {
        zlog_debug(vid_c, "Removed existing fifo file %s", path);
    }
    // create a new fifo file
    if (mkfifo(path, 0755) < 0) {
        zlog_fatal(vid_c, "Failed to create fifo file %s", path);
        return RTS_FALSE;
    }
    pthread_t unlock_thread;
    if(pthread_create(&unlock_thread, NULL, unlock_fifo_thread, (void *) path)) {
        zlog_fatal(vid_c, "Failed to unlock fifo %s", path);
        return RTS_FALSE;
    }
    pthread_detach(unlock_thread);
    // open the fifo file for writing
    *sink = fopen(path, "wb");
    if (!*sink) {
        zlog_fatal(vid_c, "Failed to open fifo file %s", path);
        return RTS_FALSE;
    }
    zlog_info(vid_c, "Created sink at %s", path);
    return RTS_TRUE;
}

void kill_stream(const handlers *h) {
    zlog_info(vid_c, "Stopping and destroying RTS channels");
    g_exit = RTS_TRUE;
    sleep(2); // Give the IR control thread time to exit
    rts_pthreadpool_destroy(h->tpool);

    // VIDEO TEAR DOWN
    if (h->vid_cap >= 0 && h->vid_enc >= 0) {
        rts_av_unbind(h->vid_cap, h->vid_enc);
    }
    if (h->vid_enc >= 0) {
        rts_av_stop_recv(h->vid_enc);
        rts_av_disable_chn(h->vid_enc);
        rts_av_destroy_chn(h->vid_enc);
    }
    if (h->vid_cap >= 0) {
        rts_av_disable_chn(h->vid_cap);
        rts_av_destroy_chn(h->vid_cap);
    }

    rts_av_release();
    zlog_info(vid_c, "Stream stopped and resources released");
    _exit(1);
}

int start_stream(streamer_settings config) {
    struct rts_isp_attr isp_attr;
    struct rts_h264_attr h264_attr;
    struct rts_av_profile vid_profile;

    handlers h = {
        .tpool = NULL,
        .vid_cap = -1,
        .vid_enc = -1,
    };

    // -- VIDEO SETUP --
    isp_attr.isp_id = 0;
    isp_attr.isp_buf_num = 2;
    h.vid_cap = rts_av_create_isp_chn(&isp_attr);

    if (h.vid_cap < 0) {
        zlog_fatal(vid_c, "Failed to create ISP channel, ret %d", h.vid_cap);
        kill_stream(&h);
    }
    zlog_debug(vid_c, "ISP channel created: %d", h.vid_cap);

    vid_profile.fmt = RTS_V_FMT_YUV420SEMIPLANAR;
    vid_profile.video.width = config.width;
    vid_profile.video.height = config.height;
    vid_profile.video.numerator = 1;
    vid_profile.video.denominator = config.fps;

    int ret = rts_av_set_profile(h.vid_cap, &vid_profile);
    if (ret) {
        zlog_fatal(vid_c, "Failed to set ISP profile, ret %d", ret);
        kill_stream(&h);
    }
    h264_attr.level = H264_LEVEL_4;
    h264_attr.qp = -1;
    h264_attr.bps = config.max_bitrate;
    h264_attr.gop = config.fps * 2;
    h264_attr.videostab = 0;
    h264_attr.rotation = RTS_AV_ROTATION_0;
    h.vid_enc = rts_av_create_h264_chn(&h264_attr);
    if (h.vid_enc < 0) {
        zlog_fatal(vid_c, "Failed to create H264 channel, ret %d", h.vid_enc);
        kill_stream(&h);
    }
    zlog_debug(vid_c, "H264 channel created: %d", h.vid_enc);

    ret = rts_av_bind(h.vid_cap, h.vid_enc);
    if (ret) {
        zlog_fatal(vid_c, "Failed to bind ISP & H264 encoder to RTS AV API, ret %d", ret);
        kill_stream(&h);
    }

    rts_av_enable_chn(h.vid_cap);
    rts_av_enable_chn(h.vid_enc);
    change_isp_setting(RTS_VIDEO_CTRL_ID_NOISE_REDUCTION, config.noise_reduction, vid_c);
    change_isp_setting(RTS_VIDEO_CTRL_ID_LDC, config.ldc, vid_c);
    change_isp_setting(RTS_VIDEO_CTRL_ID_DETAIL_ENHANCEMENT, config.detail_enhancement, vid_c);
    change_isp_setting(RTS_VIDEO_CTRL_ID_3DNR, config.three_dnr, vid_c);
    change_isp_setting(RTS_VIDEO_CTRL_ID_MIRROR, config.mirror, vid_c);
    change_isp_setting(RTS_VIDEO_CTRL_ID_FLIP, config.flip, vid_c);
    change_isp_setting(RTS_VIDEO_CTRL_ID_IN_OUT_DOOR_MODE, config.in_out_door_mode, vid_c);
    change_isp_setting(RTS_VIDEO_CTRL_ID_DEHAZE, config.dehaze, vid_c);
    change_isp_setting(RTS_VIDEO_CTRL_ID_BRIGHTNESS, config.brightness, vid_c);
    change_isp_setting(RTS_VIDEO_CTRL_ID_CONTRAST, config.contrast, vid_c);
    change_isp_setting(RTS_VIDEO_CTRL_ID_HUE, config.hue, vid_c);
    change_isp_setting(RTS_VIDEO_CTRL_ID_SATURATION, config.saturation, vid_c);
    change_isp_setting(RTS_VIDEO_CTRL_ID_SHARPNESS, config.sharpness, vid_c);
    change_isp_setting(RTS_VIDEO_CTRL_ID_GAMMA, config.gamma, vid_c);
    change_isp_setting(RTS_VIDEO_CTRL_ID_BLC, config.backlight_compensation, vid_c);
    change_isp_setting(RTS_VIDEO_CTRL_ID_PWR_FREQUENCY, config.power_line_frequency, vid_c);
    change_isp_setting(RTS_VIDEO_CTRL_ID_EXPOSURE_MODE, config.exposure_auto, vid_c);
    change_isp_setting(RTS_VIDEO_CTRL_ID_EXPOSURE_PRIORITY, config.exposure_auto_priority, vid_c);
    change_isp_setting(RTS_VIDEO_CTRL_ID_ZOOM, config.zoom_absolute, vid_c);
    change_isp_setting(RTS_VIDEO_CTRL_ID_WDR_MODE, config.wdr_mode, vid_c);
    change_isp_setting(RTS_VIDEO_CTRL_ID_WDR_LEVEL, config.wdr_level, vid_c);
    change_isp_setting(RTS_VIDEO_CTRL_ID_GREEN_BALANCE, config.wb_green, vid_c);
    change_isp_setting(RTS_VIDEO_CTRL_ID_BLUE_BALANCE, config.wb_blue, vid_c);
    change_isp_setting(RTS_VIDEO_CTRL_ID_RED_BALANCE, config.wb_red, vid_c);
    change_isp_setting(RTS_VIDEO_CTRL_ID_SMART_IR_MODE, config.smart_ir_mode, vid_c);
    change_isp_setting(RTS_VIDEO_CTRL_ID_SMART_IR_MANUAL_LEVEL, config.smart_ir_manual_level, vid_c);

    h.tpool = rts_pthreadpool_init(1);
    if (!h.tpool) {
        kill_stream(&h);
    }

    rts_pthreadpool_add_task(h.tpool, ir_ctrl_thread, (void *)&config, NULL);
    set_c_vbr(h.vid_enc, config.max_bitrate, config.min_bitrate);
    set_fps(config.fps);
    ret = rts_av_start_recv(h.vid_enc);
    if (ret) {
        zlog_fatal(vid_c, "Failed to start H264 receive, ret %d", ret);
        kill_stream(&h);
    }

    FILE *video_stream = NULL;
    if (create_sink(&video_stream, VIDEO_FIFO) == RTS_FALSE) {
        zlog_fatal(vid_c, "Failed to create video sink, ret %d", ret);
        kill_stream(&h);
    }

    // Try load the V4L device
    int vfd = rts_isp_v4l2_open(isp_attr.isp_id);
    if (vfd > 0) {
        zlog_debug(vid_c, "Opened the V4L2 fd %d", vfd);
        rts_isp_v4l2_close(vfd);
    }
    // Toggle IR Cut at startup (disabled as of V03 as dispatch binary does this auto)
    change_ir_cut(1); // Always start as if it was day time
    zlog_info(vid_c, "Starting imager streamer");
    struct rts_av_buffer *vid_buffer = NULL;
    while (g_exit == RTS_FALSE) {
        // Handle video
        if (rts_av_poll(h.vid_enc)) {
            usleep(250);
            continue;
        }

        if (rts_av_recv(h.vid_enc, &vid_buffer)) {
            usleep(250);
            continue;
        }

        if (vid_buffer) {
            if (fwrite(vid_buffer->vm_addr, 1, vid_buffer->bytesused, video_stream) != vid_buffer->bytesused) {
                zlog_error(vid_c, "Possible SIGPIPE break from stream disconnection, skipping flush");
            } else {
                fflush(video_stream);
            }
            // Release the video buffer
            RTS_SAFE_RELEASE(vid_buffer, rts_av_put_buffer);
        }
        usleep(250); // Iterate every 1ms
    }

    kill_stream(&h);

    return ret;
}

static int parse_ini(void *user, const char *section, const char *name, const char *value) {
    streamer_settings *config = (streamer_settings *) user;
    const int32_t val = parse_int(value, vid_c);

    if (strcmp(section, "isp") == 0) {
        if (strcmp(name, "noise_reduction") == 0) {
            config->noise_reduction = val;
        } else if (strcmp(name, "mirror") == 0) {
            config->mirror = val;
        } else if (strcmp(name, "flip") == 0) {
            config->flip = val;
        } else if (strcmp(name, "adc_cutoff_inverted") == 0) {
            config->adc_cutoff_inverted = val;
        } else if (strcmp(name, "adc_cutoff") == 0) {
            config->adc_cutoff = val;
        } else if (strcmp(name, "invert_ir_cut") == 0) {
            config->invert_ir_cut = val;
        } else if (strcmp(name, "in_out_door_mode") == 0) {
            config->in_out_door_mode = val;
        } else if (strcmp(name, "dehaze") == 0) {
            config->dehaze = val;
        } else if (strcmp(name, "ldc") == 0) {
            config->ldc = val;
        } else if (strcmp(name, "detail_enhancement") == 0) {
            config->detail_enhancement = val;
        } else if (strcmp(name, "three_dnr") == 0) {
            config->three_dnr = val;
        } else if (strcmp(name, "brightness") == 0) {
            config->brightness = val;
        } else if (strcmp(name, "contrast") == 0) {
            config->contrast = val;
        } else if (strcmp(name, "hue") == 0) {
            config->hue = val;
        } else if (strcmp(name, "saturation") == 0) {
            config->saturation = val;
        } else if (strcmp(name, "sharpness") == 0) {
            config->sharpness = val;
        } else if (strcmp(name, "gamma") == 0) {
            config->gamma = val;
        } else if (strcmp(name, "backlight_compensation") == 0) {
            config->backlight_compensation = val;
        } else if (strcmp(name, "power_line_frequency") == 0) {
            config->power_line_frequency = val;
        } else if (strcmp(name, "exposure_auto") == 0) {
            config->exposure_auto = val;
        } else if (strcmp(name, "exposure_auto_priority") == 0) {
            config->exposure_auto_priority = val;
        } else if (strcmp(name, "zoom_absolute") == 0) {
            config->zoom_absolute = val;
        } else if (strcmp(name, "wdr_mode") == 0) {
            config->wdr_mode = val;
        } else if (strcmp(name, "wdr_level") == 0) {
            config->wdr_level = val;
        } else if (strcmp(name, "wb_green") == 0) {
            config->wb_green = val;
        } else if (strcmp(name, "wb_blue") == 0) {
            config->wb_blue = val;
        } else if (strcmp(name, "wb_red") == 0) {
            config->wb_red = val;
        } else if (strcmp(name, "smart_ir_mode") == 0) {
            config->smart_ir_mode = val;
        } else if (strcmp(name, "smart_ir_manual_level") == 0) {
            config->smart_ir_manual_level = val;
        } else {
            return 0;  // unknown name
        }
    } else if (strcmp(section, "encoder") == 0) {
        if (strcmp(name, "min_bitrate") == 0) {
            config->min_bitrate = (uint32_t) val;
        } else if (strcmp(name, "max_bitrate") == 0) {
            config->max_bitrate = (uint32_t) val;
        } else if (strcmp(name, "width") == 0) {
            config->width = (uint32_t) val;
        } else if (strcmp(name, "height") == 0) {
            config->height = (uint32_t) val;
        } else if (strcmp(name, "fps") == 0) {
            config->fps = (uint32_t) val;
        } else {
            return 0;  // unknown name
        }
    } else {
        return 0;  // unknown section
    }

    return 1;
}


int main(int argc, char *argv[]) {
    signal(SIGINT, terminate);
    signal(SIGTERM, terminate);

    // init zlog
    if (zlog_init("zlog.conf") < 0 || (vid_c = zlog_get_category("imager")) == NULL) {
        fprintf(stderr, "Failed to initialize zlog\n");
        return -1;
    }

    vid_c = zlog_get_category("imager");
    zlog_info(vid_c, "Realtek RTS imager streamer v%d.%d.%d started", VER_MAJOR, VER_MINOR, VER_PATCH);

    streamer_settings config;
    if (ini_parse("streamer.ini", parse_ini, &config) < 0) {
        zlog_fatal(vid_c, "Failed to load streamer.ini");
        return -1;
    }

    if (rts_av_init()) {
        zlog_fatal(vid_c, "Failed to initialize RTS AV");
        return -1;
    }

    start_stream(config);

    rts_av_release();
    return 0;
}
