/* rts_camera_soc — "rtscam" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rts_camera_soc.h"

// ==== rtscam_soc_start_clock @ 000100e4 size=44

undefined4 rtscam_soc_start_clock(int param_1)

{
  FUN_000100b4(*(undefined4 *)(param_1 + 0xb0),1);
  return 0;
}



// ==== rtscam_soc_stop_clock @ 00010110 size=44

undefined4 rtscam_soc_stop_clock(int param_1)

{
  FUN_000100b4(*(undefined4 *)(param_1 + 0xb0),0);
  return 0;
}



// ==== rtscam_soc_get_ctrl @ 0001013c size=108

undefined4 rtscam_soc_get_ctrl(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (-1 < param_3) {
    iVar1 = 4;
    iVar2 = 0;
    iVar3 = *(int *)(param_1 + 0xb0) + 0x48;
    while (iVar1 = iVar1 + -1, iVar1 != 0) {
      if ((uint)(param_3 - iVar2) < *(uint *)(iVar3 + 0x24)) {
        *param_2 = *(int *)(iVar3 + 0x28) + (param_3 - iVar2) * 0x24;
        return 0;
      }
      iVar2 = *(uint *)(iVar3 + 0x24) + iVar2;
      iVar3 = iVar3 + 0x2c;
    }
  }
  return 0xffffffea;
}



// ==== rtscam_soc_put_ctrl @ 000101a8 size=8

undefined4 rtscam_soc_put_ctrl(void)

{
  return 0;
}



// ==== rtscam_soc_exec_vcmd @ 00010254 size=36

void rtscam_soc_exec_vcmd(undefined4 param_1,undefined4 *param_2)

{
  rtscam_usercopy(param_1,*param_2,param_2[1],FUN_00014f88);
  return;
}



// ==== rtscam_soc_set_fps @ 00011850 size=120

void rtscam_soc_set_fps(int *param_1,int param_2)

{
  undefined2 local_18;
  undefined1 local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = 0x201;
  local_14 = (undefined2)((uint)param_2 >> 0x10);
  local_12 = (undefined2)param_2;
  local_16 = 0;
  local_15 = 0;
  local_10 = 0;
  local_c = 0;
  DAT_00019e08 = (uint)(param_2 * 1000) / 10000000 + 3;
  FUN_0001171c(*param_1 + -0x114,&local_18);
  return;
}



// ==== rtscam_soc_get_dynamic_fps @ 000118c8 size=88

uint rtscam_soc_get_dynamic_fps(int param_1)

{
  uint uVar1;
  undefined2 local_20;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined2 local_1c;
  undefined2 local_1a;
  byte *local_18;
  undefined4 local_14;
  byte local_10 [12];
  
  local_20 = 0xa95;
  local_1d = 1;
  local_18 = local_10;
  local_1e = 0;
  local_1c = 0;
  local_1a = 0;
  local_14 = 0;
  uVar1 = FUN_0001171c(param_1 + -0xd4,&local_20);
  if (-1 < (int)uVar1) {
    uVar1 = (uint)local_10[0];
  }
  return uVar1;
}



// ==== rtscam_soc_submit_buffer @ 000119e0 size=768

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int rtscam_soc_submit_buffer(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int unaff_s1;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int local_30 [3];
  
  iVar9 = *(int *)(*param_1 + 0xb0);
  iVar2 = 0;
  iVar5 = iVar9 + (uint)*(byte *)(param_1 + 1) * 0xc + 0x1c8;
  pbVar8 = (byte *)(iVar5 + 4);
  uVar11 = (uint)*(byte *)(iVar5 + 5);
  do {
    iVar6 = iVar2 * 4;
    if ((int)uVar11 <= iVar2) {
      uVar3 = 0;
      goto LAB_00011a8c;
    }
    iVar2 = iVar2 + 1;
  } while (*(int *)(pbVar8 + iVar6 + 4) != param_2);
  if ((_rtscam_debug & 0x10) == 0) {
    return -0x16;
  }
  puVar7 = &_LC46;
LAB_00011a70:
  printk(puVar7);
  return -0x16;
LAB_00011a8c:
  if ((int)uVar11 <= (int)uVar3) goto LAB_00011ad4;
  unaff_s1 = (int)(uVar3 + *pbVar8) % (int)uVar11;
  if (*(int *)(pbVar8 + unaff_s1 * 4 + 4) == 0) {
    *(char *)(iVar5 + 4) = (char)((unaff_s1 + 1) % (int)uVar11);
    goto LAB_00011ad4;
  }
  uVar3 = uVar3 + 1;
  goto LAB_00011a8c;
LAB_00011ad4:
  if (uVar3 != uVar11) {
    iVar2 = rtscam_get_phy_addr(param_2,local_30);
    if (iVar2 != 0) {
      if ((_rtscam_debug & 0x10) != 0) {
        printk(&_LC48);
        return iVar2;
      }
      return iVar2;
    }
    *(int *)(pbVar8 + unaff_s1 * 4 + 4) = param_2;
    cVar1 = (char)param_1[0x61];
    if (cVar1 == '\x04') {
      FUN_000110e0(iVar9 + 4,local_30[0],(unaff_s1 + 0x84) * 4);
      iVar6 = 0x2b4;
      FUN_000110e0(iVar9 + 4,param_1[0x66],0x230);
    }
    else {
      iVar2 = 0;
      if ((((DAT_00019dae != cVar1) && (iVar2 = 1, DAT_00019dda != cVar1)) &&
          (iVar2 = 2, DAT_00019e06 != cVar1)) || ((&DAT_00019dad)[iVar2 * 0x2c] == '\0')) {
        if ((_rtscam_debug & 0x10) == 0) {
          return -0x16;
        }
        printk(&_LC49);
        return -0x16;
      }
      iVar10 = param_1[100];
      iVar2 = param_1[99];
      iVar6 = (uint)*(byte *)(param_1 + 1) * 4 + 0x2a4;
      iVar5 = ((uint)*(byte *)(param_1 + 1) * 4 + unaff_s1) * 4;
      FUN_000110e0(iVar9 + 4,local_30[0],iVar5 + 0x100);
      FUN_000110e0(iVar9 + 4,iVar10 * iVar2 + local_30[0],iVar5 + 0x180);
    }
    FUN_000110e0(iVar9 + 4,0xc << (unaff_s1 * 4 & 0x1fU),iVar6);
    uVar4 = FUN_000112cc(iVar9 + 4,iVar6);
    if ((_rtscam_debug & 0x80) != 0) {
      printk(&_LC50,iVar6,uVar4);
      return 0;
    }
    return 0;
  }
  if ((_rtscam_debug & 0x10) == 0) {
    return -0x16;
  }
  puVar7 = &_LC47;
  goto LAB_00011a70;
}



// ==== rtscam_soc_probe @ 000126c0 size=1412

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint rtscam_soc_probe(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 *unaff_s0;
  undefined4 *puVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  
  if ((_rtscam_debug & 0x100) != 0) {
    printk(&_LC67,"rtscam_soc_probe");
  }
  pcVar10 = *(char **)(param_1 + 0xd0);
  if (pcVar10 == (char *)0x0) {
    if ((_rtscam_debug & 1) == 0) {
      return 0xffffffea;
    }
    puVar7 = &_LC68;
    goto LAB_00012738;
  }
  puVar8 = *(undefined4 **)(param_1 + 0x58);
  if (puVar8 == (undefined4 *)0x0) {
    if ((_rtscam_debug & 1) != 0) {
      puVar7 = &_LC69;
LAB_00012800:
      printk(puVar7);
    }
  }
  else if ((puVar8[1] == 0) || (puVar8[2] == 0)) {
    if ((_rtscam_debug & 1) != 0) {
      puVar7 = &_LC70;
      goto LAB_00012800;
    }
  }
  else if ((puVar8[3] == 0) || (puVar8[5] == 0)) {
    if ((_rtscam_debug & 1) != 0) {
      puVar7 = &_LC71;
      goto LAB_00012800;
    }
  }
  else {
    if ((puVar8[4] != 0) && (puVar8[6] != 0)) {
      piVar2 = (int *)platform_get_resource(param_1,0x200,0);
      iVar3 = platform_get_irq(param_1,0);
      if ((piVar2 == (int *)0x0) || (iVar3 < 0)) {
        uVar9 = 0xffffffed;
        if ((_rtscam_debug & 1) != 0) {
          puVar7 = &_LC74;
LAB_000128bc:
          printk(puVar7);
          iVar3 = unaff_s0[0xe];
          goto LAB_00012bd8;
        }
      }
      else {
        param_1 = param_1 + 0x10;
        unaff_s0 = (undefined4 *)devm_kzalloc(param_1,0x3b8,0xd0);
        if (unaff_s0 == (undefined4 *)0x0) {
          uVar9 = 0xfffffff4;
          if ((_rtscam_debug & 1) != 0) {
            puVar7 = &_LC75;
            goto LAB_000128bc;
          }
        }
        else {
          uVar4 = get_device(param_1);
          *unaff_s0 = uVar4;
          __mutex_init(unaff_s0 + 0xb,"&rsocdev->cmd_lock",0x10000);
          unaff_s0[8] = 0;
          __init_waitqueue_head(unaff_s0 + 9,"&x->wait",0x10000);
          unaff_s0[5] = 0;
          unaff_s0[6] = 0;
          unaff_s0[7] = 0;
          __mutex_init(unaff_s0 + 0x66,"&rsocdev->rvdev.dev_lock",0x10000);
          __mutex_init(unaff_s0 + 0x69,"&rsocdev->rvdev.ctrl_lock",0x10000);
          pcVar11 = (char *)(unaff_s0 + 0xce);
          iVar6 = 0x14;
          pcVar5 = pcVar10;
          do {
            cVar1 = *pcVar5;
            iVar6 = iVar6 + -1;
            *pcVar11 = cVar1;
            pcVar11 = pcVar11 + 1;
            if (cVar1 == '\0') break;
            pcVar5 = pcVar5 + 1;
          } while (iVar6 != 0);
          uVar9 = *(uint *)(pcVar10 + 0x14);
          unaff_s0[0xcb] = puVar8;
          unaff_s0[0xd3] = uVar9;
          uVar4 = 3;
          if ((uVar9 & 0xff) == 1) {
            uVar4 = 0;
          }
          unaff_s0[0xd4] = uVar4;
          unaff_s0[0xcc] = *puVar8;
          iVar6 = rts_get_mem_info();
          unaff_s0[0xd5] = iVar6;
          if (iVar6 == 0) {
            uVar9 = 0xffffffea;
            if ((_rtscam_debug & 1) != 0) {
              puVar7 = &_LC79;
              goto LAB_000128bc;
            }
          }
          else {
            uVar9 = devm_ioremap_resource(param_1,piVar2);
            if (uVar9 < 0xfffff001) {
              unaff_s0[1] = uVar9;
              unaff_s0[2] = *piVar2;
              unaff_s0[3] = (piVar2[1] + 1) - *piVar2;
              uVar9 = devm_request_threaded_irq
                                (*unaff_s0,iVar3,FUN_00012e7c,0,0x80,"rts_soc_camera",unaff_s0);
              if (uVar9 == 0) {
                uVar9 = rts_dma_contig_init_ctx(unaff_s0[0xd5]);
                unaff_s0[0xe] = uVar9;
                if (uVar9 < 0xfffff001) {
                  unaff_s0[0xf] = &rts_dma_contig_memops;
                  unaff_s0[0x92] = 0x20000;
                  FUN_000122e8(unaff_s0,unaff_s0 + 0x8e);
                  rtscam_mem_set_info(unaff_s0[0xd5],unaff_s0[0x93],&_LC84);
                  unaff_s0[0x9a] = 1;
                  unaff_s0[0xca] = 1;
                  unaff_s0[0xcd] = 500;
                  scnprintf(unaff_s0 + 0xd6,0x20,"unknown");
                  device_create_file(*unaff_s0,&PTR_s_loadfw_0001922c);
                  unaff_s0[0xc9] = 0;
                  DAT_00019f38 = unaff_s0;
                  if (unaff_s0[0xa3] == 0) {
                    uVar4 = FUN_00010ebc(unaff_s0,"rtscam",&PTR___this_module_000192a4);
                    unaff_s0[0xa3] = uVar4;
                  }
                  if (unaff_s0[0xa4] == 0) {
                    uVar4 = FUN_00010ebc(unaff_s0,"rtscamctrl",&PTR___this_module_0001927c);
                    unaff_s0[0xa4] = uVar4;
                    return 0;
                  }
                  return 0;
                }
                if ((_rtscam_debug & 1) != 0) {
                  printk(&_LC83);
                }
                uVar9 = unaff_s0[0xe];
              }
              else if ((_rtscam_debug & 1) != 0) {
                puVar7 = &_LC82;
                goto LAB_000128bc;
              }
            }
            else if ((_rtscam_debug & 1) != 0) {
              puVar7 = &_LC80;
              goto LAB_000128bc;
            }
          }
        }
      }
      iVar3 = unaff_s0[0xe];
LAB_00012bd8:
      if (iVar3 != 0) {
        rts_dma_contig_cleanup_ctx();
      }
      unaff_s0[0xe] = 0;
      if (unaff_s0[0xd5] != 0) {
        rts_put_mem_info();
      }
      unaff_s0[0xd5] = 0;
      DAT_00019f38 = (undefined4 *)0x0;
      return uVar9;
    }
    if ((_rtscam_debug & 1) != 0) {
      puVar7 = &_LC72;
      goto LAB_00012800;
    }
  }
  if ((_rtscam_debug & 1) == 0) {
    return 0xffffffea;
  }
  puVar7 = &_LC73;
LAB_00012738:
  printk(puVar7);
  return 0xffffffea;
}



// ==== rtscam_soc_free_mcu_gpio @ 00012c44 size=148

undefined4 rtscam_soc_free_mcu_gpio(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_00019f38;
  iVar3 = DAT_00019f38 + 0x198;
  if (DAT_00019f38 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    mutex_lock(iVar3);
    if (param_1 < 8) {
      *(undefined4 *)(iVar1 + (param_1 + 0xde) * 4) = 0;
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffea;
    }
    mutex_unlock(iVar3);
  }
  return uVar2;
}



// ==== rtscam_soc_init_capture_buffers @ 00012cd8 size=420

undefined4 rtscam_soc_init_capture_buffers(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_18 [2];
  
  iVar2 = *(int *)(*param_1 + 0xb0) + (uint)*(byte *)(param_1 + 1) * 0xc + 0x1c8;
  *(undefined1 *)(iVar2 + 4) = 0;
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  uVar3 = param_1[0x2f];
  if (1 < uVar3) {
    uVar3 = 2;
  }
  *(char *)(iVar2 + 5) = (char)uVar3;
  bVar1 = *(byte *)(iVar2 + 5);
  uVar3 = (uint)*(byte *)(param_1 + 1);
  if ((char)param_1[0x61] == '\x04') {
    uVar3 = 4;
  }
  if (bVar1 < 8) {
    local_18[0] = FUN_000112cc(*(int *)(*param_1 + 0xb0) + 4,0x260);
    uVar4 = uVar3 * 4;
    local_18[uVar3 >> 3] = local_18[uVar3 >> 3] & ~(1 << (uVar4 & 0x1f));
    local_18[uVar4 + 1 >> 5] = local_18[uVar4 + 1 >> 5] & ~(1 << (uVar4 + 1 & 0x1f));
    local_18[uVar4 + 2 >> 5] = local_18[uVar4 + 2 >> 5] & ~(1 << (uVar4 + 2 & 0x1f));
    local_18[uVar4 + 3 >> 5] = local_18[uVar4 + 3 >> 5] & ~(1 << (uVar4 + 3 & 0x1f));
    local_18[0] = (uint)bVar1 << (uVar4 & 0x1f) | local_18[0];
    FUN_000110e0(*(int *)(*param_1 + 0xb0) + 4,local_18[0],0x260);
  }
  return 0;
}



// ==== rtscam_soc_get_device_des @ 00013664 size=164

int rtscam_soc_get_device_des(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined2 local_20;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 0x181;
  local_1d = 8;
  local_18 = &local_10;
  local_10 = 0;
  local_c = 0;
  local_1e = 0;
  local_1c = 0;
  local_1a = 0;
  local_14 = 0;
  if (param_2 == (undefined1 *)0x0) {
    iVar1 = -0x16;
  }
  else {
    iVar1 = FUN_0001171c(param_1,&local_20);
    if (iVar1 == 0) {
      *param_2 = (undefined1)local_10;
      param_2[1] = local_10._1_1_;
      *(undefined2 *)(param_2 + 2) = local_10._2_2_;
      *(undefined2 *)(param_2 + 4) = (undefined2)local_c;
      param_2[6] = local_c._2_1_;
      param_2[7] = local_c._3_1_;
    }
  }
  return iVar1;
}



// ==== rtscam_soc_get_frmival_desc @ 00013708 size=400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int rtscam_soc_get_frmival_desc(int param_1,byte *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined2 local_44;
  undefined2 local_42;
  int local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  
  local_46 = 0;
  iVar8 = *(int *)(*(int *)(param_1 + 0x32c) + 0x10);
  local_44 = 0;
  local_3c = 0;
  local_40 = (int)&local_48 - (iVar8 * 4 + 7U & 0xfffffff8);
  local_48 = 0x182;
  if (param_2 == (byte *)0x0) {
    iVar6 = -0x16;
  }
  else {
    iVar6 = -0x16;
    local_38 = local_40;
    for (iVar5 = 0; iVar3 = (uint)*param_2 - iVar5, iVar5 < (int)(uint)*param_2;
        iVar5 = iVar5 + iVar7) {
      iVar7 = iVar8;
      if (iVar3 <= iVar8) {
        iVar7 = iVar3;
      }
      iVar3 = iVar5 * 4;
      local_45 = (undefined1)(iVar7 << 2);
      local_42 = (undefined2)iVar3;
      iVar6 = FUN_0001171c(param_1,&local_48);
      if (iVar6 != 0) {
        return iVar6;
      }
      iVar6 = 0;
      if (*(int *)(param_2 + 4) != 0) {
        iVar4 = local_38 + iVar5 * -4;
        for (; iVar6 < iVar7; iVar6 = iVar6 + 1) {
          uVar2 = *(undefined4 *)(iVar3 + iVar4);
          if ((_rtscam_debug & 0x80) != 0) {
            local_34 = iVar6;
            local_30 = uVar2;
            local_2c = iVar4;
            printk(&_LC99,uVar2);
            uVar2 = local_30;
            iVar6 = local_34;
            iVar4 = local_2c;
          }
          puVar1 = (undefined4 *)(*(int *)(param_2 + 4) + iVar3);
          iVar3 = iVar3 + 4;
          *puVar1 = uVar2;
        }
      }
      iVar6 = 0;
    }
  }
  return iVar6;
}



// ==== rtscam_soc_get_vs_format_desc @ 00013898 size=168

int rtscam_soc_get_vs_format_desc(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined2 local_20;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined1 *local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  byte local_d;
  uint local_c;
  
  local_20 = 0x183;
  local_1d = 7;
  local_18 = &local_10;
  local_1c = 0;
  local_1a = 0;
  local_14 = 0;
  if (param_2 == (undefined1 *)0x0) {
    iVar1 = -0x16;
  }
  else {
    local_1e = *param_2;
    iVar1 = FUN_0001171c(param_1,&local_20);
    if (iVar1 == 0) {
      param_2[1] = local_10;
      param_2[2] = local_f;
      param_2[3] = local_e;
      *(ushort *)(param_2 + 4) = (ushort)((local_c & 0xff) << 8) | (ushort)local_d;
      *(short *)(param_2 + 6) = (short)(local_c >> 8);
    }
  }
  return iVar1;
}



// ==== rtscam_soc_get_isp_processing_desc @ 00013940 size=24

int rtscam_soc_get_isp_processing_desc(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  byte bStack_3e;
  undefined1 auStack_3d [29];
  undefined2 uStack_20;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  puStack_18 = &uStack_40;
  uStack_20 = 0x184;
  uStack_1e = 0;
  uStack_1c = 0;
  uStack_1a = 0;
  uStack_14 = 0;
  if (param_2 == (undefined1 *)0x0) {
    iVar1 = -0x16;
  }
  else {
    uStack_1d = 6;
    iVar1 = FUN_0001171c(param_1,&uStack_20);
    if (iVar1 == 0) {
      *param_2 = uStack_40;
      param_2[2] = bStack_3e;
      param_2[1] = uStack_3f;
      if (bStack_3e != 0) {
        memcpy(param_2 + 3,auStack_3d,(uint)bStack_3e);
      }
    }
  }
  return iVar1;
}



// ==== rtscam_soc_get_camera_desc @ 00013958 size=24

int rtscam_soc_get_camera_desc(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  byte bStack_3e;
  undefined1 auStack_3d [29];
  undefined2 uStack_20;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  puStack_18 = &uStack_40;
  uStack_20 = 0x185;
  uStack_1e = 0;
  uStack_1c = 0;
  uStack_1a = 0;
  uStack_14 = 0;
  if (param_2 == (undefined1 *)0x0) {
    iVar1 = -0x16;
  }
  else {
    uStack_1d = 6;
    iVar1 = FUN_0001171c(param_1,&uStack_20);
    if (iVar1 == 0) {
      *param_2 = uStack_40;
      param_2[2] = bStack_3e;
      param_2[1] = uStack_3f;
      if (bStack_3e != 0) {
        memcpy(param_2 + 3,auStack_3d,(uint)bStack_3e);
      }
    }
  }
  return iVar1;
}



// ==== rtscam_soc_get_ext_controls_desc @ 00013970 size=24

/* WARNING: Removing unreachable block (ram,0x0001196c) */

