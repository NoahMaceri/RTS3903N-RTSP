# Yi camera firmware — reverse-engineering investigation

Static reverse engineering of a **Yi `r10m` pan/tilt Wi-Fi camera**, firmware
`7.1.00.25A_202002271051`: a Realtek **RTS3903** SoC (RLX/Lexra MIPS32,
little-endian) running Linux 3.10.27 on the Realtek IPCam SDK (rootfs v2.3.2),
from an 8 MiB SPI-NOR dump of the owner's own device.

## Where everything is

| folder | what it holds | start here |
|--------|---------------|-----------|
| **`FirmwareDump/`** | Raw acquisition — the 8 MTD block images + `mtd.txt`. **The `.bin` images are git-ignored** (they contain the device's cleartext secrets); only `mtd.txt` + a README are committed | `FirmwareDump/README.md` |
| **`Extracted/`** | Unpacked filesystems: `rootfs/`, `rootfs_backup/` (recovery), `userdata/` (the app partition), `kernel/`, plus `*.listing.txt` inventories | `*.listing.txt` |
| **`Decompiled source/`** | The reconstructed **C codebase** — every app/SDK/driver decompiled, named, and split into navigable source files | `Decompiled source/README.md` |
| **`analysis/`** | The written investigation: compiled report, subsystem notes, flash-layout docs | `analysis/REPORT.md` |

## The investigation, by question

The work set out to understand four things; each has a note under `analysis/`:

1. **Initialization / boot path** — `analysis/notes/init_path.md`
   U-Boot → LZMA kernel → `rcS` → recovery-vs-normal branch → daemon launch,
   with `watch_process` supervising (reboots if `rmm` dies).
2. **Cloud communication** — `analysis/notes/cloud_protocol.md`
   `cloudAPI` (static libcurl + CyaSSL), HMAC-SHA1 request signing, onboarding
   sequence, event-media upload, and the OTA signature gap.
3. **Hardware interfaces** — `analysis/notes/hardware_interfaces.md`
   GPIO peripherals (LEDs/IR-cut/button), the stepper PTZ, audio/ALSA, SD,
   Wi-Fi, and the kernel built-ins. (`cpld_periph`/`ssp_ms41909` are GPIO
   drivers despite their names.)
4. **Realtek IPCam SDK** — `analysis/notes/realtek_sdk.md` and the deeper
   `analysis/notes/realtek_sdk_deep_dive.md`
   The `librtstream` AV engine (units/channels/pipes, single epoll loop +
   thread pool), zero-copy buffers, the ISP 8051-MCU mailbox, H.264 EWL.

`analysis/REPORT.md` compiles all of it into one report;
`analysis/notes/00_OVERVIEW.md` indexes the notes;
`analysis/firmware_layout/` holds the per-partition flash docs (`FIRMWARE.md`,
`boot.md`, `conf.md`, `global.md`, `kernel.md`, `vd1.md`).

## The decompiled codebase

`Decompiled source/` is organized as a real source tree:

```
apps/            18  application daemons (dispatch, rmm, cloud, p2p_tnp, oss, …)
sdk/             14  Realtek SDK libraries (librtstream, librtsisp, encoders, …)
kernel_modules/  17  .ko drivers (camera, audio, GPIO, stepper)
tools/           6   recovery-slot + diagnostic utilities
include/             Ghidra type shims
```

Binaries ship **sstripped** (no local symbol table). Dynamic symbols were
re-parsed from `PT_DYNAMIC`, and **860 internal function names** were recovered
from the firmware's own `__func__`/log strings — every one auditable in each
module's `reference/renames.tsv`. The C is **Ghidra pseudocode**: navigable and
structured for reading, **not buildable**. See
`Decompiled source/README.md` for the full method.

## A note on secrets / PII
Per-device secrets (Wi-Fi SSID + passphrase, P2P UID/key, cloud bind token,
serial, encrypted cloud credential) live in cleartext in the `conf`/`vd1` flash
regions. In this repo **every real value has been replaced with a placeholder**
of the same shape (see `analysis/firmware_layout/conf.md` and `vd1.md`), and the
raw partition images that hold the real values are git-ignored. Nothing in the
committed tree contains the device's real identity or network credentials.
