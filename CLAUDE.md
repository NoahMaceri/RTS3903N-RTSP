# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Cross-compilation target

This project produces **MIPS-I uClibc** binaries for the Realtek RTS3903N SoC (RTL5281) — they will not run on the build host. The toolchain (`rsdk-4.8.5-...m32fut`) is shipped as a tarball under `third-party/rsdk/` and auto-extracted by `PreLoad.cmake`. Compilation flag `-march=5281` is set in `third-party/rsdk/enable_mips_uclibc.cmake`. Build hosts need 32-bit lib support (`gcc-multilib`, `zlib1g-dev:i386`, `libc6-dev:i386`) plus autotools (`autoconf automake libtool pkg-config`) for the dev-tools sub-builds; see `scripts/install_deps_ubuntu.sh`.

## Build commands

```bash
# First-time setup (one-time):
sudo bash scripts/install_deps_ubuntu.sh

# Configure & build:
mkdir build && cd build
cmake -G Ninja -S .. -B .
ninja

# With dev tools (uftpd, dropbear) + the rest of dev-only conveniences:
cmake -G Ninja -DBUILD_DEV_TOOLS=ON -S .. -B .
ninja

# Build a single executable (faster iteration):
ninja imagerd               # or isp_ctrl, snapshot, isp_tool, ptz_tool,
                            # sntp, lighttpd, onvif_simple_server,
                            # wsd_simple_server, onvif_conf_gen

# Package SD-card tarball (RTS3903N_RTSP-<version>.tar):
ninja package_RTS3903N_RTSP

# Push a fresh build to a development camera over uftpd + ssh/telnet:
../scripts/dev_update.sh root@CAMERA_IP

# Wipe build artifacts + extracted toolchain:
bash scripts/clean_builds.sh   # must be run from inside scripts/
```

The repo includes a pre-existing `cmake-build-release/` directory used by the IDE; either reuse it or create your own `build/`. There are no host-runnable unit tests — verification is done by deploying the tarball to an SD card (or via `dev_update.sh`) and watching the camera.

## Bumping the version

Edit `project(RTS3903N_RTSP VERSION x.y.z)` in the top-level `CMakeLists.txt`. The number propagates to C++ via `include/ver.h.in` → `${BUILD}/ver.h` (`VER_MAJOR/MINOR/PATCH`) and into the tarball filename.

## Runtime architecture

One long-running daemon (`imagerd`) plus a handful of CGI helpers and dev-only daemons, all started by `sd_payload/wifi/config.sh` on boot:

```
                ┌──────────────────────────────────────────┐
   ISP/H.264 ─► │                                          │ ──► RTSP/TCP :554
   ISP/MJPEG ─► │                imagerd                   │      (live555 in-process,
   Audio/G.711─►│  (capture + encode + RTSP frontend +     │       pulls from in-memory
                │   snapshot UDS + IR + auto-tune)         │       SPSC frame queues)
                │                                          │
                │  threads:  main video    ┐               │ ──► /tmp/snapshot.sock (UDS)
                │            audio capture │ all share     │      (consumed by snapshot CGI)
                │            day_night     │ g_isp_mutex   │
                │            auto_tune     │ for ISP       │
                │            snapshot UDS  ┘ access        │
                │            live555 worker (RTP)          │
                └──────────────────────────────────────────┘
                         │
                         └─► CPLD (/dev/cpld_periph) for IR-cut / LEDs / audio enable

   lighttpd :80 ─► /cgi-bin/snapshot ──► snapshot binary ──► /tmp/snapshot.sock ─► imagerd
                ─► /cgi-bin/isp_ctrl ──► isp_ctrl binary  ──► rts_av_*_isp_ctrl
                ─► /onvif/<service>  ──► dispatcher (/tmp/onvif/) ──► onvif_simple_server

   wsd_simple_server (UDP :3702 multicast) — ONVIF WS-Discovery, advertises the camera
```

Key consequences of this layout:

