// cpld_info — print the cpld_periph.ko per-board GPIO wiring.
// Source order: /sys/module/cpld_periph/parameters/* (live), then
// /dev/mtdblock6 (factory flash). Decode rules: docs/cpld.md §2.

#include <cstdio>
#include <cstring>
#include <fcntl.h>
#include <unistd.h>

#include "factory_data.h"

namespace {

constexpr const char *PARAM_GPIO = "/sys/module/cpld_periph/parameters/gpio";
constexpr const char *PARAM_HW   = "/sys/module/cpld_periph/parameters/hw";

constexpr int UNWIRED = -1;

struct Decoded {
    int led_green = UNWIRED;
    int led_red = UNWIRED;
    int led_ethernet = UNWIRED;
    int ir_led = UNWIRED;
    int white = UNWIRED;
    int factory_default = UNWIRED;
    int audio = UNWIRED;
    int ircut_anode = UNWIRED;
    int ircut_cathode = UNWIRED;

    // Polarity. 'H' = active-high, 'L' = active-low, '?' = N/A (input, or no info).
    char led_green_pol = '?';
    char led_red_pol = '?';
    char ir_pol = '?';
    char audio_pol = '?';

    // Trace string per port — which gpio[i] or hw[i] character drove
    // the assignment. Helps when a port appears unexpectedly wired.
    char led_green_src[16] = "";
    char led_red_src[16] = "";
    char ir_led_src[16] = "";
};

int read_param(const char *path, char *out, size_t sz) {
    const int fd = open(path, O_RDONLY);
    if (fd < 0) return -1;
    const ssize_t n = read(fd, out, sz - 1);
    close(fd);
    if (n < 0) return -1;
    out[n] = '\0';
    // strip trailing whitespace/newline (sysfs adds \n)
    ssize_t end = n;
    while (end > 0 && (out[end-1] == '\n' || out[end-1] == '\r'
                    || out[end-1] == ' '  || out[end-1] == '\t')) {
        out[--end] = '\0';
    }
    return static_cast<int>(end);
}

inline char at(const char *s, size_t i) {
    return i < strlen(s) ? s[i] : '\0';
}

// Walks the modprobe strings in the same order as init_module(),
// applying each rule. Later writes to the same port overwrite earlier
// ones — same behavior as the kernel.
Decoded decode(const char *gpio, const char *hw) {
    Decoded d;

    // gpio[0]: top-of-stack GPIO 0xB
    switch (at(gpio, 0)) {
        case '2': d.led_green = 0xB;
                  snprintf(d.led_green_src, sizeof(d.led_green_src), "gpio[0]='2'");
                  break;
        case '3': d.led_ethernet = 0xB; break;
        case '4': d.ir_led = 0xB;
                  d.ir_pol = (at(hw, 7) == '2') ? 'L' : 'H';
                  snprintf(d.ir_led_src, sizeof(d.ir_led_src), "gpio[0]='4'");
                  break;
    }

    // gpio[2]: GPIO 0x16 — green or red, polarity in the char
    switch (at(gpio, 2)) {
        case '2': d.led_green = 0x16; d.led_green_pol = 'L';
                  snprintf(d.led_green_src, sizeof(d.led_green_src), "gpio[2]='2'");
                  break;
        case '3': d.led_green = 0x16; d.led_green_pol = 'H';
                  snprintf(d.led_green_src, sizeof(d.led_green_src), "gpio[2]='3'");
                  break;
        case '4': d.led_red = 0x16; d.led_red_pol = 'L';
                  snprintf(d.led_red_src, sizeof(d.led_red_src), "gpio[2]='4'");
                  break;
        case '5': d.led_red = 0x16; d.led_red_pol = 'H';
                  snprintf(d.led_red_src, sizeof(d.led_red_src), "gpio[2]='5'");
                  break;
    }

    // gpio[3]: GPIO 0x12 — IR LED or white-light
    switch (at(gpio, 3)) {
        case '2': d.ir_led = 0x12;
                  d.ir_pol = (at(hw, 7) == '2') ? 'L' : 'H';
                  snprintf(d.ir_led_src, sizeof(d.ir_led_src), "gpio[3]='2'");
                  break;
        case '3': d.white = 0x12; break;
    }

    // gpio[4]: GPIO 0x13 — white-light or IR LED
    switch (at(gpio, 4)) {
        case '2': d.white = 0x13; break;
        case '3': d.ir_led = 0x13;
                  d.ir_pol = (at(hw, 7) == '2') ? 'L' : 'H';
                  snprintf(d.ir_led_src, sizeof(d.ir_led_src), "gpio[4]='3'");
                  break;
    }

    // gpio[7]: GPIO 0xF — red or green
    switch (at(gpio, 7)) {
        case '3': d.led_red = 0xF; d.led_red_pol = 'L';
                  snprintf(d.led_red_src, sizeof(d.led_red_src), "gpio[7]='3'");
                  break;
        case '4': d.led_red = 0xF; d.led_red_pol = 'H';
                  snprintf(d.led_red_src, sizeof(d.led_red_src), "gpio[7]='4'");
                  break;
        case '5': d.led_green = 0xF; d.led_green_pol = 'L';
                  snprintf(d.led_green_src, sizeof(d.led_green_src), "gpio[7]='5'");
                  break;
        case '6': d.led_green = 0xF; d.led_green_pol = 'H';
                  snprintf(d.led_green_src, sizeof(d.led_green_src), "gpio[7]='6'");
                  break;
    }

    if (at(gpio, 8) == '1')  d.factory_default = 6;       // input — no polarity
    if (at(gpio, 9) == '1') {
        d.audio = 9;
        d.audio_pol = (at(hw, 6) == '2') ? 'L' : 'H';
    }
    if (at(gpio, 0xB) == '2') {
        d.ir_led = 0;
        d.ir_pol = (at(hw, 7) == '2') ? 'L' : 'H';
        snprintf(d.ir_led_src, sizeof(d.ir_led_src), "gpio[0xB]='2'");
    }

    // ANODE / CATHODE swap. gpio[0xC] sets the "first" of the pair on
    // GPIO 0x14; gpio[0xD] sets the "second" on GPIO 0x15. '1' = anode
    // on first / cathode on second; '2' = inverted.
    if (at(gpio, 0xC) == '1')      d.ircut_anode   = 0x14;
    else if (at(gpio, 0xD) == '2') d.ircut_anode   = 0x15;
    if (at(gpio, 0xD) == '1')      d.ircut_cathode = 0x15;
    else if (at(gpio, 0xC) == '2') d.ircut_cathode = 0x14;

    return d;
}

const char *pol_str(char p) {
    switch (p) {
        case 'H': return "active-high";
        case 'L': return "active-low";
        default:  return "";
    }
}

void print_port(const char *name, int gpio, char pol, const char *src) {
    if (gpio == UNWIRED) {
        printf("  %-26s (not wired)\n", name);
        return;
    }
    const char *ps = pol_str(pol);
    if (ps[0] != '\0' && src[0] != '\0')
        printf("  %-26s GPIO 0x%02X  (%-11s)  [%s]\n", name, gpio, ps, src);
    else if (ps[0] != '\0')
        printf("  %-26s GPIO 0x%02X  (%s)\n", name, gpio, ps);
    else if (src[0] != '\0')
        printf("  %-26s GPIO 0x%02X                  [%s]\n", name, gpio, src);
    else
        printf("  %-26s GPIO 0x%02X\n", name, gpio);
}

} // namespace

