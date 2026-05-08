;l# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Cross-compilation target

This project produces **MIPS-I uClibc** binaries for the Realtek RTS3903N SoC (RTL5281) — they will not run on the build host. The toolchain (`rsdk-4.8.5-...m32fut`) is shipped as a tarball under `third-party/rsdk/` and auto-extracted by `PreLoad.cmake`. Compilation flag `-march=5281` is set in `third-party/rsdk/enable_mips_uclibc.cmake`. Build hosts need 32-bit lib support (`gcc-multilib`, `zlib1g-dev:i386`, `libc6-dev:i386`); see `scripts/install_deps_ubuntu.sh`.

## Build commands

```bash
# First-time setup (one-time):
sudo bash scripts/install_deps_ubuntu.sh

# Configure & build:
mkdir build && cd build
cmake -G Ninja -S .. -B .
ninja

# Build a single executable (faster iteration):
ninja imagerd       # or rtsp_server, isp_ctrl, snapshot, isp_tool, ptz_tool, lighttpd

# Package SD-card tarball (RTS3903N_RTSP-<version>.tar):
ninja package_RTS3903N_RTSP

# Wipe build artifacts + extracted toolchain:
bash scripts/clean_builds.sh   # must be run from inside scripts/
```

The repo includes a pre-existing `cmake-build-release/` directory used by the IDE; either reuse it or create your own `build/`. There are no host-runnable unit tests — verification is done by deploying the tarball to an SD card and booting the camera.

## Bumping the version

Edit `project(RTS3903N_RTSP VERSION x.y.z)` in the top-level `CMakeLists.txt`. The number propagates to C++ via `include/ver.h.in` → `${BUILD}/ver.h` (`VER_MAJOR/MINOR/PATCH`) and into the tarball filename.

## Runtime architecture

Two long-running processes plus several CGI helpers, all started by `sd_payload/wifi/config.sh` on boot:

```
                ┌──────────────────────────┐
   ISP/H.264 ─► │       imagerd    │ ──► /tmp/video.h264 (FIFO)  ──┐
   ISP/MJPEG ─► │  (producer; main daemon) │     /tmp/audio.ulaw (FIFO)  ──┤
   Audio/G.711─►│                          │     /tmp/snapshot.sock (UDS)─┐│
                └──────────────────────────┘                              ││
                          │                                               ││
                  day/night thread ──► CPLD (/dev/cpld_periph) IR cut     ││
                                                                          ▼▼
                ┌──────────────────────────┐    ┌──────────┐  Unix socket ┌─────────────┐
                │       rtsp_server        │ ◄──┤  FIFOs   │              │ snapshot CGI│
                │  (live555, port 554)     │    └──────────┘              └─────────────┘
                └──────────────────────────┘                                   ▲
                                                                               │ HTTP
   lighttpd (port 80) ──► /cgi-bin/isp_ctrl ──► isp_ctrl binary (rts_av_*) ────┤
                       └─► /cgi-bin/snapshot ─► snapshot binary ───────────────┘
```

Key consequences of this layout:

- **`imagerd` is the only process that touches RTS AV channels.** `isp_ctrl` and `isp_tool` *also* call `rts_av_init()`/`rts_av_get_isp_ctrl()`, but only as one-shot tools that exit immediately. Long-lived ISP state lives in `imagerd`.
- **`rtsp_server` is a pure FIFO consumer.** It does not know about hardware. Adding a new media type requires (a) a new producer path in `imagerd.cpp` writing a new FIFO, and (b) a new `*LiveFifoSubsession.h` wired into `rtsp_server.cpp`.
- **Standby mode**: when no RTSP client is connected, `write_to_fifo` returns -1/EPIPE; the main loop sets `g_fifo_broken`, recreates the FIFO every `FIFO_RECOVERY_INTERVAL_MS` (5s), and silently drops frames. Don't treat broken-pipe as fatal.
- **Snapshots** flow `lighttpd → /cgi-bin/snapshot wrapper → snapshot_server (CGI client) → /tmp/snapshot.sock → snapshot_server_thread inside imagerd → MJPEG callback`. The snapshot path is gated on an MJPEG channel that's bound to the same ISP as the H.264 channel.

## Threading & shutdown invariants

`imagerd` runs five+ threads (main capture, audio capture, IR control, snapshot server, per-FIFO unlock readers). The shutdown rules are non-obvious and have been the source of past bugs (see v0.4.1 changelog in README.md):

- **`g_exit` (atomic bool) is the cooperative shutdown flag.** Every thread loop checks it. Long sleeps must be interruptible — see how `day_night_ctrl`'s 15s sensor warmup is broken into short polls.
- **Threads are joined, not detached, when they reference resources owned by `main`** (e.g. ISP/H264/audio channels, the snapshot socket, the FIFO fd). The teardown order in `kill_stream()` is: stop IR thread → stop audio → join snapshot thread → tear down AV channels → `rts_av_release()` → join FIFO unlock thread → close FIFO. Don't reorder without re-checking dependencies.
- **`g_isp_mutex` (declared in `isp_utils.h`, defined in `isp_utils.cpp`) is the single shared mutex protecting `rts_av_get_isp_ctrl`/`rts_av_set_isp_ctrl`.** Every ISP read/write from any thread must go through `change_isp_setting()`/`get_isp_setting()` in `isp_utils.cpp`. Do not declare a `static std::mutex` in a header — that creates one mutex per translation unit and the threads will not synchronize.
- **All signal handlers must use `sigaction()` and have signature `void(int)`.** `signal()` and bare `void()` handlers compile but invoke UB on MIPS calling conventions.
- **FIFO writes go through `write_to_fifo()`**, a non-blocking `poll()`+`write()` loop with a 500ms whole-frame deadline. Returns 0 means *frame dropped due to slow reader*; returns -1 means *broken pipe / write error*. Partial writes are treated as -1 — do not "recover" them.

