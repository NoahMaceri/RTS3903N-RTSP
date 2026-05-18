# `cpld_periph.ko` — Yi/Victure peripheral GPIO driver

Reverse-engineering notes from Ghidra on the stock
`payload/sd/Yi/ko/cpld_periph.ko` kernel module. This is the kernel-side
backend for the `/dev/cpld_periph` character device that `imagerd` and
stock `rmm` open. It's a tiny LKM that maps a fixed set of ioctls onto
GPIO operations — there is no actual CPLD silicon on the camera, the
name is a holdover from Yi's reference design where the LEDs and IR
control were on a real CPLD. On the RTS3903N boards they're just SoC
GPIOs.

These notes were captured against:

- Architecture: MIPS little-endian (RLX 32BIT) for kernel `3.10.27 preempt mod_unload`
- File size: ~5 KB stripped (some symbols retained in the LKM symbol table)
- Built: `Dec  5 2019 13:42:40` (per `init_module` banner)
- License: `GPL` (per `.modinfo`)
- srcversion: `BD90DAB78C708BABCA77741`

## 1. What the module exposes

| Path | Type | Purpose |
|------|------|---------|
| `/dev/cpld_periph` | char (misc, dynamic minor) | The ioctl interface — see §5 |
| `/proc/driver/cpld` | proc, write-only (mode 0x309 = `--w-r----x`-ish) | Debug-log toggle: write `"1"` to enable verbose `printk`, anything else to disable |

`misc_register()` is called with `name="cpld_periph"`, `minor=MISC_DYNAMIC_MINOR (0xFF)`, so the resulting node is `/dev/cpld_periph` (some userspace pollers fall back to `/dev/misc/cpld_periph` on older udev).

## 2. Module parameters

Both parameters are required `charp` (string) module params. The module
refuses to load if either is missing or not exactly **32 characters**
long:

```text
[CPLD_PERIPH] (strlen(hw)=(N), strlen(gpio)=(M), params error !!!
```

| Parameter | Type | Length | Purpose |
|-----------|------|--------|---------|
| `gpio` | `charp` | 32 | Per-port selector — each character index picks which board function lives on which GPIO |
| `hw` | `charp` | 32 | Per-port polarity — `'2'` at certain indices inverts the active level for the corresponding port |

The init function indexes into the two strings to decide both which GPIO
to wire and whether the output should be active-high or active-low.
Concretely (extracted from `init_module`):

| `gpio[i]` | If char is… | Effect |
|-----------|-------------|--------|
| `gpio[0]` | `'2'` | `PORT_LED_GREEN = GPIO 0xB`, configured output |
| `gpio[0]` | `'3'` | `PORT_LED_ETHERNET = GPIO 0xB`, configured output |
| `gpio[0]` | `'4'` | `PORT_IR_LED = GPIO 0xB` (and `IR_ON = 0` if `hw[7]=='2'`) |
| `gpio[2]` | `'2'` | `PORT_LED_GREEN = GPIO 0x16`, `LED_GREEN = 0` (active-low) |
| `gpio[2]` | `'3'` | `PORT_LED_GREEN = GPIO 0x16`, `LED_GREEN = 1` (active-high) |
| `gpio[2]` | `'4'` | `PORT_LED_RED   = GPIO 0x16`, `LED_RED   = 0` |
| `gpio[2]` | `'5'` | `PORT_LED_RED   = GPIO 0x16`, `LED_RED   = 1` |
| `gpio[3]` | `'2'` | `PORT_IR_LED = GPIO 0x12` (and `IR_ON = 0` if `hw[7]=='2'`) |
| `gpio[3]` | `'3'` | `PORT_WHITE_LIGHT_PIN = GPIO 0x12`, configured output |
| `gpio[4]` | `'2'` | `PORT_WHITE_LIGHT_PIN = GPIO 0x13`, configured output |
| `gpio[4]` | `'3'` | `PORT_IR_LED = GPIO 0x13` (and `IR_ON = 0` if `hw[7]=='2'`) |
| `gpio[7]` | `'3'`/`'4'` | `PORT_LED_RED = GPIO 0xF`, `LED_RED = 0` / `1` |
| `gpio[7]` | `'5'`/`'6'` | `PORT_LED_GREEN = GPIO 0xF`, `LED_GREEN = 0` / `1` |
| `gpio[8]` | `'1'` | `PORT_FACTORY_DEFAULT = GPIO 6`, configured **input** (reset button) |
| `gpio[9]` | `'1'` | `PORT_AUDIO_ENABLE = GPIO 9` (and `AUDIO_ON = 0` if `hw[6]=='2'`) |
| `gpio[0xB]` | `'2'` | `PORT_IR_LED = GPIO 0` (and `IR_ON = 0` if `hw[7]=='2'`) |
| `gpio[0xC]` | `'1'` | `PORT_IR_CUT_DN_ANODE = GPIO 0x14` |
| `gpio[0xD]` | `'2'` | `PORT_IR_CUT_DN_ANODE = GPIO 0x15` (alt wiring) |
| `gpio[0xC]` | `'2'` | `PORT_IR_CUT_DN_CATHODE = GPIO 0x14` |
| `gpio[0xD]` | `'1'` | `PORT_IR_CUT_DN_CATHODE = GPIO 0x15` |

