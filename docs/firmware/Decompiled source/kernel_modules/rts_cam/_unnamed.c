/* rts_cam — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rts_cam.h"

// ==== FUN_00010190 @ 00010190 size=172

undefined4 FUN_00010190(char *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    if (param_1[1] == '\0') {
      piVar1 = *(int **)(param_1 + 4);
      if (piVar1 != (int *)0x0) {
        while ((*piVar1 != 0 && (piVar1[1] != 0))) {
          piVar1 = (int *)piVar1[2];
          if (piVar1 == (int *)0x0) {
            return 0;
          }
        }
      }
    }
    else if ((((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) != 0)) &&
             (*(int *)(param_1 + 0xc) != 0)) &&
            ((*(int *)(param_1 + 0x10) != 0 && (uVar2 = 0xffffffea, *(int *)(param_1 + 0x14) != 0)))
            ) {
      if (*(int *)(param_1 + 0x18) != 0) {
        uVar2 = 0;
      }
      return uVar2;
    }
  }
  return 0xffffffea;
}



// ==== FUN_00010280 @ 00010280 size=192

undefined4 FUN_00010280(char *param_1)

{
  size_t sVar1;
  int iVar2;
  undefined4 uVar3;
  
  sVar1 = strlen("clock_");
  iVar2 = strncasecmp(param_1,"clock_",sVar1);
  if (iVar2 == 0) {
    sVar1 = strlen("clock_");
    param_1 = param_1 + sVar1;
  }
  iVar2 = strcasecmp(param_1,"monotonic");
  if (iVar2 == 0) {
    rts_clock_param = 1;
    uVar3 = 0;
  }
  else {
    iVar2 = strcasecmp(param_1,"realtime");
    if (iVar2 == 0) {
      rts_clock_param = 0;
      uVar3 = 0;
    }
    else {
      uVar3 = 0xffffffea;
    }
  }
  return uVar3;
}



// ==== FUN_00010510 @ 00010510 size=288

undefined4 FUN_00010510(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 1) == '\0') {
    for (piVar2 = *(int **)(param_1 + 4); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
      if (param_2 * piVar2[1] == param_3 * *piVar2) {
        return 0;
      }
    }
    uVar1 = 0xffffffea;
    if ((rtscam_debug & 1) != 0) {
      printk(&_LC5);
      uVar1 = 0xffffffea;
    }
  }
  else if ((((param_3 - *(uint *)(param_1 + 0x10)) % *(uint *)(param_1 + 0x18) != 0) ||
           (uVar1 = 0,
           *(uint *)(param_1 + 8) < param_3 ||
           (param_3 < *(uint *)(param_1 + 0x10) ||
           ((param_2 - *(uint *)(param_1 + 0xc)) % *(uint *)(param_1 + 0x14) != 0 ||
           (*(uint *)(param_1 + 4) < param_2 || param_2 < *(uint *)(param_1 + 0xc)))))) &&
          (uVar1 = 0xffffffea, (rtscam_debug & 1) != 0)) {
    printk(&_LC5);
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



// ==== FUN_0001129c @ 0001129c size=120

undefined4 FUN_0001129c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)rtscam_devdata();
  if (*(code **)(*piVar1 + 4) == (code *)0x0) {
    uVar2 = 0xffffffea;
  }
  else {
    uVar2 = 0xffffffed;
    if ((piVar1[0x41] & 1U) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000112f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*piVar1 + 4))(param_1,param_2,param_3,param_4);
      return uVar2;
    }
  }
  return uVar2;
}



// ==== FUN_00011314 @ 00011314 size=120

undefined4 FUN_00011314(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)rtscam_devdata();
  if (*(code **)(*piVar1 + 8) == (code *)0x0) {
    uVar2 = 0xffffffea;
  }
  else {
    uVar2 = 0xffffffed;
    if ((piVar1[0x41] & 1U) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00011370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*piVar1 + 8))(param_1,param_2,param_3,param_4);
      return uVar2;
    }
  }
  return uVar2;
}



// ==== FUN_0001138c @ 0001138c size=104

undefined4 FUN_0001138c(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)rtscam_devdata();
  if (*(code **)(*piVar1 + 0xc) == (code *)0x0) {
    uVar2 = 0x45;
  }
  else {
    uVar2 = 0x18;
    if ((piVar1[0x41] & 1U) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000113d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*piVar1 + 0xc))(param_1,param_2);
      return uVar2;
    }
  }
  return uVar2;
}



// ==== FUN_000113f4 @ 000113f4 size=100

undefined4 FUN_000113f4(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)rtscam_devdata();
  if ((*(code **)(*piVar1 + 0x20) != (code *)0x0) && ((piVar1[0x41] & 1U) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001143c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*piVar1 + 0x20))(param_1,param_2);
    return uVar2;
  }
  return 0xffffffed;
}



// ==== FUN_000114c4 @ 000114c4 size=84

int FUN_000114c4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  ushort local_18 [6];
  
  iVar1 = kstrtou16(param_3,0,local_18);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x120) = (uint)local_18[0];
    iVar1 = param_4;
  }
  return iVar1;
}



// ==== FUN_00011560 @ 00011560 size=140

undefined4 FUN_00011560(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)rtscam_devdata(param_2);
  if ((piVar1[0x41] & 1U) == 0) {
    return 0xffffffed;
  }
  if (*(code **)(*piVar1 + 0x24) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000115b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*piVar1 + 0x24))();
    return uVar2;
  }
  uVar2 = fasync_helper(param_1,param_2,param_3,piVar1 + 0x4c);
  return uVar2;
}



// ==== FUN_000115ec @ 000115ec size=144

undefined4 FUN_000115ec(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)rtscam_devdata(param_2);
  if (*(code **)(*piVar1 + 0x1c) == (code *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x1c))(param_2);
  }
  FUN_00011560(0xffffffff,param_2,0);
  put_device(piVar1 + 2);
  return uVar2;
}



// ==== FUN_0001167c @ 0001167c size=168

int FUN_0001167c(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)rtscam_devdata(param_2);
  get_device(piVar1 + 2);
  iVar2 = 0;
  if ((*(code **)(*piVar1 + 0x18) != (code *)0x0) &&
     ((iVar2 = -0x13, (piVar1[0x41] & 1U) == 0 ||
      (iVar2 = (**(code **)(*piVar1 + 0x18))(param_2), iVar2 != 0)))) {
    put_device(piVar1 + 2);
  }
  return iVar2;
}



// ==== FUN_00011724 @ 00011724 size=292

int FUN_00011724(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)rtscam_devdata();
  if ((piVar1[0x41] & 1U) == 0) {
    return -0x13;
  }
  if (*(int *)(*piVar1 + 0x10) == 0) {
    iVar2 = -0x13;
    iVar3 = *piVar1;
  }
  else {
    iVar2 = mutex_lock_interruptible(piVar1 + 0x4d);
    if (iVar2 != 0) {
      return -0x200;
    }
    iVar2 = (**(code **)(*piVar1 + 0x10))(param_1,param_2,param_3);
    mutex_unlock(piVar1 + 0x4d);
    if (iVar2 != -0x19) {
      return iVar2;
    }
    iVar3 = *piVar1;
    iVar2 = -0x19;
  }
  if (*(code **)(iVar3 + 0x14) == (code *)0x0) {
    return iVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00011808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(iVar3 + 0x14))(param_1,param_2,param_3);
  return iVar2;
}



// ==== FUN_00011bb4 @ 00011bb4 size=192

void FUN_00011bb4(int param_1)

{
  uint uVar1;
  
  cdev_del(param_1 + 0xb8);
  mutex_lock(&DAT_00017810);
  uVar1 = *(uint *)(param_1 + 0xf8);
  *(undefined4 *)(&DAT_00017a20 + uVar1 * 4) = 0;
  *(uint *)(&DAT_00017a00 + (uVar1 >> 5) * 4) =
       *(uint *)(&DAT_00017a00 + (uVar1 >> 5) * 4) & ~(1 << (uVar1 & 0x1f));
  mutex_unlock(&DAT_00017810);
                    /* WARNING: Could not recover jumptable at 0x00011c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x124))(param_1 + -8);
  return;
}



// ==== FUN_00011df0 @ 00011df0 size=60

/* WARNING: Removing unreachable block (ram,0x00011e24) */

