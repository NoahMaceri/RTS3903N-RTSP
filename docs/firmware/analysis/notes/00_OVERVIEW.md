# Yi Camera firmware — reverse-engineering overview

Firmware `7.1.00.25A_202002271051`, model `r10m`, a Realtek RTS3903-family (RLX/Lexra MIPS, little-endian 32-bit) pan/tilt Wi-Fi camera on the Realtek IPCam SDK (rootfs v2.3.2) + Linux 3.10.27. This is static analysis of the user's own 8 MiB SPI-NOR dump. See `../firmware_layout/FIRMWARE.md` for the flash-layout / partition pass; this directory is the code pass.

## How this was produced

- **REA could not open the targets**: on this Windows host REA's Ghidra provider accepts PE only, and its Hopper/IDA lanes reject MIPS. So Ghidra 12.1.4 was driven directly (`analyzeHeadless`, forced `MIPS:LE:32:default`) with a custom export script (`scratchpad/ghidra_scripts/ExportAll.java`).
- **55 binaries** decompiled and reorganized into a navigable codebase at `../../Decompiled source/` (`apps/`, `sdk/`, `kernel_modules/`, `tools/`). Each module is a folder: a `<name>.h` of recovered prototypes, subsystem `.c` files (functions grouped by recovered name prefix, headed `// ==== name @ addr size=N`), `_unnamed.c` for address-only functions, and `reference/` holding `callgraph.tsv`, `strings.tsv`, `dynsym.tsv`, `symbols.txt`, `renames.tsv`. See that tree's `README.md`.
- These binaries ship **sstripped** (no section headers). `PT_DYNAMIC` was re-parsed to recover dynamic symbols and rename PLT/GOT stubs; a second pass recovered **860** internal names from `__func__`/log-string leaks (each logged with evidence in `reference/renames.tsv`), so cross-references read in terms of real function names.
- **Caveats when reading the exports directly:**
  - For the shared libraries (`librts*.so`, `rtpd.so`, `luaext.so`, `oss`), the true load address = **dynsym value + 0x10000**; Ghidra also placed some symbol names at the wrong (unrelocated) address. `librtsmd`/`librtsmask` came out unnamed — apply the same +0x10000.
  - The kernel image (`kernel/vmlinux.bin`) has **no kallsyms**; only the 4694-entry module export table and plain strings were recovered.
  - DSP-heavy libs (`librtsaec`, `libaacenc`, `librtsgeom`) contain RLX custom instructions Ghidra can't decode (`halt_baddata`); their control flow is partial.

## The four questions

### 1. Initialization path → `init_path.md`
U-Boot (hardcoded `bootaddr`, 0 delay, `ttyS1`@57600) → LZMA kernel → `/etc/init.d/rcS` mounts `/backup` (jffs2, rw) and `/home` (squashfs) → branches to **recovery** (`/backup/init.sh`, if `do_update` flag or `/home` fails) or **normal** (`/home/app/init.sh`). Normal path loads audio→Wi-Fi→SD→camera modules, runs `load_cpld_ssp` (reads vd1 hardware string, insmods the GPIO peripheral + motor drivers), then launches the daemons. `watch_process` restarts dead daemons; if `rmm` dies it **reboots**. A `/tmp/sd/Factory/factory_test.sh` on SD diverts the whole boot into a factory hook (root code-exec path).

### 2. Cloud communication → `cloud_protocol.md`
Every daemon shells out to **`/backup/cloudAPI -c <opcode> …`** (statically-linked libcurl + wolfSSL). xiaoyi API requests are signed `Base64(HMAC-SHA1(keySec, fixed-order-query))`, uid AES-encrypted; onboarding is `login(138)→bindkey(137)→deviceinfo(142)→tnp_on_line(141 → P2P License/InitString)→heartbeat(192)`. API hosts are CA-pinned (`/backup/ca`), **but TLS peer verification is reportedly off for media/log uploads (411/413) and the `oss` path** (open question flagged below). Event media: server hands out a presigned URL + per-file password; `crypt_file` AES-128-ECB-encrypts the jpg/mp4 with that password before upload. Continuous recording goes through the separate `oss` uploader.

**OTA integrity weakness (independently verified here, not just from the subagent):** an update package is `[24B version][1024B RSA block][tgz]`. `rsa_pub_dec` + `decpkg.sh` recover an md5/pwd/version from the RSA-signed header, but `decpkg.sh` only compares the *version*; the signed **md5 is never checked against the tgz**, and `mtd_img` (`_ftext @ 004007c0`) erases+writes the partition with no hash/CRC/readback. So the signature covers a header whose payload-hash is discarded — the appended body is malleable. (Confirmed by reading `update.sh`/`decpkg.sh` directly and decompiling `mtd_img`.)

