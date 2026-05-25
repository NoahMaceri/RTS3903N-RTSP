/*
 * Copyright (c) 2025 Noah Maceri
 * GPLv3 — see top-level LICENSE.
 *
 * ONVIF Imaging service. Wraps the camera's ISP controls so clients
 * can read/write brightness/contrast/saturation/sharpness/WDR/BLC/IR-cut
 * over SOAP. All hardware access is shelled out via the shell templates
 * in service_ctx.imaging_node (see conf.c).
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <strings.h>

#include "imaging_service.h"
#include "fault.h"
#include "utils.h"
#include "log.h"
#include "ezxml_wrapper.h"
#include "onvif_simple_server.h"

extern service_context_t service_ctx;

// Pull "key=value\n" lines from `list_all` into key→value entries.
// Caller passes a small flat table; we fill in matching values.
struct kv { const char *key; int value; int present; };

static void load_imaging_values(struct kv *kvs, int n_kvs) {
    if (service_ctx.imaging_node.list_all == NULL) return;
    FILE *fp = popen(service_ctx.imaging_node.list_all, "r");
    if (fp == NULL) return;
    char line[256];
    while (fgets(line, sizeof(line), fp) != NULL) {
        char *eq = strchr(line, '=');
        if (eq == NULL) continue;
        *eq = '\0';
        const int v = atoi(eq + 1);
        for (int i = 0; i < n_kvs; i++) {
            if (strcmp(line, kvs[i].key) == 0) {
                kvs[i].value = v;
                kvs[i].present = 1;
                break;
            }
        }
    }
    pclose(fp);
}

static void set_one(const char *key, int value) {
    if (service_ctx.imaging_node.set == NULL) return;
    char cmd[256];
    snprintf(cmd, sizeof(cmd), service_ctx.imaging_node.set, key, value);
    system(cmd);
}

static void set_ir_cut(const char *mode_lower) {
    if (service_ctx.imaging_node.set_ir_cut == NULL) return;
    char cmd[256];
    snprintf(cmd, sizeof(cmd), service_ctx.imaging_node.set_ir_cut, mode_lower);
    system(cmd);
}

// Read current IR cut override (AUTO|ON|OFF) from get_ir_cut hook.
static void get_ir_cut(char *out, size_t out_sz) {
    strncpy(out, "AUTO", out_sz);
    out[out_sz - 1] = '\0';
    if (service_ctx.imaging_node.get_ir_cut == NULL) return;
    FILE *fp = popen(service_ctx.imaging_node.get_ir_cut, "r");
    if (fp == NULL) return;
    char buf[16] = {};
    if (fgets(buf, sizeof(buf), fp) != NULL) {
        size_t n = strlen(buf);
        while (n > 0 && (buf[n - 1] == '\n' || buf[n - 1] == ' ' || buf[n - 1] == '\r')) buf[--n] = '\0';
        for (size_t i = 0; i < n; i++) buf[i] = toupper((unsigned char)buf[i]);
        if (strcmp(buf, "AUTO") == 0 || strcmp(buf, "ON") == 0 || strcmp(buf, "OFF") == 0) {
            strncpy(out, buf, out_sz);
            out[out_sz - 1] = '\0';
        }
    }
    pclose(fp);
}

int imaging_get_service_capabilities() {
    long size = cat(NULL, "imaging_service_files/GetServiceCapabilities.xml", 0);
    output_http_headers(size);
    return cat("stdout", "imaging_service_files/GetServiceCapabilities.xml", 0);
}

int imaging_get_imaging_settings() {
    if (service_ctx.imaging_node.enable == 0) {
        send_action_failed_fault("imaging_service", -1);
        return -1;
    }

    struct kv kvs[] = {
        {"brightness", 50, 0},
        {"contrast",   50, 0},
        {"saturation", 50, 0},
        {"sharpness",  50, 0},
        {"blc",         0, 0},
        {"wdr_mode",    0, 0},
        {"wdr_level",   0, 0},
    };
    load_imaging_values(kvs, sizeof(kvs) / sizeof(kvs[0]));

    char s_bright[16], s_sat[16], s_contrast[16], s_sharp[16],
         s_blc_level[16], s_wdr_level[16];
    snprintf(s_bright,    sizeof(s_bright),    "%d", kvs[0].value);
    snprintf(s_contrast,  sizeof(s_contrast),  "%d", kvs[1].value);
    snprintf(s_sat,       sizeof(s_sat),       "%d", kvs[2].value);
    snprintf(s_sharp,     sizeof(s_sharp),     "%d", kvs[3].value);
    snprintf(s_blc_level, sizeof(s_blc_level), "%d", kvs[4].value);
    snprintf(s_wdr_level, sizeof(s_wdr_level), "%d", kvs[6].value);

    const char *blc_mode = kvs[4].value ? "ON" : "OFF";
    // wdr_mode: 0=Disabled, 1=Manual, 2=Auto → ONVIF ON if non-zero.
    const char *wdr_mode = kvs[5].value ? "ON" : "OFF";

    char ir_cut[8] = "AUTO";
    get_ir_cut(ir_cut, sizeof(ir_cut));

    long size = cat(NULL, "imaging_service_files/GetImagingSettings.xml", 18,
            "%BLC_MODE%",   blc_mode,
            "%BLC_LEVEL%",  s_blc_level,
            "%BRIGHTNESS%", s_bright,
            "%SATURATION%", s_sat,
            "%CONTRAST%",   s_contrast,
            "%IR_CUT%",     ir_cut,
            "%SHARPNESS%",  s_sharp,
            "%WDR_MODE%",   wdr_mode,
            "%WDR_LEVEL%",  s_wdr_level);
    output_http_headers(size);
    return cat("stdout", "imaging_service_files/GetImagingSettings.xml", 18,
            "%BLC_MODE%",   blc_mode,
            "%BLC_LEVEL%",  s_blc_level,
            "%BRIGHTNESS%", s_bright,
            "%SATURATION%", s_sat,
            "%CONTRAST%",   s_contrast,
            "%IR_CUT%",     ir_cut,
            "%SHARPNESS%",  s_sharp,
            "%WDR_MODE%",   wdr_mode,
            "%WDR_LEVEL%",  s_wdr_level);
}

// Iterate child elements of <ImagingSettings>; for each known field,
// invoke the set hook with the right key.
static void apply_field_if_present(const char *xpath_name, const char *isp_key) {
    char name_buf[64], body_buf[8];
    strncpy(name_buf, xpath_name, sizeof(name_buf) - 1); name_buf[sizeof(name_buf) - 1] = '\0';
    strncpy(body_buf, "Body", sizeof(body_buf) - 1); body_buf[sizeof(body_buf) - 1] = '\0';
    const char *txt = get_element(name_buf, body_buf);
    if (txt == NULL) return;
    set_one(isp_key, atoi(txt));
}

int imaging_set_imaging_settings() {
    if (service_ctx.imaging_node.enable == 0) {
        send_action_failed_fault("imaging_service", -1);
        return -1;
    }

    apply_field_if_present("Brightness",      "brightness");
    apply_field_if_present("Contrast",        "contrast");
    apply_field_if_present("ColorSaturation", "saturation");
    apply_field_if_present("Sharpness",       "sharpness");
    apply_field_if_present("Level",           "wdr_level"); // BLC/WDR share; last wins, ok for our hw

    char tag_mode[8] = "Mode", tag_ir[16] = "IrCutFilter", tag_body[8] = "Body";
    const char *wdr_mode = get_element(tag_mode, tag_body);
    if (wdr_mode != NULL) {
        if (strcasecmp(wdr_mode, "ON") == 0) set_one("wdr_mode", 2);
        else if (strcasecmp(wdr_mode, "OFF") == 0) set_one("wdr_mode", 0);
    }

    const char *ir = get_element(tag_ir, tag_body);
    if (ir != NULL) {
        if      (strcasecmp(ir, "AUTO") == 0) set_ir_cut("auto");
        else if (strcasecmp(ir, "ON")   == 0) set_ir_cut("on");
        else if (strcasecmp(ir, "OFF")  == 0) set_ir_cut("off");
    }

    long size = cat(NULL, "imaging_service_files/SetImagingSettings.xml", 0);
    output_http_headers(size);
    return cat("stdout", "imaging_service_files/SetImagingSettings.xml", 0);
}

int imaging_get_options() {
    long size = cat(NULL, "imaging_service_files/GetOptions.xml", 0);
    output_http_headers(size);
    return cat("stdout", "imaging_service_files/GetOptions.xml", 0);
}

int imaging_get_status() {
    return imaging_unsupported("GetStatus");
}

int imaging_get_move_options() {
    return imaging_unsupported("GetMoveOptions");
}

int imaging_unsupported(const char *method) {
    send_action_failed_fault("imaging_service", -1);
    return -1;
}