`hw[i]` only carries two meanings, both polarity-flippers:

| Index | Meaning when `'2'` |
|-------|---------------------|
| `hw[6]` | Invert audio enable: `AUDIO_ON = 0` (active-low) |
| `hw[7]` | Invert IR LED: `IR_ON = 0` (active-low) |

All `PORT_*` start as `0xFF` (the "not wired" sentinel) and every
`cpld_gpio_*` helper short-circuits when called with `0xFF`, so any port
the parameter strings don't claim is silently a no-op. Reading the
module info from stock firmware on a running Yi-style camera (e.g.
`cat /sys/module/cpld_periph/parameters/{gpio,hw}`) is the only sure
way to know the local wiring.

## 3. Globals (data section)

`.data` (mutable):

| Address | Symbol | Default | Set by |
|---------|--------|---------|--------|
| `0x00011770` | `LED_GREEN` | `1` | init: `gpio[2]` and `gpio[7]` decide polarity |
| `0x00011774` | `LED_RED` | `1` | init: `gpio[2]` and `gpio[7]` decide polarity |
| `0x00011778` | `LED_ETH_ON` | `1` | (never touched at init) |
| `0x0001177C` | `IR_ON` | `1` | init: zeroed when `hw[7]=='2'` |
| `0x00011780` | `AUDIO_ON` | `1` | init: zeroed when `hw[6]=='2'` |
| `0x00011784..0x000117AC` | `PORT_*` | `0xFF` | init: set per `gpio[i]` |

`.bss` (writable runtime state):

| Address | Symbol | Purpose |
|---------|--------|---------|
| `0x000118E0` | `LED_WHITE_ON` | unused at runtime (declared but never read in the ioctl path) |
| `0x000118E4` | `(timer toggle bit)` | flipped every tick by `cpld_blink_timer_cb` (0/1) — drives the LED blink phase |
| `0x000118E8` | `dbg_cpld_enable` | `1` → enable verbose printk for every ioctl call (toggled via `/proc/driver/cpld`) |
| `0x000118EC` | `g_red_green_off` | `1` when ioctl `0x1B` ("red+green off") has latched the LEDs dark |
| `0x000118F0` | `g_red_mode` | 0 = off (`0x0A`), 1 = on (`0x09`), 2 = blink (`0x0C`) |
| `0x000118F4` | `g_green_mode` | 0 = off (`0x02`), 1 = on (`0x01`), 2 = blink (`0x04`) |
| `0x000118F8` | `g_blink_timer` | `struct timer_list` for the 1 Hz blink heartbeat |
| `0x00011900` | `(timer expires)` | reload value: `jiffies + 1000` (≈1 s on `HZ=1000`) |
| `0x00011908` | `(timer fn)` | always `cpld_blink_timer_cb` |
| `0x0001190C` | `(timer init flag)` | `5` once `init_timer_key` has run, `0` after `del_timer` |

