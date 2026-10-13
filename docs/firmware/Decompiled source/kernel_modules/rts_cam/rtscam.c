/* rts_cam — "rtscam" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rts_cam.h"

// ==== rtscam_usercopy @ 00010340 size=412

uint rtscam_usercopy(undefined4 param_1,uint param_2,undefined1 *param_3,code *param_4)

{
  uint uVar1;
  uint __n;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int unaff_gp;
  undefined1 auStack_a8 [128];
  uint local_28;
  
  __n = param_2 >> 0x10 & 0x1fff;
  if (param_4 == (code *)0x0) {
    return 0xffffffea;
  }
  if (param_2 >> 0x1d == 1) {
    puVar2 = (undefined1 *)0x0;
    puVar3 = param_3;
  }
  else {
    if (__n < 0x81) {
      memset(auStack_a8,0,__n);
      puVar2 = (undefined1 *)0x0;
      puVar3 = auStack_a8;
    }
    else {
      puVar2 = (undefined1 *)__kmalloc(__n,0x80d0);
      puVar3 = puVar2;
      if (puVar2 == (undefined1 *)0x0) {
        return 0xfffffff4;
      }
    }
    if ((int)param_2 < 0) {
      uVar1 = __n;
      if (((__n | (uint)param_3 | (uint)(param_3 + __n)) & *(uint *)(unaff_gp + 0x18)) == 0) {
        __copy_user(puVar3,param_3);
      }
      local_28 = uVar1;
      if (uVar1 != 0) goto LAB_00010480;
    }
  }
  local_28 = (*param_4)(param_1,param_2,puVar3);
  if (((local_28 == 0) && ((param_2 & 0x40000000) != 0)) &&
     (local_28 = __n,
     ((__n | (uint)param_3 | (uint)(param_3 + __n)) & *(uint *)(unaff_gp + 0x18)) == 0)) {
    __copy_user(param_3,puVar3);
    local_28 = __n;
  }
LAB_00010480:
  if (puVar2 != (undefined1 *)0x0) {
    kfree(puVar2);
  }
  return local_28;
}



// ==== rtscam_get_timestamp @ 00010630 size=108

void rtscam_get_timestamp(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 local_10;
  int local_c;
  
  if (rts_clock_param == 1) {
    pcVar1 = getrawmonotonic;
  }
  else {
    pcVar1 = getnstimeofday;
  }
  (*pcVar1)(&local_10);
  *param_1 = local_10;
  param_1[1] = local_c / 1000;
  return;
}



// ==== rtscam_register_format @ 000106c4 size=364

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 rtscam_register_format(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar3 = *(uint *)(param_2 + 0x24);
  iVar1 = find_format_by_fourcc(param_1,uVar3);
  if (iVar1 == 0) {
    puVar2 = (undefined1 *)kmem_cache_alloc(_DAT_0001814c,0x80d0);
    if (puVar2 == (undefined1 *)0x0) {
      uVar4 = 0xfffffff4;
    }
    else {
      *puVar2 = *param_2;
      puVar2[1] = param_2[1];
      puVar2[2] = param_2[2];
      puVar2[3] = param_2[3];
      *(undefined4 *)(puVar2 + 0x24) = *(undefined4 *)(param_2 + 0x24);
      puVar2[0x28] = param_2[0x28];
      puVar2[0x29] = param_2[0x29];
      puVar2[0x2a] = param_2[0x2a];
      memcpy(puVar2 + 4,param_2 + 4,0x20);
      *(undefined4 *)(puVar2 + 100) = 0;
      if (*(int *)(param_1 + 0x188) == 0) {
        *(undefined1 *)(param_1 + 0x184) = param_2[0x2a];
        *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x24);
      }
      iVar1 = *(int *)(param_1 + 0x158);
      if (*(int *)(param_1 + 0x158) == 0) {
        *(undefined1 **)(param_1 + 0x158) = puVar2;
      }
      else {
        do {
          iVar5 = iVar1;
          iVar1 = *(int *)(iVar5 + 100);
        } while (iVar1 != 0);
        *(undefined1 **)(iVar5 + 100) = puVar2;
      }
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0xffffffef;
    if ((rtscam_debug & 1) != 0) {
      printk(&_LC6,uVar3 & 0xff,uVar3 >> 8 & 0xff,uVar3 >> 0x10 & 0xff,uVar3 >> 0x18);
      uVar4 = 0xffffffef;
    }
  }
  return uVar4;
}



// ==== rtscam_register_frame_stepwise @ 00010830 size=372

undefined4
rtscam_register_frame_stepwise
          (int param_1,uint param_2,int *param_3,undefined4 *param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar1 = find_format_by_fourcc();
  if (iVar1 == 0) {
    uVar5 = 0xffffffea;
    if ((rtscam_debug & 1) != 0) {
      printk(&_LC7,param_2 & 0xff,param_2 >> 8 & 0xff,param_2 >> 0x10 & 0xff,param_2 >> 0x18);
      uVar5 = 0xffffffea;
    }
  }
  else if ((*(char *)(iVar1 + 0x2b) == '\0') ||
          (uVar5 = 0xffffffea, (byte)(*(char *)(iVar1 + 0x2c) - 1U) < 2)) {
    if ((*(uint *)(param_1 + 0x188) == param_2) &&
       ((*(int *)(param_1 + 0x18c) == 0 || (*(int *)(param_1 + 400) == 0)))) {
      iVar3 = *param_3;
      *(int *)(param_1 + 0x18c) = iVar3;
      iVar2 = param_3[1];
      *(int *)(param_1 + 400) = iVar2;
      uVar4 = (uint)*(byte *)(iVar1 + 0x28) * iVar3 >> 3;
      *(uint *)(param_1 + 0x194) = uVar4;
      *(uint *)(param_1 + 0x198) = uVar4 * iVar2;
    }
    uVar5 = 0;
    *(int *)(iVar1 + 0x30) = *param_3;
    *(int *)(iVar1 + 0x34) = param_3[1];
    *(undefined4 *)(iVar1 + 0x38) = *param_4;
    *(undefined4 *)(iVar1 + 0x3c) = param_4[1];
    *(undefined4 *)(iVar1 + 0x40) = *param_5;
    *(undefined4 *)(iVar1 + 0x44) = param_5[1];
    *(undefined1 *)(iVar1 + 0x2c) = 1;
    *(undefined1 *)(iVar1 + 0x2b) = 1;
  }
  return uVar5;
}



// ==== rtscam_register_frame_discrete @ 000109d8 size=432

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 rtscam_register_frame_discrete(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar1 = find_format_by_fourcc();
  if (iVar1 == 0) {
    uVar5 = 0xffffffea;
    if ((rtscam_debug & 1) != 0) {
      printk(&_LC7,param_2 & 0xff,param_2 >> 8 & 0xff,param_2 >> 0x10 & 0xff,param_2 >> 0x18);
      uVar5 = 0xffffffea;
    }
  }
  else if ((*(char *)(iVar1 + 0x2b) == '\0') || (*(char *)(iVar1 + 0x2c) == '\0')) {
    iVar2 = find_frame(iVar1,*param_3,param_3[1]);
    if (iVar2 == 0) {
      piVar3 = (int *)kmem_cache_alloc(_DAT_00018148,0x80d0);
      if (piVar3 == (int *)0x0) {
        uVar5 = 0xfffffff4;
      }
      else {
        *piVar3 = *param_3;
        iVar2 = param_3[1];
        piVar3[9] = 0;
        piVar3[1] = iVar2;
        if ((*(uint *)(param_1 + 0x188) == param_2) &&
           ((*(int *)(param_1 + 0x18c) == 0 || (*(int *)(param_1 + 400) == 0)))) {
          iVar2 = *param_3;
          *(int *)(param_1 + 0x18c) = iVar2;
          iVar6 = param_3[1];
          *(int *)(param_1 + 400) = iVar6;
          uVar4 = (uint)*(byte *)(iVar1 + 0x28) * iVar2 >> 3;
          *(uint *)(param_1 + 0x194) = uVar4;
          *(uint *)(param_1 + 0x198) = uVar4 * iVar6;
        }
        iVar2 = *(int *)(iVar1 + 0x30);
        if (*(int *)(iVar1 + 0x30) == 0) {
          *(int **)(iVar1 + 0x30) = piVar3;
        }
        else {
          do {
            iVar6 = iVar2;
            iVar2 = *(int *)(iVar6 + 0x24);
          } while (iVar2 != 0);
          *(int **)(iVar6 + 0x24) = piVar3;
        }
        *(undefined1 *)(iVar1 + 0x2c) = 0;
        *(undefined1 *)(iVar1 + 0x2b) = 1;
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 0xffffffef;
    }
  }
  else {
    uVar5 = 0xffffffea;
  }
  return uVar5;
}



// ==== rtscam_clr_frame @ 00010b88 size=112

undefined4 rtscam_clr_frame(int param_1)

{
  int iVar1;
  
  while (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x24);
    rtscam_clr_frmival(param_1 + 8);
    kfree(param_1);
    param_1 = iVar1;
  }
  return 0;
}



// ==== rtscam_clr_format @ 00010bf8 size=216

undefined4 rtscam_clr_format(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x158);
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 100);
    if (*(char *)(iVar1 + 0x2b) != '\0') {
      if (*(char *)(iVar1 + 0x2c) == '\0') {
        rtscam_clr_frame(*(undefined4 *)(iVar1 + 0x30));
        *(undefined4 *)(iVar1 + 0x30) = 0;
      }
      else {
        rtscam_clr_frmival(iVar1 + 0x48);
      }
      *(undefined1 *)(iVar1 + 0x2b) = 0;
    }
    kfree(iVar1);
    iVar1 = iVar2;
  }
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined1 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  rtscam_set_user_fps(param_1 + 0x15c,1,1);
  return 0;
}



// ==== rtscam_check_stream_format @ 00010cd0 size=292

int rtscam_check_stream_format(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 == 0) {
    return -0x16;
  }
  iVar2 = *(int *)(param_1 + 0x158);
  if (iVar2 == 0) {
    return -0x16;
  }
  do {
    if (*(int *)(iVar2 + 0x24) == 0) {
      return -0x16;
    }
    if (*(char *)(iVar2 + 0x2b) == '\0') {
      return -0x16;
    }
    if (*(char *)(iVar2 + 0x2c) == '\0') {
      piVar3 = *(int **)(iVar2 + 0x30);
      if (piVar3 == (int *)0x0) {
        return -0x16;
      }
      do {
        if (*piVar3 == 0) {
          return -0x16;
        }
        if (piVar3[1] == 0) {
          return -0x16;
        }
        iVar1 = FUN_00010190(piVar3 + 2);
        if (iVar1 != 0) {
          return iVar1;
        }
        piVar3 = (int *)piVar3[9];
      } while (piVar3 != (int *)0x0);
      iVar2 = *(int *)(iVar2 + 100);
    }
    else {
      if (*(int *)(iVar2 + 0x30) == 0) {
        return -0x16;
      }
      if (*(int *)(iVar2 + 0x34) == 0) {
        return -0x16;
      }
      if (*(int *)(iVar2 + 0x38) == 0) {
        return -0x16;
      }
      if (*(int *)(iVar2 + 0x3c) == 0) {
        return -0x16;
      }
      if (*(int *)(iVar2 + 0x40) == 0) {
        return -0x16;
      }
      if (*(int *)(iVar2 + 0x44) == 0) {
        return -0x16;
      }
      iVar1 = FUN_00010190(iVar2 + 0x48);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar2 = *(int *)(iVar2 + 100);
    }
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}



// ==== rtscam_check_user_format @ 00010df4 size=324

undefined4
rtscam_check_user_format
          (undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) && ((param_5 != 0 && (param_6 != 0))))
  {
    iVar1 = find_format_by_fourcc();
    if (iVar1 == 0) {
      if ((rtscam_debug & 1) != 0) {
        printk(&_LC8,param_2 & 0xff,param_2 >> 8 & 0xff,param_2 >> 0x10 & 0xff,param_2 >> 0x18);
      }
    }
    else {
      iVar1 = get_video_frmival(param_1,param_2,param_3,param_4);
      if (iVar1 != 0) {
        uVar2 = FUN_00010510(iVar1,param_5,param_6);
        return uVar2;
      }
      if ((rtscam_debug & 1) != 0) {
        printk(&_LC9);
      }
    }
  }
  return 0xffffffea;
}



// ==== rtscam_try_user_format @ 00010f38 size=124

undefined4 rtscam_try_user_format(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    iVar1 = get_video_frmival();
    uVar2 = 0;
    if ((iVar1 == 0) && (uVar2 = 0xffffffea, (rtscam_debug & 1) != 0)) {
      printk(&_LC9);
      uVar2 = 0xffffffea;
    }
    return uVar2;
  }
  return 0xffffffea;
}



// ==== rtscam_set_user_format @ 00010fb4 size=416

undefined4 rtscam_set_user_format(int param_1,uint param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  if (((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    iVar2 = find_format_by_fourcc();
    if (iVar2 == 0) {
      if ((rtscam_debug & 1) != 0) {
        printk(&_LC8,param_2 & 0xff,param_2 >> 8 & 0xff,param_2 >> 0x10 & 0xff,param_2 >> 0x18);
      }
    }
    else {
      iVar3 = get_video_frmival(param_1,param_2,param_3,param_4);
      if (iVar3 != 0) {
        iVar4 = FUN_00010510(iVar3,*(undefined4 *)(param_1 + 0x15c),*(undefined4 *)(param_1 + 0x160)
                            );
        if (iVar4 != 0) {
          if (*(char *)(iVar3 + 1) == '\0') {
            puVar8 = *(undefined4 **)(iVar3 + 4);
            if (puVar8 == (undefined4 *)0x0) {
              return 0xffffffea;
            }
            uVar5 = *puVar8;
            uVar6 = puVar8[1];
          }
          else {
            uVar5 = *(undefined4 *)(iVar3 + 4);
            uVar6 = *(undefined4 *)(iVar3 + 8);
          }
          rtscam_set_user_fps(param_1 + 0x15c,uVar5,uVar6);
        }
        uVar1 = *(undefined1 *)(iVar2 + 0x2a);
        *(int *)(param_1 + 0x18c) = param_3;
        *(int *)(param_1 + 400) = param_4;
        *(undefined1 *)(param_1 + 0x184) = uVar1;
        *(uint *)(param_1 + 0x188) = param_2;
        uVar7 = param_3 * (uint)*(byte *)(iVar2 + 0x28) >> 3;
        *(uint *)(param_1 + 0x194) = uVar7;
        *(uint *)(param_1 + 0x198) = uVar7 * param_4;
        return 0;
      }
      if ((rtscam_debug & 1) != 0) {
        printk(&_LC9);
        return 0xffffffea;
      }
    }
  }
  return 0xffffffea;
}



// ==== rtscam_set_user_frmival @ 00011154 size=128

int rtscam_set_user_frmival(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = rtscam_check_user_format
                    (param_1,*(undefined4 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x18c),
                     *(undefined4 *)(param_1 + 400),param_2,param_3);
  if (iVar1 == 0) {
    rtscam_set_user_fps(param_1 + 0x15c,param_2,param_3);
  }
  return iVar1;
}



// ==== rtscam_get_max_frame_size @ 000111d4 size=156

undefined4 rtscam_get_max_frame_size(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  uVar3 = 0xffffffea;
  if (((param_1 != 0) && (param_2 != (int *)0x0)) && (*(char *)(param_1 + 0x2b) != '\0')) {
    if (*(byte *)(param_1 + 0x2c) == 0) {
      piVar7 = *(int **)(param_1 + 0x30);
      iVar2 = 0;
      iVar6 = 0;
      while (iVar5 = iVar6, iVar4 = iVar2, piVar7 != (int *)0x0) {
        iVar6 = *piVar7;
        piVar1 = piVar7 + 1;
        piVar7 = (int *)piVar7[9];
        iVar2 = *piVar1;
        if ((uint)(*piVar1 * iVar6) <= (uint)(iVar4 * iVar5)) {
          iVar2 = iVar4;
          iVar6 = iVar5;
        }
      }
      *param_2 = iVar5;
      param_2[1] = iVar4;
    }
    else {
      if (2 < *(byte *)(param_1 + 0x2c)) {
        return 0xffffffea;
      }
      *param_2 = *(int *)(param_1 + 0x30);
      param_2[1] = *(int *)(param_1 + 0x34);
    }
    uVar3 = 0;
  }
  return uVar3;
}



// ==== rtscam_devdata @ 00011270 size=44

undefined4 rtscam_devdata(int param_1)

{
  return *(undefined4 *)(&DAT_00017a20 + (*(uint *)(*(int *)(param_1 + 0x10) + 0x2c) & 0xfffff) * 4)
  ;
}



// ==== rtscam_ge_device_alloc @ 00011458 size=28

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rtscam_ge_device_alloc(void)

{
  kmem_cache_alloc(_DAT_00018154,0x80d0);
  return;
}



// ==== rtscam_ge_device_release @ 00011474 size=32

void rtscam_ge_device_release(int param_1)

{
  if (param_1 != 0) {
    kfree();
    return;
  }
  return;
}



// ==== rtscam_ge_kill_fasync @ 00011494 size=48

void rtscam_ge_kill_fasync(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x130) != 0)) {
    kill_fasync(param_1 + 0x130);
    return;
  }
  return;
}



// ==== rtscam_ge_register_device @ 00011848 size=876

/* WARNING: Restarted to delay deadcode elimination for space: register */

