/*
 * Copyright (c) 2025 Noah Maceri
 * GPLv3 — see top-level LICENSE.
 *
 * isp_ctrl — CLI wrapper around the Realtek ISP control API. Each invocation
 * opens the AV layer, runs one subcommand, and exits. Used by the ONVIF
 * Imaging / Media services as their backend.
 */

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <map>
#include <string>
#include <unistd.h>
#include <vector>

#include <rtsavapi.h>
#include <rtsvideo.h>
#include <json.hpp>

#define SETTINGS_FILE "/var/tmp/sd/settings.json"

// Runtime override for day_night_ctrl. Special key handled outside the
// ISP table: maps "auto" → no file (detection runs), "on" → "night",
// "off" → "day". The imagerd thread polls the file each tick.
#define IR_CUT_OVERRIDE_FILE "/var/tmp/sd/ir_cut_override.state"
static const char *IR_CUT_KEY = "ir_cut_filter_mode";

static int set_ir_cut_override(const char *mode) {
    if (mode == nullptr) return 1;
    if (!strcasecmp(mode, "auto")) {
        unlink(IR_CUT_OVERRIDE_FILE);
        return 0;
    }
    const char *contents = nullptr;
    if (!strcasecmp(mode, "on")  || !strcasecmp(mode, "night")) contents = "night\n";
    if (!strcasecmp(mode, "off") || !strcasecmp(mode, "day"))   contents = "day\n";
    if (contents == nullptr) {
        fprintf(stderr, "isp_ctrl: %s must be auto|on|off, got '%s'\n", IR_CUT_KEY, mode);
        return 2;
    }
    // write-tmp + rename so day_night_ctrl never sees a partial file.
    char tmp[sizeof(IR_CUT_OVERRIDE_FILE) + 4];
    snprintf(tmp, sizeof(tmp), "%s.tmp", IR_CUT_OVERRIDE_FILE);
    FILE *f = fopen(tmp, "w");
    if (f == nullptr) { perror(tmp); return 1; }
    fputs(contents, f);
    if (fclose(f) != 0 || rename(tmp, IR_CUT_OVERRIDE_FILE) != 0) {
        perror(tmp);
        unlink(tmp);
        return 1;
    }
    return 0;
}

static int get_ir_cut_override() {
    FILE *f = fopen(IR_CUT_OVERRIDE_FILE, "r");
    if (f == nullptr) { puts("AUTO"); return 0; }
    char buf[16] = {};
    fread(buf, 1, sizeof(buf) - 1, f);
    fclose(f);
    if      (!strncmp(buf, "night", 5)) puts("ON");
    else if (!strncmp(buf, "day",   3)) puts("OFF");
    else                                puts("AUTO");
    return 0;
}

enum ParamType { PARAM_TYPE_RANGE, PARAM_TYPE_BOOLEAN, PARAM_TYPE_ENUM };

struct EnumOption { int value; std::string label; };

struct ParamInfo {
    std::string name;
    std::string display_name;
    std::string group;
    enum_rts_video_ctrl_id ctrl_id;
    ParamType type;
    std::vector<EnumOption> options;
};

