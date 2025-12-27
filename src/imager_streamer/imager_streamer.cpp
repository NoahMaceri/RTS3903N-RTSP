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
 * along with this program. If not, see <http://www.gnu.org/licenses/>.\
 *
 * Based on the works of Colin Jensen (Copyright (c) 2021)
 */

#include "imager_streamer.h"

static void terminate() {
    zlog_info(vid_c, "Termination signal received, exiting...");
    g_exit = true;
}

uint8_t config_h264_chn(const int h264_ch, const uint32_t max_bitrate, const uint32_t min_bitrate, const uint32_t target_bitrate) {
    rts_video_h264_ctrl *h264_ctl = nullptr;

    const int ret = rts_av_query_h264_ctrl(h264_ch, &h264_ctl);
    if (h264_ctl == nullptr) {
        zlog_error(vid_c, "Failed to query H264 control for channel %d, ret %d", h264_ch, ret);
        return false;
    }
    rts_av_get_h264_ctrl(h264_ctl);

    if (!ret) {
        h264_ctl->bitrate_mode = RTS_BITRATE_MODE_CBR;
        h264_ctl->bitrate = target_bitrate;
        h264_ctl->max_bitrate = max_bitrate;
        h264_ctl->min_bitrate = min_bitrate;
        h264_ctl->qp = 30;
        h264_ctl->max_qp = 38;
        h264_ctl->min_qp = 22; // set QP to a fixed value for CBR
        h264_ctl->intra_qp_delta = -2;  // (optional) slightly better IDR quality
        h264_ctl->enable_cabac = 1;
        h264_ctl->slice_size = 80000;
        h264_ctl->super_p_period = 0;
        h264_ctl->gdr = 0;
        h264_ctl->disable_deblocking_filter = 0;
        h264_ctl->sei_messages = 0; // no audio stream, so disable SEI messages
        rts_av_set_h264_ctrl(h264_ctl);
        rts_av_release_h264_ctrl(h264_ctl);
        zlog_info(vid_c, "Set encoder to CBR mode with target bitrate %d, max bitrate %d, min bitrate %d on channel %d",
                  target_bitrate, max_bitrate, min_bitrate, h264_ch);
    } else {
        zlog_error(vid_c, "Failed to get H264 control for channel %d, ret %d", h264_ch, ret);
        return false;
    }
    return true;
}

void set_fps(const uint8_t fps) {
    const uint8_t tmp = rts_av_get_isp_dynamic_fps();
    if (tmp == fps) {
        zlog_debug(vid_c, "Sensor fps already set to %d, no change needed", fps);
        return;
    }
    rts_av_set_isp_dynamic_fps(fps);
    zlog_info(vid_c, "Changed sensor fps from %d to %d", tmp, rts_av_get_isp_dynamic_fps());
}

void sigpipe_handler(int signum) {
    usleep(1000);
}

void *unlock_fifo_threadfn(void *data) {
    const char *fifo_name = static_cast<const char *>(data);
    unsigned char buffer_fifo[1024];
    const int fd = open(fifo_name, O_RDONLY);
    read(fd, buffer_fifo, 1024);
    close(fd);
    return nullptr;
}

uint8_t create_sink(FILE **sink, const char *path) {
    // Override SIGPIPE to prevent crashes on broken pipe
    signal(SIGPIPE, sigpipe_handler);
    // remove any existing fifo file
    if (unlink(path) == 0) {
        zlog_debug(vid_c, "Removed existing fifo file %s", path);
    }
    // create a new fifo file
    if (mkfifo(path, 0777) < 0) {
        zlog_fatal(vid_c, "Failed to create fifo file %s", path);
        return false;
    }
    // Unlock the fifo by starting a thread that opens it for reading
    pthread_t unlock_thread;
    if (pthread_create(&unlock_thread, nullptr, unlock_fifo_threadfn, const_cast<char *>(path)) != 0) {
        zlog_fatal(vid_c, "Failed to create fifo unlock thread");
        return false;
    }
    pthread_detach(unlock_thread);
    zlog_info(vid_c, "Started fifo unlock thread");

    // open the fifo file for writing with O_NONBLOCK
    *sink = fopen(path, "wb");
    if (!*sink) {
        zlog_fatal(vid_c, "Failed to open fifo file %s for writing", path);
        return false;
    }
    zlog_info(vid_c, "Created sink at %s", path);

    return true;
}

