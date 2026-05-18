# `rmm` — stock Realtek/Yi camera control daemon

Reverse-engineering notes from Ghidra on the stock `/home/app/rmm` binary
shipped with Yi/Victure RTS3903N-based cameras. The binary is the
**Realtek/Yi central control daemon**: it owns the camera's audio stack,
manages light/IR switching, scans QR codes for WiFi provisioning, brokers
between the cloud daemons (`cloud`, `p2p_tnp`, `mp4record`, `oss`, `dispatch`)
via POSIX message queues, and is the process that performs the ISP
firmware load that brings the sensor up.

These notes were captured against:

- Architecture: MIPS little-endian (MIPS:LE:32)
- Image base: `0x00400000`
- File size: 158,523 bytes
- Source modules (inferred from log strings): `rmm.c`, `media_rtl.c`,
  `media_common.c`, `ringbuf.c`, `motrk_msqr.c`, `motion_detect.c`,
  `wave_parser`, `rts_amixer_*`, `fshare_*`, `zbar/*`.
- Linked against: `libpthread`, `libc`, `libm`, `librt`, `libdl`,
  `librtstream.so.2`, `librtsmd.so.1`, `librtsmask.so.1`, `librtscamkit.so.1`,
  `librtsisp.so.1`, `libubacktrace.so.0`, `libasound.so.2`, `libfdk-aac.so.1`.

## 1. High-level architecture

```
        ┌─────────────────────────────────────────────────────────────┐
        │                    rmm process                              │
        │                                                             │
        │  main()/auto_loop_func   ← supervises gray/light state      │
        │                                                             │
        │  ┌──────────────┐  ┌──────────────┐  ┌──────────────┐       │
        │  │  msg_proc    │  │ motion_proc  │  │ daynight_*   │       │
        │  │ (mq_receive  │  │  (modet_*)   │  │  (saradc.0)  │       │
        │  │  on /ipc_rmm)│  │              │  │              │       │
        │  └──────────────┘  └──────────────┘  └──────────────┘       │
        │                                                             │
        │  ┌──────────────┐  ┌──────────────┐  ┌──────────────┐       │
        │  │ abnormal_    │  │ media_rtl_   │  │  zbar_proc   │       │
        │  │ sound_detect │  │ get_video x2 │  │ (QR/WiFi     │       │
        │  │ (FFT/MFCC)   │  │              │  │  provisioning│       │
        │  └──────────────┘  └──────────────┘  └──────────────┘       │
        │                                                             │
        │      RTS-AV chain: ISP → H264 → OSD                         │
        │                  + JPEG, audio capture/playback/AEC         │
        └─────────────────────────────────────────────────────────────┘
                │            ▲              ▲                  ▲
                │            │              │                  │
       /ipc_rmm │   /ipc_dispatch    /dev/cpld_periph     /dev/ssp
       (mq_*)   ▼   (mq_*)           (LEDs, IR-cut)      (PTZ motor)
        ┌──────────┐   ┌────────────┐
        │ dispatch │ ← cloud,oss,p2p,mp4record send commands here
        └──────────┘   └────────────┘
                ▲
                │
        /tmp/mmap.info (2720B file, mmap'd by every stock daemon)
        /dev/shm/fshare_frame_buf (~1.7MiB shared frame buffer)
        /dev/shm/fshare_*lock, sem.fshare_read_notify_0..16
        /tmp/logsock (AF_UNIX SOCK_DGRAM, fed by rmm_log)
```

`rmm` is one of seven stock daemons that all share `/tmp/mmap.info` (the
factory device-state file written by `dispatch`/`cloud` at startup) and the
`/dev/shm/fshare_*` shared memory region used to pass YUV/jpeg/raw frames
out of the RTS-AV pipeline to other consumers (cloud uploaders, motion
recorder, OSS push, etc).

Two operating modes, selected by `argv[0]`:

- **`/home/app/rmm`** (normal) — daemon mode. Boots into the supervisor
  loop with all six worker threads.
- **`/home/app/aacplay <file.aac> [ms]`** — same binary, different
  `argv[0]`. Standalone helper that plays one AAC file via the RTS audio
  chain. Used for chime/voice prompts from shell scripts (e.g. the
  `poweron.aac` played from `/home/app/init.sh`).

## 2. Process startup (`main` at 0x0040440c)

