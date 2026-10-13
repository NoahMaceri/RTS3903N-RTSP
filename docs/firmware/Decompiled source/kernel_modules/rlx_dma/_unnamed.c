/* rlx_dma — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rlx_dma.h"

// ==== FUN_0001070c @ 0001070c size=144

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001070c(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1;
  do {
    if (piVar2[0x12] != 0) {
      iVar1 = *param_1 + 0x10;
      if ((iVar1 == 0) || (iVar3 = *(int *)(*param_1 + 0x90), iVar3 == 0)) {
        iVar3 = _mips_dma_map_ops;
      }
      (**(code **)(iVar3 + 4))(iVar1,piVar2[0x14],piVar2[0x12],piVar2[0x13],0);
      piVar2[0x12] = 0;
    }
    piVar2 = piVar2 + 6;
  } while (piVar2 != param_1 + 0xc);
  return;
}



// ==== FUN_0001079c @ 0001079c size=148

void FUN_0001079c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_1 + param_2 * 0x20 + 0xb8);
  iVar3 = *(int *)(*(int *)(param_1 + 0xfc) + 0x564);
  iVar1 = dev_get_drvdata(*(undefined4 *)(iVar3 + 8));
  *(undefined4 *)(iVar2 + 0x84) = 2;
  iVar1 = iVar1 + param_2 * 0x18;
  uVar4 = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(iVar2 + 0x98) = 0;
  *(undefined4 *)(iVar2 + 0x88) = uVar4;
  *(undefined4 *)(iVar2 + 0x8c) = *(undefined4 *)(iVar1 + 0x48);
  *(undefined4 *)(iVar2 + 0x90) = *(undefined4 *)(iVar1 + 0x4c);
  *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(iVar1 + 0x50);
  return;
}



// ==== FUN_00010830 @ 00010830 size=92

undefined4 FUN_00010830(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x558);
  if (*(int *)(iVar1 + 0xb8) != 0) {
    FUN_0001079c(iVar1,0);
  }
  if (*(int *)(iVar1 + 0xd8) != 0) {
    FUN_0001079c(iVar1,1);
  }
  return 0;
}



// ==== FUN_000109ac @ 000109ac size=240

void FUN_000109ac(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = 2;
  uVar4 = *param_1;
  if (*(char *)(param_1 + 0x1c) != '\x03') {
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



// ==== FUN_00010a9c @ 00010a9c size=172

undefined4 FUN_00010a9c(int param_1)

{
  int iVar1;
  
  param_1 = param_1 + 0x10;
  iVar1 = dev_get_drvdata(param_1);
  FUN_000109ac(iVar1);
  free_irq(*(undefined4 *)(iVar1 + 0xc),iVar1);
  FUN_0001070c(iVar1);
  snd_soc_unregister_platform(param_1);
  devm_kfree(param_1,iVar1);
  dev_set_drvdata(param_1,0);
  return 0;
}



// ==== FUN_00010d30 @ 00010d30 size=228

undefined4 FUN_00010d30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0xa8);
  iVar1 = dev_get_drvdata(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x564) + 8));
  iVar3 = iVar1 + iVar3 * 4;
  if (*(int *)(iVar3 + 0x10) == 0) {
    *(undefined4 *)(iVar3 + 0x10) = 1;
    snd_pcm_hw_constraint_integer(iVar2,0xf);
    snd_pcm_hw_constraint_pow2(iVar2,0,0xf);
    snd_pcm_hw_constraint_pow2(iVar2,0,0xd);
    snd_soc_set_runtime_hwparams(param_1,&DAT_00011a60);
    *(int *)(iVar2 + 0xc4) = iVar1;
    uVar4 = 0;
  }
  else {
    uVar4 = 0xfffffff0;
  }
  return uVar4;
}



// ==== FUN_00010e14 @ 00010e14 size=176

undefined4 FUN_00010e14(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  uVar1 = *(uint *)(iVar2 + 0x4c) & *(uint *)(iVar2 + 0x50);
  if ((uVar1 & 1) != 0) {
    if (*(char *)(param_2 + 0x70) == '\x01') {
      *(undefined4 *)(iVar2 + 0x38) = 0;
    }
    if (*(int *)(param_2 + 0x2c) != 0) {
      snd_pcm_period_elapsed();
    }
  }
  if ((uVar1 & 0x10) != 0) {
    if (*(char *)(param_2 + 0x70) == '\x01') {
      *(undefined4 *)(*(int *)(param_2 + 4) + 0x44) = 0;
    }
    if (*(int *)(param_2 + 0x18) != 0) {
      snd_pcm_period_elapsed();
    }
  }
  *(uint *)(*(int *)(param_2 + 4) + 0x50) = uVar1;
  return 1;
}



// ==== FUN_00010ec4 @ 00010ec4 size=1124

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00010ec4(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  code *pcVar10;
  undefined4 *puVar11;
  int local_38 [2];
  int *local_30;
  
  iVar5 = *(int *)(param_1 + 0xd0);
  if (iVar5 == 0) {
    printk(&_LC0);
    return -0x16;
  }
  if ((*(uint **)(param_1 + 0x58) != (uint *)0x0) &&
     (uVar9 = **(uint **)(param_1 + 0x58), uVar9 != 0)) {
    DAT_00011a84 = uVar9 >> 3;
  }
  iVar6 = param_1 + 0x10;
  piVar1 = (int *)devm_kzalloc(iVar6,0x74,0xd0);
  if (piVar1 == (int *)0x0) {
    printk(&_LC1);
    return -0xc;
  }
  *piVar1 = param_1;
  iVar7 = 2;
  uVar9 = *(uint *)(iVar5 + 0x14);
  piVar1[0x1c] = uVar9;
  if ((uVar9 & 0xff) != 3) {
    iVar7 = 1;
  }
  iVar5 = 0;
  do {
    piVar2 = (int *)platform_get_resource(param_1,0x200,iVar5);
    if (piVar2 == (int *)0x0) {
      puVar4 = &_LC2;
LAB_00011064:
      iVar7 = -6;
      printk(puVar4,iVar5);
      goto LAB_00011098;
    }
    local_30 = piVar2;
    iVar8 = __request_region(&iomem_resource,*piVar2,(piVar2[1] + 1) - *piVar2,"rlx-dma",0);
    if (iVar8 == 0) {
      printk(&_LC4);
      iVar7 = -0x10;
      goto LAB_00011098;
    }
    iVar8 = __ioremap(*local_30,(local_30[1] + 1) - *local_30,0x800);
    local_38[iVar5] = iVar8;
    if (iVar8 == 0) {
      puVar4 = &_LC5;
      goto LAB_00011064;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < iVar7);
  iVar7 = 0;
LAB_00011098:
  piVar1[1] = local_38[0];
  if ((char)piVar1[0x1c] == '\x03') {
    piVar1[2] = local_38[1];
  }
  else {
    piVar1[2] = 0;
  }
  if (iVar7 == 0) {
    piVar2 = (int *)platform_get_resource(param_1,0x400,0);
    if (piVar2 == (int *)0x0) {
      printk(&_LC6);
      iVar7 = -6;
      goto LAB_00011240;
    }
    iVar5 = *piVar1;
    piVar1[3] = *piVar2;
    piVar1[9] = 3;
    piVar1[0xe] = 7;
    piVar1[10] = 1;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
    piVar1[0xf] = 5;
    piVar1[0xb] = 0;
    piVar1[0x12] = 0;
    piVar1[0x18] = 0;
    iVar7 = DAT_00011a84 << 2;
    if (*(int *)(iVar5 + 0x74) == 0) {
      *(undefined **)(iVar5 + 0x74) = &DAT_000119a8;
    }
    if (*(int *)(iVar5 + 0x78) == 0 && *(int *)(iVar5 + 0x7c) == 0) {
      *(undefined4 *)(iVar5 + 0x78) = 0xffffffff;
      *(undefined4 *)(iVar5 + 0x7c) = 0;
    }
    iVar8 = 2;
    piVar2 = piVar1 + 0x13;
    do {
      puVar11 = _mips_dma_map_ops;
      if ((iVar5 + 0x10 != 0) &&
         (puVar11 = *(undefined4 **)(iVar5 + 0x90),
         *(undefined4 **)(iVar5 + 0x90) == (undefined4 *)0x0)) {
        puVar11 = _mips_dma_map_ops;
      }
      iVar3 = (*(code *)*puVar11)(iVar5 + 0x10,iVar7,piVar2,0xd0,0);
      piVar2[-1] = iVar3;
      if (iVar3 == 0) {
        printk(&_LC9);
        iVar7 = -0xc;
        goto LAB_00011230;
      }
      iVar8 = iVar8 + -1;
      piVar2[1] = iVar7;
      piVar2 = piVar2 + 6;
    } while (iVar8 != 0);
    iVar7 = request_threaded_irq(piVar1[3],FUN_00010e14,0,0,"audio-platform",piVar1);
    if (iVar7 == 0) {
      iVar7 = snd_soc_register_platform(iVar6,&DAT_000119b0);
      if (iVar7 == 0) {
        dev_set_drvdata(iVar6,piVar1);
        *(undefined4 *)(piVar1[1] + 0x4c) = 0;
        return 0;
      }
      printk(&_LC8);
      free_irq(piVar1[3],piVar1);
    }
    else {
      printk(&_LC7,piVar1[3]);
    }
LAB_00011230:
    pcVar10 = FUN_0001070c;
  }
  else {
    pcVar10 = FUN_000109ac;
  }
  (*pcVar10)(piVar1);
LAB_00011240:
  FUN_000109ac(piVar1);
  devm_kfree(iVar6,piVar1);
  return iVar7;
}