int rtscam_ge_register_device(int *param_1)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  undefined *puVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *__s;
  
  if (param_1 == (int *)0x0) {
    return -0x16;
  }
  if (*param_1 == 0) {
    return -0x16;
  }
  if (param_1[0x4b] == 0) {
    return -0x16;
  }
  param_1[0x4c] = 0;
  mutex_lock(&DAT_00017810);
  uVar1 = find_next_zero_bit(&DAT_00017a00,0x100,0);
  if (uVar1 == 0x100) {
    if ((rtscam_debug & 1) != 0) {
      printk(&_LC2);
    }
    mutex_unlock(&DAT_00017810);
    return -0x17;
  }
  param_1[0x40] = uVar1;
  *(uint *)(&DAT_00017a00 + (uVar1 >> 5) * 4) =
       *(uint *)(&DAT_00017a00 + (uVar1 >> 5) * 4) | 1 << (uVar1 & 0x1f);
  uVar7 = param_1[0x40];
  piVar6 = param_1 + 0x30;
  mutex_unlock(&DAT_00017810);
  cdev_init(piVar6,&PTR___this_module_00016acc);
  param_1[0x39] = *(int *)*param_1;
  iVar2 = cdev_add(piVar6,uVar7 | 0x5200000,1);
  if (iVar2 < 0) {
    if ((rtscam_debug & 1) == 0) goto LAB_00011b24;
    puVar4 = &_LC3;
  }
  else {
    param_1[0x2c] = (int)&PTR__LC6_0001781c;
    param_1[0x24] = uVar7 | 0x5200000;
    if (param_1[0x3f] != 0) {
      param_1[2] = param_1[0x3f];
    }
    __s = param_1 + 0x42;
    sVar3 = strlen((char *)__s);
    piVar5 = param_1 + 2;
    if (sVar3 == 0) {
      dev_set_name(piVar5,&_LC5,"rts_camera",uVar1);
      snprintf((char *)__s,0x20,"%s%d","rts_camera",uVar1);
    }
    else {
      dev_set_name(piVar5,&_LC4,__s);
    }
    iVar2 = device_register(piVar5);
    if (-1 < iVar2) {
      param_1[0x2e] = (int)FUN_00011bb4;
      __mutex_init(param_1 + 0x4d,"&rdev->lock",0x10000);
      param_1[0x41] = param_1[0x41] | 1;
      mutex_lock(&DAT_00017810);
      *(int **)(&DAT_00017a20 + param_1[0x40] * 4) = param_1;
      mutex_unlock(&DAT_00017810);
      return 0;
    }
    if ((rtscam_debug & 1) == 0) goto LAB_00011b24;
    puVar4 = &_LC7;
  }
  printk(puVar4,"rtscam_ge_register_device");