void kill_stream(const handlers *h) {
    zlog_info(vid_c, "Stopping and destroying RTS channels");
    g_exit = true;

    // IR THREAD TEAR DOWN
    zlog_info(vid_c, "Tearing down IR control");
    if (h->ir_control) {
        h->ir_control->stop();
        delete h->ir_control;
    }
    zlog_info(vid_c, "IR control stopped");

    // VIDEO TEAR DOWN
    if (h->isp >= 0 && h->h264 >= 0) {
        zlog_debug(vid_c, "Unbinding ISP and H264 channels");
        rts_av_stop_recv(h->h264);
        rts_av_unbind(h->isp, h->h264);
        zlog_debug(vid_c, "ISP and H264 channels unbound");
    }
    if (h->h264 >= 0) {
        zlog_debug(vid_c, "Stopping H264 receive and destroying channel");
        rts_av_disable_chn(h->h264);
        rts_av_destroy_chn(h->h264);
        zlog_debug(vid_c, "H264 channel stopped and destroyed");
    }
    if (h->isp >= 0) {
        zlog_debug(vid_c, "Stopping ISP receive and destroying channel");
        rts_av_disable_chn(h->isp);
        rts_av_destroy_chn(h->isp);
        zlog_debug(vid_c, "ISP channel stopped and destroyed");
    }
    zlog_info(vid_c, "Stopped and destroyed RTS channels");

    rts_av_release();
    zlog_info(vid_c, "RTS AV released");

    // Teardown FIFO
    if (h->fifo) {
        fclose(h->fifo);
    }
    unlink(VIDEO_FIFO);
    zlog_info(vid_c, "Video sink closed and FIFO unlinked");

    zlog_info(vid_c, "Streamer exiting...");
    zlog_fini();
}


