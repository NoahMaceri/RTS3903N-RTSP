# Decompiled codebase — Yi `r10m` firmware `7.1.00.25A_202002271051`

A **navigable, structured** C codebase reconstructed from the camera's firmware
(Realtek RTS3903, MIPS32 little-endian, Linux 3.10). The C is **Ghidra
decompiler pseudocode** from sstripped binaries — it is meant for reading and
investigation, **not for building**. What has been done is: recover real
function names, split each binary's monolithic dump into subsystem source
files, and give the whole thing a project layout.

## Layout

```
Decompiled source/
├── apps/              18  application daemons & helpers (what runs the camera)
├── sdk/               14  Realtek IPCam SDK libraries (librts*, encoders)
├── kernel_modules/    17  .ko drivers (camera, audio, GPIO, motor)
├── tools/             6   recovery-slot + diagnostic utilities
├── include/
│   └── decomp_types.h     Ghidra type shims (undefined4, uint, code, …)
└── README.md
```

Each module is a folder:

```
apps/<name>/
├── <name>.h           recovered function prototypes, grouped by subsystem
├── start.c            C-runtime entry / init stubs
├── <subsystem>.c      functions grouped by their recovered name prefix
│                        (e.g. cloud/webapi.c, rmm/media.c, rmm/modet.c)
├── misc.c             named functions that don't form a family
├── _unnamed.c         functions with no recoverable name (FUN_<addr>)
├── README.md          role, entry points, file guide, stats
└── reference/         renames.tsv · dynsym.tsv · symbols.txt · strings.tsv · callgraph.tsv
```

Start at a module's `README.md`, then its `<name>.h` for the API surface, then
the subsystem `.c` you care about. `_unnamed.c` holds the address-only leftovers.

## How the names were recovered ("correctly named functions")

These binaries are **sstripped** — the local symbol table is gone, so the true
names of internal (`static`) functions are not in the file. Names came from
three evidence sources, in priority order; nothing was invented:

1. **Dynamic symbol table** (`PT_DYNAMIC`, re-parsed because section headers are
   stripped) → authoritative names for every imported/exported function and the
   PLT/GOT stubs. 100% correct.
2. **GCC `__func__` / assert / log-format leaks** — the firmware prints its own
   function names (e.g. a function that logs `"init_main_stream failed ret %d"`
   *is* `init_main_stream`). A high-precision pass renamed a `FUN_` function
   only when a lone-identifier string is referenced by exactly that one function,
   or appears as a whole word in a longer format string it prints. **860
   internal functions** recovered this way; each is listed in that module's
   `reference/renames.tsv` with its evidence, so any name can be checked.
3. Anything still named `FUN_<addr>` never leaks its identity — the address is
   the name. (`oss`, being static libc/curl/TLS, is mostly these.)

Recovered names that look upstream (`CyaSSL_*`, `BIO_*`, `Decode*`, `xmlParse*`,
`zbar_*`) are the genuine names of statically-linked wolfSSL/CyaSSL, libcurl,
libxml2 and ZBar, leaked by those libraries' own `__func__`.

### Reading `.so` addresses
For everything in `sdk/` and the `oss`/`rtpd`/`luaext` libs, the true runtime
address = **`reference/dynsym.tsv` value + 0x10000**. A few SDK libs show their
export names at the unrelocated address in the decompilation — the names are all
in `dynsym.tsv`; apply +0x10000 to line them up.

## apps/ — the application base

| module | role | funcs | named | recov |
|--------|------|------:|------:|------:|
| `rmm` | media pipeline: ISP/H.264/AAC, QR, motion, fshare ring | 403 | 204 | 55 |
| `p2p_tnp` | CS2 "PPPP"/TNP P2P: live, talkback, PTZ, playback | 573 | 416 | 89 |
| `dispatch` | central mqueue router + onboarding/state machine | 205 | 118 | 30 |
| `cloud` | cloud control-plane client (drives `cloudAPI`) | 174 | 113 | 47 |
| `cloudAPI` | cloud HTTP/TLS API worker, HMAC-SHA1 signing | 1470 | 513 | 213 |
| `oss` | continuous-recording uploader (static libcurl+CyaSSL) | 3466 | 956 | 289 |
| `mp4record` | event MP4 / clip recorder | 132 | 67 | 9 |
| `recbackup` | SD-card recording backup manager | 133 | 97 | 15 |
| `crypt_file` | AES-128-ECB file encryptor for event media | 70 | 37 | 1 |
| `watch_process` | daemon supervisor (reboots on `rmm` death) | 56 | 42 | 0 |
| `log_server` | log collector / uploader | 42 | 33 | 0 |
| `upgrade_firmware` | OTA update orchestration | 54 | 36 | 1 |
| `load_cpld_ssp` | reads hw string, insmods GPIO/motor drivers | 32 | 23 | 0 |
| `arp_test` | ARP probe / network bring-up check | 48 | 34 | 2 |
| `wifi_conf` | Wi-Fi provisioning helper | 27 | 20 | 0 |
| `reboot_by_watchdog` | watchdog-backed reboot helper | 40 | 30 | 0 |
| `rtpd` | RTP / streaming helper lib | 69 | 4 | 0 |
| `luaext` | Lua C-extension bindings | 63 | 12 | 4 |

## sdk/ — Realtek IPCam SDK

`librtstream` (core AV engine, 956 fns / 867 named), `librtscamkit`, `librtsisp`
(8051 MCU mailbox), `librtsv4l2`, `librtsosd2`, `librtsjpeg`, `librtsmd`,
`librtsmask`, `librtsgeom`, `librtsbmp`, `librtsutils`, `librtsaec` + `libaacenc`
(RLX-DSP, partial decode), `libh1encoder` (Hantro H1 H.264 EWL).

## kernel_modules/ — drivers

`rts_cam*`, `rts_camera_*` (SoC, hx280 H.264, JPEG, OSD2), `rtstream`, `rtsx-icr`,
`rlx_*` (audio codec/DMA/I2S/sound), `cpld_periph` (GPIO, **not** a CPLD),
`ssp_ms41909*` (stepper GPIO, **not** SPI), `pid_list`. `.ko` files keep their
ELF symbol tables, so most names are already correct.

## tools/ — recovery slot & diagnostics

`download_upgrade`, `mtd_img` (raw partition writer — **no hash/CRC verify**),
`rsa_pub_dec` (OTA header RSA), `checkdisk`, `uartReDir`, `xy_stream`.

## Totals
55 modules · ~10,600 functions · **860 internal names recovered** on top of full
dynamic-symbol recovery. The prose investigation (boot path, cloud protocol,
hardware interfaces, SDK internals, security findings) is in `../analysis/`.
