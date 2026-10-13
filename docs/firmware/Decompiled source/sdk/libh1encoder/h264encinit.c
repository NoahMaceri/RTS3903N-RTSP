/* libh1encoder — "h264encinit" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "libh1encoder.h"

// ==== H264EncInit_V2 @ 00015d74 size=244

void H264EncInit_V2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   int param_5)

{
  int unaff_s1;
  int unaff_s3;
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7d64))(param_1,param_2,*(undefined4 *)(unaff_s1 + 0x2c));
  (**(code **)(param_5 + -0x7d64))();
  if (unaff_s3 == 0x48317011) {
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
  }
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
  if (*(int *)(unaff_s1 + 0x30) == 3) {
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
    if (*(int *)(unaff_s1 + 0x30) == 2) {
      pcVar3 = *(code **)(param_5 + -0x7d64);
      goto LAB_00018080;
    }
  }
  else {
    pcVar3 = *(code **)(param_5 + -0x7d64);
    if (*(int *)(unaff_s1 + 0x30) == 2) {
LAB_00018080:
      (*pcVar3)();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
    }
  }
  (**(code **)(param_5 + -0x7d64))();
  (**(code **)(param_5 + -0x7d64))();
  (**(code **)(param_5 + -0x7d64))();
  if (*(int *)(unaff_s1 + 0x30) == 2) {
LAB_000161f0:
    pcVar3 = *(code **)(param_5 + -0x7d64);
  }
  else {
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    if (*(int *)(unaff_s1 + 0x30) == 1) {
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
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
    }
    else {
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
    }
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    if (unaff_s3 != 0x48317011) goto LAB_000161f0;
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    if ((*(int *)(unaff_s1 + 0xe4) != 0) ||
       (pcVar3 = *(code **)(param_5 + -0x7d64), *(int *)(unaff_s1 + 0xe8) != 0)) {
      (**(code **)(param_5 + -0x7d64))();
      if (*(int *)(unaff_s1 + 0xe4) != 0) {
        (**(code **)(param_5 + -0x7d64))();
        (**(code **)(param_5 + -0x7d64))();
        (**(code **)(param_5 + -0x7d64))();
        (**(code **)(param_5 + -0x7d64))();
        (**(code **)(param_5 + -0x7d64))();
      }
      pcVar3 = *(code **)(param_5 + -0x7d64);
      if (*(int *)(unaff_s1 + 0xe8) != 0) {
        (*pcVar3)();
        (**(code **)(param_5 + -0x7d64))();
        (**(code **)(param_5 + -0x7d64))();
        (**(code **)(param_5 + -0x7d64))();
        goto LAB_000161f0;
      }
    }
  }
  (*pcVar3)();
  (**(code **)(param_5 + -0x7d64))();
  if (*(int *)(unaff_s1 + 0x30) != 2) {
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
  }
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
  iVar1 = *(int *)(unaff_s1 + 0x30);
  if (iVar1 == 3) {
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
    if (unaff_s3 == 0x48317011) {
      iVar1 = 0x3fc;
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      do {
        iVar1 = iVar1 + 1;
        (**(code **)(param_5 + -0x7d64))();
      } while (iVar1 != 0x40c);
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
      goto LAB_000177ac;
    }
LAB_0001783c:
    iVar1 = *(int *)(unaff_s1 + 0x30);
    if (iVar1 == 1) {
      pcVar3 = *(code **)(param_5 + -0x7d64);
LAB_00017850:
      iVar1 = 0;
      (*pcVar3)();
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
  }
  else {
    if (unaff_s3 == 0x48317011) {
LAB_000177ac:
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      (**(code **)(param_5 + -0x7d64))();
      goto LAB_0001783c;
    }
    pcVar3 = *(code **)(param_5 + -0x7d64);
    if (iVar1 == 1) goto LAB_00017850;
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



// ==== H264EncInit @ 00015e68 size=32

void H264EncInit(undefined4 param_1)

{
  int unaff_s1;
  int unaff_s3;
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int in_stack_00000010;
  
  (**(code **)(in_stack_00000010 + -0x7d64))(param_1,0x51,*(undefined4 *)(unaff_s1 + 0xef0));
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  if (*(int *)(unaff_s1 + 0x30) == 3) {
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    if (*(int *)(unaff_s1 + 0x30) == 2) {
      pcVar3 = *(code **)(in_stack_00000010 + -0x7d64);
      goto LAB_00018080;
    }
  }
  else {
    pcVar3 = *(code **)(in_stack_00000010 + -0x7d64);
    if (*(int *)(unaff_s1 + 0x30) == 2) {
LAB_00018080:
      (*pcVar3)();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
    }
  }
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  if (*(int *)(unaff_s1 + 0x30) == 2) {
LAB_000161f0:
    pcVar3 = *(code **)(in_stack_00000010 + -0x7d64);
  }
  else {
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    if (*(int *)(unaff_s1 + 0x30) == 1) {
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
    }
    else {
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
    }
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    if (unaff_s3 != 0x48317011) goto LAB_000161f0;
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    if ((*(int *)(unaff_s1 + 0xe4) != 0) ||
       (pcVar3 = *(code **)(in_stack_00000010 + -0x7d64), *(int *)(unaff_s1 + 0xe8) != 0)) {
      (**(code **)(in_stack_00000010 + -0x7d64))();
      if (*(int *)(unaff_s1 + 0xe4) != 0) {
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
      }
      pcVar3 = *(code **)(in_stack_00000010 + -0x7d64);
      if (*(int *)(unaff_s1 + 0xe8) != 0) {
        (*pcVar3)();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        goto LAB_000161f0;
      }
    }
  }
  (*pcVar3)();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  if (*(int *)(unaff_s1 + 0x30) != 2) {
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
  }
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  iVar1 = *(int *)(unaff_s1 + 0x30);
  if (iVar1 == 3) {
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    if (unaff_s3 == 0x48317011) {
      iVar1 = 0x3fc;
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      do {
        iVar1 = iVar1 + 1;
        (**(code **)(in_stack_00000010 + -0x7d64))();
      } while (iVar1 != 0x40c);
      iVar1 = 0x40c;
      do {
        iVar1 = iVar1 + 1;
        (**(code **)(in_stack_00000010 + -0x7d64))();
      } while (iVar1 != 0x41c);
      iVar1 = 0x41c;
      do {
        iVar1 = iVar1 + 1;
        (**(code **)(in_stack_00000010 + -0x7d64))();
      } while (iVar1 != 0x45c);
      iVar1 = 0x45c;
      do {
        iVar1 = iVar1 + 1;
        (**(code **)(in_stack_00000010 + -0x7d64))();
      } while (iVar1 != 0x49c);
      goto LAB_000177ac;
    }
LAB_0001783c:
    iVar1 = *(int *)(unaff_s1 + 0x30);
    if (iVar1 == 1) {
      pcVar3 = *(code **)(in_stack_00000010 + -0x7d64);
LAB_00017850:
      iVar1 = 0;
      (*pcVar3)();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      do {
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        (**(code **)(in_stack_00000010 + -0x7d64))();
        iVar1 = iVar1 + 0x19;
        (**(code **)(in_stack_00000010 + -0x7d64))();
      } while (iVar1 != 0x4b);
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      iVar1 = *(int *)(unaff_s1 + 0x30);
    }
  }
  else {
    if (unaff_s3 == 0x48317011) {
LAB_000177ac:
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      goto LAB_0001783c;
    }
    pcVar3 = *(code **)(in_stack_00000010 + -0x7d64);
    if (iVar1 == 1) goto LAB_00017850;
  }
  pcVar3 = *(code **)(in_stack_00000010 + -0x7d64);
  if (iVar1 != 2) {
    iVar1 = 0;
    do {
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      iVar1 = iVar1 + 0x21;
      (**(code **)(in_stack_00000010 + -0x7d64))();
    } while (iVar1 != 99);
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    if ((*(int *)(unaff_s1 + 0x30) != 2) && (unaff_s3 == 0x48317011)) {
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      (**(code **)(in_stack_00000010 + -0x7d64))();
      if (*(int *)(unaff_s1 + 0x2038) != 0) {
        iVar1 = 0;
        do {
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          iVar1 = iVar1 + 0x21;
          (**(code **)(in_stack_00000010 + -0x7d64))();
        } while (iVar1 != 99);
        iVar1 = 0;
        do {
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          (**(code **)(in_stack_00000010 + -0x7d64))();
          iVar1 = iVar1 + 10;
          (**(code **)(in_stack_00000010 + -0x7d64))();
        } while (iVar1 != 0x118);
        pcVar3 = *(code **)(in_stack_00000010 + -0x7d64);
        goto LAB_000168a0;
      }
    }
    pcVar3 = *(code **)(in_stack_00000010 + -0x7d64);
  }
LAB_000168a0:
  (*pcVar3)();
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



// ==== H264EncInit_V2 @ 00025d74 size=244

int H264EncInit_V2(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *local_20 [3];
  
  local_20[0] = (undefined4 *)0x0;
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
    iVar2 = -2;
  }
  else {
    uVar1 = (*(code *)PTR_EWLReadAsicID_000466b0)();
    if ((uVar1 & 0xffff0000) != 0x48310000) {
      return -1;
    }
    iVar2 = (*(code *)PTR_H264CheckCfg_00046654)(param_1);
    if (iVar2 == -1) {
      iVar2 = -3;
    }
    else {
      iVar2 = (*(code *)PTR_H264Init_00046664)(param_1,local_20,param_3,param_4);
      if (iVar2 == 0) {
        *local_20[0] = 0xa1;
        local_20[0][0xb42] = local_20[0];
        *param_2 = local_20[0];
      }
    }
  }
  return iVar2;
}



// ==== H264EncInit @ 00025e68 size=32

void H264EncInit(undefined4 param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00025e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_H264EncInit_V2_000465cc)(param_1,param_2,0xffffffff,0);
  return;
}



