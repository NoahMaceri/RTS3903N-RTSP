# Hardware interfaces

Firmware `7.1.00.25A_202002271051`, Realtek RTS3903 (MIPS/RLX), Linux 3.10.27. This is static analysis only. Sources are the Ghidra exports in `../../Decompiled source/` (apps/ + kernel_modules/) plus raw ELF parsing of the `.ko` files: symbols, `.data` initial values and relocations, done with small python scripts. The scripts are in the session scratchpad and are not part of the tree.

Legend: **[obs]** means it was read from decompilation, disassembly, relocations or strings. **[inf]** means it is inferred.

Address conventions: for `.ko` files, Ghidra address = `.text` offset + 0x10030 in the ssp modules. The other modules use a similar base, and the Ghidra names are used below. For user-space binaries, addresses are virtual addresses.

Device-specific values (DID/UID, keys, Wi-Fi credentials, serials) are intentionally not reproduced.

---

## 1. `cpld_periph.ko`: "CPLD peripheral" is plain GPIO

There is **no CPLD**. [obs] The module only calls `gpio_request/direction/get/set`, `misc_register`, a 1 s kernel timer used for LED blinking, and `/proc/driver/cpld`. Writing `'1'` to that proc file turns on debug printk (`cpld_proc_write` @00010040). The name is a holdover from an older board.

- [obs] Misc device: minor 255 (dynamic), name `cpld_periph` → **`/dev/cpld_periph`**. Built `Dec 5 2019 13:42:40`, `CPLD_VERSION=CPLD_PERIPH @rt`.
- [obs] Module params `hw=` and `gpio=` are `charp` and must each be exactly 32 chars (`init_module` @00010888). Otherwise it fails with `-EFAULT` (-14). `load_cpld_ssp` passes the vd1 strings `hw_ver` (vd1+0xA8) and `gpio_pin` (vd1+0xCC).
- [obs] All `PORT_*` start as 0xFF (unused; the helpers skip 0xFF). The default "on" levels are `LED_GREEN=LED_RED=IR_ON=AUDIO_ON=LED_ETH_ON=1` and `LED_WHITE_ON=0` (.bss). `PORT_WIFI_PWR` and `PORT_SDIO_ENABLE` exist but are never assigned (only freed).

### GPIO assignment, decoded from the `gpio=` string (g[i]) and `hw=` string (h[i])

| g[i] | value | Linux GPIO | function | polarity |
|---|---|---|---|---|
| g[0] | '2' / '3' / '4' | 11 | green status LED / Ethernet LED / IR LED | IR LED is active-low if h[7]=='2' |
| g[2] | '2','3' / '4','5' | 22 | green LED (on=0 / on=1) / red LED (on=0 / on=1) | |
| g[3] | '2' / '3' | 18 | IR LED / white light | |
| g[4] | '2' / '3' | 19 | white light / IR LED | |
| g[7] | '3','4' / '5','6' | 15 | red LED (on=0/1) / green LED (on=0/1) | |
| g[8] | '1' | 6 | `PORT_FACTORY_DEFAULT` (reset button), input | |
| g[9] | '1' | 9 | `PORT_AUDIO_ENABLE` (speaker amplifier) | active-low if h[6]=='2' |
| g[11] | '2' | 0 | IR LED | h[7] |
| g[12]/g[13] | '1'/'2' | 20 / 21 | IR-cut H-bridge `ANODE` / `CATHODE` (g[12]=='1' → anode=20; g[13]=='2' → anode=21; the cathode is the other one) | |

[inf] g[0..7] correspond to the eight motor-capable pins (PIN71/38/69/34/35/37/36/39 → GPIO 11/14/22/18/19/17/16/15, from comparing with the ssp modules). A value of `'1'` there means "used by the motor". This is why the LED and IR functions are only claimed for values ≥ '2'.

### ioctl table (`FUN_000101e8`, the unlocked_ioctl)

The magic is `'p'` (0x70). The command word is `_IO('p', nr)` = `0x200070nn` on MIPS. For the numbers handled here, the driver dispatches on `nr` only. Any other `nr`, or a type ≠ 0x70, returns -1.