```c
int main(int argc, char **argv) {
    /* argv[0] basename → "aacplay" branch or normal */
    plt_signal(SIGPIPE, SIG_IGN);
    memset(g_state_400b, 0, 0xf1f4);
    register_media_backend("realtek", &media_rtl_ops_vtable);

    if (strcmp(basename, "aacplay") == 0) {
        /* Standalone aacplay mode */
        aacplay_run(argv[1], duration_ms);
        return 0;
    }

    /* === Daemon mode === */
    init_mqueue(&g_mq_dispatch, "/ipc_dispatch");  /* O_CREAT|O_RDWR|O_NONBLOCK */
    init_mqueue(&g_mq_rmm,      "/ipc_rmm");
    fshare_create();                                 /* /dev/shm/fshare_frame_buf */
    g_rmm_info = open_and_mmap_readonly("/tmp/mmap.info", 0xaa0);

    /* Spin until dispatch has finished populating mmap.info */
    while (g_rmm_info[0x50c] == 0) ms_sleep(50);

    g_factory_data_ptr = &g_rmm_info[0x1f5];        /* hw version / region info */
    probe_and_load_isp_fw();                         /* see §6 */

    g_cpld_fd = open("/dev/cpld_periph", O_RDWR);   /* if accessible */
    if (g_factory_data_ptr[0] == '1' && /dev/ssp accessible)
        g_ssp_fd = open("/dev/ssp", O_RDWR);        /* PTZ motor */

    /* Wait for any earlier /home/app/aacplay subprocess to exit */
    while (popen("ps|grep \"\\<aacplay\\>\"|grep -v grep") returns lines)
        usleep(50000);

    ioctl(g_cpld_fd, 0x20007011);                    /* CPLD: enable audio amp */
    cb_init(&g_audio_ringbuf, DAT_00436978);
    audio_init(0);                                   /* RTS audio chain */
    raw_video_init(0);                               /* MJPEG capture for QR */

    pthread_create(&t_msg, NULL, msg_proc, NULL);

    if (g_rmm_info[0x5bc] == 1 &&                    /* audio mode requires QR */
        access("/tmp/rmm_skip_zbar") != 0) {
        media_ai_aacstream_init();
        zbar_proc();                                 /* blocks until WiFi provisioned */
    } else {
        g_ready_flag = 1;
        system("echo 3 > /proc/sys/vm/drop_caches");
    }

    raw_video_init(2);                               /* tear down QR-only chain */
    /* Optional factory-test fast path skipped here */

    media_rtl_set_flip(g_rmm_info[0x600] == 1);
    media_rtl_set_ldc(g_rmm_info[0x4dc] >= 0x29);
    video_init();                                    /* H264 + OSD + JPEG chains */

    pthread_create(&t_v0,  NULL, media_rtl_get_videostream, &g_stream_arg_0);
    pthread_create(&t_v1,  NULL, media_rtl_get_videostream, &g_stream_arg_1);
    pthread_create(&t_ai,  NULL, FUN_004081a8, NULL);          /* media_ai_get_lpcmstream */
    pthread_create(&t_mot, NULL, motion_proc, NULL);
    pthread_create(&t_asd, NULL, abnormal_sound_detection_func, NULL);
    pthread_create(&t_dn,  NULL, daynight_switch_func, NULL);

    /* auto_loop_func — main()'s own loop body */
    for (;;) {
        if (g_rmm_info[0x89c] == 1 || g_rmm_info[0x608] == 1) {
            /* exit / debug mode — set IR LED PWM, clear lights */
        } else {
            if (g_rmm_info[0x9ed] != g_last_light_state)
                set_light_switch(g_rmm_info[0x9ed] == 1);
            if (g_is_gray_switch_local != g_last_gray_state) {
                media_venc_set_color2grey(g_is_gray_switch_local);
                set_ir_led_pwm(g_is_gray_switch_local);
            }
        }
        sleep(1);
    }
}
```

The shared `/tmp/mmap.info` block (size `0xaa0 = 2720` bytes) is the
inter-process state. `rmm` mmaps it `MAP_SHARED | PROT_READ` — it
*reads* the file but never writes; `dispatch` is the writer.

## 3. Threads

| Entry point | Thread name (prctl) | Purpose |
|---|---|---|
| `main` (auto_loop_func) | (none) | Supervisor — polls gray/light state, sets IR LED PWM via CPLD/SSP. |
| `msg_proc`              | `msg_proc` | mq_receive loop on `/ipc_rmm`. Handles `RMM_SPEAK_*` audio cues and `RMM_APP_AUDIO_MODE_*` mode switches. See §4. |
| `media_rtl_get_videostream` (`FUN_0040801c`) | `get_video_<n>` | Drains an H.264 stream from the RTS encoder into the fshare ring (called twice, once per stream). |
| `FUN_004081a8` | `media_ai_get_lpcmstream` (inferred) | Drains 16-bit linear PCM mic capture into shared memory for `oss`/`cloud`. |
| `motion_proc` (`FUN_004058a4`) | `motion_proc` | Reads YUV frames, runs the `modet_*` (motion detect) algorithm from `motion_detect.c`/`motrk_msqr.c`, fires `RMM_SPEAK_MOTION_*` IPC messages. |
| `abnormal_sound_detection_func` (`FUN_00406320`) | `abnormal_sound_detection_func` | Reads from the audio ring buffer (`cb_read`), runs FFT/spectrum analysis (V20161229.2 algorithm), sends `send_abnormal_sound_detect_msg` (4-byte payload, opcode `0x60046004`) every ≥601s (`0x259`). |
| `daynight_switch_func` (`FUN_004050bc`) | `daynight_switch_func` | Reads `/sys/devices/platform/rts_saradc.0/in0_input` (light sensor ADC) every 1s; thresholds 0x92e / 0xbeb (≈2350 / 3055 lux units); toggles `g_is_gray_switch_local` and the CPLD IR-cut. Mode selection depends on hardware revision byte `g_factory_data_ptr[3]`: `'1'` uses the SDK's daynight statistics (`rts_av_get_isp_daynight_statis`), `'2'`/`'3'`/`'4'`/`'5'` use the ADC. |
| `zbar_proc` (`FUN_00407168`) | `zbar_proc` | Inline (called from main, not pthread'd). 640×360 grayscale frames into the libzbar QR scanner. Looks for a string with prefix `9JFSjo8HUbhou5776NJOMp9i90ghg7Y78G78t68899y79HY7g7y87y9E...` (Yi's WiFi-provisioning QR payload). On decode, writes `/tmp/got_wpa` and `send_wifi_conf_msg` (opcode `0x70`). |
| `LAB_00411460` (spawned by `media_ai_aacstream_init`) | (TBD) | AI AAC stream worker. |

## 4. `/ipc_rmm` message handler (`msg_proc`)

`msg_proc` reads 0x200-byte messages from the `/ipc_rmm` POSIX queue. The
first uint16 of each message is the opcode. Observed opcodes:

