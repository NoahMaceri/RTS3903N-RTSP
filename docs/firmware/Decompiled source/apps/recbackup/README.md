# `recbackup`

**SD-card recording backup manager**

- Category: `apps`  ·  functions: **133** (named **97**, of which **15** recovered from `__func__`/log strings)
- Entry points: `_init` @ 00401070, `main` @ 004010c0

## Source files

- `start.c` — 3 functions — C-runtime entry/init
- `pthread.c` — 11 functions — `pthread*` family
- `sem.c` — 4 functions — `sem*` family
- `misc.c` — 79 functions — miscellaneous
- `_unnamed.c` — 36 functions — address-only functions (no recoverable name)

## Reference data (`reference/`)

`renames.tsv` (recovered name + evidence), `dynsym.tsv` (dynamic symbols; for `.so` add **+0x10000** to match addresses), `symbols.txt` (imports/exports), `strings.tsv`, `callgraph.tsv`.

See `../../README.md` for method and `../../../analysis/` for the prose investigation.
