/* librtsaec — C-runtime entry / init stubs
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsaec.h"

// ==== _init @ 00016374 size=120

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  FUN_00016560();
  iVar1 = (*(code *)(PTR_DAT_00050bfc + -0x4bc0))();
  return iVar1;
}



// ==== _fini @ 0002b5c0 size=80

void _fini(void)

{
  int iVar1;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int in_stack_00000010;
  
  while( true ) {
    iVar1 = *(int *)(*(int *)(unaff_s0 + 0x40) + unaff_s1);
    if (iVar1 != 0) {
      (**(code **)(in_stack_00000010 + -0x78f0))(iVar1,*(undefined4 *)(unaff_s0 + 0x20));
    }
    unaff_s2 = unaff_s2 + 1;
    if (*(int *)(unaff_s0 + 0xc) <= unaff_s2) break;
    unaff_s1 = unaff_s2 * 4;
    iVar1 = *(int *)(*(int *)(unaff_s0 + 0x5c) + unaff_s1);
    if (iVar1 != 0) {
      (**(code **)(in_stack_00000010 + -0x78f0))
                (iVar1,*(int *)(unaff_s0 + 0x30) - *(int *)(unaff_s0 + 0x28));
    }
    iVar1 = *(int *)(*(int *)(unaff_s0 + 0x60) + unaff_s1);
    if (iVar1 != 0) {
      (**(code **)(in_stack_00000010 + -0x78f0))
                (iVar1,*(int *)(unaff_s0 + 0x30) - *(int *)(unaff_s0 + 0x28));
    }
    iVar1 = *(int *)(*(int *)(unaff_s0 + 100) + unaff_s1);
    if (iVar1 != 0) {
      (**(code **)(in_stack_00000010 + -0x78f0))
                (iVar1,*(int *)(unaff_s0 + 0x30) - *(int *)(unaff_s0 + 0x28));
    }
    iVar1 = *(int *)(*(int *)(unaff_s0 + 0x3c) + unaff_s1);
    if (iVar1 != 0) {
      (**(code **)(in_stack_00000010 + -0x78f0))(iVar1,*(undefined4 *)(unaff_s0 + 0x30));
    }
  }
  return;
}



// ==== _fini @ 0003b5c0 size=80

void _fini(void)

{
  (*(code *)(PTR_00050bf8 + 0x6488))();
  return;
}