| Opcode  | Symbol                       | Action |
|---------|------------------------------|--------|
| `0x100e` | `RMM_SPEAK_WARNING`         | Play `/home/app/audio_file/common/warning.aac` |
| `0x1010` | _(audio mode change?)_      | Re-read `g_rmm_info[0x9ed]` (gray mode); call `set_light_switch(0)` if `!= 1` |
| `0x1011` | _(1k tone test)_            | Play `/tmp/sd/1k.aac` |
| `0x1021` | `RMM_APP_MODE_EARPHONE`     | (log only) |
| `0x1022` | `RMM_APP_MODE_SPKER`        | (log only) |
| `0x1025` | (from `send_do_speaking_msg`)| client requests TTS playback |
| `0x1026` | (from `send_stop_speaking_msg`)| client requests TTS stop |
| `0x1028` | _(LDC toggle)_              | `media_rtl_set_ldc(g_rmm_info[0x4dc] >= 0x29 ? 1 : 0)` |
| `0x102d` | _(snapshot capture request)_| `media_rtl_get_jpeg(0, picname)`; then `send_capture_finish_msg` to `/ipc_dispatch` |
| `0x102f` | `RMM_SPEAK_BIND_TIMEOUT`    | Play `/tmp/audio/timeout.aac` |
| `0x1031` | `RMM_SPEAK_WRONG_DEVICE`    | Play `/tmp/audio/device_wrong.aac` or `bindkey_fail.aac` depending on `g_rmm_info[8]` |
| `0x1032` | _(ePlayload sync)_          | `DAT_00486a84 = g_rmm_info[0x4f8]` |
| `0x1034` | `RMM_VC_START_RECORD`       | Play `record_start.aac` |
| `0x1035` | `RMM_VC_STOP_RECORD`        | Play `record_end.aac` |
| `0x1038` | `RMM_APP_AUDIO_MODE_SIMPLEX`| Switch audio chain to simplex |
| `0x1039` | `RMM_APP_AUDIO_MODE_DUPLEX` | Switch audio chain to duplex |
| `0x103e` | _(white-light compensate open beep)_ | `open white light compensate, warning beep...` |

The full list (per the `RMM_SPEAK_*` strings table at 0x422504+) covers:
`SUCCESS`, `RESET`, `WAIT`, `WARNING`, `PWD_WRONG`, `CONNECTTING`,
`WIFI_CONNECTTED`, `BINDFAIL`, `BIND_TIMEOUT`, `WRONG_DEVICE`,
`DOWNLOADING`, `UPDATING`, `DOWNLOAD_FAIL`, `SCAN_OK`, `BAN_DEVICE`,
`WELCOME`, `SHORT_RECORD_WARNING`, `WHITE_LIGHT_COMPENSATE_OPEN`,
`WHITE_LIGHT_COMPENSATE_CLOSE`, `VC_START_RECORD`, `VC_STOP_RECORD`.

Each AAC playback happens through `media_rtl_send_ao_beep(path)` →
`g_media_rtl_ops->vtbl[+0x34](path)`, which queues the file through the
audio playback chain set up in `audio_init()`.

## 5. The `media_rtl_ops` vtable (`g_media_rtl_ops` at 0x00436be4)

Set by `register_media_backend("realtek", &PTR_audio_init_00424864)` at
startup. The vtable is in read-only data at `0x00424864`, with function
pointer slots:

| Offset | Function (per error string) |
|--------|---|
| `+0x00` | (head) |
| `+0x18` | `get_videostream` |
| `+0x1c` | `get_yuv_data` |
| `+0x20` | `get_jpeg` |
| `+0x2c` | `ai_get_aacstream` |
| `+0x30` | _(ai_get_lpcmstream)_ |
| `+0x34` | `send_ao_beep` (play queued aac) |
| ... | ... |

The trampoline functions in rmm (`media_rtl_get_videostream`,
`media_rtl_get_jpeg`, `media_ai_aacstream_thread`, `media_rtl_send_ao_beep`)
just dereference these slots — the actual implementations live in the
`realtek` backend object that the binary linked against (`librtstream.so.2`
and `librtsmd.so.1`).

## 6. ISP firmware load (`probe_and_load_isp_fw` at 0x00407a40)

This is the function whose behaviour the SD-card-hack `init.sh` had to
replicate for the on-flash boot to work. The kernel module's
`/sys/devices/platform/rts_soc_camera/loadfw` sysfs node accepts:

1. A path to an ISP firmware blob — loads it into the ISP coprocessor.
2. The ASCII characters `'1'` and `'2'` — *command codes* that trigger
   the kernel-level i²c probe sequence which populates `/sys/.../sensor`.

`probe_and_load_isp_fw` does:

```c
sprintf(buf, "%c", '1');                              /* "1" */
write_file_buffer("/sys/.../loadfw", buf, strlen(buf));
usleep(50000);
sprintf(buf, "%c", '2');                              /* "2" */
write_file_buffer("/sys/.../loadfw", buf, strlen(buf));
usleep(50000);

fp = fopen("/sys/.../sensor", "r");
if (fp != NULL) {
    /* read with up to 3 retries of 20ms */
    for (int retry = 3; retry-- && sensor_str[0] == 0;)
        fread(sensor_str, 1, 64, fp), usleep(20000);
}

/* Map detected sensor → fw path */
if      (strncmp(s, "SC1245", 6) == 0) write("loadfw", "/home/lib/sc1245/isp.fw");
else if (strncmp(s, "SC2235", 6) == 0) write("loadfw", "/home/lib/sc2235/isp.fw");
else if (strncmp(s, "SC2232", 6) == 0) write("loadfw", "/home/lib/sc2232/isp.fw");
else if (strncmp(s, "SC2230", 6) == 0) {
    /* g_factory_data_ptr[0xc] selects sub-variant */
    if      (factory[0xc] == '4') write("loadfw", "/home/lib/sc2230/isp_jin.fw");
    else if (factory[0xc] == '5') write("loadfw", "/home/lib/sc2230/isp_lang.fw");
    else if (factory[0xc] == '6') write("loadfw", "/home/lib/sc2230/isp_mipi.fw");
    else                          write("loadfw", "/home/lib/sc2230/isp_jin.fw");
}
else if (strncmp(s, "C2390", 5) == 0) {
    /* CS2390 = MIPI vs DVP, selected by factory[0xc] */
    if (factory[0xc] == '7' || factory[0xc] == '8')
        write("loadfw", "/home/lib/sc2390/isp_dvp.fw");
    else
        write("loadfw", "/home/lib/sc2390/isp.fw");
}
else if (sensor_str empty)
    write("loadfw", "1");      /* fallback: re-probe and use default */
```

Most useful surprise from decompiling this: there's no "two-stage with a
generic bootstrap fw" — stock rmm never writes `/home/lib/load/isp.fw`
explicitly. The `"1"`/`"2"` magic-character writes are how the probe is
triggered. The `lib_isp/load/isp.fw` blob is the *internal* fw the
kernel module falls back to when those magic codes are written; it just
has to exist on disk where the kernel expects it.

