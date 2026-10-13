/* rtsx-icr — "rtsx" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rtsx-icr.h"

// ==== rtsx_icr_ocp_register_set @ 000105e0 size=428

undefined4
rtsx_icr_ocp_register_set
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int unaff_gp;
  uint local_28;
  uint local_24;
  
  puVar1 = (undefined4 *)dev_get_drvdata();
  local_28 = 0;
  puVar5 = (undefined4 *)puVar1[0x43];
  local_24 = 0;
  iVar2 = kstrtoull(param_3,0,&local_28);
  if (iVar2 == 0) {
    if ((local_24 != 0) || (uVar4 = local_28, local_28 == 0xffffffff)) {
      uVar4 = local_24;
    }
    if (uVar4 < 0x41) {
      mutex_lock(puVar1 + 0x2e);
      uVar3 = arch_local_irq_save();
      puVar1[0x2d] = uVar3;
      *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
      if (local_24 != 0) {
        iowrite32(local_28,puVar1[4] + uVar4);
      }
      uVar3 = ioread32(puVar1[4] + uVar4);
      arch_local_irq_restore(puVar1[0x2d]);
      *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
      if ((*(uint *)(unaff_gp + 8) >> 2 & 1) != 0) {
        preempt_schedule();
      }
      mutex_unlock(puVar1 + 0x2e);
      *puVar5 = uVar3;
      puVar5[1] = uVar4;
    }
    else {
      dev_err(*puVar1,"%s error: register 0x%4x out of range\n","rtsx_icr_ocp_register_set",uVar4);
      param_4 = 0xffffffea;
    }
  }
  else {
    param_4 = 0xffffffea;
  }
  return param_4;
}



// ==== rtsx_icr_ocp_register_get @ 0001078c size=388

/* WARNING: Restarted to delay deadcode elimination for space: register */

int rtsx_icr_ocp_register_get(undefined4 param_1,undefined4 param_2,char *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int unaff_gp;
  
  puVar1 = (undefined4 *)dev_get_drvdata();
  puVar4 = (uint *)puVar1[0x43];
  uVar5 = puVar4[1];
  if (uVar5 < 0x41) {
    *puVar4 = 0;
    puVar4[1] = 0;
    mutex_lock(puVar1 + 0x2e);
    uVar3 = arch_local_irq_save();
    puVar1[0x2d] = uVar3;
    *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
    uVar7 = *puVar4;
    uVar6 = puVar4[1];
    uVar5 = ioread32(puVar1[4] + uVar5);
    puVar4[1] = uVar6;
    *puVar4 = uVar5 | uVar7;
    arch_local_irq_restore(puVar1[0x2d]);
    *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
    if ((*(uint *)(unaff_gp + 8) >> 2 & 1) != 0) {
      preempt_schedule();
    }
    mutex_unlock(puVar1 + 0x2e);
    iVar2 = snprintf(param_3,0x40,"0x%llx\n");
  }
  else {
    dev_err(*puVar1,"%s error: register 0x%4x out of range\n","rtsx_icr_ocp_register_get",uVar5);
    iVar2 = -0x16;
  }
  return iVar2;
}



// ==== rtsx_icr_resp_type @ 00010c84 size=136

undefined4 rtsx_icr_resp_type(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  param_2 = param_2 & 0x1f;
  if (param_2 == 7) {
    uVar1 = 2;
  }
  else {
    if (param_2 < 8) {
      if (param_2 == 0) {
        return 4;
      }
      uVar1 = 5;
      uVar2 = 1;
    }
    else {
      if (param_2 == 0x15) {
        return 1;
      }
      uVar1 = 9;
      uVar2 = 0x1d;
    }
    if (param_2 != uVar2) {
      dev_err(*param_1,"%s error: unknown cmd->flag\n","rtsx_icr_resp_type");
      uVar1 = 0xffffffea;
    }
  }
  return uVar1;
}



// ==== rtsx_icr_remove_card @ 00010d0c size=104