### 3. Hardware interfaces → `hardware_interfaces.md`
Despite the names, `cpld_periph.ko` and `ssp_ms41909*.ko` are **plain GPIO drivers** (no CPLD, no SPI): `/dev/cpld_periph` drives status LEDs, IR LEDs, IR-cut H-bridge, white light, reset button and speaker-amp over GPIO (full `0x200070nn` ioctl table decoded); `/dev/ssp` is a bit-banged half-step stepper (pan 0..4096, tilt 0..1440, no limit switches — homed into end stops). Dispatch PTZ also supports a Pelco-D UART head on `/dev/ttyS0`@2400. Day/night comes from ISP stats or an SARADC light sensor. Audio: internal codec via ALSA (`rlx_*`), amp enable on GPIO9. SD: `rts3903-sdhc`. Wi-Fi: RTL8188FTV USB (`8188fu.ko` v5.2.11.1, 0BDA:F179). Kernel built-ins: `hconf` (hw config in mtd1, `/dev/hconf`), `RTSX_WDT` watchdog, DesignWare I2C (sensor SCCB), `rts-quadspi`, GPIO pinmux.

### 4. Realtek SDK → `realtek_sdk.md` (+ IPC/media in `ipc_p2p_media.md`)
`librtstream` is the core: create ISP/H.264/MJPEG/OSD/audio **channels**, `bind`, `enable`, then `poll`/`recv`/`release` buffers (ISP stream N = `/dev/video(51+N)`). Attribute structs (ISP channel, H.264 encoder: resolution/fps/bitrate/gop/rc-mode, with mode 8 = CVBR), the DMA allocator `/dev/rtsmem`, and ~120 ISP "mailbox" command codes (ioctl `0xc0107331`: sensor, 3A, motion `0x07xx`, privacy mask `0x09xx`, tuning `0x0axx`, GPIO `0x0cxx`) are mapped. The ISP runs **8051 firmware** (`isp.fw`, raw, selected per detected sensor via `loadfw` sysfs). `rmm` is the SDK consumer: main 1080p/720p@20 CVBR H.264 + 640×360 sub + raw YUV (QR + software motion), 16 kHz AAC with AEC, abnormal-sound detect. Frames reach the other daemons via a shared-memory ring `/fshare_frame_buf` (flags: 0x400 main, 0x800 sub, 0x100 audio, 0x2 keyframe) — not a device node.

**IPC**: POSIX mqueues (`/ipc_*`, maxmsg 8, msgsize 0x200), 16-byte header (`dst` mask, `src` mask, `msg_id`, `len`), star-routed through `dispatch`'s switch (`FUN_00404a28`) which re-fans to each `dst` bit. Module bits: dispatch 1, rmm 2, cloud 4, p2p 8, rcd 0x10, rtmp 0x20. ~120 message IDs and ~90 `/tmp/mmap.info` shared-state offsets are tabled.

**P2P**: `p2p_tnp` uses the **CS2 "PPPP" (TNP)** SDK (statically linked), not ThroughTek IOTC. `PPPP_Initialize(InitString)` / `PPPP_Listen(DID, key)` with DID/License/InitString delivered from the cloud `tnp/on_line` response via IPC msg 0x7e. Control channel auth is a nonce+HMAC hash; live/talkback/PTZ/playback ride separate channels; **only two 16-byte blocks of each live I-frame are AES-encrypted**, the rest of the stream is cleartext.

## Cross-cutting security observations (for the user's RE notes)

Factual, from the static image:
- Unauthenticated root shell on UART (`root::`, `::askfirst:-/bin/sh`); no network login daemon ships.
- Per-device secrets (Wi-Fi PSK, P2P UID/key, bind token) are cleartext in `conf`/`vd1` flash — a flash read clones device identity.
- SD-card `Factory/` path runs as root at boot (provisioning/jailbreak hook).
- OTA body not bound to the RSA signature (above).
- Live media stream is almost entirely unencrypted on the wire; event uploads use AES-ECB (no IV/MAC) with server-issued keys.
- Stale components (OpenSSL 1.0.2j, BusyBox 1.20.2, uClibc 0.9.33, Linux 3.10) — expected for a 2020 build.

## Open questions carried forward
- Is TLS peer-verification actually disabled on the 411/413/`oss` upload paths (vs. just using a different option set)? Worth confirming in `cloudAPI`/`oss` directly.
- Exact AES key derivation for the uid/password transforms in `cloudAPI`.
- Linux GPIO number → SoC pin mapping (needs pinctrl table from an un-symboled kernel).
- `/dev/hconf` ioctl/record format (needs an mtd1 dump).
- P2P: HMAC-SHA1 and the live-frame codec IDs are inferred, not proven; p2p receive thread not decompiled as a function.
- rmm has no baby-cry detector despite the app message existing.

## File index
- `init_path.md` — boot & daemon startup
- `cloud_protocol.md` — cloudAPI/oss/crypt_file/OTA
- `hardware_interfaces.md` — GPIO/motor/audio/SD/Wi-Fi/kernel peripherals
- `realtek_sdk.md` — librts* API, ISP/encoder, device nodes
- `ipc_p2p_media.md` — mqueue protocol, mmap layout, PPPP P2P, rmm pipeline
- Decompiled sources: `../../Decompiled source/` (apps/ · sdk/ · kernel_modules/ · tools/; raw .tsv/.txt under each module's reference/)