## 7. Logger (`rmm_log` at 0x00413f64)

```c
void rmm_log(const char *file, const char *func, int line, const char *fmt, ...);
```

Builds an output line of the form:

```
<pid>:<file>:<line>|<func>() <fmt-expanded>\n
```

and sends it over an AF_UNIX SOCK_DGRAM socket to `/tmp/logsock`
(receiver: stock `log_server` daemon). `g_log_sock` holds the connected
socket handle; lazy-initialised on first call via `log_socket_init`.
Bypassed if `log_socket_init` ever fails (`g_log_sock == NULL` and reinit
also fails → silently drops the message).

The same pattern is used for ALL diagnostic output in rmm — there's no
direct stderr usage from the daemon code. Stock `log_server` collects from
the unix socket and writes to flash; on the SD-card-hack camera we just
let it bind to `/tmp/logsock` and consume.

## 8. IPC primitives

### POSIX message queues

Two queues created at startup with `init_mqueue(&handle, name)`:

```c
mq_open(name, O_CREAT | O_RDWR | O_NONBLOCK, 0666,
        &(struct mq_attr){ .mq_flags = 0, .mq_maxmsg = 8, .mq_msgsize = 0x200 });
```

| Queue | Reader | Writers |
|---|---|---|
| `/ipc_dispatch` | `dispatch` daemon | rmm (via `ipc_send`/`send_*_msg`), cloud, p2p_tnp, others |
| `/ipc_rmm`      | rmm (`msg_proc` thread) | dispatch (forwarding command from cloud/p2p) |

The wire format is a flat C struct: first u32 = msg type discriminator
(1 or 2), next u32 = secondary type, then u16 opcode at offset 0x0a,
then payload. `ipc_send` (`FUN_004143f4`) is a thin wrapper around
`mq_send` with a 0x200-byte cap.

### Shared memory (POSIX shm)

| Shm name | Size | Producer | Consumers |
|---|---|---|---|
| `/fshare_frame_buf` | ~1.7 MiB | media_rtl_get_videostream / get_yuv | cloud, p2p, mp4record, oss |
| `/fshare_write_lock` | 16 B  | (sem) | locking |
| `/fshare_read_lock`  | 16 B  | (sem) | locking |
| `/fshare_read_notify_0..16` | 16 B each | (sem) | per-reader wakeup |

Created by `fshare_create` (`FUN_004128e8`) at startup. The `fshare.c`
routines (`fshare_read`, `fshare_read_newest`, `fshare_wait`) are exported
from rmm for other binaries that linker-share the same fshare library
implementation.

### Regular file mmap

`/tmp/mmap.info` — 0x0aa0 = 2720 bytes, mmap'd RO by rmm via
`open_and_mmap_readonly`. Holds device-identity data (serial, MAC, IMEI,
cloud server URLs) plus runtime state shared with `dispatch` and friends.
`dispatch` is the writer.

### Ring buffer

`cb_init/cb_write/cb_read/cb_datalen/cb_full/cb_empty/cb_info/cb_deinit`
(from `ringbuf.c`) implement a simple bounded ring buffer used between
the audio capture path and `abnormal_sound_detection_func`. Backed by
`malloc`'d memory (not shared with other processes).

## 9. CPLD ioctls (`/dev/cpld_periph`)

Used by `set_ir_led_pwm`, `set_light_switch`, and the supervisor loop.
Numerical encoding follows the standard Linux `_IO(type, nr)` pattern:

| ioctl       | Meaning                                  |
|-------------|------------------------------------------|
| `0x20007011` | Enable audio amp (called once at boot)  |
| `0x20007013` | Write IR LED PWM duty (arg = `int *`)    |
| `0x20007015` | IR LED off                               |
| `0x20007016` | IR LED on                                |
| `0x20007023` | White-light LED on                       |
| `0x20007024` | White-light LED off                      |

The PWM/duty arg pattern: `int duty = 100; ioctl(fd, 0x20007013, &duty);`
where 100 = full intensity, 0 = off.

The SSP (`/dev/ssp`) device is the MS41909-based PTZ motor driver, only
opened on hw variants where `g_factory_data_ptr[0] == '1'` (PTZ-capable).

## 10. Global state map

