#ifndef AAC_QUEUE_SUBSESSION_H
#define AAC_QUEUE_SUBSESSION_H

#include <cstdint>
#include <cstdio>
#include <cstring>

#include <liveMedia.hh>

#include "frame_queue.h"

// AAC-LC raw access units pulled from the in-process audio queue and
// packetized via MPEG4GenericRTPSink (RFC 3640). The producer strips the
// 7-byte ADTS header from each SDK-emitted frame before pushing — the
// SDP fmtp `config=` string already carries the AudioSpecificConfig, so
// the wire format is plain mpeg4-generic access units, not ADTS.
class AACQueueSource : public FramedSource {
public:
    static AACQueueSource* createNew(UsageEnvironment& env,
                                     FrameQueue<AudioFrame>* queue,
                                     AACQueueSource** back_ref = nullptr) {
        return new AACQueueSource(env, queue, back_ref);
    }

    void deliverFrame() {
        if (!isCurrentlyAwaitingData()) return;

        AudioFrame frame;
        if (!fQueue->try_pop(frame)) return;

        // AAC frames at our bitrates are well under 1 KB — mpeg4 max
        // access-unit size is 8 KB. No truncation case in practice.
        fFrameSize = (frame.data.size() > fMaxSize) ? fMaxSize : frame.data.size();
        fNumTruncatedBytes = frame.data.size() - fFrameSize;
        memcpy(fTo, frame.data.data(), fFrameSize);

        fPresentationTime.tv_sec  = frame.presentation_us / 1000000ULL;
        fPresentationTime.tv_usec = frame.presentation_us % 1000000ULL;
        fDurationInMicroseconds   = frame.duration_us;

        FramedSource::afterGetting(this);
    }

protected:
    AACQueueSource(UsageEnvironment& env, FrameQueue<AudioFrame>* queue,
                   AACQueueSource** back_ref)
        : FramedSource(env), fQueue(queue), fBackRef(back_ref) {
        if (fBackRef) *fBackRef = this;
    }

    ~AACQueueSource() override {
        if (fBackRef && *fBackRef == this) *fBackRef = nullptr;
    }

    void doGetNextFrame() override { deliverFrame(); }

private:
    FrameQueue<AudioFrame>* fQueue;
    AACQueueSource** fBackRef;
};

class AACQueueSubsession : public OnDemandServerMediaSubsession {
public:
    static AACQueueSubsession* createNew(UsageEnvironment& env,
                                         FrameQueue<AudioFrame>* queue,
                                         AACQueueSource** source_out,
                                         uint32_t sample_rate,
                                         uint8_t channels,
                                         uint32_t bitrate_bps,
                                         Boolean reuseFirstSource) {
        return new AACQueueSubsession(env, queue, source_out,
                                      sample_rate, channels, bitrate_bps,
                                      reuseFirstSource);
    }

protected:
    AACQueueSubsession(UsageEnvironment& env,
                       FrameQueue<AudioFrame>* queue,
                       AACQueueSource** source_out,
                       uint32_t sample_rate, uint8_t channels,
                       uint32_t bitrate_bps,
                       Boolean reuseFirstSource)
        : OnDemandServerMediaSubsession(env, reuseFirstSource),
          fQueue(queue), fSourceOut(source_out),
          fSampleRate(sample_rate), fChannels(channels),
          fBitrate(bitrate_bps) {
        // AudioSpecificConfig (ISO/IEC 14496-3) for AAC-LC, packed into a
        // 16-bit big-endian word:
        //   audioObjectType (5b) | samplingFrequencyIndex (4b) |
        //   channelConfiguration (4b) | GASpecificConfig (3b, all 0)
        // We use AAC-LC (object_type=2). The SDK only accepts 16 kHz
        // and 48 kHz at bind time on RTS3903N — others were rejected
        // empirically. Stay defensive: lookup table covers the full set.
        static const struct { uint32_t rate; uint8_t idx; } kFreqIdx[] = {
            {96000, 0}, {88200, 1}, {64000, 2}, {48000, 3}, {44100, 4},
            {32000, 5}, {24000, 6}, {22050, 7}, {16000, 8}, {12000, 9},
            {11025,10}, { 8000,11},
        };
        uint8_t freq_idx = 3;  // sensible default = 48 kHz
        for (size_t i = 0; i < sizeof(kFreqIdx) / sizeof(kFreqIdx[0]); ++i) {
            if (kFreqIdx[i].rate == sample_rate) { freq_idx = kFreqIdx[i].idx; break; }
        }
        const uint16_t asc = (2u << 11) | (uint16_t(freq_idx) << 7) | (uint16_t(channels) << 3);
        snprintf(fConfigStr, sizeof(fConfigStr), "%04x", asc);
    }

    FramedSource* createNewStreamSource(unsigned /*clientSessionId*/,
                                        unsigned& estBitrate) override {
        estBitrate = (fBitrate + 999) / 1000;   // kbps for live555 hint
        return AACQueueSource::createNew(envir(), fQueue, fSourceOut);
    }

    RTPSink* createNewRTPSink(Groupsock* rtpGroupsock,
                              unsigned char rtpPayloadTypeIfDynamic,
                              FramedSource* /*inputSource*/) override {
        // mpeg4-generic / AAC-hbr, RFC 3640. Dynamic payload type, RTP
        // timestamp clock = audio sample rate.
        return MPEG4GenericRTPSink::createNew(envir(), rtpGroupsock,
                                              rtpPayloadTypeIfDynamic,
                                              fSampleRate,
                                              "audio", "AAC-hbr",
                                              fConfigStr,
                                              fChannels);
    }

private:
    FrameQueue<AudioFrame>* fQueue;
    AACQueueSource**        fSourceOut;
    uint32_t                fSampleRate;
    uint8_t                 fChannels;
    uint32_t                fBitrate;
    char                    fConfigStr[8];
};

#endif // AAC_QUEUE_SUBSESSION_H
