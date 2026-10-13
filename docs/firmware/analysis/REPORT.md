# Yi Camera Firmware — Reverse-Engineering Report

**Target:** Yi pan/tilt Wi-Fi home camera, internal model `r10m`, application firmware **`7.1.00.25A_202002271051`** (built 2020-02-27). Realtek RTS3903-family SoC (RLX/Lexra MIPS, 32-bit little-endian), Linux 3.10.27, Realtek IPCam SDK rootfs v2.3.2.

**Basis:** static analysis of the user's own 8 MiB SPI-NOR dump. No device was run. Findings are either **observed** (read from decompiled code, disassembly, or strings — cited as `function @ address` or by string) or **inferred** (labelled). Device-specific secrets (Wi-Fi PSK, P2P UID/key, bind token, serial) are described by role only and never reproduced.

**Method:** REA could not open these MIPS ELFs on this Windows host (its Ghidra lane is PE-only; Hopper/IDA reject MIPS), so Ghidra 12.1.4 was driven headless with a custom exporter that re-parses `PT_DYNAMIC` on the sstripped binaries to recover symbols and rename PLT stubs. **55 binaries** were decompiled and reorganized into a navigable codebase at `../Decompiled source/` (`apps/`, `sdk/`, `kernel_modules/`, `tools/`); each module is split into per-subsystem `.c` files with a prototype header and a `reference/` folder (`callgraph.tsv`, `strings.tsv`, `dynsym.tsv`, `renames.tsv`). A second pass recovered **860** internal function names from `__func__`/log-string leaks.

**Companion documents (full detail):**
- `analysis/notes/00_OVERVIEW.md` — orientation + method/caveats
- `analysis/notes/init_path.md` — boot and daemon startup
- `analysis/notes/cloud_protocol.md` — cloudAPI / oss / crypt_file / OTA
- `analysis/notes/ipc_p2p_media.md` — mqueue IPC, `/tmp/mmap.info`, P2P, rmm pipeline
- `analysis/notes/hardware_interfaces.md` — GPIO/motor/audio/SD/Wi-Fi/kernel peripherals
- `analysis/notes/realtek_sdk.md` — `librts*` API reference, ISP/encoder, device nodes
- `analysis/notes/realtek_sdk_deep_dive.md` — mechanism-level "how the SDK works" (separate deliverable)

> **Reading-the-exports caveat:** for the shared libraries (`librts*.so`, `oss`), the true Ghidra address = **dynsym value + 0x10000**, and some symbols were duplicated at the wrong (unrelocated) address. The kernel image `kernel/vmlinux.bin` has **no kallsyms** (only the 4694-entry module export table and strings).

---

## 1. Executive summary

This is a Realtek reference IPCam design ("RTS39xx", the `rts_soc_camera` platform) customized for Xiaoyi/Yi (build paths `customer/xiaoyi_2.3/...`). The camera boots a vendor U-Boot → LZMA Linux 3.10 → a BusyBox/uClibc userland, then runs a set of cooperating single-purpose daemons that talk over POSIX message queues around a shared-memory state block. Video/audio come from the Realtek media SDK (`librtstream` + ISP firmware on an on-chip 8051 + a Hantro H1 H.264 encoder); the cloud link is a thin shell-invoked HTTP client (`cloudAPI`); remote live view is a statically-linked CS2 "PPPP" P2P stack (`p2p_tnp`).

Headline security-relevant facts (all from the static image; expected for a 2020 build but worth noting):
- **OTA signature does not cover the firmware payload** — the RSA-signed header contains an md5 of the package that is parsed and then discarded; only a 24-byte version string is checked, and the flasher does no hashing. (Independently verified here.)
- **Bulk media/log uploads disable TLS peer verification**; the control-plane API is CA-pinned and HMAC-signed.
- **Live P2P video is almost entirely cleartext** — only two 16-byte blocks of each I-frame are AES-encrypted.
- **Unauthenticated root shell on the UART**; per-device secrets sit in cleartext in flash; an SD-card `Factory/` script runs as root at boot.

