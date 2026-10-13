# `mtd_img`

**Raw MTD partition writer used by OTA (no hash/CRC verify)**

- Category: `tools`  ·  functions: **27** (named **22**, of which **0** recovered from `__func__`/log strings)
- Entry points: `_init` @ 00400770, `_ftext` @ 004007c0

## Source files

- `start.c` — 4 functions — C-runtime entry/init
- `mtd.c` — 4 functions — `mtd*` family
- `misc.c` — 14 functions — miscellaneous
- `_unnamed.c` — 5 functions — address-only functions (no recoverable name)

## Reference data (`reference/`)

`renames.tsv` (recovered name + evidence), `dynsym.tsv` (dynamic symbols; for `.so` add **+0x10000** to match addresses), `symbols.txt` (imports/exports), `strings.tsv`, `callgraph.tsv`.

See `../../README.md` for method and `../../../analysis/` for the prose investigation.