LAB_00011b24:
  cdev_del(piVar6);
  mutex_lock(&DAT_00017810);
  *(uint *)(&DAT_00017a00 + ((uint)param_1[0x40] >> 5) * 4) =
       *(uint *)(&DAT_00017a00 + ((uint)param_1[0x40] >> 5) * 4) & ~(1 << (param_1[0x40] & 0x1fU));
  mutex_unlock(&DAT_00017810);
  param_1[0x40] = -1;
  return iVar2;
}



// ==== rtscam_ge_unregister_device @ 00011c74 size=160

void rtscam_ge_unregister_device(int param_1)

{
  if ((param_1 != 0) && ((*(uint *)(param_1 + 0x104) & 1) != 0)) {
    mutex_lock(&DAT_00017810);
    *(uint *)(param_1 + 0x104) = *(uint *)(param_1 + 0x104) & 0xfffffffe;
    mutex_unlock(&DAT_00017810);
    device_unregister(param_1 + 8);
    return;
  }
  return;
}



// ==== rtscam_get_video_buffer @ 00011d20 size=56

undefined4 rtscam_get_video_buffer(int param_1,uint param_2)

{
  if (((param_1 != 0) && (-1 < (int)param_2)) && (param_2 < *(uint *)(param_1 + 0xbc))) {
    return *(undefined4 *)(param_1 + (param_2 + 0xe) * 4 + 4);
  }
  return 0;
}



// ==== rtscam_buf_cleanup @ 00011d58 size=8

void rtscam_buf_cleanup(void)

{
  return;
}



// ==== rtscam_buf_start_streaming @ 00011d60 size=8

undefined4 rtscam_buf_start_streaming(void)

{
  return 0;
}



// ==== rtscam_buf_stop_stream @ 00011d68 size=8

undefined4 rtscam_buf_stop_stream(void)

{
  return 0;
}



// ==== rtscam_get_phy_addr @ 00011d70 size=128

undefined4 rtscam_get_phy_addr(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = **(int **)(*(int *)(param_1 + 0x224) + 0x1c);
  if ((*(int *)(iVar3 + 0x60) != 0) && (*(int *)(iVar3 + 100) != 0)) {
    puVar1 = (undefined4 *)vb2_plane_cookie(param_1,0);
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 0xffffffea;
    }
    else {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = *puVar1;
      }
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xffffffea;
}



// ==== rtscam_queue_setup @ 00011e2c size=288

int rtscam_queue_setup(int param_1,int param_2,uint *param_3,undefined4 *param_4,int *param_5,
                      undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int local_20;
  int local_1c;
  
  piVar3 = *(int **)(param_1 + 0x1c);
  if (param_2 == 0) {
    iVar2 = piVar3[0x62];
  }
  else {
    iVar2 = *(int *)(param_2 + 0xc);
  }
  iVar2 = find_format_by_fourcc(piVar3,iVar2);
  if (iVar2 != 0) {
    iVar1 = rtscam_get_max_frame_size(iVar2,&local_20);
    if (iVar1 != 0) {
      return iVar1;
    }
    local_1c = ((uint)*(byte *)(iVar2 + 0x28) * local_20 >> 3) * local_1c;
    *param_5 = local_1c;
    if (local_1c != 0) {
      *param_6 = *(undefined4 *)(*piVar3 + 0x60);
      uVar4 = *param_3;
      if (uVar4 == 0) {
        *param_3 = 2;
        uVar4 = *param_3;
      }
      if (0x10 < uVar4) {
        *param_3 = 0x10;
      }
      *param_4 = 1;
      return 0;
    }
    if ((rtscam_debug & 1) != 0) {
      printk(&_LC0);
    }
  }
  return -0x16;
}



// ==== rtscam_buf_wait_prepare @ 00011f4c size=24

void rtscam_buf_wait_prepare(int param_1)

{
  mutex_unlock(*(int *)(param_1 + 0x1c) + 0x144);
  return;
}



// ==== rtscam_buf_wait_finish @ 00011f64 size=24

void rtscam_buf_wait_finish(int param_1)

{
  mutex_lock(*(int *)(param_1 + 0x1c) + 0x144);
  return;
}



// ==== rtscam_video_unregister_device @ 00012060 size=64

undefined4 rtscam_video_unregister_device(undefined4 param_1)

{
  FUN_00011f7c();
  v4l2_device_unregister(param_1);
  return 0;
}



// ==== rtscam_video_register_device @ 000125d4 size=1324

int rtscam_video_register_device(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  
  if ((((param_1 == (int *)0x0) || (param_1[0x18] == 0)) || (param_1[0x19] == 0)) ||
     (param_1[0x2d] == 0)) {
    return -0x16;
  }
  if (0x40 < (uint)param_1[0x1f]) {
    param_1[0x1f] = -1;
  }
  *param_1 = param_1[0x17];
  iVar1 = v4l2_device_register(param_1[0x17],param_1);
  uVar5 = rtscam_debug;
  if (iVar1 != 0) {
    if ((rtscam_debug & 1) == 0) {
      return iVar1;
    }
    printk(&_LC4,"rtscam_video_register_device");
    return iVar1;
  }
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  if ((uVar5 & 0x20) != 0) {
    iVar1 = *(int *)(*param_1 + 0x2c);
    if (iVar1 == 0) {
      iVar1 = *(int *)(*param_1 + 8);
    }
    printk(&_LC5,iVar1);
  }
  if (param_1[0x1d] != 0) {
    iVar1 = rtscam_video_init_ctrl(param_1);
    if (iVar1 < 0) {
      if ((rtscam_debug & 1) != 0) {
        printk(&_LC6);
      }
      goto LAB_00012a64;
    }
    if ((param_1[0x1a] != 0) && (param_1[0x1b] != 0)) {
      iVar1 = 0;
      uVar5 = 0;
      while (uVar5 < (uint)param_1[0x1a]) {
        piVar7 = (int *)(param_1[0x1b] + uVar5 * 0x1c0);
        *piVar7 = (int)param_1;
        piVar7[2] = 0;
        __mutex_init(piVar7 + 0x4e,"&stream->stream_lock",0x10000);
        v4l2_prio_init(piVar7 + 0x49);
        piVar7[0x4d] = 0;
        piVar7[0x6c] = 0;
        puVar2 = (undefined4 *)video_device_alloc();
        uVar6 = *(undefined4 *)(*piVar7 + 0x7c);
        if (puVar2 == (undefined4 *)0x0) {
LAB_000127d8:
          uVar5 = uVar5 + 1;
        }
        else {
          iVar3 = rtscam_check_stream_format(piVar7);
          if (iVar3 != 0) {
            if ((rtscam_debug & 1) != 0) {
              puVar4 = &_LC9;
LAB_0001286c:
              printk(puVar4);
            }
LAB_00012a24:
            if (-1 < iVar3) {
LAB_00012a2c:
              iVar1 = iVar1 + 1;
            }
            goto LAB_000127d8;
          }
          iVar3 = rtscam_check_user_format
                            (piVar7,piVar7[0x62],piVar7[99],piVar7[100],piVar7[0x57],piVar7[0x58]);
          if (iVar3 != 0) {
            if ((rtscam_debug & 1) != 0) {
              puVar4 = &_LC10;
              goto LAB_0001286c;
            }
            goto LAB_00012a24;
          }
          strlcpy(puVar2 + 0x36,*(undefined4 *)(*piVar7 + 0x74),0x20);
          puVar2[0x32] = *piVar7;
          puVar2[0x35] = piVar7 + 0x49;
          *puVar2 = &PTR___this_module_00017890;
          puVar2[0x4c] = video_device_release;
          puVar2[0x42] = puVar2[0x42] | 4;
          dev_set_drvdata(puVar2 + 2,piVar7);
          iVar3 = __video_register_device(puVar2,0,uVar6,1,*(undefined4 *)*puVar2);
          if (iVar3 < 0) {
            if ((rtscam_debug & 1) != 0) {
              printk(&_LC11,uVar6,iVar3);
            }
            video_device_release(puVar2);
            uVar5 = uVar5 + 1;
          }
          else {
            iVar3 = *(int *)(*piVar7 + 0x80);
            piVar7[10] = (int)piVar7;
            piVar7[3] = iVar3;
            piVar7[4] = 3;
            piVar7[8] = (int)&PTR_rtscam_queue_setup_000178b8;
            piVar7[9] = *(int *)(*piVar7 + 100);
            piVar7[0xb] = 0x2e4;
            piVar7[0xc] = 0x4000;
            iVar3 = vb2_queue_init(piVar7 + 3);
            if (iVar3 == 0) {
              __mutex_init(piVar7 + 0x51,"&stream->queue_lock",0x10000);
              piVar7[0x54] = (int)(piVar7 + 0x54);
              piVar7[0x55] = (int)(piVar7 + 0x54);
LAB_00012a1c:
              piVar7[2] = (int)puVar2;
              goto LAB_00012a2c;
            }
            if (-1 < iVar3) goto LAB_00012a1c;
            if ((rtscam_debug & 1) != 0) {
              printk(&_LC13,uVar6,iVar3);
            }
            video_unregister_device(puVar2);
            uVar5 = uVar5 + 1;
          }
        }
      }
      if (iVar1 != 0) {
        if ((rtscam_debug & 0x100) == 0) {
          return 0;
        }
        printk(&_LC15,param_1[0x1e]);
        return 0;
      }
      FUN_00011f7c(param_1);
      iVar1 = -0x16;
      goto LAB_00012a64;
    }
    rtscam_video_release_ctrl(param_1);
    if ((rtscam_debug & 1) != 0) {
      printk(&_LC7);
      iVar1 = -0x16;
      goto LAB_00012a64;
    }
  }
  iVar1 = -0x16;
LAB_00012a64:
  if ((rtscam_debug & 1) != 0) {
    printk(&_LC14,param_1[0x1e],iVar1);
  }
  v4l2_device_unregister(param_1);
  return iVar1;
}



