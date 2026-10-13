# IPC protocol, /tmp/mmap.info, p2p_tnp and rmm

Source: static analysis of the Ghidra headless exports in `../../Decompiled source/apps/{dispatch,cloud,p2p_tnp,rmm}`.
Notation: `FUN_xxxxxxxx` / `@addr` are export names. **Observed** = read directly from decompiled code or strings.
**Inferred** = my interpretation, marked as such. Device-specific secrets (UID, DID, keys, passwords,
InitStrings, Wi-Fi credentials) are described only by their role.

Note on offsets: in some functions Ghidra types the mmap base as `int *`, so `X[n]` means byte offset `4*n`. In others
it types the base as `int`, so `X + n` is a byte offset. All offsets below are **byte offsets**, and I checked them
across binaries (for example, dispatch `[0x180]` = rmm `+0x600` = mirror, and dispatch `[0x137]` = rmm `+0x4dc` = LDC).

---

## 1. IPC over POSIX mqueues

### 1.1 Queue setup
- Every daemon opens queues with the same helper: `mq_open(name, O_RDWR|O_CREAT|O_NONBLOCK (0x182), 0666, {mq_maxmsg=8, mq_msgsize=0x200})`.
  This is `dispatch FUN_00410c4c`. rmm `FUN_0041439c`, p2p `FUN_00440df4` and cloud use the same pattern.
- Send helper (byte-identical in every binary): `send(fd, buf, len)` returns -1 if `fd==-1 || len>0x200`, else calls `mq_send(fd, buf, len, 0)`.
  - dispatch `FUN_00410ca4`, cloud `FUN_0040b6d4`, rmm `FUN_004143f4`, p2p_tnp: the thunk under `FUN_00409a5c`.
- Receive loop pattern: `select()` on the mq fd (10 s timeout), then `mq_receive(fd, buf, 0x200, 0)`.
  - dispatch `FUN_00404a28` (do_mq_process), cloud `FUN_0040244c` (msg_proc), rmm `FUN_00406604` (msg_proc, its own thread),
    p2p_tnp thread `LAB_00409bbc` (Ghidra did not create a function for it. The strings `get P2P_SYNC_ABILITY_START/END` sit in it).

### 1.2 Message layout (observed)
```
off  size  field
0x00 u32   dst   bitmask of destination modules
0x04 u32   src   bitmask of the sender module
0x08 u16   msg_id
0x0a u16   aux   dispatch helpers repeat msg_id here (e.g. 0x10041004). cloud generic sender puts 1.
               Nothing reads it (inferred: unused, or a legacy "sub id")
0x0c u32   payload_len
0x10 ...   payload (max 0x200-0x10). Small scalars are passed as one int at +0x10
```
Module bits (from dispatch forwarding at the end of `FUN_00404a28` and the senders):

| bit | module / queue |
|---|---|
| 0x01 | dispatch (`/ipc_dispatch`) |
| 0x02 | rmm (`/ipc_rmm`) |
| 0x04 | cloud (`/ipc_cloud`) |
| 0x08 | p2p_tnp (`/ipc_p2p`) |
| 0x10 | rcd / mp4record (`/ipc_rcd`) |
| 0x20 | rtmp (`/ipc_rtmp`) |
| 0x40 | dispatch_worker (`/ipc_dispatch_worker`, the config-save thread. `send_saveconfig_msg` `FUN_00403a9c` = dst 0x40, id 0xff) |

**Routing (observed):** every module sends only to `/ipc_dispatch`. dispatch processes every message it receives in its
big switch, whatever `dst` says. After that, `do_mq_process` re-sends the unchanged buffer to each queue whose bit is set
in `dst` (0x02, 0x04, 0x08, 0x10, 0x20). So `dst` means "dispatch plus forward to X". Senders choose `dst` from the id range:
- cloud generic sender `FUN_00401918(fd,id,payload,len)`: 0x1007, 0x100d, 0x100f/0x1010, 0x102b/0x102c → 2 (rmm). 0x2000-0x2003 → 0x10 (rcd).
  0x600f/0x6010 → 4. 0x7001 → 8 (p2p). Everything else → 1. src is always 4.
- p2p sender `FUN_00409a5c`: 0x74-0x7b, 0x1021-0x1024, 0x1028-0x102a, 0x1032-0x1033, 0x1038-0x103b → 2. 0x6000/0x6001, 0x6006, 0x6008-0x600a → 4. Else 1.
- rmm senders use src=2. dispatch's own helpers use src=1.

### 1.3 Message ID table (main ones)
Sender and receiver come from the code. Names come from log strings in the handler or sender. "→d" means dispatch handles it, and the
other modules listed after "→" are forward targets. mmap offsets refer to section 2.

**0x00xx–0x01xx: dispatch state / config (handled by dispatch, which mostly writes mmap and then calls send_saveconfig)**

