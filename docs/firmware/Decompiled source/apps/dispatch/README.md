# `dispatch`

**Central mqueue router; onboarding + device state machine**

- Category: `apps`  ·  functions: **205** (named **118**, of which **30** recovered from `__func__`/log strings)
- Entry points: `_init` @ 00401188, `main` @ 004011d0

## Source files

- `start.c` — 3 functions — C-runtime entry/init
- `get.c` — 3 functions — `get*` family
- `h601r.c` — 3 functions — `h601r*` family
- `mq.c` — 3 functions — `mq*` family
- `pthread.c` — 6 functions — `pthread*` family
- `ptz.c` — 3 functions — `ptz*` family
- `sem.c` — 3 functions — `sem*` family
- `send.c` — 10 functions — `send*` family
- `misc.c` — 84 functions — miscellaneous
- `_unnamed.c` — 87 functions — address-only functions (no recoverable name)

## Reference data (`reference/`)

`renames.tsv` (recovered name + evidence), `dynsym.tsv` (dynamic symbols; for `.so` add **+0x10000** to match addresses), `symbols.txt` (imports/exports), `strings.tsv`, `callgraph.tsv`.

See `../../README.md` for method and `../../../analysis/` for the prose investigation.