| cmd | nr | action [obs] | user-space caller [obs] |
|---|---|---|---|
| 0x20007001 | 0x01 | green LED on (steady); suppressed while LEDs are globally off | dispatch `do_eth_connect`, `do_monitor_wifi`, msg 0xe4/0xe5; watch_process |
| 0x20007002 | 0x02 | green LED off | — |
| 0x20007004 | 0x04 | green LED blink (1 Hz toggle by timer `FUN_000107b4`) | dispatch Wi-Fi monitor (connecting/failed), reset; rmm after QR scan |
| 0x20007009 | 0x09 | red LED on | dispatch reset thread |
| 0x2000700a | 0x0a | red LED off | dispatch, rmm |
| 0x2000700c | 0x0c | red LED blink | dispatch Wi-Fi monitor |
| 0x2000700e | 0x0e | **read** `PORT_FACTORY_DEFAULT` (GPIO6); returns the level | dispatch reset poll thread @~0x409830 |
| 0x2000700f | 0x0f | no-op | — |
| 0x20007010 | 0x10 | GPIO9 = `AUDIO_ON` (speaker amplifier enable) | rmm `FUN_00409c3c` before playing a prompt |
| 0x20007011 | 0x11 | GPIO9 = !`AUDIO_ON` (amplifier off) | rmm after playback / when aacplay exits |
| 0x20007012 | 0x12 | read `PORT_AUDIO_ENABLE` level | — |
| 0x20007013 | 0x13 | IR LED: `copy_from_user(int)`; >0 → on, ≤0 → off | dispatch main, rmm `FUN_004055bc`, rmm main |
| 0x20007014 | 0x14 | IR LED state → user int (100 or 0) | — |
| 0x20007015 | 0x15 | **IR-cut "day"**: cathode=1, anode=0, `msleep(200)`, both 0 (200 ms pulse) | dispatch main, rmm day path |
| 0x20007016 | 0x16 | **IR-cut "night"**: cathode=0, anode=1, 200 ms, both 0 | dispatch main, rmm night path |
| 0x20007017 | 0x17 | read the IR-cut pins → 0..3 bitmap | — |
| 0x2000701b | 0x1b | **all status LEDs forced off** (sets the "LED disabled" flag) | dispatch (status-light setting mmap+0x604==1, msg 0x76/0x78, `DISPATCH_SET_BAN_DEVICE` 0x88) |
| 0x2000701c | 0x1c | LEDs re-enabled; restores steady-on states | dispatch (mmap+0x604==0), reset |
| 0x20007023 | 0x23 | white light on (`LED_WHITE_ON`=0, so active-low) | rmm `set_light_switch` |
| 0x20007024 | 0x24 | white light off | rmm `set_light_switch` |
| 0x20007025/26 | 0x25/0x26 | Ethernet LED on/off | — |

At boot, dispatch `main` pulses IR-cut 0x15 then 0x16, then sets the IR LED (0x13). This is presumably a filter exercise or self-test [inf].

### Reset button [obs]
The dispatch reset thread (disassembly around 0x409824–0x4098e4; strings `check reset, now ding reset`, `start_reset`) works like this:
1. It polls `ioctl(cpld, 0x2000700e)`. A return of 0 means pressed (active-low [inf]).
2. After **≥2 consecutive pressed polls** it does the following: `0x2000701c` (LEDs on), `set_default` (FUN_0040881c, factory reset of the config), `0x20007004` (green blink), `0x20007009` (red on), then `send_reset_msg` (FUN_00402cb4).
3. [inf] The poll period is the 1 s system tick, so the hold time is about 2 s.

---

## 2. PTZ motor drivers: `ssp_ms41909.ko` / `ssp_ms41909_union.ko`

[obs] Despite the name, **neither module uses SSP/SPI or an MS41909**. Both are **GPIO bit-bang stepper drivers** with these properties:
- 4 coil GPIOs per motor
- an 8-entry half-step table `timing = {1,3,2,6,4,12,8,9}` (bit0..3 → D1..D4)
- a kernel timer per motor
- author string `GM Technology Corp.` and identifiers `GPIO_PTZ_MSC316D_MOTOR_*`, which suggest the code was copied from an MStar MSC316D design [inf]

The misc device name is `"ssp"` (from `.rodata.str1.4+0x16c` via the `stepmotor_misc` reloc), minor dynamic → **`/dev/ssp`**.

### Motor objects [obs]
`x_stepmotor` has id 0 (pan) and `y_stepmotor` has id 1 (tilt). Struct fields:

| offset | field |
|---|---|
| +4 | dir |
| +8 | running |
| +0xC | speed divisor (default 2) |
| +0x10 | base period of 8000 µs → step period = 8000/speed µs |
| +0x34 / +0x38 | step counters |
| +0x3C | target steps |
| +0x40 | **position** |
| +0x44 | accumulated steps |
| +0x48..0x54 | GPIO D1..D4 |
| +0x58 | timing table |
| +0x60 | phase index |

- **Limits:** position is clamped to **0..4096 (pan)** and **0..1440 (tilt)** half-steps (`FUN_0001085c`, `FUN_00010960`). A move request is also clamped to that many steps.
- **Direction:** dir 2/3 increment the position; dir 1/4 decrement it. Dir 1/2 address the tilt motor and 3/4 the pan motor (ioctl handler).
- **No limit switches or homing in the kernel.** Homing is done in user space by over-driving into the mechanical stop, while the counter saturates at 0 or max (see §3).
- At the end of a move all four coils are driven low (`FUN_000106d4`), so there is no holding torque.