static std::vector<ParamInfo> get_param_definitions() {
    std::vector<ParamInfo> p;

    p.push_back({"brightness", "Brightness", "image_quality", RTS_VIDEO_CTRL_ID_BRIGHTNESS, PARAM_TYPE_RANGE, {}});
    p.push_back({"contrast", "Contrast", "image_quality", RTS_VIDEO_CTRL_ID_CONTRAST, PARAM_TYPE_RANGE, {}});
    p.push_back({"saturation", "Saturation", "image_quality", RTS_VIDEO_CTRL_ID_SATURATION, PARAM_TYPE_RANGE, {}});
    p.push_back({"sharpness", "Sharpness", "image_quality", RTS_VIDEO_CTRL_ID_SHARPNESS, PARAM_TYPE_RANGE, {}});
    p.push_back({"hue", "Hue", "image_quality", RTS_VIDEO_CTRL_ID_HUE, PARAM_TYPE_RANGE, {}});
    p.push_back({"gamma", "Gamma", "image_quality", RTS_VIDEO_CTRL_ID_GAMMA, PARAM_TYPE_RANGE, {}});
    p.push_back({"noise_reduction", "Noise Reduction", "image_quality", RTS_VIDEO_CTRL_ID_NOISE_REDUCTION, PARAM_TYPE_RANGE, {}});
    p.push_back({"detail_enhancement", "Detail Enhancement", "image_quality", RTS_VIDEO_CTRL_ID_DETAIL_ENHANCEMENT, PARAM_TYPE_RANGE, {}});
    p.push_back({"three_dnr", "3D Noise Reduction", "image_quality", RTS_VIDEO_CTRL_ID_3DNR, PARAM_TYPE_BOOLEAN, {}});
    p.push_back({"dehaze", "Dehaze", "image_quality", RTS_VIDEO_CTRL_ID_DEHAZE, PARAM_TYPE_BOOLEAN, {}});
    p.push_back({"ldc", "Lens Distortion Correction", "image_quality", RTS_VIDEO_CTRL_ID_LDC, PARAM_TYPE_BOOLEAN, {}});

    p.push_back({"exposure_mode", "Exposure Mode", "exposure", RTS_VIDEO_CTRL_ID_EXPOSURE_MODE, PARAM_TYPE_ENUM,
        {{0, "Auto"}, {1, "Manual"}}});
    p.push_back({"exposure_priority", "Exposure Priority", "exposure", RTS_VIDEO_CTRL_ID_EXPOSURE_PRIORITY, PARAM_TYPE_ENUM,
        {{0, "Manual"}, {1, "Auto"}}});
    p.push_back({"blc", "Backlight Compensation", "exposure", RTS_VIDEO_CTRL_ID_BLC, PARAM_TYPE_BOOLEAN, {}});
    p.push_back({"wdr_mode", "WDR Mode", "exposure", RTS_VIDEO_CTRL_ID_WDR_MODE, PARAM_TYPE_ENUM,
        {{0, "Disabled"}, {1, "Manual"}, {2, "Auto"}}});
    p.push_back({"wdr_level", "WDR Level", "exposure", RTS_VIDEO_CTRL_ID_WDR_LEVEL, PARAM_TYPE_RANGE, {}});

    p.push_back({"awb_mode", "White Balance Mode", "white_balance", RTS_VIDEO_CTRL_ID_AWB_CTRL, PARAM_TYPE_ENUM,
        {{0, "Temperature"}, {1, "Auto"}, {2, "Component"}}});
    p.push_back({"red_balance", "Red Balance", "white_balance", RTS_VIDEO_CTRL_ID_RED_BALANCE, PARAM_TYPE_RANGE, {}});
    p.push_back({"green_balance", "Green Balance", "white_balance", RTS_VIDEO_CTRL_ID_GREEN_BALANCE, PARAM_TYPE_RANGE, {}});
    p.push_back({"blue_balance", "Blue Balance", "white_balance", RTS_VIDEO_CTRL_ID_BLUE_BALANCE, PARAM_TYPE_RANGE, {}});

    p.push_back({"ir_mode", "IR Mode", "day_night", RTS_VIDEO_CTRL_ID_IR_MODE, PARAM_TYPE_ENUM,
        {{0, "Day"}, {1, "Night"}, {2, "White Light"}}});
    p.push_back({"gray_mode", "Color Mode", "day_night", RTS_VIDEO_CTRL_ID_GRAY_MODE, PARAM_TYPE_ENUM,
        {{0, "Color"}, {1, "Grayscale"}}});
    p.push_back({"smart_ir_mode", "Smart IR Mode", "day_night", RTS_VIDEO_CTRL_ID_SMART_IR_MODE, PARAM_TYPE_ENUM,
        {{0, "Disabled"}, {1, "Auto"}, {2, "High Light Priority"}, {3, "Low Light Priority"}, {4, "Manual"}}});
    p.push_back({"smart_ir_manual_level", "Smart IR Level", "day_night", RTS_VIDEO_CTRL_ID_SMART_IR_MANUAL_LEVEL, PARAM_TYPE_RANGE, {}});
    p.push_back({"in_out_door_mode", "Indoor/Outdoor", "day_night", RTS_VIDEO_CTRL_ID_IN_OUT_DOOR_MODE, PARAM_TYPE_ENUM,
        {{0, "Outdoor"}, {1, "Indoor"}, {2, "Auto"}}});

    p.push_back({"mirror", "Mirror", "orientation", RTS_VIDEO_CTRL_ID_MIRROR, PARAM_TYPE_BOOLEAN, {}});
    p.push_back({"flip", "Flip", "orientation", RTS_VIDEO_CTRL_ID_FLIP, PARAM_TYPE_BOOLEAN, {}});
    p.push_back({"power_line_frequency", "Power Line Frequency", "orientation", RTS_VIDEO_CTRL_ID_PWR_FREQUENCY, PARAM_TYPE_ENUM,
        {{0, "60Hz"}, {1, "50Hz"}}});

    p.push_back({"zoom", "Zoom", "other", RTS_VIDEO_CTRL_ID_ZOOM, PARAM_TYPE_RANGE, {}});

    return p;
}

