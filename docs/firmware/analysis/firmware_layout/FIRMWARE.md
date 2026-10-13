# Yi Camera Firmware — Analysis Summary

Source: `FirmwareDump/` — a full 8 MiB SPI-NOR dump (`mtdblock0.bin`), the seven individual partition dumps, and `mtd.txt`, captured 2022-11-18.
This is a static documentation pass over the user's own device dump. Points that are interpretation rather than a value read directly from the image are marked as inferred.

## At a glance

| Item | Value |
|---|---|
| SoC | Realtek RTS39xx-family (Realtek RLX/Lexra MIPS core — `arch/rlx`, `rts-quadspi`, `rts_hconf`, `rts_cam`) |
| Flash | 8 MiB SPI-NOR (`m25p80`), 64 KiB erase blocks |
| Bootloader | U-Boot 2014.01-v1.2 (built 2019-05-22) |
| Kernel | Linux 3.10.27 MIPS, `#29 PREEMPT` 2019-05-22, Realtek RSDK gcc 4.8.5, LZMA-packed uImage |
| Base system | Realtek SDK rootfs `v2.3.2` (2018-05-04): BusyBox 1.20.2, uClibc 0.9.33, OpenSSL 1.0.2j, ubus/libubox (OpenWrt-derived), Lua 5.3.5 |
| Application firmware | **7.1.00.25A_202002271051** (all five component version files agree) |
| Internal model code | `r10m` — inferred from the SD update filename `home_r10m` |
| Wi-Fi | Realtek RTL8188FU (USB), driver `8188fu.ko`, wpa_supplicant `v0.8.x_rtw_r24647` |
| Image sensors supported | SmartSens SC1245, SC2230, SC2232, SC2235, SC2390 (per-sensor `isp.fw` blobs) |
| Other hardware | Hantro H1 H.264 encoder (`hx280enc`), JPEG encoder, OSD, AAC audio + echo cancel, SD card (`rtsx-icr`), CPLD peripheral, MS41909 driver (`ssp_ms41909.ko`, lens/pan-tilt motor) |
| Cloud / P2P | Yi/Xiaoyi cloud (`*.xiaoyi.com`, `*.mi-ae.com.sg`), ThroughTek-style "PPPP" P2P (`p2p_tnp`), Alibaba OSS upload (`oss`) |

## Flash layout

| mtd | Name | Offset | Size | Type | Extracted to |
|---|---|---|---|---|---|
| 0 | global | `0x000000` | 8192 KiB | Whole flash; byte-identical to mtd1–7 concatenated | [global.md](global.md) |
| 1 | boot | `0x000000` | 192 KiB | U-Boot + Realtek hconf | [boot.md](boot.md) |
| 2 | kernel | `0x030000` | 1344 KiB | uImage (loader + LZMA) | [kernel.md](kernel.md), `kernel/` |
| 3 | rootfs | `0x180000` | 1792 KiB | SquashFS 4.0 xz, mounted `/` read-only | `rootfs/`, `rootfs.listing.txt` |
| 4 | userdata | `0x340000` | 3072 KiB | SquashFS 4.0 xz, loop-mounted `/home` | `userdata/`, `userdata.listing.txt` |
| 5 | rootfs_backup | `0x640000` | 1664 KiB | JFFS2 (zlib), mounted `/backup` read-write | `rootfs_backup/`, `rootfs_backup.listing.txt` |
| 6 | vd1 | `0x7e0000` | 64 KiB | Device identity record | [vd1.md](vd1.md) |
| 7 | conf | `0x7f0000` | 64 KiB | Runtime config struct | [conf.md](conf.md) |

Despite the name, `rootfs_backup` is not a second copy of the rootfs. It is the read-write recovery/updater partition (`/backup`): it holds the Wi-Fi driver, the update scripts, the RSA signature verifier, and a small cloud client.

## Boot flow

1. **U-Boot** (`bootcmd=bootm bootaddr`, `bootdelay=0`) boots the uImage at flash `0x30000` (`0xBC030000`). Console is `ttyS1` at 57600 baud.
2. **Kernel**: the zboot stub decompresses the LZMA payload. Command line is supplied by U-Boot: `root=/dev/mtdblock3` plus the `mtdparts` definition. There is no built-in cmdline and no embedded IKCONFIG.
3. **`/etc/init.d/rcS`** sets up the ramfs/tmpfs mounts, sets the clock to `2015-10-24`, starts `ubusd` and `syslogd`, and prints the motd.
4. It mounts mtd5 (JFFS2) on `/backup` and mtd4 (SquashFS) on `/home`.
5. **Branch:** if `/backup/do_update` exists *or* `/home` fails to mount, it runs `/backup/init.sh` (recovery path: download or SD update, then re-flash mtd4). Otherwise it runs `/home/app/init.sh`.
6. **`/home/app/init.sh`** loads the audio / Wi-Fi / SD / camera drivers, checks and mounts the SD card at `/tmp/sd`, sets the speaker-amp GPIO from the `vd1` hardware-config digit, plays the power-on sound, applies any pending SD update, then launches the application daemons: `log_server`, `dispatch`, `cloud`, `p2p_tnp`, `mp4record`, `oss`, `rmm`, `watch_process`, and the hardware watchdog.
7. **`watch_process`** restarts dead daemons per `/home/app/wp_cmd`; if `rmm` exits, the rule reboots the device.

## Application daemons (`/home/app`, mtd4)

