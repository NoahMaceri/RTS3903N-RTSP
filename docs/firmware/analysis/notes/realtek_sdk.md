# Realtek IPCam SDK (RTS3903 / "RTS39xx") — reference reconstructed from the Yi firmware

Scope: the libraries in `userdata/rt/lib`, the SDK kernel modules in `userdata/rt/ko`, the ISP firmware
blobs in `userdata/lib/<sensor>/`, and the two SDK consumers `rmm` (only to see which APIs it imports) and `xy_stream`.
Static analysis only, using the Ghidra exports in `../../Decompiled source/sdk/` (and apps/rmm for the SDK consumer).

Labels used below:
- **[obs]** observed directly: the function name and Ghidra address, a constant, or a string.
- **[inf]** inferred: a name or meaning I deduced from clamps, call order or naming conventions. The code does not prove it.

## 0. Things to know before reading the exports

- **Address convention.** For the `.so` exports, the Ghidra address equals the dynsym value plus `0x10000`.
  - Ghidra sometimes put the *same* symbol name on a second, wrong address: dynsym value + 0. Example: `rts_isp_run` appears at both `0x19568` (bogus) and `0x29568` (real).
  - Always trust the `dynsym + 0x10000` copy. All addresses below are Ghidra addresses.
  - `librtsmd` and `librtsmask` decomp only has `FUN_xxxxxxxx` labels. Map them with `dynsym + 0x10000`.
- **String resolution in librtstream.** Strings are referenced as `PTR_s_snd_device_0004ffec_0x14_0006326c + -0xNNNN`, which means the address `0x50000 - 0xNNNN`.
  - In librtsisp the equivalent is `PTR_DAT_0002b4cc + -0xNNNN`, which means `0x20000 - 0xNNNN`.
  - Helper scripts are in the session scratchpad (`res2.py`).
- **Build provenance [obs].** The build paths embedded in the strings are:
  - `.../customer/xiaoyi_2.3/users/rtscore/rtstream/...` (librtstream)
  - `.../customer/xiaoyi/xiaoyi_branch/users/rtscore/rtstream/librtsisp/...` (librtsisp)

  So this is a Realtek customer build made for Xiaoyi. The modules say `vermagic=3.10.27 preempt mod_unload RLX 32BIT` and were built with Realtek RSDK-4.8.5p1. The module author string is `Ming Qian <ming_qian@realsil.com.cn>` (soc camera).
- **Load order [obs].** `userdata/app/init.sh` lines 40-56 load the modules from `/home/rt/ko/` in this order:
  - `rlx_dma`, `rlx_i2s`, `rlx_codec`, `rlx_snd_intern` (audio)
  - `rtsx-icr`
  - `rts_cam`, `rts_cam_mem`, `rts_cam_lock`, `rts_camera_soc`, `rts_camera_hx280enc`, `rts_camera_jpgenc`, `rts_camera_osd2`, `rtstream`

  The `rootfs/etc/preinit/07_init_video` and `03_init_audio` scripts are commented-out copies of the same list.

## 1. Library map

| Library | DT_NEEDED (SDK only) | Exported API by prefix (count) | Purpose |
|---|---|---|---|
| **librtstream.so.2** | camkit, isp, v4l2, h1encoder, osd2, jpeg, asound, rtsaec, aacenc | `rts_av_*` (273), `rts_audio_*` (70), `speex_resampler_*` (22), `rts_h1encoder_*` (16), `rts_jpgencoder_*` (13), `rts_isp_*` unit ops (11), `rts_fifo_*`, `rts_video_*`, `rts_pcm_*`, `rts_g726_*`, `rts_aac_*`, plus internal `set_/get_/to_/alloc_*` ctrl helpers | Core media framework. It provides a unit/channel graph with buffers, pipes and a worker loop. It also wraps the ISP V4L2 stream, the H1 H.264 encoder, the JPEG encoder, OSD2, and the ALSA capture/playback/mixer/resample/AEC/encode/decode units. |
| **librtscamkit.so.1** | pthread, ubacktrace | `rts_queue_*` (17), `rts_get_*`/`rts_set_*` (log, time), `rts_pthreadpool_*` (7), `rts_buffer_*`/bit ops, `rts_semaphore_*`, `__rts_malloc/calloc/realloc`, `rts_free`, `RTS_IS_ERR`, `rts_log*`, `rts_cvrt_pix_fmt_{to,from}_v4l2`, `rts_save_yuv_image`, `show_mem_*` | Base utilities: logging, queues, thread pool, bitmaps, a tracked allocator, and pixel-format conversion. |
| **librtsisp.so.1** | geom, camkit, v4l2, m | `rts_isp_*` (123), `rts_reg_*` (20), `rts_wq_lock_*` (6), `rts_load_fw`, `rts_upload_fw`, `rts_dump_fw`, `rts_get_fw_size`, `rts_get_hw_id`/`rts_hw_id_init`, `rts_exec_vendor_cmd`, `rts_dma_memcpy`, `__rts_isp_exec_isp_cmd`, `__rts_isp_exec_ext_cmds` | User-space side of the ISP. It sends commands to the ISP MCU mailbox (sections 3 and 4), allocates DMA memory through `/dev/rtsmem`, maps encoder/OSD registers (`rts_reg_*`), takes cross-process HW locks (`rts_wq_lock_*`), and loads firmware. Source files: `rtsisp_3a.c`, `rtsisp_area.c`, `rtsisp_cmd.c`, `rtsisp_utils.c`. |
| **librtsv4l2.so.1** | — | `rts_v4l2_*` (29) | Thin V4L2 wrapper. It uses only standard VIDIOC ioctls (section 3). |
| **libh1encoder.so.1** | isp, v4l2, camkit | Hantro H1 API: `H264EncInit`/`_V2`, `H264Enc{Set,Get}{RateCtrl,CodingCtrl,PreProcessing}`, `H264EncStrm{Start,Encode,End}`, `H264EncSetRoiMap`, `H264EncSetSeiUserData`, `H264EncDnf*`, `H264EncUseSigio`, `H264EncSetEpollHook`, `H264EncCheckDone`, `H264EncMakeRdy`, plus `h264_ewl_*` and the internal `H264Sps*`/`H264Slice*` helpers | VeriSilicon/Hantro H1 (hx280) H.264 encoder library with Realtek additions: an async done/epoll hook and a "Dnf" denoise filter [inf]. Its EWL layer uses `rts_reg_h264_*` from librtsisp. |
| **librtsjpeg.so.1** | isp, camkit, geom, v4l2 | `rtsjpgenc_*` (init, encode, set/get_coding_ctrl, set_config, check_done, make_rdy, use_sigio, set_epoll_hook, set/get_register, release), `jpg_ewl_*`/`ewl_*` | Hardware MJPEG encoder (`ewl_jpg_common.c`, `rtsjpgenc.c`). |
| **librtsosd2.so.0** | isp, camkit, geom, v4l2 | `rts_osd2_*` (23): init, set/get_attr, config/enable/disable/query_block, set/get_color_table, encode, update, set/get_cmd, set/get_register, adma_copy, use_sigio, set_epoll_hook, get_blk_max_num; plus `osd2_ewl_*` | OSD2 hardware overlay engine. It works on bitmap blocks with a color table; it has no font rendering (section 6). |
| **librtsmd.so.1** | isp, camkit, geom, v4l2 | `rts_isp_{get,set}_md_*` (52), `rts_isp_trig_md_data`, `rts_isp_check_md_data_ready`, `rts_isp_calc_md_line_*`, `rts_switch_md_control` | Hardware motion detection in the ISP: grid, rect and "line" (tripwire) modes. Source file `rtsisp_md.c`. |
| **librtsmask.so.1** | isp, camkit, geom, v4l2 | `rts_isp_{get,set}_mask_*` (21) | Privacy masks in the ISP (grid/rect, color). |
| **librtsgeom.so.1** | camkit, m | `rts_geom_*` (20): lines, intersections, distances, segment/rect tests | 2-D geometry helpers used by MD line detection [obs: librtsmd imports `rts_geom_*`]. Despite the name, this is **not** LDC/dewarp; LDC lives in librtsisp plus the kernel. |
| **librtsutils.so.1** | isp, v4l2, camkit, geom | `rts_init_raw`, `rts_get_raw_frame`, `rts_get_raw_header`, `rts_update_raw_fmt`, `rts_release_raw` | Raw (pre-ISP) frame capture. It pairs with `rts_isp_set_raw` (cmd `0x204`) [inf]. |
| **librtsbmp.so.1** | camkit | `rts_bmp_encode`, `rts_bmp_save`, `rts_bmp_check_source`, `cvt_yuv_2_rgb` | Converts YUV to RGB and saves BMP files (debug/snapshot). |
| **librtsaec.so** | libc only | `RTAecNs_API_context_Create`, `RTAecNs_API_Set`, `RTAecNs_API_Process`, `RTAecNs_API_free`, plus obfuscated `IPCam_9xx` internals | AEC and noise suppression. It maps on-chip DMEM through `/dev/mem` (section 5). Uses RLX DSP instructions; decompile is poor (105 `halt_baddata`). |
| **libaacenc.so** | libc only | `AACEncoder_API_context_Create`, `_Set`, `_Get`, `_GetBlockLen`, `_Process`, `_free`, plus obfuscated `AAC_nnn` | Realtek AAC-LC encoder. Uses DSP instructions (72 `halt_baddata`). AAC *decoding* in rmm and xy_stream uses the separate `libfdk-aac.so.1`. |

