# Yi-RTS3903N RTSP Server

[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0)
[![Platform](https://img.shields.io/badge/platform-MIPS-orange.svg)]()
[![Camera](https://img.shields.io/badge/camera-RTS3903N-green.svg)]()

A custom RTSP streaming server for Realtek RTS3903N-based IP cameras (including Yi/Kami cameras). Runs entirely from an SD card — **no flash modification required**.

> **Safe & Reversible**: Simply remove the SD card to restore original camera functionality.

---

## Features

- **H.264 RTSP Streaming** — Standard `rtsp://` URL compatible with VLC, FFmpeg, NVRs, and home automation systems
- **Automatic Day/Night Switching** — IR cut filter control based on ambient light sensors
- **Pan-Tilt-Zoom Control** — PTZ motor support via `/dev/ssp`
- **Web Control Interface** — Browser-based ISP parameter adjustment (in development)
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
3. Configure WiFi in `wifi/wpa_supplicant.conf`
4. Insert SD card into camera and power on
5. Wait ~60 seconds for boot (includes PTZ calibration)
6. Access stream at `rtsp://CAMERA_IP:554/stream`

---

## Configuration

All settings are stored in `settings.json`:

```json
{
  "ir_control": {
    "adc_cutoff": 400,
    "adc_cutoff_inverted": 2750,
    "invert": false
  },
  "isp": {
    "noise_reduction": 4,
    "ldc": 1,
    "detail_enhancement": 4,
    "three_dnr": 1,
    "mirror": 1,
    "flip": 1,
    "in_out_door_mode": 2,
    "dehaze": 1,
    "brightness": 1,
    "contrast": 50,
    "saturation": 50,
    "sharpness": 50,
    "gamma": 300,
    "wdr_mode": 2,
    "wdr_level": 40
  },
  "encoder": {
    "max_bitrate": 1024000,
    "target_bitrate": 1024000,
    "min_bitrate": 512000,
    "width": 1920,
    "height": 1080,
    "fps": 20
  },
  "rtsp": {
    "username": "",
    "password": "",
    "port": 554,
    "name": "stream"
  }
}
```

### ISP Parameters

| Parameter | Range | Description |
|-----------|-------|-------------|
| `noise_reduction` | 0-7 | Noise reduction strength |
| `ldc` | 0-1 | Lens distortion correction |
| `detail_enhancement` | 0-7 | Sharpening/detail enhancement |
| `three_dnr` | 0-1 | 3D noise reduction (temporal) |
| `mirror` | 0-1 | Horizontal flip |
| `flip` | 0-1 | Vertical flip |
| `in_out_door_mode` | 0-2 | Indoor/outdoor optimization |
| `dehaze` | 0-1 | Haze removal filter |
| `wdr_mode` | 0-2 | Wide dynamic range mode |
| `wdr_level` | 0-100 | WDR intensity |

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

## Architecture

```
┌─────────────────────────────────────────────────────────────┐
│                     Camera Hardware                          │
│  ┌──────────┐    ┌─────────┐    ┌──────────────┐           │
│  │  Sensor  │───▶│   ISP   │───▶│ H.264 Encoder│           │
│  └──────────┘    └─────────┘    └──────┬───────┘           │
│                                         │                    │
│  ┌──────────┐                   ┌──────▼───────┐           │
│  │ ADC/Light│───▶ day_night ───▶│     FIFO     │           │
│  │ Sensors  │      _ctrl        │/tmp/video.h264│           │
│  └──────────┘                   └──────┬───────┘           │
└─────────────────────────────────────────┼───────────────────┘
                                          │
                               ┌──────────▼──────────┐
                               │    rtsp_server      │
                               │   (Live555 lib)     │
                               └──────────┬──────────┘
                                          │
                               ┌──────────▼──────────┐
                               │  rtsp://IP:554/...  │
                               │   VLC / NVR / etc   │
                               └─────────────────────┘
```

### Components

| Component | Description |
|-----------|-------------|
| `imager_streamer` | Captures video from ISP, encodes H.264, writes to FIFO |
| `rtsp_server` | Reads FIFO, streams via RTSP/RTP (Live555) |
| `day_night_ctrl` | Monitors light sensors, controls IR cut filter |
| `isp_ctrl` | CLI tool for runtime ISP adjustment |
| `ptz_tool` | Pan-Tilt-Zoom motor control |
| `lighttpd` | Web server for control interface |

---

## Accessing the Camera

### RTSP Stream

```bash
# VLC
vlc rtsp://CAMERA_IP:554/stream

# FFmpeg
ffmpeg -i rtsp://CAMERA_IP:554/stream -c copy output.mp4

# FFplay
ffplay -rtsp_transport tcp rtsp://CAMERA_IP:554/stream
```

### Telnet Shell

```bash
telnet CAMERA_IP 23
```

### Logs

```bash
# View streaming logs
cat /var/log/rtsp_streamer.log
```

---

## Troubleshooting

### Stream won't connect

1. Verify camera IP address
2. Check that both `imager_streamer` and `rtsp_server` are running
3. Try TCP transport: `ffplay -rtsp_transport tcp rtsp://...`

### Day/Night mode switching incorrectly

Set `"invert": true` in the `ir_control` section of `settings.json`.

### Video artifacts or freezing

- Reduce resolution or bitrate in encoder settings
- Ensure adequate power supply to camera
- Check SD card for errors

### PTZ not responding

The camera performs a 30-second calibration on boot. Wait for calibration to complete before sending PTZ commands.

---

## Development

### Project Structure

```
├── src/
│   ├── imager_streamer/    # Video capture & encoding
│   ├── rtsp_server/        # RTSP streaming server
│   ├── isp_ctrl/           # ISP control CLI
│   ├── isp_tool/           # ISP adjustment tool
│   └── ptz_tool/           # PTZ control
├── third-party/
│   ├── live555/            # RTSP library
│   ├── zlog/               # Logging library
│   ├── rtscore/            # Realtek SDK
│   └── rsdk/               # MIPS toolchain
├── sd_payload/             # Deployment files
│   ├── settings.json       # Configuration
│   ├── wifi/               # Network scripts
│   └── http/               # Web interface
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
- [ ] Web-based ISP control (CGI integration)
- [ ] Audio streaming
- [ ] ONVIF compatibility

---

## Credits

This project builds upon the work of many contributors:

### rtsp_server
- [@roleoroleo](https://github.com/roleoroleo) — Original author
- [@alienatedsec](https://github.com/alienatedsec) — Modified version
- [@cjj25](https://github.com/cjj25) — Modified version

### imager_streamer
- [Realtek](https://www.realtek.com/) — rt_stream examples
- [@cjj25](https://github.com/cjj25) — Original author

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
