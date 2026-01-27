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
 *
 * PCMULiveFifoSubsession.h
 *
 * Live555 subsession for streaming G.711 u-law (PCMU) audio from a FIFO.
 */
#ifndef PCMULIVEFIFOSUBSESSION_H
#define PCMULIVEFIFOSUBSESSION_H

#include <liveMedia.hh>
#include <fcntl.h>
#include <unistd.h>
#include <poll.h>
#include <errno.h>

// Custom FIFO source that doesn't treat empty reads as EOF
class FifoAudioSource : public FramedSource {
public:
    static FifoAudioSource* createNew(UsageEnvironment& env, const char* fifoPath) {
        int fd = open(fifoPath, O_RDONLY | O_NONBLOCK);
        if (fd < 0) {
            env << "FifoAudioSource: Failed to open " << fifoPath << ": " << strerror(errno) << "\n";
            return nullptr;
        }
        return new FifoAudioSource(env, fd);
    }

protected:
    FifoAudioSource(UsageEnvironment& env, int fd)
        : FramedSource(env), fFd(fd) {}

    ~FifoAudioSource() override {
        if (fFd >= 0) {
            ::close(fFd);
            fFd = -1;
        }
    }

    void doGetNextFrame() override {
        doReadFromFifo();
    }

    void doStopGettingFrames() override {
        envir().taskScheduler().unscheduleDelayedTask(fNextReadTask);
        fNextReadTask = nullptr;
        FramedSource::doStopGettingFrames();
    }

private:
    void doReadFromFifo() {
        if (fFd < 0) {
            handleClosure();
            return;
        }

        // Read 160 bytes = 20ms of audio at 8kHz G.711
        unsigned const bytesToRead = fMaxSize < 160 ? fMaxSize : 160;

        ssize_t bytesRead = read(fFd, fTo, bytesToRead);

        if (bytesRead > 0) {
            fFrameSize = bytesRead;
            fNumTruncatedBytes = 0;

            // Use current time
            gettimeofday(&fPresentationTime, nullptr);

            // Set duration so sink paces delivery correctly
            // G.711 at 8kHz: 1 byte = 1 sample = 125 microseconds
            fDurationInMicroseconds = bytesRead * 125;

            FramedSource::afterGetting(this);
        } else if (bytesRead == 0 || (bytesRead < 0 && errno == EAGAIN)) {
            // No data - retry quickly
            fNextReadTask = envir().taskScheduler().scheduleDelayedTask(
                2000, // 2ms - faster polling
                (TaskFunc*)readAvailableHandler,
                this
            );
        } else {
            envir() << "FifoAudioSource: read error: " << strerror(errno) << "\n";
            handleClosure();
        }
    }

    static void readAvailableHandler(FifoAudioSource* source) {
        source->fNextReadTask = nullptr;
        source->doReadFromFifo();
    }

private:
    int fFd;
    TaskToken fNextReadTask{nullptr};
};

class PCMULiveFifoSubsession : public OnDemandServerMediaSubsession {
public:
    static PCMULiveFifoSubsession* createNew(UsageEnvironment& env, const char* fifoPath, Boolean reuseFirstSource) {
        return new PCMULiveFifoSubsession(env, fifoPath, reuseFirstSource);
    }

protected:
    PCMULiveFifoSubsession(UsageEnvironment& env, const char* fifoPath, Boolean reuseFirstSource)
        : OnDemandServerMediaSubsession(env, reuseFirstSource),
          fifoPath_(strDup(fifoPath)) {}

    ~PCMULiveFifoSubsession() override {
        delete[] fifoPath_;
    }

protected:
    FramedSource* createNewStreamSource(unsigned /*clientSessionId*/, unsigned& estBitrate) override {
        // G.711 u-law: 8kHz * 8 bits = 64 kbps
        estBitrate = 64; // kbps

        // Use custom FIFO source that handles live streaming properly
        FramedSource* source = FifoAudioSource::createNew(envir(), fifoPath_);
        if (source == nullptr) {
            envir() << "Failed to create FifoAudioSource for " << fifoPath_ << "\n";
            return nullptr;
        }

        return source;
    }

    RTPSink* createNewRTPSink(Groupsock* rtpGroupsock,
                             unsigned char /*rtpPayloadTypeIfDynamic*/,
                             FramedSource* /*inputSource*/) override {
        // Use SimpleRTPSink for G.711 u-law (PCMU)
        // Payload type 0 is the static RTP payload type for PCMU
        // 8000 Hz sample rate, "audio" media type, "PCMU" codec, 1 channel
        return SimpleRTPSink::createNew(envir(), rtpGroupsock,
                                        0,      // RTP payload type (0 = PCMU)
                                        8000,   // RTP timestamp frequency (sample rate)
                                        "audio",
                                        "PCMU",
                                        1,      // numChannels
                                        False); // allowMultipleFramesPerPacket
    }

private:
    char* fifoPath_{nullptr};
};

#endif // PCMULIVEFIFOSUBSESSION_H