---

## 2. Hardware platform

| Block | Detail |
|---|---|
| SoC | Realtek RTS3903-family, RLX/Lexra MIPS32 LE, `RTS_SOC_HW_ID` |
| Flash | 8 MiB SPI-NOR via built-in `rts-quadspi` (dual-I/O), `m25p80`, 64 KiB erase |
| RAM | DDR (size not in dump) |
| Image sensor | SmartSens, auto-detected: SC1245 (720p) or SC2230/2232/2235 (1080p); control over DesignWare **I²C** (`rts3903-i2c`, SCCB) |
| ISP | On-SoC ISP driven by an **8051 microcontroller** running `isp.fw` (per-sensor blob) |
| Video encode | **Hantro/VeriSilicon H1 (hx280)** H.264 + separate hardware MJPEG + OSD2 overlay |
| Audio | Internal codec (`rlx-codec`) over I²S/ADMA; mic + speaker; AEC/NS; AAC encode (Realtek) / fdk-aac decode |
| PTZ | GPIO bit-bang stepper motors (pan 0–4096, tilt 0–1440 half-steps) **or** external Pelco-D head on UART |
| IR / IR-cut / LEDs / white light / reset button / amp | GPIO via `cpld_periph.ko` (despite the name, no CPLD) |
| Light sensor | CDS on SAR-ADC ch0 (optional; some models use ISP stats instead) |
| SD card | `rtsx-icr.ko` host → `mmcblk0`, FAT32/exFAT |
| Wi-Fi | **RTL8188FTV** USB (0BDA:F179), `8188fu.ko` v5.2.11.1 |
| Watchdog | `RTSX_WDT` → `/dev/watchdog` |
| Console | UART `ttyS1` @ 57600 8N1 |
| HW config store | Realtek `hconf` in flash mtd1, `/dev/hconf` |

Full pin/ioctl tables, the GPIO map decoded from the vd1 `gpio=` string, the stepper ABI, day/night logic, ALSA mixer numids, and the kernel built-in/platform-device list are in `hardware_interfaces.md`.

### Flash layout
| mtd | Name | Off | Size | Type | Mount |
|---|---|---|---|---|---|
| 1 | boot | 0x000000 | 192 K | U-Boot + hconf | — |
| 2 | kernel | 0x030000 | 1344 K | uImage (LZMA) | — |
| 3 | rootfs | 0x180000 | 1792 K | SquashFS (ro) | `/` |
| 4 | userdata | 0x340000 | 3072 K | SquashFS | `/home` (the app partition) |
| 5 | rootfs_backup | 0x640000 | 1664 K | JFFS2 (rw) | `/backup` (recovery/updater) |
| 6 | vd1 | 0x7e0000 | 64 K | product-info record | — |
| 7 | conf | 0x7f0000 | 64 K | runtime config | — |

---

## 3. Boot & initialization

(Full version with decompiled `load_cpld_ssp` and `dispatch` startup in `init_path.md`.)

