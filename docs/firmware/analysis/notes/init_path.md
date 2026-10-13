# Initialization path

Static analysis of firmware `7.1.00.25A_202002271051`. Sources: shell scripts (read directly) and Ghidra 12.1.4 headless decompilation (`../../Decompiled source/apps/<app>/` (per-subsystem .c files)). REA could not be used for MIPS ELF on this Windows host ("Windows Ghidra P0 accepts PE targets only"), so Ghidra was driven directly.

Legend: **[obs]** read directly from script/decompilation · **[inf]** inferred.

## Stage 0 — U-Boot (mtd1)

- [obs] `bootcmd=bootm bootaddr`, `bootaddr=(0xBC000000 + 0x30000)`, `bootdelay=0`, console `ttyS1` 57600.
- [obs] bootargs: `root=/dev/mtdblock3 rts_hconf.hconf_mtd_idx=1 rts-quadspi.channels=dual mtdparts=...`
- [obs] U-Boot strings `gpio_magic(0x%x)`, `gpio_pin:`, `gpio moto set fail`, `UART1 func enable(%s)`, `debug_msg` → U-Boot itself touches motor GPIOs and can enable UART1 based on a flag. [inf] This is a vendor-patched U-Boot that parks the PTZ motor pins early.

## Stage 1 — Kernel (mtd2)

- [obs] Linux 3.10.27, RSDK gcc 4.8.5, kallsyms present (no IKCONFIG).
- [obs] Built-in Realtek platform drivers seen in kernel strings: `rts-quadspi` (SPI-NOR, dual I/O), `hconf` (hardware-config store in mtd1, `/dev/hconf` c 123,0, `hconf_ioctl`/`hconf_read`), `RTSX_WDT Watchdog`, Synopsys DesignWare I2C master (sensor SCCB bus) [inf], GPIO chip with pinmux groups `PWMGPIO0-3`, `MDIOGPIO5/6`, `RTS_SOC_HW_ID`, `rtsxb2`.
- [obs] Everything camera/audio/SD/Wi-Fi is a loadable module (see Stage 4).

## Stage 2 — `/etc/inittab` → `/etc/init.d/rcS` (mtd3, squashfs, ro)

1. Mount proc, sysfs, debugfs, ramfs `/var` and `/dev`, tmpfs `/dev/shm`, devpts.
2. `/etc/init.d/initdevnod` — static nodes: `console`, `dbg_iomem` (c120), `usb_phy_mdio` (c121), `efuse` (c122), `hconf` (c123), `ram0`, `android_uvc` (c243).
3. `ulimit -c 2048000`; clock forced to `2015-10-24 10:24:00`; `mdev -s` + USB uevent replay (brings up the RTL8188FU USB Wi-Fi device node).
4. `hwclock -ut`, `ifconfig lo`, `syslogd`, `klogd`, `/etc/rcS.d/S30ubusd` (ubusd — OpenWrt bus, present but not used by Yi apps as far as observed).
5. `telnetd` only if `/bin/telnetd` exists (it does not).
6. Mount `mtd5` jffs2 → `/backup`; loop-mount `mtd4` squashfs → `/home`.
7. **Branch**: `/backup/do_update` present OR `/home` mount failed → `/backup/init.sh` (recovery). Else `/home/app/init.sh`.

`/etc/preinit/*` are the stock Realtek SDK (v2.3.2) bring-up scripts with every `insmod` commented out — Yi moved module loading into `/home/app/init.sh`.

## Stage 3a — Recovery: `/backup/init.sh`

`insmod 8188fu.ko` → mount SD (`/dev/mmcblk0p1` → `/tmp/sd`) → bring up `wlan0`/`eth0` (eth0 MAC = `d2:` + wlan0 MAC[1:]) → DNS 8.8.8.8 / 114.114.114.114 → `/backup/script/update.sh` (SD package `home_r10m`, else `/backup/download_upgrade` over network) → on failure `reboot`, on success fall through to `/home/app/init.sh`.

`update.sh`: kills `watch_process oss cloud mp4record`; compares 24-byte version header with `/home/homever`; `decpkg.sh` (RSA-verified 1024-byte header → md5/pwd/version, body appended → tgz); untars; touches `/backup/do_update` (network updates only); syncs `backup/` files by md5; `umount /home`; `/backup/mtd_img 4 home.bin`; clears flag; reboots.

## Stage 3b — Normal: `/home/app/init.sh`

Order (all [obs]):

