# `cloudAPI`

**Cloud HTTP/TLS API worker (static libcurl + CyaSSL), HMAC-SHA1 signing**

- Category: `apps`  ·  functions: **1470** (named **513**, of which **213** recovered from `__func__`/log strings)
- Entry points: `_init` @ 004033ac, `_ftext` @ 00403400, `main` @ 0040376c

## Source files

- `start.c` — 4 functions — C-runtime entry/init
- `bio.c` — 11 functions — `bio*` family
- `cyassl.c` — 198 functions — `cyassl*` family
- `des.c` — 8 functions — `des*` family
- `des3.c` — 5 functions — `des3*` family
- `evp.c` — 10 functions — `evp*` family
- `initssl.c` — 3 functions — `initssl*` family
- `maketlsv1.c` — 3 functions — `maketlsv1*` family
- `mp.c` — 23 functions — `mp*` family
- `sha1.c` — 3 functions — `sha1*` family
- `ssl.c` — 19 functions — `ssl*` family
- `misc.c` — 226 functions — miscellaneous
- `_unnamed.c` — 957 functions — address-only functions (no recoverable name)

## Reference data (`reference/`)

`renames.tsv` (recovered name + evidence), `dynsym.tsv` (dynamic symbols; for `.so` add **+0x10000** to match addresses), `symbols.txt` (imports/exports), `strings.tsv`, `callgraph.tsv`.

See `../../README.md` for method and `../../../analysis/` for the prose investigation.