## 4. file_operations / miscdevice

```text
miscdevice cpld_periph_misc = {
    .minor = MISC_DYNAMIC_MINOR (0xFF),
    .name  = "cpld_periph",
    .fops  = &cpld_periph_fops,
};

file_operations cpld_periph_fops = {
    .owner          = THIS_MODULE,
    .open           = LAB_00010030,   // tiny stub at start of .text
    .release        = LAB_00010038,   // tiny stub
    .unlocked_ioctl = cpld_ioctl,     // FUN_000101e8, the big switch
};
```

`open` / `release` are effectively empty — no per-fd state is allocated.

The proc entry's `proc_ops` is at `0x00011568` and only wires `.write`
to `cpld_proc_write` (FUN_00010040). Mode `0x309` (= 0o631 with the
`S_IFREG` already implied) means owner can write, group can read,
everyone can execute — effectively write-only since reading returns
nothing useful.

## 5. ioctl interface

The handler is `cpld_ioctl` (`FUN_000101e8`). It splits the cmd into
its two bytes: the high byte must be `0x70` (matching
`CPLD_IOC_BASE = 0x70` in our [src/imagerd/cpld.h](../src/imagerd/cpld.h)),
the low byte is the operation. Anything outside `[0x01, 0x26]` returns
`-EINVAL` (`0xFFFFFFF2` after sign extension).

Return value is `0` on success, `-EINVAL` on unknown subcmd, otherwise
the requested GPIO value (for the `*_GET`/`*_READ` cases).

### Mode-bearing globals

Three single-byte/word state variables determine what the LED ioctls
actually do:

- `g_green_mode` (`DAT_000118F4`): `0`=off, `1`=on, `2`=blink
- `g_red_mode`   (`DAT_000118F0`): `0`=off, `1`=on, `2`=blink
- `g_red_green_off` (`DAT_000118EC`): when `1`, latches both LEDs off regardless of mode

The blink modes don't actually drive the pin themselves — they just set
`mode = 2`, and the 1 Hz timer callback (§6) is what toggles the GPIO
on each tick.

### Cmd table (matches [`src/imagerd/cpld.h`](../src/imagerd/cpld.h))

