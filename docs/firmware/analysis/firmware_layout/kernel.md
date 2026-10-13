# kernel (mtd2)

Legacy U-Boot uImage containing a self-decompressing Linux 3.10.27 MIPS kernel (small MIPS loader followed by an LZMA stream). Not a filesystem.

## Partition

| Property | Value |
|---|---|
| MTD device | `/dev/mtd2` / `/dev/mtdblock2` |
| Source dump | `FirmwareDump/mtdblock2.bin` |
| Flash offset | `0x00030000` – `0x0017ffff` |
| Size | `0x150000` (1,376,256 bytes / 1344 KiB) |
| Erase size | `0x10000` |
| Bytes not 0xFF | 1,367,440 |
| MD5 | `195761f29a286f3037726f39789436e1` |
| SHA-1 | `2f2587d8bc69988aeac779c41e6c06e4d9c3a98d` |
| SHA-256 | `e859a346723c63befc84db0f24f3f64bad01ea254463179764ab82f63776bd46` |

## Region map (4 KiB granularity)

| Start | End | Content |
|---|---|---|
| `0x000000` | `0x150000` | data |

## uImage header (64 bytes @ 0x0)

| Field | Value |
|---|---|
| Magic | `0x27051956` (valid) |
| Header CRC | `0x24832bf3` — verified |
| Timestamp | 2019-05-22 06:47:59 UTC |
| Data size | 1,372,864 bytes |
| Load address | `0x804059d0` |
| Entry point | `0x804059d0` |
| Data CRC | `0x76a32892` — verified |
| OS / Arch / Type / Comp | 5 (Linux) / 5 (MIPS) / 2 (Kernel) / 0 (none — payload self-decompresses) |
| Image name | `linux_3.10` |
| Slack after image | 3,328 bytes (bytes not 0xFF: 0) |

## Payload layout

| Offset in payload | Size | Content |
|---|---|---|
| `0x0` | `0x1100` | MIPS decompressor stub ("zboot": *Uncompressing Linux at load address…*) |
| `0x1100` | 1,368,508 | LZMA-alone stream: props `0x5d`, dict 64 MiB, size field unknown (-1), end-marker terminated |
| `0x14f2bc` | 4 | trailing bytes `cc593f00` |

## Decompressed kernel

| Item | Value |
|---|---|
| Size | 4,151,756 bytes |
| SHA-256 | `34a77f234d475c953c29e8157447fd4498a99713d4d044f3df33f58e5a92b801` |
| Banner | `Linux version 3.10.27 (zhangzhidan@XY-201) (gcc version 4.8.5 20150209 (prerelease) (Realtek RSDK-4.8.5p1 Build 2521) ) #29 PREEMPT Wed May 22 14:16:12 CST 2019` |
| Embedded .config (IKCONFIG) | not present |
| Format | Raw binary, not ELF. `0x804059d0` is where U-Boot runs the *loader*; the kernel's own link address is not recorded in the header — tools such as `vmlinux-to-elf` can infer it and rebuild symbols from kallsyms. |

## Command line

Supplied by U-Boot (see `boot.md`); the kernel has no built-in command line:

```
bootargs=console=ttyS1,57600 root=/dev/mtdblock3 rts_hconf.hconf_mtd_idx=1 rts-quadspi.channels=dual mtdparts=m25p80:8192k@0(global),192k@0k(boot),1344k@192k(kernel),1792k@1536k(rootfs),3072k@3328k(userdata),1664k@6400k(rootfs_backup),64k@8064k(vd1),64k@8128k(conf)
```

## Extracted files (`Extracted/kernel/`)

| File | Description |
|---|---|
| `uImage_header.bin` | 64-byte legacy uImage header |
| `uImage_payload.bin` | Full image payload (loader + LZMA) — CRC-verified |
| `zboot_loader.bin` | MIPS decompressor stub only |
| `vmlinux.lzma` | Raw LZMA stream |
| `vmlinux.bin` | Decompressed kernel image (raw binary) |

## Loader stub

```
00000000: 2180 8000 2188 a000 2190 c000 2198 e000  !...!...!...!...
00000010: 5580 043c 904c 8424 9580 063c a06c c624  U..<.L.$...<.l.$
00000020: 0000 80ac feff c414 0400 8424 5580 043c  ...........$U..<
00000030: a04c 8424 9580 1d3c a06c bd27 4080 1f3c  .L.$...<.l.'@..<
00000040
```

<details>
<summary>Loader stub strings (≥ 4 chars) — 14 strings</summary>

```
0x000345  L1&F
0x000368  $j$&U
0x0003a0  $j$&@
0x0003aa  x&X\B$0
0x000886  "&# 
0x001018  unexpected EOF
0x00102e   -- System halted
0x001040  zimage at:     
0x001058  Uncompressing Linux at load address 
0x001080  Could not allocate input buffer
0x0010a0  bad header
0x0010ac  LZMA data is corrupt
0x0010c4  Now, booting the kernel...
0x0010e0  0123456789ABCDEF
```
</details>
