/* rts_camera_soc — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rts_camera_soc.h"

// ==== FUN_00010070 @ 00010070 size=68

int FUN_00010070(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_2 < 5) && (*(int *)(param_1 + 0x17c) != 0)) {
    iVar1 = *(int *)(param_1 + 0x180);
    if (iVar1 != 0) {
      if (param_2 == 4) {
        param_2 = *(int *)(param_1 + 0x17c) - 1;
      }
      iVar1 = iVar1 + param_2 * 0x1c0;
    }
  }
  return iVar1;
}



// ==== FUN_000100b4 @ 000100b4 size=48

void FUN_000100b4(int param_1,undefined4 param_2)

{
  uint local_10 [3];
  
  local_10[0] = (uint)*(byte *)(param_1 + 0xce);
  (**(code **)(*(int *)(param_1 + 0x32c) + 8))(param_2,local_10);
  return;
}



// ==== FUN_000101c0 @ 000101c0 size=148

undefined4 FUN_000101c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x70);
  mutex_lock(iVar2 + 0x84);
  iVar1 = *(int *)(iVar2 + 0xa8);
  *(int *)(iVar2 + 0xa8) = iVar1 + -1;
  if (iVar1 == 1) {
    rtscam_soc_stop_clock(iVar2);
  }
  mutex_unlock(iVar2 + 0x84);
  *(undefined4 *)(param_1 + 0x70) = 0;
  return 0;
}



// ==== FUN_0001044c @ 0001044c size=84

void FUN_0001044c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = dev_get_drvdata();
  scnprintf(param_3,0x1000,"ISP %d.%03d\n",*(undefined1 *)(iVar1 + -0x44),
            *(undefined1 *)(iVar1 + -0x43));
  return;
}



// ==== FUN_000104a0 @ 000104a0 size=180

int FUN_000104a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = dev_get_drvdata();
  iVar4 = 0;
  for (uVar3 = 0; uVar3 < *(uint *)(iVar1 + 0x68); uVar3 = uVar3 + 1) {
    iVar2 = scnprintf(param_3 + iVar4,0x1000,&_LC13,
                      *(undefined4 *)(*(int *)(iVar1 + 0x6c) + uVar3 * 0x1c0 + 0x1b8));
    iVar4 = iVar4 + iVar2;
  }
  return iVar4;
}



// ==== FUN_00010554 @ 00010554 size=180

int FUN_00010554(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = dev_get_drvdata();
  iVar4 = 0;
  for (uVar3 = 0; uVar3 < *(uint *)(iVar1 + 0x68); uVar3 = uVar3 + 1) {
    iVar2 = scnprintf(param_3 + iVar4,0x1000,&_LC3,
                      *(undefined4 *)(*(int *)(iVar1 + 0x6c) + uVar3 * 0x1c0 + 0xbc));
    iVar4 = iVar4 + iVar2;
  }
  return iVar4;
}



// ==== FUN_00010608 @ 00010608 size=72

void FUN_00010608(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = dev_get_drvdata();
  scnprintf(param_3,0x1000,&_LC13,*(undefined4 *)(iVar1 + 0x288));
  return;
}



// ==== FUN_00010790 @ 00010790 size=72

void FUN_00010790(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = dev_get_drvdata();
  scnprintf(param_3,0x1000,&_LC1,*(undefined4 *)(iVar1 + -0x10));
  return;
}



// ==== FUN_00010a34 @ 00010a34 size=228

int FUN_00010a34(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = dev_get_drvdata();
  uVar2 = rtscam_mem_get_total_size(*(undefined4 *)(iVar1 + 0x240));
  iVar3 = scnprintf(param_3,0x1000,"total : %12ld\n",uVar2);
  uVar2 = rtscam_mem_get_used_size(*(undefined4 *)(iVar1 + 0x240));
  iVar4 = scnprintf(param_3 + iVar3,0x1000,"used  : %12ld\n",uVar2);
  uVar2 = rtscam_mem_get_left_size(*(undefined4 *)(iVar1 + 0x240));
  iVar1 = scnprintf(param_3 + iVar3 + iVar4,0x1000,"left  : %12ld\n",uVar2);
  return iVar3 + iVar4 + iVar1;
}



// ==== FUN_00010b18 @ 00010b18 size=136

int FUN_00010b18(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint local_18 [2];
  
  iVar1 = dev_get_drvdata();
  local_18[0] = 0;
  iVar2 = _kstrtoul(param_3,0,local_18);
  if (iVar2 == 0) {
    if (8 < local_18[0]) {
      local_18[0] = 8;
    }
    *(uint *)(iVar1 + 0x288) = local_18[0];
    iVar2 = param_4;
  }
  return iVar2;
}



// ==== FUN_00010ba0 @ 00010ba0 size=136

undefined4 FUN_00010ba0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int local_18 [2];
  
  iVar1 = dev_get_drvdata();
  local_18[0] = 0;
  iVar2 = kstrtoint(param_3,0,local_18);
  if (iVar2 == 0) {
    if (local_18[0] == 0) {
      *(undefined4 *)(iVar1 + 0x214) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x214) = 1;
    }
  }
  else {
    param_4 = 0xffffffea;
  }
  return param_4;
}



// ==== FUN_00010c28 @ 00010c28 size=164

undefined4 FUN_00010c28(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int local_18 [2];
  
  iVar1 = dev_get_drvdata();
  local_18[0] = 0;
  iVar2 = kstrtoint(param_3,0,local_18);
  if (iVar2 == 0) {
    if (local_18[0] == 1) {
      pcVar3 = rtscam_enable_snr_fps_max;
    }
    else {
      if (local_18[0] != 0) {
        return param_4;
      }
      pcVar3 = rtscam_disable_snr_fps_max;
    }
    (*pcVar3)(iVar1 + -0x40);
  }
  else {
    param_4 = 0xffffffea;
  }
  return param_4;
}



// ==== FUN_00010ccc @ 00010ccc size=144

/* WARNING: Removing unreachable block (ram,0x00010d30) */
/* WARNING: Removing unreachable block (ram,0x00010d38) */

undefined4 FUN_00010ccc(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = dev_get_drvdata();
  sscanf(param_3,"%u");
  *(undefined4 *)(iVar1 + 0x220) = 300;
  return param_4;
}



// ==== FUN_00010d5c @ 00010d5c size=352

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00010d5c(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint __n;
  uint *local_18 [2];
  
  if (param_1 == (undefined4 *)0x0) {
    iVar1 = -0x16;
    if ((_rtscam_debug & 1) != 0) {
      printk(&_LC30);
      iVar1 = -0x16;
    }
  }
  else if (param_2 == 0) {
    iVar1 = -0x16;
  }
  else {
    if ((_rtscam_debug & 0x100) != 0) {
      printk(&_LC31);
    }
    iVar1 = request_firmware(local_18,param_2,*param_1);
    if (iVar1 == 0) {
      if ((_rtscam_debug & 0x100) != 0) {
        printk(&_LC34,*local_18[0]);
      }
      __n = *local_18[0];
      if ((uint)param_1[0x92] <= *local_18[0]) {
        __n = param_1[0x92];
      }
      memcpy((void *)param_1[0x91],(void *)local_18[0][1],__n);
      param_1[0x9a] = 0;
      release_firmware(local_18[0]);
      iVar1 = 0;
    }
    else if ((_rtscam_debug & 1) != 0) {
      printk(&_LC32,"isp.fw",iVar1);
    }
  }
  return iVar1;
}



// ==== FUN_00010ebc @ 00010ebc size=204

undefined4 * FUN_00010ebc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)rtscam_ge_device_alloc();
  if (puVar1 != (undefined4 *)0x0) {
    strlcpy(puVar1 + 0x42,param_2,0x20);
    uVar2 = get_device(*param_1);
    puVar1[0x3f] = uVar2;
    puVar1[0x4b] = rtscam_ge_device_release;
    *puVar1 = param_3;
    dev_set_drvdata(puVar1 + 2,param_1);
    iVar3 = rtscam_ge_register_device(puVar1);
    if (iVar3 == 0) {
      return puVar1;
    }
    rtscam_ge_device_release();
  }
  return (undefined4 *)0x0;
}