int rtscam_soc_get_ext_controls_desc(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  byte bStack_3e;
  undefined1 auStack_3d [29];
  undefined2 uStack_20;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_1d = 0x20;
  puStack_18 = &uStack_40;
  uStack_20 = 0x186;
  uStack_1e = 0;
  uStack_1c = 0;
  uStack_1a = 0;
  uStack_14 = 0;
  if (param_2 == (undefined1 *)0x0) {
    iVar1 = -0x16;
  }
  else {
    iVar1 = FUN_0001171c(param_1,&uStack_20);
    if (iVar1 == 0) {
      *param_2 = uStack_40;
      param_2[2] = bStack_3e;
      param_2[1] = uStack_3f;
      if (bStack_3e != 0) {
        memcpy(param_2 + 3,auStack_3d,(uint)bStack_3e);
      }
    }
  }
  return iVar1;
}



// ==== rtscam_soc_get_hclk_desc @ 00013988 size=144

int rtscam_soc_get_hclk_desc(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined2 local_20;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined1 *local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined1 local_f;
  byte local_e;
  
  local_20 = 0x187;
  local_1d = 3;
  local_18 = &local_10;
  local_1e = 0;
  local_1c = 0;
  local_1a = 0;
  local_14 = 0;
  if (param_2 == (undefined1 *)0x0) {
    iVar1 = -0x16;
  }
  else {
    iVar1 = FUN_0001171c(param_1,&local_20);
    if (iVar1 == 0) {
      *param_2 = local_10;
      param_2[1] = local_f;
      param_2[2] = local_e & 0x7f;
      param_2[3] = local_e >> 7;
    }
  }
  return iVar1;
}



