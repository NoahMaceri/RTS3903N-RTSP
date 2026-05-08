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
#include "rtsp_worker.h"
#include <mutex>
#include <condition_variable>
#include <vector>
#include <netinet/in.h>
#include <sys/time.h>

std::atomic<bool> g_exit(false);
zlog_category_t *vid_c = nullptr;

// Audio capture globals
static std::atomic<bool> g_audio_enabled(false);
static int32_t g_audio_capture_chn = -1;
static int32_t g_audio_encode_chn = -1;


// Set audio capture volume using ALSA mixer API
// gain: 0-100 percentage
static int set_alsa_capture_volume(int gain) {
    snd_mixer_t *mixer = nullptr;
    snd_mixer_elem_t *elem = nullptr;
    snd_mixer_selem_id_t *sid = nullptr;
    int ret = -1;

    // Open mixer
    if (snd_mixer_open(&mixer, 0) < 0) {
        zlog_warn(vid_c, "ALSA: Failed to open mixer");
        return -1;
    }

    // Attach to default card
    if (snd_mixer_attach(mixer, "default") < 0) {
        zlog_warn(vid_c, "ALSA: Failed to attach mixer to default");
        snd_mixer_close(mixer);
        return -1;
    }

    // Register and load
    if (snd_mixer_selem_register(mixer, nullptr, nullptr) < 0) {
        zlog_warn(vid_c, "ALSA: Failed to register mixer");
        snd_mixer_close(mixer);
        return -1;
    }

    if (snd_mixer_load(mixer) < 0) {
        zlog_warn(vid_c, "ALSA: Failed to load mixer");
        snd_mixer_close(mixer);
        return -1;
    }

    // Set all relevant capture gain controls for this hardware
    const char *capture_names[] = {"Real Amic", "Front Amic", "ADC Compensate", nullptr};

    snd_mixer_selem_id_alloca(&sid);

    for (int i = 0; capture_names[i] != nullptr; i++) {
        snd_mixer_selem_id_set_name(sid, capture_names[i]);
        snd_mixer_selem_id_set_index(sid, 0);

        elem = snd_mixer_find_selem(mixer, sid);
        if (elem && snd_mixer_selem_has_capture_volume(elem)) {
            long min, max;
            snd_mixer_selem_get_capture_volume_range(elem, &min, &max);
            long vol = min + (max - min) * gain / 100;
            snd_mixer_selem_set_capture_volume_all(elem, vol);
            zlog_info(vid_c, "ALSA: Set '%s' to %ld (range %ld-%ld)",
                      capture_names[i], vol, min, max);
            ret = 0;
        }
    }

    snd_mixer_close(mixer);
    return ret;
}

// Snapshot handling globals
static int g_mjpeg_chn = -1;
static std::mutex g_snapshot_mutex;
static std::condition_variable g_snapshot_cv;
static std::vector<uint8_t> g_snapshot_data;
static std::atomic<bool> g_snapshot_ready(false);
static std::atomic<bool> g_snapshot_requested(false);
static int g_snapshot_socket = -1;

// Callback for MJPEG snapshot capture
static void snapshot_callback(void *priv, rts_av_profile *profile, rts_av_buffer *buffer) {
    if (buffer && buffer->bytesused > 0) {
        std::lock_guard<std::mutex> lock(g_snapshot_mutex);
        g_snapshot_data.assign(
            static_cast<uint8_t*>(buffer->vm_addr),
            static_cast<uint8_t*>(buffer->vm_addr) + buffer->bytesused
        );
        g_snapshot_ready.store(true);
        g_snapshot_cv.notify_all();
        zlog_debug(vid_c, "Snapshot captured: %u bytes", buffer->bytesused);
    }
}