| Cmd | Our `#define` | Wrapper | Action |
|-----|---------------|---------|--------|
| `0x01` | `CPLD_GREEN_EN`            | `set_green_led(true)`  | `g_green_mode = 1`; if `g_red_green_off == 0`, `gpio_set(PORT_LED_GREEN, LED_GREEN)` |
| `0x02` | `CPLD_GREEN_DIS`           | `set_green_led(false)` | `g_green_mode = 0`; `gpio_set(PORT_LED_GREEN, !LED_GREEN)` |
| `0x04` | `CPLD_GREEN_BLINK`         | `set_green_blink(true)` | `g_green_mode = 2` → green LED blinks at 1 Hz via the timer |
| `0x09` | `CPLD_RED_EN`              | `set_red_led(true)`    | `g_red_mode = 1`; if `g_red_green_off == 0`, `gpio_set(PORT_LED_RED, LED_RED)` |
| `0x0A` | `CPLD_RED_DIS`             | `set_red_led(false)`   | `g_red_mode = 0`; `gpio_set(PORT_LED_RED, !LED_RED)` |
| `0x0C` | `CPLD_RED_BLINK`           | `set_red_blink(true)`  | `g_red_mode = 2` → red LED blinks at 1 Hz via the timer |
| `0x0E` | `CPLD_FACTORY_DEFAULT_READ`| `read_factory_default_button()` | Return current value of `PORT_FACTORY_DEFAULT` (reset button state) |
| `0x0F` | _(unused)_                 | _none_                 | No-op; returns 0. Reserved or vestigial |
| `0x10` | `CPLD_AUDIO_ON`            | `set_audio(true)`      | `gpio_direction_output(PORT_AUDIO_ENABLE)` — does **not** read a value from userspace, just (re)asserts direction. Polarity is fixed by `AUDIO_ON` at module init |
| `0x11` | `CPLD_AUDIO_OFF`           | `set_audio(false)`     | Same as `0x10` — fall-through in the switch. Effectively redundant |
| `0x12` | `CPLD_AUDIO_READ`          | `read_audio_state()`   | Return current value of `PORT_AUDIO_ENABLE` |
| `0x13` | `CPLD_IR_LED_SET`          | `set_ir_led_duty(int)` | `copy_from_user(local, arg, 4)` → `gpio_direction_output(PORT_IR_LED)`. Note: the int read from userspace is logged but NOT written to the GPIO state — the function just reconfigures direction. To actually drive the IR LED you also need `0x16`/`0x15` for the gate, or your `hw`/`gpio` strings need `PORT_IR_LED` wired directly to the LED supply pin |
| `0x14` | `CPLD_IR_LED_READ`         | `get_ir_led()`         | Read `PORT_IR_LED`; `*arg = (val == IR_ON ? 100 : 0)`. The "100" is just a stock-rmm-friendly value, not a true PWM duty read |
| `0x15` | `CPLD_IRCUT_PULSE_A`       | `set_ir_cut(false)` (day, on SC210) | IR-cut filter pulse: `dir_out(cathode); dir_out(anode); msleep(200); dir_out(cathode); dir_out(anode)` — a 200 ms drive sequence for the IR-cut solenoid in one polarity |
| `0x16` | `CPLD_IRCUT_PULSE_B`       | `set_ir_cut(true)`  (night, on SC210) | Same 200 ms pulse — case bodies are nearly identical; the physical direction comes from how `PORT_IR_CUT_DN_{ANODE,CATHODE}` were wired in init (the anode↔cathode swap based on `gpio[0xC]` vs `gpio[0xD]`). On boards wired the other way, `set_ir_cut(true)` would correspond to day, so always verify with `read_ircut_state()` |
| `0x17` | `CPLD_IRCUT_STATE_READ`    | `read_ircut_state()`   | Return encoded IR-cut state: `cathode<<1 | anode` → `0`/`1`/`2`/`3` |
| `0x1B` | `CPLD_RED_GREEN_OFF`       | `basic_ctrl(false, RG_CTRL)` | `gpio_set(PORT_LED_GREEN, ...); gpio_set(PORT_LED_RED, ...); g_red_green_off = 1` — latches both LEDs off |
| `0x1C` | `CPLD_RED_GREEN_SET`       | `basic_ctrl(true, RG_CTRL)`  | If `g_green_mode == 1` re-light green; if `g_red_mode == 1` re-light red; `g_red_green_off = 0`. Restores LED state after a `0x1B` latch |
| `0x23` | `CPLD_WHITE_LED_ON`        | `set_white_led(true)`  | `gpio_set(PORT_WHITE_LIGHT_PIN, ...)` — polarity is fixed in `init_module` |
| `0x24` | `CPLD_WHITE_LED_OFF`       | `set_white_led(false)` | Same call as `0x23` — switch falls through. Polarity again from init wiring |
| `0x25` | `CPLD_ETH_LED_ON`          | `set_eth_led(true)`    | `gpio_set(PORT_LED_ETHERNET, ...)` |
| `0x26` | `CPLD_ETH_LED_OFF`         | `set_eth_led(false)`   | Same — switch falls through |

**Two important quirks** that the [src/imagerd/cpld.h](../src/imagerd/cpld.h)
wrappers handle, but that bear re-stating if you ever write your own
ioctl call by hand:

1. **The `cmd` integer's size/dir fields are ignored.** The kernel only
   inspects `cmd >> 8 == 0x70` and `cmd & 0xFF` (the op number). Our
   wrappers use `_IO(CPLD_IOC_BASE, op)` (which encodes those two bytes
   correctly with size=0, dir=`_IOC_NONE`) rather than `_IOC(...)` with a
   bogus size — same wire encoding, cleaner intent.
2. **Only `0x13` actually reads from userspace.** Everything else
   ignores the third `ioctl(fd, cmd, arg)` argument. The
   `cpld_op(op)` helper passes `0`; only `cpld_op_send_int()` (used by
   `set_ir_led_duty()`) passes a real `int*`. For the read ops
   (`0x0E`/`0x12`/`0x14`/`0x17`) the value is returned via the syscall
   return code, *not* via the `arg` pointer, except for `0x14`
   (`CPLD_IR_LED_READ`) which actually does `copy_to_user` into the
   user pointer. `cpld_op_read_int()` handles both conventions
   internally.

