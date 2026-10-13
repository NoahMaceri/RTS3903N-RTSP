# global (mtd0)

Whole 8 MiB SPI-NOR flash image. Every other MTD partition is a window into this one; its content is identical to the concatenation of mtd1–mtd7.

## Partition

| Property | Value |
|---|---|
| MTD device | `/dev/mtd0` / `/dev/mtdblock0` |
| Source dump | `FirmwareDump/mtdblock0.bin` |
| Flash offset | `0x00000000` – `0x007fffff` |
| Size | `0x800000` (8,388,608 bytes / 8192 KiB) |
| Erase size | `0x10000` |
| Bytes not 0xFF | 6,669,194 |
| MD5 | `dc87baedc480f7294951db08980750ab` |
| SHA-1 | `359e05f9eab44984469696a930ac8def8fa64d1e` |
| SHA-256 | `4c1aaa375d0d986a0e34f6458f4e001b1efebc935b6b68e895c1a2d82b512eec` |

## Region map (4 KiB granularity)

| Start | End | Content |
|---|---|---|
| `0x000000` | `0x001000` | data |
| `0x001000` | `0x002000` | zero (0x00) |
| `0x002000` | `0x02b000` | data |
| `0x02b000` | `0x030000` | erased (0xFF) |
| `0x030000` | `0x316000` | data |
| `0x316000` | `0x340000` | erased (0xFF) |
| `0x340000` | `0x593000` | data |
| `0x593000` | `0x640000` | erased (0xFF) |
| `0x640000` | `0x742000` | data |
| `0x742000` | `0x750000` | erased (0xFF) |
| `0x750000` | `0x751000` | data |
| `0x751000` | `0x760000` | erased (0xFF) |
| `0x760000` | `0x761000` | data |
| `0x761000` | `0x770000` | erased (0xFF) |
| `0x770000` | `0x771000` | data |
| `0x771000` | `0x780000` | erased (0xFF) |
| `0x780000` | `0x781000` | data |
| `0x781000` | `0x790000` | erased (0xFF) |
| `0x790000` | `0x791000` | data |
| `0x791000` | `0x7a0000` | erased (0xFF) |
| `0x7a0000` | `0x7a1000` | data |
| `0x7a1000` | `0x7b0000` | erased (0xFF) |
| `0x7b0000` | `0x7b1000` | data |
| `0x7b1000` | `0x7c0000` | erased (0xFF) |
| `0x7c0000` | `0x7c1000` | data |
| `0x7c1000` | `0x7d0000` | erased (0xFF) |
| `0x7d0000` | `0x7d1000` | data |
| `0x7d1000` | `0x7e0000` | erased (0xFF) |
| `0x7e0000` | `0x7e1000` | data |
| `0x7e1000` | `0x7f0000` | erased (0xFF) |
| `0x7f0000` | `0x7f1000` | data |
| `0x7f1000` | `0x800000` | erased (0xFF) |

## Verification

- `mtdblock0.bin` == `mtdblock1.bin` ‖ … ‖ `mtdblock7.bin`: **yes, byte-identical**
- Sum of partition sizes: `0x800000` (flash size `0x800000`)

## Flash layout

| mtd | Name | Offset | End | Size | Content | Output |
|---|---|---|---|---|---|---|
| 1 | boot | `0x0000000` | `0x0030000` | 192 KiB | U-Boot 2014.01 (Realtek) | `boot.md` |
| 2 | kernel | `0x0030000` | `0x0180000` | 1344 KiB | uImage, Linux 3.10.27 MIPS (LZMA) | `kernel.md`, `../../Extracted/kernel/` |
| 3 | rootfs | `0x0180000` | `0x0340000` | 1792 KiB | SquashFS 4.0 (xz) | `../../Extracted/rootfs/` |
| 4 | userdata | `0x0340000` | `0x0640000` | 3072 KiB | SquashFS 4.0 (xz) | `../../Extracted/userdata/` |
| 5 | rootfs_backup | `0x0640000` | `0x07e0000` | 1664 KiB | JFFS2 (little endian, zlib) | `../../Extracted/rootfs_backup/` |
| 6 | vd1 | `0x07e0000` | `0x07f0000` | 64 KiB | Device identity block | `vd1.md` |
| 7 | conf | `0x07f0000` | `0x0800000` | 64 KiB | Runtime config block | `conf.md` |

## mtd.txt (as captured from the device)

```
dev:    size   erasesize  name
mtd0: 00800000 00010000 "global"
mtd1: 00030000 00010000 "boot"
mtd2: 00150000 00010000 "kernel"
mtd3: 001c0000 00010000 "rootfs"
mtd4: 00300000 00010000 "userdata"
mtd5: 001a0000 00010000 "rootfs_backup"
mtd6: 00010000 00010000 "vd1"
mtd7: 00010000 00010000 "conf"
```

## Kernel command line partition definition (from U-Boot default env)

```
mtdparts=m25p80:8192k@0(global),192k@0k(boot),1344k@192k(kernel),1792k@1536k(rootfs),3072k@3328k(userdata),1664k@6400k(rootfs_backup),64k@8064k(vd1),64k@8128k(conf)
```

The offsets above were computed from partition order/sizes and match this `mtdparts` string.
