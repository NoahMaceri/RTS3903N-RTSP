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
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <rtsavapi.h>
#include <rtsvideo.h>
#include <json.hpp>

// Settings file path
#define SETTINGS_FILE "/var/tmp/sd/settings.json"

// Parameter type classification
enum ParamType {
    PARAM_TYPE_RANGE,    // Numeric slider
    PARAM_TYPE_BOOLEAN,  // On/off toggle
    PARAM_TYPE_ENUM      // Dropdown with named options
};

// Enum option definition
struct EnumOption {
    int value;
    std::string label;
};

// Parameter metadata
struct ParamInfo {
    std::string name;
    std::string display_name;
    std::string group;
    enum_rts_video_ctrl_id ctrl_id;
    ParamType type;
    std::vector<EnumOption> options;  // Only for PARAM_TYPE_ENUM
};

// Define all parameters with their metadata
static std::vector<ParamInfo> get_param_definitions() {
    std::vector<ParamInfo> params;

    // Image Quality group
    params.push_back({"brightness", "Brightness", "image_quality", RTS_VIDEO_CTRL_ID_BRIGHTNESS, PARAM_TYPE_RANGE, {}});
    params.push_back({"contrast", "Contrast", "image_quality", RTS_VIDEO_CTRL_ID_CONTRAST, PARAM_TYPE_RANGE, {}});
    params.push_back({"saturation", "Saturation", "image_quality", RTS_VIDEO_CTRL_ID_SATURATION, PARAM_TYPE_RANGE, {}});
    params.push_back({"sharpness", "Sharpness", "image_quality", RTS_VIDEO_CTRL_ID_SHARPNESS, PARAM_TYPE_RANGE, {}});
    params.push_back({"hue", "Hue", "image_quality", RTS_VIDEO_CTRL_ID_HUE, PARAM_TYPE_RANGE, {}});
    params.push_back({"gamma", "Gamma", "image_quality", RTS_VIDEO_CTRL_ID_GAMMA, PARAM_TYPE_RANGE, {}});
    params.push_back({"noise_reduction", "Noise Reduction", "image_quality", RTS_VIDEO_CTRL_ID_NOISE_REDUCTION, PARAM_TYPE_RANGE, {}});
    params.push_back({"detail_enhancement", "Detail Enhancement", "image_quality", RTS_VIDEO_CTRL_ID_DETAIL_ENHANCEMENT, PARAM_TYPE_RANGE, {}});
    params.push_back({"three_dnr", "3D Noise Reduction", "image_quality", RTS_VIDEO_CTRL_ID_3DNR, PARAM_TYPE_BOOLEAN, {}});
    params.push_back({"dehaze", "Dehaze", "image_quality", RTS_VIDEO_CTRL_ID_DEHAZE, PARAM_TYPE_BOOLEAN, {}});
    params.push_back({"ldc", "Lens Distortion Correction", "image_quality", RTS_VIDEO_CTRL_ID_LDC, PARAM_TYPE_BOOLEAN, {}});

    // Exposure group
    params.push_back({"exposure_mode", "Exposure Mode", "exposure", RTS_VIDEO_CTRL_ID_EXPOSURE_MODE, PARAM_TYPE_ENUM,
        {{0, "Auto"}, {1, "Manual"}}});
    params.push_back({"exposure_priority", "Exposure Priority", "exposure", RTS_VIDEO_CTRL_ID_EXPOSURE_PRIORITY, PARAM_TYPE_ENUM,
        {{0, "Manual"}, {1, "Auto"}}});
    params.push_back({"blc", "Backlight Compensation", "exposure", RTS_VIDEO_CTRL_ID_BLC, PARAM_TYPE_BOOLEAN, {}});
    params.push_back({"wdr_mode", "WDR Mode", "exposure", RTS_VIDEO_CTRL_ID_WDR_MODE, PARAM_TYPE_ENUM,
        {{0, "Disabled"}, {1, "Manual"}, {2, "Auto"}}});
    params.push_back({"wdr_level", "WDR Level", "exposure", RTS_VIDEO_CTRL_ID_WDR_LEVEL, PARAM_TYPE_RANGE, {}});

    // White Balance group
    params.push_back({"awb_mode", "White Balance Mode", "white_balance", RTS_VIDEO_CTRL_ID_AWB_CTRL, PARAM_TYPE_ENUM,
        {{0, "Temperature"}, {1, "Auto"}, {2, "Component"}}});
    params.push_back({"red_balance", "Red Balance", "white_balance", RTS_VIDEO_CTRL_ID_RED_BALANCE, PARAM_TYPE_RANGE, {}});
    params.push_back({"green_balance", "Green Balance", "white_balance", RTS_VIDEO_CTRL_ID_GREEN_BALANCE, PARAM_TYPE_RANGE, {}});
    params.push_back({"blue_balance", "Blue Balance", "white_balance", RTS_VIDEO_CTRL_ID_BLUE_BALANCE, PARAM_TYPE_RANGE, {}});

    // Day/Night group
    params.push_back({"ir_mode", "IR Mode", "day_night", RTS_VIDEO_CTRL_ID_IR_MODE, PARAM_TYPE_ENUM,
        {{0, "Day"}, {1, "Night"}, {2, "White Light"}}});
    params.push_back({"gray_mode", "Color Mode", "day_night", RTS_VIDEO_CTRL_ID_GRAY_MODE, PARAM_TYPE_ENUM,
        {{0, "Color"}, {1, "Grayscale"}}});
    params.push_back({"smart_ir_mode", "Smart IR Mode", "day_night", RTS_VIDEO_CTRL_ID_SMART_IR_MODE, PARAM_TYPE_ENUM,
        {{0, "Disabled"}, {1, "Auto"}, {2, "High Light Priority"}, {3, "Low Light Priority"}, {4, "Manual"}}});
    params.push_back({"smart_ir_manual_level", "Smart IR Level", "day_night", RTS_VIDEO_CTRL_ID_SMART_IR_MANUAL_LEVEL, PARAM_TYPE_RANGE, {}});
    params.push_back({"in_out_door_mode", "Indoor/Outdoor", "day_night", RTS_VIDEO_CTRL_ID_IN_OUT_DOOR_MODE, PARAM_TYPE_ENUM,
        {{0, "Outdoor"}, {1, "Indoor"}, {2, "Auto"}}});

    // Orientation group
    params.push_back({"mirror", "Mirror", "orientation", RTS_VIDEO_CTRL_ID_MIRROR, PARAM_TYPE_BOOLEAN, {}});
    params.push_back({"flip", "Flip", "orientation", RTS_VIDEO_CTRL_ID_FLIP, PARAM_TYPE_BOOLEAN, {}});
    params.push_back({"power_line_frequency", "Power Line Frequency", "orientation", RTS_VIDEO_CTRL_ID_PWR_FREQUENCY, PARAM_TYPE_ENUM,
        {{0, "60Hz"}, {1, "50Hz"}}});

    // Other
    params.push_back({"zoom", "Zoom", "other", RTS_VIDEO_CTRL_ID_ZOOM, PARAM_TYPE_RANGE, {}});

    return params;
}

