/* libh1encoder — "ewlinit" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "libh1encoder.h"

// ==== EWLInit_post @ 0001769c size=40

void EWLInit_post(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int unaff_s1;
  int unaff_s3;
  int unaff_s4;
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7d64))(param_1,param_2,*(undefined4 *)(unaff_s1 + 0x206c));
  (**(code **)(param_5 + -0x7d64))();
  (**(code **)(param_5 + -0x7d64))();
  (**(code **)(param_5 + -0x7d64))();
  do {
    unaff_s4 = unaff_s4 + 1;
    (**(code **)(param_5 + -0x7d64))();
  } while (unaff_s4 != 0x40c);
  iVar1 = 0x40c;
  do {
    iVar1 = iVar1 + 1;
    (**(code **)(param_5 + -0x7d64))();
  } while (iVar1 != 0x41c);
  iVar1 = 0x41c;
  do {
    iVar1 = iVar1 + 1;
    (**(code **)(param_5 + -0x7d64))();
  } while (iVar1 != 0x45c);
  iVar1 = 0x45c;
  do {
    iVar1 = iVar1 + 1;
    (**(code **)(param_5 + -0x7d64))();
  } while (iVar1 != 0x49c);
  (**(code **)(param_5 + -0x7d64))();
  (**(code **)(param_5 + -0x7d64))();
  (**(code **)(param_5 + -0x7d64))();
  (**(code **)(param_5 + -0x7d64))();
  (**(code **)(param_5 + -0x7d64))();
  (**(code **)(param_5 + -0x7d64))();
  iVar1 = *(int *)(unaff_s1 + 0x30);
  if (iVar1 == 1) {
    iVar1 = 0;
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    do {
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      iVar1 = iVar1 + 0x19;
      (**(code **)(param_5 + -0x7d64))();
    } while (iVar1 != 0x4b);
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    iVar1 = *(int *)(unaff_s1 + 0x30);
  }
  pcVar3 = *(code **)(param_5 + -0x7d64);
  if (iVar1 != 2) {
    iVar1 = 0;
    do {
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      iVar1 = iVar1 + 0x21;
      (**(code **)(param_5 + -0x7d64))();
    } while (iVar1 != 99);
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    if ((*(int *)(unaff_s1 + 0x30) != 2) && (unaff_s3 == 0x48317011)) {
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      if (*(int *)(unaff_s1 + 0x2038) != 0) {
        iVar1 = 0;
        do {
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          iVar1 = iVar1 + 0x21;
          (**(code **)(param_5 + -0x7d64))();
        } while (iVar1 != 99);
        iVar1 = 0;
        do {
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          (**(code **)(param_5 + -0x7d64))();
          iVar1 = iVar1 + 10;
          (**(code **)(param_5 + -0x7d64))();
        } while (iVar1 != 0x118);
        pcVar3 = *(code **)(param_5 + -0x7d64);
        goto LAB_000168a0;
      }
    }
    pcVar3 = *(code **)(param_5 + -0x7d64);
  }
LAB_000168a0:
  (*pcVar3)();
  (**(code **)(param_5 + -0x7d64))();
  (**(code **)(param_5 + -0x7d64))();
  (**(code **)(param_5 + -0x7d64))();
  (**(code **)(param_5 + -0x7d64))();
  iVar1 = 4;
  (**(code **)(param_5 + -0x7d64))();
  do {
    iVar1 = iVar1 + 4;
    (**(code **)(param_5 + -0x7ee4))();
  } while (iVar1 != 0xfc);
  iVar1 = 0x100;
  if (*(int *)(unaff_s1 + 0x30) == 2) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 4;
      (**(code **)(param_5 + -0x7ee4))();
    } while (iVar1 != 0x80);
    if (0x48311480 < *(uint *)(unaff_s1 + 0xaa4)) {
      iVar1 = 0x39c;
      do {
        iVar1 = iVar1 + 4;
        (**(code **)(param_5 + -0x7ee4))();
      } while (iVar1 != 0x3a8);
    }
    if (unaff_s3 == 0x48317011) {
      (**(code **)(param_5 + -0x7ee4))();
      (**(code **)(param_5 + -0x7ee4))();
      (**(code **)(param_5 + -0x7ee4))();
      (**(code **)(param_5 + -0x7ee4))();
      (**(code **)(param_5 + -0x7ee4))();
    }
  }
  else {
    do {
      iVar1 = iVar1 + 4;
      (**(code **)(param_5 + -0x7ee4))();
    } while (iVar1 != 0x180);
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 4;
      (**(code **)(param_5 + -0x7ee4))();
    } while (iVar1 != 0x80);
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 4;
      (**(code **)(param_5 + -0x7ee4))();
    } while (iVar1 != 0x80);
    iVar1 = 0x280;
    do {
      iVar1 = iVar1 + 4;
      (**(code **)(param_5 + -0x7ee4))();
    } while (iVar1 != 0x290);
    uVar2 = *(uint *)(unaff_s1 + 0xaa4);
    if (0x48311220 < uVar2) {
      iVar1 = 0;
      if (*(int *)(unaff_s1 + 0xd60) != 0) {
        do {
          iVar1 = iVar1 + 4;
          (**(code **)(param_5 + -0x7ee4))();
        } while (iVar1 != 0xc0);
        iVar1 = 0;
        do {
          iVar1 = iVar1 + 4;
          (**(code **)(param_5 + -0x7ee4))();
        } while (iVar1 != 0x40);
        (**(code **)(param_5 + -0x7ee4))();
        (**(code **)(param_5 + -0x7ee4))();
        (**(code **)(param_5 + -0x7ee4))();
        uVar2 = *(uint *)(unaff_s1 + 0xaa4);
      }
      iVar1 = 0x39c;
      if (0x48311480 < uVar2) {
        do {
          iVar1 = iVar1 + 4;
          (**(code **)(param_5 + -0x7ee4))();
        } while (iVar1 != 0x3bc);
        if (0x48312170 < *(uint *)(unaff_s1 + 0xaa4)) {
          pcVar3 = *(code **)(param_5 + -0x7ee4);
          if (*(int *)(unaff_s1 + 0x30) == 1) {
            if (*(int *)(unaff_s1 + 0x2a8) == 0) {
              (*pcVar3)();
              (**(code **)(param_5 + -0x7ee4))();
              (**(code **)(param_5 + -0x7ee4))();
              (**(code **)(param_5 + -0x7ee4))();
              (**(code **)(param_5 + -0x7ee4))();
            }
            else {
              if (*(int *)(unaff_s1 + 0x2a8) != 1) goto LAB_00016b04;
              (*pcVar3)();
              (**(code **)(param_5 + -0x7ee4))();
              (**(code **)(param_5 + -0x7ee4))();
              (**(code **)(param_5 + -0x7ee4))();
              (**(code **)(param_5 + -0x7ee4))();
            }
          }
          else {
LAB_00016b04:
            (*pcVar3)();
            (**(code **)(param_5 + -0x7ee4))();
            (**(code **)(param_5 + -0x7ee4))();
            (**(code **)(param_5 + -0x7ee4))();
            (**(code **)(param_5 + -0x7ee4))();
          }
          if (unaff_s3 == 0x48317011) {
            iVar1 = 0x3d0;
            do {
              iVar1 = iVar1 + 4;
              (**(code **)(param_5 + -0x7ee4))();
            } while (iVar1 != 0x4a0);
            iVar1 = 0x4a4;
            if (0x48316fff < *(uint *)(unaff_s1 + 0xaa4)) {
              do {
                iVar1 = iVar1 + 4;
                (**(code **)(param_5 + -0x7ee4))();
              } while (iVar1 != 0x7c8);
              uVar2 = *(uint *)(unaff_s1 + 0x2f4);
              goto LAB_00016b94;
            }
          }
          else {
            iVar1 = 0x3d0;
            if (unaff_s3 == 0x48314810) {
              do {
                iVar1 = iVar1 + 4;
                (**(code **)(param_5 + -0x7ee4))();
              } while (iVar1 != 0x4a0);
              uVar2 = *(uint *)(unaff_s1 + 0x2f4);
              goto LAB_00016b94;
            }
          }
        }
      }
    }
  }
  uVar2 = *(uint *)(unaff_s1 + 0x2f4);
LAB_00016b94:
  pcVar3 = *(code **)(param_5 + -0x7d30);
  *(uint *)(unaff_s1 + 0x2f4) = uVar2 | 1;
  (*pcVar3)();
  return;
}



// ==== EWLInit @ 00018514 size=468

void EWLInit(void)

{
  int iVar1;
  int unaff_s1;
  int unaff_s3;
  int unaff_s4;
  int unaff_s6;
  uint uVar2;
  code *pcVar3;
  int in_stack_00000010;
  
  while( true ) {
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    unaff_s4 = unaff_s4 + 10;
    (**(code **)(in_stack_00000010 + -0x7d64))();
    if (unaff_s4 == unaff_s6) break;
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
  }
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  iVar1 = 4;
  (**(code **)(in_stack_00000010 + -0x7d64))();
  do {
    iVar1 = iVar1 + 4;
    (**(code **)(in_stack_00000010 + -0x7ee4))();
  } while (iVar1 != 0xfc);
  iVar1 = 0x100;
  if (*(int *)(unaff_s1 + 0x30) == 2) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 4;
      (**(code **)(in_stack_00000010 + -0x7ee4))();
    } while (iVar1 != 0x80);
    if (0x48311480 < *(uint *)(unaff_s1 + 0xaa4)) {
      iVar1 = 0x39c;
      do {
        iVar1 = iVar1 + 4;
        (**(code **)(in_stack_00000010 + -0x7ee4))();
      } while (iVar1 != 0x3a8);
    }
    if (unaff_s3 == 0x48317011) {
      (**(code **)(in_stack_00000010 + -0x7ee4))();
      (**(code **)(in_stack_00000010 + -0x7ee4))();
      (**(code **)(in_stack_00000010 + -0x7ee4))();
      (**(code **)(in_stack_00000010 + -0x7ee4))();
      (**(code **)(in_stack_00000010 + -0x7ee4))();
    }
  }
  else {
    do {
      iVar1 = iVar1 + 4;
      (**(code **)(in_stack_00000010 + -0x7ee4))();
    } while (iVar1 != 0x180);
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 4;
      (**(code **)(in_stack_00000010 + -0x7ee4))();
    } while (iVar1 != 0x80);
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 4;
      (**(code **)(in_stack_00000010 + -0x7ee4))();
    } while (iVar1 != 0x80);
    iVar1 = 0x280;
    do {
      iVar1 = iVar1 + 4;
      (**(code **)(in_stack_00000010 + -0x7ee4))();
    } while (iVar1 != 0x290);
    uVar2 = *(uint *)(unaff_s1 + 0xaa4);
    if (0x48311220 < uVar2) {
      iVar1 = 0;
      if (*(int *)(unaff_s1 + 0xd60) != 0) {
        do {
          iVar1 = iVar1 + 4;
          (**(code **)(in_stack_00000010 + -0x7ee4))();
        } while (iVar1 != 0xc0);
        iVar1 = 0;
        do {
          iVar1 = iVar1 + 4;
          (**(code **)(in_stack_00000010 + -0x7ee4))();
        } while (iVar1 != 0x40);
        (**(code **)(in_stack_00000010 + -0x7ee4))();
        (**(code **)(in_stack_00000010 + -0x7ee4))();
        (**(code **)(in_stack_00000010 + -0x7ee4))();
        uVar2 = *(uint *)(unaff_s1 + 0xaa4);
      }
      iVar1 = 0x39c;
      if (0x48311480 < uVar2) {
        do {
          iVar1 = iVar1 + 4;
          (**(code **)(in_stack_00000010 + -0x7ee4))();
        } while (iVar1 != 0x3bc);
        if (0x48312170 < *(uint *)(unaff_s1 + 0xaa4)) {
          pcVar3 = *(code **)(in_stack_00000010 + -0x7ee4);
          if (*(int *)(unaff_s1 + 0x30) == 1) {
            if (*(int *)(unaff_s1 + 0x2a8) == 0) {
              (*pcVar3)();
              (**(code **)(in_stack_00000010 + -0x7ee4))();
              (**(code **)(in_stack_00000010 + -0x7ee4))();
              (**(code **)(in_stack_00000010 + -0x7ee4))();
              (**(code **)(in_stack_00000010 + -0x7ee4))();
            }
            else {
              if (*(int *)(unaff_s1 + 0x2a8) != 1) goto LAB_00016b04;
              (*pcVar3)();
              (**(code **)(in_stack_00000010 + -0x7ee4))();
              (**(code **)(in_stack_00000010 + -0x7ee4))();
              (**(code **)(in_stack_00000010 + -0x7ee4))();
              (**(code **)(in_stack_00000010 + -0x7ee4))();
            }
          }
          else {
LAB_00016b04:
            (*pcVar3)();
            (**(code **)(in_stack_00000010 + -0x7ee4))();
            (**(code **)(in_stack_00000010 + -0x7ee4))();
            (**(code **)(in_stack_00000010 + -0x7ee4))();
            (**(code **)(in_stack_00000010 + -0x7ee4))();
          }
          if (unaff_s3 == 0x48317011) {
            iVar1 = 0x3d0;
            do {
              iVar1 = iVar1 + 4;
              (**(code **)(in_stack_00000010 + -0x7ee4))();
            } while (iVar1 != 0x4a0);
            iVar1 = 0x4a4;
            if (0x48316fff < *(uint *)(unaff_s1 + 0xaa4)) {
              do {
                iVar1 = iVar1 + 4;
                (**(code **)(in_stack_00000010 + -0x7ee4))();
              } while (iVar1 != 0x7c8);
              uVar2 = *(uint *)(unaff_s1 + 0x2f4);
              goto LAB_00016b94;
            }
          }
          else {
            iVar1 = 0x3d0;
            if (unaff_s3 == 0x48314810) {
              do {
                iVar1 = iVar1 + 4;
                (**(code **)(in_stack_00000010 + -0x7ee4))();
              } while (iVar1 != 0x4a0);
              uVar2 = *(uint *)(unaff_s1 + 0x2f4);
              goto LAB_00016b94;
            }
          }
        }
      }
    }
  }
  uVar2 = *(uint *)(unaff_s1 + 0x2f4);
LAB_00016b94:
  pcVar3 = *(code **)(in_stack_00000010 + -0x7d30);
  *(uint *)(unaff_s1 + 0x2f4) = uVar2 | 1;
  (*pcVar3)();
  return;
}



// ==== EWLInit_post @ 0002769c size=40

undefined4 EWLInit_post(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x14) = param_2;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 1;
    return 0;
  }
  return 0xfffffff6;
}



// ==== EWLInit @ 00028514 size=316

uint * EWLInit(uint *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint local_18 [3];
  
  if ((param_1 != (uint *)0x0) && (*param_1 < 5)) {
    puVar2 = (uint *)(*(code *)PTR_EWLmalloc_00046624)(0x78);
    puVar1 = PTR_pthread_mutex_init_00046468;
    if (puVar2 != (uint *)0x0) {
      *puVar2 = *param_1;
      puVar2[1] = 0xffffffff;
      (*(code *)puVar1)(puVar2 + 8,0);
      (*(code *)PTR_pthread_cond_init_0004656c)(puVar2 + 0xe,0);
      iVar3 = (*(code *)PTR_rts_reg_h264_open_000466bc)(local_18);
      puVar1 = PTR_rts_isp_mem_open_000464e4;
      if (iVar3 == 0) {
        puVar2[2] = local_18[0];
        uVar4 = (*(code *)puVar1)(2);
        puVar2[1] = uVar4;
        if (uVar4 != 0xffffffff) {
          iVar3 = (*(code *)PTR_rts_wq_lock_allocation_0004664c)(0x8070);
          if (iVar3 == 0) {
            (*(code *)PTR_rts_wq_lock_set_name_0004665c)(0x8070,PTR_DAT_000463fc + -0x2220);
            puVar2[3] = 0x8070;
            return puVar2;
          }
        }
      }
      (*(code *)PTR_EWLRelease_00046498)(puVar2);
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}



