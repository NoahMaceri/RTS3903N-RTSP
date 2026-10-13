/* luaext — "luaopen" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "luaext.h"

// ==== luaopen_luaext_sys @ 00013748 size=232

undefined4 luaopen_luaext_sys(undefined4 param_1)

{
  (*(code *)PTR_luaL_newmetatable_0002ae68)(param_1,PTR_0002ad78 + 0x7e50);
  (*(code *)PTR_lua_pushvalue_0002aeb0)(param_1,0xffffffff);
  (*(code *)PTR_lua_setfield_0002aec4)(param_1,0xfffffffe,PTR_0002ad78 + 0x7f48);
  (*(code *)PTR_luaL_setfuncs_0002ae08)(param_1,PTR_DAT_0002ad6c + -0x548c,0);
  (*(code *)PTR_luaL_checkversion__0002aebc)(param_1);
  (*(code *)PTR_lua_createtable_0002add4)(param_1,0,0xe);
  (*(code *)PTR_luaL_setfuncs_0002ae08)(param_1,PTR_DAT_0002ad6c + -0x53ec,0);
  return 1;
}



// ==== luaopen_luaext_app @ 00013a18 size=132

undefined4 luaopen_luaext_app(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_luaL_checkversion__0002aebc)
            (param_1,param_2,*(undefined4 *)(PTR_DAT_0002ad7c + -0x7f70),
             *(undefined4 *)(PTR_DAT_0002ad7c + -0x7f6c),0x88);
  (*(code *)PTR_lua_createtable_0002add4)(param_1,0,2);
  (*(code *)PTR_luaL_setfuncs_0002ae08)(param_1,PTR_DAT_0002ad6c + -0x5374,0);
  return 1;
}



// ==== luaopen_luaext_aes @ 00013d8c size=232

undefined4 luaopen_luaext_aes(undefined4 param_1)

{
  (*(code *)PTR_luaL_newmetatable_0002ae68)(param_1,PTR_DAT_0002ad7c + -0x7f20);
  (*(code *)PTR_lua_pushvalue_0002aeb0)(param_1,0xffffffff);
  (*(code *)PTR_lua_setfield_0002aec4)(param_1,0xfffffffe,PTR_0002ad78 + 0x7f48);
  (*(code *)PTR_luaL_setfuncs_0002ae08)(param_1,PTR_DAT_0002ad6c + -0x535c,0);
  (*(code *)PTR_luaL_checkversion__0002aebc)(param_1);
  (*(code *)PTR_lua_createtable_0002add4)(param_1,0,1);
  (*(code *)PTR_luaL_setfuncs_0002ae08)(param_1,PTR_DAT_0002ad6c + -0x5334,0);
  return 1;
}



// ==== luaopen_luaext_md5 @ 00016b40 size=232

undefined4 luaopen_luaext_md5(undefined4 param_1)

{
  (*(code *)PTR_luaL_newmetatable_0002ae68)(param_1,PTR_DAT_0002ad7c + -0x5570);
  (*(code *)PTR_lua_pushvalue_0002aeb0)(param_1,0xffffffff);
  (*(code *)PTR_lua_setfield_0002aec4)(param_1,0xfffffffe,PTR_0002ad78 + 0x7f48);
  (*(code *)PTR_luaL_setfuncs_0002ae08)(param_1,PTR_DAT_0002ad6c + -0x5324,0);
  (*(code *)PTR_luaL_checkversion__0002aebc)(param_1);
  (*(code *)PTR_lua_createtable_0002add4)(param_1,0,1);
  (*(code *)PTR_luaL_setfuncs_0002ae08)(param_1,PTR_DAT_0002ad6c + -0x52f4,0);
  return 1;
}



// ==== luaopen_luaext_sha1 @ 00017840 size=232

undefined4 luaopen_luaext_sha1(undefined4 param_1)

{
  (*(code *)PTR_luaL_newmetatable_0002ae68)(param_1,PTR_DAT_0002ad7c + -0x54b0);
  (*(code *)PTR_lua_pushvalue_0002aeb0)(param_1,0xffffffff);
  (*(code *)PTR_lua_setfield_0002aec4)(param_1,0xfffffffe,PTR_0002ad78 + 0x7f48);
  (*(code *)PTR_luaL_setfuncs_0002ae08)(param_1,PTR_DAT_0002ad6c + -0x52e4,0);
  (*(code *)PTR_luaL_checkversion__0002aebc)(param_1);
  (*(code *)PTR_lua_createtable_0002add4)(param_1,0,1);
  (*(code *)PTR_luaL_setfuncs_0002ae08)(param_1,PTR_DAT_0002ad6c + -0x52b4,0);
  return 1;
}



