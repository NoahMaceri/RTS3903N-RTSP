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
 * along with this program. If not, see <http://www.gnu.org/licenses/>.\
 *
 * cpld.h
 *
 * Userspace wrappers for /dev/cpld_periph. Despite the name, there is no
 * real CPLD on the camera — the kernel module (cpld_periph.ko) is a
 * thin GPIO multiplexer that maps a fixed set of ioctls onto SoC GPIO
 * pins. The per-board wiring is set at module insertion time via the
 * `gpio=`/`hw=` modprobe parameters; see docs/cpld.md for a full
 * reverse-engineering writeup.
 *
 * The kernel handler only inspects:
 *   - the high byte of `cmd` (must be CPLD_IOC_BASE = 0x70)
 *   - the low byte of `cmd` (the operation)
 * Everything else in the ioctl-cmd word is ignored. Only one op
 * (CPLD_IR_LED_SET, 0x13) reads from userspace; the rest don't touch
 * the third ioctl() argument at all.
 *
 * Based on the works of Colin Jensen (Copyright (c) 2021)
 */
#ifndef CPLD_H
#define CPLD_H

#include <cstdint>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <map>
#include <stdlib.h>

#define CPLD_IOC_BASE           0x70
#define CPLD_PATH               "/dev/cpld_periph"
#define CPLD_DRIVER             "/proc/driver/cpld"

/* LED state ioctls. The kernel module tracks green/red separately and
 * persists "mode" (off=0, on=1, blink=2). The blink modes drive a
 * 1 Hz kernel timer that toggles the GPIO independently of userspace. */
#define CPLD_GREEN_EN           0x01
#define CPLD_GREEN_DIS          0x02
#define CPLD_GREEN_BLINK        0x04    // 1 Hz heartbeat via in-kernel timer
#define CPLD_RED_EN             0x09
#define CPLD_RED_DIS            0x0A
#define CPLD_RED_BLINK          0x0C    // 1 Hz heartbeat via in-kernel timer
#define CPLD_FACTORY_DEFAULT_READ 0x0E  // read reset-button GPIO (input)
#define CPLD_AUDIO_ON           0x10
#define CPLD_AUDIO_OFF          0x11
#define CPLD_AUDIO_READ         0x12    // read PORT_AUDIO_ENABLE value
#define CPLD_IR_LED_SET         0x13    // copies an int from userspace; sets dir=out
#define CPLD_IR_LED_READ        0x14    // returns 100 if on, 0 if off (rmm-style)
#define CPLD_IRCUT_PULSE_A      0x15    // 200ms IR-cut solenoid pulse, dir A
#define CPLD_IRCUT_PULSE_B      0x16    // 200ms IR-cut solenoid pulse, dir B
#define CPLD_IRCUT_STATE_READ   0x17    // returns 0..3, encoded cathode<<1 | anode
#define CPLD_RED_GREEN_OFF      0x1B
#define CPLD_RED_GREEN_SET      0x1C    // re-applies green/red modes after _OFF
#define CPLD_WHITE_LED_ON       0x23
#define CPLD_WHITE_LED_OFF      0x24
#define CPLD_ETH_LED_ON         0x25
#define CPLD_ETH_LED_OFF        0x26

enum CPLD_BASIC_TYPE {
    RED,
    GREEN,
    WHITE,
    ETH,
    IR_CUT,
    AUDIO,
    RG_CTRL
};

const std::map<CPLD_BASIC_TYPE, uint8_t> cpld_en_map = {
    {RED, CPLD_RED_EN},
    {GREEN, CPLD_GREEN_EN},
    {WHITE, CPLD_WHITE_LED_ON},
    {ETH, CPLD_ETH_LED_ON},
    {IR_CUT, CPLD_IRCUT_PULSE_B},   // historically "DIS" — pulses solenoid one way
    {AUDIO, CPLD_AUDIO_ON},
    {RG_CTRL, CPLD_RED_GREEN_SET}
};

const std::map<CPLD_BASIC_TYPE, uint8_t> cpld_dis_map = {
    {RED, CPLD_RED_DIS},
    {GREEN, CPLD_GREEN_DIS},
    {WHITE, CPLD_WHITE_LED_OFF},
    {ETH, CPLD_ETH_LED_OFF},
    {IR_CUT, CPLD_IRCUT_PULSE_A},   // historically "EN" — pulses solenoid the other way
    {AUDIO, CPLD_AUDIO_OFF},
    {RG_CTRL, CPLD_RED_GREEN_OFF}   // turns both off, not really needed
};

// Enable or disable CPLD debug messages
static bool cpld_debug(bool enable) {
    // equivalent to echo "<val>" > /proc/driver/cpld
    // this will enable CPLD debug messages in dmesg & the serial output
    const int fd = open(CPLD_DRIVER, O_WRONLY);
    if (fd < 0) return false;
    char val;
    if (enable) {
        val = '1';
    } else {
        val = '0';
    }
    const ssize_t written = write(fd, &val, 1);
    close(fd);
    return (written == 1);
}

/* Issue an ioctl that takes no userspace payload. The kernel only looks
 * at the high byte (== CPLD_IOC_BASE) and the low byte (== op), so we
 * use _IO() rather than _IOC() — the size/dir fields are ignored. */
static bool cpld_op(const int op) {
    const int driver = open(CPLD_PATH, O_RDWR);
    if (driver < 0) return false;
    const int rc = ioctl(driver, _IO(CPLD_IOC_BASE, op), 0);
    close(driver);
    return (rc == 0);
}

