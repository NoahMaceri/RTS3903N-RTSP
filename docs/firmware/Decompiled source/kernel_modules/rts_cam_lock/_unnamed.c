/* rts_cam_lock — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rts_cam_lock.h"

// ==== FUN_00010030 @ 00010030 size=52

undefined4 * FUN_00010030(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    for (puVar1 = (undefined4 *)*param_1; puVar1 != param_1; puVar1 = (undefined4 *)*puVar1) {
      if (puVar1[2] == param_2) {
        return puVar1;
      }
    }
  }
  return (undefined4 *)0x0;
}



// ==== FUN_0001007c @ 0001007c size=224

int FUN_0001007c(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)dev_get_drvdata();
  mutex_lock(puVar1 + 3);
  iVar4 = 0;
  for (puVar3 = (undefined4 *)*puVar1; puVar3 != puVar1; puVar3 = (undefined4 *)*puVar3) {
    iVar2 = scnprintf(param_3 + iVar4,0x1000,"0x%lx\t%16s\t%d\t%d\n",puVar3[2],puVar3 + 3,
                      *(undefined4 *)(puVar3[7] + 0x1c),*(undefined4 *)(puVar3[7] + 0xc));
    iVar4 = iVar4 + iVar2;
  }
  mutex_unlock(puVar1 + 3);
  return iVar4;
}



// ==== FUN_0001015c @ 0001015c size=68

undefined4 FUN_0001015c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = rtscam_devdata();
  uVar2 = dev_get_drvdata(iVar1 + 8);
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  return 0;
}



// ==== FUN_00010568 @ 00010568 size=124

int FUN_00010568(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18 [2];
  
  uVar1 = dev_get_drvdata();
  iVar2 = _kstrtoul(param_3,0,local_18);
  if ((iVar2 == 0) && (iVar2 = rtscam_lock_wait(uVar1,local_18[0]), iVar2 == 0)) {
    iVar2 = param_4;
  }
  return iVar2;
}



// ==== FUN_00010678 @ 00010678 size=124

int FUN_00010678(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18 [2];
  
  uVar1 = dev_get_drvdata();
  iVar2 = _kstrtoul(param_3,0,local_18);
  if ((iVar2 == 0) && (iVar2 = rtscam_lock_post(uVar1,local_18[0]), iVar2 == 0)) {
    iVar2 = param_4;
  }
  return iVar2;
}



// ==== FUN_000106f4 @ 000106f4 size=324

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000106f4(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar3 = *(int *)(param_1 + 0x70);
  if (iVar3 == 0) {
    uVar2 = 0xffffffea;
  }
  else if ((param_2 >> 8 & 0xff) == 0x6c) {
    if (param_2 == 0x80046c04) {
      param_3 = (undefined4 *)*param_3;
      UNRECOVERED_JUMPTABLE = rtscam_lock_wait;
      goto LAB_000107d0;
    }
    if (param_2 < 0x80046c05) {
      if (param_2 == 0x80046c01) {
        param_3 = (undefined4 *)*param_3;
        UNRECOVERED_JUMPTABLE = rtscam_lock_alloc;
LAB_000107d0:
                    /* WARNING: Could not recover jumptable at 0x000107d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*UNRECOVERED_JUMPTABLE)(iVar3,param_3);
        return uVar2;
      }
      if (param_2 == 0x80046c02) {
        param_3 = (undefined4 *)*param_3;
        UNRECOVERED_JUMPTABLE = rtscam_lock_free;
        goto LAB_000107d0;
      }
    }
    else {
      if (param_2 == 0x80086c03) {
        uVar2 = *param_3;
        uVar4 = param_3[1];
        if (iVar3 == 0) {
          uVar2 = 0xffffffea;
        }
        else {
          mutex_lock(iVar3 + 0xc);
          iVar1 = FUN_00010030(iVar3,uVar2);
          if (iVar1 == 0) {
            uVar2 = 0xffffffea;
          }
          else {
            uVar2 = rtscam_init_wait_queue(*(undefined4 *)(iVar1 + 0x1c),uVar4);
          }
          mutex_unlock(iVar3 + 0xc);
        }
        return uVar2;
      }
      if (param_2 == 0x80146c06) {
        UNRECOVERED_JUMPTABLE = rtscam_lock_set_name;
        goto LAB_000107d0;
      }
      if (param_2 == 0x80046c05) {
        param_3 = (undefined4 *)*param_3;
        UNRECOVERED_JUMPTABLE = rtscam_lock_post;
        goto LAB_000107d0;
      }
    }
    uVar2 = 0xffffffe7;
    if ((_rtscam_debug & 1) != 0) {
      printk(&_LC1,param_2,0x6c,param_2 & 0xff);
      uVar2 = 0xffffffe7;
    }
  }
  else {
    uVar2 = 0xffffffe7;
  }
  return uVar2;
}



