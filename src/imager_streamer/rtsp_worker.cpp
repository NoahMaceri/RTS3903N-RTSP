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

#include "rtsp_worker.h"

#include <atomic>
#include <memory>
#include <thread>

#include <BasicUsageEnvironment.hh>
#include <liveMedia.hh>
#include <zlog.h>

#include "frame_queue.h"
#include "h264_queue_subsession.h"
#include "pcmu_queue_subsession.h"

extern zlog_category_t *vid_c;

namespace rtsp_worker {
namespace {

// Queue sizing. Video: at 1024 kbps + 20 fps an avg frame is ~6 KB; we hold
// up to ~1.5s. Audio: 50 frames/sec at 160 B = ~2s. Both are drop-oldest;
// a slow reader drops history, never blocks the encoder.
constexpr size_t VIDEO_QUEUE_DEPTH = 30;
constexpr size_t AUDIO_QUEUE_DEPTH = 100;

// All worker state lives in this struct, owned by the RTSP thread except
// where noted. Producer threads only touch the queues + atomics.
struct Worker {
    // Producer-visible state (atomics + queues are thread-safe)
    FrameQueue<VideoFrame> video_queue{VIDEO_QUEUE_DEPTH};
    FrameQueue<AudioFrame> audio_queue{AUDIO_QUEUE_DEPTH};
    std::atomic<bool> idr_requested{false};

    // Live555-thread-only state. The source pointers are written by
    // H264QueueSource/PCMUQueueSource constructors+destructors (which run
    // on the live555 thread); the trigger callbacks read them on the same
    // thread, so no atomic is needed. Producer threads never touch these.
    H264QueueSource* h264_source = nullptr;
    PCMUQueueSource* pcmu_source = nullptr;

    // Live555 plumbing — owned by worker thread only.
    TaskScheduler*           scheduler = nullptr;
    UsageEnvironment*        env       = nullptr;
    RTSPServer*              server    = nullptr;
    ServerMediaSession*      sms       = nullptr;
    UserAuthenticationDatabase* authDB = nullptr;

    // Cross-thread wakeup. Producers call triggerEvent on these — that's
    // the documented thread-safe primitive in live555. No source pointer
    // is dereferenced from the producer side.
    EventTriggerId video_trigger = 0;
    EventTriggerId audio_trigger = 0;

    char watch_var = 0; // doEventLoop returns when this goes non-zero.

