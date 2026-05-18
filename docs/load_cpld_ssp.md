# `load_cpld_ssp` — stock board-detect + kmod-loader

Reverse-engineering notes from Ghidra on the stock
`/home/app/load_cpld_ssp` binary shipped with Yi/Victure RTS3903N
cameras. This is the tiny userspace shim that stock `init.sh` invokes
at boot to:

1. Read 32-byte `hw_ver` and `gpio_pin` configuration strings out of
   `/dev/mtdblock6` (the factory data partition);
2. Run `insmod` for `cpld_periph.ko` with those strings as
   `hw=`/`gpio=` modprobe parameters;
3. Decide which of two PTZ stepper-motor drivers to load (if any)
   based on a pattern match on `gpio_pin`.

It's the *only* code in the stock firmware that reads the factory
hardware-config bytes — once load_cpld_ssp runs, the `gpio=`/`hw=`
params are baked into the kernel modules and the strings themselves
are forgotten. That makes this binary the canonical answer to
"what's wired to what on this board?".

Captured against:

- Architecture: MIPS little-endian (MIPS:LE:32)
- ELF: stripped of section headers and dynamic symbols; only the
  PT_DYNAMIC entry remains for the linker. Imports identified by
  call-site context, not by name.
- Image base: `0x00400000`
- File size: 5,639 bytes
- Linked against: `libc.so.0` (uClibc)
- Interpreter: `/lib/ld-uClibc.so.0`

## 1. High-level flow

```c
int main(void) {
    char hw_ver[64]   = {0};
    char gpio_pin[64] = {0};

    int rc = read_productinfo(hw_ver, gpio_pin);
    if (rc != 0) {
        puts("read_productinfo() fail !!!");
        return rc;
    }
    do_insmod(hw_ver, gpio_pin);
    return 0;
}
```

`read_productinfo` opens `/dev/mtdblock6`, mmaps the first 0x124
bytes (292), validates two magic-byte sentinels, copies 32 bytes
into each output buffer, and unmaps. `do_insmod` then prints the
two strings, runs the `cpld_periph.ko` insmod unconditionally, and
makes a pattern-based decision on whether to also load one of the
two SSP motor drivers.

## 2. The factory data partition (`/dev/mtdblock6`)

| Offset | Size | Field | Meaning |
|--------|------|-------|---------|
| `0xA4` | 4 B | sentinel | must equal `0x000000AA` (LE: byte `0xA4`=`0xAA`) — validates that the hw_ver block is populated |
| `0xA8` | 32 B | `hw_ver` (charp) | per-position hardware-feature flags, fed to `cpld_periph.ko`'s `hw=` modprobe param |
| `0xC8` | 4 B | sentinel | must equal `0x000000BB` — validates that the gpio_pin block is populated |
| `0xCC` | 32 B | `gpio_pin` (charp) | per-position GPIO selectors, fed to `cpld_periph.ko`'s `gpio=` modprobe param |

This matches what stock `init.sh` does manually with `dd
if=/dev/mtdblock6 bs=1 skip=168 count=32` (offset 168 = `0xA8`,
length 32 = the hw_ver field), and confirms the rest of the layout
that init.sh doesn't read directly.

Both magic sentinels are 32-bit reads (`int *`) at byte-aligned
offsets. On the Realtek MIPS toolchain that's little-endian, so the
on-disk bytes are `AA 00 00 00` and `BB 00 00 00` respectively.

If either magic byte is wrong, `read_productinfo` returns `2`
(failure) and main aborts before any `insmod`. That guards against
running on a board that wasn't factory-programmed.

## 3. Detection logic in `do_insmod`

After printing both strings for the boot log:

```
hw_ver[N]=[<32-char string>]
gpio_pin[N]=[<32-char string>]
```

The function always runs the CPLD insmod first:

```sh
insmod /home/app/localko/cpld_periph.ko hw=<hw_ver> gpio=<gpio_pin>
```

Then it gates the SSP (PTZ motor) insmod on a debug-mode override
described in §3a, and if not overridden, does pattern matching on the
two strings to decide which (if any) of the two motor drivers to
load. The order in code is:

