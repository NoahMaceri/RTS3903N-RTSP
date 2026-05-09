#ifndef H264_QUEUE_SUBSESSION_H
#define H264_QUEUE_SUBSESSION_H

#include <atomic>
#include <cstring>
#include <ctime>

#include <liveMedia.hh>

#include "frame_queue.h"

// Pulls H.264 access units out of an in-process queue (fed by the encoder
// thread) and hands the byte stream to live555. The cross-thread wakeup is
// driven by an EventTriggerId owned by rtsp_worker (not by the source), so
// the producer never has to hold a pointer to this object — it just calls
// triggerEvent, which is the documented thread-safe primitive in live555.
//
// The source advertises that the producer wants an IDR by flipping
// `idr_requested` to true on construction; the encoder thread reads-and-
// clears it, calls rts_av_request_h264_key_frame(), and drops non-keyframes
// until the next IDR lands. Result: every fresh client session begins on a
// keyframe within ~1 frame instead of waiting up to a GOP.
class H264QueueSource : public FramedSource {
public:
    static H264QueueSource* createNew(UsageEnvironment& env,
                                      FrameQueue<VideoFrame>* queue,
                                      std::atomic<bool>* idr_requested,
                                      H264QueueSource** back_ref = nullptr) {
        return new H264QueueSource(env, queue, idr_requested, back_ref);
    }

    // Called from the live555 event-loop thread (either via doGetNextFrame
    // when live555 wants a frame, or via the rtsp_worker's trigger callback
    // when the producer signals new data). Public so the worker callback
    // can invoke it without befriending it.
    void deliverFrame() {
        if (!isCurrentlyAwaitingData()) return;

        // If the previous frame was bigger than fMaxSize we kept the tail
        // here — drain that first before pulling a new frame. Truncating
        // mid-NAL would hand the framer corrupted data and the client
        // would see green/blocky decode artifacts.
        if (!fLeftover.empty()) {
            const size_t to_copy = (fLeftover.size() > fMaxSize) ? fMaxSize : fLeftover.size();
            memcpy(fTo, fLeftover.data(), to_copy);
            fFrameSize = to_copy;
            fNumTruncatedBytes = 0;
            fLeftover.erase(fLeftover.begin(), fLeftover.begin() + to_copy);
            // Keep PTS pinned across fragments of the same access unit.
            fPresentationTime.tv_sec = fLeftoverPts / 1000000ULL;
            fPresentationTime.tv_usec = fLeftoverPts % 1000000ULL;
            FramedSource::afterGetting(this);
            return;
        }

        VideoFrame frame;
        if (!fQueue->try_pop(frame)) {
            // Queue empty — nothing to do. The next push() in the producer
            // will trigger this same callback and we'll try again.
            return;
        }

        if (frame.data.size() > fMaxSize) {
            // Save the tail for the next call. fNumTruncatedBytes stays 0
            // because nothing is *actually* truncated — just deferred.
            fFrameSize = fMaxSize;
            memcpy(fTo, frame.data.data(), fMaxSize);
            fLeftover.assign(frame.data.begin() + fMaxSize, frame.data.end());
            fLeftoverPts = frame.presentation_us;
        } else {
            fFrameSize = frame.data.size();
            memcpy(fTo, frame.data.data(), fFrameSize);
        }
        fNumTruncatedBytes = 0;

        fPresentationTime.tv_sec = frame.presentation_us / 1000000ULL;
        fPresentationTime.tv_usec = frame.presentation_us % 1000000ULL;

        FramedSource::afterGetting(this);
    }

protected:
    H264QueueSource(UsageEnvironment& env,
                    FrameQueue<VideoFrame>* queue,
                    std::atomic<bool>* idr_requested,
                    H264QueueSource** back_ref)
        : FramedSource(env), fQueue(queue), fIdrRequested(idr_requested),
          fBackRef(back_ref) {
        // First attach by any client triggers a keyframe request — the
        // queue is also flushed by the encoder when it picks this up so
        // live555 starts on a clean IDR.
        fIdrRequested->store(true);
        if (fBackRef) *fBackRef = this;
    }

    ~H264QueueSource() override {
        // Clear the worker's back-reference so its trigger callback can't
        // race onto a dangling pointer. Both live on the live555 thread
        // (this destructor runs there too), so the write is safe.
        if (fBackRef && *fBackRef == this) *fBackRef = nullptr;
    }

    void doGetNextFrame() override { deliverFrame(); }

private:
    FrameQueue<VideoFrame>* fQueue;
    std::atomic<bool>* fIdrRequested;
    H264QueueSource** fBackRef;

    // Buffer for the tail of an oversized frame (frame.size > fMaxSize).
    // Empty in the common case — H.264 access units at our bitrate fit in
    // fMaxSize comfortably. Only matters for the rare giant I-frame.
    std::vector<uint8_t> fLeftover;
    uint64_t fLeftoverPts{0};
};

