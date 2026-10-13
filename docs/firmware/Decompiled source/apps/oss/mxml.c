/* oss — "mxml" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "oss.h"

// ==== mxml_opaque_cb @ 0052d080 size=8

undefined4 mxml_opaque_cb(void)

{
  return 2;
}



// ==== _mxml_global @ 0052d090 size=180

int _mxml_global(void)

{
  undefined *puVar1;
  int iVar2;
  
  (*(code *)PTR_pthread_once_00561568)(PTR_DAT_00560988 + -0x4c50,PTR_LAB_00560984 + -0x2fb8);
  puVar1 = PTR_DAT_0056098c;
  iVar2 = (*(code *)PTR_pthread_getspecific_005615a8)(*(undefined4 *)(PTR_DAT_0056098c + 0x8f0));
  if (iVar2 == 0) {
    iVar2 = (*(code *)PTR_calloc_005615d8)(1,0x1a4);
    (*(code *)PTR_pthread_setspecific_00561554)(*(undefined4 *)(puVar1 + 0x8f0),iVar2);
    *(undefined4 *)(iVar2 + 4) = 1;
    *(undefined **)(iVar2 + 8) = PTR__mxml_entity_cb_00560990;
    *(undefined4 *)(iVar2 + 0x198) = 0x48;
  }
  return iVar2;
}



// ==== mxml_error @ 0052d144 size=184

void mxml_error(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 local_res4;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 auStack_418 [1024];
  undefined4 *local_18;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_resc = param_4;
  puVar1 = (undefined4 *)(*(code *)PTR__mxml_global_00560994)();
  if (param_1 != 0) {
    local_18 = &local_res4;
    (*(code *)PTR_vsnprintf_0056154c)(auStack_418,0x400,param_1);
    if ((code *)*puVar1 == (code *)0x0) {
      (*(code *)PTR_fprintf_005615ac)
                (*(undefined4 *)PTR_stderr_00561584,PTR_DAT_00560998 + -0x21d8,auStack_418);
    }
    else {
      (*(code *)*puVar1)(auStack_418);
    }
  }
  return;
}



// ==== _mxml_strdupf @ 0052d200 size=88

undefined4
_mxml_strdupf(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_res4;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_10;
  undefined4 *local_c;
  
  local_c = &local_res4;
  local_res4 = param_2;
  local_res8 = param_3;
  local_resc = param_4;
  iVar1 = (*(code *)PTR_vasprintf_00561570)(&local_10,param_1);
  if (iVar1 < 0) {
    local_10 = 0;
  }
  return local_10;
}



// ==== _mxml_vstrdupf @ 0052d258 size=76

undefined4 _mxml_vstrdupf(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_10 [3];
  
  iVar1 = (*(code *)PTR_vasprintf_00561570)(local_10,param_1,param_2);
  if (iVar1 < 0) {
    local_10[0] = 0;
  }
  return local_10[0];
}



// ==== _mxml_entity_cb @ 0052d4d0 size=268

undefined4 _mxml_entity_cb(undefined4 param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  puVar1 = PTR_DAT_0056098c;
  uVar2 = 0x100;
  uVar6 = 0;
  while( true ) {
    uVar5 = uVar2;
    if ((int)(uVar5 - uVar6) < 2) {
      iVar3 = (*(code *)PTR_strcmp_005614e4)(param_1,*(undefined4 *)(puVar1 + uVar6 * 8 + -0xbf0));
      if (iVar3 == 0) {
        uVar4 = *(undefined4 *)((int)(puVar1 + uVar6 * 8 + -0xbf0) + 4);
      }
      else {
        iVar3 = (*(code *)PTR_strcmp_005614e4)(param_1,*(undefined4 *)(puVar1 + uVar5 * 8 + -0xbf0))
        ;
        if (iVar3 == 0) {
          uVar4 = *(undefined4 *)((int)(puVar1 + uVar5 * 8 + -0xbf0) + 4);
        }
        else {
          uVar4 = 0xffffffff;
        }
      }
      return uVar4;
    }
    uVar7 = (uVar6 + uVar5) / 2;
    iVar3 = (*(code *)PTR_strcmp_005614e4)(param_1,*(undefined4 *)(puVar1 + uVar7 * 8 + -0xbf0));
    if (iVar3 == 0) break;
    uVar2 = uVar7;
    if (-1 < iVar3) {
      uVar2 = uVar5;
      uVar6 = uVar7;
    }
  }
  return *(undefined4 *)((int)(puVar1 + uVar7 * 8 + -0xbf0) + 4);
}



