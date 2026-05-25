# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Cross-compilation target

This project produces **MIPS-I uClibc** binaries for the Realtek RTS3903N SoC (RTL5281) — they will not run on the build host. The toolchain (`rsdk-4.8.5-...m32fut`) is shipped as a tarball under `external/rsdk/` and auto-extracted by `PreLoad.cmake`. Compilation flag `-march=5281` is set in `external/rsdk/enable_mips_uclibc.cmake`. Build hosts need 32-bit lib support (`gcc-multilib`, `zlib1g-dev:i386`, `libc6-dev:i386`) plus autotools (`autoconf automake libtool pkg-config`) for the dev-tools sub-builds; see `tools/install_deps_ubuntu.sh`.

## Build commands

```bash
# First-time setup (one-time):
sudo bash tools/install_deps_ubuntu.sh

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

# Package home.bin for direct flash to mtdblock4 (see "On-flash boot" below).
# WARNING: on-flash deployment is EXPERIMENTAL — development use only.
ninja package_home_bin

# Push a fresh build to a development camera over uftpd + ssh/telnet:
../tools/dev_update.sh root@CAMERA_IP

# Wipe build artifacts + extracted toolchain:
bash tools/clean_builds.sh   # must be run from inside tools/
```

The repo includes a pre-existing `cmake-build-release/` directory used by the IDE; either reuse it or create your own `build/`. There are no host-runnable unit tests — verification is done by deploying the tarball to an SD card (or via `dev_update.sh`) and watching the camera.

## Bumping the version

Edit `project(RTS3903N_RTSP VERSION x.y.z)` in the top-level `CMakeLists.txt`. The number propagates to C++ via `src/common/ver.h.in` → `${BUILD}/ver.h` (`VER_MAJOR/MINOR/PATCH`) and into the tarball filename.

## Runtime architecture

One long-running daemon (`imagerd`) plus a handful of CGI helpers and dev-only daemons, all started by `payload/sd/wifi/config.sh` on boot:

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
- **Live555 runs in-process inside `imagerd`** via `rtsp_worker.cpp`. `H264QueueSource`, `PCMUQueueSource`, and `AACQueueSource` (`*_queue_subsession.h`) pull from `FrameQueue<VideoFrame>` / `FrameQueue<AudioFrame>` populated by the capture loops; exactly one of the two audio sources is wired in at start() based on `audio.codec`. Producer wakeups go through `TaskScheduler::triggerEvent()` (the documented thread-safe primitive in live555). There are no FIFOs anywhere — the v0.4.x `/tmp/video.h264` / `/tmp/audio.ulaw` design is gone.
- **Idle-vs-active state**: `rtsp_worker::video_active()` / `audio_active()` reflect whether live555 has a live source for at least one client. Capture loops always run (so the encoder buffer pool drains) but only push into the queue when `*_active()` is true. On every fresh client attach, the source's constructor flips `idr_requested`; the producer reads-and-clears that, calls `rts_av_request_h264_key_frame()`, drops P-frames until the next IDR, and clears the queue inside `consume_idr_request()` so a stale P-frame can't slip in ahead of the keyframe.
- **Snapshots** flow `lighttpd → /cgi-bin/snapshot wrapper → snapshot binary (CGI) → /tmp/snapshot.sock → snapshot_server_thread inside imagerd → MJPEG callback`. The snapshot path is gated on an MJPEG channel that's bound to the same ISP as the H.264 channel.
- **ONVIF** is split between `onvif_simple_server` (CGI under lighttpd, one shell-wrapper per service in `/tmp/onvif/`, sources its config from `onvif_conf_gen`) and `wsd_simple_server` (separate UDP/3702 multicast daemon for WS-Discovery). Neither is part of `imagerd`. See "ONVIF" section below.

## Threading & shutdown invariants in `imagerd`

`imagerd` runs ~5 threads (main video capture, audio capture, IR control, auto-tune, snapshot UDS server, live555 task scheduler). The shutdown rules are non-obvious and have been the source of past bugs (see v0.4.1 / v0.5.0 changelogs in `README.md`):