- **`imagerd` is the only process that touches RTS AV channels.** `isp_ctrl`, `isp_tool`, and `ptz_tool` *also* call `rts_av_init()` / `rts_av_get_isp_ctrl()`, but only as one-shot tools that exit immediately. Long-lived ISP state lives in `imagerd`.
- **Live555 runs in-process inside `imagerd`** via `rtsp_worker.cpp`. `H264QueueSource` and `PCMUQueueSource` (`*_queue_subsession.h`) pull from `FrameQueue<VideoFrame>` / `FrameQueue<AudioFrame>` populated by the capture loops. Producer wakeups go through `TaskScheduler::triggerEvent()` (the documented thread-safe primitive in live555). There are no FIFOs anywhere — the v0.4.x `/tmp/video.h264` / `/tmp/audio.ulaw` design is gone.
- **Idle-vs-active state**: `rtsp_worker::video_active()` / `audio_active()` reflect whether live555 has a live source for at least one client. Capture loops always run (so the encoder buffer pool drains) but only push into the queue when `*_active()` is true. On every fresh client attach, the source's constructor flips `idr_requested`; the producer reads-and-clears that, calls `rts_av_request_h264_key_frame()`, drops P-frames until the next IDR, and clears the queue inside `consume_idr_request()` so a stale P-frame can't slip in ahead of the keyframe.
- **Snapshots** flow `lighttpd → /cgi-bin/snapshot wrapper → snapshot binary (CGI) → /tmp/snapshot.sock → snapshot_server_thread inside imagerd → MJPEG callback`. The snapshot path is gated on an MJPEG channel that's bound to the same ISP as the H.264 channel.
- **ONVIF** is split between `onvif_simple_server` (CGI under lighttpd, one shell-wrapper per service in `/tmp/onvif/`, sources its config from `onvif_conf_gen`) and `wsd_simple_server` (separate UDP/3702 multicast daemon for WS-Discovery). Neither is part of `imagerd`. See "ONVIF" section below.

## Threading & shutdown invariants in `imagerd`

`imagerd` runs ~5 threads (main video capture, audio capture, IR control, auto-tune, snapshot UDS server, live555 task scheduler). The shutdown rules are non-obvious and have been the source of past bugs (see v0.4.1 / v0.5.0 changelogs in `README.md`):

- **`g_exit` (atomic bool) is the cooperative shutdown flag.** Every thread loop checks it. Long sleeps must be interruptible — see how `day_night_ctrl`'s 15s sensor warmup is broken into short polls; `auto_tune_ctrl` follows the same pattern.
- **Threads are joined, not detached, when they reference resources owned by `main`** (ISP/H264/MJPEG/audio channels, snapshot socket). The teardown order in `kill_stream()` is: stop ISP-touching helper threads (auto-tune, IR control) → set `g_audio_enabled=false` and join audio capture → stop the live555 RTSP worker → tear down audio AV channels → join snapshot thread → tear down video AV channels → `rts_av_release()`. Don't reorder without re-checking dependencies — the live555 worker holds queue/source pointers, the audio thread reaches into the encoder, etc.
- **`g_isp_mutex` (declared in `isp_utils.h`, defined in `isp_utils.cpp`) is the single shared mutex protecting `rts_av_*_isp_ctrl`, the AE statistics path used by `auto_tune_ctrl`, and any other ISP read/write.** Every ISP access from any thread must go through `change_isp_setting()` / `get_isp_setting()` / `read_ae_stats()`. Do **not** declare a `static std::mutex` in a header — that creates one mutex per translation unit and the threads will not synchronize.
- **All signal handlers must use `sigaction()` and have signature `void(int)`.** `signal()` and bare `void()` handlers compile but invoke UB on MIPS calling conventions. `SIGPIPE` is `SIG_IGN`'d process-wide.
- **Live555 sources clear their back-reference on destruction.** `H264QueueSource` / `PCMUQueueSource` take a `**` pointer to the worker's cached source pointer and `nullptr` it in their destructors so the worker's trigger callback can never hit a freed pointer. Same pattern if you add another subsession.

## Configuration (`settings.json`)

All runtime config is `settings.json` (FAT32-friendly, parsed with `nlohmann::json` in `include/json.hpp`). Source-of-truth schema lives in `sd_payload/settings.json`; on the camera it ends up at `/var/tmp/sd/settings.json` and is *also* writable by the web UI via `isp_ctrl SAVE_SETTINGS`. Sections: `audio`, `ir_control`, `isp`, `encoder`, `auto_tune`, `rtsp`, `onvif`.

