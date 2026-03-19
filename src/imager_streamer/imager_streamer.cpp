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
#include <mutex>
#include <condition_variable>
#include <vector>
#include <netinet/in.h>

std::atomic<bool> g_exit(false);
zlog_category_t *vid_c = nullptr;

static std::atomic<bool> g_fifo_broken(false);

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

static void sigpipe_handler(int /*signum*/) {
    // Mark FIFO as broken - will be handled in main loop
    g_fifo_broken.store(true);
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


void *unlock_fifo_threadfn(void *data) {
    auto fifo_name = static_cast<const char *>(data);
    unsigned char buffer_fifo[1024];
    // Open for reading with O_NONBLOCK to prevent blocking forever if writer dies
    const int fd = open(fifo_name, O_RDONLY | O_NONBLOCK);
    if (fd >= 0) {
        // Read in a loop until the main thread signals exit
        while (!g_exit.load()) {
            ssize_t n = read(fd, buffer_fifo, sizeof(buffer_fifo));
            if (n <= 0) {
                usleep(10000); // 10ms sleep if no data
            }
        }
        close(fd);
    }
    return nullptr;
}

// Non-blocking write to FIFO with timeout - writes ENTIRE buffer or drops frame
// Returns: count on success, -1 on error, 0 if timeout (frame dropped)
static ssize_t write_to_fifo(int fd, const void *buf, size_t count) {
    if (fd < 0) return -1;

    const auto *data = static_cast<const uint8_t *>(buf);
    size_t remaining = count;
    size_t total_written = 0;

    // Calculate deadline for entire frame write (use longer timeout for large frames)
    // Allow ~500ms total for frame write to handle large I-frames
    const int frame_timeout_ms = 500;
    timespec start_time{};
    clock_gettime(CLOCK_MONOTONIC, &start_time);
    const int64_t deadline_ms = (start_time.tv_sec * 1000) + (start_time.tv_nsec / 1000000) + frame_timeout_ms;

    while (remaining > 0) {
        // Calculate remaining timeout
        timespec now{};
        clock_gettime(CLOCK_MONOTONIC, &now);
        int64_t now_ms = (now.tv_sec * 1000) + (now.tv_nsec / 1000000);
        int timeout_remaining = static_cast<int>(deadline_ms - now_ms);

        if (timeout_remaining <= 0) {
            // Timeout - couldn't write entire frame
            // If we wrote nothing, return 0 (drop). If partial, return -1 (error/corruption)
            if (total_written == 0) return 0;
            return -1; // Partial write is an error condition
        }

        // Use poll to wait for write availability
        pollfd pfd{};
        pfd.fd = fd;
        pfd.events = POLLOUT;
        pfd.revents = 0;

        const int poll_ret = poll(&pfd, 1, timeout_remaining);

        if (poll_ret < 0) {
            if (errno == EINTR) continue; // Interrupted, retry
            return -1; // Real error
        }

        if (poll_ret == 0) {
            // Timeout
            if (total_written == 0) return 0;
            return -1;
        }

        if (pfd.revents & (POLLERR | POLLHUP | POLLNVAL)) {
            // Pipe error - reader disconnected
            g_fifo_broken.store(true);
            return -1;
        }

        if (pfd.revents & POLLOUT) {
            const ssize_t written = write(fd, data + total_written, remaining);
            if (written < 0) {
                if (errno == EAGAIN || errno == EWOULDBLOCK) {
                    // Would block, try again after next poll
                    continue;
                }
                if (errno == EPIPE) {
                    g_fifo_broken.store(true);
                }
                return -1;
            }
            total_written += written;
            remaining -= written;
        }
    }

    return static_cast<ssize_t>(total_written);
}

// Desired pipe buffer size (256KB to handle large I-frames)
#define FIFO_BUFFER_SIZE (256 * 1024)

// Create or recreate the FIFO
static int create_fifo(const char *path) {
    // Remove any existing fifo file
    unlink(path);

    // Create a new fifo file
    if (mkfifo(path, 0666) < 0 && errno != EEXIST) {
        zlog_error(vid_c, "Failed to create fifo file %s: %s", path, strerror(errno));
        return -1;
    }

    // Open for writing with O_NONBLOCK and O_RDWR
    // O_RDWR prevents ENXIO when no reader is connected yet
    int fd = open(path, O_WRONLY | O_NONBLOCK);
    if (fd < 0) {
        if (errno == ENXIO) {
            // No reader yet - this is expected, try O_RDWR as fallback
            fd = open(path, O_RDWR | O_NONBLOCK);
        }
        if (fd < 0) {
            zlog_error(vid_c, "Failed to open fifo %s for writing: %s", path, strerror(errno));
            return -1;
        }
    }

    // Increase pipe buffer size to handle large I-frames without multiple write cycles
    const int pipe_size = fcntl(fd, F_SETPIPE_SZ, FIFO_BUFFER_SIZE);
    if (pipe_size < 0) {
        zlog_warn(vid_c, "Failed to set pipe buffer size: %s (continuing with default)", strerror(errno));
    } else {
        zlog_debug(vid_c, "Set pipe buffer size to %d bytes", pipe_size);
    }

    zlog_debug(vid_c, "Created FIFO sink at %s (fd=%d)", path, fd);
    return fd;
}

uint8_t create_sink(int *sink_fd, const char *path, pthread_t *out_unlock_thread) {
    // Install SIGPIPE handler to prevent crashes on broken pipe
    struct sigaction sa{};
    sa.sa_handler = sigpipe_handler;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = 0;
    sigaction(SIGPIPE, &sa, nullptr);

    // Start the unlock/reader thread first
    pthread_t unlock_thread;
    if (pthread_create(&unlock_thread, nullptr, unlock_fifo_threadfn, const_cast<char *>(path)) != 0) {
        zlog_fatal(vid_c, "Failed to create fifo unlock thread");
        return false;
    }
    *out_unlock_thread = unlock_thread;
    zlog_info(vid_c, "Started fifo reader thread");

    // Give the reader thread a moment to open the FIFO
    usleep(50000); // 50ms

    // Now create the FIFO for writing
    *sink_fd = create_fifo(path);
    if (*sink_fd < 0) {
        zlog_fatal(vid_c, "Failed to create fifo sink");
        return false;
    }

    zlog_info(vid_c, "Video FIFO ready at %s", path);
    g_fifo_broken.store(false);
    return true;
}

void kill_stream(handlers *h) {
    zlog_info(vid_c, "Stopping and destroying RTS channels");
    g_exit = true;

    // IR THREAD TEAR DOWN
    zlog_info(vid_c, "Tearing down IR control");
    if (h->ir_control) {
        h->ir_control->stop();
        delete h->ir_control;
        h->ir_control = nullptr;
    }
    zlog_info(vid_c, "IR control stopped");

    // Join snapshot thread before AV teardown (it uses AV callbacks)
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

    // VIDEO TEAR DOWN
    if (h->isp >= 0 && h->h264 >= 0) {
        zlog_debug(vid_c, "Unbinding ISP and H264 channels");
        rts_av_stop_recv(h->h264);
        rts_av_unbind(h->isp, h->h264);
        zlog_debug(vid_c, "ISP and H264 channels unbound");
    }
    if (h->isp >= 0 && h->mjpeg >= 0) {
        zlog_debug(vid_c, "Unbinding ISP and MJPEG channels");
        rts_av_unbind(h->isp, h->mjpeg);
        zlog_debug(vid_c, "ISP and MJPEG channels unbound");
    }
    if (h->mjpeg >= 0) {
        zlog_debug(vid_c, "Disabling and destroying MJPEG channel");
        rts_av_disable_chn(h->mjpeg);
        rts_av_destroy_chn(h->mjpeg);
        h->mjpeg = -1;
        g_mjpeg_chn = -1;
        zlog_debug(vid_c, "MJPEG channel destroyed");
    }
    if (h->h264 >= 0) {
        zlog_debug(vid_c, "Stopping H264 receive and destroying channel");
        rts_av_disable_chn(h->h264);
        rts_av_destroy_chn(h->h264);
        h->h264 = -1;
        zlog_debug(vid_c, "H264 channel stopped and destroyed");
    }
    if (h->isp >= 0) {
        zlog_debug(vid_c, "Stopping ISP receive and destroying channel");
        rts_av_disable_chn(h->isp);
        rts_av_destroy_chn(h->isp);
        h->isp = -1;
        zlog_debug(vid_c, "ISP channel stopped and destroyed");
    }
    zlog_info(vid_c, "Stopped and destroyed RTS channels");

    rts_av_release();
    zlog_info(vid_c, "RTS AV released");

    // Join unlock thread before FIFO teardown (it reads from FIFO)
    if (h->unlock_thread_started) {
        pthread_join(h->unlock_thread, nullptr);
        h->unlock_thread_started = false;
        zlog_info(vid_c, "FIFO unlock thread joined");
    }

    // Teardown FIFO
    if (h->fifo_fd >= 0) {
        close(h->fifo_fd);
        h->fifo_fd = -1;
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
        .mjpeg = -1,
        .fifo_fd = -1,
        .ir_control = nullptr,
        .unlock_thread = 0,
        .unlock_thread_started = false,
        .snapshot_thread = 0,
        .snapshot_thread_started = false
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
    config_h264_chn(h.h264, cfg["encoder"]["max_bitrate"].get<uint32_t>(),
            cfg["encoder"]["min_bitrate"].get<uint32_t>(),
            cfg["encoder"]["target_bitrate"].get<uint32_t>());
    set_fps(cfg["encoder"]["fps"].get<uint8_t>());

    ret = rts_av_start_recv(h.h264);
    if (RTS_IS_ERR_VALUE(RTS_ERRNO(ret))) {
        zlog_fatal(vid_c, "Failed to start H264 receive with error %d", ret);
        kill_stream(&h);
        return -1;
    }

    if (!create_sink(&h.fifo_fd, VIDEO_FIFO, &h.unlock_thread)) {
        zlog_fatal(vid_c, "Failed to create video sink");
        kill_stream(&h);
        return -1;
    }
    h.unlock_thread_started = true;

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

    zlog_info(vid_c, "Starting main loop");
    rts_av_buffer *vid_buffer = nullptr;

    uint8_t failed_polls = 0;
    uint8_t failed_captures = 0;
    uint8_t consecutive_fifo_errors = 0;
    uint64_t last_fifo_recovery_time = 0;

    // Frame statistics
    struct {
        uint32_t total_frames;
        uint32_t keyframes;
        uint32_t dropped_frames;
        uint32_t dropped_keyframes;
        size_t total_bytes;
        size_t max_frame_size;
        size_t min_frame_size;
        uint32_t last_keyframe_interval;
        uint32_t frames_since_keyframe;
    } stats = {0, 0, 0, 0, 0, 0, SIZE_MAX, 0, 0};

    // Standby mode: when no reader is connected, we silently drop frames
    bool standby_mode = false;
    uint32_t standby_recovery_attempts = 0;

    // Main capture loop
    while (!g_exit.load()) {
        // Check if FIFO needs recovery
        if (g_fifo_broken.load()) {
            uint64_t now = static_cast<uint64_t>(time(nullptr)) * 1000;
            if (now - last_fifo_recovery_time > FIFO_RECOVERY_INTERVAL_MS) {
                // Only log recovery attempts if not already in standby mode
                if (!standby_mode) {
                    zlog_info(vid_c, "No reader connected, entering standby mode (frames will be dropped)");
                    standby_mode = true;
                }

                if (h.fifo_fd >= 0) {
                    close(h.fifo_fd);
                }
                h.fifo_fd = create_fifo(VIDEO_FIFO);
                if (h.fifo_fd >= 0) {
                    g_fifo_broken.store(false);
                    consecutive_fifo_errors = 0;
                    standby_recovery_attempts++;
                    // Don't log every recovery attempt, just count them
                }
                last_fifo_recovery_time = now;
            }
        }

        int poll_ret = rts_av_poll(h.h264);
        if (RTS_IS_ERR_VALUE(RTS_ERRNO(poll_ret))) {
            zlog_error(vid_c, "Error polling H264 channel: %d", poll_ret);
            failed_polls++;
            if (failed_polls >= STREAMING_FAILURE_THRESHOLD) {
                zlog_fatal(vid_c, "Too many polling errors, exiting main loop");
                break;
            }
            usleep(1000); // Brief sleep on error
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
            usleep(1000); // Brief sleep on error
            continue;
        }
        failed_captures = 0;

        if (!vid_buffer) {
            continue;
        }

        if (!(vid_buffer->flags & RTSTREAM_PKT_FLAG_NO_OUTPUT)) {
            const size_t frame_size = vid_buffer->bytesused;
            const bool is_keyframe = (vid_buffer->flags & RTSTREAM_PKT_FLAG_KEY) != 0;

            // Update frame size statistics
            if (frame_size > stats.max_frame_size) stats.max_frame_size = frame_size;
            if (frame_size < stats.min_frame_size) stats.min_frame_size = frame_size;
            stats.total_bytes += frame_size;

            // Track keyframes
            if (is_keyframe) {
                stats.keyframes++;
                stats.last_keyframe_interval = stats.frames_since_keyframe;
                stats.frames_since_keyframe = 0;
            } else {
                stats.frames_since_keyframe++;
            }

            // Use non-blocking write - will drop frame if FIFO is full
            ssize_t written = write_to_fifo(h.fifo_fd, vid_buffer->vm_addr, frame_size);

            if (written < 0) {
                // Error writing to FIFO - likely no reader or pipe broken
                consecutive_fifo_errors++;
                if (!standby_mode && consecutive_fifo_errors == 1) {
                    // Only log if not already in standby mode
                    zlog_debug(vid_c, "FIFO write error, will enter standby mode");
                }
                g_fifo_broken.store(true);

                // In standby mode, don't count toward fatal threshold
                if (!standby_mode && consecutive_fifo_errors >= STREAMING_FAILURE_THRESHOLD) {
                    zlog_fatal(vid_c, "Too many consecutive FIFO errors before standby, exiting main loop");
                    rts_av_put_buffer(vid_buffer);
                    vid_buffer = nullptr;
                    break;
                }
            } else if (written == 0) {
                // Frame dropped due to full FIFO (timeout waiting for space)
                stats.dropped_frames++;
                // Only log keyframe drops, and only if not in standby (in standby, all drops are expected)
                if (is_keyframe && !standby_mode) {
                    stats.dropped_keyframes++;
                    zlog_warn(vid_c, "Dropped KEYFRAME #%u (size=%zu) - stream may glitch until next keyframe!",
                              stats.dropped_keyframes, frame_size);
                }
                consecutive_fifo_errors = 0; // Reset - dropping frames is not a fatal error
            } else if (static_cast<size_t>(written) != frame_size) {
                // Partial write - shouldn't happen anymore, but handle it
                if (!standby_mode) {
                    zlog_warn(vid_c, "Partial write to FIFO: wrote %zd of %zu bytes", written, frame_size);
                }
                consecutive_fifo_errors++;
            } else {
                // Successful write - reader is active
                if (standby_mode) {
                    zlog_info(vid_c, "Reader connected, exiting standby mode (recovery attempts: %u)",
                              standby_recovery_attempts);
                    standby_mode = false;
                    standby_recovery_attempts = 0;
                }
                consecutive_fifo_errors = 0;
            }
        }

        rts_av_put_buffer(vid_buffer);
        vid_buffer = nullptr;
        stats.total_frames++;

        // Periodic status log (every ~2.5 minutes at 20fps)
        if ((stats.total_frames % 3000) == 0) {
            size_t avg_frame_size = stats.total_frames > 0 ? stats.total_bytes / stats.total_frames : 0;
            zlog_info(vid_c, "Stats: frames=%u, keyframes=%u (interval=%u), dropped=%u (keyframes=%u), "
                             "size avg=%zu min=%zu max=%zu bytes",
                      stats.total_frames, stats.keyframes, stats.last_keyframe_interval,
                      stats.dropped_frames, stats.dropped_keyframes,
                      avg_frame_size, stats.min_frame_size == SIZE_MAX ? 0 : stats.min_frame_size,
                      stats.max_frame_size);
        }
    }

    // Final statistics
    size_t avg_frame_size = stats.total_frames > 0 ? stats.total_bytes / stats.total_frames : 0;
    zlog_info(vid_c, "Main loop exited. Final stats: frames=%u, keyframes=%u, dropped=%u (keyframes=%u), "
                     "size avg=%zu min=%zu max=%zu bytes",
              stats.total_frames, stats.keyframes, stats.dropped_frames, stats.dropped_keyframes,
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