| id | name (string) | sender (function) | effect in dispatch `FUN_00404a28` |
|---|---|---|---|
| 0x68 | "wifi connected" | (net scripts / rmm, inferred) | +0x590=1 |
| 0x70 | DISPATCH wifi conf ("got pwd(%s)") | rmm `send_wifi_conf_msg` FUN_00406fac (QR result, len 0xb0) | stores SSID +0x420, Wi-Fi pass +0x460, bind key +0x300. Runs wifi_conf / wificonnect.sh, then sends 0x1004 to rmm |
| 0x71 | DISPATCH_SET_TIME | cloud `cloud_set_time` FUN_00401c24 | +0x59c=1 |
| 0x72 / 0x73 | bind result ("reset finished" / DISPATCH_SET_BIND_FAIL) | cloud `cloud_set_bind_result` FUN_00401e00 | 0x72: send 0x1000 (speak success). 0x73: send 0x1009 |
| 0x98 | DISPATCH_SET_BIND_TIMEOUT | cloud FUN_00401e00(0x98) | sends 0x102f to rmm |
| 0x74 / 0x75 | DISPATCH_SET_POWER_ON / _OFF | p2p `p2p_set_power` FUN_00409da8 (IOTYPE SET_SILENT_MODE) | +0x608 (power-off flag), cpld ioctl. Forwarded to rmm |
| 0x76 / 0x77 | DISPATCH_SET_LIGHT_ON / _OFF | p2p `p2p_set_light` FUN_0040a014 | +0x604, cpld ioctl 0x2000701c/0x2000701b |
| 0x78 / 0x79 | DISPATCH_SET_MOTION_RCD / _ALWAYS_RCD | p2p `p2p_set_motion_record` FUN_0040a0f0 | +0x614 = 0/1 |
| 0x7a / 0x7b | DISPATCH_SET_MIRROR_ON / _OFF | p2p `p2p_set_mirror_flip` FUN_0040a1cc | +0x600. rmm: `media_rtl_set_flip` FUN_0040af20(1/0) |
| 0x7c | motion start (`send_motion_start_msg`) | rmm FUN_00404e00 | +0x5cc/+0x5d0 motion_type/+0x5d4 motion_time |
| 0xe6 | motion "flowwith" start | rmm FUN_00404ec4 | same, motion-track variant |
| 0xed | "test human detect!!!" | ? | motion_type=2 |
| 0x7e | DISPATCH_SET_TNP | cloud `cloud_set_tnp` FUN_00401e6c (after /v4/tnp/on_line) | payload = DID[32] , License[32] , InitString[128]. Stored at +0x77c/+0x7bc/+0x7fc, then `killall p2p_tnp` |
| 0x7f | p2p tnp init status | p2p `p2p_set_tnp_init_status` FUN_0040a9e0 | +0x778 |
| 0x80-0x83 | tnp work_mode / check_login_success / _fail / connect_success | p2p FUN_0040aa58/aad0/ab30/ab90 | counters +0x87c..+0x88c |
| 0x84 | immediate bitrate | p2p FUN_0040abf0 | +0x890 |
| 0x85 | DISPATCH_SET_SD_FORMAT | p2p (IOTYPE SET_TF_FORMATE) | saves conf, sends 0xfff (reboot) |
| 0x87 | DISPATCH_SET_VIDEO_BACKUP_STATE | cloud FUN_0040227c, p2p FUN_0040c210 | +0x98c..0x98f |
| 0x88 | DISPATCH_SET_BAN_DEVICE | cloud (FUN_00406fcc) | +0x4bc=1, ioctl 0x2000701b |
| 0x89 / 0x8a | DISPATCH_SYNC_INFO_FROM_SERVER / FINISH_… | p2p FUN_0040cefc / cloud FUN_00401f78 | +0x4c0 |
| 0x8b / 0x8c | DISPATCH_SET_CLOUD_STORAGE_ON / _OFF | cloud FUN_00402114 | u16 +0x4c4 |
| 0x8d | DISPATCH_SET_REGION | cloud `cloud_set_region` FUN_00401d04 (len 0x108) | +0x4 region id, +0xc API server URL, +0x10c, +0x14c |
| 0x8e | DISPATCH_SET_TZ_OFFSET | cloud FUN_004020a4 | +0x4b8 (ms/1000) |
| 0x8f / 0x90 | DISPATCH_SET_PWD_USED_CNT / PWD_SYNC_SERVER | p2p FUN_0040ac5c (after a successful auth) | +0x578 / +0x57c |
| 0x91 | DISPATCH_SET_OTA_STATE | ? | +0x4d8 |
| 0x92 / 0x93 | DISPATCH_SET_PANORAMA_CAPTURE_STATE / _COUNT | p2p FUN_0040b07c / rmm `send_capture_finish_msg` FUN_00406568 | +0x4f0 / +0x4f4 |
| 0x94 / 0x95 | CLOUD_STORAGE_MODE_MOTION_DETECT / _ALL_DAY | cloud FUN_0040218c | u16 +0x4c6 |
| 0x96 / 0x97 | DISPATCH_SAVE_API_SERVER / CLEAR_API_SERVER | cloud FUN_00401fdc / FUN_00402040 | +0x2b8 = 1/2 |
| 0x99 | DISPATCH_SPEAK_WRONG_DEVICE | ? | sends 0x1031 |
| 0x9a / 0x9b | DISPATCH_SET_LAPSE_VIDEO / _MODIFY | p2p FUN_0040b8c4 | +0x9d4 / +0x9d8 |
| 0xe1 / 0xe2 | DISPATCH_P2P_CONNECTTED / disconnected | p2p FUN_0040a7ac / FUN_0040a818 | viewer count +0x5b0 ++/--. First connect plays "bind_success" |
| 0xe3 / 0xe4 / 0xe5 | p2p viewing / stop viewing / clear viewing | p2p FUN_0040a884/8fc/974 | +0x5b4, cpld ioctl 0x20007001 (LED, inferred) |
| 0xe7 / 0xe8 | rcd heartbeat / rcd cost | mp4record (not analysed) | watchdog deadline, +0x938 |
| 0xea / 0xeb | baby-cry occur / DISPATCH_BABYCRY_CLEAR(chn) | cloud `cloud_set_babycry_occur` FUN_00402364 | +0x5f0/+0x5f4 |
| 0xee / 0xef | abnormal-sound occur / DISPATCH_ABNORMAL_SOUND_CLEAR(chn) | cloud FUN_004023d8 (triggered by rmm 0x6004) | +0x5f8/+0x5fc |
| 0xec | DISPATCH_SET_SCHEDULE_POWER | cloud `webapi_get_dev_info` FUN_004049c8 | +0x9b8 |
| 0xf0-0xf4 | CLOUD_PIC_INDEX_OCCUR / _CLEAR / PIC_SET_INTERVAL / CLOUD_IMAGE_ON / _OFF | cloud FUN_00402204 etc. | +0x4cc, +0x4d4, +0x4c8 |
| 0xf5-0xf8 | (unnamed flags) | cloud FUN_00406fcc (0xf8) | +0x5dc, byte +0x1f3 |
| 0xff | save config | dispatch `send_saveconfig_msg` (dst 0x40) | handled by the dispatch_worker thread |
| 0x100 | DISPATCH_APPLY_ABILITY_SETS | cloud `webapi_do_login` FUN_00403e3c (len 0x14) | 20-byte ability bitmap → +0xa87 |
| 0x101 | DISPATCH_SET_PREV_MOTION_STATE | cloud FUN_0040686c | +0x5d8 |
| 0x102 / 0x103 / 0x104 | SET_MOTION_DETECT_STATUS / SET_DOUBLE_LIGHT / SET_ALARM_SOUND | p2p FUN_0040b7fc / b734 / b66c | bytes +0x9ef / +0x9ed / +0x9ee |
| 0x105 / 0x106 / 0x107 | DISPATCH_SET_AP_MODE / APMODE_OK / APMODE_FAIL | p2p `p2p_ap_mode_set` / cloud `send_apmode_result` FUN_004016e4 | +0x9f0 (AP enable + 0x43-byte AP info), +0xa33 ack, +0xa78 timeout |
| 0xfff | reboot | dispatch/rmm `send_reboot_msg` | `reboot_by_watchdog`, `reboot -f` |