void rtsx_icr_remove_card(int param_1)

{
  if (*(char *)(param_1 + 0x110) != '\0') {
    gpio_free();
  }
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfffeffff;
  mmc_detect_change(*(undefined4 *)(param_1 + 0xe4),0);
  DAT_00015ab4 = 0;
  return;
}



// ==== rtsx_icr_insert_card @ 00010d74 size=148

void rtsx_icr_insert_card(int param_1)

{
  if (*(char *)(param_1 + 0x110) != '\0') {
    gpio_request(*(char *)(param_1 + 0x110),"TRIGGER_GPIO");
    gpio_direction_output(*(undefined1 *)(param_1 + 0x110),0);
    __gpio_set_value(*(undefined1 *)(param_1 + 0x110),1);
  }
  DAT_00015ab4 = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0x10000;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  mmc_detect_change(*(undefined4 *)(param_1 + 0xe4),0);
  return;
}



// ==== __rtsx_icr_add_cmd @ 00010fd8 size=96

void __rtsx_icr_add_cmd(int param_1,int param_2,uint param_3,uint param_4,byte param_5)

{
  if (0xff < *(uint *)(param_1 + 0x1c)) {
    trap(0x3000);
  }
  *(uint *)(*(int *)(param_1 + 0x24) + *(uint *)(param_1 + 0x1c) * 4) =
       (param_4 & 0xff) << 8 | (uint)param_5 | param_2 << 0x1e | (param_3 & 0x3fff) << 0x10;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return;
}



// ==== rtsx_icr_send_cmd @ 000110b4 size=216

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rtsx_icr_send_cmd(int param_1)

{
  uint uVar1;
  int unaff_gp;
  
  uVar1 = *(uint *)(param_1 + 0x1c);
  SYNC(0);
  *(int *)(param_1 + 0xd0) = param_1 + 0xc4;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  iowrite32(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x10));
  iowrite32((uVar1 & 0x3fffff) << 2 | 0x80000000,*(int *)(param_1 + 0x10) + 4);
  arch_local_irq_restore(*(undefined4 *)(param_1 + 0xb4));
  *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
  if ((*(uint *)(unaff_gp + 8) >> 2 & 1) != 0) {
    preempt_schedule();
    return;
  }
  return;
}



// ==== rtsx_icr_reg_read @ 0001118c size=208

undefined4 rtsx_icr_reg_read(undefined4 *param_1,ushort param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 3;
  iowrite32((uint)(param_2 & 0x3fff) << 0x10 | 0x80000000,param_1[4] + 0x10);
  do {
    iVar1 = ioread32(param_1[4] + 0x10);
    iVar2 = iVar2 + -1;
    if (-1 < iVar1) {
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = (char)iVar1;
      }
      return 0;
    }
  } while (iVar2 != 0);
  dev_err(*param_1,"%s error: read register 0x%02X failed\n","rtsx_icr_reg_read",param_2);
  return 0xffffff6f;
}



// ==== rtsx_icr_wait_cmd @ 000113c8 size=512

