/* rts_camera_osd2 — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rts_camera_osd2.h"

// ==== FUN_000100b0 @ 000100b0 size=220

/* WARNING: Removing unreachable block (ram,0x00010134) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000100b0(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x70);
  if (((param_2 >> 8 & 0xff) == 0x6f) && ((param_2 & 0xff) < 4)) {
    if (param_2 == 0x40046f01) {
      uVar2 = *(undefined4 *)(iVar1 + 8);
    }
    else {
      if (param_2 != 0x40046f02) {
        if (param_2 == 0x20006f03) {
          *(uint *)(iVar1 + 0x44) = *(uint *)(iVar1 + 0x44) & 0xfffffffe;
          return 0;
        }
        if ((_rtscam_debug & 1) == 0) {
          return 0xffffffe7;
        }
        printk(&_LC0,param_2,0x6f);
        return 0xffffffe7;
      }
      uVar2 = *(undefined4 *)(iVar1 + 0xc);
    }
    *param_3 = uVar2;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffe7;
  }
  return uVar2;
}



// ==== FUN_0001018c @ 0001018c size=120

undefined4 FUN_0001018c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (iVar2 == 0) {
    uVar1 = 0xffffffea;
  }
  else {
    mutex_lock(iVar2 + 0x1c);
    *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + -1;
    mutex_unlock(iVar2 + 0x1c);
    uVar1 = 0;
  }
  return uVar1;
}



// ==== FUN_000105ec @ 000105ec size=228

undefined4 FUN_000105ec(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = ioread32(*(int *)(param_2 + 4) + 0x40);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      uVar2 = 1;
      if ((uVar1 & 2) != 0) {
        iowrite32(2,*(int *)(param_2 + 4) + 0x40);
      }
    }
    else {
      iowrite32(1,*(int *)(param_2 + 4) + 0x40);
      *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) | 1;
      __wake_up(param_2 + 0x48,1,1,0);
      rtscam_ge_kill_fasync(*(undefined4 *)(param_2 + 0x14),0x16,0x20001);
      uVar2 = 1;
    }
  }
  return uVar2;
}



// ==== FUN_00010748 @ 00010748 size=228

undefined4 FUN_00010748(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = rtscam_devdata();
  iVar1 = dev_get_drvdata(iVar1 + 8);
  *(int *)(param_1 + 0x70) = iVar1;
  mutex_lock(iVar1 + 0x1c);
  iVar2 = *(int *)(iVar1 + 0x18);
  *(int *)(iVar1 + 0x18) = iVar2 + 1;
  if (iVar2 == 0) {
    iowrite32(**(undefined4 **)(iVar1 + 0x40),*(int *)(iVar1 + 4) + 0x5c);
    uVar3 = 0xffffff03;
    if (*(int *)(iVar1 + 0x10) == 0) {
      uVar3 = 0;
    }
    iowrite32(uVar3,*(int *)(iVar1 + 4) + 0x3c);
    iowrite32(0xffffffff,*(int *)(iVar1 + 4) + 0x40);
  }
  mutex_unlock(iVar1 + 0x1c);
  return 0;
}



