# conf (mtd7)

Runtime configuration block written by the camera application (binary struct, zero-padded, unused space 0xFF). Not a filesystem. **Contains Wi-Fi credentials and cloud/binding secrets in plaintext.** Interpretations are inferred — treat as unconfirmed.

> **Privacy note:** this partition holds this specific camera's Wi-Fi SSID and
> passphrase, cloud bind key, device key and an encrypted cloud-credential blob.
> Every per-device secret shown below is a **placeholder** — the field offsets,
> types and lengths are real, the values are fake. The partition hashes (which
> fingerprint the real content) are omitted. The real blob exists only in
> `FirmwareDump/mtdblock7.bin`, which is git-ignored.

## Partition

| Property | Value |
|---|---|
| MTD device | `/dev/mtd7` / `/dev/mtdblock7` |
| Source dump | `FirmwareDump/mtdblock7.bin` (git-ignored) |
| Flash offset | `0x007f0000` – `0x007fffff` |
| Size | `0x10000` (65,536 bytes / 64 KiB) |
| Erase size | `0x10000` |
| Bytes not 0xFF | 1,597 |
| Hashes | omitted (fingerprint device-specific content) |

## Region map (4 KiB granularity)

| Start | End | Content |
|---|---|---|
| `0x000000` | `0x001000` | data |
| `0x001000` | `0x010000` | erased (0xFF) |

## Decoded fields

Secret values below are **placeholders**; lengths/encodings match the originals.

| Offset | Type | Value (placeholder) | Notes |
|---|---|---|---|
| `0x0000` | u32 LE | `0x1` = 1 |  |
| `0x0014` | u32 LE | `0x1` = 1 |  |
| `0x001c` | string | `HomeWiFi` | Wi-Fi SSID |
| `0x005c` | string | `wifipass1234` | Wi-Fi passphrase |
| `0x009c` | string | `EXAMPLEBINDKEY0000000000000000AB` | 32-char token — likely cloud bind key |
| `0x00dc` | u32 LE | `0x2710` = 10000 |  |
| `0x00e4` | string | `00112233445566778899aabbccddeeff` | 32 hex chars — likely 128-bit ID/key |
| `0x0104` | u32 LE | `0xa` = 10 |  |
| `0x0130` | u32 LE | `0xa` = 10 |  |
| `0x0138` | u32 LE | `0x800` = 2048 |  |
| `0x013c` | u32 LE | `0x2d0` = 720 |  |
| `0x01a0` | u32 LE | `0xa` = 10 |  |
| `0x01a4` | u32 LE | `0x1` = 1 |  |
| `0x01ac` | u32 LE | `0x15180` = 86400 | 86400 s = 1 day |
| `0x01b4` | u32 LE | `0x1` = 1 |  |
| `0x01d0` | u32 LE | `0x2` = 2 |  |
| `0x01d8` | u32 LE | `0x1` = 1 |  |
| `0x01dc` | string | `AAAABBBB…DDDD` (80 chars) | A–P nibble-encoded (80 chars) → 40 bytes — likely encrypted cloud credential |
| `0x025c` | u32 LE | unix time | provisioning timestamp (real value redacted) |
| `0x0260` | string | `00US0000000000000000` | Region code (`US`) + zero-padded field |
| `0x0280` | u32 LE | `0x64` = 100 |  |
| `0x0284` | u32 LE | `0x1` = 1 |  |
| `0x0288` | u32 LE | `0x64` = 100 |  |
| `0x028c` | u32 LE | `0x1` = 1 |  |
| `0x0290` | u32 LE | `0x1` = 1 |  |
| `0x0294` | u32 LE | `0x200` = 512 |  |
| `0x0298` | u32 LE | `0x1` = 1 |  |
| `0x02a0` | u32 LE | `0x1` = 1 |  |
| `0x02a4` | u32 LE | `0x50` = 80 |  |
| `0x02ac` | string | `7.1.00.25A_202002271051` | Firmware version |
| `0x02ec` | u32 LE | `0x20001` = 131073 |  |
| `0x02f0` | u32 LE | `0x1` = 1 |  |