// Thread to handle snapshot socket requests
static void *snapshot_server_thread(void *arg) {
    int server_fd = -1;
    sockaddr_un addr{};

    // Remove old socket file if exists
    unlink(SNAPSHOT_SOCKET);

    // Create Unix domain socket
    server_fd = socket(AF_UNIX, SOCK_STREAM, 0);
    if (server_fd < 0) {
        zlog_error(vid_c, "Failed to create snapshot socket: %s", strerror(errno));
        return nullptr;
    }

    memset(&addr, 0, sizeof(addr));
    addr.sun_family = AF_UNIX;
    strncpy(addr.sun_path, SNAPSHOT_SOCKET, sizeof(addr.sun_path) - 1);

    if (bind(server_fd, reinterpret_cast<struct sockaddr *>(&addr), sizeof(addr)) < 0) {
        zlog_error(vid_c, "Failed to bind snapshot socket: %s", strerror(errno));
        close(server_fd);
        return nullptr;
    }

    if (listen(server_fd, 5) < 0) {
        zlog_error(vid_c, "Failed to listen on snapshot socket: %s", strerror(errno));
        close(server_fd);
        return nullptr;
    }

    // Make socket non-blocking for clean shutdown
    fcntl(server_fd, F_SETFL, O_NONBLOCK);
    g_snapshot_socket = server_fd;

    zlog_info(vid_c, "Snapshot server listening on %s", SNAPSHOT_SOCKET);

    while (!g_exit.load()) {
        struct pollfd pfd = {server_fd, POLLIN, 0};
        int ret = poll(&pfd, 1, 500);  // 500ms timeout

        if (ret <= 0) continue;

        int client_fd = accept(server_fd, nullptr, nullptr);
        if (client_fd < 0) continue;

        zlog_debug(vid_c, "Snapshot client connected");

        // Request a snapshot via callback
        if (g_mjpeg_chn >= 0) {
            g_snapshot_ready.store(false);
            g_snapshot_requested.store(true);

            rts_av_callback cb{};
            cb.func = snapshot_callback;
            cb.start = 0;
            cb.times = 1;
            cb.interval = 0;
            cb.type = RTS_AV_CB_TYPE_ASYNC;
            cb.priv = nullptr;

            ret = rts_av_set_callback(g_mjpeg_chn, &cb, 0);
            if (ret) {
                zlog_error(vid_c, "Failed to set snapshot callback: %d", ret);
                close(client_fd);
                continue;
            }

            // Wait for snapshot with timeout
            {
                std::unique_lock<std::mutex> lock(g_snapshot_mutex);
                if (g_snapshot_cv.wait_for(lock, std::chrono::seconds(5),
                    []{ return g_snapshot_ready.load(); })) {
                    // Send snapshot size first (4 bytes, network order)
                    uint32_t size = htonl(g_snapshot_data.size());
                    write(client_fd, &size, sizeof(size));
                    // Send snapshot data
                    write(client_fd, g_snapshot_data.data(), g_snapshot_data.size());
                    zlog_debug(vid_c, "Sent snapshot: %zu bytes", g_snapshot_data.size());
                } else {
                    zlog_warn(vid_c, "Snapshot timeout");
                    uint32_t size = 0;
                    write(client_fd, &size, sizeof(size));
                }
            }
        } else {
            uint32_t size = 0;
            write(client_fd, &size, sizeof(size));
        }

        close(client_fd);
        g_snapshot_requested.store(false);
    }

    close(server_fd);
    unlink(SNAPSHOT_SOCKET);
    zlog_info(vid_c, "Snapshot server stopped");
    return nullptr;
}

static void terminate(int /*signum*/) {
    g_exit = true;
}