int rtsx_icr_wait_cmd(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_gp;
  
  uVar3 = param_1[0x34];
  uVar1 = msecs_to_jiffies(param_2);
  iVar2 = wait_for_completion_interruptible_timeout(uVar3,uVar1);
  if (iVar2 < 1) {
    iVar2 = -0x91;
  }
  else {
    uVar1 = arch_local_irq_save();
    param_1[0x2d] = uVar1;
    *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
    if (param_1[0xe] == 0x10000000) {
      iVar2 = -5;
    }
    else {
      iVar2 = -0x16;
      if (param_1[0xe] == 0x20000000) {
        iVar2 = 0;
      }
    }
    arch_local_irq_restore(param_1[0x2d]);
    *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
    if ((*(uint *)(unaff_gp + 8) >> 2 & 1) != 0) {
      preempt_schedule();
    }
  }
  uVar1 = arch_local_irq_save();
  param_1[0x2d] = uVar1;
  *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
  param_1[0x34] = 0;
  arch_local_irq_restore(param_1[0x2d]);
  *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
  if ((*(uint *)(unaff_gp + 8) >> 2 & 1) != 0) {
    preempt_schedule();
  }
  if (iVar2 != 0) {
    if (DAT_00015ab4 != '\0') {
      uVar4 = *param_1;
      uVar1 = ioread32(param_1[4]);
      uVar3 = ioread32(param_1[4] + 4);
      dev_err(uVar4,"%s error: %d: HCBAR = %08X, HCBCTLR = %08X\n","rtsx_icr_wait_cmd",iVar2,uVar1,
              uVar3);
    }
    if (*(char *)(param_1 + 0x35) == '\0') {
      iowrite32(0x10000000,param_1[4] + 4);
      iowrite32(0x10000000,param_1[4] + 0xc);
    }
    dump_reg_range(param_1,0xff00,0xff1f);
  }
  return iVar2;
}



// ==== rtsx_icr_ip_register_get @ 00011828 size=260

int rtsx_icr_ip_register_get(undefined4 param_1,undefined4 param_2,char *param_3)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  byte local_20 [8];
  
  puVar2 = (undefined4 *)dev_get_drvdata();
  iVar3 = puVar2[0x43];
  sVar1 = *(short *)(iVar3 + 10);
  if ((ushort)(sVar1 + 0x2b0U) < 0x211) {
    mutex_lock(puVar2 + 0x2e);
    rtsx_icr_reg_read(puVar2,sVar1,local_20);
    mutex_unlock(puVar2 + 0x2e);
    *(uint *)(iVar3 + 8) = (uint)local_20[0] | *(uint *)(iVar3 + 8) & 0xffff0000;
    iVar3 = snprintf(param_3,0x20,"0x%x\n");
  }
  else {
    dev_err(*puVar2,"%s error: register 0x%04x out of range\n","rtsx_icr_ip_register_get",sVar1);
    iVar3 = -0x16;
  }
  return iVar3;
}



// ==== rtsx_icr_reg_write @ 0001192c size=220

undefined4 rtsx_icr_reg_write(undefined4 *param_1,ushort param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 3;
  iowrite32(param_4 & 0xff | 0xc0000000 | (param_3 & 0xff) << 8 | (uint)(param_2 & 0x3fff) << 0x10,
            param_1[4] + 0x10);
  do {
    uVar1 = ioread32(param_1[4] + 0x10);
    iVar2 = iVar2 + -1;
    if (-1 < (int)uVar1) {
      if ((param_4 & 0xff) != (uVar1 & 0xff)) {
        return 0xfffffffb;
      }
      return 0;
    }
  } while (iVar2 != 0);
  dev_err(*param_1,"%s error: write register 0x%02X failed\n","rtsx_icr_reg_write",param_2);
  return 0xffffff6f;
}



// ==== rtsx_icr_ip_register_set @ 00011a08 size=344

undefined4
rtsx_icr_ip_register_set
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint local_20;
  byte local_1c [4];
  
  puVar1 = (undefined4 *)dev_get_drvdata();
  iVar4 = puVar1[0x43];
  local_20 = 0;
  iVar2 = _kstrtoul(param_3,0,&local_20);
  if (iVar2 == 0) {
    uVar3 = local_20 & 0xffff;
    if (0xffff < local_20) {
      uVar3 = local_20 >> 0x10;
    }
    if ((uVar3 + 0x2b0 & 0xffff) < 0x211) {
      mutex_lock(puVar1 + 0x2e);
      if (0xffff < local_20) {
        rtsx_icr_reg_write(puVar1,uVar3,local_20 >> 8 & 0xff,local_20 & 0xff);
      }
      rtsx_icr_reg_read(puVar1,uVar3,local_1c);
      mutex_unlock(puVar1 + 0x2e);
      *(uint *)(iVar4 + 8) = uVar3 << 0x10 | (uint)local_1c[0];
    }
    else {
      dev_err(*puVar1,"%s error: register 0x%04x out of range\n","rtsx_icr_ip_register_set",uVar3);
      param_4 = 0xffffffea;
    }
  }
  else {
    param_4 = 0xffffffea;
  }
  return param_4;
}



