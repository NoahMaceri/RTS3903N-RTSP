/* libh1encoder — C-runtime entry / init stubs
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "libh1encoder.h"

// ==== _init @ 00014cb4 size=120

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  FUN_00014ea0();
  iVar1 = FUN_000286b0();
  return iVar1;
}



// ==== _fini @ 00018a20 size=408

void _fini(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_s1;
  int unaff_s3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  int unaff_gp;
  int in_stack_00000040;
  
  iVar3 = (**(code **)(unaff_gp + -0x7ed0))();
  uVar1 = iVar3 * 0xa9;
  if (uVar1 == 0) {
    *(undefined4 *)(unaff_s1 + 0xe68) = 0;
  }
  else {
    uVar5 = *(uint *)(unaff_s1 + 0xe64);
    if (uVar5 < 0xffffff) {
      if (uVar1 == 0) {
        trap(0x1c00);
      }
      *(uint *)(unaff_s1 + 0xe68) = (uVar5 << 8) / uVar1;
    }
    else {
      if (uVar1 == 0) {
        trap(0x1c00);
      }
      *(uint *)(unaff_s1 + 0xe68) = uVar5 / uVar1 << 8;
    }
  }
  iVar3 = (**(code **)(in_stack_00000040 + -0x7ed0))();
  *(int *)(unaff_s1 + 0x120) = iVar3 << 1;
  if (unaff_s3 == 0x48317011) {
    uVar2 = (**(code **)(in_stack_00000040 + -0x7ed0))();
    pcVar6 = *(code **)(in_stack_00000040 + -0x7ed0);
    *(undefined4 *)(unaff_s1 + 0x120) = uVar2;
    uVar2 = (*pcVar6)();
    pcVar6 = *(code **)(in_stack_00000040 + -0x7ed0);
    *(undefined4 *)(unaff_s1 + 0x2054) = uVar2;
    uVar2 = (*pcVar6)();
    pcVar6 = *(code **)(in_stack_00000040 + -0x7ed0);
    *(undefined4 *)(unaff_s1 + 0xac0) = uVar2;
    uVar2 = (*pcVar6)();
    pcVar6 = *(code **)(in_stack_00000040 + -0x7ed0);
    *(undefined4 *)(unaff_s1 + 0xac4) = uVar2;
    uVar2 = (*pcVar6)();
    pcVar6 = *(code **)(in_stack_00000040 + -0x7ed0);
    *(undefined4 *)(unaff_s1 + 0xac8) = uVar2;
    uVar2 = (*pcVar6)();
    pcVar6 = *(code **)(in_stack_00000040 + -0x7ed0);
    *(undefined4 *)(unaff_s1 + 0xe80) = uVar2;
    iVar3 = (*pcVar6)();
    pcVar6 = *(code **)(in_stack_00000040 + -0x7ed0);
    *(int *)(unaff_s1 + 0x11c) = iVar3 << 2;
    uVar2 = (*pcVar6)();
    pcVar6 = *(code **)(in_stack_00000040 + -0x7ed0);
    *(undefined4 *)(unaff_s1 + 0x2078) = uVar2;
    uVar2 = (*pcVar6)();
    *(undefined4 *)(unaff_s1 + 0x2074) = uVar2;
    uVar2 = (**(code **)(in_stack_00000040 + -0x7ed0))();
    *(undefined4 *)(unaff_s1 + 0x2070) = uVar2;
  }
  else {
    uVar2 = (**(code **)(in_stack_00000040 + -0x7ed0))();
    pcVar6 = *(code **)(in_stack_00000040 + -0x7ed0);
    *(undefined4 *)(unaff_s1 + 0xac0) = uVar2;
    uVar2 = (*pcVar6)();
    pcVar6 = *(code **)(in_stack_00000040 + -0x7ed0);
    *(undefined4 *)(unaff_s1 + 0xac4) = uVar2;
    uVar2 = (*pcVar6)();
    pcVar6 = *(code **)(in_stack_00000040 + -0x7ed0);
    *(undefined4 *)(unaff_s1 + 0xac8) = uVar2;
    uVar2 = (*pcVar6)();
    *(undefined4 *)(unaff_s1 + 0xe80) = uVar2;
    iVar3 = (**(code **)(in_stack_00000040 + -0x7ed0))();
    *(int *)(unaff_s1 + 0x11c) = iVar3 << 2;
  }
  iVar3 = 0xa0;
  if (*(int *)(unaff_s1 + 0xa9c) != 0) {
    do {
      uVar2 = (**(code **)(in_stack_00000040 + -0x7ec4))();
      iVar4 = unaff_s1 + iVar3;
      iVar3 = iVar3 + 4;
      *(undefined4 *)(iVar4 + 700) = uVar2;
    } while (iVar3 != 0xcc);
  }
  return;
}



// ==== _fini @ 00028a20 size=80

void _fini(void)

{
  FUN_00014dc8();
  return;
}