uint8_t config_h264_chn(const int h264_ch, const nlohmann::json &enc) {
    rts_video_h264_ctrl *h264_ctl = nullptr;

    const int ret = rts_av_query_h264_ctrl(h264_ch, &h264_ctl);
    if (h264_ctl == nullptr) {
        zlog_error(vid_c, "Failed to query H264 control for channel %d, ret %d", h264_ch, ret);
        return false;
    }
    rts_av_get_h264_ctrl(h264_ctl);

    if (ret) {
        zlog_error(vid_c, "Failed to get H264 control for channel %d, ret %d", h264_ch, ret);
        return false;
    }

    // Required fields — settings.json must specify these.
    const uint32_t target_bitrate = enc["target_bitrate"].get<uint32_t>();
    const uint32_t max_bitrate    = enc["max_bitrate"].get<uint32_t>();
    const uint32_t min_bitrate    = enc["min_bitrate"].get<uint32_t>();
    // Optional quality knobs — fall back to the values used before they
    // were promoted into settings.json so older config files still work.
    //   max_qp:         hard ceiling on QP (lower = better quality but
    //                   encoder may overshoot bitrate budget on motion).
    //   intra_qp_delta: I-frame QP offset relative to P (negative = sharper
    //                   keyframes; whole GOP looks better since P-frames
    //                   reference them).
    const int32_t  max_qp         = enc.value("max_qp",         38);
    const int32_t  intra_qp_delta = enc.value("intra_qp_delta", -2);

    h264_ctl->bitrate_mode = RTS_BITRATE_MODE_CBR;
    h264_ctl->bitrate              = target_bitrate;
    h264_ctl->max_bitrate          = max_bitrate;
    h264_ctl->min_bitrate          = min_bitrate;
    h264_ctl->qp                   = 30;
    h264_ctl->max_qp               = max_qp;
    h264_ctl->min_qp               = 22;
    h264_ctl->intra_qp_delta       = intra_qp_delta;
    h264_ctl->enable_cabac         = 1;
    h264_ctl->slice_size           = 80000;
    h264_ctl->super_p_period       = 0;
    h264_ctl->gdr                  = 0;
    h264_ctl->disable_deblocking_filter = 0;
    h264_ctl->sei_messages         = 0;
    rts_av_set_h264_ctrl(h264_ctl);
    rts_av_release_h264_ctrl(h264_ctl);

    zlog_info(vid_c, "Encoder: CBR target=%u max=%u min=%u, max_qp=%d, intra_qp_delta=%d (chn %d)",
              target_bitrate, max_bitrate, min_bitrate, max_qp, intra_qp_delta, h264_ch);
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



// Wall-clock microsecond timestamp for live555 fPresentationTime. Audio and
// video both use this so their relative timestamps stay consistent (live555
// derives RTCP/RTP timing from the diffs).
static uint64_t wall_clock_us() {
    timeval tv{};
    gettimeofday(&tv, nullptr);
    return static_cast<uint64_t>(tv.tv_sec) * 1000000ULL +
           static_cast<uint64_t>(tv.tv_usec);
}

// Audio capture thread. Always drains the encoder so its buffer pool doesn't
// stall. Hands frames off to rtsp_worker only while a client is consuming
// audio — when nobody is listening, frames are recv'd and dropped silently.
static void *audio_capture_thread(void *arg) {
    auto *h = static_cast<handlers *>(arg);

    zlog_info(vid_c, "Audio capture thread started");

    uint32_t frames_captured = 0;
    uint8_t  consecutive_errors = 0;
    bool     was_idle = true;

    while (!g_exit.load() && g_audio_enabled.load()) {
        int poll_ret = rts_av_poll(h->audio_encode);
        if (RTS_IS_ERR_VALUE(RTS_ERRNO(poll_ret))) {
            consecutive_errors++;
            if (consecutive_errors >= STREAMING_FAILURE_THRESHOLD) {
                zlog_error(vid_c, "Audio: too many polling errors, stopping thread");
                break;
            }
            usleep(1000);
            continue;
        }
        consecutive_errors = 0;

        rts_av_buffer *audio_buffer = nullptr;
        int recv_ret = rts_av_recv(h->audio_encode, &audio_buffer);
        if (RTS_IS_ERR_VALUE(RTS_ERRNO(recv_ret))) {
            usleep(1000);
            continue;
        }

        if (!audio_buffer || audio_buffer->bytesused == 0) {
            if (audio_buffer) rts_av_put_buffer(audio_buffer);
            continue;
        }

        if (rtsp_worker::audio_active()) {
            if (was_idle) {
                zlog_info(vid_c, "Audio: reader connected");
                was_idle = false;
            }
            rtsp_worker::push_audio_frame(
                static_cast<uint8_t *>(audio_buffer->vm_addr),
                audio_buffer->bytesused,
                wall_clock_us());
            frames_captured++;
        } else if (!was_idle) {
            zlog_info(vid_c, "Audio: reader disconnected");
            was_idle = true;
        }

        rts_av_put_buffer(audio_buffer);

        if ((frames_captured % 8000) == 0 && frames_captured > 0) {
            zlog_info(vid_c, "Audio stats: captured=%u, dropped=%zu",
                      frames_captured, rtsp_worker::audio_dropped());
        }
    }

    zlog_info(vid_c, "Audio capture thread exiting (captured=%u)", frames_captured);
    return nullptr;
}

void kill_stream(handlers *h) {
    zlog_info(vid_c, "Stopping and destroying RTS channels");
    g_exit = true;

    // CPLD audio off (independent of channel state).
    if (!set_audio(false)) {
        zlog_warn(vid_c, "Failed to disable audio hardware via CPLD");
    } else {
        zlog_debug(vid_c, "Audio hardware disabled via CPLD");
    }

    // 1. Stop the IR control thread first. It calls into the ISP via
    //    g_isp_mutex, so it must be joined before we destroy the ISP channel.
    zlog_info(vid_c, "Tearing down IR control");
    if (h->ir_control) {
        h->ir_control->stop();
        delete h->ir_control;
        h->ir_control = nullptr;
    }
    zlog_info(vid_c, "IR control stopped");

    // 2. Stop the audio capture thread. Touches audio_encode/audio_capture,
    //    so we must join BEFORE tearing those down. The thread sees
    //    g_audio_enabled=false and exits its main loop.
    g_audio_enabled.store(false);
    if (h->audio_thread_started) {
        pthread_join(h->audio_thread, nullptr);
        h->audio_thread_started = false;
        zlog_info(vid_c, "Audio capture thread joined");
    }

    // 3. Stop the in-process RTSP worker. By now both producer threads (this
    //    one and the audio thread) have stopped pushing to its queues, so
    //    live555 can close client sessions and shut down its event loop.
    if (h->rtsp_worker_started) {
        rtsp_worker::stop();
        h->rtsp_worker_started = false;
        zlog_info(vid_c, "RTSP worker stopped");
    }

    // 4. Tear down audio channels (now safe — no thread references them).
    if (h->audio_capture >= 0 && h->audio_encode >= 0) {
        rts_av_stop_recv(h->audio_encode);
        rts_av_unbind(h->audio_capture, h->audio_encode);
    }
    if (h->audio_encode >= 0) {
        rts_av_disable_chn(h->audio_encode);
        rts_av_destroy_chn(h->audio_encode);
        h->audio_encode = -1;
        g_audio_encode_chn = -1;
    }
    if (h->audio_capture >= 0) {
        rts_av_disable_chn(h->audio_capture);
        rts_av_destroy_chn(h->audio_capture);
        h->audio_capture = -1;
        g_audio_capture_chn = -1;
    }
    zlog_info(vid_c, "Audio channels stopped and destroyed");

    // 4. Join the snapshot thread before destroying the MJPEG channel it
    //    registers callbacks against.
    if (h->snapshot_thread_started) {
        pthread_join(h->snapshot_thread, nullptr);
        h->snapshot_thread_started = false;
        g_snapshot_socket = -1; // Thread already closed its socket
        zlog_info(vid_c, "Snapshot server thread joined");
    } else {
        if (g_snapshot_socket >= 0) {
            close(g_snapshot_socket);
            g_snapshot_socket = -1;
        }
        unlink(SNAPSHOT_SOCKET);
    }

    // 5. Tear down video channels.
    if (h->isp >= 0 && h->h264 >= 0) {
        rts_av_stop_recv(h->h264);
        rts_av_unbind(h->isp, h->h264);
    }
    if (h->isp >= 0 && h->mjpeg >= 0) {
        rts_av_unbind(h->isp, h->mjpeg);
    }
    if (h->mjpeg >= 0) {
        rts_av_disable_chn(h->mjpeg);
        rts_av_destroy_chn(h->mjpeg);
        h->mjpeg = -1;
        g_mjpeg_chn = -1;
    }
    if (h->h264 >= 0) {
        rts_av_disable_chn(h->h264);
        rts_av_destroy_chn(h->h264);
        h->h264 = -1;
    }
    if (h->isp >= 0) {
        rts_av_disable_chn(h->isp);
        rts_av_destroy_chn(h->isp);
        h->isp = -1;
    }
    zlog_info(vid_c, "Stopped and destroyed RTS channels");

    rts_av_release();
    zlog_info(vid_c, "RTS AV released");

    zlog_info(vid_c, "Streamer exiting...");
    zlog_fini();
}


int start_stream(nlohmann::json &cfg) {
    if (rts_av_init()) {
        zlog_fatal(vid_c, "Failed to initialize RTS AV");
        return -1;
    }

    // Enable audio hardware via CPLD
    if (cfg.contains("audio") && cfg["audio"]["enabled"].get<bool>()) {
        if (!set_audio(true)) {
            zlog_warn(vid_c, "Failed to enable audio hardware via CPLD");
        } else {
            zlog_info(vid_c, "Audio hardware enabled via CPLD");
        }
    }

    handlers h = {
        .isp = -1,
        .h264 = -1,
        .mjpeg = -1,
        .audio_capture = -1,
        .audio_encode = -1,
        .ir_control = nullptr,
        .snapshot_thread = 0,
        .snapshot_thread_started = false,
        .audio_thread = 0,
        .audio_thread_started = false,
        .rtsp_worker_started = false
    };

    // -- VIDEO SETUP --
    struct rts_isp_attr isp_attr{};
    isp_attr.isp_id = 0;
    isp_attr.isp_buf_num = 2;
    h.isp = rts_av_create_isp_chn(&isp_attr);
    if (RTS_IS_ERR_VALUE(RTS_ERRNO(h.isp))) {
        zlog_fatal(vid_c, "Failed to create ISP channel with error %d", h.isp);
        kill_stream(&h);
        return -1;
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
        return -1;
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
        return -1;
    }
    zlog_debug(vid_c, "H264 channel created: chn %d, level %d, qp %d, bps %d, gop %d, videostab %d, rotation %d", h.h264, h264_attr.level, h264_attr.qp, h264_attr.bps, h264_attr.gop, h264_attr.videostab, h264_attr.rotation);

    // Create MJPEG encoder for snapshots
    struct rts_jpgenc_attr mjpeg_attr{};
    mjpeg_attr.rotation = RTS_AV_ROTATION_0;
    h.mjpeg = rts_av_create_mjpeg_chn(&mjpeg_attr);
    if (RTS_IS_ERR_VALUE(RTS_ERRNO(h.mjpeg))) {
        zlog_warn(vid_c, "Failed to create MJPEG channel with error %d - snapshots disabled", h.mjpeg);
        h.mjpeg = -1;
    } else {
        zlog_debug(vid_c, "MJPEG channel created: chn %d", h.mjpeg);
        g_mjpeg_chn = h.mjpeg;
    }

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
        return -1;
    }

    // Bind MJPEG encoder to ISP for snapshots
    if (h.mjpeg >= 0) {
        ret = rts_av_bind(h.isp, h.mjpeg);
        if (RTS_IS_ERR_VALUE(RTS_ERRNO(ret))) {
            zlog_warn(vid_c, "Failed to bind ISP & MJPEG encoder with error %d - snapshots disabled", ret);
            rts_av_destroy_chn(h.mjpeg);
            h.mjpeg = -1;
            g_mjpeg_chn = -1;
        }
    }

    ret = rts_av_enable_chn(h.isp);
    if (RTS_IS_ERR_VALUE(RTS_ERRNO(ret))) {
        zlog_fatal(vid_c, "Failed to enable ISP channel with error %d", ret);
        kill_stream(&h);
        return -1;
    }

    ret = rts_av_enable_chn(h.h264);
    if (RTS_IS_ERR_VALUE(RTS_ERRNO(ret))) {
        zlog_fatal(vid_c, "Failed to enable H264 channel with error %d", ret);
        kill_stream(&h);
        return -1;
    }

    // Enable MJPEG channel for snapshots
    if (h.mjpeg >= 0) {
        ret = rts_av_enable_chn(h.mjpeg);
        if (RTS_IS_ERR_VALUE(RTS_ERRNO(ret))) {
            zlog_warn(vid_c, "Failed to enable MJPEG channel with error %d - snapshots disabled", ret);
            rts_av_unbind(h.isp, h.mjpeg);
            rts_av_destroy_chn(h.mjpeg);
            h.mjpeg = -1;
            g_mjpeg_chn = -1;
        } else {
            zlog_info(vid_c, "MJPEG encoder enabled for snapshots");
        }
    }

    // H264 control can ONLY be applied after the channel is enabled
    config_h264_chn(h.h264, cfg["encoder"]);
    set_fps(cfg["encoder"]["fps"].get<uint8_t>());

    ret = rts_av_start_recv(h.h264);
    if (RTS_IS_ERR_VALUE(RTS_ERRNO(ret))) {
        zlog_fatal(vid_c, "Failed to start H264 receive with error %d", ret);
        kill_stream(&h);
        return -1;
    }


    // -- AUDIO SETUP --
    if (cfg.contains("audio") && cfg["audio"]["enabled"].get<bool>()) {
        zlog_info(vid_c, "Setting up audio capture");

        // Create audio capture channel
        struct rts_audio_attr audio_attr{};
        std::string dev_node = cfg["audio"].value("device", "hw:0,1");
        strncpy(audio_attr.dev_node, dev_node.c_str(), sizeof(audio_attr.dev_node) - 1);
        audio_attr.format = 16;  // 16-bit samples
        audio_attr.channels = 1;     // Mono - fixed for G.711
        audio_attr.rate = 8000;      // 8kHz - fixed for G.711 PCMU

        h.audio_capture = rts_av_create_audio_capture_chn(&audio_attr);
        if (RTS_IS_ERR_VALUE(RTS_ERRNO(h.audio_capture))) {
            zlog_warn(vid_c, "Failed to create audio capture channel with error %d - audio disabled", h.audio_capture);
            h.audio_capture = -1;
        } else {
            zlog_debug(vid_c, "Audio capture channel created: chn %d, dev %s, rate %u, channels %u",
                       h.audio_capture, audio_attr.dev_node, audio_attr.rate, audio_attr.channels);

            // Create audio encoder channel (G.711 u-law, 64kbps)
            h.audio_encode = rts_av_create_audio_encode_chn(RTS_AUDIO_TYPE_ID_ULAW, 64000);
            if (RTS_IS_ERR_VALUE(RTS_ERRNO(h.audio_encode))) {
                zlog_warn(vid_c, "Failed to create audio encoder channel with error %d - audio disabled", h.audio_encode);
                rts_av_destroy_chn(h.audio_capture);
                h.audio_capture = -1;
                h.audio_encode = -1;
            } else {
                zlog_debug(vid_c, "Audio encoder channel created: chn %d (G.711 u-law)", h.audio_encode);

                // Bind capture to encoder
                ret = rts_av_bind(h.audio_capture, h.audio_encode);
                if (RTS_IS_ERR_VALUE(RTS_ERRNO(ret))) {
                    zlog_warn(vid_c, "Failed to bind audio capture to encoder with error %d - audio disabled", ret);
                    rts_av_destroy_chn(h.audio_encode);
                    rts_av_destroy_chn(h.audio_capture);
                    h.audio_capture = -1;
                    h.audio_encode = -1;
                } else {
                    // Enable channels
                    ret = rts_av_enable_chn(h.audio_capture);
                    if (RTS_IS_ERR_VALUE(RTS_ERRNO(ret))) {
                        zlog_warn(vid_c, "Failed to enable audio capture channel with error %d", ret);
                    }

                    ret = rts_av_enable_chn(h.audio_encode);
                    if (RTS_IS_ERR_VALUE(RTS_ERRNO(ret))) {
                        zlog_warn(vid_c, "Failed to enable audio encoder channel with error %d", ret);
                    }

                    ret = rts_av_start_recv(h.audio_encode);
                    if (RTS_IS_ERR_VALUE(RTS_ERRNO(ret))) {
                        zlog_warn(vid_c, "Failed to start audio recv with error %d", ret);
                    } else {
                        g_audio_capture_chn = h.audio_capture;
                        g_audio_encode_chn = h.audio_encode;
                        g_audio_enabled.store(true);

                        // Set capture volume/gain (0-100%)
                        int gain = cfg["audio"].value("gain", 80);
                        if (gain < 0) gain = 0;
                        if (gain > 100) gain = 100;
                        if (set_alsa_capture_volume(gain) == 0) {
                            zlog_info(vid_c, "Audio capture volume set to %d%%", gain);
                        } else {
                            zlog_warn(vid_c, "Failed to set audio capture volume");
                        }

                        // Start audio capture thread (tracked in handlers so
                        // kill_stream can join it before destroying channels).
                        if (pthread_create(&h.audio_thread, nullptr, audio_capture_thread, &h) != 0) {
                            zlog_warn(vid_c, "Failed to start audio capture thread");
                            g_audio_enabled.store(false);
                        } else {
                            h.audio_thread_started = true;
                            zlog_info(vid_c, "Audio streaming enabled (G.711 u-law, %u Hz, %u ch)",
                                      audio_attr.rate, audio_attr.channels);
                        }
                    }
                }
            }
        }
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
        return -1;
    }

    // Start snapshot server thread if MJPEG is available
    if (h.mjpeg >= 0) {
        if (pthread_create(&h.snapshot_thread, nullptr, snapshot_server_thread, nullptr) != 0) {
            zlog_warn(vid_c, "Failed to start snapshot server thread");
        } else {
            h.snapshot_thread_started = true;
            zlog_info(vid_c, "Snapshot server started");
        }
    }

    // Start the in-process RTSP worker. Must come after AV channels are up
    // so that any client connecting at startup sees a working pipeline.
    rtsp_worker::Config rcfg;
    rcfg.port          = cfg["rtsp"]["port"].get<uint16_t>();
    rcfg.stream_name   = cfg["rtsp"]["name"].get<std::string>();
    rcfg.username      = cfg["rtsp"]["username"].get<std::string>();
    rcfg.password      = cfg["rtsp"]["password"].get<std::string>();
    rcfg.audio_enabled = g_audio_enabled.load();
    if (!rtsp_worker::start(rcfg)) {
        zlog_fatal(vid_c, "Failed to start RTSP worker");
        kill_stream(&h);
        return -1;
    }
    h.rtsp_worker_started = true;

    zlog_info(vid_c, "Starting main loop");
    rts_av_buffer *vid_buffer = nullptr;

    uint8_t failed_polls = 0;
    uint8_t failed_captures = 0;

    // Frame statistics
    struct {
        uint32_t total_frames;
        uint32_t keyframes;
        uint32_t dropped_keyframes;
        size_t total_bytes;
        size_t max_frame_size;
        size_t min_frame_size;
        uint32_t last_keyframe_interval;
        uint32_t frames_since_keyframe;
    } stats = {0, 0, 0, 0, 0, SIZE_MAX, 0, 0};

    // Reader-presence state. rtsp_worker::video_active() reflects whether
    // live555 has a live H.264 source for at least one client. need_keyframe
    // gates forwarding until the next IDR after each fresh attach so live555
    // always starts on a keyframe.
    bool was_idle = true;
    bool need_keyframe = false;

    while (!g_exit.load()) {
        // Honor IDR requests from live555 (set by a freshly created source).
        if (rtsp_worker::consume_idr_request()) {
            if (rts_av_request_h264_key_frame(h.h264) != 0) {
                zlog_warn(vid_c, "rts_av_request_h264_key_frame failed");
            }
            need_keyframe = true;
        }

        int poll_ret = rts_av_poll(h.h264);
        if (RTS_IS_ERR_VALUE(RTS_ERRNO(poll_ret))) {
            zlog_error(vid_c, "Error polling H264 channel: %d", poll_ret);
            failed_polls++;
            if (failed_polls >= STREAMING_FAILURE_THRESHOLD) {
                zlog_fatal(vid_c, "Too many polling errors, exiting main loop");
                break;
            }
            usleep(1000);
            continue;
        }
        failed_polls = 0;

        int recv_ret = rts_av_recv(h.h264, &vid_buffer);
        if (RTS_IS_ERR_VALUE(RTS_ERRNO(recv_ret))) {
            zlog_error(vid_c, "Error receiving H264 buffer: %d", recv_ret);
            failed_captures++;
            if (failed_captures >= STREAMING_FAILURE_THRESHOLD) {
                zlog_fatal(vid_c, "Too many capture errors, exiting main loop");
                break;
            }
            usleep(1000);
            continue;
        }
        failed_captures = 0;

        if (!vid_buffer) continue;

        if (!(vid_buffer->flags & RTSTREAM_PKT_FLAG_NO_OUTPUT)) {
            const size_t frame_size  = vid_buffer->bytesused;
            const bool   is_keyframe = (vid_buffer->flags & RTSTREAM_PKT_FLAG_KEY) != 0;

            if (frame_size > stats.max_frame_size) stats.max_frame_size = frame_size;
            if (frame_size < stats.min_frame_size) stats.min_frame_size = frame_size;
            stats.total_bytes += frame_size;
            if (is_keyframe) {
                stats.keyframes++;
                stats.last_keyframe_interval = stats.frames_since_keyframe;
                stats.frames_since_keyframe = 0;
            } else {
                stats.frames_since_keyframe++;
            }

            // Forward to live555 if a client is attached and we're past the
            // post-attach keyframe gate.
            const bool active = rtsp_worker::video_active();
            if (active && was_idle) {
                zlog_info(vid_c, "Reader connected; resuming stream");
                was_idle = false;
            } else if (!active && !was_idle) {
                zlog_info(vid_c, "Reader disconnected; pausing stream");
                was_idle = true;
            }
            if (active && (!need_keyframe || is_keyframe)) {
                rtsp_worker::push_video_frame(
                    static_cast<uint8_t *>(vid_buffer->vm_addr),
                    frame_size, is_keyframe, wall_clock_us());
                if (is_keyframe) need_keyframe = false;
            }
        }

        rts_av_put_buffer(vid_buffer);
        vid_buffer = nullptr;
        stats.total_frames++;

        if ((stats.total_frames % 3000) == 0) {
            size_t avg = stats.total_frames ? stats.total_bytes / stats.total_frames : 0;
            zlog_info(vid_c, "Stats: frames=%u, keyframes=%u (interval=%u), q-dropped=%zu (keyframe-drops=%u), "
                             "size avg=%zu min=%zu max=%zu bytes",
                      stats.total_frames, stats.keyframes, stats.last_keyframe_interval,
                      rtsp_worker::video_dropped(), stats.dropped_keyframes,
                      avg, stats.min_frame_size == SIZE_MAX ? 0 : stats.min_frame_size,
                      stats.max_frame_size);
        }
    }

    // Final statistics
    size_t avg_frame_size = stats.total_frames > 0 ? stats.total_bytes / stats.total_frames : 0;
    zlog_info(vid_c, "Main loop exited. Final stats: frames=%u, keyframes=%u, q-dropped=%zu (keyframe-drops=%u), "
                     "size avg=%zu min=%zu max=%zu bytes",
              stats.total_frames, stats.keyframes, rtsp_worker::video_dropped(), stats.dropped_keyframes,
              avg_frame_size, stats.min_frame_size == SIZE_MAX ? 0 : stats.min_frame_size,
              stats.max_frame_size);
    kill_stream(&h);
    return 0;
}

