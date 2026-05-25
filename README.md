# Realtek RTS3903N based IP camera RTSP server

[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0)
[![Platform](https://img.shields.io/badge/platform-MIPS-orange.svg)]()
[![Camera](https://img.shields.io/badge/camera-RTS3903N-green.svg)]()
[![build](https://github.com/NoahMaceri/RTS3903N-RTSP/actions/workflows/build.yml/badge.svg)](https://github.com/NoahMaceri/RTS3903N-RTSP/actions/workflows/build.yml)

A custom RTSP streaming server for Realtek RTS3903N-based IP cameras (including Yi/Kami cameras). Runs entirely from an SD card — **no flash modification required**.

> **Safe & Reversible**: Simply remove the SD card to restore original camera functionality.

---

## Features

- **H.264 RTSP Streaming** — Standard `rtsp://` URL compatible with VLC, FFmpeg, NVRs, and home automation systems
- **JPEG Snapshots** — HTTP endpoint for capturing still images
- **Automatic Day/Night Switching** — IR cut filter control based on ambient light sensors
- **Pan-Tilt-Zoom Control** — PTZ motor support via `/dev/ssp`, exposed over ONVIF
- **ONVIF Profile S** — Device / Media / Imaging / PTZ / Events / DeviceIO services + WS-Discovery, so the camera is usable from any ONVIF NVR or client (Frigate, Home Assistant, Synology, ONVIF Device Manager, etc.)
- **Configurable Parameters** — Resolution, bitrate, FPS, ISP settings via JSON config and/or ONVIF SetVideoEncoderConfiguration / SetImagingSettings
- **Optional Authentication** — Username/password protection for RTSP + ONVIF
- **Telnet Access** — Remote shell access on port 23

---

## Quick Start

### Prerequisites

- RTS3903N-based IP camera (Yi Dome, Kami, or similar)
- MicroSD card (formatted as FAT32!)
- Ubuntu 20.04+ build system (for compilation)

### Building

```bash
# Install build dependencies
sudo bash tools/install_deps_ubuntu.sh

# Build
mkdir build && cd build
cmake -G Ninja -S .. -B .
ninja

# Create deployment package
ninja package_RTS3903N_RTSP
```

This creates `RTS3903N-RTSP-X.X.X.tar` containing all binaries and configuration files.

### Installation

1. Extract the package to your SD card root
2. Edit `settings.json` with your preferences
3. Configure WiFi (and optionally static IP) in `network.ini` at the root of the SD card
4. Insert SD card into camera and power on
5. Wait ~30 seconds for boot
6. Access stream at `rtsp://CAMERA_IP:554/stream`
7. Point any ONVIF client at `http://CAMERA_IP/onvif/device_service`

---

## HTTP endpoints

| Endpoint | Method | Description |
|----------|--------|-------------|
| `/cgi-bin/snapshot` | GET | Capture JPEG snapshot |
| `/onvif/device_service` | POST (SOAP) | ONVIF Device — info, network, time, scopes |
| `/onvif/media_service`, `/onvif/media2_service` | POST (SOAP) | ONVIF Media — profiles, stream/snapshot URIs, encoder configuration |
| `/onvif/imaging_service` | POST (SOAP) | ONVIF Imaging — brightness / contrast / saturation / sharpness / WDR / IR cut |
| `/onvif/ptz_service` | POST (SOAP) | ONVIF PTZ — absolute / relative / continuous move, presets |
| `/onvif/events_service` | POST (SOAP) | ONVIF Events |
| `/onvif/deviceio_service` | POST (SOAP) | ONVIF DeviceIO |

---

## Configuration

All settings are stored in `settings.json`

### ISP Parameters

| Parameter | Range | Description |
|-----------|-------|-------------|
| `brightness` | 0-100 | Image brightness |
| `contrast` | 0-100 | Image contrast |
| `saturation` | 0-100 | Color saturation |
| `sharpness` | 0-100 | Edge sharpness |
| `gamma` | 0-500 | Gamma correction |
| `noise_reduction` | 0-7 | Noise reduction strength |
| `ldc` | 0-1 | Lens distortion correction |
| `detail_enhancement` | 0-7 | Sharpening/detail enhancement |
| `three_dnr` | 0-1 | 3D noise reduction (temporal) |
| `mirror` | 0-1 | Horizontal flip |
| `flip` | 0-1 | Vertical flip |
| `in_out_door_mode` | 0-2 | Indoor(1)/Outdoor(0)/Auto(2) |
| `dehaze` | 0-1 | Haze removal filter |
| `wdr_mode` | 0-2 | Off(0)/Manual(1)/Auto(2) |
| `wdr_level` | 0-100 | WDR intensity |
| `exposure_mode` | 0-1 | Auto(0)/Manual(1) |
| `awb_mode` | 0-2 | Temperature(0)/Auto(1)/Component(2) |
| `gray_mode` | 0-1 | Force grayscale |

### Day/Night (IR) Control

The camera automatically switches between day and night mode:

- **Day mode**: IR cut filter engaged, IR LED off, color image
- **Night mode**: IR cut filter disengaged, IR LED at configured PWM duty, grayscale

| Key | Type | Description |
|-----|------|-------------|
| `detection_mode` | string | How "is it dark?" is decided. See modes below. Default `adc_auto`. |
| `adc_cutoff` | int | ADC threshold used by the ADC modes. |
| `ir_led_pwm_duty` | 0-100 | IR LED brightness when in night mode. 100 = full, 0 = off. |

`detection_mode` values:

| Mode | Behaviour |
|------|-----------|
| `adc_auto` | **(Default.)** ADC threshold with a ±100 hysteresis band — enters night when below `cutoff - 100`, leaves when above `cutoff + 100` — plus a runtime cross-check: every cycle we also call the SDK daynight estimator and count agreements/disagreements. After ~5 minutes (150 samples at 2 s cadence) of *consistent* disagreement, `imagerd` auto-flips the ADC polarity and persists the result to `daynight_polarity.state` next to `settings.json`. On the next boot the cached polarity is restored and learning resumes. Net effect: you set one cutoff, the camera figures out the rest. |
| `sdk_statis` | Use the SDK's built-in daynight estimator (`rts_av_get_isp_daynight_statis`) exclusively. No ADC required — pick this if your board has no light sensor or the ADC is unreliable. |
| `adc_zero` | Night iff ADC reads exactly zero (some sensor wirings drop to 0 in darkness). |
| `adc_raw_bool` | Night iff ADC value > 0 (sensor wired as a digital flag rather than analog). |

**How auto-polarity works**: the SDK's image-histogram-based daynight estimator (`rts_av_get_isp_daynight_statis`) is completely independent of the ADC sensor, so the two should agree under any well-lit scene. When the ADC polarity is wrong they consistently disagree, which is what `adc_auto` watches for. The 5-minute disagreement threshold prevents short cloud-passing or scene-change events from triggering false flips. To reset learning (e.g. after swapping the sensor or moving the camera to a really weird environment), delete `daynight_polarity.state` next to `settings.json`.

**Limitations of `adc_auto`**:
- Doesn't help on boards with no light sensor at all — use `sdk_statis` for those.
- During the first ~5 minutes of a deployment on a flipped-polarity board, day/night will be wrong; after that it's permanently right and survives reboots.
- A camera that only ever sees a permanently dark scene (e.g. an indoor closet with the door always shut) can confuse the SDK estimator. If `adc_auto` mis-learns, delete `daynight_polarity.state` to reset and let it re-learn under a more representative lighting cycle.

---

### Components

| Component | Description |
|-----------|-------------|
| `imagerd` | Central camera daemon: captures video + audio from the ISP, encodes H.264 / MJPEG / G.711, runs the in-process Live555 RTSP server, hosts the snapshot Unix socket, and manages day/night + auto-tune ISP loops |
| `day_night_ctrl` | Thread inside `imagerd`: monitors ADC light sensors, drives the IR cut filter |
| `auto_tune_ctrl` | Thread inside `imagerd`: samples the ISP's AE histogram and adjusts contrast / sharpness / WDR_LEVEL to match the current scene |
| `isp_ctrl` | CGI program for runtime ISP adjustment |
| `snapshot` | CGI program that reads from `imagerd`'s snapshot socket and returns a JPEG over HTTP |
| `ptz_tool` | Pan-Tilt-Zoom motor control + `probe` subcommand for non-destructive PTZ-presence detection (used by `config.sh` to gate the 30s boot-time PTZ calibration wait) |
| `cpld_info` | Diagnostic: reads `/sys/module/cpld_periph/parameters/{gpio,hw}` and decodes them per the kernel init rules — shows which GPIO is wired to which logical port and what active level each output uses |
| `onvif_simple_server` | ONVIF SOAP services as CGI under lighttpd (Device, Media, PTZ, Events, DeviceIO) |
| `wsd_simple_server` | WS-Discovery daemon (UDP/3702 multicast) — makes the camera auto-discoverable to NVRs |
| `sntp` | One-shot SNTP client run at boot — sets the wall clock since the hardware has no RTC |
| `lighttpd` | Web server for control interface and CGI |

---

## Accessing the Camera

### RTSP Stream

```bash
rtsp://CAMERA_IP:554/stream
```

### Web Interface

Open `http://CAMERA_IP/` in a web browser.

### Snapshots

```bash
# Download a snapshot (also suitable for NVR grabs)
curl http://CAMERA_IP/cgi-bin/snapshot -o snapshot.jpg
```

### Telnet Shell

```bash
telnet CAMERA_IP 23
```

### Logs

```bash
# View boot log
cat /var/tmp/sd/boot.log

# View streaming logs (via telnet)
cat /var/log/rtsp_streamer.log
```

---

## Troubleshooting

### Day/Night mode switching incorrectly

`adc_auto` learns the correct polarity over ~5 minutes; give it a full day/night cycle to converge. If it gets stuck on the wrong polarity (e.g. confused by an unusual indoor scene during learning), delete `daynight_polarity.state` next to `settings.json` to reset and let it re-learn. If the board has no light sensor, switch `detection_mode` to `sdk_statis`.

### PTZ not responding

The camera performs a 30-second calibration on boot. Wait for calibration to complete before sending PTZ commands.

### Web interface not loading

1. Check that `lighttpd` is running via `ps` on camera
2. Check `/var/tmp/sd/boot.log` for HTTP server startup errors

---

## Development

### AI disclosure
Portions of this project's code, refactors, and documentation were produced in collaboration with AI coding assistants (Anthropic's Claude). Every change is fully reviewed by a human and tested on a physical RTS3903N camera before it is commited, and ultimately reaches main. If you suspect a bug originated from an AI-generated path, please file an issue and tag it.
### Project Structure

```
├── src/                       # First-party C/C++
│   ├── imagerd/               # Capture + encode + in-process RTSP + snapshot UDS
│   ├── isp_ctrl/              # ISP control CGI
│   ├── isp_tool/              # ISP adjustment one-shot
│   ├── ptz_tool/              # PTZ control one-shot
│   ├── snapshot/              # Snapshot CGI client
│   ├── sntp/                  # Tiny SNTP client
│   ├── onvif_conf_gen/        # settings.json → ONVIF .conf at boot
│   └── common/ver.h.in        # Generated version header
├── external/                  # Vendored & submodule code
│   ├── live555/  rtscore/  rsdk/      # Vendored sources / blobs
│   ├── lighttpd1.4/  pcre2/  zlog/  mbedtls/   # Submodules
│   ├── nlohmann_json/json.hpp         # Single-header JSON
│   ├── onvif_simple_server/           # Upstream tree + PATCHES.md
│   ├── stock_blobs/                   # Stock kernel modules / Realtek libs / ISP fw
│   └── dev-tools/                     # uftpd, dropbear, libite, libuev (BUILD_DEV_TOOLS)
├── payload/                   # Files that ship to a running camera
│   ├── common/                # Shared between SD and on-flash deployments
│   ├── sd/                    # SD-card overlay (wifi/, Yi/, network.ini, …)
│   └── home/                  # On-flash overlay (init.sh, default.script, …)
├── cmake/                     # Packaging modules
│   ├── PackageSdTarball.cmake
│   └── PackageHomeBin.cmake
├── tools/                     # Host-side scripts
│   ├── install_deps_ubuntu.sh  dev_update.sh  flash_home_bin.sh  clean_builds.sh
│   ├── build/                 # CMake-invoked (strip_home_bin.sh, check_home_bin_size.sh)
│   └── debug/                 # One-off (socat-based file transfer)
└── docs/
```

### Cross-Compilation

The project uses the Realtek RSDK toolchain for MIPS cross-compilation. The toolchain is automatically extracted on first build.

**Requirements:**
- 32-bit library support (`gcc-multilib`)
- CMake 3.10+
- Ninja build system

---

## Roadmap

- [x] H.264 RTSP streaming
- [x] Automatic day/night switching
- [x] PTZ motor control
- [x] JSON configuration
- [x] Web-based ISP control
- [x] JPEG snapshots
- [x] lighttpd HTTP server
- [x] Audio streaming
- [x] ONVIF Profile S (auto-discovery, GetStreamUri, GetSnapshotUri)
- [x] ONVIF PTZ — URL routing exists (`/onvif/ptz_service`), but the binary's hardware-specific PTZ paths need a wrapper that translates ONVIF's normalized `[-1, 1]` velocities into our `ptz_tool` directional commands.
- [ ] ONVIF audio backchannel — receive audio from the client and play it through the camera's speaker. Requires both an ONVIF Media-side `AudioOutput` configuration and a producer pipeline feeding the rts audio decoder.

---

## Version History

### v0.6.2 (2026-05-22)

- Feature: ONVIF Imaging service. New `imaging_service.c` in the vendored `onvif_simple_server` (patch #4 in `PATCHES.md`) handles `GetImagingSettings`, `SetImagingSettings`, `GetOptions`, `GetServiceCapabilities`. Wraps the ISP through `isp_ctrl` so any ONVIF client can read/write brightness, contrast, saturation, sharpness, BLC, WDR, and IR-cut filter mode.
- Feature: ONVIF `SetVideoEncoderConfiguration` and `SetVideoSourceConfiguration` actually persist now (patch #5). `Width`, `Height`, `FrameRateLimit`, `BitrateLimit` go through a new tiny `settings_tool` helper that edits dot-paths in `settings.json`. Changes take effect on the next `imagerd` restart.
- Feature: `IrCutFilterMode` (ONVIF AUTO/ON/OFF) wired through to a runtime override. `day_night_ctrl` polls `/var/tmp/sd/ir_cut_override.state` every tick — when present, the auto-detection is skipped and the requested mode is forced. Clearing the file resumes detection. Override takes effect within the IR-control tick cadence (2 s) without restarting `imagerd`.
- Change: `isp_ctrl` rewritten. The JSON-over-stdin CGI mode is gone; the binary is now a CLI (`get`, `set`, `list`, `info`, `save`) used as the backend for the ONVIF Imaging service. Treats the virtual key `ir_cut_filter_mode` specially to drive the override above.
- Change: custom HTTP web UI sunset. `payload/common/http/www/index.html` and the `isp_ctrl` CGI wrapper deleted; `lighttpd.conf` trimmed to just the `/cgi-bin/snapshot` and `/onvif/` aliases. ONVIF clients (Frigate, HA, Synology, ODM, …) are the new control surface.

### v0.6.1 (2026-05-22)

- Feature: real ONVIF PTZ. `onvif_simple_server`'s PTZ service is now wired through to `/dev/ssp` via a rewritten `ptz_tool`. Supports `GetStatus`, `AbsoluteMove`, `RelativeMove`, `ContinuousMove`, `Stop`, `GetPresets`, `SetPreset`, `GotoPreset`, `RemovePreset`, `SetHomePosition`, `GotoHomePosition`. Pan/tilt exposed in ONVIF Profile S `[-1, +1]` coords (`+x = right`, `+y = up`); zoom unsupported (no hardware). Presets persisted at `/var/tmp/sd/onvif/ptz_presets.txt`.
- Feature: `onvif_conf_gen` auto-emits a `[ptz]` config block plus the `onvif://www.onvif.org/type/ptz` WS-Discovery scope when `/dev/ssp` exists. No `settings.json` knob needed — the kernel module presence is the source of truth.
- Change: `ptz_tool` CLI overhauled. Dropped the raw `move`/`status`/`goto_x`/`goto_y`/`pop_steps` debug subcommands in favour of the ONVIF-shaped surface (`get_position`, `is_moving`, `move_left|right|up|down`, `move_stop`, `jump_to_abs`, `jump_to_rel`, `set_preset`, `move_preset`, etc.). Kept `info`, `probe`, `park` for boot scripts and diagnostics.
- Bugfix: `ptz_tool` no longer links `librtsio.so.0` (was dead code) — runs without `LD_LIBRARY_PATH` overrides.

### v0.6.0 (2026-05-14)

- Feature: on-flash deployment. New `package_home_bin` CMake target builds an xz-compressed squashfs sized for the 3 MiB `mtdblock4` ("userdata") partition, with the same daemons + payload the SD-card target ships. Once flashed via the stock `/backup/mtd_img` helper, the camera boots into our stack with no SD card inserted. Includes the two-stage ISP firmware probe stock `rmm` does (bootstrap-load → read `/sys/.../sensor` → reload matched fw), the three-layer config sync (`/home/app` baked default → `/backup/config` runtime r/w → `/var/tmp/sd` provisioning input from SD card), and a 3-MiB-cap size gate via `tools/build/check_home_bin_size.sh`. See "On-flash boot" in [CLAUDE.md](CLAUDE.md) for details.
- Feature: `tools/flash_home_bin.sh` reflash helper. Uploads `home.bin` via uftpd, kills streaming daemons over SSH (or telnet fallback with a 180 s timeout for the SPI-NOR write), `umount -l /home`, `mtd_img 4`, reboot. Auto-discovers `home.bin` in the standard build dirs; pass an explicit binary as `argv[2]` to roll back to the original `mtdblock4.bin` from a firmware dump.
- Feature: `tools/build/strip_home_bin.sh` strips ELFs in the staging tree before `mksquashfs` runs. Skips already-sstripped stock blobs (running `--strip-unneeded` on those would re-add section headers in a layout the uClibc loader can't mmap). Cuts ~80% off `imagerd` and is the difference between fitting in `mtdblock4` and not.
- Feature: `librtsisp.so` ISP firmware loader path patched in place. The vendored Realtek lib has a hardcoded `/sys/devices/platform/rts_soc_camera.0/loadfw` path, but the kernel on these boards exposes the device without the `.0` suffix. Replaced with `//` (Linux collapses double-slashes) — two-byte, idempotent patch committed alongside the binary.
- Feature: zlog config-path resolution made portable. `imagerd` and `onvif_simple_server`'s log shim now try `$ZLOG_CONF` env → `/var/tmp/sd/zlog.conf` → `/home/app/zlog.conf` in order, so the same binary works for SD-card hijack and on-flash modes without per-mode patches.
- Feature: CI on GitHub Actions. Builds the SD tarball + `home.bin` in a matrix over `BUILD_DEV_TOOLS={OFF,ON}` on every PR to `main` and every push to `main` / `reflash`. The MIPS toolchain extraction is cached across runs (keyed on the tarball hash). Artifacts uploaded for download.
- Refactor: directory restructure. `extern/` → `tools/debug/`, `scripts/` → `tools/`, `sd_payload/` → `payload/sd/` plus a new shared `payload/common/` and on-flash-specific `payload/home/`, `include/ver.h.in` → `src/common/ver.h.in`, `snapshot_server` binary renamed to `snapshot`. CMake `package_*` targets updated.
- Tooling: `PreLoad.cmake` now invokes the rsdk toolchain's i386 `cc1` at configure time and prints a clear pointer at `install_deps_ubuntu.sh` if it fails — replaces the previous opaque `CheckTypeSize` "Cannot copy output executable ''" failure mode when host i386 libs are missing.

### v0.5.1 (2026-05-08)

- Bugfix: RTP presentation timestamps were derived from `gettimeofday()`, so when the in-tree `sntp` client stepped the wall clock from the kernel epoch (~1970) to the real time mid-stream, ffmpeg-based clients (Frigate, others) saw a multi-decade jump and emitted `Timestamps are unset in a packet for stream 0` followed by `No frames received in 20 seconds`. `imagerd` now reads `CLOCK_MONOTONIC` for both the H.264 and PCMU push paths via a new `monotonic_us()` helper, so RTP timing is immune to wall-clock steps.
- Change: `sntp` runs synchronously *before* `lighttpd` / `imagerd` / `wsd_simple_server` start instead of being backgrounded at end-of-boot. Logs, ONVIF SOAP timestamps, and RTSP session creation no longer span a wall-clock jump. The earlier ordering was only safe because the RTP path was wall-clock-based; with `CLOCK_MONOTONIC` driving RTP, this is now belt-and-braces — but it makes log readability and ONVIF timestamps correct from boot.

### v0.5.0 (2026-05-08)

- Feature: ONVIF Profile S support via vendored `onvif_simple_server` (GPLv3). SOAP services (Device/Media/PTZ/Events/DeviceIO) run as CGI under lighttpd; standalone `wsd_simple_server` handles WS-Discovery (UDP/3702 multicast). Configured under `[onvif]` in `settings.json`; `onvif_conf_gen` regenerates the INI conf at boot so the JSON stays the single source of truth.
- Feature: G.711 u-law audio streaming. Captured at 8 kHz mono via ALSA, advertised as RTP payload type 0 (PCMU). Capture gain configurable in `settings.json`'s `audio` block.
- Refactor: `rtsp_server` binary deleted; live555 runs in-process inside `imagerd` via a custom `FramedSource` reading from in-memory queues. Eliminates `/tmp/video.h264` + `/tmp/audio.ulaw` FIFOs and lets us pass per-frame metadata (PTS, keyframe flag) directly to the framer instead of re-parsing it from the byte stream.
- Feature: Optional dev-tools subtree gated on `-DBUILD_DEV_TOOLS=ON`. Ships `uftpd` (writable FTP/TFTP for pushing binaries onto the camera without reflashing) and `dropbear` (SSH on port 22). Telnet on port 23 is now also gated on dev-tools presence (was always on).
- Bugfix: dropbear's cross-compile build skipped its `/dev/ptmx` runtime check and fell back to the BSD-pty path which doesn't exist on this kernel — SSH auth would succeed but PTY allocation would fail. Forced `USE_DEV_PTMX` at compile time.
- Refactor: Network config moved out of `config.sh` and `Factory/wpa_supplicant.conf` into a single `network.ini` at the SD card root. Sections `[wifi]` (ssid, psk) and `[network]` (ip, netmask, gateway). `config.sh` regenerates `wifi/wpa_supplicant.conf` from it on every boot. Old `wpa_supplicant_sample.conf` template removed.
- Feature: Tiny in-tree `sntp` client. The stock busybox lacks ntpd/ntpdate/rdate, the wget build is too stripped for the HTTP `Date:` trick, and the hardware has no RTC — so we ship our own. One UDP/123 round-trip, `settimeofday()`, exit. Called backgrounded from `config.sh` at end of boot.
- Feature: H.264 quality knobs `max_qp` and `intra_qp_delta` promoted to `settings.json`'s `encoder` block. New defaults 34 / -3 (from hardcoded 38 / -2). `.value()` fallbacks keep the old defaults in effect for cameras with older `settings.json` files.
- Feature: Force-IDR on every fresh RTSP client attach via `rts_av_request_h264_key_frame()`. Producer drops P-frames until the next keyframe so live555 starts each session on a clean IDR within ~1 frame instead of waiting up to a 2-second GOP boundary.
- Bugfix: Queue source was discarding the tail of frames larger than `fMaxSize` instead of buffering for the next `doGetNextFrame()` call. Symptom was periodic decoder corruption around GOP boundaries. Now buffered in `fLeftover` and delivered across multiple calls with PTS pinned across the fragments.
- Bugfix: A P-frame pushed between client attach and the producer's IDR-request consumption could land at the head of the new session ahead of the forced keyframe. Queue clearing now happens atomically inside `consume_idr_request()` so the producer always wins the race.
- Change: live555 `OutPacketBuffer::maxSize` bumped 256 KB → 1 MB so large I-frames at higher bitrates don't get silently NAL-unit-dropped.
- Bugfix: `audio_capture_thread` was a stack-local `pthread_t`, never joined. `kill_stream` could destroy audio channels while the thread was mid-`rts_av_recv()` (UAF on shutdown). Now tracked in `handlers` and joined before channel teardown.
- Bugfix: `imagerd`'s `zlog_init("zlog.conf")` used a relative path that depended on the supervisor's inherited CWD. Now uses an absolute `/var/tmp/sd/zlog.conf` — robust across `config.sh` restructurings.
- Cleanup: Root `CMakeLists.txt` reorganized into named sections (Generated headers / Third-party libraries / Project executables / Optional dev tools / Roll-up / Packaging). Per-target file lists hoisted into variables; the package step is now a short list of commands instead of a 90-line `add_custom_target` blob.
- Rename: `imager_streamer` binary renamed to `imagerd`. The old name described an ISP-to-FIFO bridge; the binary now also runs the in-process RTSP server, the snapshot UDS, and the IR / auto-tune control loops. Cascades through the source dir (`src/imager_streamer/` → `src/imagerd/`), zlog category (`imager` → `imagerd`), `config.sh` invocation, log tag (`[Imager streamer]` → `[imagerd]`), and the startup banner.
- Feature: scene-adaptive ISP auto-tune. New `auto_tune_ctrl` thread inside `imagerd` samples the SDK's AE histogram via `rts_av_query_isp_ae()` every few seconds and adjusts `CONTRAST` / `SHARPNESS` / `WDR_LEVEL` toward a scene-appropriate target (5-bucket lookup keyed on mean luma + a high-DR override on histogram spread). EMA-smoothed transitions, configurable period and aggressiveness under `[auto_tune]` in `settings.json`. Realtek's built-in 3A keeps running underneath; this is a policy layer on top.

### v0.4.1 (2026-03-18)

- Bugfix: ISP mutex was per-translation-unit (`static` in header), so the IR control thread and main thread had no synchronization. Now uses a single shared mutex.
- Bugfix: detached threads (FIFO reader, snapshot server) could access freed resources during teardown. Threads are now joined in correct dependency order before their resources are released.
- Bugfix: `stop()` during the 15-second sensor warmup would skip `pthread_join`, leaving the thread running against a destroyed object. The warmup sleep is now interruptible (exits within ~1 second on shutdown).
- Bugfix: `terminate()` had wrong signature (`void()` instead of `void(int)`), masked by `reinterpret_cast`. Undefined behavior on MIPS calling conventions. All signal handlers now use `sigaction()` instead of `signal()`.
- Bugfix: Logs now rotate at 256KB with 3 files max (~768KB ceiling). Previously unbounded, which could exhaust RAM on the tmpfs-backed `/var/log/`.
- Change: Production logs filtered to INFO+, dropping DEBUG noise (frame stats, FIFO debug, ADC readings).
- Bugfix: `imagerd` now reports failure to init systems on crash instead of always returning success.
- Bugfix: Proper resource cleanup on server creation failure (was calling `exit()` and leaking).

### v0.4.0 (2026-01-25)

- Feature: Added live image parameter adjustment via browser
- Feature: Added lighttpd HTTP server
- Feature: Added JPEG snapshots
- Feature: Added PTZ motor control via `/dev/ssp`
- Change: Replaced INI format with `settings.json`
- Feature: Created ISP adjustment tool for live ISP tuning
- Feature: Added H264FifoFramedSource for better stream reliability
- Feature: Added IR control hysteresis

### v0.3.1 (2025-11-14)

First release after forking from [cjj25/Yi-RTS3903N-RTSPServer](https://github.com/cjj25/Yi-RTS3903N-RTSPServer).

- Feature: Added cross-compilation with Ninja
- Feature: `ninja package_RTS3903N_RTSP` creates deployment tarball
- Feature: Added configurable ini parameters for camera parameters
- Feature: Multiple ADC & FIFO improvements
- Bugfix: Corrected startup state for day/night control
- Bugfix: Resolved memory leak in streaming pipeline

---

## Credits

This project builds upon the work of many contributors:

### imagerd
- [@roleoroleo](https://github.com/roleoroleo) — Original author of rtsp_server
- [@alienatedsec](https://github.com/alienatedsec) — Modified version of rtsp_server
- [@cjj25](https://github.com/cjj25) — Original author of rt_stream usage
- [Realtek](https://www.realtek.com/) — rt_stream examples

### payload
- [@rage2dev](https://github.com/rage2dev/) — Original author (then `sd_payload/`)
- [@cjj25](https://github.com/cjj25) — Modified version

---

## Resources

- [RTS3903N Tools](https://github.com/cjj25/RTS3903N-Tools) — Compiled binaries for debugging
- [Original Fork](https://github.com/cjj25/Yi-RTS3903N-RTSPServer) — Colin Jensen's version

---

## License

This project is licensed under the GNU General Public License v3.0 — see the [LICENSE](LICENSE) file for details.
