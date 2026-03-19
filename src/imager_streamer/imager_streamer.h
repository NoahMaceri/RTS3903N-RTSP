#ifndef IMAGER_STREAMER_H
#define IMAGER_STREAMER_H

#include <cstdint>
#include <climits>
#include <cerrno>
#include <cstring>
#include <ctime>
#include <unistd.h>
#include <fcntl.h>
#include <csignal>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <poll.h>
#include <pthread.h>
#include <fstream>
#include <atomic>
#include <map>
#include <sys/socket.h>
#include <sys/un.h>

#include <rtsvideo.h>
#include <rts_errno.h>
#include <rtsavapi.h>

#include <json.hpp>
#include <zlog.h>
#include <ver.h>

#include "cpld.h"
#include "isp_utils.h"
#include "day_night_ctrl.h"

#define VIDEO_FIFO "/tmp/video.h264"
#define SNAPSHOT_SOCKET "/tmp/snapshot.sock"
#define STREAMING_FAILURE_THRESHOLD 100
#define FIFO_WRITE_TIMEOUT_MS 100
#define FIFO_RECOVERY_INTERVAL_MS 5000

typedef struct {
    int32_t isp;
    int32_t h264;
    int32_t mjpeg;  // MJPEG encoder for snapshots
    int fifo_fd;    // Changed from FILE* to raw fd for non-blocking I/O
    day_night_ctrl *ir_control;
    pthread_t unlock_thread;
    bool unlock_thread_started;
    pthread_t snapshot_thread;
    bool snapshot_thread_started;
} handlers;

extern std::atomic<bool> g_exit;
extern zlog_category_t *vid_c;


#endif // IMAGER_STREAMER_H