What the consumers import:
- **rmm** imports the following (`rmm/dynsym.tsv`):
  - `rts_av_init`/`release`
  - `rts_av_create_{isp,h264,mjpeg,osd,audio_capture,audio_playback,audio_mixer,audio_resample,audio_aec,audio_encode}_chn`
  - `rts_av_bind`/`unbind`, `enable`/`disable`/`destroy_chn`, `set_profile`/`get_profile`
  - `rts_av_{start,stop}_{recv,send}`, `rts_av_poll`/`recv`/`send`/`put_buffer`/`get_buffer`/`new_buffer`/`delete_buffer`
  - `rts_av_set_buffer_profile`, `set_buffer_callback`, `set_callback`
  - `rts_av_{query,set,release}_aec_ctrl`
  - `rts_av_{query,get,set,release}_h264_ctrl`, `rts_av_request_h264_key_frame`
  - `rts_av_{get,set}_isp_ctrl`, `rts_av_get_isp_daynight_statis`
  - `rts_av_get_chn_status`, `rts_av_is_idle`
  - `rts_queue_*`, `rts_log`, `rts_free`, `RTS_IS_ERR`
- rmm links `librtsmd`/`librtsmask` (DT_NEEDED) but imports **no** `rts_isp_*md*` or `rts_isp_*mask*` symbols, and **no** OSD2 setters.
- **xy_stream** imports a subset of the same `rts_av_*` calls.

## 2. librtstream core object model

### 2.1 Units, channels, stream

- **Unit classes [obs].** Each media element is a *unit* registered with `rts_av_register_unit` (`0x1ad6c`). Registration takes a 100-byte descriptor, for example `__register_h1encoder` @ `0x1936c`:
  ```
  +0x00 class      (1 = source: isp, audio capture; 3 = filter/sink)
  +0x04 fourcc     (unit type, see below)
  +0x14 =1 (n_inputs? [inf])   +0x1c =2 (output buffers? [inf])  ... (h264 sets both)
  +0x20 init  +0x24 cleanup  +0x28 alloc_buffer  +0x2c start  +0x30 stop
  +0x34 free_buffer  +0x38 check_ready  +0x3c run  +0x40 set_attr  +0x44 get_attr
  +0x48 get_profile  +0x4c set_profile  +0x50 exec_cmd  +0x58 post_connect  +0x5c pre_disconnect
  ```
- **Unit type codes [obs].** These are little-endian ASCII values from the `__register_*` functions and `rts_av_create_*_chn`:
  - `'isp'` `0x707369`
  - `'h264'` `0x34363268`
  - `'mjpg'` `0x67706a6d`
  - `'osd'` `0x64736f`, or `'osd2'` `0x3264736f` when `rts_hw_id > 2` (see `rts_av_create_osd_chn` @ `0x21ec4`)
  - `'auca'` audio capture (class 1)
  - `'aupl'` playback
  - `'amix'` mixer
  - `'arsm'` resample
  - `'aec'` AEC
  - `'aenc'` audio encoder
  - `'adec'` audio decoder