**0x10xx: RMM_* (dst 2. dispatch may also persist the value)**

| id | name | sender | rmm action (`msg_proc` FUN_00406604) / dispatch storage |
|---|---|---|---|
| 0x1000 | RMM_SPEAK_SUCCESS | dispatch `send_success_msg` FUN_004029a8 | play /tmp/audio/success.aac |
| 0x1001 | RMM_SPEAK_RESET | dispatch `send_reset_msg` | poweroff.aac, then send 0xfff |
| 0x1002 | RMM_SPEAK_WAIT | rmm `send_wait_msg` (dst 2, so it loops back through dispatch) | wait.aac |
| 0x1003 | RMM_SPEAK_PWD_WRONG | dispatch `send_pwdwrong_msg` | pwdwrong / wifi_connect_failed.aac |
| 0x1004 | RMM_SPEAK_CONNECTTING | dispatch `send_connectting_msg` | connectting.aac |
| 0x1006 | RMM_SPEAK_WIFI_CONNECTTED | dispatch `send_connected_msg` | wifi_connected.aac |
| 0x1007 | capture picture | cloud `cloud_cap_pic` FUN_00402730 | `media_rtl_get_jpeg` + capture.aac if +0x9d0 |
| 0x1008 | RMM_START_WELCOME | ? | welcome.aac |
| 0x1009 | RMM_SPEAK_BINDFAIL | dispatch `send_bind_fail_msg` | bindkey_fail.aac |
| 0x100a / 0x100b / 0x100c | RMM_SPEAK_DOWNLOADING / UPDATING / DOWNLOAD_FAIL | cloud/upgrade | prompts are suppressed when upgrade_mode (+0xa9c) is set |
| 0x100d | RMM_SPEAK_BAN_DEVICE | cloud FUN_00406fcc | ban_device.aac |
| 0x100e | RMM_SPEAK_WARNING | ? | warning.aac |
| 0x1005 (inferred) | RMM_SPEAK_SCAN_OK | rmm/zbar | scanok.aac |
| 0x100f / 0x1010 | white-light compensate on / off | cloud `cloud_make_video` FUN_004027ac | `set_light_switch` FUN_00405660 |
| 0x1011 | play /tmp/sd/1k.aac (test tone) | factory | |
| 0x1021 / 0x1022 | RMM_APP_MODE_EARPHONE / _SPKER | p2p, on IOTYPE SPEAKERSTART | talkback mode |
| 0x1023 | RMM_SET_MOTION_DETECT | p2p FUN_0040bf7c | +0x5e0 |
| 0x1024 | RMM_SET_DAY_NIGHT_MODE | p2p FUN_0040a370 | +0x4b0 |
| 0x1025 / 0x1026 | do_speaking / stop_speaking | rmm FUN_004083f4 / FUN_00408490 | byte +0x931 |
| 0x1027 | RMM_SET_MOTION_SENSITIVITY | p2p FUN_0040a45c | byte +0x933 |
| 0x1028 | RMM_SET_LDC | p2p FUN_0040b0e0, dispatch FUN_0040d154 | +0x4dc. rmm `media_rtl_set_ldc` (enabled when value ≥0x29) |
| 0x1029 | RMM_SET_BABY_CRY | p2p FUN_0040b1a8 | +0x4e0 |
| 0x102a | RMM_SET_MIC_VOLUME | p2p FUN_0040b400 | +0x4ec |
| 0x102b / 0x102c | panorama capture steps | cloud | +0x4f0/+0x4f4 |
| 0x102d | panorama pic (pic_name) | dispatch FUN_0040d1e4 | rmm saves a JPEG and replies 0x93 |
| 0x102f | RMM_SPEAK_BIND_TIMEOUT | dispatch FUN_00402b7c | timeout.aac |
| 0x1031 | RMM_SPEAK_WRONG_DEVICE | dispatch FUN_00402ae0 | device_wrong / bindkey_fail.aac |
| 0x1032 | set encode mode ("ePlayload") | p2p FUN_0040a61c | +0x4f8 |
| 0x1033 | set high resolution | p2p FUN_0040a6e4 | +0x4fc |
| 0x1034 / 0x1035 | record start / end prompt | ? | record_start/record_end.aac |
| 0x1036 | RMM_SET_LAPSE_FRAMERATE | p2p | +0x9dc..0x9e4 |
| 0x1037 | RMM_SET_LAPSE_FORCE_IDR | ? | `rts_av_request_h264_key_frame(3)` |
| 0x1038 / 0x1039 | audio mode (p2p_set_audio_mode) | p2p FUN_0040a524 | byte +0x9ec = 1/2 |
| 0x103a / 0x103b | RMM_SET_ABNORMAL_SOUND / _SENSITIVITY | p2p FUN_0040b270 / b338 | +0x4e4 / byte +0x934 |
| 0x103c | RMM_SET_HUMAN_MOTION | p2p `p2p_set_alarm_mode` FUN_0040a2a8 | +0x4e8 |
| 0x103d | warning prompt | ? | warning.aac |

**0x2xxx rcd, 0x3xxx misc, 0x4xxx PTZ/upgrade, 0x5xxx storage, 0x6xxx cloud, 0x7xxx p2p**