1. **U-Boot** (hardcoded `bootaddr`, `bootdelay=0`, console `ttyS1`) → `bootm` the uImage at flash 0x30000. bootargs set `root=/dev/mtdblock3`, `rts_hconf.hconf_mtd_idx=1`, `rts-quadspi.channels=dual`, and the `mtdparts`. U-Boot also parks the PTZ motor GPIOs (`gpio_magic`, `gpio moto set fail`).
2. **Kernel** LZMA self-decompresses; built-in Realtek drivers include `rts-quadspi`, `hconf`, `RTSX_WDT`, DesignWare I²C, SAR-ADC, pinctrl; everything camera/audio/SD/Wi-Fi is a loadable module.
3. **`/etc/init.d/rcS`** mounts the pseudo-filesystems, static device nodes (`initdevnod`), starts `syslogd`/`ubusd`, then mounts `/backup` (jffs2) and `/home` (squashfs).
4. **Branch:** if `/backup/do_update` exists or `/home` fails to mount → **recovery** `/backup/init.sh` (SD or network update, then flash mtd4); otherwise **normal** `/home/app/init.sh`.
5. **`/home/app/init.sh`**: load audio → Wi-Fi (`/backup/8188fu.ko`) → SD → camera modules (`rts_cam*`, `rtstream`), `checkdisk` mounts SD, set speaker-amp GPIO9 polarity from vd1, play power-on sound, bring up `wlan0`/`eth0`, set ALSA mixer gains, apply any `/tmp/sd/home_r10m` update, start `log_server`, then **`load_cpld_ssp`** (reads vd1 hardware string, `insmod`s the GPIO peripheral + the matching motor driver), then the daemons, then `watchdog -t 2 -T 5`.
6. **`load_cpld_ssp`** (`FUN_00400c34`/`FUN_00400d2c`): mmaps `/dev/mtdblock6` (vd1), checks magics 0xAA/0xBB, extracts the 32-byte `hw_ver` and `gpio_pin` strings, always `insmod cpld_periph.ko hw=… gpio=…`, then selects `ssp_ms41909.ko` (8-pin motor) or `ssp_ms41909_union.ko` (4+1-pin) from the hardware string.
7. **Factory hook:** if `/tmp/sd/Factory/factory_test.sh` exists, `init.sh` runs `/tmp/sd/Factory/config.sh` as root and **exits before any daemon starts** — the built-in provisioning/service path and the easiest persistent-code route.
8. **`watch_process`** (rules in `wp_cmd`, 10 s interval) restarts dead daemons; **if `rmm` dies it reboots the device.**

---

## 4. Process architecture & IPC

(Full message-ID table (~120 IDs) and the complete `/tmp/mmap.info` offset map (~90 fields) are in `ipc_p2p_media.md`.)

### Daemons (`/home/app`)
| Daemon | Role |
|---|---|
| `dispatch` | Central controller and message router; owns device config, PTZ, LEDs, reset, Wi-Fi monitor |
| `cloud` | Cloud orchestrator; builds `cloudAPI` command lines |
| `p2p_tnp` | CS2 "PPPP" P2P server; live view / talkback / PTZ / playback |
| `rmm` | Realtek media manager; the SDK consumer — video/audio pipeline, motion, QR, prompts |
| `mp4record` / `recbackup` | Local MP4 recording / backup |
| `oss` | Alibaba/Tencent continuous HLS cloud recording uploader |
| `log_server` | Unix-socket log sink (`/tmp/logsock`) |
| `watch_process` | Supervisor |

### IPC transport
- **POSIX message queues** `/ipc_dispatch`, `/ipc_rmm`, `/ipc_cloud`, `/ipc_p2p`, `/ipc_rcd`, `/ipc_rtmp`, `/ipc_dispatch_worker`, each `mq_maxmsg=8`, `mq_msgsize=0x200`.
- **16-byte header** (`FUN_00404a28` and senders): `+0 u32 dst mask`, `+4 u32 src mask`, `+8 u16 msg_id`, `+0xa u16 aux`, `+0xc u32 len`, `+0x10 payload`.
- **Module bits:** dispatch 1, rmm 2, cloud 4, p2p 8, rcd 0x10, rtmp 0x20, dispatch_worker 0x40.
- **Star routing:** every daemon sends only to `/ipc_dispatch`; dispatch handles the message in its big switch, then re-fans the unchanged buffer to each queue whose `dst` bit is set. `dst` effectively means "dispatch + forward to X".
- **Shared state:** `/tmp/mmap.info` (0xAA0 bytes), mmapped by every daemon, zero-initialized by dispatch. Holds product info (UID/DID/keySec/hardware string), the API server URL, Wi-Fi/bind credentials, TNP DID/License/InitString, and all runtime settings/flags. The `dispatch_worker` thread persists it to flash on message `0xff`.

