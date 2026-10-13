# sdk/ — Realtek IPCam SDK

Shared libraries the apps link against (AV engine, ISP, codecs).

Each subfolder is one module: a `<name>.h` of prototypes, subsystem `.c` files, `_unnamed.c` for address-only functions, its own `README.md`, and a `reference/` folder of raw Ghidra data. `funcs`/`named` are function counts; `recov` = names recovered from `__func__`/log strings.

| module | role | funcs | named | recov |
|---|---|--:|--:|--:|
| [`libaacenc`](libaacenc/) | AAC audio encoder (RLX DSP; partial decode) | 168 | 163 | 0 |
| [`libh1encoder`](libh1encoder/) | Hantro H1 H.264 encoder wrapper layer (EWL) | 210 | 197 | 0 |
| [`librtsaec`](librtsaec/) | Acoustic echo cancellation (RLX DSP; partial decode) | 892 | 887 | 0 |
| [`librtsbmp`](librtsbmp/) | Bitmap helpers | 15 | 1 | 0 |
| [`librtscamkit`](librtscamkit/) | Camera kit: thread pool, buffer and helper routines | 109 | 97 | 0 |
| [`librtsgeom`](librtsgeom/) | Geometry / lens-distortion correction (RLX DSP) | 22 | 1 | 0 |
| [`librtsisp`](librtsisp/) | ISP control: 8051 MCU mailbox, 3A, tuning, GPIO | 167 | 160 | 2 |
| [`librtsjpeg`](librtsjpeg/) | JPEG / MJPEG encode | 46 | 42 | 0 |
| [`librtsmask`](librtsmask/) | Privacy mask | 25 | 1 | 0 |
| [`librtsmd`](librtsmd/) | Motion detection | 57 | 1 | 0 |
| [`librtsosd2`](librtsosd2/) | On-screen-display (OSD2) overlay | 71 | 62 | 0 |
| [`librtstream`](librtstream/) | Core Realtek AV engine: units/channels/pipes, single epoll loop | 956 | 867 | 79 |
| [`librtsutils`](librtsutils/) | Misc SDK utilities | 11 | 1 | 0 |
| [`librtsv4l2`](librtsv4l2/) | V4L2 capture wrapper | 33 | 1 | 0 |

See [`../README.md`](../README.md) for the naming method and the `.so` **+0x10000** address caveat.
