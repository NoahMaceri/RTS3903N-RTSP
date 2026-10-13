/* rlx_dma — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rlx_dma.h"

// ==== rlx_dma_get_enum @ 0001088c size=124

undefined4 rlx_dma_get_enum(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = dev_get_drvdata(*(undefined4 *)(*(int *)(param_1 + 0x60) + 8));
  *(int *)(param_2 + 0x48) =
       *(int *)(iVar1 + 0x28) * 1000 + *(int *)(iVar1 + 0x24) * 100 + *(int *)(iVar1 + 0x3c) * 10 +
       *(int *)(iVar1 + 0x38);
  return 0;
}



// ==== rlx_dma_put_enum @ 00010908 size=164

undefined4 rlx_dma_put_enum(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = dev_get_drvdata(*(undefined4 *)(*(int *)(param_1 + 0x60) + 8));
  uVar3 = *(uint *)(param_2 + 0x48);
  if (*(int *)(*(int *)(param_1 + 0x5c) + 8) - 1U < uVar3) {
switchD_00010968_default:
    uVar2 = 0xffffffea;
  }
  else {
    switch(uVar3) {
    case 0:
    case 1:
      *(uint *)(iVar1 + 0x28) = uVar3;
      break;
    case 2:
    case 3:
      *(uint *)(iVar1 + 0x24) = uVar3;
      break;
    case 4:
    case 5:
      *(uint *)(iVar1 + 0x3c) = uVar3;
      break;
    case 6:
    case 7:
    case 8:
      *(uint *)(iVar1 + 0x38) = uVar3;
      break;
    default:
      goto switchD_00010968_default;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// ==== init_module @ 000114a0 size=104

void init_module(void)

{
  int iVar1;
  
  rts_sys_mem_up(3);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    __udelay(1000);
  }
  platform_driver_register(&PTR_FUN_000118c0);
  return;
}



// ==== cleanup_module @ 00011508 size=52

void cleanup_module(void)

{
  rts_sys_mem_down(3);
  platform_driver_unregister(&PTR_FUN_000118c0);
  return;
}