```c
do_insmod(hw_ver, gpio_pin) {
    printf("hw_ver=[%s]", hw_ver);
    printf("gpio_pin=[%s]", gpio_pin);
    system("insmod .../cpld_periph.ko hw=<hw_ver> gpio=<gpio_pin>");

    if (access("/tmp/sd/debug_msg", F_OK) != 0) {        // §3a
        if      (matches_8pin_pattern(hw_ver, gpio_pin)) // §3b
            system("insmod .../ssp_ms41909.ko hw=... gpio=...");
        else if (matches_4plus1_pattern(hw_ver, gpio_pin)) // §3c
            system("insmod .../ssp_ms41909_union.ko hw=... gpio=...");
        else
            puts("moto not support !!!");                // §3d
    }
}
```

### 3a. The `/tmp/sd/debug_msg` SSP-skip switch

```c
if (access("/tmp/sd/debug_msg", F_OK) != 0) {
    /* normal production path — proceed to motor insmod patterns below */
} else {
    /* file EXISTS — skip motor insmod entirely; only cpld_periph.ko was loaded */
}
```

`access(path, F_OK)` returns `0` if the file exists and `-1` if it
doesn't. So the check `!= 0` reads as **"if the file does NOT
exist"**, meaning the production path runs only when there's no
override file present.

**Net behaviour**:

| `/tmp/sd/debug_msg` present | What gets loaded |
|------------------------------|------------------|
| No (production) | `cpld_periph.ko` + one of the SSP modules (if any pattern matches) |
| Yes (override) | `cpld_periph.ko` only — *no* SSP module, even on PTZ-capable hardware |

This is a stock-firmware bench-test escape hatch: drop a zero-byte
file at `/tmp/sd/debug_msg` (or `touch` it) before `init.sh` runs
load_cpld_ssp, and the camera will boot without ever powering up the
PTZ motor. Useful when:

- You've disconnected the motor for repair / replacement and don't
  want the SSP driver complaining at insmod time.
- You're running a board with a brand-new factory partition that
  doesn't yet have the correct pin patterns, and you want CPLD
  (LEDs, IR-cut, audio) working anyway.
- You're debugging the boot sequence and want to skip the 30 s
  motor-calibration sleep that's downstream of the SSP load.

**`/tmp/sd/` is the SD-card mount path on stock firmware** — this
override only exists in stock's world. Our boot scripts (in
`payload/sd/wifi/config.sh` and `payload/home/app/init.sh`) don't
replicate the gate because we use a different PTZ-presence check
(see §4); if you're on our firmware and want to skip the PTZ wait,
edit `wifi/config.sh` or delete `/var/tmp/sd/ptz_tool` from the
SD card.

When the override IS present, the motor insmod is skipped but the
log line `moto not support !!!` is NOT printed — the function just
silently returns after the CPLD load. So if you see no SSP-related
output in `boot.log` (and no `moto not support !!!`), you're
probably in debug-mode.

When the debug_msg override is NOT present, two pattern matches are
tried in order; whichever fires first wins. If neither matches,
`puts("moto not support !!!")` and the function returns without
loading any motor driver.

### 3b. 8-pin stepper motor

Pattern: `hw_ver[0] == '1'` **AND** `gpio_pin[0..7]` are all `'1'`.

```sh
insmod /home/app/localko/ssp_ms41909.ko hw=<hw_ver> gpio=<gpio_pin>
```

Log line: `hw use 8 pin motor, PIN71/PIN38/PIN69/PIN34/PIN35/PIN37/PIN36/PIN39`

### 3c. 4+1-pin stepper motor

Pattern: `hw_ver[0] == '1'` **AND** `gpio_pin[3..6]` are all `'4'`
**AND** `gpio_pin[10] == '4'`.

```sh
insmod /home/app/localko/ssp_ms41909_union.ko hw=<hw_ver> gpio=<gpio_pin>
```

Log line: `hw use 4+1 pin motor, PIN76/PIN34/PIN35/PIN37/PIN36`

### 3d. Neither

Log line: `moto not support !!!`

No SSP driver is loaded. `/dev/ssp` will not exist after boot.