int main(int argc, char *argv[]) {
    struct sigaction sa{};
    sa.sa_handler = terminate;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = 0;
    sigaction(SIGINT, &sa, nullptr);
    sigaction(SIGTERM, &sa, nullptr);

    // Ignore SIGPIPE so a reader hanging up surfaces as EPIPE on write()
    // rather than killing the process.
    struct sigaction sigpipe_sa{};
    sigpipe_sa.sa_handler = SIG_IGN;
    sigemptyset(&sigpipe_sa.sa_mask);
    sigaction(SIGPIPE, &sigpipe_sa, nullptr);

    // init zlog using an absolute path — config.sh cd's into /var/tmp/sd/
    // before launching us, but the supervisor's subshell relies on inherited
    // CWD which has bitten us before. Absolute is robust regardless.
    errno = 0;
    int rc = zlog_init("/var/tmp/sd/zlog.conf");
    if (rc != 0) {
        fprintf(stderr, "zlog_init rc=%d errno=%d (%s)\n", rc, errno, strerror(errno));
        return -1;
    }

    vid_c = zlog_get_category("imager");
    if (!vid_c) {
        fprintf(stderr, "zlog_get_category(\"imager\") returned NULL (category not defined?)\n");
        return -1;
    }

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
    return start_stream(json_cfg) < 0 ? EXIT_FAILURE : EXIT_SUCCESS;
}
