#ifndef FRAME_QUEUE_H
#define FRAME_QUEUE_H

#include <cstdint>
#include <vector>
#include <queue>
#include <mutex>
#include <condition_variable>

// In-process frame containers handed off from capture/encode threads to the
// live555 worker. Replacing the byte-oriented FIFO IPC means we can carry
// real per-frame metadata across the boundary — keyframe flag, presentation
// timestamp from the encoder — and let the RTSP side use it directly.

struct VideoFrame {
    std::vector<uint8_t> data;
    bool is_keyframe;
    uint64_t presentation_us;   // monotonic microseconds
};

struct AudioFrame {
    std::vector<uint8_t> data;
    uint64_t presentation_us;
};

// Bounded SPSC queue with drop-oldest overflow. The lock is uncontended in
// the steady state (producer pushes, consumer pops on its own thread) — we
// use std::mutex for simplicity rather than a lockfree ring; overhead is
// negligible at our 20 fps + 50 Hz audio rates.
template<typename T>
class FrameQueue {
public:
    explicit FrameQueue(size_t max_depth) : max_depth_(max_depth) {}

    // Push a frame. If the queue is at capacity, oldest entries are dropped
    // until there's room — better to lose stale data than back-pressure the
    // encoder. Returns the number of frames dropped to make space.
    size_t push(T&& frame) {
        size_t dropped = 0;
        {
            std::lock_guard<std::mutex> g(mu_);
            while (q_.size() >= max_depth_) {
                q_.pop();
                ++dropped;
                ++total_dropped_;
            }
            q_.push(std::move(frame));
        }
        cv_.notify_one();
        return dropped;
    }

    // Non-blocking pop. Returns false if queue is empty.
    bool try_pop(T& out) {
        std::lock_guard<std::mutex> g(mu_);
        if (q_.empty()) return false;
        out = std::move(q_.front());
        q_.pop();
        return true;
    }

    // Discard everything currently buffered. Used when a fresh keyframe is
    // about to land and we want to avoid handing live555 stale tail frames
    // ahead of it.
    void clear() {
        std::lock_guard<std::mutex> g(mu_);
        std::queue<T> empty;
        q_.swap(empty);
    }

    size_t total_dropped() const {
        std::lock_guard<std::mutex> g(mu_);
        return total_dropped_;
    }

private:
    mutable std::mutex mu_;
    std::condition_variable cv_;
    std::queue<T> q_;
    size_t max_depth_;
    size_t total_dropped_ = 0;
};

#endif // FRAME_QUEUE_H
