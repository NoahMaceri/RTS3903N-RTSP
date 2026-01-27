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

        // ByteStreamFileSource works with FIFOs/pipes
        // G.711 at 8kHz produces 8000 bytes/sec = ~125 microseconds per byte
        // Use small preferred frame size for low latency
        FramedSource* fileSource = ByteStreamFileSource::createNew(envir(), fifoPath_,
                                                                    160,    // preferredFrameSize (20ms of audio at 8kHz)
                                                                    20000); // playTimePerFrame in microseconds (20ms)
        if (fileSource == nullptr) {
            envir() << "Failed to create ByteStreamFileSource for audio " << fifoPath_ << "\n";
            return nullptr;
        }

        return fileSource;
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
