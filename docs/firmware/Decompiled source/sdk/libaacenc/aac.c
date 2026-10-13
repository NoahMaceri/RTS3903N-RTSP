/* libaacenc — "aac" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "libaacenc.h"

// ==== AAC_002 @ 00012900 size=24

undefined4 AAC_002(void)

{
  return 0x10103;
}



// ==== AAC_004 @ 00012a10 size=20

undefined4 AAC_004(void)

{
  return 0x800;
}



// ==== AAC_005 @ 00012a24 size=20

undefined4 AAC_005(void)

{
  return 0x1000;
}



// ==== AAC_006 @ 00012a38 size=16

void AAC_006(void)

{
  return;
}



// ==== AAC_007 @ 00012a48 size=240

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Control flow encountered unimplemented instructions */

undefined4 AAC_007(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 56000) {
    if (param_1 < 0x9c41) {
      if (32000 < param_1) {
        return 0x3070;
      }
      if (param_1 < 0x6d61) {
        if (param_1 < 0x5dc1) {
          if (param_1 < 0x4e21) {
            if (param_1 < 0x3e81) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
              halt_unimplemented();
            }
            uVar1 = 0x157c;
          }
          else {
            uVar1 = 0x1964;
          }
        }
        else {
          uVar1 = 8000;
        }
      }
      else {
        uVar1 = 10000;
      }
    }
    else {
      uVar1 = 0x39d0;
    }
  }
  else {
    if (param_1 < 64000) {
      return 16000;
    }
    if (param_1 < 80000) {
      return 0x4330;
    }
    if (95999 < param_1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = 0x4c90;
  }
  return uVar1;
}



// ==== AAC_008 @ 00012b4c size=92

/* WARNING: Control flow encountered bad instruction data */

