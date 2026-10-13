# `download_upgrade`

**OTA package downloader (recovery slot)**

- Category: `tools`  ·  functions: **80** (named **75**, of which **0** recovered from `__func__`/log strings)
- Entry points: `_init` @ 0040121c, `_ftext` @ 00401270

## Source files

- `start.c` — 4 functions — C-runtime entry/init
- `get.c` — 6 functions — `get*` family
- `system.c` — 3 functions — `system*` family
- `yi.c` — 4 functions — `yi*` family
- `misc.c` — 58 functions — miscellaneous
- `_unnamed.c` — 5 functions — address-only functions (no recoverable name)

## Reference data (`reference/`)

`renames.tsv` (recovered name + evidence), `dynsym.tsv` (dynamic symbols; for `.so` add **+0x10000** to match addresses), `symbols.txt` (imports/exports), `strings.tsv`, `callgraph.tsv`.

See `../../README.md` for method and `../../../analysis/` for the prose investigation.