Message IDs are grouped by range: `0x00xx–0x01xx` dispatch state/config, `0x10xx` rmm commands & voice prompts, `0x2xxx` recording, `0x4xxx` PTZ/upgrade, `0x5xxx` SD, `0x6xxx` cloud, `0x7xxx` p2p.

---

## 5. Cloud communication

(Full opcode map, signing derivation, command lines, and OTA analysis in `cloud_protocol.md`.)

### 5.1 The client: `/backup/cloudAPI`
Every daemon shells out to `/backup/cloudAPI -c <opcode> -url … -uid … -keySec …`. It statically links **libcurl + CyaSSL (wolfSSL)** (no shared TLS deps). `main @ 0x40376c` parses long flags and dispatches per opcode. Opcode families: xiaoyi IPC API 136–145 + 192/193/304/306/311/411/413/414; dead legacy kuaipan.cn OAuth 1–11.

### 5.2 Request signing (xiaoyi API)
`FUN_0040965c`: `hmac = Base64(HMAC-SHA1(keySec, base))`, where `base` is a **fixed-order (not sorted)** query string such as `seq=9&uid=<uid>&timestamp=<t>&…`, and the URL becomes `<endpoint>?hmac=<hmac>&<base>`. The HMAC-SHA1 primitive is confirmed (SHA-1 IVs, ipad/opad). The `uid` field is itself AES-128-ECB-encrypted + hex (`FUN_00409468`); the login `password` is a second did/bindkey transform. The legacy kuaipan path uses sorted OAuth-1.0a and is dead.

### 5.3 TLS verification (mixed)
- **Control API (136–145, 306, 312, 414): verified** — `VERIFYPEER=1`, `VERIFYHOST=2`, `CAINFO=/backup/ca/ca.crt` (GlobalSign root + GoDaddy bundle — effectively pinned).
- **Bulk uploads (411 media PUT, 413 log POST, and the `oss` SDK transport): NOT verified** — `VERIFYPEER=0`/`VERIFYHOST=0`. A MITM can capture/redirect the uploaded blobs; only the payload AES protects them.

### 5.4 Onboarding flow (`cloud` `yi_proc` `FUN_00406fcc`)
`sync_time(136)` runs on its own thread. Main order: optional `reset(139)` → **`login(138, /v4/ipc/on_line)`** (which internally runs **`check_region(143)`** against the hardcoded `yicamera-router.mi-ae.com.sg` and saves the returned `api_server`) → **`bindkey(137, qr_bind)`** → **`deviceinfo(142)`** → **`tnp_on_line(141, /v4/tnp/on_line)`** which returns the P2P **DID/License/InitString** → **`report(192)`** → `echo 1 > /tmp/cloud_init_finish`. The bind key and Wi-Fi credentials are captured by rmm/dispatch (QR via the camera, or AP mode) and passed in via IPC/mmap.

### 5.5 Event media upload (`cloud` `yi_motion_push` `FUN_00405428`)
motion/babycry/abnormal-sound/voice-call → **`306 gen_presigned_url`** (server returns a presigned PUT `url` **and** a per-event `pwd`) → **`304 alert/event`** (metadata incl. both passwords posted back) → if `pwd` present, **`crypt_file -e`** (AES-128-ECB, key = first 16 bytes of the server password, no IV/MAC, zero-pad, 4-byte length header) → **`411`** libcurl PUT to the presigned URL (TLS not verified). The server issues every key, so encryption protects the object store, not against the vendor.

The separate **`oss`** daemon does continuous HLS recording: STS token via `312`, AES-128-CBC `.ts` segments with a **hardcoded IV `"aaaa…"`**, uploaded through the statically-linked Aliyun/Tencent OSS SDKs with `Authorization: OSS <ak>:HMAC-SHA1(sk, StringToSign)`.