// ==== rtscam_push_back_ready_buffer @ 00012b00 size=112

undefined4 rtscam_push_back_ready_buffer(int param_1,int param_2)

{
  int *piVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    piVar1 = *(int **)(param_1 + 0x150);
    while( true ) {
      if ((int *)(param_1 + 0x150) == piVar1) {
        *(undefined4 *)(param_2 + 0x2e0) = 1;
        piVar1 = *(int **)(param_1 + 0x154);
        *(int *)(param_1 + 0x154) = param_2 + 0x2a0;
        *(int *)(param_2 + 0x2a0) = param_1 + 0x150;
        *(int **)(param_2 + 0x2a4) = piVar1;
        *piVar1 = param_2 + 0x2a0;
        return 0;
      }
      if (piVar1 + -0xa8 == (int *)param_2) break;
      piVar1 = (int *)*piVar1;
    }
    return 0;
  }
  return 0xffffffea;
}



// ==== rtscam_buffer_wq_handle @ 00012b9c size=36

void rtscam_buffer_wq_handle(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (param_1 + -0x2ac == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x34) = 4;
  vb2_buffer_done(param_1 + -0x2ac,4);
  return;
}



// ==== rtscam_buf_init @ 00012bc0 size=20

undefined4 rtscam_buf_init(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x2e0) = 0;
  }
  return 0;
}



// ==== rtscam_buf_prepare @ 00012bd4 size=24

undefined4 rtscam_buf_prepare(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x2e0) = 6;
  }
  return 0;
}



// ==== rtscam_buf_finish @ 00012bec size=24

undefined4 rtscam_buf_finish(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x2e0) = 5;
  }
  return 0;
}



// ==== rtscam_convert_addr_from_vm_to_phy @ 00012c04 size=384

undefined4 rtscam_convert_addr_from_vm_to_phy(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  bool bVar4;
  int iVar5;
  int *unaff_gp;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar5 = *(int *)(param_1 + 100);
    if (iVar5 == 0) {
      return 0xffffffea;
    }
    if (*(int *)(iVar5 + 0xc) == 0) {
      return 0xffffffea;
    }
    if (((*(int *)(iVar5 + 0x10) != 0) && (*(int *)(iVar5 + 0x30) != 0)) && (param_2 != 0)) {
      piVar2 = (int *)find_vma(*(undefined4 *)(*unaff_gp + 0xbc));
      iVar5 = 0;
      if (piVar2 != (int *)0x0) {
        do {
          if (iVar5 == *(int *)(param_1 + 0x68)) {
            if ((rtscam_debug & 1) == 0) {
              return 0xffffffea;
            }
            printk(&_LC16);
            return 0xffffffea;
          }
          iVar1 = iVar5 * 0x1c0;
          iVar5 = iVar5 + 1;
        } while (piVar2[0x14] != *(int *)(*(int *)(param_1 + 0x6c) + iVar1 + 0x1b4));
        iVar5 = *(int *)(param_1 + 0x80);
        if (((iVar5 - 2U < 2) || (iVar5 == 10)) || (iVar5 == 5)) {
          bVar4 = false;
        }
        else {
          bVar4 = 1 < iVar5 - 7U;
        }
        iVar5 = (**(code **)(*(int *)(param_1 + 100) + 0xc))
                          (*(undefined4 *)(param_1 + 0x60),param_2,piVar2[1] - *piVar2,bVar4);
        if (iVar5 != 0) {
          if (param_3 != (undefined4 *)0x0) {
            puVar3 = (undefined4 *)(**(code **)(*(int *)(param_1 + 100) + 0x30))(iVar5);
            *param_3 = *puVar3;
          }
          (**(code **)(*(int *)(param_1 + 100) + 0x10))(iVar5);
          return 0;
        }
      }
    }
  }
  return 0xffffffea;
}



// ==== rtscam_video_do_ctrl_ioctl @ 00012d84 size=476

int rtscam_video_do_ctrl_ioctl(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  code *pcVar2;
  undefined4 local_18 [2];
  
  if (param_1 == 0) {
    return -0x16;
  }
  if (param_2 == 0xc0087201) {
    mutex_lock(param_1 + 0x84);
    pcVar2 = *(code **)(*(int *)(param_1 + 0x70) + 0x24);
    if (pcVar2 == (code *)0x0) {
      iVar1 = -0x16;
    }
    else {
      iVar1 = (*pcVar2)(*(undefined4 *)(param_1 + 0x6c),param_3);
    }
    mutex_unlock(param_1 + 0x84);
    return iVar1;
  }
  if (param_2 < 0xc0087202) {
    if (param_2 == 0xc008561b) {
      pcVar2 = rtscam_get_ctrl;
    }
    else {
      if (param_2 != 0xc008561c) {
        if (param_2 == 0xc0047202) {
          local_18[0] = 0;
          iVar1 = rtscam_convert_addr_from_vm_to_phy(param_1,*param_3,local_18);
          if (iVar1 != 0) {
            return iVar1;
          }
          *param_3 = local_18[0];
          return 0;
        }
        goto LAB_00012f04;
      }
      pcVar2 = rtscam_set_ctrl;
    }
  }
  else if (param_2 == 0xc0185648) {
    pcVar2 = rtscam_set_ext_ctrls;
  }
  else if (param_2 < 0xc0185649) {
    if (param_2 != 0xc0185647) {
LAB_00012f04:
      if ((rtscam_debug & 1) == 0) {
        return -0x19;
      }
      printk(&_LC17,param_2,param_2 >> 8 & 0xff,param_2 & 0xff);
      return -0x19;
    }
    pcVar2 = rtscam_get_ext_ctrls;
  }
  else if (param_2 == 0xc0185649) {
    pcVar2 = rtscam_try_ext_ctrls;
  }
  else {
    if (param_2 != 0xc0445624) goto LAB_00012f04;
    pcVar2 = rtscam_query_v4l2_ctrl;
  }
  iVar1 = (*pcVar2)(param_1,param_3);
  return iVar1;
}



// ==== rtscam_init_capture_buffer @ 00012f60 size=152

void rtscam_init_capture_buffer(int *param_1)

{
  code *pcVar1;
  int unaff_gp;
  
  arch_local_irq_disable();
  *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
  param_1[0x54] = (int)(param_1 + 0x54);
  param_1[0x55] = (int)(param_1 + 0x54);
  pcVar1 = *(code **)(*(int *)(*param_1 + 0x70) + 0x18);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  setCopReg(0,Status,(Status | 0x1f) ^ 0x1e);
  *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
  if ((*(uint *)(unaff_gp + 8) >> 2 & 1) != 0) {
    preempt_schedule();
    return;
  }
  return;
}



// ==== rtscam_set_buffer_state @ 00012ff8 size=40

undefined4 rtscam_set_buffer_state(int param_1,uint param_2)

{
  if ((param_1 != 0) && (param_2 < 7)) {
    *(uint *)(param_1 + 0x2e0) = param_2;
    return 0;
  }
  return 0xffffffea;
}



// ==== rtscam_pop_ready_buffer @ 00013020 size=64