// ==== rtsx_icr_check_resp @ 00011f58 size=972

int rtsx_icr_check_resp(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int unaff_gp;
  
  uVar2 = rtsx_icr_resp_type(param_1,param_2[6]);
  iVar8 = param_1[0x41];
  if (uVar2 == 9) {
    iVar8 = iVar8 * 10;
  }
  else if ((int)uVar2 < 0) {
    return -0x16;
  }
  if ((*param_2 != 0xb) || (iVar4 = rtsx_icr_reg_write(param_1,0xff05,0xff,0x80), -1 < iVar4)) {
    uVar3 = arch_local_irq_save();
    param_1[0x2d] = uVar3;
    *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
    param_1[7] = 0;
    if (param_2 != (uint *)0x0) {
      __rtsx_icr_add_cmd(param_1,1,0xff09,0xff,*param_2 & 0xff | 0x40);
      uVar9 = param_2[1];
      __rtsx_icr_add_cmd(param_1,1,0xff0a,0xff,uVar9 >> 0x18);
      __rtsx_icr_add_cmd(param_1,1,0xff0b,0xff,uVar9 >> 0x10 & 0xff);
      __rtsx_icr_add_cmd(param_1,1,0xff0c,0xff,uVar9 >> 8 & 0xff);
      __rtsx_icr_add_cmd(param_1,1,0xff0d,0xff,uVar9 & 0xff);
    }
    __rtsx_icr_add_cmd(param_1,1,0xff01,0xff,uVar2 & 0xff);
    __rtsx_icr_add_cmd(param_1,1,0xfd5b,1,1);
    __rtsx_icr_add_cmd(param_1,1,0xff13,0xff,0x88);
    __rtsx_icr_add_cmd(param_1,2,0xff13,0x60,0x60);
    if (uVar2 == 2) {
      iVar4 = 0xf800;
      do {
        iVar10 = iVar4 + 1;
        __rtsx_icr_add_cmd(param_1,0,iVar4,0,0);
        iVar4 = iVar10;
      } while (iVar10 != 0xf810);
    }
    else if (uVar2 != 4) {
      iVar4 = 0xff09;
      do {
        iVar10 = iVar4 + 1;
        __rtsx_icr_add_cmd(param_1,0,iVar4,0,0);
        iVar4 = iVar10;
      } while (iVar10 != 0xff0e);
    }
    __rtsx_icr_add_cmd(param_1,0,0xff03,0,0);
    rtsx_icr_send_cmd(param_1);
    iVar4 = rtsx_icr_wait_cmd(param_1,iVar8);
    if ((iVar4 == 0) && (uVar2 != 4)) {
      iVar8 = param_1[9];
      if (uVar2 == 2) {
        pbVar5 = (byte *)(iVar8 + 2);
        do {
          pbVar6 = pbVar5 + 4;
          param_2[2] = (uint)*pbVar5 << 0x18 | (uint)pbVar5[1] << 0x10 | (uint)pbVar5[3] |
                       (uint)pbVar5[2] << 8;
          pbVar5 = pbVar6;
          param_2 = param_2 + 1;
        } while (pbVar6 != (byte *)(iVar8 + 0x12));
        bVar1 = *(byte *)(iVar8 + 1);
      }
      else {
        param_2[2] = (uint)*(byte *)(iVar8 + 2) << 0x18 | (uint)*(byte *)(iVar8 + 3) << 0x10 |
                     (uint)*(byte *)(iVar8 + 5) | (uint)*(byte *)(iVar8 + 4) << 8;
        bVar1 = *(byte *)(iVar8 + 1);
      }
      if ((bVar1 & 0xc0) == 0) {
        if ((uVar2 & 4) != 0) {
          return 0;
        }
        iVar4 = 5;
        if (((uVar2 & 3) != 1) && (iVar4 = 0x10, (uVar2 & 3) != 2)) {
          iVar4 = 0;
        }
        if (-1 < *(char *)(iVar8 + iVar4 + 1)) {
          return 0;
        }
        uVar3 = *param_1;
        pcVar7 = "%s error: CRC7 error: 0x%02x\n";
      }
      else {
        uVar3 = *param_1;
        pcVar7 = "%s error: invalid response bit: 0x%2x\n";
      }
      dev_err(uVar3,pcVar7,"rtsx_icr_check_resp");
      iVar4 = -0x58;
    }
  }
  return iVar4;
}