// ==== rtscam_soc_get_fw_version @ 00013a18 size=436

int rtscam_soc_get_fw_version(undefined4 param_1,byte *param_2)

{
  int iVar1;
  byte *__src;
  size_t __n;
  byte local_40;
  byte local_3f;
  byte local_3e;
  byte local_3d;
  byte local_3c;
  byte local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  byte local_34;
  byte local_33;
  byte local_32;
  byte local_31;
  byte local_30;
  byte local_2f;
  byte local_2e;
  byte local_2d;
  byte abStack_2c [12];
  undefined2 local_20;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined2 local_1c;
  undefined2 local_1a;
  byte *local_18;
  undefined4 local_14;
  
  local_20 = 0x188;
  local_1d = 0x20;
  local_18 = &local_40;
  local_1e = 0;
  local_1c = 0;
  local_1a = 0;
  local_14 = 0;
  if (param_2 == (byte *)0x0) {
    iVar1 = -0x16;
  }
  else {
    iVar1 = FUN_0001171c(param_1,&local_20);
    if (iVar1 == 0) {
      param_2[1] = local_3f;
      *param_2 = local_40;
      *(uint *)(param_2 + 4) =
           (uint)local_3e << 0x18 | (uint)local_3d << 0x10 | (uint)local_3b | (uint)local_3c << 8;
      *(ushort *)(param_2 + 8) = CONCAT11(local_3a,local_39);
      *(ushort *)(param_2 + 10) = CONCAT11(local_38,local_37);
      *(ushort *)(param_2 + 0xc) = CONCAT11(local_36,local_35);
      if (local_40 >> 4 == 3) {
        __src = abStack_2c;
        __n = 0xc;
        *(uint *)(param_2 + 0x10) =
             (uint)local_34 << 0x18 | (uint)local_33 << 0x10 | (uint)local_31 | (uint)local_32 << 8;
        *(uint *)(param_2 + 0x14) =
             (uint)local_30 << 0x18 | (uint)local_2f << 0x10 | (uint)local_2d | (uint)local_2e << 8;
      }
      else {
        if (local_40 >> 4 != 2) {
          return 0;
        }
        __src = &local_30;
        __n = 0x10;
        *(uint *)(param_2 + 0x10) = (uint)CONCAT11(local_34,local_33);
        *(uint *)(param_2 + 0x14) = (uint)CONCAT11(local_32,local_31);
      }
      memcpy(param_2 + 0x18,__src,__n);
    }
  }
  return iVar1;
}



// ==== rtscam_soc_get_snr_power @ 00013bcc size=132

int rtscam_soc_get_snr_power(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined2 local_20;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined1 *local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  
  local_20 = 0x189;
  local_1d = 3;
  local_18 = &local_10;
  local_1e = 0;
  local_1c = 0;
  local_1a = 0;
  local_14 = 0;
  if (param_2 == (undefined1 *)0x0) {
    iVar1 = -0x16;
  }
  else {
    iVar1 = FUN_0001171c(param_1,&local_20);
    if (iVar1 == 0) {
      *param_2 = local_10;
      param_2[1] = local_f;
      param_2[2] = local_e;
    }
  }
  return iVar1;
}



// ==== rtscam_soc_get_api_version @ 00013c50 size=124

int rtscam_soc_get_api_version(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined2 local_20;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined1 *local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined1 local_f;
  
  local_20 = 0x18a;
  local_1d = 2;
  local_18 = &local_10;
  local_1e = 0;
  local_1c = 0;
  local_1a = 0;
  local_14 = 0;
  if (param_2 == (undefined1 *)0x0) {
    iVar1 = -0x16;
  }
  else {
    iVar1 = FUN_0001171c(param_1,&local_20);
    if (iVar1 == 0) {
      *param_2 = local_10;
      param_2[1] = local_f;
    }
  }
  return iVar1;
}



// ==== rtscam_soc_get_snr_power_seq @ 00013ccc size=240

int rtscam_soc_get_snr_power_seq(undefined4 param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  undefined2 local_30;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined2 local_2c;
  undefined2 local_2a;
  byte *local_28;
  undefined4 local_24;
  byte local_20 [4];
  undefined1 local_1c;
  byte local_1b;
  undefined2 local_1a;
  undefined2 local_18;
  
  local_30 = 0x18b;
  local_2d = 10;
  local_28 = local_20;
  local_2e = 0;
  local_2c = 0;
  local_2a = 0;
  local_24 = 0;
  iVar1 = FUN_0001171c(param_1,&local_30);
  if (iVar1 == 0) {
    if (param_2 != (byte *)0x0) {
      *param_2 = local_20[0] & 3;
      param_2[2] = local_20[0] >> 4 & 3;
      param_2[1] = local_20[0] >> 2 & 3;
      *(short *)(param_2 + 4) = local_20._1_2_;
      *(ushort *)(param_2 + 6) = CONCAT11(local_1c,local_20[3]);
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = local_1b & 3;
      param_3[2] = local_1b >> 4 & 3;
      param_3[1] = local_1b >> 2 & 3;
      *(undefined2 *)(param_3 + 4) = local_1a;
      *(undefined2 *)(param_3 + 6) = local_18;
    }
    iVar1 = 0;
  }
  return iVar1;
}



// ==== rtscam_soc_prepare_snr_pwron @ 00013dbc size=68

void rtscam_soc_prepare_snr_pwron(undefined4 param_1)

