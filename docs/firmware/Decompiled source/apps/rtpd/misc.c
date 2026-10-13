/* rtpd — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rtpd.h"

// ==== _DT_INIT @ 00010da4 size=120

void _DT_INIT(void)

{
  FUN_00010f90();
  FUN_000173b0();
  return;
}



// ==== entry @ 00010e20 size=72

void processEntry entry(void)

{
  if (((undefined *)0x6 < PTR___DT_PLTGOT_000280c8 + (3 - (int)(PTR_DAT_000280cc + -0x7f40))) &&
     (PTR__ITM_deregisterTMCloneTable_00028204 != (undefined *)0x0)) {
    (*(code *)PTR__ITM_deregisterTMCloneTable_00028204)();
    return;
  }
  return;
}



// ==== luaopen_rtpd @ 0001224c size=132

undefined4 luaopen_rtpd(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_luaL_checkversion__00028260)
            (param_1,param_2,*(undefined4 *)(PTR_000280d8 + 0x7aa0),
             *(undefined4 *)(PTR_000280d8 + 0x7aa4),0x88);
  (*(code *)PTR_lua_createtable_00028184)(param_1,0,8);
  (*(code *)PTR_luaL_setfuncs_000281b8)(param_1,PTR_DAT_000280cc + -0x7fec,0);
  return 1;
}



// ==== _DT_FINI @ 00017890 size=80

void _DT_FINI(void)

{
  FUN_00010eb8();
  return;
}



