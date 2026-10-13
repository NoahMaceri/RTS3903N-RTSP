/* rlx_codec — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rlx_codec.h"

// ==== FUN_00010038 @ 00010038 size=432

undefined4 FUN_00010038(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = dev_get_drvdata(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x560) + 0xc));
  uVar2 = *(uint *)(param_2 + 0x128);
  uVar4 = *(uint *)(*(int *)(iVar1 + 4) + 0x28);
  iVar5 = 3;
  if (uVar2 != 32000) {
    if (uVar2 < 0x7d01) {
      iVar5 = 6;
      if (uVar2 != 12000) {
        if (uVar2 < 0x2ee1) {
          iVar5 = 7;
          if (uVar2 == 8000) goto LAB_00010148;
          uVar2 = uVar2 ^ 0x2b11;
          iVar3 = 0xe;
        }
        else {
          if (uVar2 == 0x5622) {
            iVar5 = 0xc;
            goto LAB_00010148;
          }
          iVar5 = 4;
          if (uVar2 == 24000) goto LAB_00010148;
          uVar2 = uVar2 ^ 16000;
          iVar3 = 5;
        }
        if (uVar2 == 0) {
          iVar5 = iVar3;
        }
      }
    }
    else {
      iVar5 = 9;
      if (uVar2 != 0x15888) {
        if (uVar2 < 0x15889) {
          iVar5 = 8;
          if ((uVar2 != 0xac44) && (uVar2 == 48000)) {
            iVar5 = 0;
          }
        }
        else if (uVar2 == 0x2b110) {
          iVar5 = 10;
        }
        else {
          iVar5 = 2;
          if ((uVar2 != 0x2ee00) && (uVar2 == 96000)) {
            iVar5 = 1;
          }
        }
      }
    }
  }
LAB_00010148:
  if (*(int *)(param_1 + 0x30) == 0) {
    if (*(char *)(iVar1 + 0xc) == '\x03') {
      uVar2 = iVar5 << 0x10;
      uVar4 = uVar4 & 0xfff0ffff;
    }
    else {
      uVar2 = iVar5 << 5;
      uVar4 = uVar4 & 0xfffffe1f;
    }
  }
  else {
    if (*(int *)(param_1 + 0x30) != 1) {
      return 0xffffffea;
    }
    if (*(char *)(iVar1 + 0xc) == '\x03') {
      uVar2 = iVar5 << 0x17;
      uVar4 = uVar4 & 0xf87fffff;
    }
    else {
      uVar2 = iVar5 << 0xb;
      uVar4 = uVar4 & 0xffff87ff;
    }
  }
  *(uint *)(*(int *)(iVar1 + 4) + 0x28) = uVar2 | uVar4;
  return 0;
}



// ==== FUN_000101e8 @ 000101e8 size=240

void FUN_000101e8(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = 2;
  uVar4 = *param_1;
  if (*(char *)(param_1 + 3) != '\x03') {
    iVar3 = 1;
  }
  if (param_1[1] != 0) {
    __iounmap();
    param_1[1] = 0;
  }
  if (param_1[2] != 0) {
    __iounmap();
    param_1[2] = 0;
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



// ==== FUN_000102d8 @ 000102d8 size=180

undefined4 FUN_000102d8(int param_1)

{
  int iVar1;
  
  param_1 = param_1 + 0x10;
  iVar1 = dev_get_drvdata(param_1);
  if ((*(char *)(iVar1 + 0xc) == '\x03') && (*(int *)(iVar1 + 0x10) != 0)) {
    clk_put();
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  FUN_000101e8(iVar1);
  snd_soc_unregister_codec(param_1);
  devm_kfree(param_1,iVar1);
  dev_set_drvdata(param_1,0);
  return 0;
}



// ==== FUN_0001038c @ 0001038c size=392

void FUN_0001038c(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x560);
  iVar1 = dev_get_drvdata(*(undefined4 *)(param_2 + 8));
  iVar3 = iVar3 + 0x98;
  if (*(char *)(iVar1 + 0xc) == '\x03') {
    mutex_lock(iVar1 + 0x18);
    iVar4 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar4;
    if (iVar4 == 0) {
      clk_disable(*(undefined4 *)(iVar1 + 0x10));
    }
    mutex_unlock(iVar1 + 0x18);
  }
  if (*(int *)(param_2 + 4) == 1) {
    if (*(int *)(param_1 + 0x30) == 0) {
      puVar2 = &_LC0;
    }
    else {
      if (*(int *)(param_1 + 0x30) != 1) goto LAB_000104ec;
      puVar2 = &_LC1;
    }
    snd_soc_dapm_disable_pin(iVar3,puVar2);
  }
  else if (*(int *)(param_2 + 4) == 0) {
    if (*(int *)(param_1 + 0x30) == 0) {
      if (*(char *)(iVar1 + 0xc) != '\x03') {
        snd_soc_dapm_disable_pin(iVar3,&_LC2);
      }
      puVar2 = &_LC3;
    }
    else {
      if (*(int *)(param_1 + 0x30) != 1) goto LAB_000104ec;
      snd_soc_dapm_disable_pin(iVar3,&_LC4);
      puVar2 = &_LC5;
    }
    snd_soc_dapm_disable_pin(iVar3,puVar2);
  }
LAB_000104ec:
  snd_soc_dapm_sync(iVar3);
  return;
}



// ==== FUN_00010708 @ 00010708 size=88

undefined4 FUN_00010708(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = dev_get_drvdata(*(undefined4 *)(param_1 + 8));
  if (*(char *)(iVar1 + 0xc) == '\x03') {
    clk_set_rate(*(undefined4 *)(iVar1 + 0x10),param_3);
  }
  return 0;
}



// ==== FUN_00010760 @ 00010760 size=240

undefined4 FUN_00010760(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = dev_get_drvdata(*(undefined4 *)(param_1 + 0xc));
  uVar2 = *(uint *)(iVar1 + 0xc) & 0xff;
  if (param_2 == 0) {
    if (uVar2 == 3) {
      uVar2 = snd_soc_read(param_1,0x2c);
      uVar3 = 0x2c;
      uVar4 = 0xfff1ffff;
    }
    else {
      uVar2 = snd_soc_read(param_1,0x30);
      uVar3 = 0x30;
      uVar4 = 0xffff0fff;
    }
    uVar2 = uVar2 & uVar4;
  }
  else if (uVar2 == 3) {
    uVar2 = snd_soc_read(param_1,0x2c);
    uVar3 = 0x2c;
    uVar2 = uVar2 | 0xe0000;
  }
  else {
    uVar2 = snd_soc_read(param_1,0x30);
    uVar3 = 0x30;
    uVar2 = uVar2 | 0xf000;
  }
  snd_soc_write(param_1,uVar3,uVar2);
  return 0;
}



// ==== FUN_00010850 @ 00010850 size=352

undefined4 FUN_00010850(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar4 = 9;
  iVar1 = dev_get_drvdata(*(undefined4 *)(iVar3 + 0xc));
  if (*(char *)(iVar1 + 0xc) != '\x03') {
    iVar4 = 0x10;
  }
  if (param_3 == 1) {
    uVar2 = snd_soc_read(iVar3,0x28);
    snd_soc_write(iVar3,0x28,uVar2 & ~(1 << iVar4));
    uVar2 = snd_soc_read(iVar3,0x28);
    snd_soc_write(iVar3,0x28,uVar2 | 1 << iVar4);
    if (*(char *)(iVar1 + 0xc) != '\x03') {
      uVar2 = snd_soc_read(iVar3,0x28);
      snd_soc_write(iVar3,0x28,uVar2 | 0x8000);
    }
  }
  else if (param_3 == 8) {
    if (*(char *)(iVar1 + 0xc) != '\x03') {
      uVar2 = snd_soc_read(iVar3,0x28);
      snd_soc_write(iVar3,0x28,uVar2 & 0xffff7fff);
    }
  }
  else {
    printk(&_LC6);
  }
  return 0;
}



// ==== FUN_000109b0 @ 000109b0 size=164

undefined4 FUN_000109b0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  if (param_3 == 1) {
    uVar1 = snd_soc_read(uVar2,4);
    snd_soc_write(uVar2,4,uVar1 & 0xffffffbf);
    uVar1 = snd_soc_read(uVar2,4);
    snd_soc_write(uVar2,4,uVar1 | 0x40);
  }
  else {
    printk(&_LC6);
  }
  return 0;
}



// ==== FUN_00010a54 @ 00010a54 size=80

undefined4 FUN_00010a54(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = snd_soc_read(param_1,0);
  snd_soc_write(param_1,0,uVar1 | 0x8000000);
  return 0;
}



// ==== FUN_00010aa4 @ 00010aa4 size=196

undefined4 FUN_00010aa4(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  if (param_3 == 1) {
    uVar1 = snd_soc_read(uVar2,0);
    snd_soc_write(uVar2,0,uVar1 & 0xfffffffc);
    uVar1 = snd_soc_read(uVar2,0);
    snd_soc_write(uVar2,0,uVar1 | 3);
  }
  else if (param_3 == 2) {
    FUN_00010a54(uVar2);
  }
  else {
    printk(&_LC6);
  }
  return 0;
}



// ==== FUN_00010b68 @ 00010b68 size=168

undefined4 FUN_00010b68(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  if (param_3 == 1) {
    uVar1 = snd_soc_read(uVar2,0x60);
    uVar1 = uVar1 | 3;
  }
  else {
    if (param_3 != 8) {
      printk(&_LC6);
      return 0;
    }
    uVar1 = snd_soc_read(uVar2,0x60);
    uVar1 = uVar1 & 0xfffffffc;
  }
  snd_soc_write(uVar2,0x60,uVar1);
  return 0;
}



// ==== FUN_00010c10 @ 00010c10 size=168

undefined4 FUN_00010c10(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  if (param_3 == 2) {
    uVar1 = snd_soc_read(uVar2,0xc);
    uVar1 = uVar1 & 0xfffff3ff;
  }
  else {
    if (param_3 != 4) {
      printk(&_LC6);
      return 0;
    }
    uVar1 = snd_soc_read(uVar2,0xc);
    uVar1 = uVar1 | 0xc00;
  }
  snd_soc_write(uVar2,0xc,uVar1);
  return 0;
}



// ==== FUN_00010cb8 @ 00010cb8 size=80

undefined4 FUN_00010cb8(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = snd_soc_read(param_1,8);
  snd_soc_write(param_1,8,uVar1 | 0x80000000);
  return 0;
}



// ==== FUN_00010d08 @ 00010d08 size=196

undefined4 FUN_00010d08(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  if (param_3 == 1) {
    uVar1 = snd_soc_read(uVar2,8);
    snd_soc_write(uVar2,8,uVar1 & 0xfffffffe);
    uVar1 = snd_soc_read(uVar2,8);
    snd_soc_write(uVar2,8,uVar1 | 1);
  }
  else if (param_3 == 2) {
    FUN_00010cb8(uVar2);
  }
  else {
    printk(&_LC6);
  }
  return 0;
}



// ==== FUN_00010dcc @ 00010dcc size=556

undefined4 FUN_00010dcc(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = dev_get_drvdata(*(undefined4 *)(param_1 + 0xc));
  if (param_2 == 0) {
    DAT_000158b0 = DAT_000158b0 + -1;
    if (param_3 == 0) {
      if (*(char *)(iVar1 + 0xc) == '\x03') {
        uVar2 = snd_soc_read();
        uVar4 = 0xf7ff0000;
      }
      else {
        uVar2 = snd_soc_read(param_1,0x30);
        uVar4 = 0xffdf0000;
      }
      snd_soc_write(param_1,0x30,uVar2 & (uVar4 | 0xffff));
    }
    if (DAT_000158b0 < 1) {
      if (*(char *)(iVar1 + 0xc) == '\x03') {
        uVar2 = snd_soc_read(param_1,0x2c);
        uVar3 = 0x2c;
        uVar4 = 0xfffe7fff;
      }
      else {
        uVar2 = snd_soc_read(param_1,0x30);
        uVar3 = 0x30;
        uVar4 = 0xfff9ffff;
      }
      snd_soc_write(param_1,uVar3,uVar2 & uVar4);
    }
  }
  else {
    if (DAT_000158b0 < 1) {
      if (*(char *)(iVar1 + 0xc) == '\x03') {
        uVar2 = snd_soc_read(param_1,0x2c);
        uVar3 = 0x2c;
        uVar4 = 0x18000;
      }
      else {
        uVar2 = snd_soc_read(param_1,0x30);
        uVar3 = 0x30;
        uVar4 = 0x60000;
      }
      snd_soc_write(param_1,uVar3,uVar2 | uVar4);
      msleep(300);
    }
    DAT_000158b0 = DAT_000158b0 + 1;
    if (param_3 == 0) {
      if (*(char *)(iVar1 + 0xc) == '\x03') {
        uVar2 = snd_soc_read();
        uVar4 = 0x8000000;
      }
      else {
        uVar2 = snd_soc_read(param_1,0x30);
        uVar4 = 0x200000;
      }
      snd_soc_write(param_1,0x30,uVar2 | uVar4);
      msleep(400);
    }
  }
  return 0;
}



// ==== FUN_00010ff8 @ 00010ff8 size=392

undefined4 FUN_00010ff8(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  if (param_3 == 4) {
    uVar1 = snd_soc_read(uVar2,0x2c);
    snd_soc_write(uVar2,0x2c,uVar1 & 0xfffffeff);
    uVar1 = snd_soc_read(uVar2,0x30);
    snd_soc_write(uVar2,0x30,uVar1 | 0xc0);
  }
  else if (param_3 == 8) {
    FUN_00010dcc(uVar2,0,0);
  }
  else if (param_3 == 2) {
    uVar1 = snd_soc_read(uVar2,0x30);
    snd_soc_write(uVar2,0x30,uVar1 & 0xffffff3f);
    uVar1 = snd_soc_read(uVar2,0x2c);
    snd_soc_write(uVar2,0x2c,uVar1 & 0xfffffeff);
    FUN_00010760(uVar2,1);
    FUN_00010dcc(uVar2,1,0);
    uVar1 = snd_soc_read(uVar2,0x2c);
    snd_soc_write(uVar2,0x2c,uVar1 | 0x100);
    FUN_00010760(uVar2,0);
  }
  else {
    printk(&_LC6);
  }
  return 0;
}



// ==== FUN_00011180 @ 00011180 size=392

undefined4 FUN_00011180(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  if (param_3 == 4) {
    uVar1 = snd_soc_read(uVar2,0x2c);
    snd_soc_write(uVar2,0x2c,uVar1 & 0xffffff7f);
    uVar1 = snd_soc_read(uVar2,0x30);
    snd_soc_write(uVar2,0x30,uVar1 | 0x30);
  }
  else if (param_3 == 8) {
    FUN_00010dcc(uVar2,0,0);
  }
  else if (param_3 == 2) {
    uVar1 = snd_soc_read(uVar2,0x30);
    snd_soc_write(uVar2,0x30,uVar1 & 0xffffffcf);
    uVar1 = snd_soc_read(uVar2,0x2c);
    snd_soc_write(uVar2,0x2c,uVar1 & 0xffffff7f);
    FUN_00010760(uVar2,1);
    FUN_00010dcc(uVar2,1,0);
    uVar1 = snd_soc_read(uVar2,0x2c);
    snd_soc_write(uVar2,0x2c,uVar1 | 0x80);
    FUN_00010760(uVar2,0);
  }
  else {
    printk(&_LC6);
  }
  return 0;
}



// ==== FUN_00011308 @ 00011308 size=412

undefined4 FUN_00011308(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0xc);
  iVar1 = dev_get_drvdata(*(undefined4 *)(iVar4 + 0xc));
  if (param_3 == 2) {
    uVar2 = snd_soc_read(iVar4,0xc);
    uVar3 = 0xc;
    uVar2 = uVar2 & 0xfffffffc;
  }
  else if (param_3 < 3) {
    if (param_3 != 1) {
LAB_00011478:
      printk(&_LC6);
      return 0;
    }
    FUN_00010dcc(iVar4,1,1);
    if (*(char *)(iVar1 + 0xc) != '\x03') {
      return 0;
    }
    uVar2 = snd_soc_read(iVar4,0x2c);
    uVar3 = 0x2c;
    uVar2 = uVar2 | 0xc;
  }
  else {
    if (param_3 != 4) {
      if (param_3 == 8) {
        if (*(char *)(iVar1 + 0xc) == '\x03') {
          uVar2 = snd_soc_read(iVar4,0x2c);
          snd_soc_write(iVar4,0x2c,uVar2 & 0xfffffff3);
        }
        FUN_00010dcc(iVar4,0,1);
        return 0;
      }
      goto LAB_00011478;
    }
    uVar2 = snd_soc_read(iVar4,0xc);
    uVar3 = 0xc;
    uVar2 = uVar2 | 3;
  }
  snd_soc_write(iVar4,uVar3,uVar2);
  return 0;
}



// ==== FUN_000114a4 @ 000114a4 size=532

undefined4 FUN_000114a4(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  if (param_3 == 4) {
    uVar1 = snd_soc_read(uVar2,0x34);
    snd_soc_write(uVar2,0x34,uVar1 & 0xffffffef);
    uVar1 = snd_soc_read(uVar2,0x34);
    snd_soc_write(uVar2,0x34,uVar1 | 0x600);
    uVar1 = snd_soc_read(uVar2,0x2c);
    uVar1 = uVar1 & 0xffffff9f;
  }
  else {
    if (param_3 == 8) {
      uVar1 = snd_soc_read(uVar2,0x2c);
      snd_soc_write(uVar2,0x2c,uVar1 & 0xffefffff);
      FUN_00010dcc(uVar2,0,0);
      return 0;
    }
    if (param_3 != 1) {
      printk(&_LC6);
      return 0;
    }
    uVar1 = snd_soc_read(uVar2,0x34);
    snd_soc_write(uVar2,0x34,uVar1 & 0xffffffef);
    uVar1 = snd_soc_read(uVar2,0x2c);
    snd_soc_write(uVar2,0x2c,uVar1 | 0x60);
    uVar1 = snd_soc_read(uVar2,0x34);
    snd_soc_write(uVar2,0x34,uVar1 & 0xfffff9ff);
    FUN_00010760(uVar2,1);
    FUN_00010dcc(uVar2,1,0);
    uVar1 = snd_soc_read(uVar2,0x34);
    snd_soc_write(uVar2,0x34,uVar1 | 0x10);
    FUN_00010760(uVar2,0);
    uVar1 = snd_soc_read(uVar2,0x2c);
    uVar1 = uVar1 | 0x100000;
  }
  snd_soc_write(uVar2,0x2c,uVar1);
  return 0;
}



// ==== FUN_000116b8 @ 000116b8 size=412

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000116b8(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_1 + 0x98;
  iVar1 = dev_get_drvdata(*(undefined4 *)(param_1 + 0xc));
  snd_soc_add_codec_controls(param_1,&DAT_00014e20,7);
  if (*(char *)(iVar1 + 0xc) == '\x03') {
    puVar2 = &DAT_00014b20;
    uVar3 = 6;
  }
  else {
    if ((_RTS_SOC_HW_ID != 1) || (DAT_0001609e != '\x02')) {
      snd_soc_add_codec_controls(param_1,&DAT_00014d30,5);
      goto LAB_00011784;
    }
    puVar2 = &DAT_00014c40;
    uVar3 = 5;
  }
  snd_soc_add_codec_controls(param_1,puVar2,uVar3);
LAB_00011784:
  snd_soc_dapm_disable_pin(iVar4,&_LC0);
  snd_soc_dapm_disable_pin(iVar4,&_LC1);
  if (*(char *)(iVar1 + 0xc) != '\x03') {
    snd_soc_dapm_disable_pin(iVar4,&_LC2);
  }
  snd_soc_dapm_disable_pin(iVar4,&_LC3);
  snd_soc_dapm_disable_pin(iVar4,&_LC4);
  snd_soc_dapm_disable_pin(iVar4,&_LC5);
  snd_soc_dapm_sync(iVar4);
  if (*(char *)(iVar1 + 0xc) != '\x03') {
    snd_soc_update_bits(param_1,0x34,0x3f000,0x36000);
  }
  return 0;
}



// ==== FUN_00011854 @ 00011854 size=68

int FUN_00011854(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x60);
  iVar1 = snd_soc_put_volsw();
  if (-1 < iVar1) {
    FUN_00010cb8(uVar2);
    iVar1 = 0;
  }
  return iVar1;
}



// ==== FUN_00011898 @ 00011898 size=68

int FUN_00011898(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x60);
  iVar1 = snd_soc_put_volsw();
  if (-1 < iVar1) {
    FUN_00010a54(uVar2);
    iVar1 = 0;
  }
  return iVar1;
}



// ==== FUN_00011c38 @ 00011c38 size=320

undefined4 FUN_00011c38(uint param_1)

{
  uint uVar1;
  
  if (param_1 != 0x2c) {
    if (param_1 < 0x2d) {
      if (param_1 == 0x14) {
        return 1;
      }
      if (param_1 < 0x15) {
        if (param_1 == 8) {
          return 1;
        }
        if (param_1 < 9) {
          if (param_1 == 0) {
            return 1;
          }
          uVar1 = 4;
        }
        else {
          if (param_1 == 0xc) {
            return 1;
          }
          uVar1 = 0x10;
        }
      }
      else {
        if (param_1 == 0x20) {
          return 1;
        }
        if (param_1 < 0x21) {
          if (param_1 == 0x18) {
            return 1;
          }
          uVar1 = 0x1c;
        }
        else {
          if (param_1 == 0x24) {
            return 1;
          }
          uVar1 = 0x28;
        }
      }
    }
    else {
      if (param_1 == 0x90) {
        return 1;
      }
      if (param_1 < 0x91) {
        if (param_1 == 0x38) {
          return 1;
        }
        if (param_1 < 0x39) {
          if (param_1 == 0x30) {
            return 1;
          }
          uVar1 = 0x34;
        }
        else {
          if (param_1 == 0x3c) {
            return 1;
          }
          uVar1 = 0x60;
        }
      }
      else {
        if (param_1 == 0x9c) {
          return 1;
        }
        if (param_1 < 0x9d) {
          if (param_1 == 0x94) {
            return 1;
          }
          uVar1 = 0x98;
        }
        else {
          if (param_1 == 0xa0) {
            return 1;
          }
          uVar1 = 0xa4;
        }
      }
    }
    if (param_1 != uVar1) {
      return 0;
    }
  }
  return 1;
}



// ==== FUN_00011d78 @ 00011d78 size=164

undefined4 FUN_00011d78(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = dev_get_drvdata(*(undefined4 *)(param_1 + 0xc));
  iVar2 = FUN_00011c38(param_2);
  if (iVar2 == 0) {
    printk(&_LC17,param_2);
  }
  else {
    if (param_2 < 0x90) {
      iVar1 = *(int *)(iVar1 + 4);
    }
    else {
      iVar1 = *(int *)(iVar1 + 8);
      param_2 = param_2 - 0x90;
    }
    *(undefined4 *)(iVar1 + param_2) = param_3;
  }
  return 0;
}



// ==== FUN_00011e1c @ 00011e1c size=148

undefined4 FUN_00011e1c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = dev_get_drvdata(*(undefined4 *)(param_1 + 0xc));
  iVar2 = FUN_00011c38(param_2);
  if (iVar2 == 0) {
    printk(&_LC17,param_2);
    uVar3 = 0;
  }
  else {
    if (param_2 < 0x90) {
      iVar1 = *(int *)(iVar1 + 4);
    }
    else {
      iVar1 = *(int *)(iVar1 + 8);
      param_2 = param_2 - 0x90;
    }
    uVar3 = *(undefined4 *)(iVar1 + param_2);
  }
  return uVar3;
}