| id | name | sender → receiver | notes |
|---|---|---|---|
| 0x2000 | RCD_START_SHORT_VIDEO | → rcd | dispatch exits "recbackup" |
| 0x2003 | short-rec request | cloud `cloud_send_shortrec_msg` FUN_0040537c → rcd (len 0x84) | |
| 0x3000 / 0x3001 | (flag) | ? | +0x898 (copied into p2p frame header byte 0x19) |
| 0x3002 / 0x3003 | DISPATCH_SET_VIEWPOINT_TRACE / VOICE_CTRL | p2p FUN_0040b4c8 / b590 | bytes +0x9b4 / +0x9b5 |
| 0x4000 / 0x4001 / 0x4002 | P2P_PTZ_PRESET_ADD / _DEL / _CALL | p2p FUN_0040c4cc/c6ec/c87c | presets at +0x8b8 + 12*i |
| 0x4003 | P2P_PTZ_SET_CURISE_STAY_TIME | p2p FUN_0040c9b4 | +0x91c |
| 0x4004 / 0x4005 | P2P_PTZ_CRUISE_START / _STOP | p2p FUN_0040cb9c | +0x8a8 |
| 0x4006 | PTZ direction (payload 1..4 = dir) | p2p `p2p_ptz_direction_ctrl` FUN_0040ad50, rmm `rmm_ptz_direction_ctrl` FUN_00405534 (motion track, src=2) | dispatch drives the /dev/ssp motor ops table (FUN_0040df64). Mirror flips the direction. x range 0..0x1000, y range 0..0x5a0 |
| 0x4007 / 0x4008 | direction stop / home | p2p FUN_0040add8 / ae38 | |
| 0x400a / 0x400b | P2P_PTZ_SET_CURISE_PERIOD / SET_MOTION_TRACK | p2p FUN_0040ca58 / cafc | +0x920 / +0x928 |
| 0x400d / 0x400e | recbackup start / wifi kill | ? | +0x594 |
| 0x4017-0x4020 | capture/record flags | cloud `send_vc_capture_end_msg` 0x4018, `send_vc_record_end_msg` 0x4020 | u16 +0x9d0 / +0x9d2 |
| 0x4021 | download info (upgrade) | p2p FUN_0040df0c | dispatch FUN_00404908 |
| 0x4023 | alarm upload status / status_gather (JSON) | cloud FUN_00401a58 | |
| 0x4024 | upgrade_mode | cloud `do_need_update` FUN_00406ee4, p2p | +0xa9c |
| 0x5000-0x5006 | router/extra SD state and sizes ("router_disk:%d,%d,%d", "extra_disk:…") | ? | +0x932, +0x990..+0x9a4 |
| 0x6000 / 0x6001 | panorama capture start / abort | p2p FUN_0040cc8c / cdb4 → cloud | cloud `msg_proc` FUN_0040244c |
| 0x6002 | baby cry detected | ? → cloud | cloud sends 0xea. **No sender found in rmm** (see open questions) |
| 0x6004 | abnormal sound detected | rmm `send_abnormal_sound_detect_msg` FUN_0040625c (dst 4) → cloud | cloud sends 0xee |
| 0x6005 | rcd file path | rcd → cloud | |
| 0x6007 | | cloud → cloud. It then sends 0x7001 to p2p | |
| 0x6008-0x6010 | OTA/download state 0..8 | p2p `p2p_set_download_info` (0x6008/9/a) → cloud | dispatch also reads 0x6008 as update_seq (+0x1f4) and 0x6009 as update_version (+0x1d0) |
| 0x7000 | p2p internal | p2p → its own queue (/ipc_p2p) | |
| 0x7001 | cloud → p2p notification | cloud FUN_0040244c | |

---

## 2. /tmp/mmap.info (0xaa0 bytes)

Mapped by every daemon: dispatch `FUN_00410dc4` (creates and zeroes it), rmm `FUN_00414420`, p2p `FUN_00440e78`, cloud. The block holds
the product info (from mtdblock6), the config (mtdblock7) and runtime state. dispatch_worker persists it on message 0xff.