void FUN_00011df0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x34) == 1) {
    piVar1 = (int *)(*(int *)(param_1 + 0x38) + 0x134);
    *piVar1 = *piVar1 + -1;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



// ==== FUN_00011f7c @ 00011f7c size=228

undefined4 FUN_00011f7c(int param_1)

{
  uint uVar1;
  int iVar2;
  
  rtscam_video_release_ctrl();
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 0x68); uVar1 = uVar1 + 1) {
    iVar2 = *(int *)(param_1 + 0x6c) + uVar1 * 0x1c0;
    if (*(int *)(iVar2 + 8) != 0) {
      mutex_lock(iVar2 + 0x144);
      vb2_queue_release(iVar2 + 0xc);
      mutex_unlock(iVar2 + 0x144);
      video_unregister_device(*(undefined4 *)(iVar2 + 8));
      *(undefined4 *)(iVar2 + 8) = 0;
    }
  }
  return 0;
}



// ==== FUN_000120a0 @ 000120a0 size=572

/* WARNING: Removing unreachable block (ram,0x00012218) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000120a0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  undefined4 *puVar8;
  
  iVar1 = video_devdata();
  if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x108) & 1) != 0)) {
    piVar2 = (int *)dev_get_drvdata(iVar1 + 8);
    iVar5 = *piVar2;
    iVar1 = kmem_cache_alloc(_DAT_00018148,0x80d0);
    if (iVar1 == 0) {
      return -0xc;
    }
    iVar3 = try_module_get(**(undefined4 **)(iVar5 + 0x70));
    iVar6 = iVar5 + 0x84;
    if (iVar3 != 0) {
      iVar3 = mutex_lock_interruptible(iVar6);
      if (iVar3 == 0) {
        piVar4 = (int *)(iVar5 + 0xa8);
        iVar3 = *piVar4;
        *piVar4 = iVar3 + 1;
        if (iVar3 != 0) {
LAB_00012224:
          piVar2[0x6c] = piVar2[0x6c] + 1;
          mutex_unlock(iVar6);
          v4l2_fh_init(iVar1,piVar2[2]);
          v4l2_fh_add(iVar1);
          *(int **)(iVar1 + 0x38) = piVar2;
          *(undefined4 *)(iVar1 + 0x34) = 0;
          *(int *)(param_1 + 0x70) = iVar1;
          return 0;
        }
        pcVar7 = *(code **)(*(int *)(iVar5 + 0x70) + 4);
        if (pcVar7 == (code *)0x0) {
          iVar3 = -0x16;
        }
        else {
          iVar3 = (*pcVar7)(iVar5);
          if (-1 < iVar3) goto LAB_00012224;
        }
        if ((rtscam_debug & 1) != 0) {
          printk(&_LC2,iVar3);
        }
        *piVar4 = *piVar4 + -1;
        mutex_unlock(iVar6);
        puVar8 = *(undefined4 **)(iVar5 + 0x70);
      }
      else {
        iVar3 = -0x200;
        puVar8 = *(undefined4 **)(iVar5 + 0x70);
      }
      module_put(*puVar8);
      return iVar3;
    }
    if ((rtscam_debug & 1) != 0) {
      printk(&_LC1);
    }
  }
  return -0x13;
}



// ==== FUN_000122dc @ 000122dc size=224

undefined4 FUN_000122dc(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = video_devdata();
  iVar1 = dev_get_drvdata(iVar1 + 8);
  if (param_1 == *(int *)(iVar1 + 0x1b4)) {
    iVar2 = mutex_lock_interruptible(iVar1 + 0x138);
    if (iVar2 == 0) {
      mutex_lock(iVar1 + 0x144);
      vb2_mmap(iVar1 + 0xc,param_2);
      mutex_unlock(iVar1 + 0x144);
      mutex_unlock(iVar1 + 0x138);
      uVar3 = 0;
    }
    else {
      uVar3 = 0xfffffe00;
    }
  }
  else {
    uVar3 = 0xffffffea;
  }
  return uVar3;
}



// ==== FUN_000123d4 @ 000123d4 size=192

int FUN_000123d4(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_2 == *(int *)(*param_1 + 0x80)) {
    iVar1 = rtscam_try_user_format(param_1,param_2[3],param_2[1],param_2[2]);
    iVar3 = 0;
    if ((iVar1 != 0) && (iVar3 = iVar1, (rtscam_debug & 1) != 0)) {
      uVar2 = param_2[3];
      printk(&_LC3,uVar2 & 0xff,uVar2 >> 8 & 0xff,uVar2 >> 0x10 & 0xff,uVar2 >> 0x18,param_2[1],
             param_2[2]);
    }
  }
  else {
    iVar3 = -0x16;
  }
  return iVar3;
}



// ==== FUN_00012494 @ 00012494 size=196

undefined4 FUN_00012494(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = video_devdata();
  iVar1 = dev_get_drvdata(iVar1 + 8);
  mutex_lock(iVar1 + 0x138);
  mutex_lock(iVar1 + 0x144);
  uVar2 = vb2_poll(iVar1 + 0xc,param_1,param_2);
  mutex_unlock(iVar1 + 0x144);
  mutex_unlock(iVar1 + 0x138);
  return uVar2;
}



// ==== FUN_00012558 @ 00012558 size=124

/* WARNING: Removing unreachable block (ram,0x000125c0) */

