#ifndef RTSP_WORKER_H
#define RTSP_WORKER_H

#include <cstdint>
#include <cstddef>
#include <string>

// In-process RTSP server. Replaces the standalone rtsp_server binary that
// used to read /tmp/video.h264 + /tmp/audio.ulaw FIFOs. Now the producer
// pushes frames directly into in-memory queues and live555 reads from those.
//
// Threading model:
//   - rtsp_worker_start()  spawns a dedicated worker thread that runs the
//                          live555 task scheduler event loop.
//   - push_video_frame()  / push_audio_frame() are called from the encoder
//                          threads. They copy the frame into a queue and
//                          signal live555 via its TaskScheduler event
//                          trigger (cross-thread safe per live555 docs).
//   - rtsp_worker_stop()   signals the worker to exit doEventLoop, joins
//                          the thread, and tears down live555 objects.
//
// IDR-on-attach: rtsp_worker_idr_requested() returns true if a freshly
// created H.264 source flagged that it wants a keyframe. The producer
// read-and-clears it, calls rts_av_request_h264_key_frame(), and drops
// non-keyframes until the next IDR lands. The video queue is also flushed
// on IDR request so live555 starts clean.

namespace rtsp_worker {

enum class AudioCodec { ULAW, AAC };

struct Config {
    uint16_t    port = 554;
    std::string stream_name = "stream";
    std::string username;       // empty = no auth
    std::string password;
    bool        audio_enabled = false;
    AudioCodec  audio_codec = AudioCodec::ULAW;
    uint32_t    audio_sample_rate = 8000;   // 8000 for ulaw, 48000 for aac
    uint8_t     audio_channels = 1;
};

// Lifecycle. start() blocks until live555 has bound the listening socket
// and SDP is ready; returns false on setup failure. stop() is idempotent.
bool start(const Config& cfg);
void stop();

// Producer-side hooks. Safe to call from any thread.
//   data/size:     encoded NAL units (any chunking — framer handles it)
//   is_keyframe:   matches RTSTREAM_PKT_FLAG_KEY from rts_av_buffer flags
//   pts_us:        monotonic microseconds (any consistent clock)
void push_video_frame(const uint8_t* data, size_t size,
                      bool is_keyframe, uint64_t pts_us);
void push_audio_frame(const uint8_t* data, size_t size,
                      uint64_t pts_us, uint32_t duration_us);

// Did a fresh client session ask for a keyframe? If true, the caller
// should request an IDR from the encoder. Atomically reads-and-clears.
bool consume_idr_request();

// True once a client is consuming the matching media stream. Producers
// can use this to skip frames entirely when nobody is listening (drains
// encoder buffers but doesn't allocate copy buffers).
bool video_active();
bool audio_active();

// For diagnostics in periodic stats logging.
size_t video_dropped();
size_t audio_dropped();

} // namespace rtsp_worker

#endif // RTSP_WORKER_H
