#ifndef IMAGER_STREAMER_H
#define IMAGER_STREAMER_H

#include <cstdint>
#include <cerrno>
#include <unistd.h>
#include <fcntl.h>
#include <csignal>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <pthread.h>
#include <fstream>
#include <atomic>
#include <map>

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
#define STREAMING_FAILURE_THRESHOLD 100

typedef struct {
    int32_t isp;
    int32_t h264;
    FILE* fifo;
    day_night_ctrl *ir_control;
} handlers;

std::atomic<bool> g_exit(false);
zlog_category_t *vid_c = nullptr;


#endif // IMAGER_STREAMER_H