int * rtscam_pop_ready_buffer(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_1 != 0) && (piVar1 = *(int **)(param_1 + 0x150), piVar1 != (int *)(param_1 + 0x150))) {
    piVar3 = (int *)piVar1[1];
    iVar2 = *piVar1;
    *(int **)(iVar2 + 4) = piVar3;
    *piVar3 = iVar2;
    *piVar1 = (int)piVar1;
    piVar1[1] = (int)piVar1;
    return piVar1 + -0xa8;
  }
  return (int *)0x0;
}



// ==== rtscam_submit_buffer @ 00013060 size=188

int rtscam_submit_buffer(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  if (param_2 != 0) {
    rtscam_push_back_ready_buffer();
  }
  iVar1 = rtscam_pop_ready_buffer(param_1);
  if (iVar1 == 0) {
    iVar2 = -0x16;
  }
  else {
    pcVar3 = *(code **)(*(int *)(*param_1 + 0x70) + 0x1c);
    if (pcVar3 == (code *)0x0) {
      iVar2 = -0x16;
    }
    else {
      iVar2 = (*pcVar3)(param_1,iVar1);
      if (iVar2 == 0) {
        *(undefined4 *)(iVar1 + 0x2e0) = 2;
        return 0;
      }
    }
    rtscam_push_back_ready_buffer(param_1,iVar1);
  }
  return iVar2;
}



// ==== rtscam_buf_queue @ 0001311c size=160

void rtscam_buf_queue(int param_1)

{
  undefined4 uVar1;
  int unaff_gp;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x224) + 0x1c);
  arch_local_irq_disable();
  *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
  rtscam_submit_buffer(uVar1,param_1);
  setCopReg(0,Status,(Status | 0x1f) ^ 0x1e);
  *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
  if ((*(uint *)(unaff_gp + 8) >> 2 & 1) != 0) {
    preempt_schedule();
    return;
  }
  return;
}



// ==== rtscam_clr_ready_buffer @ 000131bc size=104

void rtscam_clr_ready_buffer(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if (param_1 != 0) {
    iVar3 = param_1 + 0x150;
    piVar4 = (int *)**(int **)(param_1 + 0x150);
    piVar2 = *(int **)(param_1 + 0x150);
    while (piVar1 = piVar4, piVar2 != (int *)iVar3) {
      piVar4 = (int *)piVar2[1];
      iVar5 = *piVar2;
      *(int **)(iVar5 + 4) = piVar4;
      *piVar4 = iVar5;
      *piVar2 = (int)piVar2;
      piVar2[1] = (int)piVar2;
      if (piVar2 != (int *)0x2a0) {
        piVar2[0x10] = 0;
      }
      piVar4 = (int *)*piVar1;
      piVar2 = piVar1;
    }
    *(int *)(param_1 + 0x150) = iVar3;
    *(int *)(param_1 + 0x154) = iVar3;
  }
  return;
}



// ==== rtscam_delay_buffer @ 00013224 size=188

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rtscam_delay_buffer(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x2ac) = 0xffffffe0;
  *(code **)(param_1 + 0x2b8) = rtscam_buffer_wq_handle;
  *(int *)(param_1 + 0x2b0) = param_1 + 0x2b0;
  *(int *)(param_1 + 0x2b4) = param_1 + 0x2b0;
  init_timer_key(param_1 + 700,2,0,0);
  *(undefined **)(param_1 + 0x2cc) = &delayed_work_timer_fn;
  *(int *)(param_1 + 0x2d0) = param_1 + 0x2ac;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x2e0) = 3;
  }
  queue_delayed_work_on(1,_system_wq,param_1 + 0x2ac,(uint)(param_2 * 1000) / 1000);
  return;
}



// ==== rtscam_buffer_done @ 000132e0 size=272

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rtscam_buffer_done(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  uint uVar2;
  undefined4 unaff_retaddr;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return;
  }
  iVar1 = find_format_by_fourcc(param_1,*(undefined4 *)(param_1 + 0x188));
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (uint)*(byte *)(iVar1 + 3);
  }
  *(uint *)(param_2 + 0x10) = uVar2;
  iVar1 = *(int *)(param_1 + 0x19c);
  *(int *)(param_1 + 0x19c) = iVar1 + 1;
  *(int *)(param_2 + 0x2c) = iVar1;
  rtscam_get_timestamp(param_2 + 0x14);
  if ((rtscam_debug & 0x10000) != 0) {
    printk(&_LC18,*(undefined4 *)(param_2 + 0x2a8));
  }
  if (*(int *)(param_2 + 0x228) != 0) {
    *(undefined4 *)(param_2 + 0x44) = param_3;
  }
  iVar1 = *(int *)(param_1 + 0x1b8);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      return;
    }
    *(undefined4 *)(param_2 + 0x2e0) = 4;
    vb2_buffer_done(param_2,4);
    return;
  }
  *(undefined4 *)(param_2 + 0x2ac) = 0xffffffe0;
  *(code **)(param_2 + 0x2b8) = rtscam_buffer_wq_handle;
  *(int *)(param_2 + 0x2b0) = param_2 + 0x2b0;
  *(int *)(param_2 + 0x2b4) = param_2 + 0x2b0;
  init_timer_key(param_2 + 700,2,0,0,unaff_s0,unaff_s1,unaff_s2,unaff_retaddr);
  *(undefined **)(param_2 + 0x2cc) = &delayed_work_timer_fn;
  *(int *)(param_2 + 0x2d0) = param_2 + 0x2ac;
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x2e0) = 3;
  }
  queue_delayed_work_on(1,_system_wq,param_2 + 0x2ac,(uint)(iVar1 * 1000) / 1000);
  return;
}



// ==== rtscam_clr_delayed_buffer @ 000133f0 size=160

void rtscam_clr_delayed_buffer(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    for (uVar2 = 0; uVar2 < *(uint *)(param_1 + 0xbc); uVar2 = uVar2 + 1) {
      iVar1 = rtscam_get_video_buffer(param_1,uVar2);
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x2e0) == 3) {
          cancel_delayed_work_sync(iVar1 + 0x2ac);
        }
        *(undefined4 *)(iVar1 + 0x2e0) = 0;
      }
    }
  }
  return;
}



// ==== rtscam_get_le_value @ 00014620 size=260

uint rtscam_get_le_value(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  bVar1 = *(byte *)(param_1 + 0x2f);
  uVar6 = (uint)*(byte *)(param_1 + 0x2e);
  pbVar7 = (byte *)(param_3 + ((int)(uint)bVar1 >> 3));
  uVar10 = __ashldi3(1,0,uVar6);
  uVar8 = bVar1 & 7;
  uVar2 = __ashldi3((int)uVar10 + -1,(int)((ulonglong)uVar10 >> 0x20) - (uint)((int)uVar10 == 0),
                    uVar8);
  iVar5 = 0;
  uVar3 = 0;
  uVar4 = uVar6;
  while( true ) {
    uVar9 = iVar5 + uVar8;
    if ((int)uVar4 < 1) break;
    uVar2 = uVar2 & 0xff & (uint)*pbVar7;
    if ((int)uVar9 < 1) {
      uVar2 = uVar2 << (-uVar9 & 0x1f);
    }
    else {
      uVar2 = (int)uVar2 >> (uVar9 & 0x1f);
    }
    uVar3 = uVar3 | uVar2;
    pbVar7 = pbVar7 + 1;
    iVar5 = iVar5 + -8;
    if ((int)uVar9 < 0) {
      uVar9 = 0;
    }
    uVar4 = uVar4 + (uVar9 - 8);
    uVar2 = (1 << (uVar4 & 0x1f)) - 1;
  }
  if (*(int *)(param_1 + 0x34) == 1) {
    uVar3 = -(uVar3 & 1 << (uVar6 - 1 & 0x1f)) | uVar3;
  }
  return uVar3;
}



// ==== rtscam_set_le_value @ 00014724 size=232

void rtscam_set_le_value(int param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined8 uVar8;
  
  uVar5 = (uint)*(byte *)(param_1 + 0x2e);
  iVar4 = -1;
  if (*(int *)(param_1 + 0x30) != 4) {
    iVar4 = param_2;
  }
  uVar2 = *(byte *)(param_1 + 0x2f) & 7;
  pbVar6 = (byte *)(param_3 + ((int)(uint)*(byte *)(param_1 + 0x2f) >> 3));
  for (; 0 < (int)uVar5; uVar5 = uVar5 + iVar3) {
    uVar8 = __ashldi3(1,0,uVar5);
    bVar1 = __ashldi3((int)uVar8 + -1,(int)((ulonglong)uVar8 >> 0x20) - (uint)((int)uVar8 == 0),
                      uVar2);
    *pbVar6 = ~bVar1 & *pbVar6 | bVar1 & (byte)(iVar4 << uVar2);
    uVar7 = 8;
    if (uVar2 != 0) {
      uVar7 = uVar2;
    }
    iVar3 = uVar2 - 8;
    iVar4 = iVar4 >> uVar7;
    uVar2 = 0;
    pbVar6 = pbVar6 + 1;
  }
  return;
}



// ==== rtscam_ctrl_add_info @ 000149a4 size=232

