# `librtstream`

**Core Realtek AV engine: units/channels/pipes, single epoll loop**

- Category: `sdk`  ·  functions: **956** (named **867**, of which **79** recovered from `__func__`/log strings)
- Entry points: `_init` @ 00018ff4

## Source files

- `start.c` — 4 functions — C-runtime entry/init
- `alloc.c` — 13 functions — `alloc*` family
- `check.c` — 10 functions — `check*` family
- `cleanup.c` — 3 functions — `cleanup*` family
- `convert.c` — 3 functions — `convert*` family
- `free.c` — 8 functions — `free*` family
- `get.c` — 21 functions — `get*` family
- `h1.c` — 6 functions — `h1*` family
- `init.c` — 5 functions — `init*` family
- `jpgenc.c` — 3 functions — `jpgenc*` family
- `query.c` — 5 functions — `query*` family
- `recycle.c` — 3 functions — `recycle*` family
- `refresh.c` — 9 functions — `refresh*` family
- `register.c` — 11 functions — `register*` family
- `rts.c` — 633 functions — `rts*` family
- `rtstream.c` — 3 functions — `rtstream*` family
- `set.c` — 30 functions — `set*` family
- `speex.c` — 45 functions — `speex*` family
- `to.c` — 19 functions — `to*` family
- `misc.c` — 33 functions — miscellaneous
- `_unnamed.c` — 89 functions — address-only functions (no recoverable name)

## Reference data (`reference/`)

`renames.tsv` (recovered name + evidence), `dynsym.tsv` (dynamic symbols; for `.so` add **+0x10000** to match addresses), `symbols.txt` (imports/exports), `strings.tsv`, `callgraph.tsv`.

See `../../README.md` for method and `../../../analysis/` for the prose investigation.
