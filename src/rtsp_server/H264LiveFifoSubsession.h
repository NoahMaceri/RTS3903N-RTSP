#ifndef H264LIVEFIFOSUBSESSION_H
#define H264LIVEFIFOSUBSESSION_H

#include <liveMedia.hh>
#include <ctime>

// Maximum time to wait for SPS/PPS in seconds
#define SDP_ACQUISITION_TIMEOUT_SEC 10

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
        if (nextTask_ != nullptr) {
            envir().taskScheduler().unscheduleDelayedTask(nextTask_);
            nextTask_ = nullptr;
        }
        delete[] fifoPath_;
        delete[] auxSDPLine_;
    }

protected:
    FramedSource* createNewStreamSource(unsigned /*clientSessionId*/, unsigned& estBitrate) override {
        // 1024000 bps = 1024 kbps
        estBitrate = 1024; // kbps estimate; adjust as desired

        // ByteStreamFileSource works with FIFOs/pipes.
        // Use a small buffer to reduce latency
        FramedSource* fileSource = ByteStreamFileSource::createNew(envir(), fifoPath_,
                                                                    0,      // preferredFrameSize (0 = default)
                                                                    20000); // playTimePerFrame in microseconds
        if (fileSource == nullptr) {
            envir() << "Failed to create ByteStreamFileSource for " << fifoPath_ << "\n";
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
            sdpStartTime_ = time(nullptr);
            sdpCheckCount_ = 0;
            dummyRTPSink_->startPlaying(*inputSource, afterPlayingDummy, this);
            checkForAuxSDPLine(this);
        }

        envir().taskScheduler().doEventLoop(&doneFlag_); // until auxSDPLine_ is ready or timeout
        doneFlag_ = 0;

        // If we timed out and still don't have SDP, return a minimal default
        if (auxSDPLine_ == nullptr) {
            envir() << "Warning: SDP acquisition timed out, using default\n";
            // Return empty string rather than nullptr to prevent crash
            auxSDPLine_ = strDup("");
        }

        return auxSDPLine_;
    }

private:
    static void afterPlayingDummy(void* clientData) {
        auto* self = static_cast<H264LiveFifoSubsession*>(clientData);
        // Cancel any pending check task
        if (self->nextTask_ != nullptr) {
            self->envir().taskScheduler().unscheduleDelayedTask(self->nextTask_);
            self->nextTask_ = nullptr;
        }
        self->doneFlag_ = 1;
    }

    static void checkForAuxSDPLine(void* clientData) {
        auto* self = static_cast<H264LiveFifoSubsession*>(clientData);
        self->nextTask_ = nullptr; // Task has fired

        // Check for timeout
        time_t now = time(nullptr);
        if (now - self->sdpStartTime_ > SDP_ACQUISITION_TIMEOUT_SEC) {
            self->envir() << "SDP acquisition timeout after " << SDP_ACQUISITION_TIMEOUT_SEC << " seconds\n";
            self->doneFlag_ = 1;
            return;
        }

        self->sdpCheckCount_++;

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

    // Timeout tracking
    time_t sdpStartTime_{0};
    unsigned sdpCheckCount_{0};
};

#endif // H264LIVEFIFOSUBSESSION_H