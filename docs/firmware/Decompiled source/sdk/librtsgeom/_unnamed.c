/* librtsgeom — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsgeom.h"

// ==== FUN_00010a78 @ 00010a78 size=80

void FUN_00010a78(void)

{
  if (((DAT_00023758 - (int)(PTR_Elf32_Ehdr_0002375c + 0x3750) >> 2) -
       (DAT_00023758 - (int)(PTR_Elf32_Ehdr_0002375c + 0x3750) >> 0x1f) >> 1 != 0) &&
     (DAT_000237b4 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_000237b4)();
    return;
  }
  return;
}



// ==== FUN_00010ac8 @ 00010ac8 size=216

void FUN_00010ac8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = PTR_Elf32_Ehdr_0002375c;
  if (PTR_Elf32_Ehdr_0002375c[0x37e0] == '\0') {
    if (DAT_000237c4 != (code *)0x0) {
      (*DAT_000237c4)(*DAT_00023760);
    }
    puVar2 = PTR_Elf32_Ehdr_0002375c;
    puVar3 = PTR_Elf32_Ehdr_0002375c + 0x3744;
    iVar6 = DAT_00023764 - (int)puVar3;
    while (uVar4 = *(uint *)(puVar2 + 0x37e4), iVar5 = uVar4 + 1, uVar4 < (iVar6 >> 2) - 1U) {
      *(int *)(puVar2 + 0x37e4) = iVar5;
      (**(code **)(puVar3 + iVar5 * 4))();
    }
    (*(code *)(DAT_00023768 + 0xa30))();
    puVar1[0x37e0] = 1;
  }
  return;
}



// ==== FUN_00010ba0 @ 00010ba0 size=80

void FUN_00010ba0(void)

{
  if ((*(int *)(PTR_Elf32_Ehdr_0002375c + 0x374c) != 0) && (DAT_00023778 != (code *)0x0)) {
    (*DAT_00023778)(PTR_Elf32_Ehdr_0002375c + 0x374c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(DAT_00023768 + 0xa78))();
  return;
}



// ==== FUN_00010d54 @ 00010d54 size=284

/* WARNING: Control flow encountered bad instruction data */

double FUN_00010d54(double *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  double in_f2_3;
  double dVar3;
  double dVar4;
  
  dVar4 = (double)CONCAT44(param_4,param_3);
  dVar3 = 0.0;
  if (((param_1 == (double *)0x0) || ((*param_1 == 0.0 && (param_1[1] == 0.0)))) &&
     ((*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x36c0,0x1d,DAT_00023768 + 0x3040),
     param_1 == (double *)0x0)) {
    uVar2 = 0x1d;
    iVar1 = DAT_00023768 + 0x3040;
  }
  else {
    if (*param_1 == dVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    in_f2_3 = *param_1;
    if (in_f2_3 != dVar3) goto LAB_00010e8c;
    uVar2 = 0x1e;
    iVar1 = DAT_00023768 + 0x30bc;
  }
  (*DAT_00023788)(iVar1,DAT_00023768 + 0x3060,uVar2,DAT_00023768 + 0x36a8);
LAB_00010e8c:
  return (dVar4 * param_1[1] + param_1[2]) / in_f2_3;
}



// ==== FUN_00010eb4 @ 00010eb4 size=208

void FUN_00010eb4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    iVar2 = DAT_00023768 + 0x30c4;
    (*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x3690,0x25,iVar2);
    uVar1 = 0x25;
  }
  else {
    UNRECOVERED_JUMPTABLE = DAT_000237a8;
    if (param_2 != 0) goto LAB_00010f70;
    iVar2 = DAT_00023768 + 0x30c8;
    (*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x3690,0x26,iVar2);
    uVar1 = 0x26;
  }
  UNRECOVERED_JUMPTABLE = DAT_00023788;
  (*DAT_00023788)(iVar2,DAT_00023768 + 0x3060,uVar1,DAT_00023768 + 0x3678);
