/* rlx_codec — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rlx_codec.h"

// ==== codec_ck @ 000118dc size=860

int codec_ck(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_30 [2];
  
  iVar7 = *(int *)(param_1 + 0xd0);
  if (iVar7 == 0) {
    printk(&_LC7);
    return -0x16;
  }
  iVar8 = param_1 + 0x10;
  piVar1 = (int *)devm_kzalloc(iVar8,0x24,0xd0);
  if (piVar1 == (int *)0x0) {
    printk(&_LC8);
    return -0xc;
  }
  *piVar1 = param_1;
  iVar9 = 2;
  uVar10 = *(uint *)(iVar7 + 0x14);
  iVar7 = 0;
  piVar1[3] = uVar10;
  if ((uVar10 & 0xff) != 3) {
    iVar9 = 1;
  }
  do {
    piVar2 = (int *)platform_get_resource(param_1,0x200,iVar7);
    if (piVar2 == (int *)0x0) {
      puVar4 = &_LC9;
LAB_00011a50:
      iVar9 = -6;
      printk(puVar4,iVar7);
      goto LAB_00011a84;
    }
    iVar3 = __request_region(&iomem_resource,*piVar2,(piVar2[1] + 1) - *piVar2,"rlx-codec",0);
    if (iVar3 == 0) {
      printk(&_LC11);
      iVar9 = -0x10;
      goto LAB_00011a84;
    }
    iVar3 = __ioremap(*piVar2,(piVar2[1] + 1) - *piVar2,0x800);
    local_30[iVar7] = iVar3;
    if (iVar3 == 0) {
      puVar4 = &_LC12;
      goto LAB_00011a50;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < iVar9);
  iVar9 = 0;
LAB_00011a84:
  piVar1[1] = local_30[0];
  if ((piVar1[3] & 0xffU) == 3) {
    piVar1[2] = local_30[1];
  }
  else {
    piVar1[2] = 0;
  }
  if (iVar9 == 0) {
    if ((piVar1[3] & 0xffU) == 3) {
      uVar10 = clk_get(0,"codec_ck");
      piVar1[4] = uVar10;
      if (0xfffff000 < uVar10) {
        printk(&_LC14);
        iVar9 = -2;
        goto LAB_00011be4;
      }
      piVar1[5] = 0;
      __mutex_init(piVar1 + 6,"&codec_data->codec_mutex",0x10000);
    }
    if ((char)piVar1[3] == '\x03') {
      ppuVar5 = &PTR_FUN_00015164;
      ppuVar6 = &PTR_s_rlx_codec_analog_00015370;
    }
    else {
      ppuVar5 = &PTR_FUN_000151e0;
      ppuVar6 = &PTR_s_rlx_codec_analog_00015260;
    }
    iVar9 = snd_soc_register_codec(iVar8,ppuVar5,ppuVar6,2);
    if (iVar9 == 0) {
      dev_set_drvdata(iVar8,piVar1);
      return 0;
    }
    printk(&_LC16);
    if (((char)piVar1[3] == '\x03') && (piVar1[4] != 0)) {
      clk_put();
      piVar1[4] = 0;
    }
  }
  else {
    FUN_000101e8(piVar1);
  }
LAB_00011be4:
  FUN_000101e8(piVar1);
  devm_kfree(iVar8,piVar1);
  return iVar9;
}



// ==== init_module @ 00011eb0 size=24

void init_module(void)

{
  platform_driver_register(&PTR_codec_ck_00015080);
  return;
}



// ==== cleanup_module @ 00011ec8 size=24

void cleanup_module(void)

{
  platform_driver_unregister(&PTR_codec_ck_00015080);
  return;
}