// ==== FUN_00010f88 @ 00010f88 size=324

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00010f88(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = rtscam_devdata();
  iVar1 = dev_get_drvdata(iVar1 + 8);
  if (*(int *)(iVar1 + 0x10) == 0) {
    iVar2 = -0x16;
  }
  else {
    iVar4 = iVar1 + 0x198;
    iVar2 = mutex_lock_interruptible(iVar4);
    if (iVar2 == 0) {
      piVar3 = (int *)(iVar1 + 0x1bc);
      iVar2 = *piVar3;
      *piVar3 = iVar2 + 1;
      if ((iVar2 == 0) && (iVar2 = rtscam_soc_start_clock(iVar1 + 0x114), iVar2 < 0)) {
        if ((_rtscam_debug & 1) != 0) {
          printk(&_LC35,iVar2);
        }
        *piVar3 = *piVar3 + -1;
        mutex_unlock(iVar4);
      }
      else {
        mutex_unlock(iVar4);
        *(int *)(param_1 + 0x70) = iVar1 + 0x114;
        iVar2 = 0;
      }
    }
    else {
      iVar2 = -0x200;
    }
  }
  return iVar2;
}



// ==== FUN_000110e0 @ 000110e0 size=124

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000110e0(int *param_1,undefined4 param_2,int param_3)

{
  if ((_rtscam_debug & 0x800) != 0) {
    printk(&_LC36,*param_1 + param_3,param_2);
  }
  iowrite32(param_2,*param_1 + param_3);
  return;
}



// ==== FUN_0001115c @ 0001115c size=124

void FUN_0001115c(int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(param_1 + 0x324 + (param_2 >> 5) * 4);
  uVar2 = 1 << (param_2 & 0x1f);
  *puVar1 = *puVar1 | uVar2;
  FUN_000110e0(param_1 + 4,*(undefined4 *)(param_1 + 0x324),0x264);
  *puVar1 = *puVar1 & ~uVar2;
  return;
}



// ==== FUN_000111d8 @ 000111d8 size=116

/* WARNING: Removing unreachable block (ram,0x00011244) */

void FUN_000111d8(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(param_1 + 0x324 + (param_2 + 8U >> 5) * 4);
  uVar2 = 1 << (param_2 + 8U & 0x1f);
  if (param_3 == 0) {
    *puVar1 = *puVar1 & ~uVar2;
  }
  else {
    *puVar1 = *puVar1 | uVar2;
  }
  FUN_000110e0(param_1 + 4,*(undefined4 *)(param_1 + 0x324),0x264);
  return;
}



// ==== FUN_0001124c @ 0001124c size=128

void FUN_0001124c(int param_1,int param_2)

{
  param_1 = param_1 + 4;
  FUN_000110e0(param_1,-(uint)(param_2 != 0),0x500);
  FUN_000110e0(param_1,0xffffffff,0x508);
  FUN_000110e0(param_1,-(uint)(param_2 != 0),0x504);
  FUN_000110e0(param_1,0xffffffff,0x50c);
  return;
}



// ==== FUN_000112cc @ 000112cc size=128

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000112cc(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = ioread32(*param_1 + param_2);
  if ((_rtscam_debug & 0x800) != 0) {
    printk(&_LC37,*param_1 + param_2,uVar1);
  }
  return uVar1;
}



// ==== FUN_0001134c @ 0001134c size=976

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0001134c(int param_1,ushort *param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if ((param_1 != 0) && (param_2 != (ushort *)0x0)) {
    bVar1 = (*param_2 & 0x80) != 0;
    if (bVar1) {
      iVar5 = *(int *)(*(int *)(param_1 + 0x32c) + 0x10);
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x32c) + 0xc);
    }
    uVar6 = iVar5 << 2;
    uVar4 = (uint)*(byte *)((int)param_2 + 3);
    if (uVar6 < uVar4) {
      if ((_rtscam_debug & 1) == 0) {
        return 0xffffffea;
      }
      puVar3 = &_LC38;
    }
    else {
      if ((uVar4 != 0) && (*(int *)(param_2 + 4) == 0)) {
        if ((_rtscam_debug & 1) == 0) {
          return 0xffffffea;
        }
        printk(&_LC39);
        return 0xffffffea;
      }
      iVar5 = 300;
      iVar7 = param_1 + 4;
      do {
        uVar4 = FUN_000112cc(iVar7,0x48);
        if (-1 < (int)uVar4) break;
        iVar5 = iVar5 + -1;
        usleep_range(0x26ac,10000);
      } while (iVar5 != 0);
      if ((int)uVar4 < 0) {
        if ((_rtscam_debug & 1) == 0) {
          return 0xffffffea;
        }
        puVar3 = &_LC40;
        uVar6 = (uint)*param_2;
      }
      else {
        if (!bVar1) {
          iVar5 = 0;
          for (iVar8 = 0; iVar9 = (uint)*(byte *)((int)param_2 + 3) - iVar8,
              iVar8 < (int)(uint)*(byte *)((int)param_2 + 3); iVar8 = iVar8 + 4) {
            uVar4 = 0;
            if (4 < iVar9) {
              iVar9 = 4;
            }
            for (uVar6 = 0; (int)uVar6 < iVar9; uVar6 = uVar6 + 1) {
              uVar4 = uVar4 | (uint)*(byte *)(*(int *)(param_2 + 4) + uVar6 + iVar8) <<
                              ((uVar6 & 3) << 3);
            }
            uVar2 = (**(code **)(*(int *)(param_1 + 0x32c) + 0x14))(iVar5);
            FUN_000110e0(iVar7,uVar4,uVar2);
            iVar5 = iVar5 + 1;
          }
        }
        FUN_000110e0(iVar7,CONCAT22(param_2[2],param_2[3]),0x44);
        FUN_000110e0(iVar7,(uint)*param_2 << 0x10 | (uint)(byte)param_2[1] << 8 |
                           (uint)*(byte *)((int)param_2 + 3),0x40);
        *(undefined4 *)(param_1 + 0x20) = 0;
        __init_waitqueue_head(param_1 + 0x24,"&x->wait",0x10000);
        wait_for_completion_timeout(param_1 + 0x20,(uint)(param_3 * 1000) / 1000);
        uVar6 = FUN_000112cc(iVar7,0x48);
        if ((int)uVar6 < 0) {
          if ((_rtscam_debug & 1) == 0) {
            return 0xffffffea;
          }
          puVar3 = &_LC42;
        }
        else {
          if ((uVar6 >> 0x1e & 1) == 0) {
            param_2[6] = 0;
            param_2[7] = 0;
            if (bVar1) {
              iVar8 = 0;
              for (iVar5 = 0; iVar5 < (int)(uint)*(byte *)((int)param_2 + 3); iVar5 = iVar5 + 4) {
                iVar9 = (uint)*(byte *)((int)param_2 + 3) - iVar5;
                uVar2 = (**(code **)(*(int *)(param_1 + 0x32c) + 0x18))(iVar8);
                if (4 < iVar9) {
                  iVar9 = 4;
                }
                uVar4 = FUN_000112cc(iVar7,uVar2);
                for (uVar6 = 0; (int)uVar6 < iVar9; uVar6 = uVar6 + 1) {
                  *(char *)(*(int *)(param_2 + 4) + iVar5 + uVar6) =
                       (char)(uVar4 >> ((uVar6 & 3) << 3));
                }
                iVar8 = iVar8 + 1;
              }
              return 0;
            }
            return 0;
          }
          uVar6 = uVar6 >> 0x10 & 0xff;
          uVar4 = _rtscam_debug & 1;
          *(uint *)(param_2 + 6) = uVar6;
          if (uVar4 == 0) {
            return 0xffffffea;
          }
          puVar3 = &_LC43;
        }
        uVar4 = (uint)*param_2;
      }
    }
    printk(puVar3,uVar4,uVar6);
  }
  return 0xffffffea;
}



// ==== FUN_0001171c @ 0001171c size=308

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0001171c(int param_1,undefined2 *param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 == 0) || (param_2 == (undefined2 *)0x0)) {
    iVar2 = -0x16;
  }
  else {
    mutex_lock(param_1 + 0x2c);
    if ((_rtscam_debug & 0x4000) != 0) {
      printk(&_LC44,*param_2,*(undefined1 *)(param_2 + 1),*(undefined1 *)((int)param_2 + 3),
             param_2[2],param_2[3]);
    }
    iVar1 = FUN_0001134c(param_1,param_2,*(undefined4 *)(param_1 + 0x334));
    mutex_unlock(param_1 + 0x2c);
    iVar2 = 0;
    if ((iVar1 != 0) && (iVar2 = iVar1, (_rtscam_debug & 1) != 0)) {
      printk(&_LC45,*param_2,*(undefined1 *)(param_2 + 1),*(undefined1 *)((int)param_2 + 3),
             param_2[2],param_2[3],*(undefined4 *)(param_2 + 6));
    }
  }
  return iVar2;
}



// ==== FUN_00011920 @ 00011920 size=192