### `/dev/ssp` ioctl ABI (raw command numbers 1–5, not `_IO`-encoded; handler at `.text+0x120`)
The argument is a 32-byte struct `ptz_arg { int x; int y; int dir; int speed; int len; int running; int t_x; int t_y; }`. The field names are [inf]; the offsets are [obs].

| cmd | action [obs] |
|---|---|
| 1 | get status. Output: +0 pan position, +4 tilt position, +0x14 running (OR of both motors). Used by `ptz_get_position` FUN_0040b808 |
| 2 | move. Input: `dir` @+8, `speed` @+0xC (0→2, 10→4, else as given; applied to both motors), `len` @+0x10. **steps = len·100 / (8000/speed)**, so `len` is the move duration in 0.1 ms units. At speed 10 (=4, 2 ms/step), `len=0x14000` (81920) = 4096 steps (full pan) and `len=0x7080` (28800) = 1440 steps (full tilt). Used by `set_motor_dir_speed` FUN_0040b6d8 |
| 3 | stop both motors (arg may be NULL). Used by `ptz_stop` FUN_0040ba6c, which then polls cmd 1 until running==0 (≤1000 × 1 ms) |
| 4 | get elapsed-time / running info: +0x18.. elapsed ms per motor, +0x14 running |
| 5 | copy 4 bytes from user into a driver global (bss+0x74, purpose unknown) |

### Variants and pin maps [obs]
- **`ssp_ms41909.ko` (8-pin, two independent motors).** It requires `hw[0] != '0'` and `gpio[0..7] == "11111111"`.
  - Default: pan (X) = GPIO **19,17,16,15** and tilt (Y) = GPIO **11,14,22,18**.
  - `hw[8]=='2'` swaps the X/Y sets.
  - `hw[1]=='2'` reverses the pan coil order (`PTZ_HOR == HW_REVERSE`).
  - `hw[2]=='2'` reverses the tilt coil order.
- **`ssp_ms41909_union.ko` (handles both).** It requires `hw[0]=='1'`.
  - **8-pin**: same as above. It logs `PIN71/PIN38/PIN69/PIN34/PIN35/PIN37/PIN36/PIN39`.
  - **4+1-pin**: selected by `gpio[10]=='4'` and `gpio[3..6]=="4444"`. It logs `PIN76/PIN34/PIN35/PIN37/PIN36`. **Both motors share coil GPIOs 18,19,17,16.** A fifth line, `MOTO_HV` (pseudo-GPIO 0x76), selects which motor's driver is connected: `MOTO_H_ON=0` = pan, `MOTO_V_ON=1` = tilt. The ioctl move path sets HV before each move: dir 1/2 → V, 3/4 → H. `hw[8]=='2'` swaps H/V.
  - **PIN76 is not a gpiolib GPIO.** `ssp_gpio_set_value(0x76, v)` directly read-modify-writes **0xB8140024 bit 17** (phys 0x18140024; `ssp_gpio_set_value` @0001063c). Request, free and direction are no-ops for this pin. [inf] 0x18140024 is a pin-mux or "special-pin" data register for a pad that is not exposed through gpiolib.
  - Consequence [inf]: on 4+1 boards pan and tilt cannot move at the same time.
- U-Boot also touches the motor pins early (`gpio_magic`, `gpio_pin:`, `gpio moto set fail`; see init_path.md).

---

## 3. User-space PTZ (dispatch `ptz_ctl.c`)

### Gate and path selection
[obs] The gate and path selection are described in init_path.md. Two paths exist:
- **GPIO stepper path:** `/dev/ssp` (fd `DAT_00426414`).
- **UART path:** taken when mmap+0x218 high half == `"22"`.

### Primitives [obs]
| function | name | what it does |
|---|---|---|
| FUN_0040b6d8 | `set_motor_dir_speed` | ioctl 2 |
| FUN_0040b808 | `ptz_get_position` | ioctl 1 |
| FUN_0040ba6c | `ptz_stop` | ioctl 3, then waits for running==0 ("PTZ stop OK/timeout") |
| FUN_0040acc4 | `modify_ptz_running_stat` | sets mmap+0x89c and increments mmap+0x9b0 |

### UART counterparts [obs]
FUN_0040abcc, FUN_0040ac10, FUN_0040ad3c (`h601r_stop`) and FUN_0040ad90 (`h601r_get_position`) are the UART-path versions of the primitives above. They call `FUN_0041195c` (`ssp_uart_send_cmd`) with cmd 2 = move, 1 = get position, 3 = stop. FUN_0040af30/FUN_0040b02c are the UART-path versions of the homing sequences.

### Sequences [obs]
- **Self-check / homing** (FUN_0040bd8c), at speed 10:
  1. full pan +4096 (dir 3)
  2. full pan −4096 (dir 4)
  3. full tilt −1440 (dir 1)

  After each move it waits (FUN_0040b930) and stops. FUN_0040be58 then tilts fully up (dir 2, 1440). Over-driving into the stops re-zeroes the saturating counters.