## Hex dump (sanitized — placeholder secrets, used area `0x0`–`0x660`)

```
00000000: 0100 0000 0000 0000 0000 0000 0000 0000 ................
00000010: 0000 0000 0100 0000 0000 0000 486f 6d65 ............Home
00000020: 5769 4669 0000 0000 0000 0000 0000 0000 WiFi............
00000030: 0000 0000 0000 0000 0000 0000 0000 0000 ................
*
00000050: 0000 0000 0000 0000 0000 0000 7769 6669 ............wifi
00000060: 7061 7373 3132 3334 0000 0000 0000 0000 pass1234........
00000070: 0000 0000 0000 0000 0000 0000 0000 0000 ................
*
00000090: 0000 0000 0000 0000 0000 0000 4558 414d ............EXAM
000000a0: 504c 4542 494e 444b 4559 3030 3030 3030 PLEBINDKEY000000
000000b0: 3030 3030 3030 3030 3030 4142 0000 0000 0000000000AB....
000000c0: 0000 0000 0000 0000 0000 0000 0000 0000 ................
000000d0: 0000 0000 0000 0000 0000 0000 1027 0000 .............'..
000000e0: 0000 0000 3030 3131 3232 3333 3434 3535 ....001122334455
000000f0: 3636 3737 3838 3939 6161 6262 6363 6464 66778899aabbccdd
00000100: 6565 6666 0a00 0000 0000 0000 0000 0000 eeff............
00000110: 0000 0000 0000 0000 0000 0000 0000 0000 ................
*
00000130: 0a00 0000 0000 0000 0008 0000 d002 0000 ................
00000140: 0000 0000 0000 0000 0000 0000 0000 0000 ................
*
000001a0: 0a00 0000 0100 0000 0000 0000 8051 0100 .............Q..
000001b0: 0000 0000 0100 0000 0000 0000 0000 0000 ................
000001c0: 0000 0000 0000 0000 0000 0000 0000 0000 ................
000001d0: 0200 0000 0000 0000 0100 0000 4141 4141 ............AAAA
000001e0: 4242 4242 4343 4343 4444 4444 4545 4545 BBBBCCCCDDDDEEEE
000001f0: 4646 4646 4747 4747 4848 4848 4949 4949 FFFFGGGGHHHHIIII
00000200: 4a4a 4a4a 4b4b 4b4b 4c4c 4c4c 4d4d 4d4d JJJJKKKKLLLLMMMM
00000210: 4e4e 4e4e 4f4f 4f4f 5050 5050 4141 4141 NNNNOOOOPPPPAAAA
00000220: 4242 4242 4343 4343 4444 4444 0000 0000 BBBBCCCCDDDD....
00000230: 0000 0000 0000 0000 0000 0000 0000 0000 ................
*
00000260: 3030 5553 3030 3030 3030 3030 3030 3030 00US000000000000
00000270: 3030 3030 0000 0000 0000 0000 0000 0000 0000............
00000280: 6400 0000 0100 0000 6400 0000 0100 0000 d.......d.......
00000290: 0100 0000 0002 0000 0100 0000 0000 0000 ................
000002a0: 0100 0000 5000 0000 0000 0000 372e 312e ....P.......7.1.
000002b0: 3030 2e32 3541 5f32 3032 3030 3232 3731 00.25A_202002271
000002c0: 3035 3100 ffff ffff ffff ffff ffff ffff 051.............
000002d0: ffff ffff ffff ffff ffff ffff ffff ffff ................
000002e0: ffff ffff ffff ffff ffff ff00 0100 0200 ................
000002f0: 0100 0000 0000 0000 0000 0000 0000 0000 ................
00000300: 0000 0000 0000 0000 0000 0000 0000 0000 ................
*
00000650: 0000 0000 0000 0000 0000 0000 ffff ffff ................
00000660
```