int FUN_00011920(undefined4 param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 local_40;
  undefined1 local_3f;
  byte local_3e;
  undefined1 auStack_3d [29];
  undefined2 local_20;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_1d = 0x20;
  local_18 = &local_40;
  local_20 = (undefined2)param_2;
  local_1e = 0;
  local_1c = 0;
  local_1a = 0;
  local_14 = 0;
  if (param_3 == (undefined1 *)0x0) {
    iVar1 = -0x16;
  }
  else {
    if (param_2 - 0x184U < 2) {
      local_1d = 6;
    }
    iVar1 = FUN_0001171c(param_1,&local_20);
    if (iVar1 == 0) {
      *param_3 = local_40;
      param_3[2] = local_3e;
      param_3[1] = local_3f;
      if (local_3e != 0) {
        memcpy(param_3 + 3,auStack_3d,(uint)local_3e);
      }
    }
  }
  return iVar1;
}



// ==== FUN_00011ce0 @ 00011ce0 size=1544

/* WARNING: Removing unreachable block (ram,0x00011dd8) */
/* WARNING: Removing unreachable block (ram,0x000121d8) */
/* WARNING: Removing unreachable block (ram,0x00011d38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00011ce0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_2 == 0) {
    piVar5 = (int *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x1c) == 0) {
      return 0;
    }
    iVar7 = *piVar5;
    *piVar5 = iVar7 + -1;
    if (iVar7 != 1) {
      return 0;
    }
    FUN_0001124c(param_1,0);
    iVar7 = 300;
    FUN_000110e0(param_1 + 4,1,0x404);
    while (uVar3 = FUN_000112cc(param_1 + 4,0x404), (uVar3 & 2) == 0) {
      iVar7 = iVar7 + -1;
      usleep_range(0x26ac,10000);
      if (iVar7 == 0) {
        *piVar5 = *piVar5 + 1;
        return -0x16;
      }
    }
    if ((_rtscam_debug & 0x80) == 0) {
      iVar7 = *(int *)(param_1 + 0x32c);
    }
    else {
      printk(&_LC60);
      iVar7 = *(int *)(param_1 + 0x32c);
    }
    (**(code **)(iVar7 + 4))(0,0);
    uVar3 = _rtscam_debug;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if ((uVar3 & 0x80) == 0) {
      return 0;
    }
    printk(&_LC62);
    return 0;
  }
  piVar5 = (int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x1c) == 1) {
    *piVar5 = *piVar5 + 1;
    return 0;
  }
  iVar7 = *piVar5;
  *piVar5 = iVar7 + 1;
  if (iVar7 != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x250) != 0) {
    if (*(int *)(param_1 + 0x268) == 0) {
      iVar7 = *(int *)(param_1 + 0x24c);
      if (iVar7 != 0) {
        if ((_rtscam_debug & 0x80) != 0) {
          printk(&_LC53,iVar7);
        }
        iVar6 = param_1 + 4;
        if (*(char *)(param_1 + 0x34c) == '\x01') {
          FUN_000110e0(iVar6,1,0x300);
          __udelay(1);
          FUN_000110e0(iVar6,0,0x300);
        }
        else {
          rts_sys_force_reset(0);
          __udelay(1);
        }
        iVar8 = 0;
        rts_sys_force_reset(5);
        FUN_000110e0(iVar6,iVar7,0x400);
        while (iVar1 = FUN_000112cc(iVar6,0x400), iVar1 != iVar7) {
          if ((_rtscam_debug & 1) != 0) {
            printk(&_LC54,iVar8,iVar1,iVar7);
          }
          iVar8 = iVar8 + 1;
          FUN_000110e0(iVar6,iVar7,0x400);
          if (iVar8 == 3) {
            *piVar5 = *piVar5 + -1;
            if ((_rtscam_debug & 1) == 0) {
              return -0x16;
            }
            printk(&_LC55);
            return -0x16;
          }
        }
        iVar8 = (**(code **)(*(int *)(param_1 + 0x32c) + 4))(1,0);
        if (iVar8 == 0) {
          FUN_000110e0(iVar6,8,0x404);
          if ((*(uint *)(param_1 + 0x350) & 1) != 0) {
            rts_sys_force_reset(3);
            __udelay(1);
          }
          rts_sys_force_reset(7);
          __udelay(1);
          rts_sys_force_reset(6);
          FUN_000110e0(iVar6,4,0x404);
          FUN_0001124c(param_1,1);
          *(undefined4 *)(param_1 + 0x20) = 0;
          __init_waitqueue_head(param_1 + 0x24,"&x->wait",0x10000);
          iVar8 = wait_for_completion_timeout
                            (param_1 + 0x20,(uint)(*(int *)(param_1 + 0x334) * 1000) / 1000);
          if (iVar8 < 1) {
            uVar2 = FUN_000112cc(iVar6,0x400);
            if ((_rtscam_debug & 1) != 0) {
              printk(&_LC58,uVar2,iVar7);
            }
            *piVar5 = *piVar5 + -1;
            if ((_rtscam_debug & 1) != 0) {
              printk(&_LC59);
            }
            iVar7 = 300;
            FUN_000110e0(iVar6,1,0x404);
            do {
              uVar3 = FUN_000112cc(iVar6,0x404);
              if ((uVar3 & 2) != 0) {
                if ((_rtscam_debug & 0x80) == 0) goto LAB_000120e0;
                puVar4 = &_LC60;
                goto LAB_000120d0;
              }
              iVar7 = iVar7 + -1;
              usleep_range(0x26ac,10000);
            } while (iVar7 != 0);
            if ((_rtscam_debug & 1) != 0) {
              puVar4 = &_LC61;
LAB_000120d0:
              printk(puVar4);
            }
LAB_000120e0:
            (**(code **)(*(int *)(param_1 + 0x32c) + 4))(0,0);
            return -0x16;
          }
          *(undefined4 *)(param_1 + 0x1c) = 1;
          if ((_rtscam_debug & 0x80) == 0) {
            return 0;
          }
          puVar4 = &_LC57;
          iVar8 = 0;
        }
        else {
          *piVar5 = *piVar5 + -1;
          if ((_rtscam_debug & 1) == 0) {
            return iVar8;
          }
          puVar4 = &_LC56;
        }
        printk(puVar4);
        return iVar8;
      }
    }
    else if ((_rtscam_debug & 1) != 0) {
      printk(&_LC51);
    }
  }
  if ((_rtscam_debug & 1) != 0) {
    printk(&_LC52);
  }
  *piVar5 = *piVar5 + -1;
  return -0x16;
}



// ==== FUN_000122e8 @ 000122e8 size=196

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000122e8(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_2 + 0x18) == 0) {
    if (*(int *)(param_2 + 0x10) == 0) {
      uVar2 = 0xffffffea;
    }
    else {
      iVar1 = rtscam_mem_alloc(param_1[0xd5],*(int *)(param_2 + 0x10),param_2 + 0x14,0);
      *(int *)(param_2 + 0xc) = iVar1;
      if (iVar1 == 0) {
        uVar2 = 0xfffffff4;
        if ((_rtscam_debug & 1) != 0) {
          printk(&_LC63);
          uVar2 = 0xfffffff4;
        }
      }
      else {
        uVar2 = get_device(*param_1);
        *(undefined4 *)(param_2 + 8) = uVar2;
        *(undefined4 *)(param_2 + 0x18) = 1;
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// ==== FUN_000123ac @ 000123ac size=264

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000123ac(int param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  code *pcVar4;
  
  if (1 < (*(int *)(param_1 + 0x34c) - 1U & 0xff)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x308) == 0) {
    pcVar4 = *(code **)(*(int *)(param_1 + 0x32c) + 0x20);
    if (pcVar4 == (code *)0x0) {
      if ((_rtscam_debug & 1) == 0) {
        return 0xffffffea;
      }
      puVar3 = &_LC64;
    }
    else {
      uVar1 = (*pcVar4)(*param_2,param_2[1]);
      *(undefined4 *)(param_1 + 0x300) = uVar1;
      iVar2 = FUN_000122e8(param_1,param_1 + 0x2f0);
      if ((iVar2 == 0) && (*(int *)(param_1 + 0x308) != 0)) {
        rtscam_mem_set_info(*(undefined4 *)(param_1 + 0x354),*(undefined4 *)(param_1 + 0x304),&_LC66
                           );
        return 0;
      }
      if ((_rtscam_debug & 1) == 0) {
        return 0xffffffea;
      }
      puVar3 = &_LC65;
    }
    printk(puVar3);
    return 0xffffffea;
  }
  return 0;
}



// ==== FUN_000124b4 @ 000124b4 size=88

void FUN_000124b4(undefined4 *param_1,int param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    rtscam_mem_free(*param_1,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0xc),
                    *(undefined4 *)(param_2 + 0x14));
    put_device(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_2 + 0x18) = 0;
  }
  return;
}



// ==== FUN_0001250c @ 0001250c size=436

undefined4 FUN_0001250c(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  void *__s;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffea;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x17c);
    for (uVar2 = 0; uVar2 < uVar4; uVar2 = uVar2 + 1) {
      rtscam_clr_format(*(int *)(param_1 + 0x180) + uVar2 * 0x1c0);
      uVar4 = *(uint *)(param_1 + 0x17c);
    }
    kfree();
    *(undefined4 *)(param_1 + 0x180) = 0;
    *(undefined4 *)(param_1 + 0x17c) = 0;
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0x184) = 0;
    *(undefined4 *)(param_1 + 0x188) = 0;
    *(undefined4 *)(param_1 + 0x18c) = 0;
    *(undefined4 *)(param_1 + 0x170) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
    *(undefined4 *)(param_1 + 0x178) = 0;
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    rtscam_release_sensor_fps(param_1 + 0xd4);
    FUN_000124b4(param_1 + 0x354,param_1 + 0x208);
    memset((void *)(param_1 + 0xcc),0,4);
    uVar2 = 0;
    __s = (void *)(param_1 + 0x48);
    do {
      for (; uVar2 < *(uint *)((int)__s + 0x24); uVar2 = uVar2 + 1) {
        iVar5 = *(int *)((int)__s + 0x28) + iVar3;
        if ((*(uint *)(iVar5 + 0x1c) & 0x1000) != 0) {
          rtscam_ctrl_clr_mapping(iVar5);
          rtscam_ctrl_clr_info(iVar5);
        }
      }
      iVar3 = iVar3 + 0x24;
      kfree();
      memset(__s,0,0x2c);
      uVar2 = 0;
      __s = (void *)((int)__s + 0x2c);
    } while (iVar3 != 0x6c);
    memset((void *)(param_1 + 0x40),0,8);
    uVar1 = 0;
  }
  return uVar1;
}



// ==== FUN_00012e7c @ 00012e7c size=2024

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00012e7c(undefined4 param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int unaff_gp;
  
  iVar8 = param_2 + 4;
  uVar2 = FUN_000112cc(iVar8,0x508);
  if (uVar2 != 0) {
    if ((uVar2 & 1) != 0) {
      if ((_rtscam_debug & 0x4000) != 0) {
        printk(&_LC88);
      }
      FUN_000110e0(iVar8,1,0x508);
      complete(param_2 + 0x20);
      return 1;
    }
    if ((uVar2 & 2) == 0) {
      if ((uVar2 & 0x1000000) != 0) {
        FUN_000110e0(iVar8,0x1000000,0x508);
        queue_work_on(1,_system_wq,param_2 + 0xdc);
        return 1;
      }
      if ((uVar2 & 0x4000000) == 0) {
        if (((*(uint *)(param_2 + 0x350) & 2) == 0) || ((uVar2 & 4) == 0)) {
          uVar10 = 0x10;
          iVar11 = 0;
          do {
            uVar10 = 1 << (uVar10 & 0x1f);
            iVar9 = iVar11 + 1;
            if ((uVar10 & uVar2) != 0) {
              iVar9 = *(int *)(unaff_gp + 0x14);
              if ((_rtscam_debug & 0x80000) != 0) {
                printk(&_LC91,iVar11);
                iVar9 = *(int *)(unaff_gp + 0x14);
              }
              *(int *)(unaff_gp + 0x14) = iVar9 + 1;
              param_2 = param_2 + iVar11 * 4;
              *(int *)(param_2 + 0x26c) = *(int *)(param_2 + 0x26c) + 1;
              *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
              uVar2 = uVar10;
              if ((*(uint *)(unaff_gp + 8) >> 2 & 1) != 0) {
                preempt_schedule();
              }
              break;
            }
            uVar10 = iVar11 + 0x11;
            iVar11 = iVar9;
          } while (iVar9 != 7);
        }
        else {
          if ((_rtscam_debug & 1) != 0) {
            printk(&_LC90);
          }
          uVar2 = 4;
        }
      }
      else {
        uVar2 = 0x4000000;
      }
    }
    else {
      if ((_rtscam_debug & 0x400) != 0) {
        printk(&_LC89);
      }
      uVar2 = 2;
    }
    uVar7 = 0x508;
LAB_000130c8:
    FUN_000110e0(iVar8,uVar2,uVar7);
    return 1;
  }
  uVar2 = FUN_000112cc(iVar8,0x50c);
  if (uVar2 == 0) {
    return 0;
  }
  if ((uVar2 & 0xffc00000) != 0) {
    uVar2 = 0xffc00000;
    uVar7 = 0x50c;
    goto LAB_000130c8;
  }
  bVar1 = (uVar2 & 0x100000) != 0;
  if (bVar1) {
    FUN_000110e0(iVar8,0x100000,0x50c);
  }
  if ((uVar2 & 0x200000) != 0) {
    FUN_000110e0(iVar8,0x200000,0x50c);
LAB_0001317c:
    if ((_rtscam_debug & 0x400) == 0) {
      return 1;
    }
    printk(&_LC92,uVar2);
    return 1;
  }
  if (bVar1) goto LAB_0001317c;
  uVar10 = 0;
  iVar11 = 0;
  do {
    uVar10 = 7 << (uVar10 & 0x1f);
    iVar9 = iVar11 + 1;
    if ((uVar10 & uVar2) != 0) {
      if ((_rtscam_debug & 0x400) != 0) {
        printk(&_LC93,uVar2);
      }
      FUN_000110e0(iVar8,uVar10,0x50c);
      iVar8 = FUN_00010070(param_2,iVar11);
      if (iVar8 != 0) {
        *(int *)(iVar8 + 0x1a8) = *(int *)(iVar8 + 0x1a8) + 1;
      }
      uVar7 = FUN_00010070(param_2,iVar11);
      *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
      rtscam_submit_buffer(uVar7,0);
      goto LAB_0001325c;
    }
    uVar10 = iVar9 * 4;
    iVar11 = iVar9;
  } while (iVar9 != 5);
  if ((uVar2 & 8) == 0) {
    if ((uVar2 & 0x80) == 0) {
      if ((uVar2 & 0x800) == 0) {
        if ((uVar2 & 0x8000) == 0) {
          uVar7 = 5;
          if ((uVar2 & 0x80000) == 0) goto LAB_00013318;
          uVar7 = 4;
          uVar6 = 0x80000;
        }
        else {
          uVar7 = 3;
          uVar6 = 0x8000;
        }
      }
      else {
        uVar7 = 2;
        uVar6 = 0x800;
      }
    }
    else {
      uVar7 = 1;
      uVar6 = 0x80;
    }
  }
  else {
    uVar7 = 0;
    uVar6 = 8;
  }
  FUN_000110e0(iVar8,uVar6,0x50c);
LAB_00013318:
  piVar3 = (int *)FUN_00010070(param_2,uVar7);
  if (piVar3 == (int *)0x0) {
    if ((_rtscam_debug & 0x400) == 0) {
      return 1;
    }
    printk(&_LC94);
    return 1;
  }
  *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
  uVar10 = 2;
  uVar2 = 0;
  do {
    uVar4 = 4;
    if ((char)piVar3[0x61] != '\x04') {
      uVar4 = (uint)*(byte *)(piVar3 + 1);
    }
    iVar11 = *(int *)(*piVar3 + 0xb0);
    iVar8 = iVar11 + (uint)*(byte *)(piVar3 + 1) * 0xc;
    if ((int)uVar2 < (int)(uint)*(byte *)(iVar8 + 0x1cd)) {
      uVar4 = FUN_000112cc(iVar11 + 4,(uVar4 + 0xa9) * 4);
      if ((uVar4 & 0xc << (uVar2 * 4 & 0x1f)) != 0) {
        iVar8 = iVar8 + 0x1cc + uVar2 * 4;
        iVar9 = *(int *)(iVar8 + 4);
        *(undefined4 *)(iVar8 + 4) = 0;
        if ((uVar4 & 1 << (uVar10 & 0x1f)) == 0) {
          if (iVar9 == 0) {
            if ((_rtscam_debug & 0x400) != 0) {
              puVar5 = &_LC96;
              uVar4 = uVar2;
LAB_000134e8:
              printk(puVar5,uVar4);
            }
          }
          else {
            iVar11 = iVar11 + (uint)*(byte *)(piVar3 + 1) * 4;
            iVar8 = *(int *)(iVar11 + 0x3a0);
            if (iVar8 == 0) {
              iVar8 = rtscam_skip_frame(piVar3);
              if ((_rtscam_debug & 0x20) != 0) {
                printk(&_LC98,uVar2,iVar8);
              }
              if (iVar8 == 0) {
                uVar4 = (uint)*(byte *)(piVar3 + 1);
                if ((char)piVar3[0x61] == '\x04') {
                  uVar4 = 4;
                }
                if (((uVar4 < 5) && (*(int *)(*(int *)(*piVar3 + 0xb0) + 0x220) != 0)) &&
                   (iVar8 = *(int *)(*(int *)(*piVar3 + 0xb0) + 0x214) + (uVar4 * 4 + uVar2) * 8,
                   iVar8 != 0)) {
                  *(undefined4 *)(iVar9 + 0x2a8) = *(undefined4 *)(iVar8 + 4);
                }
                if ((char)piVar3[0x61] == '\x04') {
                  iVar8 = FUN_000112cc(*(int *)(*piVar3 + 0xb0) + 4,uVar10 + 0x2de);
                  iVar11 = piVar3[0x68];
                }
                else {
                  iVar8 = piVar3[0x66];
                  iVar11 = piVar3[0x68];
                }
                piVar3[0x68] = iVar11 + 1;
                rtscam_buffer_done(piVar3,iVar9,iVar8);
                iVar9 = 0;
              }
              else {
                piVar3[0x69] = piVar3[0x69] + 1;
              }
              rtscam_submit_buffer(piVar3,iVar9);
            }
            else {
              *(int *)(iVar11 + 0x3a0) = iVar8 + -1;
              piVar3[0x69] = piVar3[0x69] + 1;
              rtscam_submit_buffer(piVar3,iVar9);
              if ((_rtscam_debug & 0x20) != 0) {
                uVar4 = (uint)*(byte *)(piVar3 + 1);
                puVar5 = &_LC97;
                goto LAB_000134e8;
              }
            }
          }
        }
        else {
          rtscam_submit_buffer(piVar3,iVar9);
          piVar3[0x6b] = piVar3[0x6b] + 1;
          if ((_rtscam_debug & 0x400) != 0) {
            printk(&_LC95,(char)piVar3[1],uVar2,uVar4);
          }
        }
      }
    }
    uVar2 = uVar2 + 1;
    uVar10 = uVar10 + 4;
    if (uVar2 == 2) {
LAB_0001325c:
      *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
      if ((*(uint *)(unaff_gp + 8) >> 2 & 1) == 0) {
        return 1;
      }
      preempt_schedule();
      return 1;
    }
  } while( true );
}



// ==== FUN_00014d48 @ 00014d48 size=180

void FUN_00014d48(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x398) != 0) {
      return;
    }
  }
  else if (*(int *)(param_1 + 0x398) == 0) {
    return;
  }
  for (uVar2 = 0; uVar2 < *(uint *)(param_1 + 0x17c); uVar2 = uVar2 + 1) {
    iVar1 = *(int *)(param_1 + 0x180) + uVar2 * 0x1c0;
    if ((*(uint *)(iVar1 + 0x11c) & 1) != 0) {
      __rtscam_soc_s_stream(iVar1,param_2);
    }
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x398) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x398) = 0;
  }
  return;
}



// ==== FUN_00014e60 @ 00014e60 size=164

int FUN_00014e60(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *unaff_gp;
  char local_18 [12];
  
  local_18[0] = '\x01';
  if ((((param_1 == 0) || (*(int *)(param_1 + 0x10) == 0)) || (*(int *)(param_1 + 0x1c) != 1)) ||
     (7 < param_2)) {
    return -0x16;
  }
  iVar2 = param_1 + param_2 * 4;
  if (*(int *)(iVar2 + 0x378) == 0) {
    iVar1 = rtscam_soc_get_gpio_use_status(param_1,param_2,local_18);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (local_18[0] == '\0') {
      *(undefined4 *)(iVar2 + 0x378) = *(undefined4 *)(*unaff_gp + 0xe4);
      return 0;
    }
  }
  return -0x10;
}



// ==== FUN_00014f88 @ 00014f88 size=3256

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_00014f88(int *param_1,uint param_2,uint *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  char *pcVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int unaff_gp;
  undefined8 uVar15;
  ushort local_38;
  undefined1 local_36;
  byte local_35;
  ushort local_34;
  ushort local_32;
  int local_30;
  
  iVar12 = *(int *)(*param_1 + 0xb0);
  if (param_2 != 0x8004733a) {
    if (param_2 < 0x8004733b) {
      if (param_2 == 0x40047334) {
        uVar13 = *(uint *)(iVar12 + 8);
      }
      else {
        if (param_2 < 0x40047335) {
          if (param_2 == 0x20007360) {
            uVar10 = 0;
LAB_00015bb4:
            FUN_00014d48(iVar12,uVar10);
            return (char *)0x0;
          }
          if (param_2 == 0x20007361) {
            uVar10 = 1;
            goto LAB_00015bb4;
          }
          if (param_2 != 0x2000733d) goto LAB_00015bd4;
          if (1 < (*(int *)(iVar12 + 0x34c) - 1U & 0xff)) {
            return (char *)0xffffffea;
          }
          if ((*(uint *)(iVar12 + 0x330) & 2) == 0) {
            return (char *)0xffffffea;
          }
          if (*(int *)(iVar12 + 800) == 0) {
            return (char *)0x0;
          }
          pcVar5 = (char *)rtscam_soc_get_isp_func(iVar12,&local_38);
          if (pcVar5 == (char *)0x0) {
            local_38 = local_38 & 0xfffd;
            FUN_00014d48(iVar12,0);
            pcVar5 = (char *)rtscam_soc_set_isp_func(iVar12,(undefined1)local_38);
            if (pcVar5 == (char *)0x0) {
              FUN_000111d8(iVar12,6,0);
              FUN_00014d48(iVar12,1);
              *(undefined4 *)(iVar12 + 800) = 0;
              if (*(int *)(iVar12 + 0x328) != 0) {
                return (char *)0x0;
              }
              if (*(int *)(iVar12 + 0x308) == 0) {
                return (char *)0x0;
              }
              FUN_000124b4(iVar12 + 0x354,iVar12 + 0x2f0);
              return (char *)0x0;
            }
            FUN_00014d48(iVar12,1);
            if ((_rtscam_debug & 1) == 0) {
              return pcVar5;
            }
            puVar7 = &_LC107;
          }
          else {
            if ((_rtscam_debug & 1) == 0) {
              return pcVar5;
            }
            puVar7 = &_LC106;
          }
          pcVar9 = "rtscam_soc_disable_ldc";
          goto LAB_00015ae4;
        }
        if (param_2 == 0x40047337) {
          uVar13 = (uint)*(byte *)(param_1 + 1);
        }
        else if (param_2 < 0x40047338) {
          if (param_2 != 0x40047335) goto LAB_00015bd4;
          uVar13 = *(uint *)(iVar12 + 0xc);
        }
        else if (param_2 == 0x4004733b) {
          uVar13 = *(uint *)(iVar12 + 0x2ec);
        }
        else {
          if (param_2 != 0x4004733e) goto LAB_00015bd4;
          uVar13 = *(uint *)(iVar12 + 800);
        }
      }
      *param_3 = uVar13;
    }
    else {
      if (param_2 == 0xc0047350) {
        pcVar5 = (char *)FUN_00014e60(iVar12,*param_3);
        return pcVar5;
      }
      if (param_2 < 0xc0047351) {
        if (param_2 == 0xc0047338) {
          uVar13 = *param_3;
          if (6 < uVar13) {
            return (char *)0xffffffea;
          }
          *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
          *(undefined4 *)(iVar12 + (uVar13 + 0x9a) * 4 + 4) = 0;
          *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
          if ((*(uint *)(unaff_gp + 8) >> 2 & 1) != 0) {
            preempt_schedule();
            return (char *)0x0;
          }
          return (char *)0x0;
        }
        if (param_2 == 0xc0047339) {
          uVar13 = *param_3;
          if (uVar13 != 0) {
            FUN_0001115c(iVar12,7);
          }
          FUN_000111d8(iVar12,7,uVar13);
          return (char *)0x0;
        }
        if (param_2 != 0x8008733c) goto LAB_00015bd4;
        if (1 < (*(int *)(iVar12 + 0x34c) - 1U & 0xff)) {
          return (char *)0xffffffea;
        }
        if ((*(uint *)(iVar12 + 0x330) & 2) == 0) {
          return (char *)0xffffffea;
        }
        if (*(int *)(iVar12 + 800) != 0) {
          return (char *)0x0;
        }
        if ((param_3 != (uint *)0x0) && (param_3[1] != 0)) {
          if (*(int *)(iVar12 + 0x308) == 0) {
            pcVar5 = (char *)rtscam_soc_get_snr_fmt(iVar12,&local_38);
            if (pcVar5 != (char *)0x0) {
              if ((_rtscam_debug & 1) == 0) {
                return pcVar5;
              }
              puVar7 = &_LC116;
              goto LAB_000158bc;
            }
            pcVar5 = (char *)FUN_000123ac(iVar12,&local_38);
            if (pcVar5 != (char *)0x0) {
              return pcVar5;
            }
          }
          if (*(uint *)(iVar12 + 0x300) <= *param_3) {
            pcVar5 = (char *)rtscam_soc_get_isp_func(iVar12,&local_38);
            if (pcVar5 == (char *)0x0) {
              if (((param_3[1] | *param_3 | param_3[1] + *param_3) & *(uint *)(unaff_gp + 0x18)) ==
                  0) {
                __copy_user(*(undefined4 *)(iVar12 + 0x2fc));
              }
              FUN_00014d48(iVar12,0);
              FUN_000110e0(iVar12 + 4,*(undefined4 *)(iVar12 + 0x304),0x2e0);
              FUN_000110e0(iVar12 + 4,*(undefined4 *)(iVar12 + 0x300),0x2e4);
              FUN_000111d8(iVar12,6,1);
              local_38 = local_38 | 2;
              pcVar5 = (char *)rtscam_soc_set_isp_func(iVar12);
              FUN_00014d48(iVar12,1);
              if (pcVar5 != (char *)0x0) {
                if ((_rtscam_debug & 1) != 0) {
                  printk(&_LC107,"rtscam_soc_enable_ldc");
                }
                FUN_000111d8(iVar12,6,0);
                FUN_000124b4(iVar12 + 0x354,iVar12 + 0x2f0);
                return pcVar5;
              }
              *(undefined4 *)(iVar12 + 800) = 1;
              return (char *)0x0;
            }
            if ((_rtscam_debug & 1) == 0) {
              return pcVar5;
            }
            puVar7 = &_LC106;
LAB_000158bc:
            printk(puVar7,"rtscam_soc_enable_ldc");
            return pcVar5;
          }
          if ((_rtscam_debug & 1) != 0) {
            printk(&_LC120);
          }
        }
        return (char *)0xffffffea;
      }
      if (param_2 == 0xc0087332) {
        uVar11 = *param_3;
        uVar13 = uVar11 * 0x10;
        puVar2 = (ushort *)__kmalloc(uVar13,0x80d0);
        if (puVar2 == (ushort *)0x0) {
          return (char *)0xfffffff4;
        }
        iVar14 = __kmalloc(uVar13,0x80d0);
        if (iVar14 == 0) {
LAB_00015260:
          pcVar5 = (char *)0xfffffff4;
        }
        else {
          uVar8 = param_3[1];
          if (((uVar8 | uVar13 | uVar8 + uVar13) & *(uint *)(unaff_gp + 0x18)) == 0) {
            __copy_user(puVar2,uVar8,uVar13);
            uVar8 = param_3[1];
          }
          if (((uVar8 | uVar13 | uVar8 + uVar13) & *(uint *)(unaff_gp + 0x18)) == 0) {
            __copy_user(iVar14,uVar8,uVar13);
          }
          for (uVar13 = 0; uVar13 != uVar11; uVar13 = uVar13 + 1) {
            (puVar2 + uVar13 * 8 + 4)[0] = 0;
            (puVar2 + uVar13 * 8 + 4)[1] = 0;
          }
          puVar4 = puVar2;
          for (uVar13 = 0; uVar13 != uVar11; uVar13 = uVar13 + 1) {
            uVar1 = *puVar4;
            if (*(char *)((int)puVar4 + 3) != '\0') {
              iVar3 = __kmalloc(*(char *)((int)puVar4 + 3),0x80d0);
              *(int *)(puVar4 + 4) = iVar3;
              if (iVar3 == 0) goto LAB_00015260;
              if (((uVar1 & 0x80) == 0) &&
                 (uVar8 = *(uint *)(iVar14 + uVar13 * 0x10 + 8),
                 ((uVar8 | *(byte *)((int)puVar4 + 3) | uVar8 + *(byte *)((int)puVar4 + 3)) &
                 *(uint *)(unaff_gp + 0x18)) == 0)) {
                __copy_user(iVar3);
              }
            }
            puVar4 = puVar4 + 8;
          }
          pcVar5 = (char *)0xffffffea;
          if ((iVar12 != 0) && (uVar11 != 0)) {
            mutex_lock(iVar12 + 0x2c);
            uVar13 = 0;
            iVar3 = 0;
            do {
              pcVar5 = (char *)FUN_0001134c(iVar12,(int)puVar2 + iVar3,
                                            *(undefined4 *)(iVar12 + 0x334));
              if (pcVar5 != (char *)0x0) break;
              uVar13 = uVar13 + 1;
              iVar3 = uVar13 * 0x10;
            } while (uVar13 != uVar11);
            mutex_unlock(iVar12 + 0x2c);
            if (pcVar5 == (char *)0x0) {
              uVar13 = 0;
              puVar4 = puVar2;
              do {
                uVar8 = (uint)*(byte *)((int)puVar4 + 3);
                uVar15 = CONCAT44(uVar13,puVar4);
                if ((uVar8 != 0) && (uVar15 = CONCAT44(uVar13,puVar4), (*puVar4 & 0x80) != 0)) {
                  uVar6 = *(uint *)(iVar14 + uVar13 * 0x10 + 8);
                  uVar15 = CONCAT44(uVar13,puVar4);
                  if (((uVar6 | uVar8 | uVar6 + uVar8) & *(uint *)(unaff_gp + 0x18)) == 0) {
                    uVar15 = __copy_user(uVar6,*(undefined4 *)(puVar4 + 4));
                  }
                }
                uVar13 = (int)((ulonglong)uVar15 >> 0x20) + 1;
                puVar4 = (ushort *)((int)uVar15 + 0x10);
              } while (uVar13 != uVar11);
            }
          }
        }
        puVar4 = puVar2;
        for (uVar13 = 0; uVar13 != uVar11; uVar13 = uVar13 + 1) {
          if (*(int *)(puVar4 + 4) != 0) {
            kfree();
          }
          puVar4[4] = 0;
          puVar4[5] = 0;
          puVar4 = puVar4 + 8;
        }
        kfree(puVar2);
        if (iVar14 != 0) {
          kfree(iVar14);
          return pcVar5;
        }
        return pcVar5;
      }
      if (param_2 < 0xc0087333) {
        if (param_2 != 0xc0047351) {
LAB_00015bd4:
          if ((_rtscam_debug & 1) != 0) {
            printk(&_LC121,param_2,param_2 >> 8 & 0xff,param_2 & 0xff);
            return (char *)0xffffffea;
          }
          return (char *)0xffffffea;
        }
        if (iVar12 == 0) {
          return (char *)0xffffffea;
        }
        if (7 < *param_3) {
          return (char *)0xffffffea;
        }
        *(undefined4 *)(iVar12 + (*param_3 + 0xde) * 4) = 0;
      }
      else {
        if (param_2 != 0xc0087336) {
          if (param_2 == 0xc0107331) {
            local_38 = (ushort)*param_3;
            local_35 = *(byte *)((int)param_3 + 3);
            uVar1 = local_38 >> 7;
            local_36 = *(undefined1 *)((int)param_3 + 2);
            local_34 = (ushort)param_3[1];
            local_32 = *(ushort *)((int)param_3 + 6);
            if (local_35 == 0) {
              local_30 = 0;
            }
            else {
              local_30 = __kmalloc(local_35,0x80d0);
              if (local_30 == 0) {
                return (char *)0xfffffff4;
              }
              if ((uVar1 & 1) == 0) {
                uVar13 = (uint)local_35;
                if (((uVar13 | param_3[2] | uVar13 + param_3[2]) & *(uint *)(unaff_gp + 0x18)) == 0)
                {
                  __copy_user(local_30);
                }
                if (uVar13 != 0) {
                  kfree(local_30);
                  return (char *)0xfffffff2;
                }
              }
            }
            pcVar5 = (char *)FUN_0001171c(iVar12,&local_38);
            if ((pcVar5 == (char *)0x0) && ((uVar1 & 1) != 0)) {
              uVar13 = param_3[2];
              uVar11 = (uint)local_35;
              if (((uVar11 | uVar13 | uVar11 + uVar13) & *(uint *)(unaff_gp + 0x18)) == 0) {
                __copy_user(uVar13,local_30);
              }
              pcVar5 = (char *)0xfffffff2;
              if (uVar11 == 0) {
                pcVar5 = (char *)0x0;
              }
            }
            if (local_30 != 0) {
              kfree();
              return pcVar5;
            }
            return pcVar5;
          }
          goto LAB_00015bd4;
        }
        uVar13 = *param_3;
        if (6 < uVar13) {
          return (char *)0xffffffea;
        }
        *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
        iVar12 = iVar12 + uVar13 * 4;
        iVar14 = *(int *)(iVar12 + 0x26c);
        if (0 < iVar14) {
          *(int *)(iVar12 + 0x26c) = iVar14 + -1;
        }
        *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
        if ((*(uint *)(unaff_gp + 8) >> 2 & 1) != 0) {
          preempt_schedule();
        }
        param_3[1] = (uint)(0 < iVar14);
      }
    }
    return (char *)0x0;
  }
  uVar13 = *param_3;
  if ((*(uint *)(iVar12 + 0x330) & 1) == 0) {
    return (char *)0xffffffea;
  }
  if (uVar13 == 0) {
    pcVar5 = (char *)0x0;
    if (*(int *)(iVar12 + 0x2ec) != 0) {
      if ((*(int *)(iVar12 + 0x3b4) < 1) ||
         (pcVar5 = (char *)__disable_td(iVar12), pcVar5 == (char *)0x0)) {
        *(undefined4 *)(iVar12 + 0x2ec) = 0;
        if (*(int *)(iVar12 + 0x328) == 0) {
          pcVar5 = (char *)0x0;
          if (*(int *)(iVar12 + 0x2d4) == 0) goto LAB_00015768;
          FUN_000124b4(iVar12 + 0x354,iVar12 + 700);
        }
LAB_00015760:
        pcVar5 = (char *)0x0;
      }
      else if ((_rtscam_debug & 1) != 0) {
        puVar7 = &_LC118;
        pcVar9 = pcVar5;
LAB_0001571c:
        printk(puVar7,pcVar5);
        pcVar5 = pcVar9;
      }
    }
  }
  else {
    pcVar5 = (char *)0x0;
    if (*(int *)(iVar12 + 0x2ec) == 0) {
      if (*(int *)(iVar12 + 0x2d4) == 0) {
        pcVar9 = (char *)rtscam_soc_get_snr_fmt(iVar12,&local_38);
        if (pcVar9 == (char *)0x0) {
          pcVar5 = (char *)rtscam_soc_get_td_buf(iVar12,&local_38);
          if (pcVar5 == (char *)0x0) goto LAB_00015648;
        }
        else {
          pcVar5 = pcVar9;
          if ((_rtscam_debug & 1) != 0) {
            puVar7 = &_LC116;
            pcVar5 = "rtscam_soc_enable_td";
            goto LAB_0001571c;
          }
        }
      }
      else {
LAB_00015648:
        FUN_000110e0(iVar12 + 4,*(undefined4 *)(iVar12 + 0x2d0),0x2b8);
        FUN_000110e0(iVar12 + 4,*(undefined4 *)(iVar12 + 0x2cc),700);
        if ((*(int *)(iVar12 + 0x3b4) < 1) ||
           (pcVar5 = (char *)__enable_td(iVar12), pcVar5 == (char *)0x0)) {
          *(undefined4 *)(iVar12 + 0x2ec) = 1;
          goto LAB_00015760;
        }
        if ((_rtscam_debug & 1) != 0) {
          printk(&_LC117,pcVar5);
        }
        FUN_000124b4(iVar12 + 0x354,iVar12 + 700);
      }
    }
  }
LAB_00015768:
  if ((_rtscam_debug & 0x80) == 0) {
    return pcVar5;
  }
  if (uVar13 == 0) {
    pcVar9 = "disable";
  }
  else {
    pcVar9 = "enable";
  }
  puVar7 = &_LC119;
LAB_00015ae4:
  printk(puVar7,pcVar9);
  return pcVar5;
}



// ==== FUN_00015c40 @ 00015c40 size=292

int FUN_00015c40(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined *puVar6;
  char local_30 [12];
  
  iVar1 = dev_get_drvdata();
  iVar2 = scnprintf(param_3,0x1000,"gpio\tstatus(used by mcu or idle)\n");
  iVar5 = 0;
  do {
    puVar6 = *(undefined **)(iVar1 + -0x114 + iVar5 * 4 + 0x378);
    pcVar4 = "%4d\t  %d\n";
    if (puVar6 == (undefined *)0x0) {
      iVar3 = rtscam_soc_get_gpio_use_status(iVar1 + -0x114,iVar5,local_30);
      if (iVar3 == 0) {
        if (local_30[0] == '\0') {
          puVar6 = &_LC123;
        }
        else {
          puVar6 = &_LC122;
        }
        pcVar4 = "%4d\t  %s\n";
        goto LAB_00015d1c;
      }
    }
    else {
LAB_00015d1c:
      iVar3 = scnprintf(param_3 + iVar2,0x1000,pcVar4,iVar5,puVar6);
      iVar2 = iVar2 + iVar3;
    }
    iVar5 = iVar5 + 1;
    if (iVar5 == 8) {
      return iVar2;
    }
  } while( true );
}



// ==== FUN_0001701c @ 0001701c size=112

/* WARNING: Removing unreachable block (ram,0x00016ea8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0001701c(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = 0;
  if (param_1[4] != 0) {
    if (param_1[0x6f] == 0) {
      if (param_1 == (undefined4 *)0x0) {
        uVar1 = 0xffffffea;
      }
      else {
        piVar3 = param_1 + 5;
        uVar1 = 0;
        if (param_1[4] != 0) {
          iVar2 = *piVar3;
          *piVar3 = iVar2 + -1;
          if (iVar2 == 1) {
            device_remove_file(*param_1,dev_attr_fwinfo);
            device_remove_file(*param_1,&PTR_s_timeout_0001923c);
            device_remove_file(*param_1,dev_attr_apiversion);
            device_remove_file(*param_1,dev_attr_streaminfo);
            device_remove_file(*param_1,dev_attr_meminfo);
            device_remove_file(*param_1,dev_attr_delay);
            device_remove_file(*param_1,dev_attr_gpio);
            device_remove_file(*param_1,dev_attr_num_buffers);
            device_remove_file(*param_1,dev_attr_drop_frames);
            device_remove_file(*param_1,dev_attr_fps);
            device_remove_file(*param_1,dev_attr_sensorfps_max);
            device_remove_file(*param_1,dev_attr_buf_prealloc);
            device_remove_file(*param_1,dev_attr_hz);
            if (param_1[0xc2] != 0) {
              FUN_000124b4(param_1 + 0xd5,param_1 + 0xbc);
            }
            if (param_1[0xb5] != 0) {
              FUN_000124b4(param_1 + 0xd5,param_1 + 0xaf);
            }
            rtscam_video_unregister_device(param_1 + 0x45);
            FUN_0001250c(param_1);
            FUN_00011ce0(param_1,0);
            uVar1 = 0;
            param_1[4] = 0;
          }
          else {
            *piVar3 = *piVar3 + 1;
            uVar1 = 0xfffffff0;
          }
        }
      }
      return uVar1;
    }
    if ((_rtscam_debug & 1) == 0) {
      return 0xffffffea;
    }
    printk(&_LC147);
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



// ==== FUN_0001708c @ 0001708c size=1520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0001708c(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  undefined *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *__s;
  byte *pbVar9;
  code *pcVar10;
  char acStack_150 [128];
  char local_d0 [128];
  undefined4 *local_50 [8];
  code *local_30;
  
  puVar2 = DAT_00019f38;
  __s = local_d0;
  memset(__s,0,0x80);
  memset(acStack_150,0,0x80);
  if (puVar2 == (undefined4 *)0x0) {
    if ((_rtscam_debug & 1) == 0) {
      return 0xffffffea;
    }
    puVar6 = &_LC148;
LAB_0001715c:
    printk(puVar6);
    return 0xffffffea;
  }
  iVar3 = sscanf(param_3,"%127s %127s");
  if (iVar3 < 1) {
    if ((_rtscam_debug & 1) == 0) {
      return 0xffffffea;
    }
    puVar6 = &_LC150;
    goto LAB_0001715c;
  }
  sVar4 = strlen(__s);
  if (sVar4 == 1) {
    iVar3 = local_d0[0] + -0x30;
    if ((int)local_d0[0] - 0x31U < 2) {
      scnprintf(__s,0x80,"isp.fw");
    }
    bVar1 = iVar3 == 2;
  }
  else {
    iVar3 = 0;
    sVar4 = strlen(__s);
    bVar1 = false;
    if (1 < sVar4) {
      iVar3 = 3;
    }
  }
  mutex_lock(puVar2 + 0x66);
  if (bVar1) {
    iVar5 = FUN_0001701c(puVar2);
    iVar3 = iVar5;
    if (iVar5 != 0) goto LAB_00017634;
    if (puVar2[4] != 0) {
LAB_000173fc:
      device_create_file(*puVar2,&PTR_s_sensor_000192cc);
      iVar3 = iVar5;
      goto LAB_00017634;
    }
    iVar3 = FUN_00010d5c(puVar2,__s);
    if (iVar3 == 0) {
      iVar3 = FUN_00011ce0(puVar2,1);
      if (iVar3 == 0) {
        iVar3 = rtscam_soc_get_hclk_desc(puVar2,puVar2 + 0x33);
        if (iVar3 == 0) {
          local_30 = FUN_000100b4;
          FUN_000100b4(puVar2,1);
          scnprintf(puVar2 + 0xd6,0x20,"unknown");
          iVar3 = rtscam_soc_get_sensor_id(puVar2,local_50,0x20);
          if (iVar3 == 0) {
            sVar4 = strlen((char *)local_50);
            if (sVar4 == 0) {
              iVar3 = -0x16;
              if ((_rtscam_debug & 1) != 0) {
                printk(&_LC153);
              }
            }
            else {
              scnprintf(puVar2 + 0xd6,0x20,&_LC154,local_50);
              iVar3 = 0;
            }
          }
          FUN_000100b4(puVar2,0);
          memset(puVar2 + 0x33,0,4);
          FUN_00011ce0(puVar2,0);
          if (iVar3 == 0) goto LAB_000173fc;
        }
        else if ((_rtscam_debug & 1) != 0) {
          puVar6 = &_LC133;
          goto LAB_000172c4;
        }
      }
      else if ((_rtscam_debug & 1) != 0) {
        puVar6 = &_LC152;
        goto LAB_000172c4;
      }
    }
    else if ((_rtscam_debug & 1) != 0) {
      puVar6 = &_LC151;
LAB_000172c4:
      printk(puVar6);
    }
    if ((_rtscam_debug & 1) == 0) goto LAB_00017634;
    puVar6 = &_LC155;
  }
  else {
    if (iVar3 == 0) {
      __s = (char *)0x0;
    }
    iVar3 = FUN_0001701c(puVar2);
    if (iVar3 != 0) goto LAB_00017634;
    if (((__s == (char *)0x0) || (sVar4 = strlen(__s), sVar4 == 0)) ||
       (iVar3 = FUN_00010d5c(puVar2,__s), iVar3 == 0)) {
      sVar4 = strlen(acStack_150);
      if (sVar4 == 0) {
LAB_00017620:
        iVar3 = rtscam_soc_attach(puVar2);
        goto LAB_00017634;
      }
      if (puVar2[0x9a] == 0) {
        iVar3 = request_firmware(local_50,acStack_150,*puVar2);
        if (iVar3 == 0) {
          if ((_rtscam_debug & 0x100) != 0) {
            printk(&_LC158,*local_50[0]);
          }
          pbVar9 = (byte *)local_50[0][1];
          pbVar7 = (byte *)(uint)*(byte *)(puVar2[0x91] + 0x7000);
          pbVar8 = (byte *)(uint)*pbVar9;
          if (pbVar7 == pbVar8) {
            pbVar8 = (byte *)*local_50[0];
            pbVar7 = (byte *)(uint)CONCAT11(pbVar9[1],pbVar9[2]);
            if (pbVar7 <= pbVar8) {
              puVar6 = (undefined *)(puVar2[0x91] + 0x7000);
              pbVar8 = pbVar7 + 8;
              pcVar10 = memcpy;
              goto LAB_000175e4;
            }
            iVar3 = -0x16;
            if ((_rtscam_debug & 1) != 0) {
              puVar6 = &_LC160;
              goto LAB_000175c8;
            }
          }
          else {
            iVar3 = -0x16;
            if ((_rtscam_debug & 1) != 0) {
              puVar6 = &_LC159;
LAB_000175c8:
              iVar3 = -0x16;
              pcVar10 = printk;
              pbVar9 = pbVar7;
LAB_000175e4:
              (*pcVar10)(puVar6,pbVar9,pbVar8);
            }
          }
          release_firmware(local_50[0]);
        }
        else if ((_rtscam_debug & 1) != 0) {
          printk(&_LC32,acStack_150,iVar3);
        }
        if (iVar3 == 0) goto LAB_00017620;
      }
      else {
        iVar3 = -0x16;
        if ((_rtscam_debug & 1) != 0) {
          printk(&_LC157);
        }
      }
      if ((_rtscam_debug & 1) == 0) goto LAB_00017634;
      puVar6 = &_LC161;
    }
    else {
      if ((_rtscam_debug & 1) == 0) goto LAB_00017634;
      puVar6 = &_LC156;
    }
  }
  printk(puVar6);
LAB_00017634:
  mutex_unlock(puVar2 + 0x66);
  if (iVar3 == 0) {
    return param_4;
  }
  return 0xffffffea;
}



// ==== FUN_0001767c @ 0001767c size=612

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0001767c(undefined4 param_1,uint param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  int unaff_gp;
  
  iVar1 = DAT_00019f38;
  iVar4 = DAT_00019f38 + 0x198;
  if (DAT_00019f38 == 0) {
    return -0x16;
  }
  mutex_lock(iVar4);
  if (param_2 == 0x40047344) {
    *param_3 = *(uint *)(iVar1 + 0x248);
LAB_00017868:
    iVar3 = 0;
  }
  else {
    if (param_2 < 0x40047345) {
      if (param_2 != 0x20007340) {
        if (param_2 != 0x20007341) {
LAB_0001787c:
          iVar3 = -0x19;
          if ((_rtscam_debug & 1) != 0) {
            printk(&_LC163,param_2,param_2 >> 8 & 0xff,param_2 & 0xff);
          }
          goto LAB_000178ac;
        }
        goto LAB_0001779c;
      }
      pcVar5 = FUN_0001701c;
    }
    else {
      if (param_2 != 0x80087342) {
        if (param_2 == 0xc0087343) {
          iVar3 = -0x16;
          if (param_3 == (uint *)0x0) goto LAB_000178ac;
          if (*(int *)(iVar1 + 0x268) != 0) {
            if ((_rtscam_debug & 1) != 0) {
              printk(&_LC162);
            }
            goto LAB_000178ac;
          }
          uVar2 = param_3[1];
          uVar6 = *param_3;
          if (*(uint *)(iVar1 + 0x248) <= *param_3) {
            uVar6 = *(uint *)(iVar1 + 0x248);
          }
          if (((uVar2 | uVar6 | uVar2 + uVar6) & *(uint *)(unaff_gp + 0x18)) == 0) {
            __copy_user(uVar2,*(undefined4 *)(iVar1 + 0x244),uVar6);
            iVar3 = 0;
            goto LAB_000178ac;
          }
        }
        else {
          if (param_2 != 0x40087345) goto LAB_0001787c;
          if (param_3 == (uint *)0x0) goto LAB_00017870;
          *param_3 = (uint)*(byte *)(iVar1 + 0x34c);
          param_3[1] = (uint)DAT_0001a156;
        }
        goto LAB_00017868;
      }
      if (param_3 == (uint *)0x0) {
LAB_00017870:
        iVar3 = -0x16;
        goto LAB_000178ac;
      }
      iVar3 = FUN_0001701c(iVar1);
      if (iVar3 != 0) goto LAB_000178ac;
      uVar2 = param_3[1];
      uVar6 = *param_3;
      if (*(uint *)(iVar1 + 0x248) <= *param_3) {
        uVar6 = *(uint *)(iVar1 + 0x248);
      }
      if (((uVar2 | uVar6 | uVar2 + uVar6) & *(uint *)(unaff_gp + 0x18)) == 0) {
        __copy_user(*(undefined4 *)(iVar1 + 0x244),uVar2,uVar6);
      }
      *(undefined4 *)(iVar1 + 0x268) = 0;
LAB_0001779c:
      pcVar5 = rtscam_soc_attach;
    }
    iVar3 = (*pcVar5)(iVar1);
  }
LAB_000178ac:
  mutex_unlock(iVar4);
  return iVar3;
}