int start_stream(nlohmann::json &cfg) {
    if (rts_av_init()) {
        zlog_fatal(vid_c, "Failed to initialize RTS AV");
        return -1;
    }

    handlers h = {
        .isp = -1,
        .h264 = -1,
        .fifo = nullptr,
        .ir_control = nullptr
    };

    // -- VIDEO SETUP --
    struct rts_isp_attr isp_attr{};
    isp_attr.isp_id = 0;
    isp_attr.isp_buf_num = 2;
    h.isp = rts_av_create_isp_chn(&isp_attr);
    if (RTS_IS_ERR_VALUE(RTS_ERRNO(h.isp))) {
        zlog_fatal(vid_c, "Failed to create ISP channel with error %d", h.isp);
        kill_stream(&h);
    }
    zlog_debug(vid_c, "ISP channel created: chn %d, isp_id %d, isp_buf_num %d", h.isp, isp_attr.isp_id, isp_attr.isp_buf_num);

    rts_av_profile av_profile{};
    av_profile.fmt = RTS_V_FMT_YUV420SEMIPLANAR;
    av_profile.video.width = cfg["encoder"]["width"].get<uint32_t>();
    av_profile.video.height = cfg["encoder"]["height"].get<uint32_t>();
    av_profile.video.numerator = 1;
    av_profile.video.denominator = cfg["encoder"]["fps"].get<uint32_t>();
    zlog_debug(vid_c, "Setting AV profile to %dx%d @ %d fps", av_profile.video.width, av_profile.video.height, av_profile.video.denominator);
    int ret = rts_av_set_profile(h.isp, &av_profile);
    if (RTS_IS_ERR_VALUE(RTS_ERRNO(ret))) {
        zlog_fatal(vid_c, "Failed to set AV profile with error %d", ret);
        kill_stream(&h);
    }

    rts_h264_attr h264_attr{};
    h264_attr.level = H264_LEVEL_4;
    h264_attr.qp = 30; // (high) 30 to 50 (low)
    h264_attr.bps = cfg["encoder"]["target_bitrate"].get<uint32_t>();
    h264_attr.gop = cfg["encoder"]["fps"].get<uint32_t>() * 2; // 2 seconds
    h264_attr.videostab = 0;
    h264_attr.rotation = RTS_AV_ROTATION_0;
    h.h264 = rts_av_create_h264_chn(&h264_attr);
    if (RTS_IS_ERR_VALUE(RTS_ERRNO(h.h264))) {
        zlog_fatal(vid_c, "Failed to create H264 channel with error %d", h.h264);
        kill_stream(&h);
    }
    zlog_debug(vid_c, "H264 channel created: chn %d, level %d, qp %d, bps %d, gop %d, videostab %d, rotation %d", h.h264, h264_attr.level, h264_attr.qp, h264_attr.bps, h264_attr.gop, h264_attr.videostab, h264_attr.rotation);

    // use nlohmann::json to load ISP settings
    if (cfg.contains("isp")) {
        for (auto &json_item: cfg["isp"].items()) {
            const std::string &key = json_item.key();
            const uint8_t ctrl_type = param_setting_map.count(key) ? param_setting_map.at(key) : RTS_VIDEO_CTRL_ID_RESERVED;
            if (ctrl_type != RTS_VIDEO_CTRL_ID_RESERVED) {
                change_isp_setting(static_cast<enum enum_rts_video_ctrl_id>(ctrl_type), json_item.value().get<int32_t>(), vid_c);
            } else {
                zlog_warn(vid_c, "Unknown ISP setting parameter: %s", key.c_str());
            }
        }
    } else {
        zlog_warn(vid_c, "No ISP settings found in configuration");
    }

    ret = rts_av_bind(h.isp, h.h264);
    if (RTS_IS_ERR_VALUE(RTS_ERRNO(ret))) {
        zlog_fatal(vid_c, "Failed to bind ISP & H264 encoder to RTS AV API with error %d", ret);
        kill_stream(&h);
    }

    ret = rts_av_enable_chn(h.isp);
    if (RTS_IS_ERR_VALUE(RTS_ERRNO(ret))) {
        zlog_fatal(vid_c, "Failed to enable ISP channel with error %d", ret);
        kill_stream(&h);
    }

    ret = rts_av_enable_chn(h.h264);
    if (RTS_IS_ERR_VALUE(RTS_ERRNO(ret))) {
        zlog_fatal(vid_c, "Failed to enable H264 channel with error %d", ret);
        kill_stream(&h);
    }

    // H264 control can ONLY be applied after the channel is enabled
    config_h264_chn(h.h264, cfg["encoder"]["max_bitrate"].get<uint32_t>(),
            cfg["encoder"]["min_bitrate"].get<uint32_t>(),
            cfg["encoder"]["target_bitrate"].get<uint32_t>());
    set_fps(cfg["encoder"]["fps"].get<uint8_t>());

    ret = rts_av_start_recv(h.h264);
    if (RTS_IS_ERR_VALUE(RTS_ERRNO(ret))) {
        zlog_fatal(vid_c, "Failed to start H264 receive with error %d", ret);
        kill_stream(&h);
    }


    if (!create_sink(&h.fifo, VIDEO_FIFO)) {
        zlog_fatal(vid_c, "Failed to create video sink with error %d", ret);
        kill_stream(&h);
    }

    // Check channel status once before starting main loop
    uint8_t chn_status = rts_av_get_chn_status(h.isp);
    zlog_debug(vid_c, "Video channel status: %d", chn_status);
    chn_status = rts_av_get_chn_status(h.h264);
    zlog_debug(vid_c, "Encoder channel status: %d", chn_status);

    // init day_night_ctrl
    h.ir_control = new day_night_ctrl(
        cfg["ir_control"]["adc_cutoff"].get<int32_t>(),
        cfg["ir_control"]["adc_cutoff_inverted"].get<int32_t>(),
        cfg["ir_control"]["invert"].get<bool>(),
        vid_c
    );
    if (!h.ir_control->begin()) {
        zlog_fatal(vid_c, "Failed to start IR control thread");
        kill_stream(&h);
    }

    zlog_info(vid_c, "Starting main loop");
    rts_av_buffer *vid_buffer = nullptr;

    uint8_t failed_polls = 0;
    uint8_t failed_captures = 0;
    uint8_t failed_writes = 0;
    int poll_ret = 0;
    int recv_ret = 0;

    uint32_t frame_count = 0;

    // In your capture loop:
    while (!g_exit) {
        poll_ret = rts_av_poll(h.h264);
        if (RTS_IS_ERR_VALUE(RTS_ERRNO(poll_ret))) {
            zlog_error(vid_c, "Error polling H264 channel: %d", poll_ret);
            failed_polls++;
            if (failed_polls >= STREAMING_FAILURE_THRESHOLD) {
                zlog_fatal(vid_c, "Too many polling errors, exiting main loop");
                break;
            }
            continue;
        }
        failed_polls = 0;

        recv_ret = rts_av_recv(h.h264, &vid_buffer);
        if (RTS_IS_ERR_VALUE(RTS_ERRNO(recv_ret))) {
            zlog_error(vid_c, "Error receiving H264 buffer: %d", recv_ret);
            failed_captures++;
            if (failed_captures >= STREAMING_FAILURE_THRESHOLD) {
                zlog_fatal(vid_c, "Too many capture errors, exiting main loop");
                break;
            }
            continue;
        }
        failed_captures = 0;

        if (!vid_buffer) {
            continue;
        }

        // if ((frame_count % 100) == 0) {
        //     zlog_info(vid_c, "Streaming frame %d, size %zu bytes", frame_count, vid_buffer->bytesused);
        //     // check and print all flags
        //     if (vid_buffer->flags & RTSTREAM_PKT_FLAG_KEY) {
        //         zlog_info(vid_c, "  Frame is a keyframe");
        //     }
        //     if (vid_buffer->flags & RTSTREAM_PKT_FLAG_NO_OUTPUT) {
        //         zlog_info(vid_c, "  Frame has NO_OUTPUT flag set");
        //     }
        //     if (vid_buffer->flags & RTSTREAM_PKT_FLAG_SP) {
        //         zlog_info(vid_c, "  Frame has SUPER P flag set");
        //     }
        //     if (vid_buffer->flags & RTSTREAM_PKT_FLAG_END) {
        //         zlog_info(vid_c, "  Frame has END flag set");
        //     }
        // }
        if (!(vid_buffer->flags & RTSTREAM_PKT_FLAG_NO_OUTPUT)) {
            const size_t written = fwrite(vid_buffer->vm_addr, 1, vid_buffer->bytesused, h.fifo);
            if (written != vid_buffer->bytesused) {
                zlog_error(vid_c, "Error writing to video sink FIFO: wrote %zu of %zu bytes", written, vid_buffer->bytesused);
                failed_writes++;
                if (failed_writes >= STREAMING_FAILURE_THRESHOLD) {
                    zlog_fatal(vid_c, "Too many write errors, exiting main loop");
                    rts_av_put_buffer(vid_buffer);
                    vid_buffer = nullptr;
                    break;
                }
            } else {
                failed_writes = 0;
            }
        }
        rts_av_put_buffer(vid_buffer);
        vid_buffer = nullptr;
        frame_count++;
    }
    zlog_info(vid_c, "Main loop exited, cleaning up");
    kill_stream(&h);
    return ret;
}