### 5.6 OTA (and its integrity gap)
`cloud need_update(145)` → `needUpdate/downloadPath/md5Code` → `upgrade_firmware "<url>" "<md5>"` downloads `home_r10m`, md5-checks it against the (server-supplied) md5, then `update.sh` → `decpkg.sh` → `mtd_img 4 home.bin`.

Package format: `[0:24] version · [24:1048] 4×256-B RSA-PKCS1 blocks (2048-bit pubkey embedded in rsa_pub_dec) · [1048:EOF] tgz`. `rsa_pub_dec` recovers 980 bytes = `md5(32)+pwd(32)+dst_ver(24)+892 signed tgz bytes`.

**The RSA-signed md5 is extracted by `decpkg.sh` and never used** — the only RSA-gated check is `version == dst_ver`, and neither `update.sh` nor `mtd_img` hashes the tgz or `home.bin`. So the signature authenticates the version string and the first 892 bytes of the tarball; **everything from offset 1048 to EOF is unverified**, and the SD-card update path bypasses even the cloud `md5Code`. (Verified here from the scripts and from decompiling `mtd_img` `_ftext @ 004007c0`, which only erases + `mtd_write_img` with no check.)

---

## 6. Remote access: P2P (`p2p_tnp`)

(Full IOTYPE → IPC table and frame-header layout in `ipc_p2p_media.md` §3.)

- **SDK:** statically-linked **CS2 Network "PPPP" (TNP)** stack (symbols `PPPP_Initialize`, `PPPP_Listen_With_Key2`, `PPPP_Proto_Send_*`), **not** ThroughTek IOTC — though the app layer deliberately reuses TUTK `IOTYPE_*` command naming and a TUTK-style frame header.
- **Init:** credentials (DID/InitString) arrive from the cloud `tnp/on_line` response via IPC `0x7e`; dispatch stores them in mmap and `killall p2p_tnp`, and the restarted process calls `PPPP_Initialize(InitString)` then `PPPP_Listen(DID, key = mmap+0x295 /*keySec*/)`. (The cloud-provided License is stored but never referenced by this build — open question.)
- **Control auth:** per-session 0x28-byte IOCTRL header carrying `"<nonce>,<hash>"`, where `hash` = first 15 chars of `Base64(HMAC(pwd, "user=xiaoyiuser&nonce=<nonce>"))` (HMAC-SHA1 inferred), with a 100-entry nonce replay list. Command access is gated by the ability bitmap pushed from the cloud.
- **Channels:** ch0 control, ch1 audio + talkback, ch2/3 live I/P-frames, ch4/5 playback.
- **Media encryption:** only **two 16-byte blocks of each live I-frame** (payload +4 and +0x14) are AES-128-ECB-encrypted with key = the 15-byte session password + `'0'`. P-frames, audio, and the rest of each I-frame are cleartext.
- Commands map to the IPC bus: live start (0x2345), talkback (0x350), PTZ (0x4012), playback (0x31ae), settings (0x13xx), AP mode (0x1384).

---

## 7. Media pipeline (`rmm`) and the Realtek SDK — summary

(This is the summary; the API reference is `realtek_sdk.md` and the mechanism deep-dive is `realtek_sdk_deep_dive.md`.)

