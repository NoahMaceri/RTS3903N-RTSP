# notes/ — subsystem deep-dives

Focused static-analysis notes. **[`00_OVERVIEW.md`](00_OVERVIEW.md)** is the
index and method/caveats page; read it first.

- [`00_OVERVIEW.md`](00_OVERVIEW.md) — orientation, how the decompilation was produced, four-question summary
- [`init_path.md`](init_path.md) — boot & daemon startup
- [`cloud_protocol.md`](cloud_protocol.md) — cloudAPI/oss/crypt_file, signing, onboarding, OTA
- [`hardware_interfaces.md`](hardware_interfaces.md) — GPIO/motor/audio/SD/Wi-Fi/kernel peripherals
- [`realtek_sdk.md`](realtek_sdk.md) — librts* API, ISP/encoder, device nodes
- [`realtek_sdk_deep_dive.md`](realtek_sdk_deep_dive.md) — SDK internals / how it works
- [`ipc_p2p_media.md`](ipc_p2p_media.md) — mqueue IPC, mmap layout, PPPP P2P, rmm pipeline

Code is cited as `function @ addr`; resolve against
[`../../Decompiled source/`](../../Decompiled%20source/).