undefined4 rtscam_ctrl_add_info(int param_1,void *param_2)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  pvVar1 = memcpy((void *)(param_1 + 0xc),param_2,0x10);
  *(void **)(param_1 + 0xc) = pvVar1;
  *(void **)(param_1 + 0x10) = pvVar1;
  iVar2 = __kmalloc((uint)*(byte *)(param_1 + 0x17) * 6 + 1,0x80d0);
  *(int *)(param_1 + 0x20) = iVar2;
  if (iVar2 == 0) {
    uVar3 = 0xfffffff4;
    if ((rtscam_debug & 1) != 0) {
      printk(&_LC0,"rtscam_ctrl_add_info");
      uVar3 = 0xfffffff4;
    }
  }
  else {
    uVar3 = 0;
    uVar4 = rtscam_debug & 4;
    *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) | 0x10;
    if (uVar4 != 0) {
      printk(&_LC1,*(undefined1 *)(param_1 + 0x15),*(undefined1 *)(param_1 + 0x16));
    }
  }
  return uVar3;
}



// ==== rtscam_ctrl_clr_info @ 00014a8c size=64

void rtscam_ctrl_clr_info(int param_1)

{
  kfree(*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) & 0xef;
  return;
}



// ==== rtscam_ctrl_clr_mapping @ 00014acc size=180

void rtscam_ctrl_clr_mapping(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar2 = *(int **)(param_1 + 0xc);
  piVar3 = (int *)**(int **)(param_1 + 0xc);
  while (piVar2 != (int *)(param_1 + 0xc)) {
    piVar4 = (int *)piVar2[1];
    iVar1 = *piVar2;
    *(int **)(iVar1 + 4) = piVar4;
    *piVar4 = iVar1;
    *piVar2 = 0x100100;
    piVar2[1] = 0x200200;
    if (piVar2[0xe] != 0) {
      kfree();
    }
    kfree(piVar2);
    piVar2 = piVar3;
    piVar3 = (int *)*piVar3;
  }
  return;
}



// ==== rtscam_ctrl_add_mapping @ 00014b80 size=352

undefined4 rtscam_ctrl_add_mapping(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  piVar1 = (int *)kmemdup(param_2,0x48,0xd0);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0xfffffff4;
    if ((rtscam_debug & 1) != 0) {
      printk(&_LC2,"rtscam_ctrl_add_mapping");
      uVar3 = 0xfffffff4;
    }
  }
  else {
    if ((*(int *)(param_2 + 0x38) == 0) || (*(int *)(param_2 + 0x3c) == 0)) {
      piVar1[0xe] = 0;
      piVar1[0xf] = 0;
    }
    else {
      iVar2 = kmemdup(*(int *)(param_2 + 0x38),*(int *)(param_2 + 0x3c) * 0x24,0xd0);
      piVar1[0xe] = iVar2;
      if (iVar2 == 0) {
        kfree(piVar1);
        return 0xfffffff4;
      }
    }
    if (piVar1[0x10] == 0) {
      piVar1[0x10] = (int)rtscam_get_le_value;
    }
    if (piVar1[0x11] == 0) {
      piVar1[0x11] = (int)rtscam_set_le_value;
    }
    piVar4 = *(int **)(param_1 + 0x10);
    *(int **)(param_1 + 0x10) = piVar1;
    *piVar1 = param_1 + 0xc;
    piVar1[1] = (int)piVar4;
    *piVar4 = (int)piVar1;
    uVar3 = 0;
    if ((rtscam_debug & 4) != 0) {
      printk(&_LC3,piVar1 + 3,*(undefined1 *)(param_1 + 0x15),*(undefined1 *)(param_1 + 0x16));
    }
  }
  return uVar3;
}



// ==== rtscam_find_ctrl @ 00014e0c size=356

int rtscam_find_ctrl(int param_1,uint param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  *param_3 = 0;
  uVar2 = param_2 & 0x80000000;
  piVar1 = (int *)0x0;
  for (piVar4 = *(int **)(param_1 + 0x9c); piVar4 != (int *)(param_1 + 0x9c);
      piVar4 = (int *)*piVar4) {
    if ((piVar4[7] & 0x1000U) != 0) {
      for (piVar5 = (int *)piVar4[3]; piVar5 != piVar4 + 3; piVar5 = (int *)*piVar5) {
        uVar3 = piVar5[2];
        if ((uVar3 == (param_2 & 0xfffffff)) && (uVar2 == 0)) {
          *param_3 = (int)piVar5;
          piVar1 = piVar4;
          if (piVar4 != (int *)0x0) goto LAB_00014f14;
          goto LAB_00014e84;
        }
        if (((*param_3 == 0) || (uVar3 < *(uint *)(*param_3 + 8))) &&
           (((param_2 & 0xfffffff) < uVar3 && (uVar2 != 0)))) {
          *param_3 = (int)piVar5;
          piVar1 = piVar4;
        }
      }
      if (piVar1 == (int *)0x0) {
LAB_00014e84:
        piVar1 = (int *)0x0;
      }
      else if (uVar2 == 0) goto LAB_00014f14;
    }
  }
  if (((piVar1 == (int *)0x0) && (uVar2 == 0)) && ((rtscam_debug & 1) != 0)) {
    printk(&_LC4);
  }
LAB_00014f14:
  iVar6 = *param_3;
  if (iVar6 != 0) {
    if (*(int *)(iVar6 + 0x40) == 0) {
      *(code **)(iVar6 + 0x40) = rtscam_get_le_value;
    }
    if (*(int *)(iVar6 + 0x44) == 0) {
      *(code **)(iVar6 + 0x44) = rtscam_set_le_value;
    }
  }
  return (int)piVar1;
}



// ==== __rtscam_query_v4l2_ctrl @ 000153a8 size=588

int __rtscam_query_v4l2_ctrl(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  memset(param_4,0,0x44);
  *param_4 = *(undefined4 *)(param_3 + 8);
  param_4[1] = *(undefined4 *)(param_3 + 0x30);
  strlcpy(param_4 + 2,param_3 + 0xc,0x20);
  param_4[0xe] = 0;
  if ((*(uint *)(param_2 + 0x18) & 2) == 0) {
    param_4[0xe] = 0x40;
  }
  if ((*(uint *)(param_2 + 0x18) & 1) == 0) {
    param_4[0xe] = param_4[0xe] | 4;
  }
  if (((*(uint *)(param_2 + 0x1c) & 0x800) != 0) ||
     (iVar3 = FUN_00014858(param_1,param_2), -1 < iVar3)) {
    if ((*(uint *)(param_2 + 0x18) & 0x80) != 0) {
      uVar1 = (**(code **)(param_3 + 0x40))
                        (param_3,0x87,*(int *)(param_2 + 0x20) + (uint)*(byte *)(param_2 + 0x17) * 5
                        );
      param_4[0xd] = uVar1;
    }
    iVar3 = *(int *)(param_3 + 0x30);
    if (iVar3 == 3) {
      param_4[10] = 0;
      param_4[0xb] = *(int *)(param_3 + 0x3c) + -1;
      param_4[0xc] = 1;
      piVar2 = *(int **)(param_3 + 0x38);
      iVar3 = 0;
      while (iVar3 != *(int *)(param_3 + 0x3c)) {
        if (*piVar2 == param_4[0xd]) {
          param_4[0xd] = iVar3;
          break;
        }
        piVar2 = piVar2 + 9;
        iVar3 = iVar3 + 1;
      }
    }
    else if (iVar3 == 4) {
      param_4[10] = 0;
      param_4[0xb] = 0;
      param_4[0xc] = 0;
    }
    else if (iVar3 == 2) {
      param_4[10] = 0;
      param_4[0xb] = 1;
      param_4[0xc] = 1;
    }
    else {
      if ((*(uint *)(param_2 + 0x18) & 4) != 0) {
        uVar1 = (**(code **)(param_3 + 0x40))
                          (param_3,0x82,
                           *(int *)(param_2 + 0x20) + (uint)*(byte *)(param_2 + 0x17) * 2);
        param_4[10] = uVar1;
      }
      if ((*(uint *)(param_2 + 0x18) & 8) != 0) {
        uVar1 = (**(code **)(param_3 + 0x40))
                          (param_3,0x83,
                           *(int *)(param_2 + 0x20) + (uint)*(byte *)(param_2 + 0x17) * 3);
        param_4[0xb] = uVar1;
      }
      if ((*(uint *)(param_2 + 0x18) & 0x10) != 0) {
        uVar1 = (**(code **)(param_3 + 0x40))
                          (param_3,0x84,
                           *(int *)(param_2 + 0x20) + (uint)*(byte *)(param_2 + 0x17) * 4);
        param_4[0xc] = uVar1;
      }
    }
    iVar3 = 0;
  }
  return iVar3;
}



// ==== rtscam_query_v4l2_ctrl @ 000155f4 size=216

undefined4 rtscam_query_v4l2_ctrl(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18 [2];
  
  local_18[0] = 0;
  iVar1 = mutex_lock_interruptible(param_1 + 0x90);
  if (iVar1 < 0) {
    uVar2 = 0xfffffe00;
    if ((rtscam_debug & 1) != 0) {
      printk(&_LC5);
      uVar2 = 0xfffffe00;
    }
  }
  else {
    iVar1 = rtscam_find_ctrl(param_1,*param_2,local_18);
    if (iVar1 == 0) {
      uVar2 = 0xffffffea;
    }
    else {
      uVar2 = __rtscam_query_v4l2_ctrl(param_1,iVar1,local_18[0],param_2);
    }
    mutex_unlock(param_1 + 0x90);
  }
  return uVar2;
}



// ==== rtscam_ctrl_get @ 000156cc size=300