## 6. Blink heartbeat timer

`init_module` calls `init_timer_key(&g_blink_timer, …)` and arms it
with `expires = jiffies + 1000`. The callback (`FUN_000107B4`) runs:

```c
static void cpld_blink_timer_cb(unsigned long data) {
    if (g_green_mode == 2 && g_red_green_off == 0)
        gpio_set_value(PORT_LED_GREEN, ...);   // toggles using internal state
    if (g_red_mode == 2 && g_red_green_off == 0)
        gpio_set_value(PORT_LED_RED, ...);
    g_blink_phase = !g_blink_phase;            // DAT_000118E4
    timer.expires = jiffies + 1000;
    add_timer(&timer);
}
```

So:

- Both LED ioctls' "blink" mode (`0x04` for green, `0x0C` for red) just
  set the mode bit; the timer is what actually moves the GPIO.
- The `0x1B` latch (`g_red_green_off = 1`) suppresses blinking too —
  the timer body checks the flag.
- The phase counter (`DAT_000118E4`) is independent of which LED is
  blinking; both LEDs share it, so they blink in phase if both are in
  blink mode at once.
- Period is **1 second on** / **1 second off** (toggle every 1000 ms).

## 7. Module init / exit summary

```
init_module():
  1. validate strlen(gpio) == strlen(hw) == 32; else return -EINVAL
  2. printk("hw=[%s]", hw); printk("gpio=[%s]", gpio)
  3. misc_register(&cpld_periph_misc)  → creates /dev/cpld_periph
  4. parse gpio[0..0xD] (and hw[6], hw[7]) to fill PORT_* + polarity
  5. request + direction_{in,out} each wired GPIO
  6. init_timer_key(&blink_timer); add_timer(1s)
  7. proc_create_data("driver/cpld", 0x309, NULL, &cpld_proc_ops, NULL)
  8. printk("[CPLD_PERIPH] CPLD_PERIPH module inited")

cleanup_module():
  1. remove_proc_entry("driver/cpld", NULL)
  2. misc_deregister(&cpld_periph_misc)
  3. gpio_free() each wired port (silently no-ops if 0xFF)
  4. del_timer(&blink_timer)
  5. printk("[CPLD_PERIPH] CPLD_PERIPH module exited")
```

There is no mutex anywhere. The ioctl handler runs under `unlocked_ioctl`
so the BKL is gone, but the driver relies on **userspace** being the
serializer — concurrent ioctls from two threads on the same GPIO
(specifically the IR-cut pulse) will race on the 200 ms `msleep` and
can leave the filter half-driven. In practice both stock `rmm` and our
`imagerd` only call CPLD ioctls from a single thread
(`day_night_ctrl`), so this is benign.

## 8. Relevance to RTS3903N-RTSP

Our [src/imagerd/cpld.h](../src/imagerd/cpld.h) now wraps every cmd the
kernel module accepts. The notable touch-points and gotchas:

- **`set_ir_led_duty(duty)`** uses cmd `0x13`, which `copy_from_user`s
  four bytes — we pass `&duty` via `cpld_op_send_int()`. The driver
  does **not** write the value to the GPIO directly; the IR LED
  hardware is wired so that the pin direction (output vs floating-input)
  is what gates the LED supply, and the duty byte itself is only
  logged. If you ever need true PWM you'd have to talk to a different
  GPIO/timer pair — the CPLD path can't do it.
- **`set_ir_cut(true/false)`** maps to cmd `0x16` (PULSE_B) and `0x15`
  (PULSE_A) respectively. Both cases share the same kernel body — they
  pulse the IR-cut solenoid coil for 200 ms. The physical direction
  (which way the filter moves) is fixed at module load by `gpio[0xC]`
  and `gpio[0xD]` swapping `ANODE` vs `CATHODE`. On a Victure SC210,
  `set_ir_cut(true)` lands as the night-mode direction. On a board
  wired the other way it could be flipped — use `read_ircut_state()`
  to verify after the pulse rather than blindly trusting the wrapper.
