/*
 * Copyright (c) 2021 roleoroleo
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
#include <cstdint>
#include <fstream>
#include <fcntl.h>
#include <csignal>
#include <atomic>

#include <zlog.h>
#include <ver.h>
#include <json.hpp>
#include <BasicUsageEnvironment.hh>

#include "H264LiveFifoSubsession.h"
#include "PCMULiveFifoSubsession.h"

#define VIDEO_FIFO "/tmp/video.h264"
#define AUDIO_FIFO "/tmp/audio.ulaw"

static volatile sig_atomic_t g_got_sigint = 0;
static char g_eventLoopWatchVariable = 0;

static void onSignal(int /*signum*/) {
    g_got_sigint = 1;
    g_eventLoopWatchVariable = 1;  // makes doEventLoop return
}

int main(int argc, char *argv[]) {
    // setup signal handlers
    signal(SIGINT, onSignal);
    signal(SIGTERM, onSignal);
    // init zlog
    int rc = zlog_init("zlog.conf");
    if (rc < 0) {
        fprintf(stderr, "Failed to initialize zlog: %d\n", rc);
        return rc;
    }

    zlog_category_t *c = zlog_get_category("server");

    zlog_info(c, "rRTSPServer v%d.%d.%d started", VER_MAJOR, VER_MINOR, VER_PATCH);

    // load config
    nlohmann::json cfg;
    std::ifstream cfg_file("settings.json");
    if (cfg_file.is_open()) {
        try {
            cfg_file >> cfg;
        } catch (nlohmann::json::parse_error &e) {
            zlog_fatal(c, "Failed to parse settings.json: %s", e.what());
            return EXIT_FAILURE;
        }
        cfg_file.close();
    } else {
        zlog_fatal(c, "settings.json not found!");
        return EXIT_FAILURE;
    }


    zlog_debug(c, "RTSP settings:");
    zlog_debug(c, "  Port: %d", cfg["rtsp"]["port"].get<uint16_t>());
    zlog_debug(c, "  Stream name: %s", cfg["rtsp"]["name"].get<std::string>().c_str());
    if (!cfg["rtsp"]["username"].get<std::string>().empty()) {
        zlog_debug(c, "  User: %s", cfg["rtsp"]["username"].get<std::string>().c_str());
    } else {
        zlog_debug(c, "  User: (none)");
    }
    if (!cfg["rtsp"]["password"].get<std::string>().empty()) {
        zlog_debug(c, "  Password: (set)");
    } else {
        zlog_debug(c, "  Password: (none)");
    }

    // Begin by setting up our usage environment:
    TaskScheduler *scheduler = BasicTaskScheduler::createNew();
    BasicUsageEnvironment *env = BasicUsageEnvironment::createNew(*scheduler);

    UserAuthenticationDatabase *authDB = nullptr;
    if (!cfg["rtsp"]["username"].get<std::string>().empty() && !cfg["rtsp"]["password"].get<std::string>().empty()) {
        authDB = new UserAuthenticationDatabase;
        authDB->addUserRecord(
            cfg["rtsp"]["username"].get<std::string>().c_str(),
            cfg["rtsp"]["password"].get<std::string>().c_str()
        );
        zlog_info(c, "RTSP authentication enabled");
    }

    RTSPServer *rtspServer = RTSPServer::createNew(*env,
                                                   cfg["rtsp"]["port"].get<uint16_t>(),
                                                   authDB);
    if (rtspServer == nullptr) {
        zlog_fatal(c, "Failed to create RTSP server: %s", env->getResultMsg());
        exit(EXIT_FAILURE);
    }

    ServerMediaSession *sms = ServerMediaSession::createNew(*env,
                                                            cfg["rtsp"]["name"].get<std::string>().c_str(),
                                                            cfg["rtsp"]["name"].get<std::string>().c_str(),
                                                            "Session streamed by rRTSPServer");
    OutPacketBuffer::maxSize = 2000000; // safe maximum
    sms->addSubsession(H264LiveFifoSubsession::createNew(*env, VIDEO_FIFO, True));

    // Add audio subsession if enabled in config
    if (cfg.contains("audio") && cfg["audio"]["enabled"].get<bool>()) {
        sms->addSubsession(PCMULiveFifoSubsession::createNew(*env, AUDIO_FIFO, True));
        zlog_info(c, "Audio subsession added (G.711 u-law)");
    }

    rtspServer->addServerMediaSession(sms);
    zlog_info(c, "ServerMediaSession added");
    char* url = rtspServer->rtspURL(sms);
    zlog_info(c, "RTSP server is running on %s", url);
    delete[] url;
    env->taskScheduler().doEventLoop(&g_eventLoopWatchVariable);  // returns when set to non-zero

    zlog_info(c, "Shutdown requested, cleaning up...");

    rtspServer->closeAllClientSessionsForServerMediaSession(sms);
    rtspServer->removeServerMediaSession(sms);

    Medium::close(sms); // closes subsessions too

    Medium::close(rtspServer);

    delete authDB; // only if you allocated it
    env->reclaim();
    delete scheduler;

    zlog_fini();

    return EXIT_SUCCESS;
}