| off | type | meaning | evidence |
|---|---|---|---|
| 0x004 | int | region id | dispatch 0x8d |
| 0x00c | char[0x80] | API server base URL | cloud `%s/v4/...` args. dispatch 0x8d |
| 0x064 | str | version string sent as `-version` on /v4/ipc/reset (inferred) | cloud -c 139 |
| 0x08c | char[0x80] | copy of the API URL | dispatch main |
| 0x0d8 | str | MAC | cloud -c 139 `-mac` |
| 0x10c / 0x14c | char[0x40] | region strings (`-sname` for silent upgrade) | dispatch 0x8d, cloud -c 145 |
| 0x18c | u32 | monotonic seconds tick used for timeouts (inferred) | dispatch `[99]` |
| 0x190 | str | firmware version (`-version`) | cloud -c 138/141/145 |
| 0x1d0 | str | update_version | dispatch 0x6009 |
| 0x1f0 | str | region code (`-region`) | cloud -c 144 |
| 0x1f3 | u8 | flag (0xf7/0xf8) | dispatch |
| 0x1f4 | u8 | update_seq | dispatch 0x6008, cloud `-seq` |
| 0x1f5 | char[0x20] | hardware-version string (product info). Chars decode as "ptz_en, ptz_dir hor/ver, cds, mirror, resolution, def_x, def_y, isp" per the get_productinfo log. **+0x1fa = resolution char** ('1' = 1080p, '2' = 720p in rmm) | dispatch FUN_00403c44, rmm FUN_0040b2ac / FUN_00408cbc |
| 0x215-0x228 | | more product-info words. `(u32@0x218 & 0xffff0000)==0x32320000` makes dispatch skip /dev/ssp PTZ init | dispatch main |
| 0x235 | char[0x20] | device UID (`-uid`). If its strlen == 20, p2p uses it as the DID | cloud, p2p main |
| 0x255 | char[0x20] | device DID (`-did`) | cloud -c 144/145 |
| 0x295 | char[0x20] | keySec. This is the same key p2p passes to `PPPP_Listen` and logs as "key(%s)" | cloud, p2p tnp_proc |
| 0x2b8 | int | api-server saved(1) / cleared(2) | dispatch 0x96/0x97 |
| 0x2bc / 0x2dc | char[0x20] | more product-info strings | get_productinfo |
| 0x300 | char[0x20] | bind key from QR (`-key` for qr_bind) | dispatch 0x70, cloud -c 137 |
| 0x420 / 0x460 | char[0x40] | Wi-Fi SSID / passphrase from QR | dispatch 0x70 |
| 0x4b0 | int | day/night mode | 0x1024, rmm |
| 0x4b8 | int | tz offset (s) | 0x8e |
| 0x4bc | int | banned device | 0x88 |
| 0x4c0 | int | syncing info from server | 0x89/0x8a |
| 0x4c4 / 0x4c6 | u16 | cloud storage on / mode | 0x8b/0x8c, 0x94/0x95 |
| 0x4c8 / 0x4cc / 0x4d4 | int | cloud image on / pic index / pic interval | 0xf0-0xf4 |
| 0x4d8 | int | OTA state | 0x91 |
| 0x4dc | int | LDC | 0x1028, rmm |
| 0x4e0 / 0x4e4 / 0x4e8 | int | baby cry / abnormal sound / human motion enable | 0x1029/0x103a/0x103c |
| 0x4ec | int | mic volume | 0x102a |
| 0x4f0 / 0x4f4 | int | panorama capture state / count | 0x92/0x93 |
| 0x4f8 / 0x4fc | int | encode mode ("ePlayload") / high-res flag | 0x1032/0x1033, rmm |
| 0x50c | int | cpld opened / init flag (dispatch sets 1, rmm reads it) | |
| 0x510 / 0x530 | char[0x20] | device access password(s) used for p2p auth (current/alternate, inferred) | p2p do_auth FUN_004102a4 |
| 0x578 / 0x57c | int | pwd used count / pwd sync | 0x8f/0x90 |
| 0x584 | int | network-ready flag. p2p waits for +0x584==1 && +0x5c8==1 | p2p main |
| 0x590 | int | wifi connected | 0x68 |
| 0x594 / 0x598 | int | recbackup / packet loss values (also copied into p2p frame header) | 0x400e, p2p |
| 0x59c | int | time synced | 0x71 |
| 0x5a0 | int | "system ready" gate. motion is ignored and rmm streaming waits until it is 1 (inferred meaning) | dispatch, rmm main |
| 0x5a4 | int | SD present (p2p replay check) | p2p START_REPLAY |
| 0x5ac | int | handle passed with event names ("bind_success", "p2p_clr", "tnp_too_many_user") to FUN_00411098 / FUN_00441774 (inferred: event/LED notifier) | |
| 0x5b0 | int | number of connected p2p clients | 0xe1/0xe2 |
| 0x5b4 | int | p2p viewing state | 0xe3-0xe5 |
| 0x5bc / 0x5c0 | int | bind (QR-scan) mode / bind finished. rmm runs zbar when +0x5bc==1 | 0x72, rmm main |
| 0x5c8 | int | tnp/cloud online flag | p2p main |
| 0x5cc / 0x5d0 / 0x5d4 | int | motion flag / motion_type / motion_time | "g_dispatch_info.mmap_info->motion_type" |
| 0x5d8 | int | prev motion state | 0x101 |
| 0x5e0 | int | motion detect enable | 0x1023 |
| 0x5f0-0x5fc | int[2]+int[2] | baby-cry / abnormal-sound occur per channel | 0xea/0xeb/0xee/0xef |
| 0x600 | int | mirror | 0x7a/0x7b, rmm |
| 0x604 | int | status LED off | 0x76/0x77 |
| 0x608 | int | power off (privacy). rmm drops video frames while it is set | 0x74/0x75, rmm FUN_00408cbc |
| 0x614 | int | record mode (0 motion / 1 always) | 0x78/0x79 |
| 0x778 | int | tnp init status | 0x7f |
| 0x77c / 0x7bc / 0x7fc | char[0x40]/[0x40]/[0x80] | TNP DID / License / InitString from cloud /v4/tnp/on_line | 0x7e, p2p main |
| 0x87c-0x890 | int | p2p login/connect counters, immediate bitrate | 0x80-0x84 |
| 0x894 | int | auth bypass + blank-payload mode (factory/debug, inferred) | p2p do_auth, send_frame_data |
| 0x898 | int | flag copied into p2p video header byte 0x19 | 0x3000/0x3001 |
| 0x89c / 0x8a0 | int | PTZ busy / PTZ state (2/3 cruise, 8, 9 = panorama) | dispatch PTZ, rmm |
| 0x8a8 | int | cruise on | 0x4004/0x4005 |
| 0x8b8+12*i | | PTZ presets | 0x4000/0x4001 |
| 0x91c / 0x920 / 0x928 | int | cruise stay time / period / motion-track enable | 0x4003/0x400a/0x400b |
| 0x930 | u8 | per-frame byte copied into the fshare meta | rmm |
| 0x931 | u8 | speaking (talkback active) | 0x1025/0x1026 |
| 0x932 | u8 | router/extra disk state | 0x5000-0x5002 |
| 0x933 / 0x934 | u8 | motion / abnormal-sound sensitivity | 0x1027/0x103b |
| 0x938 | int | rcd-cost-derived value (10000/0x2713) | 0xe8 |
| 0x98c-0x98f | u8[4] | video backup state | 0x87 |
| 0x990-0x9a4 | int[6] | router/extra SD total/free/used | 0x5003-0x5006 |
| 0x9a8 | int | **hw_type** (dispatch sets 2 and logs "hw_type(%d)") | dispatch main |
| 0x9b4 / 0x9b5 | u8 | viewpoint trace / voice ctrl | 0x3002/0x3003 |
| 0x9b8 | int | schedule power | 0xec |
| 0x9d0 / 0x9d2 | u16 | capture-sound / vc-record flags | 0x4017-0x4020 |
| 0x9d4 / 0x9d8 / 0x9dc-0x9e4 | int | lapse video enable / modify / framerate params | 0x9a/0x9b/0x1036 |
| 0x9ec | u8 | audio mode 1/2 | 0x1038/0x1039 |
| 0x9ed / 0x9ee / 0x9ef | u8 | double light / alarm sound / motion-detect status | 0x103/0x104/0x102 |
| 0x9f0 (+0x43) / 0xa33 | | AP-mode request block / ack. p2p returns +0x9f0 in IOTYPE 0x1385 | 0x105-0x107, cloud send_apmode_result |
| 0xa78 | int | AP mode deadline | 0x105 |
| 0xa87-0xa9a | u8[20] | **ability bitmap** (DISPATCH_APPLY_ABILITY_SETS). p2p gates IOCTRLs on it | 0x100, p2p myDoIOCtrl |
| 0xa9c | int | **upgrade_mode** ("g_dispatch_info.mmap_info->upgrade_mode") | 0x4024, rmm |

---

## 3. p2p_tnp

### 3.1 SDK identity
- **CS2 Network "PPPP" P2P SDK**, statically linked and wrapped in a C++ namespace `tnp` (the "TNP" build). It is **not** ThroughTek IOTC/AVAPI.
  Evidence: symbols `_ZN3tnp…PPPP_Proto_Send_Hello`, `PPPP_Proto_Send_DevLgn_Key`, `PPPP_Proto_Send_RlyPort_Key`, `PPPP_Listen_With_Key2`,
  `PPPP__DecodeServerString`, `PPPP_CRCEnc/Dec`, `PPPP_thread_recv_DRW`, `P2PServerMap`, super-device and relay functions. The banner string is "PPPP_API Version: %x %d.%d.%d.%d".
- The app layer deliberately borrows **TUTK IOTYPE naming** (`IOTYPE_USER_IPCAM_AUDIOSTART` 0x300, `SPEAKERSTART` 0x350, `DEVINFO_REQ` 0x330, …) and a
  TUTK-like FRAMEINFO header. The transport is still PPPP.