> **Note on naming**: the `_union.ko` suffix on the 4+1-pin driver
> doesn't mean "for 8-pin motors". `ssp_ms41909_union.ko`'s string
> table actually contains both motor descriptions — it's a unified
> driver that *can* handle either; on this board's wiring it
> happens to be the chosen one for the 4+1 hardware. The
> `ssp_ms41909.ko` (no `_union`) is the older single-purpose
> 8-pin-only variant. load_cpld_ssp picks one per board, not both.

## 4. `hw_ver[0] == '1'` is the master "has-PTZ" flag

This is the practical takeaway for our project. **Every** SSP
insmod path is gated on `hw_ver[0] == '1'`. If byte `0xA8` of
`/dev/mtdblock6` is anything other than `'1'`, no motor driver
loads, `/dev/ssp` doesn't get created, and PTZ is impossible on
this hardware no matter what userspace does.

That gives us a **deterministic** PTZ presence check that doesn't
depend on the kernel module being loaded at all:

```c
int fd = open("/dev/mtdblock6", O_RDONLY);
if (fd < 0) return -1;          /* assume yes, fall back to /dev/ssp probe */
lseek(fd, 0xA4, SEEK_SET);
uint32_t magic; read(fd, &magic, 4);    /* expect 0x000000AA */
uint8_t  hw0;   read(fd, &hw0, 1);      /* offset 0xA8 — the PTZ flag */
close(fd);
return (magic == 0x000000AA && hw0 == '1') ? 0 : 1;
```

Strictly better than our current "open /dev/ssp + status ioctl"
probe because:
- Works even if `ssp_ms41909*.ko` isn't loaded (e.g. someone
  removed it for testing)
- Works before any kernel module has run, so `init.sh` can use it
  for the 30-second PTZ-calibration wait gate
- No side effects on the motor controller

## 5. `create_sharemem` — the mmap helper

```c
int create_sharemem(char *path, int size) {
    int fd = open(path, O_RDWR | O_LARGEFILE, 0777);
    if (fd == -1) return 0;

    lseek(fd, size - 1, SEEK_SET);
    write(fd, "\0", 1);                       /* extend-by-write trick */
    int addr = mmap(NULL, size, PROT_READ|PROT_WRITE, MAP_SHARED, fd, 0);
    if (addr == MAP_FAILED) { close(fd); return 0; }

    return addr;                              /* fd stays open */
}
```

It's a generic file-backed shared-memory helper. The
`lseek(size-1)` + `write("\0", 1)` is the standard glibc trick for
growing a regular file to `size` bytes before mmap'ing it. Applied
to a block device like `/dev/mtdblock6` it's a no-op on the size
side (block devices are fixed-size) but **does write a zero byte
at offset `size-1`**, which on a flash MTD partition triggers a
sector erase/rewrite cycle.

Stock does this every boot. We don't replicate this; our
[src/imagerd/cpld.h](../src/imagerd/cpld.h) reads the running
kernel module's sysfs parameters instead, which is non-destructive
and doesn't depend on mtdblock6 being writable. The proposed PTZ
probe above also uses `O_RDONLY`.

## 6. `exec_capture_output`

Same `popen + fileno + select + fread + pclose` shape as the
identically-named helper in `rmm` (see `docs/rmm.md` §11). The
function is duplicated across multiple stock binaries; both copies
have the same `if (timeout_sec < 1) plt_select(..., NULL) else
plt_select(..., &tv)` infinite-vs-timeout branch and the same
fd-set bit manipulation.

In load_cpld_ssp this is the wrapper used to actually exec the
`insmod ...` shell-command strings.

## 7. Implications for RTS3903N-RTSP

What this analysis unblocks in our codebase:

- **`ptz_tool probe` can be improved** to consult `/dev/mtdblock6`
  byte `0xA8` directly. Today our probe is layered (`[ -c /dev/ssp ]`
  fast-path + `ptz_tool probe` slow-path); we can add an even faster
  path that doesn't need either condition to be true.

