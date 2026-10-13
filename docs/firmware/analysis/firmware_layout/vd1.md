# vd1 (mtd6)

Small factory/device-identity block (fixed-layout records, unused space 0xFF). Not a filesystem. Interpretations below are inferred from content and Yi/TUTK conventions — treat as unconfirmed.

> **Privacy note:** this block identifies this specific camera (P2P UID, serial,
> P2P key). The identity values below are **placeholders** — offsets/types/lengths
> are real, values are fake. Partition hashes omitted; real blob only in
> `FirmwareDump/mtdblock6.bin`, which is git-ignored.

## Partition

| Property | Value |
|---|---|
| MTD device | `/dev/mtd6` / `/dev/mtdblock6` |
| Source dump | `FirmwareDump/mtdblock6.bin` (git-ignored) |
| Flash offset | `0x007e0000` – `0x007effff` |
| Size | `0x10000` (65,536 bytes / 64 KiB) |
| Erase size | `0x10000` |
| Bytes not 0xFF | 162 |
| Hashes | omitted (fingerprint device-specific content) |

## Region map (4 KiB granularity)

| Start | End | Content |
|---|---|---|
| `0x000000` | `0x001000` | data |
| `0x001000` | `0x010000` | erased (0xFF) |

## Decoded fields

Identity values are **placeholders**; formats/lengths match the originals.

| Offset | Type | Value (placeholder) |
|---|---|---|
| `0x0000` | u32 LE | `0x1` = 1 |
| `0x0004` | string | `TNPZZZZ-000000-ZZZZZ` |
| `0x0024` | string | `A000000000AS00000000` |
| `0x0044` | string | `EXAMPLEP2PKEY012` |
| `0x0064` | string | `00000000` |
| `0x0084` | string | `FFFFFFFFFFFFFFFF` |
| `0x00a4` | u32 LE | `0xaa` = 170 |
| `0x00a8` | string | `21131113100000000000000000000000` |
| `0x00c8` | u32 LE | `0xbb` = 187 |
| `0x00cc` | string | `11111111110011000000000000000000` |

## Interpretation (inferred)

| Offset | Likely meaning |
|---|---|
| `0x00` | Record/format version (`1`) |
| `0x04` | P2P device ID (ThroughTek/Kalay-style `TNP…` UID used by the Yi app) |
| `0x24` | Device serial / SN |
| `0x44` | 16-char P2P/device key (secret) |
| `0x64` | Placeholder field (`00000000`) |
| `0x84` | Unset field (`FFFFFFFFFFFFFFFF`) — possibly MAC/license placeholder |
| `0xa4` | Tag `0xaa` + 32-digit hardware-config string at `0xa8`. **Confirmed use:** `/home/app/init.sh` reads `/dev/mtdblock6` bytes 168–199 (`0xa8`) and uses digit index 6 to choose the audio-amp GPIO9 polarity |
| `0xc8` | Tag `0xbb` + 32-digit string (feature flags, `1`/`0`) |

## Hex dump (sanitized — placeholder identity, used area `0x0`–`0x130`)

```
00000000: 0100 0000 544e 505a 5a5a 5a2d 3030 3030 ....TNPZZZZ-0000
00000010: 3030 2d5a 5a5a 5a5a ffff ffff ffff ffff 00-ZZZZZ........
00000020: ffff ffff 4130 3030 3030 3030 3030 4153 ....A000000000AS
00000030: 3030 3030 3030 3030 ffff ffff ffff ffff 00000000........
00000040: ffff ffff 4558 414d 504c 4550 3250 4b45 ....EXAMPLEP2PKE
00000050: 5930 3132 ffff ffff ffff ffff ffff ffff Y012............
00000060: ffff ffff 3030 3030 3030 3030 ffff ffff ....00000000....
00000070: ffff ffff ffff ffff ffff ffff ffff ffff ................
00000080: ffff ffff 4646 4646 4646 4646 4646 4646 ....FFFFFFFFFFFF
00000090: 4646 4646 ffff ffff ffff ffff ffff ffff FFFF............
000000a0: ffff ffff aa00 0000 3231 3133 3131 3133 ........21131113
000000b0: 3130 3030 3030 3030 3030 3030 3030 3030 1000000000000000
000000c0: 3030 3030 3030 3030 bb00 0000 3131 3131 00000000....1111
000000d0: 3131 3131 3131 3030 3131 3030 3030 3030 1111110011000000
000000e0: 3030 3030 3030 3030 3030 3030 ffff ffff 000000000000....
000000f0: ffff ffff ffff ffff ffff ffff ffff ffff ................
*
00000130
```