static std::map<std::string, ParamInfo> build_index(const std::vector<ParamInfo> &v) {
    std::map<std::string, ParamInfo> m;
    for (const auto &p : v) m[p.name] = p;
    return m;
}

static int get_ctrl(enum_rts_video_ctrl_id id, struct rts_video_control *out) {
    return rts_av_get_isp_ctrl(id, out);
}

static int set_ctrl(enum_rts_video_ctrl_id id, int value) {
    struct rts_video_control ctrl{};
    if (rts_av_get_isp_ctrl(id, &ctrl)) return -1;
    if (value < ctrl.minimum) value = ctrl.minimum;
    if (value > ctrl.maximum) value = ctrl.maximum;
    if (ctrl.step > 0) {
        const int rem = (value - ctrl.minimum) % ctrl.step;
        if (rem != 0) value -= rem;
    }
    ctrl.current_value = value;
    return rts_av_set_isp_ctrl(id, &ctrl) ? -1 : 0;
}

// Read settings.json, update isp.<name> = value, write back. No-op if the
// file can't be parsed (avoids stomping a hand-edited file).
static int persist_one(const std::string &name, int value) {
    nlohmann::json settings;
    {
        std::ifstream in(SETTINGS_FILE);
        if (in.is_open()) {
            try { in >> settings; }
            catch (...) { return -1; }
        }
    }
    if (!settings.contains("isp")) settings["isp"] = nlohmann::json::object();
    settings["isp"][name] = value;
    std::ofstream out(SETTINGS_FILE);
    if (!out.is_open()) return -1;
    out << settings.dump(2);
    return 0;
}

static int cmd_get(const std::map<std::string, ParamInfo> &idx, const std::string &name) {
    if (name == IR_CUT_KEY) return get_ir_cut_override();
    auto it = idx.find(name);
    if (it == idx.end()) {
        fprintf(stderr, "isp_ctrl: unknown key '%s'\n", name.c_str());
        return 2;
    }
    struct rts_video_control ctrl{};
    if (get_ctrl(it->second.ctrl_id, &ctrl)) {
        fprintf(stderr, "isp_ctrl: read failed for '%s'\n", name.c_str());
        return 1;
    }
    printf("%d\n", ctrl.current_value);
    return 0;
}

static int cmd_set(const std::map<std::string, ParamInfo> &idx, int argc, char **argv) {
    if (argc < 2 || argc % 2 != 0) {
        fprintf(stderr, "isp_ctrl: set requires alternating key value pairs\n");
        return 2;
    }
    int rc = 0;
    for (int i = 0; i < argc; i += 2) {
        const std::string name = argv[i];
        if (name == IR_CUT_KEY) {
            if (set_ir_cut_override(argv[i + 1]) != 0) rc = 1;
            continue;
        }
        const int value = atoi(argv[i + 1]);
        auto it = idx.find(name);
        if (it == idx.end()) {
            fprintf(stderr, "isp_ctrl: unknown key '%s'\n", name.c_str());
            rc = 2;
            continue;
        }
        if (set_ctrl(it->second.ctrl_id, value) < 0) {
            fprintf(stderr, "isp_ctrl: set failed for '%s'\n", name.c_str());
            rc = 1;
            continue;
        }
        if (persist_one(name, value) < 0) {
            fprintf(stderr, "isp_ctrl: persist failed for '%s'\n", name.c_str());
            rc = 1;
        }
    }
    return rc;
}