// ==== rtsx_icr_pp_read @ 00012324 size=20

void rtsx_icr_pp_read(void)

{
  FUN_00011738();
  return;
}



// ==== rtsx_icr_pp_write @ 000128f4 size=20

void rtsx_icr_pp_write(void)

{
  FUN_00011738();
  return;
}



// ==== rtsx_icr_transfer_data @ 00012908 size=1552

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int rtsx_icr_transfer_data(int *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  int unaff_gp;
  int iVar14;
  undefined4 local_50;
  undefined1 auStack_4c [12];
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  code *local_2c;
  
  uVar8 = 2;
  iVar7 = *(int *)(param_2 + 0x28);
  uVar6 = *(uint *)(param_2 + 0x14) >> 8 & 1;
  iVar9 = *(int *)(param_2 + 0x24);
  if (uVar6 != 0) {
    uVar8 = 1;
  }
  uVar11 = 0x20000000;
  if (uVar6 != 0) {
    uVar11 = 0;
  }
  iVar10 = param_1[0x42];
  if ((((char)param_1[0x35] == '\0') && (iVar7 != 0)) && (0 < iVar9)) {
    iVar14 = *param_1;
    if ((iVar14 == 0) || (local_3c = *(int *)(iVar14 + 0x80), local_3c == 0)) {
      local_3c = _mips_dma_map_ops;
    }
    local_40 = 0;
    local_2c = sg_next;
    iVar2 = iVar7;
    do {
      local_40 = local_40 + 1;
      iVar2 = (*local_2c)(iVar2);
      pcVar1 = local_2c;
    } while (local_40 != iVar9);
    local_2c = (code *)(**(code **)(local_3c + 0x18))(iVar14,iVar7,iVar9,uVar8,0);
    if (0 < (int)local_2c) {
      local_34 = 0x10000;
      param_1[10] = 0;
      iVar2 = 0;
      local_40 = (int)local_2c + -1;
      local_3c = 0x21;
      local_38 = 0x23;
      local_30 = 0x10001;
      iVar14 = iVar7;
      do {
        uVar3 = *(uint *)(iVar14 + 8);
        puVar12 = (uint *)(param_1[0xc] + param_1[10] * 8);
        uVar13 = local_38;
        if (iVar2 != local_40) {
          uVar13 = local_3c;
        }
        uVar5 = *(uint *)(iVar14 + 0xc);
        if (local_30 <= uVar3) {
          trap(0x3000);
        }
        iVar2 = iVar2 + 1;
        if (uVar3 == local_34) {
          uVar3 = 0;
        }
        *puVar12 = uVar13 | uVar3 << 0x10;
        puVar12[1] = uVar5 | uVar3 >> 0x10;
        param_1[10] = param_1[10] + 1;
        iVar14 = (*pcVar1)();
      } while ((code *)iVar2 != local_2c);
      if (uVar6 != 0) {
        uVar13 = param_1[0xd];
        param_1[0xd] = uVar13 | 0x8000000;
        iowrite32(uVar13 | 0x8000000,param_1[4] + 0x18);
      }
      iVar14 = arch_local_irq_save();
      param_1[0x2d] = iVar14;
      *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
      param_1[0x34] = (int)&local_50;
      param_1[0xe] = 0;
      if (uVar6 != 0) {
        param_1[0xf] = 0x48000000;
      }
      local_50 = 0;
      __init_waitqueue_head(auStack_4c,"&x->wait",0x10000);
      uVar4 = 0x81;
      if (uVar6 == 0) {
        uVar4 = 0x8e;
      }
      rtsx_icr_reg_write(param_1,0xff13,0xff,uVar4);
      iowrite32(param_1[0xb],param_1[4] + 8);
      iowrite32(uVar11 | 0x80000000,param_1[4] + 0xc);
      arch_local_irq_restore(param_1[0x2d]);
      *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
      if ((*(uint *)(unaff_gp + 8) >> 2 & 1) != 0) {
        preempt_schedule();
      }
      local_3c = param_1[0x34];
      iVar14 = -0x91;
      uVar4 = msecs_to_jiffies(iVar10);
      iVar10 = wait_for_completion_interruptible_timeout(local_3c,uVar4);
      if (0 < iVar10) {
        iVar10 = arch_local_irq_save();
        param_1[0x2d] = iVar10;
        *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
        if (param_1[0xe] == 0x10000000) {
          iVar14 = -5;
        }
        else {
          iVar14 = -0x16;
          if (param_1[0xe] == 0x20000000) {
            iVar14 = 0;
          }
        }
        arch_local_irq_restore(param_1[0x2d]);
        *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
        if ((*(uint *)(unaff_gp + 8) >> 2 & 1) != 0) {
          preempt_schedule();
        }
      }
      if (uVar6 != 0) {
        uVar11 = param_1[0xd];
        param_1[0xd] = uVar11 & 0xf7ffffff;
        iowrite32(uVar11 & 0xf7ffffff,param_1[4] + 0x18);
      }
      iVar10 = arch_local_irq_save();
      param_1[0x2d] = iVar10;
      *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
      param_1[0x34] = 0;
      if (uVar6 != 0) {
        param_1[0xf] = 0;
      }
      arch_local_irq_restore(param_1[0x2d]);
      *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
      if ((*(uint *)(unaff_gp + 8) >> 2 & 1) != 0) {
        preempt_schedule();
      }
      iVar10 = *param_1;
      if ((iVar10 == 0) || (iVar2 = *(int *)(iVar10 + 0x80), *(int *)(iVar10 + 0x80) == 0)) {
        iVar2 = _mips_dma_map_ops;
      }
      if (*(code **)(iVar2 + 0x1c) != (code *)0x0) {
        (**(code **)(iVar2 + 0x1c))(iVar10,iVar7,iVar9,uVar8,0);
      }
      if (iVar14 != 0) {
        iVar7 = *param_1;
        iVar9 = param_1[0xb];
        uVar8 = ioread32(param_1[4] + 8);
        uVar4 = ioread32(param_1[4] + 0xc);
        dev_err(iVar7,"%s error: %d: HDBAR = %08X -> %08X, HDBCTLR = %08X\n",
                "rtsx_icr_transfer_data",iVar14,iVar9,uVar8,uVar4);
        iVar7 = *param_1;
        uVar8 = ioread32(param_1[4] + 0x3c);
        uVar4 = ioread32(param_1[4] + 0x40);
        dev_err(iVar7,"%s error: SDMAR = %08x, SDMACTLR = %08x\n","rtsx_icr_transfer_data",uVar8,
                uVar4);
        if ((char)param_1[0x35] == '\0') {
          iowrite32(0x10000000,param_1[4] + 4);
          iowrite32(0x10000000,param_1[4] + 0xc);
        }
        dump_reg_range(param_1,0xfd50,0xfd6f);
        dump_reg_range(param_1,0xff00,0xff5f);
        iVar7 = param_1[0xc];
        uVar11 = 0;
        uVar6 = param_1[10];
        while( true ) {
          iVar9 = uVar11 * 8;
          puVar12 = (uint *)(iVar7 + iVar9);
          if (uVar6 <= uVar11) break;
          uVar6 = *puVar12;
          uVar11 = uVar11 + 1;
          dev_err(*param_1,"%s error: ADMA table at %08X: %08x, %04x, %04x\n",
                  "rtsx_icr_dump_dma_table",iVar9 + param_1[0xb],puVar12[1],uVar6 >> 0x10,
                  uVar6 & 0xffff);
          uVar6 = param_1[10];
        }
        iVar7 = param_1[0x2c];
        param_1[0x2c] = iVar7 + 1;
        if (iVar7 == 0) {
          return iVar14;
        }
        rtsx_icr_remove_card(param_1);
        return iVar14;
      }
      if (param_1[0x2c] == 0) {
        return 0;
      }
      param_1[0x2c] = 0;
      return 0;
    }
  }
  return -0x16;
}



