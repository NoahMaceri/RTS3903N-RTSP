/* luaext — recovered function prototypes
 * Lua C-extension bindings (locallib)
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef LUAEXT_H
#define LUAEXT_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- luaopen ---- */
undefined4 luaopen_luaext_sys(undefined4 param_1);  /* @ 00013748 */
undefined4 luaopen_luaext_app(undefined4 param_1,undefined4 param_2);  /* @ 00013a18 */
undefined4 luaopen_luaext_aes(undefined4 param_1);  /* @ 00013d8c */
undefined4 luaopen_luaext_md5(undefined4 param_1);  /* @ 00016b40 */
undefined4 luaopen_luaext_sha1(undefined4 param_1);  /* @ 00017840 */

/* ---- misc ---- */
void _DT_INIT(void);  /* @ 000110ac */
void processEntry entry(void);  /* @ 00011130 */
void md5_init(void);  /* @ 0001654c */
void md5_done(uint *param_1,int param_2);  /* @ 00016724 */
void sha1_init(void);  /* @ 0001724c */
void sha1_done(uint *param_1,undefined1 *param_2);  /* @ 00017424 */
void _DT_FINI(void);  /* @ 00017df0 */

#endif /* LUAEXT_H */