LAB_00010f70:
                    /* WARNING: Could not recover jumptable at 0x00010f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// ==== FUN_000110e0 @ 000110e0 size=332

/* WARNING: Control flow encountered bad instruction data */

double FUN_000110e0(double *param_1,int param_2)

{
  undefined4 uVar1;
  double *pdVar2;
  code *pcVar3;
  double in_f0_1;
  double dVar4;
  
  dVar4 = 0.0;
  if (((param_1 == (double *)0x0) || ((*param_1 == 0.0 && (in_f0_1 = param_1[1], in_f0_1 == 0.0))))
     && ((*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x3618,0x4d,DAT_00023768 + 0x3040),
        param_1 == (double *)0x0)) {
    uVar1 = 0x4d;
    pdVar2 = (double *)(DAT_00023768 + 0x3040);
  }
  else {
    in_f0_1 = *param_1;
    if (in_f0_1 == dVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar3 = DAT_0002379c;
    if (param_2 != 0) goto LAB_00011214;
    pdVar2 = (double *)(DAT_00023768 + 0x30cc);
    (*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x3618,0x4e,pdVar2);
    uVar1 = 0x4e;
    param_1 = pdVar2;
  }
  pcVar3 = DAT_00023788;
  (*DAT_00023788)(pdVar2,DAT_00023768 + 0x3060,uVar1,DAT_00023768 + 0x35f8);
LAB_00011214:
  (*pcVar3)(param_1);
  return *(double *)(param_2 + 8) - in_f0_1;
}



// ==== FUN_00011264 @ 00011264 size=596

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00011264(double *param_1,double *param_2)

{
  int iVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = 0.0;
  if (((param_1 == (double *)0x0) || ((*param_1 == 0.0 && (param_1[1] == 0.0)))) &&
     ((*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x35dc,0x5e,DAT_00023768 + 0x30d4),
     param_1 == (double *)0x0)) {
    uVar2 = 0x5e;
    iVar1 = DAT_00023768 + 0x30d4;
  }
  else {
    if (*param_1 == dVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_2 != (double *)0x0) {
      if (*param_2 == dVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      dVar3 = *param_2;
      if (dVar3 != dVar4) {
        if ((*param_1 == dVar4) && (dVar3 == 0.0)) {
          if (param_1[2] / param_1[1] == param_2[2] / param_2[1]) {
            return 0;
          }
        }
        else {
          dVar3 = *param_1 * dVar3;
          if (dVar3 != dVar4) {
            (*DAT_0002379c)(param_1);
            dVar4 = dVar3;
            (*DAT_0002379c)(param_2);
            if (dVar4 == dVar3) {
              (*DAT_0002379c)(param_1);
              dVar4 = dVar3;
              (*DAT_0002379c)(param_2);
              if (dVar4 == dVar3) {
                return 0;
              }
              return 0xffffffc0;
            }
          }
        }
        return 0xffffffc0;
      }
      halt_baddata();
    }
    (*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x35dc,0x5f,DAT_00023768 + 0x30f4);
    uVar2 = 0x5f;
    iVar1 = DAT_00023768 + 0x30f4;
  }
  (*DAT_00023788)(iVar1,DAT_00023768 + 0x3060,uVar2,DAT_00023768 + 0x35c0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_000114f8 @ 000114f8 size=416

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_000114f8(double *param_1,double *param_2)

{
  undefined4 uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = 0.0;
  if (((param_1 == (double *)0x0) || ((*param_1 == 0.0 && (param_1[1] == 0.0)))) &&
     ((*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x35a0,0x74,DAT_00023768 + 0x30d4),
     param_1 == (double *)0x0)) {
    uVar1 = 0x74;
    iVar2 = DAT_00023768 + 0x30d4;
  }
  else {
    if (*param_1 == dVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_2 != (double *)0x0) {
      if (*param_2 == dVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      dVar3 = *param_2;
      if (dVar3 == dVar4) {
        DAT_00023768 = DAT_00023768;
        DAT_000237a4 = DAT_000237a4;
        halt_baddata();
      }
      if (((*param_1 != dVar4) || (uVar1 = 0, dVar3 != 0.0)) &&
         (uVar1 = 0xffffffb9, param_1[1] / *param_1 == param_2[1] / dVar3)) {
        uVar1 = 0;
      }
      return uVar1;
    }
    (*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x35a0,0x75,DAT_00023768 + 0x30f4);
    uVar1 = 0x75;
    iVar2 = DAT_00023768 + 0x30f4;
  }
  (*DAT_00023788)(iVar2,DAT_00023768 + 0x3060,uVar1,DAT_00023768 + 0x3580);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_000116d8 @ 000116d8 size=440

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_000116d8(double *param_1,double *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  double dVar3;
  
  dVar3 = 0.0;
  if (((param_1 == (double *)0x0) || ((*param_1 == 0.0 && (param_1[1] == 0.0)))) &&
     ((*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x3560,0x86,DAT_00023768 + 0x30d4),
     param_1 == (double *)0x0)) {
    uVar2 = 0x86;
    iVar1 = DAT_00023768 + 0x30d4;
  }
  else {
    if (*param_1 == dVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_2 != (double *)0x0) {
      if (*param_2 == dVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*param_2 == dVar3) {
        halt_baddata();
      }
      iVar1 = (*DAT_000237d4)(param_1,param_2);
      if (iVar1 == 0) {
        uVar2 = 0xffffffbf;
      }
      else {
        iVar1 = (*DAT_000237c8)(param_1,param_2);
        if (iVar1 == 0) {
          uVar2 = 0xffffffb8;
        }
        else {
          if (param_3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar2 = 0;
        }
      }
      return uVar2;
    }
    (*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x3560,0x87,DAT_00023768 + 0x30f4);
    uVar2 = 0x87;
    iVar1 = DAT_00023768 + 0x30f4;
  }
  (*DAT_00023788)(iVar1,DAT_00023768 + 0x3060,uVar2,DAT_00023768 + 0x3540);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_0001192c @ 0001192c size=544

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0001192c(double *param_1,double *param_2,double *param_3)

{
  int iVar1;
  undefined4 uVar2;
  double *pdVar3;
  code *pcVar4;
  double dVar5;
  undefined1 auStack_48 [24];
  double local_30;
  double local_28;
  
  dVar5 = 0.0;
  if (((param_1 == (double *)0x0) || ((*param_1 == 0.0 && (param_1[1] == 0.0)))) &&
     ((*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x3514,0xa6,DAT_00023768 + 0x3040),
     param_1 == (double *)0x0)) {
    uVar2 = 0xa6;
    pdVar3 = (double *)(DAT_00023768 + 0x3040);
  }
  else {
    if (*param_1 == dVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar4 = DAT_000237b8;
    if (param_2 != (double *)0x0) goto LAB_00011a68;
    pdVar3 = (double *)(DAT_00023768 + 0x3114);
    (*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x3514,0xa7,pdVar3);
    uVar2 = 0xa7;
    param_2 = pdVar3;
  }
  pcVar4 = DAT_00023788;
  (*DAT_00023788)(pdVar3,DAT_00023768 + 0x3060,uVar2,DAT_00023768 + 0x34e8);
LAB_00011a68:
  uVar2 = (*pcVar4)(param_2,param_2 + 2,auStack_48);
  iVar1 = (*DAT_00023794)(uVar2);
  if (iVar1 == 0) {
    uVar2 = (*DAT_000237b0)(param_1,auStack_48,&local_30);
    iVar1 = (*DAT_00023794)(uVar2);
    if (iVar1 == 0) {
      if ((dVar5 < (local_30 - *param_2) * (local_30 - param_2[2])) ||
         (0.0 < (local_28 - param_2[1]) * (local_28 - param_2[3]))) {
        uVar2 = 0xffffffcf;
      }
      else {
        uVar2 = 0;
        if (param_3 != (double *)0x0) {
          *param_3 = local_30;
          param_3[1] = local_28;
        }
      }
    }
  }
  return uVar2;
}



// ==== FUN_00011b60 @ 00011b60 size=384

/* WARNING: Control flow encountered bad instruction data */

void FUN_00011b60(double *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint unaff_s7;
  
  if (((param_1 == (double *)0x0) || ((*param_1 == 0.0 && (param_1[1] == 0.0)))) &&
     ((*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x34c8,0xca,DAT_00023768 + 0x3040),
     param_1 == (double *)0x0)) {
    uVar1 = 0xca;
    iVar2 = DAT_00023768 + 0x3040;
  }
  else {
    unaff_s7 = 0;
    if (*param_1 == 0.0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_2 != 0) goto LAB_00011cbc;
    iVar2 = DAT_00023768 + 0x311c;
    (*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x34c8,0xcb,iVar2);
    uVar1 = 0xcb;
  }
  (*DAT_00023788)(iVar2,DAT_00023768 + 0x3060,uVar1,DAT_00023768 + 0x34a8);
LAB_00011cbc:
  if ((unaff_s7 & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_00011dd0 @ 00011dd0 size=336

undefined4 FUN_00011dd0(double *param_1,double *param_2,double *param_3)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  
  if (param_1 == (double *)0x0) {
    param_1 = (double *)(DAT_00023768 + 0x3124);
    (*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x3488,0xff,param_1);
    param_3 = (double *)&DAT_000000ff;
  }
  else {
    if (param_2 != (double *)0x0) goto LAB_00011e88;
    param_1 = (double *)(DAT_00023768 + 0x3128);
    (*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x3488,0x100,param_1);
    param_3 = (double *)0x100;
  }
  param_2 = (double *)(DAT_00023768 + 0x3060);
  (*DAT_00023788)();
LAB_00011e88:
  dVar2 = *param_1;
  if (param_1[1] < dVar2) {
    *param_1 = param_1[1];
    param_1[1] = dVar2;
  }
  dVar2 = *param_2;
  if (param_2[1] < dVar2) {
    *param_2 = param_2[1];
    param_2[1] = dVar2;
  }
  dVar2 = *param_1;
  if (dVar2 <= *param_2) {
    dVar2 = *param_2;
  }
  dVar3 = param_1[1];
  if (param_2[1] <= dVar3) {
    dVar3 = param_2[1];
  }
  uVar1 = 0xffffffba;
  if ((dVar2 <= dVar3) && (uVar1 = 0, param_3 != (double *)0x0)) {
    *param_3 = dVar2;
    param_3[1] = dVar3;
  }
  return uVar1;
}



// ==== FUN_00011f20 @ 00011f20 size=352

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00011f20(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [60];
  
  if (param_1 == 0) {
    iVar2 = DAT_00023768 + 0x311c;
    (*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x3440,0x121,iVar2);
    uVar1 = 0x121;
  }
  else {
    if (param_2 != 0) goto LAB_00011fec;
    iVar2 = DAT_00023768 + 0x3114;
    (*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x3440,0x122,iVar2);
    uVar1 = 0x122;
  }
  param_2 = DAT_00023768 + 0x3060;
  (*DAT_00023788)(iVar2,param_2,uVar1,DAT_00023768 + 0x3418);
LAB_00011fec:
  uVar1 = (*DAT_000237b8)(param_2,param_2 + 0x10,auStack_50);
  iVar2 = (*DAT_00023794)(uVar1);
  if (iVar2 == 0) {
    uVar1 = (*DAT_000237ac)(auStack_50,param_1,auStack_70,auStack_60);
    iVar2 = (*DAT_00023794)(uVar1);
    if (iVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return uVar1;
}



// ==== FUN_000120ec @ 000120ec size=456

/* WARNING: Control flow encountered bad instruction data */

void FUN_000120ec(double *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  double in_f2_3;
  double dVar4;
  
  if (((param_1 == (double *)0x0) || ((*param_1 == 0.0 && (param_1[1] == 0.0)))) &&
     ((*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x33fc,0x143,DAT_00023768 + 0x3040),
     param_1 == (double *)0x0)) {
    uVar2 = 0x143;
    puVar3 = (undefined8 *)(DAT_00023768 + 0x3040);
    iVar1 = DAT_00023768 + 0x3060;
  }
  else {
    in_f2_3 = *param_1;
    if (in_f2_3 == 0.0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_2 != 0) goto LAB_0001221c;
    puVar3 = (undefined8 *)(DAT_00023768 + 0x30cc);
    (*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x33fc,0x144,puVar3);
    uVar2 = 0x144;
    iVar1 = DAT_00023768 + 0x3060;
    param_3 = puVar3;
  }
  while( true ) {
    (*DAT_00023788)(puVar3,iVar1,uVar2,DAT_00023768 + 0x33e0);
LAB_0001221c:
    iVar1 = DAT_00023768;
    if (param_3 != (undefined8 *)0x0) break;
    puVar3 = (undefined8 *)(DAT_00023768 + 0x312c);
    (*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x33fc,0x145,puVar3);
    uVar2 = 0x145;
    iVar1 = DAT_00023768 + 0x3060;
    param_3 = puVar3;
  }
  dVar4 = 0.0;
  if (in_f2_3 == 0.0) {
    *param_3 = *(undefined8 *)(DAT_00023768 + 0x3710);
  }
  else {
    dVar4 = param_1[1];
    if (dVar4 == 0.0) {
      *param_3 = 0;
      dVar4 = *(double *)(iVar1 + 0x3710);
    }
    else {
      *param_3 = *(undefined8 *)(DAT_00023768 + 0x3710);
      dVar4 = 0.0 - *param_1 / dVar4;
    }
  }
  param_3[1] = dVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_000122f4 @ 000122f4 size=364

/* WARNING: Control flow encountered bad instruction data */

void FUN_000122f4(double *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((param_1 == (double *)0x0) || ((*param_1 == 0.0 && (param_1[1] == 0.0)))) &&
     ((*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x33c4,0x15d,DAT_00023768 + 0x3040),
     param_1 == (double *)0x0)) {
    uVar2 = 0x15d;
    iVar3 = DAT_00023768 + 0x3040;
    iVar1 = DAT_00023768 + 0x3060;
  }
  else {
    if (*param_1 == 0.0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_2 != 0) goto LAB_00012424;
    iVar3 = DAT_00023768 + 0x30cc;
    (*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x33c4,0x15e,iVar3);
    uVar2 = 0x15e;
    iVar1 = DAT_00023768 + 0x3060;
  }
  while( true ) {
    (*DAT_00023788)(iVar3,iVar1,uVar2,DAT_00023768 + 0x33a8);
LAB_00012424:
    if (param_3 != 0) break;
    iVar3 = DAT_00023768 + 0x3134;
    (*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x33c4,0x15f,iVar3);
    uVar2 = 0x15f;
    iVar1 = DAT_00023768 + 0x3060;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_000124b0 @ 000124b0 size=240

void FUN_000124b0(double *param_1,double *param_2)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == (double *)0x0) {
    param_1 = (double *)(DAT_00023768 + 0x3124);
    (*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x3388,0x16b,param_1);
    uVar1 = 0x16b;
  }
  else {
    UNRECOVERED_JUMPTABLE = DAT_000237d0;
    if (param_2 != (double *)0x0) goto LAB_0001256c;
    param_1 = (double *)(DAT_00023768 + 0x3128);
    (*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x3388,0x16c,param_1);
    uVar1 = 0x16c;
  }
  param_2 = (double *)(DAT_00023768 + 0x3060);
  UNRECOVERED_JUMPTABLE = DAT_00023788;
  (*DAT_00023788)(param_1,param_2,uVar1,DAT_00023768 + 0x3368);
LAB_0001256c:
                    /* WARNING: Could not recover jumptable at 0x00012598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((*param_1 - *param_2) * (*param_1 - *param_2) +
             (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]));
  return;
}



// ==== FUN_000127c4 @ 000127c4 size=816

/* WARNING: Control flow encountered bad instruction data */

int FUN_000127c4(double *param_1,double *param_2,double *param_3,double *param_4)

{
  int iVar1;
  undefined4 uVar2;
  double in_f0_1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double in_f28_29;
  double dVar10;
  
  dVar7 = 0.0;
  if (((param_1 == (double *)0x0) || ((*param_1 == 0.0 && (in_f0_1 = param_1[1], in_f0_1 == 0.0))))
     && ((*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x32f4,0x199,DAT_00023768 + 0x3040),
        param_1 == (double *)0x0)) {
    uVar2 = 0x199;
    iVar1 = DAT_00023768 + 0x3040;
  }
  else {
    in_f0_1 = *param_1;
    if (in_f0_1 == dVar7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (((param_2 != (double *)0x0) && (in_f0_1 = param_2[2], dVar7 < in_f0_1)) ||
       ((*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x32f4,0x19a,DAT_00023768 + 0x319c),
       param_2 != (double *)0x0)) {
      in_f0_1 = param_2[2];
      in_f28_29 = 0.0;
      if (dVar7 < in_f0_1) goto LAB_00012948;
    }
    uVar2 = 0x19a;
    iVar1 = DAT_00023768 + 0x319c;
  }
  (*DAT_00023788)(iVar1,DAT_00023768 + 0x3060,uVar2,DAT_00023768 + 13000);
LAB_00012948:
  (*DAT_00023784)(param_2,param_1);
  if (in_f0_1 < in_f28_29) {
    iVar1 = (int)in_f0_1;
    (*DAT_000237a4)(4,DAT_00023768 + 0x31bc,DAT_00023768 + 0x32f4,0x19f,iVar1);
  }
  else {
    dVar5 = param_2[2];
    iVar1 = 1;
    if (in_f0_1 <= dVar5) {
      dVar4 = *param_1;
      dVar3 = *param_2;
      if (dVar4 != dVar7) {
        iVar1 = 2;
      }
      dVar8 = param_2[1];
      if (dVar4 == dVar7) {
        in_f28_29 = in_f28_29 - param_1[2] / param_1[1];
        dVar7 = (in_f28_29 - dVar3) * (in_f28_29 - dVar3);
        (*DAT_000237d0)(dVar5 * dVar5 - dVar7);
        if (param_3 != (double *)0x0) {
          *param_3 = in_f28_29;
          param_3[1] = dVar8 + dVar7;
        }
        if (param_4 != (double *)0x0) {
          *param_4 = in_f28_29;
          param_4[1] = dVar8 - dVar7;
        }
      }
      else {
        dVar10 = param_1[2] / dVar4;
        dVar4 = param_1[1] / dVar4;
        dVar8 = dVar10 - dVar8;
        dVar6 = dVar4 * dVar4 + *(double *)(DAT_00023768 + 0x3710);
        dVar9 = dVar4 * dVar8 - dVar3;
        dVar9 = dVar9 + dVar9;
        dVar3 = dVar8 * dVar8 + dVar3 * dVar3;
        (*DAT_000237d0)(dVar9 * dVar9 -
                        dVar6 * *(double *)(DAT_00023768 + 0x3718) * (dVar3 - dVar5 * dVar5));
        if (param_3 != (double *)0x0) {
          dVar5 = ((in_f28_29 - dVar9) + dVar3) / (dVar6 + dVar6);
          *param_3 = dVar5;
          param_3[1] = dVar4 * dVar5 + dVar10;
        }
        if (param_4 != (double *)0x0) {
          dVar7 = ((dVar7 - dVar9) - dVar3) / (dVar6 + dVar6);
          *param_4 = dVar7;
          param_4[1] = dVar4 * dVar7 + dVar10;
        }
      }
    }
    else {
      iVar1 = -0x46;
    }
  }
  return iVar1;
}



// ==== FUN_00012b08 @ 00012b08 size=276

double FUN_00012b08(double param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = 0.0;
  if (((param_2 == (double *)0x0) || ((*param_2 == 0.0 && (param_2[1] == 0.0)))) &&
     ((*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x32ac,0x1d3,DAT_00023768 + 0x3040),
     param_2 == (double *)0x0)) goto LAB_00012ba4;
  dVar1 = *param_2;
  param_1 = param_2[1];
  if (dVar1 == dVar2) {
    while (param_1 == 0.0) {
LAB_00012ba4:
      (*DAT_00023788)(DAT_00023768 + 0x3040,DAT_00023768 + 0x3060,0x1d3,DAT_00023768 + 0x3290);
    }
    dVar2 = *(double *)(DAT_00023768 + 0x3720);
  }
  else {
    (*DAT_00023798)(param_1 / dVar1);
    dVar2 = (dVar1 / *(double *)(DAT_00023768 + 0x3728)) * *(double *)(DAT_00023768 + 0x3730);
  }
  return dVar2;
}



// ==== FUN_00012c1c @ 00012c1c size=436

/* WARNING: Control flow encountered bad instruction data */

double FUN_00012c1c(double *param_1,double *param_2)

{
  int iVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = 0.0;
  if (((param_1 == (double *)0x0) || ((*param_1 == 0.0 && (param_1[1] == 0.0)))) &&
     ((*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x3268,0x1e4,DAT_00023768 + 0x30d4),
     param_1 == (double *)0x0)) {
    uVar2 = 0x1e4;
    iVar1 = DAT_00023768 + 0x30d4;
  }
  else {
    if (*param_1 == dVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_2 != (double *)0x0) {
      if (*param_2 == dVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      dVar3 = *param_2;
      if (dVar3 == dVar4) {
        halt_baddata();
      }
      (*DAT_000237cc)(param_1);
      dVar4 = dVar3;
      (*DAT_000237cc)(param_2);
      if (dVar3 < dVar4) {
        dVar3 = dVar4 - dVar3;
      }
      else {
        dVar3 = dVar3 - dVar4;
      }
      if (*(double *)(DAT_00023768 + 0x3720) < dVar3) {
        dVar3 = *(double *)(DAT_00023768 + 0x3730) - dVar3;
      }
      return dVar3;
    }
    (*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x3268,0x1e5,DAT_00023768 + 0x30f4);
    uVar2 = 0x1e5;
    iVar1 = DAT_00023768 + 0x30f4;
  }
  (*DAT_00023788)(iVar1,DAT_00023768 + 0x3060,uVar2,DAT_00023768 + 0x3240);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_00012e0c @ 00012e0c size=200

/* WARNING: Control flow encountered bad instruction data */

void FUN_00012e0c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    iVar2 = DAT_00023768 + 0x31f8;
    (*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x3220,0x1f8,iVar2);
    uVar1 = 0x1f8;
  }
  else {
    if (param_2 != 0) {
      halt_baddata();
    }
    iVar2 = DAT_00023768 + 0x30cc;
    (*DAT_000237a4)(4,DAT_00023768 + 0x3020,DAT_00023768 + 0x3220,0x1f9,iVar2);
    uVar1 = 0x1f9;
  }
  (*DAT_00023788)(iVar2,DAT_00023768 + 0x3060,uVar1,DAT_00023768 + 0x3200);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_00012f00 @ 00012f00 size=88

void FUN_00012f00(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)(PTR_Elf32_Ehdr_0002375c + 0x373c);
  pcVar2 = (code *)*puVar1;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



