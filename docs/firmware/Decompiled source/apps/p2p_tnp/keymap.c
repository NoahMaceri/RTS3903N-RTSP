/* p2p_tnp — "keymap" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "p2p_tnp.h"

// ==== keymap_Init @ 00425b80 size=40

/* tnp::keymap_Init() */

void tnp::keymap_Init(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_gKeyMapLock_004685c4;
  puVar1 = PTR_gKeyMap_004685c0;
  UNRECOVERED_JUMPTABLE = PTR_MUTEX_INIT_0046830c;
  *(undefined4 *)(PTR_gKeyMap_004685c0 + 4) = 0;
  *(undefined4 *)puVar1 = 0;
                    /* WARNING: Could not recover jumptable at 0x00425ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(puVar2);
  return;
}



// ==== keymap_Add @ 00425ba8 size=408

/* tnp::keymap_Add(char*, unsigned int, char*) */

undefined4 tnp::keymap_Add(char *param_1,uint param_2,char *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = PTR_gKeyMap_004685c0;
  (*(code *)PTR_MUTEX_LOCK_004682a0)(PTR_gKeyMapLock_004685c4);
  iVar5 = *(int *)puVar1;
  iVar4 = iVar5;
  while( true ) {
    if (iVar4 == 0) {
      iVar4 = (*(code *)PTR_malloc_00468890)(0x30);
      if (iVar4 == 0) {
        (*(code *)PTR_MUTEX_RELEASE_004682b4)(PTR_gKeyMapLock_004685c4);
        return 0xffffffff;
      }
      (*(code *)PTR_strcpy_004688e0)(iVar4,param_1);
      puVar2 = PTR_strcpy_004688e0;
      *(uint *)(iVar4 + 8) = param_2;
      (*(code *)puVar2)(iVar4 + 0xc,param_3);
      *(undefined4 *)(iVar4 + 0x2c) = 0;
      if (iVar5 == 0) {
        *(int *)(puVar1 + 4) = iVar4;
        *(int *)puVar1 = iVar4;
      }
      else {
        iVar5 = *(int *)(puVar1 + 4);
        *(int *)(puVar1 + 4) = iVar4;
        *(int *)(iVar5 + 0x2c) = iVar4;
      }
      (*(code *)PTR_MUTEX_RELEASE_004682b4)(PTR_gKeyMapLock_004685c4);
      return 0;
    }
    iVar3 = (*(code *)PTR_strcmp_004687fc)(iVar4,param_1);
    if ((iVar3 == 0) && (*(uint *)(iVar4 + 8) == param_2)) break;
    iVar4 = *(int *)(iVar4 + 0x2c);
  }
  (*(code *)PTR_strcpy_004688e0)(iVar4 + 0xc,param_3);
  (*(code *)PTR_MUTEX_RELEASE_004682b4)(PTR_gKeyMapLock_004685c4);
  return 0;
}



// ==== keymap_Clear @ 00425d40 size=124

/* tnp::keymap_Clear() */

void tnp::keymap_Clear(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_gKeyMap_004685c0;
  (*(code *)PTR_MUTEX_LOCK_004682a0)(PTR_gKeyMapLock_004685c4);
  iVar2 = *(int *)puVar1;
  while (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 0x2c);
    (*(code *)PTR_free_004687a8)();
  }
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)puVar1 = 0;
  (*(code *)PTR_MUTEX_RELEASE_004682b4)(PTR_gKeyMapLock_004685c4);
  return;
}



// ==== keymap_Search @ 00425dbc size=328

/* tnp::keymap_Search(char*, unsigned int, char*) */

undefined4 tnp::keymap_Search(char *param_1,uint param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  
  (*(code *)PTR_MUTEX_LOCK_004682a0)(PTR_gKeyMapLock_004685c4);
  iVar2 = *(int *)PTR_gKeyMap_004685c0;
  while( true ) {
    if (iVar2 == 0) {
      (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x390c,param_1,param_2);
      (*(code *)PTR_MUTEX_RELEASE_004682b4)(PTR_gKeyMapLock_004685c4);
      return 0xffffffff;
    }
    iVar1 = (*(code *)PTR_strcmp_004687fc)(iVar2,param_1);
    if ((iVar1 == 0) && (*(uint *)(iVar2 + 8) == param_2)) break;
    iVar2 = *(int *)(iVar2 + 0x2c);
  }
  (*(code *)PTR_strcpy_004688e0)(param_3,iVar2 + 0xc);
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x3938,param_1,param_2,param_3);
  (*(code *)PTR_MUTEX_RELEASE_004682b4)(PTR_gKeyMapLock_004685c4);
  return 0;
}



// ==== keymap_Dump @ 00425f04 size=144

/* tnp::keymap_Dump() */

void tnp::keymap_Dump(void)

{
  int iVar1;
  undefined *puVar2;
  
  (*(code *)PTR_MUTEX_LOCK_004682a0)(PTR_gKeyMapLock_004685c4);
  iVar1 = *(int *)PTR_gKeyMap_004685c0;
  if (iVar1 != 0) {
    puVar2 = PTR_DAT_00468298 + -0x38d8;
    do {
      (*(code *)PTR_PPPP_DebugTrace_00468294)(1,puVar2,iVar1,*(undefined4 *)(iVar1 + 8),iVar1 + 0xc)
      ;
      iVar1 = *(int *)(iVar1 + 0x2c);
    } while (iVar1 != 0);
  }
  (*(code *)PTR_MUTEX_RELEASE_004682b4)(PTR_gKeyMapLock_004685c4);
  return;
}



// ==== keymap_UnInit @ 00425f94 size=60

/* tnp::keymap_UnInit() */

void tnp::keymap_UnInit(void)

{
  (*(code *)PTR_keymap_Clear_004685c8)();
  (*(code *)PTR_MUTEX_DESTROY_0046834c)(PTR_gKeyMapLock_004685c4);
  return;
}