- **`cpld_info` can read factory data when the module isn't loaded**.
  Today it reads `/sys/module/cpld_periph/parameters/{gpio,hw}` —
  fails if `cpld_periph.ko` isn't insmod'd. We could fall back to
  reading mtdblock6 at offsets `0xA8` / `0xCC` to get the same
  strings directly from flash.

- **Boot-script gating**: `wifi/config.sh`'s 30-second PTZ
  calibration wait could check `hw_ver[0]` from flash instead of
  probing `/dev/ssp`. Faster and doesn't require ptz_tool to be on
  the SD card.

- **Documents the full factory-data layout** we previously only had
  rmm's *consumer* view of. With this we know:
  - `0xA4` magic sentinel `0xAA`
  - `0xA8..0xC7` hw_ver (32 chars)
  - `0xC8` magic sentinel `0xBB`
  - `0xCC..0xEB` gpio_pin (32 chars)

  ...which complements the per-character semantics already documented
  in [docs/cpld.md](cpld.md) §2.

What we deliberately won't replicate:

- The destructive write-to-mtdblock6 in `create_sharemem`. We have no
  reason to write to factory flash from userspace; the kernel module's
  sysfs parameters expose the same data read-only.

## 8. Function map

| Address | Renamed | Notes |
|---------|---------|-------|
| `0x004006F0` | `entry` | C runtime; calls `__uClibc_main(main, ...)` |
| `0x00400750` | `cxx_init_static` | empty stub |
| `0x00400790` | `cxx_deinit_static` | empty stub |
| `0x004007DC` | `cxx_init_once` | once-guarded call to `cxx_init_static` |
| `0x0040088C` | `cxx_deinit_once` | counterpart of cxx_init_once |
| `0x004008D0` | `exec_capture_output` | popen+select+fread+pclose wrapper. Same shape as rmm's. |
| `0x00400B38` | `create_sharemem` | open+lseek+write+mmap helper |
| `0x00400C34` | `read_productinfo` | mmap mtdblock6, validate sentinels at 0xA4/0xC8, copy 0xA8..0xC7 → hw_ver and 0xCC..0xEB → gpio_pin |
| `0x00400D2C` | `do_insmod` | always insmod cpld_periph.ko; conditionally insmod ssp_ms41909*.ko based on pattern match |
| `0x004010CC` | `main` | zero buffers, read_productinfo, branch on rc → do_insmod or print failure |
| `0x004011A0` | `run_ctors` | walks `.ctors` list until `0xFFFFFFFF` sentinel |
| `0x004011F0` | `cxx_register_static` | calls into __cxa_atexit equivalent, then cxx_init_once |
| `0x00401440..00401550` | `plt_*` thunks | 19 libc imports: `popen`, `printf`, `pclose`, `munmap`, `memcpy`, `puts`, `select`, `lseek`, `mmap`, `write`, `fread`, `memset`, `sprintf`, `access`, `fileno`, `strlen`, `open`, `close` |

The full list (with `_IO()` style signatures) lives in the Ghidra
project at port 8192. All PLT thunks are renamed `plt_<libc-name>`
matching the convention used in the rmm project.

## 9. Quirks worth remembering

- **Stripped section headers**: this binary has its section table
  removed. `readelf -d` and `objdump -R` both report "no dynamic
  section" / "not a dynamic object", even though the loader can
  still resolve imports via the PT_DYNAMIC program header. Tooling
  that walks `.dynsym` won't work; if you re-import the binary into
  Ghidra you'll have to identify libc imports by call-site context
  (we did this by tracing arg patterns to each PLT thunk).
- **The `O_RDWR` open of mtdblock6** is dangerous-looking but
  functionally just reads. Stock has been doing this every boot for
  years without (apparently) corrupting factory data. We don't trust
  it and use `O_RDONLY` everywhere on our side.
- **The `_union` naming on the 4+1-pin driver** is misleading. Don't
  let it trick you into thinking the 8-pin path uses the union driver
  — it's the opposite.
- **Magic byte 0xC8 = `200`**: in Ghidra's decompile the second
  sentinel reads as `*(int *)((int)addr + 200)`, which is just the
  decimal form of `0xC8`. They're the same offset; Ghidra picks the
  base it thinks reads cleaner.