void AAC_008(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_AAC_007_0004bb44;
  *param_1 = param_4;
  param_1[0x2ed] = param_3;
  param_1[1] = param_2;
  param_1[0x2ff] = 0;
  param_1[0x2fd] = 0;
  uVar2 = (*(code *)puVar1)(param_3);
  puVar1 = PTR_AAC_101_0004bc6c;
  param_1[0x2ee] = uVar2;
  (*(code *)puVar1)(param_1[1]);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_003 @ 00012c68 size=156

/* WARNING: Control flow encountered bad instruction data */

void AAC_003(undefined4 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_AAC_101_0004bc6c;
  *param_1 = param_2;
  param_1[1] = 48000;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[0x2fb] = 0;
  param_1[0x2fc] = 0;
  param_1[0x2fd] = 0;
  param_1[0x2fe] = 0;
  param_1[0x2ff] = 0;
  uVar2 = (*(code *)puVar1)(48000);
  param_1[0x2ed] = 32000;
  puVar1 = PTR_AAC_007_0004bb44;
  param_1[2] = uVar2;
  param_1[0x2e8] = 1;
  param_1[0x2e9] = 1;
  param_1[0x2ea] = 1;
  param_1[0x2eb] = 0;
  param_1[0x2ec] = 1;
  (*(code *)puVar1)(32000);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_101 @ 00012e00 size=204

/* WARNING: Control flow encountered unimplemented instructions */

undefined4 AAC_101(char *param_1)

{
  undefined4 uVar1;
  
  if ((char *)0x16770 < param_1) {
    return 0;
  }
  if (param_1 < "o.0") {
    uVar1 = 2;
    if ((((param_1 < (char *)0xd882) && (uVar1 = 3, param_1 < (char *)0xb3b9)) &&
        (uVar1 = 4, param_1 < (char *)0x92be)) &&
       (((uVar1 = 5, param_1 < (char *)0x6c41 && (uVar1 = 6, param_1 < (char *)0x59dc)) &&
        ((uVar1 = 7, param_1 < (char *)0x495f && (uVar1 = 8, param_1 < (char *)0x3620)))))) {
      if (param_1 < (char *)0x2cee) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
      uVar1 = 9;
    }
    return uVar1;
  }
  return 1;
}



// ==== AAC_102 @ 00012ed0 size=44

undefined4 AAC_102(int param_1)

{
  undefined *puVar1;
  uint uVar2;
  
  puVar1 = PTR_AAC_103_0004bd1c + 0x2021;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | (uint)(param_1 * 4) >> (3 - uVar2) * 8;
  return *(undefined4 *)(param_1 * 4);
}



// ==== AAC_104 @ 00012efc size=20

undefined4 AAC_104(void)

{
  return 8000;
}



// ==== AAC_105 @ 00012f10 size=44

undefined4 AAC_105(int param_1)

{
  undefined *puVar1;
  uint uVar2;
  
  puVar1 = PTR_AAC_106_0004bd34 + 0x2021;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | (uint)(param_1 * 4) >> (3 - uVar2) * 8;
  return *(undefined4 *)(param_1 * 4);
}



// ==== AAC_Malloc @ 00012f40 size=216

undefined4 * AAC_Malloc(int param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  
  puVar5 = PTR_malloc_0004bcdc;
  puVar4 = PTR_Malloc_Size_0004bc08;
  puVar3 = PTR_Malloc_Times_0004bb68;
  if (param_1 < 1) {
    return (undefined4 *)0x0;
  }
  puVar11 = (undefined4 *)(param_1 + 8);
  iVar10 = *(int *)PTR_Malloc_Times_0004bb68;
  iVar7 = *(int *)PTR_Malloc_Size_0004bc08;
  uVar12 = iVar7 + 0x1821;
  uVar1 = uVar12 & 3;
  puVar2 = (uint *)(uVar12 - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | (uint)puVar11 >> (3 - uVar1) * 8;
  *(int *)puVar3 = iVar10 + 1;
  *(int *)puVar4 = iVar7;
  puVar9 = puVar11;
  puVar6 = (undefined4 *)(*(code *)puVar5)();
  if (puVar6 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)(PTR_DAT_0004bae0 + 0x13e0);
    (*(code *)PTR_printf_0004bd4c)(puVar9,puVar11);
  }
  *puVar6 = 0x1234;
  puVar6[1] = puVar11;
  if (2 < (uint)puVar11 >> 2) {
    uVar12 = 2;
    do {
      uVar8 = uVar12 << 2;
      uVar12 = uVar12 + 1;
      uVar1 = (int)puVar6 + 0x2021U & 3;
      puVar2 = (uint *)(((int)puVar6 + 0x2021U) - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar8 >> (3 - uVar1) * 8;
      *puVar9 = 0;
    } while (uVar12 != (uint)puVar11 >> 2);
  }
  return puVar6 + 2;
}



// ==== AAC_Free @ 00013018 size=128

void AAC_Free(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined *UNRECOVERED_JUMPTABLE;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  
  puVar5 = PTR_Free_Times_0004bbe8;
  puVar4 = PTR_Free_Size_0004bb84;
  UNRECOVERED_JUMPTABLE = PTR_free_0004baf8;
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + -8) != 0x1234) {
                    /* WARNING: Could not recover jumptable at 0x00013050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_puts_0004bcec)(PTR_DAT_0004bae0 + 0x1400);
    return;
  }
  uVar6 = *(uint *)PTR_Free_Size_0004bb84;
  iVar7 = *(int *)PTR_Free_Times_0004bbe8;
  uVar1 = *(int *)(param_1 + -4) + 0x2821;
  uVar2 = uVar1 & 3;
  puVar3 = (uint *)(uVar1 - uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar6 >> (3 - uVar2) * 8;
  *(uint *)puVar4 = uVar6;
  *(int *)puVar5 = iVar7 + 1;
                    /* WARNING: Could not recover jumptable at 0x00013088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1 + -8);
  return;
}



// ==== AAC_108 @ 00013098 size=96

void AAC_108(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  puVar4 = param_1 + 0x400;
  do {
    uVar3 = *param_1;
    uVar2 = param_1[1];
    uVar1 = param_1[2];
    uVar5 = param_1[3];
    param_1 = param_1 + 4;
    *param_2 = uVar3;
    param_2[1] = uVar2;
    param_2[2] = uVar1;
    param_2[3] = uVar5;
    param_2 = param_2 + 4;
  } while (param_1 != puVar4);
  return;
}



// ==== AAC_109 @ 000130f8 size=16

void AAC_109(void)

{
  return;
}



// ==== AAC_110 @ 00013108 size=28

void AAC_110(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}



// ==== AAC_113 @ 00013124 size=24

void AAC_113(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



// ==== AAC_114 @ 0001313c size=208

void AAC_114(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  byte *pbVar3;
  uint in_t0;
  uint uVar4;
  uint in_t1;
  int iVar5;
  uint uVar6;
  
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    iVar5 = *(int *)(param_1 + 0x10);
    uVar6 = uVar2 & 7;
    prefetch(0x102b,0x18);
    if (0 < param_2) {
      do {
        while( true ) {
          prefetch(param_2 + 0x4023,3);
          prefetch(in_t0 + 0x4023,0x18);
          prefetch(*(byte *)(in_t0 - 0x3fd8) + 0x4823,0x18);
          uRam00001820 = uRam00001820 & 0xffff0000;
          uVar4 = ((1 << uVar6) - 1U & param_3 >> (in_t0 & 0x1f)) << (in_t1 & 0x1f);
          in_t1 = (uint)(0 < param_2);
          pbVar3 = (byte *)((int)uVar2 >> 3);
          if (*(byte *)(in_t0 - 0x3fd8) != 8) break;
          uVar2 = iVar5 + 0x3821U & 3;
          puVar1 = (uint *)((iVar5 + 0x3821U) - uVar2);
          *puVar1 = *puVar1 & -1 << (uVar2 + 1) * 8 | (uint)pbVar3 >> (3 - uVar2) * 8;
          *pbVar3 = 0;
          pbVar3 = (byte *)(*(int *)(param_1 + 0xc) >> 3);
          uVar2 = iVar5 + 0x3821U & 3;
          puVar1 = (uint *)((iVar5 + 0x3821U) - uVar2);
          *puVar1 = *puVar1 & -1 << (uVar2 + 1) * 8 | (uint)pbVar3 >> (3 - uVar2) * 8;
          in_t0 = uVar4 | *pbVar3;
          *pbVar3 = (byte)in_t0;
          uVar2 = *(uint *)(param_1 + 0xc);
          uVar4 = uVar6 + 0x3821 & 3;
          puVar1 = (uint *)((uVar6 + 0x3821) - uVar4);
          *puVar1 = *puVar1 & -1 << (uVar4 + 1) * 8 | uVar2 >> (3 - uVar4) * 8;
          *(uint *)(param_1 + 0xc) = uVar2;
          if (in_t1 == 0) {
            return;
          }
        }
        uVar2 = iVar5 + 0x3821U & 3;
        puVar1 = (uint *)((iVar5 + 0x3821U) - uVar2);
        *puVar1 = *puVar1 & -1 << (uVar2 + 1) * 8 | (uint)pbVar3 >> (3 - uVar2) * 8;
        in_t0 = uVar4 | *pbVar3;
        *pbVar3 = (byte)in_t0;
        uVar2 = *(uint *)(param_1 + 0xc);
        uVar4 = uVar6 + 0x3821 & 3;
        puVar1 = (uint *)((uVar6 + 0x3821) - uVar4);
        *puVar1 = *puVar1 & -1 << (uVar4 + 1) * 8 | uVar2 >> (3 - uVar4) * 8;
        *(uint *)(param_1 + 0xc) = uVar2;
      } while (in_t1 != 0);
    }
  }
  return;
}



// ==== AAC_115 @ 0001320c size=40

int AAC_115(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 & 7) != 0) {
    prefetch(uVar1 - 0x3fd5,0x18);
    *(uint *)(param_1 + 0xc) = uVar1 & 7;
  }
  return uVar1 + 8;
}



// ==== AAC_116 @ 00013234 size=16

void AAC_116(void)

{
  return;
}



// ==== AAC_117 @ 00013244 size=56

void AAC_117(void)

{
  (*(code *)PTR_AAC_115_0004bbd8)();
                    /* WARNING: Could not recover jumptable at 0x00013274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_AAC_116_0004bc04)();
  return;
}



// ==== AAC_118 @ 0001327c size=20

undefined4 AAC_118(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ==== AAC_119 @ 00013290 size=20

undefined4 AAC_119(void)

{
  return 0;
}



// ==== AAC_120 @ 000132a4 size=20

undefined4 AAC_120(void)

{
  return 1;
}



// ==== AAC_121 @ 000132b8 size=36

void AAC_121(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar1 = *(int *)(param_1 + 0x10) + 0x1021;
  uVar2 = uVar1 & 3;
  puVar3 = (uint *)(uVar1 - uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 |
            (uint)((*(int *)(param_1 + 0xc) >> 5) << 2) >> (3 - uVar2) * 8;
  return;
}



// ==== AAC_122 @ 000132dc size=16

void AAC_122(void)

{
  return;
}



// ==== AAC_123 @ 000132ec size=16

void AAC_123(void)

{
  return;
}



// ==== AAC_165 @ 00013300 size=88

void AAC_165(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = *param_1;
  param_1[7] = (int)PTR_AAC_140_0004bc50;
  if (iVar3 != 0) {
    iVar2 = 0;
    puVar4 = (undefined4 *)(param_1[0x2e6] + 0x4000);
    do {
      puVar1 = puVar4 + 0x400;
      do {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (puVar4 != puVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 != iVar3);
  }
  return;
}



// ==== AAC_166 @ 00013358 size=4

/* WARNING: Control flow encountered bad instruction data */

void AAC_166(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_167 @ 000133f8 size=116

void AAC_167(int *param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  
  piVar3 = param_2;
  piVar4 = param_1 + 0x600;
  puVar2 = (uint *)(param_1 + 0x5ff);
  do {
    puVar6 = puVar2 + -1;
    uVar5 = *puVar2;
    uVar1 = *piVar4 + 0x3821U & 3;
    puVar2 = (uint *)((*piVar4 + 0x3821U) - uVar1);
    *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar5 >> (3 - uVar1) * 8;
    *piVar3 = (int)-uVar5 >> 3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
    puVar2 = puVar6;
  } while ((uint *)(param_1 + 0x3ff) != puVar6);
  puVar2 = (uint *)(param_1 + 0x3ff);
  piVar3 = param_2 + 0x200;
  do {
    piVar4 = piVar3 + 1;
    prefetch(*param_1 + 0x1823,3);
    *piVar3 = (int)*puVar2 >> 3;
    puVar2 = puVar2 + -1;
    param_1 = param_1 + 1;
    piVar3 = piVar4;
  } while (piVar4 != param_2 + 0x400);
  return;
}



// ==== AAC_168 @ 0001346c size=80

/* WARNING: Control flow encountered bad instruction data */

void AAC_168(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar1 = 0xffff8821 - ((int)param_3 >> 0x1f);
  uVar2 = uVar1 & 3;
  puVar3 = (uint *)(uVar1 - uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | param_3 >> (3 - uVar2) * 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_169 @ 000135b0 size=348

void AAC_169(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  ushort *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *unaff_s4;
  undefined4 *puVar12;
  undefined4 *puVar13;
  
  uVar1 = 0xffffc021 - ((int)param_3 >> 0x1f);
  uVar5 = uVar1 & 3;
  puVar3 = (uint *)(uVar1 - uVar5);
  *puVar3 = *puVar3 & -1 << (uVar5 + 1) * 8 | param_3 >> (3 - uVar5) * 8;
  iVar8 = (int)param_3 >> 2;
  puVar13 = (undefined4 *)(iVar8 * 4);
  uVar1 = param_2 - 0x47dfU & 3;
  puVar3 = (uint *)((param_2 - 0x47dfU) - uVar1);
  *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | (uint)puVar13 >> (3 - uVar1) * 8;
  uVar1 = (int)param_1 - 0x5fdfU & 3;
  puVar3 = (uint *)(((int)param_1 - 0x5fdfU) - uVar1);
  *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | 0xfffffffcU >> (3 - uVar1) * 8;
  puVar9 = (ushort *)PTR_AAC_170_0004bc8c;
  puVar10 = (undefined4 *)PTR_AAC_152_0004bc74;
  if (0 < iVar8) {
    puVar2 = PTR_AAC_170_0004bc8c + 0x3021;
    uVar1 = (uint)puVar2 & 3;
    *(uint *)(puVar2 + -uVar1) =
         *(uint *)(puVar2 + -uVar1) & -1 << (uVar1 + 1) * 8 | (uint)(iVar8 << 1) >> (3 - uVar1) * 8;
    puVar11 = (undefined4 *)PTR_AAC_153_0004bcd0;
    do {
      puVar2 = PTR_AAC_016_0004bc24;
      uVar7 = *puVar11;
      puVar12 = (undefined4 *)((uint)*puVar9 * 4);
      uVar1 = param_2 - 0x47dfU & 3;
      puVar3 = (uint *)((param_2 - 0x47dfU) - uVar1);
      *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | (uint)puVar12 >> (3 - uVar1) * 8;
      puVar9 = puVar9 + 1;
      iVar4 = (*(code *)puVar2)(*puVar13,uVar7);
      uVar1 = (int)puVar13 - 0x57dfU & 3;
      puVar3 = (uint *)(((int)puVar13 - 0x57dfU) - uVar1);
      *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | (uint)puVar12 >> (3 - uVar1) * 8;
      uVar5 = (*(code *)PTR_AAC_016_0004bc24)(*puVar12,*puVar10);
      uVar1 = iVar4 - 0xfdfU & 3;
      puVar3 = (uint *)((iVar4 - 0xfdfU) - uVar1);
      *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | uVar5 >> (3 - uVar1) * 8;
      (*(code *)PTR_AAC_016_0004bc24)(*puVar13,*puVar10);
      iVar6 = (*(code *)PTR_AAC_016_0004bc24)(*puVar12,*puVar11);
      prefetch(iVar6 + 0x1023,0x15);
      *param_1 = iVar4 * -2;
      *unaff_s4 = iVar6 << 1;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
      param_1 = param_1 + 2;
      unaff_s4 = unaff_s4 + -2;
    } while (puVar9 != (ushort *)(iVar8 << 1));
  }
  return;
}



// ==== AAC_171 @ 0001370c size=16

void AAC_171(void)

{
  return;
}



// ==== AAC_172 @ 0001371c size=168

void AAC_172(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = param_1 + 0x43e8;
  (*(code *)PTR_AAC_167_0004bc48)(param_2,param_1 + 0x53e8);
  (*(code *)PTR_AAC_168_0004bb30)(param_1 + 0x53e8,iVar1,0x800);
  (*(code *)PTR_AAC_210_0004bc4c)(iVar1,param_1 + 0x4be8,9);
                    /* WARNING: Could not recover jumptable at 0x000137bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_AAC_169_0004bc14)(param_2,iVar1,0x800);
  return;
}



// ==== AAC_175 @ 000137c4 size=464

void AAC_175(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  puVar1 = param_6;
  puVar7 = (undefined4 *)(param_1 + 0x14);
  do {
    uVar5 = *puVar1;
    uVar4 = puVar1[1];
    uVar3 = puVar1[2];
    uVar2 = puVar1[3];
    puVar1 = puVar1 + 4;
    *puVar7 = uVar5;
    puVar7[1] = uVar4;
    puVar7[2] = uVar3;
    puVar7[3] = uVar2;
    puVar7 = puVar7 + 4;
  } while (puVar1 != param_6 + 0x400);
  puVar10 = (undefined4 *)(param_1 + 0x1014);
  puVar7 = param_4 + 0x400;
  puVar1 = param_4;
  do {
    uVar5 = *puVar1;
    uVar4 = puVar1[1];
    uVar3 = puVar1[2];
    uVar2 = puVar1[3];
    puVar1 = puVar1 + 4;
    *puVar10 = uVar5;
    puVar10[1] = uVar4;
    puVar10[2] = uVar3;
    puVar10[3] = uVar2;
    puVar10 = puVar10 + 4;
  } while (puVar1 != puVar7);
  do {
    uVar5 = *param_4;
    uVar4 = param_4[1];
    uVar3 = param_4[2];
    uVar2 = param_4[3];
    param_4 = param_4 + 4;
    *param_6 = uVar5;
    param_6[1] = uVar4;
    param_6[2] = uVar3;
    param_6[3] = uVar2;
    param_6 = param_6 + 4;
  } while (param_4 != puVar7);
  puVar9 = (undefined4 *)(PTR_AAC_140_0004bc50 + 0x1000);
  puVar1 = (undefined4 *)PTR_AAC_140_0004bc50;
  puVar7 = param_5;
  puVar10 = (undefined4 *)(param_1 + 0x14);
  puVar8 = (undefined4 *)(PTR_AAC_140_0004bc50 + 0xffc);
  do {
    puVar6 = puVar1 + 1;
    uVar2 = (*(code *)PTR_AAC_016_0004bc24)(*puVar10,*puVar1);
    *puVar7 = uVar2;
    uVar2 = (*(code *)PTR_AAC_016_0004bc24)(puVar10[0x400],*puVar8);
    puVar7[0x400] = uVar2;
    puVar1 = puVar6;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
    puVar8 = puVar8 + -1;
  } while (puVar6 != puVar9);
                    /* WARNING: Could not recover jumptable at 0x0001398c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_AAC_172_0004bbac)(param_1,param_5,0x800);
  return;
}



// ==== AAC_178 @ 000139a0 size=28

/* WARNING: Control flow encountered bad instruction data */

void AAC_178(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_180 @ 00013a20 size=28

/* WARNING: Control flow encountered bad instruction data */

void AAC_180(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_181 @ 00013aa0 size=136

void AAC_181(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *in_t8;
  
  (*(code *)PTR_AAC_178_0004bb70)();
  uVar4 = (param_2 >> 2) * 4;
  uVar2 = param_1 - 0x3fdfU & 3;
  puVar3 = (uint *)((param_1 - 0x3fdfU) - uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar4 >> (3 - uVar2) * 8;
  uVar2 = param_1 + 0x2021U & 3;
  puVar3 = (uint *)((param_1 + 0x2021U) - uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar4 + 4 >> (3 - uVar2) * 8;
  *in_t8 = 0x7fffffff;
  if (1 < param_2 >> 2) {
    uVar2 = uVar4 + 0x1825 & 3;
    puVar3 = (uint *)((uVar4 + 0x1825) - uVar2);
    *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar4 - 4 >> (3 - uVar2) * 8;
    puVar5 = (undefined4 *)(uVar4 + 4);
    do {
      puVar1 = in_t8 + -1;
      puVar6 = puVar5 + 1;
      in_t8 = in_t8 + -1;
      *puVar5 = *puVar1;
      puVar5 = puVar6;
    } while (puVar6 != (undefined4 *)(uVar4 - 4));
  }
  return;
}



// ==== AAC_182 @ 00013b28 size=132

void AAC_182(int param_1,int param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *in_t8;
  
  (*(code *)PTR_AAC_180_0004bbb8)();
  uVar4 = (param_2 >> 2) * 2;
  uVar2 = param_1 - 0x3fdfU & 3;
  puVar3 = (uint *)((param_1 - 0x3fdfU) - uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar4 >> (3 - uVar2) * 8;
  *in_t8 = 0x7fff;
  uVar2 = param_1 + 0x2021U & 3;
  puVar3 = (uint *)((param_1 + 0x2021U) - uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar4 + 2 >> (3 - uVar2) * 8;
  if (1 < param_2 >> 2) {
    uVar2 = uVar4 + 0x1823 & 3;
    puVar3 = (uint *)((uVar4 + 0x1823) - uVar2);
    *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar4 - 2 >> (3 - uVar2) * 8;
    puVar5 = (undefined2 *)(uVar4 + 2);
    do {
      puVar1 = in_t8 + -1;
      puVar6 = puVar5 + 1;
      in_t8 = in_t8 + -1;
      *puVar5 = *puVar1;
      puVar5 = puVar6;
    } while (puVar6 != (undefined2 *)(uVar4 - 2));
  }
  return;
}



// ==== AAC_183 @ 00013bac size=124

void AAC_183(int *param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *in_t8;
  
  (*(code *)PTR_AAC_181_0004bcbc)();
  if (0 < param_2 >> 2) {
    uVar5 = (param_2 >> 2) << 2;
    uVar1 = (int)param_1 + 0x3021U & 3;
    puVar2 = (uint *)(((int)param_1 + 0x3021U) - uVar1);
    *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar5 >> (3 - uVar1) * 8;
    do {
      uVar1 = (int)param_1 - 0x3fdfU & 3;
      puVar2 = (uint *)(((int)param_1 - 0x3fdfU) - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar5 >> (3 - uVar1) * 8;
      piVar4 = param_1 + 1;
      iVar3 = *param_1;
      *param_1 = *in_t8;
      *in_t8 = -iVar3;
      param_1 = piVar4;
    } while (piVar4 != param_3);
  }
  return;
}



// ==== AAC_184 @ 00013c28 size=124

void AAC_184(short *param_1,int param_2,short *param_3)

{
  short sVar1;
  uint uVar2;
  uint *puVar3;
  short *psVar4;
  uint uVar5;
  short *in_t8;
  
  (*(code *)PTR_AAC_182_0004bd18)();
  if (0 < param_2 >> 2) {
    uVar5 = (param_2 >> 2) << 1;
    uVar2 = (int)param_1 + 0x3021U & 3;
    puVar3 = (uint *)(((int)param_1 + 0x3021U) - uVar2);
    *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar5 >> (3 - uVar2) * 8;
    do {
      uVar2 = (int)param_1 - 0x3fdfU & 3;
      puVar3 = (uint *)(((int)param_1 - 0x3fdfU) - uVar2);
      *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar5 >> (3 - uVar2) * 8;
      psVar4 = param_1 + 1;
      sVar1 = *param_1;
      *param_1 = *in_t8;
      *in_t8 = -sVar1;
      param_1 = psVar4;
    } while (psVar4 != param_3);
  }
  return;
}



// ==== AAC_185 @ 00013ca4 size=136

void AAC_185(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *in_t8;
  int iVar7;
  
  param_2 = param_2 >> 1;
  (*(code *)PTR_AAC_183_0004bd50)();
  uVar5 = param_2 * 4;
  uVar1 = param_1 - 0x3fdfU & 3;
  puVar2 = (uint *)((param_1 - 0x3fdfU) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar5 >> (3 - uVar1) * 8;
  puVar6 = (undefined4 *)(uVar5 - 4);
  *in_t8 = 0x80000000;
  uVar1 = param_1 + 0x1021U & 3;
  puVar2 = (uint *)((param_1 + 0x1021U) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar5 + 4 >> (3 - uVar1) * 8;
  uVar1 = param_1 + 0x2021U & 3;
  puVar2 = (uint *)((param_1 + 0x2021U) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | (uint)puVar6 >> (3 - uVar1) * 8;
  iVar7 = 1;
  puVar3 = (undefined4 *)(uVar5 + 4);
  if (1 < param_2) {
    do {
      uVar4 = *puVar6;
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + -1;
      *puVar3 = uVar4;
      puVar3 = puVar3 + 1;
    } while (iVar7 != param_2);
  }
  return;
}



// ==== AAC_186 @ 00013d2c size=28

/* WARNING: Control flow encountered bad instruction data */

void AAC_186(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_188 @ 00013da8 size=136

void AAC_188(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *in_t8;
  
  (*(code *)PTR_AAC_186_0004bd10)();
  uVar4 = (param_2 >> 1) * 4;
  uVar2 = param_1 - 0x3fdfU & 3;
  puVar3 = (uint *)((param_1 - 0x3fdfU) - uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar4 >> (3 - uVar2) * 8;
  uVar2 = param_1 + 0x2021U & 3;
  puVar3 = (uint *)((param_1 + 0x2021U) - uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar4 + 4 >> (3 - uVar2) * 8;
  *in_t8 = 0x7fffffff;
  if (1 < param_2 >> 1) {
    uVar2 = uVar4 + 0x1825 & 3;
    puVar3 = (uint *)((uVar4 + 0x1825) - uVar2);
    *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar4 - 4 >> (3 - uVar2) * 8;
    puVar5 = (undefined4 *)(uVar4 + 4);
    do {
      puVar1 = in_t8 + -1;
      puVar6 = puVar5 + 1;
      in_t8 = in_t8 + -1;
      *puVar5 = *puVar1;
      puVar5 = puVar6;
    } while (puVar6 != (undefined4 *)(uVar4 - 4));
  }
  return;
}



// ==== AAC_189 @ 00013e30 size=120

void AAC_189(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  uVar2 = (*(code *)PTR_AAC_Malloc_0004bcb8)(0x800);
  puVar1 = PTR_AAC_Malloc_0004bcb8;
  *(undefined4 *)(param_1 + 0x7520) = uVar2;
  uVar2 = (*(code *)puVar1)(0x800);
  puVar1 = PTR_AAC_181_0004bcbc;
  *(undefined4 *)(param_1 + 0x7524) = uVar2;
  (*(code *)puVar1)(uVar2,0x400);
                    /* WARNING: Could not recover jumptable at 0x00013ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_AAC_183_0004bd50)(*(undefined4 *)(param_1 + 0x7520),0x400);
  return;
}



// ==== AAC_192 @ 00013ea8 size=16

void AAC_192(void)

{
  return;
}



// ==== AAC_193 @ 00013eb8 size=72

void AAC_193(int param_1)

{
  (*(code *)PTR_AAC_Free_0004bd5c)(*(undefined4 *)(param_1 + 0x7520));
                    /* WARNING: Could not recover jumptable at 0x00013ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_AAC_Free_0004bd5c)(*(undefined4 *)(param_1 + 0x7524));
  return;
}



// ==== AAC_194 @ 00013f00 size=16

void AAC_194(void)

{
  return;
}



// ==== AAC_197 @ 00013f10 size=44

int AAC_197(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; 1 < param_1; param_1 = param_1 >> 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



// ==== AAC_198 @ 00013f3c size=464

void AAC_198(int *param_1,int *param_2,int *param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int *piVar9;
  int *in_v1;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  
  puVar8 = PTR_AAC_199_0004bd60;
  puVar7 = PTR_AAC_245_0004bcd8;
  puVar6 = PTR_AAC_236_0004bc78;
  puVar5 = PTR_AAC_263_0004bc38;
  puVar4 = PTR_AAC_254_0004bb34;
  piVar9 = (int *)&DAT_b0007400;
  iVar14 = -0x4fff9400;
  iVar12 = -0x4fff9000;
  iVar22 = -0x4fff8800;
  iVar21 = 4;
  *(undefined4 *)PTR_AAC_199_0004bd60 = 0xb0006c00;
  iVar19 = 0;
  *(undefined4 *)(puVar8 + 0x1c) = 0xb0007000;
  uVar11 = 0x10;
  *(undefined1 **)(puVar8 + 0x38) = &DAT_b0007400;
  *(undefined4 *)(puVar8 + 0x54) = 0xb0007800;
  piVar13 = piVar9;
  do {
    piVar20 = (int *)(iVar19 * 4);
    if (0 < iVar21) {
      puVar1 = puVar5 + 0x2821;
      uVar23 = (uint)puVar1 & 3;
      *(uint *)(puVar1 + -uVar23) =
           *(uint *)(puVar1 + -uVar23) & -1 << (uVar23 + 1) * 8 | (uint)piVar20 >> (3 - uVar23) * 8;
      puVar1 = puVar4 + 0x2021;
      uVar23 = (uint)puVar1 & 3;
      *(uint *)(puVar1 + -uVar23) =
           *(uint *)(puVar1 + -uVar23) & -1 << (uVar23 + 1) * 8 | (uint)piVar20 >> (3 - uVar23) * 8;
      puVar1 = puVar7 + 0x1821;
      uVar23 = (uint)puVar1 & 3;
      *(uint *)(puVar1 + -uVar23) =
           *(uint *)(puVar1 + -uVar23) & -1 << (uVar23 + 1) * 8 | (uint)piVar20 >> (3 - uVar23) * 8;
      puVar1 = puVar6 + 0x1021;
      uVar23 = (uint)puVar1 & 3;
      *(uint *)(puVar1 + -uVar23) =
           *(uint *)(puVar1 + -uVar23) & -1 << (uVar23 + 1) * 8 | (uint)piVar20 >> (3 - uVar23) * 8;
      iVar18 = *param_2;
      uVar23 = 0;
      iVar17 = *param_1;
      iVar16 = *in_v1;
      iVar15 = *piVar9;
      do {
        uVar2 = iVar18 + 0x1021U & 3;
        puVar3 = (uint *)((iVar18 + 0x1021U) - uVar2);
        *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar23 >> (3 - uVar2) * 8;
        uVar2 = iVar14 + 0x1821U & 3;
        puVar3 = (uint *)((iVar14 + 0x1821U) - uVar2);
        *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar23 >> (3 - uVar2) * 8;
        puVar10 = (undefined4 *)*piVar9;
        uVar2 = iVar17 + 0x1021U & 3;
        puVar3 = (uint *)((iVar17 + 0x1021U) - uVar2);
        *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar23 >> (3 - uVar2) * 8;
        uVar2 = iVar12 + 0x3021U & 3;
        puVar3 = (uint *)((iVar12 + 0x3021U) - uVar2);
        *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar23 >> (3 - uVar2) * 8;
        uVar2 = iVar16 + 0x2821U & 3;
        puVar3 = (uint *)((iVar16 + 0x2821U) - uVar2);
        *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar23 >> (3 - uVar2) * 8;
        *in_v1 = (int)puVar10;
        uVar2 = (uint)((int)piVar13 + 0x2021) & 3;
        puVar3 = (uint *)((undefined1 *)((int)piVar13 + 0x2021) + -uVar2);
        *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar23 >> (3 - uVar2) * 8;
        piVar9 = (int *)*piVar9;
        uVar2 = iVar15 + 0x1821U & 3;
        puVar3 = (uint *)((iVar15 + 0x1821U) - uVar2);
        *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar23 >> (3 - uVar2) * 8;
        *param_3 = (int)piVar9;
        uVar2 = iVar22 + 0x1021U & 3;
        puVar3 = (uint *)((iVar22 + 0x1021U) - uVar2);
        *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar23 >> (3 - uVar2) * 8;
        param_2 = (int *)*param_2;
        uVar23 = uVar23 + 4;
        *puVar10 = param_2;
        in_v1 = (int *)*in_v1;
        *piVar9 = (int)in_v1;
      } while (uVar23 != uVar11);
    }
    puVar1 = puVar8 + -0x77df;
    uVar23 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar23) =
         *(uint *)(puVar1 + -uVar23) & -1 << (uVar23 + 1) * 8 | (uint)piVar20 >> (3 - uVar23) * 8;
    iVar15 = iVar19 + 1;
    iVar14 = *piVar20;
    piVar9 = (int *)(iVar15 * 4);
    uVar23 = iVar14 + 0x5821;
    uVar2 = uVar23 & 3;
    puVar3 = (uint *)(uVar23 - uVar2);
    *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar11 >> (3 - uVar2) * 8;
    param_2 = (int *)((iVar19 + 8) * 4);
    puVar1 = puVar8 + 0x3021;
    uVar23 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar23) =
         *(uint *)(puVar1 + -uVar23) & -1 << (uVar23 + 1) * 8 | (uint)piVar9 >> (3 - uVar23) * 8;
    puVar10 = (undefined4 *)((iVar19 + 0xf) * 4);
    puVar1 = puVar8 + 0x2821;
    uVar23 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar23) =
         *(uint *)(puVar1 + -uVar23) & -1 << (uVar23 + 1) * 8 | (uint)param_2 >> (3 - uVar23) * 8;
    piVar20 = (int *)((iVar19 + 0x16) * 4);
    uVar23 = iVar12 + 0x4821U & 3;
    puVar3 = (uint *)((iVar12 + 0x4821U) - uVar23);
    *puVar3 = *puVar3 & -1 << (uVar23 + 1) * 8 | uVar11 >> (3 - uVar23) * 8;
    puVar1 = puVar8 + 0x2021;
    uVar23 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar23) =
         *(uint *)(puVar1 + -uVar23) & -1 << (uVar23 + 1) * 8 | (uint)puVar10 >> (3 - uVar23) * 8;
    uVar23 = (uint)((int)piVar13 + 0x5021) & 3;
    puVar3 = (uint *)((undefined1 *)((int)piVar13 + 0x5021) + -uVar23);
    *puVar3 = *puVar3 & -1 << (uVar23 + 1) * 8 | uVar11 >> (3 - uVar23) * 8;
    uVar23 = iVar22 + 0x4021U & 3;
    puVar3 = (uint *)((iVar22 + 0x4021U) - uVar23);
    *puVar3 = *puVar3 & -1 << (uVar23 + 1) * 8 | uVar11 >> (3 - uVar23) * 8;
    puVar1 = puVar8 + 0x1821;
    uVar23 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar23) =
         *(uint *)(puVar1 + -uVar23) & -1 << (uVar23 + 1) * 8 | (uint)piVar20 >> (3 - uVar23) * 8;
    *param_3 = iVar14;
    *param_2 = iVar12;
    *puVar10 = piVar13;
    *piVar20 = iVar22;
    if (iVar19 == 0) {
      piVar9 = (int *)&DAT_00000004;
      iVar22 = *(int *)(PTR_AAC_199_0004bd60 + 0x58);
      iVar19 = 1;
    }
    else {
      if (iVar15 == 7) {
        return;
      }
      uVar11 = iVar21 << 3;
      iVar21 = iVar21 << 1;
      iVar19 = iVar15;
    }
    param_1 = (int *)((iVar19 + 7) * 4);
    puVar1 = puVar8 + 0x1021;
    uVar23 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar23) =
         *(uint *)(puVar1 + -uVar23) & -1 << (uVar23 + 1) * 8 | (uint)piVar9 >> (3 - uVar23) * 8;
    in_v1 = (int *)((iVar19 + 0xe) * 4);
    puVar1 = puVar8 + 0x2021;
    uVar23 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar23) =
         *(uint *)(puVar1 + -uVar23) & -1 << (uVar23 + 1) * 8 | (uint)param_1 >> (3 - uVar23) * 8;
    puVar1 = puVar8 + 0x1821;
    uVar23 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar23) =
         *(uint *)(puVar1 + -uVar23) & -1 << (uVar23 + 1) * 8 | (uint)in_v1 >> (3 - uVar23) * 8;
    iVar14 = *piVar9;
    iVar12 = *param_1;
    piVar13 = (int *)*in_v1;
  } while( true );
}



// ==== AAC_200 @ 0001410c size=452

void AAC_200(int *param_1,int *param_2,int *param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint *in_v0;
  uint *in_v1;
  int *piVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  uint uVar23;
  
  puVar8 = PTR_AAC_199_0004bd60;
  puVar7 = PTR_AAC_245_0004bcd8;
  puVar6 = PTR_AAC_236_0004bc78;
  puVar5 = PTR_AAC_263_0004bc38;
  puVar4 = PTR_AAC_254_0004bb34;
  piVar15 = param_1 + 0x100;
  piVar14 = param_1 + 0x200;
  piVar13 = param_1 + 0x300;
  iVar22 = 4;
  iVar20 = 0;
  uVar12 = 0x10;
  *(int **)PTR_AAC_199_0004bd60 = param_1;
  *(int **)(puVar8 + 0x1c) = piVar15;
  *(int **)(puVar8 + 0x38) = piVar14;
  *(int **)(puVar8 + 0x54) = piVar13;
  piVar9 = param_1;
  do {
    piVar21 = (int *)(iVar20 * 4);
    if (0 < iVar22) {
      puVar1 = puVar5 + 0x2821;
      uVar16 = (uint)puVar1 & 3;
      *(uint *)(puVar1 + -uVar16) =
           *(uint *)(puVar1 + -uVar16) & -1 << (uVar16 + 1) * 8 | (uint)piVar21 >> (3 - uVar16) * 8;
      puVar1 = puVar4 + 0x2021;
      uVar16 = (uint)puVar1 & 3;
      *(uint *)(puVar1 + -uVar16) =
           *(uint *)(puVar1 + -uVar16) & -1 << (uVar16 + 1) * 8 | (uint)piVar21 >> (3 - uVar16) * 8;
      puVar1 = puVar7 + 0x1821;
      uVar16 = (uint)puVar1 & 3;
      *(uint *)(puVar1 + -uVar16) =
           *(uint *)(puVar1 + -uVar16) & -1 << (uVar16 + 1) * 8 | (uint)piVar21 >> (3 - uVar16) * 8;
      puVar1 = puVar6 + 0x1021;
      uVar16 = (uint)puVar1 & 3;
      *(uint *)(puVar1 + -uVar16) =
           *(uint *)(puVar1 + -uVar16) & -1 << (uVar16 + 1) * 8 | (uint)piVar21 >> (3 - uVar16) * 8;
      iVar19 = *param_2;
      uVar23 = 0;
      iVar18 = *param_1;
      uVar17 = *in_v1;
      uVar16 = *in_v0;
      do {
        uVar2 = iVar19 + 0x1021U & 3;
        puVar3 = (uint *)((iVar19 + 0x1021U) - uVar2);
        *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar23 >> (3 - uVar2) * 8;
        uVar2 = (int)piVar9 + 0x1821U & 3;
        puVar3 = (uint *)(((int)piVar9 + 0x1821U) - uVar2);
        *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar23 >> (3 - uVar2) * 8;
        puVar10 = (undefined4 *)*in_v0;
        uVar2 = iVar18 + 0x1021U & 3;
        puVar3 = (uint *)((iVar18 + 0x1021U) - uVar2);
        *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar23 >> (3 - uVar2) * 8;
        uVar2 = (int)piVar15 + 0x3021U & 3;
        puVar3 = (uint *)(((int)piVar15 + 0x3021U) - uVar2);
        *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar23 >> (3 - uVar2) * 8;
        uVar2 = uVar17 + 0x2821 & 3;
        puVar3 = (uint *)((uVar17 + 0x2821) - uVar2);
        *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar23 >> (3 - uVar2) * 8;
        *in_v1 = (uint)puVar10;
        uVar2 = (int)piVar14 + 0x2021U & 3;
        puVar3 = (uint *)(((int)piVar14 + 0x2021U) - uVar2);
        *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar23 >> (3 - uVar2) * 8;
        in_v0 = (uint *)*in_v0;
        uVar2 = uVar16 + 0x1821 & 3;
        puVar3 = (uint *)((uVar16 + 0x1821) - uVar2);
        *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar23 >> (3 - uVar2) * 8;
        *param_3 = (int)in_v0;
        uVar2 = (int)piVar13 + 0x1021U & 3;
        puVar3 = (uint *)(((int)piVar13 + 0x1021U) - uVar2);
        *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar23 >> (3 - uVar2) * 8;
        param_2 = (int *)*param_2;
        uVar23 = uVar23 + 4;
        *puVar10 = param_2;
        in_v1 = (uint *)*in_v1;
        *in_v0 = (uint)in_v1;
      } while (uVar23 != uVar12);
    }
    puVar1 = puVar8 + -0x77df;
    uVar16 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar16) =
         *(uint *)(puVar1 + -uVar16) & -1 << (uVar16 + 1) * 8 | (uint)piVar21 >> (3 - uVar16) * 8;
    iVar19 = iVar20 + 1;
    iVar18 = *piVar21;
    in_v0 = (uint *)(iVar19 * 4);
    uVar16 = iVar18 + 0x5821;
    uVar17 = uVar16 & 3;
    puVar3 = (uint *)(uVar16 - uVar17);
    *puVar3 = *puVar3 & -1 << (uVar17 + 1) * 8 | uVar12 >> (3 - uVar17) * 8;
    param_2 = (int *)((iVar20 + 8) * 4);
    puVar1 = puVar8 + 0x3021;
    uVar16 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar16) =
         *(uint *)(puVar1 + -uVar16) & -1 << (uVar16 + 1) * 8 | (uint)in_v0 >> (3 - uVar16) * 8;
    puVar11 = (uint *)((iVar20 + 0xf) * 4);
    puVar1 = puVar8 + 0x2821;
    uVar16 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar16) =
         *(uint *)(puVar1 + -uVar16) & -1 << (uVar16 + 1) * 8 | (uint)param_2 >> (3 - uVar16) * 8;
    piVar9 = (int *)((iVar20 + 0x16) * 4);
    uVar16 = (int)piVar15 + 0x5021U & 3;
    puVar3 = (uint *)(((int)piVar15 + 0x5021U) - uVar16);
    *puVar3 = *puVar3 & -1 << (uVar16 + 1) * 8 | uVar12 >> (3 - uVar16) * 8;
    puVar1 = puVar8 + 0x2021;
    uVar16 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar16) =
         *(uint *)(puVar1 + -uVar16) & -1 << (uVar16 + 1) * 8 | (uint)puVar11 >> (3 - uVar16) * 8;
    uVar16 = (int)piVar14 + 0x4821U & 3;
    puVar3 = (uint *)(((int)piVar14 + 0x4821U) - uVar16);
    *puVar3 = *puVar3 & -1 << (uVar16 + 1) * 8 | uVar12 >> (3 - uVar16) * 8;
    uVar16 = (int)piVar13 + 0x4021U & 3;
    puVar3 = (uint *)(((int)piVar13 + 0x4021U) - uVar16);
    *puVar3 = *puVar3 & -1 << (uVar16 + 1) * 8 | uVar12 >> (3 - uVar16) * 8;
    puVar1 = puVar8 + 0x1821;
    uVar16 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar16) =
         *(uint *)(puVar1 + -uVar16) & -1 << (uVar16 + 1) * 8 | (uint)piVar9 >> (3 - uVar16) * 8;
    *param_3 = iVar18;
    *param_2 = (int)piVar15;
    *puVar11 = (uint)piVar14;
    *piVar9 = (int)piVar13;
    if (iVar20 == 0) {
      in_v0 = (uint *)&DAT_00000004;
      piVar13 = *(int **)(PTR_AAC_199_0004bd60 + 0x58);
      iVar20 = 1;
    }
    else {
      if (iVar19 == 7) {
        return;
      }
      uVar12 = iVar22 << 3;
      iVar22 = iVar22 << 1;
      iVar20 = iVar19;
    }
    param_1 = (int *)((iVar20 + 7) * 4);
    puVar1 = puVar8 + 0x1021;
    uVar16 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar16) =
         *(uint *)(puVar1 + -uVar16) & -1 << (uVar16 + 1) * 8 | (uint)in_v0 >> (3 - uVar16) * 8;
    in_v1 = (uint *)((iVar20 + 0xe) * 4);
    puVar1 = puVar8 + 0x2021;
    uVar16 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar16) =
         *(uint *)(puVar1 + -uVar16) & -1 << (uVar16 + 1) * 8 | (uint)param_1 >> (3 - uVar16) * 8;
    puVar1 = puVar8 + 0x1821;
    uVar16 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar16) =
         *(uint *)(puVar1 + -uVar16) & -1 << (uVar16 + 1) * 8 | (uint)in_v1 >> (3 - uVar16) * 8;
    piVar9 = (int *)*in_v0;
    piVar15 = (int *)*param_1;
    piVar14 = (int *)*in_v1;
  } while( true );
}



// ==== AAC_201 @ 000142d0 size=144

void AAC_201(int *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint in_t1;
  int in_t2;
  uint uVar8;
  uint in_t4;
  int in_t5;
  int in_t6;
  uint uVar9;
  
  iVar7 = *param_1;
  iVar5 = param_1[1];
  uVar4 = *param_2;
  uVar1 = iVar7 + 0x5021U & 3;
  puVar2 = (uint *)((iVar7 + 0x5021U) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | (uint)param_1[2] >> (3 - uVar1) * 8;
  uVar8 = param_2[1];
  prefetch(iVar7 + 0x4023,2);
  uVar9 = param_1[3];
  uVar3 = param_2[2];
  uVar6 = param_2[3];
  uVar1 = iVar5 + 0x4821U & 3;
  puVar2 = (uint *)((iVar5 + 0x4821U) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar9 >> (3 - uVar1) * 8;
  prefetch(iVar5 + -0x3fdd,0x18);
  uVar1 = uVar4 + 0x3021 & 3;
  puVar2 = (uint *)((uVar4 + 0x3021) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar3 >> (3 - uVar1) * 8;
  prefetch(uVar4 + 0x1023,2);
  uVar1 = uVar8 + 0x1821 & 3;
  puVar2 = (uint *)((uVar8 + 0x1821) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar6 >> (3 - uVar1) * 8;
  prefetch(uVar8 + 0x3823,7);
  uVar1 = in_t2 + 0x7021U & 3;
  puVar2 = (uint *)((in_t2 + 0x7021U) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | in_t1 >> (3 - uVar1) * 8;
  uVar1 = iVar7 + 0x6821U & 3;
  puVar2 = (uint *)((iVar7 + 0x6821U) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar6 >> (3 - uVar1) * 8;
  uVar1 = iVar5 + 0x6021U & 3;
  puVar2 = (uint *)((iVar5 + 0x6021U) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar4 >> (3 - uVar1) * 8;
  prefetch(uVar3 + 0x5823,0x18);
  prefetch(in_t2 + 0x4823,9);
  prefetch(iVar7 + 0x3823,7);
  prefetch(iVar5 + 0x1823,3);
  uVar1 = uVar3 - 0x3fdf & 3;
  puVar2 = (uint *)((uVar3 - 0x3fdf) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar9 >> (3 - uVar1) * 8;
  *param_1 = in_t6;
  param_1[1] = in_t1;
  param_1[2] = in_t5;
  param_1[3] = uVar6;
  *param_2 = in_t4;
  param_2[1] = uVar4;
  param_2[2] = uVar8;
  param_2[3] = uVar9;
  return;
}



// ==== AAC_202 @ 00014360 size=68

/* WARNING: Control flow encountered bad instruction data */

void AAC_202(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  prefetch(*(int *)(param_1 + 4) + 0x3023,0xb);
  uVar1 = *(int *)(param_1 + 4) + 0x5821;
  uVar2 = uVar1 & 3;
  puVar3 = (uint *)(uVar1 - uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | *(uint *)(param_1 + 0x14) >> (3 - uVar2) * 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_203 @ 000146a8 size=360

/* WARNING: Control flow encountered bad instruction data */

void AAC_203(int *param_1,uint *param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *in_t1;
  uint uVar11;
  uint *puVar12;
  uint *in_t3;
  uint *puVar13;
  uint *in_t5;
  uint uVar14;
  int iVar15;
  uint uVar16;
  
  puVar3 = PTR_AAC_245_0004bcd8;
  puVar6 = PTR_AAC_263_0004bc38;
  puVar2 = PTR_AAC_254_0004bb34;
  uVar9 = param_3 << 2;
  uVar11 = 1 << (param_3 + 1U & 0x1f);
  puVar1 = PTR_AAC_263_0004bc38 + 0x1821;
  uVar4 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar4) =
       *(uint *)(puVar1 + -uVar4) & -1 << (uVar4 + 1) * 8 | uVar9 >> (3 - uVar4) * 8;
  puVar7 = PTR_AAC_236_0004bc78;
  puVar2 = puVar2 + 0x1021;
  uVar4 = (uint)puVar2 & 3;
  *(uint *)(puVar2 + -uVar4) =
       *(uint *)(puVar2 + -uVar4) & -1 << (uVar4 + 1) * 8 | uVar9 >> (3 - uVar4) * 8;
  puVar3 = puVar3 + -0x3fdf;
  uVar4 = (uint)puVar3 & 3;
  *(uint *)(puVar3 + -uVar4) =
       *(uint *)(puVar3 + -uVar4) & -1 << (uVar4 + 1) * 8 | uVar9 >> (3 - uVar4) * 8;
  uVar4 = uVar11 * 2 + 0x4021;
  uVar8 = uVar4 & 3;
  puVar5 = (uint *)(uVar4 - uVar8);
  *puVar5 = *puVar5 & -1 << (uVar8 + 1) * 8 | uVar11 >> (3 - uVar8) * 8;
  puVar1 = puVar7 + 0x3021;
  uVar4 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar4) =
       *(uint *)(puVar1 + -uVar4) & -1 << (uVar4 + 1) * 8 | uVar9 >> (3 - uVar4) * 8;
  if (0 < (int)uVar11) {
    puVar13 = (uint *)(uVar11 * 8);
    puVar12 = (uint *)(uVar11 * 4);
    uVar4 = (int)param_1 + 0x6821U & 3;
    puVar5 = (uint *)(((int)param_1 + 0x6821U) - uVar4);
    *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | (uint)puVar13 >> (3 - uVar4) * 8;
    puVar10 = (uint *)(uVar11 * 8);
    uVar4 = (int)param_1 + 0x5821U & 3;
    puVar5 = (uint *)(((int)param_1 + 0x5821U) - uVar4);
    *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | (uint)puVar12 >> (3 - uVar4) * 8;
    uVar4 = (int)param_1 + 0x4821U & 3;
    puVar5 = (uint *)(((int)param_1 + 0x4821U) - uVar4);
    *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | (uint)puVar10 >> (3 - uVar4) * 8;
    uVar4 = (int)param_2 + 0x6021U & 3;
    puVar5 = (uint *)(((int)param_2 + 0x6021U) - uVar4);
    *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | (uint)puVar13 >> (3 - uVar4) * 8;
    uVar4 = (int)param_2 + 0x5021U & 3;
    puVar5 = (uint *)(((int)param_2 + 0x5021U) - uVar4);
    *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | (uint)puVar12 >> (3 - uVar4) * 8;
    uVar4 = (int)param_2 + 0x4021U & 3;
    puVar5 = (uint *)(((int)param_2 + 0x4021U) - uVar4);
    *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | (uint)puVar10 >> (3 - uVar4) * 8;
    uVar8 = *in_t5;
    uVar9 = *puVar13;
    iVar15 = *param_1;
    uVar14 = *param_2;
    uVar4 = iVar15 + 0x1821U & 3;
    puVar5 = (uint *)((iVar15 + 0x1821U) - uVar4);
    *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | uVar8 >> (3 - uVar4) * 8;
    prefetch(iVar15 + -0x4fdd,2);
    uVar4 = uVar14 + 0x1021 & 3;
    puVar5 = (uint *)((uVar14 + 0x1021) - uVar4);
    *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | uVar9 >> (3 - uVar4) * 8;
    prefetch(uVar14 - 0x67dd,0x18);
    *param_1 = (int)puVar6;
    *param_2 = uVar8;
    uVar11 = *in_t3;
    uVar16 = *puVar10;
    uVar9 = *puVar12;
    uVar8 = *in_t1;
    uVar4 = uVar11 + 0x3821 & 3;
    puVar5 = (uint *)((uVar11 + 0x3821) - uVar4);
    *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | uVar8 >> (3 - uVar4) * 8;
    prefetch(uVar11 + 0x1023,2);
    uVar4 = uVar9 + 0x3021 & 3;
    puVar5 = (uint *)((uVar9 + 0x3021) - uVar4);
    *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | uVar16 >> (3 - uVar4) * 8;
    prefetch(uVar9 + 0x1823,0x18);
    *in_t3 = (uint)puVar7;
    uVar4 = iVar15 + 0x3821U & 3;
    puVar5 = (uint *)((iVar15 + 0x3821U) - uVar4);
    *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | uVar9 >> (3 - uVar4) * 8;
    *puVar12 = uVar11;
    prefetch(uVar14 - 0x5fdd,2);
    uVar4 = uVar14 - 0x67df & 3;
    puVar5 = (uint *)((uVar14 - 0x67df) - uVar4);
    *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | uVar8 >> (3 - uVar4) * 8;
    prefetch(iVar15 + -0x4fdd,3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// ==== AAC_204 @ 00014aac size=128

void AAC_204(int param_1,int param_2)

{
  (*(code *)PTR_AAC_203_0004bcc0)(param_1,param_2,1);
  (*(code *)PTR_AAC_202_0004bb0c)(param_1,param_2);
  (*(code *)PTR_AAC_201_0004bd08)(param_1 + 0x20,param_2 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00014b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_AAC_201_0004bd08)(param_1 + 0x30,param_2 + 0x30);
  return;
}



// ==== AAC_205 @ 00014b2c size=128

void AAC_205(int param_1,int param_2)

{
  (*(code *)PTR_AAC_203_0004bcc0)(param_1,param_2,2);
  (*(code *)PTR_AAC_204_0004bbc0)(param_1,param_2);
  (*(code *)PTR_AAC_202_0004bb0c)(param_1 + 0x40,param_2 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00014ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_AAC_202_0004bb0c)(param_1 + 0x60,param_2 + 0x60);
  return;
}



// ==== AAC_206 @ 00014bac size=128

void AAC_206(int param_1,int param_2)

{
  (*(code *)PTR_AAC_203_0004bcc0)(param_1,param_2,3);
  (*(code *)PTR_AAC_205_0004bb08)(param_1,param_2);
  (*(code *)PTR_AAC_204_0004bbc0)(param_1 + 0x80,param_2 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00014c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_AAC_204_0004bbc0)(param_1 + 0xc0,param_2 + 0xc0);
  return;
}



// ==== AAC_207 @ 00014c2c size=128

void AAC_207(int param_1,int param_2)

{
  (*(code *)PTR_AAC_203_0004bcc0)(param_1,param_2,4);
  (*(code *)PTR_AAC_206_0004bb78)(param_1,param_2);
  (*(code *)PTR_AAC_205_0004bb08)(param_1 + 0x100,param_2 + 0x100);
                    /* WARNING: Could not recover jumptable at 0x00014ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_AAC_205_0004bb08)(param_1 + 0x180,param_2 + 0x180);
  return;
}



// ==== AAC_208 @ 00014cac size=128

void AAC_208(int param_1,int param_2)

{
  (*(code *)PTR_AAC_203_0004bcc0)(param_1,param_2,5);
  (*(code *)PTR_AAC_207_0004bbbc)(param_1,param_2);
  (*(code *)PTR_AAC_206_0004bb78)(param_1 + 0x200,param_2 + 0x200);
                    /* WARNING: Could not recover jumptable at 0x00014d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_AAC_206_0004bb78)(param_1 + 0x300,param_2 + 0x300);
  return;
}



// ==== AAC_209 @ 00014d2c size=128

void AAC_209(int param_1,int param_2)

{
  (*(code *)PTR_AAC_203_0004bcc0)(param_1,param_2,6);
  (*(code *)PTR_AAC_208_0004bccc)(param_1,param_2);
  (*(code *)PTR_AAC_207_0004bbbc)(param_1 + 0x400,param_2 + 0x400);
                    /* WARNING: Could not recover jumptable at 0x00014da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_AAC_207_0004bbbc)(param_1 + 0x600,param_2 + 0x600);
  return;
}



// ==== AAC_210 @ 00014dac size=216

void AAC_210(int param_1,int param_2,uint param_3)

{
  undefined *puVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  uint uVar7;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar1 = PTR_DAT_0004bae4;
  while (9 < param_3) {
    uVar7 = 1 << (param_3 - 2 & 0x1f);
    (*(code *)PTR_AAC_203_0004bcc0)(param_1,param_2,param_3 - 3);
    puVar6 = PTR_AAC_210_0004bc4c;
    uVar3 = uVar7 * 2 - 0x4fdf;
    uVar4 = uVar3 & 3;
    puVar5 = (uint *)(uVar3 - uVar4);
    *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | uVar7 >> (3 - uVar4) * 8;
    (*(code *)puVar6)(param_1,param_2,param_3 - 1);
    uVar3 = param_1 + 0x2021U & 3;
    puVar5 = (uint *)((param_1 + 0x2021U) - uVar3);
    *puVar5 = *puVar5 & -1 << (uVar3 + 1) * 8 | (uVar7 << 3) >> (3 - uVar3) * 8;
    puVar6 = PTR_AAC_210_0004bc4c;
    uVar3 = param_2 + 0x2821U & 3;
    puVar5 = (uint *)((param_2 + 0x2821U) - uVar3);
    *puVar5 = *puVar5 & -1 << (uVar3 + 1) * 8 | (uVar7 << 3) >> (3 - uVar3) * 8;
    (*(code *)puVar6)();
    uVar3 = param_1 - 0x6fdfU & 3;
    puVar5 = (uint *)((param_1 - 0x6fdfU) - uVar3);
    *puVar5 = *puVar5 & -1 << (uVar3 + 1) * 8 | (uVar7 << 3) >> (3 - uVar3) * 8;
    uVar3 = param_2 - 0x77dfU & 3;
    puVar5 = (uint *)((param_2 - 0x77dfU) - uVar3);
    *puVar5 = *puVar5 & -1 << (uVar3 + 1) * 8 | (uVar7 << 3) >> (3 - uVar3) * 8;
    param_3 = param_3 - 2;
  }
  puVar1 = puVar1 + 0x4c1;
  uVar3 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar3) =
       *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | param_3 * 4 >> (3 - uVar3) * 8;
  UNRECOVERED_JUMPTABLE = *(code **)(param_3 * 4);
  pcVar2 = UNRECOVERED_JUMPTABLE + -0x3fdf;
  uVar3 = (uint)pcVar2 & 3;
  *(uint *)(pcVar2 + -uVar3) =
       *(uint *)(pcVar2 + -uVar3) & -1 << (uVar3 + 1) * 8 | 0x53ab0U >> (3 - uVar3) * 8;
                    /* WARNING: Could not emulate address calculation at 0x00014e08 */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// ==== AAC_211 @ 00015024 size=144

void AAC_211(int *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint in_t1;
  int in_t2;
  uint uVar8;
  uint in_t4;
  int in_t5;
  int in_t6;
  uint uVar9;
  
  iVar7 = *param_1;
  iVar5 = param_1[1];
  uVar4 = *param_2;
  uVar1 = iVar7 + 0x5021U & 3;
  puVar2 = (uint *)((iVar7 + 0x5021U) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | (uint)param_1[2] >> (3 - uVar1) * 8;
  uVar8 = param_2[1];
  prefetch(iVar7 + 0x4023,2);
  uVar9 = param_1[3];
  uVar3 = param_2[2];
  uVar6 = param_2[3];
  uVar1 = iVar5 + 0x4821U & 3;
  puVar2 = (uint *)((iVar5 + 0x4821U) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar9 >> (3 - uVar1) * 8;
  prefetch(iVar5 + -0x3fdd,0x18);
  uVar1 = uVar4 + 0x3021 & 3;
  puVar2 = (uint *)((uVar4 + 0x3021) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar3 >> (3 - uVar1) * 8;
  prefetch(uVar4 + 0x1023,2);
  uVar1 = uVar8 + 0x1821 & 3;
  puVar2 = (uint *)((uVar8 + 0x1821) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar6 >> (3 - uVar1) * 8;
  prefetch(uVar8 + 0x3823,7);
  uVar1 = in_t2 + 0x7021U & 3;
  puVar2 = (uint *)((in_t2 + 0x7021U) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | in_t1 >> (3 - uVar1) * 8;
  prefetch(iVar7 + 0x6823,7);
  uVar1 = iVar5 + 0x6021U & 3;
  puVar2 = (uint *)((iVar5 + 0x6021U) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar4 >> (3 - uVar1) * 8;
  uVar1 = uVar3 + 0x5821 & 3;
  puVar2 = (uint *)((uVar3 + 0x5821) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar9 >> (3 - uVar1) * 8;
  prefetch(in_t2 + 0x4823,9);
  uVar1 = iVar7 + 0x3821U & 3;
  puVar2 = (uint *)((iVar7 + 0x3821U) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar6 >> (3 - uVar1) * 8;
  prefetch(iVar5 + 0x1823,3);
  prefetch(uVar3 - 0x3fdd,0x18);
  *param_1 = in_t6;
  param_1[1] = in_t1;
  param_1[2] = in_t5;
  param_1[3] = uVar6;
  *param_2 = in_t4;
  param_2[1] = uVar4;
  param_2[2] = uVar8;
  param_2[3] = uVar9;
  return;
}



// ==== AAC_212 @ 000150b4 size=68

/* WARNING: Control flow encountered bad instruction data */

void AAC_212(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  prefetch(*(int *)(param_1 + 4) + 0x3023,0xb);
  uVar1 = *(int *)(param_1 + 4) + 0x5821;
  uVar2 = uVar1 & 3;
  puVar3 = (uint *)(uVar1 - uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | *(uint *)(param_1 + 0x14) >> (3 - uVar2) * 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_213 @ 000153f8 size=360

/* WARNING: Control flow encountered bad instruction data */

void AAC_213(int *param_1,uint *param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *in_t1;
  uint uVar11;
  uint *puVar12;
  uint *in_t3;
  uint *puVar13;
  uint *in_t5;
  uint uVar14;
  int iVar15;
  uint uVar16;
  
  puVar3 = PTR_AAC_245_0004bcd8;
  puVar6 = PTR_AAC_263_0004bc38;
  puVar2 = PTR_AAC_254_0004bb34;
  uVar9 = param_3 << 2;
  uVar11 = 1 << (param_3 + 1U & 0x1f);
  puVar1 = PTR_AAC_263_0004bc38 + 0x1821;
  uVar4 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar4) =
       *(uint *)(puVar1 + -uVar4) & -1 << (uVar4 + 1) * 8 | uVar9 >> (3 - uVar4) * 8;
  puVar7 = PTR_AAC_236_0004bc78;
  puVar2 = puVar2 + 0x1021;
  uVar4 = (uint)puVar2 & 3;
  *(uint *)(puVar2 + -uVar4) =
       *(uint *)(puVar2 + -uVar4) & -1 << (uVar4 + 1) * 8 | uVar9 >> (3 - uVar4) * 8;
  puVar3 = puVar3 + -0x3fdf;
  uVar4 = (uint)puVar3 & 3;
  *(uint *)(puVar3 + -uVar4) =
       *(uint *)(puVar3 + -uVar4) & -1 << (uVar4 + 1) * 8 | uVar9 >> (3 - uVar4) * 8;
  uVar4 = uVar11 * 2 + 0x4021;
  uVar8 = uVar4 & 3;
  puVar5 = (uint *)(uVar4 - uVar8);
  *puVar5 = *puVar5 & -1 << (uVar8 + 1) * 8 | uVar11 >> (3 - uVar8) * 8;
  puVar1 = puVar7 + 0x3021;
  uVar4 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar4) =
       *(uint *)(puVar1 + -uVar4) & -1 << (uVar4 + 1) * 8 | uVar9 >> (3 - uVar4) * 8;
  if (0 < (int)uVar11) {
    puVar13 = (uint *)(uVar11 * 8);
    puVar12 = (uint *)(uVar11 * 4);
    uVar4 = (int)param_1 + 0x6821U & 3;
    puVar5 = (uint *)(((int)param_1 + 0x6821U) - uVar4);
    *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | (uint)puVar13 >> (3 - uVar4) * 8;
    puVar10 = (uint *)(uVar11 * 8);
    uVar4 = (int)param_1 + 0x5821U & 3;
    puVar5 = (uint *)(((int)param_1 + 0x5821U) - uVar4);
    *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | (uint)puVar12 >> (3 - uVar4) * 8;
    uVar4 = (int)param_1 + 0x4821U & 3;
    puVar5 = (uint *)(((int)param_1 + 0x4821U) - uVar4);
    *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | (uint)puVar10 >> (3 - uVar4) * 8;
    uVar4 = (int)param_2 + 0x6021U & 3;
    puVar5 = (uint *)(((int)param_2 + 0x6021U) - uVar4);
    *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | (uint)puVar13 >> (3 - uVar4) * 8;
    uVar4 = (int)param_2 + 0x5021U & 3;
    puVar5 = (uint *)(((int)param_2 + 0x5021U) - uVar4);
    *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | (uint)puVar12 >> (3 - uVar4) * 8;
    uVar4 = (int)param_2 + 0x4021U & 3;
    puVar5 = (uint *)(((int)param_2 + 0x4021U) - uVar4);
    *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | (uint)puVar10 >> (3 - uVar4) * 8;
    uVar8 = *in_t5;
    uVar9 = *puVar13;
    iVar15 = *param_1;
    uVar14 = *param_2;
    uVar4 = iVar15 + 0x1821U & 3;
    puVar5 = (uint *)((iVar15 + 0x1821U) - uVar4);
    *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | uVar8 >> (3 - uVar4) * 8;
    prefetch(iVar15 + -0x4fdd,2);
    uVar4 = uVar14 + 0x1021 & 3;
    puVar5 = (uint *)((uVar14 + 0x1021) - uVar4);
    *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | uVar9 >> (3 - uVar4) * 8;
    prefetch(uVar14 - 0x67dd,0x18);
    *param_1 = (int)puVar6;
    *param_2 = uVar8;
    uVar11 = *in_t3;
    uVar16 = *puVar10;
    uVar9 = *puVar12;
    uVar8 = *in_t1;
    uVar4 = uVar11 + 0x3821 & 3;
    puVar5 = (uint *)((uVar11 + 0x3821) - uVar4);
    *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | uVar8 >> (3 - uVar4) * 8;
    prefetch(uVar11 + 0x1023,2);
    uVar4 = uVar9 + 0x3021 & 3;
    puVar5 = (uint *)((uVar9 + 0x3021) - uVar4);
    *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | uVar16 >> (3 - uVar4) * 8;
    prefetch(uVar9 + 0x1823,0x18);
    *in_t3 = (uint)puVar7;
    prefetch(iVar15 + 0x3823,3);
    *puVar12 = uVar11;
    uVar4 = uVar14 - 0x5fdf & 3;
    puVar5 = (uint *)((uVar14 - 0x5fdf) - uVar4);
    *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | uVar8 >> (3 - uVar4) * 8;
    prefetch(uVar14 - 0x67dd,2);
    uVar4 = iVar15 - 0x4fdfU & 3;
    puVar5 = (uint *)((iVar15 - 0x4fdfU) - uVar4);
    *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | uVar9 >> (3 - uVar4) * 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// ==== AAC_214 @ 000157fc size=128

void AAC_214(int param_1,int param_2)

{
  (*(code *)PTR_AAC_213_0004bbe4)(param_1,param_2,1);
  (*(code *)PTR_AAC_212_0004bcf4)(param_1,param_2);
  (*(code *)PTR_AAC_211_0004bb38)(param_1 + 0x20,param_2 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00015874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_AAC_211_0004bb38)(param_1 + 0x30,param_2 + 0x30);
  return;
}



// ==== AAC_215 @ 0001587c size=128

void AAC_215(int param_1,int param_2)

{
  (*(code *)PTR_AAC_213_0004bbe4)(param_1,param_2,2);
  (*(code *)PTR_AAC_214_0004bbb0)(param_1,param_2);
  (*(code *)PTR_AAC_212_0004bcf4)(param_1 + 0x40,param_2 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x000158f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_AAC_212_0004bcf4)(param_1 + 0x60,param_2 + 0x60);
  return;
}



// ==== AAC_216 @ 000158fc size=128

void AAC_216(int param_1,int param_2)

{
  (*(code *)PTR_AAC_213_0004bbe4)(param_1,param_2,3);
  (*(code *)PTR_AAC_215_0004bcfc)(param_1,param_2);
  (*(code *)PTR_AAC_214_0004bbb0)(param_1 + 0x80,param_2 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00015974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_AAC_214_0004bbb0)(param_1 + 0xc0,param_2 + 0xc0);
  return;
}



// ==== AAC_217 @ 0001597c size=128

void AAC_217(int param_1,int param_2)

{
  (*(code *)PTR_AAC_213_0004bbe4)(param_1,param_2,4);
  (*(code *)PTR_AAC_216_0004bb64)(param_1,param_2);
  (*(code *)PTR_AAC_215_0004bcfc)(param_1 + 0x100,param_2 + 0x100);
                    /* WARNING: Could not recover jumptable at 0x000159f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_AAC_215_0004bcfc)(param_1 + 0x180,param_2 + 0x180);
  return;
}



// ==== AAC_218 @ 000159fc size=128

void AAC_218(int param_1,int param_2)

{
  (*(code *)PTR_AAC_213_0004bbe4)(param_1,param_2,5);
  (*(code *)PTR_AAC_217_0004bb20)(param_1,param_2);
  (*(code *)PTR_AAC_216_0004bb64)(param_1 + 0x200,param_2 + 0x200);
                    /* WARNING: Could not recover jumptable at 0x00015a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_AAC_216_0004bb64)(param_1 + 0x300,param_2 + 0x300);
  return;
}



// ==== AAC_219 @ 00015a7c size=128

void AAC_219(int param_1,int param_2)

{
  (*(code *)PTR_AAC_213_0004bbe4)(param_1,param_2,6);
  (*(code *)PTR_AAC_217_0004bb20)(param_1,param_2);
  (*(code *)PTR_AAC_216_0004bb64)(param_1 + 0x400,param_2 + 0x400);
                    /* WARNING: Could not recover jumptable at 0x00015af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_AAC_216_0004bb64)(param_1 + 0x600,param_2 + 0x600);
  return;
}



// ==== AAC_220 @ 00015afc size=216

void AAC_220(int param_1,int param_2,uint param_3)

{
  undefined *puVar1;
  code *pcVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  int iVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar1 = PTR_DAT_0004bae4;
  while (9 < param_3) {
    iVar6 = 1 << (param_3 - 2 & 0x1f);
    (*(code *)PTR_AAC_213_0004bbe4)(param_1,param_2,param_3 - 3);
    puVar5 = PTR_AAC_220_0004bc94;
    uVar3 = iVar6 - 0x4fdfU & 3;
    puVar4 = (uint *)((iVar6 - 0x4fdfU) - uVar3);
    *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 | (uint)(iVar6 << 1) >> (3 - uVar3) * 8;
    (*(code *)puVar5)(param_1,param_2,param_3 - 1);
    uVar3 = param_1 + 0x2021U & 3;
    puVar4 = (uint *)((param_1 + 0x2021U) - uVar3);
    *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 | (uint)(iVar6 << 3) >> (3 - uVar3) * 8;
    puVar5 = PTR_AAC_220_0004bc94;
    uVar3 = param_2 + 0x2821U & 3;
    puVar4 = (uint *)((param_2 + 0x2821U) - uVar3);
    *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 | (uint)(iVar6 << 3) >> (3 - uVar3) * 8;
    (*(code *)puVar5)();
    uVar3 = param_1 - 0x6fdfU & 3;
    puVar4 = (uint *)((param_1 - 0x6fdfU) - uVar3);
    *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 | (uint)(iVar6 << 3) >> (3 - uVar3) * 8;
    uVar3 = param_2 - 0x77dfU & 3;
    puVar4 = (uint *)((param_2 - 0x77dfU) - uVar3);
    *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 | (uint)(iVar6 << 3) >> (3 - uVar3) * 8;
    param_3 = param_3 - 2;
  }
  puVar1 = puVar1 + 0x4e9;
  uVar3 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar3) =
       *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | param_3 * 4 >> (3 - uVar3) * 8;
  UNRECOVERED_JUMPTABLE = *(code **)(param_3 * 4);
  pcVar2 = UNRECOVERED_JUMPTABLE + -0x3fdf;
  uVar3 = (uint)pcVar2 & 3;
  *(uint *)(pcVar2 + -uVar3) =
       *(uint *)(pcVar2 + -uVar3) & -1 << (uVar3 + 1) * 8 | 0x53ab0U >> (3 - uVar3) * 8;
                    /* WARNING: Could not emulate address calculation at 0x00015b58 */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// ==== AAC_221 @ 00015d74 size=64

/* WARNING: Control flow encountered bad instruction data */

void AAC_221(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_222 @ 00016168 size=124

/* WARNING: Control flow encountered bad instruction data */

void AAC_222(int *param_1,undefined4 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *in_v0;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = 1 << (param_3 & 0x1f);
  iVar7 = *param_1;
  uVar3 = (int)param_1 + 0x1021U & 3;
  puVar5 = (uint *)(((int)param_1 + 0x1021U) - uVar3);
  *puVar5 = *puVar5 & -1 << (uVar3 + 1) * 8 | (uVar8 << 2) >> (3 - uVar3) * 8;
  puVar1 = PTR_AAC_263_0004bc38;
  uVar6 = (param_3 - 3) * 4;
  uVar3 = iVar7 + 0x1821U & 3;
  puVar5 = (uint *)((iVar7 + 0x1821U) - uVar3);
  *puVar5 = *puVar5 & -1 << (uVar3 + 1) * 8 | *in_v0 >> (3 - uVar3) * 8;
  uVar3 = 0xfffff021 - ((int)uVar8 >> 0x1f);
  uVar4 = uVar3 & 3;
  puVar5 = (uint *)(uVar3 - uVar4);
  *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | uVar8 >> (3 - uVar4) * 8;
  puVar2 = PTR_AAC_254_0004bb34;
  puVar1 = puVar1 + 0x4821;
  uVar3 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar3) =
       *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | uVar6 >> (3 - uVar3) * 8;
  puVar2 = puVar2 + 0x3021;
  uVar3 = (uint)puVar2 & 3;
  *(uint *)(puVar2 + -uVar3) =
       *(uint *)(puVar2 + -uVar3) & -1 << (uVar3 + 1) * 8 | uVar6 >> (3 - uVar3) * 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_223 @ 00016444 size=76

/* WARNING: Control flow encountered unimplemented instructions */

void AAC_223(undefined4 param_1,undefined4 param_2,uint param_3)

{
  if (0 < 1 << (param_3 & 0x1f)) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  return;
}



// ==== AAC_224 @ 000164d0 size=384

void AAC_224(int *param_1,undefined4 param_2,int *param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  int *piVar4;
  int *in_v1;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  
  uVar7 = param_4 - 1;
  iVar6 = 1 << (uVar7 & 0x1f);
  if (param_4 < 6) {
    if (0 < iVar6) {
      uVar1 = (int)param_1 + 0x4821U & 3;
      puVar2 = (uint *)(((int)param_1 + 0x4821U) - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | (uint)(iVar6 << 3) >> (3 - uVar1) * 8;
      piVar4 = param_3;
      do {
        iVar8 = *param_1;
        uVar1 = (int)piVar4 + 0x1821U & 3;
        puVar2 = (uint *)(((int)piVar4 + 0x1821U) - uVar1);
        *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | (uint)(iVar6 << 2) >> (3 - uVar1) * 8;
        piVar9 = param_1 + 2;
        *piVar4 = iVar8;
        *in_v1 = param_1[1];
        piVar4 = piVar4 + 1;
        param_1 = piVar9;
      } while (piVar9 != (int *)(iVar6 << 3));
    }
    puVar3 = PTR_AAC_210_0004bc4c;
    if (param_4 == 2) {
      iVar8 = *param_3;
      uVar5 = param_3[1];
      iVar6 = param_3[2];
      uVar10 = param_3[3];
      uVar7 = iVar8 + 0x3021;
      uVar1 = uVar7 & 3;
      puVar2 = (uint *)(uVar7 - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar5 >> (3 - uVar1) * 8;
      prefetch(iVar8 + 0x1823,3);
      uVar7 = iVar6 + 0x2821;
      uVar1 = uVar7 & 3;
      puVar2 = (uint *)(uVar7 - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar10 >> (3 - uVar1) * 8;
      prefetch(iVar6 + -0x3fdd,0x18);
      *param_3 = (int)param_3;
      param_3[1] = uVar5;
      param_3[2] = 8;
      param_3[3] = uVar10;
    }
    else {
      uVar1 = (int)param_3 + 0x2821U & 3;
      puVar2 = (uint *)(((int)param_3 + 0x2821U) - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | (uint)(iVar6 << 2) >> (3 - uVar1) * 8;
      (*(code *)puVar3)(param_3,iVar6 << 2,uVar7);
    }
  }
  else {
    if (0 < iVar6) {
      uVar1 = (int)param_1 + 0x2021U & 3;
      puVar2 = (uint *)(((int)param_1 + 0x2021U) - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | (uint)(iVar6 << 3) >> (3 - uVar1) * 8;
      piVar4 = param_3;
      do {
        iVar8 = *param_1;
        uVar1 = (int)piVar4 + 0x1821U & 3;
        puVar2 = (uint *)(((int)piVar4 + 0x1821U) - uVar1);
        *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | (uint)(iVar6 << 2) >> (3 - uVar1) * 8;
        piVar9 = param_1 + 2;
        *piVar4 = iVar8;
        *in_v1 = param_1[1];
        piVar4 = piVar4 + 1;
        param_1 = piVar9;
      } while (piVar9 != (int *)(iVar6 << 3));
    }
    puVar3 = PTR_AAC_210_0004bc4c;
    uVar1 = (int)param_3 + 0x2821U & 3;
    puVar2 = (uint *)(((int)param_3 + 0x2821U) - uVar1);
    *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | (uint)(iVar6 << 2) >> (3 - uVar1) * 8;
    (*(code *)puVar3)(param_3,iVar6 << 2,uVar7);
  }
  (*(code *)PTR_AAC_223_0004bc98)(param_3,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00016604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_AAC_221_0004bbf8)(param_2,param_3,param_4);
  return;
}



// ==== AAC_225 @ 00016650 size=448

void AAC_225(int *param_1,int *param_2,int *param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  int *in_v1;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  undefined8 uVar11;
  
  uVar8 = param_4 - 1;
  iVar6 = 1 << (uVar8 & 0x1f);
  if ((int)param_4 < 6) {
    if (0 < iVar6) {
      uVar1 = (int)param_1 + 0x4021U & 3;
      puVar2 = (uint *)(((int)param_1 + 0x4021U) - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | (uint)(iVar6 << 3) >> (3 - uVar1) * 8;
      piVar4 = param_3;
      do {
        iVar7 = *param_1;
        uVar1 = (int)piVar4 + 0x1821U & 3;
        puVar2 = (uint *)(((int)piVar4 + 0x1821U) - uVar1);
        *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | (uint)(iVar6 << 2) >> (3 - uVar1) * 8;
        piVar9 = param_1 + 2;
        *piVar4 = iVar7 >> (param_4 & 0x1f);
        *in_v1 = param_1[1] >> (param_4 & 0x1f);
        piVar4 = piVar4 + 1;
        param_1 = piVar9;
      } while (piVar9 != (int *)(iVar6 << 3));
    }
    puVar3 = PTR_AAC_210_0004bc4c;
    if (param_4 == 2) {
      iVar7 = *param_3;
      uVar5 = param_3[1];
      iVar6 = param_3[2];
      uVar10 = param_3[3];
      uVar8 = iVar7 + 0x3021;
      uVar1 = uVar8 & 3;
      puVar2 = (uint *)(uVar8 - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar5 >> (3 - uVar1) * 8;
      prefetch(iVar7 + 0x1823,3);
      uVar8 = iVar6 + 0x2821;
      uVar1 = uVar8 & 3;
      puVar2 = (uint *)(uVar8 - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar10 >> (3 - uVar1) * 8;
      prefetch(iVar6 + -0x3fdd,0x18);
      *param_3 = (int)param_3;
      param_3[1] = uVar5;
      param_3[2] = 2;
      param_3[3] = uVar10;
    }
    else {
      uVar1 = (int)param_3 + 0x2821U & 3;
      puVar2 = (uint *)(((int)param_3 + 0x2821U) - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | (uint)(iVar6 << 2) >> (3 - uVar1) * 8;
      (*(code *)puVar3)(param_3,iVar6 << 2,uVar8);
    }
  }
  else {
    if (0 < iVar6) {
      uVar1 = (int)param_1 + 0x2021U & 3;
      puVar2 = (uint *)(((int)param_1 + 0x2021U) - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | (uint)(iVar6 << 3) >> (3 - uVar1) * 8;
      piVar4 = param_2;
      do {
        iVar7 = *param_1;
        uVar1 = (int)piVar4 + 0x1821U & 3;
        puVar2 = (uint *)(((int)piVar4 + 0x1821U) - uVar1);
        *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | (uint)(iVar6 << 2) >> (3 - uVar1) * 8;
        piVar9 = param_1 + 2;
        *piVar4 = iVar7 >> 4;
        *in_v1 = param_1[1] >> 4;
        piVar4 = piVar4 + 1;
        param_1 = piVar9;
      } while (piVar9 != (int *)(iVar6 << 3));
    }
    puVar3 = PTR_AAC_210_0004bc4c;
    uVar1 = (int)param_2 + 0x2821U & 3;
    puVar2 = (uint *)(((int)param_2 + 0x2821U) - uVar1);
    *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | (uint)(iVar6 << 2) >> (3 - uVar1) * 8;
    iVar7 = 1 << (param_4 & 0x1f);
    uVar11 = (*(code *)puVar3)(param_2,iVar6 << 2,uVar8);
    piVar4 = (int *)((ulonglong)uVar11 >> 0x20);
    if (0 < iVar7) {
      uVar8 = 0;
      do {
        uVar1 = (int)param_2 + 0x1821U & 3;
        puVar2 = (uint *)(((int)param_2 + 0x1821U) - uVar1);
        *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar8 >> (3 - uVar1) * 8;
        uVar1 = (int)param_3 + 0x1021U & 3;
        puVar2 = (uint *)(((int)param_3 + 0x1021U) - uVar1);
        *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar8 >> (3 - uVar1) * 8;
        uVar8 = uVar8 + 4;
        piVar4 = (int *)(*piVar4 >> (param_4 - 4 & 0x1f));
        *(undefined4 *)uVar11 = piVar4;
      } while (uVar8 != iVar7 << 2);
    }
  }
  (*(code *)PTR_AAC_223_0004bc98)(param_3,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00016738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_AAC_221_0004bbf8)(param_2,param_3,param_4);
  return;
}



// ==== AAC_226 @ 00016810 size=320

void AAC_226(undefined4 param_1,int *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar8 = param_4 - 1;
  iVar9 = 1 << (uVar8 & 0x1f);
  if (param_4 < 6) {
    piVar5 = param_2;
    iVar7 = param_4;
    (*(code *)PTR_AAC_222_0004bd40)();
    puVar3 = PTR_AAC_220_0004bc94;
    if (param_4 == 2) {
      iVar4 = *param_2;
      uVar6 = param_2[1];
      iVar9 = param_2[2];
      uVar10 = param_2[3];
      uVar8 = iVar4 + 0x3021;
      uVar1 = uVar8 & 3;
      puVar2 = (uint *)(uVar8 - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar6 >> (3 - uVar1) * 8;
      prefetch(iVar4 + 0x1823,3);
      uVar8 = iVar9 + 0x2821;
      uVar1 = uVar8 & 3;
      puVar2 = (uint *)(uVar8 - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar10 >> (3 - uVar1) * 8;
      prefetch(iVar9 + -0x3fdd,0x18);
      *param_2 = iVar7;
      param_2[1] = uVar6;
      param_2[2] = (int)piVar5;
      param_2[3] = uVar10;
    }
    else {
      uVar6 = iVar9 << 2;
      uVar1 = (int)param_2 + 0x2821U & 3;
      puVar2 = (uint *)(((int)param_2 + 0x2821U) - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar6 >> (3 - uVar1) * 8;
      (*(code *)puVar3)(param_2,uVar6,uVar8);
    }
                    /* WARNING: Could not recover jumptable at 0x000168bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_AAC_223_0004bc98)(param_2,param_3,param_4);
    return;
  }
  (*(code *)PTR_AAC_222_0004bd40)();
  uVar6 = iVar9 << 2;
  uVar1 = (int)param_2 + 0x2821U & 3;
  puVar2 = (uint *)(((int)param_2 + 0x2821U) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar6 >> (3 - uVar1) * 8;
  (*(code *)PTR_AAC_220_0004bc94)(param_2,uVar6,uVar8);
                    /* WARNING: Could not recover jumptable at 0x00016948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_AAC_223_0004bc98)(param_2,param_3,param_4);
  return;
}



// ==== AAC_227 @ 00016950 size=484

void AAC_227(undefined4 param_1,uint *param_2,undefined4 param_3,uint param_4)

{
  undefined *UNRECOVERED_JUMPTABLE;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  
  uVar10 = param_4 - 1;
  iVar7 = 1 << (param_4 & 0x1f);
  iVar9 = 1 << (uVar10 & 0x1f);
  if ((int)param_4 < 6) {
    puVar5 = param_2;
    uVar6 = param_4;
    (*(code *)PTR_AAC_222_0004bd40)();
    if (0 < iVar7) {
      uVar4 = iVar7 * 4 + 0x1821;
      uVar1 = uVar4 & 3;
      puVar8 = (uint *)(uVar4 - uVar1);
      *puVar8 = *puVar8 & -1 << (uVar1 + 1) * 8 | (uint)param_2 >> (3 - uVar1) * 8;
      puVar8 = param_2;
      do {
        puVar11 = puVar8 + 1;
        *puVar8 = (int)*puVar8 >> (param_4 & 0x1f);
        puVar8 = puVar11;
      } while (puVar11 != (uint *)(iVar7 * 4));
    }
    UNRECOVERED_JUMPTABLE = PTR_AAC_223_0004bc98;
    if (param_4 == 2) {
      uVar3 = *param_2;
      uVar2 = param_2[1];
      uVar1 = param_2[2];
      uVar12 = param_2[3];
      uVar10 = uVar3 + 0x3021;
      uVar4 = uVar10 & 3;
      puVar8 = (uint *)(uVar10 - uVar4);
      *puVar8 = *puVar8 & -1 << (uVar4 + 1) * 8 | uVar2 >> (3 - uVar4) * 8;
      prefetch(uVar3 + 0x1823,3);
      uVar10 = uVar1 + 0x2821;
      uVar4 = uVar10 & 3;
      puVar8 = (uint *)(uVar10 - uVar4);
      *puVar8 = *puVar8 & -1 << (uVar4 + 1) * 8 | uVar12 >> (3 - uVar4) * 8;
      prefetch(uVar1 - 0x3fdd,0x18);
      *param_2 = uVar6;
      param_2[2] = (uint)puVar5;
      param_2[1] = uVar2;
      param_2[3] = uVar12;
                    /* WARNING: Could not recover jumptable at 0x00016b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE)(param_2,param_3,2);
      return;
    }
  }
  else {
    (*(code *)PTR_AAC_222_0004bd40)();
    if (0 < iVar7) {
      puVar8 = (uint *)(iVar7 * 4);
      uVar6 = (int)puVar8 - 0x77dfU & 3;
      puVar5 = (uint *)(((int)puVar8 - 0x77dfU) - uVar6);
      *puVar5 = *puVar5 & -1 << (uVar6 + 1) * 8 | (uint)param_2 >> (3 - uVar6) * 8;
      puVar5 = param_2;
      do {
        puVar11 = puVar5 + 1;
        *puVar5 = (int)*puVar5 >> 4;
        UNRECOVERED_JUMPTABLE = PTR_AAC_220_0004bc94;
        puVar5 = puVar11;
      } while (puVar11 != puVar8);
      uVar4 = iVar9 << 2;
      uVar6 = (int)param_2 + 0x2821U & 3;
      puVar5 = (uint *)(((int)param_2 + 0x2821U) - uVar6);
      *puVar5 = *puVar5 & -1 << (uVar6 + 1) * 8 | uVar4 >> (3 - uVar6) * 8;
      (*(code *)UNRECOVERED_JUMPTABLE)(param_2,uVar4,uVar10);
      puVar5 = param_2;
      do {
        puVar11 = puVar5 + 1;
        *puVar5 = (int)*puVar5 >> (param_4 - 4 & 0x1f);
        puVar5 = puVar11;
      } while (puVar8 != puVar11);
                    /* WARNING: Could not recover jumptable at 0x00016a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_AAC_223_0004bc98)(param_2,param_3,param_4);
      return;
    }
  }
  UNRECOVERED_JUMPTABLE = PTR_AAC_220_0004bc94;
  uVar4 = iVar9 << 2;
  uVar6 = (int)param_2 + 0x2821U & 3;
  puVar5 = (uint *)(((int)param_2 + 0x2821U) - uVar6);
  *puVar5 = *puVar5 & -1 << (uVar6 + 1) * 8 | uVar4 >> (3 - uVar6) * 8;
  (*(code *)UNRECOVERED_JUMPTABLE)(param_2,uVar4,uVar10);
                    /* WARNING: Could not recover jumptable at 0x00016acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_AAC_223_0004bc98)(param_2,param_3,param_4);
  return;
}



// ==== AAC_228 @ 00016b34 size=428

void AAC_228(int *param_1,undefined4 param_2,int *param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *in_t0;
  int iVar8;
  int *piVar9;
  uint uVar10;
  
  if (param_4 < (int)param_5) {
    return;
  }
  iVar7 = 1 << (param_4 - 1U & 0x1f);
  if (param_4 < 6) {
    if (0 < iVar7) {
      uVar1 = (int)param_1 + 0x5821U & 3;
      puVar3 = (uint *)(((int)param_1 + 0x5821U) - uVar1);
      *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | (uint)(iVar7 << 3) >> (3 - uVar1) * 8;
      piVar5 = param_3;
      do {
        iVar8 = *param_1;
        uVar1 = (int)piVar5 + 0x4021U & 3;
        puVar3 = (uint *)(((int)piVar5 + 0x4021U) - uVar1);
        *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | (uint)(iVar7 << 2) >> (3 - uVar1) * 8;
        piVar9 = param_1 + 2;
        *piVar5 = iVar8 >> (param_5 & 0x1f);
        *in_t0 = param_1[1] >> (param_5 & 0x1f);
        piVar5 = piVar5 + 1;
        param_1 = piVar9;
      } while (piVar9 != (int *)(iVar7 << 3));
    }
    puVar4 = PTR_AAC_210_0004bc4c;
    if (param_4 == 2) {
      iVar8 = *param_3;
      uVar6 = param_3[1];
      iVar7 = param_3[2];
      uVar10 = param_3[3];
      uVar1 = iVar8 + 0x3021;
      uVar2 = uVar1 & 3;
      puVar3 = (uint *)(uVar1 - uVar2);
      *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar6 >> (3 - uVar2) * 8;
      prefetch(iVar8 + 0x1823,3);
      uVar1 = iVar7 + 0x2821;
      uVar2 = uVar1 & 3;
      puVar3 = (uint *)(uVar1 - uVar2);
      *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar10 >> (3 - uVar2) * 8;
      prefetch(iVar7 + -0x3fdd,0x18);
      *param_3 = 1;
      param_3[1] = uVar6;
      param_3[2] = 8;
      param_3[3] = uVar10;
    }
    else {
      uVar1 = (int)param_3 + 0x2821U & 3;
      puVar3 = (uint *)(((int)param_3 + 0x2821U) - uVar1);
      *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | (uint)(iVar7 << 2) >> (3 - uVar1) * 8;
      (*(code *)puVar4)(param_3);
    }
  }
  else {
    if (0 < iVar7) {
      uVar1 = (int)param_1 + 0x5021U & 3;
      puVar3 = (uint *)(((int)param_1 + 0x5021U) - uVar1);
      *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | (uint)(iVar7 << 3) >> (3 - uVar1) * 8;
      piVar5 = param_3;
      do {
        iVar8 = *param_1;
        uVar1 = (int)piVar5 + 0x4021U & 3;
        puVar3 = (uint *)(((int)piVar5 + 0x4021U) - uVar1);
        *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | (uint)(iVar7 << 2) >> (3 - uVar1) * 8;
        piVar9 = param_1 + 2;
        *piVar5 = iVar8 >> (param_5 & 0x1f);
        *in_t0 = param_1[1] >> (param_5 & 0x1f);
        piVar5 = piVar5 + 1;
        param_1 = piVar9;
      } while (piVar9 != (int *)(iVar7 << 3));
    }
    puVar4 = PTR_AAC_210_0004bc4c;
    uVar1 = (int)param_3 + 0x2821U & 3;
    puVar3 = (uint *)(((int)param_3 + 0x2821U) - uVar1);
    *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | (uint)(iVar7 << 2) >> (3 - uVar1) * 8;
    (*(code *)puVar4)(param_3);
  }
  (*(code *)PTR_AAC_223_0004bc98)(param_3,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00016c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_AAC_221_0004bbf8)(param_2,param_3,param_4);
  return;
}



// ==== AAC_229 @ 00016ce0 size=480

void AAC_229(undefined4 param_1,uint *param_2,undefined4 param_3,uint param_4,uint param_5)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  
  if ((int)param_4 < (int)param_5) {
    return;
  }
  uVar9 = param_4 - 1;
  iVar8 = 1 << (param_4 & 0x1f);
  iVar7 = 1 << (uVar9 & 0x1f);
  if (5 < (int)param_4) {
    (*(code *)PTR_AAC_222_0004bd40)();
    if (0 < iVar8) {
      uVar6 = iVar8 * 4 + 0x1821;
      uVar5 = uVar6 & 3;
      puVar11 = (uint *)(uVar6 - uVar5);
      *puVar11 = *puVar11 & -1 << (uVar5 + 1) * 8 | (uint)param_2 >> (3 - uVar5) * 8;
      puVar11 = param_2;
      do {
        puVar10 = puVar11 + 1;
        *puVar11 = (int)*puVar11 >> (param_5 & 0x1f);
        puVar11 = puVar10;
      } while (puVar10 != (uint *)(iVar8 * 4));
    }
    puVar1 = PTR_AAC_220_0004bc94;
    uVar5 = iVar7 << 2;
    uVar6 = (int)param_2 + 0x2821U & 3;
    puVar11 = (uint *)(((int)param_2 + 0x2821U) - uVar6);
    *puVar11 = *puVar11 & -1 << (uVar6 + 1) * 8 | uVar5 >> (3 - uVar6) * 8;
    (*(code *)puVar1)(param_2,uVar5,uVar9);
                    /* WARNING: Could not recover jumptable at 0x00016dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_AAC_223_0004bc98)(param_2,param_3,param_4);
    return;
  }
  uVar6 = param_4;
  (*(code *)PTR_AAC_222_0004bd40)();
  if (0 < iVar8) {
    uVar5 = (int)param_2 + 0x1821U & 3;
    puVar11 = (uint *)(((int)param_2 + 0x1821U) - uVar5);
    *puVar11 = *puVar11 & -1 << (uVar5 + 1) * 8 | (uint)(iVar8 << 2) >> (3 - uVar5) * 8;
    puVar11 = param_2;
    do {
      puVar10 = puVar11 + 1;
      *puVar11 = (int)*puVar11 >> (param_5 & 0x1f);
      puVar11 = puVar10;
    } while (puVar10 != (uint *)(iVar8 << 2));
  }
  puVar1 = PTR_AAC_220_0004bc94;
  uVar5 = iVar7 << 2;
  if (param_4 == 2) {
    uVar4 = *param_2;
    uVar3 = param_2[1];
    uVar2 = param_2[2];
    uVar12 = param_2[3];
    uVar9 = uVar4 + 0x3021;
    uVar5 = uVar9 & 3;
    puVar11 = (uint *)(uVar9 - uVar5);
    *puVar11 = *puVar11 & -1 << (uVar5 + 1) * 8 | uVar3 >> (3 - uVar5) * 8;
    prefetch(uVar4 + 0x1823,3);
    uVar9 = uVar2 + 0x2821;
    uVar5 = uVar9 & 3;
    puVar11 = (uint *)(uVar9 - uVar5);
    *puVar11 = *puVar11 & -1 << (uVar5 + 1) * 8 | uVar12 >> (3 - uVar5) * 8;
    prefetch(uVar2 - 0x3fdd,0x18);
    *param_2 = uVar6;
    param_2[1] = uVar3;
    param_2[2] = 8;
    param_2[3] = uVar12;
  }
  else {
    uVar6 = (int)param_2 + 0x2821U & 3;
    puVar11 = (uint *)(((int)param_2 + 0x2821U) - uVar6);
    *puVar11 = *puVar11 & -1 << (uVar6 + 1) * 8 | uVar5 >> (3 - uVar6) * 8;
    (*(code *)puVar1)(param_2,uVar5,uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00016e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_AAC_223_0004bc98)(param_2,param_3,param_4);
  return;
}



// ==== AAC_273 @ 00016ec0 size=56

void AAC_273(undefined4 *param_1)

{
  *param_1 = 48000;
  param_1[1] = 32000;
  param_1[2] = 2;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



// ==== AAC_274 @ 0001723c size=268

undefined4 AAC_274(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (*(code *)PTR_AACENC_context_create_0004bc70)(param_1 + 8);
  param_1[6] = iVar2;
  if (iVar2 == 0) {
    (*(code *)PTR_puts_0004bcec)(PTR_DAT_0004bae4 + 0x44f0);
    (*(code *)PTR_AACEncoder_API_free_0004bc90)(param_1);
    uVar3 = 0xfffffffe;
  }
  else {
    (*(code *)PTR_AAC_192_0004bc44)();
    (*(code *)PTR_AAC_010_0004bcf8)();
    (*(code *)PTR_AAC_003_0004bba0)(param_1[6],param_1[2]);
    iVar2 = (*(code *)PTR_AAC_Malloc_0004bcb8)(0x2000);
    param_1[3] = iVar2;
    puVar1 = PTR_AAC_008_0004bc2c;
    if (iVar2 == 0) {
      (*(code *)PTR_puts_0004bcec)(PTR_DAT_0004bae4 + 0x4504);
      (*(code *)PTR_AACEncoder_API_free_0004bc90)(param_1);
      uVar3 = 0xffffffff;
    }
    else {
      param_1[4] = iVar2;
      param_1[5] = iVar2 + 0x1000;
      (*(code *)puVar1)(param_1[6],*param_1,param_1[1],param_1[2]);
      uVar3 = 0;
    }
  }
  return uVar3;
}



// ==== AAC_010 @ 00017460 size=16

void AAC_010(void)

{
  return;
}



// ==== AAC_011 @ 00017470 size=4

/* WARNING: Control flow encountered bad instruction data */

void AAC_011(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_012 @ 000174fc size=48

void AAC_012(void)

{
  (*(code *)PTR_FUN_0004bae8)();
  return;
}



// ==== AAC_013 @ 0001752c size=4

/* WARNING: Control flow encountered bad instruction data */

void AAC_013(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_014 @ 00017540 size=4

/* WARNING: Control flow encountered bad instruction data */

void AAC_014(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_015 @ 00017594 size=4

/* WARNING: Control flow encountered bad instruction data */

void AAC_015(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_016 @ 000175f0 size=4

/* WARNING: Control flow encountered bad instruction data */

void AAC_016(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_017 @ 00017650 size=168

int AAC_017(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0 && param_2 == 0) {
    return 0;
  }
  if (((int)param_2 < 1) && ((param_2 != 0 || (param_1 == 0)))) {
    iVar1 = 0;
    if (-0x40000001 < (int)param_2) {
      do {
        iVar1 = iVar1 + 1;
        param_2 = param_1 >> 0x1f | param_2 << 1;
        param_1 = param_1 << 1;
      } while (-0x40000001 < (int)param_2);
      return iVar1;
    }
  }
  else {
    iVar1 = 0;
    for (; (int)param_2 < 0x40000000; param_2 = uVar2 | param_2 << 1) {
      uVar2 = param_1 >> 0x1f;
      iVar1 = iVar1 + 1;
      param_1 = param_1 << 1;
    }
  }
  return iVar1;
}



// ==== AAC_018 @ 000176f8 size=4

/* WARNING: Control flow encountered bad instruction data */

void AAC_018(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_019 @ 000177e8 size=4

/* WARNING: Control flow encountered bad instruction data */

void AAC_019(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_020 @ 000178d8 size=4

/* WARNING: Control flow encountered bad instruction data */

void AAC_020(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_021 @ 000179c8 size=88

/* WARNING: Control flow encountered unimplemented instructions */

undefined4 AAC_021(int param_1)

{
  if (param_1 < 0x19) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  return 0;
}



// ==== AAC_022 @ 00017ae4 size=156

/* WARNING: Control flow encountered bad instruction data */

void AAC_022(int param_1)

{
  if (param_1 < 0x1a) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 < 0x2e) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 < 0x42) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (0x55 < param_1) {
    if (param_1 < 0x65) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (0x96 < param_1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_023 @ 00017d10 size=1484

void AAC_023(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_1 < 0x52) {
    iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 0x10,0xa60c5a1d);
    uVar1 = iVar4 * 0x100 + 0x1021;
    uVar2 = uVar1 & 3;
    puVar3 = (uint *)(uVar1 - uVar2);
    *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | 0x7d7765feU >> (3 - uVar2) * 8;
  }
  else {
    if (param_1 < 0x7b) {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 0x10,0x9bd23a2a);
      uVar1 = iVar4 * 0x80 + 0x1021;
      uVar2 = uVar1 & 3;
      puVar3 = (uint *)(uVar1 - uVar2);
      *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | 0x637ec56dU >> (3 - uVar2) * 8;
      return;
    }
    if (param_1 < 0xcd) {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 0x10,0xa387ef9e);
      uVar1 = iVar4 * 0x40 + 0x1021;
      uVar2 = uVar1 & 3;
      puVar3 = (uint *)(uVar1 - uVar2);
      *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | 0x49367a10U >> (3 - uVar2) * 8;
      return;
    }
    if (param_1 < 0xa400) {
      if (param_1 < 0x800) {
        if (param_1 < 0x133) {
          iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 0x10,0xa911b717);
          uVar1 = iVar4 * 0x20 + 0x1021;
          uVar2 = uVar1 & 3;
          puVar3 = (uint *)(uVar1 - uVar2);
          *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | 0x35fae148U >> (3 - uVar2) * 8;
        }
        else if (param_1 < 0x19a) {
          iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 0x10,0x9dae48e9);
          uVar1 = iVar4 * 0x10 + 0x1021;
          uVar2 = uVar1 & 3;
          puVar3 = (uint *)(uVar1 - uVar2);
          *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | 0x2adfd8aeU >> (3 - uVar2) * 8;
        }
        else if (param_1 < 0x266) {
          iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 0x10,0x922c3c9f);
          uVar1 = iVar4 * 8 + 0x1021;
          uVar2 = uVar1 & 3;
          puVar3 = (uint *)(uVar1 - uVar2);
          *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | 0x22119ce0U >> (3 - uVar2) * 8;
        }
        else if (param_1 < 0x333) {
          iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 0x10,0xc1f9db23);
          uVar1 = iVar4 * 8 + 0x1021;
          uVar2 = uVar1 & 3;
          puVar3 = (uint *)(uVar1 - uVar2);
          *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | 0x1b0902deU >> (3 - uVar2) * 8;
        }
        else if (param_1 < 0x4cd) {
          iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 0x10,0xbaecbfb1);
          uVar1 = iVar4 * 4 + 0x1021;
          uVar2 = uVar1 & 3;
          puVar3 = (uint *)(uVar1 - uVar2);
          *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | 0x15706f69U >> (3 - uVar2) * 8;
        }
        else {
          iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 0x10,0x807c84b6);
          uVar1 = iVar4 + 0x1021U & 3;
          puVar3 = (uint *)((iVar4 + 0x1021U) - uVar1);
          *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | 0xfc67382U >> (3 - uVar1) * 8;
        }
      }
      else if (param_1 < 0xc00) {
        iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 0x10,0xc40ebee0);
        uVar1 = iVar4 + 0x1021U & 3;
        puVar3 = (uint *)((iVar4 + 0x1021U) - uVar1);
        *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | 0xba19653U >> (3 - uVar1) * 8;
      }
      else if (param_1 < 0x1000) {
        iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 0x10,0xde1b089a);
        uVar1 = iVar4 + 0x1021U & 3;
        puVar3 = (uint *)((iVar4 + 0x1021U) - uVar1);
        *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | 0x93d07c8U >> (3 - uVar1) * 8;
      }
      else if (param_1 < 0x2000) {
        iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 0x10,0xf19652bd);
        uVar1 = iVar4 + 0x1021U & 3;
        puVar3 = (uint *)((iVar4 + 0x1021U) - uVar1);
        *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | 0x6a1cac1U >> (3 - uVar1) * 8;
      }
      else if (param_1 < 0x3800) {
        iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 0x10,0xfad77319);
        uVar1 = iVar4 + 0x1021U & 3;
        puVar3 = (uint *)((iVar4 + 0x1021U) - uVar1);
        *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | 0x4604189U >> (3 - uVar1) * 8;
      }
      else if (param_1 < 0x6000) {
        iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 0x10,0xfded288d);
        uVar1 = iVar4 + 0x1021U & 3;
        puVar3 = (uint *)((iVar4 + 0x1021U) - uVar1);
        *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | 0x30902deU >> (3 - uVar1) * 8;
      }
      else {
        iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 0xf,0xff27bb30);
        uVar1 = iVar4 * 2 + 0x1021;
        uVar2 = uVar1 & 3;
        puVar3 = (uint *)(uVar1 - uVar2);
        *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | 0x21f212dU >> (3 - uVar2) * 8;
      }
    }
    else if (param_1 < 0x14400) {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 0xe,0xffb15b57);
      uVar1 = iVar4 * 4 + 0x1021;
      uVar2 = uVar1 & 3;
      puVar3 = (uint *)(uVar1 - uVar2);
      *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | 0x16a161eU >> (3 - uVar2) * 8;
    }
    else if (param_1 < 0x23400) {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 0xd,0xffe28241);
      uVar1 = iVar4 * 8 + 0x1021;
      uVar2 = uVar1 & 3;
      puVar3 = (uint *)(uVar1 - uVar2);
      *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | 0xf34d6aU >> (3 - uVar2) * 8;
    }
    else if (param_1 < 0x37400) {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 0xd,0xfff2e48f);
      uVar1 = iVar4 * 8 + 0x1021;
      uVar2 = uVar1 & 3;
      puVar3 = (uint *)(uVar1 - uVar2);
      *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | 0xb05532U >> (3 - uVar2) * 8;
    }
    else if (param_1 < 0x4b400) {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 0xc,0xfff9c62a);
      uVar1 = iVar4 * 0x10 + 0x1021;
      uVar2 = uVar1 & 3;
      puVar3 = (uint *)(uVar1 - uVar2);
      *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | 0x82a993U >> (3 - uVar2) * 8;
    }
    else if (param_1 < 0x64400) {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 0xc,0xfffbbd7b);
      uVar1 = iVar4 * 0x10 + 0x1021;
      uVar2 = uVar1 & 3;
      puVar3 = (uint *)(uVar1 - uVar2);
      *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | 0x706f69U >> (3 - uVar2) * 8;
    }
    else if (param_1 < 0x96400) {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 0xb,0xfffdb4cc);
      uVar1 = iVar4 * 0x20 + 0x1021;
      uVar2 = uVar1 & 3;
      puVar3 = (uint *)(uVar1 - uVar2);
      *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | 0x57a787U >> (3 - uVar2) * 8;
    }
    else if (param_1 < 0xc8400) {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 0xb,0xfffeda66);
      uVar1 = iVar4 * 0x20 + 0x1021;
      uVar2 = uVar1 & 3;
      puVar3 = (uint *)(uVar1 - uVar2);
      *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | 0x425aeeU >> (3 - uVar2) * 8;
    }
    else if (param_1 < 0x12c400) {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 10,0xffff4fd7);
      uVar1 = iVar4 * 0x40 + 0x1021;
      uVar2 = uVar1 & 3;
      puVar3 = (uint *)(uVar1 - uVar2);
      *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | 0x3645a2U >> (3 - uVar2) * 8;
    }
    else if (param_1 < 0x190400) {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 10,0xffff92f3);
      uVar1 = iVar4 * 0x40 + 0x1021;
      uVar2 = uVar1 & 3;
      puVar3 = (uint *)(uVar1 - uVar2);
      *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | 0x2ca57aU >> (3 - uVar2) * 8;
    }
    else if (param_1 < 0x1f4400) {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 10,0xffffbce4);
      uVar1 = iVar4 * 0x40 + 0x1021;
      uVar2 = uVar1 & 3;
      puVar3 = (uint *)(uVar1 - uVar2);
      *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | 0x24cd75U >> (3 - uVar2) * 8;
    }
    else if (param_1 < 0x3e8400) {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 9,0xffffde72);
      uVar1 = iVar4 * 0x80 + 0x1021;
      uVar2 = uVar1 & 3;
      puVar3 = (uint *)(uVar1 - uVar2);
      *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | 0x1c0ebfU >> (3 - uVar2) * 8;
    }
    else if (param_1 < 0x5dc400) {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 8,0xfffff36b);
      uVar1 = iVar4 * 0x100 + 0x1021;
      uVar2 = uVar1 & 3;
      puVar3 = (uint *)(uVar1 - uVar2);
      *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | 0x12d773U >> (3 - uVar2) * 8;
    }
    else if (param_1 < 0x7d0400) {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 8,0xfffff873);
      uVar1 = iVar4 * 0x100 + 0x1021;
      uVar2 = uVar1 & 3;
      puVar3 = (uint *)(uVar1 - uVar2);
      *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | 0xf5c29U >> (3 - uVar2) * 8;
    }
    else {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1,0xfffffaf8);
      uVar1 = iVar4 * 0x10000 + 0x1021;
      uVar2 = uVar1 & 3;
      puVar3 = (uint *)(uVar1 - uVar2);
      *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | 0xd10f5U >> (3 - uVar2) * 8;
    }
  }
  return;
}



// ==== AAC_024 @ 000182dc size=1016

/* WARNING: Control flow encountered bad instruction data */

void AAC_024(int param_1,short param_2,short param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 < 2) {
    halt_baddata();
  }
  if (param_2 != 2) {
    if (param_1 < 0xc800001) {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1,0xccccccd);
      uVar5 = 0x126bb1af;
    }
    else if (param_1 < 0x7d000000) {
      uVar5 = 0x24d76379;
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1,0x147ae14);
    }
    else {
      uVar5 = 0x3743150e;
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1,0x20c49c);
    }
    if (iVar4 < 0x300000) {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(iVar4 << 8,0x673d07c8);
      uVar1 = iVar4 + 0x1021U & 3;
      puVar3 = (uint *)((iVar4 + 0x1021U) - uVar1);
      *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | 0xd07ae148U >> (3 - uVar1) * 8;
    }
    else if (iVar4 < 0x39999a) {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(iVar4 << 8,0x4db3d07d);
      uVar1 = iVar4 + 0x1021U & 3;
      puVar3 = (uint *)((iVar4 + 0x1021U) - uVar1);
      *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | 0xd9bf4880U >> (3 - uVar1) * 8;
    }
    else if (iVar4 < 0x400000) {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(iVar4 << 7,0x4367a0f9);
      iVar4 = iVar4 * 2;
      uVar1 = iVar4 + 0x1021U & 3;
      puVar3 = (uint *)((iVar4 + 0x1021U) - uVar1);
      *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | 0xde538ef3U >> (3 - uVar1) * 8;
    }
    else if (iVar4 < 0x49999a) {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(iVar4 << 7,0x772e48e9);
      uVar1 = iVar4 + 0x1021U & 3;
      puVar3 = (uint *)((iVar4 + 0x1021U) - uVar1);
      *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | 0xe2418937U >> (3 - uVar1) * 8;
    }
    else if (iVar4 < 0x600000) {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(iVar4 << 7,0x60f27bb3);
      uVar1 = iVar4 + 0x1021U & 3;
      puVar3 = (uint *)((iVar4 + 0x1021U) - uVar1);
      *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | 0xe8cccccdU >> (3 - uVar1) * 8;
    }
    else if (iVar4 < 0x800000) {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(iVar4 << 7,0x49724745);
      uVar1 = iVar4 + 0x1021U & 3;
      puVar3 = (uint *)((iVar4 + 0x1021U) - uVar1);
      *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | 0xf1a9fbe7U >> (3 - uVar1) * 8;
    }
    else if (iVar4 < 0xc00000) {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(iVar4 << 7,0x339f559b);
      uVar1 = iVar4 + 0x1021U & 3;
      puVar3 = (uint *)((iVar4 + 0x1021U) - uVar1);
      *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | 0xfcd5cfabU >> (3 - uVar1) * 8;
    }
    else if (iVar4 < 0x1000000) {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(iVar4 << 6,0x24b923a3);
      iVar4 = iVar4 * 2;
      uVar1 = iVar4 + 0x1021U & 3;
      puVar3 = (uint *)((iVar4 + 0x1021U) - uVar1);
      *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | 0x7d7dbf5U >> (3 - uVar1) * 8;
    }
    else {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(iVar4 << 6,0x1c84b5dd);
      iVar4 = iVar4 * 2;
      uVar1 = iVar4 + 0x1021U & 3;
      puVar3 = (uint *)((iVar4 + 0x1021U) - uVar1);
      *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | 0xffb15b5U >> (3 - uVar1) * 8;
    }
    uVar1 = (iVar4 >> 2) + 0x1021;
    uVar2 = uVar1 & 3;
    puVar3 = (uint *)(uVar1 - uVar2);
    *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar5 >> (3 - uVar2) * 8;
    uVar5 = (iVar4 >> 2) + 0x1021;
    uVar1 = uVar5 & 3;
    puVar3 = (uint *)(uVar5 - uVar1);
    *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | 0U >> (3 - uVar1) * 8;
    return;
  }
  if (param_1 < 0x1062) {
    if (param_1 < 0x1a3) {
      if (param_1 < 0x2a) {
        if (param_1 < 1) {
          halt_baddata();
        }
        if (param_3 == 0) {
          halt_baddata();
        }
        goto LAB_000187c8;
      }
      if (param_3 == 0) {
        halt_baddata();
      }
    }
    else {
      if (param_3 == 0) {
        halt_baddata();
      }
LAB_00018714:
      if (0x68db < param_1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    if (0xa7b < param_1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_000187c8:
    if (0x10b < param_1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1 < 0x1b) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_3 == 0) {
    if (param_1 < 0xa3d7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1 < 0x28f5c3) {
      if (param_1 < 0x66666) {
        halt_baddata();
      }
      goto LAB_00018664;
    }
  }
  else {
    if (param_1 < 0x41893) goto LAB_00018714;
    if (param_1 < 0x28f5c3) {
      halt_baddata();
    }
  }
  if ((param_1 < 0x199999a) && (param_3 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_00018664:
  uVar5 = param_1 * 2 + 0x1021;
  uVar1 = uVar5 & 3;
  puVar3 = (uint *)(uVar5 - uVar1);
  *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | (uint)(param_1 << 3) >> (3 - uVar1) * 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_025 @ 00018870 size=1008

int AAC_025(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 < 0x3c0) {
    if (0xff < param_1) {
      iVar3 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 6,0x37505d10);
      return iVar3 + 0x13f0;
    }
    if (param_1 < 0x40) {
      if (param_1 < 0x1a) {
        if (param_1 < 6) {
          if (param_1 < 2) {
            if (param_1 == 1) {
              iVar3 = (*(code *)PTR_AAC_011_0004bd24)(0x80,0x7d3dd97f);
              iVar3 = iVar3 + 0x37;
            }
            else {
              iVar3 = 0;
            }
          }
          else {
            iVar3 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 7,0x5ee631f9);
            iVar3 = iVar3 + 0x80;
          }
        }
        else {
          iVar3 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 7,0x44bac711);
          iVar3 = iVar3 + 0x14b;
        }
      }
      else {
        iVar3 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 6,0x699652bd);
        iVar3 = iVar3 + 0x2ef;
      }
    }
    else {
      iVar3 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 6,0x4d4ee393);
      iVar3 = iVar3 + 0x745;
    }
  }
  else {
    if (param_1 < 0xa00) {
      iVar3 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 6,0x2a353f7d);
      return iVar3 + 0x2dc5;
    }
    if (param_1 < 0x1e00) {
      iVar3 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 6,0x205eb314);
      iVar3 = iVar3 + 0x64d2;
    }
    else if (param_1 < 0x4b00) {
      iVar3 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 6,0x195ef1fe);
      uVar1 = iVar3 + 0x1021U & 3;
      puVar2 = (uint *)((iVar3 + 0x1021U) - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | 0xd371U >> (3 - uVar1) * 8;
    }
    else if (param_1 < 0xaf00) {
      iVar3 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 6,0x146833c6);
      uVar1 = iVar3 + 0x1021U & 3;
      puVar2 = (uint *)((iVar3 + 0x1021U) - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | 0x197a6U >> (3 - uVar1) * 8;
    }
    else if (param_1 < 0x1a900) {
      iVar3 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 6,0x1067381d);
      uVar1 = iVar3 + 0x1021U & 3;
      puVar2 = (uint *)((iVar3 + 0x1021U) - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | 0x30f75U >> (3 - uVar1) * 8;
    }
    else if (param_1 < 0x3e800) {
      iVar3 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 6,0xd355476);
      uVar1 = iVar3 + 0x1021U & 3;
      puVar2 = (uint *)((iVar3 + 0x1021U) - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | 0x5dec5U >> (3 - uVar1) * 8;
    }
    else if (param_1 < 640000) {
      iVar3 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 6,0xa8f0846);
      uVar1 = iVar3 + 0x1021U & 3;
      puVar2 = (uint *)((iVar3 + 0x1021U) - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | 0xb7571U >> (3 - uVar1) * 8;
    }
    else if (param_1 < 0x222e00) {
      iVar3 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 6,0x7ebc83b);
      uVar1 = iVar3 + 0x1021U & 3;
      puVar2 = (uint *)((iVar3 + 0x1021U) - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | 0x1aa266U >> (3 - uVar1) * 8;
    }
    else if (param_1 < 0x57e400) {
      iVar3 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 6,0x61c3efb);
      uVar1 = iVar3 + 0x1021U & 3;
      puVar2 = (uint *)((iVar3 + 0x1021U) - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | 0x3b0a8fU >> (3 - uVar1) * 8;
    }
    else if (param_1 < 19200000) {
      iVar3 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 6,0x49d0636);
      uVar1 = iVar3 + 0x1021U & 3;
      puVar2 = (uint *)((iVar3 + 0x1021U) - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | 0x873800U >> (3 - uVar1) * 8;
    }
    else if (param_1 < 51200000) {
      iVar3 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 5,0x38c9fb6);
      iVar3 = iVar3 * 2;
      uVar1 = iVar3 + 0x1021U & 3;
      puVar2 = (uint *)((iVar3 + 0x1021U) - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | 0x12cae66U >> (3 - uVar1) * 8;
    }
    else if (param_1 < 128000000) {
      iVar3 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 3,0x2cec41e);
      iVar3 = iVar3 * 8;
      uVar1 = iVar3 + 0x1021U & 3;
      puVar2 = (uint *)((iVar3 + 0x1021U) - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | 0x261699aU >> (3 - uVar1) * 8;
    }
    else if (param_1 < 448000000) {
      iVar3 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 2,0x21b3aef);
      iVar3 = iVar3 * 0x10;
      uVar1 = iVar3 + 0x1021U & 3;
      puVar2 = (uint *)((iVar3 + 0x1021U) - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | 0x5889000U >> (3 - uVar1) * 8;
    }
    else if (param_1 < 960000000) {
      iVar3 = (*(code *)PTR_AAC_011_0004bd24)(param_1 << 1,0x1ac929b);
      iVar3 = iVar3 * 0x20;
      uVar1 = iVar3 + 0x1021U & 3;
      puVar2 = (uint *)((iVar3 + 0x1021U) - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | 0xb4fd000U >> (3 - uVar1) * 8;
    }
    else {
      iVar3 = (*(code *)PTR_AAC_011_0004bd24)(param_1,0x15f0b28);
      iVar3 = iVar3 * 0x40;
      uVar1 = iVar3 + 0x1021U & 3;
      puVar2 = (uint *)((iVar3 + 0x1021U) - uVar1);
      *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | 0x1488c000U >> (3 - uVar1) * 8;
    }
  }
  return iVar3;
}



// ==== AAC_026 @ 00018c60 size=444

void AAC_026(int param_1,short param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_2 == 0) {
    if (0x6666665 < param_1) {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1,0x52d288ce);
      uVar1 = iVar4 * 2 + 0x1021;
      uVar2 = uVar1 & 3;
      puVar3 = (uint *)(uVar1 - uVar2);
      *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | 0x59f8a09U >> (3 - uVar2) * 8;
      return;
    }
    if (param_1 < 0x4666667) {
      if (0x2666665 < param_1) {
        iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1,0x7734d6a1);
        uVar1 = iVar4 + 0x1021U & 3;
        puVar3 = (uint *)((iVar4 + 0x1021U) - uVar1);
        *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | 0x796872bU >> (3 - uVar1) * 8;
        return;
      }
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1,0x628c154d);
      uVar1 = iVar4 + 0x1021U & 3;
      puVar3 = (uint *)((iVar4 + 0x1021U) - uVar1);
      *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | 0x7f80347U >> (3 - uVar1) * 8;
      return;
    }
    iVar4 = (*(code *)PTR_AAC_011_0004bd24)(param_1,0x46e147ae);
    uVar1 = iVar4 * 2 + 0x1021;
    uVar2 = uVar1 & 3;
    puVar3 = (uint *)(uVar1 - uVar2);
    *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | 0x6ced917U >> (3 - uVar2) * 8;
  }
  else {
    if (0x6666665 < param_1) {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(-param_1,0x2f919264);
      uVar1 = iVar4 + 0x1021U & 3;
      puVar3 = (uint *)((iVar4 + 0x1021U) - uVar1);
      *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | 0x6f75b81U >> (3 - uVar1) * 8;
      return;
    }
    if (param_1 < 0x4666667) {
      if (0x2666665 < param_1) {
        iVar4 = (*(code *)PTR_AAC_011_0004bd24)(-param_1,0x42223e18);
        uVar1 = iVar4 + 0x1021U & 3;
        puVar3 = (uint *)((iVar4 + 0x1021U) - uVar1);
        *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | 0x7b90eaaU >> (3 - uVar1) * 8;
        return;
      }
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(-param_1,0x500c73ac);
      uVar1 = iVar4 + 0x1021U & 3;
      puVar3 = (uint *)((iVar4 + 0x1021U) - uVar1);
      *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | 0x7f9335dU >> (3 - uVar1) * 8;
    }
    else {
      iVar4 = (*(code *)PTR_AAC_011_0004bd24)(-param_1,0x379cb685);
      uVar1 = iVar4 + 0x1021U & 3;
      puVar3 = (uint *)((iVar4 + 0x1021U) - uVar1);
      *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | 0x75cf030U >> (3 - uVar1) * 8;
    }
  }
  return;
}



// ==== AAC_276 @ 00018e20 size=168

int AAC_276(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  byte local_18;
  byte local_17;
  byte local_16;
  byte local_15;
  
  local_18 = (byte)((uint)param_2 >> 0x18);
  local_17 = (byte)((uint)param_2 >> 0x10);
  local_16 = (byte)((uint)param_2 >> 8);
  local_15 = (byte)param_2;
  iVar1 = (*(code *)PTR_ioctl_0004bd58)(param_1,0xc00473a2,&local_18);
  if (-1 < iVar1) {
    if (param_3 == (uint *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 0;
      *param_3 = (uint)local_18 << 0x18 | (uint)local_17 << 0x10 | (uint)local_15 |
                 (uint)local_16 << 8;
    }
  }
  return iVar1;
}



// ==== AAC_277 @ 00018ec8 size=172

int AAC_277(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18 [2];
  
  if (param_2 == 1) {
    uVar1 = (*(code *)PTR_strtoul_0004bcd4)(*param_3,0,0);
    iVar2 = (*(code *)PTR_AAC_276_0004bbec)(param_1,uVar1,local_18);
    if (-1 < iVar2) {
      (*(code *)PTR_printf_0004bd4c)(PTR_DAT_0004bae4 + 0x4588,local_18[0]);
      iVar2 = 0;
    }
  }
  else {
    (*(code *)PTR_fwrite_0004bb80)
              (PTR_DAT_0004bae4 + 0x4540,1,0x45,*(undefined4 *)PTR_stdout_0004bd48);
    iVar2 = -5;
  }
  return iVar2;
}



// ==== AAC_278 @ 00018f74 size=248

undefined4 AAC_278(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  
  if (param_2 == 2) {
    uVar1 = (*(code *)PTR_strtoul_0004bcd4)(*param_3,0,0);
    uVar2 = (*(code *)PTR_strtoul_0004bcd4)(param_3[1],0,0);
    local_1d = (undefined1)uVar1;
    local_1c = (undefined1)((uint)uVar2 >> 0x18);
    local_1a = (undefined1)((uint)uVar2 >> 8);
    local_1f = (undefined1)((uint)uVar1 >> 0x10);
    local_20 = (undefined1)((uint)uVar1 >> 0x18);
    local_1e = (undefined1)((uint)uVar1 >> 8);
    local_1b = (undefined1)((uint)uVar2 >> 0x10);
    local_19 = (undefined1)uVar2;
    uVar1 = (*(code *)PTR_ioctl_0004bd58)(param_1,0xc00473a3,&local_20);
  }
  else {
    (*(code *)PTR_fwrite_0004bb80)
              (PTR_DAT_0004bae4 + 0x4540,1,0x45,*(undefined4 *)PTR_stdout_0004bd48);
    uVar1 = 0xfffffffb;
  }
  return uVar1;
}



// ==== AAC_279 @ 0001906c size=720

int AAC_279(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 local_40 [8];
  undefined4 local_38;
  
  if (param_2 == 3) {
    iVar1 = (*(code *)PTR_strtoul_0004bcd4)(*param_3,0,0);
    uVar2 = (*(code *)PTR_strtoul_0004bcd4)(param_3[1],0,0);
    local_38 = param_3[2];
    if ((uVar2 & 3) == 0) {
      puVar3 = (undefined1 *)(*(code *)PTR_malloc_0004bcdc)(uVar2);
      if (puVar3 == (undefined1 *)0x0) {
        iVar1 = -0xc;
      }
      else {
        if (0 < (int)uVar2 >> 2) {
          iVar6 = 0;
          puVar5 = puVar3;
          do {
            iVar6 = iVar6 + 1;
            iVar4 = (*(code *)PTR_AAC_276_0004bbec)(param_1,iVar1,local_40);
            if (iVar4 < 0) {
              (*(code *)PTR_free_0004baf8)(puVar3);
              return iVar4;
            }
            *puVar5 = (char)local_40._0_4_;
            puVar5[1] = SUB41(local_40._0_4_,1);
            puVar5[2] = SUB41(local_40._0_4_,2);
            puVar5[3] = SUB41(local_40._0_4_,3);
            puVar5 = puVar5 + 4;
            iVar1 = iVar1 + 4;
          } while (iVar6 != (int)uVar2 >> 2);
        }
        iVar1 = (*(code *)PTR_fopen_0004bbf4)(local_38,PTR_DAT_0004bae4 + 0x45cc);
        if (iVar1 == 0) {
          (*(code *)PTR_fprintf_0004bc5c)
                    (*(undefined4 *)PTR_stderr_0004bbb4,PTR_DAT_0004bae4 + 0x45b0,local_38);
          (*(code *)PTR_free_0004baf8)(puVar3);
          iVar1 = -5;
        }
        else {
          iVar6 = (*(code *)PTR_fwrite_0004bb80)(puVar3,uVar2,1,iVar1);
          if (iVar6 == 1) {
            (*(code *)PTR_fclose_0004bbdc)(iVar1);
            (*(code *)PTR_free_0004baf8)(puVar3);
            return 0;
          }
          (*(code *)PTR_fwrite_0004bb80)
                    (PTR_DAT_0004bae4 + 0x45c0,1,0xb,*(undefined4 *)PTR_stderr_0004bbb4);
          (*(code *)PTR_free_0004baf8)(puVar3);
          (*(code *)PTR_fclose_0004bbdc)(iVar1);
          iVar1 = -5;
        }
      }
    }
    else {
      (*(code *)PTR_fwrite_0004bb80)
                (PTR_DAT_0004bae4 + 0x4590,1,0x1f,*(undefined4 *)PTR_stderr_0004bbb4);
      iVar1 = -5;
    }
  }
  else {
    (*(code *)PTR_fwrite_0004bb80)
              (PTR_DAT_0004bae4 + 0x4540,1,0x45,*(undefined4 *)PTR_stdout_0004bd48);
    iVar1 = -5;
  }
  return iVar1;
}



// ==== AAC_028 @ 000193b0 size=32

/* WARNING: Control flow encountered bad instruction data */

void AAC_028(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// ==== AAC_029 @ 00019428 size=596

/* WARNING: Control flow encountered unimplemented instructions */

void AAC_029(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int extraout_v1;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  undefined8 uVar17;
  int *local_48;
  
  iVar15 = *(int *)(param_1 + 0x11c);
  if (0 < iVar15) {
    local_48 = (int *)(param_1 + 0x14);
    iVar10 = 0;
    do {
      prefetch(*local_48 + 0x2023,0x18);
      iVar14 = local_48[0x43];
      iVar11 = local_48[0x44];
      piVar4 = (int *)(*(code *)PTR_AAC_021_0004bd00)(*local_48);
      if (iVar14 < iVar11) {
        uVar13 = iVar14 << 2;
        piVar16 = (int *)0x0;
        uVar9 = 0;
        piVar6 = piVar4;
        do {
          uVar2 = param_3 + 0x1021U & 3;
          puVar3 = (uint *)((param_3 + 0x1021U) - uVar2);
          *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar13 >> (3 - uVar2) * 8;
          if (iVar10 == 0) {
            iVar8 = *piVar6;
            if (iVar8 != 0) goto LAB_00019560;
          }
          else {
            iVar8 = *piVar6;
LAB_00019560:
            puVar7 = (undefined4 *)(uint)(iVar8 < 0xf);
            puVar1 = PTR_AAC_176_0004bcb0 + 0x1821;
            uVar2 = (uint)puVar1 & 3;
            *(uint *)(puVar1 + -uVar2) =
                 *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 |
                 (uint)(iVar8 << 2) >> (3 - uVar2) * 8;
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)(*(code *)PTR_AAC_022_0004bb00)();
              puVar12 = puVar7;
            }
            else {
              puVar12 = *(undefined4 **)(iVar8 << 2);
            }
            puVar1 = PTR_AAC_014_0004bce0;
            uVar2 = param_2 + 0x1021U & 3;
            puVar3 = (uint *)((param_2 + 0x1021U) - uVar2);
            *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar13 >> (3 - uVar2) * 8;
            uVar17 = (*(code *)puVar1)(*puVar7,*puVar7);
            uVar5 = (uint)uVar17;
            uVar2 = uVar9 + 0x1021 & 3;
            puVar3 = (uint *)((uVar9 + 0x1021) - uVar2);
            *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar5 >> (3 - uVar2) * 8;
            puVar1 = PTR_AAC_014_0004bce0;
            uRamffff9020 = uRamffff9020 & 0xffff0000 | (uint)((ulonglong)uVar17 >> 0x30);
            uVar9 = (uVar5 < uVar9) - 0x6fdf;
            uVar2 = uVar9 & 3;
            puVar3 = (uint *)(uVar9 - uVar2);
            *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | 0U >> (3 - uVar2) * 8;
            (*(code *)puVar1)(puVar12,puVar12);
            piVar6 = (int *)(extraout_v1 >> 2);
            uVar9 = (int)piVar16 + 0x1021U & 3;
            puVar3 = (uint *)(((int)piVar16 + 0x1021U) - uVar9);
            *puVar3 = *puVar3 & -1 << (uVar9 + 1) * 8 | (uint)piVar6 >> (3 - uVar9) * 8;
            uRamffff8820 = uRamffff8820 & 0xffff0000 | (uint)(extraout_v1 >> 0x1f) >> 0x10;
            uVar9 = (piVar6 < piVar16) - 0x77df;
            uVar2 = uVar9 & 3;
            puVar3 = (uint *)(uVar9 - uVar2);
            *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | 0U >> (3 - uVar2) * 8;
            uVar9 = uVar5;
            piVar16 = piVar6;
          }
          iVar14 = iVar14 + 1;
          uVar13 = uVar13 + 4;
        } while (iVar14 != iVar11);
        if (piVar16 != (int *)0x0) {
          uVar17 = (*(code *)PTR_AAC_014_0004bce0)(piVar4,piVar4);
          (*(code *)PTR_AAC_017_0004bd30)((int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
          (*(code *)PTR_AAC_017_0004bd30)(uVar9,0);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
          halt_unimplemented();
        }
      }
      iVar10 = iVar10 + 1;
      local_48 = local_48 + 1;
    } while (iVar10 != iVar15);
  }
  return;
}



// ==== AAC_030 @ 00019828 size=76

/* WARNING: Control flow encountered bad instruction data */

void AAC_030(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_032 @ 00019e30 size=880

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00019fa8) */
/* WARNING: Removing unreachable block (ram,0x0001a42c) */
/* WARNING: Removing unreachable block (ram,0x00019fc4) */
/* WARNING: Removing unreachable block (ram,0x00019fd4) */
/* WARNING: Removing unreachable block (ram,0x0001a468) */
/* WARNING: Removing unreachable block (ram,0x00019fe8) */
/* WARNING: Removing unreachable block (ram,0x0001a000) */
/* WARNING: Removing unreachable block (ram,0x0001a058) */
/* WARNING: Removing unreachable block (ram,0x0001a044) */
/* WARNING: Removing unreachable block (ram,0x0001a07c) */
/* WARNING: Removing unreachable block (ram,0x0001a090) */
/* WARNING: Removing unreachable block (ram,0x0001a3f4) */
/* WARNING: Removing unreachable block (ram,0x0001a410) */
/* WARNING: Removing unreachable block (ram,0x0001a48c) */
/* WARNING: Removing unreachable block (ram,0x0001a6c4) */
/* WARNING: Removing unreachable block (ram,0x0001a49c) */
/* WARNING: Removing unreachable block (ram,0x0001a420) */
/* WARNING: Removing unreachable block (ram,0x0001a404) */
/* WARNING: Removing unreachable block (ram,0x0001a048) */
/* WARNING: Removing unreachable block (ram,0x0001a0a8) */
/* WARNING: Removing unreachable block (ram,0x0001a430) */

undefined4 AAC_032(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,int *param_6)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *unaff_s3;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  uint local_60;
  
  *(int *)(param_1 + 0x201c) = param_2 + 0x290;
  iVar3 = *(int *)(param_2 + 0x11c);
  iVar7 = 0;
  *(undefined4 **)(param_1 + 0x2018) = (undefined4 *)(param_2 + 0x14);
  *(int *)(param_1 + 0x2014) = param_2 + 0x120;
  puVar6 = (undefined4 *)(param_2 + 0x14);
  if (0 < iVar3) {
    do {
      iVar7 = iVar7 + 1;
      iVar4 = puVar6[0x43];
      iVar5 = puVar6[0x44];
      if (*param_6 == 0) {
        puVar8 = (undefined4 *)(uint)(iVar4 < iVar5);
        if (puVar8 != (undefined4 *)0x0) goto LAB_00019f10;
      }
      else if (iVar4 < iVar5) {
        uVar1 = param_4 + 0x1821U & 3;
        puVar2 = (uint *)((param_4 + 0x1821U) - uVar1);
        *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | (uint)(iVar4 << 2) >> (3 - uVar1) * 8;
        uVar1 = param_4 + 0x2821U & 3;
        puVar2 = (uint *)((param_4 + 0x2821U) - uVar1);
        *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | (uint)(iVar5 << 2) >> (3 - uVar1) * 8;
        iVar3 = param_4;
        do {
          iVar3 = iVar3 + 4;
        } while (iVar3 != param_2);
        puVar8 = (undefined4 *)0x1;
LAB_00019f10:
        local_60 = iVar5 << 2;
        uVar1 = param_5 - 0x3fdfU & 3;
        puVar2 = (uint *)((param_5 - 0x3fdfU) - uVar1);
        *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | (uint)(iVar4 << 2) >> (3 - uVar1) * 8;
        uVar1 = param_5 - 0x67dfU & 3;
        puVar2 = (uint *)((param_5 - 0x67dfU) - uVar1);
        *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | local_60 >> (3 - uVar1) * 8;
        do {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        } while (puVar8 != unaff_s3);
        iVar3 = *(int *)(param_2 + 0x11c);
      }
      *puVar6 = 10;
      puVar6[0x9f] = 0xffffffff;
      param_6 = param_6 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar7 < iVar3);
  }
  return 0;
}



// ==== AAC_033 @ 0001a790 size=144

/* WARNING: Control flow encountered bad instruction data */

void AAC_033(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_stack_00000014;
  
  puVar3 = (undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_2 + 0x10) = 0;
  if (0 < *(int *)(param_2 + 0x11c)) {
    iVar4 = 0;
    do {
      *puVar3 = 0;
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < *(int *)(param_2 + 0x11c));
  }
  uVar1 = in_stack_00000014 - 0x3fdfU & 3;
  puVar2 = (uint *)((in_stack_00000014 - 0x3fdfU) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | 0U >> (3 - uVar1) * 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_036 @ 0001a99c size=136

/* WARNING: Control flow encountered bad instruction data */

void AAC_036(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  
  piVar3 = (int *)((*(int *)(param_1 + 0x11c) + 0x48) * 4);
  uVar1 = param_1 - 0x3fdfU & 3;
  puVar2 = (uint *)((param_1 - 0x3fdfU) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | (uint)piVar3 >> (3 - uVar1) * 8;
  if (0 < *piVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(param_1 + 0x200) = 1;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  return;
}



// ==== AAC_039 @ 0001aaa0 size=432

undefined4 AAC_039(undefined4 param_1,undefined4 *param_2,int param_3)

{
  if (param_3 == 0) {
    return 0x38;
  }
  (*(code *)PTR_AAC_114_0004bcc4)(param_1,0xc,0xffff);
  (*(code *)PTR_AAC_114_0004bcc4)(param_1,1,param_2[0x2e8]);
  (*(code *)PTR_AAC_114_0004bcc4)(param_1,2,0);
  (*(code *)PTR_AAC_114_0004bcc4)(param_1,1,1);
  (*(code *)PTR_AAC_114_0004bcc4)(param_1,2,param_2[0x2e9]);
  (*(code *)PTR_AAC_114_0004bcc4)(param_1,4,param_2[2]);
  (*(code *)PTR_AAC_114_0004bcc4)(param_1,1,0);
  (*(code *)PTR_AAC_114_0004bcc4)(param_1,3,*param_2);
  (*(code *)PTR_AAC_114_0004bcc4)(param_1,1,0);
  (*(code *)PTR_AAC_114_0004bcc4)(param_1,1,0);
  (*(code *)PTR_AAC_114_0004bcc4)(param_1,1,0);
  (*(code *)PTR_AAC_114_0004bcc4)(param_1,1,0);
  (*(code *)PTR_AAC_114_0004bcc4)(param_1,0xd,param_2[3]);
  (*(code *)PTR_AAC_114_0004bcc4)(param_1,0xb,0x7ff);
  (*(code *)PTR_AAC_114_0004bcc4)(param_1,2,0);
  return 0x38;
}



// ==== AAC_040 @ 0001ac50 size=208

undefined4
AAC_040(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  if (param_5 == 0) {
    return 0xb;
  }
  (*(code *)PTR_AAC_114_0004bcc4)(param_1,1,0);
  (*(code *)PTR_AAC_114_0004bcc4)(param_1,2,param_2[2]);
  (*(code *)PTR_AAC_114_0004bcc4)(param_1,1,*param_2);
  (*(code *)PTR_AAC_114_0004bcc4)(param_1,6,param_2[0x46]);
  (*(code *)PTR_AAC_114_0004bcc4)(param_1,1,param_2[0x12a]);
  return 0xb;
}



// ==== AAC_041 @ 0001ad20 size=72

undefined4 AAC_041(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
    return 1;
  }
  (*(code *)PTR_AAC_114_0004bcc4)(param_1,1,0);
  return 1;
}



// ==== AAC_042 @ 0001ad68 size=184

/* WARNING: Control flow encountered bad instruction data */

undefined8 AAC_042(undefined4 param_1,int param_2,int param_3)

{
  if (param_3 != 0) {
    (*(code *)PTR_AAC_114_0004bcc4)(param_1,1,*(undefined4 *)(param_2 + 0x370));
  }
  if (*(int *)(param_2 + 0x370) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0x300000001;
}



// ==== AAC_043 @ 0001b0d0 size=72

undefined4 AAC_043(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
    return 1;
  }
  (*(code *)PTR_AAC_114_0004bcc4)(param_1,1,0);
  return 1;
}



// ==== AAC_044 @ 0001b118 size=276

undefined4 AAC_044(undefined4 param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  
  puVar6 = *(undefined4 **)(param_2 + 0x284);
  puVar7 = *(uint **)(param_2 + 0x288);
  if (param_3 == 0) {
    if (0 < *(int *)(param_2 + 0x210)) {
      puVar4 = (uint *)(*(int *)(param_2 + 0x210) << 2);
      uVar2 = (int)puVar7 + 0x1821U & 3;
      puVar1 = (uint *)(((int)puVar7 + 0x1821U) - uVar2);
      *puVar1 = *puVar1 & -1 << (uVar2 + 1) * 8 | (uint)puVar4 >> (3 - uVar2) * 8;
      do {
        uVar2 = *puVar7;
        puVar7 = puVar7 + 1;
        uRamffff8820 = uRamffff8820 & 0xffff0000 | uVar2 >> 0x10;
      } while (puVar7 != puVar4);
    }
  }
  else {
    iVar3 = *(int *)(param_2 + 0x210);
    if (0 < iVar3) {
      iVar5 = 0;
      do {
        iVar5 = iVar5 + 1;
        if (0 < (int)*puVar7) {
          (*(code *)PTR_AAC_114_0004bcc4)(param_1,*puVar7,*puVar6);
          iVar3 = *(int *)(param_2 + 0x210);
          uRamffff8820 = uRamffff8820 & 0xffff0000 | *puVar7 >> 0x10;
        }
        puVar7 = puVar7 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar5 < iVar3);
      return 0;
    }
  }
  return 0;
}



// ==== AAC_045 @ 0001b22c size=352

void AAC_045(undefined4 param_1,int param_2,int param_3,undefined4 param_4,uint param_5,char param_6
            )

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  
  if (param_5 != 0) {
    (*(code *)PTR_AAC_114_0004bcc4)(param_1,8,*(undefined4 *)(param_2 + 0x10));
  }
  if (param_3 == 0) {
    iVar4 = (*(code *)PTR_AAC_040_0004bb88)(param_1,param_2,param_4,0,param_5);
    uVar5 = iVar4 + 8;
  }
  else {
    uVar5 = 8;
  }
  iVar4 = (*(code *)PTR_AAC_073_0004bc68)(param_1,param_2,param_5);
  puVar3 = PTR_AAC_074_0004bc34;
  uVar1 = iVar4 - 0x5fdfU & 3;
  puVar2 = (uint *)((iVar4 - 0x5fdfU) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar5 >> (3 - uVar1) * 8;
  iVar4 = (*(code *)puVar3)(param_1,param_2,param_5);
  puVar3 = PTR_AAC_041_0004bd44;
  uVar1 = iVar4 - 0x5fdfU & 3;
  puVar2 = (uint *)((iVar4 - 0x5fdfU) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar5 >> (3 - uVar1) * 8;
  iVar4 = (*(code *)puVar3)(param_1,param_2,param_5);
  puVar3 = PTR_AAC_042_0004bb48;
  uVar1 = iVar4 - 0x5fdfU & 3;
  puVar2 = (uint *)((iVar4 - 0x5fdfU) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar5 >> (3 - uVar1) * 8;
  iVar4 = (*(code *)puVar3)(param_1,param_2,param_5);
  puVar3 = PTR_AAC_043_0004bc30;
  uVar1 = iVar4 - 0x5fdfU & 3;
  puVar2 = (uint *)((iVar4 - 0x5fdfU) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar5 >> (3 - uVar1) * 8;
  iVar4 = (*(code *)puVar3)(param_1,param_2,param_5);
  uVar1 = iVar4 - 0x7fdfU & 3;
  puVar2 = (uint *)((iVar4 - 0x7fdfU) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar5 >> (3 - uVar1) * 8;
  iVar4 = (*(code *)PTR_AAC_044_0004bd0c)(param_1,param_2,param_5,(int)param_6);
  uVar5 = iVar4 + 0x1021U & 3;
  puVar2 = (uint *)((iVar4 + 0x1021U) - uVar5);
  *puVar2 = *puVar2 & -1 << (uVar5 + 1) * 8 | param_5 >> (3 - uVar5) * 8;
  return;
}



// ==== AAC_046 @ 0001b38c size=576

/* WARNING: Control flow encountered bad instruction data */

void AAC_046(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,int param_6)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int local_48;
  
  if (param_6 != 0) {
    (*(code *)PTR_AAC_114_0004bcc4)(param_1,3,1);
    (*(code *)PTR_AAC_114_0004bcc4)(param_1,4,*param_4);
    (*(code *)PTR_AAC_114_0004bcc4)(param_1,1,param_4[4]);
  }
  uVar8 = 8;
  uVar6 = 0;
  if (param_4[4] != 0) {
    iVar4 = (*(code *)PTR_AAC_040_0004bb88)(param_1,param_2,param_5,param_4[4],param_6);
    iVar5 = *(int *)(param_2 + 0xf4);
    iVar7 = *(int *)(param_2 + 0x118);
    if (param_6 == 0) {
      iVar5 = param_4[8];
    }
    else {
      (*(code *)PTR_AAC_114_0004bcc4)(param_1,2,param_4[8]);
      if (param_4[8] != 1) {
        uVar6 = param_4[4];
        uVar8 = iVar4 + 10;
        goto LAB_0001b3f0;
      }
      if (iVar5 < 1) {
        halt_baddata();
      }
      local_48 = 0;
      do {
        if (0 < iVar7) {
          iVar10 = 0;
          puVar9 = param_4 + 9;
          do {
            uVar6 = *puVar9;
            iVar10 = iVar10 + 1;
            puVar9 = puVar9 + 1;
            (*(code *)PTR_AAC_114_0004bcc4)(param_1,1,uVar6);
          } while (iVar10 != iVar7);
        }
        local_48 = local_48 + 1;
        uVar8 = (int)param_4 - 0x3fbbU & 3;
        puVar2 = (uint *)(((int)param_4 - 0x3fbbU) - uVar8);
        *puVar2 = *puVar2 & -1 << (uVar8 + 1) * 8 | (uint)(iVar7 << 2) >> (3 - uVar8) * 8;
      } while (local_48 != iVar5);
      iVar5 = param_4[8];
    }
    uVar8 = iVar4 + 10;
    if (iVar5 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar6 = param_4[4];
  }
LAB_0001b3f0:
  iVar4 = (*(code *)PTR_AAC_045_0004bd2c)(param_1,param_2,uVar6,param_5,param_6,0);
  puVar3 = PTR_AAC_045_0004bd2c;
  uVar6 = param_4[4];
  uVar1 = iVar4 - 0x47dfU & 3;
  puVar2 = (uint *)((iVar4 - 0x47dfU) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar8 >> (3 - uVar1) * 8;
  iVar4 = (*(code *)puVar3)(param_1,param_3,uVar6,param_5,param_6,1);
  uVar1 = iVar4 + 0x1021U & 3;
  puVar2 = (uint *)((iVar4 + 0x1021U) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar8 >> (3 - uVar1) * 8;
  return;
}



// ==== AAC_047 @ 0001b5f0 size=184

int AAC_047(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,int param_5
           ,char param_6)

{
  int iVar1;
  
  if (param_5 != 0) {
    (*(code *)PTR_AAC_114_0004bcc4)(param_1,3,0);
    (*(code *)PTR_AAC_114_0004bcc4)(param_1,4,*param_3);
  }
  iVar1 = (*(code *)PTR_AAC_045_0004bd2c)(param_1,param_2,0,param_4,param_5,(int)param_6);
  return iVar1 + 7;
}



// ==== AAC_048 @ 0001b6a8 size=184

int AAC_048(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,int param_5
           ,char param_6)

{
  int iVar1;
  
  if (param_5 != 0) {
    (*(code *)PTR_AAC_114_0004bcc4)(param_1,3,3);
    (*(code *)PTR_AAC_114_0004bcc4)(param_1,4,*param_3);
  }
  iVar1 = (*(code *)PTR_AAC_045_0004bd2c)(param_1,param_2,0,param_4,param_5,(int)param_6);
  return iVar1 + 7;
}



// ==== AAC_049 @ 0001b760 size=320

/* WARNING: Control flow encountered bad instruction data */

void AAC_049(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  do {
    iVar1 = param_2;
    if (param_2 < 7) {
      return;
    }
    while (iVar3 = iVar1 + -7 >> 3, param_3 != 0) {
      (*(code *)PTR_AAC_114_0004bcc4)(param_1,3,6);
      if (0xe < iVar3) {
        (*(code *)PTR_AAC_114_0004bcc4)(param_1,4,0xf);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_2 = (*(code *)PTR_AAC_114_0004bcc4)(param_1,4,iVar3);
      iVar4 = 0;
      if (iVar3 < 1) goto LAB_0001b7c4;
      do {
        iVar4 = iVar4 + 1;
        iVar2 = (*(code *)PTR_AAC_114_0004bcc4)(param_1,8,0);
      } while (iVar4 != iVar3);
      prefetch(iVar1 + 0x101c,0x10);
      iVar1 = iVar2;
      if (iVar2 < 7) {
        return;
      }
    }
    param_2 = iVar1;
    if (0xe < iVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_0001b7c4:
    prefetch(iVar1 + 0x101c,0x10);
  } while( true );
}



// ==== AAC_050 @ 0001b920 size=124

/* WARNING: Control flow encountered unimplemented instructions */

void AAC_050(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint auStack_4007 [4097];
  
  iVar6 = *(int *)(param_2 + 0xf4);
  uVar7 = 0;
  if (0 < iVar6) {
    iVar4 = 0;
    do {
      iVar5 = *(int *)(param_2 + 0xf8);
      uVar1 = iVar5 + 0x2021;
      uVar2 = uVar1 & 3;
      puVar3 = (uint *)(uVar1 - uVar2);
      *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar7 >> (3 - uVar2) * 8;
      if (0 < iVar5) {
        piVar8 = (int *)(uVar7 << 2);
        uVar7 = (uint)auStack_4007 & 3;
        puVar3 = (uint *)((int)auStack_4007 - uVar7);
        *puVar3 = *puVar3 & -1 << (uVar7 + 1) * 8 | (uint)piVar8 >> (3 - uVar7) * 8;
        uVar7 = (uint)&stack0x000017f9 & 3;
        puVar3 = (uint *)(&stack0x000017f9 + -uVar7);
        *puVar3 = *puVar3 & -1 << (uVar7 + 1) * 8 | (param_1 << 2) >> (3 - uVar7) * 8;
        do {
          *piVar8 = iVar4;
          piVar8 = piVar8 + 1;
          uVar7 = param_1;
        } while (piVar8 != (int *)(param_1 << 2));
      }
      iVar4 = iVar4 + 1;
      param_2 = param_2 + 4;
    } while (iVar4 != iVar6);
  }
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}



// ==== AAC_051 @ 0001b9ac size=56

/* WARNING: Control flow encountered bad instruction data */

void AAC_051(void)

{
  (*(code *)PTR_AAC_118_0004bd6c)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_052 @ 0001ba80 size=396

/* WARNING: Control flow encountered bad instruction data */

void AAC_052(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (*(int *)(param_2 + 0xbc0) == 1) {
    uVar6 = (*(code *)PTR_AAC_039_0004bb3c)(param_1,param_2,0);
  }
  else {
    uVar6 = 0;
  }
  iVar5 = 0;
  if (0 < param_5) {
    do {
      if (*(int *)(param_4 + 4) != 0) {
        if (*(int *)(param_4 + 0x14) == 0) {
          if (*(int *)(param_4 + 0x1c) == 0) {
            uVar3 = (*(code *)PTR_AAC_047_0004bca4)
                              (param_1,param_3,param_4,*(undefined4 *)(param_2 + 0xba4),0,
                               (int)(char)iVar5);
            uVar1 = uVar6 - 0xfdf & 3;
            puVar2 = (uint *)((uVar6 - 0xfdf) - uVar1);
            *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar3 >> (3 - uVar1) * 8;
          }
          else {
            uVar3 = (*(code *)PTR_AAC_048_0004bca8)
                              (param_1,param_3,param_4,*(undefined4 *)(param_2 + 0xba4),0,
                               (int)(char)iVar5);
            uVar1 = uVar6 - 0xfdf & 3;
            puVar2 = (uint *)((uVar6 - 0xfdf) - uVar1);
            *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar3 >> (3 - uVar1) * 8;
          }
        }
        else if (*(int *)(param_4 + 8) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      iVar5 = iVar5 + 1;
      param_4 = param_4 + 0x108;
      param_3 = param_3 + 0x4b0;
    } while (iVar5 != param_5);
  }
  iVar5 = 6;
  if ((int)uVar6 < 5) {
    iVar5 = 0xb;
    prefetch(0xffff802e,0x1e);
  }
  iVar4 = (*(code *)PTR_AAC_049_0004bc40)(param_1,iVar5,0);
  prefetch(iVar5 + 0x1023,2);
  uVar1 = iVar4 - 0xfdfU & 3;
  puVar2 = (uint *)((iVar4 - 0xfdfU) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar6 >> (3 - uVar1) * 8;
  iVar5 = (*(code *)PTR_AAC_051_0004bce4)(param_1,uVar6 + 3,0);
  uVar1 = iVar5 + 0x1021U & 3;
  puVar2 = (uint *)((iVar5 + 0x1021U) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar6 + 3 >> (3 - uVar1) * 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_053 @ 0001bcb0 size=480

/* WARNING: Control flow encountered bad instruction data */

void AAC_053(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  (*(code *)PTR_AAC_052_0004bbe0)();
  if (*(int *)(param_2 + 0xbc0) == 1) {
    uVar7 = (*(code *)PTR_AAC_039_0004bb3c)(param_1,param_2,1);
  }
  else {
    uVar7 = 0;
  }
  iVar6 = 0;
  if (0 < param_5) {
    do {
      if (*(int *)(param_4 + 4) != 0) {
        if (*(int *)(param_4 + 0x14) == 0) {
          if (*(int *)(param_4 + 0x1c) == 0) {
            uVar4 = (*(code *)PTR_AAC_047_0004bca4)
                              (param_1,param_3,param_4,*(undefined4 *)(param_2 + 0xba4),1,
                               (int)(char)iVar6);
            uVar1 = uVar7 - 0x47df & 3;
            puVar2 = (uint *)((uVar7 - 0x47df) - uVar1);
            *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar4 >> (3 - uVar1) * 8;
          }
          else {
            uVar4 = (*(code *)PTR_AAC_048_0004bca8)
                              (param_1,param_3,param_4,*(undefined4 *)(param_2 + 0xba4),1,
                               (int)(char)iVar6);
            uVar1 = uVar7 - 0x47df & 3;
            puVar2 = (uint *)((uVar7 - 0x47df) - uVar1);
            *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar4 >> (3 - uVar1) * 8;
          }
        }
        else if (*(int *)(param_4 + 8) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      iVar6 = iVar6 + 1;
      param_4 = param_4 + 0x108;
      param_3 = param_3 + 0x4b0;
    } while (iVar6 != param_5);
  }
  if ((int)uVar7 < 5) {
    iVar6 = 0xb;
    prefetch(0xffff802e,0x17);
  }
  else {
    iVar6 = 6;
  }
  iVar5 = (*(code *)PTR_AAC_049_0004bc40)(param_1,iVar6,1);
  puVar3 = PTR_AAC_114_0004bcc4;
  prefetch(iVar6 + 0x1023,2);
  uVar1 = iVar5 - 0x7fdfU & 3;
  puVar2 = (uint *)((iVar5 - 0x7fdfU) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar7 >> (3 - uVar1) * 8;
  (*(code *)puVar3)(param_1,3,7);
  iVar5 = (*(code *)PTR_AAC_051_0004bce4)(param_1,iVar6 + 3U,1);
  uVar7 = iVar5 + 0x1021U & 3;
  puVar2 = (uint *)((iVar5 + 0x1021U) - uVar7);
  *puVar2 = *puVar2 & -1 << (uVar7 + 1) * 8 | iVar6 + 3U >> (3 - uVar7) * 8;
  return;
}



// ==== AAC_055 @ 0001bf00 size=284

void AAC_055(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int in_v1;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  if (param_2 == 2) {
    iVar4 = 2;
    uVar7 = 0;
  }
  else {
    iVar4 = param_2 + -1;
    uVar7 = 1;
    param_1[1] = 1;
    *param_1 = 0;
    param_1[5] = 0;
    param_1[7] = 0;
    if (iVar4 < 2) goto LAB_0001bfa0;
  }
  prefetch(param_2 + 0x1823,7);
  iVar5 = 0;
  uVar8 = in_v1 * 0x100;
  uVar1 = in_v1 * 8 - 0x3fdf;
  uVar2 = uVar1 & 3;
  puVar3 = (uint *)(uVar1 - uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar8 >> (3 - uVar2) * 8;
  uVar1 = (int)param_1 - 0x3fdfU & 3;
  puVar3 = (uint *)(((int)param_1 - 0x3fdfU) - uVar1);
  *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | uVar8 >> (3 - uVar1) * 8;
  puVar9 = (undefined4 *)(uVar8 + 4);
  do {
    iVar4 = iVar4 + -2;
    puVar9[-1] = iVar5;
    iVar6 = in_v1 + 1;
    puVar9[0x44] = in_v1;
    *puVar9 = 1;
    iVar5 = iVar5 + 1;
    puVar9[4] = 1;
    in_v1 = in_v1 + 2;
    puVar9[3] = 0;
    puVar9[1] = 1;
    puVar9[2] = iVar6;
    puVar9[6] = 0;
    puVar9[0x42] = 1;
    puVar9[0x46] = 1;
    puVar9[0x45] = 0;
    puVar9[0x43] = 0;
    puVar9[0x48] = 0;
    puVar9 = puVar9 + 0x84;
  } while (1 < iVar4);
LAB_0001bfa0:
  if (iVar4 != 0) {
    prefetch(param_2 + 0x2823,7);
    if (param_3 != 0) {
      uVar1 = param_2 * 8 + 0x2821;
      uVar2 = uVar1 & 3;
      puVar3 = (uint *)(uVar1 - uVar2);
      *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | (uint)(param_2 << 8) >> (3 - uVar2) * 8;
      uVar1 = (int)param_1 + 0x2021U & 3;
      puVar3 = (uint *)(((int)param_1 + 0x2021U) - uVar1);
      *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | (uint)(param_2 << 8) >> (3 - uVar1) * 8;
      param_1[1] = 1;
      *param_1 = 0;
      param_1[5] = 0;
      param_1[7] = 1;
      return;
    }
    uVar1 = param_2 * 8 + 0x2821;
    uVar2 = uVar1 & 3;
    puVar3 = (uint *)(uVar1 - uVar2);
    *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | (uint)(param_2 << 8) >> (3 - uVar2) * 8;
    uVar1 = (int)param_1 + 0x2021U & 3;
    puVar3 = (uint *)(((int)param_1 + 0x2021U) - uVar1);
    *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | (uint)(param_2 << 8) >> (3 - uVar1) * 8;
    param_1[1] = 1;
    *param_1 = uVar7;
    param_1[5] = 0;
    param_1[7] = 0;
  }
  return;
}



// ==== AAC_057 @ 0001c020 size=320

void AAC_057(uint *param_1,uint param_2,uint param_3)

{
  undefined *puVar1;
  uint uVar2;
  
  (*(code *)PTR_memset_0004bbf0)(param_1,0,0xc00);
  *param_1 = param_3;
  puVar1 = PTR_AAC_101_0004bc6c;
  param_1[1] = param_2;
  uVar2 = (*(code *)puVar1)(param_2);
  param_1[2] = uVar2;
  param_1[0x2ed] = 32000;
  param_1[4] = 0;
  param_1[0x2e8] = 1;
  param_1[0x2e9] = 1;
  param_1[0x2ea] = 1;
  param_1[0x2eb] = 0;
  param_1[0x2ec] = 1;
  param_1[0x2ee] = 14000;
  param_1[0x2f1] = 1;
  param_1[0x2ef] = 100;
  param_1[0x2f4] = 100;
  param_1[0x2f2] = 0;
  param_1[0x2f3] = 1;
  param_1[0x2f0] = 1;
  if (param_3 != 0) {
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xc] = 0;
    param_1[0x47] = 1;
    param_1[0x48] = 1;
    param_1[0x133] = 0;
    if (1 < param_3) {
      param_1[0x137] = 0;
      param_1[0x136] = 0;
      param_1[0x138] = 0;
      param_1[0x173] = 1;
      param_1[0x174] = 1;
      param_1[0x25f] = 0;
    }
  }
  (*(code *)PTR_AAC_165_0004bbc8)(param_1);
  (*(code *)PTR_AAC_086_0004bc0c)(param_1);
  (*(code *)PTR_AAC_028_0004bb58)(param_1 + 10,*param_1);
                    /* WARNING: Could not recover jumptable at 0x0001c158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_AAC_066_0004bc88)(param_1 + 10,*param_1);
  return;
}



// ==== AAC_058 @ 0001c160 size=56

undefined4 AAC_058(undefined4 *param_1)

{
  (*(code *)PTR_AAC_067_0004bcc8)(param_1 + 10,*param_1);
  return 0;
}



// ==== AAC_059 @ 0001c198 size=1256

/* WARNING: Control flow encountered bad instruction data */

int AAC_059(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  uint extraout_v1;
  uint uVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int *piVar23;
  int iVar24;
  
  piVar7 = param_2 + 0x262;
  iVar16 = *param_2;
  iVar8 = param_2[0x2ec];
  param_2[4] = param_2[4] + 1;
  iVar5 = param_2[1];
  iVar20 = param_2[0x2ee];
  iVar17 = param_2[0x2ea];
  piVar9 = param_2 + 10;
  uVar6 = (*(code *)PTR_AAC_055_0004bba4)(piVar7,iVar16,param_2[0x2eb]);
  if (iVar16 == 0) {
    (*(code *)PTR_AAC_076_0004bb40)(piVar9,piVar7,param_2[0x2e6],param_2[0x2e6] + 0x2000,0,iVar17);
  }
  else {
    piVar12 = param_2 + 0xe6;
    iVar24 = 0;
    piVar19 = piVar7;
    do {
      piVar12[-0xda] = 0;
      iVar21 = param_2[0x2e6];
      uVar18 = iVar24 << 0xd;
      uVar14 = *param_3;
      uVar10 = iVar21 + 0x1021U & 3;
      puVar3 = (uint *)((iVar21 + 0x1021U) - uVar10);
      *puVar3 = *puVar3 & -1 << (uVar10 + 1) * 8 | uVar18 >> (3 - uVar10) * 8;
      puVar4 = PTR_AAC_175_0004bd3c;
      uVar10 = iVar21 - 0x3fdfU & 3;
      puVar3 = (uint *)((iVar21 - 0x3fdfU) - uVar10);
      *puVar3 = *puVar3 & -1 << (uVar10 + 1) * 8 | (uint)((iVar24 + 4) * 0x1000) >> (3 - uVar10) * 8
      ;
      (*(code *)puVar4)(param_1,param_2,piVar12 + -0xdc,uVar14,uVar6,iVar21,0);
      puVar4 = PTR_AAC_166_0004bcf0;
      iVar15 = 0x400;
      iVar21 = param_2[0x2e6];
      uVar10 = iVar21 + 0x2021;
      uVar22 = uVar10 & 3;
      puVar3 = (uint *)(uVar10 - uVar22);
      *puVar3 = *puVar3 & -1 << (uVar22 + 1) * 8 | uVar18 >> (3 - uVar22) * 8;
      (*(code *)puVar4)(iVar21,iVar5,iVar20);
      iVar21 = param_2[6];
      iVar13 = *(int *)(iVar21 + 4);
      piVar19[8] = 0;
      piVar12[-0x9f] = 1;
      piVar12[-0x96] = iVar13;
      piVar12[-0x95] = iVar13;
      piVar12[-0x9e] = 1;
      if (0 < iVar13) {
        uVar22 = 0;
        uVar10 = extraout_v1;
        do {
          uVar1 = iVar21 + 0x1821;
          uVar2 = uVar1 & 3;
          puVar3 = (uint *)(uVar1 - uVar2);
          *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar22 >> (3 - uVar2) * 8;
          uVar1 = (int)piVar12 + 0x34b1U & 3;
          puVar3 = (uint *)(((int)piVar12 + 0x34b1U) - uVar1);
          *puVar3 = *puVar3 & -1 << (uVar1 + 1) * 8 | uVar22 >> (3 - uVar1) * 8;
          uVar10 = *(uint *)(uVar10 + 0xc);
          uVar22 = uVar22 + 4;
          *(undefined4 *)(iVar15 + 0x120) = 0;
          uRam00001020 = uRam00001020 & 0xffff0000 | uVar10 >> 0x10;
        } while (uVar22 != iVar13 << 2);
      }
      puVar11 = (undefined4 *)((iVar13 + 0x48) * 4);
      iVar21 = piVar19[7];
      uVar10 = (int)piVar12 + 0x14b1U & 3;
      puVar3 = (uint *)(((int)piVar12 + 0x14b1U) - uVar10);
      *puVar3 = *puVar3 & -1 << (uVar10 + 1) * 8 | (uint)puVar11 >> (3 - uVar10) * 8;
      *puVar11 = 0;
      puVar4 = PTR_AAC_098_0004bd54;
      if ((iVar21 == 0) && (iVar8 != 0)) {
        iVar15 = param_2[0x2e6];
        iVar21 = piVar12[-0xda];
        uVar10 = iVar15 - 0x3fdf;
        uVar22 = uVar10 & 3;
        puVar3 = (uint *)(uVar10 - uVar22);
        *puVar3 = *puVar3 & -1 << (uVar22 + 1) * 8 | uVar18 >> (3 - uVar22) * 8;
        (*(code *)puVar4)(param_1,piVar12,iVar13,iVar13,iVar21,piVar12 + -0x94,iVar15);
      }
      else {
        *piVar12 = 0;
      }
      piVar12[0x4e] = 0;
      puVar4 = PTR_AAC_036_0004bc64;
      uVar10 = param_2[0x2e6] + 0x2821U & 3;
      puVar3 = (uint *)((param_2[0x2e6] + 0x2821U) - uVar10);
      *puVar3 = *puVar3 & -1 << (uVar10 + 1) * 8 | uVar18 >> (3 - uVar10) * 8;
      uVar6 = (*(code *)puVar4)(piVar12 + -0xdc);
      if ((piVar19[5] == 0) && (piVar19[7] != 0)) {
        piVar12[-0x96] = 3;
        piVar12[-0x95] = 3;
      }
      iVar24 = iVar24 + 1;
      param_3 = param_3 + 1;
      piVar19 = piVar19 + 0x42;
      piVar12 = piVar12 + 300;
    } while (iVar24 != iVar16);
    iVar5 = 0;
    (*(code *)PTR_AAC_076_0004bb40)
              (piVar9,piVar7,param_2[0x2e6],param_2[0x2e6] + 0x2000,iVar16,iVar17);
    piVar19 = piVar9;
    piVar12 = piVar7;
    do {
      iVar8 = param_2[6];
      uVar22 = iVar5 << 0xd;
      uVar6 = *(undefined4 *)(iVar8 + 4);
      iVar17 = param_2[0x2f4];
      uVar10 = param_2[0x2e6] + 0x1021U & 3;
      puVar3 = (uint *)((param_2[0x2e6] + 0x1021U) - uVar10);
      *puVar3 = *puVar3 & -1 << (uVar10 + 1) * 8 | uVar22 >> (3 - uVar10) * 8;
      iVar5 = iVar5 + 1;
      (*(code *)PTR_AAC_033_0004bb24)(param_1,piVar19,piVar12,iVar8 + 0xc,uVar6,uVar22,iVar17);
      piVar19 = piVar19 + 300;
      piVar12 = piVar12 + 0x42;
    } while (iVar5 != iVar16);
    iVar5 = 0;
    piVar19 = param_2 + 0x8f;
    do {
      puVar4 = PTR_AAC_072_0004bd04;
      uVar10 = param_2[0x2e6] + 0x3021U & 3;
      puVar3 = (uint *)((param_2[0x2e6] + 0x3021U) - uVar10);
      *puVar3 = *puVar3 & -1 << (uVar10 + 1) * 8 | (uint)(iVar5 << 0xd) >> (3 - uVar10) * 8;
      (*(code *)puVar4)(param_1,piVar19 + -0x85);
      uVar10 = piVar19[-0x3e];
      if (uVar10 != 0) {
        piVar23 = piVar19 + -0x80;
        uVar22 = 0;
        piVar12 = piVar19;
        do {
          iVar8 = *piVar12;
          uVar22 = uVar22 + 1;
          piVar12 = (int *)((int)piVar12 + 2);
          if (1 < (ushort)((short)iVar8 - 0xeU)) {
            prefetch(piVar19[-0x81] + 0x2023,4);
            *piVar23 = *piVar23 + 100;
            uVar10 = piVar19[-0x3e];
          }
          piVar23 = piVar23 + 1;
        } while (uVar22 < uVar10);
      }
      piVar19[-1] = 0;
      piVar19[-0x81] = piVar19[-0x80];
      puVar4 = PTR_AAC_069_0004bc1c;
      if (uVar10 != 0) {
        iVar16 = piVar19[-0x3d];
        iVar17 = param_2[0x2e6];
        iVar8 = *piVar19;
        prefetch(piVar19[-0x3c] + 0x1023,2);
        uVar10 = iVar17 + 0x3021;
        uVar22 = uVar10 & 3;
        puVar3 = (uint *)(uVar10 - uVar22);
        *puVar3 = *puVar3 & -1 << (uVar22 + 1) * 8 | (uint)(iVar5 << 0xd) >> (3 - uVar22) * 8;
        (*(code *)puVar4)(piVar19 + -0x85,(int)(short)iVar8,iVar17,iVar16,iVar16);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (0x3ff < piVar19[-1]) {
        return -100;
      }
      iVar5 = iVar5 + 1;
      piVar19[-0x3e] = 1;
      piVar19[-0x3f] = 1;
      piVar19 = piVar19 + 300;
    } while (iVar5 != iVar16);
    piVar12 = (int *)(iVar16 * 8);
    uVar10 = (int)piVar12 + 0x2021U & 3;
    puVar3 = (uint *)(((int)piVar12 + 0x2021U) - uVar10);
    *puVar3 = *puVar3 & -1 << (uVar10 + 1) * 8 | (uint)(iVar16 << 8) >> (3 - uVar10) * 8;
    uVar10 = (int)param_2 + 0x29a9U & 3;
    puVar3 = (uint *)(((int)param_2 + 0x29a9U) - uVar10);
    *puVar3 = *puVar3 & -1 << (uVar10 + 1) * 8 | (uint)piVar12 >> (3 - uVar10) * 8;
    piVar19 = piVar7;
    do {
      if (((piVar19[1] != 0) && (piVar19[5] != 0)) && (piVar19[2] != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      piVar19 = piVar19 + 0x42;
    } while (piVar19 != piVar12);
  }
  iVar5 = (*(code *)PTR_AAC_053_0004bc28)(param_1,param_2,piVar9,piVar7,iVar16);
  if (param_2[0x2ed] == 0) {
    return iVar5 >> 3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_067 @ 0001c890 size=152

void AAC_067(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      if (*(int *)(param_1 + 0x284) != 0) {
        (*(code *)PTR_AAC_Free_0004bd5c)(*(int *)(param_1 + 0x284));
        *(undefined4 *)(param_1 + 0x284) = 0;
      }
      if (*(int *)(param_1 + 0x288) != 0) {
        (*(code *)PTR_AAC_Free_0004bd5c)(*(int *)(param_1 + 0x288));
        *(undefined4 *)(param_1 + 0x288) = 0;
      }
      param_1 = param_1 + 0x4b0;
    } while (iVar1 != param_2);
  }
  return;
}



// ==== AAC_066 @ 0001c928 size=344

void AAC_066(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  if (param_2 != 0) {
    if ((*(int *)(param_1 + 0x284) == 0) && (*(int *)(param_1 + 0x288) == 0)) {
      iVar2 = 0;
      iVar4 = param_1;
      do {
        iVar2 = iVar2 + 1;
        if (iVar2 == param_2) goto LAB_0001c9a0;
      } while ((*(int *)(iVar4 + 0x734) == 0) &&
              (piVar1 = (int *)(iVar4 + 0x738), iVar4 = iVar4 + 0x4b0, *piVar1 == 0));
    }
    (*(code *)PTR_AAC_067_0004bcc8)(param_1,param_2);
LAB_0001c9a0:
    puVar6 = PTR_DAT_0004bae4 + 0x45e0;
    puVar5 = PTR_DAT_0004bae4 + 0x45fc;
    iVar4 = 0;
    do {
      while (*(int *)(param_1 + 0x284) != 0) {
        (*(code *)PTR_printf_0004bd4c)(puVar6,iVar4);
        if (*(int *)(param_1 + 0x288) != 0) goto LAB_0001c9d8;
LAB_0001ca28:
        iVar4 = iVar4 + 1;
        uVar3 = (*(code *)PTR_AAC_Malloc_0004bcb8)(0x1000);
        *(undefined4 *)(param_1 + 0x288) = uVar3;
        param_1 = param_1 + 0x4b0;
        if (iVar4 == param_2) {
          return;
        }
      }
      uVar3 = (*(code *)PTR_AAC_Malloc_0004bcb8)(0x1000);
      *(undefined4 *)(param_1 + 0x284) = uVar3;
      if (*(int *)(param_1 + 0x288) == 0) goto LAB_0001ca28;
LAB_0001c9d8:
      iVar2 = iVar4 + 1;
      param_1 = param_1 + 0x4b0;
      (*(code *)PTR_printf_0004bd4c)(puVar5,iVar4);
      iVar4 = iVar2;
    } while (iVar2 != param_2);
  }
  return;
}



// ==== AAC_068 @ 0001ca80 size=4

/* WARNING: Control flow encountered bad instruction data */

void AAC_068(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_069 @ 0001caf4 size=176

undefined4 AAC_069(undefined4 param_1,uint param_2)

{
  undefined *puVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_2 & 0xffff) < 0x10) {
    puVar5 = (undefined4 *)((param_2 & 0xffff) * 4);
    puVar1 = PTR_DAT_0004bae4 + 0x6e41;
    uVar3 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar3) =
         *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | (uint)puVar5 >> (3 - uVar3) * 8;
    UNRECOVERED_JUMPTABLE = (code *)*puVar5;
    pcVar2 = UNRECOVERED_JUMPTABLE + -0x3fdf;
    uVar3 = (uint)pcVar2 & 3;
    *(uint *)(pcVar2 + -uVar3) =
         *(uint *)(pcVar2 + -uVar3) & -1 << (uVar3 + 1) * 8 | 0x53ab0U >> (3 - uVar3) * 8;
                    /* WARNING: Could not emulate address calculation at 0x0001cb5c */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*UNRECOVERED_JUMPTABLE)();
    return uVar4;
  }
  return 0;
}



// ==== AAC_070 @ 0001da04 size=96

undefined4 AAC_070(undefined4 param_1,uint param_2)

{
  undefined *puVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 < 0xc) {
    puVar1 = PTR_DAT_0004bae4 + 0x6e81;
    uVar3 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar3) =
         *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | param_2 * 4 >> (3 - uVar3) * 8;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2 * 4);
    pcVar2 = UNRECOVERED_JUMPTABLE + -0x3fdf;
    uVar3 = (uint)pcVar2 & 3;
    *(uint *)(pcVar2 + -uVar3) =
         *(uint *)(pcVar2 + -uVar3) & -1 << (uVar3 + 1) * 8 | 0x53ab0U >> (3 - uVar3) * 8;
                    /* WARNING: Could not emulate address calculation at 0x0001da4c */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*UNRECOVERED_JUMPTABLE)();
    return uVar4;
  }
  return 0;
}



// ==== AAC_071 @ 0001e298 size=332

/* WARNING: Control flow encountered bad instruction data */

undefined4 AAC_071(int param_1,int param_2,uint param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  uint in_t4;
  int iVar8;
  int *unaff_s4;
  uint uVar9;
  int *piVar10;
  
  iVar6 = *(int *)(param_1 + 0x11c);
  if (0 < iVar6) {
    uVar9 = param_3 * 2 - 0x67df;
    uVar3 = uVar9 & 3;
    puVar4 = (uint *)(uVar9 - uVar3);
    *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 | param_3 >> (3 - uVar3) * 8;
    uVar9 = param_3;
    piVar10 = (int *)(param_1 + 0x120);
    do {
      iVar8 = *piVar10;
      uVar3 = (int)piVar10 - 0x5fdfU & 3;
      puVar4 = (uint *)(((int)piVar10 - 0x5fdfU) - uVar3);
      *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 | (param_3 << 2) >> (3 - uVar3) * 8;
      iVar7 = *unaff_s4;
      if (iVar8 < iVar7) {
        uVar9 = param_2 - 0x3fdfU & 3;
        puVar4 = (uint *)((param_2 - 0x3fdfU) - uVar9);
        *puVar4 = *puVar4 & -1 << (uVar9 + 1) * 8 | (uint)(iVar8 << 2) >> (3 - uVar9) * 8;
        uVar9 = param_2 + 0x2021U & 3;
        puVar4 = (uint *)((param_2 + 0x2021U) - uVar9);
        *puVar4 = *puVar4 & -1 << (uVar9 + 1) * 8 | (uint)(iVar7 << 2) >> (3 - uVar9) * 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      prefetch(iVar7 + -0x6fdd,0x11);
      uVar5 = (*(code *)PTR_AAC_070_0004bb28)(param_1,0,param_2,iVar8);
      param_4[1] = 0;
      *param_4 = uVar5;
      uRamfffff020 = uRamfffff020 & 0xffff0000;
      bVar2 = (int)uVar9 < iVar6;
      uVar3 = uVar9 + 0x6021 & 3;
      puVar4 = (uint *)((uVar9 + 0x6021) - uVar3);
      *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 | param_3 >> (3 - uVar3) * 8;
      puVar1 = param_4 + -0x4fdf;
      uVar9 = (uint)puVar1 & 3;
      *(uint *)(puVar1 + -uVar9) =
           *(uint *)(puVar1 + -uVar9) & -1 << (uVar9 + 1) * 8 | param_3 * 2 >> (3 - uVar9) * 8;
      uVar9 = in_t4;
      piVar10 = unaff_s4;
    } while (bVar2);
  }
  return 0;
}



// ==== AAC_072 @ 0001e768 size=92

/* WARNING: Control flow encountered bad instruction data */

void AAC_072(undefined4 param_1,int param_2)

{
  (*(code *)PTR_AAC_024_0004bc20)(*(int *)(param_2 + 0x11c) << 0x16,3,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_073 @ 0001e8cc size=84

/* WARNING: Control flow encountered bad instruction data */

void AAC_073(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_074 @ 0001ec40 size=576

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001ee0c) */

undefined4 AAC_074(undefined4 param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint in_t2;
  uint uVar8;
  short *psVar9;
  short *unaff_s1;
  int iVar10;
  int *piVar11;
  int local_48;
  
  if (*(int *)(param_2 + 8) == 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar5 = *(uint *)(param_2 + 0x11c);
  *(undefined4 *)(param_2 + 0xf4) = 1;
  *(undefined4 *)(param_2 + 0xf8) = 1;
  puVar4 = PTR_AAC_125_0004bb2c;
  iVar10 = 0;
  local_48 = 0;
  iVar6 = param_2;
  do {
    uVar7 = iVar10 + 0x1021U & 3;
    puVar3 = (uint *)((iVar10 + 0x1021U) - uVar7);
    *puVar3 = *puVar3 & -1 << (uVar7 + 1) * 8 | uVar5 >> (3 - uVar7) * 8;
    if (0 < (int)uVar5) {
      uVar8 = (iVar10 + 0x108) * 2;
      uVar7 = param_2 - 0x7fdfU & 3;
      puVar3 = (uint *)((param_2 - 0x7fdfU) - uVar7);
      *puVar3 = *puVar3 & -1 << (uVar7 + 1) * 8 | uVar8 >> (3 - uVar7) * 8;
      piVar11 = (int *)(iVar10 << 2);
      psVar9 = (short *)(uVar8 + 4);
      uVar7 = param_2 - 0xfcbU & 3;
      puVar3 = (uint *)((param_2 - 0xfcbU) - uVar7);
      *puVar3 = *puVar3 & -1 << (uVar7 + 1) * 8 | (uint)piVar11 >> (3 - uVar7) * 8;
      uVar7 = param_2 - 0x75cbU & 3;
      puVar3 = (uint *)((param_2 - 0x75cbU) - uVar7);
      *puVar3 = *puVar3 & -1 << (uVar7 + 1) * 8 | (uint)(iVar6 << 1) >> (3 - uVar7) * 8;
      do {
        while (iVar10 = iVar6, 1 < ((int)*psVar9 - 0xeU & 0xffff)) {
          if (*psVar9 != 0) {
            prefetch(*piVar11 + 0x1823,0x12);
            puVar1 = puVar4 + 0x2021;
            uVar7 = (uint)puVar1 & 3;
            *(uint *)(puVar1 + -uVar7) =
                 *(uint *)(puVar1 + -uVar7) & -1 << (uVar7 + 1) * 8 | 0x1e0U >> (3 - uVar7) * 8;
            puVar1 = PTR_AAC_114_0004bcc4;
            uVar7 = (uint)cRam000001e0;
            uRamffffb020 = uRamffffb020 & 0xffff0000 | uVar7 >> 0x10;
            if (param_3 == 1) {
              puVar2 = puVar4 + 0x1821;
              uVar8 = (uint)puVar2 & 3;
              *(uint *)(puVar2 + -uVar8) =
                   *(uint *)(puVar2 + -uVar8) & -1 << (uVar8 + 1) * 8 | 0x1e0U >> (3 - uVar8) * 8;
              (*(code *)puVar1)(param_1,uVar7,uRam000001e4);
            }
          }
LAB_0001ed58:
          psVar9 = psVar9 + 1;
          piVar11 = piVar11 + 1;
          if (psVar9 == unaff_s1) goto LAB_0001edbc;
        }
        prefetch(*piVar11 + 0x5023,0x13);
        in_t2 = in_t2 + 0x3c;
        uVar7 = 0;
        if (in_t2 < 0x78) {
          puVar1 = puVar4 + 0x1821;
          uVar7 = (uint)puVar1 & 3;
          *(uint *)(puVar1 + -uVar7) =
               *(uint *)(puVar1 + -uVar7) & -1 << (uVar7 + 1) * 8 | in_t2 * 8 >> (3 - uVar7) * 8;
          uVar7 = (uint)*(char *)(in_t2 * 8);
          uRamffffb020 = uRamffffb020 & 0xffff0000 | uVar7 >> 0x10;
        }
        else {
          uRamffffb020 = uRamffffb020 & 0xffff0000;
        }
        puVar1 = PTR_AAC_114_0004bcc4;
        if (param_3 == 1) {
          in_t2 = in_t2 * 8;
          puVar2 = puVar4 + 0x5021;
          uVar8 = (uint)puVar2 & 3;
          *(uint *)(puVar2 + -uVar8) =
               *(uint *)(puVar2 + -uVar8) & -1 << (uVar8 + 1) * 8 | in_t2 >> (3 - uVar8) * 8;
          (*(code *)puVar1)(param_1,uVar7,*(undefined4 *)(in_t2 + 4));
          goto LAB_0001ed58;
        }
        psVar9 = psVar9 + 1;
        piVar11 = piVar11 + 1;
      } while (psVar9 != unaff_s1);
    }
LAB_0001edbc:
    iVar6 = local_48 + 1;
    local_48 = iVar6;
    if (*(int *)(param_2 + 0xf4) <= iVar6) {
      return 0;
    }
  } while( true );
}



// ==== AAC_076 @ 0001eef0 size=100

/* WARNING: Control flow encountered bad instruction data */

void AAC_076(void)

{
  int in_stack_00000010;
  
  if (0 < in_stack_00000010) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// ==== AAC_078 @ 0001f170 size=44

/* WARNING: Control flow encountered bad instruction data */

void AAC_078(void)

{
  uint uVar1;
  uint *puVar2;
  uint in_a3;
  int in_stack_00000010;
  
  uVar1 = in_stack_00000010 + 0x4021U & 3;
  puVar2 = (uint *)((in_stack_00000010 + 0x4021U) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | in_a3 >> (3 - uVar1) * 8;
  if (0 < (int)in_a3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// ==== AAC_079 @ 0001f1ac size=40

void AAC_079(uint param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  int in_v0;
  
  uVar1 = param_3 + 0x1021U & 3;
  puVar2 = (uint *)((param_3 + 0x1021U) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | param_4 >> (3 - uVar1) * 8;
  if (param_2 <= in_v0) {
    prefetch(in_v0 + 0x1023,5);
    uVar1 = in_v0 + 0x1021U & 3;
    puVar2 = (uint *)((in_v0 + 0x1021U) - uVar1);
    *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | param_1 >> (3 - uVar1) * 8;
  }
  return;
}



// ==== AAC_080 @ 0001f1d4 size=40

void AAC_080(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  int in_v0;
  
  prefetch(param_3 + 0x1023,7);
  if (in_v0 < param_1) {
    prefetch(in_v0 + 0x1023,4);
    uVar1 = in_v0 + 0x1021U & 3;
    puVar2 = (uint *)((in_v0 + 0x1021U) - uVar1);
    *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | param_2 >> (3 - uVar1) * 8;
  }
  return;
}



// ==== AAC_081 @ 0001f1fc size=104

bool AAC_081(int param_1,int param_2,int param_3)

{
  if (param_2 < param_1) {
    if (param_3 < param_1) {
      return param_3 <= param_2;
    }
    return true;
  }
  if (param_3 <= param_2) {
    return param_1 <= param_3;
  }
  return false;
}



// ==== AAC_082 @ 0001f264 size=52

void AAC_082(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  int in_v0;
  
  prefetch(param_2 + 0x1023,4);
  if (param_4 < (int)param_3) {
    prefetch(param_4 + 0x3023,6);
    uVar1 = in_v0 + 0x1021U & 3;
    puVar2 = (uint *)((in_v0 + 0x1021U) - uVar1);
    *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | param_3 >> (3 - uVar1) * 8;
    return;
  }
  prefetch(param_4 + 0x1023,6);
  return;
}



// ==== AAC_086 @ 0001f2a0 size=172

/* WARNING: Control flow encountered unimplemented instructions */

void AAC_086(int *param_1)

{
  undefined *puVar1;
  ushort uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ushort *puVar9;
  
  puVar4 = PTR_DAT_0004bae4;
  iVar6 = *param_1;
  iVar8 = param_1[2];
  uVar7 = param_1[0x2e9];
  if (iVar6 != 0) {
    puVar9 = (ushort *)(PTR_DAT_0004bae4 + 0x46a8);
    puVar1 = PTR_DAT_0004bae4 + 0x6c9;
    uVar3 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar3) =
         *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | (uint)(iVar8 << 1) >> (3 - uVar3) * 8;
    uVar2 = *puVar9;
    iVar5 = 0;
    puVar1 = puVar4 + 0xb6b1;
    uVar3 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar3) =
         *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | (uint)(iVar8 << 1) >> (3 - uVar3) * 8;
    do {
      if ((uVar7 < 4) && ((1 << (uVar7 & 0x1f) & 0xbU) != 0)) {
        param_1[0xe9] = (uint)*(ushort *)(puVar4 + 0x4690);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
      iVar5 = iVar5 + 1;
      param_1[0xe7] = (uint)uVar2;
      param_1 = param_1 + 300;
    } while (iVar5 != iVar6);
  }
  return;
}



// ==== AAC_087 @ 0001f354 size=404

void AAC_087(int param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int *unaff_s7;
  int *unaff_s8;
  
  iVar9 = *param_4;
  *(int *)(param_1 + 0x63e8) = *param_3;
  if (1 < iVar9) {
    piVar8 = (int *)(param_1 + 0x63ec);
    iVar6 = 1;
    piVar7 = param_3;
    do {
      piVar7 = piVar7 + 1;
      iVar11 = 1;
      *piVar8 = *piVar7;
      iVar10 = *piVar7;
      unaff_s7 = (int *)(param_1 + 0x73ec);
      unaff_s8 = piVar8;
      do {
        piVar1 = unaff_s8 + -1;
        iVar11 = iVar11 + 1;
        unaff_s8 = unaff_s8 + -1;
        iVar5 = *unaff_s7;
        unaff_s7 = unaff_s7 + 1;
        iVar5 = (*(code *)PTR_AAC_011_0004bd24)(*piVar1,iVar5);
        uVar2 = iVar10 - 0x5fdf;
        uVar3 = uVar2 & 3;
        puVar4 = (uint *)(uVar2 - uVar3);
        *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 | (uint)(iVar5 << 4) >> (3 - uVar3) * 8;
        *piVar7 = iVar10;
      } while (iVar11 <= iVar6);
      iVar6 = iVar6 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar6 != iVar9);
  }
  if (iVar9 < param_2) {
    uVar2 = (int)param_3 - 0x47dfU & 3;
    puVar4 = (uint *)(((int)param_3 - 0x47dfU) - uVar2);
    *puVar4 = *puVar4 & -1 << (uVar2 + 1) * 8 | (uint)(iVar9 << 2) >> (3 - uVar2) * 8;
    uVar2 = param_1 + 0x5409U & 3;
    puVar4 = (uint *)((param_1 + 0x5409U) - uVar2);
    *puVar4 = *puVar4 & -1 << (uVar2 + 1) * 8 | (uint)(iVar9 << 2) >> (3 - uVar2) * 8;
    iVar6 = iVar9;
    do {
      *unaff_s8 = *unaff_s7;
      if (0 < iVar9) {
        iVar11 = *unaff_s7;
        iVar10 = 1;
        piVar7 = unaff_s8;
        puVar12 = (undefined4 *)(param_1 + 0x73e8);
        do {
          puVar12 = puVar12 + 1;
          iVar10 = iVar10 + 1;
          piVar8 = piVar7 + -1;
          piVar7 = piVar7 + -1;
          iVar5 = (*(code *)PTR_AAC_011_0004bd24)(*piVar8,*puVar12);
          uVar2 = iVar11 - 0x5fdf;
          uVar3 = uVar2 & 3;
          puVar4 = (uint *)(uVar2 - uVar3);
          *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 | (uint)(iVar5 << 4) >> (3 - uVar3) * 8;
          *unaff_s7 = iVar11;
        } while (iVar10 != iVar9 + 1);
      }
      iVar6 = iVar6 + 1;
      unaff_s7 = unaff_s7 + 1;
      unaff_s8 = unaff_s8 + 1;
    } while (iVar6 != param_2);
  }
  return;
}



// ==== AAC_090 @ 0001f4e8 size=44

/* WARNING: Control flow encountered bad instruction data */

undefined4 AAC_090(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  
  if (-1 < param_1) {
    uVar1 = param_3 + 0x3021U & 3;
    puVar2 = (uint *)((param_3 + 0x3021U) - uVar1);
    *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | (uint)(param_1 << 2) >> (3 - uVar1) * 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}



// ==== AAC_091 @ 0001f558 size=644

void AAC_091(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  
  if (0 < param_1) {
    puVar3 = (undefined4 *)(param_1 << 2);
    uVar1 = (int)param_4 + 0x2021U & 3;
    puVar2 = (uint *)(((int)param_4 + 0x2021U) - uVar1);
    *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | (uint)puVar3 >> (3 - uVar1) * 8;
    piVar4 = (int *)(param_3 + 4);
    do {
      while (iVar5 = *piVar4, iVar5 < -0x230763a1) {
        if (iVar5 < -0x390df9bd) {
          if (iVar5 < -0x4d2324c7) {
            if (iVar5 < -0x5e97d8ce) {
              if (iVar5 < -0x6cd3f183) {
                if (iVar5 < -0x775b4677) {
                  if (iVar5 < -0x7dd2178e) {
                    param_4[1] = 0xfffffff9;
                    *piVar4 = -0x7b1d19ec;
                  }
                  else {
                    param_4[1] = 0xfffffffa;
                    *piVar4 = -0x7294b605;
                  }
                }
                else {
                  param_4[1] = 0xfffffffb;
                  *piVar4 = -0x66256d78;
                }
              }
              else {
                param_4[1] = 0xfffffffc;
                *piVar4 = -0x563ba84d;
              }
            }
            else {
              param_4[1] = 0xfffffffd;
              *piVar4 = -0x4362215d;
            }
          }
          else {
            param_4[1] = 0xfffffffe;
            *piVar4 = -0x2e3d2b04;
          }
          goto LAB_0001f5e4;
        }
        param_4 = param_4 + 1;
        *param_4 = 0xffffffff;
        *piVar4 = -0x17851a87;
        piVar4 = piVar4 + 1;
        if (param_4 == puVar3) {
          return;
        }
      }
      if (iVar5 < 0xd6134ce) {
        param_4[1] = 0;
        *piVar4 = 0;
      }
      else if (iVar5 < 0x278dde7a) {
        param_4[1] = 1;
        *piVar4 = 0x1a9cd9c0;
      }
      else if (iVar5 < 0x40000000) {
        param_4[1] = 2;
        *piVar4 = 0x340ff1e6;
      }
      else if (iVar5 < 0x55a615a9) {
        param_4[1] = 3;
        *piVar4 = 0x4b3c8ba2;
      }
      else if (iVar5 < 0x678dde7b) {
        param_4[1] = 4;
        *piVar4 = 0x5f1f5e6a;
      }
      else if (iVar5 < 0x74ef1349) {
        param_4[1] = 5;
        *piVar4 = 0x6ed9eb99;
      }
      else if (iVar5 < 0x7d33f423) {
        param_4[1] = 6;
        *piVar4 = 0x79bc382a;
      }
      else {
        param_4[1] = 7;
        *piVar4 = 0x7f4c7d87;
      }
LAB_0001f5e4:
      param_4 = param_4 + 1;
      piVar4 = piVar4 + 1;
    } while (param_4 != puVar3);
  }
  return;
}



// ==== AAC_092 @ 0001f7dc size=144

/* WARNING: Control flow encountered bad instruction data */

void AAC_092(int param_1,int param_2,int param_3,int param_4,short param_5)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = (int)param_5;
  while( true ) {
    if (param_1 < iVar3) {
      return;
    }
    puVar4 = (undefined4 *)(iVar3 * 8);
    uVar1 = param_4 + 0x6821U & 3;
    puVar2 = (uint *)((param_4 + 0x6821U) - uVar1);
    *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | (uint)puVar4 >> (3 - uVar1) * 8;
    *puVar4 = 0;
    puVar4[1] = 0;
    if (0 < param_2) break;
    iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
    param_2 = param_2 + -1;
  }
  uVar1 = iVar3 + 0x4821U & 3;
  puVar2 = (uint *)((iVar3 + 0x4821U) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | 0U >> (3 - uVar1) * 8;
  uVar1 = param_3 - 0x3fdfU & 3;
  puVar2 = (uint *)((param_3 - 0x3fdfU) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | 0U >> (3 - uVar1) * 8;
  uVar1 = param_3 + 0x4821U & 3;
  puVar2 = (uint *)((param_3 + 0x4821U) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | 0U >> (3 - uVar1) * 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_093 @ 0001f8d0 size=740

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001fafc) */

undefined4
AAC_093(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int in_t4;
  uint uVar8;
  uint uVar9;
  
  (*(code *)PTR_AAC_092_0004bb74)(6,param_3,param_4,param_1 + 0x74b8,0);
  uVar8 = *(uint *)(param_1 + 0x74bc);
  uVar7 = *(uint *)(param_1 + 0x74b8);
  uVar6 = uVar8;
  if (((int)uVar8 < 1) && ((uVar8 != 0 || (uVar6 = 0, uVar7 < 0x560000)))) {
    *param_5 = 0x7fffffff;
    if (0 < param_2) {
      uVar6 = (int)param_5 + 0x1021U & 3;
      puVar1 = (uint *)(((int)param_5 + 0x1021U) - uVar6);
      *puVar1 = *puVar1 & -1 << (uVar6 + 1) * 8 | (uint)(param_2 << 2) >> (3 - uVar6) * 8;
      do {
        param_5[1] = 0;
        param_5 = param_5 + 1;
      } while (param_5 != (undefined4 *)(param_2 << 2));
    }
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 0x74c4);
  uVar5 = uVar2 >> 5;
  prefetch(*(uint *)(param_1 + 0x74c0) * 0x8000000 + -0x3fdd,4);
  prefetch(uVar2 * 0x8000000 + 0x1023,2);
  uVar4 = uVar5 | ((int)uVar2 >> 0x1f) << 0x1b;
  prefetch(uVar4 + 0x1823,6);
  prefetch((*(uint *)(param_1 + 0x74c0) >> 5) + 0x2823,9);
  prefetch(uVar4 + 0x1823,7);
  uVar9 = uVar5 * 0x40 | uVar6 >> 0x1a;
  uVar6 = uVar9 + 0x2021;
  uVar4 = uVar6 & 3;
  puVar1 = (uint *)(uVar6 - uVar4);
  *puVar1 = *puVar1 & -1 << (uVar4 + 1) * 8 | (uVar2 << 6) >> (3 - uVar4) * 8;
  uVar2 = uVar2 >> 0x1a | uVar5 << 6;
  uVar6 = ((int)uVar5 >> 0x1a) + 0x1821;
  uVar4 = uVar6 & 3;
  puVar1 = (uint *)(uVar6 - uVar4);
  *puVar1 = *puVar1 & -1 << (uVar4 + 1) * 8 | uVar2 >> (3 - uVar4) * 8;
  *param_5 = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x7450) = 0x7ffffff;
  *(undefined4 *)(param_1 + 0x7484) = 0x7ffffff;
  uVar6 = (uVar5 * 0x40 < uVar9) + 0x6021;
  uVar4 = uVar6 & 3;
  puVar1 = (uint *)(uVar6 - uVar4);
  *puVar1 = *puVar1 & -1 << (uVar4 + 1) * 8 | uVar2 >> (3 - uVar4) * 8;
  uVar6 = uVar7;
  uVar4 = uVar8;
  if ((int)uVar8 < 0) {
    uVar6 = -uVar7;
    uVar4 = -uVar8;
    prefetch(uVar4 - 0x3fdd,3);
  }
  if (((int)uVar4 < 1) && ((uVar4 != 0 || (uVar6 < 0x1001)))) {
    prefetch(-in_t4 + 0x2823,3);
    if (((int)uVar4 < 1) && ((uVar4 != 0 || (uVar6 < 0x81)))) {
      uVar6 = 1;
      iVar3 = 0;
    }
    else {
      uVar6 = uVar8 << 0x19 | uVar7 >> 7;
      iVar3 = (int)uVar8 >> 7;
    }
    iVar3 = (*(code *)PTR_FUN_0004bae8)(uVar5 * -0x40,-in_t4,uVar6,iVar3);
    iVar3 = iVar3 << 0x17;
  }
  else {
    prefetch(-in_t4 + 0x2823,0x18);
    iVar3 = (*(code *)PTR_FUN_0004bae8)
                      (uVar5 * -0x40,-in_t4,uVar8 << 0x14 | uVar7 >> 0xc,(int)uVar8 >> 0xc);
    iVar3 = iVar3 << 0x12;
  }
  param_5[1] = iVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AAC_097 @ 0002094c size=312

void AAC_097(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  undefined8 uVar13;
  uint local_74 [13];
  int *local_40;
  int *local_3c;
  uint *local_38;
  
  *param_3 = 0x7ffffff;
  if (0 < param_1) {
    local_40 = param_3 + 1;
    iVar6 = 1;
    local_38 = local_74;
    local_3c = local_40;
    do {
      param_2 = param_2 + 1;
      iVar10 = 1;
      *local_40 = 0;
      puVar8 = local_74;
      piVar9 = local_40;
      piVar12 = local_3c;
      do {
        piVar1 = piVar9 + -1;
        iVar10 = iVar10 + 1;
        iVar7 = *piVar12;
        piVar9 = piVar9 + -1;
        uVar13 = (*(code *)PTR_AAC_011_0004bd24)(*param_2,*piVar1);
        iVar5 = (int)((ulonglong)uVar13 >> 0x20);
        uVar4 = (uint)uVar13;
        uVar11 = iVar7 + 0x1021U & 3;
        puVar3 = (uint *)((iVar7 + 0x1021U) - uVar11);
        *puVar3 = *puVar3 & -1 << (uVar11 + 1) * 8 | uVar4 >> (3 - uVar11) * 8;
        *puVar8 = uVar4;
        puVar8 = puVar8 + 1;
        piVar12 = piVar12 + 1;
      } while (iVar10 <= iVar6);
      uVar11 = 0;
      do {
        uVar2 = (uint)&stack0x000017a9 & 3;
        puVar8 = (uint *)(&stack0x000017a9 + -uVar2);
        *puVar8 = *puVar8 & -1 << (uVar2 + 1) * 8 | uVar11 >> (3 - uVar2) * 8;
        uVar2 = (int)param_3 + 0x1021U & 3;
        puVar8 = (uint *)(((int)param_3 + 0x1021U) - uVar2);
        *puVar8 = *puVar8 & -1 << (uVar2 + 1) * 8 | uVar11 >> (3 - uVar2) * 8;
        iVar5 = *(int *)(iVar5 + 4);
        uVar11 = uVar11 + 4;
        *(int *)(uVar4 + 4) = iVar5;
      } while (uVar11 != iVar6 << 2);
      iVar6 = iVar6 + 1;
      local_40 = local_40 + 1;
    } while (iVar6 <= param_1);
  }
  return;
}



// ==== AAC_098 @ 00020a84 size=108

/* WARNING: Control flow encountered bad instruction data */

void AAC_098(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