int rtscam_ctrl_get(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_20 [3];
  
  uVar1 = param_2 + 3 & 3;
  uVar2 = param_2 & 3;
  local_20[0] = 0;
  iVar4 = rtscam_find_ctrl(param_1,(*(int *)((param_2 + 3) - uVar1) << (3 - uVar1) * 8 |
                                   param_2 & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar2) * 8
                                   | *(uint *)(param_2 - uVar2) >> uVar2 * 8,local_20);
  iVar3 = local_20[0];
  if (iVar4 == 0) {
    iVar4 = -0x16;
  }
  else if ((*(uint *)(iVar4 + 0x18) & 2) == 0) {
    iVar4 = -0xd;
  }
  else {
    *(byte *)(iVar4 + 0x1d) = *(byte *)(iVar4 + 0x1d) & 0xfd;
    if ((*(uint *)(iVar4 + 0x1c) & 0x200) == 0) {
      iVar5 = FUN_0001480c(param_1,iVar4 + 0xc,0x81,*(undefined4 *)(iVar4 + 0x20));
      if (iVar5 < 0) {
        return iVar5;
      }
      *(byte *)(iVar4 + 0x1d) = *(byte *)(iVar4 + 0x1d) | 2;
    }
    iVar5 = (**(code **)(iVar3 + 0x40))(iVar3,0x81,*(undefined4 *)(iVar4 + 0x20));
    *(int *)(param_2 + 0xc) = iVar5;
    iVar4 = 0;
    if (*(int *)(iVar3 + 0x30) == 3) {
      piVar6 = *(int **)(iVar3 + 0x38);
      iVar4 = 0;
      while (iVar4 != *(int *)(iVar3 + 0x3c)) {
        if (*piVar6 == iVar5) {
          *(int *)(param_2 + 0xc) = iVar4;
          break;
        }
        piVar6 = piVar6 + 9;
        iVar4 = iVar4 + 1;
      }
      iVar4 = 0;
    }
  }
  return iVar4;
}



// ==== rtscam_get_ctrl @ 000158ec size=116

void rtscam_get_ctrl(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_28 [3];
  undefined4 local_1c;
  
  memset(local_28,0,0x14);
  local_28[0] = *param_2;
  iVar1 = FUN_000157f8(param_1,local_28,1,0);
  if (-1 < iVar1) {
    param_2[1] = local_1c;
  }
  return;
}



// ==== rtscam_set_ctrl @ 00015960 size=128

void rtscam_set_ctrl(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_28 [3];
  undefined4 local_1c;
  
  memset(local_28,0,0x14);
  local_28[0] = *param_2;
  local_1c = param_2[1];
  iVar1 = FUN_00014f70(param_1,local_28,1,0,0);
  if (-1 < iVar1) {
    param_2[1] = local_1c;
  }
  return;
}



// ==== rtscam_get_ext_ctrls @ 000159e0 size=32

int rtscam_get_ext_ctrls(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(param_2 + 0x14);
  iVar1 = mutex_lock_interruptible(param_1 + 0x90);
  if (iVar1 == 0) {
    for (iVar4 = 0; iVar4 != iVar3; iVar4 = iVar4 + 1) {
      iVar1 = rtscam_ctrl_get(param_1,iVar2);
      if (iVar1 != 0) {
        FUN_00014ce0(param_1,1);
        iVar3 = iVar4;
        goto LAB_000158a4;
      }
      iVar2 = iVar2 + 0x14;
    }
    iVar1 = FUN_00014ce0(param_1,1);
    iVar3 = iVar4;
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = -0x200;
  }
LAB_000158a4:
  if ((int *)(param_2 + 8) != (int *)0x0) {
    *(int *)(param_2 + 8) = iVar3;
  }
  return iVar1;
}



// ==== rtscam_set_ext_ctrls @ 00015a00 size=52

void rtscam_set_ext_ctrls(undefined4 param_1,int param_2)

{
  FUN_00014f70(param_1,*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 4),param_2 + 8,0);
  return;
}



// ==== rtscam_try_ext_ctrls @ 00015a34 size=56

void rtscam_try_ext_ctrls(undefined4 param_1,int param_2)

{
  FUN_00014f70(param_1,*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 4),param_2 + 8,1);
  return;
}



// ==== rtscam_video_init_ctrl @ 00015a6c size=200

int rtscam_video_init_ctrl(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int *local_20 [2];
  
  iVar4 = param_1 + 0x9c;
  *(int *)(param_1 + 0x9c) = iVar4;
  *(int *)(param_1 + 0xa0) = iVar4;
  iVar3 = 0;
  do {
    pcVar5 = *(code **)(*(int *)(param_1 + 0x70) + 0xc);
    if (pcVar5 == (code *)0x0) {
      iVar1 = -0x16;
      break;
    }
    iVar1 = (*pcVar5)(param_1,local_20,iVar3);
    if (iVar1 < 0) break;
    puVar2 = *(undefined4 **)(param_1 + 0xa0);
    *(int **)(param_1 + 0xa0) = local_20[0];
    *local_20[0] = iVar4;
    local_20[0][1] = (int)puVar2;
    *puVar2 = local_20[0];
    if ((local_20[0][7] & 0x800U) == 0) {
      FUN_00014858(param_1);
    }
    iVar3 = iVar3 + 1;
  } while (iVar1 == 0);
  iVar4 = 0;
  if (iVar3 == 0) {
    iVar4 = iVar1;
  }
  return iVar4;
}



// ==== rtscam_video_release_ctrl @ 00015b34 size=160

undefined4 rtscam_video_release_ctrl(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  code *pcVar5;
  
  piVar2 = *(int **)(param_1 + 0x9c);
  piVar3 = (int *)**(int **)(param_1 + 0x9c);
  while (piVar2 != (int *)(param_1 + 0x9c)) {
    piVar4 = (int *)piVar2[1];
    iVar1 = *piVar2;
    *(int **)(iVar1 + 4) = piVar4;
    *piVar4 = iVar1;
    *piVar2 = 0x100100;
    piVar2[1] = 0x200200;
    pcVar5 = *(code **)(*(int *)(param_1 + 0x70) + 0x10);
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(param_1);
    }
    piVar2 = piVar3;
    piVar3 = (int *)*piVar3;
  }
  return 0;
}



// ==== rtscam_set_user_fps @ 00015c90 size=76

void rtscam_set_user_fps(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (param_1 != (uint *)0x0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    uVar1 = *(uint *)(param_1[9] + 4);
    if (param_3 / param_2 <= uVar1) {
      param_1[2] = param_2;
      param_1[3] = param_3;
      return;
    }
    param_1[2] = 1;
    param_1[3] = uVar1;
  }
  return;
}



// ==== rtscam_exec_sensor_frmival_setting @ 00015db8 size=156

void rtscam_exec_sensor_frmival_setting(int *param_1,int param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)param_1[0x60];
  if (*(int *)(*param_1 + 0xa4) == 0) {
    (*(code *)puVar1[0xe])(param_1,*puVar1);
    FUN_00015cdc(puVar1,10000000 / *puVar1 & 0xff);
  }
  if (param_2 != 0) {
    FUN_00015be0(param_1);
    return;
  }
  return;
}



// ==== __rtscam_update_sensor_fps @ 00015e54 size=484

void __rtscam_update_sensor_fps(int param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_38 [7];
  
  iVar3 = *(int *)(param_1 + 0x24);
  if (10000000 / param_2 < 0x12d) {
    iVar5 = 0;
    for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)(iVar3 + 0x24); iVar4 = iVar4 + 1) {
      iVar2 = *(int *)(iVar3 + 0x2c) + iVar4 * 0x1c0;
      iVar6 = iVar5;
      if ((*(char *)(iVar2 + 4) != *(char *)(param_1 + -0x158)) &&
         ((*(uint *)(iVar2 + 0x11c) & 1) != 0)) {
        (**(code **)(iVar3 + 0x3c))(iVar2,0);
        iVar6 = iVar5 + 1;
        local_38[iVar5] = iVar4;
      }
      iVar5 = iVar6;
    }
    iVar4 = (**(code **)(iVar3 + 0x38))(param_1 + -0x15c,param_2);
    if (iVar4 == 0) {
      if (*(uint **)(param_1 + 0x24) != (uint *)0x0) {
        **(uint **)(param_1 + 0x24) = param_2;
      }
      FUN_00015cdc(iVar3,10000000 / param_2 & 0xff);
    }
    else if ((rtscam_debug & 1) != 0) {
      printk(&_LC1,"__rtscam_update_sensor_fps");
    }
    iVar4 = 0;
    bVar1 = 0 < iVar5;
    while (bVar1) {
      piVar7 = local_38 + iVar4;
      iVar4 = iVar4 + 1;
      (**(code **)(iVar3 + 0x3c))(*(int *)(iVar3 + 0x2c) + *piVar7 * 0x1c0,1);
      bVar1 = iVar4 < iVar5;
    }
  }
  else if ((rtscam_debug & 1) != 0) {
    printk(&_LC0,"__rtscam_update_sensor_fps");
    return;
  }
  return;
}



// ==== rtscam_release_sensor_fps @ 00016038 size=112

undefined4 rtscam_release_sensor_fps(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffea;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x18);
    while (iVar2 != 0) {
      iVar2 = *(int *)(iVar2 + 8);
      kfree();
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    kfree(*(undefined4 *)(param_1 + 0x20));
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return uVar1;
}



// ==== rtscam_adjust_sensor_fps @ 000160a8 size=472