1. `LD_LIBRARY_PATH=/lib:/home/lib:/home/rt/lib:/home/app/locallib`
2. Audio: `rlx_dma`, `rlx_i2s`, `rlx_codec`, `rlx_snd_intern`
3. Wi-Fi: `/backup/8188fu.ko` (lives on the rw recovery partition, so it can be updated independently)
4. SD: `rtsx-icr.ko`
5. Video: `rts_cam` → `rts_cam_mem` → `rts_cam_lock` → `rts_camera_soc` → `rts_camera_hx280enc` → `rts_camera_jpgenc` → `rts_camera_osd2` → `rtstream` (same order as the SDK's `07_init_video`, which says "rts_cam.ko is inserted at first")
6. `checkdisk` (fsck + mount SD on `/tmp/sd`)
7. `set_audio_switch`: export GPIO9 as output; read 32 bytes at `vd1`+0xA8 (hardware-version string); char 6 selects speaker-amp enable polarity.
8. `aacplay poweron.aac`
9. `wlan0 up`, `eth0` MAC derived from wlan0
10. ALSA mixer: capture DGain numid=8 → 127, speaker numid=1 → 109, AGain numid=11 → 30
11. `do_update` — apply `/tmp/sd/home_r10m` if present
12. DNS 8.8.8.8, `mDNSResponderPosix` (advertises `_http._tcp` port 80) [note: script typo `mDNSRespoderPosix` → this call fails at runtime; recovery init.sh spells it correctly]
13. core_pattern → `/tmp/sd/core.%e.%p`; VM tunables
14. `log_server &` (unix socket `/tmp/logsock`)
15. **Factory hook**: if `/tmp/sd/Factory/factory_test.sh` exists → run `/tmp/sd/Factory/config.sh` and `exit` (no daemons start)
16. `load_cpld_ssp` (see below)
17. Daemons: `dispatch`, `cloud`, `p2p_tnp`, `mp4record`, `oss`, `rmm`, `watch_process`
18. `watchdog -t 2 -T 5 /dev/watchdog` (BusyBox; kicks RTSX_WDT every 2 s, 5 s timeout)

> **Naming caveat** (from hardware_interfaces.md): despite the names, `cpld_periph.ko` is not a CPLD driver and `ssp_ms41909*.ko` do not use SSP/SPI. Both are plain **GPIO** drivers (LED/IR/IR-cut/amp/button, and a bit-banged half-step stepper respectively); the `hw=`/`gpio=` strings from vd1 configure pins and polarities. Also: the kernel image has **no kallsyms** — only the module export table (4694 names) and plain strings were recovered.

### `load_cpld_ssp` (motor driver selection) — decompiled

- `FUN_00400c34` mmaps `/dev/mtdblock6` (0x124 bytes), checks magic `0xaa` @ +0xA4 and `0xbb` @ +0xC8, copies `hw_ver` (32 B @ +0xA8) and `gpio_pin` (32 B @ +0xCC). Failure → `read_productinfo() fail !!!`.
- `FUN_00400d2c` always `insmod cpld_periph.ko hw=<hw_ver> gpio=<gpio_pin>`, then picks a motor driver from the hw string:
  - 8-pin motor (PIN71/38/69/34/35/37/36/39) → `ssp_ms41909.ko hw=… gpio=…`
  - 4+1-pin motor (PIN76/34/35/37/36) → `ssp_ms41909_union.ko hw=… gpio=…`
  - otherwise `moto not support !!!`
- `/tmp/sd/debug_msg` toggles verbose output.

### `vd1` product-info record (mtd6) — layout as consumed by code

| Offset | Size | Meaning | Consumer |
|---|---|---|---|
| 0xA4 | 4 | magic `0xAA` | load_cpld_ssp |
| 0xA8 | 32 | hardware-version string; chars encode ptz_en, ptz_dir hor/ver, cds, mirror, resolution, def_x(2), def_y, isp (per dispatch log format) ; char 6 = speaker-amp polarity | init.sh, load_cpld_ssp, dispatch get_productinfo |
| 0xC8 | 4 | magic `0xBB` | load_cpld_ssp |
| 0xCC | 32 | GPIO pin-map string for motor/CPLD | load_cpld_ssp |

(Other vd1 fields — DID/UID, P2P key, serial — are read by dispatch `get_productinfo` @00403c44; values intentionally not reproduced here.) dispatch falls back to `/etc/back.bin`, then `/tmp/sd/did.txt`, if vd1 is empty.

## Stage 5 — Daemon supervision

`watch_process` reads `/home/app/wp_cmd` (check_interval 10 s). Restart rules: dispatch, cloud, p2p_tnp, mp4record, arp_test, oss → relaunch; **rmm → `reboot`**.

## Stage 6 — `dispatch` startup (`main` @ 004011d0)

1. `signal(SIGCHLD, SIG_IGN)`; log `sysversion`.
2. Factory mode flag = `/home/app/script/factory_test.sh` && `/tmp/sd/Factory/factory_test.sh` exist.
3. Open mqueues: `/ipc_dispatch`, `/ipc_rmm`, `/ipc_cloud`, `/ipc_p2p`, `/ipc_rcd`, `/ipc_rtmp`, `/ipc_dispatch_worker`.
4. Create/zero shared memory `/tmp/mmap.info` (0xAA0 bytes) — the system-wide state block.
5. `get_productinfo` (vd1) → `get_config` (mtd7 conf; generates `/tmp/wpa_supplicant.conf`, or `Factory/wpa_supplicant.conf` from SD) → `mount_sd.sh`.
6. `hw_type = 2`; open `/dev/cpld_periph`, ioctls `0x20007015`, `0x20007016`, `0x20007013` (read state).
7. PTZ gate `FUN_0040a844`: PTZ path is taken only if **not** factory mode, hw-version char 0 ≠ `'2'`, and `/tmp/sd/debug_msg` is **absent** (the debug flag disables motor control). If taken: when mmap+0x218 high half == `"22"` → UART PTZ path, otherwise open `/dev/ssp` (MS41909 stepper driver). UART path: if hw chars 1/2 == '2', swap X/Y axes; `FUN_0041130c(0xb, 0x4e, 0x30, 1, flags)` = serial-port init for an external pan/tilt board [inf: "H601R" model per `H601R PTZ not support get position` string].
8. LED/IR via cpld ioctl `0x2000701c`/`0x2000701b` depending on mmap+0x604.
9. Threads: system tick (`p_system_tick`), worker (`p_worker` — Wi-Fi monitor, checkdisk, ethernet), schedule-power, PTZ thread (if `/dev/ssp` open), heartbeat.
10. `FUN_004021e4` launches helper scripts, then enters `do_mq_process` (FUN_00404a28), the central message switch.