`rmm` is the sole Realtek-SDK consumer. Using `librtstream`'s channel model it builds, per sensor:
- **Main stream:** ISP → H.264 (+ MJPEG snapshot + OSD), 1080p or 720p @ 20 fps, GOP 40, H.264 **CVBR** (`bitrate_mode=8`), ~1.2 Mbps (1080p) / 800 kbps (720p).
- **Sub stream:** 640×360 @ 20 fps, 300 kbps.
- **Raw YUV stream:** feeds `zbar` QR decoding (Wi-Fi onboarding) and software motion detection.
- **Audio:** capture `hw:0,1` 16 kHz mono → AEC → resample → AAC 32 kbps; playback path for prompts and talkback (fdk-aac decode); abnormal-sound detection via an `ivaAbnormalSoundDetect` lib.
- **Frame hand-off:** encoded frames go to a POSIX shared-memory ring **`/fshare_frame_buf`** (flags: 0x400 main, 0x800 sub, 0x100 audio, 0x200 talkback, 0x2 keyframe). `p2p_tnp`, `mp4record`, and the RTSP sender all read from fshare — there is no `/dev/rtstream` streaming node.

### SDK at a glance
`librtstream` provides a **unit/channel/pipe/stream** graph: create ISP/H.264/MJPEG/OSD/audio channels, `bind` them, `enable`, then `poll`/`recv`/`put_buffer`. ISP stream N is `/dev/video(51+N)`. Under it: `librtsisp` (ISP control, DMA via `/dev/rtsmem`, firmware load), `librtsv4l2` (V4L2 wrapper), `libh1encoder` (Hantro H1 via `/dev/rtshx280enc`), `librtsjpeg`, `librtsosd2`, `librtsmd`/`librtsmask` (ISP motion/privacy), plus `librtsaec`/`libaacenc` (DSP). The ISP is driven two ways: standard V4L2 controls, and an **8051 MCU mailbox** (ioctl `0xc0107331` on `/dev/rtscamctrl`, ~120 command codes grouped by function). `isp.fw` is raw 8051 code selected per detected sensor through the `loadfw` sysfs attribute.

---

## 8. Consolidated security observations

Factual notes from the static image (relevant if assessing exposure; not an exploitation guide):

1. **Unauthenticated root on UART** — `root::` in `/etc/passwd`, `::askfirst:-/bin/sh` on `ttyS1`; no network login daemon ships.
2. **Per-device secrets in cleartext flash** — `conf`/`vd1` hold the Wi-Fi PSK, P2P UID/key, and bind token; a flash read clones device identity.
3. **SD `Factory/` root code-exec at boot** — a provisioning/jailbreak hook.
4. **OTA payload not bound to the signature** — see §5.6.
5. **Bulk uploads skip TLS verification** — §5.3; MITM can capture/redirect media and logs.
6. **Live P2P video effectively cleartext** — §6; only two I-frame blocks encrypted (ECB, key derived from the session password).
7. **Event media AES-128-ECB, server-held keys**; `oss` `.ts` uses a fixed IV. Weak modes, no integrity.
8. **Stale components** — OpenSSL 1.0.2j, BusyBox 1.20.2, uClibc 0.9.33, Linux 3.10.27 (all with known CVEs; typical for a 2020 build).
9. Leftover developer artifacts — commented-out `httpd` with a hardcoded basic-auth credential, debug gates (`/home/tmpfs/API_DEBUG`, `/tmp/sd/debug_msg`).

---

## 9. Open questions (carried forward)

- Whether TLS peer-verification is genuinely off on the 411/413/`oss` paths vs. simply a different option set at runtime (static says the options are set to 0/0).
- Exact AES key derivation for the `uid`/`password` transforms in `cloudAPI` (`FUN_00409468`/`FUN_00409538`) — tied to did/bindkey; not traced to constants.
- Practical feasibility of weaponizing the OTA gap (crafting a valid tar/gzip around the fixed 892-byte signed prefix).
- The cloud TNP **License** is fetched but unused by this P2P build.
- Linux GPIO number → SoC pin mapping (needs the pinctrl table from an un-symboled kernel).
- `/dev/hconf` ioctl/record format (needs an mtd1 dump).
- Who emits the baby-cry event `0x6002` — no sender in `rmm`.

---

*Generated from the static analysis under `../Decompiled source/` and the detailed notes under `notes/`.*