{
  undefined2 local_18;
  undefined1 local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = 0x209;
  local_16 = 0;
  local_15 = 0;
  local_14 = 0;
  local_12 = 0;
  local_10 = 0;
  local_c = 0;
  FUN_0001171c(param_1,&local_18);
  return;
}



// ==== rtscam_soc_get_sensor_id @ 00013e00 size=200

int rtscam_soc_get_sensor_id(undefined4 param_1,void *param_2,uint param_3)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_25;
  undefined2 local_24;
  undefined2 local_22;
  undefined1 *local_20;
  undefined4 local_1c;
  
  local_28 = 0x18c;
  local_25 = 0x20;
  local_26 = 0;
  local_24 = 0;
  local_22 = 0;
  local_1c = 0;
  local_20 = auStack_48;
  memset(auStack_48,0,0x20);
  iVar1 = FUN_0001171c(param_1,&local_28);
  if ((iVar1 == 0) && (param_2 != (void *)0x0)) {
    if (0x20 < param_3) {
      param_3 = 0x20;
    }
    memcpy(param_2,auStack_48,param_3);
  }
  return iVar1;
}



// ==== rtscam_soc_start_preview @ 00013ec8 size=88

void rtscam_soc_start_preview(int *param_1)

{
  undefined2 local_18;
  undefined1 local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = 0x202;
  local_16 = (undefined1)param_1[1];
  local_15 = 0;
  local_10 = 0;
  local_14 = (undefined2)param_1[99];
  local_c = 0;
  local_12 = (undefined2)param_1[100];
  FUN_0001171c(*(undefined4 *)(*param_1 + 0xb0),&local_18);
  return;
}



// ==== rtscam_soc_stop_preview @ 00013f20 size=80

void rtscam_soc_stop_preview(int *param_1)

{
  undefined2 local_18;
  undefined1 local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = 0x203;
  local_16 = (undefined1)param_1[1];
  local_15 = 0;
  local_14 = 0;
  local_12 = 0;
  local_10 = 0;
  local_c = 0;
  FUN_0001171c(*(undefined4 *)(*param_1 + 0xb0),&local_18);
  return;
}



// ==== rtscam_soc_pause_video @ 00013f70 size=80

void rtscam_soc_pause_video(int *param_1)

{
  undefined2 local_18;
  undefined1 local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = 0x205;
  local_16 = (undefined1)param_1[1];
  local_15 = 0;
  local_14 = 0;
  local_12 = 0;
  local_10 = 0;
  local_c = 0;
  FUN_0001171c(*(undefined4 *)(*param_1 + 0xb0),&local_18);
  return;
}



// ==== rtscam_soc_resume_video @ 00013fc0 size=80

void rtscam_soc_resume_video(int *param_1)

{
  undefined2 local_18;
  undefined1 local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = 0x206;
  local_16 = (undefined1)param_1[1];
  local_15 = 0;
  local_14 = 0;
  local_12 = 0;
  local_10 = 0;
  local_c = 0;
  FUN_0001171c(*(undefined4 *)(*param_1 + 0xb0),&local_18);
  return;
}



// ==== rtscam_soc_set_format @ 00014010 size=84

void rtscam_soc_set_format(int *param_1)

{
  undefined2 local_18;
  undefined1 local_16;
  undefined1 local_15;
  ushort local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = 0x207;
  local_16 = (undefined1)param_1[1];
  local_15 = 0;
  local_12 = 0;
  local_14 = (ushort)*(byte *)(param_1 + 0x61);
  local_10 = 0;
  local_c = 0;
  FUN_0001171c(*(undefined4 *)(*param_1 + 0xb0),&local_18);
  return;
}



// ==== rtscam_soc_get_3dnr_mode @ 00014064 size=112

int rtscam_soc_get_3dnr_mode(undefined4 param_1,uint *param_2)

{
  int iVar1;
  undefined2 local_20;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined2 local_1c;
  undefined2 local_1a;
  byte *local_18;
  undefined4 local_14;
  byte local_10 [8];
  
  local_20 = 0xa9c;
  local_1d = 1;
  local_18 = local_10;
  local_1e = 0;
  local_1c = 0;
  local_1a = 0;
  local_14 = 0;
  iVar1 = FUN_0001171c(param_1,&local_20);
  if (-1 < iVar1) {
    if (param_2 != (uint *)0x0) {
      *param_2 = (uint)local_10[0];
    }
    iVar1 = 0;
  }
  return iVar1;
}



// ==== rtscam_soc_get_td_buf @ 000140d4 size=528

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int rtscam_soc_get_td_buf(int param_1,ushort *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int local_20 [3];
  
  if (*(int *)(param_1 + 0x2d4) != 0) {
    return 0;
  }
  local_20[0] = 0;
  iVar4 = *param_2 + 8;
  iVar3 = param_2[1] + 8;
  if (((*(int *)(param_1 + 0x34c) - 1U & 0xff) < 2) ||
     (iVar1 = rtscam_soc_get_3dnr_mode(param_1,local_20), iVar1 < 0)) {
    pcVar5 = *(code **)(*(int *)(param_1 + 0x32c) + 0x1c);
    if (pcVar5 == (code *)0x0) {
      if ((_rtscam_debug & 1) != 0) {
        printk(&_LC101);
      }
      goto LAB_00014220;
    }
    uVar2 = (*pcVar5)(iVar4,iVar3);
  }
  else {
    uVar2 = iVar3 * iVar4;
    if (local_20[0] != 1) {
      if (local_20[0] < 2) {
        if (local_20[0] != 0) {
LAB_000141a4:
          if ((_rtscam_debug & 1) != 0) {
            printk(&_LC100);
          }
          goto LAB_00014220;
        }
        uVar2 = iVar4 * iVar3 * 2;
      }
      else if (local_20[0] == 2) {
        uVar2 = (uint)(iVar4 * iVar3 * 3) >> 2;
      }
      else {
        if (local_20[0] != 3) goto LAB_000141a4;
        uVar2 = (uint)(iVar3 * iVar4) >> 2;
      }
    }
  }
  if (-1 < (int)uVar2) {
    *(uint *)(param_1 + 0x2cc) = uVar2;
    iVar3 = FUN_000122e8(param_1,param_1 + 700);
    if (iVar3 == 0) {
      rtscam_mem_set_info(*(undefined4 *)(param_1 + 0x354),*(undefined4 *)(param_1 + 0x2d0),&_LC103)
      ;
      return 0;
    }
    if ((_rtscam_debug & 1) == 0) {
      return iVar3;
    }
    printk(&_LC102,"rtscam_soc_get_td_buf");
    return iVar3;
  }
LAB_00014220:
  if ((_rtscam_debug & 1) != 0) {
    printk(&_LC101);
  }
  return -0x16;
}



// ==== rtscam_soc_ctrl_query_ctrl @ 000142e4 size=88

void rtscam_soc_ctrl_query_ctrl
               (undefined4 param_1,short param_2,ushort param_3,undefined1 param_4,
               undefined1 param_5,undefined4 param_6)

{
  ushort local_18;
  undefined1 local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  
  local_15 = param_5;
  local_18 = param_2 << 8 | param_3 & 0xff;
  local_10 = param_6;
  local_14 = 0;
  local_12 = 0;
  local_c = 0;
  local_16 = param_4;
  FUN_0001171c(param_1,&local_18);
  return;
}



// ==== rtscam_soc_query_ctrl @ 0001433c size=220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int rtscam_soc_query_ctrl
              (int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
              undefined1 param_5,undefined4 param_6)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = rtscam_soc_ctrl_query_ctrl
                    (*(undefined4 *)(param_1 + 0xb0),param_2,param_3,param_4,param_5,param_6);
  uVar3 = 1;
  if (iVar1 == 0) {
    uVar3 = 4;
  }
  if ((uVar3 & _rtscam_debug) != 0) {
    if (iVar1 == 0) {
      iVar4 = 0;
      puVar2 = &_LC105;
    }
    else {
      puVar2 = &_LC104;
      iVar4 = iVar1;
    }
    printk(puVar2,"rtscam_soc_query_ctrl",param_2,param_3,param_4,param_5,iVar4);
  }
  return iVar1;
}



// ==== rtscam_soc_get_snr_fmt @ 00014418 size=124

void rtscam_soc_get_snr_fmt(undefined4 param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 local_20;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined1 local_c;
  
  local_20 = 0x681;
  local_1d = 5;
  local_18 = &local_10;
  local_1e = 0;
  local_1c = 0;
  local_1a = 0;
  local_14 = 0;
  iVar1 = FUN_0001171c(param_1,&local_20);
  if ((iVar1 == 0) && (param_2 != (undefined2 *)0x0)) {
    *param_2 = local_10;
    param_2[1] = local_e;
    *(undefined1 *)(param_2 + 2) = local_c;
  }
  return;
}



// ==== rtscam_soc_get_isp_func @ 00014494 size=108

void rtscam_soc_get_isp_func(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined2 local_20;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined1 *local_18;
  undefined4 local_14;
  undefined1 local_10 [8];
  
  local_20 = 0xa81;
  local_1d = 1;
  local_18 = local_10;
  local_1e = 0;
  local_1c = 0;
  local_1a = 0;
  local_14 = 0;
  iVar1 = FUN_0001171c(param_1,&local_20);
  if ((iVar1 == 0) && (param_2 != (undefined1 *)0x0)) {
    *param_2 = local_10[0];
  }
  return;
}



// ==== rtscam_soc_set_isp_func @ 00014500 size=80

void rtscam_soc_set_isp_func(undefined4 param_1,undefined1 param_2)