| Address    | Renamed name              | Type / role |
|------------|---------------------------|-------------|
| `0x004778ac` | `g_rmm_info`            | mmap of `/tmp/mmap.info`, RO, 0xaa0 bytes |
| `0x004778a4` | `g_mq_dispatch`         | `mqd_t` for `/ipc_dispatch` |
| `0x004778a8` | `g_mq_rmm`              | `mqd_t` for `/ipc_rmm` |
| `0x00477968` | `g_cpld_fd`             | fd of `/dev/cpld_periph` |
| `0x0047796c` | `g_ssp_fd`              | fd of `/dev/ssp` (PTZ only) |
| `0x00477868` | `g_log_sock`            | logger socket handle (lazy-inited) |
| `0x00477950` | `g_is_gray_switch_local`| 0=color, 1=gray/IR mode (set by daynight thread) |
| `0x00477954` | `g_motion_active`       | 1 if a motion event is pending stop, 0 otherwise |
| `0x00477970` | (live throttle counter) | when `> 0x1d6` motion/sound threads pause |
| `0x00477a34` | `g_motion_ir_force_flag`| set when main loop force-IR-PWM in standby/exit |
| `0x00436970` | `g_ir_pwm_duty`         | last-written IR PWM duty byte (0 or 100) |
| `0x00436b70` | `g_audio_ringbuf`       | `cb_init`'d ring buffer ptr |
| `0x00436974` | `g_stream_arg_1`        | channel-1 arg for `media_rtl_get_videostream` |
| `0x00436b74` | `g_factory_data_ptr`    | `= &g_rmm_info[0x1f5]` — hw version & feature bits |
| `0x00436b78` | `g_last_gray_state`     | last seen value of `g_is_gray_switch_local` (supervisor) |
| `0x00436b7c` | `g_last_light_state`    | last seen value of `g_rmm_info[0x9ed]` |
| `0x00436978` | `g_audio_ringbuf_size`  | `cb_init` size param (0x4E200 = 320000 B) |
| `0x00436bc4` | `g_last_abnormal_sound_report_time` | unix-time of last sound IPC (601s cooldown) |
| `0x00436bc8` | `g_ircut_lockout_seconds`| counter to 0xe10 (3600s) for daynight lockout |
| `0x00436bcc` | `g_color_debounce_count`| daynight gray→color debounce |
| `0x00436bd0` | `g_gray_debounce_count` | daynight color→gray debounce |
| `0x00436bd4` | `g_stream_arg_0`        | channel-0 arg for `media_rtl_get_videostream` |
| `0x00436bd9` | `g_ready_flag`          | set to 1 after init complete (or on QR success) |
| `0x00436bd8` | `g_light_switch_state`  | 0/1 white-LED state |
| `0x00436bdc` | `g_ircut_oscillation_count` | gray-mode entry counter; `> 5` logs "ircut is locked" |
| `0x00436be0` | `g_media_backend_name`  | "realtek" |
| `0x00436be4` | `g_media_rtl_ops`       | vtable from `librtstream.so.2`'s realtek backend |
| `0x00486a90` | `g_aacplay_mode`        | set to 1 when running as `aacplay` |
| `0x00486a84` | `g_eplayload_cache`     | cached `g_rmm_info[0x4f8]` |
| `0x00486a88` | `g_audio_mode_cache`    | cached `g_rmm_info[0x4fc]` |
| `0x00436bf0` | `g_videostream_idr_req_chn0` | producer-side IDR request flag for chn 0 |
| `0x00436bf4` | `g_videostream_idr_req_chn1` | producer-side IDR request flag for chn 1 |
| `0x00436bf8` | `g_videostream_frame_count`  | frames-since-last-stats-log |
| `0x00436c04` | `g_yuv_capture_chn`     | RTS-AV chn handle for YUV grab |
| `0x00437678` | `g_audio_capture_chn`   | RTS-AV chn (audio in) |
| `0x0043767c` | `g_audio_aec_chn`       | RTS-AV chn (AEC) |
| `0x00437684` | `g_audio_input_chn`     | RTS-AV chn (audio input after AEC) |
| `0x0043768c` | `g_audio_playback_chn`  | RTS-AV chn (audio playback / mixer sink) |
| `0x00437694` | `g_audio_resample_chn`  | RTS-AV chn (resample) |
| `0x00437788` | `g_audio_playback_active` | 1 when playback chain bound + running |
| `0x00437784` | `g_aac_decoder_ready`   | 1 once fdk-aac decoder is set up |
| `0x004376b0` | `g_aac_decoder_handle`  | fdk-aac handle |
| `0x004376a0..ac` | `g_aac_*`           | sample rate / channels / bps / frame size cache |
| `0x004376f4..fc` | `g_aac_prev_*`      | previous values used to skip set_profile on no-change |
| `0x00437834` | `g_wave_buffer`         | 0x40000 B circular FIFO for `wave_parser` |
| `0x00477834` | `g_wave_buffer_write_pos` | writer index |
| `0x00477838` | `g_wave_buffer_read_pos`  | reader index |
| `0x0047783c` | `g_wave_buffer_mutex`   | guards both indices |
| `0x00437830` | `g_wave_parser_running` | 1 while `wave_parser_thread` is alive |
| `0x004369b0..cc` | `g_modet_*`         | `motion_detect.c` thresholds, grid/offset/box dims |
| `0x004369b4` | `g_modet_thresh_value`  | per-block change threshold (set by `modet_init`) |
| `0x00436980..98` | `g_motrk_*`         | `motrk_msqr.c` thresholds + history config |
| `0x004377a4..b0` | `g_motrk_*`         | motrk runtime: prev-img buf, mssqr grid, dir state |
| `0x004377c0..d8` | `g_modet_*`         | modet runtime: initialised flag, prev x/y, grids |
| `0x004377e0..ec` | `g_modet_*`         | modet log timestamps + counts |
| `0x004377f0..f8` | `g_modet_*`         | 8x8 grid + frame/bigger-move stats |
| `0x00437810..18` | `g_modet_prev_*`    | duplicate-event filter state |

### `g_rmm_info` (mmap.info) field offsets

These are observed offsets used by rmm — the full struct is larger.

| Offset | Use |
|---|---|
| `+0x8`    | Bind state (controls which audio cue plays on RMM_SPEAK_WRONG_DEVICE) |
| `+0x18c`  | Some image x-offset / framing constant |
| `+0x1f5`  | Factory data block (`g_factory_data_ptr` points here) |
| `+0x1f5[0]` | PTZ-capable flag ('1' = yes, opens /dev/ssp) |
| `+0x1f5[3]` | Daynight detection mode ('1'..'5') |
| `+0x1f5[9]` | Light/IR feature flag ('2' or '3' = supported) |
| `+0x1f5[0xc]` | SC2230/SC2390 fw sub-variant selector ('4'..'8') |
| `+0x1f5[0xd]` | "Reserved flip" hw variant ('2' inverts mirror semantics) |
| `+0x300`  | WiFi-conf field — region or country (e.g. "US") |
| `+0x420`  | WiFi SSID (compared against current value before re-sending) |
| `+0x460`  | WiFi password |
| `+0x4b0`  | smart_ir_mode  |
| `+0x4dc`  | Brightness (≥ 0x29 → LDC on) |
| `+0x4e4`  | ir_mode (== 2 means night) |
| `+0x4f8`  | ePlayload (audio playload codec id?) |
| `+0x4fc`  | Audio mode |
| `+0x50c`  | Dispatch-done init flag — main spins until this is non-zero |
| `+0x5a0`  | Motion-detect init done |
| `+0x5b8`  | Audio device init done |
| `+0x5bc`  | Audio mode (1 = bind required, triggers QR provisioning) |
| `+0x600`  | Force-flip flag |
| `+0x608`  | Debug / standby mode (1 = clear lights, hold IR off) |
| `+0x89c`  | Process-exit flag (1 = teardown) |
| `+0x8a0`  | Some ir_mode sub-state (2..3 = active IR PWM) |
| `+0x934`  | Abnormal-sound sensitivity (0..255) |
| `+0x9b0`  | PTZ state |
| `+0x9ed`  | Gray/IR mode setpoint (0/1/2) |
| `+0x9f0`  | Factory-test override |

