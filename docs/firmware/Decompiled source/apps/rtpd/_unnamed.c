/* rtpd — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rtpd.h"

// ==== FUN_00010e68 @ 00010e68 size=80

void FUN_00010e68(void)

{
  if ((((int)PTR___DT_PLTGOT_000280c8 - (int)(PTR_DAT_000280cc + -0x7f40) >> 2) -
       ((int)PTR___DT_PLTGOT_000280c8 - (int)(PTR_DAT_000280cc + -0x7f40) >> 0x1f) >> 1 != 0) &&
     (PTR__ITM_registerTMCloneTable_0002821c != (undefined *)0x0)) {
    (*(code *)PTR__ITM_registerTMCloneTable_0002821c)();
    return;
  }
  return;
}



// ==== FUN_00010eb8 @ 00010eb8 size=216

void FUN_00010eb8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = PTR_DAT_000280cc;
  if (PTR_DAT_000280cc[-0x7d40] == '\0') {
    if (PTR___cxa_finalize_00028270 != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_00028270)(*(undefined4 *)PTR_LOOP_000280d0);
    }
    puVar2 = PTR_DAT_000280cc;
    puVar3 = PTR_DAT_000280cc + -0x7ff8;
    iVar6 = (int)PTR_DAT_000280d4 - (int)puVar3;
    while (uVar4 = *(uint *)(puVar2 + -0x7d3c), iVar5 = uVar4 + 1, uVar4 < (iVar6 >> 2) - 1U) {
      *(int *)(puVar2 + -0x7d3c) = iVar5;
      (**(code **)(puVar3 + iVar5 * 4))();
    }
    (*(code *)(PTR_000280d8 + 0xe20))();
    puVar1[-0x7d40] = 1;
  }
  return;
}



// ==== FUN_00010f90 @ 00010f90 size=80

void FUN_00010f90(void)

{
  if ((*(int *)(PTR_DAT_000280cc + -0x7ff0) != 0) &&
     (PTR__Jv_RegisterClasses_0002819c != (undefined *)0x0)) {
    (*(code *)PTR__Jv_RegisterClasses_0002819c)(PTR_DAT_000280cc + -0x7ff0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_000280d8 + 0xe68))();
  return;
}



// ==== FUN_00010fe0 @ 00010fe0 size=384

undefined4 FUN_00010fe0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined1 auStack_28 [4];
  undefined4 local_24;
  int local_1c;
  
  puVar1 = PTR_DAT_000280cc;
  (*(code *)PTR_memset_000281f8)(PTR_DAT_000280cc + -0x7d30,0,0x118);
  while( true ) {
    iVar5 = (*(code *)PTR_FUN_000280dc)();
    puVar3 = PTR_000280d8;
    if (iVar5 == 0) break;
    (*(code *)PTR_usleep_00028288)(100000);
  }
  (*(code *)PTR_error_at_line_00028280)(0,0,PTR_000280d8 + 0x78e0,0x29,PTR_000280d8 + 0x78f0);
  (*(code *)PTR_FUN_000280e0)(0x10,0);
  (*(code *)PTR_FUN_000280e4)(0x10,0x402);
  (*(code *)PTR_FUN_000280e8)
            (0x10,PTR_DAT_000280cc + -0x7c20,PTR_DAT_000280cc + -0x7c1c,0,auStack_28);
  puVar4 = PTR_memcpy_0002827c;
  puVar2 = PTR_DAT_000280cc;
  *(int *)(puVar1 + -0x7cc8) = local_1c + -4;
  (*(code *)puVar4)(puVar2 + -0x7d04,*(int *)(puVar1 + -0x7c20) + 4,local_1c + -4);
  (*(code *)PTR_error_at_line_00028280)
            (0,0,puVar3 + 0x78e0,0x34,PTR_000280d8 + 0x7900,*(undefined4 *)(puVar1 + -0x7cc8),
             local_24);
  (*(code *)PTR_FUN_000280e4)(0x10,0xd00);
  return 0;
}



// ==== FUN_00011160 @ 00011160 size=32

void FUN_00011160(undefined4 *param_1)

{
  *param_1 = *(undefined4 *)(PTR_DAT_000280cc + -0x7d08);
  return;
}



// ==== FUN_00011180 @ 00011180 size=36

undefined * FUN_00011180(undefined4 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_000280cc + -0x7d04;
  *param_1 = *(undefined4 *)(PTR_DAT_000280cc + -0x7cc8);
  return puVar1;
}



// ==== FUN_000111a4 @ 000111a4 size=36

undefined * FUN_000111a4(undefined4 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_000280cc + -0x7cc4;
  *param_1 = *(undefined4 *)(PTR_DAT_000280cc + -0x7cb0);
  return puVar1;
}



// ==== FUN_000111c8 @ 000111c8 size=36

undefined * FUN_000111c8(undefined4 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_000280cc + -0x7ca8;
  *param_1 = *(undefined4 *)(PTR_DAT_000280cc + -0x7c80);
  return puVar1;
}



// ==== FUN_000111ec @ 000111ec size=36

undefined * FUN_000111ec(undefined4 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_000280cc + -0x7c7c;
  *param_1 = *(undefined4 *)(PTR_DAT_000280cc + -0x7c40);
  return puVar1;
}



// ==== FUN_00011210 @ 00011210 size=36

undefined * FUN_00011210(undefined4 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_000280cc + -0x7c3c;
  *param_1 = *(undefined4 *)(PTR_DAT_000280cc + -0x7c28);
  return puVar1;
}



// ==== FUN_00011234 @ 00011234 size=340

int FUN_00011234(undefined4 *param_1,undefined4 *param_2,int *param_3,undefined4 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  ushort local_36;
  int local_34;
  
  puVar2 = PTR_000280d8;
  puVar1 = PTR_DAT_000280cc;
  puVar5 = PTR_DAT_000280cc + -0x7c20;
  puVar4 = PTR_DAT_000280cc + -0x7c1c;
  while( true ) {
    do {
      iVar3 = (*(code *)PTR_FUN_000280ec)(0x10,puVar5,puVar4,0,auStack_40);
    } while (iVar3 < 1);
    if ((local_36 & 0x100) != 0) break;
    if ((local_36 & 0xf) < 9) {
                    /* WARNING: Could not recover jumptable at 0x00011318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (*(code *)(&_gp_1 + *(int *)(puVar2 + (local_36 & 0xf) * 4 + 0x7930)))
                        (&_gp_1 + *(int *)(puVar2 + (local_36 & 0xf) * 4 + 0x7930),
                         *(int *)(puVar1 + -0x7c20) + 4);
      return iVar3;
    }
  }
  iVar3 = *(int *)(puVar1 + -0x7c20);
  *param_1 = 0x41;
  *param_2 = local_3c;
  param_2[1] = 0;
  *param_3 = local_34 + -7;
  *param_4 = 1;
  return iVar3 + 7;
}



// ==== FUN_00011484 @ 00011484 size=76

void FUN_00011484(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_000280cc;
  if (*(int *)(PTR_DAT_000280cc + -0x7c20) != 0) {
    (*(code *)PTR_free_00028188)();
    *(undefined4 *)(puVar1 + -0x7c20) = 0;
  }
  return;
}



// ==== FUN_000114d0 @ 000114d0 size=100

void FUN_000114d0(void)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 1;
  local_c = 0;
  (*(code *)PTR_write_00028230)(*(undefined4 *)(PTR_DAT_000280cc + -0x7c00),&local_10,8);
  (*(code *)PTR_sem_wait_0002825c)(PTR_DAT_000280cc + -0x7bfc);
  return;
}



// ==== FUN_00011534 @ 00011534 size=100

void FUN_00011534(void)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 1;
  local_c = 0;
  (*(code *)PTR_write_00028230)(*(undefined4 *)(PTR_DAT_000280cc + -0x7c00),&local_10,8);
  (*(code *)PTR_sem_wait_0002825c)(PTR_DAT_000280cc + -0x7bfc);
  return;
}



// ==== FUN_00011598 @ 00011598 size=148

undefined4 FUN_00011598(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (*(code *)PTR_luaL_checkinteger_000281d0)(param_1,1);
  (*(code *)(PTR_000280d8 + 0x14d0))();
  iVar2 = (*(code *)PTR_FUN_000280f0)(uVar1);
  (*(code *)(PTR_000280d8 + 0x1534))();
  (*(code *)PTR_lua_pushboolean_00028234)(param_1,iVar2 == 0);
  return 1;
}



// ==== FUN_0001162c @ 0001162c size=100

undefined4 FUN_0001162c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (*(code *)PTR_luaL_checkinteger_000281d0)(param_1,1);
  iVar2 = (*(code *)PTR_FUN_000280f4)(uVar1);
  (*(code *)PTR_lua_pushboolean_00028234)(param_1,iVar2 == 0);
  return 1;
}



// ==== FUN_00011690 @ 00011690 size=100

undefined4 FUN_00011690(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (*(code *)PTR_luaL_checkinteger_000281d0)(param_1,1);
  iVar2 = (*(code *)PTR_FUN_000280f8)(uVar1);
  (*(code *)PTR_lua_pushboolean_00028234)(param_1,iVar2 == 0);
  return 1;
}



// ==== FUN_000116f4 @ 000116f4 size=296

undefined4 FUN_000116f4(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [2];
  undefined1 local_16 [10];
  
  uVar1 = (*(code *)PTR_luaL_checkinteger_000281d0)(param_1,1);
  (*(code *)(PTR_000280d8 + 0x14d0))();
  iVar2 = (*(code *)PTR_FUN_000280fc)
                    (uVar1,*(undefined4 *)(PTR_DAT_000280cc + -0x7bec),local_16,local_1c,local_18,
                     local_20);
  (*(code *)(PTR_000280d8 + 0x1534))();
  if (iVar2 == 0) {
    (*(code *)PTR_lua_pushinteger_0002817c)(param_1);
    (*(code *)PTR_lua_pushinteger_0002817c)(param_1);
    (*(code *)PTR_lua_pushinteger_0002817c)(param_1);
    (*(code *)PTR_lua_pushinteger_0002817c)(param_1);
    return 4;
  }
  (*(code *)PTR_lua_pushnil_0002824c)(param_1);
  return 1;
}



// ==== FUN_0001181c @ 0001181c size=248

undefined4 FUN_0001181c(undefined4 param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar3 = (*(code *)PTR_luaL_checkinteger_000281d0)(param_1,1);
  uVar4 = (*(code *)PTR_luaL_checkinteger_000281d0)(param_1,2);
  uVar5 = (*(code *)PTR_luaL_checkinteger_000281d0)(param_1,3);
  uVar1 = (*(code *)PTR_luaL_checkinteger_000281d0)(param_1,4);
  uVar2 = (*(code *)PTR_luaL_checkinteger_000281d0)(param_1,5);
  iVar6 = (*(code *)PTR_FUN_00028100)(uVar3,uVar4,uVar5,uVar1,uVar2);
  (*(code *)PTR_lua_pushboolean_00028234)(param_1,iVar6 == 0);
  return 1;
}



// ==== FUN_00011914 @ 00011914 size=404

undefined4 FUN_00011914(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_20 [4];
  undefined2 local_1c;
  undefined2 local_1a [3];
  
  uVar1 = (*(code *)PTR_luaL_checkinteger_000281d0)(param_1,1);
  uVar2 = (*(code *)PTR_luaL_checkinteger_000281d0)(param_1,2);
  uVar3 = (*(code *)PTR_luaL_checkinteger_000281d0)(param_1,3);
  local_1a[0] = (*(code *)PTR_luaL_checkinteger_000281d0)(param_1,4);
  local_1c = (*(code *)PTR_luaL_checkinteger_000281d0)(param_1,5);
  (*(code *)(PTR_000280d8 + 0x14d0))();
  iVar4 = (*(code *)PTR_FUN_00028104)
                    (uVar1,uVar2,uVar3,local_1a[0],local_1c,local_1a,&local_1c,local_20);
  (*(code *)(PTR_000280d8 + 0x1534))();
  if (iVar4 == 0) {
    (*(code *)PTR_lua_pushinteger_0002817c)(param_1);
    (*(code *)PTR_lua_pushinteger_0002817c)(param_1);
    (*(code *)PTR_lua_pushinteger_0002817c)(param_1);
    return 3;
  }
  (*(code *)PTR_lua_pushnil_0002824c)(param_1);
  return 1;
}



// ==== FUN_00011aa8 @ 00011aa8 size=472

undefined4 FUN_00011aa8(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_DAT_000280cc;
  if (*(int *)(PTR_DAT_000280cc + -0x7c10) == 0) {
    (*(code *)PTR_sem_init_00028218)(PTR_DAT_000280cc + -0x7bfc,0,0);
    iVar2 = (*(code *)PTR_eventfd_00028250)(0,1);
    *(int *)(puVar1 + -0x7c00) = iVar2;
    if (iVar2 == -1) {
      puVar5 = PTR_000280d8 + 0x79b4;
    }
    else {
      iVar2 = (*(code *)PTR_FUN_00028108)(iVar2,8);
      puVar5 = PTR_pthread_create_000282a0;
      if (iVar2 < 0) {
        puVar5 = PTR_000280d8 + 0x79d4;
      }
      else {
        puVar3 = PTR_DAT_000280cc + -0x7c08;
        puVar4 = PTR_000280d8 + 0x1d64;
        *(undefined4 *)(puVar1 + -0x7c0c) = 0;
        iVar2 = (*(code *)puVar5)(puVar3,0,puVar4,0);
        if (iVar2 == 0) {
          iVar2 = (*(code *)PTR_pthread_create_000282a0)
                            (PTR_DAT_000280cc + -0x7c04,0,PTR_000280d8 + 0x1c80,0);
          puVar3 = PTR_lua_pushboolean_00028234;
          puVar5 = PTR_pthread_join_00028190;
          if (iVar2 == 0) {
            *(undefined4 *)(puVar1 + -0x7c10) = 1;
            (*(code *)puVar3)(param_1,1);
            return 1;
          }
          *(undefined4 *)(puVar1 + -0x7c0c) = 1;
          (*(code *)puVar5)(*(undefined4 *)(puVar1 + -0x7c08),0);
          puVar5 = PTR_000280d8 + 0x797c;
        }
        else {
          puVar5 = PTR_000280d8 + 0x7960;
        }
        (*(code *)PTR_FUN_0002810c)();
      }
    }
    if (*(int *)(puVar1 + -0x7c00) != -1) {
      (*(code *)PTR_close_0002818c)();
    }
    (*(code *)PTR_sem_destroy_0002826c)(puVar1 + -0x7bfc);
  }
  else {
    puVar5 = PTR_000280d8 + 0x799c;
  }
  (*(code *)PTR_lua_pushboolean_00028234)(param_1,0);
  (*(code *)PTR_lua_pushstring_000281e8)(param_1,puVar5);
  return 2;
}



// ==== FUN_00011d64 @ 00011d64 size=944

undefined4 FUN_00011d64(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar1 = PTR_DAT_000280cc;
  if (*(int *)(PTR_DAT_000280cc + -0x7c0c) == 0) {
    do {
      iVar2 = (*(code *)PTR_FUN_00028114)();
      if (iVar2 < 0) {
        (*(code *)PTR_fwrite_000281c4)
                  (PTR_000280d8 + 0x7a14,1,0x20,*(undefined4 *)PTR_stderr_000281d8);
        return 0;
      }
      if (*(int *)(puVar1 + -0x7c0c) == 0) {
        do {
          while( true ) {
            iVar2 = (*(code *)PTR_FUN_0002811c)(&local_34,local_50,&local_38,&local_3c);
            if (iVar2 == 0) goto LAB_00011e94;
            *(undefined4 *)(puVar1 + -0x7bec) = local_50[0];
            if (local_34 != 0x56) break;
            uVar3 = (*(code *)PTR_FUN_00028130)(&local_40);
            if (local_3c != 0) {
              local_2c = uVar3;
              local_30 = (*(code *)PTR_FUN_00028140)(&local_44);
              uVar4 = (*(code *)PTR_FUN_00028144)(&local_48);
              uVar3 = local_2c;
              local_2c = uVar4;
              if (local_40 < 1) {
                (*(code *)PTR_FUN_00028148)(local_30,local_44,local_50[0]);
                (*(code *)PTR_FUN_00028148)(local_2c,local_48,local_50[0]);
              }
              else {
                (*(code *)PTR_FUN_00028134)(uVar3,local_40,local_50[0]);
                (*(code *)PTR_FUN_00028134)(local_30,local_44,local_50[0]);
                (*(code *)PTR_FUN_00028134)(local_2c,local_48,local_50[0]);
              }
            }
            pcVar5 = (code *)PTR_FUN_00028148;
            if (0 < local_40) {
              pcVar5 = (code *)PTR_FUN_00028134;
            }
LAB_00011e74:
            (*pcVar5)(iVar2,local_38,local_50[0]);
            if (*(int *)(puVar1 + -0x7c0c) != 0) goto LAB_00011e94;
          }
          if (local_34 == 0x76) {
            uVar3 = (*(code *)PTR_FUN_00028124)(&local_40);
            if (local_3c != 0) {
              local_2c = uVar3;
              local_30 = (*(code *)PTR_FUN_00028138)(&local_44);
              uVar4 = (*(code *)PTR_FUN_0002813c)(&local_48);
              uVar3 = local_2c;
              local_2c = uVar4;
              if (local_40 < 1) {
                (*(code *)PTR_FUN_00028128)(local_30,local_44,local_50[0]);
                (*(code *)PTR_FUN_00028128)(local_2c,local_48,local_50[0]);
              }
              else {
                (*(code *)PTR_FUN_0002812c)(uVar3,local_40,local_50[0]);
                (*(code *)PTR_FUN_0002812c)(local_30,local_44,local_50[0]);
                (*(code *)PTR_FUN_0002812c)(local_2c,local_48,local_50[0]);
              }
            }
            pcVar5 = (code *)PTR_FUN_00028128;
            if (0 < local_40) {
              pcVar5 = (code *)PTR_FUN_0002812c;
            }
            goto LAB_00011e74;
          }
          (*(code *)PTR_FUN_00028120)(iVar2,local_38);
        } while (*(int *)(puVar1 + -0x7c0c) == 0);
      }
LAB_00011e94:
      (*(code *)PTR_FUN_00028118)();
    } while (*(int *)(puVar1 + -0x7c0c) == 0);
  }
  (*(code *)PTR_fwrite_000281c4)(PTR_000280d8 + 0x7a00,1,0x13,*(undefined4 *)PTR_stderr_000281d8);
  return 0;
}



// ==== FUN_00012114 @ 00012114 size=312

undefined4 FUN_00012114(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar3 = PTR_write_00028230;
  puVar2 = PTR_DAT_000280cc;
  if (*(int *)(PTR_DAT_000280cc + -0x7c10) == 0) {
    (*(code *)PTR_lua_pushboolean_00028234)(param_1,0);
    (*(code *)PTR_lua_pushstring_000281e8)(param_1,PTR_000280d8 + 0x7a38);
    return 2;
  }
  puVar1 = (undefined4 *)(PTR_DAT_000280cc + -0x7c00);
  *(undefined4 *)(PTR_DAT_000280cc + -0x7c0c) = 1;
  local_18 = 1;
  local_14 = 0;
  (*(code *)puVar3)(*puVar1,&local_18,8);
  (*(code *)PTR_pthread_join_00028190)(*(undefined4 *)(puVar2 + -0x7c04),0);
  (*(code *)PTR_pthread_join_00028190)(*(undefined4 *)(puVar2 + -0x7c08),0);
  (*(code *)PTR_FUN_0002810c)();
  (*(code *)PTR_close_0002818c)(*(undefined4 *)(puVar2 + -0x7c00));
  (*(code *)PTR_sem_destroy_0002826c)(PTR_DAT_000280cc + -0x7bfc);
  puVar3 = PTR_lua_pushboolean_00028234;
  *(undefined4 *)(puVar2 + -0x7c10) = 0;
  (*(code *)puVar3)(param_1,1);
  return 1;
}



// ==== FUN_000122d0 @ 000122d0 size=140

undefined8 FUN_000122d0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int local_10;
  int local_c;
  
  iVar2 = (*(code *)PTR_clock_gettime_000282ac)(4,&local_10);
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



// ==== FUN_0001262c @ 0001262c size=156

undefined4 FUN_0001262c(int *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*param_1 == 0) || (uVar1 = 0, *param_2 < param_3)) {
    if (param_3 < 1) {
      uVar1 = 0;
    }
    else {
      iVar2 = (*(code *)PTR_realloc_0002820c)(*param_1,param_3);
      if (iVar2 != 0) {
        *param_1 = iVar2;
        *param_2 = param_3;
        return 0;
      }
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



// ==== FUN_00012720 @ 00012720 size=300

int FUN_00012720(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18 [2];
  
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_30 = 2;
  iVar2 = (*(code *)PTR_getaddrinfo_000281c8)(param_1,param_2,&local_38,local_18);
  if (iVar2 == 0) {
    iVar2 = local_18[0];
    if (local_18[0] == 0) {
      local_18[0] = 0;
    }
    else {
      do {
        iVar3 = (*(code *)PTR_socket_00028254)
                          (*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),
                           *(undefined4 *)(iVar2 + 0xc));
        if (iVar3 != -1) {
          iVar4 = (*(code *)PTR_connect_000282a4)
                            (iVar3,*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x10));
          if (iVar4 != -1) {
            (*(code *)PTR_freeaddrinfo_0002823c)(local_18[0]);
            return iVar3;
          }
          (*(code *)PTR_close_0002818c)(iVar3);
        }
        piVar1 = (int *)(iVar2 + 0x1c);
        iVar2 = *piVar1;
      } while (*piVar1 != 0);
    }
    (*(code *)PTR_freeaddrinfo_0002823c)(local_18[0]);
  }
  return -1;
}



// ==== FUN_000129d0 @ 000129d0 size=412

int FUN_000129d0(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined2 local_30;
  ushort local_2e;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar2 = (*(code *)PTR_socket_00028254)(2,1,0);
  if (iVar2 != -1) {
    local_1c = 1;
    (*(code *)PTR_setsockopt_00028220)(iVar2,0xffff,4,&local_1c,4);
    if (param_1 == (ushort *)0x0) {
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_30 = 2;
      local_2e = 0;
      iVar3 = (*(code *)PTR_bind_00028228)(iVar2,&local_30,0x10);
      if (iVar3 != -1) {
        return iVar2;
      }
    }
    else {
      uVar1 = *param_1;
      local_2c = 0;
      local_28 = 0;
      local_2e = uVar1 >> 8 | uVar1 << 8;
      local_24 = 0;
      local_30 = 2;
      iVar3 = (*(code *)PTR_bind_00028228)(iVar2,&local_30,0x10);
      if (iVar3 != -1) {
        if (uVar1 == 0) {
          local_20 = 0x10;
          (*(code *)PTR_getsockname_00028180)(iVar2,&local_30,&local_20);
          *param_1 = local_2e >> 8 | local_2e << 8;
          return iVar2;
        }
        return iVar2;
      }
    }
    (*(code *)PTR_close_0002818c)(iVar2);
  }
  return -1;
}



// ==== FUN_00012be0 @ 00012be0 size=524

undefined4 FUN_00012be0(int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  
  puVar2 = PTR_DAT_000280cc;
  iVar4 = param_4 + -4;
  if (0 < *(int *)(PTR_DAT_000280cc + -0x7bd4)) {
    iVar8 = 0;
    do {
      piVar9 = (int *)(*(int *)(puVar2 + -0x7be0) + iVar8 * 0x80);
      (*(code *)PTR_pthread_mutex_lock_000281bc)(piVar9 + 0x14);
      if (((piVar9[1] != 0) && (piVar7 = piVar9 + param_2 * 6 + 8, *piVar7 != 0)) &&
         ((param_1 < 0 || (piVar9[2] == param_1)))) {
        sVar1 = (short)piVar7[4];
        *(short *)(piVar7 + 4) = sVar1 + 1;
        iVar6 = piVar7[3];
        iVar5 = *(int *)(*piVar9 + param_2 * 8);
        *(char *)(param_3 + 6) = (char)((ushort)sVar1 >> 8);
        *(char *)(param_3 + 7) = (char)sVar1;
        *(int *)(param_3 + 0xc) = iVar6;
        if (iVar5 == -1) {
          *(undefined1 *)(param_3 + 1) = *(undefined1 *)((int)piVar7 + 0x16);
          puVar3 = PTR_send_00028240;
          iVar5 = piVar9[7];
          *(char *)(param_3 + 2) = (char)((uint)iVar4 >> 8);
          *(char *)(param_3 + 3) = (char)((uint)(iVar4 * 0x100) >> 8);
          (*(code *)puVar3)(iVar5,param_3,param_4,0);
        }
        else {
          (*(code *)PTR_send_00028240)(iVar5,param_3 + 4,iVar4,0);
        }
        piVar7[1] = piVar7[1] + 1;
        piVar7[2] = piVar7[2] + -0x10 + param_4;
      }
      iVar8 = iVar8 + 1;
      (*(code *)PTR_pthread_mutex_unlock_000281ec)(piVar9 + 0x14);
    } while (iVar8 < *(int *)(puVar2 + -0x7bd4));
  }
  return 0;
}



// ==== FUN_0001301c @ 0001301c size=200

void FUN_0001301c(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[7] != -1) {
    piVar1 = (int *)*param_1;
    param_1[1] = 0;
    param_1[7] = 0xffffffff;
    iVar2 = 0;
    do {
      iVar3 = iVar2 + 0x18;
      *(undefined4 *)((int)param_1 + iVar2 + 0x20) = 0;
      if (*piVar1 != -1) {
        (*(code *)PTR_close_0002818c)(*piVar1);
        *piVar1 = -1;
      }
      if (piVar1[4] != -1) {
        (*(code *)PTR_close_0002818c)(piVar1[4]);
        piVar1[4] = -1;
      }
      piVar1 = piVar1 + 2;
      iVar2 = iVar3;
    } while (iVar3 != 0x30);
  }
  return;
}



// ==== FUN_000130e4 @ 000130e4 size=404

uint FUN_000130e4(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint local_28;
  uint local_24;
  uint local_20;
  ushort local_1c;
  undefined4 local_1a;
  
  puVar1 = PTR_000280d8;
  iVar2 = (*(code *)PTR_fopen_000281fc)(PTR_000280d8 + 0x7af0,PTR_000280d8 + 0x7aa8);
  if (iVar2 == 0) {
    puVar4 = (undefined4 *)(*(code *)PTR___errno_location_000281b4)();
    (*(code *)PTR_error_at_line_00028280)
              (0,*puVar4,PTR_000280d8 + 0x7b10,0x28d,PTR_000280d8 + 0x7b18,puVar1 + 0x7af0);
    return 0;
  }
  iVar3 = (*(code *)PTR_fscanf_00028284)
                    (iVar2,PTR_000280d8 + 0x7b24,&local_20,(int)&local_1a + 2,&local_1a,&local_1c,
                     &local_28);
  if (iVar3 != 5) {
    puVar4 = (undefined4 *)(*(code *)PTR___errno_location_000281b4)();
    (*(code *)PTR_error_at_line_00028280)
              (0,*puVar4,PTR_000280d8 + 0x7b10,0x297,PTR_000280d8 + 0x7b38,iVar3);
    (*(code *)PTR_fclose_000281f4)(iVar2);
    return 0;
  }
  (*(code *)PTR_fclose_000281f4)(iVar2);
  return local_20 ^ local_28 ^ local_1a ^ ((uint)local_1c << 0x10 | local_24);
}



// ==== FUN_00013278 @ 00013278 size=600

undefined4 FUN_00013278(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 local_5a8 [4];
  ushort local_5a4;
  undefined4 local_5a0;
  undefined1 auStack_598 [2];
  byte local_596;
  undefined1 auStack_595 [1385];
  uint local_2c;
  
  local_5a8[0] = 0x24;
  local_5a4 = local_5a4 & 0x8000 | 0x6080;
  uVar4 = (*(code *)PTR_FUN_0002814c)
                    ((int)((ulonglong)param_4 * 90000),(int)((ulonglong)param_4 * 90000 >> 0x20),
                     1000,0);
  local_5a0 = (*(code *)PTR_FUN_00028150)(uVar4);
  if (0x578 < param_3 + 0xcU) {
    (*(code *)PTR_swab_00028274)(param_2,&local_2c,2);
    uVar3 = local_2c;
    local_2c = local_2c & 0xffff81ff | 0x6200;
    (*(code *)PTR_swab_00028274)(&local_2c,auStack_598,2);
    local_596 = (byte)(uVar3 >> 9) & 0x3f;
    iVar6 = 0;
    do {
      iVar7 = (param_3 + -2) - iVar6;
      bVar2 = iVar6 == 0;
      bVar1 = iVar7 < 0x56a;
      if (!bVar1) {
        iVar7 = 0x569;
      }
      iVar5 = param_2 + 2 + iVar6;
      iVar6 = iVar6 + iVar7;
      local_596 = local_596 & 0x3f | bVar2 << 7 | bVar1 << 6;
      local_5a4 = local_5a4 & 0x7fff | (ushort)bVar1 << 0xf;
      (*(code *)PTR_memcpy_0002827c)(auStack_595,iVar5,iVar7);
      (*(code *)(PTR_000280d8 + 0x2be0))(param_1,0,local_5a8,iVar7 + 0x13);
    } while (iVar6 < param_3 + -2);
    return 0;
  }
  local_5a4 = 0xe080;
  (*(code *)PTR_memcpy_0002827c)(auStack_598,param_2,param_3);
  uVar4 = (*(code *)(PTR_000280d8 + 0x2be0))(param_1,0,local_5a8,param_3 + 0x10);
  return uVar4;
}



// ==== FUN_000134d0 @ 000134d0 size=456

int FUN_000134d0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_30 [2];
  ushort local_2e;
  undefined4 local_2c [3];
  undefined4 local_20 [3];
  
  if ((-1 < param_1) && (param_2 < 2)) {
    if (1 < param_3) {
      return 0;
    }
    iVar2 = *(int *)(PTR_DAT_000280cc + -0x7bd4);
    iVar3 = 0;
    if (0 < iVar2) {
      iVar4 = *(int *)(PTR_DAT_000280cc + -0x7be0);
      iVar1 = 0;
      do {
        while (*(int *)(iVar4 + 0x1c) == -1) {
          iVar1 = iVar1 + 1;
          if (iVar3 == 0) {
            iVar3 = iVar4;
          }
          iVar4 = iVar4 + 0x80;
          if (iVar1 == iVar2) goto LAB_00013568;
        }
        iVar1 = iVar1 + 1;
        if (param_1 == *(int *)(iVar4 + 0x1c)) {
          if (param_2 != *(uint *)(iVar4 + 8)) {
            return 0;
          }
          if (*(int *)(iVar4 + param_3 * 0x18 + 0x20) != 0) {
            iVar4 = 0;
          }
          return iVar4;
        }
        iVar4 = iVar4 + 0x80;
      } while (iVar1 != iVar2);
LAB_00013568:
      if (iVar3 == 0) {
        return 0;
      }
      if (*(int *)(iVar3 + 0x1c) != -1) {
        return iVar3;
      }
      local_20[0] = 0x10;
      iVar2 = (*(code *)PTR_getpeername_000281dc)(param_1,auStack_30,local_20);
      if (iVar2 != -1) {
        (*(code *)PTR_inet_ntop_000281b0)(2,local_2c,iVar3 + 0x68,0x10);
        iVar2 = (*(code *)PTR_strlen_000281a4)(iVar3 + 0x68);
        (*(code *)PTR_sprintf_000281e4)
                  (iVar3 + iVar2 + 0x68,PTR_000280d8 + 0x7b4c,local_2e >> 8 | local_2e << 8);
        *(int *)(iVar3 + 0x1c) = param_1;
        *(undefined4 *)(iVar3 + 0x18) = local_2c[0];
        *(uint *)(iVar3 + 8) = param_2;
        return iVar3;
      }
    }
  }
  return 0;
}



// ==== FUN_00013698 @ 00013698 size=360

undefined4 FUN_00013698(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  puVar2 = PTR_calloc_00028238;
  puVar1 = PTR_DAT_000280cc;
  if (0 < param_2) {
    *(int *)(PTR_DAT_000280cc + -0x7bd4) = param_2;
    iVar3 = (*(code *)puVar2)(param_2,0x80);
    *(int *)(puVar1 + -0x7be0) = iVar3;
    puVar2 = PTR_calloc_00028238;
    if (iVar3 != 0) {
      iVar7 = param_2 * 4 + 1;
      *(int *)(puVar1 + -0x7bd8) = iVar7;
      puVar4 = (undefined4 *)(*(code *)puVar2)(iVar7,8);
      *(undefined4 **)(puVar1 + -0x7bdc) = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = param_1;
        *(undefined2 *)(puVar4 + 1) = 1;
        iVar6 = 8;
        iVar7 = 0;
        while( true ) {
          puVar2 = PTR_pthread_mutex_init_000281a8;
          puVar4 = (undefined4 *)((int)puVar4 + iVar6);
          puVar5 = (undefined4 *)(iVar3 + iVar7 * 0x80);
          *puVar4 = 0xffffffff;
          iVar7 = iVar7 + 1;
          *(undefined2 *)(puVar4 + 1) = 1;
          iVar6 = iVar6 + 0x20;
          puVar4[4] = 0xffffffff;
          *(undefined2 *)(puVar4 + 5) = 1;
          puVar4[2] = 0xffffffff;
          *(undefined2 *)(puVar4 + 3) = 1;
          puVar4[6] = 0xffffffff;
          *(undefined2 *)(puVar4 + 7) = 1;
          *puVar5 = puVar4;
          puVar5[7] = 0xffffffff;
          (*(code *)puVar2)(puVar5 + 0x14,0);
          if (iVar7 == param_2) break;
          iVar3 = *(int *)(puVar1 + -0x7be0);
          puVar4 = *(undefined4 **)(puVar1 + -0x7bdc);
        }
        return 0;
      }
      (*(code *)PTR_free_00028188)(iVar3);
      *(undefined4 *)(puVar1 + -0x7be0) = 0;
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}



// ==== FUN_00014374 @ 00014374 size=516

undefined4
FUN_00014374(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,ushort param_5,
            ushort *param_6,ushort *param_7,undefined4 *param_8)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  code *pcVar8;
  ushort local_30;
  ushort local_2e [3];
  
  piVar2 = (int *)(*(code *)(PTR_000280d8 + 0x34d0))();
  if (piVar2 != (int *)0x0) {
    iVar6 = *piVar2;
    while( true ) {
      local_2e[0] = 0;
      iVar4 = (*(code *)PTR_FUN_0002815c)(local_2e);
      if (iVar4 == -1) break;
      local_30 = local_2e[0] - 1;
      if ((local_2e[0] & 1) == 0) {
        local_30 = local_2e[0] + 1;
      }
      iVar3 = (*(code *)PTR_FUN_0002815c)(&local_30);
      if (iVar3 != -1) {
        if ((local_2e[0] & 1) == 0) {
          piVar7 = (int *)(iVar6 + param_3 * 8);
          *piVar7 = iVar4;
          *param_6 = local_2e[0];
          piVar7[4] = iVar3;
          *param_7 = local_30;
        }
        else {
          piVar7 = (int *)(iVar6 + param_3 * 8);
          *piVar7 = iVar3;
          *param_6 = local_30;
          piVar7[4] = iVar4;
          *param_7 = local_2e[0];
        }
        piVar2 = piVar2 + param_3 * 6 + 8;
        pcVar8 = (code *)(PTR_000280d8 + 0x30e4);
        *(ushort *)(piVar2 + 5) = param_5 >> 8 | param_5 << 8;
        *(ushort *)((int)piVar2 + 0x12) =
             (ushort)((param_4 & 0xffff) >> 8) | (ushort)((param_4 & 0xffff) << 8);
        uVar5 = (*pcVar8)();
        puVar1 = PTR_FUN_00028150;
        *param_8 = uVar5;
        iVar6 = (*(code *)puVar1)(uVar5);
        piVar2[3] = iVar6;
        *piVar2 = 1;
        return 0;
      }
      (*(code *)PTR_close_0002818c)(iVar4);
    }
    (*(code *)(PTR_000280d8 + 0x301c))(piVar2);
  }
  return 0xffffffff;
}



// ==== FUN_00014578 @ 00014578 size=180

undefined4
FUN_00014578(undefined4 param_1,undefined4 param_2,int param_3,undefined1 param_4,undefined1 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  code *pcVar4;
  
  iVar1 = (*(code *)(PTR_000280d8 + 0x34d0))();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    pcVar4 = (code *)(PTR_000280d8 + 0x30e4);
    puVar3 = (undefined4 *)(iVar1 + param_3 * 0x18 + 0x20);
    *(undefined1 *)((int)puVar3 + 0x16) = param_4;
    *(undefined1 *)((int)puVar3 + 0x17) = param_5;
    uVar2 = (*pcVar4)();
    uVar2 = (*(code *)PTR_FUN_00028150)(uVar2);
    puVar3[3] = uVar2;
    uVar2 = 0;
    *puVar3 = 1;
  }
  return uVar2;
}



// ==== FUN_0001462c @ 0001462c size=624

undefined4
FUN_0001462c(int param_1,uint param_2,undefined2 *param_3,undefined4 *param_4,undefined2 *param_5,
            undefined4 *param_6)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined2 local_40;
  undefined2 uStack_3e;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  int local_2c;
  
  if (0 < *(int *)(PTR_DAT_000280cc + -0x7bd4)) {
    puVar6 = *(undefined4 **)(PTR_DAT_000280cc + -0x7be0);
    if (param_1 != puVar6[7]) {
      iVar2 = 0;
      puVar4 = puVar6;
      do {
        puVar6 = puVar4 + 0x20;
        iVar2 = iVar2 + 1;
        if (iVar2 == *(int *)(PTR_DAT_000280cc + -0x7bd4)) {
          return 0xffffffff;
        }
        piVar7 = puVar4 + 0x27;
        puVar4 = puVar6;
      } while (param_1 != *piVar7);
    }
    if (puVar6[1] == 0) {
      piVar7 = (int *)*puVar6;
      puVar4 = puVar6 + 0xc;
      uVar8 = 0;
      iVar9 = 0;
      iVar2 = -1;
      puVar5 = puVar6;
      do {
        if (puVar5[8] != 0) {
          iVar9 = iVar9 + 1;
          if (*piVar7 != iVar2) {
            local_34 = 0;
            local_38 = 0;
            local_3c = puVar6[6];
            _local_40 = CONCAT22(*(undefined2 *)((int)puVar5 + 0x32),2);
            local_30 = puVar4;
            local_2c = iVar2;
            (*(code *)PTR_connect_000282a4)(*piVar7,&local_40,0x10);
            _local_40 = CONCAT22(*(undefined2 *)(puVar5 + 0xd),local_40);
            (*(code *)PTR_connect_000282a4)(piVar7[4],&local_40,0x10);
            puVar4 = local_30;
            iVar2 = local_2c;
          }
          if (uVar8 == 0) {
            local_30 = puVar4;
            local_2c = iVar2;
            uVar8 = (*(code *)(PTR_000280d8 + 0x30e4))();
            puVar4 = local_30;
            iVar2 = local_2c;
          }
          *(short *)(puVar5 + 0xc) = (short)uVar8;
          uVar8 = uVar8 >> 0x10;
          puVar5[9] = 0;
          puVar5[10] = 0;
        }
        puVar1 = PTR_FUN_0002814c;
        puVar5 = puVar5 + 6;
        piVar7 = piVar7 + 2;
      } while (puVar5 != puVar4);
      if (iVar9 != 0) {
        *param_3 = *(undefined2 *)(puVar6 + 0xc);
        *param_5 = *(undefined2 *)(puVar6 + 0x12);
        uVar3 = (*(code *)puVar1)((int)((ulonglong)param_2 * 90000),
                                  (int)((ulonglong)param_2 * 90000 >> 0x20),1000,0);
        puVar1 = PTR_FUN_0002814c;
        *param_4 = uVar3;
        uVar3 = (*(code *)puVar1)((int)((ulonglong)param_2 * 16000),
                                  (int)((ulonglong)param_2 * 16000 >> 0x20),1000,0);
        puVar1 = PTR_FUN_00028154;
        *param_6 = uVar3;
        uVar10 = (*(code *)puVar1)();
        *(undefined8 *)(puVar6 + 4) = uVar10;
        puVar6[1] = 1;
        return 0;
      }
    }
  }
  return 0xffffffff;
}



// ==== FUN_0001489c @ 0001489c size=200

undefined4 FUN_0001489c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(PTR_DAT_000280cc + -0x7be0);
  if (*(int *)(PTR_DAT_000280cc + -0x7bd4) < 1) {
    return 0xffffffff;
  }
  if (param_1 != *(int *)(iVar4 + 0x1c)) {
    iVar3 = 0;
    iVar2 = iVar4;
    do {
      iVar4 = iVar2 + 0x80;
      iVar3 = iVar3 + 1;
      if (iVar3 == *(int *)(PTR_DAT_000280cc + -0x7bd4)) {
        return 0xffffffff;
      }
      piVar1 = (int *)(iVar2 + 0x9c);
      iVar2 = iVar4;
    } while (param_1 != *piVar1);
  }
  (*(code *)PTR_pthread_mutex_lock_000281bc)(iVar4 + 0x50);
  (*(code *)(PTR_000280d8 + 0x301c))(iVar4);
  (*(code *)PTR_pthread_mutex_unlock_000281ec)(iVar4 + 0x50);
  return 0;
}



// ==== FUN_00014964 @ 00014964 size=108

undefined4 FUN_00014964(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (*(int *)(PTR_DAT_000280cc + -0x7bd4) < 1) {
    return 0xffffffff;
  }
  iVar5 = *(int *)(PTR_DAT_000280cc + -0x7be0);
  if (param_1 != *(int *)(iVar5 + 0x1c)) {
    iVar3 = 0;
    iVar2 = iVar5;
    do {
      iVar5 = iVar2 + 0x80;
      iVar3 = iVar3 + 1;
      if (iVar3 == *(int *)(PTR_DAT_000280cc + -0x7bd4)) {
        return 0xffffffff;
      }
      piVar1 = (int *)(iVar2 + 0x9c);
      iVar2 = iVar5;
    } while (param_1 != *piVar1);
  }
  uVar4 = (*(code *)PTR_pthread_mutex_lock_000281bc)(iVar5 + 0x50);
  return uVar4;
}



// ==== FUN_000149d0 @ 000149d0 size=108

undefined4 FUN_000149d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (*(int *)(PTR_DAT_000280cc + -0x7bd4) < 1) {
    return 0xffffffff;
  }
  iVar5 = *(int *)(PTR_DAT_000280cc + -0x7be0);
  if (param_1 != *(int *)(iVar5 + 0x1c)) {
    iVar3 = 0;
    iVar2 = iVar5;
    do {
      iVar5 = iVar2 + 0x80;
      iVar3 = iVar3 + 1;
      if (iVar3 == *(int *)(PTR_DAT_000280cc + -0x7bd4)) {
        return 0xffffffff;
      }
      piVar1 = (int *)(iVar2 + 0x9c);
      iVar2 = iVar5;
    } while (param_1 != *piVar1);
  }
  uVar4 = (*(code *)PTR_pthread_mutex_unlock_000281ec)(iVar5 + 0x50);
  return uVar4;
}



// ==== FUN_00014a3c @ 00014a3c size=52

void FUN_00014a3c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_000280d8 + 0x2dec))(0,param_1,param_2,param_3);
  return;
}



// ==== FUN_00014a70 @ 00014a70 size=52

void FUN_00014a70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_000280d8 + 0x2dec))(1,param_1,param_2,param_3);
  return;
}



// ==== FUN_00014aa4 @ 00014aa4 size=52

void FUN_00014aa4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_000280d8 + 0x3278))(0,param_1,param_2,param_3);
  return;
}



// ==== FUN_00014ad8 @ 00014ad8 size=52

void FUN_00014ad8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_000280d8 + 0x3278))(1,param_1,param_2,param_3);
  return;
}



// ==== FUN_00014b0c @ 00014b0c size=308

undefined4 FUN_00014b0c(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [4];
  undefined4 local_20;
  
  if (param_2 < 0x2000) {
    iVar1 = -(param_2 + 0x1bU & 0xfffffff8);
    auStack_24[iVar1] = 0x80;
    (&stack0xffffffd8)[iVar1] = 0x24;
    auStack_24[iVar1 + 1] = 0xe1;
    uVar2 = (*(code *)PTR_FUN_0002814c)
                      ((int)((ulonglong)param_3 * 16000),(int)((ulonglong)param_3 * 16000 >> 0x20),
                       1000,0);
    uVar2 = (*(code *)PTR_FUN_00028150)(uVar2);
    *(undefined4 *)((int)&local_20 + iVar1) = uVar2;
    local_20._2_2_ = (undefined2)(param_2 << 3);
    local_20._0_2_ = 0x10;
    (*(code *)PTR_swab_00028274)(&local_20,&stack0xffffffe8 + iVar1,4);
    (*(code *)PTR_memcpy_0002827c)(&stack0xffffffec + iVar1,param_1,param_2);
    uVar2 = (*(code *)(PTR_000280d8 + 0x2be0))(0xffffffff,1,&stack0xffffffd8 + iVar1,param_2 + 0x14)
    ;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ==== FUN_00014c40 @ 00014c40 size=236

void FUN_00014c40(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  
  puVar1 = PTR_DAT_000280cc;
  iVar3 = *(int *)(PTR_DAT_000280cc + -0x7be0);
  if (iVar3 != 0) {
    if (0 < *(int *)(PTR_DAT_000280cc + -0x7bd4)) {
      iVar4 = 0;
      pcVar6 = (code *)(PTR_000280d8 + 0x301c);
      while( true ) {
        iVar5 = iVar4 * 0x80;
        iVar4 = iVar4 + 1;
        (*pcVar6)(iVar3 + iVar5);
        (*(code *)PTR_pthread_mutex_destroy_000281c0)(*(int *)(puVar1 + -0x7be0) + iVar5 + 0x50);
        if (*(int *)(puVar1 + -0x7bd4) <= iVar4) break;
        iVar3 = *(int *)(puVar1 + -0x7be0);
      }
      iVar3 = *(int *)(PTR_DAT_000280cc + -0x7be0);
    }
    (*(code *)PTR_free_00028188)(iVar3);
    puVar2 = PTR_free_00028188;
    *(undefined4 *)(puVar1 + -0x7be0) = 0;
    (*(code *)puVar2)(*(undefined4 *)(puVar1 + -0x7bdc));
    *(undefined4 *)(puVar1 + -0x7bdc) = 0;
  }
  return;
}



// ==== FUN_00014d30 @ 00014d30 size=204

void FUN_00014d30(void)

{
  undefined *puVar1;
  int *piVar2;
  
  puVar1 = PTR_DAT_000280cc;
  if (*(int *)(PTR_DAT_000280cc + -0x7fa0) != -1) {
    (*(code *)PTR_munmap_00028298)(*(int *)(PTR_DAT_000280cc + -0x7fa0),0x1b412c);
    *(undefined4 *)(puVar1 + -0x7fa0) = 0xffffffff;
  }
  if (*(int *)(puVar1 + -0x7f9c) != 0) {
    (*(code *)PTR_sem_close_00028214)();
    *(undefined4 *)(puVar1 + -0x7f9c) = 0;
  }
  if (*(int *)(puVar1 + -0x7f98) != 0) {
    (*(code *)PTR_sem_close_00028214)();
    *(undefined4 *)(puVar1 + -0x7f98) = 0;
  }
  piVar2 = (int *)(PTR_DAT_000280cc + -0x7f94);
  do {
    if (*piVar2 != 0) {
      (*(code *)PTR_sem_close_00028214)(*piVar2);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
  } while (piVar2 != (int *)(puVar1 + -0x7f50));
  return;
}



// ==== FUN_00014dfc @ 00014dfc size=156

void FUN_00014dfc(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_000280cc;
  (*(code *)PTR_sem_wait_0002825c)(*(undefined4 *)(PTR_DAT_000280cc + -0x7f98));
  iVar2 = **(int **)(puVar1 + -0x7fa0) + 1;
  **(int **)(puVar1 + -0x7fa0) = iVar2;
  if (iVar2 != 1) {
    (*(code *)PTR_sem_post_00028258)(*(undefined4 *)(puVar1 + -0x7f98));
    return;
  }
  (*(code *)PTR_sem_wait_0002825c)(*(undefined4 *)(puVar1 + -0x7f9c));
  (*(code *)PTR_sem_post_00028258)(*(undefined4 *)(puVar1 + -0x7f98));
  return;
}



// ==== FUN_00015008 @ 00015008 size=200

void FUN_00015008(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = (code *)(PTR_000280d8 + 0x4f14);
  uVar1 = (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2 + 0x12,1);
  if (*(byte *)(param_2 + 0x12) != 1) {
    bVar2 = *(byte *)(param_2 + 0x12) ^ 2;
    uVar4 = 0xffffffff;
    if (bVar2 == 0) {
      uVar4 = 4;
    }
    uVar3 = 5;
    if (bVar2 != 0) {
      uVar3 = 0;
    }
    *param_3 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00015098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(uVar1,param_2 + 0x13,uVar4);
    return;
  }
  *param_3 = 6;
                    /* WARNING: Could not recover jumptable at 0x000150c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(uVar1,param_2 + 0x13,5);
  return;
}



// ==== FUN_000151c4 @ 000151c4 size=264

undefined4 FUN_000151c4(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*param_1 == 0) {
    param_3 = param_3 + *(int *)(*(int *)(PTR_DAT_000280cc + -0x7fa0) + 8);
    if (param_3 < 1) {
      return 0;
    }
  }
  else {
    param_3 = param_3 + *(int *)(*(int *)(PTR_DAT_000280cc + -0x7fa0) + 8);
    if (param_3 <= *param_2) {
      return 0;
    }
    if (param_3 < 1) {
      return 0;
    }
  }
  iVar1 = (*(code *)PTR_realloc_0002820c)(*param_1,param_3);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_000281b4)();
    (*(code *)PTR_error_000281d4)(0,*puVar2,PTR_000280d8 + 0x7cc0,PTR_000280d8 + 0x7d90,param_3);
    return 0xffffffff;
  }
  *param_1 = iVar1;
  *param_2 = param_3;
  return 0;
}



// ==== FUN_00015328 @ 00015328 size=752

undefined4 FUN_00015328(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  int *piVar6;
  undefined *puVar7;
  undefined1 auStack_38 [28];
  
  iVar2 = (*(code *)PTR_shm_open_00028294)(PTR_000280d8 + 0x7cd8,0x102,0x1a4);
  if (iVar2 == -1) {
    puVar4 = (undefined4 *)(*(code *)PTR___errno_location_000281b4)();
    (*(code *)PTR_error_000281d4)(0,*puVar4,PTR_000280d8 + 0x7cec,PTR_000280d8 + 0x7dbc);
  }
  else {
    (*(code *)PTR_ftruncate_00028248)(iVar2,0x1b412c);
    iVar3 = (*(code *)PTR_mmap_00028244)(0,0x1b412c,3,1,iVar2,0);
    puVar5 = PTR_000280d8;
    if (iVar3 != -1) {
      (*(code *)PTR_close_0002818c)(iVar2);
      puVar7 = PTR_sem_open_000281e0;
      puVar1 = PTR_DAT_000280cc;
      *(int *)(PTR_DAT_000280cc + -0x7fa0) = iVar3;
      *(int *)(puVar1 + -0x7f50) = iVar3 + 0x1b412c;
      iVar2 = (*(code *)puVar7)(puVar5 + 0x7d10,0x102,0x1a4,1);
      *(int *)(puVar1 + -0x7f9c) = iVar2;
      if (iVar2 == 0) {
        puVar5 = puVar5 + 0x7d10;
        puVar4 = (undefined4 *)(*(code *)PTR___errno_location_000281b4)();
      }
      else {
        iVar2 = 0;
        puVar7 = PTR_000280d8 + 0x7d3c;
        piVar6 = (int *)(PTR_DAT_000280cc + -0x7f94);
        do {
          (*(code *)PTR_snprintf_0002829c)(auStack_38,0x17,puVar7,iVar2);
          iVar2 = iVar2 + 1;
          iVar3 = (*(code *)PTR_sem_open_000281e0)(auStack_38,0x102,0x1a4,0);
          *piVar6 = iVar3;
          puVar5 = PTR_000280d8;
          if (iVar3 == 0) {
            puVar4 = (undefined4 *)(*(code *)PTR___errno_location_000281b4)();
            (*(code *)PTR_error_000281d4)
                      (0,*puVar4,PTR_000280d8 + 0x7d24,PTR_000280d8 + 0x7dbc,auStack_38);
            goto LAB_0001550c;
          }
          piVar6 = piVar6 + 1;
        } while (iVar2 != 0x11);
        iVar2 = (*(code *)PTR_sem_open_000281e0)(PTR_000280d8 + 0x7d54,0x102,0x1a4,1);
        *(int *)(puVar1 + -0x7f98) = iVar2;
        if (iVar2 != 0) {
          return 0;
        }
        puVar5 = puVar5 + 0x7d54;
        puVar4 = (undefined4 *)(*(code *)PTR___errno_location_000281b4)();
      }
      (*(code *)PTR_error_000281d4)(0,*puVar4,PTR_000280d8 + 0x7d24,PTR_000280d8 + 0x7dbc,puVar5);
LAB_0001550c:
      (*(code *)(PTR_000280d8 + 0x4d30))();
      return 0xffffffff;
    }
    puVar4 = (undefined4 *)(*(code *)PTR___errno_location_000281b4)();
    (*(code *)PTR_error_000281d4)(0,*puVar4,PTR_000280d8 + 32000,PTR_000280d8 + 0x7dbc);
    (*(code *)PTR_close_0002818c)(iVar2);
  }
  return 0xffffffff;
}



// ==== FUN_00015618 @ 00015618 size=740

undefined4 FUN_00015618(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined *puVar7;
  undefined1 auStack_38 [28];
  
  puVar1 = PTR_000280d8;
  puVar7 = PTR_DAT_000280cc;
  iVar3 = (*(code *)PTR_sem_open_000281e0)(PTR_000280d8 + 0x7d54,2);
  *(int *)(puVar7 + -0x7f98) = iVar3;
  if (iVar3 == 0) {
    puVar5 = (undefined4 *)(*(code *)PTR___errno_location_000281b4)();
    (*(code *)PTR_error_000281d4)
              (0,*puVar5,PTR_000280d8 + 0x7d24,PTR_000280d8 + 0x7db0,puVar1 + 0x7d54);
    return 0xffffffff;
  }
  iVar3 = (*(code *)PTR_shm_open_00028294)(PTR_000280d8 + 0x7cd8,2,0);
  if (iVar3 == -1) {
    puVar5 = (undefined4 *)(*(code *)PTR___errno_location_000281b4)();
    (*(code *)PTR_error_000281d4)(0,*puVar5,PTR_000280d8 + 0x7cec,PTR_000280d8 + 0x7db0);
  }
  else {
    iVar4 = (*(code *)PTR_mmap_00028244)(0,0x1b412c,3,1,iVar3,0);
    puVar1 = PTR_000280d8;
    if (iVar4 == -1) {
      puVar5 = (undefined4 *)(*(code *)PTR___errno_location_000281b4)();
      (*(code *)PTR_error_000281d4)(0,*puVar5,PTR_000280d8 + 32000,PTR_000280d8 + 0x7db0);
      (*(code *)PTR_close_0002818c)(iVar3);
    }
    else {
      (*(code *)PTR_close_0002818c)(iVar3);
      puVar2 = PTR_sem_open_000281e0;
      *(int *)(puVar7 + -0x7fa0) = iVar4;
      *(int *)(puVar7 + -0x7f50) = iVar4 + 0x1b412c;
      iVar3 = (*(code *)puVar2)(puVar1 + 0x7d10,2);
      *(int *)(puVar7 + -0x7f9c) = iVar3;
      if (iVar3 == 0) {
        puVar5 = (undefined4 *)(*(code *)PTR___errno_location_000281b4)();
        (*(code *)PTR_error_000281d4)
                  (0,*puVar5,PTR_000280d8 + 0x7d24,PTR_000280d8 + 0x7db0,puVar1 + 0x7d10);
      }
      else {
        iVar3 = 0;
        puVar7 = PTR_000280d8 + 0x7d3c;
        piVar6 = (int *)(PTR_DAT_000280cc + -0x7f94);
        while( true ) {
          (*(code *)PTR_snprintf_0002829c)(auStack_38,0x17,puVar7,iVar3);
          iVar3 = iVar3 + 1;
          iVar4 = (*(code *)PTR_sem_open_000281e0)(auStack_38,2);
          *piVar6 = iVar4;
          if (iVar4 == 0) break;
          piVar6 = piVar6 + 1;
          if (iVar3 == 0x11) {
            return 0;
          }
        }
        puVar5 = (undefined4 *)(*(code *)PTR___errno_location_000281b4)();
        (*(code *)PTR_error_000281d4)
                  (0,*puVar5,PTR_000280d8 + 0x7d24,PTR_000280d8 + 0x7db0,auStack_38);
      }
    }
  }
  (*(code *)(PTR_000280d8 + 0x4d30))();
  return 0xffffffff;
}



// ==== FUN_00015c60 @ 00015c60 size=128

void FUN_00015c60(int param_1,undefined2 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_000280cc;
  (*(code *)PTR_sem_wait_0002825c)(*(undefined4 *)(PTR_DAT_000280cc + -0x7f9c));
  *(undefined2 *)(*(int *)(puVar1 + -0x7fa0) + (param_1 + 2) * 0x10 + 8) = param_2;
  (*(code *)PTR_sem_post_00028258)(*(undefined4 *)(puVar1 + -0x7f9c));
  return;
}



// ==== FUN_00015ce0 @ 00015ce0 size=636

undefined4 FUN_00015ce0(int param_1,int *param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  undefined *puVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ushort local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  int local_38 [2];
  int local_30;
  int local_2c;
  
  puVar1 = PTR_DAT_000280cc;
  (*(code *)(PTR_000280d8 + 0x4dfc))();
  if (*(int *)(*(int *)(puVar1 + -0x7fa0) + param_1 * 0x10 + 0x1c) == 0) {
    (*(code *)(PTR_000280d8 + 0x4e98))();
    uVar4 = 0xfffffffe;
  }
  else {
    iVar3 = (*(code *)(PTR_000280d8 + 0x51c4))(param_2,param_3,param_4);
    if (iVar3 < 0) {
      (*(code *)(PTR_000280d8 + 0x4e98))();
      uVar4 = 0xffffffff;
    }
    else {
      iVar6 = *(int *)(puVar1 + -0x7fa0);
      local_2c = *param_2;
      iVar8 = *(int *)(iVar6 + 4);
      iVar9 = iVar6 + param_1 * 0x10 + 0x18;
      iVar3 = *(int *)(iVar6 + 0x10);
      local_30 = iVar9;
      if (0 < iVar8) {
        pcVar7 = (code *)(PTR_000280d8 + 0x4f14);
        do {
          uVar4 = (*pcVar7)(iVar6 + iVar3 + 300,&local_50,0x16);
          uVar2 = local_40;
          iVar5 = (*(code *)(PTR_000280d8 + 0x52cc))
                            (*(undefined4 *)(iVar9 + 0xc),*(undefined2 *)(iVar9 + 0x10),local_40,
                             local_4c);
          if (iVar5 != 0) {
            if ((uVar2 & 0x20) == 0) {
              local_38[0] = 0;
              *(undefined1 *)((int)param_5 + 0x12) = 0;
              local_40 = uVar2;
            }
            else {
              uVar4 = (*(code *)(PTR_000280d8 + 0x5008))(uVar4,param_5,local_38);
            }
            *(ushort *)((int)param_5 + 10) = local_40;
            param_5[3] = local_50 - local_38[0];
            *param_5 = local_48;
            param_5[1] = local_44;
            *(undefined2 *)(param_5 + 2) = local_3e;
            *(undefined2 *)(param_5 + 4) = local_3c;
            (*pcVar7)(uVar4,local_2c + param_4,local_50 - local_38[0]);
            iVar3 = *(int *)(iVar6 + 0x18);
            *(int *)(iVar9 + 0xc) = local_4c;
            if (local_4c == iVar3) {
              *(undefined4 *)(local_30 + 4) = 0;
            }
            uVar4 = param_5[3];
            goto LAB_00015ea4;
          }
          iVar5 = iVar3 + local_50;
          iVar8 = (iVar8 + -0x16) - local_50;
          iVar3 = iVar5 + 0x16;
          if (0x1b3fff < iVar3) {
            iVar3 = iVar5 + -0x1b3fea;
          }
        } while (0 < iVar8);
      }
      uVar4 = 0xfffffffe;
      *(undefined4 *)(local_30 + 4) = 0;
LAB_00015ea4:
      (*(code *)(PTR_000280d8 + 0x4e98))();
    }
  }
  return uVar4;
}



// ==== FUN_00015f5c @ 00015f5c size=660

undefined4 FUN_00015f5c(int param_1,int *param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ushort local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  int local_38 [2];
  int local_30;
  int local_2c;
  
  puVar1 = PTR_DAT_000280cc;
  (*(code *)(PTR_000280d8 + 0x4dfc))();
  if (*(int *)(*(int *)(puVar1 + -0x7fa0) + param_1 * 0x10 + 0x1c) == 0) {
    (*(code *)(PTR_000280d8 + 0x4e98))();
    return 0xfffffffe;
  }
  iVar2 = (*(code *)(PTR_000280d8 + 0x51c4))(param_2,param_3,param_4);
  if (iVar2 < 0) {
    (*(code *)(PTR_000280d8 + 0x4e98))();
    return 0xffffffff;
  }
  iVar5 = *(int *)(puVar1 + -0x7fa0);
  iVar8 = *(int *)(iVar5 + 4);
  iVar9 = iVar5 + param_1 * 0x10 + 0x18;
  local_2c = *param_2 + param_4;
  iVar2 = *(int *)(iVar5 + 0x10);
  local_30 = iVar9;
  if (0 < iVar8) {
    iVar10 = -1;
    pcVar6 = (code *)(PTR_000280d8 + 0x4f14);
    pcVar7 = (code *)(PTR_000280d8 + 0x52cc);
    do {
      (*pcVar6)(iVar5 + iVar2 + 300,&local_50,0x16);
      iVar3 = (*pcVar7)(*(undefined4 *)(iVar9 + 0xc),*(undefined2 *)(iVar9 + 0x10),local_40,local_4c
                       );
      if (iVar3 != 0) {
        iVar10 = iVar2;
      }
      iVar8 = (iVar8 + -0x16) - local_50;
      iVar2 = local_50 + 0x16 + iVar2;
      if (0x1b3fff < iVar2) {
        iVar2 = iVar2 + -0x1b4000;
      }
    } while (0 < iVar8);
    if (iVar10 != -1) {
      uVar4 = (*pcVar6)(iVar5 + iVar10 + 300,&local_50,0x16);
      if ((local_40 & 0x20) == 0) {
        local_38[0] = 0;
        *(undefined1 *)((int)param_5 + 0x12) = 0;
      }
      else {
        uVar4 = (*(code *)(PTR_000280d8 + 0x5008))(uVar4,param_5,local_38);
      }
      *param_5 = local_48;
      *(ushort *)((int)param_5 + 10) = local_40;
      param_5[1] = local_44;
      param_5[3] = local_50 - local_38[0];
      *(undefined2 *)(param_5 + 2) = local_3e;
      *(undefined2 *)(param_5 + 4) = local_3c;
      (*pcVar6)(uVar4,local_2c,local_50 - local_38[0]);
      iVar2 = *(int *)(iVar5 + 0x18);
      *(int *)(iVar9 + 0xc) = local_4c;
      if (local_4c == iVar2) {
        *(undefined4 *)(local_30 + 4) = 0;
      }
      uVar4 = param_5[3];
      goto LAB_0001613c;
    }
  }
  uVar4 = 0xfffffffe;
  *(undefined4 *)(local_30 + 4) = 0;
LAB_0001613c:
  (*(code *)(PTR_000280d8 + 0x4e98))();
  return uVar4;
}



// ==== FUN_000161f0 @ 000161f0 size=196

undefined4 FUN_000161f0(int param_1)

{
  undefined *puVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  
  puVar1 = PTR_DAT_000280cc;
  pcVar4 = (code *)(PTR_000280d8 + 0x4dfc);
  iVar2 = *(int *)(PTR_DAT_000280cc + -0x7fa0) + param_1 * 0x10;
  pcVar3 = (code *)(PTR_000280d8 + 0x4e98);
  while ((*pcVar4)(), *(int *)(iVar2 + 0x1c) == 0) {
    *(undefined4 *)(iVar2 + 0x20) = 1;
    (*pcVar3)();
    (*(code *)PTR_sem_wait_0002825c)(*(undefined4 *)(puVar1 + (param_1 + 2) * 4 + -0x7f9c));
  }
  *(undefined4 *)(iVar2 + 0x20) = 0;
  (*pcVar3)();
  return 0;
}



// ==== FUN_000162b4 @ 000162b4 size=156

int FUN_000162b4(void)

{
  int iVar1;
  undefined1 auStack_20 [12];
  int local_14;
  
  (*(code *)(PTR_000280d8 + 0x4dfc))();
  iVar1 = *(int *)(PTR_DAT_000280cc + -0x7fa0);
  if (*(int *)(iVar1 + 4) < 1) {
    local_14 = 0;
  }
  else {
    (*(code *)(PTR_000280d8 + 0x4f14))(iVar1 + *(int *)(iVar1 + 0x10) + 300,auStack_20,0x16);
    local_14 = *(int *)(iVar1 + 0x14) - local_14;
  }
  (*(code *)(PTR_000280d8 + 0x4e98))();
  return local_14;
}



// ==== FUN_000163cc @ 000163cc size=452

void FUN_000163cc(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int local_60;
  undefined4 local_5c;
  int local_54;
  ushort local_50;
  undefined1 auStack_48 [12];
  int local_3c;
  int local_30;
  
  (*(code *)(PTR_000280d8 + 0x4dfc))();
  iVar3 = *(int *)(PTR_DAT_000280cc + -0x7fa0);
  if ((param_2 == 0) || (*(int *)(iVar3 + 4) < 1)) {
    iVar5 = param_1 << 4;
    *(undefined4 *)(iVar3 + (param_1 + 2) * 0x10 + 4) = 0;
  }
  else {
    pcVar6 = (code *)(PTR_000280d8 + 0x4f14);
    (*pcVar6)(iVar3 + *(int *)(iVar3 + 0x10) + 300,auStack_48,0x16);
    if (param_2 < (uint)(*(int *)(iVar3 + 0x14) - local_3c)) {
      iVar5 = param_1 * 0x10;
      iVar4 = *(int *)(iVar3 + 4);
      local_30 = param_2 + local_3c;
      iVar1 = *(int *)(iVar3 + 0x10);
      if (0 < iVar4) {
        do {
          (*pcVar6)(iVar3 + iVar1 + 300,&local_60,0x16);
          if (((local_50 & 0x200) == 0) && ((uint)(local_54 - local_30) < 0x7fffffff)) break;
          iVar2 = iVar1 + local_60;
          iVar4 = (iVar4 + -0x16) - local_60;
          iVar1 = iVar2 + 0x16;
          *(undefined4 *)(iVar3 + iVar5 + 0x24) = local_5c;
          if (0x1b3fff < iVar1) {
            iVar1 = iVar2 + -0x1b3fea;
          }
        } while (0 < iVar4);
      }
    }
    else {
      iVar5 = param_1 << 4;
      *(undefined4 *)(iVar3 + (param_1 + 2) * 0x10 + 4) = *(undefined4 *)(iVar3 + 0x18);
    }
  }
  pcVar6 = (code *)(PTR_000280d8 + 0x4e98);
  *(undefined4 *)(iVar3 + iVar5 + 0x1c) = 1;
  (*pcVar6)();
  return;
}



// ==== FUN_00016590 @ 00016590 size=160

void FUN_00016590(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  while( true ) {
    iVar1 = (*(code *)PTR_FUN_00028160)(param_1,param_2,param_3,param_4,param_5);
    if (-2 < iVar1) break;
    (*(code *)PTR_FUN_00028164)(param_1);
  }
  return;
}



// ==== FUN_00016630 @ 00016630 size=160

void FUN_00016630(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  while( true ) {
    iVar1 = (*(code *)PTR_FUN_00028168)(param_1,param_2,param_3,param_4,param_5);
    if (-2 < iVar1) break;
    (*(code *)PTR_FUN_00028164)(param_1);
  }
  return;
}



// ==== FUN_000166d0 @ 000166d0 size=192

int FUN_000166d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x32;
  do {
    iVar2 = iVar2 + -1;
    iVar1 = (*(code *)PTR_FUN_00028160)(param_1,param_2,param_3,param_4,param_5);
    if (0 < iVar1) {
      return iVar1;
    }
    (*(code *)PTR_ms_sleep_00028198)(10);
  } while (iVar2 != 0);
  return iVar1;
}



// ==== FUN_00016790 @ 00016790 size=192

int FUN_00016790(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x32;
  do {
    iVar2 = iVar2 + -1;
    iVar1 = (*(code *)PTR_FUN_00028168)(param_1,param_2,param_3,param_4,param_5);
    if (0 < iVar1) {
      return iVar1;
    }
    (*(code *)PTR_ms_sleep_00028198)(10);
  } while (iVar2 != 0);
  return iVar1;
}



// ==== FUN_00016850 @ 00016850 size=40

uint FUN_00016850(uint param_1)

{
  return param_1 << 0x18 | param_1 >> 0x18 | param_1 >> 8 & 0xff00 | (param_1 & 0xff00) << 8;
}



// ==== FUN_00016880 @ 00016880 size=1472

void FUN_00016880(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  if ((int)param_2 < 0) {
    param_2 = -(uint)(param_1 != 0) - param_2;
  }
  if ((int)param_4 < 0) {
    param_3 = -param_3;
    param_4 = -(uint)(param_3 != 0) - param_4;
  }
  if (param_4 == 0) {
    if (param_2 < param_3) {
      if (param_3 < 0x10000) {
        iVar1 = 8;
        if (param_3 < 0x100) {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = 0x10;
        if (0xffffff < param_3) {
          iVar1 = 0x18;
        }
      }
      uVar2 = 0x20 - ((uint)(byte)PTR_DAT_0002816c[param_3 >> iVar1] + iVar1);
      if (uVar2 != 0) {
        param_3 = param_3 << (uVar2 & 0x1f);
      }
      if (param_3 >> 0x10 == 0) {
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
      }
    }
    else {
      if (param_3 == 0) {
        param_3 = 1 / 0;
        trap(0x1c00);
      }
      if (param_3 < 0x10000) {
        iVar1 = 8;
        if (param_3 < 0x100) {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = 0x10;
        if (0xffffff < param_3) {
          iVar1 = 0x18;
        }
      }
      uVar2 = 0x20 - ((uint)(byte)PTR_DAT_0002816c[param_3 >> iVar1] + iVar1);
      if ((uVar2 != 0) && (param_3 = param_3 << (uVar2 & 0x1f), param_3 >> 0x10 == 0)) {
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
      }
      if (param_3 >> 0x10 == 0) {
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
      }
    }
  }
  else if (param_4 <= param_2) {
    if (param_4 < 0x10000) {
      iVar1 = 8;
      if (param_4 < 0x100) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0x10;
      if (0xffffff < param_4) {
        iVar1 = 0x18;
      }
    }
    uVar2 = 0x20 - ((uint)(byte)PTR_DAT_0002816c[param_4 >> iVar1] + iVar1);
    if ((uVar2 != 0) &&
       ((param_4 << (uVar2 & 0x1f) |
        param_3 >> ((uint)(byte)PTR_DAT_0002816c[param_4 >> iVar1] + iVar1 & 0x1f)) >> 0x10 == 0)) {
      trap(0x1c00);
      trap(0x1c00);
      trap(0x1c00);
      trap(0x1c00);
    }
  }
  return;
}



// ==== FUN_00016e40 @ 00016e40 size=1388

undefined8 FUN_00016e40(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if (param_4 == 0) {
    if (param_3 <= param_2) {
      if (param_3 == 0) {
        param_3 = 1 / 0;
        trap(0x1c00);
      }
      if (param_3 < 0x10000) {
        iVar3 = 8;
        if (param_3 < 0x100) {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = 0x10;
        if (0xffffff < param_3) {
          iVar3 = 0x18;
        }
      }
      uVar9 = (uint)(byte)PTR_DAT_0002816c[param_3 >> iVar3] + iVar3;
      uVar7 = 0x20 - uVar9;
      if (uVar7 == 0) {
        param_2 = param_2 - param_3;
        uVar7 = 1;
        uVar6 = param_1;
      }
      else {
        param_3 = param_3 << (uVar7 & 0x1f);
        uVar4 = param_2 >> (uVar9 & 0x1f);
        uVar6 = param_1 << (uVar7 & 0x1f);
        uVar2 = param_3 >> 0x10;
        uVar10 = uVar4 / uVar2;
        if (uVar2 == 0) {
          trap(0x1c00);
        }
        uVar7 = param_2 << (uVar7 & 0x1f) | param_1 >> (uVar9 & 0x1f);
        if (uVar2 == 0) {
          trap(0x1c00);
        }
        uVar5 = uVar4 % uVar2 << 0x10 | uVar7 >> 0x10;
        uVar9 = uVar10 * (param_3 & 0xffff);
        uVar4 = uVar10;
        if (uVar5 < uVar9) {
          uVar5 = uVar5 + param_3;
          uVar4 = uVar10 - 1;
          if ((param_3 <= uVar5) && (uVar5 < uVar9)) {
            uVar4 = uVar10 - 2;
            uVar5 = uVar5 + param_3;
          }
        }
        uVar10 = (uVar5 - uVar9) / uVar2;
        if (uVar2 == 0) {
          trap(0x1c00);
          trap(0x1c00);
        }
        param_2 = (uVar5 - uVar9) % uVar2 << 0x10 | uVar7 & 0xffff;
        uVar9 = uVar10 * (param_3 & 0xffff);
        uVar7 = uVar10;
        if (param_2 < uVar9) {
          param_2 = param_2 + param_3;
          uVar7 = uVar10 - 1;
          if ((param_3 <= param_2) && (param_2 < uVar9)) {
            uVar7 = uVar10 - 2;
            param_2 = param_2 + param_3;
          }
        }
        param_2 = param_2 - uVar9;
        uVar7 = uVar7 | uVar4 << 0x10;
      }
      uVar9 = param_3 >> 0x10;
      uVar2 = param_2 / uVar9;
      if (uVar9 == 0) {
        trap(0x1c00);
      }
      if (uVar9 == 0) {
        trap(0x1c00);
      }
      uVar5 = param_2 % uVar9 << 0x10 | uVar6 >> 0x10;
      uVar4 = uVar2 * (param_3 & 0xffff);
      uVar10 = uVar2;
      if (uVar5 < uVar4) {
        uVar5 = uVar5 + param_3;
        uVar10 = uVar2 - 1;
        if ((param_3 <= uVar5) && (uVar5 < uVar4)) {
          uVar10 = uVar2 - 2;
          uVar5 = uVar5 + param_3;
        }
      }
      uVar2 = (uVar5 - uVar4) / uVar9;
      if (uVar9 == 0) {
        trap(0x1c00);
        trap(0x1c00);
      }
      uVar4 = (uVar5 - uVar4) % uVar9 << 0x10 | uVar6 & 0xffff;
      uVar6 = uVar2 * (param_3 & 0xffff);
      uVar9 = uVar2;
      if (uVar4 < uVar6) {
        uVar4 = uVar4 + param_3;
        uVar9 = uVar2 - 1;
        if ((param_3 <= uVar4) && (uVar4 < uVar6)) {
          uVar9 = uVar2 - 2;
        }
      }
      uVar9 = uVar9 | uVar10 << 0x10;
      goto LAB_000173a4;
    }
    if (param_3 < 0x10000) {
      iVar3 = 8;
      if (param_3 < 0x100) {
        iVar3 = 0;
      }
    }
    else {
      iVar3 = 0x10;
      if (0xffffff < param_3) {
        iVar3 = 0x18;
      }
    }
    uVar9 = param_3 >> iVar3;
    uVar7 = 0x20 - ((uint)(byte)PTR_DAT_0002816c[uVar9] + iVar3);
    if (uVar7 != 0) {
      param_3 = param_3 << (uVar7 & 0x1f);
      param_2 = param_2 << (uVar7 & 0x1f) |
                param_1 >> ((uint)(byte)PTR_DAT_0002816c[uVar9] + iVar3 & 0x1f);
      param_1 = param_1 << (uVar7 & 0x1f);
    }
    uVar7 = param_3 >> 0x10;
    uVar9 = param_2 / uVar7;
    if (uVar7 == 0) {
      trap(0x1c00);
    }
    if (uVar7 == 0) {
      trap(0x1c00);
    }
    uVar4 = param_2 % uVar7 << 0x10 | param_1 >> 0x10;
    uVar6 = uVar9 * (param_3 & 0xffff);
    uVar2 = uVar9;
    if (uVar4 < uVar6) {
      uVar4 = uVar4 + param_3;
      uVar2 = uVar9 - 1;
      if ((param_3 <= uVar4) && (uVar4 < uVar6)) {
        uVar2 = uVar9 - 2;
        uVar4 = uVar4 + param_3;
      }
    }
    uVar10 = (uVar4 - uVar6) / uVar7;
    if (uVar7 == 0) {
      trap(0x1c00);
      trap(0x1c00);
    }
    uVar6 = (uVar4 - uVar6) % uVar7 << 0x10 | param_1 & 0xffff;
    uVar7 = uVar10 * (param_3 & 0xffff);
    uVar9 = uVar10;
    if (uVar6 < uVar7) {
      uVar6 = uVar6 + param_3;
      uVar9 = uVar10 - 1;
      if ((param_3 <= uVar6) && (uVar6 < uVar7)) {
        uVar9 = uVar10 - 2;
      }
    }
    uVar9 = uVar9 | uVar2 << 0x10;
  }
  else {
    uVar7 = 0;
    if (param_2 < param_4) {
      uVar9 = 0;
      goto LAB_000173a4;
    }
    if (param_4 < 0x10000) {
      iVar3 = 8;
      if (param_4 < 0x100) {
        iVar3 = 0;
      }
    }
    else {
      iVar3 = 0x10;
      if (0xffffff < param_4) {
        iVar3 = 0x18;
      }
    }
    uVar7 = (uint)(byte)PTR_DAT_0002816c[param_4 >> iVar3] + iVar3;
    uVar6 = 0x20 - uVar7;
    uVar9 = param_2 >> (uVar7 & 0x1f);
    if (uVar6 == 0) {
      if (param_4 < param_2) {
        uVar7 = 0;
        uVar9 = 1;
        goto LAB_000173a4;
      }
      uVar9 = param_1 < param_3 ^ 1;
    }
    else {
      uVar2 = param_4 << (uVar6 & 0x1f) | param_3 >> (uVar7 & 0x1f);
      uVar4 = uVar2 >> 0x10;
      uVar10 = uVar9 / uVar4;
      if (uVar4 == 0) {
        trap(0x1c00);
      }
      uVar7 = param_2 << (uVar6 & 0x1f) | param_1 >> (uVar7 & 0x1f);
      if (uVar4 == 0) {
        trap(0x1c00);
      }
      uVar8 = uVar9 % uVar4 << 0x10 | uVar7 >> 0x10;
      uVar9 = uVar10 * (uVar2 & 0xffff);
      uVar5 = uVar10;
      if (uVar8 < uVar9) {
        uVar8 = uVar8 + uVar2;
        uVar5 = uVar10 - 1;
        if ((uVar2 <= uVar8) && (uVar8 < uVar9)) {
          uVar5 = uVar10 - 2;
          uVar8 = uVar8 + uVar2;
        }
      }
      uVar10 = (uVar8 - uVar9) / uVar4;
      if (uVar4 == 0) {
        trap(0x1c00);
        trap(0x1c00);
      }
      uVar8 = (uVar8 - uVar9) % uVar4 << 0x10 | uVar7 & 0xffff;
      uVar4 = uVar10 * (uVar2 & 0xffff);
      uVar9 = uVar10;
      if (uVar8 < uVar4) {
        uVar8 = uVar8 + uVar2;
        uVar9 = uVar10 - 1;
        if ((uVar2 <= uVar8) && (uVar8 < uVar4)) {
          uVar9 = uVar10 - 2;
          uVar8 = uVar8 + uVar2;
        }
      }
      uVar9 = uVar9 | uVar5 << 0x10;
      lVar1 = (ulonglong)uVar9 * (ulonglong)(param_3 << (uVar6 & 0x1f));
      uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
      if ((uVar2 <= uVar8 - uVar4) &&
         ((uVar7 = 0, uVar2 != uVar8 - uVar4 || ((uint)lVar1 <= param_1 << (uVar6 & 0x1f)))))
      goto LAB_000173a4;
      uVar9 = uVar9 - 1;
    }
  }
  uVar7 = 0;
LAB_000173a4:
  return CONCAT44(uVar7,uVar9);
}



// ==== FUN_000173b0 @ 000173b0 size=88

void FUN_000173b0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)(PTR_DAT_000280cc + -0x8000);
  pcVar2 = (code *)*puVar1;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



