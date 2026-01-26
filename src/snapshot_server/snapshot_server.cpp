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
 */

/*
 * snapshot_server.cpp - CGI program for capturing JPEG snapshots
 *
 * This program connects to the imager_streamer's snapshot socket to request
 * a JPEG frame, then outputs it to stdout for CGI.
 *
 * Usage: Called as a CGI script via lighttpd
 *   GET /cgi-bin/snapshot -> Returns JPEG image
 */

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <arpa/inet.h>
#include <vector>

#define SNAPSHOT_SOCKET "/tmp/snapshot.sock"
#define TIMEOUT_SECONDS 10

static void output_error(const char *message) {
    printf("Status: 500 Internal Server Error\r\n");
    printf("Content-Type: text/plain\r\n");
    printf("\r\n");
    printf("Error: %s\n", message);
}

static void output_service_unavailable(const char *message) {
    printf("Status: 503 Service Unavailable\r\n");
    printf("Content-Type: text/plain\r\n");
    printf("\r\n");
    printf("Error: %s\n", message);
}

static void output_jpeg(const uint8_t *data, const size_t size) {
    printf("Content-Type: image/jpeg\r\n");
    printf("Content-Length: %zu\r\n", size);
    printf("Cache-Control: no-cache, no-store, must-revalidate\r\n");
    printf("Pragma: no-cache\r\n");
    printf("Expires: 0\r\n");
    printf("\r\n");
    fwrite(data, 1, size, stdout);
    fflush(stdout);
}

int main(int argc, char *argv[]) {
    int sock_fd = -1;
    sockaddr_un addr{};

    // Create Unix domain socket
    sock_fd = socket(AF_UNIX, SOCK_STREAM, 0);
    if (sock_fd < 0) {
        output_error("Failed to create socket");
        return 1;
    }

    // Set receive timeout
    timeval tv{};
    tv.tv_sec = TIMEOUT_SECONDS;
    tv.tv_usec = 0;
    setsockopt(sock_fd, SOL_SOCKET, SO_RCVTIMEO, &tv, sizeof(tv));

    // Connect to imager_streamer's snapshot socket
    memset(&addr, 0, sizeof(addr));
    addr.sun_family = AF_UNIX;
    strncpy(addr.sun_path, SNAPSHOT_SOCKET, sizeof(addr.sun_path) - 1);

    if (connect(sock_fd, reinterpret_cast<struct sockaddr *>(&addr), sizeof(addr)) < 0) {
        close(sock_fd);
        output_service_unavailable("Snapshot service not available - is imager_streamer running?");
        return 1;
    }

    // Read the size header (4 bytes, network order)
    uint32_t size_net;
    ssize_t bytes_read = recv(sock_fd, &size_net, sizeof(size_net), MSG_WAITALL);
    if (bytes_read != sizeof(size_net)) {
        close(sock_fd);
        output_error("Failed to read snapshot size");
        return 1;
    }

    const uint32_t jpeg_size = ntohl(size_net);
    if (jpeg_size == 0) {
        close(sock_fd);
        output_error("Snapshot capture failed or timed out");
        return 1;
    }

    // Read the JPEG data
    std::vector<uint8_t> jpeg_data(jpeg_size);
    size_t total_read = 0;
    while (total_read < jpeg_size) {
        bytes_read = recv(sock_fd, jpeg_data.data() + total_read,
                          jpeg_size - total_read, 0);
        if (bytes_read <= 0) {
            close(sock_fd);
            output_error("Failed to read snapshot data");
            return 1;
        }
        total_read += bytes_read;
    }

    close(sock_fd);

    // Output the JPEG
    output_jpeg(jpeg_data.data(), jpeg_size);

    return 0;
}