- API thunks (p2p `0x406170-0x4062a0`): `FUN_00406170`→`FUN_00415fb4` PPPP_Initialize(InitString, 0xb) (calls `PPPP_DecodeString`, `PPPP__Device_Init`).
  `FUN_00406250`→`FUN_00425480` = PPPP_Listen (calls `PPPP_Listen_With_Key2`). `FUN_004061c0`→`FUN_0041467c` = PPPP_Read.
  `FUN_004061d0`→`FUN_004157e4` = PPPP_Write (calls `PPPP_Write_Block`). `FUN_00406280`→`FUN_00415600` = PPPP_Check_Buffer.
  `FUN_00406230`→`FUN_004141a8` = PPPP_Close/ForceClose. `FUN_00406210`→`FUN_00413ec0` = PPPP_Check (session info). `FUN_004061a0`→`FUN_00425854` = PPPP_NetworkDetect.

### 3.2 Initialization (main @004062b0, tnp_proc FUN_004135d4)
1. Map /tmp/mmap.info, open /ipc_dispatch and /ipc_p2p, then loop `fshare_open` until it succeeds ("fshare_open ok").
2. If `/tmp/sd/Factory/wpa_supplicant.conf` exists, enter a factory path that builds a test DID from mmap +0x255.. and uses a hard-coded factory InitString.
3. Send 0x7f(1). Wait until mmap +0x584==1 and +0x5c8==1 (network up, cloud online). Send 0x7f(2).
4. Choose credentials:
   - If `strlen(mmap+0x235 /*uid*/) != 20`: poll once per second until the **cloud** fills **InitString (+0x7fc)** and **DID (+0x77c)**.
     The cloud does this in `webapi_do_tnp_on_line` FUN_00402cd8, which runs `/backup/cloudAPI -c 141 -url "<api>/v4/tnp/on_line" -keySec <+0x295> -uid <+0x235> -version <+0x190>`,
     waits for `"code"==20000`, parses `"DID"`, `"License"` and `"InitString"`, and passes them to `cloud_set_tnp` (msg 0x7e). dispatch stores them and `killall p2p_tnp`.
     The watchdog restarts p2p_tnp, which then finds the values.
   - Else (20-char UID): DID = UID. InitString = +0x7fc if set, otherwise a **hard-coded CS2 InitString** picked by region (two embedded constants, not reproduced here).
5. tnp_proc: PPPP_Initialize(InitString), PPPP_NetworkDetect (logs NAT type, WAN/LAN IP), start threads `state_statistics` (FUN_0041334c) and `speaker_worker`.
   Then loop `PPPP_Listen(DID, 3600 s, port 0, bEnableInternet = (DAT_00468918 != 1), key = mmap+0x295)`.
   Each accepted session goes into a 10-slot table (0xdc8 bytes per session at 0x478424). An 11th session is closed with "tnp_too_many_user".
   It then sends 0xe1 (connected), runs PPPP_Check and starts a `tnp_worker`.
   - Observed: the cloud-provided **License (+0x7bc) is not referenced anywhere in p2p_tnp**. The Listen key is mmap+0x295 (keySec / product-info key). See open questions.

### 3.3 Control channel and authentication
- Channel 0 carries control. `parse_msg` FUN_00412bd0 reads an outer header (a version byte that must be 1, plus a BE u32 length < 0x400), then the body (PPPP_Read ch 0, 10 ms).
  Unsupported versions get `p2p_send_unsupported_version_reply`.
- IOCTRL body (`myDoIOCtrl` FUN_00410b08):
```
0x00 u16 BE  IOTYPE
0x02 u16 BE  seq/index (echoed in replies)
0x04 u16 BE  extra-header length (payload = body + 0x28 + this)
0x06 u16 BE  payload length
0x08 char[32] auth = "<nonce>,<hash>"
0x28 ...     payload (ints are BE, swapped with FUN_00445068 = ntohl)
```
- **Auth (do_auth FUN_004102a4), observed:** `hash` must equal the first 15 chars of `B64(HMAC(pwd, "user=xiaoyiuser&nonce=<nonce>"))`.
  `FUN_004089cc` gives a 20-byte digest, so the HMAC is inferred to be HMAC-SHA1. `FUN_00408cbc` is the encoder (inferred base64).
  `pwd` is mmap+0x510, or +0x530 if the first is empty. Each session keeps a 100-entry nonce replay list ("lately used nonce!"). Failure produces
  "DISPATCH_SET_P2P_PWDWRONG". IOTYPE 0xff00 is the auth probe (reply via `p2p_send_auth_result` FUN_0040fe58). On success the password is copied into the session (+0x479148/0x47914c) and is later used as the media key.
- **Ability gating:** a 39-entry table at 0x448920 `{ability_bit, IOTYPE, err_resp}` is checked against the mmap+0xa87 bitmap. Unsupported calls get `p2p_send_ctrl_error`.
- Replies go through `FUN_0040cfb0` / `p2p_send_ctrl_data` FUN_0040be44 (resp IOTYPE = req+1 in most cases).

