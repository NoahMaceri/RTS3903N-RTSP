/*
 * Copyright (c) 2025 Noah Maceri
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * sntp.cpp — minimal SNTPv3 client (RFC 4330).
 *
 * The stock busybox image on this camera lacks ntpd / ntpdate / rdate, and
 * the wget build is stripped of -S so we can't even cheat via the HTTP
 * Date header. We only need a one-shot, set-the-clock-once binary, so
 * SNTP is the right primitive: one UDP packet out, one back, parse the
 * 32-bit "transmit timestamp" seconds field, settimeofday().
 *
 * Usage:  sntp <server>             (e.g. pool.ntp.org)
 * Exits 0 on success and prints the new UTC time to stdout.
 */

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <unistd.h>
#include <netdb.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/time.h>

// Seconds between the NTP epoch (1900-01-01) and the Unix epoch (1970-01-01).
static const uint32_t NTP_EPOCH_OFFSET = 2208988800UL;
static const int      RECV_TIMEOUT_S   = 5;

int main(int argc, char **argv) {
    if (argc != 2) {
        fprintf(stderr, "usage: %s <ntp-server>\n", argv[0]);
        return 1;
    }
    const char *server = argv[1];

    struct addrinfo hints {};
    hints.ai_family   = AF_INET;
    hints.ai_socktype = SOCK_DGRAM;
    struct addrinfo *ai = nullptr;
    if (getaddrinfo(server, "123", &hints, &ai) != 0 || !ai) {
        fprintf(stderr, "sntp: cannot resolve %s\n", server);
        return 2;
    }

    int sock = socket(ai->ai_family, ai->ai_socktype, ai->ai_protocol);
    if (sock < 0) {
        perror("sntp: socket");
        freeaddrinfo(ai);
        return 3;
    }

    struct timeval to { RECV_TIMEOUT_S, 0 };
    setsockopt(sock, SOL_SOCKET, SO_RCVTIMEO, &to, sizeof(to));

    // Build the SNTP request packet. First byte is LI(2)=0 | VN(3)=3 | Mode(3)=3,
    // i.e. unsynchronized client request. The remaining 47 bytes are zero —
    // server fills them in.
    uint8_t pkt[48] = {0};
    pkt[0] = 0x1B;

    if (sendto(sock, pkt, sizeof(pkt), 0, ai->ai_addr, ai->ai_addrlen)
        != static_cast<ssize_t>(sizeof(pkt))) {
        perror("sntp: sendto");
        close(sock); freeaddrinfo(ai);
        return 4;
    }

    if (recv(sock, pkt, sizeof(pkt), 0) != static_cast<ssize_t>(sizeof(pkt))) {
        fprintf(stderr, "sntp: no response from %s\n", server);
        close(sock); freeaddrinfo(ai);
        return 5;
    }
    close(sock);
    freeaddrinfo(ai);

    // Sanity check the stratum (byte 1). 0 = "kiss-of-death", 16 = unsync.
    const uint8_t stratum = pkt[1];
    if (stratum == 0 || stratum >= 16) {
        fprintf(stderr, "sntp: server stratum invalid (%u)\n", stratum);
        return 6;
    }

    // Transmit timestamp lives at byte offset 40 — 4 bytes of integer
    // seconds since the NTP epoch (big-endian), then 4 bytes of fractional
    // seconds. We round-down to whole seconds; sub-second accuracy isn't
    // useful here (no RTC, scheduler jitter dwarfs <1ms anyway).
    const uint32_t ntp_secs =
        (static_cast<uint32_t>(pkt[40]) << 24) |
        (static_cast<uint32_t>(pkt[41]) << 16) |
        (static_cast<uint32_t>(pkt[42]) <<  8) |
         static_cast<uint32_t>(pkt[43]);

    if (ntp_secs < NTP_EPOCH_OFFSET) {
        fprintf(stderr, "sntp: bogus timestamp from server (pre-1970)\n");
        return 7;
    }
    const time_t unix_secs = static_cast<time_t>(ntp_secs - NTP_EPOCH_OFFSET);

    struct timeval new_tv { unix_secs, 0 };
    if (settimeofday(&new_tv, nullptr) != 0) {
        perror("sntp: settimeofday (need root?)");
        return 8;
    }

    char buf[64];
    struct tm gmt {};
    gmtime_r(&unix_secs, &gmt);
    strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S UTC", &gmt);
    printf("%s\n", buf);
    return 0;
}
