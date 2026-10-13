# `mp4record`

**Event MP4 / clip recorder**

- Category: `apps`  ·  functions: **132** (named **67**, of which **9** recovered from `__func__`/log strings)
- Entry points: `_init` @ 00400d88, `_ftext` @ 00400dd0, `main` @ 00400e30

## Source files

- `start.c` — 4 functions — C-runtime entry/init
- `fshare.c` — 5 functions — `fshare*` family
- `mq.c` — 3 functions — `mq*` family
- `misc.c` — 55 functions — miscellaneous
- `_unnamed.c` — 65 functions — address-only functions (no recoverable name)

## Reference data (`reference/`)

`renames.tsv` (recovered name + evidence), `dynsym.tsv` (dynamic symbols; for `.so` add **+0x10000** to match addresses), `symbols.txt` (imports/exports), `strings.tsv`, `callgraph.tsv`.

See `../../README.md` for method and `../../../analysis/` for the prose investigation.