// ==== rtsx_icr_transfer_stop @ 00012f18 size=120

undefined4 rtsx_icr_transfer_stop(int param_1)

{
  if (*(int *)(param_1 + 0xd0) != 0) {
    complete();
  }
  if (*(char *)(param_1 + 0xd4) == '\0') {
    iowrite32(0x10000000,*(int *)(param_1 + 0x10) + 4);
    iowrite32(0x10000000,*(int *)(param_1 + 0x10) + 0xc);
  }
  return 0;
}



// ==== rtsx_icr_set_bus_width @ 000131f8 size=88

undefined4 rtsx_icr_set_bus_width(undefined4 *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  if (3 < (param_2 & 0xff)) {
    return 0xffffffea;
  }
  bVar1 = (&stack0xfffffff8)[param_2 & 0xff];
  iVar3 = 3;
  iowrite32(bVar1 | 0xff000300,param_1[4] + 0x10);
  do {
    uVar2 = ioread32(param_1[4] + 0x10);
    iVar3 = iVar3 + -1;
    if (-1 < (int)uVar2) {
      if ((uint)bVar1 != (uVar2 & 0xff)) {
        return 0xfffffffb;
      }
      return 0;
    }
  } while (iVar3 != 0);
  dev_err(*param_1,"%s error: write register 0x%02X failed\n","rtsx_icr_reg_write",0xff00);
  return 0xffffff6f;
}



