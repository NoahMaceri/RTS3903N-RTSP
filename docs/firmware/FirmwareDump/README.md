# FirmwareDump/ — raw acquisition (not committed)

The verbatim SPI-NOR flash of the camera, read out as the 8 MTD partitions:

| file | partition | content |
|------|-----------|---------|
| `mtdblock0.bin` | whole flash | full 8 MiB image (== concatenation of 1–7) |
| `mtdblock1.bin` | boot | U-Boot |
| `mtdblock2.bin` | kernel | uImage (Linux 3.10, LZMA) |
| `mtdblock3.bin` | rootfs | SquashFS |
| `mtdblock4.bin` | userdata | SquashFS (the app partition) |
| `mtdblock5.bin` | rootfs_backup | JFFS2 (recovery) |
| `mtdblock6.bin` | vd1 | device-identity block |
| `mtdblock7.bin` | conf | runtime config (Wi-Fi + cloud secrets) |

`mtd.txt` is the device's `/proc/mtd` partition map.

## Why the `.bin` files are not in the repo

`mtdblock6.bin` (vd1) and `mtdblock7.bin` (conf) — and therefore `mtdblock0.bin`,
which contains them — hold this specific camera's **cleartext secrets**: Wi-Fi
SSID and passphrase, P2P UID and key, cloud bind token, serial number, and an
encrypted cloud-credential blob. The `.gitignore` excludes every `*.bin` here so
none of that is published. The decoded *structure* (offsets, field types) is
documented, with placeholder values, in
[`../analysis/firmware_layout/`](../analysis/firmware_layout/).

To reproduce locally, dump the flash (e.g. `cat /dev/mtdblock0 > mtdblock0.bin`
over a root UART shell, or an external SPI programmer) and drop the images here.