- **Go to (x,y)** (FUN_0040b328, UART variant; FUN_0040bffc is the `/dev/ssp` variant used by cruise). If the current pan is <201 or the current tilt is <101, it first over-drives to the end stop: pan moves −200−cur, tilt moves 0x604−cur (beyond 1440). Then it moves the delta. `len = steps·20` (speed 10).
- **Cruise** (`ptz_cruise_start` FUN_0040c4f4): iterates up to **8 presets** stored at mmap+0x8b8..0x918 as 12-byte entries `{valid,x,y}`. Stay time is mmap+0x8a4 ×10 (units per FUN_0040b9bc). After about 30 iterations it does "goto default point" (FUN_0040beb8). Presets and stay/period are persisted via `DISPATCH_P2P_PTZ_*` messages.
- **Panorama** (FUN_0040d274):
  1. If pan ≤ 0x800, it first moves to the right end (0x1000 left then right).
  2. It then takes **6 shots** of 0x2aa = 682 steps each (≈4096/6), alternating direction, and writes `/tmp/panorama_capture/<n>.jpg`.
  3. Progress goes to mmap+0x9ac, and the state to mmap+0x4f0 (2 = done).
- **Motion tracking:** rmm computes a motion direction (`FUN_0040cb5c`, "meanSqr…DIR") and dispatch drives the motors. The enable flag is `DISPATCH_P2P_PTZ_SET_MOTION_TRACK`. [inf] Direction is passed over `/ipc_dispatch`.

### UART PTZ, external pan/tilt board (`ssp_uart_init` FUN_0041130c, `ssp_uart_send_cmd` FUN_0041195c)
- [obs] It opens **`/dev/ttyS0`** (`O_RDWR|O_NOCTTY|O_NONBLOCK`). Called as `FUN_0041130c(0xb,'N',0x30,1,flags)`, which means **B2400, no parity, CS8, 1 stop bit**, raw mode, VMIN 0 / VTIME 0x96. It starts a reader thread at `LAB_00411210`.
- [obs] The 7-byte command frames are in dispatch `.data` at 0x4262a4 and are standard **Pelco-D, address 1**:
  - `FF 01 00 00 00 00 01` stop
  - `FF 01 00 02 30 00 33` pan right (speed 0x30)
  - `FF 01 00 04 30 00 35` pan left
  - `FF 01 00 08 00 30 39` tilt up
  - `FF 01 00 10 00 30 41` tilt down
- [obs] The direction→frame table is swapped by flag bits 1/2 (axis reversal; set from hw chars 1/2). cmd 5 changes the flags at runtime.
- [obs] cmd 100 is a test loop that sends the 4 frames 20 times with `sleep(3)`.
- [obs] Position is emulated by a software timer (`DAT_004263a0..e4`: speed 2, period 8000, mirroring the kernel driver). `H601R PTZ not support get position` is printed on failure.
- [inf] This path is for a model with an external "H601R" PTZ head.

---

## 4. Day/night, IR and white light (rmm)

### `daynight_switch_func` (FUN_004050bc)
This is a 1 s loop whose sensor source is selected by **hw char 3 (`cds`)** read from the shared mmap. [obs]

| hw[3] | source | rule |
|---|---|---|
| '1' | ISP statistics `rts_av_get_isp_daynight_statis()` (no photo-sensor) | |
| '2' | CDS photoresistor on **SAR-ADC ch0**: `cat /sys/devices/platform/rts_saradc.0/in0_input` | <2350 (0x92e) → night |
| '3' | same ADC with hysteresis | <2350 → night, ≥3051 (0xbeb) → day |
| '4' | ADC used as a digital input | value==0 → night |
| '5' | raw ADC value used as-is | |

The loop also contains debouncing counters and an "ircut is locked" guard (more than 5 switches per 3600 s locks it).

### Switching actions [obs]
`FUN_004055bc(mode)` has two modes:
- night: IR LED on via `0x13` with value 100, then IR-cut `0x16`
- day: IR LED off via `0x13` with value 0, then IR-cut `0x15`

The ISP colour→grey change is separate (`media_venc_set_color2grey` FUN_0040ae74 sets ISP attributes 0x30 `ir_mode` and 0x27 `grey_mode`).

### White light [obs]
`set_light_switch` (FUN_00405660) is only active if mmap hw char 0x219=='2' or 0x218=='3'. The mode at mmap+0x9ed is 0 = off, 1 = on, 2 = auto. When the white light is turned on, the IR path is forced to day: colour mode, IR off, IR-cut day. Then it issues `0x20007023` (on). `0x20007024` turns it off. String: "open white light compensate, warning beep".

### Other rmm hardware use [obs]
- `/sys/devices/platform/rts_soc_camera/sensor` (sensor name) and `…/loadfw`
- `/dev/ssp` is opened (`DAT_0047796c`), but no ioctl on that fd appears in the decompilation
- QR Wi-Fi provisioning (`zbar_proc`): after `/tmp/got_wpa` it signals green blink + red off