- **`g_exit` (atomic bool) is the cooperative shutdown flag.** Every thread loop checks it. Long sleeps must be interruptible — see how `day_night_ctrl`'s 15s sensor warmup is broken into short polls; `auto_tune_ctrl` follows the same pattern.
- **Threads are joined, not detached, when they reference resources owned by `main`** (ISP/H264/MJPEG/audio channels, snapshot socket). The teardown order in `kill_stream()` is: stop ISP-touching helper threads (auto-tune, IR control) → set `g_audio_enabled=false` and join audio capture → stop the live555 RTSP worker → tear down audio AV channels → join snapshot thread → tear down video AV channels → `rts_av_release()`. Don't reorder without re-checking dependencies — the live555 worker holds queue/source pointers, the audio thread reaches into the encoder, etc.
- **`g_isp_mutex` (declared in `isp_utils.h`, defined in `isp_utils.cpp`) is the single shared mutex protecting `rts_av_*_isp_ctrl`, the AE statistics path used by `auto_tune_ctrl`, and any other ISP read/write.** Every ISP access from any thread must go through `change_isp_setting()` / `get_isp_setting()` / `read_ae_stats()`. Do **not** declare a `static std::mutex` in a header — that creates one mutex per translation unit and the threads will not synchronize.
- **All signal handlers must use `sigaction()` and have signature `void(int)`.** `signal()` and bare `void()` handlers compile but invoke UB on MIPS calling conventions. `SIGPIPE` is `SIG_IGN`'d process-wide.
- **Live555 sources clear their back-reference on destruction.** `H264QueueSource` / `PCMUQueueSource` / `AACQueueSource` take a `**` pointer to the worker's cached source pointer and `nullptr` it in their destructors so the worker's trigger callback can never hit a freed pointer. Same pattern if you add another subsession.

## Configuration (`settings.json`)

All runtime config is `settings.json` (FAT32-friendly, parsed with `nlohmann::json` in `external/nlohmann_json/json.hpp`). Source-of-truth schema lives in `payload/common/settings.json` (shared between SD and on-flash deployments); on the camera it ends up at `/var/tmp/sd/settings.json` and is *also* writable by the web UI via `isp_ctrl SAVE_SETTINGS`. Sections: `audio`, `ir_control`, `isp`, `encoder`, `auto_tune`, `rtsp`, `onvif`.

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

`src/imagerd/cpld.h` is a header-only wrapper over `/dev/cpld_periph` (the kernel module shipped in `payload/sd/Yi/ko/cpld_periph.ko`). Despite the name there is no real CPLD — the kernel module is a thin GPIO multiplexer wired per-board by `gpio=`/`hw=` modprobe parameters. Controls IR-cut, IR LED, audio enable, status LEDs. Full reverse-engineering of the driver is in `docs/cpld.md`; the header here mirrors its ioctl table.

The kernel ioctl handler only inspects the high byte (== `CPLD_IOC_BASE = 0x70`) and the low byte (the op) of the cmd word — everything else is ignored. Use `cpld_op(op)` for no-arg ioctls, `cpld_op_send_int(op, v)` for the single op that does `copy_from_user` (`CPLD_IR_LED_SET`, 0x13), and `cpld_op_read_int(op)` for the read ops (0x0E / 0x12 / 0x14 / 0x17).

The IR LED has two separate cmds: `CPLD_IRCUT_PULSE_A/B` (0x15/0x16) fires the IR-cut filter solenoid for 200 ms (which physical direction depends on the modprobe wiring), and `CPLD_IR_LED_SET` (0x13) writes a 0–100 PWM duty for the IR illuminator. `day_night_ctrl` sets both: gate off + duty=0 in day mode; gate on + duty=`ir_led_pwm_duty` in night mode. The duty is configurable per-deployment via `settings.json`'s `ir_control.ir_led_pwm_duty`.

Read-side helpers worth knowing about: `read_ircut_state()` returns 0..3 (cathode<<1 | anode bits) — useful to verify a 200 ms pulse actually moved the filter rather than just trusting the delay; `read_factory_default_button()` reads the reset-pinhole GPIO; `set_green_blink(true)`/`set_red_blink(true)` hand the status LED to a kernel-side 1 Hz timer that keeps blinking even if `imagerd` hangs.

Diagnostic: `cpld_info` (shipped at `/var/tmp/sd/cpld_info`) decodes `/sys/module/cpld_periph/parameters/{gpio,hw}` and prints which GPIO each port (LED_GREEN, IR_LED, AUDIO_ENABLE, IRCUT, …) is wired to. Use this when porting to a new Yi/Victure-class board to confirm the modprobe wiring matches what you expect — without it you'd be guessing whether `set_ir_cut(true)` actually drives the right physical direction.

## Day/night detection modes