undefined4 FUN_00012558(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((*(uint *)(*(int *)(param_1 + 0x38) + 0x11c) & 1) != 0) {
    return 0xfffffff0;
  }
  if (*(int *)(param_1 + 0x34) != 1) {
    piVar2 = (int *)(*(int *)(param_1 + 0x38) + 0x134);
    iVar1 = *piVar2;
    *piVar2 = iVar1 + 1;
    if (iVar1 != 0) {
      piVar2 = (int *)(*(int *)(param_1 + 0x38) + 0x134);
      *piVar2 = *piVar2 + -1;
      return 0xfffffff0;
    }
    *(undefined4 *)(param_1 + 0x34) = 1;
  }
  return 0;
}



// ==== FUN_00013490 @ 00013490 size=280

undefined4 FUN_00013490(int param_1,int param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  int unaff_gp;
  
  mutex_lock(param_1 + 0x144);
  if (param_2 == 0) {
    rtscam_clr_delayed_buffer(param_1);
    arch_local_irq_disable();
    *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
    rtscam_clr_ready_buffer(param_1);
    setCopReg(0,Status,(Status | 0x1f) ^ 0x1e);
    *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
    if ((*(uint *)(unaff_gp + 8) >> 2 & 1) != 0) {
      preempt_schedule();
    }
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    pcVar2 = vb2_streamoff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    pcVar2 = vb2_streamon;
  }
  uVar1 = (*pcVar2)(param_1 + 0xc,uVar1);
  mutex_unlock(param_1 + 0x144);
  return uVar1;
}