// Build lookup maps
static std::map<std::string, ParamInfo> build_name_to_param_map(const std::vector<ParamInfo>& params) {
    std::map<std::string, ParamInfo> map;
    for (const auto& p : params) {
        map[p.name] = p;
    }
    return map;
}

static uint8_t change_isp_setting(const enum enum_rts_video_ctrl_id type, int value) {
    struct rts_video_control ctrl{};
    int ret = rts_av_get_isp_ctrl(type, &ctrl);
    if (ret) {
        return RTS_FALSE;
    }
    if ((value < ctrl.minimum) || value > ctrl.maximum || (value - ctrl.minimum) % ctrl.step != 0) {
        value = ctrl.default_value;
    }
    ctrl.current_value = value;
    ret = rts_av_set_isp_ctrl(type, &ctrl);
    if (ret) {
        return RTS_FALSE;
    }
    return RTS_TRUE;
}

// GET_PARAMETER_INFO: Returns full metadata for all parameters
static nlohmann::json cmd_get_parameter_info(const std::vector<ParamInfo>& params) {
    nlohmann::json result;
    nlohmann::json parameters = nlohmann::json::object();

    for (const auto& param : params) {
        struct rts_video_control ctrl{};
        int ret = rts_av_get_isp_ctrl(param.ctrl_id, &ctrl);
        if (ret) continue;

        nlohmann::json p;
        p["name"] = param.name;
        p["display_name"] = param.display_name;
        p["group"] = param.group;
        p["min"] = ctrl.minimum;
        p["max"] = ctrl.maximum;
        p["step"] = ctrl.step;
        p["default"] = ctrl.default_value;
        p["current"] = ctrl.current_value;

        switch (param.type) {
            case PARAM_TYPE_RANGE:
                p["type"] = "range";
                break;
            case PARAM_TYPE_BOOLEAN:
                p["type"] = "boolean";
                break;
            case PARAM_TYPE_ENUM:
                p["type"] = "enum";
                {
                    nlohmann::json options = nlohmann::json::array();
                    for (const auto& opt : param.options) {
                        options.push_back({{"value", opt.value}, {"label", opt.label}});
                    }
                    p["options"] = options;
                }
                break;
        }

        parameters[param.name] = p;
    }

    result["status"] = "success";
    result["parameters"] = parameters;
    return result;
}

// READ_PARAMETERS: Returns just current values (legacy compatibility)
static nlohmann::json cmd_read_parameters(const std::vector<ParamInfo>& params) {
    nlohmann::json result;
    nlohmann::json values = nlohmann::json::object();

    for (const auto& param : params) {
        struct rts_video_control ctrl{};
        int ret = rts_av_get_isp_ctrl(param.ctrl_id, &ctrl);
        if (ret) continue;
        values[param.name] = ctrl.current_value;
    }

    result["status"] = "success";
    result["parameters"] = values.dump();  // Legacy format: stringified JSON
    return result;
}