// ==== rtsx_icr_set_timing @ 00013250 size=492

int rtsx_icr_set_timing(undefined4 *param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_gp;
  
  uVar2 = arch_local_irq_save();
  param_1[0x2d] = uVar2;
  *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
  param_1[7] = 0;
  switch(param_2 + -1) {
  case '\0':
  case '\x01':
    param_1[0x40] = 0;
    param_1[0x3f] = 0;
    __rtsx_icr_add_cmd(param_1,1,0xff00,0xc,0);
    __rtsx_icr_add_cmd(param_1,1,0xff08,0x10,0x10);
    uVar2 = 8;
    break;
  case '\x02':
  case '\x03':
    param_1[0x40] = 0;
    goto LAB_000132ec;
  case '\x04':
  case '\x05':
    param_1[0x40] = 1;
LAB_000132ec:
    param_1[0x3f] = 1;
    uVar2 = 8;
    uVar3 = 0xff00;
    uVar4 = 0xc;
    goto LAB_000133fc;
  case '\x06':
    param_1[0x3f] = 1;
    param_1[0x40] = 0;
    __rtsx_icr_add_cmd(param_1,1,0xff00,0xc,4);
    __rtsx_icr_add_cmd(param_1,1,0xff08,0x80,0);
    uVar2 = 0xa0;
    uVar3 = 0xff07;
    uVar4 = 0xa0;
    goto LAB_000133fc;
  default:
    param_1[0x40] = 0;
    param_1[0x3f] = 0;
    __rtsx_icr_add_cmd(param_1,1,0xff00,0xc,0);
    __rtsx_icr_add_cmd(param_1,1,0xff08,0xff,0);
    uVar2 = 0;
  }
  uVar3 = 0xff07;
  uVar4 = 8;
LAB_000133fc:
  __rtsx_icr_add_cmd(param_1,1,uVar3,uVar4,uVar2);
  uVar2 = param_1[0x41];
  rtsx_icr_send_cmd(param_1);
  uVar3 = param_1[0x34];
  uVar2 = msecs_to_jiffies(uVar2);
  iVar1 = wait_for_completion_interruptible_timeout(uVar3,uVar2);
  if (iVar1 < 1) {
    iVar1 = -0x91;
  }
  else {
    uVar2 = arch_local_irq_save();
    param_1[0x2d] = uVar2;
    *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
    if (param_1[0xe] == 0x10000000) {
      iVar1 = -5;
    }
    else {
      iVar1 = -0x16;
      if (param_1[0xe] == 0x20000000) {
        iVar1 = 0;
      }
    }
    arch_local_irq_restore(param_1[0x2d]);
    *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
    if ((*(uint *)(unaff_gp + 8) >> 2 & 1) != 0) {
      preempt_schedule();
    }
  }
  uVar2 = arch_local_irq_save();
  param_1[0x2d] = uVar2;
  *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
  param_1[0x34] = 0;
  arch_local_irq_restore(param_1[0x2d]);
  *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
  if ((*(uint *)(unaff_gp + 8) >> 2 & 1) != 0) {
    preempt_schedule();
  }
  if (iVar1 != 0) {
    if (DAT_00015ab4 != '\0') {
      uVar4 = *param_1;
      uVar2 = ioread32(param_1[4]);
      uVar3 = ioread32(param_1[4] + 4);
      dev_err(uVar4,"%s error: %d: HCBAR = %08X, HCBCTLR = %08X\n","rtsx_icr_wait_cmd",iVar1,uVar2,
              uVar3);
    }
    if (*(char *)(param_1 + 0x35) == '\0') {
      iowrite32(0x10000000,param_1[4] + 4);
      iowrite32(0x10000000,param_1[4] + 0xc);
    }
    dump_reg_range(param_1,0xff00,0xff1f);
  }
  return iVar1;
}



