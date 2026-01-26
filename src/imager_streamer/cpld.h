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
 * Contains functions to interact with the CPLD device. Reverse engineered
 * from the cpld_periph kernel driver.
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
#define CPLD_DRIVER             "/proc/device/cpld"
#define CPLD_GREEN_EN           0x01
#define CPLD_GREEN_DIS          0x02
#define CPLD_RED_EN             0x09
#define CPLD_RED_DIS            0x0A
#define CPLD_AUDIO_ON           0x10
#define CPLD_AUDIO_OFF          0x11
#define CPLD_IR_LED_SET         0x13
#define CPLD_IR_LED_READ        0x14
#define CPLD_IRCUT_CATHODE_EN   0x15
#define CPLD_IRCUR_CATHODE_DIS  0x16
#define CPLD_RED_GREEN_OFF      0x1B
#define CPLD_RED_GREEN_SET      0x1C // This sets the red and green LEDs based off the current red green CPLD state
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
    {IR_CUT, CPLD_IRCUR_CATHODE_DIS},
    {AUDIO, CPLD_AUDIO_ON},
    {RG_CTRL, CPLD_RED_GREEN_SET}
};

const std::map<CPLD_BASIC_TYPE, uint8_t> cpld_dis_map = {
    {RED, CPLD_RED_DIS},
    {GREEN, CPLD_GREEN_DIS},
    {WHITE, CPLD_WHITE_LED_OFF},
    {ETH, CPLD_ETH_LED_OFF},
    {IR_CUT, CPLD_IRCUT_CATHODE_EN},
    {AUDIO, CPLD_AUDIO_OFF},
    {RG_CTRL, CPLD_RED_GREEN_OFF} // turns both off, not really needed
};

// Enable or disable CPLD debug messages
static bool cpld_debug(bool enable) {
    // equivalent to echo "<val>" > /proc/device/cpld
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

// Generic CPLD request function
static bool generic_request(const int cmd, const int value) {
    const int driver = open(CPLD_PATH, O_RDWR);
    if (driver < 0) return false;

    ioctl(driver, _IOC(_IOC_NONE, CPLD_IOC_BASE, cmd, value), 0);
    close(driver);
    return true;
}

/* Generic IOs can all be handled the same way */
static bool basic_ctrl(const bool enable, const CPLD_BASIC_TYPE type) {
    bool good = false;
    if (enable) {
        good = generic_request(cpld_en_map.at(type), 0);
    } else {
        good = generic_request(cpld_dis_map.at(type), 0);
    }
    return good;
}

static bool red_led(const bool enable) {
    // set the red/green control first then set the GPIO
    return basic_ctrl(enable, RED) && basic_ctrl(true, RG_CTRL);
}

static bool green_led(const bool enable) {
    // set the red/green control first then set the GPIO
    return basic_ctrl(enable, GREEN) && basic_ctrl(true, RG_CTRL);
}

static bool white_led(const bool enable) {
    return basic_ctrl(enable, WHITE);
}

static bool eth_led(const bool enable) {
    return basic_ctrl(enable, ETH);
}

static bool audio(const bool enable) {
    return basic_ctrl(enable, AUDIO);
}

static bool ir_cut(const bool enable) {
    return basic_ctrl(enable, IR_CUT);
}

/* The IR LED requires special handling as is reads a "user pointer" */
static bool set_ir_led(const int on) {
    const int driver = open("/dev/cpld_periph", O_RDWR);
    if (driver < 0) return false;
    int v = on ? 1 : 0;
    const int rc = ioctl(driver, _IOC(_IOC_NONE, CPLD_IOC_BASE, CPLD_IR_LED_SET, 0), &v);
    close(driver);
    return (rc == 0);
}

static int32_t get_ir_led() {
    int32_t value = 0;
    const int driver = open("/dev/cpld_periph", O_RDWR);
    if (driver < 0) return -1;
    const int rc = ioctl(driver, _IOC(_IOC_NONE, CPLD_IOC_BASE, CPLD_IR_LED_READ, 0), &value);
    close(driver);
    if (rc != 0) return -1;
    return value;
}

#endif // CPLD_H