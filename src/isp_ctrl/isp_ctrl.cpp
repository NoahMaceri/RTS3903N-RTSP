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
#include <string>
#include <map>
#include <rtsavapi.h>
#include <rtsvideo.h>
#include <json.hpp>

static uint8_t change_isp_setting(const enum enum_rts_video_ctrl_id type, int value) {
    struct rts_video_control ctrl{};
    int ret = rts_av_get_isp_ctrl(type, &ctrl);
    if (ret) {
        // printf("Failed to change get control for %s\n", ctrl.name);
        return RTS_FALSE;
    }
    if ((value < ctrl.minimum) || value > ctrl.maximum || (value - ctrl.minimum) % ctrl.step != 0) {
        // printf("Invalid value %d for %s (min: %d, max: %d, step: %d)\n", value, ctrl.name, ctrl.minimum, ctrl.maximum, ctrl.step);
        // printf("Setting to default value %d\n", ctrl.default_value);
        value = ctrl.default_value;
    }
    ctrl.current_value = value;
    ret = rts_av_set_isp_ctrl(type, &ctrl);
    if (ret) {
        // printf("Failed to set new value for %d: ret = %d\n", type, ret);
        return RTS_FALSE;
    }
    // printf("Changed %s to %d\n", ctrl.name, value);
    return RTS_TRUE;
}

