# apps/ — Application base

The daemons and helpers that actually run the camera.

Each subfolder is one module: a `<name>.h` of prototypes, subsystem `.c` files, `_unnamed.c` for address-only functions, its own `README.md`, and a `reference/` folder of raw Ghidra data. `funcs`/`named` are function counts; `recov` = names recovered from `__func__`/log strings.

| module | role | funcs | named | recov |
|---|---|--:|--:|--:|
| [`rmm`](rmm/) | Media pipeline: ISP/H.264/AAC capture, QR scan, motion detect, fshare ring | 403 | 204 | 55 |
| [`p2p_tnp`](p2p_tnp/) | CS2 "PPPP"/TNP peer-to-peer: live view, talkback, PTZ, playback | 573 | 416 | 89 |
| [`dispatch`](dispatch/) | Central mqueue router; onboarding + device state machine | 205 | 118 | 30 |
| [`cloud`](cloud/) | Cloud control-plane client (drives cloudAPI, handles server commands) | 174 | 113 | 47 |
| [`cloudAPI`](cloudAPI/) | Cloud HTTP/TLS API worker (static libcurl + CyaSSL), HMAC-SHA1 signing | 1470 | 513 | 213 |
| [`oss`](oss/) | Continuous-recording uploader to object storage (static libcurl + CyaSSL) | 3466 | 956 | 289 |
| [`mp4record`](mp4record/) | Event MP4 / clip recorder | 132 | 67 | 9 |
| [`recbackup`](recbackup/) | SD-card recording backup manager | 133 | 97 | 15 |
| [`crypt_file`](crypt_file/) | AES-128-ECB file encryptor for event media | 70 | 37 | 1 |
| [`watch_process`](watch_process/) | Daemon supervisor; restarts dead daemons, reboots on rmm death | 56 | 42 | 0 |
| [`log_server`](log_server/) | Log collector / uploader | 42 | 33 | 0 |
| [`upgrade_firmware`](upgrade_firmware/) | OTA update orchestration | 54 | 36 | 1 |
| [`load_cpld_ssp`](load_cpld_ssp/) | Reads hardware string, insmods GPIO/motor kernel drivers | 32 | 23 | 0 |
| [`arp_test`](arp_test/) | ARP probe / network bring-up check | 48 | 34 | 2 |
| [`wifi_conf`](wifi_conf/) | Wi-Fi provisioning helper (localbin) | 27 | 20 | 0 |
| [`reboot_by_watchdog`](reboot_by_watchdog/) | Watchdog-backed reboot helper (localbin) | 40 | 30 | 0 |
| [`rtpd`](rtpd/) | RTP / streaming helper library (locallib) | 69 | 4 | 0 |
| [`luaext`](luaext/) | Lua C-extension bindings (locallib) | 63 | 12 | 4 |

See [`../README.md`](../README.md) for the naming method and the `.so` **+0x10000** address caveat.
