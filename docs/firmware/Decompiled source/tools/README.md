# tools/ — Recovery-slot & diagnostic tools

Utilities from the recovery partition and base tools.

Each subfolder is one module: a `<name>.h` of prototypes, subsystem `.c` files, `_unnamed.c` for address-only functions, its own `README.md`, and a `reference/` folder of raw Ghidra data. `funcs`/`named` are function counts; `recov` = names recovered from `__func__`/log strings.

| module | role | funcs | named | recov |
|---|---|--:|--:|--:|
| [`checkdisk`](checkdisk/) | SD filesystem check tool | 62 | 49 | 6 |
| [`download_upgrade`](download_upgrade/) | OTA package downloader (recovery slot) | 80 | 75 | 0 |
| [`mtd_img`](mtd_img/) | Raw MTD partition writer used by OTA (no hash/CRC verify) | 27 | 22 | 0 |
| [`rsa_pub_dec`](rsa_pub_dec/) | RSA public-key header decryptor for OTA packages | 33 | 25 | 0 |
| [`uartReDir`](uartReDir/) | UART redirect / console helper | 18 | 13 | 0 |
| [`xy_stream`](xy_stream/) | Streaming test / helper tool | 106 | 95 | 2 |

See [`../README.md`](../README.md) for the naming method and the `.so` **+0x10000** address caveat.
