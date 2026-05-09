# Realtek RTS3903N based IP camera RTSP server

[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0)
[![Platform](https://img.shields.io/badge/platform-MIPS-orange.svg)]()
[![Camera](https://img.shields.io/badge/camera-RTS3903N-green.svg)]()

A custom RTSP streaming server for Realtek RTS3903N-based IP cameras (including Yi/Kami cameras). Runs entirely from an SD card — **no flash modification required**.

> **Safe & Reversible**: Simply remove the SD card to restore original camera functionality.

---

## Features

- **H.264 RTSP Streaming** — Standard `rtsp://` URL compatible with VLC, FFmpeg, NVRs, and home automation systems
- **Web Control Interface** — Browser-based ISP parameter adjustment with live preview
- **JPEG Snapshots** — HTTP endpoint for capturing still images
- **Automatic Day/Night Switching** — IR cut filter control based on ambient light sensors
- **Pan-Tilt-Zoom Control** — PTZ motor support via `/dev/ssp`
  - This control has been implemented and tested on a Victure SC210. Other models may require adjustments.
  - Control is via telnet for now, but web interface integration is planned.
- **Configurable Parameters** — Resolution, bitrate, FPS, ISP settings via JSON config
- **Optional Authentication** — Username/password protection for RTSP stream
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
sudo bash scripts/install_deps_ubuntu.sh

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
7. Access web interface at `http://CAMERA_IP/`

---

## Web Interface

The camera includes a web interface accessible at `http://CAMERA_IP/`.

![Web Interface](docs/webui.png)

### API Endpoints

| Endpoint | Method | Description |
|----------|--------|-------------|
| `/cgi-bin/snapshot` | GET | Capture JPEG snapshot |
| `/cgi-bin/isp_ctrl` | POST | ISP control commands |

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

The camera uses ADC light sensors to automatically switch between day and night mode:

- **Day mode**: IR cut filter engaged, color image
- **Night mode**: IR cut filter disengaged, grayscale with IR illumination

Some cameras have inverted sensor logic. If your camera switches modes incorrectly:

```json
"ir_control": {
  "invert": true,
  "adc_cutoff_inverted": 2750
}
```

---

### Components

| Component | Description |
|-----------|-------------|
| `imagerd` | Central camera daemon: captures video + audio from the ISP, encodes H.264 / MJPEG / G.711, runs the in-process Live555 RTSP server, hosts the snapshot Unix socket, and manages day/night + auto-tune ISP loops |
| `day_night_ctrl` | Thread inside `imagerd`: monitors ADC light sensors, drives the IR cut filter |
| `auto_tune_ctrl` | Thread inside `imagerd`: samples the ISP's AE histogram and adjusts contrast / sharpness / WDR_LEVEL to match the current scene |
| `isp_ctrl` | CGI program for runtime ISP adjustment |
| `snapshot` | CGI program that reads from `imagerd`'s snapshot socket and returns a JPEG over HTTP |
| `ptz_tool` | Pan-Tilt-Zoom motor control |
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

Set `"invert": true` in the `ir_control` section of `settings.json`.

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
├── src/
│   ├── imagerd/    # Video capture, encoding & snapshot server
│   ├── rtsp_server/        # RTSP streaming server
│   ├── isp_ctrl/           # ISP control CGI
│   ├── snapshot_server/    # Snapshot CGI client
│   ├── isp_tool/           # ISP adjustment tool
│   └── ptz_tool/           # PTZ control
├── third-party/
│   ├── live555/            # RTSP library
│   ├── lighttpd1.4/        # HTTP server
│   ├── zlog/               # Logging library
│   ├── rtscore/            # Realtek SDK
│   └── rsdk/               # MIPS toolchain
├── sd_payload/             # Deployment files
│   ├── settings.json       # Configuration
│   ├── wifi/               # Network scripts
│   └── http/               # Web interface
│       ├── www/            # Static files (HTML, CSS)
│       ├── cgi-bin/        # CGI scripts
│       └── lighttpd.conf   # HTTP server config
└── scripts/                # Build utilities
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
- [ ] ONVIF PTZ — URL routing exists (`/onvif/ptz_service`), but the binary's hardware-specific PTZ paths need a wrapper that translates ONVIF's normalized `[-1, 1]` velocities into our `ptz_tool` directional commands.
- [ ] ONVIF audio backchannel — receive audio from the client and play it through the camera's speaker. Requires both an ONVIF Media-side `AudioOutput` configuration and a producer pipeline feeding the rts audio decoder.

---

## Version History

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

### sd_payload
- [@rage2dev](https://github.com/rage2dev/) — Original author
- [@cjj25](https://github.com/cjj25) — Modified version

---

## Resources

- [RTS3903N Tools](https://github.com/cjj25/RTS3903N-Tools) — Compiled binaries for debugging
- [Original Fork](https://github.com/cjj25/Yi-RTS3903N-RTSPServer) — Colin Jensen's version

---

## License

This project is licensed under the GNU General Public License v3.0 — see the [LICENSE](LICENSE) file for details.
