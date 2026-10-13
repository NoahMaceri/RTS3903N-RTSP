# `checkdisk`

**SD filesystem check tool**

- Category: `tools`  ·  functions: **62** (named **49**, of which **6** recovered from `__func__`/log strings)
- Entry points: `_init` @ 004009dc, `_ftext` @ 00400a30

## Source files

- `start.c` — 4 functions — C-runtime entry/init
- `get.c` — 3 functions — `get*` family
- `misc.c` — 42 functions — miscellaneous
- `_unnamed.c` — 13 functions — address-only functions (no recoverable name)

## Reference data (`reference/`)

`renames.tsv` (recovered name + evidence), `dynsym.tsv` (dynamic symbols; for `.so` add **+0x10000** to match addresses), `symbols.txt` (imports/exports), `strings.tsv`, `callgraph.tsv`.

See `../../README.md` for method and `../../../analysis/` for the prose investigation.