`day_night_ctrl` supports four detection modes via `ir_control.detection_mode`. `adc_zero` and `adc_raw_bool` mirror two of stock `rmm`'s hw-variant paths (`g_factory_data_ptr[3] = '4'` / `'5'`); `adc_auto` is our addition and the default. Earlier versions had separate `adc_single` and `adc_hysteresis` modes — they were dropped in favor of letting `adc_auto` learn polarity automatically.

| Mode | Source | Use when |
|------|--------|----------|
| `adc_auto` **(default)** | ADC ± 100 hyst, with runtime cross-check against `rts_av_get_isp_daynight_statis()` | Most boards — auto-learns polarity. |
| `sdk_statis` | `rts_av_get_isp_daynight_statis()` | No external light sensor; SDK AE is well-tuned. |
| `adc_zero` | Night iff ADC reads 0 | Sensor that grounds in darkness. |
| `adc_raw_bool` | Night iff ADC > 0 | Sensor wired as digital flag. |

All modes pass through the same 3-sample debounce in `check_light_level()`, so a single glitch can't flip the IR-cut. The EMA smoothing (`ema_alpha=0.75`) is only applied to `adc_auto`; the SDK and boolean modes are deterministic enough that smoothing would just add lag.

Polarity is **not** a settings.json knob. The three user-tunable keys are `detection_mode`, `adc_cutoff`, and `ir_led_pwm_duty` — non-AUTO modes (the two boolean ADC variants and `sdk_statis`) don't have a polarity concept. For analog ADC sensors, use `adc_auto` and let it learn.

**`adc_auto` polarity learning** runs *on top of* the normal ADC_HYSTERESIS sampling: every cycle we also call `rts_av_get_isp_daynight_statis()` and compare its 0/1 result with our own ADC-based decision. If they disagree for `flip_threshold` (default 150 ≈ 5 min at 2 s cadence) *consecutive* samples, we flip the in-memory `invert` bit, log a warning, and write `daynight_polarity.state` (single line, `"normal"` or `"inverted"`) into the CWD next to `settings.json`. On the next boot the cached value is read back and applied. The cache is a separate file so it survives `isp_ctrl` rewrites of `settings.json`. To force re-learning, delete the state file. The 5-minute hold-off is what prevents short-lived disagreements (clouds passing, scene changes during AE re-convergence) from triggering false flips — if you want it more or less reactive, change `flip_threshold` in `day_night_ctrl.cpp`.

## Boot sequence (camera-side)