    std::thread thread;
    std::atomic<bool> running{false};
};

std::unique_ptr<Worker> g; // global; one worker per process.

// Trigger callbacks. Run on the live555 thread (invoked from doEventLoop
// after a producer calls triggerEvent), so reading g->h264_source /
// g->pcmu_source is race-free with their construction/destruction (which
// also runs on the live555 thread).
void deliver_video_trigger(void* /*ctx*/) {
    if (g && g->h264_source) g->h264_source->deliverFrame();
}
void deliver_audio_trigger(void* /*ctx*/) {
    if (g && g->pcmu_source) g->pcmu_source->deliverFrame();
}

// Build the live555 stack. Returns false on failure; on success the server
// is listening and `g->server` / `g->sms` are populated.
bool setup_live555(const Config& cfg) {
    g->scheduler = BasicTaskScheduler::createNew();
    g->env       = BasicUsageEnvironment::createNew(*g->scheduler);

    // Cross-thread wakeup triggers. Created here (before the worker thread
    // starts) so producers can triggerEvent without racing the scheduler
    // setup; the scheduler is itself thread-safe wrt triggerEvent.
    g->video_trigger = g->scheduler->createEventTrigger(deliver_video_trigger);
    g->audio_trigger = g->scheduler->createEventTrigger(deliver_audio_trigger);

    if (!cfg.username.empty() && !cfg.password.empty()) {
        g->authDB = new UserAuthenticationDatabase;
        g->authDB->addUserRecord(cfg.username.c_str(), cfg.password.c_str());
        zlog_info(vid_c, "RTSP authentication enabled");
    }

    g->server = RTSPServer::createNew(*g->env, cfg.port, g->authDB);
    if (g->server == nullptr) {
        zlog_fatal(vid_c, "Failed to create RTSP server: %s", g->env->getResultMsg());
        return false;
    }

    // Sized to comfortably hold one large I-frame at our target bitrate;
    // see rtsp_server.cpp history for why this isn't multi-MB.
    OutPacketBuffer::maxSize = 256 * 1024;

    g->sms = ServerMediaSession::createNew(*g->env,
                                           cfg.stream_name.c_str(),
                                           cfg.stream_name.c_str(),
                                           "Session streamed by RTS3903N");
    g->sms->addSubsession(H264QueueSubsession::createNew(
        *g->env, &g->video_queue, &g->idr_requested,
        &g->h264_source, True /* reuseFirstSource */));

    if (cfg.audio_enabled) {
        g->sms->addSubsession(PCMUQueueSubsession::createNew(
            *g->env, &g->audio_queue, &g->pcmu_source,
            True /* reuseFirstSource */));
        zlog_info(vid_c, "Audio subsession added (G.711 u-law)");
    }

    g->server->addServerMediaSession(g->sms);
    char* url = g->server->rtspURL(g->sms);
    zlog_info(vid_c, "RTSP server listening on %s", url);
    delete[] url;
    return true;
}

void teardown_live555() {
    if (g->server) {
        if (g->sms) {
            g->server->closeAllClientSessionsForServerMediaSession(g->sms);
            g->server->removeServerMediaSession(g->sms);
        }
    }
    if (g->sms) {
        Medium::close(g->sms);   // closes subsessions too
        g->sms = nullptr;
    }
    if (g->server) {
        Medium::close(g->server);
        g->server = nullptr;
    }
    delete g->authDB; g->authDB = nullptr;

    if (g->scheduler) {
        if (g->video_trigger) {
            g->scheduler->deleteEventTrigger(g->video_trigger);
            g->video_trigger = 0;
        }
        if (g->audio_trigger) {
            g->scheduler->deleteEventTrigger(g->audio_trigger);
            g->audio_trigger = 0;
        }
    }
    if (g->env)       { g->env->reclaim(); g->env = nullptr; }
    delete g->scheduler; g->scheduler = nullptr;

    g->h264_source = nullptr; // sources cleared themselves via fBackRef in
    g->pcmu_source = nullptr; // their dtors when Medium::close(sms) ran.
}

void event_loop_thread() {
    zlog_info(vid_c, "RTSP worker thread started");
    g->env->taskScheduler().doEventLoop(&g->watch_var);
    zlog_info(vid_c, "RTSP worker thread exiting event loop");
}

} // namespace

bool start(const Config& cfg) {
    if (g) {
        zlog_warn(vid_c, "rtsp_worker::start called twice");
        return false;
    }
    g = std::unique_ptr<Worker>(new Worker());

    if (!setup_live555(cfg)) {
        teardown_live555();
        g.reset();
        return false;
    }

    g->running.store(true);
    g->thread = std::thread(event_loop_thread);
    return true;
}

void stop() {
    if (!g || !g->running.load()) return;

    g->watch_var = 1; // doEventLoop returns
    if (g->thread.joinable()) g->thread.join();
    g->running.store(false);

    teardown_live555();
    g.reset();
}

void push_video_frame(const uint8_t* data, size_t size,
                      bool is_keyframe, uint64_t pts_us) {
    if (!g) return;

    // If a client is mid-attach and an IDR was requested, flush pending
    // frames so the new viewer starts cleanly on this keyframe.
    if (is_keyframe && g->idr_requested.load(std::memory_order_relaxed)) {
        g->video_queue.clear();
    }

    VideoFrame f;
    f.data.assign(data, data + size);
    f.is_keyframe      = is_keyframe;
    f.presentation_us  = pts_us;
    g->video_queue.push(std::move(f));

    // Wake the live555 thread. triggerEvent is the documented thread-safe
    // primitive; the trigger callback dereferences g->h264_source on the
    // live555 thread, never from here.
    if (g->scheduler && g->video_trigger) {
        g->scheduler->triggerEvent(g->video_trigger, nullptr);
    }
}

void push_audio_frame(const uint8_t* data, size_t size, uint64_t pts_us) {
    if (!g) return;

    AudioFrame f;
    f.data.assign(data, data + size);
    f.presentation_us = pts_us;
    g->audio_queue.push(std::move(f));

    if (g->scheduler && g->audio_trigger) {
        g->scheduler->triggerEvent(g->audio_trigger, nullptr);
    }
}

bool consume_idr_request() {
    if (!g) return false;
    return g->idr_requested.exchange(false, std::memory_order_acq_rel);
}

bool video_active() { return g && g->h264_source != nullptr; }
bool audio_active() { return g && g->pcmu_source != nullptr; }

size_t video_dropped() { return g ? g->video_queue.total_dropped() : 0; }
size_t audio_dropped() { return g ? g->audio_queue.total_dropped() : 0; }

} // namespace rtsp_worker
