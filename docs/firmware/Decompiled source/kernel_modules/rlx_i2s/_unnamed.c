/* rlx_i2s — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rlx_i2s.h"

// ==== FUN_0001016c @ 0001016c size=268

void FUN_0001016c(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = 3;
  uVar4 = *param_1;
  if (*(char *)(param_1 + 0x14) != '\x03') {
    iVar3 = 2;
  }
  if (param_1[1] != 0) {
    __iounmap();
    param_1[1] = 0;
  }
  if (param_1[2] != 0) {
    __iounmap();
    param_1[2] = 0;
  }
  if (param_1[3] != 0) {
    __iounmap();
    param_1[3] = 0;
  }
  iVar2 = 0;
  do {
    piVar1 = (int *)platform_get_resource(uVar4,0x200,iVar2);
    if (piVar1 != (int *)0x0) {
      __release_region(&iomem_resource,*piVar1,(piVar1[1] + 1) - *piVar1);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < iVar3);
  return;
}



// ==== FUN_00010278 @ 00010278 size=192

undefined4 FUN_00010278(int param_1)

{
  int iVar1;
  
  param_1 = param_1 + 0x10;
  iVar1 = dev_get_drvdata(param_1);
  if (*(int *)(iVar1 + 0x10) != 0) {
    clk_put();
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  if (*(int *)(iVar1 + 0x14) != 0) {
    clk_put();
    *(undefined4 *)(iVar1 + 0x14) = 0;
  }
  FUN_0001016c(iVar1);
  snd_soc_unregister_component(param_1);
  devm_kfree(param_1,iVar1);
  dev_set_drvdata(param_1,0);
  return 0;
}



// ==== FUN_00010338 @ 00010338 size=608

undefined4 FUN_00010338(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  
  iVar1 = dev_get_drvdata(*(undefined4 *)(param_1 + 8));
  iVar4 = *(int *)(iVar1 + 4);
  uVar5 = *(uint *)(iVar4 + 4);
  if (param_2 == 1) {
    if (param_3 == 8) {
      iVar1 = 5;
    }
    else if (param_3 < 9) {
      if (param_3 == 3) {
        iVar1 = 2;
      }
      else if (param_3 < 4) {
        iVar2 = 2;
        if (param_3 == 1) {
          iVar1 = 0;
        }
        else {
          iVar1 = 1;
LAB_0001041c:
          param_2 = param_3;
          if (param_3 != iVar2) goto LAB_00010540;
        }
      }
      else {
        iVar2 = 6;
        if (param_3 != 4) {
          iVar1 = 4;
          goto LAB_0001041c;
        }
        iVar1 = 3;
      }
    }
    else if (param_3 == 0x20) {
      iVar1 = 8;
    }
    else if (param_3 < 0x21) {
      iVar2 = 0x10;
      if (param_3 != 0xc) {
        iVar1 = 7;
        goto LAB_0001041c;
      }
      iVar1 = 6;
    }
    else {
      iVar2 = 0x80;
      if (param_3 != 0x40) {
        iVar1 = 10;
        goto LAB_0001041c;
      }
      iVar1 = 9;
    }
    *(uint *)(iVar4 + 4) = iVar1 << 0x18 | uVar5 & 0xf0ffffff;
    uVar3 = 0;
  }
  else {
    if (param_2 == 2) {
      if (*(char *)(iVar1 + 0x50) != '\x03') {
        param_3 = param_3 / 2;
      }
      iVar1 = 5;
      if (param_3 == 8) {
LAB_00010550:
        *(uint *)(iVar4 + 4) = iVar1 << 0x18 | uVar5 & 0xf0ffffff;
        return 0;
      }
      if (param_3 < 9) {
        iVar1 = 2;
        if (param_3 == 3) goto LAB_00010550;
        iVar1 = 4;
        if (param_3 < 4) {
          iVar1 = 1;
          iVar2 = 2;
          if (param_3 == 1) {
            iVar1 = 0;
            goto LAB_00010550;
          }
        }
        else {
          iVar2 = 6;
          if (param_3 == 4) {
            iVar1 = 3;
            goto LAB_00010550;
          }
        }
      }
      else {
        iVar1 = 8;
        if (param_3 == 0x20) goto LAB_00010550;
        if (param_3 < 0x21) {
          if (param_3 == 0xc) {
            iVar1 = 6;
            goto LAB_00010550;
          }
          iVar1 = 7;
          iVar2 = 0x10;
        }
        else {
          iVar1 = 9;
          if (param_3 == 0x40) goto LAB_00010550;
          iVar1 = 10;
          iVar2 = 0x80;
        }
      }
      param_2 = param_3;
      if (param_3 == iVar2) goto LAB_00010550;
LAB_00010540:
      puVar6 = &_LC0;
    }
    else {
      if (param_2 == 0) {
        *(uint *)(iVar4 + 4) = param_3 << 0x10 | uVar5 & 0xff00ffff;
        return 0;
      }
      puVar6 = &_LC1;
    }
    printk(puVar6,param_2);
    uVar3 = 0xffffffea;
  }
  return uVar3;
}



// ==== FUN_00010598 @ 00010598 size=416

undefined4 FUN_00010598(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = dev_get_drvdata(*(undefined4 *)(param_3 + 8));
  uVar3 = *(uint *)(param_2 + 0x128);
  uVar4 = *(uint *)(*(int *)(iVar2 + 4) + 4);
  uVar5 = 2;
  if (uVar3 != 32000) {
    if (uVar3 < 0x7d01) {
      uVar5 = 3;
      if (uVar3 != 12000) {
        if (uVar3 < 0x2ee1) {
          if (uVar3 == 8000) {
            uVar5 = 0;
          }
          else {
            uVar5 = 8;
            if (uVar3 != 0x2b11) {
LAB_000106cc:
              printk(&_LC2,uVar3);
              return 0xffffffea;
            }
          }
        }
        else {
          uVar5 = 9;
          if ((uVar3 != 0x5622) && (uVar5 = 4, uVar3 != 24000)) {
            if (uVar3 != 16000) goto LAB_000106cc;
            uVar5 = 1;
          }
        }
      }
    }
    else {
      uVar5 = 0xb;
      if (uVar3 != 0x15888) {
        if (uVar3 < 0x15889) {
          uVar5 = 10;
          if (uVar3 == 0xac44) {
            cVar1 = *(char *)(iVar2 + 0x50);
            uVar3 = 3;
          }
          else {
            uVar5 = 5;
            if (uVar3 != 48000) goto LAB_000106cc;
            cVar1 = *(char *)(iVar2 + 0x50);
            uVar3 = 4;
          }
          if (cVar1 != '\x03') {
            uVar5 = uVar3;
          }
        }
        else if (uVar3 == 0x2b110) {
          uVar5 = 0xc;
        }
        else if (uVar3 == 0x2ee00) {
          uVar5 = 7;
        }
        else {
          if (uVar3 != 96000) goto LAB_000106cc;
          uVar5 = 6;
        }
      }
    }
  }
  if (*(char *)(iVar2 + 0x50) == '\x03') {
    uVar5 = uVar5 << 0x1c;
    uVar4 = uVar4 & 0xfffffff;
  }
  else {
    uVar4 = uVar4 & 0xfffffff8;
  }
  *(uint *)(*(int *)(iVar2 + 4) + 4) = uVar5 | uVar4;
  *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(param_2 + 0x11c);
  return 0;
}



// ==== FUN_00010738 @ 00010738 size=116

undefined4 FUN_00010738(int param_1)

{
  int iVar1;
  
  mutex_lock(param_1 + 0x40);
  iVar1 = *(int *)(param_1 + 0x3c) + -1;
  *(int *)(param_1 + 0x3c) = iVar1;
  if (iVar1 == 0) {
    **(uint **)(param_1 + 8) = **(uint **)(param_1 + 8) & 0xfffffffe;
  }
  mutex_unlock(param_1 + 0x40);
  return 0;
}



// ==== FUN_000107ac @ 000107ac size=48

undefined4 FUN_000107ac(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = dev_get_drvdata(*(undefined4 *)(param_2 + 8));
  mutex_lock(iVar1 + 0x40);
  iVar2 = *(int *)(iVar1 + 0x3c) + -1;
  *(int *)(iVar1 + 0x3c) = iVar2;
  if (iVar2 == 0) {
    **(uint **)(iVar1 + 8) = **(uint **)(iVar1 + 8) & 0xfffffffe;
  }
  mutex_unlock(iVar1 + 0x40);
  return 0;
}



// ==== FUN_00010824 @ 00010824 size=120

undefined4 FUN_00010824(int param_1)

{
  int iVar1;
  
  mutex_lock(param_1 + 0x40);
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    **(uint **)(param_1 + 8) = **(uint **)(param_1 + 8) | 1;
    iVar1 = *(int *)(param_1 + 0x3c);
  }
  *(int *)(param_1 + 0x3c) = iVar1 + 1;
  mutex_unlock(param_1 + 0x40);
  return 0;
}



// ==== FUN_0001089c @ 0001089c size=56

undefined4 FUN_0001089c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = dev_get_drvdata(*(undefined4 *)(param_2 + 8));
  FUN_00010824(uVar1);
  return 0;
}



// ==== FUN_000108d4 @ 000108d4 size=76

undefined4 FUN_000108d4(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = dev_get_drvdata(*(undefined4 *)(param_2 + 8));
  if ((*(uint *)(iVar1 + 0x50) & 0xfd) == 1) {
    FUN_00010824(iVar1);
  }
  return 0;
}



// ==== FUN_00010920 @ 00010920 size=48

undefined4 FUN_00010920(undefined4 param_1)

{
  snd_soc_add_dai_controls(param_1,&DAT_00011774,2);
  return 0;
}



// ==== FUN_00010950 @ 00010950 size=232

undefined4 FUN_00010950(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  mutex_lock(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x2c);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x14);
    if (((iVar3 != 0) && (iVar1 = clk_prepare(iVar3), iVar1 == 0)) &&
       (iVar1 = clk_enable(iVar3), iVar1 != 0)) {
      clk_unprepare(iVar3);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    iVar3 = clk_prepare(uVar2);
    if ((iVar3 == 0) && (iVar3 = clk_enable(uVar2), iVar3 != 0)) {
      clk_unprepare(uVar2);
    }
    iVar3 = *(int *)(param_1 + 0x2c);
  }
  *(int *)(param_1 + 0x2c) = iVar3 + 1;
  mutex_unlock(param_1 + 0x30);
  return 0;
}



// ==== FUN_00010a38 @ 00010a38 size=140

undefined4 FUN_00010a38(int param_1)

{
  int iVar1;
  
  mutex_lock(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x2c) + -1;
  *(int *)(param_1 + 0x2c) = iVar1;
  if ((iVar1 == 0) && (clk_disable(*(undefined4 *)(param_1 + 0x10)), *(int *)(param_1 + 0x14) != 0))
  {
    clk_disable();
  }
  mutex_unlock(param_1 + 0x30);
  return 0;
}



// ==== FUN_00010ac4 @ 00010ac4 size=224

undefined4 FUN_00010ac4(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  code *pcVar3;
  
  uVar1 = dev_get_drvdata(*(undefined4 *)(param_3 + 8));
  if (*(int *)(param_1 + 0x30) == 0) {
    if (param_2 < 7) {
      uVar2 = 1 << (param_2 & 0x1f);
      if ((uVar2 & 0x29) == 0) {
        if ((uVar2 & 0x52) == 0) {
          return 0xffffffea;
        }
        pcVar3 = FUN_00010950;
      }
      else {
        pcVar3 = FUN_00010a38;
      }
      (*pcVar3)();
      return 0;
    }
  }
  else if ((*(int *)(param_1 + 0x30) == 1) && (uVar2 = 1 << (param_2 & 0x1f), param_2 < 7)) {
    if ((uVar2 & 0x29) == 0) {
      if ((uVar2 & 0x52) == 0) {
        return 0xffffffea;
      }
      pcVar3 = FUN_00010950;
    }
    else {
      pcVar3 = FUN_00010a38;
    }
    (*pcVar3)(uVar1);
    return 0;
  }
  return 0xffffffea;
}



// ==== FUN_00010ba4 @ 00010ba4 size=324

undefined4 FUN_00010ba4(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  iVar1 = dev_get_drvdata(*(undefined4 *)(param_3 + 8));
  puVar4 = *(uint **)(iVar1 + 4);
  uVar3 = *puVar4;
  if (*(int *)(param_1 + 0x30) == 0) {
    if (param_2 < 7) {
      uVar2 = 1 << (param_2 & 0x1f);
      if ((uVar2 & 0x29) != 0) {
        *puVar4 = uVar3 & 0xfffffffd;
        FUN_00010a38(iVar1);
        return 0;
      }
      if ((uVar2 & 0x52) != 0) {
        FUN_00010950(iVar1);
        **(uint **)(iVar1 + 4) = uVar3 | 2;
        return 0;
      }
    }
  }
  else if ((*(int *)(param_1 + 0x30) == 1) && (uVar2 = 1 << (param_2 & 0x1f), param_2 < 7)) {
    if ((uVar2 & 0x29) != 0) {
      *puVar4 = uVar3 & 0xfffffffe;
      FUN_00010a38(iVar1);
      return 0;
    }
    if ((uVar2 & 0x52) != 0) {
      FUN_00010950(iVar1);
      **(uint **)(iVar1 + 4) = uVar3 | 1;
      return 0;
    }
  }
  return 0xffffffea;
}



// ==== FUN_00010ce8 @ 00010ce8 size=1128

int FUN_00010ce8(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_38 [4];
  
  iVar7 = *(int *)(param_1 + 0xd0);
  if (iVar7 == 0) {
    printk(&_LC3);
    return -0x16;
  }
  iVar8 = param_1 + 0x10;
  piVar1 = (int *)devm_kzalloc(iVar8,0x54,0xd0);
  if (piVar1 == (int *)0x0) {
    printk(&_LC4);
    return -0xc;
  }
  *piVar1 = param_1;
  iVar9 = 3;
  uVar10 = *(uint *)(iVar7 + 0x14);
  iVar7 = 0;
  piVar1[0x14] = uVar10;
  if ((uVar10 & 0xff) != 3) {
    iVar9 = 2;
  }
  do {
    piVar2 = (int *)platform_get_resource(param_1,0x200,iVar7);
    if (piVar2 == (int *)0x0) {
      puVar5 = &_LC5;
LAB_00010e5c:
      iVar9 = -6;
      printk(puVar5,iVar7);
      goto LAB_00010e90;
    }
    iVar3 = __request_region(&iomem_resource,*piVar2,(piVar2[1] + 1) - *piVar2,"dai-platform",0);
    if (iVar3 == 0) {
      printk(&_LC7);
      iVar9 = -0x10;
      goto LAB_00010e90;
    }
    iVar3 = __ioremap(*piVar2,(piVar2[1] + 1) - *piVar2,0x800);
    local_38[iVar7] = iVar3;
    if (iVar3 == 0) {
      puVar5 = &_LC8;
      goto LAB_00010e5c;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < iVar9);
  iVar9 = 0;
LAB_00010e90:
  piVar1[1] = local_38[0];
  piVar1[2] = local_38[1];
  if ((char)piVar1[0x14] == '\x03') {
    piVar1[3] = local_38[2];
  }
  else {
    piVar1[3] = 0;
  }
  if (iVar9 != 0) {
    FUN_0001016c(piVar1);
    goto LAB_000110fc;
  }
  uVar10 = clk_get(0,"i2s_ck");
  piVar1[4] = uVar10;
  if (0xfffff000 < uVar10) {
    printk(&_LC10);
    iVar9 = -2;
    goto LAB_000110fc;
  }
  if ((piVar1[0x14] & 0x10000U) == 0) {
    if ((piVar1[0x14] & 0xffU) == 3) {
      piVar1[5] = 0;
      goto LAB_00010fb4;
    }
    uVar10 = clk_get(0,"sys_pll3_f");
    piVar1[5] = uVar10;
    if (uVar10 < 0xfffff001) {
      uVar10 = piVar1[4];
      uVar4 = clk_get(0,"sys_pll3_f");
      goto LAB_00010fa4;
    }
    printk(&_LC13);
    iVar9 = -2;
    iVar7 = piVar1[5];
  }
  else {
    piVar1[5] = 0;
    uVar4 = clk_get(0,"usb_pll_7");
LAB_00010fa4:
    clk_set_parent(uVar10,uVar4);
LAB_00010fb4:
    piVar1[0xb] = 0;
    __mutex_init(piVar1 + 0xc,"&dai_data->clk_mutex",0x10000);
    piVar1[0xf] = 0;
    __mutex_init(piVar1 + 0x10,"&dai_data->ldoi2s_mutex",0x10000);
    if ((char)piVar1[0x14] == '\x01') {
      DAT_00011b20 = FUN_00010ba4;
      DAT_00011b14 = FUN_00010598;
LAB_00011058:
      ppuVar6 = &PTR_s_i2s_platform_000118c8;
    }
    else {
      DAT_00011b20 = FUN_00010ac4;
      if ((char)piVar1[0x14] != '\x03') goto LAB_00011058;
      ppuVar6 = &PTR_s_i2s_platform_000119d8;
    }
    iVar9 = snd_soc_register_component(iVar8,&PTR__LC6_00011770,ppuVar6,2);
    if (iVar9 == 0) {
      dev_set_drvdata(iVar8,piVar1);
      *(uint *)(piVar1[2] + 4) = *(uint *)(piVar1[2] + 4) | 0x700;
      return 0;
    }
    printk(&_LC16);
    iVar7 = piVar1[5];
  }
  if (iVar7 != 0) {
    clk_put();
    piVar1[5] = 0;
  }
  if (piVar1[4] != 0) {
    clk_put();
    piVar1[4] = 0;
  }
LAB_000110fc:
  FUN_0001016c(piVar1);
  devm_kfree(iVar8,piVar1);
  return iVar9;
}



// ==== FUN_00011150 @ 00011150 size=348

undefined4 FUN_00011150(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  uVar2 = clk_get(0,"sys_pll3_m");
  uVar3 = clk_get(0,"sys_pll3_n");
  uVar4 = clk_get(0,"sys_pll3_f");
  if (uVar2 < 0xfffff001) {
    if (uVar3 < 0xfffff001) {
      if (uVar4 < 0xfffff001) {
        uVar1 = ((uint)(param_1 << 4) / 5000000) * 25000000;
        clk_set_rate(uVar2,uVar1);
        clk_set_rate(uVar3,uVar1 / 5);
        clk_set_rate(uVar4,param_1 << 4);
        clk_put(uVar2);
        clk_put(uVar3);
        clk_put(uVar4);
        return 0;
      }
      puVar5 = &_LC21;
    }
    else {
      puVar5 = &_LC20;
    }
  }
  else {
    puVar5 = &_LC19;
  }
  printk(puVar5);
  return 0xffffffff;
}



// ==== FUN_000112ac @ 000112ac size=244

undefined4 FUN_000112ac(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = dev_get_drvdata(*(undefined4 *)(param_1 + 8));
  uVar2 = *(uint *)(*(int *)(iVar1 + 4) + 4);
  if (param_2 == 0) {
    uVar2 = uVar2 & 0xffff7fff;
  }
  else if ((param_2 < 0) || (uVar2 = uVar2 | 0x8000, 2 < param_2)) {
    printk(&_LC22,param_2);
    return 0xffffffea;
  }
  *(uint *)(*(int *)(iVar1 + 4) + 4) = uVar2;
  uVar2 = *(uint *)(iVar1 + 0x50) & 0xff;
  if ((uVar2 != 3) && (param_2 == 0)) {
    param_3 = param_3 >> 1;
  }
  if (((*(uint *)(iVar1 + 0x50) & 0x10000) == 0) && (uVar2 != 3)) {
    FUN_00011150(param_3);
  }
  clk_set_rate(*(undefined4 *)(iVar1 + 0x10),param_3);
  return 0;
}



// ==== FUN_000113a0 @ 000113a0 size=132

undefined4 FUN_000113a0(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = dev_get_drvdata(*(undefined4 *)(param_1 + 8));
  if ((*(uint *)(iVar1 + 0x50) & 0xff) != 3) {
    if ((*(uint *)(iVar1 + 0x50) & 0x10000) == 0) {
      FUN_00011150(param_3 >> 1);
    }
    clk_set_rate(*(undefined4 *)(iVar1 + 0x10),param_3 >> 1);
  }
  return 0;
}