void rtscam_adjust_sensor_fps(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  puVar5 = *(uint **)(param_1 + 0x180);
  if ((uint)(byte)puVar5[9] <= (uint)*(byte *)(param_1 + 4)) {
    return;
  }
  uVar6 = *(uint *)(param_1 + 0x160) / *(uint *)(param_1 + 0x15c);
  uVar2 = 0;
  for (iVar3 = 0; iVar3 < (int)(uint)(byte)puVar5[9]; iVar3 = iVar3 + 1) {
    iVar4 = puVar5[0xb] + iVar3 * 0x1c0;
    if ((((uint)*(byte *)(iVar4 + 4) != (uint)*(byte *)(param_1 + 4)) &&
        ((*(uint *)(iVar4 + 0x11c) & 1) != 0)) &&
       (uVar7 = *(uint *)(iVar4 + 0x160) / *(uint *)(iVar4 + 0x15c), (int)uVar2 < (int)uVar7)) {
      uVar2 = uVar7;
    }
  }
  if ((int)uVar2 < (int)uVar6) {
    if (((param_2 == 0) && (uVar6 = uVar2, (*(uint *)(param_1 + 0x11c) & 1) != 0)) &&
       (*(int *)puVar5[10] == 1)) {
      return;
    }
    uVar2 = 0;
    if (*(int *)puVar5[10] != 0) {
      uVar2 = 10000000 / *puVar5;
    }
    bVar1 = false;
    for (iVar3 = 0; iVar3 < (int)(uint)(byte)puVar5[7]; iVar3 = iVar3 + 1) {
      uVar7 = *(uint *)(puVar5[8] + iVar3 * 4);
      uVar8 = 10000000 / uVar7;
      if ((((int)uVar2 < (int)uVar6) || (uVar8 < uVar2)) && ((int)uVar6 <= (int)uVar8)) {
        bVar1 = true;
        uVar2 = uVar8;
        param_4 = uVar7;
      }
    }
    if ((!bVar1) || (param_4 == 0)) goto LAB_00016248;
  }
  else {
    param_4 = *puVar5;
    if (10000000 / param_4 == puVar5[1]) goto LAB_00016248;
  }
  __rtscam_update_sensor_fps(param_1 + 0x15c,param_4);
LAB_00016248:
  if (param_2 == 0) {
    return;
  }
  FUN_00015be0(param_1);
  return;
}



// ==== rtscam_skip_frame @ 00016280 size=224

int rtscam_skip_frame(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  if (*(byte *)(param_1 + 4) < *(byte *)(*(int *)(param_1 + 0x180) + 0x24)) {
    if ((rtscam_debug & 0x20) != 0) {
      printk(&_LC2,*(undefined4 *)(param_1 + 0x16c),*(undefined4 *)(param_1 + 0x170),
             *(undefined4 *)(param_1 + 0x174),*(undefined4 *)(param_1 + 0x178),
             *(undefined4 *)(param_1 + 0x17c));
    }
    iVar2 = *(int *)(param_1 + 0x170);
    iVar1 = *(int *)(param_1 + 0x174);
    if (iVar2 != 0) {
      iVar3 = *(int *)(param_1 + 0x16c);
      if ((iVar3 - *(int *)(param_1 + 0x17c)) * iVar2 <= (iVar2 - *(int *)(param_1 + 0x178)) * iVar3
         ) {
        iVar1 = 1 - iVar1;
        *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
      }
      iVar2 = *(int *)(param_1 + 0x17c) + 1;
      *(int *)(param_1 + 0x17c) = iVar2;
      if (iVar2 % iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x178) = 0;
        *(undefined4 *)(param_1 + 0x17c) = 0;
      }
    }
  }
  return iVar1;
}



// ==== rtscam_disable_snr_fps_max @ 00016360 size=92

void rtscam_disable_snr_fps_max(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    if (**(int **)(param_1 + 0x28) == 0) {
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    else if ((rtscam_debug & 0x100) != 0) {
      printk(&_LC3);
      return;
    }
  }
  return;
}



// ==== rtscam_process_dynamic_sensor_fps @ 000163bc size=140

void rtscam_process_dynamic_sensor_fps(int param_1)

{
  undefined1 uVar1;
  
  if (param_1 != 0) {
    uVar1 = (**(code **)(param_1 + 0x2c))(param_1 + -8);
    FUN_00015cdc(param_1 + -8,uVar1);
    if ((rtscam_debug & 0x20000) != 0) {
      printk(&_LC4,*(undefined4 *)(param_1 + -4));
      return;
    }
  }
  return;
}



// ==== rtscam_enable_snr_fps_max @ 00016448 size=152

void rtscam_enable_snr_fps_max(uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_1 != (uint *)0x0) && (param_1[0xc] == 0)) {
    if (*(int *)param_1[10] == 0) {
      iVar1 = 1;
      uVar4 = *(uint *)param_1[8];
      while (iVar1 < (int)(uint)(byte)param_1[7]) {
        iVar2 = iVar1 + 1;
        uVar3 = ((uint *)param_1[8])[iVar1];
        iVar1 = iVar2;
        if (uVar3 < uVar4) {
          uVar4 = uVar3;
        }
      }
      *param_1 = uVar4;
      param_1[0xc] = 1;
    }
    else if ((rtscam_debug & 0x100) != 0) {
      printk(&_LC3);
      return;
    }
  }
  return;
}



// ==== rtscam_init_sensor_fps @ 000164e0 size=468

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 rtscam_init_sensor_fps(uint *param_1,byte *param_2,uint param_3)

{
  void *__dest;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  
  if (param_1 == (uint *)0x0) {
    return 0xffffffea;
  }
  param_1[0xc] = param_3;
  *(byte *)(param_1 + 7) = *param_2;
  __dest = (void *)__kmalloc((uint)*param_2 << 2,0x80d0);
  param_1[8] = (uint)__dest;
  memcpy(__dest,*(void **)(param_2 + 4),(uint)*param_2 << 2);
  iVar1 = 1;
  uVar6 = *(uint *)param_1[8];
  while (iVar1 < (int)(uint)(byte)param_1[7]) {
    iVar2 = iVar1 + 1;
    uVar4 = ((uint *)param_1[8])[iVar1];
    iVar1 = iVar2;
    if (uVar4 < uVar6) {
      uVar6 = uVar4;
    }
  }
  *param_1 = uVar6;
  uVar4 = 300;
  if (10000000 / uVar6 < 0x12d) {
    uVar4 = 10000000 / uVar6;
  }
LAB_000165b4:
  uVar6 = uVar4;
  if (uVar4 == 0) {
    return 0;
  }
  do {
    for (piVar7 = (int *)param_1[6]; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2]) {
      if ((*piVar7 == 1) && (piVar7[1] == uVar6)) {
        uVar5 = 0xffffffef;
        goto LAB_00016654;
      }
    }
    puVar3 = (undefined4 *)kmem_cache_alloc(_DAT_00018144,0x80d0);
    if (puVar3 == (undefined4 *)0x0) {
      uVar5 = 0xfffffff4;
LAB_00016654:
      rtscam_release_sensor_fps(param_1);
      return uVar5;
    }
    *puVar3 = 1;
    puVar3[1] = uVar6;
    puVar3[2] = 0;
    uVar4 = param_1[6];
    if (param_1[6] == 0) {
      param_1[6] = (uint)puVar3;
    }
    else {
      do {
        uVar8 = uVar4;
        uVar4 = *(uint *)(uVar8 + 8);
      } while (uVar4 != 0);
      *(undefined4 **)(uVar8 + 8) = puVar3;
    }
    uVar4 = uVar6 - 1;
    if (uVar6 != 2) break;
    uVar6 = 1;
  } while( true );
  if (uVar6 == 1) {
    uVar4 = 0;
  }
  goto LAB_000165b4;
}



// ==== rtscam_set_sensor_frmival @ 000166b4 size=20

void rtscam_set_sensor_frmival(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
  }
  return;
}



// ==== rtscam_register_frmival_discrete @ 00016804 size=280

undefined4 rtscam_register_frmival_discrete(int param_1,int param_2,int *param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar4 = **(uint **)(param_1 + 0x180);
  pcVar1 = (char *)get_video_frmival(param_1,param_2,*param_3,param_3[1]);
  if (pcVar1 == (char *)0x0) {
    uVar2 = 0xffffffea;
  }
  else if ((*pcVar1 == '\0') || (uVar2 = 0xffffffea, pcVar1[1] == '\0')) {
    if (((*(int *)(param_1 + 0x188) == param_2) &&
        ((*(int *)(param_1 + 0x18c) == *param_3 && (*(int *)(param_1 + 400) == param_3[1])))) &&
       ((*(int *)(param_1 + 0x15c) == 0 || (*(int *)(param_1 + 0x160) == 0)))) {
      uVar4 = 10000000 / uVar4;
      uVar3 = 300;
      if (uVar4 < 0x12d) {
        uVar3 = uVar4;
      }
      rtscam_set_user_fps(param_1 + 0x15c,1,uVar3);
    }
    uVar2 = 0;
    uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x180) + 0x18);
    pcVar1[1] = '\0';
    *(undefined4 *)(pcVar1 + 4) = uVar5;
    *pcVar1 = '\x01';
  }
  return uVar2;
}



// ==== rtscam_clr_frmival @ 0001691c size=40

undefined4 rtscam_clr_frmival(char *param_1)

{
  if (*param_1 != '\0') {
    if (param_1[1] == '\0') {
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
    }
    *param_1 = '\0';
  }
  return 0;
}



