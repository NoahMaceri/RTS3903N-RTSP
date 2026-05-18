/*
 * factory_data.h — read /dev/mtdblock6 the way stock load_cpld_ssp does.
 * Layout + per-character semantics live in docs/load_cpld_ssp.md §2
 * and docs/cpld.md §2.
 *
 * `hw_ver[0] == '1'` is the canonical "this board has PTZ motor
 * hardware" flag — every SSP insmod in stock is gated on it.
 */
#ifndef FACTORY_DATA_H
#define FACTORY_DATA_H

#include <cstdint>
#include <cstring>
#include <fcntl.h>
#include <unistd.h>

#define FACTORY_DATA_PATH       "/dev/mtdblock6"
#define FACTORY_DATA_HW_OFFSET  0xA8
#define FACTORY_DATA_GPIO_OFFSET 0xCC
#define FACTORY_DATA_FIELD_LEN  32
#define FACTORY_DATA_MAGIC1_OFFSET 0xA4
#define FACTORY_DATA_MAGIC2_OFFSET 0xC8

struct FactoryData {
    char hw_ver[FACTORY_DATA_FIELD_LEN + 1];
    char gpio_pin[FACTORY_DATA_FIELD_LEN + 1];
};

// 0 = ok, -1 = open failed, -2 = short read, -3 = magic mismatch.
static int factory_data_read(struct FactoryData *out) {
    if (out == nullptr) return -1;
    std::memset(out, 0, sizeof(*out));

    const int fd = open(FACTORY_DATA_PATH, O_RDONLY);
    if (fd < 0) return -1;

    constexpr int span_len = FACTORY_DATA_GPIO_OFFSET + FACTORY_DATA_FIELD_LEN;  // 0xEC
    uint8_t buf[span_len];
    const ssize_t n = pread(fd, buf, span_len, 0);
    close(fd);
    if (n < span_len) return -2;

    // Magic sentinels — load_cpld_ssp reads them as 32-bit ints with
    // the high three bytes zero, so a byte-wise check is equivalent.
    if (buf[FACTORY_DATA_MAGIC1_OFFSET] != 0xAA) return -3;
    if (buf[FACTORY_DATA_MAGIC2_OFFSET] != 0xBB) return -3;

    std::memcpy(out->hw_ver,   buf + FACTORY_DATA_HW_OFFSET,   FACTORY_DATA_FIELD_LEN);
    std::memcpy(out->gpio_pin, buf + FACTORY_DATA_GPIO_OFFSET, FACTORY_DATA_FIELD_LEN);
    out->hw_ver[FACTORY_DATA_FIELD_LEN]   = '\0';
    out->gpio_pin[FACTORY_DATA_FIELD_LEN] = '\0';
    return 0;
}

// Fast, side-effect-free PTZ presence check; works even before
// ssp_ms41909*.ko is loaded. False on any read failure.
static bool factory_data_has_ptz(void) {
    struct FactoryData fd;
    if (factory_data_read(&fd) != 0) return false;
    return fd.hw_ver[0] == '1';
}

#endif // FACTORY_DATA_H
