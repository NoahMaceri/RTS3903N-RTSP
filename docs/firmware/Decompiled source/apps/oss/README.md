# `oss`

**Continuous-recording uploader to object storage (static libcurl + CyaSSL)**

- Category: `apps`  ·  functions: **3466** (named **956**, of which **289** recovered from `__func__`/log strings)
- Entry points: `_init` @ 00408148, `_ftext` @ 00408190, `main` @ 004088f0

## Source files

- `start.c` — 5 functions — C-runtime entry/init
- `aos.c` — 12 functions — `aos*` family
- `apr.c` — 53 functions — `apr*` family
- `bio.c` — 11 functions — `bio*` family
- `build.c` — 8 functions — `build*` family
- `cos.c` — 197 functions — `cos*` family
- `curl.c` — 10 functions — `curl*` family
- `cyassl.c` — 198 functions — `cyassl*` family
- `des.c` — 8 functions — `des*` family
- `des3.c` — 5 functions — `des3*` family
- `evp.c` — 10 functions — `evp*` family
- `fshare.c` — 5 functions — `fshare*` family
- `get.c` — 9 functions — `get*` family
- `initssl.c` — 3 functions — `initssl*` family
- `maketlsv1.c` — 3 functions — `maketlsv1*` family
- `mp.c` — 23 functions — `mp*` family
- `mxml.c` — 6 functions — `mxml*` family
- `oss.c` — 32 functions — `oss*` family
- `pthread.c` — 13 functions — `pthread*` family
- `set.c` — 4 functions — `set*` family
- `sha1.c` — 3 functions — `sha1*` family
- `ssl.c` — 19 functions — `ssl*` family
- `misc.c` — 319 functions — miscellaneous
- `_unnamed.c` — 2510 functions — address-only functions (no recoverable name)

## Reference data (`reference/`)

`renames.tsv` (recovered name + evidence), `dynsym.tsv` (dynamic symbols; for `.so` add **+0x10000** to match addresses), `symbols.txt` (imports/exports), `strings.tsv`, `callgraph.tsv`.

See `../../README.md` for method and `../../../analysis/` for the prose investigation.
