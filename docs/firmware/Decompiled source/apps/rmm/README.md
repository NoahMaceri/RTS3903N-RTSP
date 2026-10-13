# `rmm`

**Media pipeline: ISP/H.264/AAC capture, QR scan, motion detect, fshare ring**

- Category: `apps`  ·  functions: **403** (named **204**, of which **55** recovered from `__func__`/log strings)
- Entry points: `_init` @ 004024bc, `_ftext` @ 00402510, `main` @ 0040440c

## Source files

- `start.c` — 4 functions — C-runtime entry/init
- `aacdecoder.c` — 5 functions — `aacdecoder*` family
- `cb.c` — 8 functions — `cb*` family
- `fshare.c` — 5 functions — `fshare*` family
- `media.c` — 9 functions — `media*` family
- `modet.c` — 3 functions — `modet*` family
- `mq.c` — 3 functions — `mq*` family
- `pthread.c` — 7 functions — `pthread*` family
- `rts.c` — 57 functions — `rts*` family
- `sem.c` — 3 functions — `sem*` family
- `send.c` — 10 functions — `send*` family
- `set.c` — 3 functions — `set*` family
- `zbar.c` — 6 functions — `zbar*` family
- `misc.c` — 81 functions — miscellaneous
- `_unnamed.c` — 199 functions — address-only functions (no recoverable name)

## Reference data (`reference/`)

`renames.tsv` (recovered name + evidence), `dynsym.tsv` (dynamic symbols; for `.so` add **+0x10000** to match addresses), `symbols.txt` (imports/exports), `strings.tsv`, `callgraph.tsv`.

See `../../README.md` for method and `../../../analysis/` for the prose investigation.