// Subsession boilerplate: creates the queue source, wraps it in the H.264
// stream framer (which parses NAL units out of the byte stream), and the
// RTP sink. SDP acquisition uses the standard live555 dummy-sink pattern,
// the same as the prior FIFO version — the framer extracts SPS/PPS from
// the very first IDR the encoder emits.
class H264QueueSubsession : public OnDemandServerMediaSubsession {
public:
    static H264QueueSubsession* createNew(UsageEnvironment& env,
                                          FrameQueue<VideoFrame>* queue,
                                          std::atomic<bool>* idr_requested,
                                          H264QueueSource** source_out,
                                          Boolean reuseFirstSource) {
        return new H264QueueSubsession(env, queue, idr_requested,
                                       source_out, reuseFirstSource);
    }

protected:
    H264QueueSubsession(UsageEnvironment& env,
                        FrameQueue<VideoFrame>* queue,
                        std::atomic<bool>* idr_requested,
                        H264QueueSource** source_out,
                        Boolean reuseFirstSource)
        : OnDemandServerMediaSubsession(env, reuseFirstSource),
          fQueue(queue), fIdrRequested(idr_requested),
          fSourceOut(source_out) {
    }

    ~H264QueueSubsession() override {
        if (nextTask_ != nullptr) {
            envir().taskScheduler().unscheduleDelayedTask(nextTask_);
            nextTask_ = nullptr;
        }
        delete[] auxSDPLine_;
    }

    FramedSource* createNewStreamSource(unsigned /*clientSessionId*/,
                                        unsigned& estBitrate) override {
        estBitrate = 1024; // kbps; matches our default target_bitrate
        // The source's constructor sets *fSourceOut and the destructor
        // clears it back to nullptr, keeping the worker's back-reference
        // accurate across the source's lifetime.
        H264QueueSource* src = H264QueueSource::createNew(
            envir(), fQueue, fIdrRequested, fSourceOut);
        return H264VideoStreamFramer::createNew(envir(), src);
    }

    RTPSink* createNewRTPSink(Groupsock* rtpGroupsock,
                              unsigned char rtpPayloadTypeIfDynamic,
                              FramedSource* /*inputSource*/) override {
        return H264VideoRTPSink::createNew(envir(), rtpGroupsock,
                                           rtpPayloadTypeIfDynamic);
    }

    char const* getAuxSDPLine(RTPSink* rtpSink, FramedSource* inputSource) override {
        if (auxSDPLine_) return auxSDPLine_;

        if (dummyRTPSink_ == nullptr) {
            dummyRTPSink_ = rtpSink;
            sdpStartTime_ = time(nullptr);
            dummyRTPSink_->startPlaying(*inputSource, afterPlayingDummy, this);
            checkForAuxSDPLine(this);
        }

        envir().taskScheduler().doEventLoop(&doneFlag_);
        doneFlag_ = 0;

        if (auxSDPLine_ == nullptr) {
            envir() << "Warning: SDP acquisition timed out, using default\n";
            auxSDPLine_ = strDup("");
        }
        return auxSDPLine_;
    }

private:
    static constexpr int SDP_TIMEOUT_SEC = 10;

    static void afterPlayingDummy(void* clientData) {
        auto* self = static_cast<H264QueueSubsession*>(clientData);
        if (self->nextTask_ != nullptr) {
            self->envir().taskScheduler().unscheduleDelayedTask(self->nextTask_);
            self->nextTask_ = nullptr;
        }
        self->doneFlag_ = 1;
    }

    static void checkForAuxSDPLine(void* clientData) {
        auto* self = static_cast<H264QueueSubsession*>(clientData);
        self->nextTask_ = nullptr;

        if (time(nullptr) - self->sdpStartTime_ > SDP_TIMEOUT_SEC) {
            self->envir() << "SDP acquisition timeout after " << SDP_TIMEOUT_SEC << "s\n";
            self->doneFlag_ = 1;
            return;
        }
        if (self->auxSDPLine_) {
            self->doneFlag_ = 1;
            return;
        }
        if (self->dummyRTPSink_ && self->dummyRTPSink_->auxSDPLine()) {
            self->auxSDPLine_ = strDup(self->dummyRTPSink_->auxSDPLine());
            self->doneFlag_ = 1;
            return;
        }
        constexpr int uSecondsToDelay = 100000;
        self->nextTask_ = self->envir().taskScheduler().scheduleDelayedTask(
            uSecondsToDelay, checkForAuxSDPLine, self);
    }

    FrameQueue<VideoFrame>* fQueue;
    std::atomic<bool>* fIdrRequested;
    H264QueueSource** fSourceOut;

    RTPSink* dummyRTPSink_{nullptr};
    char* auxSDPLine_{nullptr};
    char doneFlag_{0};
    TaskToken nextTask_{nullptr};
    time_t sdpStartTime_{0};
};

#endif // H264_QUEUE_SUBSESSION_H
