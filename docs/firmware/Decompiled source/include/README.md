# include/

`decomp_types.h` — shims for the pseudo-C types Ghidra emits (`undefined`, `undefined1/2/4/8`, `byte`, `uint`, `ushort`, `code`, …). Each module header `#include`s it so the decompiled sources read cleanly. The code is decompiler output for reading, **not** buildable C.
