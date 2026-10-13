/* rtsx-icr — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rtsx-icr.h"

// ==== dump_reg_range @ 0001125c size=364

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dump_reg_range(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = kmem_cache_alloc(_DAT_0001610c,0x80d0);
  uVar6 = (param_3 - param_2) + 1U & 0xffff;
  if (iVar1 != 0) {
    for (iVar3 = 0; uVar2 = param_2 + iVar3 & 0xffff, iVar3 < (int)uVar6; iVar3 = iVar3 + 8) {
      iVar4 = uVar6 - iVar3;
      iVar5 = 0;
      if (8 < iVar4) {
        iVar4 = 8;
      }
      for (; iVar5 < iVar4; iVar5 = iVar5 + 1) {
        rtsx_icr_reg_read(param_1,uVar2 + iVar5 & 0xffff,iVar1 + iVar5);
      }
      if (DAT_00015ab4 != '\0') {
        dev_err(*param_1,"%s error: 0x%04X(%d): %8ph\n","dump_reg_range",uVar2,iVar4,iVar1);
      }
    }
    kfree(iVar1);
    return;
  }
  return;
}



// ==== sdmmc_request @ 0001426c size=1512

void sdmmc_request(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  int unaff_gp;
  int local_40;
  
  puVar8 = *(uint **)(param_2 + 4);
  iVar6 = *(int *)(param_2 + 8);
  iVar1 = FUN_00010030();
  if (iVar1 == 0) {
    puVar8[8] = 0xffffff61;
  }
  else {
    if (iVar6 == 0) {
      local_40 = 0;
    }
    else {
      local_40 = *(int *)(iVar6 + 8) * *(int *)(iVar6 + 0xc);
    }
    iVar1 = param_1 + 0x200;
    mutex_lock(param_1 + 0x2b8);
    FUN_00010b54(iVar1);
    *(int *)(param_1 + 0x2e8) = param_2;
    if (iVar6 == 0) {
      uVar12 = rtsx_icr_check_resp(iVar1,puVar8);
      puVar8[8] = uVar12;
    }
    else if (local_40 < 0x200) {
      cVar11 = '\0';
      if (*(char *)(param_1 + 0x2d5) != '\0') {
        uVar5 = FUN_00013e78(iVar1,param_2);
        *(undefined4 *)(iVar6 + 0x10) = uVar5;
        cVar11 = *(char *)(param_1 + 0x2d5);
      }
      if ((cVar11 == '\0') || (*(int *)(iVar6 + 0x10) != 0)) {
        cVar11 = *(char *)(param_1 + 0x2ed);
        iVar7 = *(int *)(param_2 + 8);
        uVar5 = *(undefined4 *)(param_1 + 0x2f0);
        puVar9 = *(uint **)(param_2 + 4);
        iVar2 = __kmalloc(*(undefined4 *)(iVar7 + 8),0x8010);
        if (iVar2 == 0) {
          iVar3 = -0xc;
        }
        else {
          if (cVar11 != '\0') {
            rtsx_icr_set_clock(iVar1,25000000);
          }
          if ((*(uint *)(iVar7 + 0x14) & 0x200) == 0) {
            sg_copy_to_buffer(*(undefined4 *)(iVar7 + 0x28),*(undefined4 *)(iVar7 + 0x24),iVar2,
                              *(undefined4 *)(iVar7 + 8));
            uVar12 = *(uint *)(iVar7 + 8);
            iVar3 = rtsx_icr_check_resp(iVar1,puVar9);
            if ((iVar3 == 0) && (iVar3 = rtsx_icr_pp_write(iVar1,iVar2,uVar12), iVar3 == 0)) {
              uVar4 = arch_local_irq_save();
              *(undefined4 *)(param_1 + 0x2b4) = uVar4;
              *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
              *(undefined4 *)(param_1 + 0x21c) = 0;
              if (puVar9 != (uint *)0x0) {
                __rtsx_icr_add_cmd(iVar1,1,0xff09,0xff,*puVar9 & 0xff | 0x40);
                uVar10 = puVar9[1];
                __rtsx_icr_add_cmd(iVar1,1,0xff0a,0xff,uVar10 >> 0x18);
                __rtsx_icr_add_cmd(iVar1,1,0xff0b,0xff,uVar10 >> 0x10 & 0xff);
                __rtsx_icr_add_cmd(iVar1,1,0xff0c,0xff,uVar10 >> 8 & 0xff);
                __rtsx_icr_add_cmd(iVar1,1,0xff0d,0xff,uVar10 & 0xff);
              }
              if ((uVar12 & 0xffff) != 0) {
                __rtsx_icr_add_cmd(iVar1,1,0xff11,0xff,1);
                __rtsx_icr_add_cmd(iVar1,1,0xff12,0xff,0);
                __rtsx_icr_add_cmd(iVar1,1,0xff0f,0xff,uVar12 & 0xff);
                __rtsx_icr_add_cmd(iVar1,1,0xff10,0xff,(uVar12 & 0xffff) >> 8);
              }
              __rtsx_icr_add_cmd(iVar1,1,0xff01,0xff,0x84);
              __rtsx_icr_add_cmd(iVar1,1,0xff13,0xff,0x81);
              __rtsx_icr_add_cmd(iVar1,2,0xff13,0x40,0x40);
              uVar4 = *(undefined4 *)(param_1 + 0x304);
              rtsx_icr_send_cmd(iVar1);
              iVar3 = rtsx_icr_wait_cmd(iVar1,uVar4);
            }
          }
          else {
            iVar3 = FUN_00012338(iVar1,puVar9,iVar2);
            sg_copy_from_buffer(*(undefined4 *)(iVar7 + 0x28),*(undefined4 *)(iVar7 + 0x24),iVar2,
                                *(undefined4 *)(iVar7 + 8));
          }
          if (cVar11 != '\0') {
            rtsx_icr_set_clock(iVar1,uVar5);
          }
          kfree(iVar2);
        }
        *(int *)(iVar6 + 0x10) = iVar3;
        if ((*(char *)(param_1 + 0x2d5) != '\0') && (iVar3 == 0)) {
          *(undefined1 *)(param_1 + 0x2d5) = 0;
          dev_err(*(undefined4 *)(param_1 + 0x200),"%s error: disable short dma mode\n",
                  "sdmmc_request");
        }
      }
    }
    else {
      uVar5 = FUN_00013e78(iVar1,param_2);
      *(undefined4 *)(iVar6 + 0x10) = uVar5;
    }
    if ((*puVar8 == 0x19 || *puVar8 == 0x12) && (*(int *)(param_2 + 0xc) != 0)) {
      uVar12 = rtsx_icr_check_resp(iVar1);
      puVar8[8] = uVar12;
    }
    if (((iVar6 != 0) && (puVar8[8] == 0)) && (*(int *)(iVar6 + 0x10) == 0)) {
      *(int *)(iVar6 + 0x18) = local_40;
    }
    *(undefined4 *)(param_1 + 0x2e8) = 0;
    mutex_unlock(param_1 + 0x2b8);
  }
  if ((*(char *)(param_1 + 0x310) != '\0') && (*puVar8 == (uint)*(byte *)(param_1 + 0x311))) {
    if (*(char *)(param_1 + 0x312) == '\0') {
      __gpio_set_value(*(char *)(param_1 + 0x310),0);
      __gpio_set_value(*(undefined1 *)(param_1 + 0x310),1);
      uVar12 = puVar8[8];
      goto LAB_000147a8;
    }
    *(char *)(param_1 + 0x312) = *(char *)(param_1 + 0x312) + -1;
  }
  uVar12 = puVar8[8];
LAB_000147a8:
  if (((uVar12 != 0) || ((iVar6 != 0 && (*(int *)(iVar6 + 0x10) != 0)))) && (DAT_00015ab4 != '\0'))
  {
    if (iVar6 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(iVar6 + 0x10);
    }
    dev_err(*(undefined4 *)(param_1 + 0x200),"%s error: CMD %d 0x%08x (%d, %d)\n","sdmmc_request",
            *puVar8,puVar8[1],uVar12,uVar5);
  }
  mmc_request_done(param_1,param_2);
  return;
}



// ==== init_module @ 000150a0 size=24

void init_module(void)

{
  platform_driver_register(&PTR_FUN_000159d0);
  return;
}



// ==== cleanup_module @ 000150b8 size=24

void cleanup_module(void)

{
  platform_driver_unregister(&PTR_FUN_000159d0);
  return;
}