### 3.4 IOTYPE → action → IPC
| IOTYPE | name (log string) | handler → IPC msg |
|---|---|---|
| 0x1ffe | IPCAM_START_KEY (legacy live start) | session flags, then 0xe3 (viewing) |
| 0x2345 | TNP_IPCAM_START_KEY (live: byte0 = stream/res, byte1, byte2 = force) | `set_resolution` FUN_0040daa8, max 8 viewers ("reach MAX_VIEWING_NUM"), 0xe3 |
| 0x2346 (inferred) | TNP_IPCAM_START_REPLAY_KEY (SD playback, start time at +4/+8) | needs SD (+0x5a4). mp4 reader (`close_replay_frame` FUN_0040967c) |
| 0x2347 | TNP_EVENT_LIST_REQ | FUN_0040b98c |
| 0x318 | LISTEVENT_REQ | FUN_0040d680 |
| 0x31ae | RECORD_PLAYCONTROL_KEY (p->command) | playback pause/stop/seek, 0xe4 |
| 0x2ff | IPCAM_STOP | 0xe4 stop viewing |
| 0x300 / 0x301 | AUDIOSTART / AUDIOSTOP | per-session audio flag |
| 0x350 / 0x351 | SPEAKERSTART / SPEAKERSTOP (talkback) | 0x1021/0x1022 to rmm |
| 0x330 | DEVINFO_REQ → 0x331 | |
| 0x1300 / 0x1302 | GET_VERSION / SET_UPDATE_URI | FUN_0040df0c: runs `/home/app/upgrade_firmware`, sends 0x4021/0x4024/0x6008-0x600a |
| 0x1304 | SET_SILENT_MODE | 0x74/0x75 |
| 0x1305 | SET_LIGHT | 0x76/0x77 |
| 0x130a | SET_RECORD_MOD | 0x78/0x79 |
| 0x1311 / 0x1313 | SET_RESOLUTION / GET_RESOLUTION | in-process (session stream choice) |
| 0x1315 | SET_TF_FORMATE | 0x85 |
| 0x131f | SET_MIRROR_FLIP | 0x7a/0x7b |
| 0x1321 | SET_DAYNIGHT_MODE | 0x1024 |
| 0x1325 / 0x1230 | SET_MOTION_DETECT | 0x1023 / 0x102 |
| 0x1327 | GET_MOTION_DETECT | |
| 0x132d | SET_ALARM_MODE | 0x103c |
| 0x132f | SET_LDC | 0x1028 |
| 0x1335 | SET_ALARM_SENSITIVITY | 0x1027 |
| 0x1337 / 0x1339 | SET/GET_RECORD_SPEED | |
| 0x133b | SET_MIC_VOLUME | 0x102a |
| 0x133f | SET_BABY_CRY | 0x1029 |
| 0x1353 / 0x1355 | SET/GET_VIDEO_BACKUP | 0x87 |
| 0x135d | SET_ABNORMAL_SOUND_SENSITIVITY | 0x103b |
| 0x1361 | (cloud sync / 0x7000) | 0x7000 to self |
| 0x1365 / 0x1367 / 0x1369 / 0x136b | SET_VIEWPOINT_TRACE / LAPSE_VIDEO / VOICE_CTRL / ABNORMAL_SOUND | 0x3002 / 0x9a / 0x3003 / 0x103a |
| 0x1380 / 0x1382 | SET_DOUBLE_LIGHT / SET_ALARM_SOUND | 0x103 / 0x104 |
| 0x1384 | SET_AP_MODE (0x43 bytes) → 0x1385 | `p2p_ap_mode_set`, 0x105 |
| 0x2350 / 0x2352 | SET_ENCODING_MODE / SET_HIGH_RESOLUTION | 0x1032 / 0x1033 |
| 0x3c0 / 0x3c4 | TRIGGER_SYNC_INFO_FROM_SERVER / GET_AP_INFO | 0x89 / reply 0x3c5 |
| 0x4000 / 0x4002 / 0x4006 | PTZ_PRESET_ADD / _DEL / _CALL | 0x4000 / 0x4001 / 0x4002 |
| 0x4007 / 0x4009 | PTZ_SET_CURISE_STAY_TIME / SET_CRUISE_PERIOD | 0x4003 / 0x400a |
| 0x400b / 0x4010 | PTZ_SET_MOTION_TRACK / SET_CRUISE | 0x400b / 0x4004-0x4005 |
| 0x4012 / 0x4013 / 0x4014 / 0x4015 | PTZ_DIRECTION_CTRL / _STOP / PTZ_HOME / JUMP_TO_POINT | 0x4006 / 0x4007 / 0x4008 / (jump) |
| 0x4020 / 0x4022 / 0x4024 | PANORAMA_CAPTURE_START / ABORT / SCHEDULE_POLLING | 0x6000 / 0x6001 to cloud |
| 0x5001 | SET_AUDIO_MODE | 0x1038/0x1039 |
| 0x6ff1 | GET_FACTORY_TEST_INFO | |

### 3.5 Media path and encryption
- **Source:** the "fshare" shared-memory ring (identical code in rmm and p2p). It uses POSIX shm `/fshare_frame_buf` and semaphores `/fshare_write_lock`,
  `/fshare_read_lock` and `/fshare_read_notify_%d`. rmm creates it (`fshare_create` FUN_004128e8, `fshare_write` FUN_00412ebc).
  p2p opens it (`fshare_open` FUN_0043e4c8) and reads with `fshare_read`/`fshare_read_newest`/`fshare_wait`, filtering on a flag mask
  (FUN_0040ee3c: 0x800 = sub stream, 0x2 = need keyframe, 0x100 = audio).
- **Channels (PPPP), observed in `p2p_send_frame_data` FUN_0040e27c:** ch0 control, ch1 audio (live audio out, and also read for talkback in FUN_0040fb50),
  ch2 live video I-frames, ch3 live video P-frames, ch4/ch5 the same for replay. `PPPP_Check_Buffer` controls flow (>0x5000 bytes queued → wait, 21 tries).
  Bitrate adaptation: "switch resolution!" when throughput drops, and 0x84 reports the rate.
- **Frame header (0x20 bytes, inferred to be modelled on TUTK FRAMEINFO):** +0 session protocol version, +1 media type (1 video / 2 audio), +4 BE length,
  +8 codec id (video 0x4e = H.264. 0x51 when the fshare flag 0x40 is set, inferred H.265. audio 0x8a), +0xa flags (1 = I-frame, audio 0x1b), +0xe BE seq,
  +0x10/+0x12 BE session fields, +0x14 BE timestamp, +0x19 mmap+0x898, +0x1a/+0x1b mmap+0x598/+0x594.
- **Encryption (observed):** for **live video I-frames** (when the session encrypt flag, set by START_KEY, is on and len > 0x23), the code runs
  `AesSetKey(key,16)` and `FUN_0044473c` (inferred AES-128-ECB block encrypt) **in place on two 16-byte blocks at payload offsets +4 and +0x14**.
  Nothing else is encrypted: P-frames, audio and the rest of the I-frame are sent in clear.
  Key = the 15 password bytes stored in the session at auth time, followed by ASCII `'0'`.
  - Also observed: if mmap+0x894==1 and the session was authenticated through the bypass path, the frame payload is zeroed before sending.
- **Talkback:** the app sends AAC on ch1. FUN_0040fb50 reads it and calls `fshare_write` with flag 0x200. rmm reads those frames and decodes them with
  fdk-aac into the playback chain (inferred. The rmm reader threads `media_ao_get_aacstream` / `media_rtl_ao_get_aacstream` are not resolved as functions in the export).

---

## 4. rmm (Realtek media manager)

### 4.1 SDK usage (dynsym and callgraph)
- DT_NEEDED: librtstream.so.2, librtsisp, librtsv4l2, h1encoder (H.264), librtsjpeg, librtsosd2, librtsmd, librtsmask, librtsgeom (LDC), librtscamkit,
  librtsaec, libaacenc, libfdk-aac, libasound.