- **Channel creation [obs].** `rts_av_create_chn(type, attr)` @ `0x21c9c` takes a lock and then calls `__create_chn` @ `0x21730`.
  - `__create_chn` allocates a 0x18-byte channel record `{chn_no, unit*, ..., list node}`.
  - It calls `rts_av_new_unit(type, attr)` and inserts the channel into a list sorted by number.
  - It adds the unit to a single global stream (`rts_av_stream_add_tail`). The global context lives at `DAT + 0x3c10..0x3c38`, and `rts_av_apply` creates the stream when it is first needed.
- **Channel numbering [obs].**
  - ISP channel number = `isp_id`. `__create_chn` first test-opens the V4L2 node for that id.
  - Other types start from a base and take the next free number: H.264 starts at 10, MJPEG at 20, OSD2 at 30, OSD at 100, everything else (audio) at 100.
- **Graph wiring.** `rts_av_bind(src_chn, dst_chn)` connects units through pipes (`rts_av_new_pipe`, `rts_av_connect`). Then:
  - `rts_av_enable_chn` starts a unit (it calls the unit's `start`).
  - `rts_av_start_recv(chn)` creates a receive pipe so the application can pull output.
  - `rts_av_start_send(chn)` lets the application push input (used for audio playback and for MJPEG on demand).
- **Loop and threads [inf].** Source files `rtsavloop.c`/`rtsavunit.c`, functions `rts_av_loop_*`, `rts_av_add_poll_fd`, `rts_av_add_task`, `rts_av_trigger_unit`. These suggest a worker loop that runs each unit's `run` callback when its input is ready or its HW fd signals (H1, JPEG and OSD expose `use_sigio`/`set_epoll_hook`).

### 2.2 Application-level API (from xy_stream @ `init_main_stream` 0x4028c8 and rmm `init_main_stream` ~line 4380)

```c
int  rts_av_init(void);                    void rts_av_release(void);
int  rts_av_create_isp_chn(struct rts_isp_attr *);      // returns chn no (<0 = -errno)
int  rts_av_create_h264_chn(struct rts_h264_attr *);
int  rts_av_create_mjpeg_chn(struct rts_mjpeg_attr *);
int  rts_av_create_osd_chn(void);
int  rts_av_set_profile(int chn, struct rts_av_profile *);   int rts_av_get_profile(...)
int  rts_av_bind(int src, int dst);        int rts_av_unbind(int src, int dst);
int  rts_av_enable_chn(int); int rts_av_disable_chn(int); int rts_av_destroy_chn(int);
int  rts_av_start_recv(int); int rts_av_stop_recv(int); int rts_av_start_send(int); int rts_av_stop_send(int);
int  rts_av_poll(int chn);                 // 0 = data ready; <0 = -errno (e.g. -EINVAL if recv not started)
int  rts_av_recv(int chn, struct rts_av_buffer **);
int  rts_av_put_buffer(struct rts_av_buffer *);  // release (refcounted)
int  rts_av_send(int chn, struct rts_av_buffer *);
struct rts_av_buffer *rts_av_new_buffer(size); rts_av_delete_buffer(buf);
int  rts_av_get_chn_status(int chn);       int rts_av_request_h264_key_frame(int chn);
```

### 2.3 Structures (reconstructed)

**`struct rts_isp_attr`** (8 bytes) [obs: `__create_chn` uses `attr+4` as the V4L2 index; xy_stream and rmm fill it]
```c
struct rts_isp_attr { int isp_buf_num; /* xy_stream=2, rmm=3 */  int isp_id; /* 0 main,1 sub,2 3rd */ };
```
- The ISP stream `isp_id` is opened as `/dev/video%d` with `51 + isp_id` [obs: `rts_isp_v4l2_open` @ librtsisp `0x13dd0`, `snprintf("/dev/video%d", id+0x33)`].

**`struct rts_av_profile`** (video) [obs: xy_stream/rmm `rts_av_set_profile` on the ISP and MJPEG channels]
```c
struct rts_av_profile { uint32_t fmt; uint32_t width; uint32_t height; uint32_t fps_num /*=1*/; uint32_t fps_den /*=fps*/; };
```
- `fmt` values [obs: librtscamkit `rts_cvrt_pix_fmt_to_v4l2` @ `0x16ee0`]:
  - 1 = NV12
  - 2 = NV16
  - 3 = YUYV
  - 4 = YM12
  - `0x300` = MJPG
  - `0x301` = H264
- Both apps use `fmt = 1` (NV12) on the ISP channel.
- Audio profile: `{fmt, rate, bits, channels}` with `fmt = 0x8001` for PCM [obs: xy_stream `init_aac_audio_server`].

**`struct rts_h264_attr`** (0x18 bytes) [obs: clamps in `rts_h1encoder_set_attr` @ `0x31b00`]

| Offset | Field | Observed behavior | Example value |
|---|---|---|---|
| +0x00 | `level` | 1..16; 0 is replaced by 12 | 12, which is probably level 4.0 [inf] |
| +0x04 | `qp` | -1..51; -1 = rate control decides | -1 |
| +0x08 | `bps` | clamped to 10 000 .. 40 000 000 | — |
| +0x0c | `gop` | 1..150; 0 becomes 1 | rmm: fps*2; xy_stream: fps |
| +0x10 | `rotation` | must be < 3; passed to `rts_av_set_unit_rotation` | — |
| +0x14 | `videostab` / reserved [inf] | forced to 0 | — |

- After `set_attr`, the library copies `qp`, `bps` and `gop` into the h264 ctrl at +0x14, +0x08 and +0x24.

**`struct rts_mjpeg_attr`** = `{ int rotation; }` [obs: both apps pass only the rotation value].

**`struct rts_video_h264_ctrl`** (0x74 bytes; it lives at `h1_t + 0x6c`). Evidence: `to_h264_ctrl` @ `0x2f8ac` and the clamps in `set_h1_ctrl` @ `0x2fbc8`. Field names are [inf]; they match the Hantro H1 parameters with the same ranges.

| Off | Field | Evidence |
|---|---|---|
| 0x00 | supported_bitrate_mode (read-only mask) | overwritten from the saved copy on every set |
| 0x04 | bitrate_mode | must be a power of 2 and present in the mask. rmm writes **8** and logs "set H264 to CVBR mode" [obs] |
| 0x08 | bitrate | 16 384 .. 20 971 520 |
| 0x0c | max_bitrate | same clamp (rmm: `0x133333` = 1 258 291) |
| 0x10 | min_bitrate | same clamp; mode 8 requires max ≥ min (rmm: `0xc8000` = 819 200) |
| 0x14 | qp | from attr |
| 0x18/0x1c/0x20 | max_qp / min_qp / intra_qp_delta [inf] | not clamped here |
| 0x24 | gop | 1..150 |
| 0x28 | slice_size [inf] | ≤ 127 |
| 0x2c,0x30,0x34 | sei_messages, video_full_range, constrained_intra_pred [inf] | booleans |
| 0x38 | disable_deblocking [inf] | 0..2 |
| 0x3c | enable_cabac [inf] | boolean |
| 0x40 | cabac_init_idc [inf] | 0..2 |
| 0x44 | transform8x8 [inf] | 0..2 |
| 0x4c | hrd [inf] | boolean |
| 0x54 | longterm/… [inf] | ≥ 0 |

- How it is used: `rts_av_query_h264_ctrl(chn, &ctrl)` allocates the struct, then `rts_av_get_h264_ctrl(ctrl)`, edit fields, `rts_av_set_h264_ctrl(ctrl)`, `rts_av_release_h264_ctrl(ctrl)` [obs: rmm].

**`struct rts_av_buffer`** [obs: buffer getters/setters @ `0x26150`..`0x26680`, xy_stream receive loops]
```c
+0x00 void *vm_addr      +0x04 uint32 length      +0x08 uint32 bytesused
+0x0c uint32 phy_addr    +0x10 uint32 flags (bit0 = key frame [inf: xy_stream parses SPS/PPS/IDR only when set])
+0x38 refs  +0x3c type  +0x58/0x5c/0x60 base vm/len/phy (rts_av_init_buffer) +0x64 initialized
+0x70 uint64 timestamp (rts_av_get/set_buffer_ts)  +0x78 source  +0x7c profile (rts_av_set_buffer_profile)
```

**ISP control struct** (used by `rts_av_get/set_isp_ctrl(id, &ctrl)`) [obs: rmm `set_grey_attr` @ `0x40ab94`, librtstream `FUN_0002af14`]
```c
struct rts_video_control { uint32_t type; char name[32]; int32_t min, max, step, def, cur; };  // 0x38 bytes
```

**ISP control IDs** (1..54) [obs: `rts_av_set_isp_ctrl` @ `0x2b724`]. IDs 1..45 are looked up in a table at `0x4c650` (read from the file) that maps them to V4L2 CIDs:

| ID | CID | | ID | CID |
|---|---|---|---|---|
| 1 | BRIGHTNESS 0x980900 | | 11 | POWER_LINE_FREQUENCY |
| 2 | CONTRAST | | 12 | EXPOSURE_AUTO 0x9a0901 |
| 3 | HUE | | 13 | EXPOSURE_AUTO_PRIORITY |
| 4 | SATURATION | | 14 | EXPOSURE_ABSOLUTE |
| 5 | SHARPNESS | | 15 | FOCUS_AUTO |
| 6 | GAMMA | | 16 | FOCUS_ABSOLUTE |
| 7 | AUTO_WHITE_BALANCE | | 17 | ZOOM_ABSOLUTE |
| 8 | WB_TEMPERATURE | | 18 / 19 | PAN / TILT_ABSOLUTE |
| 9 | BACKLIGHT_COMP | | 20 | Realtek private `0x98f900` (raw flip/mirror bitfield) |
| 10 | GAIN | | 21, 22 | flip / mirror: bit 1 / bit 0 of `0x98f900` (`FUN_0002b528`); which name goes with which ID is unconfirmed |
| 42 | private `0x98f902` | | 43 / 44 | RED / BLUE_BALANCE |
| 45 | private `0x98f903` | | 23..38 | no table entry (unsupported for set) [inf] |

IDs 39..41 and 46..54 go to librtsisp functions. Their names come from the rodata name list at `0x4c360`; the ID order is [inf, consistent with rmm using `0x27` = gray]:

| ID | Feature | ISP command |
|---|---|---|
| 39 (0x27) | gray mode (rmm `set_grey_attr`) | `0xa02` |
| 40 | wdr mode | `0xa05` |
| 41 | wdr level | `0xa06` |
| 46 | ldc | — |
| 47 | 3dnr (temporal denoise) | — |
| 48 | dehaze | — |
| 49 | ir_mode | `0xa08` |
| 50 | smart_ir_mode | `0xa13` |
| 51 | smart_ir_manual_level | `0xa14` |
| 52 | in_out_door_mode | `0xa18` |
| 53 | noise_reduction | `0xa1a` |
| 54 | detail_enhancement | `0xa1b` |

Other ISP APIs in librtstream:
- `rts_av_{query,get,set}_isp_{ae,awb,af}`
- `rts_av_refresh_isp_*_statis`
- `rts_av_{get,set}_isp_dynamic_fps`, `_fov_mode`, `_snr_crop`
- `rts_av_get_isp_daynight_statis` (rmm uses this for day/night) → `rts_isp_get_daynight_statis` (cmd `0xaaa`)

### 2.4 Minimal "1080p H.264 + pull frames" (pseudocode from rmm/xy_stream)

```c
rts_av_init();
struct rts_isp_attr ia = { .isp_buf_num = 3, .isp_id = 0 };          // main stream, /dev/video51
int isp = rts_av_create_isp_chn(&ia);
struct rts_av_profile p = { .fmt = 1 /*NV12*/, .width = 1920, .height = 1080, .fps_num = 1, .fps_den = 20 };
rts_av_set_profile(isp, &p);
int osd = rts_av_create_osd_chn();                                    // optional overlay stage (xy_stream: isp->osd->h264)
struct rts_h264_attr ha = { .level = 12, .qp = -1, .bps = 1258291, .gop = 40, .rotation = 0 };
int h264 = rts_av_create_h264_chn(&ha);
rts_av_bind(isp, osd); rts_av_bind(osd, h264);                       // rmm binds isp->h264 directly
struct rts_video_h264_ctrl *c; rts_av_query_h264_ctrl(h264, &c); rts_av_get_h264_ctrl(c);
c->bitrate_mode = 8 /*CVBR*/; c->max_bitrate = 1258291; c->min_bitrate = 819200;
rts_av_set_h264_ctrl(c); rts_av_release_h264_ctrl(c);
rts_av_enable_chn(isp); rts_av_enable_chn(osd); rts_av_enable_chn(h264);
rts_av_start_recv(h264);
for (;;) {
    if (rts_av_poll(h264)) { usleep(1000); continue; }
    struct rts_av_buffer *b = NULL;
    if (rts_av_recv(h264, &b) || !b) continue;
    write(out, b->vm_addr, b->bytesused);   // Annex-B; b->flags&1 => IDR (SPS/PPS/IDR NALs)
    rts_av_put_buffer(b);
}
// teardown: rts_av_stop_recv; rts_av_disable_chn x3; rts_av_destroy_chn x3; rts_av_release();
```

- **Snapshot** [obs: xy_stream `main`]. Create an MJPEG channel bound to the same source, give it the same profile, then call `rts_av_enable_chn` and `rts_av_start_recv`, then poll, `rts_av_recv`, copy the JPEG out, `rts_av_put_buffer`, `rts_av_stop_recv` and `rts_av_disable_chn`.
- **Stream settings the apps use** [obs]:
  - rmm main stream: 1920×1080 @ 20 fps at 1.2 Mbps for model config '1', or 1280×720 @ 20 at 0.8 Mbps for config '2'.
  - xy_stream: main 1280×720 @ 20 at 1.2 Mbps, sub (`isp_id` 1) 640×480 @ 20 at 200 kbps, raw (`isp_id` 2) 320×240 NV12.

## 3. User ↔ kernel boundary

### 3.1 Device nodes [obs: librtsisp strings and `*_open` functions]

| Node | Kernel module (miscdev name) | Opened by | Role |
|---|---|---|---|
| `/dev/video51+N` | rts_cam + rts_camera_soc (V4L2 `rts_camera`) | `rts_isp_v4l2_open` → `rts_v4l2_open` | Per-stream NV12 capture; vb2 buffers come from rts_cam_mem (`rts_dma_contig_memops`) |
| `/dev/rtscamctrl` | rts_cam/soc ("rtscamctrl") | `rts_isp_ctrl_open` | Control and vendor-command channel to the ISP MCU |
| `/dev/rtscam` | rts_camera_soc ("rtscam") | `rts_isp_soc_open` | SoC camera attach/detach, LDC, temporal denoise (TD), pause/resume |
| `/dev/rtsmem` | rts_cam_mem ("rtsmem") | `rts_isp_mem_open` | DMA/CMA buffer allocator plus mmap |
| `/dev/rtslock` | rts_cam_lock ("rtslock") | `rts_wq_lock_*` | Named cross-process wait-queue locks for the shared HW blocks |
| `/dev/rtshx280enc` | rts_camera_hx280enc ("rtshx280enc") | `rts_reg_h264_open` | H1 register mmap, IRQ, clock |
| `/dev/rtsjpgenc` | rts_camera_jpgenc ("rtsjpgenc") | `rts_reg_mjpg_open` | JPEG encoder registers |
| `/dev/rtsosd2` | rts_camera_osd2 ("rtsosd2") | `rts_reg_osd2_open` | OSD2 registers |
| (`rtstream`) | rtstream.ko | — | Debug registry of streams/units (sysfs `streaminfo`); no user-space caller found [inf] |
| `/sys/devices/platform/rts_soc_camera/{loadfw,sensor,hz,...}` | rts_camera_soc | rmm, `rts_load_fw` | Firmware load, sensor ID, power-line Hz |

### 3.2 ioctls

MIPS encoding: `0x2…` = `_IO`, `0x4…` = `_IOR`, `0x8…` = `_IOW`, `0xc…` = `_IOWR`. Each user-space ioctl number is also present in the matching .ko.

**`/dev/rtscamctrl`**, magic `'r'`:
- `0xc0087201`: vendor command, `_IOWR('r',1,{u32 code; void *arg})` (`rts_exec_vendor_cmd` @ `0x140b4`). The kernel dispatches `code` to soc sub-commands (magic `'s'`).
- `0xc0047202`: get the physical address of a video buffer (`rts_isp_get_video_phy_addr`).

**Sub-commands sent through the vendor channel**, magic `'s'`:

| Code | Name | Where |
|---|---|---|
| `0xc0107331` | **ISP MCU command** `{u16 cmd; u8 index; u8 len; u16 param; u16 addr; void *buf}` | `__rts_isp_exec_isp_cmd` @ `0x17490` |
| `0xc0087332` | extended command batch | `__rts_isp_exec_ext_cmds` |
| `0x40047334`, `0x40047335` | ISP register window base/size | `rts_reg_isp_open` |
| `0x40047337` | get stream id | `rts_isp_get_streamid` |
| `0xc0087336`, `0xc0047339` | MD DMA setup/trigger [inf] | used by librtsmd |
| `0x8004733a` / `0x4004733b` | enable / get temporal denoise | |
| `0x8008733c` / `0x2000733d` / `0x4004733e` | enable / disable / state LDC; the enable call passes the LDC table | |
| `0x20007360` / `0x20007361` | ISP pause / resume | |
| `0xc0047350` / `0xc0047351` | request / free GPIO owned by the MCU | |
| `0x80087342` / `0xc0087343` / `0x40047344` | upload / dump / size of the firmware | |
| `0x40087345` | `rts_get_hw_id` | |
| `0x20007340` / `0x20007341` | soc detach / attach (on `/dev/rtscam`) | |

**`/dev/rtsmem`** [obs: `rts_isp_mem_*` and rts_cam_mem.ko]:
- `0xc0147338`: alloc. Struct `{size, mmap_off, phy, ?, flags}`, after which the caller does `mmap(fd, mmap_off)`.
- `0x80047339`: free.
- `0xc0147340`: realloc.
- `0x80247341`: set_info (attaches a name; visible in sysfs `meminfo`).
- `0xc0047360` / `0xc0047361`: cache sync to device / to CPU.
- `0x800c7380`: DMA memcpy `{dst,src,len}` (`rts_dma_memcpy`).
- `0xc0047381` exists in the kernel only.
- The kernel allocates from a reserved region ("isp resvd mem addr : 0x%08x, size : 0x%x") using a bitmap, and tracks total/used/left.

**`/dev/rtslock`**, magic `'l'`:
- `0x80046c01` alloc, `0x80046c02` free, `0x80086c03` init/set num, `0x80046c04` wait, `0x80046c05` post, `0x80146c06` set name (20-byte name).

**Encoder/OSD register devices**:
- `0x40046803` / `0x40046804`, `_IOR('h',3/4)`: HW register offset and I/O size. This matches the stock Hantro `HX280ENC_IOCGHWOFFSET`/`IOCGHWIOSIZE` [inf].
- `0x20006809`: H.264 done/release [inf].
- JPEG uses `'j'` 1/2 (offset/size), `3` reset and `4` done. OSD2 uses `'o'` 1/2 and `3` done.
- After the ioctls, the library `mmap`s the register window and then accesses registers with `rts_reg_read_reg`/`write_reg`. Completion arrives through SIGIO or epoll (`rts_reg_handle_sigio`, `*_set_epoll_hook`).

**librtsv4l2** uses only standard VIDIOC ioctls:
- `ENUM_FMT`, `G_FMT`/`S_FMT`, `REQBUFS`, `QUERYBUF`, `QBUF`/`DQBUF`, `STREAMON`/`STREAMOFF`
- `G_PARM`/`S_PARM`, `G_CTRL`/`S_CTRL`, `G_EXT_CTRLS`/`S_EXT_CTRLS`, `ENUM_FRAMESIZES`, `ENUM_FRAMEINTERVALS`

### 3.3 How librtsisp drives the ISP

There are two paths:

1. **Standard V4L2 controls** on `/dev/video5x` (brightness, contrast, exposure and the rest; see the ID table above). The soc driver exposes these with UVC-style names: "Brightness", "White Balance Temperature, Auto", "Exposure (Absolute)", "AE Gain", "Sensor Crop X/Y", "Roll (Absolute)", and so on [obs: rts_camera_soc strings].
2. **ISP MCU mailbox.** `rts_isp_exec_isp_cmd(fd, cmd, index, len, param, addr, buf)` goes to ioctl `0xc0107331`, then to the soc driver, which writes to the MCU command registers.
   - Kernel log strings: "soc exec command %04x %02x %02x %04x %04x", "MCU is busy now", "exec cmd(0x%04x) timeout".
   - Command layout: the high byte is the group, and bit 7 of the low byte means GET.

| Group | Commands [obs: `rts_isp_*` in librtsisp/librtsmd/librtsmask] |
|---|---|
| 0x00 raw access | `0x01`/`0x81` write/read XMEM; `0x82` read I²C; `0x03`/`0x83` write/read sensor reg |
| 0x01 device info | `0x181` device descriptor; `0x188` FW version (32 B); `0x18a` API version; `0x18e` supported sensor name |
| 0x02 stream | `0x204` set raw; `0x208` crop window |
| 0x06 sensor/scaler | `0x681` sensor fmt; `0x682` scale coeff; `0x683` zoom start |
| 0x07 motion detect | `0x701` enable (bit0 enable, bit1 extra on hw_id>2); `0x702` data fmt; `0x704`/`0x705`/`0x706`/`0x707` grid/rect/(abs); `0x708` sensitivity; `0x709` percentage/threshold; `0x70a` frame interval; `0x70b`/`0x70c` grid/rect res; `0x70e` dma; `0x70f` trigger data; `0x710` dma ready; `0x711` detect mode; `0x712`..`0x714` line area/nice thd/pause pos; GETs `0x781`..`0x795` (`0x795` line result) |
| 0x09 privacy mask | `0x901` enable; `0x902` color; `0x904`..`0x909` grid/rect/abs/res; GETs `0x981`..`0x989` |
| 0x0a IQ/3A | `0xa01`/`0xa81` ISP function bitmask (bit1 = LDC, bit2 = dehaze); `0xa02` gray; `0xa05`/`0xa06` WDR mode/level; `0xa07` 3D-NR level; `0xa08` IR mode; `0xa09` AE gain (6 B); `0xa0a` AE weight; `0xa0e` AE target delta; `0xa10` AE gain max; `0xa12` AE min fps; `0xa13`/`0xa14` smart-IR mode/manual level; `0xa15` dynamic fps; `0xa18` in/outdoor; `0xa19` FOV mode; `0xa1a` NR level; `0xa1b` detail enhancement; GET-only `0xa83` IQ table attr; `0xa84` 3A version; `0xa8b` AE statis; `0xa8c` AWB statis; `0xa8d` AWB CT gain; `0xa91` AF statis; `0xaaa` day/night statis |
| 0x0c GPIO (MCU-owned) | `0xc02`/`0xc82` direction; `0xc03`/`0xc83` value; `0xc81` use status |

## 4. ISP firmware and sensor

### 4.1 `/sys/devices/platform/rts_soc_camera/loadfw`

The write handler is `FUN_0001708c` in rts_camera_soc.ko. It parses its input with `sscanf("%127s %127s")` [obs]. It accepts three forms:

- **`"1"`**: `request_firmware("isp.fw")` (the module declares `firmware=isp.fw`), then `rtscam_soc_attach`. Normal start.
- **`"2"`**: detect mode.
  1. Loads `isp.fw` and starts the MCU.
  2. Reads the sensor ID with `rtscam_soc_get_sensor_id`, which goes through the MCU.
  3. Stores the ID and creates the `sensor` sysfs attribute (`device_create_file(..., "sensor")`).
  4. Stops the MCU without attaching.
- **`"<fwpath> [iqtable]"`**: loads that firmware.
  - If a second token is given, it calls `request_firmware(iqtable)`. The table's byte 0 must equal the firmware's byte at offset `+0x7000`, and its bytes 1-2 give the size ("fw's ver[%d] and iq table's ver[%d] is not match").
  - It then calls `rtscam_soc_attach`.

Other sysfs attributes [obs]: `buf_prealloc`, `sensorfps_max`, `drop_frames`, `num_buffers`, `delay`, `meminfo`, `loadfw`, `timeout`, `streaminfo`, `apiversion`, `sensor`, `gpio`, `hz`.
- librtsisp's `rts_load_fw` writes to `/sys/devices/platform/rts_soc_camera.0/loadfw`. Note the `.0` suffix; rmm uses the path without it.

**How rmm selects the firmware** [obs: rmm `FUN_00407a40` @ `0x407a40`; init.sh lines 78-107 hold the old shell version, now commented out]:
1. Writes `"1\n"`, then `"2\n"`, to `loadfw`.
2. Reads `.../sensor`, which reports "Sensor ID SC1245/SC2235/SC2230/SC2232".
3. Writes `/home/lib/<sensor>/isp.fw` to `loadfw`. For SC2230 the variant is `isp_mipi`/`isp_jin`/`isp_lang.fw`, picked by a config byte at `+0xc` (`'7'`/`'8'`). rmm also has an `sc2390` path, which is not present in this image.
4. If no sensor was found, it falls back to `"1"`.

### 4.2 `isp.fw` format [obs: header bytes read with `python -I`; interpretation inf]

- **Size.** 131 024 bytes (`0x1FFD0`). `sc1245` is 131 072 bytes. The tail is padded with `0xFF`.
- **8051 code image [inf].** Byte 0 is `02 xx xx` (8051 `LJMP`), followed by another `LJMP` at 0x0003 (interrupt vector), and the rest is typical 8051 code (`22` = RET, …). So the ISP MCU is an **8051 core** and the file is its raw code image with no container header [inf].
  - The runtime "header/length/magictag/ic name/vid/pid/fw ver/cus ver" printout in `rtscam_soc_get_fw_version` comes from the 32-byte reply to MCU command `0x188`, not from a file header.
- **Version and customer strings** right after the vectors (offset ~6):
  - `"1.0.0."` + `"realtek_"` (`load/isp.fw`)
  - `"4.2.0."` + `"realtek_"` (`sc2232`)
  - `"4.2.0."` + `"xiaoyi_"…"0005"` (`sc2230/isp_mipi.fw`)
- **Detection firmware.** `userdata/lib/load/isp.fw` contains a sensor list: SC1135, SC1145, SC3035, SC2135, SC1035, SC1245, SC1235, SC2235, SC2232, SC2230, SC4236. This is consistent with it being the generic detect/default firmware [inf].

### 4.3 ISP features exposed

- **Exposure/AE**:
  - V4L2 IDs 12-14.
  - `rts_isp_{get,set}_ae_{gain,gain_max,min_fps,target_delta,weight}`, `get_ae_statis`/`window_num`/`histogram_num`.
  - librtstream wrappers `rts_av_*_isp_ae`.
- **AWB**: V4L2 IDs 7, 8, 43, 44; `rts_isp_get_awb_statis`/`ct_gain`, `awb_auto_gain_adjustment`; `rts_av_*_isp_awb`.
- **AF**: `rts_av_*_isp_af`.
- **Day/night and IR-cut**:
  - Gray mode (`0xa02`), IR mode (`0xa08`), smart-IR mode/level (`0xa13`/`0xa14`), in/outdoor (`0xa18`), day/night statistics (`0xaaa`).
  - MCU GPIOs (`0xc02`/`0xc03`) can drive an IR-cut or LED [inf].
  - Yi drives IR hardware through its own `/dev/cpld_periph` (app side, not SDK).
- **Mirror/flip**: private CID `0x98f900` bits; ctrl IDs 20-22.
- **WDR**: `0xa05`/`0xa06`.
- **Noise**: 3D-NR level `0xa07`; temporal denoise is enabled through a kernel ioctl that allocates the TD buffer ("alloc td buffer", "%s temporal denoise"); NR level `0xa1a`.
- **Dehaze**: ISP function bit 2.
- **Detail enhancement**: `0xa1b`.
- **LDC (lens distortion correction / dewarp)**:
  - `rts_isp_{set,get}_ldc`, `enable_ldc`/`disable_ldc`.
  - The table goes to the kernel (`0x8008733c`), which keeps an LDC buffer ("please init ldc buffer first", "invalid ldc table").
  - ISP function bit 1 enables it.
  - librtsgeom is unrelated.
- **Other**: crop window, FOV mode, dynamic fps, power-line frequency (V4L2 ID 11, plus sysfs `hz`), sensor register and I²C access.

## 5. Audio

- **Kernel** [obs: rlx_*.ko strings]:
  - Card `RLX_INTERN_CARD` with two PCMs: `RLX INTERN PCM1` on `rlx-codec-digital` and `RLX INTERN PCM2` on `rlx-codec-analog`. So `hw:0,1` is the analog codec [inf].
  - Mixer controls include "Master Capture Volume/Switch", "Line Playback Volume", "Rear Amic Capture Volume", "Capture Source Select", plus DAPM widgets for AMIC/DMIC/HPOUT/AOUT.
  - Stack: `rlx_dma` + `rlx_i2s` + `rlx_codec` + `rlx_snd_intern`.
  - rmm adjusts volume directly with `snd_hctl_*`.
- **librtstream audio units.** These use ALSA through `libasound` (30 `snd_*` imports), with speex resampler code built in. Unit attributes [obs: xy_stream `init_aac_audio_server` @ `0x402f78`]:
  - Capture and playback attr: `{char dev_node[64] /* "hw:0,1" */; uint32 bits /*16*/; uint32 channels /*1*/; uint32 rate /*16000*/;}`.
  - `rts_av_create_audio_resample_chn(rate, bits, channels)` and `rts_av_create_audio_mixer_chn()`.
  - `rts_av_create_audio_encode_chn(codec_id, bitrate)`.
- **Codec IDs** [obs: table @ `rts_audio_cvrt_codec_id_to_fmt` `0x4667c`]. The supported encoder IDs are {2,3,4,5,7}:

  | codec_id | fmt | Meaning |
  |---|---|---|
  | 2 | `0x8003` | probably µ-law [inf] |
  | 3 | `0x8004` | probably A-law [inf] |
  | 4 | `0x8001` | PCM |
  | 5 | `0x8005` | G.726 [inf] |
  | 7 | `0x8007` | **AAC** (both apps use 7) |

- **Graph used by both apps** [obs: xy_stream bind-error strings and rmm ~line 3850]:
  ```
  app --send--> resample(dtom) -> mixer -> playback(hw:0,1)
                                         playback --(echo ref)--> resample -> aec
  capture(hw:0,1) ----------------------------------------------------------> aec -> resample -> aenc(AAC) --recv--> app
  ```
  - rmm also registers a PCM callback on the AEC channel with `rts_av_set_callback(aec_chn, {cb, priv, …}, 0)`.
- **AEC control** [obs: rmm `rts_av_query_aec_ctrl` → `ctrl[0]=1, ctrl[1]=1, ctrl[2]=0x23` → `set`; librtstream `0x3a970`/`~0x3a3f0`]:
  - Struct `{aec_enable, ns_enable, ns_level}` (names [inf]).
  - The values reach `RTAecNs_API_Set(ctx, &v, 4, id)` with id 0 = AEC on/off, id 1 = NS on/off, id 4 = level clamped to 15..40.
  - librtsaec maps on-chip DMEM through `/dev/mem` ("AEC_Dmem_Addr", "Dmem is not enable", "HW version error") and contains a leftover `iomem` debug tool (`/dev/dbg_iomem`).
- **AAC encoding** [obs: librtstream `rts_aac_encode_init` ~`0x47ef4`]:
  - Sample rate must be 8000, 16000 or 48000; channels 1..2; bitrate is capped at 2×rate.
  - Call sequence: `AACEncoder_API_context_Create()`, `Set(ctx,{rate,bitrate},4,0)`, `Set(ctx,{channels},4,1)`, `GetBlockLen`, then `Process(ctx, in, out, samples)`; input is 16-bit.
  - rmm uses bitrate 32000; xy_stream uses 1000, which the encoder clamps.

## 6. Motion detection and OSD

- **librtsmd** (hardware MD in the ISP MCU, command group `0x07`):
  - Modes: grid bitmap, rect (absolute or resolution-relative), and "line" (tripwire, using librtsgeom).
  - Settings: sensitivity, percentage/threshold, frame interval.
  - Results come either from `rts_isp_get_md_result`/`get_md_status`/`get_md_line_result`, or as a DMA-pushed data buffer (`set_md_dma`, `trig_md_data`, `check_md_data_ready`, `get_md_data_{fmt,bpp,length}`).
  - The kernel logs "motion detected %d" from the ISP IRQ.
  - **rmm imports none of these.** Yi's motion logic (`motion_stat`) is computed in rmm. That is covered by another agent; it may use `rts_av_get_isp_daynight_statis` or AE statistics [unknown].
- **librtsmask**: privacy-mask rects/grids with a color (command group `0x09`).
- **OSD2**:
  - Low level: librtsosd2 programs per-block bitmap commands with a color table (`__write_each_blk_info_cmd`, `__write_color_table_info_cmd`) and DMA buffers.
  - High level (librtstream): `rts_av_query/set/get/release_osd2`, `rts_av_{set,get}_osd2_single`, `pause/resume_osd2_single`, `rts_av_{set,get}_osd2_color_table`, `rts_av_set_osdenc_fps`, `rts_av_update_osdenc_flick_info`, `rts_av_rotate_bitmap`.
  - **No font engine** exists in any SDK library. Text and timestamps must be rendered by the app into bitmaps; rmm has the strings `OSD_Bitmap888ToRgb2222` and `OSD_Bitmap888ToRgb8888` [obs].
  - rmm and xy_stream create and bind the OSD channel but import **no** `rts_av_*osd2*` setters, so the OSD stage is passive in this build [inf].

## 7. xy_stream, rtpd.so, luaext.so

- **xy_stream** (`rootfs/bin`; no init script references it):
  - It is a **Yi (Xiaoyi) test/demo tool**, not a Realtek sample. The "xy" prefix and the output path `/mnt/xy_snapshot_%lld.jpg` point to Yi.
  - It reuses rmm's code and log strings verbatim: `init_main_stream`, `rmm_init_ai`, `rmm_init_isp error`, `send_ao_beep`, `get_mjpeg_data`.
  - What it does:
    - Builds the main, sub and raw ISP streams and an H.264 + MJPEG pipeline (H.264 frames are received and parsed for SPS/PPS/IDR, then discarded).
    - Builds the full audio graph and plays an AAC file (`argv[2]`) decoded with fdk-aac.
    - Writes `/mnt/encode.aac` and `/mnt/record.pcm`.
    - Takes a JPEG snapshot on `SIGALRM`.
- **rtpd.so** (`userdata/app/locallib`):
  - A **Lua C module** (`luaopen_rtpd`). Functions: `start`, `setup`, `setuptcp`, `locksend`, `unlocksend`, `teardown`.
  - It is the RTP/RTCP sender for an RTSP server written in Lua.
  - It pulls frames from rmm's shared-memory ring "fshare" (`/fshare_frame_buf`, `/fshare_write_lock`, `/fshare_read_notify_%d`; rmm has the matching `fshare_create`/`write`).
  - It does **not** link any SDK library.
- **luaext.so**: Lua helper modules `luaext_sys` (sockets, poll, `tcplisten`/`tcpconnect`/`udpbind`, multicast, `getipaddr`/`getmacaddr`, `mkfifo`, `msleep`), `luaext_app`, `luaext_md5`, `luaext_sha1`, `luaext_aes`. No SDK use.
- No Lua interpreter or `.lua` scripts were found in the extracted tree, so these two modules look orphaned or optional (an RTSP feature that is not shipped or is enabled elsewhere) [inf].

## 8. Coverage limits

- librtsaec, libaacenc and librtsgeom contain RLX DSP instructions that Ghidra cannot decode. Their APIs above come from the export list and the call sites in librtstream.
- librtsv4l2's decomp has no names; its ioctl numbers were matched by value.
- The kernel ioctl dispatchers were only checked by grepping constants and strings, not fully decompiled.
- `rtstream.ko` ioctls (`0xc00c7201`..`0xc02c7204`, magic `'r'`) have no user-space caller in these binaries.

## Open questions

1. Which ISP ctrl ID is flip and which is mirror (21 vs 22), and what are private CIDs `0x98f902` and `0x98f903` (IDs 42 and 45)?
2. The meaning of `bitrate_mode` bits 1, 2 and 4 (8 = CVBR is observed).
3. Whether IQ tables are used at all. No IQ file is shipped and rmm writes only a single token.
4. Where Yi's motion detection comes from (rmm does not use librtsmd), and whether the OSD timestamp is drawn at all.
5. The `"%c"` config byte at `+0xc` that selects the SC2230 firmware variant (jin/lang/mipi). It looks like a hardware board/lens ID.
6. Whether `/home/lib/<sensor>/isp.fw` paths actually work. The kernel uses `request_firmware`, so the path is resolved by the firmware helper (mdev) [inf].