// SET_PARAMETER: Set a single parameter
static nlohmann::json cmd_set_parameter(const std::map<std::string, ParamInfo>& param_map,
                                        const std::string& name, int value) {
    nlohmann::json result;

    auto it = param_map.find(name);
    if (it == param_map.end()) {
        result["status"] = "error";
        result["message"] = "Unknown parameter: " + name;
        return result;
    }

    if (change_isp_setting(it->second.ctrl_id, value) == RTS_TRUE) {
        result["status"] = "success";
        result["message"] = "Parameter set successfully";
    } else {
        result["status"] = "error";
        result["message"] = "Failed to set parameter";
    }
    return result;
}

// SET_PARAMETERS: Set multiple parameters at once
static nlohmann::json cmd_set_parameters(const std::map<std::string, ParamInfo>& param_map,
                                         const nlohmann::json& params) {
    nlohmann::json result;
    int success_count = 0;
    int fail_count = 0;
    nlohmann::json errors = nlohmann::json::array();

    for (auto it = params.begin(); it != params.end(); ++it) {
        std::string name = it.key();
        int int_value = it.value().get<int>();

        auto param_it = param_map.find(name);
        if (param_it == param_map.end()) {
            errors.push_back("Unknown parameter: " + name);
            fail_count++;
            continue;
        }

        if (change_isp_setting(param_it->second.ctrl_id, int_value) == RTS_TRUE) {
            success_count++;
        } else {
            errors.push_back("Failed to set: " + name);
            fail_count++;
        }
    }

    if (fail_count == 0) {
        result["status"] = "success";
        result["message"] = "All " + std::to_string(success_count) + " parameters set successfully";
    } else {
        result["status"] = "partial";
        result["message"] = std::to_string(success_count) + " succeeded, " + std::to_string(fail_count) + " failed";
        result["errors"] = errors;
    }
    return result;
}

// SAVE_SETTINGS: Write current ISP values to settings.json
static nlohmann::json cmd_save_settings(const std::vector<ParamInfo>& params) {
    nlohmann::json result;

    // Read existing settings.json
    nlohmann::json settings;
    std::ifstream infile(SETTINGS_FILE);
    if (infile.is_open()) {
        try {
            infile >> settings;
        } catch (...) {
            settings = nlohmann::json::object();
        }
        infile.close();
    }

    // Ensure isp section exists
    if (!settings.contains("isp")) {
        settings["isp"] = nlohmann::json::object();
    }

    // Update ISP values from current hardware state
    for (const auto& param : params) {
        struct rts_video_control ctrl{};
        int ret = rts_av_get_isp_ctrl(param.ctrl_id, &ctrl);
        if (ret) continue;
        settings["isp"][param.name] = ctrl.current_value;
    }

    // Write back to file
    std::ofstream outfile(SETTINGS_FILE);
    if (!outfile.is_open()) {
        result["status"] = "error";
        result["message"] = "Failed to open settings file for writing";
        return result;
    }

    outfile << settings.dump(2);
    outfile.close();

    result["status"] = "success";
    result["message"] = "Settings saved to " SETTINGS_FILE;
    return result;
}

int main(int argc, char *argv[]) {
    nlohmann::json resp;
    resp["status"] = "error";

    if (rts_av_init()) {
        resp["message"] = "Failed to initialize RTS AV API";
        std::cout << resp.dump() << std::endl;
        return -1;
    }

    // Get parameter definitions
    auto params = get_param_definitions();
    auto param_map = build_name_to_param_map(params);

    // Read stdin
    std::string post_data_str;
    std::string line;
    while (std::getline(std::cin, line)) {
        post_data_str += line;
    }

    if (post_data_str.empty()) {
        resp["message"] = "No input provided";
        std::cout << resp.dump() << std::endl;
        rts_av_release();
        return 0;
    }

    // Parse JSON input
    nlohmann::json input = nlohmann::json::parse(post_data_str, nullptr, false);
    if (input.is_discarded()) {
        resp["message"] = "Invalid JSON input";
        std::cout << resp.dump() << std::endl;
        rts_av_release();
        return -1;
    }

    // Get command
    std::string command;
    if (input.contains("command")) {
        command = input["command"].get<std::string>();
    }

    // Route to command handler
    if (command == "GET_PARAMETER_INFO") {
        resp = cmd_get_parameter_info(params);
    }
    else if (command == "READ_PARAMETERS") {
        resp = cmd_read_parameters(params);
    }
    else if (command == "SET_PARAMETER") {
        if (!input.contains("param_name") || !input.contains("param_value")) {
            resp["message"] = "SET_PARAMETER requires param_name and param_value";
        } else {
            resp = cmd_set_parameter(param_map,
                input["param_name"].get<std::string>(),
                input["param_value"].get<int>());
        }
    }
    else if (command == "SET_PARAMETERS") {
        if (!input.contains("parameters")) {
            resp["message"] = "SET_PARAMETERS requires parameters object";
        } else {
            resp = cmd_set_parameters(param_map, input["parameters"]);
        }
    }
    else if (command == "SAVE_SETTINGS") {
        resp = cmd_save_settings(params);
    }
    else {
        resp["message"] = "Unknown command: " + command;
    }

    std::cout << resp.dump() << std::endl;
    rts_av_release();
    return 0;
}
