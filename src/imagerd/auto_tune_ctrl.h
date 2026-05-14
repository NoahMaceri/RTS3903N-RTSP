#ifndef AUTO_TUNE_CTRL_H
#define AUTO_TUNE_CTRL_H

#include <atomic>
#include <pthread.h>

#include <zlog.h>

// Periodically samples the ISP's auto-exposure statistics (mean luma +
// histogram) and nudges CONTRAST / SHARPNESS / WDR_LEVEL toward a
// scene-appropriate target. This is a layer *on top of* the SDK's
// built-in 3A — Realtek's AE/AWB are still doing the heavy lifting; we
// just adapt the post-ISP knobs to whatever scene the camera is
// currently looking at (low light, normal, hard backlight, etc.).
//
// Threading model mirrors `day_night_ctrl`: one pthread, cooperative
// shutdown via g_exit + an atomic running flag. ISP access goes through
// the project-wide `g_isp_mutex` so it serializes with the IR thread,
// the web UI's isp_ctrl CGI, and any other ISP writer.
class auto_tune_ctrl {
public:
    struct Config {
        bool     enabled        = true;
        uint32_t period_s       = 5;   // seconds between adjustments
        uint8_t  aggressiveness = 1;   // 0=conservative, 1=normal, 2=aggressive
    };

    auto_tune_ctrl(const Config &cfg, zlog_category_t *logger);
    ~auto_tune_ctrl();

    bool begin();
    void stop();

private:
    static void *thread_fn(void *arg);
    void         run_loop();
    void         tune_once();

    Config           cfg_;
    zlog_category_t *log_;
    pthread_t        thread_{};
    bool             thread_created_{false};
    std::atomic<bool> running_{false};

    // Last value we applied per knob. Seeded from get_isp_setting() on
    // thread start so the first iteration is a small capped step from the
    // camera's actual current setting rather than a jump.
    int last_contrast_  = -1;
    int last_sharpness_ = -1;
    int last_wdr_level_ = -1;

    // Luma bucket from the previous tick. Used for hysteresis on the
    // bucket boundaries — -1 means we haven't run yet, so the first tick
    // picks by hard thresholds.
    int last_bucket_ = -1;
};

#endif // AUTO_TUNE_CTRL_H