`payload/sd/wifi/config.sh` runs as the SD-card hijack entry point. In order: backs up flash on first run → kills the stock cloud agents (`watchdog`, `cloud`, `p2p_tnp`, `mp4record`, `oss`, `rmm`, …) → parses `network.ini`, regenerates `wifi/wpa_supplicant.conf`, runs `wpa_supplicant` → `udhcpc` (or static IP) → if `dev-tools/` is in the package: mount devpts (for SSH PTY allocation), start `telnetd` on :23, `uftpd`, `dropbear` on :22 (host keys auto-generated to `/var/tmp/sd/dev-tools/etc/dropbear/` on first boot) → **conditional 30s PTZ calibration wait** (only if `/dev/ssp` exists AND `ptz_tool probe` succeeds — non-PTZ cameras skip the wait entirely, saving 30s per boot) → **synchronous `sntp pool.ntp.org`** so the wall clock is correct before any timestamp-emitting daemon starts → lighttpd on :80 → `imagerd` (under a respawn supervisor in production builds, single-shot in dev-tools mode so a crash doesn't loop) → `onvif_conf_gen` regenerates `/var/tmp/sd/onvif/onvif.conf` from `settings.json`, dispatcher scripts written to `/tmp/onvif/`, `wsd_simple_server` started supervised.

Logs go to `/var/tmp/sd/boot.log` (boot script output) and `/var/log/rtsp_streamer.log` (rotating, 256 KB × 3, configured in `payload/common/zlog.conf`). Categories: `imagerd`, `isp_adj` (isp_tool), `onvif` (onvif_simple_server + wsd_simple_server share the shim in `external/onvif_simple_server/log.c`).

Network configuration lives in `/var/tmp/sd/network.ini` (sections `[wifi]` for ssid/psk and `[network]` for optional static ip/netmask/gateway). `config.sh` parses it via a tiny awk INI helper, regenerates `wifi/wpa_supplicant.conf` from those values on every boot (the file is marked DO-NOT-EDIT), and applies static IP if all three fields are set, else falls back to DHCP. `wpa_supplicant_sample.conf` and the `Factory/` placement are gone — `network.ini` is the only file the user touches.

## On-flash boot (no SD card)

> ⚠️ **EXPERIMENTAL — DEVELOPMENT USE ONLY.** The on-flash deployment path (`package_home_bin`, `flash_home_bin.sh`, the entire `payload/home/` overlay) is in an experimental phase and is **not meant to be used outside of development purposes**. Writing to `mtdblock4` is recoverable in principle (stock `rcS` falls through to `/backup/init.sh` if `/home/app/init.sh` is broken), but a bad image still requires a working dev-tools shell or UART recovery — neither is something an end user should have to do. Stick with the SD-card hijack for any production / non-developer deployment. Only use the flash path if you understand the recovery flow described below and accept the risk of bricking the camera's userspace.

The SD-card hijack is the default and the safer path. There's also an alternative: bake the whole stack into a flashable squashfs and write it to `mtdblock4` ("userdata", 3 MiB, mounted at `/home`). Once flashed, the camera boots into the streamer with no SD card inserted.

`ninja package_home_bin` produces `home.bin` in the build dir. Layout inside:

```
/home/homever                        version string read by stock OTA
/home/app/init.sh                    on-flash boot script (replaces stock)
/home/app/imagerd, lighttpd, ...     stripped binaries
/home/app/locallib/                  live555, pcre2, mod_cgi, libstdc++,
                                     libatomic, plus rtscore libs that
                                     stock /home/rt/lib doesn't ship
                                     (librtsio, librtsosd, librtscrypt,
                                     librtsmp3, libopus, libsbc,
                                     libopencore-amrnb)
/home/rt/ko/                         stock kernel modules (rlx_*, rts_cam*,
                                     rts_camera_*, rtstream, rtsx-icr) +
                                     Yi-specific (cpld_periph, ssp_ms41909,
                                     pid_list)
/home/rt/lib/                        stock Realtek runtime libs verbatim
                                     (librtstream.so.2, librtscamkit.so.1,
                                     libh1encoder.so.1, libasound.so.2,
                                     etc., with full SONAME symlink chains)
/home/lib/{load,sc1245,sc2230,...}/  ISP firmware per sensor — auto-picked
                                     by rts_camera_soc kernel module
```

The on-flash `init.sh` is the equivalent of `payload/sd/wifi/config.sh` minus the SD-card-mount and stock-daemon-killing steps, plus the kernel-module insmod sequence and ALSA mixer / GPIO9 audio-enable bits that the stock `/etc/init.d/rcS` does NOT do (only stock `/home/app/init.sh` does, which we're replacing). zlog config-path resolution is via the fallback chain `$ZLOG_CONF` → `/var/tmp/sd/zlog.conf` → `/home/app/zlog.conf` in the C++, so no `/var/tmp/sd` symlink is needed for it; the SD-card mount at `/var/tmp/sd` is for runtime config sync (network.ini, settings.json) only.

**Two-stage ISP firmware probe** (the trickiest piece — verified by decompiling stock `rmm`). The kernel module exposes `/sys/devices/platform/rts_soc_camera/loadfw` for firmware loading, but the sysfs interface accepts *two* kinds of input:

  1. A path to an ISP firmware blob — loads that blob into the ISP coprocessor.
  2. A single ASCII digit (`"1"` or `"2"`) — a *command code* the kernel module interprets internally. `"1"` triggers the initial probe / power-up of the sensor bus; `"2"` triggers the i²c detection round that fills in `/sys/.../sensor` with the detected sensor name (e.g. `SC2230`).

Just writing a firmware path does NOT trigger the i²c probe — `/sys/.../sensor` will never appear. The encoder still comes up but runs on the wrong tuning data and emits malformed H.264 with no SPS/PPS in the bitstream (clients see `Video: h264, none` with no resolution and live555's H264QueueSubsession::getAuxSDPLine() times out producing an empty `a=fmtp:` line). The symptom is hard to diagnose because the boot looks healthy: `Found ISP 1.011 device`, `rts3903-isp initialized`, frames flow, just nothing decodes them.

Stock `rmm` does it correctly: write `"1"` to `loadfw`, sleep 50ms, write `"2"`, poll `/sys/.../sensor` for the detected sensor name, then write the matched sensor fw path. `init.sh` replicates this. The sensor names map to fws as: `SC2235→sc2235/isp.fw`, `SC2232→sc2232/isp.fw`, `SC1245→sc1245/isp.fw`, `SC2390→sc2390/isp.fw`, and `SC2230` (which has three sub-variants) defaults to `sc2230/isp_jin.fw` to match stock rmm.

`/home/lib/load/isp.fw` is a separate generic Realtek bootstrap fw (identifiable by its `realtek_` vendor signature vs. the sensor fws' `MacroVideo_` or `SmartSens_` sigs). It's *not* needed for the probe — the magic `"1"`/`"2"` writes drive that. The `load/` fw is what the kernel falls back to internally when the magic codes are written, so it has to be present at the path the kernel expects (we just ship the whole `lib_isp/` tree).

`librtsisp.so` (Realtek's userspace ISP library, vendored from the firmware dump) has a hardcoded `/sys/devices/platform/rts_soc_camera.0/loadfw` path baked in — note the `.0` suffix. The kernel on these boards exposes the device as `rts_soc_camera` (no `.0`), so the lib's `rts_load_fw()` would `open()` ENOENT. `tools/build/patch_librtsisp.sh` patches the binary in place, replacing `.0` with `//` (Linux collapses double-slashes, so the path becomes equivalent to no-suffix). The patch is two bytes, idempotent, and committed alongside the patched binary in `external/stock_blobs/lib_realtek/`. This was needed because we kept (and ship) the version the firmware dump came with — if the .so is ever re-extracted, the patch must be re-applied.

Stock pieces (kernel modules, runtime libs, ISP firmwares) are vendored under `external/stock_blobs/{ko,lib_realtek,lib_isp}/` — extracted once from a firmware dump and committed. They're paired to the kernel uImage in `mtdblock2`, so they only need refreshing if the kernel partition is also rewritten.

**Flash recipe** (from a telnet root shell on the camera; works because `/etc/passwd` has `root::0:0` and stock starts `telnetd`):

```sh
# Save a known-good baseline first — write it back via mtd_img if anything
# goes wrong. mtdblock4 is dumped, not the whole flash.
dd if=/dev/mtdblock4 of=/tmp/home_orig.bin bs=64k

# Push the new home.bin via uftpd (or any other transport).
killall watch_process watchdog cloud p2p_tnp mp4record oss rmm dispatch
umount -l /home
/backup/mtd_img 4 /tmp/home.bin
sync; reboot
```

`mtd_img` is the stock flash-write helper at `/backup/mtd_img` (an ELF that links `libmtd.so` and does `mtd_get_dev_info` → `mtd_erase` → `mtd_write_img`). Stock OTA uses it the same way (see `/backup/script/update.sh`); it never touches mtd1/mtd2/mtd3, only mtd4. So the on-flash flow stays inside the partition stock OTA already considers writable.

**Recovery if it bricks the userspace** (e.g. broken `init.sh` so nothing comes up): the stock `/etc/init.d/rcS` falls through to `/backup/init.sh` if `/home/app/init.sh` doesn't exist. So if `home.bin` corrupts, the recovery init in `mtdblock5` (jffs2, never written by us) takes over and the device is reachable enough to re-flash. Worse failures (kernel panic, U-Boot corruption) need a UART recovery — `console=ttyS1@57600` is the active console.

**`tools/flash_home_bin.sh root@<ip>`** is the one-shot reflash script: uploads `home.bin` via uftpd, kills streaming daemons over SSH (or telnet fallback), `umount -l /home`, `mtd_img 4`, reboot. It auto-discovers `home.bin` in the build dirs. Pass an explicit binary as `argv[2]` to flash anything else (e.g. the original `mtdblock4.bin` from the firmware dump, to roll back to stock). The telnet fallback path waits 180s before closing the connection — `mtd_img` on 3 MiB SPI NOR takes 30–60s and the original 2s wait killed it mid-write, leaving the partition half-flashed.

The build target strips ELFs aggressively (`rsdk-linux-strip --strip-unneeded` on every `*.so*` and every `+x` ELF) — this is the difference between fitting in 3 MiB and not. Don't disable the strip step. `tools/build/check_home_bin_size.sh` gates the build on the 3 MiB cap.

**Three-layer config model** for files that are user-tunable per deployment (currently `network.ini` and `settings.json`):

```
/home/app/<file>      — read-only baked-in default (mtd4 squashfs)
/backup/config/<file> — runtime, read/write (mtd5 jffs2)
/var/tmp/sd/<file>    — provisioning input from SD card (vfat, optional)
```

At every boot, `init.sh`'s `sync_config` does for each file:
1. If `/var/tmp/sd/<file>` exists and `cmp -s` says it differs from `/backup/config/<file>` → SD wins, copy SD → `/backup/config` (provisioning intent).
2. Else if `/backup/config/<file>` doesn't exist → seed from `/home/app/<file>` (first boot, no prior config).
3. The "live" path the rest of the script uses is `/backup/config/<file>`.

Net effect: SD card *in* = source of truth (any change you make on a host computer wins on next reboot); SD card *out* = persistent storage owns it (runtime modifications via the web UI / `isp_ctrl SAVE_SETTINGS` persist across reboots). Pulling the SD card after first-boot provisioning is the normal mode.

**zlog config path** is no longer hardcoded. `imagerd.cpp` and `onvif_simple_server/log.c` both try `$ZLOG_CONF` env var → `/var/tmp/sd/zlog.conf` → `/home/app/zlog.conf` in order. So the same binary works for SD-card hijack mode and on-flash mode without per-mode patches.

**Dev-tools** (`-DBUILD_DEV_TOOLS=ON`) are wired the same way as the SD-card target. With that flag set, `package_home_bin` includes `dropbear` (SSH :22), `uftpd` (FTP :21), `dropbearkey`, and `libcrypt.so.0` under `/home/app/dev-tools/{sbin,bin,lib}`. The on-flash `init.sh` gates startup on `[ -d /home/app/dev-tools ]`, so the same script works for both production and dev images. Cost: ~205 KB compressed (home.bin grows from 2.0 MB → 2.2 MB).

Telnet on :23 is started two ways: stock `/etc/init.d/rcS` invokes `/bin/telnetd` from the rootfs (mtd3) before chaining to `init.sh`, and `init.sh` re-launches it defensively (some Yi `rcS` variants skip it). The second `telnetd` exits immediately if port 23 is already bound — harmless. Dropbear host keys persist in `/backup/dropbear/` (jffs2 mtd5, survives reboots) and only ED25519 is generated (~instant; RSA is skipped because it takes ~30s on MIPS-I). uftpd serves `/` with `-o writable` — filesystem permissions gate writes naturally so writes to `/home` (squashfs) fail and writes to `/tmp`, `/var/run`, `/backup`, `/var/tmp/sd` (when an SD card is mounted) succeed.

Dropbear's binary has DT_RPATH=`/var/tmp/sd/dev-tools/lib` (set in `external/dev-tools/CMakeLists.txt` for the SD-card layout). On flash with no SD card, that path doesn't exist; the loader falls through to LD_LIBRARY_PATH, which `init.sh` sets to include `/home/app/dev-tools/lib` for exactly this reason. Don't drop that path from LD_LIBRARY_PATH or dropbear will fail to find libcrypt when no SD card is in.

## Audio codecs

Two codecs are supported, selected by `settings.json` → `audio.codec`:

| Codec | Sample rate | RTP | live555 sink | SDP fmtp |
|---|---|---|---|---|
| `ulaw` | 8 kHz mono | PT 0 (PCMU static) | `SimpleRTPSink "PCMU"` | none |
| `aac` (default) | 48 kHz mono | dynamic PT | `MPEG4GenericRTPSink "AAC-hbr"` | `config=1188` (AudioSpecificConfig) |

The SDK encoder is created with `rts_av_create_audio_encode_chn(codec_id, bitrate)`; the codec_id and capture rate are derived from the JSON config in `imagerd.cpp::start_stream`. Per-frame duration is computed codec-specifically and carried on `AudioFrame.duration_us` so the subsessions don't have to embed codec-specific timing.

**AAC framing.** The SDK emits ADTS-wrapped AAC (every frame starts with `FF F9 …`). `MPEG4GenericRTPSink` wants raw access units, so the audio capture thread strips the 7-byte ADTS header before pushing onto the queue. `AACQueueSubsession` computes the SDP `config=` AudioSpecificConfig from the configured sample rate + channels (2-byte lookup table for the standard MPEG-4 frequency index).

**AAC rate restriction.** Empirically (probe binary, Phase 0 investigation), the RTS3903N SDK accepts AAC at 16 kHz and 48 kHz but rejects 32 kHz and 44.1 kHz at `rts_av_bind` time with `EAGAIN`. We hard-wire 48 kHz. If you need 16 kHz, also update the AAC branch in `imagerd.cpp::start_stream` and the AAC values in `external/onvif_simple_server/media_service.c::media_get_audio_encoder_configuration_options`.

**Opus.** The SDK's `rts_audio_codec_check_encode_id(RTS_AUDIO_TYPE_ID_OPUS)` returns `EINVAL` despite `libopus.so` being shipped — the encoder isn't wired into the SDK's dispatch table. Adding Opus would require a userspace encoder bypassing the SDK audio chain entirely (capture raw PCM via the SDK PCM codec or ALSA, feed to libopus). Not currently supported.

Capture gain is applied through ALSA mixer controls `Real Amic`, `Front Amic`, `ADC Compensate` — do not assume a single mixer element exists.

## ONVIF

Profile S — auto-discovery + GetStreamUri + GetSnapshotUri. Two pieces:

- **`onvif_simple_server`** (vendored at `external/onvif_simple_server/`, GPLv3, see `PATCHES.md` for local diffs from upstream) is a CGI program — *not* a daemon. Lighttpd's alias maps `/onvif/<service>` to `/tmp/onvif/<service>`, where `config.sh` writes a small dispatcher shell script per service (`device_service`, `media_service`, `media2_service`, `ptz_service`, `events_service`, `deviceio_service`). Each script `cd /var/tmp/sd && exec onvif_simple_server -c onvif.conf <service>` so the binary's relative-path lookups for `*_service_files/*.xml` resolve.
- **`wsd_simple_server`** is a separate daemon listening on UDP/3702 multicast for WS-Discovery probes; it advertises the SOAP XAddr URL constructed from the camera's runtime IP + the `onvif.port` config (default 80, since lighttpd is the front).
- **`onvif_conf_gen`** (our standalone code at `src/onvif_conf_gen/`) is a one-shot C++ tool run at boot. Reads `settings.json` and writes `/var/tmp/sd/onvif/onvif.conf` (INI format) — keeps the JSON as the single source of truth for device identity / port / RTSP URL.

Local patches against upstream onvif_simple_server (`external/onvif_simple_server/PATCHES.md`):
1. JSON-config support (`process_json_conf_file` and friends) gated behind `HAVE_JSON_CONFIG` — never defined, so we don't link `libjson-c`.
2. `<zlib.h>` include made conditional on `USE_ZLIB` so cross-compile doesn't fail when zlib's missing.
3. `log.c` replaced wholesale with a zlog adapter that keeps the upstream `log.h` interface but routes everything through our `zlog_get_category("onvif")`.

`mbedtls` (submodule under `external/`, pinned v3.6.6, minimal config in `external/onvif_simple_server/extras/mbedtls_config.h` — only SHA-1 + base64 enabled) provides the WS-Security digest crypto. Built static, ~100 KB compiled. `BUILD_SHARED_LIBS=OFF` is forced locally so the 3rdparty everest/p256m libs don't get pulled in as `.so` dependencies.

## Dev-tools (optional, `-DBUILD_DEV_TOOLS=ON`)

`external/dev-tools/` contains three submodules built via `ExternalProject_Add` through a shared `dev_tools_autotools_project()` helper in `external/dev-tools/CMakeLists.txt`:

- **`uftpd`** (with `libite` + `libuev` deps under `external/dev-tools/`) — read/write FTP daemon at port 21, used by `tools/dev_update.sh` to push fresh binaries onto the camera without re-flashing.
- **`dropbear`** — SSH server at port 22. Cross-compile forces `-DUSE_DEV_PTMX=1` because dropbear's configure-time `/dev/ptmx` test is hardcoded off when cross-compiling and would otherwise fall back to legacy BSD-pty probing that doesn't exist on this kernel. Host keys persist in `/var/tmp/sd/dev-tools/etc/dropbear/`. Linked with rpath pointing at `/var/tmp/sd/dev-tools/lib/` so it finds the bundled `libcrypt.so.0`.

`config.sh` gates `telnetd` on the presence of `dev-tools/` too — production builds don't have telnet exposed. Telnet plus uftpd are deliberately the *only* services that survive `dev_update.sh`'s "kill everything" step, since the script needs both to do its work.

## Time sync

The hardware has no RTC, the stock busybox lacks `ntpd`/`ntpdate`/`rdate`, and the wget build is too stripped to fetch the HTTP `Date:` header. Fix: ship our own tiny `sntp` binary (`src/sntp/sntp.cpp`, ~60 lines C). One UDP/123 round-trip, `settimeofday()`, exit. `config.sh` runs it **synchronously before lighttpd / imagerd / wsd_simple_server** so anything that captures timestamps (logs, ONVIF SOAP responses, RTSP session creation) starts off with a sane wall clock; if the sync fails, boot continues with an unsynced clock anchored at the kernel epoch (~1970).

**RTP timing uses wall-clock `gettimeofday()` (via `imagerd::wallclock_us()`).** This is required because live555's RTCP Sender Report generation (`RTCP.cpp::addSR`) builds the SR's NTP/RTP pair by sampling `gettimeofday()` and passing that timeval into `fSink->convertToRTPTimestamp()`. The conversion is `fTimestampBase + freq × tv.tv_sec + …` with no anchoring subtraction — so the only way the SR's claimed RTP timestamp can match the actual RTP packets on the wire is if our per-frame `fPresentationTime` is also wall-clock. Using `CLOCK_MONOTONIC` for frames while live555 hardcodes `gettimeofday()` for the SR creates a mapping that's off by `~now - boot` seconds × freq; VLC uses the SR to render elapsed time and renders huge jumps.

A previous version of this codebase used `CLOCK_MONOTONIC` to immunize against mid-stream SNTP jumps. That risk is gone now that `sntp` runs synchronously *before* imagerd — the wall clock is stable for the lifetime of the RTSP server. If SNTP fails, the clock stays at the kernel epoch and RTP/SR remain mutually consistent (just shifted), so clients still render elapsed time correctly; only the absolute wall-clock display will be wrong.

**Audio PTS is sample-counter-anchored.** The audio thread anchors to `wallclock_us()` at the moment a client attaches and increments by `samples_in_frame * 1e6 / sample_rate` per frame. RTP timestamps therefore advance by exactly 1024 ticks per AAC-LC frame (or `frame_size` for ULAW), independent of how jittery the thread's polling cadence is. Anchor is reset on client disconnect so the next attach starts from a fresh wall clock. Video PTS is the wall-clock at push time — frame interval isn't sample-perfect (encoder + capture jitter), but live555 paces from the source's `fPresentationTime` delta, which is fine.

## Third-party submodules

`external/zlog`, `external/pcre2`, `external/lighttpd1.4`, `external/mbedtls` are git submodules — `git submodule update --init --recursive` after a fresh clone. `external/live555` and `external/rtscore` are vendored sources (Realtek SDK is not redistributable, so `rtscore/` contains only the headers + prebuilt `.so`s extracted from the toolchain). PCRE2 is built shared (`BUILD_SHARED_LIBS ON`) because lighttpd's `mod_cgi` dlopens it. The dev-tools submodules under `external/dev-tools/{uftpd,libite,libuev,dropbear}` only matter when `BUILD_DEV_TOOLS=ON`.

## When editing common areas

- **Adding a new daemon/CGI binary**: add `add_subdirectory(src/<name>)` in the top-level `CMakeLists.txt`, add the target to `SD_TARGETS`, and add the binary path to `PKG_BINARIES` so it lands in the tarball. Fresh-source files for tarball-side data (XML templates, configs) go in a separate `copy_directory` step in the `package_${PROJECT_NAME}` target.
- **Adding a new shared library dependency**: append it to `PKG_EXTRA_LIBS` in the root `CMakeLists.txt`. Realtek libs are versioned as `.so.0` / `.so.1` on the camera even though the toolchain ships them unversioned — add a rename pair to `PKG_LIB_RENAMES` if needed.
- **Logging**: use the matching zlog category — `imagerd` (the daemon), `isp_adj` (isp_tool), `onvif` (onvif_simple_server + wsd_simple_server). Production rules in `zlog.conf` filter to INFO+, so `zlog_debug(...)` won't appear on-camera; that's intentional (avoid frame-stat / ADC-reading noise on the tmpfs-backed `/var/log`). Add a new format + rule pair to `zlog.conf` if you introduce a new category.
- **Pushing iteration to a dev camera**: `tools/dev_update.sh root@CAMERA_IP`. (See also `tools/build/` for CMake-invoked helpers and `tools/debug/` for one-off socat-based file pulls.) Tarballs the build, uploads via uftpd, ssh'es in (or telnet if SSH is rejected) to kill non-essential daemons, extracts, reboots. Skips `settings.json`, `network.ini`, and `boot.log` so user-customizable state is preserved across pushes.
