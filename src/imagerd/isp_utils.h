#ifndef ISP_UTILS_H
#define ISP_UTILS_H

#include <cstdint>
#include <map>
#include <mutex>
#include <string>
#include <vector>

#include <rtsvideo.h>
#include <zlog.h>

// Mutex to protect ISP control access from multiple threads
extern std::mutex g_isp_mutex;

extern const std::map<std::string, enum enum_rts_video_ctrl_id> param_setting_map;

bool change_isp_setting(enum enum_rts_video_ctrl_id type, int32_t value, zlog_category_t *logger);

// Returns false (and leaves `out` untouched) if the ISP read fails.
bool get_isp_setting(enum enum_rts_video_ctrl_id type, int32_t &out, zlog_category_t *logger);

// Snapshot of auto-exposure statistics from the ISP. Filled in by
// read_ae_stats(); empty histogram means the read failed.
struct AeStats {
    uint8_t y_mean = 0;          // overall luma mean, 0–255
    std::vector<uint16_t> hist;  // luma histogram, hist[i] = pixel count in bin i
};

// Refresh and copy the current frame's AE statistics. Internally takes
// g_isp_mutex around the rts_av_query/refresh/get/release sequence, so
// safe to call from any thread (including alongside change_isp_setting).
bool read_ae_stats(AeStats &out, zlog_category_t *logger);

#endif // ISP_UTILS_H