---

## 5. Audio

[obs] These are the stock Realtek ASoC modules (author Wind_Han, Realsil). The load order is `rlx_dma` → `rlx_i2s` → `rlx_codec` → `rlx_snd_intern`.

| module | role [obs] |
|---|---|
| `rlx_dma.ko` | ASoC platform `audio-platform` (ids `rts3903-adma`). IRQ-driven DMA. Control "Audio Mono/Stereo In/Out Mode" (normal / L-R swap / mono variants) |
| `rlx_i2s.ko` | DAI `pcm-platform`/`i2s-platform` (`rts3903-adai`). Clocks `i2s_ck`, `sys_pll3_*`, `usb_pll_7`. Controls "I2S Playback Mute", "I2S Capture Mute" |
| `rlx_codec.ko` | internal codec `rlx-codec` (`rts3903-acodec`), clock `codec_ck`. Two DAIs: `rlx-codec-digital` (DMIC/digital path) and `rlx-codec-analog` (AMIC / line-out) |
| `rlx_snd_intern.ko` | machine driver: card `RLX_INTERN_CARD`, links "RLX INTERN CARD DIGITAL" (PCM1) and "...ANALOG" (PCM2). DAPM pin "AMIC EXTERN POWER" |

### ALSA control numids
Codec probe `FUN_000116b8` first adds 7 controls from `.rodata+0x2830`. It then adds 6 more from `+0x2530` when `codec_data->type == 3` [inf: rts3903 revision]; other chip variants get a 5-control set. Decoded from the `soc_mixer_control` structs [obs]:

| numid | control | reg/shift | range | init.sh |
|---|---|---|---|---|
| 1 | Master Playback Volume (DAC digital) | 0x00 [18:11] | 0–127 | **109** "speaker" |
| 2 | Master Playback Switch | 0x00 b10/9 | 0–1 | |
| 3 | ADC Compensate Capture Volume | 0x08 b25 | 0–3 | |
| 4 | Rear Dmic Capture Volume | 0x08 | 0–3 | |
| 5 | Dmic Capture Switch | 0x0C | 0–1 | |
| 6 | Amic Capture Switch | 0x0C | 0–1 | |
| 7 | Front Amic Capture Volume | 0x20 | 0–39 | |
| 8 | Master Capture Volume (ADC digital) | 0x08 [18:11] | 0–127 | **127** "capture DGain" |
| 9 | Master Capture Switch | 0x08 | 0–1 | |
| 10 | Rear Line Capture Volume | enum | | |
| 11 | Real Amic Capture Volume (mic PGA) | 0x9C sh7 | **0–69** | **30** "AGain max:69" |
| 12 | Capture Source Select (mic/line) | enum | | |

The `AGain max:69` comment in init.sh confirms the type-3 set [obs]. DAPM/DAI/DMA controls get later numids [inf, per ASoC 3.10 ordering].

### Speaker amplifier [obs]
The amplifier enable is **GPIO9**, used in two places:
1. In `init.sh` `set_audio_switch` through sysfs (`/sys/class/gpio/gpio9`), with polarity from vd1 hw char 6 (`'1'` → high = enable).
2. In `cpld_periph`, which claims GPIO9 when g[9]=='1'. rmm toggles it around prompt playback with ioctl 0x10/0x11.

[inf] On boards where both are configured, the sysfs export and the `gpio_request` in the module would conflict. Since init.sh exports it first, `gpio_request` would fail (-EBUSY), but cpld still drives it, because `cpld_gpio_*` ignores the request result.

---

## 6. Storage

### SD card: `rtsx-icr.ko` (Realtek ipcam SD/MMC host, author Micky Ching)
- [obs] Platform device `rts3903-sdhc` (registered by the kernel BSP "initializing SD controller"). Exposes `mmcblk0`.
- [obs] Module params: `default_tx_phase:int`, `force_rw:bool`.
- [obs] Sysfs attributes under `/sys/devices/platform/rts3903-sdhc/`: `cd`, `force_rw`, `data_timeout_ms`, `cmd_timeout_ms`, `min_clock`, `max_clock`, `trigger`, `support_uhs`, `card_exist`, `ip_register`, `ocp_register`.
- [obs] It optionally requests a debug `TRIGGER_GPIO`.
- [obs] Consumers:
  - dispatch: `cat /sys/devices/platform/rts3903-sdhc/cd` and `/sys/block/mmcblk0/device/cid`.
  - `checkdisk`:
    - detects FAT32 vs exFAT by boot sector, then runs `/home/base/tools/fsck.fat -aw` or `exfatfsck` on `/dev/mmcblk0p1`
    - mounts it on `/tmp/sd`, detects a read-only mount ("read-only!!!")
    - can repartition with `fdisk /dev/mmcblk0 < /home/base/tools/fdisk.input`
    - reports total/free MB
    - maps `/dev/mtdblock7` (conf) as shared memory