static int cmd_list(const std::vector<ParamInfo> &params) {
    for (const auto &p : params) {
        struct rts_video_control ctrl{};
        if (get_ctrl(p.ctrl_id, &ctrl)) continue;
        printf("%s=%d\n", p.name.c_str(), ctrl.current_value);
    }
    return 0;
}

// info: dump metadata as JSON so the Imaging service can populate
// GetOptions / GetImagingSettings without duplicating the param table.
static int cmd_info(const std::vector<ParamInfo> &params) {
    nlohmann::json out = nlohmann::json::object();
    for (const auto &p : params) {
        struct rts_video_control ctrl{};
        if (get_ctrl(p.ctrl_id, &ctrl)) continue;
        nlohmann::json j;
        j["display_name"] = p.display_name;
        j["group"] = p.group;
        j["min"] = ctrl.minimum;
        j["max"] = ctrl.maximum;
        j["step"] = ctrl.step;
        j["default"] = ctrl.default_value;
        j["current"] = ctrl.current_value;
        switch (p.type) {
            case PARAM_TYPE_RANGE:   j["type"] = "range";   break;
            case PARAM_TYPE_BOOLEAN: j["type"] = "boolean"; break;
            case PARAM_TYPE_ENUM: {
                j["type"] = "enum";
                nlohmann::json opts = nlohmann::json::array();
                for (const auto &o : p.options) {
                    opts.push_back({{"value", o.value}, {"label", o.label}});
                }
                j["options"] = opts;
                break;
            }
        }
        out[p.name] = j;
    }
    printf("%s\n", out.dump().c_str());
    return 0;
}

static int cmd_save(const std::vector<ParamInfo> &params) {
    nlohmann::json settings;
    {
        std::ifstream in(SETTINGS_FILE);
        if (in.is_open()) {
            try { in >> settings; } catch (...) { settings = nlohmann::json::object(); }
        }
    }
    if (!settings.contains("isp")) settings["isp"] = nlohmann::json::object();
    for (const auto &p : params) {
        struct rts_video_control ctrl{};
        if (get_ctrl(p.ctrl_id, &ctrl)) continue;
        settings["isp"][p.name] = ctrl.current_value;
    }
    std::ofstream out(SETTINGS_FILE);
    if (!out.is_open()) {
        fprintf(stderr, "isp_ctrl: cannot write %s\n", SETTINGS_FILE);
        return 1;
    }
    out << settings.dump(2);
    return 0;
}

static void usage(const char *a) {
    fprintf(stderr,
        "isp_ctrl — Realtek ISP CLI\n"
        "\n"
        "  %s get <key>                            print current value\n"
        "  %s set <key> <value> [<k> <v>...]       apply + persist to settings.json\n"
        "  %s list                                 \"key=value\" per line\n"
        "  %s info                                 JSON metadata (ranges/options)\n"
        "  %s save                                 snapshot live ISP -> settings.json\n",
        a, a, a, a, a);
    exit(2);
}

int main(int argc, char **argv) {
    if (argc < 2) usage(argv[0]);
    const char *cmd = argv[1];

    if (rts_av_init()) {
        fprintf(stderr, "isp_ctrl: rts_av_init failed\n");
        return 1;
    }

    auto params = get_param_definitions();
    auto idx = build_index(params);
    int rc = 0;

    if (!strcmp(cmd, "get")) {
        if (argc < 3) usage(argv[0]);
        rc = cmd_get(idx, argv[2]);
    } else if (!strcmp(cmd, "set")) {
        rc = cmd_set(idx, argc - 2, argv + 2);
    } else if (!strcmp(cmd, "list")) {
        rc = cmd_list(params);
    } else if (!strcmp(cmd, "info")) {
        rc = cmd_info(params);
    } else if (!strcmp(cmd, "save")) {
        rc = cmd_save(params);
    } else {
        usage(argv[0]);
    }

    rts_av_release();
    return rc;
}