// ==== FUN_000135a8 @ 000135a8 size=336

int FUN_000135a8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  
  if (param_2 == 0) {
    if ((param_1[0x47] & 1U) == 0) {
      return 0;
    }
    pcVar3 = *(code **)(*(int *)(*param_1 + 0x70) + 0x20);
    if (pcVar3 == (code *)0x0) {
      return -0x16;
    }
    iVar2 = (*pcVar3)();
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_00013490(param_1,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar4 = *param_1;
    iVar2 = *(int *)(iVar4 + 0xa4) + -1;
LAB_000136cc:
    iVar1 = 0;
    *(int *)(iVar4 + 0xa4) = iVar2;
  }
  else {
    if ((param_1[0x47] & 1U) == 0) {
      mutex_lock(param_1 + 0x51);
      iVar2 = param_1[0x2f];
      mutex_unlock(param_1 + 0x51);
      if (iVar2 != 0) {
        iVar2 = FUN_00013490(param_1,1);
        if (iVar2 != 0) {
          return iVar2;
        }
        pcVar3 = *(code **)(*(int *)(*param_1 + 0x70) + 0x20);
        if (pcVar3 == (code *)0x0) {
          iVar2 = -0x16;
LAB_0001365c:
          FUN_00013490(param_1,0);
          return iVar2;
        }
        iVar2 = (*pcVar3)(param_1,1);
        if (iVar2 != 0) goto LAB_0001365c;
        iVar4 = *param_1;
        iVar2 = *(int *)(iVar4 + 0xa4) + 1;
        goto LAB_000136cc;
      }
    }
    iVar1 = -0x16;
  }
  return iVar1;
}