### SPI-NOR [obs]
- Built-in `rts-quadspi` (`drivers/mtd/spi-nor/rts-quadspi.c`, "Realtek QSPI Controller at 0x%08lx"), plus a `rts-quadspi-nfc` variant.
- Bootarg `rts-quadspi.channels=dual`, so the flash runs in dual-I/O mode. The driver supports `dual`/`quad`.
- The flash ID table includes GD25Q256C, MX25L6433F/12835F/25635F, W25Q64/128/256FV, XM25QH64A/128A, and others.
- mtdparts device `m25p80`, 8 MiB. Partitions are in init_path.md.

---

## 7. Wi-Fi

- [obs] Module `/backup/8188fu.ko` (on the rw recovery partition). `version=v5.2.11.1_22924.20170703`, `alias=usb:v0BDApF179…` → **RTL8188FTV/8188FU, USB ID 0BDA:F179**. The source tree path is `…/r10/users/drivers/wifi/rtl8188ftv/`.
- [inf] It is attached to the SoC's internal EHCI/OHCI (`ehci-rts`, `ohci-platform`, `usbphy-platform` in the kernel).
- [obs] `wifi_conf` (`main` @004006b0) generates `/tmp/wpa_supplicant.conf` (`FUN_00400930`). It does **not** parse QR codes; QR decoding is done in rmm `zbar_proc`, which drops `/tmp/got_wpa`.
  - It takes SSID and key from argv, or from shared memory `/tmp/mmap.info` (+0x420 SSID, +0x460 key).
  - It writes a header with `ap_scan=1` and a `network={ ssid=…; scan_ssid=1; … }` block.
  - The key settings are chosen as follows:
    - no key → `key_mgmt=NONE`
    - WPA → `proto=WPA RSN key_mgmt=WPA-PSK pairwise=CCMP TKIP group=CCMP TKIP psk="…"`
    - WEP → `wep_key0` (quoted or hex), `wep_tx_keyidx=0`
- dispatch `get_config` has its own generator (see init_path.md).
- Kernel has a **`wps-gpio`** push-button driver that sends `wps_pbc` over netlink. [inf] It is not wired up, because no user-space listener was seen.

---

## 8. Kernel built-ins (`kernel/vmlinux.bin`)

**Correction to init_path.md:** the image has **no kallsyms**. There is no compressed token table and no `kallsyms` string. Only the module export table (`__ksymtab_strings`, 4694 names at file offset 0x399a28–0x3ae9c7) and ordinary strings are recoverable.

### Realtek exports [obs]
- `RTS_SOC_HW_ID`, `rts_sys_force_reset`, `rts_sys_{,video_,isp_}mem_{up,down}`, `rts_pll_ssc_config`
- `rts_xb2_to_irq`, `rts_xb2_uart_cr/cw` (the "rtsxb2" bridge: an interrupt / UART register-access block, IRQs `rtsxb2`, `rtspc`)
- `rts_efuse_get_data/set_done`
- `rts_hconf_*` (`pointer`, `cache_{init,clear,sync}`, `{header,entry}_{to,from}_buf`, `mtd_block_{read,write,erase}`)
- `rts_usb_{read,clear}_phy_int`

### BSP platform devices [obs, from the board-init log strings]
| device | driver / notes |
|---|---|
| `rts3903-dmac` | `rts_dmac` / dw_dmac |
| `rts_saradc` | "initializing adc", the CDS light sensor ADC |
| `rts3903-pinctrl` | `pinctrl-rts` |
| `pwm_platform` | |
| `rts3903-r8168` | Ethernet MAC, `r8168_n.c`. [inf] Unused/absent on the Wi-Fi-only board, but dispatch has an eth0 path, `ETH_LIGHT` |
| `usbphy-platform` | |
| `efuse-platform` | |
| `rts3903-wd` | watchdog `RTSX_WDT Watchdog` |
| `rts3903-i2c` | Synopsys DesignWare I2C, `i2c_designware`. [inf] Sensor SCCB bus |
| `rts3903-sdhc` | SD controller |
| `rts3903-acodec`, `rts3903-adma`, `rts3903-adai` | audio |
| `ehci-platform`, `ohci-platform` | USB host |
| `rts3903-isp`, `rts3903-h264`, `rts3903-mjpeg`, `rts3903-osd2` | camera blocks, handled by the other agent |
| `rts3903-crypto`, `rts3903-cpufreq` | |
| `rts3903-qspi` | |

- [inf] A `rtp` PMIC MFD driver ("RTP-MFD", `RTP_REG_GPIO0/1_CTRL`) is compiled in but probably unused.