- Calls: `rts_av_init/release`, `rts_av_create_isp_chn`, `rts_av_create_h264_chn`, `rts_av_create_mjpeg_chn`, `rts_av_create_osd_chn`,
  `rts_av_set_profile`, `rts_av_bind/unbind`, `rts_av_enable_chn`, `rts_av_start_recv/send`, `rts_av_poll`, `rts_av_recv`, `rts_av_put_buffer`,
  `rts_av_query/get/set/release_h264_ctrl`, `rts_av_request_h264_key_frame`, `rts_av_get/set_isp_ctrl`, `rts_av_get_isp_daynight_statis`,
  `rts_av_create_audio_{capture,playback,aec,encode,mixer,resample}_chn`, `rts_av_query/set/release_aec_ctrl`, `rts_av_set_callback`,
  `rts_av_set_buffer_callback`, `rts_av_send`, `rts_queue_*`, `aacDecoder_*` (fdk), and ALSA `snd_hctl_*` (amixer volume, `rts_amixer_init` FUN_00411bc8).

### 4.2 Video pipeline (FUN_0040b2ac `init_main_stream` + `init_sub_stream`)
- Sensor probe FUN_0040b144 reads `/sys/devices/platform/rts_soc_camera/sensor`: SC1245 → 1280x720. SC2235/SC2230/SC2232 → 1080p.
  Fallback uses hw-version char mmap+0x1fa ('1' → 1920x1080, '2' → 1280x720).
- **Main:** ISP chn → H.264 chn → MJPEG chn (snapshot) + OSD chn. 20 fps, GOP = 2*fps = 40. bitrate 0x133333 (~1.2 Mbps) for 1080p or 0xc8000 (800 kbps) for 720p.
  `h264_ctrl` mode 8 ("set H264 to CVBR mode"), max 0x133333, min 0xc8000.
- **Sub:** 640x360 @20 fps, GOP 40, bitrate 0x4b000 (300 kbps), CVBR max 0x80000 / min 0x40000, ctrl+0x18 = 0x2a (inferred QP limit).
- **Raw/YUV stream:** `init_raw_stream` FUN_00409ddc (ISP chn + JPEG). It feeds 640x360 YUV to zbar QR scanning (`zbar_proc` FUN_00407168, only while mmap+0x5bc==1 and
  /tmp/rmm_skip_zbar is absent) and to software motion detection (`motion_detect.c`: `modet_init` FUN_0040d6e4, `modet_process` FUN_0040dc4c, `modet_isBiggerMove`).
- ISP controls: `media_rtl_set_flip` FUN_0040af20, `media_rtl_set_ldc` FUN_0040afec, `media_rtl_set_3dnr` FUN_0040b0f8, `media_rtl_set_color2grey`/`set_grey_attr`
  (night B/W). `daynight_switch_func` FUN_004050bc polls `rts_av_get_isp_daynight_statis` and drives IR-cut/LEDs via /dev/cpld_periph ioctl 0x20007013 (and 0x20007011 at init).
- **Frame hand-off:** `media_rtl_get_videostream` FUN_00408cbc (two threads, stream 0 = main, 1 = sub) runs `rts_av_poll`/`rts_av_recv`, then `fshare_write` (thunk FUN_00402580).
  It drops frames when mmap+0x608 (power off) is set. Per-frame meta (observed layout): `+0 time(0)`, `+4 ms tick`, `+8 u16 seq`, `+0xa u16 flags`
  (0x400 main, 0x800 sub, 0x100 audio, 0x200 talkback (from p2p), 0x2 keyframe), `+0xc size`, `+0x10 u8 mmap+0x930`, `+0x13 fps`, `+0x14 u16 w`, `+0x16 u16 h`.
  On consumer request it calls `rts_av_request_h264_key_frame`. There is no /dev/rtstream device. All consumers (p2p_tnp, and inferred mp4record/rtmp) go through fshare.

### 4.3 Audio (FUN_0040a2d0 `audio_init`)
- Capture `hw:0,1`, 16 kHz, 16-bit, mono. Graph: `capture → AEC → resample → AAC encode (type 7, 32 kbps)`.
  The playback path is `resample(16k) → mixer → playback(hw:0,1) → resample → AEC` (echo reference). AEC is enabled through `rts_av_set_aec_ctrl` (field0 = 1).
- Thread `media_ai_get_aacstream` FUN_00408138/FUN_004086a0 reads encoded AAC and calls fshare_write with flag 0x100.
- Prompts: `msg_proc` plays AAC files (`/tmp/audio/*.aac`, `/home/app/audio_file/common/*.aac`) via FUN_00408214, which goes through the fdk decoder (`fdk_aac_decode_frame` FUN_0040948c)
  and then `send_pcm_to_playback` FUN_00408534 (`rts_av_send`). rmm can also run as `aacplay <file>`. Beep uses `media_rtl_send_ao_beep`.
- **Abnormal sound:** `abnormal_sound_detection_func` FUN_00406320 uses a linked "ivaAbnormalSoundDetect" library ("Abnormal Sound Detection - V20161229.2") with sensitivity from mmap+0x934.
  On detection it sends 0x6004 to the cloud, which then sends 0xee to dispatch.
- **Baby cry:** observed **no** baby-cry detector or string in rmm. The setting (0x1029, +0x4e0) is only stored, and the cloud handles 0x6002. The detector may live in another
  binary or be unimplemented on this model.
- **Motion:** `motion_proc` (code around 0x4058a4, not split into a function) runs modet results through pause/unlock logic. It sends 0x7c (motion start),
  0xe6 (follow/track start) and a motion-stop message. With motion-track enabled it sends 0x4006 PTZ moves (`rmm_ptz_direction_ctrl`).

---

## Open questions
1. What the cloud's TNP **License** (+0x7bc) is for: p2p_tnp never reads it, and PPPP_Listen uses mmap+0x295. Possibly it is consumed by a newer p2p build, or the CRC key is embedded in the InitString.
2. Who sends 0x6002 (baby cry) and 0x0091/0x0099/0x1008/0x100e/0x1034/0x1035. Likely mp4record, rtmp, cloud paths or shell tools that are not exported.
3. p2p's own mq receive thread (`LAB_00409bbc`) and the rmm talkback/ao reader threads are not decompiled as functions. Their handled IDs (0x7000/0x7001, P2P_SYNC_ABILITY_*) are only partly known.
4. Exact codec numbering in the frame header (0x51 vs H.265, 0x8a for AAC) and the inner layout of the 0x20-byte header beyond the fields listed.
5. Confirm that `FUN_0044473c` is ECB (no IV is set on this path) and that `FUN_004089cc` is HMAC-SHA1. Both are consistent with sizes but not proven.
6. Several flags (+0x5a0, +0x584, +0x5c8, +0x894) are named only by behaviour.