- **`set_green_blink(true)` / `set_red_blink(true)`** (cmds `0x04` /
  `0x0C`) hand the LED to the kernel's 1 Hz blink timer. Useful as a
  "still alive but unattended" heartbeat — the timer keeps toggling
  even if `imagerd` is wedged. Call `set_green_led(true)` /
  `set_red_led(true)` to revert to a solid-on state.
- **`read_factory_default_button()`** (cmd `0x0E`) reads the pinhole
  reset GPIO. Only meaningful if the modprobe set `gpio[8]='1'`
  (otherwise the port is unwired and the read returns 0). Plumbing for
  a future reset-to-defaults action — `imagerd` could poll this every
  second and reset `settings.json` if held for N consecutive reads.
- **`read_ircut_state()`** (cmd `0x17`) returns a 2-bit encoding of
  the cathode/anode pin levels (0..3). After a `set_ir_cut()` call,
  reading this back is the reliable way to confirm the solenoid
  actually moved — much better than trusting the unconditional 200 ms
  `msleep` in the kernel. `day_night_ctrl` doesn't do this today, but
  it's a one-liner if we ever see "phantom" day/night transitions in
  the field.
- **`read_audio_state()`** (cmd `0x12`) just reports the current state
  of the audio-enable GPIO. Useful for diagnostics — paired with
  `dmesg` after `echo 1 > /proc/driver/cpld`, you can see exactly what
  the driver thinks the audio amp is doing.
- **Cmd `0x0F` is a no-op** in the kernel handler — it falls through
  to the success path without touching any GPIO. Reserved for some
  future op that never materialised. Don't add it to our header.
- **Verbose debug logging via `echo 1 > /proc/driver/cpld`** is great
  for diagnosing IR-cut issues on a development unit — every ioctl
  will print to `dmesg` with the cmd and return value. Disable with
  `echo 0 > /proc/driver/cpld` when done (it's noisy enough to
  meaningfully add to the kernel-log volume).
- **The single-threaded assumption** in §7 still holds: the driver has
  no internal locking and the 200 ms `msleep` in the IR-cut path is a
  race window. `day_night_ctrl` is the only thread that ever fires
  IR-cut pulses, so this is benign; do not add a second caller without
  introducing a userspace mutex.

## 9. Function map

| Address | Renamed (in Ghidra) | Notes |
|---------|---------------------|-------|
| `0x00010030` | (open stub) | empty `.open` for `cpld_periph_fops` |
| `0x00010038` | (release stub) | empty `.release` |
| `0x00010040` | `cpld_proc_write` | `/proc/driver/cpld` write — toggles `dbg_cpld_enable` based on whether first byte is `'1'` |
| `0x000100D8` | `cpld_gpio_request` | wrap `gpio_request()` with `port != 0xFF` guard |
| `0x000100FC` | `cpld_gpio_free` | same guard around `gpio_free()` |
| `0x00010120` | `cpld_gpio_direction_output` | same guard around `gpio_direction_output()` |
| `0x00010144` | `cpld_ircut_dir_cathode` | thin wrapper: `direction_output(PORT_IR_CUT_DN_CATHODE)` |
| `0x00010160` | `cpld_ircut_dir_anode` | thin wrapper: `direction_output(PORT_IR_CUT_DN_ANODE)` |
| `0x0001017C` | `cpld_gpio_direction_input` | guarded `gpio_direction_input()` |
| `0x000101A0` | `cpld_gpio_get_value` | guarded `__gpio_get_value()` |
| `0x000101C4` | `cpld_gpio_set_value` | guarded `__gpio_set_value()` |
| `0x000101E8` | `cpld_ioctl` | the big switch — §5 |
| `0x000107B4` | `cpld_blink_timer_cb` | 1 Hz timer — §6 |
| `0x00010888` | `init_module` | §7 |
| `0x00010FAC` | `cleanup_module` | §7 |