### Pinctrl [obs]
- Functions: `gpiofunc`, `uartfunc`, `pwmfunc`, `dmicfunc`, `usbdfunc`, `etnledfunc`.
- Groups: `gpiogrp`, `uart0grp`, `uart1grp`, `uart2grp`, `pwm0-3grp`, `dmicgrp`, `usbdgrp`, `etnled0-2grp`.
- Pins: `GPIO0-4`, `GPIO7`, `MDIOGPIO5/6`, `PWMGPIO0-3`, `UART0 TXD/RXD/CTS/RTS`, `UART1 TXD/RXD`, `UART2 TXD/RXD`, `DMICDATA/DMICCLK`, `USBDVBUS`, `AUDIO_{MCLK,SCK,SD_IN,SD_OUT,WS,PDM_OUT,CLK_PDM,SPDIF_OUT}`.
- [inf] The Linux GPIO numbers 0–22 used by the Yi modules index this pin list. The exact name↔number mapping was not recovered.

### Static char devices (from `initdevnod`) [obs strings]
| node | major,minor | notes |
|---|---|---|
| `dbg_iomem` | 120 | "dbg_iomem initialized", "dbg_iomem_gpio exit". [inf] Raw register peek/poke and GPIO debug |
| `usb_phy_mdio` | 121 | [inf] USB PHY register access over MDIO |
| `efuse` | 122 | eFuse read |
| `hconf` | 123,0 | see below |

### hconf
- [obs] `hconf_init`, `hconf_read`, `hconf_ioctl`, the `kfromu`/`ufromk` helpers, `is_header`/`is_entry`, and `hconf_cache_expand`. The bootarg `rts_hconf.hconf_mtd_idx=1` puts the store in **mtd1 ("boot", the U-Boot partition, 192 KiB)**. "invalid hconf_mtd_idx!" is printed on a bad index.
- [inf] hconf is a Realtek header+entry key/value store of board hardware configuration (clock and pin settings). It is cached in RAM and read by user space through `read()` on `/dev/hconf`, with an `ioctl` for entry lookup and update. The ioctl numbers could not be recovered without symbols.
- [obs] No Yi user-space binary references `/dev/hconf`.

### Watchdog
- [obs] Built-in `RTSX_WDT`, `/dev/watchdog`, kicked by BusyBox `watchdog -t 2 -T 5` (init.sh).
- [obs] `reboot_by_watchdog` (main):
  1. If `/dev/watchdog` is missing it tries `insmod /home/app/localko/watchdog.ko`. That file does not exist in this firmware.
  2. It opens `/dev/watchdog` and calls `ioctl(WDIOC_SETTIMEOUT=0xc0045706, 5)`.
  - [inf] It then lets the watchdog expire as a hard reset. It is called by dispatch (reboot message) and by watch_process.

### UARTs
| port | use [obs] |
|---|---|
| `ttyS1` | **Kernel and U-Boot console, 57600 8N1** (bootargs). The U-Boot env also has an unused `addmisc` with `console=ttyS0`. |
| `ttyS0` | dispatch UART-PTZ path, Pelco-D 2400 8N1. [inf] Pinctrl `uart0grp`, which has RTS/CTS |
| UART1 / UART2 pin groups | U-Boot prints `UART1 func enable(%s)` (flag-gated pin-mux). [inf] Which ttyS index maps to which UART block is not proven |

`uartReDir` (main @00400780) calls `ioctl(TIOCCONS)` on `argv[1]`'s tty (or `/dev/console`) to redirect kernel console output. It is a debug helper, and no script invokes it.

---

## 9. Other helpers

- **`pid_list.ko`** [obs]: `/dev/pid_list` misc device. Its ioctl (`'p'` type) copies a 64-byte process name from user space, walks `init_task` and returns 1 if a task with that `comm` exists. watch_process uses it to check daemons (it inserts the module itself). Not hardware.
- **`arp_test`** [obs]:
  - gets the wlan0 MAC and IP with `SIOCGIFHWADDR` (0x8927) and `SIOCGIFADDR` (0x8915)
  - sends and receives ARP on a `PF_PACKET`/`SOCK_PACKET` socket (ETH_P_ARP)
  - reports to `/ipc_dispatch` using `/tmp/mmap.info`
  - [inf] It is a gateway-reachability / IP-conflict probe. Not hardware.
- **`load_cpld_ssp`**: see init_path.md.

---

## 10. Consolidated peripheral map

