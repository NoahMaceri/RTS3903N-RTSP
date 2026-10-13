# `p2p_tnp`

**CS2 "PPPP"/TNP peer-to-peer: live view, talkback, PTZ, playback**

- Category: `apps`  ·  functions: **573** (named **416**, of which **89** recovered from `__func__`/log strings)
- Entry points: `_init` @ 00406118, `_ftext` @ 00406160, `main` @ 004062b0

## Source files

- `start.c` — 5 functions — C-runtime entry/init
- `do.c` — 3 functions — `do*` family
- `fshare.c` — 6 functions — `fshare*` family
- `get.c` — 5 functions — `get*` family
- `keymap.c` — 6 functions — `keymap*` family
- `mq.c` — 3 functions — `mq*` family
- `mutex.c` — 5 functions — `mutex*` family
- `p2p.c` — 56 functions — `p2p*` family
- `pppp.c` — 191 functions — `pppp*` family
- `pthread.c` — 7 functions — `pthread*` family
- `reply.c` — 4 functions — `reply*` family
- `sll.c` — 9 functions — `sll*` family
- `misc.c` — 116 functions — miscellaneous
- `_unnamed.c` — 157 functions — address-only functions (no recoverable name)

## Reference data (`reference/`)

`renames.tsv` (recovered name + evidence), `dynsym.tsv` (dynamic symbols; for `.so` add **+0x10000** to match addresses), `symbols.txt` (imports/exports), `strings.tsv`, `callgraph.tsv`.

See `../../README.md` for method and `../../../analysis/` for the prose investigation.
