#ifndef PCMU_QUEUE_SUBSESSION_H
#define PCMU_QUEUE_SUBSESSION_H

#include <cstring>

#include <liveMedia.hh>

#include "frame_queue.h"

// G.711 u-law (PCMU) source pulling from the in-process audio queue. Cross-
// thread wakeup is via an EventTriggerId owned by rtsp_worker — see
// h264_queue_subsession.h for the design rationale.
class PCMUQueueSource : public FramedSource {
public:
    static PCMUQueueSource* createNew(UsageEnvironment& env,
                                      FrameQueue<AudioFrame>* queue,
                                      PCMUQueueSource** back_ref = nullptr) {
        return new PCMUQueueSource(env, queue, back_ref);
    }

    void deliverFrame() {
        if (!isCurrentlyAwaitingData()) return;

        AudioFrame frame;
        if (!fQueue->try_pop(frame)) return;

        // G.711 packets from the encoder are tiny — they fit in fMaxSize.
        fFrameSize = (frame.data.size() > fMaxSize) ? fMaxSize : frame.data.size();
        fNumTruncatedBytes = 0;
        memcpy(fTo, frame.data.data(), fFrameSize);

        fPresentationTime.tv_sec  = frame.presentation_us / 1000000ULL;
        fPresentationTime.tv_usec = frame.presentation_us % 1000000ULL;
        fDurationInMicroseconds   = frame.duration_us;

        FramedSource::afterGetting(this);
    }

protected:
    PCMUQueueSource(UsageEnvironment& env, FrameQueue<AudioFrame>* queue,
                    PCMUQueueSource** back_ref)
        : FramedSource(env), fQueue(queue), fBackRef(back_ref) {
        if (fBackRef) *fBackRef = this;
    }

    ~PCMUQueueSource() override {
        if (fBackRef && *fBackRef == this) *fBackRef = nullptr;
    }

    void doGetNextFrame() override { deliverFrame(); }

private:
    FrameQueue<AudioFrame>* fQueue;
    PCMUQueueSource** fBackRef;
};

class PCMUQueueSubsession : public OnDemandServerMediaSubsession {
public:
    static PCMUQueueSubsession* createNew(UsageEnvironment& env,
                                          FrameQueue<AudioFrame>* queue,
                                          PCMUQueueSource** source_out,
                                          Boolean reuseFirstSource) {
        return new PCMUQueueSubsession(env, queue, source_out, reuseFirstSource);
    }

protected:
    PCMUQueueSubsession(UsageEnvironment& env,
                        FrameQueue<AudioFrame>* queue,
                        PCMUQueueSource** source_out,
                        Boolean reuseFirstSource)
        : OnDemandServerMediaSubsession(env, reuseFirstSource),
          fQueue(queue), fSourceOut(source_out) {
    }

    FramedSource* createNewStreamSource(unsigned /*clientSessionId*/,
                                        unsigned& estBitrate) override {
        estBitrate = 64; // kbps; G.711 at 8 kHz mono.
        return PCMUQueueSource::createNew(envir(), fQueue, fSourceOut);
    }

    RTPSink* createNewRTPSink(Groupsock* rtpGroupsock,
                              unsigned char /*rtpPayloadTypeIfDynamic*/,
                              FramedSource* /*inputSource*/) override {
        // Static RTP payload type 0 = PCMU. 8 kHz, mono.
        return SimpleRTPSink::createNew(envir(), rtpGroupsock,
                                        0, // payload type
                                        8000, // timestamp frequency
                                        "audio",
                                        "PCMU",
                                        1, // channels
                                        False); // multiple frames per packet
    }

private:
    FrameQueue<AudioFrame>* fQueue;
    PCMUQueueSource** fSourceOut;
};

#endif // PCMU_QUEUE_SUBSESSION_H
