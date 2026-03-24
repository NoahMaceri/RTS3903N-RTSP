#ifndef ISP_UTILS_H
#define ISP_UTILS_H

#include <cstdint>
#include <map>
#include <mutex>
#include <string>

#include <rtsvideo.h>
#include <zlog.h>

// Mutex to protect ISP control access from multiple threads
extern std::mutex g_isp_mutex;

extern const std::map<std::string, enum enum_rts_video_ctrl_id> param_setting_map;

bool change_isp_setting(enum enum_rts_video_ctrl_id type, int32_t value, zlog_category_t *logger);
int32_t get_isp_setting(enum enum_rts_video_ctrl_id type, zlog_category_t *logger);

#endif // ISP_UTILS_H
