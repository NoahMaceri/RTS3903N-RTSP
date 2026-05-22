/*
 * Read the per-board factory data block out of mtdblock6. hw_ver[0]=='1'
 * is the canonical "this board has PTZ motor hardware" flag; the gpio
 * pattern picks the specific motor variant.
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

enum FactoryPtzMotor {
    FACTORY_PTZ_NONE    = 0,
    FACTORY_PTZ_8PIN    = 1,  // ssp_ms41909.ko       — gpio_pin[0..7] all '1'
    FACTORY_PTZ_4P1PIN  = 2,  // ssp_ms41909_union.ko — gpio_pin[3..6] all '4' + [10]='4'
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

    if (buf[FACTORY_DATA_MAGIC1_OFFSET] != 0xAA) return -3;
    if (buf[FACTORY_DATA_MAGIC2_OFFSET] != 0xBB) return -3;

    std::memcpy(out->hw_ver,   buf + FACTORY_DATA_HW_OFFSET,   FACTORY_DATA_FIELD_LEN);
    std::memcpy(out->gpio_pin, buf + FACTORY_DATA_GPIO_OFFSET, FACTORY_DATA_FIELD_LEN);
    out->hw_ver[FACTORY_DATA_FIELD_LEN]   = '\0';
    out->gpio_pin[FACTORY_DATA_FIELD_LEN] = '\0';
    return 0;
}

static bool _fd_run_eq(const char *s, size_t start, size_t end, char c) {
    for (size_t i = start; i <= end; i++) {
        if (s[i] == '\0') return false;
        if (s[i] != c)    return false;
    }
    return true;
}

// String-based variant for callers reading the module params out of
// /sys/module/cpld_periph/parameters at runtime.
static FactoryPtzMotor factory_motor_from_strings(const char *hw, const char *gpio) {
    if (hw == nullptr || gpio == nullptr) return FACTORY_PTZ_NONE;
    if (hw[0] != '1')                     return FACTORY_PTZ_NONE;
    if (_fd_run_eq(gpio, 0, 7, '1'))      return FACTORY_PTZ_8PIN;
    if (_fd_run_eq(gpio, 3, 6, '4') && gpio[10] == '4')
                                          return FACTORY_PTZ_4P1PIN;
    return FACTORY_PTZ_NONE;
}

static FactoryPtzMotor factory_data_ptz_motor(void) {
    struct FactoryData fd;
    if (factory_data_read(&fd) != 0) return FACTORY_PTZ_NONE;
    return factory_motor_from_strings(fd.hw_ver, fd.gpio_pin);
}

static const char *factory_ptz_motor_name(FactoryPtzMotor m) {
    switch (m) {
        case FACTORY_PTZ_8PIN:   return "8-pin (ssp_ms41909)";
        case FACTORY_PTZ_4P1PIN: return "4+1-pin (ssp_ms41909_union)";
        default:                 return "none";
    }
}

// Loose check: only inspects hw_ver[0]. True even on PTZ-capable boards
// whose specific motor pattern isn't recognised. For "is PTZ actually
// going to work", use factory_data_ptz_motor() != NONE.
static bool factory_data_has_ptz(void) {
    struct FactoryData fd;
    if (factory_data_read(&fd) != 0) return false;
    return fd.hw_ver[0] == '1';
}

#endif // FACTORY_DATA_H
