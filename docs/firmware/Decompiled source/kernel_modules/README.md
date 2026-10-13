# kernel_modules/ — Kernel modules

Loadable `.ko` drivers. These keep their ELF symbol tables, so most names are original.

Each subfolder is one module: a `<name>.h` of prototypes, subsystem `.c` files, `_unnamed.c` for address-only functions, its own `README.md`, and a `reference/` folder of raw Ghidra data. `funcs`/`named` are function counts; `recov` = names recovered from `__func__`/log strings.

| module | role | funcs | named | recov |
|---|---|--:|--:|--:|
| [`cpld_periph`](cpld_periph/) | GPIO peripheral driver (LEDs/IR-cut/button; NOT a CPLD) | 13 | 9 | 1 |
| [`pid_list`](pid_list/) | PID list helper module | 3 | 2 | 0 |
| [`rlx_codec`](rlx_codec/) | Audio codec driver (internal) | 28 | 3 | 1 |
| [`rlx_dma`](rlx_dma/) | Audio DMA driver | 12 | 4 | 0 |
| [`rlx_i2s`](rlx_i2s/) | I2S audio driver | 20 | 2 | 0 |
| [`rlx_snd_intern`](rlx_snd_intern/) | Internal sound card registration | 3 | 2 | 0 |
| [`rts_cam`](rts_cam/) | Camera core driver | 113 | 83 | 2 |
| [`rts_cam_lock`](rts_cam_lock/) | /dev/rtslock arbitration (counting semaphores) | 20 | 14 | 0 |
| [`rts_cam_mem`](rts_cam_mem/) | /dev/rtsmem DMA memory allocator | 60 | 31 | 0 |
| [`rts_camera_hx280enc`](rts_camera_hx280enc/) | Hantro H1 (hx280) H.264 encoder driver | 9 | 4 | 0 |
| [`rts_camera_jpgenc`](rts_camera_jpgenc/) | Hardware JPEG encoder driver | 10 | 4 | 0 |
| [`rts_camera_osd2`](rts_camera_osd2/) | OSD2 overlay driver | 8 | 4 | 0 |
| [`rts_camera_soc`](rts_camera_soc/) | Camera SoC glue / ISP register bridge | 94 | 57 | 3 |
| [`rtstream`](rtstream/) | V4L2 stream device driver | 9 | 2 | 0 |
| [`rtsx-icr`](rtsx-icr/) | ICR / card-reader support | 49 | 25 | 8 |
| [`ssp_ms41909`](ssp_ms41909/) | Stepper-motor GPIO driver (NOT SPI/SSP) | 10 | 3 | 1 |
| [`ssp_ms41909_union`](ssp_ms41909_union/) | Stepper-motor GPIO driver variant | 12 | 6 | 0 |

See [`../README.md`](../README.md) for the naming method and the `.so` **+0x10000** address caveat.
