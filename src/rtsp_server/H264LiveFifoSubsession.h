#ifndef H264LIVEFIFOSUBSESSION_H
#define H264LIVEFIFOSUBSESSION_H

#include <liveMedia.hh>

class H264LiveFifoSubsession : public OnDemandServerMediaSubsession {
public:
    static H264LiveFifoSubsession* createNew(UsageEnvironment& env, const char* fifoPath, Boolean reuseFirstSource) {
        return new H264LiveFifoSubsession(env, fifoPath, reuseFirstSource);
    }

protected:
    H264LiveFifoSubsession(UsageEnvironment& env, const char* fifoPath, Boolean reuseFirstSource)
        : OnDemandServerMediaSubsession(env, reuseFirstSource),
          fifoPath_(strDup(fifoPath)) {}

    ~H264LiveFifoSubsession() override {
        delete[] fifoPath_;
        delete[] auxSDPLine_;
    }

protected:
    FramedSource* createNewStreamSource(unsigned /*clientSessionId*/, unsigned& estBitrate) override {
        estBitrate = 2000; // kbps estimate; adjust as desired

        // ByteStreamFileSource works with FIFOs/pipes.
        FramedSource* fileSource = ByteStreamFileSource::createNew(envir(), fifoPath_);
        if (fileSource == nullptr) {
            return nullptr;
        }

        // Wrap in H.264 framer:
        return H264VideoStreamFramer::createNew(envir(), fileSource);
    }

    RTPSink* createNewRTPSink(Groupsock* rtpGroupsock,
                             unsigned char rtpPayloadTypeIfDynamic,
                             FramedSource* /*inputSource*/) override {
        return H264VideoRTPSink::createNew(envir(), rtpGroupsock, rtpPayloadTypeIfDynamic);
    }

    char const* getAuxSDPLine(RTPSink* rtpSink, FramedSource* inputSource) override {
        // This is standard live555 pattern: ask the sink for its aux SDP line
        // after it has started playing a little (so it sees SPS/PPS).
        if (auxSDPLine_) return auxSDPLine_;

        if (dummyRTPSink_ == nullptr) {
            dummyRTPSink_ = rtpSink;
            dummyRTPSink_->startPlaying(*inputSource, afterPlayingDummy, this);
            checkForAuxSDPLine(this);
        }

        envir().taskScheduler().doEventLoop(&doneFlag_); // until auxSDPLine_ is ready
        doneFlag_ = 0;
        return auxSDPLine_;
    }

private:
    static void afterPlayingDummy(void* clientData) {
        auto* self = static_cast<H264LiveFifoSubsession*>(clientData);
        self->doneFlag_ = 1;
    }

    static void checkForAuxSDPLine(void* clientData) {
        auto* self = static_cast<H264LiveFifoSubsession*>(clientData);

        if (self->auxSDPLine_) {
            self->doneFlag_ = 1;
            return;
        }

        if (self->dummyRTPSink_ && self->dummyRTPSink_->auxSDPLine()) {
            self->auxSDPLine_ = strDup(self->dummyRTPSink_->auxSDPLine());
            self->doneFlag_ = 1;
            return;
        }

        // Try again shortly
        constexpr int uSecondsToDelay = 100000; // 100ms
        self->nextTask_ = self->envir().taskScheduler().scheduleDelayedTask(
            uSecondsToDelay, checkForAuxSDPLine, self);
    }

private:
    char* fifoPath_{nullptr};

    RTPSink* dummyRTPSink_{nullptr};
    char* auxSDPLine_{nullptr};
    char doneFlag_{0};
    TaskToken nextTask_{nullptr};
};

#endif // H264LIVEFIFOSUBSESSION_H