// ==== FUN_000136f8 @ 000136f8 size=460

undefined4 FUN_000136f8(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  
  iVar1 = video_devdata();
  iVar3 = *(int *)(param_1 + 0x70);
  piVar2 = (int *)dev_get_drvdata(iVar1 + 8);
  iVar1 = *piVar2;
  iVar4 = iVar1 + 0x84;
  if (*(int *)(iVar3 + 0x34) == 1) {
    mutex_lock(iVar4);
    mutex_lock(piVar2 + 0x4e);
    FUN_000135a8(piVar2,0);
    mutex_unlock(piVar2 + 0x4e);
    mutex_unlock(iVar4);
    mutex_lock(piVar2 + 0x51);
    vb2_queue_release(piVar2 + 3);
    mutex_unlock(piVar2 + 0x51);
  }
  FUN_00011df0(iVar3);
  v4l2_fh_del(iVar3);
  v4l2_fh_exit(iVar3);
  kfree(iVar3);
  *(undefined4 *)(param_1 + 0x70) = 0;
  mutex_lock(iVar4);
  piVar2[0x6c] = piVar2[0x6c] + -1;
  iVar3 = *(int *)(iVar1 + 0xa8);
  *(int *)(iVar1 + 0xa8) = iVar3 + -1;
  if ((iVar3 == 1) && (pcVar5 = *(code **)(*(int *)(iVar1 + 0x70) + 8), pcVar5 != (code *)0x0)) {
    (*pcVar5)(iVar1);
  }
  mutex_unlock(iVar4);
  module_put(**(undefined4 **)(iVar1 + 0x70));
  return 0;
}



// ==== FUN_0001480c @ 0001480c size=76

undefined4 FUN_0001480c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x70) + 0x14);
  if (pcVar1 != (code *)0x0) {
    uVar2 = (*pcVar1)(param_1,*(undefined1 *)(param_2 + 9),param_3,*(undefined1 *)(param_2 + 10),
                      *(undefined1 *)(param_2 + 0xb),param_4);
    return uVar2;
  }
  return 0xffffffea;
}



// ==== FUN_00014858 @ 00014858 size=332