{
  undefined1 local_res4 [12];
  undefined2 local_18;
  undefined1 local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined2 local_12;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = 0xa01;
  local_15 = 1;
  local_10 = local_res4;
  local_16 = 0;
  local_14 = 0;
  local_12 = 0;
  local_c = 0;
  local_res4[0] = param_2;
  FUN_0001171c(param_1,&local_18);
  return;
}



// ==== __rtscam_soc_s_stream @ 00014738 size=1328

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __rtscam_soc_s_stream(int *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  int unaff_gp;
  int local_28;
  int local_24;
  
  iVar5 = *(int *)(*param_1 + 0xb0);
  if ((_rtscam_debug & 0x20) != 0) {
    if (param_2 == 0) {
      puVar3 = &_LC109;
    }
    else {
      puVar3 = &_LC108;
    }
    printk(&_LC110,puVar3);
  }
  uVar1 = 0xffffffea;
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) && (*(int *)(*param_1 + 0xb0) != 0)) {
    uVar2 = 4;
    if ((char)param_1[0x61] != '\x04') {
      uVar2 = (uint)*(byte *)(param_1 + 1);
    }
    if (param_2 == 0) {
      getrawmonotonic(&local_28);
      uVar4 = ((local_28 - DAT_00019f30) * 1000 + local_24 / 1000000) - DAT_00019f34 / 1000000;
      if (uVar4 < DAT_00019e08) {
        if ((_rtscam_debug & 0x20) != 0) {
          printk(&_LC112,DAT_00019e08 - uVar4);
        }
        for (iVar6 = DAT_00019e08 - uVar4; iVar6 != 0; iVar6 = iVar6 + -1) {
          __udelay(1000);
        }
      }
      if (*(int *)(iVar5 + 0x3b4) != 0) {
        if (((*(int *)(iVar5 + 0x3b4) == 1) && (*(int *)(iVar5 + 0x2ec) != 0)) &&
           ((iVar6 = __disable_td(iVar5), iVar6 != 0 && ((_rtscam_debug & 1) != 0)))) {
          printk(&_LC113,iVar6);
        }
        *(int *)(iVar5 + 0x3b4) = *(int *)(iVar5 + 0x3b4) + -1;
      }
      rtscam_soc_stop_preview(param_1);
      for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
        __udelay(1000);
      }
      FUN_000111d8(iVar5,uVar2,0);
      param_1[0x6f] = 0;
      iVar8 = *(int *)(*param_1 + 0xb0);
      arch_local_irq_disable();
      *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
      iVar8 = iVar8 + (uint)*(byte *)(param_1 + 1) * 0xc + 0x1c8;
      iVar6 = iVar8;
      for (iVar7 = 0; iVar7 < (int)(uint)*(byte *)(iVar8 + 5); iVar7 = iVar7 + 1) {
        if (*(int *)(iVar6 + 8) != 0) {
          *(undefined4 *)(iVar6 + 8) = 0;
          rtscam_push_back_ready_buffer(param_1);
        }
        iVar6 = iVar6 + 4;
      }
      *(undefined1 *)(iVar8 + 4) = 0;
      setCopReg(0,Status,(Status | 0x1f) ^ 0x1e);
      *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
      uVar1 = 0;
      if ((*(uint *)(unaff_gp + 8) >> 2 & 1) != 0) {
        preempt_schedule();
      }
    }
    else {
      param_1[0x67] = 0;
      param_1[0x6a] = 0;
      param_1[0x68] = 0;
      param_1[0x69] = 0;
      param_1[0x6b] = 0;
      *(undefined4 *)(iVar5 + (*(byte *)(param_1 + 1) + 0xe8) * 4) = *(undefined4 *)(iVar5 + 0x39c);
      rtscam_soc_set_format(param_1);
      uVar9 = 4;
      if ((char)param_1[0x61] != '\x04') {
        uVar9 = (char)param_1[1];
      }
      FUN_0001115c(*(undefined4 *)(*param_1 + 0xb0),uVar9);
      usleep_range(0x26ac,10000);
      iVar6 = *(int *)(*param_1 + 0xb0);
      arch_local_irq_disable();
      *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
      iVar6 = iVar6 + (uint)*(byte *)(param_1 + 1) * 0xc;
      for (iVar7 = 0; iVar7 < (int)(uint)*(byte *)(iVar6 + 0x1cd); iVar7 = iVar7 + 1) {
        if (*(int *)(iVar6 + iVar7 * 4 + 0x1d0) == 0) {
          rtscam_submit_buffer(param_1,0);
        }
      }
      setCopReg(0,Status,(Status | 0x1f) ^ 0x1e);
      *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
      if ((*(uint *)(unaff_gp + 8) >> 2 & 1) != 0) {
        preempt_schedule();
      }
      FUN_000111d8(iVar5,uVar2,1);
      uVar1 = rtscam_soc_start_preview(param_1);
      iVar6 = *(int *)(iVar5 + 0x3b4);
      *(int *)(iVar5 + 0x3b4) = iVar6 + 1;
      if (((iVar6 == 0) && (*(int *)(iVar5 + 0x2ec) != 0)) &&
         ((iVar6 = __enable_td(iVar5), iVar6 != 0 && ((_rtscam_debug & 1) != 0)))) {
        printk(&_LC111,iVar6);
      }
      param_1[0x6f] = 3;
      getrawmonotonic(&DAT_00019f30);
    }
    uVar2 = 0;
    iVar6 = 0;
    while (iVar6 < (int)(uint)*(byte *)(iVar5 + 0x46)) {
      iVar7 = *(int *)(iVar5 + 0x180) + iVar6 * 0x1c0;
      uVar4 = uVar2;
      if (0x1e < uVar2) {
        uVar4 = 0x1e;
      }
      *(uint *)(iVar7 + 0x1b8) = uVar4;
      uVar2 = uVar2 + *(int *)(iVar7 + 0x1bc);
      iVar6 = iVar6 + 1;
    }
  }
  return uVar1;
}



// ==== rtscam_soc_s_stream @ 00014c68 size=224

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 rtscam_soc_s_stream(int *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  int unaff_gp;
  int iStack_28;
  int iStack_24;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) && (*(int *)(*param_1 + 0xb0) != 0)) {
    if (*(int *)(param_1[0x60] + 0x30) == 0) {
      if (param_2 == 0) {
        uVar1 = __rtscam_soc_s_stream();
        rtscam_adjust_sensor_fps(param_1,0);
        return uVar1;
      }
      rtscam_adjust_sensor_fps();
    }
    else {
      rtscam_exec_sensor_frmival_setting();
    }
    iVar5 = *(int *)(*param_1 + 0xb0);
    if ((_rtscam_debug & 0x20) != 0) {
      if (param_2 == 0) {
        puVar3 = &_LC109;
      }
      else {
        puVar3 = &_LC108;
      }
      printk(&_LC110,puVar3);
    }
    uVar1 = 0xffffffea;
    if (((param_1 != (int *)0x0) && (*param_1 != 0)) && (*(int *)(*param_1 + 0xb0) != 0)) {
      uVar2 = 4;
      if ((char)param_1[0x61] != '\x04') {
        uVar2 = (uint)*(byte *)(param_1 + 1);
      }
      if (param_2 == 0) {
        getrawmonotonic(&iStack_28);
        uVar4 = ((iStack_28 - DAT_00019f30) * 1000 + iStack_24 / 1000000) - DAT_00019f34 / 1000000;
        if (uVar4 < DAT_00019e08) {
          if ((_rtscam_debug & 0x20) != 0) {
            printk(&_LC112,DAT_00019e08 - uVar4);
          }
          for (iVar6 = DAT_00019e08 - uVar4; iVar6 != 0; iVar6 = iVar6 + -1) {
            __udelay(1000);
          }
        }
        if (*(int *)(iVar5 + 0x3b4) != 0) {
          if (((*(int *)(iVar5 + 0x3b4) == 1) && (*(int *)(iVar5 + 0x2ec) != 0)) &&
             ((iVar6 = __disable_td(iVar5), iVar6 != 0 && ((_rtscam_debug & 1) != 0)))) {
            printk(&_LC113,iVar6);
          }
          *(int *)(iVar5 + 0x3b4) = *(int *)(iVar5 + 0x3b4) + -1;
        }
        rtscam_soc_stop_preview(param_1);
        for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
          __udelay(1000);
        }
        FUN_000111d8(iVar5,uVar2,0);
        param_1[0x6f] = 0;
        iVar8 = *(int *)(*param_1 + 0xb0);
        arch_local_irq_disable();
        *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
        iVar8 = iVar8 + (uint)*(byte *)(param_1 + 1) * 0xc + 0x1c8;
        iVar6 = iVar8;
        for (iVar7 = 0; iVar7 < (int)(uint)*(byte *)(iVar8 + 5); iVar7 = iVar7 + 1) {
          if (*(int *)(iVar6 + 8) != 0) {
            *(undefined4 *)(iVar6 + 8) = 0;
            rtscam_push_back_ready_buffer(param_1);
          }
          iVar6 = iVar6 + 4;
        }
        *(undefined1 *)(iVar8 + 4) = 0;
        setCopReg(0,Status,(Status | 0x1f) ^ 0x1e);
        *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
        uVar1 = 0;
        if ((*(uint *)(unaff_gp + 8) >> 2 & 1) != 0) {
          preempt_schedule();
        }
      }
      else {
        param_1[0x67] = 0;
        param_1[0x6a] = 0;
        param_1[0x68] = 0;
        param_1[0x69] = 0;
        param_1[0x6b] = 0;
        *(undefined4 *)(iVar5 + (*(byte *)(param_1 + 1) + 0xe8) * 4) =
             *(undefined4 *)(iVar5 + 0x39c);
        rtscam_soc_set_format(param_1);
        uVar9 = 4;
        if ((char)param_1[0x61] != '\x04') {
          uVar9 = (char)param_1[1];
        }
        FUN_0001115c(*(undefined4 *)(*param_1 + 0xb0),uVar9);
        usleep_range(0x26ac,10000);
        iVar6 = *(int *)(*param_1 + 0xb0);
        arch_local_irq_disable();
        *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
        iVar6 = iVar6 + (uint)*(byte *)(param_1 + 1) * 0xc;
        for (iVar7 = 0; iVar7 < (int)(uint)*(byte *)(iVar6 + 0x1cd); iVar7 = iVar7 + 1) {
          if (*(int *)(iVar6 + iVar7 * 4 + 0x1d0) == 0) {
            rtscam_submit_buffer(param_1,0);
          }
        }
        setCopReg(0,Status,(Status | 0x1f) ^ 0x1e);
        *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
        if ((*(uint *)(unaff_gp + 8) >> 2 & 1) != 0) {
          preempt_schedule();
        }
        FUN_000111d8(iVar5,uVar2,1);
        uVar1 = rtscam_soc_start_preview(param_1);
        iVar6 = *(int *)(iVar5 + 0x3b4);
        *(int *)(iVar5 + 0x3b4) = iVar6 + 1;
        if ((((iVar6 == 0) && (*(int *)(iVar5 + 0x2ec) != 0)) &&
            (iVar6 = __enable_td(iVar5), iVar6 != 0)) && ((_rtscam_debug & 1) != 0)) {
          printk(&_LC111,iVar6);
        }
        param_1[0x6f] = 3;
        getrawmonotonic(&DAT_00019f30);
      }
      uVar2 = 0;
      iVar6 = 0;
      while (iVar6 < (int)(uint)*(byte *)(iVar5 + 0x46)) {
        iVar7 = *(int *)(iVar5 + 0x180) + iVar6 * 0x1c0;
        uVar4 = uVar2;
        if (0x1e < uVar2) {
          uVar4 = 0x1e;
        }
        *(uint *)(iVar7 + 0x1b8) = uVar4;
        uVar2 = uVar2 + *(int *)(iVar7 + 0x1bc);
        iVar6 = iVar6 + 1;
      }
    }
    return uVar1;
  }
  return 0xffffffea;
}