## 11. Function map (selected)

### rmm.c (top-level)

| Address | Renamed | Notes |
|---|---|---|
| `0x0040440c` | `main` | Entry. `aacplay` mode vs daemon mode. |
| `0x00407a40` | `probe_and_load_isp_fw` | §6 |
| `0x00404c20` | `entry` | C runtime entry; calls `__uClibc_main(main, ...)` |
| `0x00408008` | `register_media_backend` | Stores `(name, vtable)` in globals |
| `0x00405660` | `set_light_switch` | White LED via CPLD `0x20007023/24` |
| `0x004055bc` | `set_ir_led_pwm` | IR LED PWM via CPLD `0x20007013` and on/off ioctls |
| `0x00406604` | `msg_proc` thread | `/ipc_rmm` mq_receive loop |
| `0x004050bc` | `daynight_switch_func` thread | ADC-based or SDK-based day/night |
| `0x004058a4` | `motion_proc` thread | modet_* algo on YUV frames |
| `0x00406320` | `abnormal_sound_detection_func` thread | FFT-based sound spike detector |
| `0x00407168` | `zbar_proc` | Inline QR decode for WiFi provisioning |
| `0x00404f88` | `request_h264_keyframe_chn0` | `rts_av_request_h264_key_frame` wrapper |
| `0x0040b2ac` | `video_init` | Builds RTS-AV pipeline (ISP→H264→OSD + JPEG) |
| `0x0040b144` | `read_sensor_id_string` | Reads `/sys/.../sensor`, returns sensor-id resolution params |
| `0x0040b0f8` | `set_isp_attr` | Wraps `rts_av_get_isp_ctrl`/`rts_av_set_isp_ctrl` |
| `0x0040ad28` | `set_isp_ctrl_attr` | Single-attribute setter |
| `0x0040ace0` | `media_rtl_set_grey_attr` | Wraps `set_isp_attr_grey(0x27)` |
| `0x0040ab94` | `set_isp_attr_grey` | Generic clamped-range ISP attr setter |
| `0x0040ae74` | `media_venc_set_color2grey` | Calls set_isp_ctrl_attr(0x30, on) + (0x27, on) |
| `0x0040af20` | `media_rtl_set_flip` | set_isp_ctrl_attr(0x15, flip) + (0x16, mirror) |
| `0x0040afec` | `media_rtl_set_ldc` | LDC mode via set_isp_ctrl_attr(0x36) |
| `0x0040a2d0` | `audio_init` | Builds AAC playback + AEC + capture + mixer + resample |
| `0x0040a10c` | `audio_deinit` | Tears down audio chain |
| `0x0040a054` | `audio_buffers_cleanup` | Clears RTS buffer callbacks + destroys queue |
| `0x00409ddc` | `raw_video_init` | MJPEG-only chain for QR mode |
| `0x00409c3c` | `media_rtl_send_ao_beep_impl` | vtable +0x34 — reads .aac, calls parse_decode |
| `0x00409af0` | `parse_decode_aac_frame` | ADTS header parse + fdk decode + send PCM |
| `0x0040948c` | `fdk_aac_decode_frame` | fdk-aac Fill + DecodeFrame; configures resample profile |
| `0x00409324` | `audio_playback_unbind_stop` | Tears down playback chain (sends EOS, polls is_idle) |
| `0x004092c8` | `audio_playback_bind_start` | bind+enable+start audio chain |
| `0x00409444` | `aec_set_enable` | AEC enable=1, mode=0x23 |
| `0x00409414` | `audio_capture_callback` | RTS callback that copies into both `cb_write` and `wave_fifo_put` |
| `0x004086a0` | `media_ai_get_aacstream_impl` | vtable +0x2c — drains AAC channel |
| `0x00408658` | `set_aec_param` | get/set/release AEC ctrl with new value |
| `0x0040825c` | `h264_find_nalus` | Scans for `00 00 00 01` start codes; returns SPS/PPS/IDR/slice offsets |
| `0x00408cbc` | `media_rtl_get_videostream_impl` | vtable +0x18 — H.264 poll/recv loop |
| `0x00408a0c` | `media_rtl_get_yuv_data_impl` | vtable +0x1c — YUV poll/recv |
| `0x0040bbdc` | `media_rtl_init` | vtable +0x14 — calls video_init+audio_init |
| `0x0040c010` | `cb_init` | Ringbuf alloc + zero |
| `0x0040c138` | `cb_deinit` | Ringbuf free (was previously misnamed at 0x0040bc4c) |
| `0x0040bc78` | `aacplay_run` | Standalone aacplay mode body (audio init, play, sleep ms, deinit) |
| `0x0040bd34` | `cb_datalen` |  |
| `0x0040bd44` | `cb_full` |  |
| `0x0040bd88` | `cb_empty` |  |
| `0x0040bd98` | `cb_write` | Used by audio capture |
| `0x0040befc` | `cb_read` |  |
| `0x0040beec` | `cb_info` |  |
| `0x0040bcd4` | `cb_print_info` | Diagnostic ring-buffer dump |
| `0x00406530` | `audio_ringbuf_write` | Wrapper that calls `cb_write(g_audio_ringbuf, ...)` |
| `0x004080b8` | `media_rtl_get_yuv_data` | vtable trampoline (+0x1c) |
| `0x004080f8` | `media_rtl_get_jpeg` | vtable trampoline (+0x20) |
| `0x00408138` | `media_ai_aacstream_thread` | vtable trampoline (+0x2c), pthread'd |
| `0x004081a8` | `media_ao_get_aacstream` | vtable trampoline (+0x30), thread name "media_ao_get_aacstream" |
| `0x00408214` | `media_rtl_send_ao_beep` | vtable trampoline (+0x34), plays AAC file |
| `0x0040801c` | `media_rtl_get_videostream` | vtable trampoline (+0x18), pthread'd twice (chn 0 and 1) |
| `0x00411334` | `media_ai_aacstream_init` | mutex_init + spawns `wave_parser_thread` |
| `0x00411460` | `wave_parser_thread` | Audio-based WiFi provisioning parser (FSK-like decode → `send_wifi_conf_msg`) |
| `0x00411628` | `wave_fifo_put` / `wave_fifo_put_gated` (`0x00411610`) | Producer end of the wave-parser FIFO |
| `0x00411388` | `wave_parser_read_buffer` | Consumer end |
| `0x00410934` | `wave_parser_alloc` | Allocates the parser state struct |
| `0x004109bc` | `wave_parser_free` | Frees it |
| `0x00410e10` | `wave_parser_decode_chunk` | FFT-bin energy match → 3-symbol decode |
| `0x00408b98` | `get_raw_video_size` | `rts_av_get_profile` on chn 0, returns w,h |
| `0x00408c14` | `raw_video_resize` | Resize MJPEG chain output |