int FUN_00014858(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 + 0xc;
  if ((((((*(uint *)(param_2 + 0x18) & 0x80) == 0) ||
        (iVar1 = FUN_0001480c(param_1,iVar2,0x87,
                              *(int *)(param_2 + 0x20) + (uint)*(byte *)(param_2 + 0x17) * 5),
        -1 < iVar1)) &&
       (((*(uint *)(param_2 + 0x18) & 4) == 0 ||
        (iVar1 = FUN_0001480c(param_1,iVar2,0x82,
                              *(int *)(param_2 + 0x20) + (uint)*(byte *)(param_2 + 0x17) * 2),
        -1 < iVar1)))) &&
      (((*(uint *)(param_2 + 0x18) & 8) == 0 ||
       (iVar1 = FUN_0001480c(param_1,iVar2,0x83,
                             *(int *)(param_2 + 0x20) + (uint)*(byte *)(param_2 + 0x17) * 3),
       -1 < iVar1)))) &&
     (((*(uint *)(param_2 + 0x18) & 0x10) == 0 ||
      (iVar1 = FUN_0001480c(param_1,iVar2,0x84,
                            *(int *)(param_2 + 0x20) + (uint)*(byte *)(param_2 + 0x17) * 4),
      -1 < iVar1)))) {
    iVar1 = 0;
    *(byte *)(param_2 + 0x1d) = *(byte *)(param_2 + 0x1d) | 8;
  }
  return iVar1;
}



// ==== FUN_00014ce0 @ 00014ce0 size=300

int FUN_00014ce0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  for (piVar1 = *(int **)(param_1 + 0x9c); piVar1 != (int *)(param_1 + 0x9c);
      piVar1 = (int *)*piVar1) {
    if ((piVar1[7] & 0x1000U) != 0) {
      if ((piVar1[6] & 0x202U) != 2) {
        *(byte *)((int)piVar1 + 0x1d) = *(byte *)((int)piVar1 + 0x1d) & 0xfd;
      }
      if ((piVar1[7] & 0x100U) != 0) {
        iVar2 = 0;
        if ((param_2 != 0) || (iVar2 = FUN_0001480c(param_1,piVar1 + 3,1,piVar1[8]), iVar2 < 0)) {
          memcpy((void *)piVar1[8],(void *)(piVar1[8] + (uint)*(byte *)((int)piVar1 + 0x17)),
                 (uint)*(byte *)((int)piVar1 + 0x17));
        }
        *(byte *)((int)piVar1 + 0x1d) = *(byte *)((int)piVar1 + 0x1d) & 0xfe;
        if (iVar2 < 0) break;
      }
    }
  }
  mutex_unlock(param_1 + 0x90);
  return iVar2;
}



// ==== FUN_00014f70 @ 00014f70 size=1080

