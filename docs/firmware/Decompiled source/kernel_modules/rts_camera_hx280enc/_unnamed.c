/* rts_camera_hx280enc — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rts_camera_hx280enc.h"

// ==== FUN_000100b8 @ 000100b8 size=120

undefined4 FUN_000100b8(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  int local_18;
  
  iVar1 = dev_get_drvdata();
  sscanf(param_3,"%lu");
  if (local_18 != 0) {
    *(int *)(*(int *)(iVar1 + 0x40) + 4) = local_18;
  }
  return param_4;
}



// ==== FUN_00010130 @ 00010130 size=76

void FUN_00010130(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = dev_get_drvdata();
  scnprintf(param_3,0x1000,&_LC1,*(undefined4 *)(*(int *)(iVar1 + 0x40) + 4));
  return;
}



// ==== FUN_000103fc @ 000103fc size=224

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000103fc(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      if ((_rtscam_debug & 0x80) != 0) {
        printk(&_LC7);
      }
      (*(code *)**(undefined4 **)(param_1 + 0x40))(0,0);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
  }
  else if (*(int *)(param_1 + 0x18) != 1) {
    rts_sys_force_reset(1);
    __udelay(1);
    (*(code *)**(undefined4 **)(param_1 + 0x40))(1,*(undefined4 **)(param_1 + 0x40) + 1);
    uVar1 = _rtscam_debug & 0x80;
    *(undefined4 *)(param_1 + 0x18) = 1;
    if (uVar1 != 0) {
      printk(&_LC6);
    }
  }
  return 0;
}



// ==== FUN_00010988 @ 00010988 size=152

undefined4 FUN_00010988(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (iVar3 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    mutex_lock(iVar3 + 0x1c);
    iVar1 = *(int *)(iVar3 + 0x14);
    *(int *)(iVar3 + 0x14) = iVar1 + -1;
    if (iVar1 == 1) {
      FUN_000103fc(iVar3,0);
    }
    mutex_unlock(iVar3 + 0x1c);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== FUN_00010a20 @ 00010a20 size=176

undefined4 FUN_00010a20(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = rtscam_devdata();
  iVar1 = dev_get_drvdata(iVar1 + 8);
  mutex_lock(iVar1 + 0x1c);
  iVar2 = *(int *)(iVar1 + 0x14);
  *(int *)(iVar1 + 0x14) = iVar2 + 1;
  if (iVar2 == 0) {
    FUN_000103fc(iVar1,1);
  }
  mutex_unlock(iVar1 + 0x1c);
  *(int *)(param_1 + 0x70) = iVar1;
  return 0;
}