// ==== rtscam_soc_get_gpio_use_status @ 00014dfc size=100

undefined4 rtscam_soc_get_gpio_use_status(undefined4 param_1,byte param_2,int param_3)

{
  undefined4 uVar1;
  undefined2 local_18;
  byte local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined2 local_12;
  int local_10;
  undefined4 local_c;
  
  local_18 = 0xc81;
  local_15 = 1;
  local_14 = 0;
  local_12 = 0;
  local_c = 0;
  if ((param_2 < 8) && (param_3 != 0)) {
    local_16 = param_2;
    local_10 = param_3;
    uVar1 = FUN_0001171c(param_1,&local_18);
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



// ==== rtscam_soc_request_mcu_gpio @ 00014f04 size=132

undefined4 rtscam_soc_request_mcu_gpio(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_00019f38;
  iVar3 = DAT_00019f38 + 0x198;
  if (DAT_00019f38 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    mutex_lock(iVar3);
    uVar2 = FUN_00014e60(iVar1,param_1);
    mutex_unlock(iVar3);
  }
  return uVar2;
}



// ==== rtscam_soc_get_gpio_direction @ 00015d64 size=100

undefined4 rtscam_soc_get_gpio_direction(undefined4 param_1,byte param_2,int param_3)

{
  undefined4 uVar1;
  undefined2 local_18;
  byte local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined2 local_12;
  int local_10;
  undefined4 local_c;
  
  local_18 = 0xc82;
  local_15 = 1;
  local_14 = 0;
  local_12 = 0;
  local_c = 0;
  if ((param_2 < 8) && (param_3 != 0)) {
    local_16 = param_2;
    local_10 = param_3;
    uVar1 = FUN_0001171c(param_1,&local_18);
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



// ==== rtscam_soc_get_mcu_gpio_direction @ 00015dc8 size=112

uint rtscam_soc_get_mcu_gpio_direction(undefined1 param_1)

{
  uint uVar1;
  uint uVar2;
  byte local_10 [12];
  
  if (((DAT_00019f38 != 0) && (*(int *)(DAT_00019f38 + 0x10) != 0)) &&
     (*(int *)(DAT_00019f38 + 0x1c) == 1)) {
    uVar1 = rtscam_soc_get_gpio_direction(DAT_00019f38,param_1,local_10);
    uVar2 = (uint)local_10[0];
    if (uVar1 != 0) {
      uVar2 = uVar1;
    }
    return uVar2;
  }
  return 0xffffffea;
}



// ==== rtscam_soc_set_gpio_direction @ 00015e38 size=120

undefined4 rtscam_soc_set_gpio_direction(undefined4 param_1,byte param_2,char param_3)

{
  undefined4 uVar1;
  char local_res8 [8];
  undefined2 local_18;
  byte local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined2 local_12;
  char *local_10;
  undefined4 local_c;
  
  local_18 = 0xc02;
  local_10 = local_res8;
  local_15 = 1;
  local_14 = 0;
  local_12 = 0;
  local_c = 0;
  if (param_2 < 8) {
    local_res8[0] = param_3;
    if (param_3 != '\0') {
      local_res8[0] = '\x01';
    }
    local_16 = param_2;
    uVar1 = FUN_0001171c(param_1,&local_18);
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



// ==== rtscam_soc_set_mcu_gpio_direction @ 00015eb0 size=80

undefined4 rtscam_soc_set_mcu_gpio_direction(byte param_1,char param_2)

{
  undefined4 uVar1;
  char acStackX_8 [8];
  undefined2 uStack_18;
  byte bStack_16;
  undefined1 uStack_15;
  undefined2 uStack_14;
  undefined2 uStack_12;
  char *pcStack_10;
  undefined4 uStack_c;
  
  if (((DAT_00019f38 != 0) && (*(int *)(DAT_00019f38 + 0x10) != 0)) &&
     (*(int *)(DAT_00019f38 + 0x1c) == 1)) {
    uStack_18 = 0xc02;
    pcStack_10 = acStackX_8;
    uStack_15 = 1;
    uStack_14 = 0;
    uStack_12 = 0;
    uStack_c = 0;
    if (param_1 < 8) {
      acStackX_8[0] = param_2;
      if (param_2 != '\0') {
        acStackX_8[0] = '\x01';
      }
      bStack_16 = param_1;
      uVar1 = FUN_0001171c(DAT_00019f38,&uStack_18);
    }
    else {
      uVar1 = 0xffffffea;
    }
    return uVar1;
  }
  return 0xffffffea;
}



// ==== rtscam_soc_get_gpio_value @ 00015f00 size=100

undefined4 rtscam_soc_get_gpio_value(undefined4 param_1,byte param_2,int param_3)

{
  undefined4 uVar1;
  undefined2 local_18;
  byte local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined2 local_12;
  int local_10;
  undefined4 local_c;
  
  local_18 = 0xc83;
  local_15 = 1;
  local_14 = 0;
  local_12 = 0;
  local_c = 0;
  if ((param_2 < 8) && (param_3 != 0)) {
    local_16 = param_2;
    local_10 = param_3;
    uVar1 = FUN_0001171c(param_1,&local_18);
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



// ==== rtscam_soc_get_mcu_gpio_value @ 00015f64 size=112

uint rtscam_soc_get_mcu_gpio_value(undefined1 param_1)

{
  uint uVar1;
  uint uVar2;
  byte local_10 [12];
  
  if (((DAT_00019f38 != 0) && (*(int *)(DAT_00019f38 + 0x10) != 0)) &&
     (*(int *)(DAT_00019f38 + 0x1c) == 1)) {
    uVar1 = rtscam_soc_get_gpio_value(DAT_00019f38,param_1,local_10);
    uVar2 = (uint)local_10[0];
    if (uVar1 != 0) {
      uVar2 = uVar1;
    }
    return uVar2;
  }
  return 0xffffffea;
}



// ==== rtscam_soc_set_gpio_value @ 00015fd4 size=120

undefined4 rtscam_soc_set_gpio_value(undefined4 param_1,byte param_2,char param_3)

{
  undefined4 uVar1;
  char local_res8 [8];
  undefined2 local_18;
  byte local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined2 local_12;
  char *local_10;
  undefined4 local_c;
  
  local_18 = 0xc03;
  local_10 = local_res8;
  local_15 = 1;
  local_14 = 0;
  local_12 = 0;
  local_c = 0;
  if (param_2 < 8) {
    local_res8[0] = param_3;
    if (param_3 != '\0') {
      local_res8[0] = '\x01';
    }
    local_16 = param_2;
    uVar1 = FUN_0001171c(param_1,&local_18);
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



// ==== rtscam_soc_set_mcu_gpio_value @ 0001604c size=80

undefined4 rtscam_soc_set_mcu_gpio_value(byte param_1,char param_2)

{
  undefined4 uVar1;
  char acStackX_8 [8];
  undefined2 uStack_18;
  byte bStack_16;
  undefined1 uStack_15;
  undefined2 uStack_14;
  undefined2 uStack_12;
  char *pcStack_10;
  undefined4 uStack_c;
  
  if (((DAT_00019f38 != 0) && (*(int *)(DAT_00019f38 + 0x10) != 0)) &&
     (*(int *)(DAT_00019f38 + 0x1c) == 1)) {
    uStack_18 = 0xc03;
    pcStack_10 = acStackX_8;
    uStack_15 = 1;
    uStack_14 = 0;
    uStack_12 = 0;
    uStack_c = 0;
    if (param_1 < 8) {
      acStackX_8[0] = param_2;
      if (param_2 != '\0') {
        acStackX_8[0] = '\x01';
      }
      bStack_16 = param_1;
      uVar1 = FUN_0001171c(DAT_00019f38,&uStack_18);
    }
    else {
      uVar1 = 0xffffffea;
    }
    return uVar1;
  }
  return 0xffffffea;
}



// ==== rtscam_soc_set_dynamic_fps @ 0001609c size=88

void rtscam_soc_set_dynamic_fps(int *param_1,undefined1 param_2)

{
  undefined2 local_20;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined1 *local_18;
  undefined4 local_14;
  undefined1 local_10 [12];
  
  local_20 = 0xa15;
  local_1d = 1;
  local_18 = local_10;
  local_1e = 0;
  local_1c = 0;
  local_1a = 0;
  local_14 = 0;
  local_10[0] = param_2;
  FUN_0001171c(*param_1 + -0x114,&local_20);
  return;
}



// ==== rtscam_soc_attach @ 00016138 size=3352

/* WARNING: Removing unreachable block (ram,0x000166f4) */
/* WARNING: Removing unreachable block (ram,0x000161a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * rtscam_soc_attach(undefined4 *param_1)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int local_98 [16];
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  char local_48 [3];
  byte local_45;
  ushort local_44;
  ushort local_42;
  undefined4 *local_40;
  undefined *local_3c;
  undefined *local_38;
  int local_34;
  undefined *local_30;
  
  if (param_1 == (undefined4 *)0x0) {
    return (undefined *)0xffffffea;
  }
  piVar7 = param_1 + 5;
  if (param_1[4] != 0) {
    return (undefined *)0x0;
  }
  iVar10 = *piVar7;
  *piVar7 = iVar10 + 1;
  if (iVar10 != 0) {
    *piVar7 = *piVar7 + -1;
    return (undefined *)0xfffffff0;
  }
  puVar2 = (undefined *)FUN_00011ce0(param_1,1);
  if (puVar2 != (undefined *)0x0) {
    param_1[0x9a] = 1;
    goto LAB_000166e0;
  }
  iVar10 = rtscam_soc_get_api_version(param_1,param_1 + 0x34);
  if ((iVar10 == 0) && ((_rtscam_debug & 0x100) != 0)) {
    printk(&_LC127,*(undefined1 *)(param_1 + 0x34),*(undefined1 *)((int)param_1 + 0xd1));
  }
  puVar2 = (undefined *)rtscam_soc_get_device_des(param_1,param_1 + 0x10);
  if (puVar2 == (undefined *)0x0) {
    if (5 < *(byte *)((int)param_1 + 0x46)) {
      puVar2 = (undefined *)0xffffffea;
      if ((_rtscam_debug & 1) != 0) {
        printk(&_LC129,*(byte *)((int)param_1 + 0x46),5);
      }
      goto LAB_00016614;
    }
    puVar2 = (undefined *)0xffffffea;
    if (*(char *)((int)param_1 + 0x47) == '\0') goto LAB_00016614;
    puVar2 = (undefined *)rtscam_soc_get_isp_processing_desc(param_1,param_1 + 0x12);
    if (puVar2 != (undefined *)0x0) {
      if ((_rtscam_debug & 1) == 0) goto LAB_00016614;
      puVar6 = &_LC130;
LAB_000165d4:
      printk(puVar6);
      goto LAB_00016614;
    }
    puVar2 = (undefined *)rtscam_soc_get_camera_desc(param_1,param_1 + 0x1d);
    if (puVar2 != (undefined *)0x0) {
      if ((_rtscam_debug & 1) != 0) {
        puVar6 = &_LC131;
        goto LAB_000165d4;
      }
      goto LAB_00016614;
    }
    puVar2 = (undefined *)rtscam_soc_get_ext_controls_desc(param_1,param_1 + 0x28);
    if (puVar2 != (undefined *)0x0) {
      if ((_rtscam_debug & 1) != 0) {
        puVar6 = &_LC132;
        goto LAB_000165d4;
      }
      goto LAB_00016614;
    }
    puVar2 = (undefined *)rtscam_soc_get_hclk_desc(param_1,param_1 + 0x33);
    if (puVar2 != (undefined *)0x0) {
      if ((_rtscam_debug & 1) != 0) {
        puVar6 = &_LC133;
        goto LAB_000165d4;
      }
      goto LAB_00016614;
    }
    rtscam_soc_get_fw_version(param_1,param_1 + 0xa5);
    iVar12 = (int)param_1 + 0x4b;
    iVar10 = 4;
LAB_000163b0:
    iVar10 = iVar10 + -1;
    if (iVar10 != 0) {
      uVar3 = memweight(iVar12,*(undefined1 *)(iVar12 + -1));
      if (uVar3 < 0x71c71c8) {
        iVar4 = __kmalloc(uVar3 * 0x24,0x80d0);
      }
      else {
        iVar4 = 0;
      }
      *(int *)(iVar12 + 0x25) = iVar4;
      if (iVar4 != 0) goto LAB_00016420;
      iVar10 = 4;
      puVar8 = param_1;
      while (iVar10 = iVar10 + -1, iVar10 != 0) {
        if (puVar8[0x1c] != 0) {
          kfree();
          puVar8[0x1c] = 0;
        }
        puVar8[0x1b] = 0;
        puVar8 = puVar8 + 0xb;
      }
      puVar2 = (undefined *)0xfffffff4;
      if ((_rtscam_debug & 1) != 0) {
        printk(&_LC134);
        puVar2 = (undefined *)0xfffffff4;
      }
      goto LAB_00016614;
    }
    if (param_1[0x88] == 0) {
      param_1[0x86] = 0xa0;
      puVar2 = (undefined *)FUN_000122e8(param_1,param_1 + 0x82);
      if (puVar2 != (undefined *)0x0) {
        if ((_rtscam_debug & 1) != 0) {
          printk(&_LC135);
        }
        if ((_rtscam_debug & 1) != 0) {
          puVar6 = &_LC137;
          goto LAB_000165d4;
        }
        goto LAB_00016614;
      }
      rtscam_mem_set_info(param_1[0xd5],param_1[0x87],"isp headers");
    }
    local_40 = param_1 + 1;
    FUN_000110e0(local_40,param_1[0x87],0x2f0);
    if (*(byte *)((int)param_1 + 0x46) == 0) {
      puVar2 = (undefined *)0xffffffea;
LAB_00016e04:
      if ((_rtscam_debug & 1) != 0) {
        puVar6 = &_LC142;
        goto LAB_000165d4;
      }
      goto LAB_00016614;
    }
    iVar10 = __kmalloc((uint)*(byte *)((int)param_1 + 0x46) * 0x1c0,0x80d0);
    if (iVar10 == 0) {
      puVar2 = (undefined *)0xfffffff4;
      goto LAB_00016e04;
    }
    param_1[0x37] = 0xffffffe0;
    param_1[0x38] = param_1 + 0x38;
    param_1[0x39] = param_1 + 0x38;
    puVar8 = param_1 + 0x35;
    param_1[0x3a] = &rtscam_process_dynamic_sensor_fps;
    param_1[0x42] = rtscam_soc_get_dynamic_fps;
    param_1[0x44] = __rtscam_soc_s_stream;
    param_1[0x43] = rtscam_soc_set_fps;
    local_98[0] = CONCAT31(local_98[0]._1_3_,*(byte *)((int)param_1 + 0x47));
    local_98[1] = __kmalloc((uint)*(byte *)((int)param_1 + 0x47) << 2,0x80d0);
    puVar2 = (undefined *)rtscam_soc_get_frmival_desc(param_1,local_98);
    if (puVar2 == (undefined *)0x0) {
      rtscam_init_sensor_fps(puVar8,local_98,*(char *)(param_1 + 0xd3) == '\x02');
      param_1[0x40] = iVar10;
      *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)((int)param_1 + 0x46);
      param_1[0x3f] = param_1 + 0x6e;
      iVar12 = iVar10;
      for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)((int)param_1 + 0x46); iVar4 = iVar4 + 1) {
        *(undefined4 **)(iVar12 + 0x180) = puVar8;
        iVar12 = iVar12 + 0x1c0;
      }
      kfree(local_98[1]);
    }
    else {
      if ((_rtscam_debug & 1) != 0) {
        printk(&_LC138);
      }
      kfree(local_98[1]);
      if (puVar2 != (undefined *)0x0) {
        if ((_rtscam_debug & 1) != 0) {
          printk(&_LC139);
        }
        rtscam_release_sensor_fps(puVar8);
        goto LAB_00016e04;
      }
    }
    iVar12 = iVar10;
    for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)((int)param_1 + 0x46); iVar4 = iVar4 + 1) {
      *(char *)(iVar12 + 4) = (char)iVar4;
      local_58 = 0x50;
      local_54 = 0x3c;
      local_98[0] = 2;
      local_98[1] = 2;
      if (*(char *)(param_1 + 0xd3) == '\x01') {
        local_48[0] = *(char *)(iVar12 + 4);
        if (local_48[0] == '\0') {
          local_58 = 800;
          local_54 = 600;
          goto LAB_00016920;
        }
      }
      else {
LAB_00016920:
        local_48[0] = *(char *)(iVar12 + 4);
      }
      puVar2 = (undefined *)rtscam_soc_get_vs_format_desc(param_1,local_48);
      if (puVar2 == (undefined *)0x0) {
        for (puVar9 = (undefined4 *)&DAT_00019d84; puVar9 != &DAT_00019e08; puVar9 = puVar9 + 0xb) {
          if ((*(byte *)((int)puVar9 + 0x2a) & local_45) != 0) {
            puVar2 = (undefined *)rtscam_register_format(iVar12,puVar9);
            if (puVar2 != (undefined *)0x0) goto LAB_00016a6c;
            local_50 = (uint)local_44;
            local_4c = (uint)local_42;
            puVar2 = (undefined *)
                     rtscam_register_frame_stepwise(iVar12,puVar9[9],&local_50,&local_58,local_98);
            if ((puVar2 != (undefined *)0x0) ||
               (puVar2 = (undefined *)rtscam_register_frmival_discrete(iVar12,puVar9[9],&local_50),
               puVar2 != (undefined *)0x0)) goto LAB_00016a6c;
          }
        }
        local_3c = (undefined *)0x0;
      }
      else {
        if ((_rtscam_debug & 1) != 0) {
          local_30 = puVar2;
          printk(&_LC140,*(undefined1 *)(iVar12 + 4));
          puVar2 = local_30;
        }
LAB_00016a6c:
        local_30 = puVar2;
        rtscam_clr_format(iVar12);
        local_3c = local_30;
      }
      iVar12 = iVar12 + 0x1c0;
      if (local_3c != (undefined *)0x0) {
        if ((_rtscam_debug & 1) != 0) {
          printk(&_LC141,iVar4);
        }
        iVar12 = iVar10;
        for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)((int)param_1 + 0x46); iVar4 = iVar4 + 1) {
          rtscam_clr_format(iVar12);
          iVar12 = iVar12 + 0x1c0;
        }
        kfree(iVar10);
        rtscam_release_sensor_fps(puVar8);
        puVar2 = local_3c;
        goto LAB_00016e04;
      }
    }
    param_1[0x5f] = (uint)*(byte *)((int)param_1 + 0x46);
    param_1[0x61] = &PTR___this_module_000192dc;
    param_1[0x62] = "rts_soc_camera";
    param_1[0x65] = 1;
    param_1[0x5c] = *param_1;
    param_1[100] = 0x33;
    param_1[0x60] = iVar10;
    param_1[0x5d] = param_1[0xe];
    param_1[0x72] = 1;
    param_1[99] = param_1 + 0xce;
    param_1[0x5e] = param_1[0xf];
    param_1[0x71] = param_1;
    memcpy(local_98,&DAT_00018dd0,0x40);
    puVar2 = (undefined *)0x4;
    uVar3 = 0;
    while (uVar3 < (uint)param_1[0x5f]) {
      iVar10 = param_1[0x60] + uVar3 * 0x1c0;
      puVar6 = (undefined *)(uint)*(byte *)(iVar10 + 4);
      if (*(char *)(iVar10 + 0x184) == '\x04') {
        puVar6 = puVar2;
      }
      local_38 = puVar2;
      FUN_000110e0(local_40,local_98[(int)puVar6 * 4 + 1] * 0x80000 + local_98[(int)puVar6 * 4] * 8,
                   (int)puVar6 * 8 + 0x26c);
      FUN_000110e0(local_40,local_98[(int)puVar6 * 4 + 3] * 0x80000 +
                            local_98[(int)puVar6 * 4 + 2] * 8,(int)puVar6 * 8 + 0x270);
      puVar2 = local_38;
      uVar3 = uVar3 + 1;
    }
    FUN_000110e0(local_40,*(int *)(param_1[0xcb] + 0x28) * 0x80000 +
                          *(int *)(param_1[0xcb] + 0x24) * 8,0x290);
    puVar2 = (undefined *)rtscam_video_register_device(param_1 + 0x45);
    if (puVar2 == (undefined *)0x0) {
      if (param_1[0xca] == 0) goto LAB_00016ce8;
      puVar2 = (undefined *)rtscam_soc_get_snr_fmt(param_1,local_98);
      if (puVar2 == (undefined *)0x0) {
        puVar2 = (undefined *)rtscam_soc_get_td_buf(param_1,local_98);
        if (puVar2 == (undefined *)0x0) {
          puVar2 = (undefined *)FUN_000123ac(param_1,local_98);
          if (puVar2 == (undefined *)0x0) goto LAB_00016ce8;
          FUN_000124b4(param_1 + 0xd5,param_1 + 0xaf);
          goto LAB_00016cc4;
        }
      }
      else {
        if ((_rtscam_debug & 1) != 0) {
          printk(&_LC116,"rtscam_soc_get_buf_pre");
        }
LAB_00016cc4:
        if (puVar2 == (undefined *)0x0) {
LAB_00016ce8:
          device_create_file(*param_1,dev_attr_fwinfo);
          device_create_file(*param_1,&PTR_s_timeout_0001923c);
          device_create_file(*param_1,dev_attr_apiversion);
          device_create_file(*param_1,dev_attr_streaminfo);
          device_create_file(*param_1,dev_attr_meminfo);
          device_create_file(*param_1,dev_attr_delay);
          device_create_file(*param_1,dev_attr_gpio);
          device_create_file(*param_1,dev_attr_num_buffers);
          device_create_file(*param_1,dev_attr_drop_frames);
          device_create_file(*param_1,dev_attr_fps);
          device_create_file(*param_1,dev_attr_sensorfps_max);
          device_create_file(*param_1,dev_attr_buf_prealloc);
          device_create_file(*param_1,dev_attr_hz);
          param_1[4] = 1;
          if ((_rtscam_debug & 0x100) == 0) {
            return (undefined *)0x0;
          }
          printk(&_LC146,param_1 + 0xce);
          return (undefined *)0x0;
        }
      }
      if ((_rtscam_debug & 1) != 0) {
        puVar6 = &_LC145;
        goto LAB_000166ac;
      }
    }
    else if ((_rtscam_debug & 1) != 0) {
      puVar6 = &_LC144;
LAB_000166ac:
      printk(puVar6);
    }
    FUN_0001250c(param_1);
  }
  else {
    if ((_rtscam_debug & 1) != 0) {
      puVar6 = &_LC128;
      goto LAB_000165d4;
    }
LAB_00016614:
    FUN_0001250c(param_1);
    if ((_rtscam_debug & 1) != 0) {
      printk(&_LC143);
    }
  }
  FUN_00011ce0(param_1,0);
LAB_000166e0:
  *piVar7 = *piVar7 + -1;
  return puVar2;
LAB_00016420:
  *(uint *)(iVar12 + 0x21) = uVar3;
  for (uVar3 = 0; (int)uVar3 < (int)((uint)*(byte *)(iVar12 + -1) << 3); uVar3 = uVar3 + 1) {
    iVar5 = rts_test_bit(iVar12,uVar3);
    if (iVar5 != 0) {
      *(char *)(iVar4 + 0x1c) = (char)uVar3;
      cVar1 = *(char *)(iVar12 + -2);
      *(char *)(iVar4 + 8) = cVar1;
      for (puVar2 = &DAT_00019b2c; puVar2 != (undefined *)0x19d3c; puVar2 = puVar2 + 0x10) {
        if ((puVar2[9] == cVar1) && ((uint)(byte)puVar2[8] == (uVar3 & 0xff))) {
          rtscam_ctrl_add_info(iVar4);
          uVar11 = *(uint *)(iVar4 + 0x1c);
          goto LAB_000164b0;
        }
      }
      uVar11 = *(uint *)(iVar4 + 0x1c);
LAB_000164b0:
      if ((uVar11 & 0x1000) != 0) {
        puVar2 = &DAT_00019b2c;
        iVar5 = 0x20000;
        for (puVar6 = &DAT_00019304; puVar6 != puVar2; puVar6 = puVar6 + 0x48) {
          if ((*(char *)(iVar4 + 8) == puVar6[0x2c]) && (*(char *)(iVar4 + 0x16) == puVar6[0x2d])) {
            local_38 = puVar2;
            local_34 = iVar5;
            local_30 = puVar6;
            (*(code *)(iVar5 + -0x5f6c))(iVar4,puVar6);
            puVar2 = local_38;
            iVar5 = local_34;
            puVar6 = local_30;
          }
        }
      }
      iVar4 = iVar4 + 0x24;
    }
  }
  iVar12 = iVar12 + 0x2c;
  goto LAB_000163b0;
}



// ==== rtscam_soc_detach @ 00016e50 size=460

/* WARNING: Removing unreachable block (ram,0x00016ea8) */

undefined4 rtscam_soc_detach(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
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



// ==== rtscam_soc_remove @ 000178e0 size=276

undefined4 rtscam_soc_remove(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = dev_get_drvdata(param_1 + 0x10);
  puVar2 = *(undefined4 **)(iVar1 + 0xb0);
  DAT_00019f38 = 0;
  iVar1 = puVar2[0xa4];
  if (iVar1 != 0) {
    put_device(*(undefined4 *)(iVar1 + 0xfc));
    rtscam_ge_unregister_device(iVar1);
  }
  iVar1 = puVar2[0xa3];
  puVar2[0xa4] = 0;
  if (iVar1 != 0) {
    put_device(*(undefined4 *)(iVar1 + 0xfc));
    rtscam_ge_unregister_device(iVar1);
  }
  puVar2[0xa3] = 0;
  rtscam_soc_detach(puVar2);
  FUN_000124b4(puVar2 + 0xd5,puVar2 + 0x8e);
  rts_dma_contig_cleanup_ctx(puVar2[0xe]);
  device_remove_file(*puVar2,&PTR_s_sensor_000192cc);
  device_remove_file(*puVar2,&PTR_s_loadfw_0001922c);
  rts_put_mem_info(puVar2[0xd5]);
  put_device(*puVar2);
  *puVar2 = 0;
  return 0;
}



