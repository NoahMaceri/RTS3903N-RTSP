/* rts_cam_lock — "rtscam" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rts_cam_lock.h"

// ==== rtscam_lock_alloc @ 000101b8 size=260

undefined4 rtscam_lock_alloc(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (param_1 == 0) {
    uVar3 = 0xffffffea;
  }
  else {
    mutex_lock(param_1 + 0xc);
    iVar1 = FUN_00010030(param_1,param_2);
    uVar3 = 0;
    if (iVar1 == 0) {
      piVar2 = (int *)vzalloc(0x20);
      if (piVar2 == (int *)0x0) {
        uVar3 = 0xfffffff4;
      }
      else {
        iVar1 = rtscam_allocate_wait_queue(*(int *)(param_1 + 8) + 8);
        piVar2[7] = iVar1;
        if (iVar1 == 0) {
          vfree(piVar2);
          uVar3 = 0xfffffff4;
        }
        else {
          piVar2[2] = param_2;
          piVar4 = *(int **)(param_1 + 4);
          *(int **)(param_1 + 4) = piVar2;
          *piVar2 = param_1;
          piVar2[1] = (int)piVar4;
          *piVar4 = (int)piVar2;
        }
      }
    }
    mutex_unlock(param_1 + 0xc);
  }
  return uVar3;
}



// ==== rtscam_lock_free @ 000102bc size=184

undefined4 rtscam_lock_free(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (param_1 == 0) {
    uVar3 = 0xffffffea;
  }
  else {
    mutex_lock(param_1 + 0xc);
    piVar1 = (int *)FUN_00010030(param_1,param_2);
    if (piVar1 != (int *)0x0) {
      piVar4 = (int *)piVar1[1];
      iVar2 = *piVar1;
      *(int **)(iVar2 + 4) = piVar4;
      *piVar4 = iVar2;
      *piVar1 = (int)piVar1;
      piVar1[1] = (int)piVar1;
      rtscam_release_wait_queue(piVar1[7]);
      piVar1[7] = 0;
      vfree(piVar1);
    }
    mutex_unlock(param_1 + 0xc);
    uVar3 = 0;
  }
  return uVar3;
}



// ==== rtscam_lock_set_num @ 00010374 size=168

undefined4 rtscam_lock_set_num(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    mutex_lock(param_1 + 0xc);
    iVar1 = FUN_00010030(param_1,param_2);
    if (iVar1 == 0) {
      uVar2 = 0xffffffea;
    }
    else {
      uVar2 = rtscam_init_wait_queue(*(undefined4 *)(iVar1 + 0x1c),param_3);
    }
    mutex_unlock(param_1 + 0xc);
  }
  return uVar2;
}



// ==== rtscam_lock_set_name @ 0001041c size=184

undefined4 rtscam_lock_set_name(int param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
    uVar5 = 0xffffffea;
  }
  else {
    mutex_lock(param_1 + 0xc);
    iVar2 = FUN_00010030(param_1,*param_2);
    pcVar4 = (char *)(param_2 + 1);
    if (iVar2 == 0) {
      uVar5 = 0xffffffea;
    }
    else {
      pcVar3 = (char *)(iVar2 + 0xc);
      iVar2 = 0xf;
      do {
        cVar1 = *pcVar4;
        iVar2 = iVar2 + -1;
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
        if (cVar1 == '\0') break;
        pcVar4 = pcVar4 + 1;
      } while (iVar2 != 0);
      uVar5 = 0;
    }
    mutex_unlock(param_1 + 0xc);
  }
  return uVar5;
}



// ==== rtscam_lock_wait @ 000104d4 size=148

/* WARNING: Removing unreachable block (ram,0x00010adc) */
/* WARNING: Removing unreachable block (ram,0x00010b24) */
/* WARNING: Removing unreachable block (ram,0x00010b2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 rtscam_lock_wait(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if (param_1 != 0) {
    mutex_lock(param_1 + 0xc);
    iVar1 = FUN_00010030(param_1,param_2);
    mutex_unlock(param_1 + 0xc);
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x1c);
      if (iVar1 == 0) {
        uVar3 = 0xffffffea;
      }
      else {
        iVar4 = iVar1 + 0x10;
        mutex_lock(iVar4);
        iVar5 = *(int *)(iVar1 + 0xc) + 1;
        *(int *)(iVar1 + 0xc) = iVar5;
        uVar3 = 0;
        if (*(int *)(iVar1 + 0x1c) < iVar5) {
          piVar2 = (int *)vzalloc(0x14);
          if (piVar2 == (int *)0x0) {
            uVar3 = 0xfffffff4;
            if ((_rtscam_debug & 0x40000) != 0) {
              printk(&_LC1);
            }
          }
          else {
            piVar2[2] = 0;
            __init_waitqueue_head(piVar2 + 3,"&x->wait",0x10000);
            piVar6 = *(int **)(iVar1 + 4);
            *(int **)(iVar1 + 4) = piVar2;
            *piVar2 = iVar1;
            piVar2[1] = (int)piVar6;
            *piVar6 = (int)piVar2;
            mutex_unlock(iVar4);
            wait_for_completion(piVar2 + 2);
            mutex_lock(iVar4);
            uVar3 = 0;
            vfree(piVar2);
          }
        }
        mutex_unlock(iVar4);
      }
      return uVar3;
    }
  }
  return 0xffffffea;
}



// ==== rtscam_lock_post @ 000105e4 size=148

undefined4 rtscam_lock_post(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_1 != 0) {
    mutex_lock(param_1 + 0xc);
    iVar1 = FUN_00010030(param_1,param_2);
    mutex_unlock(param_1 + 0xc);
    if (iVar1 != 0) {
      piVar4 = *(int **)(iVar1 + 0x1c);
      if (piVar4 == (int *)0x0) {
        uVar3 = 0xffffffea;
      }
      else {
        mutex_lock(piVar4 + 4);
        piVar5 = (int *)*piVar4;
        if (piVar5 != piVar4) {
          piVar2 = (int *)piVar5[1];
          iVar1 = *piVar5;
          *(int **)(iVar1 + 4) = piVar2;
          *piVar2 = iVar1;
          *piVar5 = (int)piVar5;
          piVar5[1] = (int)piVar5;
          complete(piVar5 + 2);
        }
        if (0 < piVar4[3]) {
          piVar4[3] = piVar4[3] + -1;
        }
        mutex_unlock(piVar4 + 4);
        uVar3 = 0;
      }
      return uVar3;
    }
  }
  return 0xffffffea;
}



// ==== rtscam_allocate_wait_queue @ 00010840 size=140

int rtscam_allocate_wait_queue(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = vzalloc(0x20);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    __mutex_init(iVar1 + 0x10,"&queue->lock",0x10000);
    *(int *)iVar1 = iVar1;
    *(int *)(iVar1 + 4) = iVar1;
    uVar2 = get_device(param_1);
    *(undefined4 *)(iVar1 + 8) = uVar2;
  }
  return iVar1;
}



// ==== rtscam_release_wait_queue @ 000108cc size=224

undefined4 rtscam_release_wait_queue(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_1 == (int *)0x0) {
    uVar2 = 0xffffffea;
  }
  else {
    mutex_lock(param_1 + 4);
    piVar3 = (int *)*param_1;
    piVar4 = *(int **)*param_1;
    while (piVar3 != param_1) {
      piVar5 = (int *)piVar3[1];
      iVar1 = *piVar3;
      *(int **)(iVar1 + 4) = piVar5;
      *piVar5 = iVar1;
      *piVar3 = (int)piVar3;
      piVar3[1] = (int)piVar3;
      complete(piVar3 + 2);
      piVar3 = piVar4;
      piVar4 = (int *)*piVar4;
    }
    *piVar3 = (int)piVar3;
    piVar3[1] = (int)piVar3;
    mutex_unlock(param_1 + 4);
    put_device(piVar3[2]);
    piVar3[2] = 0;
    vfree(piVar3);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== rtscam_init_wait_queue @ 000109ac size=40

undefined4 rtscam_init_wait_queue(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 < 1) {
      param_2 = 1;
    }
    *(int *)(param_1 + 0x1c) = param_2;
    return 0;
  }
  return 0xffffffea;
}



// ==== rtscam_wait_timeout @ 000109d4 size=452

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int rtscam_wait_timeout(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if (param_1 == 0) {
    iVar2 = -0x16;
  }
  else {
    iVar3 = param_1 + 0x10;
    mutex_lock(iVar3);
    iVar4 = *(int *)(param_1 + 0xc) + 1;
    *(int *)(param_1 + 0xc) = iVar4;
    iVar2 = 0;
    if (*(int *)(param_1 + 0x1c) < iVar4) {
      piVar1 = (int *)vzalloc(0x14);
      if (piVar1 == (int *)0x0) {
        iVar2 = -0xc;
        if ((_rtscam_debug & 0x40000) != 0) {
          printk(&_LC1);
        }
      }
      else {
        piVar1[2] = 0;
        __init_waitqueue_head(piVar1 + 3,"&x->wait",0x10000);
        piVar5 = *(int **)(param_1 + 4);
        *(int **)(param_1 + 4) = piVar1;
        *piVar1 = param_1;
        piVar1[1] = (int)piVar5;
        *piVar5 = (int)piVar1;
        mutex_unlock(iVar3);
        if (param_2 == 0) {
          wait_for_completion(piVar1 + 2);
        }
        else {
          iVar2 = wait_for_completion_timeout(piVar1 + 2,(uint)(param_2 * 1000) / 1000);
        }
        mutex_lock(iVar3);
        if ((param_2 != 0) && (iVar2 == 0)) {
          piVar5 = (int *)piVar1[1];
          iVar2 = -0x91;
          iVar4 = *piVar1;
          *(int **)(iVar4 + 4) = piVar5;
          *piVar5 = iVar4;
          *piVar1 = (int)piVar1;
          piVar1[1] = (int)piVar1;
        }
        vfree(piVar1);
      }
    }
    mutex_unlock(iVar3);
  }
  return iVar2;
}



// ==== rtscam_wait @ 00010b98 size=20

/* WARNING: Removing unreachable block (ram,0x00010adc) */
/* WARNING: Removing unreachable block (ram,0x00010b24) */
/* WARNING: Removing unreachable block (ram,0x00010b2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 rtscam_wait(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if (param_1 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    iVar3 = param_1 + 0x10;
    mutex_lock(iVar3);
    iVar4 = *(int *)(param_1 + 0xc) + 1;
    *(int *)(param_1 + 0xc) = iVar4;
    uVar2 = 0;
    if (*(int *)(param_1 + 0x1c) < iVar4) {
      piVar1 = (int *)vzalloc(0x14);
      if (piVar1 == (int *)0x0) {
        uVar2 = 0xfffffff4;
        if ((_rtscam_debug & 0x40000) != 0) {
          printk(&_LC1);
        }
      }
      else {
        piVar1[2] = 0;
        __init_waitqueue_head(piVar1 + 3,"&x->wait",0x10000);
        piVar5 = *(int **)(param_1 + 4);
        *(int **)(param_1 + 4) = piVar1;
        *piVar1 = param_1;
        piVar1[1] = (int)piVar5;
        *piVar5 = (int)piVar1;
        mutex_unlock(iVar3);
        wait_for_completion(piVar1 + 2);
        mutex_lock(iVar3);
        uVar2 = 0;
        vfree(piVar1);
      }
    }
    mutex_unlock(iVar3);
  }
  return uVar2;
}



// ==== rtscam_post @ 00010bac size=156

undefined4 rtscam_post(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 == (int *)0x0) {
    uVar2 = 0xffffffea;
  }
  else {
    mutex_lock(param_1 + 4);
    piVar4 = (int *)*param_1;
    if (piVar4 != param_1) {
      piVar1 = (int *)piVar4[1];
      iVar3 = *piVar4;
      *(int **)(iVar3 + 4) = piVar1;
      *piVar1 = iVar3;
      *piVar4 = (int)piVar4;
      piVar4[1] = (int)piVar4;
      complete(piVar4 + 2);
    }
    if (0 < param_1[3]) {
      param_1[3] = param_1[3] + -1;
    }
    mutex_unlock(param_1 + 4);
    uVar2 = 0;
  }
  return uVar2;
}