// ==== rtsx_icr_set_clock @ 0001343c size=400

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001353c) */
/* WARNING: Removing unreachable block (ram,0x00013548) */

void rtsx_icr_set_clock(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (param_2 < *(uint *)(param_1 + 0xf8))) {
    rtsx_icr_remove_card();
  }
  *(bool *)(param_1 + 0xed) = param_2 < 1000000;
  if (*(char *)(param_1 + 0x44) == '\0') {
    if (param_2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (param_2 != 0) {
    if (param_2 < 1000000) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar1 = rtsx_icr_reg_write(param_1,0xff05,0xff,0x40);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0xf0) = param_2;
  }
  return;
}



// ==== rtsx_icr_add_debugfs @ 00014854 size=284

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rtsx_icr_add_debugfs(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = kmem_cache_alloc(_DAT_0001610c,0xd0);
  param_1[0x43] = iVar1;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 8) = 0xfd500000;
    device_create_file(*param_1,&PTR_s_ip_register_000159b0);
    device_create_file(*param_1,&PTR_s_ocp_register_000159c0);
    device_create_file(*param_1,&PTR_s_card_exist_000159a0);
    device_create_file(*param_1,&PTR_s_support_uhs_00015990);
    device_create_file(*param_1,&PTR_s_trigger_00015980);
    device_create_file(*param_1,dev_attr_max_clock);
    device_create_file(*param_1,dev_attr_min_clock);
    device_create_file(*param_1,dev_attr_cmd_timeout_ms);
    device_create_file(*param_1,dev_attr_data_timeout_ms);
    device_create_file(*param_1,&PTR_s_force_rw_00015930);
    device_create_file(*param_1,&PTR_DAT_00015920);
    return;
  }
  return;
}