int main(int /*argc*/, char ** /*argv*/) {
    char gpio[64] = {};
    char hw[64]   = {};
    const char *source = nullptr;

    // Prefer the live kernel module params; fall back to factory flash.
    if (read_param(PARAM_GPIO, gpio, sizeof(gpio)) >= 0 &&
        read_param(PARAM_HW,   hw,   sizeof(hw))   >= 0) {
        source = "/sys/module/cpld_periph/parameters";
    } else {
        FactoryData fd;
        const int rc = factory_data_read(&fd);
        if (rc < 0) {
            fprintf(stderr, "cpld_info: cannot read %s nor %s (rc=%d)\n",
                    PARAM_GPIO, FACTORY_DATA_PATH, rc);
            fprintf(stderr, "  is cpld_periph.ko loaded?  is mtdblock6 accessible?\n");
            return 1;
        }
        strncpy(gpio, fd.gpio_pin, sizeof(gpio) - 1);
        strncpy(hw,   fd.hw_ver,   sizeof(hw)   - 1);
        source = FACTORY_DATA_PATH " (cpld_periph.ko not loaded)";
    }

    printf("cpld_periph modprobe wiring (source: %s):\n", source);
    printf("  gpio = \"%s\"  (%zu chars)\n", gpio, strlen(gpio));
    printf("  hw   = \"%s\"  (%zu chars)\n", hw,   strlen(hw));

    if (strlen(gpio) != 32 || strlen(hw) != 32) {
        fprintf(stderr,
                "\nWARNING: expected 32-char strings for both gpio and hw — "
                "the kernel module won't have loaded with these. Continuing "
                "with the partial decode anyway.\n");
    }

    const Decoded d = decode(gpio, hw);

    printf("\nDecoded ports:\n");
    print_port("PORT_LED_GREEN",         d.led_green,       d.led_green_pol, d.led_green_src);
    print_port("PORT_LED_RED",           d.led_red,         d.led_red_pol,   d.led_red_src);
    print_port("PORT_LED_ETHERNET",      d.led_ethernet,    '?',
               at(gpio, 0) == '3' ? "gpio[0]='3'" : "");
    print_port("PORT_IR_LED",            d.ir_led,          d.ir_pol,        d.ir_led_src);
    print_port("PORT_WHITE_LIGHT_PIN",   d.white,           '?',
               d.white != UNWIRED ?
                   (at(gpio, 3) == '3' ? "gpio[3]='3'" : "gpio[4]='2'")
                 : "");
    print_port("PORT_FACTORY_DEFAULT",   d.factory_default, '?',
               d.factory_default != UNWIRED ? "gpio[8]='1' (input)" : "");
    print_port("PORT_AUDIO_ENABLE",      d.audio,           d.audio_pol,
               d.audio != UNWIRED ? "gpio[9]='1'" : "");
    print_port("PORT_IR_CUT_DN_ANODE",   d.ircut_anode,     '?',
               d.ircut_anode != UNWIRED ?
                   (at(gpio, 0xC) == '1' ? "gpio[0xC]='1'" : "gpio[0xD]='2'")
                 : "");
    print_port("PORT_IR_CUT_DN_CATHODE", d.ircut_cathode,   '?',
               d.ircut_cathode != UNWIRED ?
                   (at(gpio, 0xD) == '1' ? "gpio[0xD]='1'" : "gpio[0xC]='2'")
                 : "");

    // Polarity-flippers from hw[] — surface them explicitly so it's
    // obvious whether IR LED / audio amp are wired active-low.
    if (at(hw, 6) == '2' || at(hw, 7) == '2') {
        printf("\nPolarity overrides (from hw[]):\n");
        if (at(hw, 6) == '2')
            printf("  hw[6]='2' → AUDIO_ON = 0 (audio amp is active-low)\n");
        if (at(hw, 7) == '2')
            printf("  hw[7]='2' → IR_ON    = 0 (IR LED gate is active-low)\n");
    }

    // PTZ — mirrors load_cpld_ssp's decision (docs/load_cpld_ssp.md §3
    // and §4) and what stock dispatch checks via g_ptz_mode
    // (docs/dispatch.md §10). The motor pattern depends only on the
    // hw_ver[0] flag plus a gpio_pin substring, both of which we
    // already have above — no extra ioctls needed.
    printf("\nPTZ:\n");
    printf("  Factory flag:   hw[0] = '%c' (%s)\n",
           hw[0] ? hw[0] : '?',
           hw[0] == '1' ? "PTZ-capable" : "no PTZ hardware");
    const FactoryPtzMotor motor = factory_motor_from_strings(hw, gpio);
    printf("  Motor type:     %s\n", factory_ptz_motor_name(motor));
    if (access("/dev/ssp", F_OK) == 0) {
        printf("  /dev/ssp:       present (ssp_ms41909*.ko loaded)\n");
    } else {
        printf("  /dev/ssp:       absent%s\n",
               motor == FACTORY_PTZ_NONE ? "" :
               " — kernel module not loaded? run `ptz_tool info`");
    }

    return 0;
}
