/*
 * Copyright (c) 2025 Noah Maceri
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * log.c — zlog adapter that *replaces* the upstream rxi/log.c
 * implementation while keeping the original log.h interface (log_info,
 * log_debug, log_set_level, log_add_fp, …) exactly as upstream code
 * expects. ONVIF service log lines now appear in the project's shared
 * /var/log/rtsp_streamer.log under category "onvif" alongside the
 * imager_streamer/isp_adj/server categories — see sd_payload/zlog.conf.
 *
 * Routing decisions (file vs stdout, level filtering, rotation) are made
 * entirely by zlog's own config; the level/file/quiet APIs that upstream
 * code happens to call are no-ops here.
 *
 * Original rxi/log.c (MIT licensed) replaced wholesale; see PATCHES.md.
 */

#include "log.h"

#include <pthread.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <zlog.h>

static pthread_once_t  g_init_once = PTHREAD_ONCE_INIT;
static zlog_category_t *g_cat = NULL;
static int             g_zlog_ok = 0;

static void init_zlog(void) {
    // Same fallback chain as imagerd: $ZLOG_CONF override, then SD-card
    // hijack path, then /home/app baked-in path. Lets the same binary
    // serve both deployment modes.
    //
    // Loop must be index-based, not pointer-walk: getenv() returns NULL
    // when unset and `for(p; *p; ++p)` terminates on the first NULL.
    const char *paths[] = {
        getenv("ZLOG_CONF"),
        "/var/tmp/sd/zlog.conf",
        "/home/app/zlog.conf",
    };
    int initialized = 0;
    for (size_t i = 0; i < sizeof(paths)/sizeof(paths[0]); ++i) {
        const char *path = paths[i];
        if (path && path[0] && zlog_init(path) == 0) {
            initialized = 1;
            break;
        }
    }
    if (!initialized) {
        fprintf(stderr, "onvif log: zlog_init failed for all candidate paths\n");
        return;
    }
    g_cat = zlog_get_category("onvif");
    if (g_cat == NULL) {
        fprintf(stderr, "onvif log: zlog_get_category(\"onvif\") failed\n");
        zlog_fini();
        return;
    }
    g_zlog_ok = 1;
}

void log_log(int level, const char *file, int line, const char *fmt, ...) {
    (void)file; (void)line;  // file/line context is recorded by zlog itself
    pthread_once(&g_init_once, init_zlog);
    if (!g_zlog_ok) return;

    // Format the upstream-provided format string + varargs once, then hand
    // the resulting plain string to zlog as %s so its own formatter doesn't
    // re-interpret any % in the message body.
    char buf[1024];
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(buf, sizeof(buf), fmt, ap);
    va_end(ap);

    switch (level) {
    case LOG_TRACE:
    case LOG_DEBUG: zlog_debug(g_cat, "%s", buf); break;
    case LOG_INFO:  zlog_info (g_cat, "%s", buf); break;
    case LOG_WARN:  zlog_warn (g_cat, "%s", buf); break;
    case LOG_ERROR: zlog_error(g_cat, "%s", buf); break;
    case LOG_FATAL: zlog_fatal(g_cat, "%s", buf); break;
    default:        zlog_info (g_cat, "%s", buf); break;
    }
}

// Configuration shims. Upstream callers invoke these to pick a level,
// silence stdout, register secondary file targets, etc. — zlog handles
// all of that via its config file, so these are intentional no-ops.
void log_set_quiet(bool enable) { (void)enable; }
void log_set_level(int level)   { (void)level;  }
void log_set_lock(log_LockFn fn, void *udata) { (void)fn; (void)udata; }
int  log_add_fp(FILE *fp, int level) { (void)fp; (void)level; return 0; }
int  log_add_callback(log_LogFn fn, void *udata, int level) {
    (void)fn; (void)udata; (void)level;
    return 0;
}

static const char *const k_level_strings[] = {
    "TRACE", "DEBUG", "INFO", "WARN", "ERROR", "FATAL"
};
const char *log_level_string(int level) {
    if (level >= LOG_TRACE && level <= LOG_FATAL) return k_level_strings[level];
    return "?";
}