int FUN_00014f70(int param_1,undefined4 *param_2,int param_3,int *param_4,int param_5)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_38 [2];
  int local_30;
  
  iVar3 = mutex_lock_interruptible(param_1 + 0x90);
  if (iVar3 == 0) {
    for (iVar9 = 0; iVar9 != param_3; iVar9 = iVar9 + 1) {
      local_38[0] = 0;
      iVar4 = rtscam_find_ctrl(param_1,*param_2,local_38);
      if (iVar4 == 0) {
        iVar3 = -0x16;
LAB_00015308:
        FUN_00014ce0(param_1,1);
        param_3 = iVar9;
        goto LAB_00015358;
      }
      if ((*(uint *)(iVar4 + 0x18) & 1) == 0) {
        iVar3 = -0xd;
        goto LAB_00015308;
      }
      iVar3 = *(int *)(local_38[0] + 0x30);
      if (iVar3 == 2) {
        uVar6 = 0;
        if (-1 < (int)param_2[3]) {
          uVar6 = param_2[3];
        }
        if (0 < (int)uVar6) {
          uVar6 = 1;
        }
        param_2[3] = uVar6;
        goto LAB_00015224;
      }
      if (iVar3 == 3) {
        uVar6 = param_2[3];
        iVar3 = -0x22;
        if (-1 < (int)uVar6) {
          if (uVar6 < *(uint *)(local_38[0] + 0x3c)) {
            uVar6 = *(uint *)(*(int *)(local_38[0] + 0x38) + uVar6 * 0x24);
            if ((*(int *)(local_38[0] + 0x34) == 5) && ((*(uint *)(iVar4 + 0x18) & 0x10) != 0)) {
              iVar8 = *(int *)(iVar4 + 0x20) + (uint)*(byte *)(iVar4 + 0x17) * 4;
              if (((*(uint *)(iVar4 + 0x1c) & 0x800) == 0) &&
                 (local_30 = iVar8, iVar3 = FUN_00014858(param_1,iVar4), iVar8 = local_30, iVar3 < 0
                 )) goto LAB_000152fc;
              uVar5 = (**(code **)(local_38[0] + 0x40))(local_38[0],0x84,iVar8);
              iVar3 = -0x16;
              if ((uVar5 & uVar6) == 0) goto LAB_00015308;
            }
            goto LAB_00015224;
          }
          iVar3 = -0x22;
        }
        goto LAB_00015308;
      }
      if (iVar3 == 1) {
        if (((*(uint *)(iVar4 + 0x1c) & 0x800) != 0) ||
           (iVar3 = FUN_00014858(param_1,iVar4), -1 < iVar3)) {
          uVar5 = (**(code **)(local_38[0] + 0x40))
                            (local_38[0],0x82,
                             *(int *)(iVar4 + 0x20) + (uint)*(byte *)(iVar4 + 0x17) * 2);
          uVar6 = (**(code **)(local_38[0] + 0x40))
                            (local_38[0],0x83,
                             *(int *)(iVar4 + 0x20) + (uint)*(byte *)(iVar4 + 0x17) * 3);
          uVar7 = (**(code **)(local_38[0] + 0x40))
                            (local_38[0],0x84,
                             *(int *)(iVar4 + 0x20) + (uint)*(byte *)(iVar4 + 0x17) * 4);
          if (uVar7 == 0) {
            uVar7 = 1;
          }
          uVar7 = (((uVar7 >> 1) + (param_2[3] - uVar5)) / uVar7) * uVar7 + uVar5;
          param_2[3] = uVar7;
          if (*(int *)(local_38[0] + 0x34) == 1) {
            if ((int)uVar5 <= (int)uVar7) {
              uVar5 = uVar7;
            }
            bVar1 = (int)uVar6 < (int)uVar5;
          }
          else {
            if (uVar5 <= uVar7) {
              uVar5 = uVar7;
            }
            bVar1 = uVar6 < uVar5;
          }
          if (!bVar1) {
            uVar6 = uVar5;
          }
          param_2[3] = uVar6;
          goto LAB_0001521c;
        }
LAB_000152fc:
        if (iVar3 != 0) goto LAB_00015308;
      }
      else {
LAB_0001521c:
        uVar6 = param_2[3];
LAB_00015224:
        if (((*(uint *)(iVar4 + 0x1c) & 0x200) == 0) &&
           ((uint)*(byte *)(iVar4 + 0x17) << 3 != (uint)*(byte *)(local_38[0] + 0x2e))) {
          if ((*(uint *)(iVar4 + 0x18) & 2) == 0) {
            memset(*(void **)(iVar4 + 0x20),0,(uint)*(byte *)(iVar4 + 0x17));
            bVar2 = *(byte *)(iVar4 + 0x1d);
          }
          else {
            iVar3 = FUN_0001480c(param_1,iVar4 + 0xc,0x81);
            if (iVar3 < 0) goto LAB_000152fc;
            bVar2 = *(byte *)(iVar4 + 0x1d);
          }
          *(byte *)(iVar4 + 0x1d) = bVar2 | 2;
        }
        if ((*(uint *)(iVar4 + 0x1c) & 0x100) == 0) {
          memcpy((void *)((int)*(void **)(iVar4 + 0x20) + (uint)*(byte *)(iVar4 + 0x17)),
                 *(void **)(iVar4 + 0x20),(uint)*(byte *)(iVar4 + 0x17));
        }
        (**(code **)(local_38[0] + 0x44))(local_38[0],uVar6,*(undefined4 *)(iVar4 + 0x20));
        *(byte *)(iVar4 + 0x1d) = *(byte *)(iVar4 + 0x1d) | 5;
      }
      param_2 = param_2 + 5;
    }
    iVar3 = FUN_00014ce0(param_1,param_5 != 0);
    param_3 = iVar9;
    if (iVar3 == 0) {
      return 0;
    }
  }
  else {
    iVar3 = -0x200;
  }
