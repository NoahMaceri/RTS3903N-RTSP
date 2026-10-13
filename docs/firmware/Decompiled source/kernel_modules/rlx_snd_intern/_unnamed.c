/* rlx_snd_intern — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rlx_snd_intern.h"

// ==== FUN_00010038 @ 00010038 size=196

undefined4 FUN_00010038(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  uVar1 = *(undefined4 *)(iVar3 + 0x56c);
  uVar2 = *(undefined4 *)(iVar3 + 0x568);
  iVar3 = dev_get_drvdata(*(undefined4 *)(*(int *)(iVar3 + 0x564) + 8));
  snd_soc_dai_set_sysclk(uVar1,0,48000000,0);
  snd_soc_dai_set_sysclk(uVar2,0,96000000,0);
  if (*(int *)(param_1 + 0x30) == 0) {
    *(undefined4 *)(iVar3 + 0x20) = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x30) == 1) {
      *(undefined4 *)(iVar3 + 0x34) = 0;
    }
    else {
      uVar1 = 0xffffffea;
    }
  }
  return uVar1;
}



