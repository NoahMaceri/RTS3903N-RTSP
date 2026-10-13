# `cloud`

**Cloud control-plane client (drives cloudAPI, handles server commands)**

- Category: `apps`  ·  functions: **174** (named **113**, of which **47** recovered from `__func__`/log strings)
- Entry points: `_init` @ 00400e20, `_ftext` @ 00400e70, `main` @ 00401160

## Source files

- `start.c` — 5 functions — C-runtime entry/init
- `cloud.c` — 20 functions — `cloud*` family
- `mq.c` — 3 functions — `mq*` family
- `pthread.c` — 3 functions — `pthread*` family
- `send.c` — 3 functions — `send*` family
- `webapi.c` — 9 functions — `webapi*` family
- `yi.c` — 5 functions — `yi*` family
- `misc.c` — 65 functions — miscellaneous
- `_unnamed.c` — 61 functions — address-only functions (no recoverable name)

## Reference data (`reference/`)

`renames.tsv` (recovered name + evidence), `dynsym.tsv` (dynamic symbols; for `.so` add **+0x10000** to match addresses), `symbols.txt` (imports/exports), `strings.tsv`, `callgraph.tsv`.

See `../../README.md` for method and `../../../analysis/` for the prose investigation.
