/* rtsx-icr — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rtsx-icr.h"

// ==== FUN_00010030 @ 00010030 size=28

ushort FUN_00010030(int param_1)

{
  ushort uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x2d4) == '\0') {
    uVar1 = *(ushort *)(param_1 + 0x242) & 1;
  }
  return uVar1;
}



// ==== FUN_0001004c @ 0001004c size=92

undefined4 FUN_0001004c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = dev_get_drvdata();
  iVar1 = kstrtoint(param_3,0,iVar1 + 0xf4);
  uVar2 = 0xffffffea;
  if (iVar1 == 0) {
    uVar2 = param_4;
  }
  return uVar2;
}



// ==== FUN_000100a8 @ 000100a8 size=92

undefined4 FUN_000100a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = dev_get_drvdata();
  iVar1 = kstrtoint(param_3,0,iVar1 + 0xf8);
  uVar2 = 0xffffffea;
  if (iVar1 == 0) {
    uVar2 = param_4;
  }
  return uVar2;
}



// ==== FUN_00010104 @ 00010104 size=92

undefined4 FUN_00010104(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = dev_get_drvdata();
  iVar1 = kstrtoint(param_3,0,iVar1 + 0x104);
  uVar2 = 0xffffffea;
  if (iVar1 == 0) {
    uVar2 = param_4;
  }
  return uVar2;
}



// ==== FUN_00010160 @ 00010160 size=92

undefined4 FUN_00010160(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = dev_get_drvdata();
  iVar1 = kstrtoint(param_3,0,iVar1 + 0x108);
  uVar2 = 0xffffffea;
  if (iVar1 == 0) {
    uVar2 = param_4;
  }
  return uVar2;
}



// ==== FUN_000101bc @ 000101bc size=72

undefined4 FUN_000101bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = kstrtoint(param_3,0,&DAT_00015abc);
  uVar2 = 0xffffffea;
  if (iVar1 == 0) {
    uVar2 = param_4;
  }
  return uVar2;
}



// ==== FUN_00010204 @ 00010204 size=72

void FUN_00010204(undefined4 param_1,undefined4 param_2,char *param_3)

{
  dev_get_drvdata();
  snprintf(param_3,0x20,"%d\n");
  return;
}



// ==== FUN_00010530 @ 00010530 size=176

undefined4 FUN_00010530(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint local_18 [2];
  
  iVar1 = dev_get_drvdata();
  iVar2 = *(int *)(iVar1 + 0xe4);
  local_18[0] = 0;
  iVar1 = _kstrtoul(param_3,0,local_18);
  if (iVar1 == 0) {
    if (local_18[0] == 1) {
      local_18[0] = *(uint *)(iVar2 + 0xfc) | 0x38000;
    }
    else if (local_18[0] == 0) {
      local_18[0] = *(uint *)(iVar2 + 0xfc) & 0xfffc7fff;
    }
    *(uint *)(iVar2 + 0xfc) = local_18[0];
  }
  else {
    param_4 = 0xffffffea;
  }
  return param_4;
}



// ==== FUN_00010910 @ 00010910 size=76

void FUN_00010910(int param_1)

{
  mutex_lock(param_1 + 0x3c);
  *(undefined1 *)(param_1 + 100) = 0;
  mutex_unlock(param_1 + 0x3c);
  return;
}



// ==== FUN_00010b54 @ 00010b54 size=136

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00010b54(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0xd4) == '\0') {
    if (*(char *)(param_1 + 0xe0) != '\x01') {
      *(undefined1 *)(param_1 + 0xe0) = 1;
    }
    uVar1 = _system_wq;
    uVar2 = msecs_to_jiffies(200);
    mod_delayed_work_on(1,uVar1,param_1 + 0x7c,uVar2);
    return;
  }
  return;
}



// ==== FUN_00010bdc @ 00010bdc size=168

uint FUN_00010bdc(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x2d4) == '\0') {
    mutex_lock(param_1 + 0x2b8);
    FUN_00010b54(param_1 + 0x200);
    uVar2 = 0;
    uVar1 = ioread32(*(int *)(param_1 + 0x210) + 0x14);
    if (DAT_00015abc == '\0') {
      uVar2 = uVar1 >> 0x13 & 1;
    }
    mutex_unlock(param_1 + 0x2b8);
  }
  else {
    uVar2 = 0xffffff61;
  }
  return uVar2;
}



// ==== FUN_00010eb8 @ 00010eb8 size=288

void FUN_00010eb8(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int unaff_gp;
  
  mutex_lock(param_1 + 0x70);
  uVar1 = arch_local_irq_save();
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
  uVar2 = ioread32(*(int *)(param_1 + -0x38) + 0x14);
  arch_local_irq_restore(*(undefined4 *)(param_1 + 0x6c));
  *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
  if ((*(uint *)(unaff_gp + 8) >> 2 & 1) != 0) {
    preempt_schedule();
  }
  uVar3 = *(uint *)(param_1 + -8);
  *(uint *)(param_1 + -8) = uVar3 & 0xfdffffff;
  uVar3 = uVar3 & 0x10000;
  if (uVar3 == 0) {
    pcVar4 = rtsx_icr_remove_card;
  }
  else {
    if ((uVar2 & uVar3) == 0) goto LAB_00010fb4;
    pcVar4 = rtsx_icr_insert_card;
  }
  (*pcVar4)(param_1 + -0x48);
LAB_00010fb4:
  mutex_unlock(param_1 + 0x70);
  return;
}



// ==== FUN_00011038 @ 00011038 size=124

void FUN_00011038(int param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_1 + 0xd8);
  uVar1 = *puVar2;
  while ((uVar1 & 0xffff0000) != 0) {
    puVar2 = puVar2 + 1;
    __rtsx_icr_add_cmd(param_1,1,uVar1 >> 0x10,0xff,uVar1 & 0xff);
    uVar1 = *puVar2;
  }
  return;
}



// ==== FUN_000115c8 @ 000115c8 size=368

int FUN_000115c8(int param_1,int param_2,void *param_3,size_t param_4,int param_5)

{
  undefined4 uVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  int unaff_gp;
  
  uVar5 = param_2 - 0x800U & 0xffff;
  if (0x100 < (int)param_4) {
    trap(0x3000);
  }
  uVar1 = arch_local_irq_save();
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar3 = uVar5;
  if (param_5 == 0) {
    while (iVar4 < (int)param_4) {
      puVar6 = (undefined1 *)((int)param_3 + iVar4);
      iVar4 = iVar4 + 1;
      __rtsx_icr_add_cmd(param_1,1,uVar3 & 0xffff,0xff,*puVar6);
      uVar3 = uVar5 + iVar4;
    }
    sVar2 = 0;
    if (-1 < (int)param_4) {
      sVar2 = param_4;
    }
    param_3 = (void *)((int)param_3 + sVar2);
  }
  else {
    while (iVar4 < (int)param_4) {
      iVar4 = iVar4 + 1;
      __rtsx_icr_add_cmd(param_1,0,uVar3 & 0xffff,0,0);
      uVar3 = uVar5 + iVar4;
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x104);
  rtsx_icr_send_cmd(param_1);
  iVar4 = rtsx_icr_wait_cmd(param_1,uVar1);
  if ((-1 < iVar4) && (param_5 != 0)) {
    memcpy(param_3,*(void **)(param_1 + 0x24),param_4);
  }
  return iVar4;
}



// ==== FUN_00011738 @ 00011738 size=240

int FUN_00011738(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int unaff_s0;
  int unaff_s2;
  undefined4 unaff_s5;
  int unaff_s6;
  int unaff_s7;
  
  if ((param_2 == 0) || ((int)param_3 < 1)) {
    iVar1 = 0;
  }
  else {
    if (0x200 < (int)param_3) {
      trap(0x3000);
      param_4 = unaff_s5;
      goto LAB_000117a0;
    }
    unaff_s2 = 0;
    unaff_s7 = 0x10000;
    unaff_s6 = (int)param_3 >> 8;
    unaff_s0 = param_2;
    while (unaff_s2 < unaff_s6) {
LAB_000117a0:
      iVar1 = (*(code *)(unaff_s7 + 0x15c8))(param_1,unaff_s2 << 8,unaff_s0,0x100,param_4);
      unaff_s2 = unaff_s2 + 1;
      if (iVar1 != 0) {
        return iVar1;
      }
      unaff_s0 = unaff_s0 + 0x100;
    }
    iVar1 = 0;
    if ((param_3 & 0xff) != 0) {
      iVar1 = FUN_000115c8(param_1,unaff_s0 - param_2 & 0xffff,unaff_s0,param_3 & 0xff,param_4);
    }
  }
  return iVar1;
}



// ==== FUN_00011b60 @ 00011b60 size=268

undefined4 FUN_00011b60(undefined4 param_1,undefined4 param_2)

{
  byte local_20 [12];
  
  local_20[0] = 0;
  rtsx_icr_reg_write(param_1,0xff50,1,1);
  rtsx_icr_reg_read(param_1,0xff41,local_20);
  rtsx_icr_reg_write(param_1,0xff41,0x40,local_20[0] & 0xbf);
  rtsx_icr_reg_write(param_1,0xff42,0x1f,param_2);
  rtsx_icr_reg_read(param_1,0xff41,local_20);
  rtsx_icr_reg_write(param_1,0xff41,0x40,local_20[0] | 0x40);
  __udelay(1000);
  rtsx_icr_reg_write(param_1,0xff50,1,0);
  __udelay(1000);
  rtsx_icr_reg_write(param_1,0xff00,0x10,0);
  return 0;
}



// ==== FUN_00011c6c @ 00011c6c size=120

bool FUN_00011c6c(int param_1)

{
  bool bVar1;
  byte local_18 [12];
  
  local_18[0] = 0;
  rtsx_icr_reg_read(param_1 + 0x200,0xff05,local_18);
  bVar1 = (local_18[0] & 0xf) == 0;
  if (!bVar1) {
    rtsx_icr_reg_write(param_1 + 0x200,0xff05,0x80,0);
  }
  return bVar1;
}



// ==== FUN_00011ce4 @ 00011ce4 size=628

int FUN_00011ce4(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  byte local_28 [8];
  
  iVar4 = param_1 + 0x200;
  if (*(char *)(param_1 + 0x2d4) != '\0') {
    return -0x9f;
  }
  cVar1 = *(char *)(param_2 + 0xb);
  mutex_lock(param_1 + 0x2b8);
  FUN_00010b54(iVar4);
  bVar2 = cVar1 != '\0';
  if (*(char *)(param_1 + 0x244) == '\0') {
    __gpio_set_value(6,bVar2);
    msleep(0x32);
    iVar3 = 0;
    goto LAB_00011ea8;
  }
  if (bVar2) {
    local_28[0] = 0;
    __udelay(1000);
    iVar3 = rtsx_icr_reg_read(iVar4,0xff05,local_28);
    if (iVar3 < 0) goto LAB_00011ea8;
    if ((local_28[0] & 0xf) == 0) {
      iVar3 = rtsx_icr_reg_write(iVar4,0xff05,0xff,0x40);
      if (iVar3 < 0) goto LAB_00011ea8;
      rtsx_icr_reg_write(iVar4,0xff52,0xff,0x31);
      local_28[0] = 0;
      msleep(0x32);
      iVar3 = rtsx_icr_reg_write(iVar4,0xff05,0xff,0x80);
      if (iVar3 < 0) goto LAB_00011ea8;
      msleep(0x14);
      iVar3 = rtsx_icr_reg_read(iVar4,0xff05,local_28);
      if (iVar3 < 0) goto LAB_00011ea8;
      if ((local_28[0] & 0xf) == 0xf) goto LAB_00011f10;
      dev_err(*(undefined4 *)(param_1 + 0x200),"%s error: SD_BUS_STAT = 0x%x\n",
              "rtsx_icr_wait_voltage_stable_2");
      rtsx_icr_reg_write(iVar4,0xff05,0xc0,0);
      rtsx_icr_reg_write(iVar4,0xfd69,0xff,0);
    }
    iVar3 = -0x16;
  }
  else {
    rtsx_icr_reg_write(iVar4,0xff52,0xff,0x71);
LAB_00011f10:
    iVar3 = rtsx_icr_reg_write(iVar4,0xff05,0xc0,0);
  }
LAB_00011ea8:
  mutex_unlock(param_1 + 0x2b8);
  iVar4 = 0;
  if (iVar3 != 0) {
    dev_err(*(undefined4 *)(param_1 + 0x200),"%s error: %d: switch voltage failed\n",
            "sdmmc_switch_voltage",iVar3);
    iVar4 = iVar3;
  }
  return iVar4;
}



// ==== FUN_00012338 @ 00012338 size=636

void FUN_00012338(int param_1,uint *param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_gp;
  
  uVar3 = 0xf;
  if (*param_2 != 0x13) {
    uVar3 = 0xc;
  }
  uVar1 = arch_local_irq_save();
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_2 != (uint *)0x0) {
    __rtsx_icr_add_cmd(param_1,1,0xff09,0xff,*param_2 & 0xff | 0x40);
    uVar4 = param_2[1];
    __rtsx_icr_add_cmd(param_1,1,0xff0a,0xff,uVar4 >> 0x18);
    __rtsx_icr_add_cmd(param_1,1,0xff0b,0xff,uVar4 >> 0x10 & 0xff);
    __rtsx_icr_add_cmd(param_1,1,0xff0c,0xff,uVar4 >> 8 & 0xff);
    __rtsx_icr_add_cmd(param_1,1,0xff0d,0xff,uVar4 & 0xff);
  }
  if ((param_4 & 0xffff) != 0) {
    __rtsx_icr_add_cmd(param_1,1,0xff11,0xff,1);
    __rtsx_icr_add_cmd(param_1,1,0xff12,0xff,0);
    __rtsx_icr_add_cmd(param_1,1,0xff0f,0xff,param_4 & 0xff);
    __rtsx_icr_add_cmd(param_1,1,0xff10,0xff,(param_4 & 0xffff) >> 8);
  }
  __rtsx_icr_add_cmd(param_1,1,0xff01,0xff,1);
  if (uVar3 != 0xf) {
    __rtsx_icr_add_cmd(param_1,1,0xfd5b,1,1);
  }
  __rtsx_icr_add_cmd(param_1,1,0xff13,0xff,uVar3 | 0x80);
  __rtsx_icr_add_cmd(param_1,2,0xff13,0x40,0x40);
  uVar1 = *(undefined4 *)(param_1 + 0x104);
  rtsx_icr_send_cmd(param_1);
  iVar2 = rtsx_icr_wait_cmd(param_1,uVar1);
  if (iVar2 != 0) {
    return;
  }
  FUN_00011738(param_1,param_3,param_4,1);
  return;
}



// ==== FUN_000125b4 @ 000125b4 size=832

undefined4 FUN_000125b4(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint local_70 [12];
  uint local_40 [5];
  char local_2c [4];
  
  iVar5 = param_1 + 0x200;
  if (*(char *)(param_1 + 0x2d4) == '\0') {
    mutex_lock(param_1 + 0x2b8);
    FUN_00010b54(iVar5);
    local_70[0] = local_70[0] & 0xffffff00;
    rtsx_icr_reg_write(iVar5,0xff50,1,1);
    rtsx_icr_reg_read(iVar5,0xff41,local_70);
    rtsx_icr_reg_write(iVar5,0xff41,0x40,local_70[0] & 0xbf);
    rtsx_icr_reg_write(iVar5,0xff41,0xff,DAT_00015ab8 & 0xff | 0x40);
    __udelay(1000);
    rtsx_icr_reg_write(iVar5,0xff50,1,0);
    __udelay(1000);
    uVar6 = 0;
    if (*(int *)(param_1 + 0x300) != 0) {
      iVar9 = 0;
      local_40[0] = 0;
      local_40[1] = 0;
      local_40[2] = 0;
      local_40[3] = 0;
      local_40[4] = 0;
      do {
        uVar8 = 0;
        uVar7 = 0;
        do {
          memset(local_70,0,0x30);
          iVar1 = FUN_00011b60(iVar5,uVar7);
          if (iVar1 == 0) {
            local_70[0] = 0x13;
            iVar1 = FUN_00012338(iVar5,local_70,0,0x40);
            if (iVar1 != 0) {
              local_2c[0] = '\0';
              iVar11 = 100;
              do {
                rtsx_icr_reg_read(iVar5,0xff16,local_2c);
                if (local_2c[0] < '\0') break;
                iVar11 = iVar11 + -1;
                __udelay(100);
              } while (iVar11 != 0);
              rtsx_icr_reg_write(iVar5,0xfd54,0x44,0x44);
              rtsx_icr_reg_write(iVar5,0xff00,0x10,0);
              goto LAB_000127a8;
            }
LAB_000127b0:
            uVar8 = uVar8 | 1 << (uVar7 & 0x1f);
          }
          else {
LAB_000127a8:
            if (iVar1 == 0) goto LAB_000127b0;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != 0x20);
        *(uint *)((int)local_40 + iVar9) = uVar8;
      } while ((uVar8 != 0) && (iVar9 = iVar9 + 4, iVar9 != 0x14));
      iVar9 = 0;
      uVar7 = 0xffffffff;
      do {
        puVar2 = (uint *)((int)local_40 + iVar9);
        iVar9 = iVar9 + 4;
        uVar7 = uVar7 & *puVar2;
      } while (iVar9 != 0x14);
      if (uVar7 == 0) {
        uVar6 = 0xffffffea;
      }
      else {
        iVar11 = 0;
        iVar9 = 0;
        iVar1 = 0;
        do {
          iVar10 = 0;
          do {
            if ((1 << (iVar10 + iVar11 & 0x1fU) & uVar7) == 0) break;
            iVar10 = iVar10 + 1;
          } while (iVar10 != 0x20);
          iVar3 = iVar10;
          iVar4 = iVar11;
          if ((iVar10 <= iVar9) && (iVar3 = iVar9, iVar4 = iVar1, iVar10 == 0)) {
            iVar10 = 1;
          }
          iVar11 = iVar11 + iVar10;
          iVar9 = iVar3;
          iVar1 = iVar4;
        } while (iVar11 < 0x20);
        uVar6 = FUN_00011b60(iVar5,(iVar4 + (iVar3 >> 1)) % 0x20);
      }
    }
    mutex_unlock(param_1 + 0x2b8);
  }
  else {
    uVar6 = 0xffffff61;
  }
  return uVar6;
}



// ==== FUN_00012f90 @ 00012f90 size=616

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00012f90(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  piVar1 = (int *)dev_get_drvdata(param_1 + 0x10);
  iVar5 = piVar1[0x39];
  if (piVar1[0x3a] != 0) {
    rtsx_icr_transfer_stop(piVar1);
    *(undefined4 *)(*(int *)(piVar1[0x3a] + 4) + 0x20) = 0xffffff61;
    if (*(int *)(piVar1[0x3a] + 0xc) != 0) {
      *(undefined4 *)(*(int *)(piVar1[0x3a] + 0xc) + 0x20) = 0xffffff61;
    }
    mmc_request_done(iVar5,piVar1[0x3a]);
  }
  device_remove_file(*piVar1,&PTR_s_ip_register_000159b0);
  device_remove_file(*piVar1,&PTR_s_ocp_register_000159c0);
  device_remove_file(*piVar1,&PTR_s_card_exist_000159a0);
  device_remove_file(*piVar1,&PTR_s_support_uhs_00015990);
  device_remove_file(*piVar1,&PTR_s_trigger_00015980);
  device_remove_file(*piVar1,dev_attr_max_clock);
  device_remove_file(*piVar1,dev_attr_min_clock);
  device_remove_file(*piVar1,dev_attr_cmd_timeout_ms);
  device_remove_file(*piVar1,dev_attr_data_timeout_ms);
  device_remove_file(*piVar1,&PTR_s_force_rw_00015930);
  device_remove_file(*piVar1,&PTR_DAT_00015920);
  mmc_remove_host(iVar5);
  *(undefined1 *)(piVar1 + 0x35) = 1;
  cancel_delayed_work_sync(piVar1 + 0x12);
  cancel_delayed_work_sync(piVar1 + 0x1f);
  free_irq(piVar1[1],piVar1);
  iVar3 = *piVar1;
  if ((iVar3 == 0) || (iVar2 = *(int *)(iVar3 + 0x80), *(int *)(iVar3 + 0x80) == 0)) {
    iVar2 = _mips_dma_map_ops;
  }
  (**(code **)(iVar2 + 4))(iVar3,0x1000,piVar1[6],piVar1[5],0);
  __iounmap(piVar1[4]);
  mmc_free_host(iVar5);
  dev_set_drvdata(param_1 + 0x10,0);
  __release_region(&iomem_resource,piVar1[2],piVar1[3]);
  uVar4 = 0;
  if ((char)piVar1[0x11] == '\0') {
    gpio_free(0);
    gpio_free(6);
    uVar4 = 7;
  }
  gpio_free(uVar4);
  printk(&_LC19);
  return 0;
}



// ==== FUN_000137ec @ 000137ec size=1676

void FUN_000137ec(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  uint *puVar6;
  int unaff_s6;
  int unaff_gp;
  byte local_30 [8];
  
  if (*(char *)(param_1 + 0x2d4) != '\0') {
    return;
  }
  iVar4 = param_1 + 0x200;
  mutex_lock(param_1 + 0x2b8);
  FUN_00010b54(iVar4);
  if ((*(char *)(param_2 + 2) == '\0') || (*(char *)(param_1 + 0x2ec) == '\x01')) goto LAB_00013b38;
  if (*(char *)(param_1 + 0x244) == '\0') {
    uVar2 = arch_local_irq_save();
    *(undefined4 *)(param_1 + 0x2b4) = uVar2;
    *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
    *(undefined4 *)(param_1 + 0x21c) = 0;
    __rtsx_icr_add_cmd(iVar4,1,0xff19,1,1);
    FUN_00011038(iVar4);
    uVar2 = *(undefined4 *)(param_1 + 0x304);
    rtsx_icr_send_cmd(iVar4);
    iVar1 = rtsx_icr_wait_cmd(iVar4,uVar2);
    if (-1 < iVar1) {
      __gpio_set_value(7,1);
      __gpio_set_value(0,1);
      msleep(0x14);
      unaff_s6 = rtsx_icr_reg_write(iVar4,0xfd55,4,4);
      if (0 < unaff_s6) {
        unaff_s6 = 0;
      }
      goto LAB_00013b24;
    }
  }
  else {
    __gpio_set_value(0,1);
    rtsx_icr_reg_write(iVar4,0xff52,0xff,0x71);
    rtsx_icr_reg_write(iVar4,0xff54,0xff,0x1b);
    cVar5 = '\v';
    rtsx_icr_reg_write(iVar4,0xff4b,0xff,1);
    rtsx_icr_reg_read(iVar4,0xff55,local_30);
    do {
      if ((local_30[0] & 1) != 0) {
        uVar2 = arch_local_irq_save();
        *(undefined4 *)(param_1 + 0x2b4) = uVar2;
        *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
        *(undefined4 *)(param_1 + 0x21c) = 0;
        __rtsx_icr_add_cmd(iVar4,1,0xff19,1,1);
        __rtsx_icr_add_cmd(iVar4,1,0xfd69,4,4);
        FUN_00011038(iVar4);
        uVar2 = *(undefined4 *)(param_1 + 0x304);
        rtsx_icr_send_cmd(iVar4);
        iVar1 = rtsx_icr_wait_cmd(iVar4,uVar2);
        if (iVar1 < 0) goto LAB_00013e1c;
        __udelay(0x96);
        iVar1 = rtsx_icr_reg_write(iVar4,0xfd55,4,4);
        if ((iVar1 < 0) || (iVar1 = rtsx_icr_reg_write(iVar4,0xfd5e,0xff,3), iVar1 < 0))
        goto LAB_00013e1c;
        unaff_s6 = rtsx_icr_reg_write(iVar4,0xfd61,0xff,0xf);
        goto LAB_00013b24;
      }
      cVar5 = cVar5 + -1;
      __udelay(500);
      rtsx_icr_reg_read(iVar4,0xff55,local_30);
    } while (cVar5 != '\0');
    dev_err(*(undefined4 *)(param_1 + 0x200),"%s error: wait for PLL stable fail\n",
            "rtsx_icr_power_on_asic");
LAB_00013b24:
    if (unaff_s6 == 0) {
      *(undefined1 *)(param_1 + 0x2ec) = 1;
      goto LAB_00013b38;
    }
  }
LAB_00013e1c:
  dev_err(*(undefined4 *)(param_1 + 0x200),"%s error: set power mode to %u\n","sdmmc_set_ios",
          *(undefined1 *)(param_2 + 2));
LAB_00013b38:
  iVar1 = rtsx_icr_set_bus_width(iVar4,*(undefined1 *)((int)param_2 + 9));
  if (iVar1 != 0) {
    dev_err(*(undefined4 *)(param_1 + 0x200),"%s error: set bus width to %u\n","sdmmc_set_ios",
            *(undefined1 *)((int)param_2 + 9));
  }
  iVar1 = rtsx_icr_set_timing(iVar4,*(undefined1 *)((int)param_2 + 10));
  if (iVar1 != 0) {
    dev_err(*(undefined4 *)(param_1 + 0x200),"%s error: set timing to %u\n","sdmmc_set_ios",
            *(undefined1 *)((int)param_2 + 10));
  }
  iVar1 = rtsx_icr_set_clock(iVar4,*param_2);
  if (iVar1 != 0) {
    dev_err(*(undefined4 *)(param_1 + 0x200),"%s error: set clock to %u\n","sdmmc_set_ios",*param_2)
    ;
  }
  if ((*(char *)(param_2 + 2) == '\0') && (*(char *)(param_1 + 0x2ec) != '\0')) {
    if (*(char *)(param_1 + 0x244) == '\0') {
      uVar2 = arch_local_irq_save();
      *(undefined4 *)(param_1 + 0x2b4) = uVar2;
      *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
      *(undefined4 *)(param_1 + 0x21c) = 0;
      __rtsx_icr_add_cmd(iVar4,1,0xfd69,4,0);
      __rtsx_icr_add_cmd(iVar4,1,0xfd55,4,0);
      uVar2 = *(undefined4 *)(param_1 + 0x304);
      rtsx_icr_send_cmd(iVar4);
      iVar1 = rtsx_icr_wait_cmd(iVar4,uVar2);
      if (-1 < iVar1) {
        __gpio_set_value(0,0);
        __gpio_set_value(7,0);
        msleep(0x14);
        iVar1 = 0;
      }
    }
    else {
      uVar2 = arch_local_irq_save();
      *(undefined4 *)(param_1 + 0x2b4) = uVar2;
      *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
      *(undefined4 *)(param_1 + 0x21c) = 0;
      __rtsx_icr_add_cmd(iVar4,1,0xfd69,4,0);
      __rtsx_icr_add_cmd(iVar4,1,0xfd55,4,0);
      puVar6 = *(uint **)(param_1 + 0x2dc);
      while( true ) {
        uVar3 = *puVar6;
        if ((uVar3 & 0xffff0000) == 0) break;
        __rtsx_icr_add_cmd(iVar4,1,uVar3 >> 0x10,0xff,uVar3 & 0xff);
        puVar6 = puVar6 + 1;
      }
      uVar2 = *(undefined4 *)(param_1 + 0x304);
      rtsx_icr_send_cmd(iVar4);
      iVar1 = rtsx_icr_wait_cmd(iVar4,uVar2);
      if (-1 < iVar1) {
        rtsx_icr_reg_write(iVar4,0xff52,0xff,0);
        rtsx_icr_reg_write(iVar4,0xff54,0xff,0);
        rtsx_icr_reg_write(iVar4,0xff4b,0xff,0);
        __gpio_set_value(0,0);
        iVar1 = 0;
      }
    }
    *(undefined1 *)(param_1 + 0x2ec) = 0;
    if (iVar1 != 0) {
      dev_err(*(undefined4 *)(param_1 + 0x200),"%s error: set power mode to %u\n","sdmmc_set_ios",
              *(undefined1 *)(param_2 + 2));
    }
  }
  mutex_unlock(param_1 + 0x2b8);
  return;
}



// ==== FUN_00013e78 @ 00013e78 size=1012

int FUN_00013e78(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int unaff_gp;
  uint uVar12;
  
  cVar1 = *(char *)(param_1 + 0xed);
  iVar3 = *(int *)(param_2 + 8);
  uVar8 = *(undefined4 *)(param_1 + 0xf0);
  DAT_00015ab4 = 1;
  if (cVar1 != '\0') {
    rtsx_icr_set_clock(param_1,25000000);
  }
  iVar4 = *(int *)(param_2 + 8);
  puVar5 = *(uint **)(param_2 + 4);
  if ((*(uint *)(iVar3 + 0x14) & 0x100) == 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0xe4) + 0x140);
    uVar10 = rtsx_icr_resp_type(param_1,puVar5[6]);
    if ((int)uVar10 < 0) {
      iVar3 = -0x16;
      goto LAB_0001421c;
    }
    uVar12 = 0x20;
    if (iVar3 != 0) {
      uVar12 = 0;
    }
    uVar2 = arch_local_irq_save();
    *(undefined4 *)(param_1 + 0xb4) = uVar2;
    *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (puVar5 != (uint *)0x0) {
      __rtsx_icr_add_cmd(param_1,1,0xff09,0xff,*puVar5 & 0xff | 0x40);
      uVar11 = puVar5[1];
      __rtsx_icr_add_cmd(param_1,1,0xff0a,0xff,uVar11 >> 0x18);
      __rtsx_icr_add_cmd(param_1,1,0xff0b,0xff,uVar11 >> 0x10 & 0xff);
      __rtsx_icr_add_cmd(param_1,1,0xff0c,0xff,uVar11 >> 8 & 0xff);
      __rtsx_icr_add_cmd(param_1,1,0xff0d,0xff,uVar11 & 0xff);
    }
    uVar11 = *(uint *)(iVar4 + 0xc) & 0xffff;
    uVar6 = *(uint *)(iVar4 + 8);
    if (uVar11 != 0) {
      uVar7 = uVar6 & 0xffff;
      if (uVar7 != 0) {
        __rtsx_icr_add_cmd(param_1,1,0xff11,0xff,*(uint *)(iVar4 + 0xc) & 0xff);
        __rtsx_icr_add_cmd(param_1,1,0xff12,0xff,uVar11 >> 8);
        __rtsx_icr_add_cmd(param_1,1,0xff0f,0xff,uVar6 & 0xff);
        __rtsx_icr_add_cmd(param_1,1,0xff10,0xff,uVar7 >> 8);
      }
    }
    uVar12 = uVar12 | uVar10 & 0xff;
  }
  else {
    iVar9 = *(int *)(*(int *)(param_1 + 0xe4) + 0x140);
    iVar3 = rtsx_icr_check_resp(param_1,puVar5);
    if (iVar3 < 0) goto LAB_0001421c;
    uVar12 = 0x20;
    if (iVar9 != 0) {
      uVar12 = 0;
    }
    uVar2 = arch_local_irq_save();
    *(undefined4 *)(param_1 + 0xb4) = uVar2;
    *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    uVar11 = *(uint *)(iVar4 + 0xc) & 0xffff;
    uVar10 = *(uint *)(iVar4 + 8);
    if (uVar11 != 0) {
      uVar6 = uVar10 & 0xffff;
      if (uVar6 != 0) {
        __rtsx_icr_add_cmd(param_1,1,0xff11,0xff,*(uint *)(iVar4 + 0xc) & 0xff);
        __rtsx_icr_add_cmd(param_1,1,0xff12,0xff,uVar11 >> 8);
        __rtsx_icr_add_cmd(param_1,1,0xff0f,0xff,uVar10 & 0xff);
        __rtsx_icr_add_cmd(param_1,1,0xff10,0xff,uVar6 >> 8);
      }
    }
    uVar12 = uVar12 | 0x84;
  }
  __rtsx_icr_add_cmd(param_1,1,0xff01,0xff,uVar12);
  __rtsx_icr_add_cmd(param_1,1,0xfd5b,1,0);
  uVar2 = *(undefined4 *)(param_1 + 0x104);
  rtsx_icr_send_cmd(param_1);
  iVar3 = rtsx_icr_wait_cmd(param_1,uVar2);
  if ((iVar3 != 0) || (iVar3 = rtsx_icr_transfer_data(param_1,iVar4), iVar3 != 0)) {
    rtsx_icr_reg_write(param_1,0xfd54,0x44,0x44);
    rtsx_icr_reg_write(param_1,0xff00,0x10,0);
  }
LAB_0001421c:
  if (cVar1 != '\0') {
    rtsx_icr_set_clock(param_1,uVar8);
  }
  return iVar3;
}



// ==== FUN_00014970 @ 00014970 size=1828

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00014970(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  
  DAT_00015ab4 = 0;
  iVar7 = param_1 + 0x10;
  uVar6 = *(uint *)(*(int *)(param_1 + 0xd0) + 0x14);
  iVar1 = mmc_alloc_host(0x114,iVar7);
  if (iVar1 == 0) {
    return -0xc;
  }
  iVar8 = iVar1 + 0x200;
  if ((uVar6 & 1) == 0) {
    *(undefined1 *)(iVar1 + 0x244) = 1;
  }
  if (*(char *)(iVar1 + 0x244) == '\0') {
    uVar9 = 10000000;
  }
  else {
    uVar9 = 208000000;
  }
  *(undefined4 *)(iVar1 + 0x2f4) = uVar9;
  *(undefined4 *)(iVar1 + 0x304) = 300;
  *(undefined4 *)(iVar1 + 0x308) = 10000;
  *(undefined4 *)(iVar1 + 0xcc) = 208000000;
  *(undefined4 *)(iVar1 + 200) = 250000;
  uVar9 = 0x3c047;
  *(int *)(iVar1 + 0x200) = iVar7;
  *(int *)(iVar1 + 0x2e4) = iVar1;
  *(undefined1 *)(iVar1 + 0x2ec) = 0;
  *(undefined4 *)(iVar1 + 0xd4) = 0x300080;
  if (*(char *)(iVar1 + 0x244) == '\0') {
    uVar9 = 0x4047;
  }
  *(undefined4 *)(iVar1 + 0xfc) = uVar9;
  *(undefined4 *)(iVar1 + 0xf0) = 400;
  *(undefined4 *)(iVar1 + 0xf8) = 800;
  *(undefined **)(iVar1 + 0xc4) = &DAT_00015798;
  *(undefined2 *)(iVar1 + 0x10c) = 0x100;
  *(undefined4 *)(iVar1 + 0x108) = 0x10000;
  *(undefined4 *)(iVar1 + 0x114) = 0x200;
  *(undefined4 *)(iVar1 + 0x118) = 0xffff;
  *(undefined4 *)(iVar1 + 0x110) = 0x80000;
  dev_set_drvdata(iVar7,iVar8);
  iVar2 = platform_get_irq(param_1,0);
  if (iVar2 < 0) {
    printk(&_LC27);
    goto LAB_00015020;
  }
  *(int *)(iVar1 + 0x204) = iVar2;
  piVar3 = (int *)platform_get_resource(param_1,0x200,0);
  if (piVar3 == (int *)0x0) {
    puVar4 = &_LC28;
  }
  else {
    iVar2 = *piVar3;
    *(int *)(iVar1 + 0x208) = iVar2;
    iVar5 = (piVar3[1] + 1) - *piVar3;
    *(int *)(iVar1 + 0x20c) = iVar5;
    iVar2 = __request_region(&iomem_resource,iVar2,iVar5,"sd-platform",0);
    if (iVar2 != 0) {
      iVar2 = __ioremap(*(undefined4 *)(iVar1 + 0x208),*(undefined4 *)(iVar1 + 0x20c),0x800);
      *(int *)(iVar1 + 0x210) = iVar2;
      if (iVar2 == 0) {
        printk(&_LC31);
        iVar2 = -0xc;
      }
      else {
        iVar2 = *(int *)(iVar1 + 0x200);
        if ((iVar2 == 0) ||
           (puVar10 = *(undefined4 **)(iVar2 + 0x80),
           *(undefined4 **)(iVar2 + 0x80) == (undefined4 *)0x0)) {
          puVar10 = _mips_dma_map_ops;
        }
        iVar2 = (*(code *)*puVar10)(iVar2,0x1000,iVar1 + 0x214,0xd0,0);
        *(int *)(iVar1 + 0x218) = iVar2;
        if (iVar2 == 0) {
          iVar2 = -6;
        }
        else {
          *(int *)(iVar1 + 0x224) = iVar2;
          *(int *)(iVar1 + 0x220) = *(int *)(iVar1 + 0x214);
          *(int *)(iVar1 + 0x22c) = *(int *)(iVar1 + 0x214) + 0x400;
          *(int *)(iVar1 + 0x24c) = iVar1 + 0x24c;
          *(int *)(iVar1 + 0x250) = iVar1 + 0x24c;
          *(int *)(iVar1 + 0x230) = iVar2 + 0x400;
          *(code **)(iVar1 + 0x254) = FUN_00010eb8;
          *(undefined4 *)(iVar1 + 0x248) = 0xffffffe0;
          init_timer_key(iVar1 + 600,2,0,0);
          *(int *)(iVar1 + 0x26c) = iVar1 + 0x248;
          *(int *)(iVar1 + 0x280) = iVar1 + 0x280;
          *(int *)(iVar1 + 0x284) = iVar1 + 0x280;
          *(code **)(iVar1 + 0x288) = FUN_00010910;
          *(undefined **)(iVar1 + 0x268) = &delayed_work_timer_fn;
          *(undefined4 *)(iVar1 + 0x27c) = 0xffffffe0;
          init_timer_key(iVar1 + 0x28c,2,0,0);
          *(undefined **)(iVar1 + 0x29c) = &delayed_work_timer_fn;
          *(int *)(iVar1 + 0x2a0) = iVar1 + 0x27c;
          iVar2 = request_threaded_irq
                            (*(undefined4 *)(iVar1 + 0x204),&LAB_0001095c,0,0x80,"sd-platform",iVar8
                            );
          if (iVar2 == 0) {
            uVar9 = *(undefined4 *)(iVar1 + 0x204);
          }
          else {
            dev_err(*(undefined4 *)(iVar1 + 0x200),"%s error: request IRQ %d failed\n",
                    "rtsx_icr_acquire_irq",*(undefined4 *)(iVar1 + 0x204));
            if (iVar2 < 0) {
              iVar8 = *(int *)(iVar1 + 0x200);
              if ((iVar8 == 0) ||
                 (puVar10 = *(undefined4 **)(iVar8 + 0x80),
                 *(undefined4 **)(iVar8 + 0x80) == (undefined4 *)0x0)) {
                puVar10 = _mips_dma_map_ops;
              }
              (*(code *)puVar10[1])
                        (iVar8,0x1000,*(undefined4 *)(iVar1 + 0x218),*(undefined4 *)(iVar1 + 0x214),
                         0);
              goto LAB_00014ff8;
            }
            uVar9 = *(undefined4 *)(iVar1 + 0x204);
          }
          synchronize_irq(uVar9);
          if (*(char *)(iVar1 + 0x244) == '\0') {
            iVar2 = gpio_request(0,"SD_PWR_CTRL_C2");
            if (iVar2 == 0) {
              iVar2 = gpio_request(6,"SD_VOTAGE_SWITCH_CTRL_C2");
              if (iVar2 == 0) {
                iVar2 = gpio_request(7,"SD_PULL_CTRL_C2");
                if (iVar2 == 0) {
                  gpio_direction_output(0,0);
                  gpio_direction_output(6,0);
                  gpio_direction_output(7,0);
                  __gpio_set_value(0,0);
                  __gpio_set_value(7,0);
                  goto LAB_00014e24;
                }
                gpio_free(6);
              }
              gpio_free(0);
            }
          }
          else {
            iVar2 = gpio_request(0,"SD_PWR_CTRL_C2");
            if (iVar2 == 0) {
              gpio_direction_output(0,0);
              __gpio_set_value(0,0);
LAB_00014e24:
              rts_sys_mem_up(6);
              for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
                __udelay(1000);
              }
              rts_sys_force_reset(9);
              __mutex_init(iVar1 + 0x2b8,"&icr->mutex",0x10000);
              *(undefined4 *)(iVar1 + 0x2c4) = 0;
              __init_waitqueue_head(iVar1 + 0x2c8,"&x->wait",0x10000);
              *(undefined **)(iVar1 + 0x2d8) = &DAT_000157e4;
              *(undefined **)(iVar1 + 0x2dc) = &DAT_000157d8;
              rtsx_icr_reg_write(iVar8,0xff54,0xff,0);
              for (iVar7 = 300; iVar7 != 0; iVar7 = iVar7 + -1) {
                __udelay(1000);
              }
              iowrite32(1,*(int *)(iVar1 + 0x210) + 0x30);
              iowrite32(*(undefined4 *)(iVar1 + 0x220),*(undefined4 *)(iVar1 + 0x210));
              *(undefined4 *)(iVar1 + 0x234) = 0x72010080;
              iowrite32(0x72010080,*(int *)(iVar1 + 0x210) + 0x18);
              uVar6 = ioread32(*(int *)(iVar1 + 0x210) + 0x14);
              *(uint *)(iVar1 + 0x240) = uVar6 & 0x10000;
              uVar9 = msecs_to_jiffies(200);
              queue_delayed_work_on(1,_system_wq,iVar1 + 0x27c,uVar9);
              mmc_add_host(iVar1);
              rtsx_icr_add_debugfs(iVar8);
              return 0;
            }
          }
          printk(&_LC36);
        }
LAB_00014ff8:
        __iounmap(*(undefined4 *)(iVar1 + 0x210));
      }
      __release_region(&iomem_resource,*(undefined4 *)(iVar1 + 0x208),*(undefined4 *)(iVar1 + 0x20c)
                      );
      goto LAB_00015020;
    }
    puVar4 = &_LC30;
  }
  iVar2 = -0xc;
  printk(puVar4);
LAB_00015020:
  dev_set_drvdata(iVar7,0);
  mmc_free_host(iVar1);
  return iVar2;
}



