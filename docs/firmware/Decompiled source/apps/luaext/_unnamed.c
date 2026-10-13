/* luaext — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "luaext.h"

// ==== FUN_00011178 @ 00011178 size=80

void FUN_00011178(void)

{
  if ((((int)PTR___DT_PLTGOT_0002ad68 - (int)(PTR_DAT_0002ad6c + -0x52a0) >> 2) -
       ((int)PTR___DT_PLTGOT_0002ad68 - (int)(PTR_DAT_0002ad6c + -0x52a0) >> 0x1f) >> 1 != 0) &&
     (PTR__ITM_registerTMCloneTable_0002ae70 != (undefined *)0x0)) {
    (*(code *)PTR__ITM_registerTMCloneTable_0002ae70)();
    return;
  }
  return;
}



// ==== FUN_000111c8 @ 000111c8 size=216

void FUN_000111c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = PTR_DAT_0002ad6c;
  if (PTR_DAT_0002ad6c[-0x5100] == '\0') {
    if (PTR___cxa_finalize_0002aecc != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_0002aecc)(*(undefined4 *)PTR_LOOP_0002ad70);
    }
    puVar2 = PTR_DAT_0002ad6c;
    puVar3 = PTR_DAT_0002ad6c + -0x5498;
    iVar6 = (int)PTR_DAT_0002ad74 - (int)puVar3;
    while (uVar4 = *(uint *)(puVar2 + -0x50fc), iVar5 = uVar4 + 1, uVar4 < (iVar6 >> 2) - 1U) {
      *(int *)(puVar2 + -0x50fc) = iVar5;
      (**(code **)(puVar3 + iVar5 * 4))();
    }
    (*(code *)(PTR_0002ad78 + 0x1130))();
    puVar1[-0x5100] = 1;
  }
  return;
}



// ==== FUN_000112a0 @ 000112a0 size=80

void FUN_000112a0(void)

{
  if ((*(int *)(PTR_DAT_0002ad6c + -0x5490) != 0) &&
     (PTR__Jv_RegisterClasses_0002ade0 != (undefined *)0x0)) {
    (*(code *)PTR__Jv_RegisterClasses_0002ade0)(PTR_DAT_0002ad6c + -0x5490);
  }
                    /* WARNING: Could not recover jumptable at 0x000112e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_0002ad78 + 0x1178))();
  return;
}



// ==== FUN_00011624 @ 00011624 size=216

undefined4 FUN_00011624(undefined4 param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  
  uVar2 = (*(code *)PTR_luaL_checkinteger_0002ae28)(param_1,1);
  if (2 < uVar2) {
    (*(code *)PTR_luaL_argerror_0002ae34)(param_1,1,PTR_0002ad78 + 0x7e70);
  }
  puVar3 = (uint *)(*(code *)PTR_lua_newuserdata_0002ae60)(param_1,8);
  *puVar3 = 0xffffffff;
  puVar1 = PTR_lua_getfield_0002aed8;
  puVar4 = PTR_0002ad78 + 0x7e50;
  *(undefined2 *)(puVar3 + 1) = 0;
  *(undefined2 *)((int)puVar3 + 6) = 0;
  (*(code *)puVar1)(param_1,0xfff0b9d8,puVar4);
  (*(code *)PTR_lua_setmetatable_0002ae74)(param_1,0xfffffffe);
  *puVar3 = uVar2;
  return 1;
}



// ==== FUN_000116fc @ 000116fc size=528

undefined4 FUN_000116fc(undefined4 param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined2 local_30;
  ushort local_2e;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  
  uVar6 = (*(code *)PTR_luaL_checkinteger_0002ae28)(param_1,1);
  if (((int)((ulonglong)uVar6 >> 0x20) != 0) || (0xffff < (uint)uVar6)) {
    (*(code *)PTR_luaL_argerror_0002ae34)(param_1,1,PTR_0002ad78 + 0x7e88);
  }
  piVar2 = (int *)(*(code *)PTR_lua_newuserdata_0002ae60)(param_1,8);
  *piVar2 = -1;
  puVar1 = PTR_lua_getfield_0002aed8;
  puVar5 = PTR_0002ad78 + 0x7e50;
  *(undefined2 *)(piVar2 + 1) = 0;
  *(undefined2 *)((int)piVar2 + 6) = 0;
  (*(code *)puVar1)(param_1,0xfff0b9d8,puVar5);
  (*(code *)PTR_lua_setmetatable_0002ae74)(param_1,0xfffffffe);
  iVar3 = (*(code *)PTR_socket_0002aeb4)(2,1,0);
  if (iVar3 == -1) {
    (*(code *)PTR___errno_location_0002ae04)();
  }
  else {
    local_20[0] = 1;
    (*(code *)PTR_setsockopt_0002ae78)(iVar3,0xffff,4,local_20,4);
    local_2c = 0;
    local_2e = (ushort)((ulonglong)uVar6 >> 8) & 0xff | (ushort)((uint)uVar6 << 8);
    local_28 = 0;
    local_24 = 0;
    local_30 = 2;
    iVar4 = (*(code *)PTR_bind_0002ae80)(iVar3,&local_30,0x10);
    if (iVar4 != -1) {
      *piVar2 = iVar3;
      return 1;
    }
    (*(code *)PTR___errno_location_0002ae04)();
    (*(code *)PTR_close_0002add8)(iVar3);
  }
  (*(code *)PTR_lua_pushnil_0002aeac)(param_1);
  (*(code *)PTR_lua_pushinteger_0002adcc)(param_1);
  return 2;
}



// ==== FUN_00011d88 @ 00011d88 size=424

undefined4 FUN_00011d88(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  
  uVar2 = (*(code *)PTR_luaL_checklstring_0002aec8)(param_1,1,0);
  uVar3 = (*(code *)PTR_luaL_optlstring_0002ae6c)(param_1,2,PTR_DAT_0002ad7c + -0x54ec,0);
  piVar4 = (int *)(*(code *)PTR_lua_newuserdata_0002ae60)(param_1,8);
  *piVar4 = -1;
  puVar1 = PTR_lua_getfield_0002aed8;
  puVar7 = PTR_0002ad78 + 0x7e50;
  *(undefined2 *)(piVar4 + 1) = 0;
  *(undefined2 *)((int)piVar4 + 6) = 0;
  (*(code *)puVar1)(param_1,0xfff0b9d8,puVar7);
  (*(code *)PTR_lua_setmetatable_0002ae74)(param_1,0xfffffffe);
  iVar5 = (*(code *)PTR_strchr_0002ade4)(uVar3,0x72);
  iVar6 = (*(code *)PTR_strchr_0002ade4)(uVar3,0x77);
  if (iVar5 == 0) {
    uVar8 = 1;
    if (iVar6 == 0) {
      uVar8 = 0;
      goto LAB_00011ec4;
    }
  }
  else {
    uVar8 = 0;
    if (iVar6 == 0) goto LAB_00011ec4;
    uVar8 = 2;
  }
  iVar5 = (*(code *)PTR_strchr_0002ade4)(uVar3,99);
  if (iVar5 != 0) {
    uVar8 = uVar8 | 0x100;
  }
  iVar5 = (*(code *)PTR_strchr_0002ade4)(uVar3,0x74);
  if (iVar5 != 0) {
    uVar8 = uVar8 | 0x200;
  }
LAB_00011ec4:
  iVar5 = (*(code *)PTR_open_0002adf0)(uVar2,uVar8,0x1a4);
  if (iVar5 == -1) {
    (*(code *)PTR_lua_pushnil_0002aeac)(param_1);
  }
  else {
    *piVar4 = iVar5;
  }
  return 1;
}



// ==== FUN_000120cc @ 000120cc size=376

undefined4 FUN_000120cc(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  short *psVar3;
  int *piVar4;
  undefined *puVar5;
  undefined1 auStack_30 [16];
  int *local_20 [2];
  
  iVar2 = (*(code *)PTR_getifaddrs_0002ae24)(local_20);
  piVar1 = local_20[0];
  if (iVar2 == -1) {
    (*(code *)PTR___errno_location_0002ae04)();
  }
  else {
    if (local_20[0] != (int *)0x0) {
      puVar5 = PTR_0002ad78 + 0x7ec8;
      piVar4 = local_20[0];
      do {
        iVar2 = (*(code *)PTR_strcmp_0002ae40)(puVar5,piVar4[1]);
        if (((iVar2 != 0) && (psVar3 = (short *)piVar4[3], psVar3 != (short *)0x0)) &&
           (*psVar3 == 2)) {
          (*(code *)PTR_inet_ntop_0002adfc)(2,psVar3 + 2,auStack_30,0x10);
          (*(code *)PTR_freeifaddrs_0002ae1c)(local_20[0]);
          (*(code *)PTR_lua_pushstring_0002ae38)(param_1,auStack_30);
          return 1;
        }
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)0x0);
    }
    (*(code *)PTR_freeifaddrs_0002ae1c)(piVar1);
  }
  (*(code *)PTR_lua_pushnil_0002aeac)(param_1);
  (*(code *)PTR_lua_pushinteger_0002adcc)(param_1);
  return 2;
}



// ==== FUN_00012244 @ 00012244 size=108

undefined4 FUN_00012244(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (*(code *)PTR_luaL_checklstring_0002aec8)(param_1,1,0);
  iVar2 = (*(code *)PTR_mkfifo_0002ae7c)(uVar1,0x1a4);
  (*(code *)PTR_lua_pushboolean_0002ae94)(param_1,iVar2 == 0);
  return 1;
}



// ==== FUN_000122b0 @ 000122b0 size=108

undefined4 FUN_000122b0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (*(code *)PTR_luaL_checkinteger_0002ae28)(param_1,1);
  uVar2 = (*(code *)PTR_luaL_checkinteger_0002ae28)(param_1,2);
  (*(code *)PTR_kill_0002ae84)(uVar1,uVar2);
  return 0;
}



// ==== FUN_0001231c @ 0001231c size=108

undefined4 FUN_0001231c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (*(code *)PTR_luaL_checklstring_0002aec8)(param_1,1,0);
  iVar2 = (*(code *)PTR_access_0002ae14)(uVar1,0);
  (*(code *)PTR_lua_pushboolean_0002ae94)(param_1,iVar2 == 0);
  return 1;
}



// ==== FUN_00012388 @ 00012388 size=136

undefined4 FUN_00012388(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_luaL_checkinteger_0002ae28)(param_1,1);
  if (iVar1 < 0) {
    (*(code *)PTR_luaL_argerror_0002ae34)(param_1,1,PTR_0002ad78 + 0x7eec);
  }
  (*(code *)PTR_usleep_0002aed4)(iVar1 * 1000);
  return 0;
}



// ==== FUN_000124ec @ 000124ec size=96

undefined4 FUN_000124ec(undefined4 param_1)

{
  (*(code *)PTR_luaL_checkudata_0002ae0c)(param_1,1,PTR_0002ad78 + 0x7e50);
  (*(code *)PTR_lua_pushinteger_0002adcc)(param_1);
  return 1;
}



// ==== FUN_0001254c @ 0001254c size=188

undefined4 FUN_0001254c(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  
  iVar1 = (*(code *)PTR_luaL_checkudata_0002ae0c)(param_1,1,PTR_0002ad78 + 0x7e50);
  uVar2 = (*(code *)PTR_luaL_optinteger_0002ae00)(param_1,2,1,0);
  if (3 < uVar2) {
    (*(code *)PTR_luaL_argerror_0002ae34)(param_1,2,PTR_0002ad78 + 0x7f00);
  }
  uVar3 = (ushort)uVar2 & 1;
  if ((uVar2 & 2) != 0) {
    uVar3 = uVar3 | 4;
  }
  *(ushort *)(iVar1 + 4) = uVar3;
  return 0;
}



// ==== FUN_000127b4 @ 000127b4 size=252

undefined4 FUN_000127b4(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  
  puVar1 = PTR_0002ad78;
  puVar3 = (undefined4 *)(*(code *)PTR_luaL_checkudata_0002ae0c)(param_1,1,PTR_0002ad78 + 0x7e50);
  piVar4 = (int *)(*(code *)PTR_lua_newuserdata_0002ae60)(param_1,8);
  *piVar4 = -1;
  puVar2 = PTR_lua_getfield_0002aed8;
  *(undefined2 *)(piVar4 + 1) = 0;
  *(undefined2 *)((int)piVar4 + 6) = 0;
  (*(code *)puVar2)(param_1,0xfff0b9d8,puVar1 + 0x7e50);
  (*(code *)PTR_lua_setmetatable_0002ae74)(param_1,0xfffffffe);
  iVar5 = (*(code *)PTR_accept_0002ae98)(*puVar3,0,0);
  if (iVar5 == -1) {
    (*(code *)PTR_lua_pushnil_0002aeac)(param_1);
  }
  else {
    *piVar4 = iVar5;
  }
  return 1;
}



// ==== FUN_000129d8 @ 000129d8 size=408

undefined4 FUN_000129d8(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined2 local_30;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c [2];
  
  puVar1 = (undefined4 *)(*(code *)PTR_luaL_checkudata_0002ae0c)(param_1,1,PTR_0002ad78 + 0x7e50);
  uVar2 = (*(code *)PTR_luaL_checklstring_0002aec8)(param_1,2,local_1c);
  puVar3 = (undefined4 *)(*(code *)PTR_luaL_checklstring_0002aec8)(param_1,3,&local_20);
  if (local_20 != 6) {
    (*(code *)PTR_luaL_argerror_0002ae34)(param_1,3,PTR_0002ad78 + 0x7f1c);
  }
  local_28 = 0;
  local_24 = 0;
  local_2c = *puVar3;
  _local_30 = CONCAT13(*(undefined1 *)((int)puVar3 + 5),CONCAT12(*(undefined1 *)(puVar3 + 1),2));
  iVar4 = (*(code *)PTR_sendto_0002ae5c)(*puVar1,uVar2,local_1c[0],0,&local_30,0x10);
  if (-1 < iVar4) {
    (*(code *)PTR_lua_pushinteger_0002adcc)(param_1);
    return 1;
  }
  (*(code *)PTR___errno_location_0002ae04)();
  (*(code *)PTR_lua_pushnil_0002aeac)(param_1);
  (*(code *)PTR_lua_pushinteger_0002adcc)(param_1);
  return 2;
}



// ==== FUN_00012b70 @ 00012b70 size=432

undefined4 FUN_00012b70(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_1048 [4112];
  undefined1 auStack_38 [2];
  undefined2 local_36;
  undefined4 local_34;
  undefined4 local_28;
  undefined2 local_24;
  undefined4 local_20 [3];
  
  puVar1 = (undefined4 *)(*(code *)PTR_luaL_checkudata_0002ae0c)(param_1,1,PTR_0002ad78 + 0x7e50);
  iVar2 = (*(code *)PTR_luaL_checkinteger_0002ae28)(param_1,2);
  if (iVar2 < 1) {
    (*(code *)PTR_luaL_argerror_0002ae34)(param_1,2,PTR_0002ad78 + 0x7f34);
  }
  uVar3 = (*(code *)PTR_luaL_buffinitsize_0002adf8)(param_1,auStack_1048,iVar2);
  local_20[0] = 0x10;
  iVar2 = (*(code *)PTR_recvfrom_0002aec0)(*puVar1,uVar3,iVar2,0,auStack_38,local_20);
  if (-1 < iVar2) {
    (*(code *)PTR_luaL_pushresultsize_0002ae4c)(auStack_1048,iVar2);
    local_28 = local_34;
    local_24 = local_36;
    (*(code *)PTR_lua_pushlstring_0002aeb8)(param_1,&local_28,6);
    return 2;
  }
  (*(code *)PTR___errno_location_0002ae04)();
  (*(code *)PTR_luaL_pushresultsize_0002ae4c)(auStack_1048,0);
  (*(code *)PTR_lua_settop_0002aea4)(param_1,0xfffffffe);
  (*(code *)PTR_lua_pushnil_0002aeac)(param_1);
  (*(code *)PTR_lua_pushinteger_0002adcc)(param_1);
  return 2;
}



// ==== FUN_00013174 @ 00013174 size=296

undefined4 FUN_00013174(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [12];
  undefined4 local_18 [3];
  
  puVar1 = (undefined4 *)(*(code *)PTR_luaL_checkudata_0002ae0c)(param_1,1,PTR_0002ad78 + 0x7e50);
  local_18[0] = 0x10;
  iVar2 = (*(code *)PTR_getsockname_0002add0)(*puVar1,auStack_28,local_18);
  if (iVar2 != -1) {
    (*(code *)PTR_inet_ntop_0002adfc)(2,auStack_24,auStack_38,0x10);
    (*(code *)PTR_lua_pushstring_0002ae38)(param_1,auStack_38);
    (*(code *)PTR_lua_pushinteger_0002adcc)(param_1);
    return 2;
  }
  (*(code *)PTR___errno_location_0002ae04)();
  (*(code *)PTR_lua_pushnil_0002aeac)(param_1);
  (*(code *)PTR_lua_pushinteger_0002adcc)(param_1);
  return 2;
}



// ==== FUN_0001329c @ 0001329c size=296

undefined4 FUN_0001329c(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [12];
  undefined4 local_18 [3];
  
  puVar1 = (undefined4 *)(*(code *)PTR_luaL_checkudata_0002ae0c)(param_1,1,PTR_0002ad78 + 0x7e50);
  local_18[0] = 0x10;
  iVar2 = (*(code *)PTR_getpeername_0002ae2c)(*puVar1,auStack_28,local_18);
  if (iVar2 != -1) {
    (*(code *)PTR_inet_ntop_0002adfc)(2,auStack_24,auStack_38,0x10);
    (*(code *)PTR_lua_pushstring_0002ae38)(param_1,auStack_38);
    (*(code *)PTR_lua_pushinteger_0002adcc)(param_1);
    return 2;
  }
  (*(code *)PTR___errno_location_0002ae04)();
  (*(code *)PTR_lua_pushnil_0002aeac)(param_1);
  (*(code *)PTR_lua_pushinteger_0002adcc)(param_1);
  return 2;
}



// ==== FUN_000133c4 @ 000133c4 size=204

undefined4 FUN_000133c4(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(code *)PTR_luaL_checkudata_0002ae0c)(param_1,1,PTR_0002ad78 + 0x7e50);
  iVar2 = (*(code *)PTR_fdatasync_0002ae88)(*puVar1);
  if (iVar2 != 0) {
    (*(code *)PTR___errno_location_0002ae04)();
    (*(code *)PTR_lua_pushboolean_0002ae94)(param_1,0);
    (*(code *)PTR_lua_pushinteger_0002adcc)(param_1);
    return 2;
  }
  (*(code *)PTR_lua_pushboolean_0002ae94)(param_1,1);
  return 1;
}



// ==== FUN_00013490 @ 00013490 size=204

undefined4 FUN_00013490(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(code *)PTR_luaL_checkudata_0002ae0c)(param_1,1,PTR_0002ad78 + 0x7e50);
  iVar2 = (*(code *)PTR_fsync_0002ae20)(*puVar1);
  if (iVar2 != 0) {
    (*(code *)PTR___errno_location_0002ae04)();
    (*(code *)PTR_lua_pushboolean_0002ae94)(param_1,0);
    (*(code *)PTR_lua_pushinteger_0002adcc)(param_1);
    return 2;
  }
  (*(code *)PTR_lua_pushboolean_0002ae94)(param_1,1);
  return 1;
}



// ==== FUN_0001355c @ 0001355c size=272

undefined4 FUN_0001355c(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_18 [3];
  
  puVar1 = (undefined4 *)(*(code *)PTR_luaL_checkudata_0002ae0c)(param_1,1,PTR_0002ad78 + 0x7e50);
  uVar2 = (*(code *)PTR_luaL_checklstring_0002aec8)(param_1,2,local_18);
  iVar3 = (*(code *)PTR_write_0002ae8c)(*puVar1,uVar2,local_18[0]);
  if (iVar3 != -1) {
    (*(code *)PTR_lua_pushinteger_0002adcc)(param_1);
    return 1;
  }
  piVar4 = (int *)(*(code *)PTR___errno_location_0002ae04)();
  if (*piVar4 != 0xb) {
    (*(code *)PTR_lua_pushnil_0002aeac)(param_1);
    return 1;
  }
  (*(code *)PTR_lua_pushinteger_0002adcc)(param_1);
  return 1;
}



// ==== FUN_0001366c @ 0001366c size=140

undefined8 FUN_0001366c(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int local_10;
  int local_c;
  
  iVar2 = (*(code *)PTR_clock_gettime_0002aeec)(4,&local_10);
  if (iVar2 == 0) {
    uVar1 = (uint)((longlong)local_10 * 1000);
    uVar3 = uVar1 + local_c / 1000000;
    iVar2 = (uint)(uVar3 < uVar1) +
            (int)((ulonglong)((longlong)local_10 * 1000) >> 0x20) + (local_c / 1000000 >> 0x1f);
  }
  else {
    uVar3 = 0xffffffff;
    iVar2 = -1;
  }
  return CONCAT44(iVar2,uVar3);
}



// ==== FUN_00013830 @ 00013830 size=304

undefined4 FUN_00013830(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_1030 [4112];
  int local_20;
  uint local_1c [2];
  
  iVar1 = (*(code *)PTR_luaL_checklstring_0002aec8)(param_1,1,local_1c);
  iVar2 = (*(code *)PTR_luaL_buffinitsize_0002adf8)
                    (param_1,auStack_1030,((local_1c[0] & 3) * 3 >> 2) + (local_1c[0] >> 2) * 3);
  local_20 = iVar2;
  iVar3 = (*(code *)PTR_FUN_0002ad84)(&local_20,iVar1);
  if (iVar3 != iVar1 + local_1c[0]) {
    (*(code *)PTR_luaL_pushresultsize_0002ae4c)(auStack_1030,0);
    (*(code *)PTR_lua_settop_0002aea4)(param_1,0xfffffffe);
    (*(code *)PTR_lua_pushnil_0002aeac)(param_1);
    return 1;
  }
  (*(code *)PTR_luaL_pushresultsize_0002ae4c)(auStack_1030,local_20 - iVar2);
  return 1;
}



// ==== FUN_00013960 @ 00013960 size=184

undefined4 FUN_00013960(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_1028 [4112];
  int local_18 [3];
  
  uVar1 = (*(code *)PTR_luaL_checklstring_0002aec8)(param_1,1,local_18);
  uVar2 = (*(code *)PTR_luaL_buffinitsize_0002adf8)
                    (param_1,auStack_1028,((local_18[0] + 2U) / 3) * 4 + 1);
  uVar1 = (*(code *)PTR_FUN_0002ad88)(uVar2,uVar1,local_18[0]);
  (*(code *)PTR_luaL_pushresultsize_0002ae4c)(auStack_1028,uVar1);
  return 1;
}



// ==== FUN_00013aa0 @ 00013aa0 size=236

undefined4 FUN_00013aa0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint local_18 [3];
  
  uVar1 = (*(code *)PTR_luaL_checklstring_0002aec8)(param_1,1,local_18);
  if (((local_18[0] & 0xfffffff7) != 0x10) && (local_18[0] != 0x20)) {
    (*(code *)PTR_luaL_argerror_0002ae34)(param_1,1,PTR_DAT_0002ad7c + -0x7f50);
  }
  uVar2 = (*(code *)PTR_lua_newuserdata_0002ae60)(param_1,*(undefined4 *)PTR_DAT_0002ad8c);
  (*(code *)PTR_FUN_0002ad90)(uVar2,uVar1,local_18[0]);
  (*(code *)PTR_lua_getfield_0002aed8)(param_1,0xfff0b9d8,PTR_DAT_0002ad7c + -0x7f20);
  (*(code *)PTR_lua_setmetatable_0002ae74)(param_1,0xfffffffe);
  return 1;
}



// ==== FUN_00013b8c @ 00013b8c size=88

undefined4 FUN_00013b8c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_luaL_checkudata_0002ae0c)(param_1,1,PTR_DAT_0002ad7c + -0x7f20);
  (*(code *)PTR_memset_0002ae48)(uVar1,0,*(undefined4 *)PTR_DAT_0002ad8c);
  return 0;
}



// ==== FUN_00013be4 @ 00013be4 size=212

undefined4 FUN_00013be4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [16];
  int local_18 [2];
  
  uVar1 = (*(code *)PTR_luaL_checkudata_0002ae0c)(param_1,1,PTR_DAT_0002ad7c + -0x7f20);
  uVar2 = (*(code *)PTR_luaL_checklstring_0002aec8)(param_1,2,local_18);
  if (local_18[0] != 0x10) {
    (*(code *)PTR_luaL_argerror_0002ae34)(param_1,2,PTR_DAT_0002ad7c + -0x7f14);
  }
  (*(code *)PTR_FUN_0002ad94)(uVar1,uVar2,auStack_28);
  (*(code *)PTR_lua_pushlstring_0002aeb8)(param_1,auStack_28,0x10);
  return 1;
}



// ==== FUN_00013cb8 @ 00013cb8 size=212

undefined4 FUN_00013cb8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [16];
  int local_18 [2];
  
  uVar1 = (*(code *)PTR_luaL_checkudata_0002ae0c)(param_1,1,PTR_DAT_0002ad7c + -0x7f20);
  uVar2 = (*(code *)PTR_luaL_checklstring_0002aec8)(param_1,2,local_18);
  if (local_18[0] != 0x10) {
    (*(code *)PTR_luaL_argerror_0002ae34)(param_1,2,PTR_DAT_0002ad7c + -0x7f14);
  }
  (*(code *)PTR_FUN_0002ad98)(uVar1,uVar2,auStack_28);
  (*(code *)PTR_lua_pushlstring_0002aeb8)(param_1,auStack_28,0x10);
  return 1;
}



// ==== FUN_00013e80 @ 00013e80 size=152

undefined4 FUN_00013e80(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (((param_3 & 0xfffffff7) == 0x10) || (uVar1 = 0xffffffff, param_3 == 0x20)) {
    uVar1 = (*(code *)PTR_FUN_0002ad9c)(param_1,param_2,param_3 << 3);
    *(undefined4 *)(param_1 + 0x1e0) = uVar1;
    (*(code *)PTR_FUN_0002ada0)(param_1 + 0xf0,param_2,param_3 << 3);
    uVar1 = 0;
  }
  return uVar1;
}



// ==== FUN_00013f18 @ 00013f18 size=40

void FUN_00013f18(int param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_FUN_0002ada4)(param_1,*(undefined4 *)(param_1 + 0x1e0),param_2,param_3);
  return;
}



// ==== FUN_00013f40 @ 00013f40 size=44

void FUN_00013f40(int param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_FUN_0002ada8)(param_1 + 0xf0,*(undefined4 *)(param_1 + 0x1e0),param_2,param_3);
  return;
}



// ==== FUN_00013f70 @ 00013f70 size=1228

undefined4 FUN_00013f70(uint *param_1,byte *param_2,int param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  
  uVar2 = (uint)*param_2 << 0x18 ^ (uint)param_2[1] << 0x10 ^ (uint)param_2[3] ^
          (uint)param_2[2] << 8;
  *param_1 = uVar2;
  uVar5 = (uint)param_2[4] << 0x18 ^ (uint)param_2[5] << 0x10 ^ (uint)param_2[7] ^
          (uint)param_2[6] << 8;
  param_1[1] = uVar5;
  uVar6 = (uint)param_2[8] << 0x18 ^ (uint)param_2[9] << 0x10 ^ (uint)param_2[0xb] ^
          (uint)param_2[10] << 8;
  param_1[2] = uVar6;
  uVar11 = (uint)param_2[0xc] << 0x18 ^ (uint)param_2[0xd] << 0x10 ^ (uint)param_2[0xf] ^
           (uint)param_2[0xe] << 8;
  param_1[3] = uVar11;
  puVar1 = PTR_DAT_0002ad7c;
  if (param_3 == 0x80) {
    iVar9 = 10;
    puVar10 = (uint *)(PTR_DAT_0002ad7c + -0x7ed0);
    puVar3 = param_1 + 7;
    puVar8 = param_1 + 6;
    puVar4 = param_1 + 5;
    while( true ) {
      param_1 = param_1 + 4;
      uVar7 = *puVar10;
      iVar9 = iVar9 + -1;
      puVar10 = puVar10 + 1;
      uVar2 = *(uint *)(puVar1 + (uVar11 & 0xff) * 4 + -0x6aa8) & 0xff00 ^
              (uint)(byte)puVar1[(uVar11 >> 0x18) * 4 + -0x6aa8] ^ uVar7 ^
              *(uint *)(puVar1 + ((uVar11 >> 0xe & 0x3fc) - 0x6aa8)) & 0xff000000 ^
              *(uint *)(puVar1 + ((uVar11 >> 6 & 0x3fc) - 0x6aa8)) & 0xff0000 ^ uVar2;
      uVar5 = uVar5 ^ uVar2;
      *param_1 = uVar2;
      uVar6 = uVar6 ^ uVar5;
      *puVar4 = uVar5;
      uVar11 = uVar11 ^ uVar6;
      *puVar8 = uVar6;
      *puVar3 = uVar11;
      if (iVar9 == 0) break;
      uVar5 = *puVar4;
      uVar2 = *param_1;
      uVar6 = *puVar8;
      puVar3 = puVar3 + 4;
      puVar8 = puVar8 + 4;
      puVar4 = puVar4 + 4;
    }
    return 10;
  }
  param_1[4] = (uint)param_2[0x10] << 0x18 ^ (uint)param_2[0x11] << 0x10 ^ (uint)param_2[0x13] ^
               (uint)param_2[0x12] << 8;
  uVar7 = (uint)param_2[0x14] << 0x18 ^ (uint)param_2[0x15] << 0x10 ^ (uint)param_2[0x17] ^
          (uint)param_2[0x16] << 8;
  param_1[5] = uVar7;
  puVar1 = PTR_DAT_0002ad7c;
  if (param_3 != 0xc0) {
    param_1[6] = (uint)param_2[0x18] << 0x18 ^ (uint)param_2[0x19] << 0x10 ^ (uint)param_2[0x1b] ^
                 (uint)param_2[0x1a] << 8;
    uVar7 = (uint)param_2[0x1c] << 0x18 ^ (uint)param_2[0x1d] << 0x10 ^ (uint)param_2[0x1f] ^
            (uint)param_2[0x1e] << 8;
    param_1[7] = uVar7;
    puVar1 = PTR_DAT_0002ad7c;
    if (param_3 != 0x100) {
      return 0;
    }
    puVar8 = (uint *)(PTR_DAT_0002ad7c + -0x7ed0);
    puVar3 = param_1;
    while( true ) {
      uVar12 = *puVar8;
      puVar8 = puVar8 + 1;
      uVar2 = *(uint *)(puVar1 + (uVar7 & 0xff) * 4 + -0x6aa8) & 0xff00 ^
              (uint)(byte)puVar1[(uVar7 >> 0x18) * 4 + -0x6aa8] ^ uVar12 ^
              *(uint *)(puVar1 + ((uVar7 >> 0xe & 0x3fc) - 0x6aa8)) & 0xff000000 ^
              *(uint *)(puVar1 + ((uVar7 >> 6 & 0x3fc) - 0x6aa8)) & 0xff0000 ^ uVar2;
      uVar5 = uVar5 ^ uVar2;
      puVar3[8] = uVar2;
      uVar6 = uVar6 ^ uVar5;
      puVar3[9] = uVar5;
      uVar11 = uVar11 ^ uVar6;
      puVar3[10] = uVar6;
      puVar3[0xb] = uVar11;
      if (puVar3 == param_1 + 0x30) break;
      uVar5 = *(uint *)(puVar1 + (uVar11 >> 0x18) * 4 + -0x6aa8) & 0xff000000 ^
              (uint)(byte)puVar1[(uVar11 & 0xff) * 4 + -0x6aa8] ^ puVar3[4] ^
              *(uint *)(puVar1 + ((uVar11 >> 0xe & 0x3fc) - 0x6aa8)) & 0xff0000 ^
              *(uint *)(puVar1 + ((uVar11 >> 6 & 0x3fc) - 0x6aa8)) & 0xff00;
      uVar6 = puVar3[10];
      uVar2 = uVar5 ^ puVar3[5];
      puVar3[0xc] = uVar5;
      uVar5 = uVar2 ^ puVar3[6];
      puVar3[0xd] = uVar2;
      uVar7 = uVar5 ^ uVar7;
      puVar3[0xe] = uVar5;
      uVar2 = puVar3[8];
      uVar5 = puVar3[9];
      uVar11 = puVar3[0xb];
      puVar3[0xf] = uVar7;
      puVar3 = puVar3 + 8;
    }
    return 0xe;
  }
  puVar8 = (uint *)(PTR_DAT_0002ad7c + -0x7ed0);
  puVar3 = param_1;
  while( true ) {
    uVar12 = *puVar8;
    puVar8 = puVar8 + 1;
    uVar2 = *(uint *)(puVar1 + (uVar7 & 0xff) * 4 + -0x6aa8) & 0xff00 ^
            (uint)(byte)puVar1[(uVar7 >> 0x18) * 4 + -0x6aa8] ^ uVar12 ^
            *(uint *)(puVar1 + ((uVar7 >> 0xe & 0x3fc) - 0x6aa8)) & 0xff000000 ^
            *(uint *)(puVar1 + ((uVar7 >> 6 & 0x3fc) - 0x6aa8)) & 0xff0000 ^ uVar2;
    uVar5 = uVar5 ^ uVar2;
    puVar3[6] = uVar2;
    uVar6 = uVar6 ^ uVar5;
    puVar3[7] = uVar5;
    uVar11 = uVar11 ^ uVar6;
    puVar3[8] = uVar6;
    puVar3[9] = uVar11;
    if (puVar3 == param_1 + 0x2a) break;
    uVar11 = uVar11 ^ puVar3[4];
    uVar5 = puVar3[7];
    uVar7 = uVar11 ^ uVar7;
    puVar3[10] = uVar11;
    uVar2 = puVar3[6];
    uVar6 = puVar3[8];
    uVar11 = puVar3[9];
    puVar3[0xb] = uVar7;
    puVar3 = puVar3 + 6;
  }
  return 0xc;
}



// ==== FUN_0001443c @ 0001443c size=832

void FUN_0001443c(uint *param_1)

{
  undefined *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  
  iVar2 = (*(code *)PTR_FUN_0002ad9c)();
  if (0 < iVar2 * 4) {
    iVar4 = 0;
    puVar3 = param_1;
    puVar17 = param_1 + iVar2 * 4;
    do {
      uVar7 = *puVar3;
      iVar4 = iVar4 + 4;
      *puVar3 = *puVar17;
      *puVar17 = uVar7;
      uVar7 = puVar3[1];
      puVar3[1] = puVar17[1];
      puVar17[1] = uVar7;
      uVar7 = puVar3[2];
      puVar3[2] = puVar17[2];
      puVar17[2] = uVar7;
      uVar7 = puVar3[3];
      puVar3[3] = puVar17[3];
      puVar17[3] = uVar7;
      puVar3 = puVar3 + 4;
      puVar17 = puVar17 + -4;
    } while (iVar4 < iVar2 * 4 - iVar4);
  }
  puVar1 = PTR_DAT_0002ad7c;
  if (1 < iVar2) {
    iVar4 = 1;
    do {
      puVar3 = param_1 + 4;
      iVar4 = iVar4 + 1;
      uVar8 = *puVar3;
      uVar6 = param_1[5];
      uVar5 = param_1[6];
      uVar7 = param_1[7];
      uVar12 = *(uint *)(puVar1 + (uint)(byte)puVar1[(uVar6 & 0xff) * 4 + -0x6aa8] * 4 + -0x7aa8);
      uVar11 = *(uint *)(puVar1 + (uint)(byte)puVar1[(uVar6 >> 0x18) * 4 + -0x6aa8] * 4 + -0x6ea8);
      uVar18 = *(uint *)(puVar1 + (uint)(byte)puVar1[(uVar5 & 0xff) * 4 + -0x6aa8] * 4 + -0x7aa8);
      uVar10 = *(uint *)(puVar1 + (uint)(byte)puVar1[(uVar5 >> 0x18) * 4 + -0x6aa8] * 4 + -0x6ea8);
      uVar9 = *(uint *)(puVar1 + (uint)(byte)puVar1[(uVar7 & 0xff) * 4 + -0x6aa8] * 4 + -0x7aa8);
      uVar15 = *(uint *)(puVar1 + (uint)(byte)puVar1[(uVar7 >> 0x18) * 4 + -0x6aa8] * 4 + -0x6ea8);
      uVar14 = *(uint *)(puVar1 + (uint)(byte)puVar1[(uVar6 >> 0xe & 0x3fc) - 0x6aa8] * 4 + -0x72a8)
      ;
      uVar16 = *(uint *)(puVar1 + (uint)(byte)puVar1[(uVar5 >> 0xe & 0x3fc) - 0x6aa8] * 4 + -0x72a8)
      ;
      uVar13 = *(uint *)(puVar1 + (uint)(byte)puVar1[(uVar7 >> 0xe & 0x3fc) - 0x6aa8] * 4 + -0x72a8)
      ;
      uVar6 = *(uint *)(puVar1 + (uint)(byte)puVar1[(uVar6 >> 6 & 0x3fc) - 0x6aa8] * 4 + -0x76a8);
      uVar5 = *(uint *)(puVar1 + (uint)(byte)puVar1[(uVar5 >> 6 & 0x3fc) - 0x6aa8] * 4 + -0x76a8);
      uVar7 = *(uint *)(puVar1 + (uint)(byte)puVar1[(uVar7 >> 6 & 0x3fc) - 0x6aa8] * 4 + -0x76a8);
      *puVar3 = *(uint *)(puVar1 + (uint)(byte)puVar1[(uVar8 & 0xff) * 4 + -0x6aa8] * 4 + -0x7aa8) ^
                *(uint *)(puVar1 + (uint)(byte)puVar1[(uVar8 >> 0x18) * 4 + -0x6aa8] * 4 + -0x6ea8)
                ^ *(uint *)(puVar1 + (uint)(byte)puVar1[(uVar8 >> 0xe & 0x3fc) - 0x6aa8] * 4 +
                                     -0x72a8) ^
                *(uint *)(puVar1 + (uint)(byte)puVar1[(uVar8 >> 6 & 0x3fc) - 0x6aa8] * 4 + -0x76a8);
      param_1[5] = uVar12 ^ uVar11 ^ uVar14 ^ uVar6;
      param_1[6] = uVar18 ^ uVar10 ^ uVar16 ^ uVar5;
      param_1[7] = uVar9 ^ uVar15 ^ uVar13 ^ uVar7;
      param_1 = puVar3;
    } while (iVar4 != iVar2);
  }
  return;
}



// ==== FUN_0001477c @ 0001477c size=1628

void FUN_0001477c(uint *param_1,int param_2,byte *param_3,undefined1 *param_4)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  int local_30;
  
  puVar2 = PTR_DAT_0002ad7c;
  uVar6 = (uint)param_3[3] ^ *param_1 ^ (uint)*param_3 << 0x18 ^ (uint)param_3[1] << 0x10 ^
          (uint)param_3[2] << 8;
  uVar5 = (uint)param_3[7] ^ param_1[1] ^ (uint)param_3[4] << 0x18 ^ (uint)param_3[5] << 0x10 ^
          (uint)param_3[6] << 8;
  uVar4 = (uint)param_3[0xb] ^ param_1[2] ^ (uint)param_3[8] << 0x18 ^ (uint)param_3[9] << 0x10 ^
          (uint)param_3[10] << 8;
  uVar3 = (uint)param_3[0xf] ^ param_1[3] ^ (uint)param_3[0xc] << 0x18 ^ (uint)param_3[0xd] << 0x10
          ^ (uint)param_3[0xe] << 8;
  puVar14 = param_1;
  local_30 = param_2 >> 1;
  while( true ) {
    local_30 = local_30 + -1;
    uVar7 = *(uint *)(PTR_DAT_0002ad7c + (uVar3 >> 0x18) * 4 + -0x5aa8) ^
            *(uint *)(PTR_DAT_0002ad7c + (uVar4 & 0xff) * 4 + -0x66a8) ^ puVar14[7] ^
            *(uint *)(PTR_DAT_0002ad7c + ((uVar6 >> 0xe & 0x3fc) - 0x5ea8)) ^
            *(uint *)(PTR_DAT_0002ad7c + ((uVar5 >> 6 & 0x3fc) - 0x62a8));
    uVar12 = *(uint *)(PTR_DAT_0002ad7c + (uVar6 >> 0x18) * 4 + -0x5aa8) ^
             *(uint *)(PTR_DAT_0002ad7c + (uVar3 & 0xff) * 4 + -0x66a8) ^ puVar14[4] ^
             *(uint *)(PTR_DAT_0002ad7c + ((uVar5 >> 0xe & 0x3fc) - 0x5ea8)) ^
             *(uint *)(PTR_DAT_0002ad7c + ((uVar4 >> 6 & 0x3fc) - 0x62a8));
    uVar13 = *(uint *)(PTR_DAT_0002ad7c + (uVar5 >> 0x18) * 4 + -0x5aa8) ^
             *(uint *)(PTR_DAT_0002ad7c + (uVar6 & 0xff) * 4 + -0x66a8) ^ puVar14[5] ^
             *(uint *)(PTR_DAT_0002ad7c + ((uVar4 >> 0xe & 0x3fc) - 0x5ea8)) ^
             *(uint *)(PTR_DAT_0002ad7c + ((uVar3 >> 6 & 0x3fc) - 0x62a8));
    uVar3 = *(uint *)(PTR_DAT_0002ad7c + (uVar4 >> 0x18) * 4 + -0x5aa8) ^
            *(uint *)(PTR_DAT_0002ad7c + (uVar5 & 0xff) * 4 + -0x66a8) ^ puVar14[6] ^
            *(uint *)(PTR_DAT_0002ad7c + ((uVar3 >> 0xe & 0x3fc) - 0x5ea8)) ^
            *(uint *)(PTR_DAT_0002ad7c + ((uVar6 >> 6 & 0x3fc) - 0x62a8));
    if (local_30 == 0) break;
    uVar6 = *(uint *)(PTR_DAT_0002ad7c + (uVar12 >> 0x18) * 4 + -0x5aa8) ^
            *(uint *)(PTR_DAT_0002ad7c + (uVar7 & 0xff) * 4 + -0x66a8) ^ puVar14[8] ^
            *(uint *)(PTR_DAT_0002ad7c + ((uVar13 >> 0xe & 0x3fc) - 0x5ea8)) ^
            *(uint *)(PTR_DAT_0002ad7c + ((uVar3 >> 6 & 0x3fc) - 0x62a8));
    uVar5 = *(uint *)(PTR_DAT_0002ad7c + (uVar13 >> 0x18) * 4 + -0x5aa8) ^
            *(uint *)(PTR_DAT_0002ad7c + (uVar12 & 0xff) * 4 + -0x66a8) ^ puVar14[9] ^
            *(uint *)(PTR_DAT_0002ad7c + ((uVar3 >> 0xe & 0x3fc) - 0x5ea8)) ^
            *(uint *)(PTR_DAT_0002ad7c + ((uVar7 >> 6 & 0x3fc) - 0x62a8));
    uVar4 = *(uint *)(PTR_DAT_0002ad7c + (uVar3 >> 0x18) * 4 + -0x5aa8) ^
            *(uint *)(PTR_DAT_0002ad7c + (uVar13 & 0xff) * 4 + -0x66a8) ^ puVar14[10] ^
            *(uint *)(PTR_DAT_0002ad7c + ((uVar7 >> 0xe & 0x3fc) - 0x5ea8)) ^
            *(uint *)(PTR_DAT_0002ad7c + ((uVar12 >> 6 & 0x3fc) - 0x62a8));
    uVar3 = *(uint *)(PTR_DAT_0002ad7c + (uVar7 >> 0x18) * 4 + -0x5aa8) ^
            *(uint *)(PTR_DAT_0002ad7c + (uVar3 & 0xff) * 4 + -0x66a8) ^ puVar14[0xb] ^
            *(uint *)(PTR_DAT_0002ad7c + ((uVar12 >> 0xe & 0x3fc) - 0x5ea8)) ^
            *(uint *)(PTR_DAT_0002ad7c + ((uVar13 >> 6 & 0x3fc) - 0x62a8));
    puVar14 = puVar14 + 8;
  }
  param_1 = param_1 + (param_2 >> 1) * 8;
  uVar5 = *param_1;
  uVar9 = *(undefined4 *)(PTR_DAT_0002ad7c + ((uVar13 >> 0xe & 0x3fc) - 0x6aa8));
  uVar8 = *(undefined4 *)(PTR_DAT_0002ad7c + ((uVar3 >> 6 & 0x3fc) - 0x6aa8));
  uVar4 = *(uint *)(PTR_DAT_0002ad7c + (uVar12 >> 0x18) * 4 + -0x6aa8) & 0xff000000 ^
          (uint)(byte)PTR_DAT_0002ad7c[(uVar7 & 0xff) * 4 + -0x6aa8] ^ uVar5;
  uVar6 = *(uint *)(PTR_DAT_0002ad7c + (uVar13 >> 0x18) * 4 + -0x6aa8);
  pbVar10 = PTR_DAT_0002ad7c + (uVar12 & 0xff) * 4 + -0x6aa8;
  param_4[3] = (char)uVar4;
  *param_4 = (char)(uVar4 >> 0x18);
  bVar1 = *pbVar10;
  param_4[1] = (byte)(uVar5 >> 0x10) ^ (byte)((uint)uVar9 >> 0x10);
  param_4[2] = (byte)(uVar5 >> 8) ^ (byte)((uint)uVar8 >> 8);
  uVar5 = param_1[1];
  uVar9 = *(undefined4 *)(puVar2 + ((uVar3 >> 0xe & 0x3fc) - 0x6aa8));
  uVar8 = *(undefined4 *)(puVar2 + ((uVar7 >> 6 & 0x3fc) - 0x6aa8));
  uVar4 = uVar6 & 0xff000000 ^ (uint)bVar1 ^ uVar5;
  uVar11 = *(uint *)(puVar2 + (uVar3 >> 0x18) * 4 + -0x6aa8);
  param_4[7] = (char)uVar4;
  param_4[4] = (char)(uVar4 >> 0x18);
  bVar1 = puVar2[(uVar13 & 0xff) * 4 + -0x6aa8];
  param_4[6] = (byte)(uVar5 >> 8) ^ (byte)((uint)uVar8 >> 8);
  param_4[5] = (byte)(uVar5 >> 0x10) ^ (byte)((uint)uVar9 >> 0x10);
  uVar6 = param_1[2];
  uVar9 = *(undefined4 *)(puVar2 + ((uVar7 >> 0xe & 0x3fc) - 0x6aa8));
  uVar8 = *(undefined4 *)(puVar2 + ((uVar12 >> 6 & 0x3fc) - 0x6aa8));
  uVar4 = uVar11 & 0xff000000 ^ (uint)bVar1 ^ uVar6;
  uVar5 = *(uint *)(puVar2 + (uVar7 >> 0x18) * 4 + -0x6aa8);
  param_4[0xb] = (char)uVar4;
  bVar1 = puVar2[(uVar3 & 0xff) * 4 + -0x6aa8];
  param_4[8] = (char)(uVar4 >> 0x18);
  param_4[9] = (byte)(uVar6 >> 0x10) ^ (byte)((uint)uVar9 >> 0x10);
  param_4[10] = (byte)(uVar6 >> 8) ^ (byte)((uint)uVar8 >> 8);
  uVar3 = param_1[3];
  uVar9 = *(undefined4 *)(puVar2 + ((uVar12 >> 0xe & 0x3fc) - 0x6aa8));
  uVar8 = *(undefined4 *)(puVar2 + ((uVar13 >> 6 & 0x3fc) - 0x6aa8));
  uVar4 = uVar5 & 0xff000000 ^ (uint)bVar1 ^ uVar3;
  param_4[0xc] = (char)(uVar4 >> 0x18);
  param_4[0xd] = (byte)(uVar3 >> 0x10) ^ (byte)((uint)uVar9 >> 0x10);
  param_4[0xe] = (byte)(uVar3 >> 8) ^ (byte)((uint)uVar8 >> 8);
  param_4[0xf] = (char)uVar4;
  return;
}



// ==== FUN_00014dd8 @ 00014dd8 size=1628

void FUN_00014dd8(uint *param_1,int param_2,byte *param_3,undefined1 *param_4)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  int local_30;
  
  puVar2 = PTR_DAT_0002ad7c;
  uVar6 = (uint)param_3[3] ^ *param_1 ^ (uint)*param_3 << 0x18 ^ (uint)param_3[1] << 0x10 ^
          (uint)param_3[2] << 8;
  uVar5 = (uint)param_3[7] ^ param_1[1] ^ (uint)param_3[4] << 0x18 ^ (uint)param_3[5] << 0x10 ^
          (uint)param_3[6] << 8;
  uVar4 = (uint)param_3[0xb] ^ param_1[2] ^ (uint)param_3[8] << 0x18 ^ (uint)param_3[9] << 0x10 ^
          (uint)param_3[10] << 8;
  uVar3 = (uint)param_3[0xf] ^ param_1[3] ^ (uint)param_3[0xc] << 0x18 ^ (uint)param_3[0xd] << 0x10
          ^ (uint)param_3[0xe] << 8;
  puVar14 = param_1;
  local_30 = param_2 >> 1;
  while( true ) {
    local_30 = local_30 + -1;
    uVar7 = *(uint *)(PTR_DAT_0002ad7c + (uVar3 >> 0x18) * 4 + -0x6ea8) ^
            *(uint *)(PTR_DAT_0002ad7c + (uVar6 & 0xff) * 4 + -0x7aa8) ^ puVar14[7] ^
            *(uint *)(PTR_DAT_0002ad7c + ((uVar4 >> 0xe & 0x3fc) - 0x72a8)) ^
            *(uint *)(PTR_DAT_0002ad7c + ((uVar5 >> 6 & 0x3fc) - 0x76a8));
    uVar12 = *(uint *)(PTR_DAT_0002ad7c + (uVar6 >> 0x18) * 4 + -0x6ea8) ^
             *(uint *)(PTR_DAT_0002ad7c + (uVar5 & 0xff) * 4 + -0x7aa8) ^ puVar14[4] ^
             *(uint *)(PTR_DAT_0002ad7c + ((uVar3 >> 0xe & 0x3fc) - 0x72a8)) ^
             *(uint *)(PTR_DAT_0002ad7c + ((uVar4 >> 6 & 0x3fc) - 0x76a8));
    uVar13 = *(uint *)(PTR_DAT_0002ad7c + (uVar5 >> 0x18) * 4 + -0x6ea8) ^
             *(uint *)(PTR_DAT_0002ad7c + (uVar4 & 0xff) * 4 + -0x7aa8) ^ puVar14[5] ^
             *(uint *)(PTR_DAT_0002ad7c + ((uVar6 >> 0xe & 0x3fc) - 0x72a8)) ^
             *(uint *)(PTR_DAT_0002ad7c + ((uVar3 >> 6 & 0x3fc) - 0x76a8));
    uVar3 = *(uint *)(PTR_DAT_0002ad7c + (uVar4 >> 0x18) * 4 + -0x6ea8) ^
            *(uint *)(PTR_DAT_0002ad7c + (uVar3 & 0xff) * 4 + -0x7aa8) ^ puVar14[6] ^
            *(uint *)(PTR_DAT_0002ad7c + ((uVar5 >> 0xe & 0x3fc) - 0x72a8)) ^
            *(uint *)(PTR_DAT_0002ad7c + ((uVar6 >> 6 & 0x3fc) - 0x76a8));
    if (local_30 == 0) break;
    uVar6 = *(uint *)(PTR_DAT_0002ad7c + (uVar12 >> 0x18) * 4 + -0x6ea8) ^
            *(uint *)(PTR_DAT_0002ad7c + (uVar13 & 0xff) * 4 + -0x7aa8) ^ puVar14[8] ^
            *(uint *)(PTR_DAT_0002ad7c + ((uVar7 >> 0xe & 0x3fc) - 0x72a8)) ^
            *(uint *)(PTR_DAT_0002ad7c + ((uVar3 >> 6 & 0x3fc) - 0x76a8));
    uVar5 = *(uint *)(PTR_DAT_0002ad7c + (uVar13 >> 0x18) * 4 + -0x6ea8) ^
            *(uint *)(PTR_DAT_0002ad7c + (uVar3 & 0xff) * 4 + -0x7aa8) ^ puVar14[9] ^
            *(uint *)(PTR_DAT_0002ad7c + ((uVar12 >> 0xe & 0x3fc) - 0x72a8)) ^
            *(uint *)(PTR_DAT_0002ad7c + ((uVar7 >> 6 & 0x3fc) - 0x76a8));
    uVar4 = *(uint *)(PTR_DAT_0002ad7c + (uVar3 >> 0x18) * 4 + -0x6ea8) ^
            *(uint *)(PTR_DAT_0002ad7c + (uVar7 & 0xff) * 4 + -0x7aa8) ^ puVar14[10] ^
            *(uint *)(PTR_DAT_0002ad7c + ((uVar13 >> 0xe & 0x3fc) - 0x72a8)) ^
            *(uint *)(PTR_DAT_0002ad7c + ((uVar12 >> 6 & 0x3fc) - 0x76a8));
    uVar3 = *(uint *)(PTR_DAT_0002ad7c + (uVar7 >> 0x18) * 4 + -0x6ea8) ^
            *(uint *)(PTR_DAT_0002ad7c + (uVar12 & 0xff) * 4 + -0x7aa8) ^ puVar14[0xb] ^
            *(uint *)(PTR_DAT_0002ad7c + ((uVar3 >> 0xe & 0x3fc) - 0x72a8)) ^
            *(uint *)(PTR_DAT_0002ad7c + ((uVar13 >> 6 & 0x3fc) - 0x76a8));
    puVar14 = puVar14 + 8;
  }
  param_1 = param_1 + (param_2 >> 1) * 8;
  uVar5 = *param_1;
  uVar9 = *(undefined4 *)(PTR_DAT_0002ad7c + ((uVar7 >> 0xe & 0x3fc) - 0x7ea8));
  uVar8 = *(undefined4 *)(PTR_DAT_0002ad7c + ((uVar3 >> 6 & 0x3fc) - 0x7ea8));
  uVar4 = *(uint *)(PTR_DAT_0002ad7c + (uVar12 >> 0x18) * 4 + -0x7ea8) & 0xff000000 ^
          (uint)(byte)PTR_DAT_0002ad7c[(uVar13 & 0xff) * 4 + -0x7ea8] ^ uVar5;
  uVar6 = *(uint *)(PTR_DAT_0002ad7c + (uVar13 >> 0x18) * 4 + -0x7ea8);
  pbVar10 = PTR_DAT_0002ad7c + (uVar3 & 0xff) * 4 + -0x7ea8;
  param_4[3] = (char)uVar4;
  *param_4 = (char)(uVar4 >> 0x18);
  bVar1 = *pbVar10;
  param_4[1] = (byte)(uVar5 >> 0x10) ^ (byte)((uint)uVar9 >> 0x10);
  param_4[2] = (byte)(uVar5 >> 8) ^ (byte)((uint)uVar8 >> 8);
  uVar5 = param_1[1];
  uVar9 = *(undefined4 *)(puVar2 + ((uVar12 >> 0xe & 0x3fc) - 0x7ea8));
  uVar8 = *(undefined4 *)(puVar2 + ((uVar7 >> 6 & 0x3fc) - 0x7ea8));
  uVar4 = uVar6 & 0xff000000 ^ (uint)bVar1 ^ uVar5;
  uVar11 = *(uint *)(puVar2 + (uVar3 >> 0x18) * 4 + -0x7ea8);
  param_4[7] = (char)uVar4;
  param_4[4] = (char)(uVar4 >> 0x18);
  bVar1 = puVar2[(uVar7 & 0xff) * 4 + -0x7ea8];
  param_4[6] = (byte)(uVar5 >> 8) ^ (byte)((uint)uVar8 >> 8);
  param_4[5] = (byte)(uVar5 >> 0x10) ^ (byte)((uint)uVar9 >> 0x10);
  uVar6 = param_1[2];
  uVar9 = *(undefined4 *)(puVar2 + ((uVar13 >> 0xe & 0x3fc) - 0x7ea8));
  uVar8 = *(undefined4 *)(puVar2 + ((uVar12 >> 6 & 0x3fc) - 0x7ea8));
  uVar4 = uVar11 & 0xff000000 ^ (uint)bVar1 ^ uVar6;
  uVar5 = *(uint *)(puVar2 + (uVar7 >> 0x18) * 4 + -0x7ea8);
  param_4[0xb] = (char)uVar4;
  bVar1 = puVar2[(uVar12 & 0xff) * 4 + -0x7ea8];
  param_4[8] = (char)(uVar4 >> 0x18);
  param_4[9] = (byte)(uVar6 >> 0x10) ^ (byte)((uint)uVar9 >> 0x10);
  param_4[10] = (byte)(uVar6 >> 8) ^ (byte)((uint)uVar8 >> 8);
  uVar4 = param_1[3];
  uVar9 = *(undefined4 *)(puVar2 + ((uVar3 >> 0xe & 0x3fc) - 0x7ea8));
  uVar8 = *(undefined4 *)(puVar2 + ((uVar13 >> 6 & 0x3fc) - 0x7ea8));
  uVar3 = uVar5 & 0xff000000 ^ (uint)bVar1 ^ uVar4;
  param_4[0xc] = (char)(uVar3 >> 0x18);
  param_4[0xd] = (byte)(uVar4 >> 0x10) ^ (byte)((uint)uVar9 >> 0x10);
  param_4[0xe] = (byte)(uVar4 >> 8) ^ (byte)((uint)uVar8 >> 8);
  param_4[0xf] = (char)uVar3;
  return;
}



// ==== FUN_00015440 @ 00015440 size=248

int FUN_00015440(undefined1 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  
  puVar4 = PTR_DAT_0002ad7c;
  puVar5 = param_1;
  if (param_3 < 1) {
    iVar8 = 0;
  }
  else {
    do {
      param_3 = param_3 + -3;
      uVar7 = 0;
      if (param_3 == -2) {
        iVar8 = 0;
        uVar6 = 0;
      }
      else {
        bVar1 = param_2[1];
        if (param_3 == -1) {
          uVar7 = 0;
          uVar6 = (uint)(bVar1 >> 4);
          iVar8 = (bVar1 & 0xf) << 2;
        }
        else {
          uVar6 = (uint)(bVar1 >> 4);
          iVar8 = (bVar1 & 0xf) * 4 + (uint)(param_2[2] >> 6);
          uVar7 = param_2[2] & 0x3f;
        }
      }
      uVar2 = puVar4[iVar8 + -0x56a0];
      puVar9 = puVar5 + 4;
      uVar3 = puVar4[uVar7 - 0x56a0];
      *puVar5 = puVar4[(*param_2 >> 2) - 0x56a0];
      bVar1 = *param_2;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      puVar5[1] = puVar4[uVar6 + (bVar1 & 3) * 0x10 + -0x56a0];
      param_2 = param_2 + 3;
      puVar5 = puVar9;
    } while (0 < param_3);
    iVar8 = (int)puVar9 - (int)param_1;
    param_1 = puVar9;
  }
  *param_1 = 0;
  puVar5 = param_1 + param_3;
  if (param_3 != 0) {
    do {
      param_1 = param_1 + -1;
      *param_1 = 0x3d;
    } while (param_1 != puVar5);
  }
  return iVar8;
}



// ==== FUN_00015538 @ 00015538 size=396

char * FUN_00015538(undefined4 *param_1,char *param_2)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  byte *pbVar7;
  char *pcVar8;
  char local_38 [8];
  char *local_30;
  
  local_30 = local_38;
  puVar5 = PTR_DAT_0002ad7c + -0x56a0;
  pbVar2 = (byte *)*param_1;
LAB_0001559c:
  do {
    pbVar7 = pbVar2;
    iVar6 = 0;
    pcVar8 = param_2;
    do {
      do {
        cVar1 = *pcVar8;
        if (cVar1 == 0) {
          if (iVar6 != 0) {
            pcVar8 = param_2;
          }
          *param_1 = pbVar7;
          return pcVar8;
        }
        pcVar8 = pcVar8 + 1;
        iVar3 = (*(code *)PTR_strchr_0002ade4)(puVar5,(int)cVar1);
      } while (iVar3 == 0);
      iVar3 = iVar3 - (int)puVar5;
      pcVar4 = local_38 + iVar6;
      if (iVar3 == 0x40) {
        pbVar2 = pbVar7;
        param_2 = pcVar8;
        if (1 < iVar6) {
          *pbVar7 = local_38[0] << 2 | (byte)local_38[1] >> 4;
          pbVar2 = pbVar7 + 1;
          if (iVar6 == 3) {
            pbVar7[1] = local_38[1] << 4 | (byte)local_38[2] >> 2;
            pbVar2 = pbVar7 + 2;
          }
        }
        goto LAB_0001559c;
      }
      iVar6 = iVar6 + 1;
      *pcVar4 = (char)iVar3;
    } while (iVar6 != 4);
    *pbVar7 = local_38[0] << 2 | (byte)local_38[1] >> 4;
    pbVar7[1] = local_38[1] << 4 | (byte)local_38[2] >> 2;
    pbVar7[2] = local_38[2] << 6 | local_38[3];
    pbVar2 = pbVar7 + 3;
    param_2 = pcVar8;
  } while( true );
}



// ==== FUN_000164f4 @ 000164f4 size=88

void FUN_000164f4(undefined4 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = 0x67452301;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[3] = 0xefcdab89;
    param_1[6] = 0;
    param_1[4] = 0x98badcfe;
    param_1[5] = 0x10325476;
    return;
  }
  iVar4 = 0xaa;
  puVar1 = (uint *)(PTR_DAT_0002ad7c + -0x5650);
  puVar3 = PTR_DAT_0002ad7c + -0x563c;
  puVar9 = PTR___assert_0002ade8;
  (*(code *)PTR___assert_0002ade8)();
  if (puVar1 == (uint *)0x0) {
    uVar5 = 0xbe;
    iVar4 = *(int *)(puVar9 + 0x14800) + -0x5650;
    goto LAB_000166ec;
  }
  if (puVar3 == (undefined *)0x0) {
    uVar5 = 0xbf;
    iVar4 = *(int *)(puVar9 + 0x14800) + -0x5620;
    goto LAB_000166ec;
  }
  uVar2 = puVar1[6];
  if (uVar2 < 0x41) {
    if (0 < iVar4) {
      iVar6 = *(int *)(puVar9 + 0x147fc);
      while( true ) {
        if ((uVar2 == 0) && (0x3f < iVar4)) {
          (*(code *)(iVar6 + 0x56d0))(puVar1,puVar3);
          iVar4 = iVar4 + -0x40;
          uVar2 = *puVar1;
          uVar8 = uVar2 + 0x200;
          *puVar1 = uVar8;
          puVar1[1] = (uint)(uVar8 < uVar2) + puVar1[1];
          puVar3 = puVar3 + 0x40;
        }
        else {
          iVar7 = 0x40 - uVar2;
          if (iVar4 < (int)(0x40 - uVar2)) {
            iVar7 = iVar4;
          }
          (**(code **)(puVar9 + 0x14954))((undefined *)((int)puVar1 + uVar2 + 0x1c),puVar3,iVar7);
          uVar2 = puVar1[6];
          puVar3 = puVar3 + iVar7;
          iVar4 = iVar4 - iVar7;
          puVar1[6] = iVar7 + uVar2;
          if (iVar7 + uVar2 == 0x40) {
            (*(code *)(iVar6 + 0x56d0))(puVar1,puVar1 + 7);
            uVar2 = *puVar1;
            uVar8 = uVar2 + 0x200;
            *puVar1 = uVar8;
            puVar1[1] = (uint)(uVar8 < uVar2) + puVar1[1];
            puVar1[6] = 0;
          }
        }
        if (iVar4 < 1) break;
        uVar2 = puVar1[6];
      }
    }
    return;
  }
  do {
    uVar5 = 0xc0;
    iVar4 = *(int *)(puVar9 + 0x14800) + -0x560c;
LAB_000166ec:
    (**(code **)(puVar9 + 0x1486c))
              (iVar4,*(int *)(puVar9 + 0x14800) + -0x563c,uVar5,*(int *)(puVar9 + 0x14800) + -0x5594
              );
  } while( true );
}



// ==== FUN_0001657c @ 0001657c size=424

void FUN_0001657c(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  puVar2 = PTR_0002ad78;
  if (param_1 == (uint *)0x0) {
    uVar3 = 0xbe;
    puVar2 = PTR_DAT_0002ad7c + -0x5650;
    goto LAB_000166ec;
  }
  if (param_2 != 0) {
    uVar1 = param_1[6];
    if (uVar1 < 0x41) {
      if (0 < param_3) {
        while( true ) {
          if ((uVar1 == 0) && (0x3f < param_3)) {
            (*(code *)(puVar2 + 0x56d0))(param_1,param_2);
            param_3 = param_3 + -0x40;
            uVar1 = *param_1;
            uVar5 = uVar1 + 0x200;
            *param_1 = uVar5;
            param_1[1] = (uint)(uVar5 < uVar1) + param_1[1];
            param_2 = param_2 + 0x40;
          }
          else {
            iVar4 = 0x40 - uVar1;
            if (param_3 < (int)(0x40 - uVar1)) {
              iVar4 = param_3;
            }
            (*(code *)PTR_memcpy_0002aed0)((int)param_1 + uVar1 + 0x1c,param_2,iVar4);
            uVar1 = param_1[6];
            param_2 = param_2 + iVar4;
            param_3 = param_3 - iVar4;
            param_1[6] = iVar4 + uVar1;
            if (iVar4 + uVar1 == 0x40) {
              (*(code *)(puVar2 + 0x56d0))(param_1,param_1 + 7);
              uVar1 = *param_1;
              uVar5 = uVar1 + 0x200;
              *param_1 = uVar5;
              param_1[1] = (uint)(uVar5 < uVar1) + param_1[1];
              param_1[6] = 0;
            }
          }
          if (param_3 < 1) break;
          uVar1 = param_1[6];
        }
      }
      return;
    }
    do {
      uVar3 = 0xc0;
      puVar2 = PTR_DAT_0002ad7c + -0x560c;
LAB_000166ec:
      (*(code *)PTR___assert_0002ade8)
                (puVar2,PTR_DAT_0002ad7c + -0x563c,uVar3,PTR_DAT_0002ad7c + -0x5594);
    } while( true );
  }
  uVar3 = 0xbf;
  puVar2 = PTR_DAT_0002ad7c + -0x5620;
  goto LAB_000166ec;
}



// ==== FUN_000169a4 @ 000169a4 size=76

undefined4 FUN_000169a4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_luaL_checkudata_0002ae0c)(param_1,1,PTR_DAT_0002ad7c + -0x5570);
  (*(code *)PTR_FUN_0002adac)(uVar1);
  return 0;
}



// ==== FUN_000169f0 @ 000169f0 size=84

undefined4 FUN_000169f0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_luaL_checkudata_0002ae0c)(param_1,1,PTR_DAT_0002ad7c + -0x5570);
  (*(code *)PTR_memset_0002ae48)(uVar1,0,0x60);
  return 0;
}



// ==== FUN_00016a44 @ 00016a44 size=128

undefined4 FUN_00016a44(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_20 [20];
  
  uVar1 = (*(code *)PTR_luaL_checkudata_0002ae0c)(param_1,1,PTR_DAT_0002ad7c + -0x5570);
  (*(code *)PTR_md5_done_0002adb0)(uVar1,auStack_20);
  (*(code *)PTR_lua_pushlstring_0002aeb8)(param_1,auStack_20,0x10);
  return 1;
}



// ==== FUN_00016ac4 @ 00016ac4 size=124

undefined4 FUN_00016ac4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_10 [2];
  
  uVar1 = (*(code *)PTR_luaL_checkudata_0002ae0c)(param_1,1,PTR_DAT_0002ad7c + -0x5570);
  uVar2 = (*(code *)PTR_luaL_checklstring_0002aec8)(param_1,2,local_10);
  (*(code *)PTR_FUN_0002adb4)(uVar1,uVar2,local_10[0]);
  return 0;
}



// ==== FUN_00016c30 @ 00016c30 size=1464

void FUN_00016c30(int param_1,byte *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint local_158 [80];
  
  puVar8 = local_158;
  puVar9 = puVar8;
  do {
    puVar15 = puVar9 + 1;
    *puVar9 = (uint)*param_2 << 0x18 | (uint)param_2[1] << 0x10 | (uint)param_2[3] |
              (uint)param_2[2] << 8;
    param_2 = param_2 + 4;
    puVar9 = puVar15;
  } while (puVar15 != local_158 + 0x10);
  uVar14 = *(uint *)(param_1 + 8);
  uVar13 = *(uint *)(param_1 + 0xc);
  uVar12 = *(uint *)(param_1 + 0x10);
  uVar11 = *(uint *)(param_1 + 0x14);
  uVar10 = *(uint *)(param_1 + 0x18);
  puVar9 = local_158 + 0xd;
  do {
    puVar15 = puVar9 + 1;
    uVar2 = puVar9[-5] ^ *puVar9 ^ puVar9[-0xb] ^ puVar9[-0xd];
    puVar9[3] = uVar2 >> 0x1f | uVar2 << 1;
    puVar9 = puVar15;
  } while (puVar15 != local_158 + 0x4d);
  uVar2 = uVar11;
  uVar4 = uVar12;
  uVar3 = uVar13;
  uVar7 = uVar14;
  uVar17 = uVar10;
  do {
    puVar9 = puVar8 + 2;
    uVar5 = uVar3 << 0x1e | uVar3 >> 2;
    uVar16 = (uVar7 >> 0x1b | uVar7 << 5) + 0x5a827999 + *puVar8 + ((uVar2 ^ uVar4) & uVar3 ^ uVar2)
             + uVar17;
    puVar15 = puVar8 + 3;
    uVar6 = uVar7 << 0x1e | uVar7 >> 2;
    puVar1 = puVar8 + 4;
    uVar3 = uVar2 + 0x5a827999 + puVar8[1] + ((uVar5 ^ uVar4) & uVar7 ^ uVar4) +
            (uVar16 >> 0x1b | uVar16 * 0x20);
    puVar8 = puVar8 + 5;
    uVar17 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar4 = uVar4 + 0x5a827999 + *puVar9 + (uVar16 & (uVar6 ^ uVar5) ^ uVar5) +
            (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar2 = uVar3 * 0x40000000 | uVar3 >> 2;
    uVar3 = uVar5 + 0x5a827999 + *puVar15 + ((uVar17 ^ uVar6) & uVar3 ^ uVar6) +
            (uVar4 >> 0x1b | uVar4 * 0x20);
    uVar7 = uVar6 + 0x5a827999 + *puVar1 + ((uVar2 ^ uVar17) & uVar4 ^ uVar17) +
            (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar4 = uVar4 * 0x40000000 | uVar4 >> 2;
  } while (puVar8 != local_158 + 0x14);
  puVar9 = local_158 + 0x14;
  do {
    puVar8 = puVar9 + 2;
    uVar5 = uVar3 << 0x1e | uVar3 >> 2;
    uVar16 = (uVar7 >> 0x1b | uVar7 << 5) + 0x6ed9eba1 + (uVar4 ^ uVar3 ^ uVar2) + *puVar9 + uVar17;
    puVar15 = puVar9 + 3;
    uVar6 = uVar7 << 0x1e | uVar7 >> 2;
    puVar1 = puVar9 + 4;
    uVar3 = uVar2 + 0x6ed9eba1 + (uVar4 ^ uVar7 ^ uVar5) + puVar9[1] +
            (uVar16 >> 0x1b | uVar16 * 0x20);
    puVar9 = puVar9 + 5;
    uVar17 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar4 = uVar4 + 0x6ed9eba1 + *puVar8 + (uVar6 ^ uVar5 ^ uVar16) + (uVar3 >> 0x1b | uVar3 * 0x20)
    ;
    uVar2 = uVar3 * 0x40000000 | uVar3 >> 2;
    uVar3 = uVar5 + 0x6ed9eba1 + *puVar15 + (uVar17 ^ uVar6 ^ uVar3) +
            (uVar4 >> 0x1b | uVar4 * 0x20);
    uVar7 = uVar6 + 0x6ed9eba1 + *puVar1 + (uVar2 ^ uVar17 ^ uVar4) + (uVar3 >> 0x1b | uVar3 * 0x20)
    ;
    uVar4 = uVar4 * 0x40000000 | uVar4 >> 2;
  } while (puVar9 != local_158 + 0x28);
  puVar9 = local_158 + 0x28;
  do {
    uVar5 = uVar3 << 0x1e | uVar3 >> 2;
    puVar8 = puVar9 + 5;
    uVar3 = (uVar7 >> 0x1b | uVar7 << 5) + 0x8f1bbcdc + *puVar9 +
            ((uVar3 | uVar4) & uVar2 | uVar3 & uVar4) + uVar17;
    uVar6 = uVar7 << 0x1e | uVar7 >> 2;
    uVar2 = uVar2 + 0x8f1bbcdc + puVar9[1] + ((uVar5 | uVar7) & uVar4 | uVar5 & uVar7) +
            (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar17 = uVar3 * 0x40000000 | uVar3 >> 2;
    uVar4 = uVar4 + 0x8f1bbcdc + puVar9[2] + (uVar2 >> 0x1b | uVar2 * 0x20) +
            ((uVar3 | uVar6) & uVar5 | uVar3 & uVar6);
    uVar3 = uVar5 + 0x8f1bbcdc + puVar9[3] + ((uVar2 | uVar17) & uVar6 | uVar2 & uVar17) +
            (uVar4 >> 0x1b | uVar4 * 0x20);
    uVar2 = uVar2 * 0x40000000 | uVar2 >> 2;
    uVar7 = uVar6 + 0x8f1bbcdc + puVar9[4] + (uVar3 >> 0x1b | uVar3 * 0x20) +
            ((uVar4 | uVar2) & uVar17 | uVar4 & uVar2);
    uVar4 = uVar4 * 0x40000000 | uVar4 >> 2;
    puVar9 = puVar8;
  } while (puVar8 != local_158 + 0x3c);
  puVar9 = local_158 + 0x3c;
  do {
    puVar8 = puVar9 + 2;
    uVar5 = uVar3 << 0x1e | uVar3 >> 2;
    uVar16 = (uVar7 >> 0x1b | uVar7 << 5) + 0xca62c1d6 + (uVar3 ^ uVar4 ^ uVar2) + *puVar9 + uVar17;
    puVar15 = puVar9 + 3;
    uVar6 = uVar7 << 0x1e | uVar7 >> 2;
    puVar1 = puVar9 + 4;
    uVar3 = uVar2 + 0xca62c1d6 + (uVar7 ^ uVar4 ^ uVar5) + puVar9[1] +
            (uVar16 >> 0x1b | uVar16 * 0x20);
    puVar9 = puVar9 + 5;
    uVar17 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar4 = uVar4 + 0xca62c1d6 + *puVar8 + (uVar6 ^ uVar5 ^ uVar16) + (uVar3 >> 0x1b | uVar3 * 0x20)
    ;
    uVar2 = uVar3 * 0x40000000 | uVar3 >> 2;
    uVar3 = uVar5 + 0xca62c1d6 + *puVar15 + (uVar17 ^ uVar6 ^ uVar3) +
            (uVar4 >> 0x1b | uVar4 * 0x20);
    uVar7 = uVar6 + 0xca62c1d6 + *puVar1 + (uVar2 ^ uVar17 ^ uVar4) + (uVar3 >> 0x1b | uVar3 * 0x20)
    ;
    uVar4 = uVar4 * 0x40000000 | uVar4 >> 2;
  } while (puVar9 != (uint *)&stack0xffffffe8);
  *(uint *)(param_1 + 8) = uVar7 + uVar14;
  *(uint *)(param_1 + 0xc) = uVar3 + uVar13;
  *(uint *)(param_1 + 0x10) = uVar4 + uVar12;
  *(uint *)(param_1 + 0x14) = uVar2 + uVar11;
  *(uint *)(param_1 + 0x18) = uVar17 + uVar10;
  return;
}



// ==== FUN_000171e8 @ 000171e8 size=100

void FUN_000171e8(undefined4 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = 0x67452301;
    param_1[1] = 0;
    param_1[3] = 0xefcdab89;
    param_1[7] = 0;
    param_1[4] = 0x98badcfe;
    *param_1 = 0;
    param_1[5] = 0x10325476;
    param_1[6] = 0xc3d2e1f0;
    return;
  }
  iVar4 = 0x90;
  puVar1 = (uint *)(PTR_DAT_0002ad7c + -0x554c);
  puVar3 = PTR_DAT_0002ad7c + -0x5538;
  puVar9 = PTR___assert_0002ade8;
  (*(code *)PTR___assert_0002ade8)();
  if (puVar1 == (uint *)0x0) {
    uVar5 = 0xa5;
    iVar4 = *(int *)(puVar9 + 0x13b00) + -0x554c;
    goto LAB_000173ec;
  }
  if (puVar3 == (undefined *)0x0) {
    uVar5 = 0xa6;
    iVar4 = *(int *)(puVar9 + 0x13b00) + -0x5620;
    goto LAB_000173ec;
  }
  uVar2 = puVar1[7];
  if (uVar2 < 0x41) {
    if (0 < iVar4) {
      iVar6 = *(int *)(puVar9 + 0x13afc);
      while( true ) {
        if ((uVar2 == 0) && (0x3f < iVar4)) {
          (*(code *)(iVar6 + 0x6c30))(puVar1,puVar3);
          iVar4 = iVar4 + -0x40;
          uVar2 = *puVar1;
          uVar8 = uVar2 + 0x200;
          *puVar1 = uVar8;
          puVar1[1] = (uint)(uVar8 < uVar2) + puVar1[1];
          puVar3 = puVar3 + 0x40;
        }
        else {
          iVar7 = 0x40 - uVar2;
          if (iVar4 < (int)(0x40 - uVar2)) {
            iVar7 = iVar4;
          }
          (**(code **)(puVar9 + 0x13c54))((undefined *)((int)puVar1 + uVar2 + 0x20),puVar3,iVar7);
          uVar2 = puVar1[7];
          puVar3 = puVar3 + iVar7;
          iVar4 = iVar4 - iVar7;
          puVar1[7] = iVar7 + uVar2;
          if (iVar7 + uVar2 == 0x40) {
            (*(code *)(iVar6 + 0x6c30))(puVar1,puVar1 + 8);
            uVar2 = *puVar1;
            uVar8 = uVar2 + 0x200;
            *puVar1 = uVar8;
            puVar1[1] = (uint)(uVar8 < uVar2) + puVar1[1];
            puVar1[7] = 0;
          }
        }
        if (iVar4 < 1) break;
        uVar2 = puVar1[7];
      }
    }
    return;
  }
  do {
    uVar5 = 0xa7;
    iVar4 = *(int *)(puVar9 + 0x13b00) + -0x5530;
LAB_000173ec:
    (**(code **)(puVar9 + 0x13b6c))
              (iVar4,*(int *)(puVar9 + 0x13b00) + -0x5538,uVar5,*(int *)(puVar9 + 0x13b00) + -0x54d4
              );
  } while( true );
}



// ==== FUN_0001727c @ 0001727c size=424

void FUN_0001727c(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  puVar2 = PTR_0002ad78;
  if (param_1 == (uint *)0x0) {
    uVar3 = 0xa5;
    puVar2 = PTR_DAT_0002ad7c + -0x554c;
    goto LAB_000173ec;
  }
  if (param_2 != 0) {
    uVar1 = param_1[7];
    if (uVar1 < 0x41) {
      if (0 < param_3) {
        while( true ) {
          if ((uVar1 == 0) && (0x3f < param_3)) {
            (*(code *)(puVar2 + 0x6c30))(param_1,param_2);
            param_3 = param_3 + -0x40;
            uVar1 = *param_1;
            uVar5 = uVar1 + 0x200;
            *param_1 = uVar5;
            param_1[1] = (uint)(uVar5 < uVar1) + param_1[1];
            param_2 = param_2 + 0x40;
          }
          else {
            iVar4 = 0x40 - uVar1;
            if (param_3 < (int)(0x40 - uVar1)) {
              iVar4 = param_3;
            }
            (*(code *)PTR_memcpy_0002aed0)((int)param_1 + uVar1 + 0x20,param_2,iVar4);
            uVar1 = param_1[7];
            param_2 = param_2 + iVar4;
            param_3 = param_3 - iVar4;
            param_1[7] = iVar4 + uVar1;
            if (iVar4 + uVar1 == 0x40) {
              (*(code *)(puVar2 + 0x6c30))(param_1,param_1 + 8);
              uVar1 = *param_1;
              uVar5 = uVar1 + 0x200;
              *param_1 = uVar5;
              param_1[1] = (uint)(uVar5 < uVar1) + param_1[1];
              param_1[7] = 0;
            }
          }
          if (param_3 < 1) break;
          uVar1 = param_1[7];
        }
      }
      return;
    }
    do {
      uVar3 = 0xa7;
      puVar2 = PTR_DAT_0002ad7c + -0x5530;
LAB_000173ec:
      (*(code *)PTR___assert_0002ade8)
                (puVar2,PTR_DAT_0002ad7c + -0x5538,uVar3,PTR_DAT_0002ad7c + -0x54d4);
    } while( true );
  }
  uVar3 = 0xa6;
  puVar2 = PTR_DAT_0002ad7c + -0x5620;
  goto LAB_000173ec;
}



// ==== FUN_000176a4 @ 000176a4 size=76

undefined4 FUN_000176a4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_luaL_checkudata_0002ae0c)(param_1,1,PTR_DAT_0002ad7c + -0x54b0);
  (*(code *)PTR_FUN_0002adb8)(uVar1);
  return 0;
}



// ==== FUN_000176f0 @ 000176f0 size=84

undefined4 FUN_000176f0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_luaL_checkudata_0002ae0c)(param_1,1,PTR_DAT_0002ad7c + -0x54b0);
  (*(code *)PTR_memset_0002ae48)(uVar1,0,0x60);
  return 0;
}



// ==== FUN_00017744 @ 00017744 size=128

undefined4 FUN_00017744(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_28 [28];
  
  uVar1 = (*(code *)PTR_luaL_checkudata_0002ae0c)(param_1,1,PTR_DAT_0002ad7c + -0x54b0);
  (*(code *)PTR_sha1_done_0002adbc)(uVar1,auStack_28);
  (*(code *)PTR_lua_pushlstring_0002aeb8)(param_1,auStack_28,0x14);
  return 1;
}



// ==== FUN_000177c4 @ 000177c4 size=124

undefined4 FUN_000177c4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_10 [2];
  
  uVar1 = (*(code *)PTR_luaL_checkudata_0002ae0c)(param_1,1,PTR_DAT_0002ad7c + -0x54b0);
  uVar2 = (*(code *)PTR_luaL_checklstring_0002aec8)(param_1,2,local_10);
  (*(code *)PTR_FUN_0002adc0)(uVar1,uVar2,local_10[0]);
  return 0;
}



// ==== FUN_00017930 @ 00017930 size=88

void FUN_00017930(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)(PTR_DAT_0002ad6c + -0x54a0);
  pcVar2 = (code *)*puVar1;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