### IPC senders (`send_*_msg`)

All wrap `ipc_send` (which is `mq_send` with a 0x200B cap) — first u16
field is the opcode.

| Address | Function | Opcode | Target queue |
|---|---|---|---|
| `0x004143f4` | `ipc_send` | _generic_ | _depends on `mqd_t` arg_ |
| `0x004083f4` | `send_do_speaking_msg` | `0x1025` | (caller decides) |
| `0x00408490` | `send_stop_speaking_msg` | `0x1026` | |
| `0x00406568` | `send_capture_finish_msg` | `0x0093` | `/ipc_dispatch` |
| `0x0040625c` | `send_abnormal_sound_detect_msg` | `0x60046004` | `/ipc_dispatch` |
| `0x00406fac` | `send_wifi_conf_msg` | `0x0070` | `/ipc_dispatch` |
| `0x00405020` | `send_reboot_msg` | `0x0fff` | (caller decides) |
| `0x00404e00` | `send_motion_start_msg` | `0x007c` | `/ipc_dispatch` |
| `0x00404ec4` | `send_motion_flowwith_start_msg` | `0x00e6` | `/ipc_dispatch` |
| `0x00405510` | `rmm_ptz_direction_ctrl` | `0x4006` | `/ipc_dispatch` |
| `0x00405534` | `p2p_ptz_direction_ctrl` | `0x4006` | (other queue, from object) |
| (inline in motion_proc) | `rmm_ptz_direction_ctrl_stop` | `0x4007` | `/ipc_dispatch` |

The `send_motion_stop_msg` (opcode `0x007d`) is also inlined inside `motion_proc` rather than being its own function.

### Helpers

| Address | Renamed | Notes |
|---|---|---|
| `0x00413f64` | `rmm_log` | (file, func, line, fmt, ...) → UDP/`/tmp/logsock` |
| `0x00413e48` | `log_socket_init` | Creates AF_UNIX SOCK_DGRAM, copies sockaddr |
| `0x00413e10` | `memset_clamped` | `memset(buf, val, min(buf_size, write_size))` |
| `0x00413e2c` | `memcpy_clamped` | `memcpy(dst, src, min(dst_size, src_size))` |
| `0x0041439c` | `init_mqueue` | Wraps `mq_open` with default attrs |
| `0x004141ac` | `exec_capture_output` | `popen(cmd, "r") + select(timeout_sec) + fread` |
| `0x0041417c` | `exec_command` | Fire-and-forget `popen+pclose` — used to `killall cloudAPI` |
| `0x004079bc` | `write_file_buffer` | Open path, fwrite buf len bytes, close |
| `0x00414420` | `open_and_mmap_readonly` | Open RO, mmap SHARED, close fd, return addr (with 10 retries on open) |
| `0x00414514` | `ms_sleep` | Already named in stock binary; (msecs) → usleep(msecs*1000) |
| `0x00402570` | `fshare_create` | Thin wrapper around `fshare_create_impl` (`FUN_004128e8`) |
| `0x004132a0` | `fshare_read` | (already named — exported as fshare lib API) |
| `0x0041351c` | `fshare_read_newest` | (exported) |
| `0x004137b0` | `fshare_wait` | (exported) |
| `0x00404d0c` | `cxx_init_once` | Once-guard wrapper around `cxx_init_static` |
| `0x00404dbc` | `cxx_init_static` | C++ static-initialiser (empty body in this build) |
| `0x00421f60` | `run_ctors` | Walks `.ctors` until 0xffffffff sentinel |
| `0x004212e4` | `int_divide` | Compiler-emitted 32-bit signed divide helper |
| `0x00421998` | `long_divide` | Compiler-emitted 64-bit divide helper |
| `0x00421440` | `abnormal_sound_detect_init` | Prints "Abnormal Sound Detection - V20161229.2", zero-inits state |
| `0x004214e4` | `abnormal_sound_detect_run` | Per-chunk envelope + zero-crossing + dB threshold |

### Motion-detect helpers (motion_detect.c + motrk_msqr.c)