/* Issue an ioctl whose handler does copy_from_user(local, arg, 4).
 * Only CPLD_IR_LED_SET uses this path. */
static bool cpld_op_send_int(const int op, int value) {
    const int driver = open(CPLD_PATH, O_RDWR);
    if (driver < 0) return false;
    const int rc = ioctl(driver, _IO(CPLD_IOC_BASE, op), &value);
    close(driver);
    return (rc == 0);
}

/* Issue an ioctl that returns an int. The handler ignores `arg` for
 * most cases and returns the value via the syscall return code, except
 * for CPLD_IR_LED_READ which copy_to_user()s into arg. We handle both
 * by reading the return value from ioctl(). */
static int32_t cpld_op_read_int(const int op) {
    int32_t value = 0;
    const int driver = open(CPLD_PATH, O_RDWR);
    if (driver < 0) return -1;
    const int rc = ioctl(driver, _IO(CPLD_IOC_BASE, op), &value);
    close(driver);
    if (rc < 0) return -1;
    // For CPLD_IR_LED_READ, the value is in `value` (copied to user).
    // For the others (0x0E, 0x12, 0x17), the value is the rc itself.
    if (op == CPLD_IR_LED_READ) return value;
    return rc;
}

/* Generic IOs can all be handled the same way */
static bool basic_ctrl(const bool enable, const CPLD_BASIC_TYPE type) {
    if (enable) return cpld_op(cpld_en_map.at(type));
    return cpld_op(cpld_dis_map.at(type));
}

static bool set_red_led(const bool enable) {
    // set the red/green control first then set the GPIO
    return basic_ctrl(enable, RED) && basic_ctrl(true, RG_CTRL);
}

static bool set_green_led(const bool enable) {
    // set the red/green control first then set the GPIO
    return basic_ctrl(enable, GREEN) && basic_ctrl(true, RG_CTRL);
}

/* Hand the green LED over to the kernel's 1 Hz blink timer. Survives
 * an imagerd crash, so handy as an "alive but unattended" indicator.
 * `blink=false` returns to solid-on state via CPLD_GREEN_EN. */
static bool set_green_blink(const bool blink) {
    return cpld_op(blink ? CPLD_GREEN_BLINK : CPLD_GREEN_EN);
}

/* Same for red — blink mode = "warning / fault" by convention. */
static bool set_red_blink(const bool blink) {
    return cpld_op(blink ? CPLD_RED_BLINK : CPLD_RED_EN);
}

static bool set_white_led(const bool enable) {
    return basic_ctrl(enable, WHITE);
}

static bool set_eth_led(const bool enable) {
    return basic_ctrl(enable, ETH);
}

static bool set_audio(const bool enable) {
    return basic_ctrl(enable, AUDIO);
}

/* Fire one IR-cut solenoid pulse. Both cmds (0x15 / 0x16) execute the
 * same 200ms drive sequence in the kernel; which physical direction
 * the filter moves depends on how the cathode/anode pins were wired by
 * the modprobe `gpio=` string. On a Victure SC210 this maps to:
 *   enable=true  → night (filter out, sensor sees IR)
 *   enable=false → day   (filter in, blocks IR) */
static bool set_ir_cut(const bool enable) {
    return basic_ctrl(enable, IR_CUT);
}

/* Read the combined IR-cut state. The kernel encodes:
 *   bit 1: cathode pin level
 *   bit 0: anode   pin level
 * So returns 0..3. Use this to verify a pulse actually moved the
 * filter rather than just trusting the 200ms delay. */
static int32_t read_ircut_state(void) {
    return cpld_op_read_int(CPLD_IRCUT_STATE_READ);
}

/* IR LED PWM duty (0..100). The kernel driver reads the value through a
 * user pointer, so we pass `&v` rather than the value itself. Matches what
 * stock rmm does at ioctl(g_cpld_fd, 0x20007013, &duty) — 100 = full, 0 = off.
 *
 * Note: per the .ko, this only copy_from_user's the int and reconfigures
 * the pin direction; it does NOT call gpio_set_value(). On many boards
 * the IR LED gate is the same physical pin, so toggling direction
 * (output-driving-1 vs input-floating) is what turns the LED on or off.
 * The duty byte itself is only logged. If you want true PWM you need
 * a different GPIO+timer pair. */
static bool set_ir_led_duty(int duty) {
    if (duty < 0) duty = 0;
    if (duty > 100) duty = 100;
    return cpld_op_send_int(CPLD_IR_LED_SET, duty);
}

/* Read the IR LED's current logical state. Returns 100 if the GPIO is
 * at IR_ON polarity (configured at module load), 0 otherwise. The "100"
 * is a stock-rmm contract — it's not a PWM duty read. */
static int32_t get_ir_led(void) {
    return cpld_op_read_int(CPLD_IR_LED_READ);
}

/* Read PORT_AUDIO_ENABLE GPIO level. Same caveat as get_ir_led —
 * polarity is determined by `hw[6]` at module load. */
static int32_t read_audio_state(void) {
    return cpld_op_read_int(CPLD_AUDIO_READ);
}

/* Read the factory-default / reset-button GPIO. Typically wired to a
 * recessed pinhole switch on the camera body. Active level depends on
 * the board, but most pull-high-when-pressed designs return 0 when
 * pressed. Only meaningful if the modprobe set `gpio[8]='1'` —
 * otherwise the port is unwired and the read returns 0. */
static int32_t read_factory_default_button(void) {
    return cpld_op_read_int(CPLD_FACTORY_DEFAULT_READ);
}

#endif // CPLD_H