The camera reads `settings.json` from its current working directory at startup — `wifi/config.sh` does `cd /var/tmp/sd/` before launching `imagerd`. `imagerd`'s `zlog_init` uses an absolute `/var/tmp/sd/zlog.conf` path so it doesn't depend on CWD propagation through the supervisor subshell.

If you add a new config key, update the README parameter table.

## ISP parameter handling

There are **two** parameter→`enum_rts_video_ctrl_id` maps:

1. `src/imagerd/isp_utils.cpp::param_setting_map` — used at boot to apply `settings.json` `isp.*` keys.
2. `src/isp_ctrl/isp_ctrl.cpp::get_param_definitions()` — used by the web UI; richer (display name, group, type, enum options).

These are intentionally separate (the web UI needs metadata the boot path doesn't), but the **canonical key names must match** — keep them in sync when adding params, or the UI will set a value that won't be persisted on next boot.

`isp_ctrl` is invoked as a CGI one-shot per request. Commands (JSON over stdin): `GET_PARAMETER_INFO`, `READ_PARAMETERS`, `SET_PARAMETER`, `SET_PARAMETERS`, `SAVE_SETTINGS`.

## Auto-tune (`auto_tune_ctrl`)

Layered policy on top of the SDK's built-in 3A. Realtek's AE/AWB/AF still run; the auto-tune thread just adapts the *post-ISP* knobs (`CONTRAST` / `SHARPNESS` / `WDR_LEVEL`) to whatever scene the camera is currently looking at. Every `auto_tune.period_s` seconds the loop calls `read_ae_stats()` (under `g_isp_mutex`) to grab the current frame's `y_mean` plus full luma histogram, computes 5th and 95th percentiles, picks a target tuple from a 5-bucket lookup keyed on mean luma + a high-DR override on `(p95 − p5) > 180`, scales by `aggressiveness`, EMA-smooths halfway toward the target, and writes back through `change_isp_setting()`. The lookup buckets are hand-tuned in `auto_tune_ctrl.cpp::pick_targets`; revisit the thresholds (currently 30/80/180/220 on `y_mean` and 180 on spread) if the camera spends most of its time stuck in one bucket.

## CPLD (board peripherals)

`src/imagerd/cpld.h` is a header-only wrapper over `/dev/cpld_periph` (the kernel module shipped in `sd_payload/Yi/ko/cpld_periph.ko`). Controls IR-cut, IR LED, audio enable, status LEDs. Interface was reverse-engineered — there's no upstream driver doc, so behavior was verified empirically on a Victure SC210. New ioctls go in the `CPLD_*` defines and a corresponding `set_*()` helper.

## Boot sequence (camera-side)

`sd_payload/wifi/config.sh` runs as the SD-card hijack entry point. In order: backs up flash on first run → kills the stock cloud agents (`watchdog`, `cloud`, `p2p_tnp`, `mp4record`, `oss`, `rmm`, …) → parses `network.ini`, regenerates `wifi/wpa_supplicant.conf`, runs `wpa_supplicant` → `udhcpc` (or static IP) → if `dev-tools/` is in the package: mount devpts (for SSH PTY allocation), start `telnetd` on :23, `uftpd`, `dropbear` on :22 (host keys auto-generated to `/var/tmp/sd/dev-tools/etc/dropbear/` on first boot) → 30s sleep for PTZ calibration → **synchronous `sntp pool.ntp.org`** so the wall clock is correct before any timestamp-emitting daemon starts → lighttpd on :80 → `imagerd` (under a respawn supervisor in production builds, single-shot in dev-tools mode so a crash doesn't loop) → `onvif_conf_gen` regenerates `/var/tmp/sd/onvif/onvif.conf` from `settings.json`, dispatcher scripts written to `/tmp/onvif/`, `wsd_simple_server` started supervised.

Logs go to `/var/tmp/sd/boot.log` (boot script output) and `/var/log/rtsp_streamer.log` (rotating, 256 KB × 3, configured in `sd_payload/zlog.conf`). Categories: `imagerd`, `isp_adj` (isp_tool), `onvif` (onvif_simple_server + wsd_simple_server share the shim in `src/onvif_simple_server/log.c`).

Network configuration lives in `/var/tmp/sd/network.ini` (sections `[wifi]` for ssid/psk and `[network]` for optional static ip/netmask/gateway). `config.sh` parses it via a tiny awk INI helper, regenerates `wifi/wpa_supplicant.conf` from those values on every boot (the file is marked DO-NOT-EDIT), and applies static IP if all three fields are set, else falls back to DHCP. `wpa_supplicant_sample.conf` and the `Factory/` placement are gone — `network.ini` is the only file the user touches.

## Audio constraints

Audio is hard-wired to **G.711 u-law / 8 kHz / mono / 64 kbps** end-to-end. The RTSP side uses RTP payload type 0 (PCMU static), and the producer creates the encoder with `rts_av_create_audio_encode_chn(RTS_AUDIO_TYPE_ID_ULAW, 64000)`. To change the codec/rate, all three of (a) the audio capture attrs in `imagerd.cpp::start_stream`, (b) the `PCMUQueueSubsession` RTP sink config, and (c) the per-frame size assumed by the live555 framer (160 bytes = 20 ms at 8 kHz) must change together.

Capture gain is applied through ALSA mixer controls `Real Amic`, `Front Amic`, `ADC Compensate` — do not assume a single mixer element exists.

## ONVIF

Profile S — auto-discovery + GetStreamUri + GetSnapshotUri. Two pieces:

- **`onvif_simple_server`** (vendored at `src/onvif_simple_server/`, GPLv3, see `PATCHES.md` for local diffs from upstream) is a CGI program — *not* a daemon. Lighttpd's alias maps `/onvif/<service>` to `/tmp/onvif/<service>`, where `config.sh` writes a small dispatcher shell script per service (`device_service`, `media_service`, `media2_service`, `ptz_service`, `events_service`, `deviceio_service`). Each script `cd /var/tmp/sd && exec onvif_simple_server -c onvif.conf <service>` so the binary's relative-path lookups for `*_service_files/*.xml` resolve.
- **`wsd_simple_server`** is a separate daemon listening on UDP/3702 multicast for WS-Discovery probes; it advertises the SOAP XAddr URL constructed from the camera's runtime IP + the `onvif.port` config (default 80, since lighttpd is the front).
- **`onvif_conf_gen`** is a one-shot C++ tool run at boot. Reads `settings.json` and writes `/var/tmp/sd/onvif/onvif.conf` (INI format) — keeps the JSON as the single source of truth for device identity / port / RTSP URL.

Local patches against upstream onvif_simple_server (`src/onvif_simple_server/PATCHES.md`):
1. JSON-config support (`process_json_conf_file` and friends) gated behind `HAVE_JSON_CONFIG` — never defined, so we don't link `libjson-c`.
2. `<zlib.h>` include made conditional on `USE_ZLIB` so cross-compile doesn't fail when zlib's missing.
3. `log.c` replaced wholesale with a zlog adapter that keeps the upstream `log.h` interface but routes everything through our `zlog_get_category("onvif")`.

`mbedtls` (third-party submodule, pinned v3.6.6, minimal config in `src/onvif_simple_server/extras/mbedtls_config.h` — only SHA-1 + base64 enabled) provides the WS-Security digest crypto. Built static, ~100 KB compiled. `BUILD_SHARED_LIBS=OFF` is forced locally so the 3rdparty everest/p256m libs don't get pulled in as `.so` dependencies.

## Dev-tools (optional, `-DBUILD_DEV_TOOLS=ON`)

`dev-tools/` contains three submodules built via `ExternalProject_Add` through a shared `dev_tools_autotools_project()` helper in `dev-tools/CMakeLists.txt`:

- **`uftpd`** (with `libite` + `libuev` deps) — read/write FTP daemon at port 21, used by `scripts/dev_update.sh` to push fresh binaries onto the camera without re-flashing.
- **`dropbear`** — SSH server at port 22. Cross-compile forces `-DUSE_DEV_PTMX=1` because dropbear's configure-time `/dev/ptmx` test is hardcoded off when cross-compiling and would otherwise fall back to legacy BSD-pty probing that doesn't exist on this kernel. Host keys persist in `/var/tmp/sd/dev-tools/etc/dropbear/`. Linked with rpath pointing at `/var/tmp/sd/dev-tools/lib/` so it finds the bundled `libcrypt.so.0`.

`config.sh` gates `telnetd` on the presence of `dev-tools/` too — production builds don't have telnet exposed. Telnet plus uftpd are deliberately the *only* services that survive `dev_update.sh`'s "kill everything" step, since the script needs both to do its work.

## Time sync

The hardware has no RTC, the stock busybox lacks `ntpd`/`ntpdate`/`rdate`, and the wget build is too stripped to fetch the HTTP `Date:` header. Fix: ship our own tiny `sntp` binary (`src/sntp/sntp.cpp`, ~60 lines C). One UDP/123 round-trip, `settimeofday()`, exit. `config.sh` runs it **synchronously before lighttpd / imagerd / wsd_simple_server** so anything that captures timestamps (logs, ONVIF SOAP responses, RTSP session creation) starts off with a sane wall clock; if the sync fails, boot continues with an unsynced clock (the RTP path is independent of the wall clock — see below).

**RTP timing uses `CLOCK_MONOTONIC`, not the wall clock.** `imagerd::monotonic_us()` is the only timestamp source for `rtsp_worker::push_video_frame` / `push_audio_frame`. Earlier versions used `gettimeofday()` and broke ffmpeg-based clients (Frigate) when SNTP stepped the wall clock from epoch to real time mid-stream — the demuxer treated the multi-decade jump as a corrupt stream and emitted `AV_NOPTS_VALUE`. Do not change this back to wall-clock without revisiting that interaction. If you add another encoded stream (e.g. AAC), use `monotonic_us()` for its PTS too.

## Third-party submodules

`third-party/zlog`, `third-party/pcre2`, `third-party/lighttpd1.4`, `third-party/mbedtls` are git submodules — `git submodule update --init --recursive` after a fresh clone. `third-party/live555` and `third-party/rtscore` are vendored sources (Realtek SDK is not redistributable, so `rtscore/` contains only the headers + prebuilt `.so`s extracted from the toolchain). PCRE2 is built shared (`BUILD_SHARED_LIBS ON`) because lighttpd's `mod_cgi` dlopens it. The dev-tools submodules under `dev-tools/{uftpd,libite,libuev,dropbear}` only matter when `BUILD_DEV_TOOLS=ON`.

## When editing common areas

- **Adding a new daemon/CGI binary**: add `add_subdirectory(src/<name>)` in the top-level `CMakeLists.txt`, add the target to `SD_TARGETS`, and add the binary path to `PKG_BINARIES` so it lands in the tarball. Fresh-source files for tarball-side data (XML templates, configs) go in a separate `copy_directory` step in the `package_${PROJECT_NAME}` target.
- **Adding a new shared library dependency**: append it to `PKG_EXTRA_LIBS` in the root `CMakeLists.txt`. Realtek libs are versioned as `.so.0` / `.so.1` on the camera even though the toolchain ships them unversioned — add a rename pair to `PKG_LIB_RENAMES` if needed.
- **Logging**: use the matching zlog category — `imagerd` (the daemon), `isp_adj` (isp_tool), `onvif` (onvif_simple_server + wsd_simple_server). Production rules in `zlog.conf` filter to INFO+, so `zlog_debug(...)` won't appear on-camera; that's intentional (avoid frame-stat / ADC-reading noise on the tmpfs-backed `/var/log`). Add a new format + rule pair to `zlog.conf` if you introduce a new category.
- **Pushing iteration to a dev camera**: `scripts/dev_update.sh root@CAMERA_IP`. Tarballs the build, uploads via uftpd, ssh'es in (or telnet if SSH is rejected) to kill non-essential daemons, extracts, reboots. Skips `settings.json`, `network.ini`, and `boot.log` so user-customizable state is preserved across pushes.