| Address | Renamed | Notes |
|---|---|---|
| `0x0040c1b8` | `motrk_meanSqr` | √mean-squared diff between two YUV blocks |
| `0x0040c310` | `motrk_getElapsedMs` | ms since `motrk_storeImg` |
| `0x0040c37c` | `motrk_allocBuffers` | Lazy-allocate prev-img + mssqr grid + history buffers |
| `0x0040c42c` | `motrk_getLastImg` | Returns prev YUV or NULL if older than 500 ms |
| `0x0040c504` | `motrk_storeImg` | Copies cur YUV → prev-img, records timestamp |
| `0x0040c580` | `motrk_detectMotion_gray` | Gray-mode tracker (computes mssqr grid + dir state machine) |
| `0x0040cb5c` | `motrk_detectMotion_day` | Day-mode tracker (falls through to gray when `param_4 == 1`) |
| `0x0040d148` | `modet_allocBuffers` | Lazy-alloc per-cell luma + mssqr grids |
| `0x0040d1d8` | `modet_getCellValue` | grid[cur_or_prev][y*w+x] |
| `0x0040d258` | `modet_setCellValue` | grid[cur][y*w+x] = v |
| `0x0040d2e4` | `modet_lightChangeFilter` | Subtracts current vs N-frames-ago luma to spot scene-light spikes |
| `0x0040d6e4` | `modet_init` | Sets thresholds based on sensitivity 0/1/2 (+1 for gray mode) |
| `0x0040d818` | `modet_neighborSum` | 7×7 sum-above-threshold (for clustering) |
| `0x0040d8f8` | `modet_findMaxCluster` | Finds densest cluster of above-threshold cells |
| `0x0040da50` | `modet_filterDuplicate` | Dedupe similar events within 600 s |
| `0x0040db34` | `modet_isBiggerMove` | "bigger move" gate (15-min cooldown, score gating) |
| `0x0040dc4c` | `modet_process` | Main per-frame entry — fills 7-field result struct |

### Audio-provisioning helpers (wave_parser)

| Address | Renamed | Notes |
|---|---|---|
| `0x00411334` | `media_ai_aacstream_init` | Spawns `wave_parser_thread` |
| `0x00411460` | `wave_parser_thread` | Reads FIFO, decodes 3-symbol payload, calls `send_wifi_conf_msg` |
| `0x00411388` | `wave_parser_read_buffer` | FIFO consumer |
| `0x00411628` | `wave_fifo_put` | FIFO producer (unconditional) |
| `0x00411610` | `wave_fifo_put_gated` | FIFO producer (only while `g_wave_parser_running`) |
| `0x00410934` | `wave_parser_alloc` | Allocates 0x2424-byte state struct |
| `0x004109bc` | `wave_parser_free` |  |
| `0x00410e10` | `wave_parser_decode_chunk` | Picks max-energy bins across 3 freq groups; appends to sequence |
| `0x00410b40` | (sequence decoder) | Called when full symbol sequence is captured |

### Kissfft + Reed-Solomon helpers

| Address | Renamed | Notes |
|---|---|---|
| `0x0040e2f8` | `fft_recursive` | Radix-2/3/4/5/generic recursive butterfly |
| `0x0040f27c` | `kiss_fft_alloc` | Twiddle factors + factorisation |
| `0x0040f4c8` | `kiss_fft_stride` | In/out-of-place wrapper around `fft_recursive` |
| `0x0040f588` | `kiss_fft` | Thin wrapper around `kiss_fft_stride` |
| `0x0040f594` | `kiss_fftr_alloc` | Real-FFT optimisation state |
| `0x0040f7a4` | `kiss_fftr` | Real-FFT execution |
| `0x0040f9d0` | `rs_codec_init` | GF(2^n) Reed-Solomon-like codec setup (used by wave_parser) |
| `0x0040fe1c` | `rs_codec_free` |  |
| `0x0040fe58` | `rs_codec_process` | Encode/decode |

### PLT thunks (selected)

All 134 thunks in the range `0x00425e40 – 0x00426700` were renamed to
`plt_<name>` matching the resolved import. Sample:

| Address | Thunk | Address | Thunk |
|---|---|---|---|
| `0x00425e40` | `plt_pthread_detach` | `0x00426220` | `plt_sendto` |
| `0x00425e50` | `plt_printf` | `0x00426290` | `plt_mq_send` |
| `0x00425e80` | `plt_rts_queue_empty` | `0x004262c0` | `plt_sem_wait` |
| `0x00425eb0` | `plt_memmove` | `0x004262f0` | `plt_fwrite` |
| `0x00425f00` | `plt_close` | `0x00426310` | `plt_puts` |
| `0x00425f60` | `plt_strncmp` | `0x00426330` | `plt_fopen` |
| `0x00425f70` | `plt_strrchr` | `0x00426380` | `plt_snprintf` |
| `0x00426020` | `plt_mmap` | `0x00426390` | `plt_access` |
| `0x00426050` | `plt_memcpy` | `0x00426440` | `plt_pthread_create` |
| `0x00426080` | `plt_usleep` | `0x004264e0` | `plt_ioctl` |
| `0x00426130` | `plt_memset` | `0x00426540` | `plt_open` |
| `0x00426150` | `plt_assert` | `0x00426570` | `plt_signal` |
| `0x00426180` | `plt_popen` | `0x004265f0` | `plt_mq_receive` |
| `0x00426210` | `plt_system` | `0x004266d0` | `plt_strcmp` |

The full list is in the Ghidra project — every `FUN_004ZZ` in that
address range has been renamed.

## 12. Relevance to RTS3903N-RTSP project

Pieces of `rmm` we explicitly do NOT replicate, because our `imagerd`
replaces them with its own pipeline:

- `audio_init` / `media_ai_aacstream_*` — we run our own G.711 capture
  via `rts_av_create_audio_capture_chn` directly in imagerd.
- `video_init` — we build our own H264 + MJPEG chain in
  `imagerd::start_stream`.
- `msg_proc` and the whole IPC mesh — we have no `dispatch`/`cloud`/etc.
- `motion_proc`, `abnormal_sound_detection_func` — out of scope.
- `zbar_proc` — provisioning is via `network.ini`.
- Light/audio cue playback — out of scope.

Pieces of `rmm` we DID need to replicate (now in `payload/home/app/init.sh`):

- The `probe_and_load_isp_fw` sequence (§6) — `echo -n 1; echo -n 2;
  read sensor; write matched fw path`. This is what we missed initially
  when we just wrote `/home/lib/load/isp.fw` directly.
- The CPLD audio-amp enable `ioctl(g_cpld_fd, 0x20007011, 0)` is done by
  imagerd itself (`cpld::set_audio(true)` in `cpld.h`).
- The GPIO9 audio enable from byte 168 of `mtdblock6` is replicated in
  `init.sh::set_audio_switch`.

Anything `rmm` does that touches `/tmp/mmap.info` or `/dev/shm/fshare_*`
we deliberately skip — those are stock-cloud-stack artefacts that
imagerd has no use for.