| Peripheral | Bus / pin (Linux GPIO) | Kernel driver | Node / sysfs | User-space consumer | Control interface |
|---|---|---|---|---|---|
| Green / red status LEDs | GPIO 11/22/15 (per vd1 gpio string) | `cpld_periph.ko` | `/dev/cpld_periph` | dispatch, rmm, watch_process | ioctl 0x01/02/04 (green), 0x09/0a/0c (red), 0x1b/1c (all off/on) |
| Ethernet LED | GPIO 11 (g[0]=='3') | `cpld_periph.ko` | same | (none seen) | ioctl 0x25/0x26 |
| IR LEDs (850 nm [inf]) | GPIO 11/18/19/0 | `cpld_periph.ko` | same | rmm day/night, dispatch boot | ioctl 0x13 (set), 0x14 (get) |
| IR-cut filter (bistable, H-bridge pulse) | GPIO 20 + 21 | `cpld_periph.ko` | same | rmm, dispatch | ioctl 0x15 day / 0x16 night (200 ms pulse), 0x17 read |
| White light | GPIO 18 or 19 | `cpld_periph.ko` | same | rmm `set_light_switch` | ioctl 0x23/0x24 |
| Reset button | GPIO 6 (input, active-low [inf]) | `cpld_periph.ko` | same | dispatch reset thread | ioctl 0x0e (read) |
| Speaker amplifier enable | GPIO 9 | gpiolib sysfs + `cpld_periph.ko` | `/sys/class/gpio/gpio9`, `/dev/cpld_periph` | init.sh, rmm | sysfs value; ioctl 0x10/0x11 |
| Light sensor (CDS) | SAR-ADC ch0 | `rts_saradc` (built-in) | `/sys/devices/platform/rts_saradc.0/in0_input` | rmm `daynight_switch_func` | sysfs read (thresholds 2350/3051) |
| Pan/tilt steppers (8-pin) | GPIO 19,17,16,15 (pan); 11,14,22,18 (tilt) | `ssp_ms41909(_union).ko` | `/dev/ssp` | dispatch `ptz_ctl.c` | ioctl 1 get, 2 move, 3 stop, 4 timing, 5 misc |
| Pan/tilt steppers (4+1) | GPIO 18,19,17,16 shared + H/V select = reg 0xB8140024 b17 ("PIN76") | `ssp_ms41909_union.ko` | `/dev/ssp` | dispatch | same ioctls |
| External PTZ head (H601R [inf]) | UART → `/dev/ttyS0`, 2400 8N1 | serial8250 | `/dev/ttyS0` | dispatch `ssp_uart_*` | Pelco-D addr 1 |
| Console | UART → `ttyS1`, 57600 | serial8250 | `/dev/ttyS1`, `/dev/console` | U-Boot, kernel, `uartReDir` | — |
| Image sensor control | I2C (DesignWare) | `rts3903-i2c` built-in + `rts_cam*` | `/sys/devices/platform/rts_soc_camera/sensor` | rmm (other agent) | — |
| Internal codec / mic / speaker | I2S + internal ADC/DAC | `rlx_dma/i2s/codec/snd_intern.ko` | ALSA card `RLX_INTERN_CARD` | init.sh amixer, rmm, aacplay | ALSA numid 1 (spk vol), 8 (cap DGain), 11 (mic AGain) |
| SD card | SD host | `rtsx-icr.ko` | `/dev/mmcblk0p1`, `/sys/devices/platform/rts3903-sdhc/{cd,card_exist,…}` | checkdisk, dispatch | block / sysfs |
| SPI-NOR 8 MiB | QSPI (dual I/O) | `rts-quadspi` built-in | `/dev/mtd*`, `/dev/mtdblock0-7` | init, load_cpld_ssp (mtd6), dispatch (mtd6/7), checkdisk (mtd7), mtd_img | MTD |
| Wi-Fi RTL8188FTV | USB 2.0 (0BDA:F179) | `8188fu.ko` v5.2.11.1 | `wlan0` | wpa_supplicant (conf from dispatch / `wifi_conf`) | nl80211/wext |
| Watchdog | SoC | `RTSX_WDT` built-in | `/dev/watchdog` | BusyBox watchdog, `reboot_by_watchdog` | WDIOC_* |
| HW config store | SPI-NOR mtd1 | `hconf` built-in | `/dev/hconf` (c123,0) | (none in Yi apps) | read/ioctl |
| eFuse / reg debug / USB PHY | SoC | built-in | `/dev/efuse` c122, `/dev/dbg_iomem` c120, `/dev/usb_phy_mdio` c121 | (none seen) | char-dev |
| WPS button | GPIO (unknown) | `wps-gpio` built-in | netlink `wps_pbc` | (none seen) | netlink |

## Open questions
1. Map Linux GPIO numbers 0–22 to the pinctrl pin names and package pins (PIN34–PIN76). This needs the pinctrl driver's pin table, which requires disassembling the raw kernel without symbols.
2. Is the `hconf` ioctl ABI or the record format worth decoding? A mtd1 dump would show the header/entry layout directly.
3. What is ssp ioctl 5's global (bss+0x74)? Is it read anywhere outside the decompiled functions?
4. Which UART hardware blocks are behind `ttyS0` and `ttyS1`, and what does U-Boot's "UART1 func enable" flag gate?
5. Why does rmm open `/dev/ssp` without issuing ioctls? It may be indirect use through a function pointer not resolved by Ghidra.
6. The reset-button poll interval and hold time are inferred as about 2 s. Confirm by locating the loop head at 0x409690.