LAB_00015358:
  if (param_4 != (int *)0x0) {
    *param_4 = param_3;
  }
  return iVar3;
}



// ==== FUN_000157f8 @ 000157f8 size=244

int FUN_000157f8(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = mutex_lock_interruptible(param_1 + 0x90);
  if (iVar1 == 0) {
    for (iVar2 = 0; iVar2 != param_3; iVar2 = iVar2 + 1) {
      iVar1 = rtscam_ctrl_get(param_1,param_2);
      if (iVar1 != 0) {
        FUN_00014ce0(param_1,1);
        param_3 = iVar2;
        goto LAB_000158a4;
      }
      param_2 = param_2 + 0x14;
    }
    iVar1 = FUN_00014ce0(param_1,1);
    param_3 = iVar2;
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = -0x200;
  }
LAB_000158a4:
  if (param_4 != (int *)0x0) {
    *param_4 = param_3;
  }
  return iVar1;
}



// ==== FUN_00015be0 @ 00015be0 size=176

void FUN_00015be0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(byte *)(param_1 + 4) < *(byte *)(*(int *)(param_1 + 0x180) + 0x24)) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x180) + 4);
    *(uint *)(param_1 + 0x16c) = uVar1;
    uVar4 = *(uint *)(param_1 + 0x168) / *(uint *)(param_1 + 0x164);
    *(uint *)(param_1 + 0x170) = uVar4;
    if ((0 < (int)uVar1) && (uVar2 = uVar1, uVar5 = uVar4, 0 < (int)uVar4)) {
      do {
        uVar3 = uVar5;
        uVar5 = (int)uVar2 % (int)uVar3;
        uVar2 = uVar3;
      } while (uVar5 != 0);
      *(int *)(param_1 + 0x16c) = (int)uVar1 / (int)uVar3;
      *(int *)(param_1 + 0x170) = (int)uVar4 / (int)uVar3;
    }
    if (*(int *)(param_1 + 0x170) << 1 < *(int *)(param_1 + 0x16c)) {
      *(undefined4 *)(param_1 + 0x174) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x174) = 0;
      *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x16c) - *(int *)(param_1 + 0x170);
    }
    *(undefined4 *)(param_1 + 0x178) = 0;
    *(undefined4 *)(param_1 + 0x17c) = 0;
  }
  return;
}



// ==== FUN_00015cdc @ 00015cdc size=220

void FUN_00015cdc(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = param_2;
    bVar1 = *(byte *)(param_1 + 0x24);
    for (iVar4 = 0; iVar4 < (int)(uint)bVar1; iVar4 = iVar4 + 1) {
      uVar3 = *(uint *)(param_1 + 4);
      iVar2 = *(int *)(param_1 + 0x2c) + iVar4 * 0x1c0;
      uVar5 = *(uint *)(iVar2 + 0x160) / *(uint *)(iVar2 + 0x15c);
      if (uVar3 < uVar5) {
        if (iVar2 != -0x15c) {
          *(undefined4 *)(iVar2 + 0x164) = 1;
          *(uint *)(iVar2 + 0x168) = uVar3;
        }
      }
      else if ((uVar5 != *(uint *)(iVar2 + 0x168) / *(uint *)(iVar2 + 0x164)) && (iVar2 != -0x15c))
      {
        *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x15c);
        *(uint *)(iVar2 + 0x168) = *(uint *)(iVar2 + 0x160);
      }
      FUN_00015be0();
      bVar1 = *(byte *)(param_1 + 0x24);
    }
  }
  return;
}