int main(int argc, char *argv[]) {
    signal(SIGINT, reinterpret_cast<__sighandler_t>(terminate));
    signal(SIGTERM, reinterpret_cast<__sighandler_t>(terminate));

    // init zlog
    errno = 0;
    int rc = zlog_init("zlog.conf");
    if (rc != 0) {
        fprintf(stderr, "zlog_init rc=%d errno=%d (%s)\n", rc, errno, strerror(errno));
        return -1;
    }

    vid_c = zlog_get_category("imager");
    if (!vid_c) {
        fprintf(stderr, "zlog_get_category(\"imager\") returned NULL (category not defined?)\n");
        return -1;
    }

    vid_c = zlog_get_category("imager");
    zlog_info(vid_c, "Realtek RTS imager streamer v%d.%d.%d started", VER_MAJOR, VER_MINOR, VER_PATCH);

    // Ensure settings.json exists
    struct stat buffer{};
    if (stat("settings.json", &buffer) != 0) {
        zlog_fatal(vid_c, "settings.json not found!");
        return -1;
    }

    // Load config file
    nlohmann::json json_cfg;
    try {
        std::ifstream cfg_file("settings.json");
        cfg_file >> json_cfg;
    } catch (const std::exception &e) {
        zlog_fatal(vid_c, "Failed to load settings.json: %s", e.what());
        return -1;
    }
    const int ret = start_stream(json_cfg);
    return 0;
}