int main(int argc, char *argv[]) {
    nlohmann::json resp = nlohmann::json::object();
    resp["status"] = "error";
    if (rts_av_init()) {
        resp["status"] = "error";
        resp["message"] = "Failed to initialize RTS AV API";
        std::cout << resp.dump() << std::endl;
        return -1;
    }

    // Read stdin
    std::string post_data_str;
    std::string line;
    while (std::getline(std::cin, line)) {
        post_data_str += line;
    }
    if (post_data_str.empty()) {
        resp["status"] = "error";
        resp["message"] = "No post data provided";
        std::cout << resp.dump() << std::endl;
        rts_av_release();
        return 0;
    }

    // parse post data
    nlohmann::json post_data = nlohmann::json::parse(post_data_str, nullptr,  false);
    if (post_data.is_discarded()) {
        std::cerr << "Failed to parse post data as JSON" << std::endl;
        rts_av_release();
        return -1;
    }

    std::map<std::string, enum_rts_video_ctrl_id> isp_name_to_enum;
    // Can't use default contructor for some reason
    isp_name_to_enum["noise_reduction"] = RTS_VIDEO_CTRL_ID_NOISE_REDUCTION;
    isp_name_to_enum["ldc"] = RTS_VIDEO_CTRL_ID_LDC;
    isp_name_to_enum["detail_enhancement"] = RTS_VIDEO_CTRL_ID_DETAIL_ENHANCEMENT;
    isp_name_to_enum["three_dnr"] = RTS_VIDEO_CTRL_ID_3DNR;
    isp_name_to_enum["mirror"] = RTS_VIDEO_CTRL_ID_MIRROR;
    isp_name_to_enum["flip"] = RTS_VIDEO_CTRL_ID_FLIP;
    isp_name_to_enum["in_out_door_mode"] = RTS_VIDEO_CTRL_ID_IN_OUT_DOOR_MODE;
    isp_name_to_enum["dehaze"] = RTS_VIDEO_CTRL_ID_DEHAZE;
    isp_name_to_enum["brightness"] = RTS_VIDEO_CTRL_ID_BRIGHTNESS;
    isp_name_to_enum["contrast"] = RTS_VIDEO_CTRL_ID_CONTRAST;
    isp_name_to_enum["hue"] = RTS_VIDEO_CTRL_ID_HUE;
    isp_name_to_enum["saturation"] = RTS_VIDEO_CTRL_ID_SATURATION;
    isp_name_to_enum["sharpness"] = RTS_VIDEO_CTRL_ID_SHARPNESS;
    isp_name_to_enum["gamma"] = RTS_VIDEO_CTRL_ID_GAMMA;
    isp_name_to_enum["blc"] = RTS_VIDEO_CTRL_ID_BLC;
    isp_name_to_enum["backlight_compensation"] = RTS_VIDEO_CTRL_ID_BLC;
    isp_name_to_enum["power_line_frequency"] = RTS_VIDEO_CTRL_ID_PWR_FREQUENCY;
    isp_name_to_enum["pwr_frequency"] = RTS_VIDEO_CTRL_ID_PWR_FREQUENCY;
    isp_name_to_enum["exposure_mode"] = RTS_VIDEO_CTRL_ID_EXPOSURE_MODE;
    isp_name_to_enum["exposure_priority"] = RTS_VIDEO_CTRL_ID_EXPOSURE_PRIORITY;
    isp_name_to_enum["zoom"] = RTS_VIDEO_CTRL_ID_ZOOM;
    isp_name_to_enum["wdr_mode"] = RTS_VIDEO_CTRL_ID_WDR_MODE;
    isp_name_to_enum["wdr_level"] = RTS_VIDEO_CTRL_ID_WDR_LEVEL;
    isp_name_to_enum["green_balance"] = RTS_VIDEO_CTRL_ID_GREEN_BALANCE;
    isp_name_to_enum["wb_green"] = RTS_VIDEO_CTRL_ID_GREEN_BALANCE;
    isp_name_to_enum["blue_balance"] = RTS_VIDEO_CTRL_ID_BLUE_BALANCE;
    isp_name_to_enum["wb_blue"] = RTS_VIDEO_CTRL_ID_BLUE_BALANCE;
    isp_name_to_enum["red_balance"] = RTS_VIDEO_CTRL_ID_RED_BALANCE;
    isp_name_to_enum["wb_red"] = RTS_VIDEO_CTRL_ID_RED_BALANCE;
    isp_name_to_enum["smart_ir_mode"] = RTS_VIDEO_CTRL_ID_SMART_IR_MODE;
    isp_name_to_enum["smart_ir_manual_level"] = RTS_VIDEO_CTRL_ID_SMART_IR_MANUAL_LEVEL;
    isp_name_to_enum["gray_mode"] = RTS_VIDEO_CTRL_ID_GRAY_MODE;
    isp_name_to_enum["ir_mode"] = RTS_VIDEO_CTRL_ID_IR_MODE;
    isp_name_to_enum["awb_mode"] = RTS_VIDEO_CTRL_ID_AWB_CTRL;

    std::map<enum_rts_video_ctrl_id, std::string> isp_enum_to_name;
    for (const auto &pair: isp_name_to_enum) {
        isp_enum_to_name[pair.second] = pair.first;
    }

    if (post_data.at("command") == "READ_PARAMETERS") {
        nlohmann::json j;
        struct rts_video_control ctrl{};
        for (int i = 1; i < RTS_VIDEO_CTRL_ID_RESERVED; i++) {
            const int ret = rts_av_get_isp_ctrl(i, &ctrl);
            if (ret)
                continue;
            const std::string &name = isp_enum_to_name[static_cast<enum_rts_video_ctrl_id>(i)];
            j[name] = ctrl.current_value;
        }
        resp["status"] = "success";
        resp["parameters"] = j.dump();
    } else if (post_data.at("command") == "SET_PARAMETER") {
        const std::string param_name = post_data.at("param_name").get<std::string>();
        const int32_t param_value = post_data.at("param_value").get<int32_t>();

        if (isp_name_to_enum.find(param_name) == isp_name_to_enum.end()) {
            resp["status"] = "error";
            resp["message"] = "Unknown parameter name";
        } else {
            const enum_rts_video_ctrl_id ctrl_id = isp_name_to_enum[param_name];
            if (change_isp_setting(ctrl_id, param_value) == RTS_TRUE) {
                resp["status"] = "success";
                resp["message"] = "Parameter set successfully";
            } else {
                resp["status"] = "error";
                resp["message"] = "Failed to set parameter";
            }
        }
    } else {
        resp["status"] = "error";
        resp["message"] = "Unknown command";
    }

    std::cout << resp.dump() << std::endl;
    rts_av_release();
    return 0;
}