| Binary | Role (inferred from strings/names) |
|---|---|
| `dispatch` | Main controller; talks to the Yi platform API (`plt-api-*.xiaoyi.com`) |
| `cloud` / `cloudAPI` | Cloud session, log upload, (legacy Kuaipan cloud storage client in `/backup/cloudAPI`) |
| `p2p_tnp` | ThroughTek-style P2P ("PPPP" protocol), remote live view |
| `mp4record` / `recbackup` | Local MP4 recording and backup |
| `oss` | Alibaba Cloud OSS uploader (bundled CyaSSL/wolfSSL) |
| `rmm` | Media/runtime manager (watchdog-critical) |
| `log_server` | Unix-socket log sink (`/tmp/logsock`), optional SD logging |
| `upgrade_firmware` / `download_upgrade` | OTA download and apply |
| `rsa_pub_dec` | RSA public-key decrypt step of the update verifier |

## Firmware update mechanism

- Update packages are named `home_r10m` and may arrive over the network (`download_upgrade`) or from SD card (`/tmp/sd/home_r10m`).
- `script/decpkg.sh` + `rsa_pub_dec` verify/decrypt a 1024-byte header: an embedded **RSA-2048 public key** decrypts a block containing the expected MD5, a password, and the target version; the package body is appended and un-tarred.
- `update.sh` compares versions, extracts `home.bin`, and re-flashes mtd4 via `/backup/mtd_img 4 home.bin`, using `/backup/do_update` as a crash-safe "in progress" flag so an interrupted update falls into the recovery path on next boot.
- The RSA public key (for signature verification only) is embedded in `rootfs_backup/rsa_pub_dec`; it is not a secret.

## Cloud / network endpoints (from binary strings)

```
Platform API : plt-api{,-us,-sg,-de}.xiaoyi.com, api.xiaoyi.com{,.tw}
Router/P2P    : yicamera-router.mi-ae.com.sg, tnpmastercn.xiaoyi.com
OTA download  : download.xiaoyi.com{,.tw}/smarthomecam/, ds51qrrlkjd6a.cloudfront.net,
                yi-version.qiniudn.com, 115.28.170.6:8084
Log upload    : hch.xiaoyi.com:8443/9443, monitor-log.xiaoyi.com
Storage/OSS   : *.aliyuncs.com; legacy Kuaipan (openapi.kuaipan.cn) in /backup/cloudAPI
Test/dev      : familymonitor-interface-test.mi-ae.com.sg
```

## Security-relevant observations

These are factual notes about how the firmware is configured, for the user's reverse-engineering notes.

- **Root login is unauthenticated.** `/etc/passwd` has `root::0:0:...` (empty password field) and there is no shadow file. `/etc/inittab` spawns `::askfirst:-/bin/sh` on the serial console, so the UART (ttyS1, 57600 8N1) reaches a shell without a password prompt.
- **No network login service runs by default.** `rcS` would start `telnetd` only if `/bin/telnetd` existed; this BusyBox build has no `telnetd` applet and the file is absent, so it never starts. No dropbear/ssh/httpd is present or launched either.
- **Leftover developer credential:** `/etc/httpd.conf` contains `/secret:tonywu:123qwe`. It is inert (the `httpd` launch line in `rcS` is commented out and no httpd binary is present) but is a hardcoded credential shipped in production.
- **Per-device secrets are stored in cleartext in flash**, so a flash image is enough to clone the device's identity:
  - `conf` (mtd7): home Wi-Fi SSID and passphrase in plaintext, a 32-char cloud bind token, a 128-bit hex ID, and an 80-char A–P nibble-encoded (likely encrypted) credential blob.
  - `vd1` (mtd6): the P2P UID (`TNPXGAC-…`), device serial, and a 16-char P2P key.
  - ⚠️ The exact values appear in [conf.md](conf.md) and [vd1.md](vd1.md). Keep those two files private; they identify a specific camera and its Wi-Fi network.
- **SD-card paths run as root.** `init.sh` and several daemons read/execute files under `/tmp/sd/` (notably a `Factory/factory_test.sh` → `Factory/config.sh` factory hook, and `Factory/wpa_supplicant.conf`). This is the firmware's built-in factory/service provisioning path.
- Outdated components with known CVEs: Linux 3.10.27 (2014), OpenSSL 1.0.2j (2016, EOL), BusyBox 1.20.2 (2012), uClibc 0.9.33. Expected for a 2020 camera build; relevant if assessing exposure.
- `conf` records a timestamp of **2022-11-18 20:07:16 UTC** (the capture date) — likely the last cloud/NTP sync before the dump.

## Extraction notes & verification

- `mtdblock0.bin` was verified byte-identical to `mtd1||mtd2||…||mtd7`; the partition offsets match the `mtdparts` string in U-Boot's default environment.
- rootfs/userdata extracted with `unsquashfs` (squashfs-tools 4.7.5). Entry counts match the superblock inode counts (239 / 158).
- `rootfs_backup` (JFFS2) was extracted with a custom reader and independently reproduced with `jefferson`; both outputs are byte-identical including symlinks. All JFFS2 node header and data CRCs validated (0 bad). Compression: zlib (608 nodes) + stored (4).
- Kernel uImage header, data CRC, and header CRC all verified; the LZMA stream decompresses to a 4,151,756-byte Linux 3.10.27 image. The raw binary (not ELF) is at `kernel/vmlinux.bin`.
- Symlinks are preserved in the extracted trees. On Windows they may appear as 0-byte files or need Developer Mode / elevation to materialize; the authoritative targets are in the `*.listing.txt` files.
- Device nodes under `/dev` are created at runtime by `initdevnod`/`mdev`, so none exist in the rootfs image (only a placeholder `topfile` per empty mount dir).

## Per-block reports

- [global.md](global.md) · [boot.md](boot.md) · [kernel.md](kernel.md) · [vd1.md](vd1.md) · [conf.md](conf.md)
- Filesystem listings: `rootfs.listing.txt`, `userdata.listing.txt`, `rootfs_backup.listing.txt`
