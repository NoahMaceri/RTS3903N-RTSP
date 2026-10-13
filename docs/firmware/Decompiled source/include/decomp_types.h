/* decomp_types.h - Ghidra pseudo-C type shims.
 * These let the decompiled sources be read (and lightly tooled) without the
 * full Ghidra type database. The code is decompiler output, not buildable C.
 */
#ifndef DECOMP_TYPES_H
#define DECOMP_TYPES_H
#include <stdint.h>
typedef unsigned char   undefined;
typedef unsigned char   undefined1;
typedef unsigned short  undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long undefined8;
typedef unsigned char   byte;
typedef unsigned char   uchar;
typedef unsigned short  ushort;
typedef unsigned int    uint;
typedef unsigned long   ulong;
typedef void            code;
#endif /* DECOMP_TYPES_H */
