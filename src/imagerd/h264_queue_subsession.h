#ifndef H264_QUEUE_SUBSESSION_H
#define H264_QUEUE_SUBSESSION_H

#include <atomic>
#include <cstring>
#include <ctime>
#include <deque>
#include <vector>

#include <liveMedia.hh>
#include <zlog.h>

#include "frame_queue.h"

extern zlog_category_t *vid_c;

// Pulls H.264 NAL units out of an in-process queue (fed by the encoder
// thread) and hands them to live555's *discrete* framer. The cross-thread
// wakeup is driven by an EventTriggerId owned by rtsp_worker, so the
// producer never has to hold a pointer to this object — it just calls
// triggerEvent, which is the documented thread-safe primitive in live555.
//
// The Realtek encoder emits Annex-B byte-stream access units (NAL units
// separated by 0x000001 / 0x00000001 start codes). We split each access
// unit into individual NAL units, strip the start codes, and feed them to
// H264VideoStreamDiscreteFramer one per call. Each NAL inherits the access
// unit's PTS. The discrete framer passes that PTS through to the RTP sink
// unchanged.
//
// We deliberately do NOT use H264VideoStreamFramer (the byte-stream
// variant): that framer ignores the source's fPresentationTime and
// synthesizes its own from gettimeofday() + a fixed 1/fps tick. On this
// camera the encoder's actual frame rate jitters (auto-tune + ISP writes
// occasionally stall the capture loop briefly), so the framer's synthetic
// clock drifts relative to real time. ffmpeg-based clients (Frigate) see
// the resulting RTCP-SR vs RTP-timestamp mismatch and bail with
// AV_NOPTS_VALUE. The discrete framer respects the source's PTS, so our
// monotonic_us() timestamps survive end-to-end.
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

        // Drain leftover NAL units from a previously-popped access unit
        // before pulling a new one. With reuseFirstSource=True and the
        // discrete framer, we always end up here once per NAL.
        if (!fPendingNals.empty()) {
            deliverPendingNal();
            return;
        }

        VideoFrame frame;
        if (!fQueue->try_pop(frame)) {
            // Queue empty — nothing to do. The next push() in the producer
            // will trigger this callback and we'll try again.
            return;
        }

        splitAccessUnit(frame.data, frame.presentation_us);
        if (fPendingNals.empty()) return; // No NALs parsed; malformed AU.
        deliverPendingNal();
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

    // Drop any partially-delivered access unit if live555 stops pulling
    // from us (all clients disconnected mid-AU). When a new client attaches
    // and the source restarts, we want to begin from a fresh queue pop,
    // not from leftover NALs whose siblings were sent to the now-departed
    // client.
    void doStopGettingFrames() override {
        fPendingNals.clear();
        FramedSource::doStopGettingFrames();
    }

private:
    struct PendingNal {
        std::vector<uint8_t> data;       // NAL unit *without* start code
        uint64_t presentation_us;
    };

    FrameQueue<VideoFrame>* fQueue;
    std::atomic<bool>* fIdrRequested;
    H264QueueSource** fBackRef;
    std::deque<PendingNal> fPendingNals;

    // Locate the next Annex-B start code (00 00 01 or 00 00 00 01) at or
    // after offset `i`. Returns the offset of the start-code prefix and
    // sets *code_len to 3 or 4. Returns buf.size() if no start code is
    // found in the remaining buffer.
    static size_t find_start_code(const std::vector<uint8_t>& buf, size_t i,
                                  int* code_len) {
        const size_t n = buf.size();
        while (i + 2 < n) {
            if (buf[i] == 0 && buf[i+1] == 0) {
                if (buf[i+2] == 1) { *code_len = 3; return i; }
                if (i + 3 < n && buf[i+2] == 0 && buf[i+3] == 1) {
                    *code_len = 4; return i;
                }
            }
            ++i;
        }
        return n;
    }

    void splitAccessUnit(const std::vector<uint8_t>& buffer, uint64_t pts) {
        int code_len = 0;
        size_t pos = find_start_code(buffer, 0, &code_len);
        if (pos >= buffer.size()) return; // No start code — malformed AU.

        size_t nal_start = pos + code_len;
        while (nal_start < buffer.size()) {
            int next_code_len = 0;
            const size_t next_sc = find_start_code(buffer, nal_start, &next_code_len);
            if (next_sc > nal_start) {
                PendingNal nal;
                nal.data.assign(buffer.begin() + nal_start,
                                buffer.begin() + next_sc);
                nal.presentation_us = pts;
                fPendingNals.push_back(std::move(nal));
            }
            if (next_sc >= buffer.size()) break;
            nal_start = next_sc + next_code_len;
        }
    }

    void deliverPendingNal() {
        PendingNal nal = std::move(fPendingNals.front());
        fPendingNals.pop_front();

        const size_t copy_size = (nal.data.size() > fMaxSize) ? fMaxSize : nal.data.size();
        memcpy(fTo, nal.data.data(), copy_size);
        fFrameSize = copy_size;
        fNumTruncatedBytes = nal.data.size() > fMaxSize
            ? static_cast<unsigned>(nal.data.size() - fMaxSize)
            : 0;

        // Truncation should never fire in practice — H264VideoRTPSink does
        // its own FU-A fragmentation, and OutPacketBuffer::maxSize is 1 MB.
        // If it does, the decoder will see a corrupt NAL with no in-band
        // signal; surface it so we can adjust maxSize or chase down a runaway
        // I-frame.
        if (fNumTruncatedBytes > 0) {
            zlog_warn(vid_c, "H264QueueSource: NAL truncated, %u of %zu bytes dropped (fMaxSize=%u)",
                      fNumTruncatedBytes, nal.data.size(), fMaxSize);
        }

        fPresentationTime.tv_sec  = nal.presentation_us / 1000000ULL;
        fPresentationTime.tv_usec = nal.presentation_us % 1000000ULL;
        fDurationInMicroseconds   = 0; // sink paces from PTS deltas.

        FramedSource::afterGetting(this);
    }
};

// Subsession boilerplate: creates the queue source, wraps it in the
// discrete H.264 framer (which trusts the source's per-NAL PTS rather than
// synthesizing one), and the RTP sink. SDP acquisition uses the standard
// live555 dummy-sink pattern; the discrete framer still extracts SPS/PPS
// from passing NAL units so sprop-parameter-sets lands in the SDP.
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
        H264QueueSource* src = H264QueueSource::createNew(
            envir(), fQueue, fIdrRequested, fSourceOut);
        return H264VideoStreamDiscreteFramer::createNew(envir(), src);
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
