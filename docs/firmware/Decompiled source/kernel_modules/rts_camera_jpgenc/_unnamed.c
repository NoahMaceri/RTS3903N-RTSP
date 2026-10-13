/* rts_camera_jpgenc — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rts_camera_jpgenc.h"

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



// ==== FUN_00010308 @ 00010308 size=264

/* WARNING: Removing unreachable block (ram,0x000103b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00010308(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x70);
  if (((param_2 >> 8 & 0xff) != 0x6a) || (4 < (param_2 & 0xff))) {
    return 0xffffffe7;
  }
  if (param_2 == 0x20006a04) {
    *(uint *)(iVar2 + 0x44) = *(uint *)(iVar2 + 0x44) & 0xfffffffe;
    return 0;
  }
  if (param_2 < 0x20006a05) {
    if (param_2 == 0x20006a03) {
      rts_sys_force_reset(2);
      return 0;
    }
LAB_000103bc:
    uVar1 = 0xffffffe7;
    if ((_rtscam_debug & 1) != 0) {
      printk(&_LC5,param_2,0x6a);
      uVar1 = 0xffffffe7;
    }
  }
  else {
    if (param_2 == 0x40046a01) {
      uVar1 = *(undefined4 *)(iVar2 + 8);
    }
    else {
      if (param_2 != 0x40046a02) goto LAB_000103bc;
      uVar1 = *(undefined4 *)(iVar2 + 0xc);
    }
    *param_3 = uVar1;
    uVar1 = 0;
  }
  return uVar1;
}



// ==== FUN_00010428 @ 00010428 size=80

void FUN_00010428(int *param_1)

{
  rts_sys_force_reset(2);
  __udelay(1);
                    /* WARNING: Could not recover jumptable at 0x00010470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(1,(undefined4 *)*param_1 + 1);
  return;
}



// ==== FUN_0001050c @ 0001050c size=256

undefined4 FUN_0001050c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = rtscam_devdata();
  iVar1 = dev_get_drvdata(iVar1 + 8);
  *(int *)(param_1 + 0x70) = iVar1;
  mutex_lock(iVar1 + 0x1c);
  iVar2 = *(int *)(iVar1 + 0x18);
  *(int *)(iVar1 + 0x18) = iVar2 + 1;
  if (iVar2 == 0) {
    FUN_00010428(iVar1 + 0x40);
    iowrite32(-(uint)(*(int *)(iVar1 + 0x10) != 0),*(int *)(iVar1 + 4) + 0x60);
    iowrite32(0xffffffff,*(int *)(iVar1 + 4) + 100);
    iowrite32(*(int *)(*(int *)(iVar1 + 0x40) + 0xc) * 0x80000 +
              *(int *)(*(int *)(iVar1 + 0x40) + 8) * 8,*(int *)(iVar1 + 4) + 0x4c);
  }
  mutex_unlock(iVar1 + 0x1c);
  return 0;
}



// ==== FUN_00010a3c @ 00010a3c size=152

undefined4 FUN_00010a3c(int param_1)

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
    iVar1 = *(int *)(iVar3 + 0x18);
    *(int *)(iVar3 + 0x18) = iVar1 + -1;
    if (iVar1 == 1) {
      (*(code *)**(undefined4 **)(iVar3 + 0x40))(0,0);
    }
    mutex_unlock(iVar3 + 0x1c);
    uVar2 = 0;
  }
  return uVar2;
}



