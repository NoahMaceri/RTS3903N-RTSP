# analysis/ — the written investigation

Prose findings from the static reverse engineering. The decompiled source it
refers to is in [`../Decompiled source/`](../Decompiled%20source/).

## Start here
- **[`REPORT.md`](REPORT.md)** — the single compiled report: executive summary,
  hardware platform, boot/init, process & IPC architecture, cloud communication,
  P2P, media pipeline/SDK, consolidated security observations, open questions.

## Subsystem notes (`notes/`)
Indexed by [`notes/00_OVERVIEW.md`](notes/00_OVERVIEW.md):

| note | topic |
|------|-------|
| [`init_path.md`](notes/init_path.md) | boot chain & daemon startup |
| [`cloud_protocol.md`](notes/cloud_protocol.md) | `cloudAPI`/`oss`/`crypt_file`, request signing, onboarding, OTA gap |
| [`hardware_interfaces.md`](notes/hardware_interfaces.md) | GPIO, stepper PTZ, audio/ALSA, SD, Wi-Fi, kernel peripherals |
| [`realtek_sdk.md`](notes/realtek_sdk.md) | `librts*` API, ISP/encoder, device nodes |
| [`realtek_sdk_deep_dive.md`](notes/realtek_sdk_deep_dive.md) | SDK internals: AV engine, zero-copy buffers, ISP MCU mailbox, H.264 EWL |
| [`ipc_p2p_media.md`](notes/ipc_p2p_media.md) | mqueue protocol, mmap layout, PPPP P2P, rmm pipeline |

## Flash layout (`firmware_layout/`)
Per-partition decode — see [`firmware_layout/`](firmware_layout/). The `vd1` and
`conf` docs show the device-identity and runtime-config structures with
**placeholder values** (real per-device secrets removed).

## Other
- [`Opus5.5_findings.md`](Opus5.5_findings.md) — earlier findings pass, kept for provenance.
