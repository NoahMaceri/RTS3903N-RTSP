/*
 * Copyright (c) 2025 Noah Maceri
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * onvif_conf_gen.cpp — boot-time generator that turns the `onvif`, `rtsp`,
 * and `encoder` sections of settings.json into the INI config file that
 * onvif_simple_server reads. Avoids duplicating things like the stream
 * URL across two user-editable files.
 *
 * Usage:  onvif_conf_gen <settings.json> <output_path>
 */

#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <unistd.h>

#include <json.hpp>

int main(int argc, char **argv) {
    if (argc != 3) {
        std::fprintf(stderr, "usage: %s <settings.json> <output_path>\n", argv[0]);
        return 1;
    }
    const std::string in_path  = argv[1];
    const std::string out_path = argv[2];

    nlohmann::json cfg;
    try {
        std::ifstream f(in_path);
        if (!f.is_open()) {
            std::fprintf(stderr, "%s: cannot open %s\n", argv[0], in_path.c_str());
            return 2;
        }
        f >> cfg;
    } catch (const std::exception &e) {
        std::fprintf(stderr, "%s: %s\n", argv[0], e.what());
        return 3;
    }

    if (!cfg.contains("onvif")) {
        std::fprintf(stderr, "%s: settings.json has no [onvif] section\n", argv[0]);
        return 4;
    }
    const auto &onvif   = cfg["onvif"];
    const auto &rtsp    = cfg["rtsp"];
    const auto &encoder = cfg["encoder"];

    std::ofstream out(out_path);
    if (!out.is_open()) {
        std::fprintf(stderr, "%s: cannot write %s\n", argv[0], out_path.c_str());
        return 5;
    }

    // %s in url= and snapurl= is replaced at runtime by onvif_simple_server
    // with the camera's IP address on `ifs`.
    const std::string stream_name = rtsp.value("name", "stream");
    const int rtsp_port           = rtsp.value("port", 554);
    const int width               = encoder.value("width",  1920);
    const int height              = encoder.value("height", 1080);
    const std::string user        = onvif.value("username", "");
    const std::string password    = onvif.value("password", "");

    out << "# AUTO-GENERATED at boot from /var/tmp/sd/settings.json by onvif_conf_gen.\n"
        << "# DO NOT EDIT — your changes will be overwritten on the next reboot.\n"
        << "\n"
        << "model="        << onvif.value("model",         "IP Camera") << "\n"
        << "manufacturer=" << onvif.value("manufacturer",  "RTS3903N")  << "\n"
        << "firmware_ver=" << onvif.value("firmware_ver",  "0.0.1")     << "\n"
        << "hardware_id="  << onvif.value("hardware_id",   "RTS3903N")  << "\n"
        << "serial_num="   << onvif.value("serial_num",    "SN0001")    << "\n"
        << "ifs="          << onvif.value("interface",     "wlan0")     << "\n"
        << "port="         << onvif.value("port",          8000)        << "\n"
        << "scope=onvif://www.onvif.org/Profile/Streaming\n"
        << "scope=onvif://www.onvif.org/Profile/T\n";
    const bool ptz_hw_present = (access("/dev/ssp", F_OK) == 0);
    if (ptz_hw_present) {
        out << "scope=onvif://www.onvif.org/type/ptz\n";
    }
    if (!user.empty() && !password.empty()) {
        out << "user="     << user     << "\n"
            << "password=" << password << "\n";
    }

    // Single H.264 profile, advertising our RTSP stream.
    out << "\n"
        << "name=Profile_0\n"
        << "width="   << width  << "\n"
        << "height="  << height << "\n"
        << "url=rtsp://%s";
    if (rtsp_port != 554) out << ":" << rtsp_port;
    out << "/" << stream_name << "\n"
        << "snapurl=http://%s/cgi-bin/snapshot\n"
        << "type=H264\n";

    if (cfg.contains("audio") && cfg["audio"].value("enabled", false)) {
        out << "audio_encoder=G711\n";
    }
    out << "\n";

    if (ptz_hw_present) {
        const char *tool = "/var/tmp/sd/ptz_tool";
        out << "ptz=1\n"
            << "min_step_x=-1\n"
            << "max_step_x=1\n"
            << "min_step_y=-1\n"
            << "max_step_y=1\n"
            << "min_step_z=0\n"
            << "max_step_z=0\n"
            << "get_position="        << tool << " get_position\n"
            << "is_moving="           << tool << " is_moving\n"
            << "move_left="           << tool << " move_left %f\n"
            << "move_right="          << tool << " move_right %f\n"
            << "move_up="             << tool << " move_up %f\n"
            << "move_down="           << tool << " move_down %f\n"
            << "move_in="             << tool << " move_in %f\n"
            << "move_out="            << tool << " move_out %f\n"
            << "move_stop="           << tool << " move_stop %s\n"
            << "move_preset="         << tool << " move_preset %d\n"
            << "goto_home_position="  << tool << " goto_home_position\n"
            << "set_preset="          << tool << " set_preset %d %s\n"
            << "set_home_position="   << tool << " set_home_position\n"
            << "remove_preset="       << tool << " remove_preset %d\n"
            << "jump_to_abs="         << tool << " jump_to_abs %f,%f,%f\n"
            << "jump_to_rel="         << tool << " jump_to_rel %f,%f,%f\n"
            << "get_presets="         << tool << " get_presets\n"
            << "\n";
    }

    return 0;
}