## Configuration

All runtime config is `settings.json` (FAT32-friendly, parsed with `nlohmann::json` in `include/json.hpp`). Source-of-truth schema lives in `sd_payload/settings.json`; on the camera it ends up at `/var/tmp/sd/settings.json` and is *also* writable by the web UI via `isp_ctrl SAVE_SETTINGS`. Sections: `audio`, `ir_control`, `isp`, `encoder`, `rtsp`.

The camera reads `settings.json` from its current working directory at startup — `wifi/config.sh` does `cd /var/tmp/sd/` before launching the daemons. If you add a new config key, update the README parameter table.

## ISP parameter handling

There are **two** parameter→`enum_rts_video_ctrl_id` maps:

1. `src/imagerd/isp_utils.cpp::param_setting_map` — used at boot to apply `settings.json` `isp.*` keys.
2. `src/isp_ctrl/isp_ctrl.cpp::get_param_definitions()` — used by the web UI; richer (display name, group, type, enum options).

These are intentionally separate (the web UI needs metadata the boot path doesn't), but the **canonical key names must match** — keep them in sync when adding params, or the UI will set a value that won't be persisted on next boot.

`isp_ctrl` is invoked as a CGI one-shot per request. Commands (JSON over stdin): `GET_PARAMETER_INFO`, `READ_PARAMETERS`, `SET_PARAMETER`, `SET_PARAMETERS`, `SAVE_SETTINGS`.

## CPLD (board peripherals)

`src/imagerd/cpld.h` is a header-only wrapper over `/dev/cpld_periph` (the kernel module shipped in `sd_payload/Yi/ko/cpld_periph.ko`). Controls IR-cut, IR LED, audio enable, status LEDs. Interface was reverse-engineered — there's no upstream driver doc, so behavior was verified empirically on a Victure SC210. New ioctls go in the `CPLD_*` defines and a corresponding `set_*()` helper.

## Boot sequence (camera-side)

`sd_payload/wifi/config.sh` runs as the SD-card hijack entry point. In order: backs up flash on first run → kills the stock cloud agents (`watchdog`, `cloud`, `p2p_tnp`, `mp4record`, `oss`, `rmm`, …) → parses `network.ini`, regenerates `wifi/wpa_supplicant.conf`, runs `wpa_supplicant` → `udhcpc` (or static IP) → lighttpd on :80 → sleeps 30s for PTZ calibration → `imagerd &` (under a respawn supervisor; serves both the encoder pipeline and RTSP via in-process live555) → if `dev-tools/` is in the package: `telnetd` on :23, `uftpd`, `dropbear` on :22 → `sntp pool.ntp.org &` for clock sync. Logs go to `/var/tmp/sd/boot.log` (boot) and `/var/log/rtsp_streamer.log` (rotating, 256KB × 3, configured in `sd_payload/zlog.conf`).

Network configuration lives in `/var/tmp/sd/network.ini` (sections `[wifi]` for SSID/PSK and `[network]` for optional static IP/netmask/gateway). `config.sh` parses it via a tiny awk INI helper, regenerates `wifi/wpa_supplicant.conf` from those values on every boot (the file is marked DO-NOT-EDIT), and applies static IP if all three fields are set, else falls back to DHCP. `wpa_supplicant_sample.conf` and the `Factory/` placement are gone — `network.ini` is the only file the user touches.

## Audio constraints

Audio is hard-wired to **G.711 u-law / 8 kHz / mono / 64 kbps** end-to-end. The RTSP side uses RTP payload type 0 (PCMU static), and the producer creates the encoder with `rts_av_create_audio_encode_chn(RTS_AUDIO_TYPE_ID_ULAW, 64000)`. To support a different codec/rate, all three of (a) the audio capture attrs in `imagerd.cpp::start_stream`, (b) the `PCMULiveFifoSubsession` RTP sink config, and (c) the audio FIFO chunk size (160 bytes = 20ms at 8 kHz) must change together.

Capture gain is applied through ALSA mixer controls `Real Amic`, `Front Amic`, `ADC Compensate` — do not assume a single mixer element exists.

## Third-party submodules

`third-party/zlog`, `third-party/pcre2`, `third-party/lighttpd1.4` are git submodules — `git submodule update --init --recursive` after a fresh clone. `third-party/live555` and `third-party/rtscore` are vendored sources (Realtek SDK is not redistributable, so the rtscore tree contains only the headers + prebuilt `.so`s extracted from the toolchain). PCRE2 is built shared (`BUILD_SHARED_LIBS ON`) because lighttpd's `mod_cgi` dlopens it.

## When editing common areas

- **Adding a new daemon/CGI binary**: add `add_subdirectory(src/<name>)` in the top-level `CMakeLists.txt` *and* a `COMMAND ${CMAKE_COMMAND} -E copy ... ${CMAKE_BINARY_DIR}/out` line in the `package_${PROJECT_NAME}` custom target — otherwise it won't end up in the tarball. Add it to the `${PROJECT_NAME}_tools` `DEPENDS` list too.
- **Adding a new shared library dependency**: copy/rename it under the `# -- libraries --` section of the package target (Realtek libs are versioned as `.so.0`/`.so.1` on the camera even though the toolchain ships them unversioned).
- **Logging**: use the matching zlog category — `imager` (imagerd), `server` (rtsp_server), `isp_adj` (isp_tool). Production rules in `zlog.conf` filter to INFO+, so DEBUG output won't appear on-camera; that's intentional (avoid frame-stat / ADC-reading noise in tmpfs-backed `/var/log`).
