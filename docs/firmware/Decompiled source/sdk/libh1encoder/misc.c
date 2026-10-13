/* libh1encoder — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "libh1encoder.h"

// ==== H264EncRelease @ 00012754 size=1

/* WARNING: Control flow encountered bad instruction data */

void H264EncRelease(void)

{
  func_0x05a5a440();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== entry @ 00014d30 size=72

void processEntry entry(void)

{
  if (((undefined *)0x6 < PTR___DT_PLTGOT_000463e8 + (3 - (int)(PTR_DAT_000463ec + 0x63e0))) &&
     (PTR__ITM_deregisterTMCloneTable_00046540 != (undefined *)0x0)) {
    (*(code *)PTR__ITM_deregisterTMCloneTable_00046540)();
    return;
  }
  return;
}



// ==== EncAsicSetRegisterValue @ 00014ef0 size=104

void EncAsicSetRegisterValue(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  
  param_2 = param_2 * 0x1c;
  iVar2 = *(int *)(PTR_DAT_000463ec + param_2 + -0x1fe8);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  puVar1 = (uint *)(param_1 + (iVar2 >> 2) * 4);
  *puVar1 = ~*(uint *)(PTR_DAT_000463ec + param_2 + -0x1fe4) & *puVar1 |
            param_3 << (*(uint *)(PTR_DAT_000463ec + param_2 + -0x1fe0) & 0x1f) &
            *(uint *)(PTR_DAT_000463ec + param_2 + -0x1fe4);
  return;
}



// ==== EncAsicWriteRegisterValue @ 00014f58 size=152

void EncAsicWriteRegisterValue(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  puVar2 = PTR_EWLWriteReg_000464ec;
  puVar1 = PTR_DAT_000463ec;
  param_3 = param_3 * 0x1c;
  iVar3 = *(int *)(PTR_DAT_000463ec + param_3 + -0x1fe8);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 3;
  }
  puVar4 = (uint *)(param_2 + (iVar3 >> 2) * 4);
  *puVar4 = ~*(uint *)(PTR_DAT_000463ec + param_3 + -0x1fe4) & *puVar4 |
            param_4 << (*(uint *)(PTR_DAT_000463ec + param_3 + -0x1fe0) & 0x1f) &
            *(uint *)(PTR_DAT_000463ec + param_3 + -0x1fe4);
  iVar5 = *(int *)(puVar1 + param_3 + -0x1fe8);
  iVar3 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar3 = iVar5;
  }
  (*(code *)puVar2)(param_1,iVar5,*(undefined4 *)(param_2 + (iVar3 >> 2) * 4));
  return;
}



// ==== EncAsicGetRegisterValue @ 00014ff0 size=136

uint EncAsicGetRegisterValue(undefined4 param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = PTR_DAT_000463ec;
  param_3 = param_3 * 0x1c;
  iVar4 = *(int *)(PTR_DAT_000463ec + param_3 + -0x1fe8);
  iVar2 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  uVar3 = (*(code *)PTR_EWLReadReg_0004650c)(param_1,iVar4);
  *(uint *)(param_2 + (iVar2 >> 2) * 4) = uVar3;
  return (uVar3 & *(uint *)(puVar1 + param_3 + -0x1fe4)) >>
         (*(uint *)(puVar1 + param_3 + -0x1fe0) & 0x1f);
}



// ==== EncAsicMemFree_V2 @ 00015080 size=352

void EncAsicMemFree_V2(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 0x8c6;
  do {
    if (*piVar1 != 0) {
      (*(code *)PTR_EWLFreeRefFrm_00046670)(*param_1,piVar1);
    }
    *piVar1 = 0;
    piVar1 = piVar1 + 3;
  } while (piVar1 != param_1 + 0x8d2);
  do {
    if (*piVar1 != 0) {
      (*(code *)PTR_EWLFreeRefFrm_00046670)(*param_1,piVar1);
    }
    *piVar1 = 0;
    piVar1 = piVar1 + 3;
  } while (param_1 + 0x8de != piVar1);
  if (param_1[0x8de] != 0) {
    (*(code *)PTR_EWLFreeRefFrm_00046670)(*param_1,param_1 + 0x8de);
  }
  if (param_1[0x8ee] != 0) {
    (*(code *)PTR_EWLFreeLinear_0004643c)(*param_1,param_1 + 0x8ee);
  }
  if (param_1[0x8e1] != 0) {
    (*(code *)PTR_EWLFreeLinear_0004643c)(*param_1,param_1 + 0x8e1);
  }
  if (param_1[0x8e4] != 0) {
    (*(code *)PTR_EWLFreeLinear_0004643c)(*param_1,param_1 + 0x8e4);
  }
  if (param_1[0x8e7] != 0) {
    (*(code *)PTR_EWLFreeLinear_0004643c)(*param_1,param_1 + 0x8e7);
  }
  if (param_1[0x8ea] != 0) {
    (*(code *)PTR_EWLFreeLinear_0004643c)(*param_1,param_1 + 0x8ea);
  }
  param_1[0x8de] = 0;
  param_1[0x8ee] = 0;
  param_1[0x8e1] = 0;
  param_1[0x8e4] = 0;
  param_1[0x8e7] = 0;
  param_1[0x8ea] = 0;
  return;
}



// ==== EncAsicMemAlloc_V2 @ 000151e0 size=924

undefined4
EncAsicMemAlloc_V2(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  uint param_7,int param_8)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  
  uVar2 = param_2 + 0xfU >> 4;
  uVar8 = param_3 + 0xfU >> 4;
  iVar3 = uVar2 * uVar8;
  param_1[0xd] = param_6;
  if (param_6 == 2) {
    return 0;
  }
  if (param_1[0x2aa] == 0x48317011) {
    iVar7 = uVar8 * 8 * (uVar2 + 3 >> 2);
    iVar6 = 0;
    if (param_1[0x3a] != 0) {
      iVar6 = iVar7;
    }
    if (param_1[0x3b] == 0) {
      iVar7 = 0;
    }
  }
  else {
    iVar7 = 0;
    iVar6 = 0;
  }
  iVar4 = iVar3 * 0x100;
  param_1[0x8f2] = iVar4;
  param_1[0x8f3] = iVar3 * 0x80;
  if (param_7 == 0) {
LAB_00015300:
    if (param_8 != 0) {
      iVar6 = 0;
      puVar5 = param_1 + 0x8d2;
      do {
        iVar6 = iVar6 + 1;
        iVar4 = (*(code *)PTR_EWLMallocRefFrm_00046644)(*param_1,iVar7 + param_1[0x8f3],puVar5);
        if (iVar4 != 0) goto LAB_000152c0;
        puVar5 = puVar5 + 3;
      } while (iVar6 != param_8);
    }
    param_1[0x2e] = param_1[0x8c8];
    param_1[0x2f] = param_1[0x8d4];
    if (param_7 < 2) {
      param_1[0x32] = param_1[0x8c8];
    }
    else {
      param_1[0x32] = param_1[0x8cb];
    }
    param_1[0x34] = param_1[0x8d7];
    if (param_4 * param_5 != 0) {
      iVar7 = (*(code *)PTR_EWLMallocRefFrm_00046644)
                        (*param_1,param_4 * param_5 * 2,param_1 + 0x8de);
      if (iVar7 != 0) goto LAB_000152c0;
      param_1[0x39c] = param_1[0x8e0];
    }
    puVar1 = PTR_EWLMallocLinear_0004661c;
    uVar2 = uVar8 * 4 + 0x17 & 0xfffffff8;
    param_1[0x8ed] = uVar2;
    iVar7 = (*(code *)puVar1)(*param_1,uVar2,param_1 + 0x8ee);
    if (iVar7 == 0) {
      uVar9 = 0x4b8;
      if (param_1[0xd] != 1) {
        uVar9 = 0xbc80;
      }
      iVar7 = (*(code *)PTR_EWLMallocLinear_0004661c)(*param_1,uVar9,param_1 + 0x8e1);
      puVar1 = PTR_EWLMallocLinear_0004661c;
      if (iVar7 == 0) {
        param_1[0x2ce] = param_1[0x8e3];
        iVar7 = (*(code *)puVar1)(*param_1,iVar3 * 0x38,param_1 + 0x8e4);
        if (iVar7 == 0) {
          param_1[0x2cd] = param_1[0x8e6];
          if (param_1[0x8e4] != 0) {
            (*(code *)PTR_EWLmemset_00046578)(param_1[0x8e4],0,param_1[0x8e5]);
          }
          if (param_1[0xd] == 1) {
            iVar7 = (*(code *)PTR_EWLMallocLinear_0004661c)(*param_1,0x1e8,param_1 + 0x8e7);
            if (iVar7 != 0) goto LAB_000152c0;
            param_1[0x2cf] = param_1[0x8e9];
          }
          iVar3 = (*(code *)PTR_EWLMallocLinear_0004661c)
                            (*param_1,(iVar3 * 4 + 0x3fU >> 6) << 3,param_1 + 0x8ea);
          if (iVar3 == 0) {
            param_1[0x2d0] = param_1[0x8ec];
            if (param_1[0x8ea] == 0) {
              return 0;
            }
            (*(code *)PTR_EWLmemset_00046578)(param_1[0x8ea],0,param_1[0x8eb]);
            return 0;
          }
        }
      }
    }
  }
  else {
    uVar2 = 0;
    puVar5 = param_1 + 0x8c6;
    while( true ) {
      uVar2 = uVar2 + 1;
      iVar4 = (*(code *)PTR_EWLMallocRefFrm_00046644)(*param_1,iVar4 + iVar6,puVar5);
      if (iVar4 != 0) break;
      if (uVar2 == param_7) goto LAB_00015300;
      iVar4 = param_1[0x8f2];
      puVar5 = puVar5 + 3;
    }
  }
LAB_000152c0:
  (*(code *)PTR_EncAsicMemFree_V2_000465c0)(param_1);
  return 0xffffffff;
}



// ==== EncAsicCheckStatus_V2 @ 0001557c size=500

undefined4 EncAsicCheckStatus_V2(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_1[0x2aa];
  uVar2 = (*(code *)PTR_EncAsicGetStatus_000464dc)(*param_1);
  uVar1 = uVar2;
  if (iVar4 == 0x48317011) {
    param_1[0x8f4] = uVar2 & 0xffd;
    uVar1 = uVar2 & 0xffd;
  }
  if ((uVar2 & 8) == 0) {
    if ((uVar1 & 0x40) != 0) {
      (*(code *)PTR_EncAsicGetRegisters_0004642c)(*param_1,param_1 + 1);
      (*(code *)PTR_EWLReleaseHw_0004652c)(*param_1);
      return 0x40;
    }
    if ((uVar1 & 4) != 0) {
      (*(code *)PTR_EncAsicGetRegisters_0004642c)(*param_1,param_1 + 1);
      (*(code *)PTR_EWLReleaseHw_0004652c)(*param_1);
      return 4;
    }
    if ((uVar1 & 0x20) != 0) {
      (*(code *)PTR_EWLReleaseHw_0004652c)(*param_1);
      return 0x20;
    }
    if ((uVar1 & 0x10) == 0) {
      if ((uVar1 & 0x200) == 0) {
        if ((uVar1 & 0x400) != 0) {
          uVar3 = 0x400;
          if (iVar4 != 0x48317011) {
            uVar3 = 0x100;
          }
          return uVar3;
        }
        if (((uVar1 & 0x800) == 0) || (iVar4 != 0x48317011)) {
          return 0x100;
        }
        (*(code *)PTR_EncAsicClearStatusBit_000465ac)(*param_1,0x800);
        uVar3 = 0x800;
      }
      else {
        (*(code *)PTR_EWLReleaseHw_0004652c)(*param_1);
        uVar3 = 8;
      }
    }
    else {
      (*(code *)PTR_EWLReleaseHw_0004652c)(*param_1);
      uVar3 = 0x10;
    }
  }
  else {
    (*(code *)PTR_EncAsicGetRegisters_0004642c)(*param_1,param_1 + 1);
    (*(code *)PTR_EWLReleaseHw_0004652c)(*param_1);
    uVar3 = 8;
  }
  return uVar3;
}



// ==== EncAsicSetQuantTable @ 00015770 size=100

void EncAsicSetQuantTable(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(PTR_DAT_000463fc + -0x7590);
  piVar3 = (int *)(PTR_DAT_000463fc + -0x7490);
  piVar1 = piVar5;
  puVar2 = (undefined1 *)(param_1 + 300);
  do {
    iVar4 = *piVar1;
    piVar1 = piVar1 + 1;
    *puVar2 = *(undefined1 *)(param_2 + iVar4);
    puVar2 = puVar2 + 1;
  } while (piVar1 != piVar3);
  puVar2 = (undefined1 *)(param_1 + 0x16c);
  do {
    iVar4 = *piVar5;
    piVar5 = piVar5 + 1;
    *puVar2 = *(undefined1 *)(param_3 + iVar4);
    puVar2 = puVar2 + 1;
  } while (piVar5 != piVar3);
  return;
}



// ==== EncAsicGetId @ 000157d4 size=28

void EncAsicGetId(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000157e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_EWLReadReg_0004650c)(param_1,0);
  return;
}



// ==== EncAsicControllerInit @ 000157f0 size=168

undefined4 EncAsicControllerInit(undefined4 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_EncAsicGetId_000465d0;
  param_1[0x2a9] = 0x900a;
  param_1[0x29] = 1;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[0xb] = 0;
  param_1[0x43] = 0;
  param_1[0x2d] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x8c6] = 0;
  param_1[0x8d2] = 0;
  param_1[0x8c9] = 0;
  param_1[0x8d5] = 0;
  param_1[0x8cc] = 0;
  param_1[0x8d8] = 0;
  param_1[0x8db] = 0;
  param_1[0x8de] = 0;
  param_1[0x8ee] = 0;
  param_1[0x8e1] = 0;
  param_1[0x8e4] = 0;
  param_1[0x8e7] = 0;
  param_1[0x8ea] = 0;
  uVar2 = (*(code *)puVar1)(*param_1);
  param_1[0x2aa] = uVar2;
  return 0;
}



// ==== EncAsicRecycleInternalImage @ 00015898 size=396

void EncAsicRecycleInternalImage
               (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 == 1) {
    uVar2 = *(undefined4 *)(param_1 + 0xb8);
    uVar3 = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 200);
    *(undefined4 *)(param_1 + 200) = uVar2;
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xd0);
    *(undefined4 *)(param_1 + 0xd0) = uVar3;
    return;
  }
  if (param_3 == 0) {
    if (param_4 == 0) {
      if (param_5 == 1) {
        *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x2320);
        *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x232c);
        if (param_6 == 2) {
          uVar2 = *(undefined4 *)(param_1 + 0xbc);
          goto LAB_000159c0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x232c);
        *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x232c);
        if (param_6 == 2) goto LAB_000159bc;
      }
      goto LAB_0001593c;
    }
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x2320);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x232c);
    if (param_6 == 2) {
LAB_000159bc:
      uVar2 = *(undefined4 *)(param_1 + 0xbc);
LAB_000159c0:
      uVar3 = *(undefined4 *)(param_1 + 0xd0);
      *(undefined4 *)(param_1 + 0xd0) = uVar2;
      *(undefined4 *)(param_1 + 0xbc) = uVar3;
      return;
    }
    iVar1 = *(int *)(param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + iVar1 * 0xc + 0x2350);
  }
  else {
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x2320);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x2320);
    if (param_6 == 2) {
      return;
    }
LAB_0001593c:
    iVar1 = *(int *)(param_1 + 0xb4);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x2368);
      goto LAB_00015970;
    }
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + (iVar1 + -1) * 0xc + 0x2350);
  }
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x2350);
    return;
  }
LAB_00015970:
  *(int *)(param_1 + 0xb4) = iVar1 + 1;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + (iVar1 + 1) * 0xc + 0x2350);
  return;
}



// ==== CheckRegisterValues @ 00015a24 size=8

void CheckRegisterValues(void)

{
  return;
}



// ==== EncAsicFrameStart @ 00015a2c size=116

void EncAsicFrameStart(undefined4 param_1,undefined4 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined *puVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  
  puVar9 = param_2 + 0xaf;
  uVar11 = param_2[0x2a8];
  iVar10 = param_2[0x2a9];
  (*(code *)PTR_CheckRegisterValues_00046454)(param_2);
  (*(code *)PTR_EWLmemset_00046578)(puVar9,0,0x7c8);
  if (iVar10 == 0x48317011) {
    if ((param_2[0x39] != 0) || (param_2[0x3a] != 0)) {
      uVar11 = uVar11 & 0xffffff7f;
    }
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xb,*param_2);
    if ((uint)param_2[0x1d] < 4) {
      param_2[0xb1] = uVar11 | 0x4005;
    }
    else if ((uint)param_2[0x1d] < 7) {
      param_2[0xb1] = uVar11 | 0x4000;
    }
    else {
      param_2[0xb1] = uVar11;
    }
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1a,1);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1b,1);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1c,1);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1d,1);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1e,1);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1f,1);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x20,param_2[3]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x22,param_2[2]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x21,0);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3d3,1);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3d4,2);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3d5,3);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3d6,1);
  }
  else {
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xb,*param_2);
    if (iVar10 == 0x48314810) {
      if ((uint)param_2[0x1d] < 4) {
        param_2[0xb1] = uVar11 | 0x4005;
      }
      else if ((uint)param_2[0x1d] < 7) {
        param_2[0xb1] = uVar11 | 0x4004;
      }
      else {
        param_2[0xb1] = uVar11 | 4;
      }
    }
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1a,1);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1b,1);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1c,1);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1d,1);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1e,1);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1f,1);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x20,param_2[3]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x22,param_2[2]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x21,0);
  }
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x23,param_2[0x1f]);
  if (param_2[0xc] != 2) {
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x24,param_2[0x26]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x2e,param_2[0x26] != 0);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x2d,param_2[0x2cc] != 0);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x25,param_2[0x31]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x26,param_2[0x33]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x27,param_2[0x2d]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x28,param_2[0x2e]);
  }
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x29,param_2[0x3f]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x2a,param_2[0x40]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x2b,param_2[0x41]);
  if ((param_2[0x8c2] == 0) || (iVar10 != 0x48317011)) {
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)();
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x2f,param_2[0x27]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x32,param_2[0x28]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x33,param_2[0x29]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x30,param_2[5]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x31,param_2[4]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x34,param_2[0xb]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x35,param_2[0xc]);
    if (iVar10 == 0x48317011) goto LAB_00017ee0;
  }
  else {
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x2c,0);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x2f,param_2[0x27]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x32,param_2[0x28]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x33,param_2[0x29]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x30,param_2[5]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x31,param_2[4]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x34,param_2[0xb]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x35,param_2[0xc]);
LAB_00017ee0:
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3d1,param_2[0x2a]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3d2,param_2[0x2b]);
  }
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x37,param_2[0x2a3]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x38,param_2[0x2a1]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x39,param_2[0xd]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3a,param_2[0xe]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3b,param_2[0xf]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3c,param_2[0x1d]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3d,param_2[0x1e]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x4e,param_2[0x18]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x51,param_2[0x3bc]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x60,*(undefined2 *)(param_2 + 0x3c0));
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x4b,param_2[0x2a5]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x49,param_2[0x16]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x5e,param_2[0x3c1]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x52,param_2[0x1b]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x53,param_2[0x34f]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x5b,param_2[0x3c6]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x5c,param_2[0x3c5]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x5d,param_2[0x3c4]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xe2,param_2[0x3c3]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1b0,param_2[0x3c7]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xe1,param_2[0x34e]);
  iVar13 = param_2[0xc];
  if (iVar13 == 3) {
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x40,param_2[0x13]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x41,param_2[0x14] & 0xf);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x42,param_2[0x15] & 0xf);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x43,param_2[0x1a] & 0x1f);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x44,param_2[0x11]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x45,param_2[9]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x46,param_2[0x10]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x47,param_2[0x3bd]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x4a,param_2[0x1c]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x4c,param_2[0x17]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x4d,param_2[0x19]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x4f,param_2[0x2a4]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x50,param_2[0x49]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x48,param_2[0x12]);
    iVar13 = param_2[0xc];
  }
  if (iVar13 == 2) {
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x57,param_2[0xab]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x58,param_2[0xac]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x59,param_2[0xad]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x5a,param_2[0xae]);
  }
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x61,param_2[0x22]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x62,param_2[0x23]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,99,param_2[0x20]);
  if (param_2[0xc] != 2) {
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,100,param_2[0x2aa] & 0xf);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x65,param_2[0x2ad]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x208,*(undefined1 *)(param_2 + 0x2ab));
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x207,param_2[0x2ae]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x20b,*(undefined1 *)(param_2 + 0x2ac));
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x20a,param_2[0x2af]);
    if (param_2[0xc] == 1) {
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3e,param_2[0x32]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3f,param_2[0x34]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x88,param_2[0x2e0]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x8b,param_2[0x2e4]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x8e,param_2[0x2e8]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x91,param_2[0x2ec]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x94,param_2[0x2f0]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x97,param_2[0x2f4]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x89,param_2[0x2f8]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x8c,param_2[0x2fc]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x8f,param_2[0x300]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x92,param_2[0x304]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x95,param_2[0x308]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x98,param_2[0x30c]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x8a,param_2[0x310]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x8d,param_2[0x314]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x90,param_2[0x318]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x93,param_2[0x31c]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x96,param_2[800]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x99,param_2[0x324]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x9a,param_2[0x328]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x9b,param_2[0x32c]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x9c,param_2[0x330]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x9e,param_2[0x334]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x9f,param_2[0x338]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xa0,param_2[0x33c]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x9d,param_2[0x342]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xa1,param_2[0x343]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xa2,param_2[0x344]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xa5,param_2[0x358]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xa6,param_2[0x345]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xab,param_2[0x346]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xac,param_2[0x347]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xa9,param_2[0x349]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xa7,param_2[0x3c2]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xa8,param_2[0x34d]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xaa,param_2[0x348]);
    }
    else {
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x67,param_2[6]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x68,param_2[8]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x69,param_2[7]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x6a,0);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x87,param_2[0x3c2]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x86,param_2[0x344]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x84,param_2[0x342]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x85,param_2[0x3a5]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x82,param_2[0x32]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x83,param_2[0x34]);
    }
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xa3,param_2[0x340]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xa4,param_2[0x341]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x122,param_2[0x2cf]);
    if (iVar10 == 0x48317011) {
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3c9,param_2[0x39]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3c8,param_2[0x3a]);
      if ((param_2[0x39] != 0) || (param_2[0x3a] != 0)) {
        (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3c6,param_2[0x3e]);
        if (param_2[0x39] != 0) {
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3c5,param_2[0x3c]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3c7,param_2[0x3b]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3ca,param_2[0x35]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3cc,param_2[0x2f]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3ce,param_2[0x36]);
        }
        if (param_2[0x3a] != 0) {
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3d0,param_2[0x3d]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3cb,param_2[0x37]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3cd,param_2[0x30]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3cf,param_2[0x38]);
        }
      }
    }
  }
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xae,param_2[0x21]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xad,param_2[0xaa]);
  if (param_2[0xc] != 2) {
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xb2,param_2[0x2a6]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xb3,param_2[0x2a7]);
  }
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x55,param_2[0x3c8]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x54,param_2[0x3c9]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x56,param_2[0x3ca]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xc1,param_2[0x2cd]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xc2,param_2[0x2cc]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xc3,*(undefined2 *)(param_2 + 0x2d0));
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xc4,*(undefined2 *)(param_2 + 0x2d1));
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xc5,*(undefined2 *)(param_2 + 0x2d2));
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xc6,*(undefined2 *)(param_2 + 0x2d3));
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,199,*(undefined2 *)(param_2 + 0x2d4));
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,200,param_2[0x2d5] & 0x1f);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xc9,param_2[0x2d6] & 0x1f);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xca,param_2[0x2d7] & 0x1f);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xcf,param_2[0x2b8]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xd0,param_2[0x2b9]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xcb,param_2[0x2be]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xcc,param_2[0x2c0]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xcd,param_2[0x2bd]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xce,param_2[0x2bf]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xd7,param_2[0x2c2]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xd8,param_2[0x2c4]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xd9,param_2[0x2c1]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xda,param_2[0x2c3]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xdb,param_2[0x2c6]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xdc,param_2[0x2c8]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xdd,param_2[0x2c5]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xde,param_2[0x2c7]);
  iVar13 = param_2[0xc];
  if (iVar13 == 3) {
    iVar13 = param_2[0x2c9];
    if ((int)param_2[6] <= (int)param_2[0x2c9]) {
      iVar13 = param_2[6];
    }
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xdf,iVar13);
    iVar13 = param_2[0x2ca];
    if ((int)param_2[6] <= (int)param_2[0x2ca]) {
      iVar13 = param_2[6];
    }
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xe0,iVar13);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xd1,param_2[0x2ba]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xd2,param_2[699]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xd3,param_2[700]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xe6,param_2[0x2b3]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xe3,param_2[0x2b4]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xe4,param_2[0x2b5]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xe5,param_2[0x2b6]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xe7,param_2[0x2b7]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x292,param_2[0x3a2]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x293,param_2[0x3a3]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x294,param_2[0x3a4]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x295,param_2[0x3a6]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x296,param_2[0x3a7]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x297,param_2[0x3a8]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x298,param_2[0x3a9]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x299,param_2[0x3aa]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x29a,param_2[0x3ab]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x29b,param_2[0x3ac]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x29c,param_2[0x3ad]);
    if (iVar10 == 0x48317011) {
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3f4,param_2[0x816]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3f7,param_2[0x81b]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3f9,param_2[0x819]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3f8,param_2[0x81a]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3f5,param_2[0x817]);
      iVar13 = 0x3fc;
      puVar12 = param_2;
      do {
        puVar4 = puVar12 + 0x81f;
        iVar7 = iVar13 + 1;
        puVar12 = puVar12 + 1;
        (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13,*puVar4);
        iVar13 = iVar7;
      } while (iVar7 != 0x40c);
      iVar13 = 0x40c;
      puVar12 = param_2;
      do {
        puVar4 = puVar12 + 0x82f;
        iVar7 = iVar13 + 1;
        puVar12 = puVar12 + 1;
        (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13,*puVar4);
        iVar13 = iVar7;
      } while (iVar7 != 0x41c);
      puVar12 = param_2 + 0x83f;
      iVar13 = 0x41c;
      do {
        uVar14 = *puVar12;
        iVar7 = iVar13 + 1;
        puVar12 = puVar12 + 1;
        (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13,uVar14);
        iVar13 = iVar7;
      } while (iVar7 != 0x45c);
      puVar12 = param_2 + 0x87f;
      iVar13 = 0x45c;
      do {
        uVar14 = *puVar12;
        iVar7 = iVar13 + 1;
        puVar12 = puVar12 + 1;
        (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13,uVar14);
        iVar13 = iVar7;
      } while (iVar7 != 0x49c);
      goto LAB_000177ac;
    }
LAB_0001783c:
    iVar13 = param_2[0xc];
  }
  else if (iVar10 == 0x48317011) {
LAB_000177ac:
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x49c,param_2[0x8bf]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x49d,param_2[0x8c0]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x49e,param_2[0x8c1]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x49f,param_2[0x8c2]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x4a1,param_2[0x8c3]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x4a0,param_2[0x8c4]);
    goto LAB_0001783c;
  }
  if (iVar13 == 1) {
    iVar13 = 0;
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xd4,param_2[0x2d8]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xd5,param_2[0x2d9]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x22b,param_2[0x2da]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x22c,param_2[0x2db]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0xd6,param_2[0x2ce]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x114,param_2[0x3ae]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x115,param_2[0x3af]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x116,param_2[0x3b0]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x117,param_2[0x3b1]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x118,param_2[0x3b2]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x119,param_2[0x3b3]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x11a,param_2[0x3b4]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x11b,param_2[0x3b5]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x11c,param_2[0x3b6]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x11d,param_2[0x3b7]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x11e,param_2[0x3b8]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x11f,param_2[0x3b9]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x120,param_2[0x3ba]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x121,param_2[0x3bb]);
    puVar12 = param_2;
    do {
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x123,puVar12[0x2e1]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x126,puVar12[0x2e5]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x129,puVar12[0x2e9]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 300,puVar12[0x2ed]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x12f,puVar12[0x2f1]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x132,puVar12[0x2f5]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x124,puVar12[0x2f9]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x127,puVar12[0x2fd]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x12a,puVar12[0x301]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x12d,puVar12[0x305]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x130,puVar12[0x309]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x133,puVar12[0x30d]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x125,puVar12[0x311]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x128,puVar12[0x315]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 299,puVar12[0x319]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x12e,puVar12[0x31d]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x131,puVar12[0x321]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x134,puVar12[0x325]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x135,puVar12[0x329]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x136,puVar12[0x32d]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x137,puVar12[0x331]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x138,puVar12[0x335]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x139,puVar12[0x339]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x13a,puVar12[0x33d]);
      iVar7 = iVar13 + 0x13b;
      iVar13 = iVar13 + 0x19;
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar7,puVar12[0x34a]);
      puVar12 = puVar12 + 1;
    } while (iVar13 != 0x4b);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1b2,param_2[0x350] & 0x7f);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1b3,param_2[0x351] & 0x7f);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1b4,param_2[0x352] & 0x7f);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1b5,param_2[0x353] & 0x7f);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1b6,param_2[0x354] & 0x7f);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1b7,param_2[0x355] & 0x7f);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1b8,param_2[0x356] & 0x7f);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1b9,param_2[0x357] & 0x7f);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1ae,param_2[0x3be]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1af,param_2[0x3bf]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1fa,param_2[0x3cb]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1fb,param_2[0x3cc]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1fc,param_2[0x3cd]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1fd,param_2[0x3ce]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1fe,param_2[0x3cf]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x1ff,param_2[0x3d0]);
    iVar13 = param_2[0xc];
  }
  if (iVar13 != 2) {
    iVar13 = 0;
    puVar12 = param_2;
    do {
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x22d,puVar12[0x3d1]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x22e,puVar12[0x3d2]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x22f,puVar12[0x3d3]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x230,puVar12[0x3d4]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x231,puVar12[0x3d5]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x232,puVar12[0x3d6]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x233,puVar12[0x3d7]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x234,puVar12[0x3d8]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x235,puVar12[0x3d9]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x236,puVar12[0x3da]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x237,puVar12[0x3db]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x238,puVar12[0x3dc]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x239,puVar12[0x3dd]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x23a,puVar12[0x3de]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x23d,puVar12[0x3df]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x23c,puVar12[0x3e1]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x23b,puVar12[0x3e0]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)
                (puVar9,iVar13 + 0x23e,*(undefined2 *)(puVar12 + 0x3e3));
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x23f,puVar12[0x3e4]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x240,puVar12[0x3e5]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x241,puVar12[999]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x242,puVar12[1000]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x243,puVar12[0x3e9]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x244,puVar12[0x3e6]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x245,puVar12[0x3ea]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x246,puVar12[0x3ed]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x247,puVar12[0x3ee]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x248,puVar12[0x3ef]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x249,puVar12[0x3f0]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x24a,puVar12[0x3f1]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x24b,puVar12[0x3f2]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x24c,puVar12[0x3f3]);
      iVar7 = iVar13 + 0x24d;
      iVar13 = iVar13 + 0x21;
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar7,puVar12[0x3e2]);
      puVar12 = puVar12 + 0x23;
    } while (iVar13 != 99);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x290,param_2[0x3a0]);
    (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x291,param_2[0x3a1]);
    if ((param_2[0xc] != 2) && (iVar10 == 0x48317011)) {
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3c2,param_2[0x80e]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3c0,param_2[0x80f]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x2a7,param_2[0x811] & 0x3f);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x2a6,param_2[0x812]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3c1,param_2[0x813]);
      (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x3c3,param_2[0x814]);
      if (param_2[0x80e] != 0) {
        iVar13 = 0;
        puVar12 = param_2;
        do {
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x22d,puVar12[0x3d1]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x22e,puVar12[0x3d2]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x22f,puVar12[0x3d3]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x230,puVar12[0x3d4]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x231,puVar12[0x3d5]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x232,puVar12[0x3d6]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x233,puVar12[0x3d7]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x234,puVar12[0x3d8]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x235,puVar12[0x3d9]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x236,puVar12[0x3da]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x237,puVar12[0x3db]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x238,puVar12[0x3dc]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x239,puVar12[0x3dd]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x23a,puVar12[0x3de]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x23d,puVar12[0x3df]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x23c,puVar12[0x3e1]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x23b,puVar12[0x3e0]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)
                    (puVar9,iVar13 + 0x23e,*(undefined2 *)(puVar12 + 0x3e3));
          uVar11 = puVar12[0x3e4];
          if (uVar11 == 0) {
            uVar11 = 1;
          }
          else if (0xff < uVar11) {
            uVar11 = 0xff;
          }
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x23f,uVar11);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x240,puVar12[0x3e5]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x241,puVar12[999]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x242,puVar12[1000]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x243,puVar12[0x3e9]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x244,puVar12[0x3e6]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x245,puVar12[0x3ea]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x246,puVar12[0x3ed]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x247,puVar12[0x3ee]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x248,puVar12[0x3ef]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x249,puVar12[0x3f0]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x24a,puVar12[0x3f1]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x24b,puVar12[0x3f2]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x24c,puVar12[0x3f3]);
          iVar7 = iVar13 + 0x24d;
          iVar13 = iVar13 + 0x21;
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar7,puVar12[0x3e2]);
          puVar12 = puVar12 + 0x23;
        } while (iVar13 != 99);
        iVar13 = 0;
        puVar12 = param_2;
        do {
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x2a9,puVar12[0x448]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x2a8,puVar12[0x449]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)
                    (puVar9,iVar13 + 0x2ac,*(undefined2 *)(puVar12 + 0x44c));
          uVar15 = puVar12[0x44d];
          uVar11 = 1;
          if ((uVar15 != 0) && (uVar11 = 0xff, uVar15 < 0x100)) {
            uVar11 = uVar15;
          }
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x2ab,uVar11);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x2aa,puVar12[0x44e]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x2af,puVar12[0x450]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x2ae,puVar12[0x451]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x2ad,puVar12[0x452]);
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar13 + 0x2b1,puVar12[0x44f]);
          iVar7 = iVar13 + 0x2b0;
          iVar13 = iVar13 + 10;
          (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,iVar7,puVar12[0x456]);
          puVar12 = puVar12 + 0x23;
        } while (iVar13 != 0x118);
      }
    }
  }
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x200,param_2[0x39b]);
  uVar14 = 2;
  if (param_2[0x39c] == 0) {
    uVar14 = 0;
  }
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x201,uVar14);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x202,param_2[0x39c]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x204,param_2[0x39d]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x203,param_2[0x39e]);
  (*(code *)PTR_EncAsicSetRegisterValue_0004666c)(puVar9,0x205,param_2[0x39f]);
  iVar13 = 4;
  do {
    iVar7 = iVar13 + 4;
    (*(code *)PTR_EWLWriteReg_000464ec)(param_1,iVar13,*(undefined4 *)((int)param_2 + iVar13 + 700))
    ;
    iVar13 = iVar7;
  } while (iVar7 != 0xfc);
  iVar13 = 0x100;
  if (param_2[0xc] == 2) {
    pbVar8 = (byte *)(param_2 + 0x4a);
    iVar13 = 0;
    do {
      bVar5 = *pbVar8;
      iVar7 = iVar13 >> 2;
      pbVar1 = pbVar8 + 1;
      pbVar2 = pbVar8 + 3;
      pbVar3 = pbVar8 + 2;
      iVar13 = iVar13 + 4;
      pbVar8 = pbVar8 + 4;
      (*(code *)PTR_EWLWriteReg_000464ec)
                (param_1,(iVar7 + 0x40) * 4,
                 (uint)bVar5 << 0x18 | (uint)*pbVar1 << 0x10 | (uint)*pbVar2 | (uint)*pbVar3 << 8);
    } while (iVar13 != 0x80);
    if (0x48311480 < (uint)param_2[0x2a9]) {
      iVar13 = 0x39c;
      do {
        iVar7 = iVar13 + 4;
        (*(code *)PTR_EWLWriteReg_000464ec)
                  (param_1,iVar13,*(undefined4 *)((int)param_2 + iVar13 + 700));
        iVar13 = iVar7;
      } while (iVar7 != 0x3a8);
    }
    if (iVar10 == 0x48317011) {
      (*(code *)PTR_EWLWriteReg_000464ec)(param_1,0x6b4,param_2[0x25c]);
      (*(code *)PTR_EWLWriteReg_000464ec)(param_1,0x6cc,param_2[0x262]);
      (*(code *)PTR_EWLWriteReg_000464ec)(param_1,0x6d0,param_2[0x263]);
      (*(code *)PTR_EWLWriteReg_000464ec)(param_1,0x6d4,param_2[0x264]);
      (*(code *)PTR_EWLWriteReg_000464ec)(param_1,0x7c4,param_2[0x2a0]);
    }
  }
  else {
    do {
      iVar7 = iVar13 + 4;
      (*(code *)PTR_EWLWriteReg_000464ec)
                (param_1,iVar13,*(undefined4 *)((int)param_2 + iVar13 + 700));
      iVar13 = iVar7;
    } while (iVar7 != 0x180);
    pbVar8 = (byte *)(param_2 + 0x6a);
    iVar13 = 0;
    do {
      bVar5 = *pbVar8;
      iVar7 = iVar13 >> 2;
      pbVar1 = pbVar8 + 1;
      pbVar2 = pbVar8 + 3;
      pbVar3 = pbVar8 + 2;
      iVar13 = iVar13 + 4;
      pbVar8 = pbVar8 + 4;
      (*(code *)PTR_EWLWriteReg_000464ec)
                (param_1,(iVar7 + 0x60) * 4,
                 (uint)bVar5 << 0x18 | (uint)*pbVar1 << 0x10 | (uint)*pbVar2 | (uint)*pbVar3 << 8);
    } while (iVar13 != 0x80);
    pbVar8 = (byte *)(param_2 + 0x8a);
    iVar13 = 0;
    do {
      bVar5 = *pbVar8;
      iVar7 = iVar13 >> 2;
      pbVar1 = pbVar8 + 1;
      pbVar2 = pbVar8 + 3;
      pbVar3 = pbVar8 + 2;
      iVar13 = iVar13 + 4;
      pbVar8 = pbVar8 + 4;
      (*(code *)PTR_EWLWriteReg_000464ec)
                (param_1,(iVar7 + 0x80) * 4,
                 (uint)bVar5 << 0x18 | (uint)*pbVar1 << 0x10 | (uint)*pbVar2 | (uint)*pbVar3 << 8);
    } while (iVar13 != 0x80);
    iVar13 = 0x280;
    do {
      iVar7 = iVar13 + 4;
      (*(code *)PTR_EWLWriteReg_000464ec)
                (param_1,iVar13,*(undefined4 *)((int)param_2 + iVar13 + 700));
      iVar13 = iVar7;
    } while (iVar7 != 0x290);
    uVar11 = param_2[0x2a9];
    if (0x48311220 < uVar11) {
      iVar13 = 0;
      if (param_2[0x358] != 0) {
        pbVar8 = (byte *)(param_2 + 0x359);
        do {
          bVar5 = *pbVar8;
          iVar7 = iVar13 >> 2;
          pbVar1 = pbVar8 + 1;
          pbVar2 = pbVar8 + 3;
          pbVar3 = pbVar8 + 2;
          iVar13 = iVar13 + 4;
          pbVar8 = pbVar8 + 4;
          (*(code *)PTR_EWLWriteReg_000464ec)
                    (param_1,(iVar7 + 0xa4) * 4,
                     (uint)bVar5 << 0x18 | (uint)*pbVar1 << 0x10 | (uint)*pbVar2 |
                     (uint)*pbVar3 << 8);
        } while (iVar13 != 0xc0);
        iVar13 = 0;
        puVar9 = param_2;
        do {
          pbVar8 = (byte *)(puVar9 + 0x389);
          iVar7 = iVar13 >> 2;
          pbVar1 = (byte *)((int)puVar9 + 0xe25);
          pbVar2 = (byte *)((int)puVar9 + 0xe27);
          pbVar3 = (byte *)((int)puVar9 + 0xe26);
          iVar13 = iVar13 + 4;
          puVar9 = puVar9 + 1;
          (*(code *)PTR_EWLWriteReg_000464ec)
                    (param_1,(iVar7 + 0xd4) * 4,
                     (uint)*pbVar8 << 0x18 | (uint)*pbVar1 << 0x10 | (uint)*pbVar2 |
                     (uint)*pbVar3 << 8);
        } while (iVar13 != 0x40);
        (*(code *)PTR_EWLWriteReg_000464ec)(param_1,0x390,param_2[0x193]);
        (*(code *)PTR_EWLWriteReg_000464ec)(param_1,0x394,param_2[0x194]);
        (*(code *)PTR_EWLWriteReg_000464ec)(param_1,0x398,param_2[0x195]);
        uVar11 = param_2[0x2a9];
      }
      iVar13 = 0x39c;
      if (0x48311480 < uVar11) {
        do {
          iVar7 = iVar13 + 4;
          (*(code *)PTR_EWLWriteReg_000464ec)
                    (param_1,iVar13,*(undefined4 *)((int)param_2 + iVar13 + 700));
          iVar13 = iVar7;
        } while (iVar7 != 0x3bc);
        if (0x48312170 < (uint)param_2[0x2a9]) {
          if (param_2[0xc] == 1) {
            if (param_2[0xaa] == 0) {
              (*(code *)PTR_EWLWriteReg_000464ec)(param_1,0x3bc,0x800000);
              (*(code *)PTR_EWLWriteReg_000464ec)(param_1,0x3c0,0x67b0c08);
              (*(code *)PTR_EWLWriteReg_000464ec)(param_1,0x3c4,0x4b6c2441);
              (*(code *)PTR_EWLWriteReg_000464ec)(param_1,0x3c8,0x95d3230);
              (*(code *)PTR_EWLWriteReg_000464ec)(param_1,0x3cc,0x704d4d83);
            }
            else {
              if (param_2[0xaa] != 1) goto LAB_00016b04;
              (*(code *)PTR_EWLWriteReg_000464ec)(param_1,0x3bc,0x800000);
              (*(code *)PTR_EWLWriteReg_000464ec)(param_1,0x3c0,0x701000);
              (*(code *)PTR_EWLWriteReg_000464ec)(param_1,0x3c4,0x602000);
              (*(code *)PTR_EWLWriteReg_000464ec)(param_1,0x3c8,0x503000);
              (*(code *)PTR_EWLWriteReg_000464ec)(param_1,0x3cc,0x404000);
            }
          }
          else {
LAB_00016b04:
            (*(code *)PTR_EWLWriteReg_000464ec)(param_1,0x3bc,0);
            (*(code *)PTR_EWLWriteReg_000464ec)(param_1,0x3c0,0);
            (*(code *)PTR_EWLWriteReg_000464ec)(param_1,0x3c4,0);
            (*(code *)PTR_EWLWriteReg_000464ec)(param_1,0x3c8,0);
            (*(code *)PTR_EWLWriteReg_000464ec)(param_1,0x3cc,0);
          }
          if (iVar10 == 0x48317011) {
            iVar10 = 0x3d0;
            do {
              iVar13 = iVar10 + 4;
              (*(code *)PTR_EWLWriteReg_000464ec)
                        (param_1,iVar10,*(undefined4 *)((int)param_2 + iVar10 + 700));
              iVar10 = iVar13;
            } while (iVar13 != 0x4a0);
            iVar10 = 0x4a4;
            if (0x48316fff < (uint)param_2[0x2a9]) {
              do {
                iVar13 = iVar10 + 4;
                (*(code *)PTR_EWLWriteReg_000464ec)
                          (param_1,iVar10,*(undefined4 *)((int)param_2 + iVar10 + 700));
                iVar10 = iVar13;
              } while (iVar13 != 0x7c8);
              uVar11 = param_2[0xbd];
              goto LAB_00016b94;
            }
          }
          else {
            iVar13 = 0x3d0;
            if (iVar10 == 0x48314810) {
              do {
                iVar10 = iVar13 + 4;
                (*(code *)PTR_EWLWriteReg_000464ec)
                          (param_1,iVar13,*(undefined4 *)((int)param_2 + iVar13 + 700));
                iVar13 = iVar10;
              } while (iVar10 != 0x4a0);
              uVar11 = param_2[0xbd];
              goto LAB_00016b94;
            }
          }
        }
      }
    }
  }
  uVar11 = param_2[0xbd];
LAB_00016b94:
  puVar6 = PTR_EWLEnableHW_000466a0;
  param_2[0xbd] = uVar11 | 1;
  (*(code *)puVar6)(param_1,0x38);
  return;
}



// ==== H264EncStrmEnd @ 00015aa0 size=740

void H264EncStrmEnd(void)

{
  int unaff_s1;
  int unaff_s3;
  int unaff_s4;
  uint unaff_s5;
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int in_stack_00000010;
  
  if (unaff_s3 == unaff_s4 + 0x7011) {
    if ((*(int *)(unaff_s1 + 0xe4) != 0) ||
       (pcVar3 = *(code **)(in_stack_00000010 + -0x7d64), *(int *)(unaff_s1 + 0xe8) != 0)) {
      unaff_s5 = unaff_s5 & 0xffffff7f;
      pcVar3 = *(code **)(in_stack_00000010 + -0x7d64);
    }
    (*pcVar3)();
    if (*(uint *)(unaff_s1 + 0x74) < 4) {
      *(uint *)(unaff_s1 + 0x2c4) = unaff_s5 | 0x4005;
    }
    else if (*(uint *)(unaff_s1 + 0x74) < 7) {
      *(uint *)(unaff_s1 + 0x2c4) = unaff_s5 | 0x4000;
    }
    else {
      *(uint *)(unaff_s1 + 0x2c4) = unaff_s5;
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
  }
  else {
    (**(code **)(in_stack_00000010 + -0x7d64))();
    if (unaff_s3 == unaff_s4 + 0x4810) {
      if (*(uint *)(unaff_s1 + 0x74) < 4) {
        *(uint *)(unaff_s1 + 0x2c4) = unaff_s5 | 0x4005;
      }
      else if (*(uint *)(unaff_s1 + 0x74) < 7) {
        *(uint *)(unaff_s1 + 0x2c4) = unaff_s5 | 0x4004;
      }
      else {
        *(uint *)(unaff_s1 + 0x2c4) = unaff_s5 | 4;
      }
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
  }
  (**(code **)(in_stack_00000010 + -0x7d64))();
  if (*(int *)(unaff_s1 + 0x30) != 2) {
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
  if ((*(int *)(unaff_s1 + 0x2308) == 0) || (unaff_s3 != 0x48317011)) {
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    if (unaff_s3 == 0x48317011) goto LAB_00017ee0;
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
LAB_00017ee0:
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



// ==== H264EncGetBitsPerPixel @ 00015bf0 size=84

void H264EncGetBitsPerPixel
               (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int unaff_s1;
  int unaff_s3;
  int iVar1;
  uint uVar2;
  code *in_t9;
  code *pcVar3;
  
  (*in_t9)(param_1,param_2,param_3 != 0);
  (**(code **)(param_5 + -0x7d64))();
  (**(code **)(param_5 + -0x7d64))();
  (**(code **)(param_5 + -0x7d64))();
  (**(code **)(param_5 + -0x7d64))();
  (**(code **)(param_5 + -0x7d64))();
  (**(code **)(param_5 + -0x7d64))();
  (**(code **)(param_5 + -0x7d64))();
  (**(code **)(param_5 + -0x7d64))();
  if ((*(int *)(unaff_s1 + 0x2308) == 0) || (unaff_s3 != 0x48317011)) {
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    if (unaff_s3 == 0x48317011) goto LAB_00017ee0;
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
LAB_00017ee0:
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



// ==== H264EncSetTestId @ 00015c44 size=8

void H264EncSetTestId(void)

{
  int unaff_s1;
  int unaff_s3;
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int in_stack_00000010;
  
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  if ((*(int *)(unaff_s1 + 0x2308) == 0) || (unaff_s3 != 0x48317011)) {
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    if (unaff_s3 == 0x48317011) goto LAB_00017ee0;
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
LAB_00017ee0:
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



// ==== H264EncGetMbInfo @ 00015c4c size=124

void H264EncGetMbInfo(undefined4 param_1)

{
  int unaff_s1;
  int unaff_s3;
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int unaff_gp;
  int in_stack_00000010;
  
  (**(code **)(unaff_gp + -0x7d64))(param_1,0x27,*(undefined4 *)(unaff_s1 + 0xb4));
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  if ((*(int *)(unaff_s1 + 0x2308) == 0) || (unaff_s3 != 0x48317011)) {
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    if (unaff_s3 == 0x48317011) goto LAB_00017ee0;
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
LAB_00017ee0:
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



// ==== H264EncGetEncodedMbLines @ 00015cc8 size=72

void H264EncGetEncodedMbLines
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               int param_5)

{
  int unaff_s1;
  int unaff_s3;
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int unaff_gp;
  
  if ((*(int *)(unaff_s1 + 0x2308) == 0) || (unaff_s3 != 0x48317011)) {
    (**(code **)(unaff_gp + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    if (unaff_s3 == 0x48317011) goto LAB_00017ee0;
  }
  else {
    (**(code **)(unaff_gp + -0x7d64))(param_1,param_2,0);
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
    (**(code **)(param_5 + -0x7d64))();
LAB_00017ee0:
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



// ==== H264EncSetInputMBLines @ 00015d10 size=100

void H264EncSetInputMBLines(undefined4 param_1)

{
  int unaff_s1;
  int unaff_s3;
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int unaff_gp;
  int in_stack_00000010;
  
  (**(code **)(unaff_gp + -0x7d64))(param_1,0x32,*(undefined4 *)(unaff_s1 + 0xa0));
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  if (unaff_s3 == 0x48317011) {
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



// ==== H264EncGetMbSizeInfo @ 00015e88 size=60

void H264EncGetMbSizeInfo
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               int param_5)

{
  int unaff_s1;
  int unaff_s3;
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7d64))(param_1,param_2,*(undefined2 *)(unaff_s1 + 0xf00));
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



// ==== H264EncSetEpollHook @ 00015ec4 size=44

void H264EncSetEpollHook(void)

{
  int unaff_s1;
  int unaff_s3;
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int in_stack_00000010;
  
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



// ==== H264EncCheckDone @ 00015ef0 size=44

void H264EncCheckDone(void)

{
  int unaff_s1;
  int unaff_s3;
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int in_stack_00000010;
  
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



// ==== H264EncMakeRdy @ 00015f1c size=44

void H264EncMakeRdy(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   int param_5)

{
  int unaff_s1;
  int unaff_s3;
  int iVar1;
  uint uVar2;
  code *in_t9;
  code *pcVar3;
  
  (*in_t9)(param_1,param_2,*(undefined4 *)(unaff_s1 + 0xf18));
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



// ==== H264EncUseSigio @ 00015f48 size=56

void H264EncUseSigio(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    int param_5)

{
  int unaff_s1;
  int unaff_s3;
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7d64))(param_1,param_2,*(undefined4 *)(unaff_s1 + 0xf10));
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



// ==== H264CabacInit @ 00015f80 size=1320

void H264CabacInit(void)

{
  int unaff_s1;
  int unaff_s3;
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int in_stack_00000010;
  
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



// ==== H264MadInit @ 00016110 size=68

void H264MadInit(undefined4 param_1)

{
  int unaff_s1;
  int unaff_s3;
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int unaff_gp;
  int in_stack_00000010;
  
  (**(code **)(unaff_gp + -0x7d64))(param_1,0x87,*(undefined4 *)(unaff_s1 + 0xf08));
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  if (unaff_s3 == 0x48317011) {
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
  else {
LAB_000161f0:
    pcVar3 = *(code **)(in_stack_00000010 + -0x7d64);
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



// ==== H264MadThreshold @ 00016154 size=1276

void H264MadThreshold(undefined4 param_1)

{
  int unaff_s1;
  int unaff_s3;
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int in_stack_00000010;
  
  (**(code **)(in_stack_00000010 + -0x7d64))(param_1,0x85,*(undefined4 *)(unaff_s1 + 0xe94));
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  if (unaff_s3 == 0x48317011) {
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
  else {
LAB_000161f0:
    pcVar3 = *(code **)(in_stack_00000010 + -0x7d64);
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



// ==== H264InitSei @ 00016630 size=172

void H264InitSei(void)

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
    unaff_s4 = unaff_s4 + 0x21;
    (**(code **)(in_stack_00000010 + -0x7d64))();
    if (unaff_s4 == unaff_s6) break;
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
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  if ((*(int *)(unaff_s1 + 0x30) == 2) || (unaff_s3 != 0x48317011)) {
LAB_0001689c:
    pcVar3 = *(code **)(in_stack_00000010 + -0x7d64);
  }
  else {
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    if (*(int *)(unaff_s1 + 0x2038) == 0) goto LAB_0001689c;
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
  }
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



// ==== H264UpdateSeiTS @ 000166dc size=232

void H264UpdateSeiTS(void)

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
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    unaff_s4 = unaff_s4 + 0x21;
    (**(code **)(in_stack_00000010 + -0x7d64))();
    if (unaff_s4 == unaff_s6) break;
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
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  if ((*(int *)(unaff_s1 + 0x30) == 2) || (unaff_s3 != 0x48317011)) {
LAB_0001689c:
    pcVar3 = *(code **)(in_stack_00000010 + -0x7d64);
  }
  else {
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    if (*(int *)(unaff_s1 + 0x2038) == 0) goto LAB_0001689c;
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
  }
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



// ==== H264FillerSei @ 000167c4 size=264

void H264FillerSei(void)

{
  int iVar1;
  int unaff_s1;
  int unaff_s3;
  int unaff_s4;
  int unaff_s6;
  uint uVar2;
  code *in_t9;
  code *pcVar3;
  int in_stack_00000010;
  
  while( true ) {
    (*in_t9)();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    unaff_s4 = unaff_s4 + 0x21;
    (**(code **)(in_stack_00000010 + -0x7d64))();
    if (unaff_s4 == unaff_s6) break;
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
    in_t9 = *(code **)(in_stack_00000010 + -0x7d64);
  }
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  if ((*(int *)(unaff_s1 + 0x30) == 2) || (unaff_s3 != 0x48317011)) {
LAB_0001689c:
    pcVar3 = *(code **)(in_stack_00000010 + -0x7d64);
  }
  else {
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    if (*(int *)(unaff_s1 + 0x2038) == 0) goto LAB_0001689c;
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
  }
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



// ==== H264BufferingSei @ 000168cc size=288

void H264BufferingSei(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                     int param_5)

{
  int iVar1;
  int unaff_s1;
  int unaff_s3;
  int unaff_s4;
  undefined4 in_t8;
  uint uVar2;
  code *in_t9;
  code *pcVar3;
  
  if (param_3 == 0) {
    in_t8 = 0;
  }
  (*in_t9)(param_1,param_2,in_t8);
  (**(code **)(param_5 + -0x7d64))();
  (**(code **)(param_5 + -0x7d64))();
  (**(code **)(param_5 + -0x7d64))();
  iVar1 = 4;
  (**(code **)(param_5 + -0x7d64))();
  do {
    iVar1 = iVar1 + 4;
    (**(code **)(param_5 + -0x7ee4))();
  } while (iVar1 != unaff_s4);
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



// ==== H264PicTimingSei @ 000169ec size=628

void H264PicTimingSei(void)

{
  int unaff_s1;
  int unaff_s3;
  int unaff_s4;
  int iVar1;
  int unaff_s5;
  uint uVar2;
  code *pcVar3;
  int in_stack_00000010;
  
  for (; unaff_s4 != unaff_s5; unaff_s4 = unaff_s4 + 4) {
    (**(code **)(in_stack_00000010 + -0x7ee4))();
  }
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
  uVar2 = *(uint *)(unaff_s1 + 0x2f4);
LAB_00016b94:
  pcVar3 = *(code **)(in_stack_00000010 + -0x7d30);
  *(uint *)(unaff_s1 + 0x2f4) = uVar2 | 1;
  (*pcVar3)();
  return;
}



// ==== H264UserDataUnregSei @ 00016cdc size=32

void H264UserDataUnregSei(void)

{
  int unaff_s1;
  code *pcVar1;
  int in_stack_00000010;
  
  (**(code **)(in_stack_00000010 + -0x7ee4))();
  pcVar1 = *(code **)(in_stack_00000010 + -0x7d30);
  *(uint *)(unaff_s1 + 0x2f4) = *(uint *)(unaff_s1 + 0x2f4) | 1;
  (*pcVar1)();
  return;
}



// ==== H264RecoveryPointSei @ 00016e20 size=84

void H264RecoveryPointSei(void)

{
  int unaff_s1;
  int unaff_s3;
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int in_stack_00000010;
  
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  if (*(int *)(unaff_s1 + 0x30) != 2) {
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
  if ((*(int *)(unaff_s1 + 0x2308) == 0) || (unaff_s3 != 0x48317011)) {
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    if (unaff_s3 == 0x48317011) goto LAB_00017ee0;
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
LAB_00017ee0:
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



// ==== H264ScalabilityInfoSei @ 00016f24 size=168

void H264ScalabilityInfoSei(void)

{
  uint uVar1;
  int iVar2;
  int unaff_s1;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  code *pcVar3;
  code *in_t9;
  int in_stack_00000010;
  
  while( true ) {
    unaff_s4 = unaff_s4 + 4;
    (*in_t9)();
    if (unaff_s4 == unaff_s5) break;
    in_t9 = *(code **)(in_stack_00000010 + -0x7ee4);
  }
  (**(code **)(in_stack_00000010 + -0x7ee4))();
  (**(code **)(in_stack_00000010 + -0x7ee4))();
  (**(code **)(in_stack_00000010 + -0x7ee4))();
  iVar2 = 0x39c;
  if (0x48311480 < *(uint *)(unaff_s1 + 0xaa4)) {
    do {
      iVar2 = iVar2 + 4;
      (**(code **)(in_stack_00000010 + -0x7ee4))();
    } while (iVar2 != 0x3bc);
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
        iVar2 = 0x3d0;
        do {
          iVar2 = iVar2 + 4;
          (**(code **)(in_stack_00000010 + -0x7ee4))();
        } while (iVar2 != 0x4a0);
        iVar2 = 0x4a4;
        if (0x48316fff < *(uint *)(unaff_s1 + 0xaa4)) {
          do {
            iVar2 = iVar2 + 4;
            (**(code **)(in_stack_00000010 + -0x7ee4))();
          } while (iVar2 != 0x7c8);
          uVar1 = *(uint *)(unaff_s1 + 0x2f4);
          goto LAB_00016b94;
        }
      }
      else {
        iVar2 = 0x3d0;
        if (unaff_s3 == 0x48314810) {
          do {
            iVar2 = iVar2 + 4;
            (**(code **)(in_stack_00000010 + -0x7ee4))();
          } while (iVar2 != 0x4a0);
          uVar1 = *(uint *)(unaff_s1 + 0x2f4);
          goto LAB_00016b94;
        }
      }
    }
  }
  uVar1 = *(uint *)(unaff_s1 + 0x2f4);
LAB_00016b94:
  pcVar3 = *(code **)(in_stack_00000010 + -0x7d30);
  *(uint *)(unaff_s1 + 0x2f4) = uVar1 | 1;
  (*pcVar3)();
  return;
}



// ==== EWLReadAsicID @ 000173a0 size=184

void EWLReadAsicID(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  int param_5)

{
  int unaff_s1;
  int unaff_s3;
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7d64))(param_1,param_2,*(undefined4 *)(unaff_s1 + 0xe8));
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
      pcVar3 = *(code **)(param_5 + -0x7d64);
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



// ==== EWLReadAsicConfig @ 00017458 size=580

void EWLReadAsicConfig(undefined4 param_1)

{
  int in_v0;
  int unaff_s1;
  int unaff_s3;
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int unaff_gp;
  int in_stack_00000010;
  
  iVar1 = *(int *)(unaff_s1 + 0xb24);
  if (in_v0 <= *(int *)(unaff_s1 + 0xb24)) {
    iVar1 = in_v0;
  }
  (**(code **)(unaff_gp + -0x7d64))(param_1,0xdf,iVar1);
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
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
  }
  iVar1 = *(int *)(unaff_s1 + 0x30);
  if (iVar1 == 1) {
    iVar1 = 0;
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



// ==== EWLWriteReg @ 000176c4 size=288

void EWLWriteReg(void)

{
  int unaff_s1;
  int unaff_s3;
  int unaff_s4;
  int iVar1;
  int unaff_s6;
  uint uVar2;
  code *pcVar3;
  int in_stack_00000010;
  
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  do {
    unaff_s4 = unaff_s4 + 1;
    (**(code **)(in_stack_00000010 + -0x7d64))();
  } while (unaff_s4 != unaff_s6);
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
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  iVar1 = *(int *)(unaff_s1 + 0x30);
  if (iVar1 == 1) {
    iVar1 = 0;
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



// ==== dump_reg_to_file @ 000177e4 size=300

void dump_reg_to_file(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     int param_5)

{
  int unaff_s1;
  int unaff_s3;
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7d64))(param_1,param_2,*(undefined4 *)(unaff_s1 + 0x2304));
  (**(code **)(param_5 + -0x7d64))();
  (**(code **)(param_5 + -0x7d64))();
  (**(code **)(param_5 + -0x7d64))();
  iVar2 = *(int *)(unaff_s1 + 0x30);
  if (iVar2 == 1) {
    iVar2 = 0;
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
      iVar2 = iVar2 + 0x19;
      (**(code **)(param_5 + -0x7d64))();
    } while (iVar2 != 0x4b);
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
    iVar2 = *(int *)(unaff_s1 + 0x30);
  }
  pcVar3 = *(code **)(param_5 + -0x7d64);
  if (iVar2 != 2) {
    iVar2 = 0;
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
      iVar2 = iVar2 + 0x21;
      (**(code **)(param_5 + -0x7d64))();
    } while (iVar2 != 99);
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
        iVar2 = 0;
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
          iVar2 = iVar2 + 0x21;
          (**(code **)(param_5 + -0x7d64))();
        } while (iVar2 != 99);
        iVar2 = 0;
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
          iVar2 = iVar2 + 10;
          (**(code **)(param_5 + -0x7d64))();
        } while (iVar2 != 0x118);
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
  iVar2 = 4;
  (**(code **)(param_5 + -0x7d64))();
  do {
    iVar2 = iVar2 + 4;
    (**(code **)(param_5 + -0x7ee4))();
  } while (iVar2 != 0xfc);
  iVar2 = 0x100;
  if (*(int *)(unaff_s1 + 0x30) == 2) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 4;
      (**(code **)(param_5 + -0x7ee4))();
    } while (iVar2 != 0x80);
    if (0x48311480 < *(uint *)(unaff_s1 + 0xaa4)) {
      iVar2 = 0x39c;
      do {
        iVar2 = iVar2 + 4;
        (**(code **)(param_5 + -0x7ee4))();
      } while (iVar2 != 0x3a8);
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
      iVar2 = iVar2 + 4;
      (**(code **)(param_5 + -0x7ee4))();
    } while (iVar2 != 0x180);
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 4;
      (**(code **)(param_5 + -0x7ee4))();
    } while (iVar2 != 0x80);
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 4;
      (**(code **)(param_5 + -0x7ee4))();
    } while (iVar2 != 0x80);
    iVar2 = 0x280;
    do {
      iVar2 = iVar2 + 4;
      (**(code **)(param_5 + -0x7ee4))();
    } while (iVar2 != 0x290);
    uVar1 = *(uint *)(unaff_s1 + 0xaa4);
    if (0x48311220 < uVar1) {
      iVar2 = 0;
      if (*(int *)(unaff_s1 + 0xd60) != 0) {
        do {
          iVar2 = iVar2 + 4;
          (**(code **)(param_5 + -0x7ee4))();
        } while (iVar2 != 0xc0);
        iVar2 = 0;
        do {
          iVar2 = iVar2 + 4;
          (**(code **)(param_5 + -0x7ee4))();
        } while (iVar2 != 0x40);
        (**(code **)(param_5 + -0x7ee4))();
        (**(code **)(param_5 + -0x7ee4))();
        (**(code **)(param_5 + -0x7ee4))();
        uVar1 = *(uint *)(unaff_s1 + 0xaa4);
      }
      iVar2 = 0x39c;
      if (0x48311480 < uVar1) {
        do {
          iVar2 = iVar2 + 4;
          (**(code **)(param_5 + -0x7ee4))();
        } while (iVar2 != 0x3bc);
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
            iVar2 = 0x3d0;
            do {
              iVar2 = iVar2 + 4;
              (**(code **)(param_5 + -0x7ee4))();
            } while (iVar2 != 0x4a0);
            iVar2 = 0x4a4;
            if (0x48316fff < *(uint *)(unaff_s1 + 0xaa4)) {
              do {
                iVar2 = iVar2 + 4;
                (**(code **)(param_5 + -0x7ee4))();
              } while (iVar2 != 0x7c8);
              uVar1 = *(uint *)(unaff_s1 + 0x2f4);
              goto LAB_00016b94;
            }
          }
          else {
            iVar2 = 0x3d0;
            if (unaff_s3 == 0x48314810) {
              do {
                iVar2 = iVar2 + 4;
                (**(code **)(param_5 + -0x7ee4))();
              } while (iVar2 != 0x4a0);
              uVar1 = *(uint *)(unaff_s1 + 0x2f4);
              goto LAB_00016b94;
            }
          }
        }
      }
    }
  }
  uVar1 = *(uint *)(unaff_s1 + 0x2f4);
LAB_00016b94:
  pcVar3 = *(code **)(param_5 + -0x7d30);
  *(uint *)(unaff_s1 + 0x2f4) = uVar1 | 1;
  (*pcVar3)();
  return;
}



// ==== EWLEnableHW @ 00017910 size=184

void EWLEnableHW(void)

{
  int unaff_s1;
  int unaff_s3;
  int iVar1;
  int unaff_s4;
  int unaff_s6;
  uint uVar2;
  code *pcVar3;
  int in_stack_00000010;
  
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
    unaff_s4 = unaff_s4 + 0x19;
    (**(code **)(in_stack_00000010 + -0x7d64))();
  } while (unaff_s4 != unaff_s6);
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
  pcVar3 = *(code **)(in_stack_00000010 + -0x7d64);
  if (*(int *)(unaff_s1 + 0x30) != 2) {
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



// ==== EWLDisableHW @ 000179c8 size=120

void EWLDisableHW(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int unaff_s1;
  int unaff_s3;
  int iVar1;
  int unaff_s4;
  int unaff_s6;
  uint uVar2;
  code *pcVar3;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7d64))(param_1,param_2,*(undefined4 *)(unaff_s1 + 0xee0));
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
    unaff_s4 = unaff_s4 + 0x19;
    (**(code **)(param_5 + -0x7d64))();
  } while (unaff_s4 != unaff_s6);
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
  pcVar3 = *(code **)(param_5 + -0x7d64);
  if (*(int *)(unaff_s1 + 0x30) != 2) {
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



// ==== EWLReadReg @ 00017a40 size=120

void EWLReadReg(void)

{
  int unaff_s1;
  int unaff_s3;
  int iVar1;
  int unaff_s4;
  int unaff_s6;
  uint uVar2;
  code *pcVar3;
  int unaff_gp;
  int in_stack_00000010;
  
  while( true ) {
    (**(code **)(unaff_gp + -0x7d64))();
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
    unaff_s4 = unaff_s4 + 0x19;
    (**(code **)(in_stack_00000010 + -0x7d64))();
    if (unaff_s4 == unaff_s6) break;
    (**(code **)(in_stack_00000010 + -0x7d64))();
    unaff_gp = in_stack_00000010;
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
  pcVar3 = *(code **)(in_stack_00000010 + -0x7d64);
  if (*(int *)(unaff_s1 + 0x30) != 2) {
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



// ==== EWLMallocLinear @ 00017ab8 size=408

void EWLMallocLinear(void)

{
  int unaff_s1;
  int unaff_s3;
  int iVar1;
  int unaff_s4;
  int unaff_s6;
  uint uVar2;
  code *pcVar3;
  int unaff_gp;
  int in_stack_00000010;
  
  while( true ) {
    (**(code **)(unaff_gp + -0x7d64))();
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
    unaff_s4 = unaff_s4 + 0x19;
    (**(code **)(in_stack_00000010 + -0x7d64))();
    if (unaff_s4 == unaff_s6) break;
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    unaff_gp = in_stack_00000010;
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
  pcVar3 = *(code **)(in_stack_00000010 + -0x7d64);
  if (*(int *)(unaff_s1 + 0x30) != 2) {
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



// ==== EWLMallocRefFrm @ 00017c50 size=104

void EWLMallocRefFrm(void)

{
  int unaff_s1;
  int unaff_s3;
  int iVar1;
  int unaff_s4;
  int unaff_s6;
  uint uVar2;
  code *pcVar3;
  int unaff_gp;
  int in_stack_00000010;
  
  while( true ) {
    (**(code **)(unaff_gp + -0x7d64))();
    unaff_s4 = unaff_s4 + 0x19;
    (**(code **)(in_stack_00000010 + -0x7d64))();
    if (unaff_s4 == unaff_s6) break;
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
    unaff_gp = in_stack_00000010;
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
  pcVar3 = *(code **)(in_stack_00000010 + -0x7d64);
  if (*(int *)(unaff_s1 + 0x30) != 2) {
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



// ==== EWLFreeLinear @ 00017cb8 size=232

void EWLFreeLinear(void)

{
  int unaff_s1;
  int unaff_s3;
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int in_stack_00000010;
  
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
  pcVar3 = *(code **)(in_stack_00000010 + -0x7d64);
  if (*(int *)(unaff_s1 + 0x30) != 2) {
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



// ==== EWLFreeRefFrm @ 00017da0 size=100

void EWLFreeRefFrm(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  int param_5)

{
  int unaff_s1;
  int unaff_s3;
  int iVar1;
  uint uVar2;
  code *pcVar3;
  code *in_t9;
  
  (*in_t9)(param_1,param_2,*(undefined4 *)(unaff_s1 + 0xf2c));
  (**(code **)(param_5 + -0x7d64))();
  (**(code **)(param_5 + -0x7d64))();
  (**(code **)(param_5 + -0x7d64))();
  (**(code **)(param_5 + -0x7d64))();
  (**(code **)(param_5 + -0x7d64))();
  pcVar3 = *(code **)(param_5 + -0x7d64);
  if (*(int *)(unaff_s1 + 0x30) != 2) {
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



// ==== EWLReserveHw @ 00017e04 size=40

void EWLReserveHw(void)

{
  int unaff_s1;
  int unaff_s3;
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int in_stack_00000010;
  
  (**(code **)(in_stack_00000010 + -0x7d64))();
  pcVar3 = *(code **)(in_stack_00000010 + -0x7d64);
  if (*(int *)(unaff_s1 + 0x30) != 2) {
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



// ==== EWLWaitHwRdy @ 0001812c size=564

void EWLWaitHwRdy(undefined4 param_1)

{
  int unaff_s1;
  int unaff_s3;
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int unaff_gp;
  int in_stack_00000010;
  
  (**(code **)(unaff_gp + -0x7d64))(param_1,0x2a6,*(undefined4 *)(unaff_s1 + 0x2048));
  (**(code **)(in_stack_00000010 + -0x7d64))();
  (**(code **)(in_stack_00000010 + -0x7d64))();
  if (*(int *)(unaff_s1 + 0x2038) == 0) {
    pcVar3 = *(code **)(in_stack_00000010 + -0x7d64);
  }
  else {
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
  }
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



// ==== EWLReleaseHw @ 00018360 size=172

void EWLReleaseHw(void)

{
  int unaff_s1;
  int unaff_s3;
  int unaff_s4;
  int iVar1;
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
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    unaff_s4 = unaff_s4 + 0x21;
    (**(code **)(in_stack_00000010 + -0x7d64))();
    if (unaff_s4 == unaff_s6) break;
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



// ==== EWLmalloc @ 0001840c size=24

void EWLmalloc(void)

{
  int unaff_s1;
  int unaff_s3;
  int unaff_s4;
  int iVar1;
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
    unaff_s4 = unaff_s4 + 0x21;
    (**(code **)(in_stack_00000010 + -0x7d64))();
    if (unaff_s4 == unaff_s6) break;
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



// ==== EWLfree @ 00018424 size=40

void EWLfree(void)

{
  int unaff_s1;
  int unaff_s3;
  int unaff_s4;
  int iVar1;
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
    unaff_s4 = unaff_s4 + 0x21;
    (**(code **)(in_stack_00000010 + -0x7d64))();
    if (unaff_s4 == unaff_s6) break;
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



// ==== EWLRelease @ 0001844c size=208

void EWLRelease(void)

{
  int unaff_s1;
  int unaff_s3;
  int unaff_s4;
  int iVar1;
  int unaff_s6;
  uint uVar2;
  code *pcVar3;
  int in_stack_00000010;
  
  while( true ) {
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    (**(code **)(in_stack_00000010 + -0x7d64))();
    unaff_s4 = unaff_s4 + 0x21;
    (**(code **)(in_stack_00000010 + -0x7d64))();
    if (unaff_s4 == unaff_s6) break;
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



// ==== EWLcalloc @ 00018650 size=8

void EWLcalloc(void)

{
  int unaff_s1;
  code *pcVar1;
  int unaff_gp;
  
  pcVar1 = *(code **)(unaff_gp + -0x7d30);
  *(uint *)(unaff_s1 + 0x2f4) = *(uint *)(unaff_s1 + 0x2f4) | 1;
  (*pcVar1)();
  return;
}



// ==== EWLmemcpy @ 00018668 size=24

void EWLmemcpy(void)

{
  uint uVar1;
  int iVar2;
  int unaff_s1;
  int unaff_s3;
  code *pcVar3;
  code *in_t9;
  int in_stack_00000010;
  
  (*in_t9)();
  (**(code **)(in_stack_00000010 + -0x7ee4))();
  (**(code **)(in_stack_00000010 + -0x7ee4))();
  (**(code **)(in_stack_00000010 + -0x7ee4))();
  (**(code **)(in_stack_00000010 + -0x7ee4))();
  if (unaff_s3 == 0x48317011) {
    iVar2 = 0x3d0;
    do {
      iVar2 = iVar2 + 4;
      (**(code **)(in_stack_00000010 + -0x7ee4))();
    } while (iVar2 != 0x4a0);
    iVar2 = 0x4a4;
    if (0x48316fff < *(uint *)(unaff_s1 + 0xaa4)) {
      do {
        iVar2 = iVar2 + 4;
        (**(code **)(in_stack_00000010 + -0x7ee4))();
      } while (iVar2 != 0x7c8);
      uVar1 = *(uint *)(unaff_s1 + 0x2f4);
      goto LAB_00016b94;
    }
  }
  else {
    iVar2 = 0x3d0;
    if (unaff_s3 == 0x48314810) {
      do {
        iVar2 = iVar2 + 4;
        (**(code **)(in_stack_00000010 + -0x7ee4))();
      } while (iVar2 != 0x4a0);
      uVar1 = *(uint *)(unaff_s1 + 0x2f4);
      goto LAB_00016b94;
    }
  }
  uVar1 = *(uint *)(unaff_s1 + 0x2f4);
LAB_00016b94:
  pcVar3 = *(code **)(in_stack_00000010 + -0x7d30);
  *(uint *)(unaff_s1 + 0x2f4) = uVar1 | 1;
  (*pcVar3)();
  return;
}



// ==== EWLmemset @ 00018680 size=24

void EWLmemset(void)

{
  uint uVar1;
  int iVar2;
  int unaff_s1;
  int unaff_s3;
  code *pcVar3;
  int unaff_gp;
  int in_stack_00000010;
  
  (**(code **)(unaff_gp + -0x7ee4))();
  (**(code **)(in_stack_00000010 + -0x7ee4))();
  (**(code **)(in_stack_00000010 + -0x7ee4))();
  (**(code **)(in_stack_00000010 + -0x7ee4))();
  if (unaff_s3 == 0x48317011) {
    iVar2 = 0x3d0;
    do {
      iVar2 = iVar2 + 4;
      (**(code **)(in_stack_00000010 + -0x7ee4))();
    } while (iVar2 != 0x4a0);
    iVar2 = 0x4a4;
    if (0x48316fff < *(uint *)(unaff_s1 + 0xaa4)) {
      do {
        iVar2 = iVar2 + 4;
        (**(code **)(in_stack_00000010 + -0x7ee4))();
      } while (iVar2 != 0x7c8);
      uVar1 = *(uint *)(unaff_s1 + 0x2f4);
      goto LAB_00016b94;
    }
  }
  else {
    iVar2 = 0x3d0;
    if (unaff_s3 == 0x48314810) {
      do {
        iVar2 = iVar2 + 4;
        (**(code **)(in_stack_00000010 + -0x7ee4))();
      } while (iVar2 != 0x4a0);
      uVar1 = *(uint *)(unaff_s1 + 0x2f4);
      goto LAB_00016b94;
    }
  }
  uVar1 = *(uint *)(unaff_s1 + 0x2f4);
LAB_00016b94:
  pcVar3 = *(code **)(in_stack_00000010 + -0x7d30);
  *(uint *)(unaff_s1 + 0x2f4) = uVar1 | 1;
  (*pcVar3)();
  return;
}



// ==== EWLmemcmp @ 00018698 size=88

void EWLmemcmp(void)

{
  uint uVar1;
  int iVar2;
  int unaff_s1;
  int unaff_s3;
  code *pcVar3;
  int in_stack_00000010;
  
  (**(code **)(in_stack_00000010 + -0x7ee4))();
  (**(code **)(in_stack_00000010 + -0x7ee4))();
  (**(code **)(in_stack_00000010 + -0x7ee4))();
  if (unaff_s3 == 0x48317011) {
    iVar2 = 0x3d0;
    do {
      iVar2 = iVar2 + 4;
      (**(code **)(in_stack_00000010 + -0x7ee4))();
    } while (iVar2 != 0x4a0);
    iVar2 = 0x4a4;
    if (0x48316fff < *(uint *)(unaff_s1 + 0xaa4)) {
      do {
        iVar2 = iVar2 + 4;
        (**(code **)(in_stack_00000010 + -0x7ee4))();
      } while (iVar2 != 0x7c8);
      uVar1 = *(uint *)(unaff_s1 + 0x2f4);
      goto LAB_00016b94;
    }
  }
  else {
    iVar2 = 0x3d0;
    if (unaff_s3 == 0x48314810) {
      do {
        iVar2 = iVar2 + 4;
        (**(code **)(in_stack_00000010 + -0x7ee4))();
      } while (iVar2 != 0x4a0);
      uVar1 = *(uint *)(unaff_s1 + 0x2f4);
      goto LAB_00016b94;
    }
  }
  uVar1 = *(uint *)(unaff_s1 + 0x2f4);
LAB_00016b94:
  pcVar3 = *(code **)(in_stack_00000010 + -0x7d30);
  *(uint *)(unaff_s1 + 0x2f4) = uVar1 | 1;
  (*pcVar3)();
  return;
}



// ==== EncAsicFrameContinue @ 00018810 size=148

void EncAsicFrameContinue(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_EWLWriteReg_000464ec;
  *(uint *)(param_2 + 0x2c0) = *(uint *)(param_2 + 0x2c0) & 0xfffff002;
  (*(code *)puVar1)(param_1,0x60,*(uint *)(param_2 + 0x94) >> 1);
  puVar1 = PTR_EWLWriteReg_000464ec;
  *(undefined4 *)(param_2 + 0x2d0) = *(undefined4 *)(param_2 + 0x90);
  (*(code *)puVar1)(param_1,0x14,*(undefined4 *)(param_2 + 0x90));
  (*(code *)PTR_EWLEnableHW_000466a0)(param_1,4,*(undefined4 *)(param_2 + 0x2c0));
  return;
}



// ==== EncAsicGetRegisters @ 000188a4 size=380

void EncAsicGetRegisters(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar5 = param_2 + 700;
  iVar6 = *(int *)(param_2 + 0xaa4);
  uVar2 = (*(code *)PTR_EncAsicGetRegisterValue_00046500)(param_1,iVar5,99);
  *(uint *)(param_2 + 0x80) = uVar2 >> 3;
  iVar3 = (*(code *)PTR_EncAsicGetRegisterValue_00046500)(param_1,iVar5,0x206);
  *(int *)(param_2 + 0xe64) = iVar3;
  if (iVar3 != 0) {
    iVar3 = (*(code *)PTR_EncAsicGetRegisterValue_00046500)(param_1,iVar5,0xb1);
    uVar2 = iVar3 * 0xa9;
    if (uVar2 == 0) {
      *(undefined4 *)(param_2 + 0xe68) = 0;
    }
    else {
      uVar7 = *(uint *)(param_2 + 0xe64);
      if (uVar7 < 0xffffff) {
        if (uVar2 == 0) {
          trap(0x1c00);
        }
        *(uint *)(param_2 + 0xe68) = (uVar7 << 8) / uVar2;
      }
      else {
        if (uVar2 == 0) {
          trap(0x1c00);
        }
        *(uint *)(param_2 + 0xe68) = uVar7 / uVar2 << 8;
      }
    }
  }
  iVar3 = (*(code *)PTR_EncAsicGetRegisterValue_00046500)(param_1,iVar5,0x66);
  *(int *)(param_2 + 0x120) = iVar3 << 1;
  if (iVar6 == 0x48317011) {
    uVar4 = (*(code *)PTR_EncAsicGetRegisterValue_00046500)(param_1,iVar5,0x66);
    puVar1 = PTR_EncAsicGetRegisterValue_00046500;
    *(undefined4 *)(param_2 + 0x120) = uVar4;
    uVar4 = (*(code *)puVar1)(param_1,iVar5,0x3c4);
    puVar1 = PTR_EncAsicGetRegisterValue_00046500;
    *(undefined4 *)(param_2 + 0x2054) = uVar4;
    uVar4 = (*(code *)puVar1)(param_1,iVar5,0xb0);
    puVar1 = PTR_EncAsicGetRegisterValue_00046500;
    *(undefined4 *)(param_2 + 0xac0) = uVar4;
    uVar4 = (*(code *)puVar1)(param_1,iVar5,0x209);
    puVar1 = PTR_EncAsicGetRegisterValue_00046500;
    *(undefined4 *)(param_2 + 0xac4) = uVar4;
    uVar4 = (*(code *)puVar1)(param_1,iVar5,0x20c);
    puVar1 = PTR_EncAsicGetRegisterValue_00046500;
    *(undefined4 *)(param_2 + 0xac8) = uVar4;
    uVar4 = (*(code *)puVar1)(param_1,iVar5,0x290);
    puVar1 = PTR_EncAsicGetRegisterValue_00046500;
    *(undefined4 *)(param_2 + 0xe80) = uVar4;
    iVar3 = (*(code *)puVar1)(param_1,iVar5,0xaf);
    puVar1 = PTR_EncAsicGetRegisterValue_00046500;
    *(int *)(param_2 + 0x11c) = iVar3 << 2;
    uVar4 = (*(code *)puVar1)(param_1,iVar5,0x3fa);
    puVar1 = PTR_EncAsicGetRegisterValue_00046500;
    *(undefined4 *)(param_2 + 0x2078) = uVar4;
    uVar4 = (*(code *)puVar1)(param_1,iVar5,0x3fb);
    *(undefined4 *)(param_2 + 0x2074) = uVar4;
    uVar4 = (*(code *)PTR_EncAsicGetRegisterValue_00046500)(param_1,iVar5,0x3f6);
    *(undefined4 *)(param_2 + 0x2070) = uVar4;
  }
  else {
    uVar4 = (*(code *)PTR_EncAsicGetRegisterValue_00046500)(param_1,iVar5,0xb0);
    puVar1 = PTR_EncAsicGetRegisterValue_00046500;
    *(undefined4 *)(param_2 + 0xac0) = uVar4;
    uVar4 = (*(code *)puVar1)(param_1,iVar5,0x209);
    puVar1 = PTR_EncAsicGetRegisterValue_00046500;
    *(undefined4 *)(param_2 + 0xac4) = uVar4;
    uVar4 = (*(code *)puVar1)(param_1,iVar5,0x20c);
    puVar1 = PTR_EncAsicGetRegisterValue_00046500;
    *(undefined4 *)(param_2 + 0xac8) = uVar4;
    uVar4 = (*(code *)puVar1)(param_1,iVar5,0x290);
    *(undefined4 *)(param_2 + 0xe80) = uVar4;
    iVar3 = (*(code *)PTR_EncAsicGetRegisterValue_00046500)(param_1,iVar5,0xaf);
    *(int *)(param_2 + 0x11c) = iVar3 << 2;
  }
  iVar3 = 0xa0;
  if (*(int *)(param_2 + 0xa9c) != 0) {
    do {
      uVar4 = (*(code *)PTR_EWLReadReg_0004650c)(param_1,iVar3);
      iVar5 = param_2 + iVar3;
      iVar3 = iVar3 + 4;
      *(undefined4 *)(iVar5 + 700) = uVar4;
    } while (iVar3 != 0xcc);
  }
  return;
}



// ==== EncAsicStop @ 00018bb8 size=32

void EncAsicStop(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_EWLDisableHW_00046694)(param_1,0x38,0);
  return;
}



// ==== EncAsicGetStatus @ 00018bd8 size=28

void EncAsicGetStatus(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_EWLReadReg_0004650c)(param_1,4);
  return;
}



// ==== EncAsicGetMvOutput @ 00018bf4 size=124

int EncAsicGetMvOutput(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2390);
  if (*(int *)(param_1 + 0xc) == 0) {
    if (0x48314470 < *(uint *)(param_1 + 0xaa8)) {
      return iVar1 + param_2 * 0x30;
    }
    return iVar1 + param_2 * 0x20;
  }
  if (*(uint *)(param_1 + 0xaa8) < 0x48314471) {
    return iVar1 + param_2 * 0x28;
  }
  return iVar1 + param_2 * 0x38;
}



// ==== EncAsicClearStatusBit @ 00018c70 size=96

void EncAsicClearStatusBit(undefined4 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_EWLReadReg_0004650c)(param_1,4);
  (*(code *)PTR_EWLWriteReg_000464ec)(param_1,4,uVar1 & ~param_2);
  return;
}



// ==== EncPreProcessFree @ 00018f6c size=220

void EncPreProcessFree(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 3;
  iVar1 = param_1;
  do {
    iVar2 = iVar2 + -1;
    if (*(int *)(iVar1 + 0x88) != 0) {
      (*(code *)PTR_EWLfree_000465a8)();
    }
    *(undefined4 *)(iVar1 + 0x88) = 0;
    iVar1 = iVar1 + 4;
  } while (iVar2 != 0);
  if (*(int *)(param_1 + 0x80) != 0) {
    (*(code *)PTR_EWLfree_000465a8)();
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    (*(code *)PTR_EWLfree_000465a8)();
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  if (*(int *)(param_1 + 0xa0) != 0) {
    (*(code *)PTR_EWLfree_000465a8)();
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(int *)(param_1 + 0xa4) != 0) {
    (*(code *)PTR_EWLfree_000465a8)();
  }
  *(undefined4 *)(param_1 + 0xa4) = 0;
  return;
}



// ==== EncPreProcessAlloc @ 00019048 size=312

undefined4 EncPreProcessAlloc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar1 = (*(code *)PTR_EWLcalloc_00046628)(param_2,1);
    iVar5 = param_1 + iVar3;
    iVar3 = iVar3 + 4;
    if (iVar1 == 0) {
      iVar4 = -1;
    }
    *(int *)(iVar5 + 0x88) = iVar1;
  } while (iVar3 != 0xc);
  iVar3 = (*(code *)PTR_EWLcalloc_00046628)(param_2,1);
  *(int *)(param_1 + 0x80) = iVar3;
  if (iVar3 == 0) {
    iVar4 = -1;
  }
  iVar3 = (*(code *)PTR_EWLcalloc_00046628)(param_2,1);
  *(int *)(param_1 + 0x84) = iVar3;
  if (iVar3 == 0) {
    iVar4 = -1;
  }
  iVar3 = (*(code *)PTR_EWLcalloc_00046628)(param_2,4);
  *(int *)(param_1 + 0xa0) = iVar3;
  if (iVar3 == 0) {
    uVar2 = (*(code *)PTR_EWLcalloc_00046628)(param_2,1);
    *(undefined4 *)(param_1 + 0xa4) = uVar2;
  }
  else {
    iVar3 = (*(code *)PTR_EWLcalloc_00046628)();
    *(int *)(param_1 + 0xa4) = iVar3;
    if ((iVar3 != 0) && (iVar4 == 0)) {
      return 0;
    }
  }
  (*(code *)PTR_EncPreProcessFree_00046438)(param_1);
  return 0xffffffff;
}



// ==== EncPreProcessCheck @ 00019180 size=104

int EncPreProcessCheck(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*param_1 < 0x2001) {
    iVar4 = -(param_1[1] & 1);
  }
  else {
    iVar4 = -1;
  }
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  if (param_1[9] == 0) {
    uVar2 = param_1[3];
    uVar3 = param_1[2];
  }
  if (*param_1 < uVar3 + param_1[6]) {
    iVar4 = -1;
  }
  iVar1 = -1;
  if (uVar2 + param_1[7] <= param_1[1]) {
    iVar1 = iVar4;
  }
  return iVar1;
}



// ==== EncSetColorConversion @ 000191e8 size=272

void EncSetColorConversion(int param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  uVar6 = 0x366d;
  if (*(int *)(param_1 + 0x30) == 1) {
    uVar5 = 0xb717;
    uVar4 = 0x127c;
    uVar2 = 0x89f5;
    uVar7 = 0xa28f;
  }
  else {
    uVar6 = 0x4c85;
    if (*(int *)(param_1 + 0x30) == 2) {
      uVar6 = *(undefined4 *)(param_1 + 0x3c);
      uVar5 = *(undefined4 *)(param_1 + 0x44);
      uVar4 = *(undefined4 *)(param_1 + 0x34);
      uVar2 = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_2 + 0xb50) = *(undefined4 *)(param_1 + 0x40);
      iVar3 = *(int *)(param_1 + 0x20);
      *(undefined4 *)(param_2 + 0xb4c) = uVar6;
      *(undefined4 *)(param_2 + 0xb54) = uVar5;
      *(undefined4 *)(param_2 + 0xb44) = uVar4;
      puVar1 = PTR_DAT_000463fc;
      *(undefined4 *)(param_2 + 0xb48) = uVar2;
      puVar8 = (undefined4 *)(puVar1 + iVar3 * 0xc + -0x7490);
      uVar6 = puVar8[1];
      uVar2 = puVar8[2];
      *(undefined4 *)(param_2 + 0xb58) = *puVar8;
      *(undefined4 *)(param_2 + 0xb5c) = uVar6;
      *(undefined4 *)(param_2 + 0xb60) = uVar2;
      return;
    }
    uVar5 = 0x962b;
    uVar4 = 0x1d50;
    uVar2 = 0x9090;
    uVar7 = 0xb694;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  *(undefined4 *)(param_2 + 0xb44) = uVar6;
  *(undefined4 *)(param_1 + 0x38) = uVar5;
  *(undefined4 *)(param_2 + 0xb48) = uVar5;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  *(undefined4 *)(param_2 + 0xb4c) = uVar4;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_2 + 0xb50) = uVar2;
  iVar3 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x44) = uVar7;
  *(undefined4 *)(param_2 + 0xb54) = uVar7;
  puVar8 = (undefined4 *)(PTR_DAT_000463fc + iVar3 * 0xc + -0x7490);
  uVar6 = puVar8[1];
  uVar2 = puVar8[2];
  *(undefined4 *)(param_2 + 0xb58) = *puVar8;
  *(undefined4 *)(param_2 + 0xb5c) = uVar6;
  *(undefined4 *)(param_2 + 0xb60) = uVar2;
  return;
}



// ==== EncAdaptiveROI @ 000192f8 size=3000

void EncAdaptiveROI(undefined4 param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  char *pcVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  byte *pbVar25;
  char *pcVar26;
  undefined1 *puVar27;
  int local_70;
  int local_64;
  int local_60;
  
  uVar19 = *(uint *)(param_2 + 0xc) >> 4;
  iVar8 = *(int *)(param_2 + 0x84);
  uVar18 = *(uint *)(param_2 + 8) >> 4;
  iVar3 = uVar18 * uVar19;
  puVar27 = *(undefined1 **)(param_2 + 0x80);
  if (uVar19 < 10) {
    uVar23 = 1;
  }
  else {
    uVar23 = uVar19 / 10;
  }
  *(uint *)(param_2 + 0x7c) = uVar23;
  uVar16 = (uVar19 / 5) * 3;
  if (uVar16 < 8) {
    iVar5 = *(int *)(param_2 + 0xac);
    iVar21 = 1;
    *(undefined4 *)(param_2 + 0x78) = 1;
  }
  else {
    iVar21 = (int)uVar16 >> 3;
    iVar5 = *(int *)(param_2 + 0xac);
    *(int *)(param_2 + 0x78) = iVar21;
  }
  if (iVar5 != 0) {
    (*(code *)PTR_EWLmemcpy_00046444)
              (*(undefined4 *)(param_2 + 0x8c),*(undefined4 *)(param_2 + 0x88),iVar3);
    *(undefined4 *)(param_2 + 0xac) = 0;
    *(undefined4 *)(param_2 + 0x98) = *(undefined4 *)(param_2 + 0x94);
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    if (*(int *)(param_2 + 0x98) == 0) {
      iVar8 = *(int *)(param_2 + 0x9c);
    }
    else {
      (*(code *)PTR_EWLmemset_00046578)(*(undefined4 *)(param_2 + 0x8c),0,iVar3);
      iVar8 = *(int *)(param_2 + 0x9c);
    }
    if (iVar8 == 0) {
      iVar8 = *(int *)(param_2 + 0x6c);
    }
    else {
      (*(code *)PTR_EWLmemset_00046578)(*(undefined4 *)(param_2 + 0x90),0,iVar3);
      iVar8 = *(int *)(param_2 + 0x6c);
    }
    if (iVar8 != 0) {
      (*(code *)PTR_EWLmemset_00046578)(*(undefined4 *)(param_2 + 0xa0),0,iVar3 * 4);
    }
    *(undefined4 *)(param_2 + 0xa8) = 0;
    *(undefined4 *)(param_2 + 0x98) = 0;
    *(undefined4 *)(param_2 + 0x9c) = 0;
    *(undefined4 *)(param_2 + 100) = 999;
    *(undefined4 *)(param_2 + 0x6c) = 0;
    return;
  }
  if ((*(int *)(param_2 + 0x60) != 0) &&
     (*(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + 1, 0 < iVar3)) {
    iVar5 = 0;
    do {
      iVar6 = (*(code *)PTR_EncAsicGetMvOutput_00046534)(param_1,iVar5);
      iVar9 = (int)*(short *)(iVar6 + 8);
      iVar6 = (int)*(char *)(iVar6 + 4);
      piVar10 = (int *)(*(int *)(param_2 + 0xa0) + iVar5 * 4);
      if (iVar9 < 0) {
        iVar9 = -iVar9;
      }
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      iVar5 = iVar5 + 1;
      *piVar10 = *piVar10 + iVar9 + iVar6;
    } while (iVar5 != iVar3);
  }
  if (*(uint *)(param_2 + 100) < 10) {
    *(uint *)(param_2 + 100) = *(uint *)(param_2 + 100) + 1;
    *(undefined4 *)(param_2 + 0xa8) = 0;
    return;
  }
  (*(code *)(PTR_LAB_00046400 + -0x7330))(param_2,param_1);
  if (iVar3 < 1) {
    local_70 = 0;
  }
  else {
    iVar5 = 0;
    local_70 = 0;
    puVar12 = puVar27;
    do {
      iVar6 = (*(code *)PTR_EncAsicGetMvOutput_00046534)(param_1,iVar5);
      uVar16 = (uint)*(byte *)(iVar6 + 0x1d);
      iVar9 = *(int *)(param_2 + 0x5c);
      if ((((uVar16 - 0x28 < 0xb5) &&
           (iVar24 = (uint)*(byte *)(iVar6 + 0x1e) + *(int *)(param_2 + 0x70),
           2 < *(byte *)(iVar6 + 0x1c))) &&
          (iVar6 = (uint)*(byte *)(iVar6 + 0x1f) + *(int *)(param_2 + 0x74), 0xf8 < iVar24 + iVar6))
         && ((int)((100 - uVar16 / 10) - iVar9) <= iVar24)) {
        iVar17 = iVar24 * 3;
        if (iVar17 < 0) {
          iVar17 = iVar17 + 3;
        }
        if (((0xfa < iVar6 + (iVar17 >> 2)) || (iVar9 / 2 + 0x80 < iVar24)) ||
           (iVar6 - iVar24 < (int)((uVar16 / 10 + 2) - (int)(iVar9 * uVar16) / 100)))
        goto LAB_000196a0;
        *puVar12 = 1;
        local_70 = local_70 + 1;
      }
      else {
LAB_000196a0:
        *puVar12 = 0;
      }
      iVar5 = iVar5 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar5 != iVar3);
  }
  iVar5 = uVar23 * uVar18;
  uVar16 = (uVar19 << 1) / 3;
  if ((int)uVar18 < iVar5) {
    puVar12 = (undefined1 *)(iVar8 + uVar18);
    do {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    } while (puVar12 != (undefined1 *)(iVar8 + iVar5));
  }
  if ((int)uVar23 < (int)(uVar19 - uVar23)) {
    iVar9 = iVar8 + iVar21 + iVar5;
    iVar6 = 0;
    uVar22 = uVar23;
    do {
      if (iVar21 < (int)(uVar18 - iVar21)) {
        iVar17 = 0;
        iVar24 = iVar21 << 1;
        do {
          iVar7 = 0;
          if (iVar6 <= (int)(uVar22 + uVar23)) {
            pbVar11 = puVar27 + iVar17;
            iVar13 = iVar6;
            do {
              if (iVar17 <= iVar24) {
                pbVar25 = pbVar11;
                do {
                  bVar1 = *pbVar25;
                  pbVar25 = pbVar25 + 1;
                  iVar7 = iVar7 + (uint)bVar1;
                } while (pbVar25 != pbVar11 + ((iVar24 + 1) - iVar17));
              }
              iVar13 = iVar13 + 1;
              pbVar11 = pbVar11 + uVar18;
            } while (uVar23 + 1 + uVar22 != iVar13);
          }
          iVar24 = iVar24 + 1;
          iVar13 = (uVar16 * 3 - uVar23) - iVar6;
          if ((int)uVar22 < (int)(uVar19 / 3)) {
            iVar13 = uVar22 + uVar16 * 2;
          }
          iVar7 = (iVar7 * iVar13) / (int)uVar19;
          if (uVar19 == 0) {
            trap(0x1c00);
          }
          puVar12 = (undefined1 *)(iVar9 + iVar17);
          iVar17 = iVar17 + 1;
          if (0xff < iVar7) {
            iVar7 = 0xff;
          }
          *puVar12 = (char)iVar7;
        } while (iVar17 != (uVar18 - iVar21) - iVar21);
      }
      uVar22 = uVar22 + 1;
      iVar6 = iVar6 + 1;
      iVar9 = iVar9 + uVar18;
      puVar27 = puVar27 + uVar18;
    } while (uVar22 != uVar19 - uVar23);
  }
  local_60 = iVar21 * 2;
  uVar19 = iVar3 - uVar18;
  iVar6 = iVar3 - iVar5;
  if (iVar6 < (int)uVar19) {
    puVar27 = (undefined1 *)(iVar8 + iVar6);
    do {
      *puVar27 = 0;
      puVar27 = puVar27 + 1;
    } while (puVar27 != (undefined1 *)(iVar8 + uVar19));
  }
  iVar8 = (((int)((uVar23 * 4 + 2) * (local_60 + 1)) / 3) * 4) / 3;
  if (local_70 != 0) {
    if (local_70 == 0) {
      trap(0x1c00);
    }
    iVar9 = iVar8 - ((iVar8 * iVar3) / local_70) / 200;
    iVar8 = 1;
    if (0 < iVar9) {
      iVar8 = iVar9;
    }
  }
  iVar9 = *(int *)(param_2 + 0x60);
  iVar24 = *(int *)(param_2 + 0x88);
  if (0 < iVar9) {
    iVar8 = iVar8 + iVar9;
  }
  if ((int)uVar18 < (int)uVar19) {
    iVar17 = uVar18 << 2;
    uVar16 = uVar18;
    do {
      puVar27 = (undefined1 *)(*(int *)(param_2 + 0xa4) + uVar16);
      if (iVar9 < 0) {
        if (*(uint *)(param_2 + 0x6c) < 3) goto LAB_000199e4;
        uVar22 = 0;
        if ((int)(iVar9 * -*(uint *)(param_2 + 0x6c)) <= *(int *)(*(int *)(param_2 + 0xa0) + iVar17)
           ) goto LAB_00019978;
        *puVar27 = 0;
        *(bool *)(iVar24 + uVar16) =
             iVar8 <= (int)(uint)*(byte *)(*(int *)(param_2 + 0xa4) + uVar16);
      }
      else {
        if (iVar9 == 0) {
LAB_000199e4:
          uVar22 = 0;
        }
        else {
          uVar14 = *(uint *)(param_2 + 0x6c);
          if (uVar14 == 0) goto LAB_000199e4;
          uVar15 = *(uint *)(*(int *)(param_2 + 0xa0) + iVar17);
          uVar22 = 0;
          if (((int)(iVar9 * uVar14) < (int)uVar15) && (uVar22 = uVar15 / uVar14, uVar14 == 0)) {
            trap(0x1c00);
          }
        }
LAB_00019978:
        iVar9 = *(byte *)(*(int *)(param_2 + 0x84) + uVar16) + uVar22;
        if (0xff < iVar9) {
          iVar9 = 0xff;
        }
        *puVar27 = (char)iVar9;
        *(bool *)(iVar24 + uVar16) =
             iVar8 <= (int)(uint)*(byte *)(*(int *)(param_2 + 0xa4) + uVar16);
      }
      if (uVar16 + 1 == uVar19) goto LAB_00019abc;
      iVar17 = iVar17 + 4;
      uVar16 = uVar16 + 1;
      iVar9 = *(int *)(param_2 + 0x60);
    } while( true );
  }
  iVar9 = 0;
  iVar7 = 0;
  uVar19 = *(int *)(param_2 + 100) + 0x46;
  iVar8 = 0;
  *(undefined4 *)(param_2 + 0x94) = 0;
  if (0x5f < uVar19) {
    uVar19 = 0x5f;
  }
  iVar17 = *(int *)(param_2 + 0x98);
  if (-1 < iVar3 / 3) goto LAB_00019c38;
LAB_00019b6c:
  if (iVar8 < (int)(iVar17 * uVar19) / 100) {
    if (iVar7 != 0) {
      (*(code *)PTR_EWLmemset_00046578)(iVar24,0,iVar3);
    }
    if (*(int *)(param_2 + 0x9c) != 0) {
      (*(code *)PTR_EWLmemset_00046578)(*(undefined4 *)(param_2 + 0x90),0,iVar3);
    }
    if (*(int *)(param_2 + 0x6c) != 0) {
      (*(code *)PTR_EWLmemset_00046578)(*(undefined4 *)(param_2 + 0xa0),0,iVar3 * 4);
    }
    *(undefined4 *)(param_2 + 100) = 999;
    *(undefined4 *)(param_2 + 0x94) = 0;
    *(undefined4 *)(param_2 + 0x9c) = 0;
    *(undefined4 *)(param_2 + 0x6c) = 0;
    *(undefined4 *)(param_2 + 0xa8) = 1;
    return;
  }
LAB_00019b9c:
  (*(code *)PTR_EWLmemcpy_00046444)(iVar24,*(undefined4 *)(param_2 + 0x8c),iVar3);
  *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_2 + 0x98);
  *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
  *(undefined4 *)(param_2 + 0xa8) = 0;
  return;
LAB_00019abc:
  pbVar11 = (byte *)(iVar24 + uVar18);
  do {
    pbVar25 = pbVar11 + 1;
    *pbVar11 = 1 < (uint)pbVar11[-1] + (uint)*pbVar11 + (uint)*pbVar25;
    pbVar11 = pbVar25;
  } while (pbVar25 != (byte *)(iVar24 + uVar19));
  iVar24 = *(int *)(param_2 + 0x88);
  iVar8 = 0;
  iVar9 = 0;
  uVar16 = uVar18;
  do {
    if ((*(char *)(iVar24 + uVar16) != '\0') &&
       (iVar9 = iVar9 + 1, *(char *)(*(int *)(param_2 + 0x8c) + uVar16) != '\0')) {
      iVar8 = iVar8 + 1;
    }
    uVar16 = uVar16 + 1;
  } while (uVar16 != uVar19);
  uVar19 = *(int *)(param_2 + 100) + 0x46;
  *(int *)(param_2 + 0x94) = iVar9;
  iVar17 = *(int *)(param_2 + 0x98);
  if (0x5f < uVar19) {
    uVar19 = 0x5f;
  }
  iVar7 = iVar9;
  if (iVar9 <= iVar3 / 3) {
LAB_00019c38:
    if ((iVar8 < (int)(iVar9 * uVar19) / 100) || (iVar8 < (int)(iVar17 * uVar19) / 100)) {
      *(undefined4 *)(param_2 + 100) = 1;
      if (*(int *)(param_2 + 0x6c) != 0) {
        (*(code *)PTR_EWLmemset_00046578)(*(undefined4 *)(param_2 + 0xa0),0,iVar3 * 4);
      }
      puVar4 = PTR_EWLmemset_00046578;
      *(undefined4 *)(param_2 + 0x6c) = 0;
      (*(code *)puVar4)(*(undefined4 *)(param_2 + 0x90),0,iVar3);
      iVar5 = iVar21 + iVar5;
      if (iVar5 < iVar6 - iVar21) {
        do {
          if (*(char *)(*(int *)(param_2 + 0x88) + iVar5) != '\0') {
            iVar9 = 0;
            iVar24 = 0;
            iVar8 = iVar5;
            do {
              iVar13 = 0;
              iVar17 = iVar8;
              iVar7 = iVar8;
              do {
                iVar13 = iVar13 + 1;
                *(undefined1 *)(*(int *)(param_2 + 0x90) + iVar9 + iVar17) = 1;
                puVar27 = (undefined1 *)(*(int *)(param_2 + 0x90) + iVar17);
                iVar17 = iVar17 + uVar18;
                *puVar27 = 1;
                *(undefined1 *)(*(int *)(param_2 + 0x90) + iVar7 + iVar9) = 1;
                puVar27 = (undefined1 *)(*(int *)(param_2 + 0x90) + iVar7);
                iVar7 = iVar7 - uVar18;
                *puVar27 = 1;
              } while (iVar13 <= (int)uVar23);
              iVar24 = iVar24 + 1;
              iVar8 = iVar8 + -1;
              iVar9 = iVar9 + 2;
            } while (iVar24 <= iVar21);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 != iVar6 - iVar21);
      }
      iVar8 = 0;
      local_64 = 0;
      if (0 < iVar3) {
        pcVar26 = *(char **)(param_2 + 0x90);
        pcVar20 = pcVar26 + iVar3;
        do {
          cVar2 = *pcVar26;
          pcVar26 = pcVar26 + 1;
          if (cVar2 != '\0') {
            iVar8 = iVar8 + 1;
          }
          local_64 = iVar8;
        } while (pcVar26 != pcVar20);
      }
      *(int *)(param_2 + 0x9c) = local_64;
      *(undefined4 *)(param_2 + 0xa8) = 1;
      return;
    }
    goto LAB_00019b9c;
  }
  goto LAB_00019b6c;
}



// ==== EncPreProcess @ 00019eb0 size=964

void EncPreProcess(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar2 = param_2[6];
  uVar11 = *param_2 + 0xfU & 0xfffffff0;
  if (param_2[0x2c] != 0) {
    uVar1 = uVar2 + uVar11;
    uVar11 = uVar11 << 1;
    if (param_2[0x2d] != 0) {
      uVar2 = uVar1;
    }
  }
  uVar1 = param_2[8];
  if (uVar1 < 3) {
    uVar3 = param_2[7];
    iVar7 = param_2[10];
    uVar4 = uVar11 * uVar3 + uVar2;
    uVar6 = uVar4 & 0xfffffff8;
    *(uint *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + uVar6;
    *(uint *)(param_1 + 0xa88) = uVar4 & 7;
    if (iVar7 != 0) {
      *(uint *)(param_1 + 0xa9c) = *(int *)(param_1 + 0xa9c) + uVar6;
    }
    uVar3 = uVar3 >> 1;
    if (uVar1 == 0) {
      uVar2 = (uVar11 >> 1) * uVar3 + (uVar2 >> 1);
      uVar3 = uVar2 & 0xfffffff8;
      *(uint *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + uVar3;
      *(uint *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + uVar3;
      *(uint *)(param_1 + 0xa90) = uVar2 & 7;
    }
    else {
      uVar2 = ((uVar11 >> 1) * uVar3 + (uVar2 >> 1)) * 2;
      *(uint *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + (uVar2 & 0xfffffff8);
      *(uint *)(param_1 + 0xa90) = uVar2 & 7;
    }
LAB_00019f78:
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(PTR_DAT_000463fc + uVar1 * 4 + -0x73dc);
    if (uVar1 == 2) goto LAB_0001a164;
LAB_00019f9c:
    iVar9 = param_2[4];
    iVar8 = param_2[5];
    iVar5 = param_2[9];
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    *(int *)(param_1 + 0x7c) = iVar5;
    if (iVar8 * iVar9 == 0) goto H264MaxMBPS;
LAB_00019fc0:
    uVar3 = uVar1 + 0xf;
    if (param_2[0xb] != 0) {
      uVar3 = uVar3 >> 4;
      *(int *)(param_1 + 0xe74) = iVar9;
      *(int *)(param_1 + 0xe78) = iVar8;
      uVar4 = uVar2 + 0xf >> 4;
      uVar6 = iVar9 << 0x10;
      if (iVar5 == 0) {
        if (uVar1 == 0) {
          trap(0x1c00);
        }
        uVar12 = (uint)(iVar8 << 0x10) / uVar2;
        if (uVar2 == 0) {
          trap(0x1c00);
        }
        uVar6 = (uVar6 / uVar1 + 1) * uVar3 * 0x10 & 0xfff0000;
        if (uVar3 == 0) {
          trap(0x1c00);
        }
      }
      else {
        if (uVar3 == 0) {
          trap(0x1c00);
        }
        uVar12 = (uint)(iVar8 << 0x10) / (uVar4 << 4);
        if (uVar4 == 0) {
          trap(0x1c00);
        }
      }
      uVar6 = uVar6 / (uVar3 * 0x10) + 1;
      uVar12 = uVar12 + 1;
      if (0x10000 < uVar12) {
        uVar12 = 0x10000;
      }
      uVar10 = 0x10000;
      if (uVar6 < 0x10001) {
        uVar10 = uVar6;
      }
      *(uint *)(param_1 + 0xe80) = uVar12;
      *(uint *)(param_1 + 0xe7c) = uVar10;
      goto LAB_0001a05c;
    }
  }
  else {
    iVar5 = uVar11 * param_2[7] + uVar2;
    iVar7 = param_2[10];
    if (10 < uVar1) {
      uVar2 = iVar5 * 4;
      uVar3 = uVar2 & 0xfffffff8;
      *(uint *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + uVar3;
      *(uint *)(param_1 + 0xa88) = (uVar2 & 7) >> 1;
      if (iVar7 != 0) {
        *(uint *)(param_1 + 0xa9c) = *(int *)(param_1 + 0xa9c) + uVar3;
      }
      goto LAB_00019f78;
    }
    uVar2 = iVar5 * 2;
    *(uint *)(param_1 + 0xa88) = uVar2 & 7;
    *(uint *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + (uVar2 & 0xfffffff8);
    *(uint *)(param_1 + 0xa90) = uVar2 & 4;
    if (iVar7 == 0) goto LAB_00019f78;
    *(uint *)(param_1 + 0xa9c) = *(int *)(param_1 + 0xa9c) + (uVar2 & 0xfffffff8);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(PTR_DAT_000463fc + uVar1 * 4 + -0x73dc);
    if (uVar1 != 2) goto LAB_00019f9c;
LAB_0001a164:
    iVar9 = param_2[4];
    iVar8 = param_2[5];
    iVar5 = param_2[9];
    *(undefined4 *)(param_1 + 0x70) = 1;
    uVar2 = param_2[3];
    uVar1 = param_2[2];
    *(int *)(param_1 + 0x7c) = iVar5;
    if (iVar8 * iVar9 != 0) goto LAB_00019fc0;
H264MaxMBPS:
    uVar3 = uVar1 + 0xf;
  }
  *(undefined4 *)(param_1 + 0xe78) = 0;
  uVar3 = uVar3 >> 4;
  *(undefined4 *)(param_1 + 0xe74) = 0;
  uVar4 = uVar2 + 0xf >> 4;
  *(undefined4 *)(param_1 + 0xe80) = 0;
  *(undefined4 *)(param_1 + 0xe7c) = 0;
LAB_0001a05c:
  uVar6 = uVar1;
  uVar12 = uVar3;
  if (iVar5 == 0) {
    uVar6 = uVar2;
    uVar2 = uVar1;
    uVar12 = uVar4;
    uVar4 = uVar3;
  }
  *(uint *)(param_1 + 0x18) = uVar4;
  *(uint *)(param_1 + 0x14) = uVar12;
  *(uint *)(param_1 + 0x38) = uVar11;
  if ((uVar2 & 0xf) == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  else {
    *(uint *)(param_1 + 0x3c) = 0x10 - (uVar2 & 0xf) >> 2;
  }
  if ((uVar6 & 0xf) == 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  else {
    *(uint *)(param_1 + 0x40) = 0x10 - (uVar6 & 0xf);
  }
  if ((*(int *)(param_1 + 0x34) == 2) || (iVar7 == 0)) {
    *(undefined4 *)(param_1 + 0xaa0) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xaa0) = 2;
  }
  if ((param_2[0x12] == 0) && (param_2[0x13] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001a220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_EncAdaptiveROI_00046680)();
    return;
  }
  return;
}



// ==== float2fixpoint @ 0001a280 size=88

uint float2fixpoint(float param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar2 = 0x10;
  fVar4 = *(float *)(PTR_DAT_000463fc + -0x6cc0);
  fVar3 = *(float *)(PTR_DAT_000463fc + -0x6cbc);
  uVar1 = 0;
  do {
    iVar2 = iVar2 + -1;
    fVar3 = fVar3 + fVar3;
    uVar1 = uVar1 << 1;
    if (fVar4 <= param_1) {
      param_1 = param_1 - fVar4;
      uVar1 = uVar1 | 1;
    }
    fVar4 = *(float *)(PTR_DAT_000463fc + -0x6cb8) / fVar3;
  } while (iVar2 != 0);
  return uVar1;
}



// ==== H264CodeFrame @ 0001a2d8 size=4840

/* WARNING: Control flow encountered bad instruction data */

undefined4 H264CodeFrame(int param_1)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iVar22;
  byte *pbVar23;
  uint uVar24;
  int iVar25;
  undefined4 *puVar26;
  uint uVar27;
  undefined4 uVar28;
  uint local_58;
  uint local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40 [4];
  int *local_30;
  int local_2c;
  
  uVar3 = *(uint *)(param_1 + 0x44);
  local_2c = param_1 + 0x920;
  local_4c = *(undefined4 *)(param_1 + 0x2d00);
  local_48 = *(undefined4 *)(param_1 + 0x2d04);
  uVar4 = uVar3 & 7;
  local_50 = *(int *)(param_1 + 0x2cd8) + *(int *)(param_1 + 0x2cf4) * 4;
  local_58 = 0;
  local_54 = 0;
  *(uint *)(param_1 + 0x9a4) = *(int *)(param_1 + 0x9a4) - uVar3 >> 3 & 0xfffffff8;
  *(uint *)(param_1 + 0x9a0) = *(int *)(param_1 + 0x9a0) + (uVar3 & 0xfffffff8);
  *(uint *)(param_1 + 0x9a8) = uVar4 << 3;
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x9b0) = 0;
    *(undefined4 *)(param_1 + 0x9ac) = 0;
LAB_0001a448:
    uVar3 = *(uint *)(param_1 + 0x20);
    if (uVar3 < 2) goto LAB_0001a428;
LAB_0001a458:
    uVar4 = *(uint *)(param_1 + 0x21c);
    *(uint *)(param_1 + 0x96c) = uVar4 >> 1;
  }
  else {
    pbVar5 = (byte *)(*(uint *)(param_1 + 0x3c) & 0xfffffff8);
    uVar3 = 6;
    if (uVar4 == 7) {
      *(uint *)(param_1 + 0x9ac) =
           (uint)*pbVar5 << 0x18 | (uint)pbVar5[1] << 0x10 | (uint)pbVar5[3] | (uint)pbVar5[2] << 8;
      bVar1 = pbVar5[5];
    }
    else {
      do {
        pbVar23 = pbVar5 + uVar3;
        uVar3 = uVar3 - 1;
        *pbVar23 = 0;
      } while (*(uint *)(param_1 + 0x9a8) >> 3 <= uVar3);
      *(uint *)(param_1 + 0x9ac) =
           (uint)*pbVar5 << 0x18 | (uint)pbVar5[1] << 0x10 | (uint)pbVar5[3] | (uint)pbVar5[2] << 8;
      if (*(uint *)(param_1 + 0x9a8) < 0x21) {
        *(undefined4 *)(param_1 + 0x9b0) = 0;
        goto LAB_0001a448;
      }
      bVar1 = pbVar5[5];
    }
    uVar3 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x9b0) =
         (uint)bVar1 << 0x10 | (uint)pbVar5[4] << 0x18 | (uint)pbVar5[6] << 8;
    if (1 < uVar3) goto LAB_0001a458;
LAB_0001a428:
    if (*(int *)(param_1 + 0x10) != 0) goto LAB_0001a458;
    uVar4 = *(uint *)(param_1 + 0x21c);
    *(uint *)(param_1 + 0x96c) = uVar4;
  }
  uVar16 = *(uint *)(param_1 + 8);
  if (uVar16 == 0) {
    trap(0x1c00);
  }
  *(int *)(param_1 + 0x970) = *(int *)(param_1 + 0x1e4) + 0x1a;
  local_44 = *(int *)(param_1 + 0x3a8) >> 8;
  iVar12 = *(int *)(param_1 + 0x13c8);
  *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(param_1 + 0x224);
  *(undefined4 *)(param_1 + 0x98c) = *(undefined4 *)(param_1 + 0x1ec);
  *(uint *)(param_1 + 0x9c0) = (uint)(*(uint *)(param_1 + 0x208) != 0);
  *(int *)(param_1 + 0x93c) = local_44;
  *(uint *)(param_1 + 0x994) = *(uint *)(param_1 + 0x208) / uVar16;
  if (iVar12 == 0x48317011) {
    *(int *)(param_1 + 0x2960) = (*(int *)(param_1 + 0x3a8) + local_44 * -0x100) * 0x100;
  }
  iVar14 = *(int *)(param_1 + 0x3ac) >> 8;
  iVar8 = *(int *)(param_1 + 0x3b0) >> 8;
  *(int *)(param_1 + 0x940) = iVar14;
  *(int *)(param_1 + 0x944) = iVar8;
  *(undefined4 *)(param_1 + 0xa34) = 0;
  *(int *)(param_1 + 0x97c) = *(int *)(param_1 + 0x22c);
  if (*(int *)(param_1 + 0x22c) == 1) {
    *(undefined4 *)(param_1 + 0x974) = 0;
    *(undefined4 *)(param_1 + 0x978) = 0;
  }
  else {
    *(int *)(param_1 + 0x974) = *(int *)(param_1 + 0x230) / 2;
    *(int *)(param_1 + 0x978) = *(int *)(param_1 + 0x234) / 2;
  }
  iVar9 = *(int *)(param_1 + 0x200);
  *(undefined4 *)(param_1 + 0x980) = *(undefined4 *)(param_1 + 0x1fc);
  if (iVar9 == 2) {
    iVar17 = *(int *)(param_1 + 0x20c);
    *(uint *)(param_1 + 0x964) = (uint)(iVar17 != 2);
    *(uint *)(param_1 + 0x984) = (uint)(iVar17 != 2);
LAB_0001ac24:
    *(undefined4 *)(param_1 + 0x988) = *(undefined4 *)(param_1 + 0x238);
    *(uint *)(param_1 + 0x948) = (uint)(*(int *)(param_1 + 500) == 1);
    if (iVar17 != 2) goto LAB_0001a568;
LAB_0001ac48:
    if (*(int *)(param_1 + 0x210) != 5) goto LAB_0001a568;
    *(undefined4 *)(param_1 + 0x950) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x964) = 0;
    *(int *)(param_1 + 0x984) = iVar9;
    iVar17 = *(int *)(param_1 + 0x20c);
    if (iVar9 != 0) goto LAB_0001ac24;
    *(uint *)(param_1 + 0x948) = (uint)(*(int *)(param_1 + 500) == 1);
    if (iVar17 == 2) goto LAB_0001ac48;
LAB_0001a568:
    if (uVar3 < 2) {
LAB_0001aa74:
      *(undefined4 *)(param_1 + 0x950) = 0;
    }
    else {
      if (*(int *)(param_1 + 0x24) == 1) {
        if ((uVar4 & 1) == 0) goto LAB_0001aa74;
        if (uVar4 != 1) {
          *(undefined4 *)(param_1 + 0x950) = 3;
          goto joined_r0x0001aa80;
        }
      }
      else if ((uVar4 & 1) == 0) goto LAB_0001aa74;
      *(undefined4 *)(param_1 + 0x950) = 2;
    }
  }
joined_r0x0001aa80:
  if (iVar12 == 0x48317011) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(param_1 + 0x1414) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x140c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x1410) = *(undefined4 *)(param_1 + 0x30);
  if ((iVar17 == 2) && (*(int *)(param_1 + 0x210) == 1)) {
    *(undefined4 *)(param_1 + 0x1414) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1410) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x140c) = 0xffffffff;
  }
  if (((1 < uVar3) && (*(int *)(param_1 + 0x24) == 1)) && ((uVar4 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x9c8) = 1;
  }
  if ((*(int *)(param_1 + 0x23c) == 0) ||
     ((*(int *)(param_1 + 0x23c) == 1 && (0x1fe0 < *(uint *)(param_1 + 4))))) {
    iVar9 = *(int *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 0x13b8) = 1;
    *(undefined4 *)(param_1 + 0x1660) = 1;
    if (iVar9 == 0) goto LAB_0001ac08;
LAB_0001a6b8:
    iVar17 = 10 - local_44;
    iVar10 = (local_44 + -0x33) * 2;
    if (0 < iVar17) {
      iVar17 = 0;
    }
    if (iVar17 <= iVar10) {
      iVar17 = iVar10;
    }
    if (iVar17 < iVar9) {
      iVar17 = iVar9;
    }
  }
  else {
    iVar9 = *(int *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 0x13b8) = 0;
    *(undefined4 *)(param_1 + 0x1660) = 1;
    if (iVar9 != 0) goto LAB_0001a6b8;
LAB_0001ac08:
    iVar17 = 0;
  }
  iVar10 = *(int *)(param_1 + 0xb4);
  if ((iVar10 == 0) || (iVar12 != 0x48317011)) {
    if ((iVar9 != 0) && ((*(int *)(param_1 + 0x114) != 0 || (*(int *)(param_1 + 0x1450) != 0)))) {
      puVar18 = *(uint **)(param_1 + 0x2cc8);
      if (*(int *)(param_1 + 0x108) == 0) {
        *(undefined4 *)(param_1 + 0x1624) = 0;
        *(undefined4 *)(param_1 + 0x118) = 1;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0xc);
        *(undefined4 *)(param_1 + 0x1624) = 1;
        *(undefined4 *)(param_1 + 0x1628) = 1;
        if (uVar3 == 0) {
          *puVar18 = 0;
          iVar12 = *(int *)(param_1 + 0x13c8);
          iVar10 = *(int *)(param_1 + 0xb4);
        }
        else {
          uVar27 = 0;
          uVar4 = 0;
          uVar11 = 0;
          do {
            if (uVar16 != 0) {
              iVar12 = *(int *)(param_1 + 0xfc);
              uVar24 = 0;
              uVar3 = uVar4;
LAB_0001a784:
              do {
                uVar6 = uVar3;
                iVar9 = 0;
                if (*(char *)(iVar12 + uVar4 + uVar24) != '\0') {
                  iVar9 = 3;
                }
                if ((((*(uint *)(param_1 + 0x142c) <= uVar24) &&
                     (uVar24 <= *(uint *)(param_1 + 0x1434))) &&
                    (*(uint *)(param_1 + 0x1428) <= uVar27)) &&
                   (uVar27 <= *(uint *)(param_1 + 0x1430))) {
                  iVar9 = 1;
                }
                if (uVar24 < *(uint *)(param_1 + 0x143c)) {
LAB_0001a80c:
                  uVar3 = ~uVar4 - uVar24;
                }
                else {
                  uVar3 = ~uVar4 - uVar24;
                  if ((uVar24 <= *(uint *)(param_1 + 0x1444)) &&
                     (*(uint *)(param_1 + 0x1438) <= uVar27)) {
                    if (uVar27 <= *(uint *)(param_1 + 0x1440)) {
                      iVar9 = 2;
                    }
                    goto LAB_0001a80c;
                  }
                }
                uVar11 = uVar11 | iVar9 << ((uVar3 & 7) << 2);
                if ((uVar6 & 7) == 7) {
                  *puVar18 = uVar11;
                  uVar24 = uVar24 + 1;
                  uVar16 = *(uint *)(param_1 + 8);
                  puVar18 = puVar18 + 1;
                  uVar11 = 0;
                  uVar3 = uVar6 + 1;
                  if (uVar16 <= uVar24) break;
                  goto LAB_0001a784;
                }
                uVar24 = uVar24 + 1;
                uVar3 = uVar6 + 1;
              } while (uVar24 < uVar16);
              uVar4 = uVar6 + 1;
              uVar3 = *(uint *)(param_1 + 0xc);
            }
            uVar27 = uVar27 + 1;
          } while (uVar27 < uVar3);
          *puVar18 = uVar11;
          iVar12 = *(int *)(param_1 + 0x13c8);
          iVar10 = *(int *)(param_1 + 0xb4);
        }
        *(undefined4 *)(param_1 + 0x118) = 1;
      }
    }
    *(undefined4 *)(param_1 + 0x1450) = 0;
    if (*(int *)(param_1 + 0x36c) == 0) {
      if ((iVar10 != 0) && (iVar12 == 0x48317011)) goto LAB_0001ab38;
    }
    else if (iVar12 == 0x48317011) {
      if ((iVar10 != 0) || ((*(int *)(param_1 + 0xb8) != 0 && (*(int *)(param_1 + 0x1624) != 0))))
      goto LAB_0001ac94;
      *(undefined4 *)(param_1 + 0x13cc) = 0;
      iVar9 = 0;
      *(undefined4 *)(param_1 + 0x13d0) = 0;
      iVar25 = 0;
      *(undefined4 *)(param_1 + 0x13d4) = 0;
      iVar10 = 0;
      goto LAB_0001ad14;
    }
    if ((*(int *)(param_1 + 0xb8) == 0) || (iVar9 = -local_44, *(int *)(param_1 + 0x1624) == 0)) {
      iVar17 = *(int *)(param_1 + 0x778);
      iVar9 = iVar14 - local_44;
      if (iVar17 < iVar9) {
        iVar17 = *(int *)(param_1 + 0x77c);
        *(int *)(param_1 + 0x13cc) = iVar9;
        iVar10 = iVar9;
      }
      else {
        iVar10 = iVar8 - local_44;
        if (iVar17 < iVar8 - local_44) {
          iVar10 = iVar17;
        }
        iVar17 = *(int *)(param_1 + 0x77c);
        *(int *)(param_1 + 0x13cc) = iVar10;
      }
      iVar25 = iVar9;
      if ((iVar9 <= iVar17) && (iVar25 = iVar8 - local_44, iVar17 < iVar8 - local_44)) {
        iVar25 = iVar17;
      }
      iVar17 = *(int *)(param_1 + 0x780);
      *(int *)(param_1 + 0x13d0) = iVar25;
      if ((iVar9 <= iVar17) && (iVar9 = iVar8 - local_44, iVar17 < iVar8 - local_44)) {
        iVar9 = iVar17;
      }
    }
    else {
      iVar10 = -*(int *)(param_1 + 0x1448);
      iVar25 = iVar9;
      if ((iVar9 <= iVar10) && (iVar25 = 0x33 - local_44, iVar10 < 0x33 - local_44)) {
        iVar25 = iVar10;
      }
      iVar19 = 7;
      if (iVar25 < 8) {
        iVar19 = iVar25;
      }
      iVar22 = -*(int *)(param_1 + 0x144c);
      iVar10 = -8;
      if (-9 < iVar19) {
        iVar10 = iVar19;
      }
      *(int *)(param_1 + 0x13cc) = iVar10;
      iVar25 = iVar9;
      if ((iVar9 <= iVar22) && (iVar25 = 0x33 - local_44, iVar22 < 0x33 - local_44)) {
        iVar25 = iVar22;
      }
      *(int *)(param_1 + 0x13d0) = iVar25;
      if ((iVar9 <= iVar17) && (iVar9 = 0x33 - local_44, iVar17 <= 0x33 - local_44)) {
        iVar9 = iVar17;
      }
    }
    *(int *)(param_1 + 0x13d4) = iVar9;
  }
  else {
    *(undefined4 *)(param_1 + 0x1624) = 1;
    *(undefined4 *)(param_1 + 0x1450) = 0;
    if (*(int *)(param_1 + 0x36c) == 0) {
LAB_0001ab38:
      iVar17 = *(int *)(param_1 + 0xbc);
      iVar9 = -local_44;
      iVar12 = iVar9;
      if ((iVar9 <= iVar17) && (iVar12 = 0x33 - local_44, iVar17 < 0x33 - local_44)) {
        iVar12 = iVar17;
      }
      iVar17 = 7;
      if (iVar12 < 8) {
        iVar17 = iVar12;
      }
      iVar12 = *(int *)(param_1 + 0xc0);
      iVar10 = -8;
      if (-9 < iVar17) {
        iVar10 = iVar17;
      }
      *(int *)(param_1 + 0x13cc) = iVar10;
      iVar25 = iVar9;
      if ((iVar9 <= iVar12) && (iVar25 = iVar12, 0x33 - local_44 <= iVar12)) {
        iVar25 = 0x33 - local_44;
      }
      iVar12 = *(int *)(param_1 + 0xc4);
      *(int *)(param_1 + 0x13d0) = iVar25;
      if ((iVar9 <= iVar12) && (iVar9 = iVar12, 0x33 - local_44 <= iVar12)) {
        iVar9 = 0x33 - local_44;
      }
      *(int *)(param_1 + 0x13d4) = iVar9;
      *(int *)(param_1 + 0xbc) = iVar10;
      iVar12 = 0x48317011;
      *(int *)(param_1 + 0xc0) = iVar25;
      *(int *)(param_1 + 0xc4) = iVar9;
      goto LAB_0001a920;
    }
LAB_0001ac94:
    iVar9 = *(int *)(param_1 + 0xbc);
    iVar17 = -local_44;
    if ((-local_44 <= iVar9) && (iVar17 = 0x33 - local_44, iVar9 < 0x33 - local_44)) {
      iVar17 = iVar9;
    }
    iVar25 = *(int *)(param_1 + 0xc0);
    iVar9 = *(int *)(param_1 + 0xc4);
    iVar19 = 7;
    if (iVar17 < 8) {
      iVar19 = iVar17;
    }
    if (0x1e < iVar25) {
      iVar25 = 0x1e;
    }
    if (0x1e < iVar9) {
      iVar9 = 0x1e;
    }
    iVar10 = -8;
    if (-9 < iVar19) {
      iVar10 = iVar19;
    }
    if (iVar9 < -0x1e) {
      iVar9 = -0x1e;
    }
    if (iVar25 < -0x1e) {
      iVar25 = -0x1e;
    }
    *(int *)(param_1 + 0x13cc) = iVar10;
    *(int *)(param_1 + 0x13d0) = iVar25;
    *(int *)(param_1 + 0x13d4) = iVar9;
LAB_0001ad14:
    *(int *)(param_1 + 0xbc) = iVar10;
    *(int *)(param_1 + 0xc0) = iVar25;
    *(int *)(param_1 + 0xc4) = iVar9;
  }
LAB_0001a920:
  puVar2 = PTR_DAT_000463fc;
  iVar19 = param_1 + 0x924;
  local_40[1] = local_44 + iVar25;
  local_40[0] = local_44 + iVar10;
  local_40[2] = local_44 + iVar9;
  local_30 = &local_44;
  iVar9 = 0;
  iVar17 = iVar19;
  iVar10 = local_44;
  do {
    iVar10 = iVar10 * 4;
    uVar16 = *(uint *)(PTR_DAT_000463fc + iVar10 + -0x71a0);
    uVar3 = *(uint *)(puVar2 + iVar10 + -0x70d0);
    iVar25 = iVar19 + (iVar17 - param_1);
    uVar28 = *(undefined4 *)(puVar2 + iVar10 + -0x7000);
    uVar4 = uVar3 >> 1;
    *(undefined4 *)(iVar25 + 0x5cc) = *(undefined4 *)(puVar2 + iVar10 + -0x6d90);
    uVar21 = *(undefined4 *)(puVar2 + iVar10 + -0x6e60);
    uVar20 = *(undefined4 *)(puVar2 + iVar10 + -0x6f30);
    iVar10 = (int)(uVar16 / 10 + 4) >> 3;
    *(undefined4 *)(iVar25 + 0x5e0) = uVar28;
    *(uint *)(iVar25 + 0x604) = uVar3;
    if (0xff < uVar4) {
      uVar4 = 0xff;
    }
    iVar22 = (int)((uVar3 << 2) / 5 + 4) >> 3;
    if (iVar10 == 0) {
      iVar10 = 1;
    }
    if (iVar22 == 0) {
      iVar22 = 1;
    }
    *(undefined4 *)(iVar25 + 0x5d0) = uVar21;
    iVar7 = iVar9 + 4;
    *(undefined4 *)(iVar25 + 0x5dc) = uVar20;
    iVar17 = iVar17 + 0x8c;
    *(int *)(iVar25 + 0x5fc) = iVar10;
    *(int *)(iVar25 + 0x600) = iVar22;
    *(undefined4 *)(iVar25 + 0x5f4) = 0;
    *(undefined4 *)(iVar25 + 0x5f0) = 0;
    *(undefined4 *)(iVar25 + 0x5ec) = 0;
    *(undefined4 *)(iVar25 + 0x5e8) = 0;
    *(undefined4 *)(iVar25 + 0x5f8) = 0;
    *(uint *)(iVar25 + 0x5e4) = uVar4;
    if (iVar12 == 0x48314810) {
      *(undefined4 *)(iVar25 + 0x5d8) = 0;
      *(undefined4 *)(iVar25 + 0x5d4) = 0;
      if (iVar7 == 0x10) goto LAB_0001ad30;
    }
    else if (iVar7 == 0x10) goto LAB_0001b058;
    iVar10 = *(int *)((int)local_40 + iVar9);
    iVar9 = iVar7;
  } while( true );
LAB_0001b26c:
  uVar20 = 4;
  if (iVar12 != -1) {
    uVar20 = 1;
  }
  (*(code *)PTR_EncAsicStop_000465bc)(*(undefined4 *)(param_1 + 0x920));
  (*(code *)PTR_EWLReleaseHw_0004652c)(*(undefined4 *)(param_1 + 0x920));
  goto LAB_0001b018;
LAB_0001b058:
  if (iVar12 == 0x48317011) {
    *(undefined4 *)(param_1 + 0x295c) = 0;
    *(undefined4 *)(param_1 + 0x296c) = *(undefined4 *)(param_1 + 0x8cc);
    if (local_44 < 0x25) {
      if (local_44 < 0xf) {
        *(int *)(param_1 + 0x2968) = 0xf - local_44;
      }
      else {
        *(undefined4 *)(param_1 + 0x2968) = 0;
      }
    }
    else {
      *(int *)(param_1 + 0x2968) = 0x24 - local_44;
    }
    if (*(int *)(param_1 + 0x36c) != 0) {
      iVar17 = iVar14 * 4;
      iVar12 = -*(int *)(param_1 + 0x2968);
      uVar3 = iVar12 + 0x11;
      iVar9 = local_44 + 0xf + *(int *)(param_1 + 0x2968);
      *(int *)(param_1 + 0x295c) = *(int *)(param_1 + 0x36c);
      do {
        iVar10 = 0x33;
        if (iVar9 < 0x34) {
          iVar10 = iVar9;
        }
        uVar4 = uVar3 & 0x1f;
        if (iVar10 < 0) {
          iVar10 = 0;
        }
        iVar25 = iVar8;
        if (iVar10 <= iVar8) {
          iVar25 = iVar10;
        }
        iVar25 = iVar25 * 4;
        if (iVar10 < iVar14) {
          uVar11 = *(uint *)(puVar2 + iVar17 + -0x70d0);
          iVar10 = param_1 + uVar4 * 0x8c;
          uVar21 = *(undefined4 *)(puVar2 + iVar17 + -0x6d90);
          *(undefined4 *)(iVar10 + 0x1818) = *(undefined4 *)(puVar2 + iVar17 + -0x6e60);
          uVar16 = uVar11 >> 1;
          uVar20 = *(undefined4 *)(puVar2 + iVar17 + -0x6f30);
          uVar28 = *(undefined4 *)(puVar2 + iVar17 + -0x7000);
          *(uint *)(iVar10 + 0x184c) = uVar11;
          *(undefined4 *)(iVar10 + 0x1814) = uVar21;
          *(undefined4 *)(iVar10 + 0x1824) = uVar20;
          *(undefined4 *)(iVar10 + 0x1828) = uVar28;
          *(undefined4 *)(iVar10 + 0x183c) = 0;
          *(undefined4 *)(iVar10 + 0x1838) = 0;
          *(undefined4 *)(iVar10 + 0x1834) = 0;
          *(undefined4 *)(iVar10 + 0x1830) = 0;
          if (0xff < uVar16) goto LAB_0001b1d0;
LAB_0001b12c:
          *(uint *)(param_1 + uVar4 * 0x8c + 0x182c) = uVar16;
        }
        else {
          iVar10 = param_1 + uVar4 * 0x8c;
          uVar11 = *(uint *)(puVar2 + iVar25 + -0x70d0);
          uVar28 = *(undefined4 *)(puVar2 + iVar25 + -0x6d90);
          *(undefined4 *)(iVar10 + 0x1818) = *(undefined4 *)(puVar2 + iVar25 + -0x6e60);
          uVar21 = *(undefined4 *)(puVar2 + iVar25 + -0x6f30);
          uVar16 = uVar11 >> 1;
          uVar20 = *(undefined4 *)(puVar2 + iVar25 + -0x7000);
          *(uint *)(iVar10 + 0x184c) = uVar11;
          *(undefined4 *)(iVar10 + 0x1814) = uVar28;
          *(undefined4 *)(iVar10 + 0x1824) = uVar21;
          *(undefined4 *)(iVar10 + 0x1828) = uVar20;
          *(undefined4 *)(iVar10 + 0x183c) = 0;
          *(undefined4 *)(iVar10 + 0x1838) = 0;
          *(undefined4 *)(iVar10 + 0x1834) = 0;
          *(undefined4 *)(iVar10 + 0x1830) = 0;
          if (uVar16 < 0x100) goto LAB_0001b12c;
LAB_0001b1d0:
          *(undefined4 *)(param_1 + uVar4 * 0x8c + 0x182c) = 0xff;
        }
        uVar3 = uVar3 + 1;
        iVar9 = iVar9 + -1;
      } while (uVar3 != iVar12 + 0x30U);
    }
  }
LAB_0001ad30:
  puVar2 = PTR_DAT_000463fc;
  *(undefined1 *)(param_1 + 0xacc) = 0;
  iVar9 = 0;
  piVar15 = (int *)(puVar2 + -0x739c);
  iVar12 = 1;
  puVar13 = (undefined1 *)(param_1 + 0xacd);
  while( true ) {
    uVar3 = 1;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (iVar12 >> (uVar4 & 0x1f) != 0);
    if ((int)(uVar4 << 1) < 0x101) {
      iVar12 = 1;
      if (iVar9 != 0) {
        iVar12 = iVar9 << 1;
      }
      uVar3 = 1;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (iVar12 >> (uVar4 & 0x1f) != 0);
      puVar13[0x7f] = (char)uVar4 * '\x02' + -1;
    }
    else {
      puVar13[0x7f] = 0xff;
    }
    if (iVar9 == 0x7f) break;
    iVar9 = iVar9 + 1;
    iVar17 = *piVar15;
    iVar12 = iVar9 * 2;
    piVar15 = piVar15 + 1;
    *puVar13 = (char)((iVar17 + 1) / 2);
    puVar13 = puVar13 + 1;
  }
  *(undefined4 *)(param_1 + 0x165c) = 10;
  *(int *)(param_1 + 0x9bc) =
       (*(int *)(param_1 + 0x2cf4) + *(int *)(param_1 + 0x2cf8)) * 4 + *(int *)(param_1 + 0x2ce0);
  if (*(int *)(param_1 + 0x1628) != 0) {
    uVar3 = *(int *)(param_1 + 4) + 0xfU >> 4;
    if (uVar3 != 0) {
      uVar4 = 0;
      puVar26 = *(undefined4 **)(param_1 + 0x2cc8);
      do {
        uVar4 = uVar4 + 2;
        uVar20 = puVar26[1];
        puVar26[1] = *puVar26;
        *puVar26 = uVar20;
        puVar26 = puVar26 + 2;
      } while (uVar4 < uVar3 << 1);
    }
  }
  if (*(int *)(param_1 + 0x1624) == 0) {
    iVar9 = *(int *)(param_1 + 0x910);
    iVar12 = *(int *)(param_1 + 0x914);
    iVar17 = *(int *)(param_1 + 0x918);
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    if (iVar12 < 0) {
      iVar12 = iVar12 + 0xff;
    }
    if (iVar17 < 0) {
      iVar17 = iVar17 + 0xff;
    }
    *(int *)(param_1 + 0x13d8) = iVar9 >> 8;
    *(int *)(param_1 + 0x13dc) = iVar12 >> 8;
    *(int *)(param_1 + 0x13e0) = iVar17 >> 8;
  }
  else {
    *(undefined4 *)(param_1 + 0x13e0) = 0;
    *(undefined4 *)(param_1 + 0x13dc) = 0;
    *(undefined4 *)(param_1 + 0x13d8) = 0;
  }
  *(undefined4 *)(param_1 + 0x13f0) = *(undefined4 *)(param_1 + 0x244);
  *(undefined4 *)(param_1 + 0x13f4) = *(undefined4 *)(param_1 + 0x248);
  *(undefined4 *)(param_1 + 0x13f8) = *(undefined4 *)(param_1 + 0x24c);
  *(undefined4 *)(param_1 + 0x13fc) = *(undefined4 *)(param_1 + 0x250);
  *(undefined4 *)(param_1 + 0x1400) = *(undefined4 *)(param_1 + 0x254);
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x17ac) = 1;
    *(uint *)(param_1 + 0x17b0) =
         (uint)((*(uint *)(param_1 + 0x21c) & 1) == *(uint *)(param_1 + 0x240));
    if (*(uint *)(param_1 + 0x21c) == 1) {
      *(uint *)(param_1 + 0x17b4) = 2 - *(uint *)(param_1 + 0x240);
    }
    else {
      *(undefined4 *)(param_1 + 0x17b4) = 0;
    }
  }
  *(uint *)(param_1 + 0x17b8) = (uint)(*(int *)(*(int *)(param_1 + 0x2f8c) + 0x34) == 1);
  if (local_44 < 0x2d) {
    *(undefined4 *)(param_1 + 0x17d8) = 1;
    iVar12 = *(int *)(param_1 + 0x13c8);
  }
  else {
    iVar12 = *(int *)(param_1 + 0x13c8);
    if (iVar12 == 0x48317011) {
      *(undefined4 *)(param_1 + 0x17d8) = 1;
    }
    else if (iVar12 == 0x48314810) {
      *(undefined4 *)(param_1 + 0x17d8) = 0;
    }
  }
  if (*(int *)(param_1 + 0x788) == 0) {
    *(undefined4 *)(param_1 + 0x17c0) = 0;
    *(undefined4 *)(param_1 + 0x17c4) = 0;
    *(undefined4 *)(param_1 + 0x17bc) = 0x34;
  }
  else {
    iVar9 = local_44;
    if (*(uint *)(param_1 + 0x21c) == (*(uint *)(param_1 + 0x21c) / 0xf) * 0xf) {
      iVar9 = local_44 + -8;
      *(undefined4 *)(param_1 + 0x17d8) = 1;
    }
    if (iVar9 < iVar14) {
      iVar9 = iVar14;
    }
    *(undefined4 *)(param_1 + 0x17c0) = 1000;
    if (iVar8 < iVar9) {
      iVar9 = iVar8;
    }
    *(undefined4 *)(param_1 + 0x17c4) = 10;
    *(int *)(param_1 + 0x17bc) = iVar9;
  }
  *(undefined4 *)(param_1 + 0x17cc) = 1;
  *(undefined4 *)(param_1 + 0x17d4) = 1;
  *(undefined4 *)(param_1 + 0x17c8) = 8;
  *(undefined4 *)(param_1 + 0x17d0) = 0x18;
  if (iVar12 == 0x48317011) {
    *(undefined4 *)(param_1 + 0x2c2c) = *(undefined4 *)(param_1 + 0x2ff8);
    *(undefined4 *)(param_1 + 0x2c30) = *(undefined4 *)(param_1 + 0x3004);
    *(undefined4 *)(param_1 + 0x2c34) = *(undefined4 *)(param_1 + 0x2ffc);
    *(undefined4 *)(param_1 + 0x2c28) = *(undefined4 *)(param_1 + 0x3000);
    *(undefined4 *)(param_1 + 0x2c20) = *(undefined4 *)(param_1 + 0x3008);
    *(undefined4 *)(param_1 + 0x2c24) = 0;
  }
  (*(code *)PTR_rts_isp_mem_sync_device_00046610)(*(undefined4 *)(param_1 + 0x9a0));
  (*(code *)PTR_EncAsicFrameStart_000464e0)(*(undefined4 *)(param_1 + 0x920),iVar19);
  if (*(int *)(param_1 + 0x13c8) == 0x48317011) {
    do {
      if ((*(int *)(param_1 + 0x208) == 0) || (*(int *)(param_1 + 0x2cfc) == 0)) {
        iVar12 = (*(code *)PTR_EWLWaitHwRdy_000465b8)(*(undefined4 *)(param_1 + 0x920),0);
      }
      else {
        iVar12 = (*(code *)PTR_EWLWaitHwRdy_000465b8)(*(undefined4 *)(param_1 + 0x920),&local_54);
      }
      if (iVar12 != 0) goto LAB_0001b26c;
      iVar12 = (*(code *)PTR_EncAsicCheckStatus_V2_00046494)(local_2c);
      if (iVar12 == 0x40) {
        uVar20 = 1;
      }
      else if (iVar12 < 0x41) {
        if (iVar12 == 0x10) {
          uVar20 = 5;
        }
        else if (iVar12 == 0x20) {
          uVar20 = 0;
          *(undefined4 *)(param_1 + 0x58) = 1;
        }
        else {
          uVar20 = 0;
          if (iVar12 == 4) {
            iVar8 = *(int *)(param_1 + 0x9a4) - (*(uint *)(param_1 + 0x44) & 7);
            *(uint *)(param_1 + 0x44) = iVar8 + *(uint *)(param_1 + 0x44);
            *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + iVar8;
          }
          else {
            uVar20 = 3;
          }
        }
      }
      else if (iVar12 == 0x400) {
        if (*(int *)(param_1 + 0x3004) == 0) {
          (*(code *)PTR_EncAsicClearStatusBit_000465ac)(*(undefined4 *)(param_1 + 0x920),0x400);
          if (*(code **)(param_1 + 0x300c) != (code *)0x0) {
            uVar20 = 0;
            (**(code **)(param_1 + 0x300c))(*(undefined4 *)(param_1 + 0x2d04));
            goto LAB_0001b2f0;
          }
        }
        uVar20 = 0;
      }
      else if (iVar12 == 0x800) {
        uVar20 = 0;
        *(undefined4 *)(param_1 + 0x3010) = 1;
      }
      else {
        uVar20 = 3;
        if (iVar12 == 0x100) {
          if ((*(code **)(param_1 + 0x2cfc) == (code *)0x0) || (local_54 <= local_58)) {
            uVar20 = 0;
            local_58 = local_54;
          }
          else {
            uVar20 = 0;
            (**(code **)(param_1 + 0x2cfc))(&local_58);
            local_58 = local_54;
          }
        }
      }
LAB_0001b2f0:
      if ((*(uint *)(param_1 + 0x2cf0) & 0x800) != 0) {
        *(undefined4 *)(param_1 + 0x3010) = 1;
      }
    } while (((iVar12 == 0x100) || (iVar12 == 0x400)) || (iVar12 == 0x800));
  }
  else {
    uVar20 = 0;
    if (*(int *)(param_1 + 0x13c8) == 0x48314810) {
LAB_0001b3a8:
      if (*(int *)(param_1 + 0x208) == 0) goto LAB_0001b434;
LAB_0001b3b4:
      if (*(int *)(param_1 + 0x2cfc) == 0) goto LAB_0001b434;
      iVar12 = (*(code *)PTR_EWLWaitHwRdy_000465b8)(*(undefined4 *)(param_1 + 0x920),&local_54);
      do {
        if (iVar12 != 0) goto LAB_0001b26c;
        iVar12 = (*(code *)PTR_EncAsicCheckStatus_V2_00046494)(local_2c);
        if (iVar12 == 0x20) {
          uVar20 = 0;
          *(undefined4 *)(param_1 + 0x58) = 1;
          break;
        }
        if (iVar12 < 0x21) {
          if (iVar12 == 4) {
            uVar20 = 0;
            iVar12 = *(int *)(param_1 + 0x9a4) - (*(uint *)(param_1 + 0x44) & 7);
            *(uint *)(param_1 + 0x44) = iVar12 + *(uint *)(param_1 + 0x44);
            *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + iVar12;
            break;
          }
          if (iVar12 == 0x10) {
            uVar20 = 5;
          }
          else {
LAB_0001b464:
            if (iVar12 == 0x100) goto LAB_0001b3a8;
            uVar20 = 3;
          }
          break;
        }
        if (iVar12 == 0x40) {
          uVar20 = 1;
          break;
        }
        if (iVar12 != 0x100) goto LAB_0001b464;
        if ((*(code **)(param_1 + 0x2cfc) != (code *)0x0) && (local_58 < local_54)) {
          (**(code **)(param_1 + 0x2cfc))(&local_58);
        }
        local_58 = local_54;
        if (*(int *)(param_1 + 0x208) != 0) goto LAB_0001b3b4;
LAB_0001b434:
        iVar12 = (*(code *)PTR_EWLWaitHwRdy_000465b8)(*(undefined4 *)(param_1 + 0x920),0);
      } while( true );
    }
  }
LAB_0001b018:
  (*(code *)PTR_rts_isp_mem_sync_cpu_00046588)(*(undefined4 *)(param_1 + 0x9a0));
  *(undefined4 *)(param_1 + 0x1628) = 0;
  return uVar20;
}



// ==== H264CheckCfg @ 0001b6a0 size=516

undefined4 H264CheckCfg(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_58;
  int local_54;
  
  uVar5 = param_1[4];
  if (param_1[1] == 5) {
    uVar5 = param_1[4] >> 1;
  }
  if (1 < *param_1) {
    return 0xffffffff;
  }
  uVar1 = param_1[3];
  if (0xf6c < uVar1 - 0x84) {
    return 0xffffffff;
  }
  if ((uVar1 & 3) != 0) {
    return 0xffffffff;
  }
  if (0xf90 < uVar5 - 0x60) {
    return 0xffffffff;
  }
  if ((uVar5 & 1) != 0) {
    return 0xffffffff;
  }
  uVar3 = param_1[7];
  if (uVar1 < uVar3) {
    return 0xffffffff;
  }
  if ((uVar3 & 3) != 0) {
    return 0xffffffff;
  }
  uVar4 = param_1[8];
  if (uVar5 < uVar4) {
    return 0xffffffff;
  }
  if ((uVar4 & 1) != 0) {
    return 0xffffffff;
  }
  if ((uVar1 == uVar3) && (uVar5 == uVar4)) {
    return 0xffffffff;
  }
  if (0xfe01 < (uVar5 + 0xf >> 4) * (uVar1 + 0xf >> 4)) {
    return 0xffffffff;
  }
  uVar5 = param_1[5];
  if (0xffffe < uVar5 - 1) {
    return 0xffffffff;
  }
  uVar1 = param_1[6];
  if (uVar1 == 0) {
    return 0xffffffff;
  }
  if (uVar5 < uVar1) {
    if (uVar1 != 0x3e9) {
      return 0xffffffff;
    }
    if (uVar5 != 1000) {
      return 0xffffffff;
    }
  }
  if ((0x33 < param_1[2]) && (param_1[2] != 99)) {
    return 0xffffffff;
  }
  iVar2 = (*(code *)PTR_EWLReadAsicID_000466b0)();
  if (iVar2 == 0x48317011) {
    if (2 < param_1[9] - 1) {
      return 0xffffffff;
    }
    if (param_1[9] == 1) goto LAB_0001b810;
  }
  else {
    iVar2 = (*(code *)PTR_EWLReadAsicID_000466b0)();
    if (iVar2 != 0x48314810) goto LAB_0001b810;
    if (1 < param_1[9] - 1) {
      return 0xffffffff;
    }
    if (param_1[9] != 2) goto LAB_0001b810;
  }
  if (param_1[1] != 4) {
    return 0xffffffff;
  }
LAB_0001b810:
  (*(code *)PTR_EWLReadAsicConfig_00046538)(&local_58);
  if ((local_54 != 0) && (param_1[3] <= local_58)) {
    return 0;
  }
  return 0xffffffff;
}



// ==== H264Shutdown @ 0001b8a4 size=116

void H264Shutdown(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x920);
  (*(code *)PTR_EncAsicMemFree_V2_000465c0)(param_1 + 0x920);
  (*(code *)PTR_EncPreProcessFree_00046438)(param_1 + 0x6c);
  (*(code *)PTR_EWLfree_000465a8)(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_EWLRelease_00046498)(uVar1);
  return;
}



// ==== H264GetAllowedWidth @ 0001b918 size=64

int H264GetAllowedWidth(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = param_1 + 7;
    if (param_1 + 7 < 0) {
      iVar1 = param_1 + 0xe;
    }
    return (iVar1 >> 3) << 3;
  }
  iVar1 = param_1 + 0xf;
  if (param_1 + 0xf < 0) {
    iVar1 = param_1 + 0x1e;
  }
  return (iVar1 >> 4) << 4;
}



// ==== H264Init @ 0001b958 size=2892

undefined4 H264Init(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  code *pcVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auStack_c8 [28];
  int local_ac;
  undefined4 local_80 [2];
  int local_78 [20];
  
  puVar1 = PTR_EWLInit_00046428;
  *param_2 = 0;
  local_80[0] = 1;
  iVar3 = (*(code *)puVar1)(local_80);
  if (iVar3 == 0) {
    return 0xfffffffb;
  }
  (*(code *)PTR_EWLInit_post_0004647c)(iVar3,param_4);
  iVar4 = (*(code *)PTR_EWLcalloc_00046628)(1,0x3060);
  if (iVar4 == 0) {
    uVar10 = 0xfffffffc;
    goto LAB_0001c040;
  }
  iVar5 = (*(code *)PTR_EWLReadAsicID_000466b0)();
  if (iVar5 == 0x48317011) {
    (*(code *)PTR_EWLReadAsicConfig_00046538)(local_78);
    piVar8 = local_78;
    piVar2 = (int *)(iVar4 + 0x2f94);
    do {
      piVar17 = piVar2;
      piVar7 = piVar8;
      piVar8 = piVar7 + 4;
      iVar19 = piVar7[1];
      iVar14 = piVar7[2];
      iVar5 = piVar7[3];
      *piVar17 = *piVar7;
      piVar17[1] = iVar19;
      piVar17[2] = iVar14;
      piVar17[3] = iVar5;
      piVar2 = piVar17 + 4;
    } while (piVar8 != local_78 + 0x10);
    iVar5 = piVar7[5];
    piVar17[4] = *piVar8;
    piVar17[5] = iVar5;
  }
  (*(code *)PTR_H264SeqParameterSetInit_0004663c)(iVar4 + 0x124);
  (*(code *)PTR_H264PicParameterSetInit_00046690)(iVar4 + 0x1bc);
  (*(code *)PTR_H264SliceInit_00046554)(iVar4 + 0x204);
  iVar5 = (*(code *)PTR_EWLReadAsicID_000466b0)();
  if (iVar5 == 0x48317011) {
    (*(code *)PTR_H264EncDnfInit_000464a4)(iVar4);
  }
  (*(code *)PTR_EWLReadAsicConfig_00046538)(auStack_c8);
  iVar19 = param_1[3];
  iVar14 = param_1[4];
  iVar5 = (*(code *)PTR_EWLReadAsicID_000466b0)();
  uVar20 = iVar19 + 0xfU & 0xfffffff0;
  uVar15 = iVar14 + 0xfU & 0xfffffff0;
  if (iVar5 == 0x48317011) {
    uVar16 = param_1[0xd];
    *(uint *)(iVar4 + 600) = uVar16;
    puVar1 = PTR_memcpy_00046650;
    if (uVar16 == 0) goto LAB_0001baac;
    if (*(int *)(iVar4 + 0x2fd4) != 0) {
      iVar5 = 1 << (uVar16 & 0x1f);
      puVar9 = (undefined4 *)(PTR_DAT_000463ec + (uVar16 - 1) * 4 + 0x61e8);
      *(undefined4 *)(iVar4 + 0x154) = 1;
      uVar10 = *puVar9;
      *(undefined4 *)(iVar4 + 0x35c) = 0xffffffff;
      *(int *)(iVar4 + 0x360) = iVar5;
      (*(code *)puVar1)(iVar4 + 0x25c,uVar10,iVar5 << 4);
      goto LAB_0001baac;
    }
LAB_0001c02c:
    uVar10 = 0xfffffffd;
  }
  else {
LAB_0001baac:
    if (*param_1 == 0) {
      iVar5 = param_1[1];
      *(undefined4 *)(iVar4 + 0xa48) = 0;
      *(undefined4 *)(iVar4 + 0x1bc) = 1;
      *(undefined4 *)(iVar4 + 0x124) = 1;
      *(undefined4 *)(iVar4 + 0x44c) = 1;
      *(undefined4 *)(iVar4 + 0x204) = 1;
      if (iVar5 != 1) goto LAB_0001bad8;
LAB_0001bff0:
      *(undefined4 *)(iVar4 + 0x20) = 1;
      *(undefined4 *)(iVar4 + 0x24) = 1;
      uVar16 = (*(int *)(iVar4 + 0x10) + 1) * 0x10;
      *(undefined4 *)(iVar4 + 0x28) = 2;
      *(undefined4 *)(iVar4 + 0x150) = 1;
    }
    else {
      iVar5 = param_1[1];
      *(undefined4 *)(iVar4 + 0xa48) = 1;
      *(undefined4 *)(iVar4 + 0x1bc) = 0;
      *(undefined4 *)(iVar4 + 0x124) = 0;
      *(undefined4 *)(iVar4 + 0x44c) = 0;
      *(undefined4 *)(iVar4 + 0x204) = 0;
      if (iVar5 == 1) goto LAB_0001bff0;
LAB_0001bad8:
      puVar1 = PTR_EWLReadAsicID_000466b0;
      if (iVar5 == 0) {
        *(undefined4 *)(iVar4 + 0x20) = 1;
        *(undefined4 *)(iVar4 + 0x24) = 2;
        uVar16 = (*(int *)(iVar4 + 0x10) + 1) * 0x10;
        *(undefined4 *)(iVar4 + 0x28) = 2;
        *(undefined4 *)(iVar4 + 0x150) = 1;
      }
      else if (iVar5 == 4) {
        iVar5 = param_1[9] + 1;
        *(int *)(iVar4 + 0x150) = param_1[9];
        *(undefined4 *)(iVar4 + 0x20) = 1;
        *(int *)(iVar4 + 0x24) = iVar5;
        *(int *)(iVar4 + 0x28) = iVar5;
        iVar5 = (*(code *)puVar1)();
        if (iVar5 == 0x48317011) {
          if (param_1[0xd] == 3) {
            *(undefined4 *)(iVar4 + 0x150) = 4;
            uVar16 = (*(int *)(iVar4 + 0x10) + 1) * 0x10;
          }
          else if (param_1[0xd] == 4) {
            *(undefined4 *)(iVar4 + 0x150) = 0x10;
            uVar16 = (*(int *)(iVar4 + 0x10) + 1) * 0x10;
          }
          else {
            *(int *)(iVar4 + 0x150) = param_1[9];
            uVar16 = (*(int *)(iVar4 + 0x10) + 1) * 0x10;
          }
        }
        else {
          uVar16 = (*(int *)(iVar4 + 0x10) + 1) * 0x10;
        }
      }
      else if (iVar5 == 2) {
        *(undefined4 *)(iVar4 + 0x20) = 2;
        *(undefined4 *)(iVar4 + 0x24) = 1;
        uVar16 = (*(int *)(iVar4 + 0x10) + 1) * 0x10;
        *(undefined4 *)(iVar4 + 0x28) = 2;
        *(undefined4 *)(iVar4 + 0x150) = 1;
      }
      else if (iVar5 == 3) {
        *(undefined4 *)(iVar4 + 0x20) = 2;
        *(undefined4 *)(iVar4 + 0x24) = 2;
        uVar16 = (*(int *)(iVar4 + 0x10) + 1) * 0x10;
        *(undefined4 *)(iVar4 + 0x28) = 3;
        *(undefined4 *)(iVar4 + 0x150) = 1;
      }
      else {
        iVar5 = param_1[4];
        uVar16 = 0x20;
        *(undefined4 *)(iVar4 + 0x20) = 1;
        *(undefined4 *)(iVar4 + 0x24) = 2;
        *(undefined4 *)(iVar4 + 0x28) = 3;
        uVar15 = iVar5 + 0x1fU & 0xffffffe0;
        *(undefined4 *)(iVar4 + 0x160) = 0;
        *(undefined4 *)(iVar4 + 0x150) = 2;
        *(undefined4 *)(iVar4 + 0x10) = 1;
      }
    }
    puVar1 = PTR_EWLReadAsicID_000466b0;
    uVar21 = uVar15 / uVar16;
    if (uVar16 == 0) {
      trap(0x1c00);
    }
    uVar16 = uVar20 + 0xf;
    if (-1 < (int)uVar20) {
      uVar16 = uVar20;
    }
    iVar14 = (int)uVar16 >> 4;
    *(undefined4 *)(iVar4 + 0x208) = 0;
    *(int *)(iVar4 + 8) = iVar14;
    *(int *)(iVar4 + 0x1424) = iVar14;
    *(int *)(iVar4 + 0x141c) = iVar14;
    *(int *)(iVar4 + 0x1434) = iVar14;
    *(int *)(iVar4 + 0x142c) = iVar14;
    *(int *)(iVar4 + 0x1444) = iVar14;
    *(int *)(iVar4 + 0x143c) = iVar14;
    *(uint *)(iVar4 + 0xc) = uVar21;
    *(uint *)(iVar4 + 0x1420) = uVar21;
    *(uint *)(iVar4 + 0x1418) = uVar21;
    *(uint *)(iVar4 + 0x1430) = uVar21;
    *(uint *)(iVar4 + 0x1428) = uVar21;
    *(uint *)(iVar4 + 0x1440) = uVar21;
    *(uint *)(iVar4 + 0x1438) = uVar21;
    *(uint *)(iVar4 + 4) = uVar21 * iVar14;
    iVar5 = (*(code *)puVar1)();
    if (iVar5 == 0x48317011) {
      *(undefined4 *)(iVar4 + 0xb4) = 0;
      *(undefined4 *)(iVar4 + 0xbc) = 0;
      *(undefined4 *)(iVar4 + 0xc0) = 0;
      *(undefined4 *)(iVar4 + 0xc4) = 0;
    }
    uVar16 = param_1[3];
    uVar21 = (*(int *)(iVar4 + 0x10) + 1) * 0x10;
    iVar5 = param_1[2];
    if (uVar21 == 0) {
      trap(0x1c00);
    }
    *(int *)(iVar4 + 0x13c) = iVar5;
    *(int *)(iVar4 + 0x158) = iVar14 + -1;
    *(uint *)(iVar4 + 0x15c) = uVar15 / uVar21 - 1;
    uVar21 = param_1[4];
    if ((((uVar16 & 0xf) != 0) || ((uVar21 & 0xf) != 0)) ||
       ((*(int *)(iVar4 + 0x10) != 0 && ((uVar21 & 0x1f) != 0)))) {
      *(undefined4 *)(iVar4 + 0x168) = 1;
      *(uint *)(iVar4 + 0x1b0) = uVar20 - uVar16 >> 1;
      *(uint *)(iVar4 + 0x1b8) = uVar15 - uVar21 >> 1;
    }
    if (iVar5 == 99) {
      *(undefined4 *)(iVar4 + 0x138) = 1;
    }
    iVar5 = (*(code *)PTR_H264GetLevelIndex_00046544)();
    if (iVar5 == 0xffff) goto LAB_0001c02c;
    iVar19 = iVar5 * 4;
    uVar20 = *(uint *)(PTR_H264MaxFS_000464b8 + iVar19);
    *(int *)(iVar4 + 0x140) = iVar5;
    if (uVar20 < *(uint *)(iVar4 + 4)) goto LAB_0001c02c;
    if ((int)uVar15 < 0) {
      uVar15 = uVar15 + 0xf;
    }
    iVar6 = param_1[6];
    puVar9 = (undefined4 *)(PTR_H264MaxBR_00046658 + iVar19);
    iVar5 = param_1[5];
    *(undefined4 *)(iVar4 + 0x3d8) = *(undefined4 *)(PTR_H264MaxCPBS_00046510 + iVar19);
    *(undefined4 *)(iVar4 + 0x398) = 2;
    *(undefined4 *)(iVar4 + 0x3a8) = 0x1a00;
    uVar10 = *puVar9;
    *(undefined4 *)(iVar4 + 0x3ac) = 0xa00;
    puVar1 = PTR_EWLReadAsicID_000466b0;
    *(undefined4 *)(iVar4 + 0x3b0) = 0x3300;
    *(int *)(iVar4 + 0x3c8) = iVar6;
    *(int *)(iVar4 + 0x3ec) = iVar6;
    *(undefined4 *)(iVar4 + 0x770) = 0xfffffd00;
    *(undefined4 *)(iVar4 + 0x1e4) = 0;
    *(undefined4 *)(iVar4 + 0x200) = 1;
    *(int *)(iVar4 + 0x3c4) = iVar5;
    *(int *)(iVar4 + 0x37c) = iVar14 * ((int)uVar15 >> 4);
    *(int *)(iVar4 + 0x380) = (int)uVar15 >> 4;
    *(undefined4 *)(iVar4 + 0x3dc) = uVar10;
    *(int *)(iVar4 + 1000) = iVar5;
    *(undefined4 *)(iVar4 + 0x374) = 1;
    *(undefined4 *)(iVar4 + 0x368) = 1;
    *(undefined4 *)(iVar4 + 0x370) = 0;
    *(undefined4 *)(iVar4 + 0x3a0) = 1;
    *(undefined4 *)(iVar4 + 0x39c) = 0;
    *(undefined4 *)(iVar4 + 0x760) = 0x96;
    *(undefined4 *)(iVar4 + 0x774) = 0;
    *(undefined4 *)(iVar4 + 0x784) = 0xf;
    iVar5 = (*(code *)puVar1)();
    if (iVar5 == 0x48317011) {
      *(undefined4 *)(iVar4 + 0x8cc) = 10;
      puVar1 = PTR_DAT_000463fc;
      *(undefined4 *)(iVar4 + 0x36c) = 1;
      uVar10 = *(undefined4 *)(puVar1 + -0x6c90);
      *(undefined4 *)(iVar4 + 0x788) = 0;
      *(undefined4 *)(iVar4 + 0x8c8) = uVar10;
    }
    else {
      local_78[0x12] = 0x48310000;
      iVar5 = (*(code *)PTR_EWLReadAsicID_000466b0)();
      if (iVar5 == local_78[0x12] + 0x4810) {
        *(undefined4 *)(iVar4 + 0x794) = 5;
        *(undefined1 *)(iVar4 + 0x7b0) = 4;
        *(undefined4 *)(iVar4 + 0x7b4) = 0x400000;
        *(undefined4 *)(iVar4 + 0x7b8) = 0x4000;
        *(undefined4 *)(iVar4 + 0x8ac) = 10;
        *(undefined4 *)(iVar4 + 0x8b0) = 0x19;
        *(undefined4 *)(iVar4 + 0x36c) = 0;
        *(undefined4 *)(iVar4 + 0x78c) = 0;
        *(undefined4 *)(iVar4 + 0x798) = 0;
        *(undefined4 *)(iVar4 + 0x7ac) = 0xf;
        *(undefined4 *)(iVar4 + 0x8b4) = 0x96;
        *(undefined4 *)(iVar4 + 0x8b8) = 0x3c;
        *(undefined4 *)(iVar4 + 0x8bc) = 0;
      }
    }
    puVar1 = PTR_H264GetAllowedWidth_0004654c;
    iVar5 = param_1[3];
    *(int *)(iVar4 + 0x74) = iVar5;
    *(undefined4 *)(iVar4 + 0x448) = 0;
    uVar10 = (*(code *)puVar1)(iVar5,0);
    uVar15 = param_1[4];
    *(undefined4 *)(iVar4 + 0x6c) = uVar10;
    *(uint *)(iVar4 + 0x78) = uVar15;
    if (*(int *)(iVar4 + 0x10) != 0) {
      *(uint *)(iVar4 + 0x78) = uVar15 >> 1;
    }
    iVar5 = param_1[7];
    iVar14 = param_1[8];
    *(uint *)(iVar4 + 0x70) = uVar15;
    *(undefined4 *)(iVar4 + 0x84) = 0;
    *(undefined4 *)(iVar4 + 0x88) = 0;
    *(undefined4 *)(iVar4 + 0x90) = 0;
    *(undefined4 *)(iVar4 + 0x8c) = 0;
    *(undefined4 *)(iVar4 + 0x94) = 0;
    *(int *)(iVar4 + 0x7c) = iVar5;
    *(int *)(iVar4 + 0x80) = iVar14;
    if (local_ac == 0) {
      *(undefined4 *)(iVar4 + 0x80) = 0;
      *(undefined4 *)(iVar4 + 0x7c) = 0;
      uVar15 = 0;
    }
    else {
      uVar15 = (uint)(iVar14 * iVar5 != 0);
    }
    *(uint *)(iVar4 + 0x98) = uVar15;
    puVar1 = PTR_EncSetColorConversion_00046594;
    iVar5 = iVar4 + 0x6c;
    *(undefined4 *)(iVar4 + 0xcc) = 0xfffffffb;
    iVar14 = iVar4 + 0x920;
    *(undefined4 *)(iVar4 + 0x9c) = 1;
    *(undefined4 *)(iVar4 + 0xb8) = 0;
    *(undefined4 *)(iVar4 + 200) = 0;
    (*(code *)puVar1)(iVar5,iVar14);
    if (param_1[2] == 99) {
      *(undefined4 *)(iVar4 + 0x13c) = 0xb;
    }
    iVar19 = (*(code *)PTR_EWLReadAsicID_000466b0)();
    if (iVar19 == 0x48317011) {
      uVar15 = param_1[10];
      if ((uVar15 != 0) && (*(int *)(iVar4 + 0x2fcc) == 0)) goto LAB_0001c02c;
      uVar20 = param_1[1];
      *(uint *)(iVar4 + 0xa08) = uVar15 & 1;
      *(uint *)(iVar4 + 0xa0c) = uVar15 >> 1 & 1;
      *(undefined4 *)(iVar4 + 0xa10) = 1;
      if ((uVar20 & 0xfffffffb) == 0) {
        *(undefined4 *)(iVar4 + 0xa10) = 0;
      }
      iVar12 = *(int *)(iVar4 + 0xc);
      iVar11 = *(int *)(iVar4 + 8);
      iVar19 = param_1[0xc];
      iVar6 = param_1[0xb];
      *(undefined4 *)(iVar4 + 0xa1c) = 0;
      *(uint *)(iVar4 + 0xa18) = (uint)(iVar19 * 0x80 * iVar11 * iVar12) / 800;
      *(uint *)(iVar4 + 0xa14) = (uint)(iVar6 * 0x100 * iVar11 * iVar12) / 800;
    }
    else {
      iVar12 = *(int *)(iVar4 + 0xc);
      iVar11 = *(int *)(iVar4 + 8);
    }
    iVar19 = (*(code *)PTR_H264PictureBufferAlloc_000464d4)(iVar4 + 0x2d0c,iVar11 << 4,iVar12 << 4);
    if ((iVar19 != 0) || (iVar19 = (*(code *)PTR_EncPreProcessCheck_00046598)(iVar5), iVar19 != 0))
    goto LAB_0001c02c;
    iVar19 = (*(code *)PTR_H264InitRc_00046460)(iVar4 + 0x368,1);
    if (iVar19 != 0) {
      return 0xfffffffd;
    }
    iVar5 = (*(code *)PTR_EncPreProcessAlloc_0004669c)
                      (iVar5,*(int *)(iVar4 + 0xc) * *(int *)(iVar4 + 8));
    puVar1 = PTR_EncAsicControllerInit_00046508;
    if (iVar5 != 0) {
      return 0xffffffff;
    }
    *(int *)(iVar4 + 0x920) = iVar3;
    (*(code *)puVar1)(iVar14);
    iVar5 = *(int *)(iVar4 + 0x74);
    iVar19 = *(int *)(iVar4 + 0x78);
    if (-1 < param_3) {
      (*(code *)PTR_rts_v4l2_get_max_frmsize_0004644c)
                (param_3,0x3231564e,iVar4 + 0x3058,iVar4 + 0x305c);
      (*(code *)PTR_rts_log_00046548)
                (0,PTR_DAT_000463fc + -0x6ca8,*(undefined4 *)(iVar4 + 0x3058),
                 *(undefined4 *)(iVar4 + 0x305c));
      if ((uint)(iVar19 * iVar5) < (uint)(*(int *)(iVar4 + 0x305c) * *(int *)(iVar4 + 0x3058))) {
        iVar5 = *(int *)(iVar4 + 0x3058);
        iVar19 = *(int *)(iVar4 + 0x305c);
      }
    }
    iVar6 = (*(code *)PTR_EncAsicMemAlloc_V2_000464f8)
                      (iVar14,iVar5,iVar19,*(undefined4 *)(iVar4 + 0x7c),
                       *(undefined4 *)(iVar4 + 0x80),3,*(undefined4 *)(iVar4 + 0x24),
                       *(undefined4 *)(iVar4 + 0x28));
    if (iVar6 == 0) {
LAB_0001bf80:
      if (*(int *)(iVar4 + 0x13c8) == 0x48317011) {
        (*(code *)PTR_H264PictureBufferSetupH264_00046688)
                  (iVar4 + 0x2d0c,iVar14,*(undefined4 *)(iVar4 + 0x24),*(undefined4 *)(iVar4 + 0x28)
                  );
        pcVar18 = (code *)PTR_H264SpsSetVuiTimigInfo_000464ac;
        goto LAB_0001bfa0;
      }
      pcVar18 = (code *)PTR_H264SpsSetVuiTimigInfo_000464ac;
      if (*(int *)(iVar4 + 0x13c8) != 0x48314810) goto LAB_0001bfa0;
      uVar15 = *(uint *)(iVar4 + 0x24);
      if (uVar15 == 1) {
        *(undefined4 *)(iVar4 + 0x2d0c) = 1;
LAB_0001c3ec:
        uVar20 = 0;
        iVar3 = iVar4;
        iVar5 = iVar4;
        do {
          puVar9 = (undefined4 *)(iVar3 + 0x2c40);
          uVar20 = uVar20 + 1;
          iVar3 = iVar3 + 0xc;
          *(undefined4 *)(iVar5 + 0x2d38) = *puVar9;
          iVar5 = iVar5 + 0x44;
        } while (uVar20 < uVar15);
      }
      else {
        *(uint *)(iVar4 + 0x2d0c) = uVar15 - 1;
        if (uVar15 != 0) goto LAB_0001c3ec;
      }
      iVar3 = *(int *)(iVar4 + 0x28);
      if (iVar3 != 0) {
        iVar5 = iVar4;
        iVar14 = iVar4;
        do {
          puVar9 = (undefined4 *)(iVar14 + 0x2c70);
          iVar14 = iVar14 + 0xc;
          *(undefined4 *)(iVar5 + 0x2d3c) = *puVar9;
          iVar5 = iVar5 + 0x44;
        } while (iVar14 != iVar4 + iVar3 * 0xc);
      }
      pcVar18 = (code *)PTR_H264SpsSetVuiTimigInfo_000464ac;
      if (uVar15 == 1) {
        *(undefined4 *)(iVar4 + 0x2d7c) = *(undefined4 *)(iVar4 + 0x2d38);
      }
LAB_0001bfa0:
      uVar10 = *(undefined4 *)(iVar4 + 1000);
      uVar13 = *(undefined4 *)(iVar4 + 0x3ec);
      *param_2 = iVar4;
      (*pcVar18)(iVar4 + 0x124,uVar10,uVar13);
      if (0x1e < *(uint *)(iVar4 + 0x13c)) {
        *(undefined4 *)(iVar4 + 0x13b4) = 1;
        return 0;
      }
      *(undefined4 *)(iVar4 + 0x13b4) = 0;
      return 0;
    }
    if ((*(int *)(iVar4 + 0x78) * *(int *)(iVar4 + 0x74) != iVar19 * iVar5) &&
       (iVar5 = (*(code *)PTR_EncAsicMemAlloc_V2_000464f8)
                          (iVar14,*(int *)(iVar4 + 0x74),*(int *)(iVar4 + 0x78),
                           *(undefined4 *)(iVar4 + 0x7c),*(undefined4 *)(iVar4 + 0x80),3,
                           *(undefined4 *)(iVar4 + 0x24),*(undefined4 *)(iVar4 + 0x28)), iVar5 == 0)
       ) goto LAB_0001bf80;
    uVar10 = 0xfffffffa;
  }
  (*(code *)PTR_EWLfree_000465a8)(iVar4);
LAB_0001c040:
  (*(code *)PTR_EWLRelease_00046498)(iVar3);
  return uVar10;
}



// ==== H264NalUnitHdr @ 0001c4b0 size=248

void H264NalUnitHdr(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (param_4 == 1) {
    (*(code *)PTR_H264PutBits_0004659c)(param_1,0,8);
    (*(code *)PTR_H264PutBits_0004659c)(param_1,0,8);
    (*(code *)PTR_H264PutBits_0004659c)(param_1,0,8);
    (*(code *)PTR_H264PutBits_0004659c)(param_1,1,8);
  }
  (*(code *)PTR_H264PutBits_0004659c)(param_1,0,1);
  (*(code *)PTR_H264PutBits_0004659c)(param_1,param_2,2);
  (*(code *)PTR_H264PutBits_0004659c)(param_1,param_3,5);
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



// ==== H264NalUnitHdrMvcExtension @ 0001c5a8 size=228

void H264NalUnitHdrMvcExtension(int param_1,int *param_2)

{
  (*(code *)PTR_H264PutBits_0004659c)(param_1,*param_2 == 0,1);
  (*(code *)PTR_H264PutBits_0004659c)(param_1,param_2[1],6);
  (*(code *)PTR_H264PutBits_0004659c)(param_1,param_2[2],10);
  (*(code *)PTR_H264PutBits_0004659c)(param_1,param_2[3],3);
  (*(code *)PTR_H264PutBits_0004659c)(param_1,*param_2,1);
  (*(code *)PTR_H264PutBits_0004659c)(param_1,param_2[4],1);
  (*(code *)PTR_H264PutBits_0004659c)(param_1,1,1);
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



// ==== H264NalUnitHdrSvcExtension @ 0001c68c size=332

void H264NalUnitHdrSvcExtension(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x104);
  if (iVar2 == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + iVar2 * 0x10 + 4);
  }
  (*(code *)PTR_H264PutBits_0004659c)(param_1,iVar2 == -1,1);
  (*(code *)PTR_H264PutBits_0004659c)(param_1,0,6);
  (*(code *)PTR_H264PutBits_0004659c)(param_1,1,1);
  (*(code *)PTR_H264PutBits_0004659c)(param_1,0,3);
  (*(code *)PTR_H264PutBits_0004659c)(param_1,0,4);
  (*(code *)PTR_H264PutBits_0004659c)(param_1,uVar1,3);
  (*(code *)PTR_H264PutBits_0004659c)(param_1,0,1);
  (*(code *)PTR_H264PutBits_0004659c)(param_1,1,1);
  (*(code *)PTR_H264PutBits_0004659c)(param_1,1,1);
  (*(code *)PTR_H264PutBits_0004659c)(param_1,3,2);
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



// ==== H264FillerNALU @ 0001c7f0 size=152

int H264FillerNALU(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  (*(code *)PTR_H264NalUnitHdr_000465e4)(param_1,0,0xc,param_3);
  if (0 < param_2) {
    do {
      param_2 = param_2 + -1;
      (*(code *)PTR_H264PutNalBits_00046520)(param_1,0xff,8);
    } while (param_2 != 0);
  }
  (*(code *)PTR_H264RbspTrailingBits_0004667c)(param_1);
  return *(int *)(param_1 + 8) - iVar1;
}



// ==== H264PicParameterSetInit @ 0001c890 size=80

void H264PicParameterSetInit(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 2;
  param_1[0xd] = 1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return;
}



// ==== H264PicParameterSet @ 0001c8e0 size=536

void H264PicParameterSet(undefined4 param_1,undefined4 *param_2)

{
  (*(code *)PTR_H264NalUnitHdr_000465e4)(param_1,1,8,*param_2);
  (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,param_2[1]);
  (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,param_2[2]);
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[3],1);
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[4],1);
  (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,param_2[5]);
  (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,param_2[6]);
  (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,param_2[7]);
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[8],1);
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[9],2);
  (*(code *)PTR_H264ExpGolombSigned_000465c4)(param_1,param_2[10]);
  (*(code *)PTR_H264ExpGolombSigned_000465c4)(param_1,param_2[0xb]);
  (*(code *)PTR_H264ExpGolombSigned_000465c4)(param_1,param_2[0xc]);
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[0xd],1);
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[0xe],1);
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[0xf],1);
  if (param_2[0x10] != 1) {
    (*(code *)PTR_H264NalUnitTrailinBits_000464bc)(param_1,*param_2);
    return;
  }
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,1,1);
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,1);
  (*(code *)PTR_H264ExpGolombSigned_000465c4)(param_1,param_2[0xc]);
  (*(code *)PTR_H264NalUnitTrailinBits_000464bc)(param_1,*param_2);
  return;
}



// ==== H264PictureBufferAlloc @ 0001cb00 size=280

undefined4 H264PictureBufferAlloc(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  piVar5 = (int *)(param_1 + 0x1c);
  (*(code *)PTR_EWLmemset_00046578)(piVar5,0,0x154);
  (*(code *)PTR_EWLmemset_00046578)(param_1 + 0x170,0,0x110);
  iVar2 = (*(code *)PTR_EWLReadAsicID_000466b0)();
  if (iVar2 == 0x48317011) {
    iVar2 = 4;
  }
  else {
    (*(code *)PTR_EWLReadAsicID_000466b0)();
    iVar2 = 2;
  }
  iVar4 = 0;
  piVar1 = (int *)(param_1 + 0x60);
  piVar6 = piVar5;
  do {
    piVar3 = piVar1;
    iVar4 = iVar4 + 1;
    *piVar6 = param_2;
    piVar6[1] = param_3;
    piVar6[2] = param_2 / 2;
    piVar6[3] = param_3 / 2;
    piVar6[4] = 0;
    piVar6[5] = 0;
    piVar3[-2] = (int)piVar6;
    piVar1 = piVar3 + 0x11;
    piVar6 = piVar3;
  } while (iVar4 <= iVar2);
  *(int **)(param_1 + 0x280) = piVar5;
  return 0;
}



// ==== H264PictureBufferSetupH264 @ 0001cc18 size=144

undefined4 H264PictureBufferSetupH264(int *param_1,int param_2,uint param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_3 == 1) {
    *param_1 = 1;
  }
  else {
    *param_1 = param_3 - 1;
    if (param_3 == 0) goto LAB_0001cc58;
  }
  uVar2 = 0;
  iVar3 = param_2;
  piVar4 = param_1;
  do {
    piVar1 = (int *)(iVar3 + 0x2320);
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + 0xc;
    piVar4[0xb] = *piVar1;
    piVar4 = piVar4 + 0x11;
  } while (uVar2 < param_3);
LAB_0001cc58:
  if (param_4 != 0) {
    iVar3 = param_2 + param_4 * 0xc;
    piVar4 = param_1;
    do {
      piVar1 = (int *)(param_2 + 0x2350);
      param_2 = param_2 + 0xc;
      piVar4[0xc] = *piVar1;
      piVar4 = piVar4 + 0x11;
    } while (param_2 != iVar3);
  }
  if (param_3 == 1) {
    param_1[0x1c] = param_1[0xb];
  }
  return 0;
}



// ==== H264PictureBufferFree @ 0001cca8 size=36

void H264PictureBufferFree(int param_1)

{
  (*(code *)PTR_EWLmemset_00046578)(param_1 + 0x1c,0,0x154);
  return;
}



// ==== H264InitializePictureBuffer @ 0001cccc size=680

void H264InitializePictureBuffer(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  
  iVar1 = (*(code *)PTR_EWLReadAsicID_000466b0)();
  if (iVar1 == 0x48317011) {
    iVar1 = 4;
  }
  else {
    (*(code *)PTR_EWLReadAsicID_000466b0)();
    iVar1 = 2;
  }
  piVar9 = (int *)param_1[0xa0];
  piVar12 = param_1 + 7;
  if (piVar9[8] != 0) {
    piVar9[0xb] = 1;
    iVar6 = 0;
    piVar9[9] = 0;
    piVar9[0xd] = 0;
    piVar9[0xc] = 0;
    piVar2 = piVar12;
    do {
      iVar6 = iVar6 + 1;
      if (piVar9 != piVar2) {
        piVar2[6] = -1;
        piVar2[8] = 0;
        piVar2[9] = 0;
        piVar2[10] = 0;
        piVar2[0xb] = 0;
        piVar2[0xc] = 0;
        piVar2[0xd] = 0;
        piVar2[0xe] = 0;
      }
      piVar2 = piVar2 + 0x11;
    } while (iVar6 <= iVar1);
  }
  iVar6 = 0;
  piVar2 = param_1;
  do {
    iVar6 = iVar6 + 1;
    piVar2[0x62] = -1;
    piVar2[100] = 0;
    piVar2[0x65] = 0;
    piVar2[0x66] = 0;
    piVar2[0x67] = 0;
    piVar2[0x68] = 0;
    piVar2[0x69] = 0;
    piVar2[0x6a] = 0;
    piVar2 = piVar2 + 0x11;
  } while (iVar6 < iVar1);
  iVar1 = *param_1;
  piVar2 = param_1 + 0x5c;
  if (iVar1 < 0) {
    return;
  }
  iVar6 = 0;
  piVar4 = piVar12;
  do {
    iVar13 = iVar6;
    if ((piVar4[0xb] != 0) && (piVar9 != piVar4)) {
      iVar13 = iVar6 + 1;
      piVar5 = piVar4;
      piVar7 = piVar2 + iVar6 * 0x11;
      do {
        piVar3 = piVar5 + 4;
        piVar8 = piVar7 + 4;
        iVar11 = piVar5[1];
        iVar10 = piVar5[2];
        iVar6 = piVar5[3];
        *piVar7 = *piVar5;
        piVar7[1] = iVar11;
        piVar7[2] = iVar10;
        piVar7[3] = iVar6;
        piVar5 = piVar3;
        piVar7 = piVar8;
      } while (piVar3 != piVar4 + 0x10);
      *piVar8 = *piVar3;
    }
    piVar4 = piVar4 + 0x11;
    iVar6 = iVar13;
  } while (piVar4 != param_1 + iVar1 * 0x11 + 0x18);
  iVar6 = 0;
  piVar4 = piVar12;
  while( true ) {
    iVar6 = iVar6 + 1;
    if ((piVar4[0xd] != 0) && (piVar9 != piVar4)) break;
    piVar4 = piVar4 + 0x11;
    iVar10 = iVar13;
    if (iVar1 < iVar6) goto LAB_0001ce74;
  }
  iVar10 = iVar13 + 1;
  piVar5 = piVar4;
  piVar7 = piVar2 + iVar13 * 0x11;
  do {
    piVar3 = piVar5 + 4;
    piVar8 = piVar7 + 4;
    iVar11 = piVar5[1];
    iVar13 = piVar5[2];
    iVar6 = piVar5[3];
    *piVar7 = *piVar5;
    piVar7[1] = iVar11;
    piVar7[2] = iVar13;
    piVar7[3] = iVar6;
    piVar5 = piVar3;
    piVar7 = piVar8;
  } while (piVar3 != piVar4 + 0x10);
  *piVar8 = *piVar3;
LAB_0001ce74:
  iVar6 = 0;
  while( true ) {
    iVar6 = iVar6 + 1;
    if ((piVar12[0xc] != 0) && (piVar9 != piVar12)) break;
    piVar12 = piVar12 + 0x11;
    if (iVar1 < iVar6) goto LAB_0001ce9c;
  }
  piVar9 = piVar2 + iVar10 * 0x11;
  piVar4 = piVar12;
  do {
    piVar7 = piVar4 + 4;
    piVar5 = piVar9 + 4;
    iVar10 = piVar4[1];
    iVar13 = piVar4[2];
    iVar6 = piVar4[3];
    *piVar9 = *piVar4;
    piVar9[1] = iVar10;
    piVar9[2] = iVar13;
    piVar9[3] = iVar6;
    piVar9 = piVar5;
    piVar4 = piVar7;
  } while (piVar7 != piVar12 + 0x10);
  *piVar5 = *piVar7;
LAB_0001ce9c:
  if (iVar1 < 1) {
    return;
  }
  piVar9 = piVar2 + iVar1 * 0x11;
  do {
    piVar2[0xc] = 0;
    piVar2 = piVar2 + 0x11;
  } while (piVar2 != piVar9);
  return;
}



// ==== H264UpdatePictureBuffer @ 0001cf74 size=360

void H264UpdatePictureBuffer(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  piVar3 = (int *)param_1[0xa0];
  piVar2 = param_1 + 0x5c;
  iVar4 = *param_1;
  piVar7 = param_1 + 7;
  param_1[0xa1] = (int)piVar3;
  if (-1 < iVar4) {
    piVar1 = piVar7;
    do {
      if (piVar1 != piVar3) {
        if (piVar3[0xb] != 0) {
          piVar1[0xb] = 0;
        }
        if ((piVar3[0xd] != 0) && (piVar1[0xd] = 0, piVar3[8] == 0)) {
          piVar1[0xb] = 0;
        }
        if (piVar3[0xc] != 0) {
          piVar1[0xc] = 0;
        }
      }
      piVar1 = piVar1 + 0x11;
    } while (piVar1 != param_1 + iVar4 * 0x11 + 0x18);
    if (iVar4 < 1) {
      if (iVar4 != 0) {
        return;
      }
    }
    else {
      iVar5 = 0;
      piVar3 = piVar2;
      do {
        iVar6 = 0;
        piVar1 = piVar7;
        do {
          iVar6 = iVar6 + 1;
          if (piVar3[0xd] != 0) {
            piVar1[0xd] = 0;
          }
          if (piVar3[0xc] != 0) {
            piVar1[0xc] = 0;
          }
          piVar1 = piVar1 + 0x11;
        } while (iVar6 != iVar4 + 1);
        iVar5 = iVar5 + 1;
        piVar3 = piVar3 + 0x11;
      } while (iVar5 != iVar4);
      piVar3 = piVar2 + iVar4 * 0x11;
      do {
        if (piVar2[0xd] != 0) {
          *(undefined4 *)(piVar2[0xf] + 0x34) = 1;
        }
        if (piVar2[0xc] != 0) {
          *(undefined4 *)(piVar2[0xf] + 0x30) = 1;
        }
        piVar2 = piVar2 + 0x11;
      } while (piVar2 != piVar3);
    }
    iVar5 = 0;
    do {
      iVar5 = iVar5 + 1;
      if (((piVar7[0xb] == 0) && (piVar7[0xc] == 0)) && (piVar7[0xd] == 0)) {
        param_1[0xa0] = (int)piVar7;
        return;
      }
      piVar7 = piVar7 + 0x11;
    } while (iVar5 <= iVar4);
  }
  return;
}



// ==== H264UpdatePictureBufferForSvct @ 0001d0dc size=368

void H264UpdatePictureBufferForSvct(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar6 = param_1[0xa0];
  piVar7 = param_1 + 7;
  iVar5 = *param_1;
  param_1[0xa1] = iVar6;
  param_1[0xa0] = 0;
  if (-1 < iVar5) {
    iVar1 = 0;
    piVar2 = piVar7;
    do {
      iVar1 = iVar1 + 1;
      if (((piVar2[0xb] == 0) && (piVar2[0xc] == 0)) && (piVar2[0xd] == 0)) {
        param_1[0xa0] = (int)piVar2;
        if (piVar2 != (int *)0x0) {
          return;
        }
        break;
      }
      piVar2 = piVar2 + 0x11;
    } while (iVar1 <= iVar5);
  }
  if (param_3 == 0) {
    iVar6 = 1 << (param_2 & 0x1f);
    iVar1 = iVar6;
    if (iVar5 < 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = 0;
      piVar2 = piVar7;
      do {
        if (piVar2[0xb] != 0) {
          iVar3 = piVar2[7];
          if (iVar4 < iVar3) {
            iVar4 = iVar3;
          }
          if (iVar3 < iVar6) {
            iVar6 = iVar3;
          }
          if ((0x100 < iVar3) && (iVar3 < iVar1)) {
            iVar1 = iVar3;
          }
        }
        piVar2 = piVar2 + 0x11;
      } while (piVar2 != param_1 + iVar5 * 0x11 + 0x18);
    }
    iVar4 = iVar4 - iVar6;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (1 << (param_2 - 1 & 0x1f) < iVar4) {
      iVar6 = iVar1;
    }
  }
  else {
    iVar6 = (1 - param_3) + *(int *)(iVar6 + 0x1c);
    if (iVar6 < 0) {
      iVar6 = iVar6 + (1 << (param_2 & 0x1f));
    }
  }
  if (-1 < iVar5) {
    do {
      while (piVar7[7] == iVar6) {
        param_1[0xa0] = (int)piVar7;
        piVar7 = piVar7 + 0x11;
        if (piVar7 == param_1 + iVar5 * 0x11 + 0x18) {
          return;
        }
      }
      piVar7 = piVar7 + 0x11;
    } while (piVar7 != param_1 + iVar5 * 0x11 + 0x18);
  }
  return;
}



// ==== H264PictureBufferSetRef @ 0001d24c size=1004

void H264PictureBufferSetRef(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  
  iVar3 = *param_1;
  iVar17 = *(int *)(param_2 + 0xaa8);
  iVar2 = 4;
  piVar13 = param_1 + 0x5c;
  piVar6 = (int *)param_1[0xa0];
  if (iVar17 != 0x48317011) {
    iVar2 = 2;
  }
  if (iVar3 < 2) {
    piVar6[0xd] = 0;
  }
  piVar6[0xc] = 0;
  iVar14 = 0;
  piVar1 = piVar13;
  iVar7 = -1;
  iVar8 = -1;
  do {
    if ((((iVar3 <= iVar14) || (piVar1[0xe] == 0)) || ((piVar1[0xb] == 0 && (piVar1[0xd] == 0)))) ||
       ((iVar5 = iVar14, iVar9 = iVar8, iVar7 != -1 &&
        ((iVar8 != -1 || (iVar5 = iVar7, iVar9 = iVar14, piVar13[iVar7 * 0x11 + 4] == piVar1[4])))))
       ) {
      piVar1[0xe] = 0;
      iVar5 = iVar7;
      iVar9 = iVar8;
    }
    iVar14 = iVar14 + 1;
    piVar1 = piVar1 + 0x11;
    iVar7 = iVar5;
    iVar8 = iVar9;
  } while (iVar14 < iVar2);
  if (iVar5 == -1) {
    iVar5 = 0;
    param_1[0x6a] = 1;
  }
  *(undefined4 *)(param_2 + 0xe98) = 0;
  *(undefined4 *)(param_2 + 0xd0c) = 0;
  if ((param_3 == 1) && (piVar6[9] != 0)) {
    iVar7 = piVar13[iVar5 * 0x11 + 4];
    iVar2 = piVar13[iVar5 * 0x11 + 5];
    *(int *)(param_2 + 200) = iVar7;
    *(int *)(param_2 + 0xd0) = iVar2;
    *(int *)(param_2 + 0xcc) = iVar7;
    *(int *)(param_2 + 0xd4) = iVar2;
    *(undefined4 *)(param_2 + 0xd14) = 0;
    if ((iVar5 != 0) || ((piVar13[0xd] != 0 && (piVar13[8] == 0)))) {
      *(undefined4 *)(param_2 + 0xd0c) = 1;
    }
    if ((iVar9 != -1) && (piVar13[iVar5 * 0x11 + 0xd] == 0)) {
      iVar2 = piVar13[iVar9 * 0x11 + 5];
      *(int *)(param_2 + 0xcc) = piVar13[iVar9 * 0x11 + 4];
      *(int *)(param_2 + 0xd4) = iVar2;
      *(undefined4 *)(param_2 + 0xd14) = 1;
    }
  }
  uVar4 = piVar6[0xd];
  if (uVar4 != 0) {
    *(undefined4 *)(param_2 + 0xe98) = 1;
  }
  iVar2 = piVar6[4];
  *(undefined4 *)(param_2 + 0xa8) = 0;
  if (iVar2 == 0) {
    if (iVar3 < 0) {
      uVar12 = piVar6[0xb];
    }
    else {
      uVar12 = piVar6[0xb];
      piVar1 = param_1 + 7;
      iVar2 = -1;
      iVar7 = 0;
      do {
        if (piVar6 != piVar1) {
          if (iVar3 == 0) {
            uVar11 = 0;
            uVar10 = 0;
          }
          else {
            uVar11 = 0;
            uVar10 = 0;
            piVar15 = piVar13;
            do {
              while ((int *)piVar15[0xf] == piVar1) {
                uVar10 = piVar15[0xd];
                piVar16 = piVar15 + 0x11;
                uVar11 = piVar15[0xc];
                piVar15 = piVar16;
                if (piVar16 == piVar13 + iVar3 * 0x11) goto LAB_0001d414;
              }
              piVar15 = piVar15 + 0x11;
            } while (piVar15 != piVar13 + iVar3 * 0x11);
          }
LAB_0001d414:
          if ((((uVar12 | piVar1[0xb]) == uVar12) && (uVar4 == (uVar4 | piVar1[0xd] | uVar10))) &&
             (piVar6[0xc] == (piVar6[0xc] | piVar1[0xc] | uVar11))) {
            iVar2 = iVar7;
          }
        }
        iVar7 = iVar7 + 1;
        piVar1 = piVar1 + 0x11;
      } while (iVar7 != iVar3 + 1);
      if (iVar2 != -1) {
        piVar6[4] = param_1[iVar2 * 0x11 + 0xb];
        param_1[iVar2 * 0x11 + 0xb] = 0;
        goto LAB_0001d330;
      }
    }
    *(undefined4 *)(param_2 + 0xa8) = 1;
  }
  else {
    uVar12 = piVar6[0xb];
  }
LAB_0001d330:
  if ((uVar12 == 0) && (uVar4 == 0)) {
    *(undefined4 *)(param_2 + 0xa8) = 1;
  }
  if (iVar17 == 0x48317011) {
    *(undefined4 *)(param_2 + 0xac) = 0;
    *(undefined4 *)(param_2 + 0xb0) = 0;
  }
  if (param_3 == 1) {
    iVar2 = piVar6[5];
    *(int *)(param_2 + 0xb8) = piVar6[4];
    *(int *)(param_2 + 0xbc) = iVar2;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    while( true ) {
      iVar2 = iVar2 + 1;
      if (uVar4 != 0) {
        param_1[0x69] = 0;
      }
      param_1 = param_1 + 0x11;
      if (iVar2 == iVar3) break;
      uVar4 = piVar6[0xd];
    }
  }
  if (iVar17 == 0x48317011) {
    if (*(int *)(param_2 + 0xe8) != 0) {
      iVar2 = *(int *)(param_2 + 0x23c8);
      *(int *)(param_2 + 0xc0) = iVar2 + *(int *)(param_2 + 0xb8);
      *(int *)(param_2 + 0xd8) = *(int *)(param_2 + 200) + iVar2;
      if (*(int *)(param_2 + 0xcc) == 0) {
        *(undefined4 *)(param_2 + 0xdc) = 0;
      }
      else {
        *(int *)(param_2 + 0xdc) = *(int *)(param_2 + 0xcc) + iVar2;
      }
    }
    if (*(int *)(param_2 + 0xec) != 0) {
      iVar2 = *(int *)(param_2 + 0x23cc);
      *(int *)(param_2 + 0xc4) = iVar2 + *(int *)(param_2 + 0xbc);
      *(int *)(param_2 + 0xe0) = *(int *)(param_2 + 0xd0) + iVar2;
      if (*(int *)(param_2 + 0xd4) == 0) {
        *(undefined4 *)(param_2 + 0xe4) = 0;
        return;
      }
      *(int *)(param_2 + 0xe4) = *(int *)(param_2 + 0xd4) + iVar2;
    }
  }
  return;
}



// ==== H264PictureBufferSetRefForSvct @ 0001d638 size=604

void H264PictureBufferSetRefForSvct(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  iVar3 = *param_1;
  iVar5 = 4;
  piVar8 = param_1 + 0x5c;
  piVar4 = (int *)param_1[0xa0];
  if (*(int *)(param_2 + 0xaa8) != 0x48317011) {
    iVar5 = 2;
  }
  if (iVar3 < 2) {
    piVar4[0xd] = 0;
  }
  iVar7 = piVar4[0x10];
  piVar4[0xc] = 0;
  if (iVar7 == 0) {
    piVar1 = param_1 + 7;
    if (iVar3 < 0) {
      iVar9 = 0;
      iVar6 = 0;
    }
    else {
      iVar9 = 0;
      iVar6 = 0;
      do {
        if ((piVar1[0xb] != 0) && (piVar1 != piVar4)) {
          iVar2 = piVar1[7];
          if (iVar6 < iVar2) {
            iVar6 = iVar2;
          }
          if ((iVar2 < 0x100) && (iVar9 < iVar2)) {
            iVar9 = iVar2;
          }
        }
        piVar1 = piVar1 + 0x11;
      } while (piVar1 != param_1 + iVar3 * 0x11 + 0x18);
    }
    if (iVar6 == 1 << (param_3 & 0x1f)) {
      iVar6 = iVar9;
    }
  }
  else {
    iVar6 = piVar4[7] - iVar7;
    if (piVar4[7] < iVar7) {
      iVar6 = iVar6 + (1 << (param_3 & 0x1f));
    }
  }
  iVar9 = 0;
  piVar1 = piVar8;
  while (((iVar3 <= iVar9 || (piVar1[0xd] == 0 && piVar1[0xb] == 0)) || (piVar1[7] != iVar6))) {
    iVar9 = iVar9 + 1;
    piVar1 = piVar1 + 0x11;
    if (iVar5 <= iVar9) {
      iVar9 = -1;
LAB_0001d6cc:
      iVar5 = piVar4[9];
      *(undefined4 *)(param_2 + 0xe98) = 0;
      *(undefined4 *)(param_2 + 0xd0c) = 0;
      if (iVar5 != 0) {
        iVar5 = piVar8[iVar9 * 0x11 + 5];
        *(int *)(param_2 + 200) = piVar8[iVar9 * 0x11 + 4];
        *(int *)(param_2 + 0xd0) = iVar5;
        *(undefined4 *)(param_2 + 0xd14) = 0;
      }
      if ((piVar4[0xb] == 0) && (piVar4[0xd] == 0)) {
        *(undefined4 *)(param_2 + 0xa8) = 1;
      }
      else {
        *(undefined4 *)(param_2 + 0xa8) = 0;
      }
      iVar5 = piVar4[0x10];
      *(uint *)(param_2 + 0xac) = (uint)(iVar7 != 0);
      if (iVar5 == 0) {
        *(undefined4 *)(param_2 + 0xb0) = 0;
      }
      else {
        *(int *)(param_2 + 0xb0) = iVar5 + -1;
      }
      iVar7 = piVar4[4];
      iVar6 = 0;
      iVar5 = piVar4[5];
      *(int *)(param_2 + 0xb8) = iVar7;
      *(int *)(param_2 + 0xbc) = iVar5;
      if (0 < iVar3) {
        do {
          iVar6 = iVar6 + 1;
          if (piVar4[0xd] != 0) {
            param_1[0x69] = 0;
          }
          param_1 = param_1 + 0x11;
        } while (iVar6 != iVar3);
      }
      if (*(int *)(param_2 + 0xe8) != 0) {
        iVar3 = *(int *)(param_2 + 0x23c8);
        *(int *)(param_2 + 0xc0) = iVar3 + iVar7;
        *(int *)(param_2 + 0xd8) = *(int *)(param_2 + 200) + iVar3;
        if (*(int *)(param_2 + 0xcc) == 0) {
          *(undefined4 *)(param_2 + 0xdc) = 0;
        }
        else {
          *(int *)(param_2 + 0xdc) = *(int *)(param_2 + 0xcc) + iVar3;
        }
      }
      if (*(int *)(param_2 + 0xec) != 0) {
        iVar3 = *(int *)(param_2 + 0x23cc);
        *(int *)(param_2 + 0xc4) = iVar3 + iVar5;
        *(int *)(param_2 + 0xe0) = *(int *)(param_2 + 0xd0) + iVar3;
        if (*(int *)(param_2 + 0xd4) != 0) {
          *(int *)(param_2 + 0xe4) = *(int *)(param_2 + 0xd4) + iVar3;
          return;
        }
        *(undefined4 *)(param_2 + 0xe4) = 0;
      }
      return;
    }
  }
  piVar1[0xe] = 1;
  goto LAB_0001d6cc;
}



// ==== H264PutBits @ 0001d8a0 size=152

void H264PutBits(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  puVar4 = (undefined1 *)*param_1;
  if (param_1[2] + 5 <= (uint)param_1[1]) {
    uVar2 = param_3 + param_1[5];
    uVar1 = param_2 << (-uVar2 & 0x1f) | param_1[4];
    if (7 < (int)uVar2) {
      uVar3 = uVar2 - 8 >> 3;
      puVar5 = puVar4;
      do {
        puVar6 = puVar5 + 1;
        *puVar5 = (char)(uVar1 >> 0x18);
        uVar1 = uVar1 << 8;
        param_1[2] = param_1[2] + 1;
        puVar5 = puVar6;
      } while (puVar6 != puVar4 + uVar3 + 1);
      uVar2 = (uVar2 - 8) + uVar3 * -8;
      puVar4 = puVar4 + uVar3 + 1;
    }
    param_1[4] = uVar1;
    param_1[5] = uVar2 & 0xff;
    *param_1 = puVar4;
    return;
  }
  param_1[7] = 1;
  return;
}



// ==== H264PutNalBits @ 0001d938 size=288

void H264PutNalBits(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  uVar4 = param_3 + param_1[5];
  pcVar7 = (char *)*param_1;
  uVar3 = param_2 << (-uVar4 & 0x1f) | param_1[4];
  if (7 < (int)uVar4) {
    iVar6 = param_1[2];
    iVar2 = param_1[6];
    if ((uint)param_1[1] < iVar6 + 5U) {
LAB_0001da4c:
      param_1[7] = 1;
      return;
    }
    uVar5 = uVar3 >> 0x18;
    iVar1 = iVar6 + 1;
    *pcVar7 = (char)(uVar3 >> 0x18);
    pcVar8 = pcVar7;
    if (iVar2 == 2) goto LAB_0001d9e0;
LAB_0001d98c:
    if (uVar5 != 0) goto LAB_0001da14;
LAB_0001d994:
    iVar2 = iVar2 + 1;
    uVar4 = uVar4 - 8;
    pcVar7 = pcVar7 + 1;
    param_1[6] = iVar2;
    uVar3 = uVar3 << 8;
    param_1[2] = iVar1;
    *param_1 = pcVar7;
    iVar6 = iVar1;
    if (7 < (int)uVar4) {
      do {
        if ((uint)param_1[1] < iVar6 + 5U) goto LAB_0001da4c;
        uVar5 = uVar3 >> 0x18;
        iVar1 = iVar6 + 1;
        *pcVar7 = (char)(uVar3 >> 0x18);
        pcVar8 = pcVar7;
        if (iVar2 != 2) goto LAB_0001d98c;
LAB_0001d9e0:
        pcVar7 = pcVar8;
        if (uVar5 < 4) {
          pcVar8[1] = (char)uVar5;
          pcVar7 = pcVar8 + 1;
          *pcVar8 = '\x03';
          iVar1 = iVar6 + 2;
          param_1[8] = param_1[8] + 1;
          iVar2 = 0;
          if (*pcVar7 == '\0') goto LAB_0001d994;
        }
LAB_0001da14:
        uVar4 = uVar4 - 8;
        pcVar7 = pcVar7 + 1;
        iVar2 = 0;
        uVar3 = uVar3 << 8;
        param_1[6] = 0;
        param_1[2] = iVar1;
        *param_1 = pcVar7;
        iVar6 = iVar1;
        if ((int)uVar4 < 8) break;
      } while( true );
    }
  }
  param_1[4] = uVar3;
  param_1[5] = uVar4 & 0xff;
  return;
}



// ==== H264SetBuffer @ 0001da58 size=72

undefined4 H264SetBuffer(int *param_1,undefined1 *param_2,uint param_3)

{
  param_1[1] = param_3;
  *param_1 = (int)param_2;
  param_1[2] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (param_3 < 5) {
    param_1[7] = 1;
    return 0xffffffff;
  }
  *param_2 = 0;
  *(undefined1 *)(*param_1 + 1) = 0;
  return 0;
}



// ==== H264ExpGolombUnsigned @ 0001daa0 size=300

void H264ExpGolombUnsigned(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_2 + 1;
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 + 1;
  } while (uVar4 >> (uVar1 & 0x1f) != 0);
  if (uVar1 < 0xd) {
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,uVar4,uVar1 * 2 + -1);
    return;
  }
  uVar3 = uVar2;
  if (0x18 < uVar2) {
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,0x18);
    uVar3 = uVar2 - 0x18;
  }
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,uVar3);
  if (0x18 < uVar1) {
    uVar1 = uVar2 - 0x17;
    uVar4 = uVar4 >> (uVar1 & 0x1f);
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,uVar4,0x18);
  }
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,uVar4,uVar1);
  return;
}



// ==== H264ExpGolombSigned @ 0001dbcc size=52

void H264ExpGolombSigned(undefined4 param_1,int param_2)

{
  if (0 < param_2) {
                    /* WARNING: Could not recover jumptable at 0x0001dbe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,param_2 * 2 + -1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001dbf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,param_2 * -2);
  return;
}



// ==== H264RbspTrailingBits @ 0001dc00 size=112

void H264RbspTrailingBits(int param_1)

{
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,1,1);
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,8 - *(int *)(param_1 + 0x14));
  return;
}



// ==== H264FillerRc @ 0001e190 size=252

int H264FillerRc(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_10;
  undefined4 local_c;
  undefined1 local_8;
  undefined1 local_7;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar2 = (uint)(PTR_DAT_000463fc + -0x6c7d) & 3;
  uVar3 = (uint)(PTR_DAT_000463fc + -0x6c80) & 3;
  local_7 = PTR_DAT_000463fc[-0x6c77];
  local_10 = (*(int *)(PTR_DAT_000463fc + -0x6c7d + -uVar2) << (3 - uVar2) * 8 |
             param_3 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar3) * 8 |
             *(uint *)(PTR_DAT_000463fc + -0x6c80 + -uVar3) >> uVar3 * 8;
  local_c = *(undefined4 *)(PTR_DAT_000463fc + -0x6c7c);
  local_8 = PTR_DAT_000463fc[-0x6c78];
  if (uVar4 == 0xffffffff) {
    uVar4 = 9;
    *(undefined4 *)(param_1 + 0x10) = 9;
  }
  uVar2 = uVar4;
  if ((param_2 != 0) && ((param_2 & 0x7f) == 0)) {
    uVar2 = uVar4 + 1;
  }
  uVar2 = uVar2 % 10;
  if (uVar2 == uVar4) {
    return 0;
  }
  bVar1 = *(byte *)((int)&local_10 + uVar2);
  *(uint *)(param_1 + 0x10) = uVar2;
  return bVar1 + 1;
}



// ==== H264Calculate @ 0001e28c size=328

int H264Calculate(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0;
  }
  if (param_2 == 0) {
    trap(0x1c00);
  }
  if (((int)(param_1 * param_2) / (int)param_2 == param_1) && (param_3 != 0)) {
    if (param_3 == 0) {
      trap(0x1c00);
    }
    return (int)(param_1 * param_2) / (int)param_3;
  }
  if ((int)param_1 < 0) {
    param_1 = -param_1;
    iVar4 = -1;
    if ((int)param_2 < 0) {
      iVar4 = 1;
      goto LAB_0001e3b8;
    }
  }
  else {
    iVar4 = 1;
    if ((int)param_2 < 0) {
      iVar4 = -1;
LAB_0001e3b8:
      param_2 = -param_2;
    }
  }
  if ((int)param_3 < 0) {
    iVar4 = -iVar4;
    param_3 = -param_3;
  }
  else if (param_3 == 0) goto LAB_0001e2dc;
  uVar3 = param_1;
  if ((int)param_1 < (int)param_2) {
    uVar3 = param_2;
    param_2 = param_1;
  }
  uVar5 = 0x1e;
  if (uVar3 != (uVar3 & 1)) {
    uVar2 = 0x1e;
    do {
      uVar5 = uVar2;
      uVar2 = uVar5 - 1;
    } while ((uVar3 << (uVar5 & 0x1f)) >> (uVar5 & 0x1f) != uVar3);
    uVar5 = uVar5 - 1;
  }
  uVar2 = 0;
  if (param_3 < param_2) {
    uVar1 = 1;
    do {
      uVar2 = uVar1;
      uVar1 = uVar2 + 1;
    } while (param_3 < param_2 >> (uVar2 & 0x1f));
    if (uVar5 < uVar2) {
LAB_0001e2dc:
      return iVar4 * 0x7fffffff;
    }
  }
  if (param_3 == 0) {
    trap(0x1c00);
  }
  return iVar4 * (((uVar3 << (uVar5 - uVar2 & 0x1f)) / param_3) * param_2 >> (uVar5 - uVar2 & 0x1f))
  ;
}



// ==== predict_cur_bitrate_by_motion_and_mad @ 0001e3d4 size=764

int predict_cur_bitrate_by_motion_and_mad(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  
  if (param_1 == 0) {
    return 0x100000;
  }
  uVar2 = 7;
  uVar4 = *(uint *)(param_1 + 0x14);
  uVar12 = (uint)(*(int *)(param_1 + 0x458) << 5) / uVar4;
  if (uVar4 == 0) {
    trap(0x1c00);
  }
  iVar9 = *(int *)(param_1 + 0x450);
  uVar13 = (uint)(*(int *)(param_1 + 0x47c) << 4) / uVar4;
  iVar10 = param_1;
  if (uVar4 == 0) {
    trap(0x1c00);
  }
  do {
    if (*(uint *)(iVar10 + 0x478) < uVar12) {
      uVar4 = uVar2 & 0xff;
      break;
    }
    uVar2 = uVar2 - 1;
    uVar4 = 0;
    iVar10 = iVar10 + -4;
  } while (uVar2 != 0xffffffff);
  uVar2 = 7;
  iVar10 = param_1;
  do {
    puVar1 = (uint *)(iVar10 + 0x49c);
    iVar10 = iVar10 + -4;
    if (*puVar1 < uVar13) {
      uVar3 = uVar2 & 0xff;
      if ((uVar2 & 0xff) != 7) {
        iVar5 = uVar3 + 1;
        goto LAB_0001e48c;
      }
      if (uVar4 == 7) {
        uVar2 = (uint)*(byte *)(param_1 + 0x503);
        goto LAB_0001e598;
      }
      iVar5 = uVar12 - *(int *)(param_1 + (uVar4 + 0x116) * 4 + 4);
      iVar10 = *(int *)(param_1 + (uVar4 + 0x117) * 4 + 4) - uVar12;
      iVar6 = iVar5 + iVar10;
      uVar2 = (uint)*(byte *)(param_1 + uVar4 * 8 + 0x4cb);
      if (iVar6 == 0) goto LAB_0001e598;
      iVar10 = uVar2 * iVar10;
      iVar5 = (uint)*(byte *)(param_1 + (uVar4 + 1) * 8 + 0x4cb) * iVar5;
      goto LAB_0001e580;
    }
    uVar2 = uVar2 - 1;
    iVar5 = 1;
  } while (uVar2 != 0xffffffff);
  uVar3 = 0;
LAB_0001e48c:
  if (uVar4 == 7) {
    iVar7 = uVar13 - *(int *)(param_1 + (uVar3 + 0x120) * 4);
    iVar10 = *(int *)(param_1 + (iVar5 + 0x120) * 4) - uVar13;
    iVar6 = iVar7 + iVar10;
    uVar2 = (uint)*(byte *)(param_1 + uVar3 + 0x4fc);
    if ((iVar6 != 0) &&
       (uVar2 = (int)(uVar2 * iVar10 + (uint)*(byte *)(param_1 + iVar5 + 0x4fc) * iVar7) / iVar6,
       iVar6 == 0)) {
      trap(0x1c00);
    }
  }
  else {
    iVar11 = param_1 + (uVar4 + 1) * 8;
    iVar7 = param_1 + uVar4 * 8;
    iVar8 = uVar12 - *(int *)(param_1 + (uVar4 + 0x116) * 4 + 4);
    iVar10 = *(int *)(param_1 + (uVar4 + 0x117) * 4 + 4) - uVar12;
    iVar6 = iVar8 + iVar10;
    uVar2 = (uint)*(byte *)(iVar7 + uVar3 + 0x4c4);
    uVar4 = uVar2;
    uVar12 = uVar2;
    if (iVar6 != 0) {
      uVar12 = (int)(uVar2 * iVar10 + (uint)*(byte *)(iVar11 + uVar3 + 0x4c4) * iVar8) / iVar6;
      if (iVar6 == 0) {
        trap(0x1c00);
      }
      uVar4 = (int)((uint)*(byte *)(iVar7 + iVar5 + 0x4c4) * iVar10 +
                   (uint)*(byte *)(iVar11 + iVar5 + 0x4c4) * iVar8) / iVar6;
      if (iVar6 == 0) {
        trap(0x1c00);
      }
    }
    iVar10 = uVar13 - *(int *)(param_1 + (uVar3 + 0x120) * 4);
    iVar5 = *(int *)(param_1 + (iVar5 + 0x120) * 4) - uVar13;
    iVar6 = iVar10 + iVar5;
    iVar10 = uVar4 * iVar10;
    if (iVar6 != 0) {
      iVar5 = uVar12 * iVar5;
LAB_0001e580:
      uVar2 = (iVar5 + iVar10) / iVar6;
      if (iVar6 == 0) {
        trap(0x1c00);
      }
    }
  }
LAB_0001e598:
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  uVar4 = 100;
  if ((int)uVar2 < 0x65) {
    uVar4 = uVar2;
  }
  iVar10 = (*(code *)PTR_H264Calculate_000465d4)(*(int *)(param_1 + 0x44c) - iVar9,uVar4,100);
  return iVar9 + iVar10;
}



// ==== predict_cur_bitrate_by_motion_and_mse @ 0001e6d0 size=764

int predict_cur_bitrate_by_motion_and_mse(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  
  if (param_1 == 0) {
    return 0x100000;
  }
  uVar2 = 7;
  uVar4 = *(uint *)(param_1 + 0x14);
  uVar12 = (uint)(*(int *)(param_1 + 0x458) << 5) / uVar4;
  if (uVar4 == 0) {
    trap(0x1c00);
  }
  iVar9 = *(int *)(param_1 + 0x450);
  uVar13 = (uint)(*(int *)(param_1 + 0x4a0) << 4) / uVar4;
  iVar10 = param_1;
  if (uVar4 == 0) {
    trap(0x1c00);
  }
  do {
    if (*(uint *)(iVar10 + 0x478) < uVar12) {
      uVar4 = uVar2 & 0xff;
      break;
    }
    uVar2 = uVar2 - 1;
    uVar4 = 0;
    iVar10 = iVar10 + -4;
  } while (uVar2 != 0xffffffff);
  uVar2 = 7;
  iVar10 = param_1;
  do {
    puVar1 = (uint *)(iVar10 + 0x4c0);
    iVar10 = iVar10 + -4;
    if (*puVar1 < uVar13) {
      uVar3 = uVar2 & 0xff;
      if ((uVar2 & 0xff) != 7) {
        iVar5 = uVar3 + 1;
        goto LAB_0001e788;
      }
      if (uVar4 == 7) {
        uVar2 = (uint)*(byte *)(param_1 + 0x503);
        goto LAB_0001e894;
      }
      iVar5 = uVar12 - *(int *)(param_1 + (uVar4 + 0x116) * 4 + 4);
      iVar10 = *(int *)(param_1 + (uVar4 + 0x117) * 4 + 4) - uVar12;
      iVar6 = iVar5 + iVar10;
      uVar2 = (uint)*(byte *)(param_1 + uVar4 * 8 + 0x4cb);
      if (iVar6 == 0) goto LAB_0001e894;
      iVar10 = uVar2 * iVar10;
      iVar5 = (uint)*(byte *)(param_1 + (uVar4 + 1) * 8 + 0x4cb) * iVar5;
      goto LAB_0001e87c;
    }
    uVar2 = uVar2 - 1;
    iVar5 = 1;
  } while (uVar2 != 0xffffffff);
  uVar3 = 0;
LAB_0001e788:
  if (uVar4 == 7) {
    iVar7 = uVar13 - *(int *)(param_1 + (uVar3 + 0x128) * 4 + 4);
    iVar10 = *(int *)(param_1 + (iVar5 + 0x128) * 4 + 4) - uVar13;
    iVar6 = iVar7 + iVar10;
    uVar2 = (uint)*(byte *)(param_1 + uVar3 + 0x4fc);
    if ((iVar6 != 0) &&
       (uVar2 = (int)(uVar2 * iVar10 + (uint)*(byte *)(param_1 + iVar5 + 0x4fc) * iVar7) / iVar6,
       iVar6 == 0)) {
      trap(0x1c00);
    }
  }
  else {
    iVar11 = param_1 + (uVar4 + 1) * 8;
    iVar7 = param_1 + uVar4 * 8;
    iVar8 = uVar12 - *(int *)(param_1 + (uVar4 + 0x116) * 4 + 4);
    iVar10 = *(int *)(param_1 + (uVar4 + 0x117) * 4 + 4) - uVar12;
    iVar6 = iVar8 + iVar10;
    uVar2 = (uint)*(byte *)(iVar7 + uVar3 + 0x4c4);
    uVar4 = uVar2;
    uVar12 = uVar2;
    if (iVar6 != 0) {
      uVar12 = (int)(uVar2 * iVar10 + (uint)*(byte *)(iVar11 + uVar3 + 0x4c4) * iVar8) / iVar6;
      if (iVar6 == 0) {
        trap(0x1c00);
      }
      uVar4 = (int)((uint)*(byte *)(iVar7 + iVar5 + 0x4c4) * iVar10 +
                   (uint)*(byte *)(iVar11 + iVar5 + 0x4c4) * iVar8) / iVar6;
      if (iVar6 == 0) {
        trap(0x1c00);
      }
    }
    iVar10 = uVar13 - *(int *)(param_1 + (uVar3 + 0x128) * 4 + 4);
    iVar5 = *(int *)(param_1 + (iVar5 + 0x128) * 4 + 4) - uVar13;
    iVar6 = iVar10 + iVar5;
    iVar10 = uVar4 * iVar10;
    if (iVar6 != 0) {
      iVar5 = uVar12 * iVar5;
LAB_0001e87c:
      uVar2 = (iVar5 + iVar10) / iVar6;
      if (iVar6 == 0) {
        trap(0x1c00);
      }
    }
  }
LAB_0001e894:
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  uVar4 = 100;
  if ((int)uVar2 < 0x65) {
    uVar4 = uVar2;
  }
  iVar10 = (*(code *)PTR_H264Calculate_000465d4)(*(int *)(param_1 + 0x44c) - iVar9,uVar4,100);
  return iVar9 + iVar10;
}



// ==== H1H264InitRc @ 0001eae8 size=776

undefined4 H1H264InitRc(undefined4 *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = param_1[0x12];
  if (iVar7 < 0x3301) {
    iVar2 = param_1[0x10];
    if (iVar2 == -0x100) {
      uVar3 = (*(code *)PTR_H264Calculate_000465d4)(param_1[0x1d],param_1[0x18],param_1[0x17]);
      iVar6 = (*(code *)(PTR_LAB_00046400 + -0x1634))(uVar3,param_1[5] << 8);
      iVar7 = param_1[0x12];
      iVar2 = param_1[0x11];
      if ((int)param_1[0x11] <= iVar6) {
        iVar2 = iVar6;
      }
      if (iVar7 < iVar2) {
        iVar2 = iVar7;
      }
      param_1[0x10] = iVar2;
    }
    if ((iVar2 <= iVar7) && ((int)param_1[0x11] <= iVar2)) {
      iVar6 = param_1[0x105];
      iVar7 = -8;
      if (-9 < (int)param_1[0x104]) {
        iVar7 = param_1[0x104];
      }
      if (iVar6 < -0x33) {
        iVar6 = -0x33;
      }
      iVar4 = -0x33;
      if (-0x34 < (int)param_1[0x106]) {
        iVar4 = param_1[0x106];
      }
      iVar5 = 7;
      if (iVar7 < 8) {
        iVar5 = iVar7;
      }
      if (0x33 < iVar6) {
        iVar6 = 0x33;
      }
      iVar7 = 0x33;
      if (iVar4 < 0x34) {
        iVar7 = iVar4;
      }
      param_1[0x104] = iVar5;
      param_1[0x105] = iVar6;
      param_1[0x106] = iVar7;
      if (param_1[3] == 1) {
        *param_1 = 1;
      }
      puVar1 = PTR_H264Calculate_000465d4;
      param_1[7] = param_1[5] * 0x180;
      param_1[0xe] = 1;
      param_1[0xc] = 2;
      param_1[0xd] = 0;
      param_1[0x13] = iVar2;
      param_1[0xf] = iVar2;
      param_1[0x15b] = 0;
      uVar3 = (*(code *)puVar1)(param_1[0x1d],param_1[0x18],param_1[0x17]);
      param_1[0x1e] = uVar3;
      puVar1 = PTR_EWLmemset_00046578;
      if (param_2 != 0) {
        param_1[0x90] = 3;
        param_1[0xd0] = 3;
        param_1[0x84] = 0;
        param_1[0x85] = 0;
        param_1[0x86] = 0;
        param_1[0xc4] = 0;
        param_1[0xc5] = 0;
        param_1[0xc6] = 0;
        (*(code *)puVar1)(param_1 + 0x54,0,0x80);
        puVar1 = PTR_EWLmemset_00046578;
        param_1[0x58] = param_1[0x10];
        param_1[0x59] = 0x38018;
        (*(code *)puVar1)(param_1 + 0x94,0,0x80);
        uVar3 = param_1[0xfe];
        param_1[0x99] = 0x38018;
        param_1[0x98] = param_1[0x10];
        param_1[0xff] = uVar3;
        param_1[0x2a] = uVar3;
        param_1[0x100] = uVar3;
        param_1[0x101] = uVar3;
        param_1[0xf4] = 0;
        param_1[0xf5] = 0;
        param_1[0xf9] = 0;
        param_1[0xfa] = 0;
        param_1[0x15a] = param_1[5] * 0xc;
        param_1[0x1f] = 0;
        param_1[0x23] = 0;
        param_1[0x22] = 0;
        param_1[0x3a] = param_1[3];
        if (param_1[3] != 0) {
          uVar3 = (*(code *)PTR_H264Calculate_000465d4)(param_1[0x1c],0x3c,100);
          puVar1 = PTR_H264Calculate_000465d4;
          param_1[0x28] = uVar3;
          uVar3 = (*(code *)puVar1)(90000,param_1[0x1c],param_1[0x1d]);
          puVar1 = PTR_H264Calculate_000465d4;
          param_1[0x19] = uVar3;
          iVar7 = (*(code *)puVar1)(90000,param_1[0x28],param_1[0x1d]);
          param_1[0x1a] = iVar7;
          param_1[0x3c] = iVar7;
          param_1[0x1b] = param_1[0x19] - iVar7;
          param_1[0x29] = param_1[0x1c] - param_1[0x28];
          param_1[0x28] = param_1[0x1c] - param_1[0x28];
          param_1[0x3e] = param_1[0x19] - iVar7;
          return 0;
        }
      }
      return 0;
    }
  }
  return 0xffffffff;
}



// ==== H264InitRc @ 0001edf0 size=1524

undefined4 H264InitRc(undefined4 *param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  byte bVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  undefined4 local_58 [17];
  
  puVar1 = PTR_H264Calculate_000465d4;
  if (param_1[0x10c] == 0) {
    uVar2 = (*(code *)PTR_H1H264InitRc_00046608)();
    return uVar2;
  }
  if (0x3300 < (int)param_1[0x12]) {
    return 0xffffffff;
  }
  iVar13 = param_1[0x114];
  bVar15 = *(byte *)(param_1 + 0x112);
  iVar3 = param_1[0x113] - iVar13;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  if (bVar15 == 0) {
    bVar15 = 1;
  }
  else if (8 < bVar15) {
    bVar15 = 8;
  }
  *(byte *)(param_1 + 0x112) = bVar15;
  iVar3 = (*(code *)puVar1)(iVar3,bVar15,8);
  puVar1 = PTR_H264Calculate_000465d4;
  iVar13 = iVar13 + iVar3;
  param_1[0x142] = param_1[0x10];
  param_1[0x1d] = iVar13;
  iVar3 = (*(code *)puVar1)(iVar13,param_1[0x18],param_1[0x17]);
  iVar13 = param_1[0x10];
  iVar14 = param_1[5];
  if (iVar13 != -0x100) goto LAB_0001eec8;
  iVar13 = iVar14 << 8;
  uVar17 = (*(code *)PTR___udivdi3_00046570)
                     (iVar3 * 1000,iVar3 * 1000 >> 0x1f,iVar13,iVar13 >> 0x1f);
  uVar8 = (uint)uVar17;
  if ((int)((ulonglong)uVar17 >> 0x20) == 0) {
    iVar13 = 0x2000;
    if (uVar8 < 0x14) {
      param_1[0x142] = 0x20;
      param_1[0x10] = 0x2000;
      goto LAB_0001eec8;
    }
    iVar13 = 0x1f00;
    if (uVar8 < 0x1e) {
      param_1[0x142] = 0x1f;
      param_1[0x10] = 0x1f00;
      goto LAB_0001eec8;
    }
    iVar13 = 0x1e00;
    if (uVar8 < 0x28) {
      param_1[0x142] = 0x1e;
      param_1[0x10] = 0x1e00;
      goto LAB_0001eec8;
    }
    iVar13 = 0x1d00;
    if (uVar8 < 0x32) {
      param_1[0x142] = 0x1d;
      param_1[0x10] = 0x1d00;
      goto LAB_0001eec8;
    }
    iVar13 = 0x1c00;
    if (uVar8 < 0x3c) {
      param_1[0x142] = 0x1c;
      param_1[0x10] = 0x1c00;
      goto LAB_0001eec8;
    }
    if (uVar8 < 0x50) {
      iVar13 = 0x1b00;
      param_1[0x142] = 0x1b;
      param_1[0x10] = 0x1b00;
      goto LAB_0001eec8;
    }
  }
  iVar13 = 0x1a00;
  param_1[0x142] = 0x1a;
  param_1[0x10] = 0x1a00;
LAB_0001eec8:
  *(undefined1 *)(param_1 + 0x115) = 1;
  param_1[0x117] = 0xf;
  param_1[0x118] = 0x28;
  param_1[0x119] = 100;
  param_1[0x11a] = 500;
  param_1[0x11b] = 0x44c;
  param_1[0x11c] = 0x834;
  param_1[0x11d] = 0xa28;
  param_1[0x11e] = 3000;
  param_1[0x120] = 0x30;
  param_1[0x121] = 0x60;
  param_1[0x122] = 0x90;
  param_1[0x123] = 0xc0;
  param_1[0x125] = 0x180;
  param_1[0x126] = 0x2d0;
  param_1[0x127] = 0x3c0;
  param_1[0x129] = 0xa0;
  puVar1 = PTR_DAT_000463fc;
  param_1[0x12a] = 0xb0;
  iVar3 = param_1[0x11];
  puVar16 = (undefined4 *)(puVar1 + -0x6b54);
  iVar12 = param_1[0x12];
  param_1[0x124] = 0x100;
  param_1[299] = 0xd0;
  param_1[0x12e] = 0x100;
  param_1[300] = 0xe0;
  param_1[0x12f] = 0x120;
  param_1[0x10d] = iVar3;
  param_1[0x10e] = iVar3;
  param_1[0x10f] = iVar12;
  param_1[0x15b] = 0;
  param_1[0x11f] = 0;
  param_1[0x116] = 0;
  param_1[0x12d] = 0xf0;
  param_1[0x130] = 0x130;
  puVar4 = local_58;
  do {
    uVar11 = *puVar16;
    uVar10 = puVar16[1];
    uVar9 = puVar16[2];
    uVar2 = puVar16[3];
    puVar16 = puVar16 + 4;
    *puVar4 = uVar11;
    puVar4[1] = uVar10;
    puVar4[2] = uVar9;
    puVar4[3] = uVar2;
    puVar4 = puVar4 + 4;
  } while (puVar16 != (undefined4 *)(puVar1 + -0x6b14));
  puVar16 = param_1 + 0x131;
  puVar4 = local_58;
  do {
    puVar5 = puVar4 + 4;
    uVar10 = puVar4[1];
    *puVar16 = *puVar4;
    uVar9 = puVar4[2];
    uVar2 = puVar4[3];
    puVar16[1] = uVar10;
    puVar16[2] = uVar9;
    puVar16[3] = uVar2;
    puVar16 = puVar16 + 4;
    puVar4 = puVar5;
  } while (puVar5 != local_58 + 0x10);
  if ((iVar13 <= iVar12) && (iVar3 <= iVar13)) {
    iVar12 = param_1[0x105];
    iVar3 = -8;
    if (-9 < (int)param_1[0x104]) {
      iVar3 = param_1[0x104];
    }
    if (iVar12 < -0x33) {
      iVar12 = -0x33;
    }
    iVar6 = -0x33;
    if (-0x34 < (int)param_1[0x106]) {
      iVar6 = param_1[0x106];
    }
    iVar7 = 7;
    if (iVar3 < 8) {
      iVar7 = iVar3;
    }
    if (0x33 < iVar12) {
      iVar12 = 0x33;
    }
    iVar3 = 0x33;
    if (iVar6 < 0x34) {
      iVar3 = iVar6;
    }
    param_1[0x104] = iVar7;
    param_1[0x105] = iVar12;
    param_1[0x106] = iVar3;
    if (param_1[3] == 1) {
      *param_1 = 1;
    }
    puVar1 = PTR_H264Calculate_000465d4;
    param_1[7] = iVar14 * 0x180;
    param_1[0xe] = 1;
    param_1[0xc] = 2;
    param_1[0xd] = 0;
    param_1[0x13] = iVar13;
    param_1[0xf] = iVar13;
    uVar2 = (*(code *)puVar1)(param_1[0x1d],param_1[0x18],param_1[0x17]);
    param_1[0x1e] = uVar2;
    puVar1 = PTR_EWLmemset_00046578;
    if (param_2 != 0) {
      param_1[0x90] = 3;
      param_1[0xd0] = 3;
      param_1[0x156] = 1;
      param_1[0x84] = 0;
      param_1[0x85] = 0;
      param_1[0x86] = 0;
      param_1[0xc4] = 0;
      param_1[0xc5] = 0;
      param_1[0xc6] = 0;
      param_1[0x10a] = 0;
      param_1[0x14d] = 0;
      (*(code *)puVar1)(param_1 + 0x143,0,0x28);
      param_1[0x10b] = 5;
      param_1[0x151] = 5;
      param_1[0x152] = 0x19;
      param_1[0x153] = 0x96;
      puVar1 = PTR_EWLmemset_00046578;
      param_1[0x154] = 0x3c;
      param_1[0x111] = 0xf;
      param_1[0x157] = 1;
      param_1[0x14e] = 0;
      param_1[0x109] = 0;
      param_1[0x155] = 0;
      (*(code *)puVar1)(param_1 + 0x54,0,0x80);
      puVar1 = PTR_EWLmemset_00046578;
      param_1[0x58] = param_1[0x10];
      param_1[0x59] = 0x38018;
      (*(code *)puVar1)(param_1 + 0x94,0,0x80);
      uVar2 = param_1[0xfe];
      param_1[0x99] = 0x38018;
      param_1[0x98] = param_1[0x10];
      param_1[0xff] = uVar2;
      param_1[0x2a] = uVar2;
      param_1[0x100] = uVar2;
      param_1[0x101] = uVar2;
      param_1[0xf4] = 0;
      param_1[0xf5] = 0;
      param_1[0xf9] = 0;
      param_1[0xfa] = 0;
      param_1[0x15a] = param_1[5] * 0xc;
      param_1[0x1f] = 0;
      param_1[0x23] = 0;
      param_1[0x22] = 0;
      param_1[0x3a] = param_1[3];
      if (param_1[3] != 0) {
        uVar2 = (*(code *)PTR_H264Calculate_000465d4)(param_1[0x1c],0x3c,100);
        puVar1 = PTR_H264Calculate_000465d4;
        param_1[0x28] = uVar2;
        uVar2 = (*(code *)puVar1)(90000,param_1[0x1c],param_1[0x1d]);
        puVar1 = PTR_H264Calculate_000465d4;
        param_1[0x19] = uVar2;
        iVar3 = (*(code *)puVar1)(90000,param_1[0x28],param_1[0x1d]);
        param_1[0x1a] = iVar3;
        param_1[0x1b] = param_1[0x19] - iVar3;
        param_1[0x29] = param_1[0x1c] - param_1[0x28];
        param_1[0x28] = param_1[0x1c] - param_1[0x28];
        param_1[0x3c] = iVar3;
        param_1[0x3e] = param_1[0x19] - iVar3;
        return 0;
      }
    }
    return 0;
  }
  return 0xffffffff;
}



// ==== H1H264AfterPicRc @ 0001fc94 size=832

undefined4 H1H264AfterPicRc(int param_1,int param_2,int param_3,uint param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  param_3 = param_3 * 8;
  *(uint *)(param_1 + 0x28) = param_4;
  *(int *)(param_1 + 0x3d4) = param_3;
  *(int *)(param_1 + 0x20) = param_2;
  *(int *)(param_1 + 0x3ec) = *(int *)(param_1 + 0x3ec) + param_3;
  *(int *)(param_1 + 0x3f4) = *(int *)(param_1 + 0x3f4) + 1;
  *(float *)(param_1 + 0x2c) = (float)param_4 / (float)*(int *)(param_1 + 0x14);
  if ((*(int *)(param_1 + 0x30) != 2) && (*(int *)(param_1 + 0x30) != 7)) {
    if (param_2 == 0) {
      param_2 = 1;
    }
    uVar2 = (*(code *)PTR_H264Calculate_000465d4)(param_3,0x100,param_2);
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    if ((*(int *)(param_1 + 0x30) != 2) && (iVar4 = param_1 + 0x1d0, *(int *)(param_1 + 0x30) != 7))
    {
      iVar7 = *(int *)(param_1 + 0x3d0);
      goto LAB_0001fd60;
    }
  }
  iVar7 = *(int *)(param_1 + 0x3d0);
  iVar4 = param_1 + 0x2d0;
LAB_0001fd60:
  (*(code *)(PTR_LAB_00046400 + -0x1efc))(iVar4,param_3 - iVar7,*(undefined4 *)(param_1 + 0x3fc));
  iVar4 = *(int *)(param_1 + 0x4c);
  if ((*(int *)(param_1 + 0x30) == 2) || (*(int *)(param_1 + 0x30) == 7)) {
    uVar2 = (*(code *)PTR_H264Calculate_000465d4)(param_3,0x80,*(undefined4 *)(param_1 + 0x14));
    uVar5 = *(undefined4 *)(PTR_DAT_000463fc + (iVar4 * 10 >> 8) * 4 + -0x6b14);
    iVar7 = param_1 + *(int *)(param_1 + 700) * 4;
    *(int *)(param_1 + 0x260) = iVar4;
    iVar4 = *(int *)(param_1 + 700) + 1;
    *(undefined4 *)(iVar7 + 0x264) = uVar5;
    *(undefined4 *)(iVar7 + 0x290) = uVar2;
    if (9 < iVar4) {
      iVar4 = 0;
    }
    *(int *)(param_1 + 700) = iVar4;
    if (*(int *)(param_1 + 0x2c0) < 10) {
      *(int *)(param_1 + 0x2c0) = *(int *)(param_1 + 0x2c0) + 1;
    }
    (*(code *)(PTR_LAB_00046400 + -0xc1c))(param_1 + 0x250);
    iVar4 = *(int *)(param_1 + 0xc);
    iVar7 = *(int *)(param_1 + 0xa0);
  }
  else {
    uVar2 = (*(code *)PTR_H264Calculate_000465d4)();
    uVar5 = *(undefined4 *)(PTR_DAT_000463fc + (iVar4 * 10 >> 8) * 4 + -0x6b14);
    iVar7 = param_1 + *(int *)(param_1 + 0x1bc) * 4;
    *(int *)(param_1 + 0x160) = iVar4;
    iVar4 = *(int *)(param_1 + 0x1bc) + 1;
    *(undefined4 *)(iVar7 + 0x164) = uVar5;
    *(undefined4 *)(iVar7 + 400) = uVar2;
    if (9 < iVar4) {
      iVar4 = 0;
    }
    *(int *)(param_1 + 0x1bc) = iVar4;
    puVar1 = PTR_LAB_00046400;
    if (*(int *)(param_1 + 0x1c0) < 10) {
      *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + 1;
    }
    (*(code *)(puVar1 + -0xc1c))(param_1 + 0x150);
    iVar4 = *(int *)(param_1 + 0xc);
    iVar7 = *(int *)(param_1 + 0xa0);
  }
  if ((iVar4 == 1) && (uVar2 = 0xffffffff, *(int *)(param_1 + 0x70) - iVar7 < param_3)) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  else {
    iVar6 = param_3 + *(int *)(param_1 + 0x8c);
    iVar3 = iVar6 - *(int *)(param_1 + 0x88);
    iVar8 = param_3 - *(int *)(param_1 + 0x3d0);
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + param_3;
    *(int *)(param_1 + 0xa0) = param_3 + iVar7;
    *(int *)(param_1 + 0x8c) = iVar6;
    *(int *)(param_1 + 0x3d8) = *(int *)(param_1 + 0x3d8) + *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x3dc) = *(int *)(param_1 + 0x3dc) + iVar3;
    *(int *)(param_1 + 0x3e0) = *(int *)(param_1 + 0x3e0) + iVar8;
    if (iVar4 != 0) {
      iVar4 = (*(code *)PTR_H264Calculate_000465d4)
                        (90000,*(int *)(param_1 + 0x70) - (param_3 + iVar7),
                         *(undefined4 *)(param_1 + 0x74));
      *(int *)(param_1 + 0x68) = iVar4;
      iVar7 = *(int *)(param_1 + 100) - iVar4;
      *(int *)(param_1 + 0xf0) = iVar4;
      *(int *)(param_1 + 0x6c) = iVar7;
      *(int *)(param_1 + 0xf8) = iVar7;
      return 0;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// ==== H264AfterPicRc @ 0001ffd4 size=884

undefined4 H264AfterPicRc(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x430) != 0) {
    param_3 = param_3 * 8;
    *(undefined4 *)(param_1 + 0x20) = param_2;
    *(undefined4 *)(param_1 + 0x28) = param_4;
    *(int *)(param_1 + 0x3d4) = param_3;
    *(int *)(param_1 + 0x3f4) = *(int *)(param_1 + 0x3f4) + 1;
    *(int *)(param_1 + 0x3ec) = *(int *)(param_1 + 0x3ec) + param_3;
    if ((*(int *)(param_1 + 0x30) == 2) || (*(int *)(param_1 + 0x30) == 7)) {
      iVar3 = param_1 + 0x2d0;
      *(undefined4 *)(param_1 + 0x55c) = 1;
      *(int *)(param_1 + 0x534) = param_3;
      iVar4 = *(int *)(param_1 + 0x3d0);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x3d0);
      iVar3 = param_1 + 0x1d0;
    }
    iVar5 = iVar4 << 1;
    if (param_3 - iVar4 <= iVar4 << 1) {
      iVar5 = param_3 - iVar4;
    }
    (*(code *)(PTR_LAB_00046400 + -0x1efc))(iVar3,iVar5,*(undefined4 *)(param_1 + 0x3fc));
    if ((*(int *)(param_1 + 0x30) == 2) || (*(int *)(param_1 + 0x30) == 7)) {
      iVar4 = *(int *)(param_1 + 0x4c);
      uVar2 = (*(code *)PTR_H264Calculate_000465d4)(param_3,0x80,*(undefined4 *)(param_1 + 0x14));
      *(int *)(param_1 + 0x260) = iVar4;
      iVar3 = param_1 + *(int *)(param_1 + 700) * 4;
      iVar5 = *(int *)(param_1 + 700) + 1;
      *(undefined4 *)(iVar3 + 0x264) =
           *(undefined4 *)(PTR_DAT_000463fc + (iVar4 * 10 >> 8) * 4 + -0x6b14);
      *(undefined4 *)(iVar3 + 0x290) = uVar2;
      if (9 < iVar5) {
        iVar5 = 0;
      }
      *(int *)(param_1 + 700) = iVar5;
      if (*(int *)(param_1 + 0x2c0) < 10) {
        *(int *)(param_1 + 0x2c0) = *(int *)(param_1 + 0x2c0) + 1;
      }
      (*(code *)(PTR_LAB_00046400 + -0xc1c))(param_1 + 0x250);
      iVar3 = *(int *)(param_1 + 0x8c);
    }
    else {
      iVar3 = param_3 - *(int *)(param_1 + 0x53c);
      iVar4 = (*(code *)PTR_H264Calculate_000465d4)
                        (*(int *)(param_1 + 0x53c),*(undefined4 *)(param_1 + 0x550),100);
      if ((*(int *)(param_1 + 0x428) == 0) && (iVar3 < -iVar4)) {
        iVar4 = (*(code *)PTR_H264Calculate_000465d4)
                          (iVar3 + iVar4,*(undefined4 *)(param_1 + 0x554),100);
        iVar3 = iVar3 + iVar4;
      }
      iVar3 = iVar3 + *(int *)(param_1 + 0x538);
      iVar4 = (*(int *)(param_1 + 0x444) * *(int *)(param_1 + 0x540)) / 0x4b;
      *(int *)(param_1 + 0x538) = iVar3;
      if (iVar4 < iVar3) {
        *(int *)(param_1 + 0x538) = iVar4;
        iVar3 = iVar4;
      }
      puVar1 = PTR_H264Calculate_000465d4;
      if (iVar3 < -iVar4) {
        *(int *)(param_1 + 0x538) = -iVar4;
      }
      iVar4 = *(int *)(param_1 + 0x4c);
      uVar2 = (*(code *)puVar1)(param_3,0x80,*(undefined4 *)(param_1 + 0x14));
      *(int *)(param_1 + 0x160) = iVar4;
      iVar3 = param_1 + *(int *)(param_1 + 0x1bc) * 4;
      iVar5 = *(int *)(param_1 + 0x1bc) + 1;
      *(undefined4 *)(iVar3 + 0x164) =
           *(undefined4 *)(PTR_DAT_000463fc + (iVar4 * 10 >> 8) * 4 + -0x6b14);
      *(undefined4 *)(iVar3 + 400) = uVar2;
      if (9 < iVar5) {
        iVar5 = 0;
      }
      *(int *)(param_1 + 0x1bc) = iVar5;
      if (*(int *)(param_1 + 0x1c0) < 10) {
        *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + 1;
      }
      (*(code *)(PTR_LAB_00046400 + -0xc1c))(param_1 + 0x150);
      iVar3 = *(int *)(param_1 + 0x8c);
    }
    iVar4 = (param_3 + iVar3) - *(int *)(param_1 + 0x88);
    iVar5 = param_3 - *(int *)(param_1 + 0x3d0);
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + param_3;
    *(int *)(param_1 + 0x3dc) = *(int *)(param_1 + 0x3dc) + iVar4;
    *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + param_3;
    *(int *)(param_1 + 0x8c) = param_3 + iVar3;
    *(int *)(param_1 + 0x3d8) = *(int *)(param_1 + 0x3d8) + *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x3e0) = *(int *)(param_1 + 0x3e0) + iVar5;
    *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(param_1 + 0x510);
    *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_1 + 0x514);
    *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_1 + 0x518);
    *(int *)(param_1 + 0x518) = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x55c) = *(int *)(param_1 + 0x55c) + 1;
    return 0;
  }
  uVar2 = (*(code *)PTR_H1H264AfterPicRc_000464d8)();
  return uVar2;
}



// ==== H1H264BeforePicRc @ 0002073c size=1288

void H1H264BeforePicRc(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  
  iVar6 = param_1[0x20];
  iVar2 = param_2 + param_1[0x1f];
  iVar7 = param_1[3];
  param_1[0xe] = 1;
  param_1[0xc] = param_3;
  param_1[0x1f] = iVar2;
  iVar3 = param_1[0x1d];
  if (iVar6 <= iVar2) {
    iVar9 = param_1[0x2b];
    iVar1 = param_1[0x29] - iVar3;
    do {
      iVar4 = iVar1;
      iVar9 = iVar9 + 1;
      iVar5 = (param_1[0x23] - param_1[0x29]) + iVar4;
      iVar2 = iVar2 - iVar6;
      if (iVar9 == 0) {
        trap(0x1c00);
      }
      iVar1 = iVar4 - iVar3;
    } while (iVar6 <= iVar2);
    param_1[0x1f] = iVar2;
    param_1[0x23] = iVar5;
    param_1[0x29] = iVar4;
    param_1[0x2b] = iVar9;
    param_1[0x2c] = iVar5 / iVar9 + iVar3;
  }
  iVar2 = (*(code *)PTR_H264Calculate_000465d4)(iVar3,iVar2,iVar6);
  param_1[0x22] = iVar2;
  if (iVar7 == 0) {
LAB_0002083c:
    iVar3 = param_1[0x23];
  }
  else {
    iVar3 = param_1[0x29];
    if (iVar2 <= iVar3) {
      param_1[0x28] = iVar3 - iVar2;
      goto LAB_0002083c;
    }
    param_1[0x28] = 0;
    iVar3 = (iVar2 - iVar3) + param_1[0x23];
    param_1[0x23] = iVar3;
    param_1[0x29] = iVar2;
  }
  if (iVar3 < 0x20000000) {
    iVar6 = -iVar3;
    if (-0x20000000 < iVar3) goto LAB_0002085c;
    param_1[0x23] = -0x1fffffff;
    iVar2 = iVar2 + 0x1fffffff;
    if (0x1fffffff < iVar2) goto LAB_00020a90;
LAB_0002086c:
    if (iVar2 < -0x1fffffff) {
      iVar2 = -0x1fffffff;
    }
    iVar3 = param_1[0x2a];
    if (iVar3 != 0) goto LAB_0002088c;
LAB_00020aa4:
    pcVar8 = (code *)(PTR_LAB_00046400 + -0x1f30);
    param_1[0x2a] = param_1[0xff] + -1;
    param_1[0x90] = 3;
    (*pcVar8)(param_1 + 0x74);
    iVar6 = param_1[0xc];
    if (iVar6 != param_1[0xd]) {
      param_1[0xd0] = 3;
      (*pcVar8)(param_1 + 0xb4,param_1[0xff]);
      iVar6 = param_1[0xc];
      iVar3 = param_1[0x100];
      goto joined_r0x00020af8;
    }
  }
  else {
    param_1[0x23] = 0x1fffffff;
    iVar6 = -0x1fffffff;
LAB_0002085c:
    iVar2 = iVar2 + iVar6;
    if (iVar2 < 0x20000000) goto LAB_0002086c;
LAB_00020a90:
    iVar2 = 0x1fffffff;
    iVar3 = param_1[0x2a];
    if (iVar3 == 0) goto LAB_00020aa4;
LAB_0002088c:
    iVar6 = param_1[0xc];
    param_1[0x2a] = iVar3 + -1;
  }
  iVar3 = param_1[0x100];
joined_r0x00020af8:
  if ((iVar6 == 2) || (iVar6 == 7)) {
    iVar1 = 0;
    iVar7 = param_1[0x1e];
  }
  else {
    iVar7 = param_1[0x1e];
    if (iVar3 < 2) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(code *)(PTR_LAB_00046400 + -0x205c))(param_1 + 0xd4,10);
      iVar1 = ((iVar3 * iVar7 * iVar1) / 100 - iVar7) / (iVar3 + -1);
      if (iVar3 + -1 == 0) {
        trap(0x1c00);
      }
      if (iVar1 < 0) {
        iVar1 = 0;
      }
    }
  }
  iVar4 = param_1[0x101];
  iVar5 = param_1[0xff];
  iVar9 = -1;
  if (iVar5 < 1) {
    iVar5 = 1;
  }
  iVar2 = (iVar3 - iVar4) * iVar1 + iVar2;
  iVar3 = (param_1[6] + 6) * 0x10;
  if (-1 < iVar2) {
    iVar9 = 1;
  }
  if (iVar5 == 0) {
    trap(0x1c00);
  }
  iVar2 = (iVar7 - iVar1) + ((iVar9 * iVar5) / 2 + iVar2) / iVar5;
  if (iVar2 < iVar3) {
    iVar2 = iVar3;
  }
  param_1[0xf4] = iVar2;
  if (param_1[2] == 0) {
    iVar1 = *param_1;
  }
  else {
    iVar3 = iVar7 >> 0x1f;
    iVar2 = iVar7 / 3 + iVar3;
    iVar1 = *param_1;
    iVar7 = param_1[0x25];
    if (((iVar1 == 0) || (iVar7 == 0)) && (param_1[0x22] - param_1[0x23] < iVar3 - iVar2)) {
      iVar7 = iVar7 + 1;
      param_1[0x25] = iVar7;
    }
    if ((iVar2 - iVar3 < param_1[0x22] - param_1[0x23]) && (0 < iVar7)) {
      iVar7 = iVar7 + -1;
      param_1[0x25] = iVar7;
    }
    if (param_1[0x26] < iVar7) {
      param_1[0x26] = param_1[0x26] + 1;
      param_1[0xe] = 0;
    }
    else {
      param_1[0x26] = 0;
    }
  }
  if (iVar1 == 1) {
    (*(code *)(PTR_LAB_00046400 + 0x424))(param_1);
    iVar6 = param_1[0xc];
    iVar4 = param_1[0x101];
    iVar2 = param_1[0x10];
  }
  else {
    iVar2 = param_1[0xf];
  }
  iVar7 = param_1[0x11];
  iVar3 = param_1[0x12];
  if (iVar2 < iVar7) {
    iVar2 = iVar7;
  }
  if (iVar3 < iVar2) {
    iVar2 = iVar3;
  }
  param_1[0x10] = iVar2;
  param_1[0x13] = iVar2;
  if ((iVar6 == 2) || (iVar6 == 7)) {
    iVar1 = param_1[0x103];
    if ((iVar1 == 0) && ((iVar1 = iVar2, param_1[0xd] != 2 && (param_1[0xd] != 7)))) {
      iVar1 = iVar2 + param_1[0x102];
    }
    if (iVar1 < iVar7) {
      iVar1 = iVar7;
    }
    iVar2 = iVar1;
    if (iVar3 < iVar1) {
      iVar2 = iVar3;
    }
    param_1[0x10] = iVar2;
    if (1 < iVar4) {
      param_1[0x100] = iVar4;
    }
    param_1[0x101] = 1;
  }
  else {
    iVar4 = iVar4 + 1;
    param_1[0xf9] = param_1[0xf9] + iVar2;
    param_1[0xfa] = param_1[0xfa] + 1;
    param_1[0x101] = iVar4;
    if (param_1[0x100] < iVar4) {
      param_1[0x100] = iVar4;
    }
  }
  param_1[0xd] = iVar6;
  param_1[0x40] = param_1[0x40] + param_2;
  param_1[10] = 0;
  param_1[0x14] = iVar2;
  param_1[0x15] = iVar2;
  param_1[8] = 0;
  param_1[0x42] = 0;
  return;
}



// ==== H264BeforePicRc @ 00020c44 size=1664

void H264BeforePicRc(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_1[0x10c] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00020ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_H1H264BeforePicRc_000465c8)();
    return;
  }
  if ((char)param_1[0x115] == '\x01') {
    if (param_1[1] == 0) {
      iVar5 = (*(code *)PTR_predict_cur_bitrate_by_motion_and_mad_000465d8)();
    }
    else {
      iVar5 = (*(code *)PTR_predict_cur_bitrate_by_motion_and_mse_0004657c)();
    }
  }
  else {
    iVar5 = 0;
    if ((char)param_1[0x115] == '\0') {
      uVar8 = (uint)(param_1[0x116] << 5) / (uint)param_1[5];
      if (param_1[5] == 0) {
        trap(0x1c00);
      }
      iVar5 = param_1[0x114];
      iVar6 = param_1[0x113] - iVar5;
      if ((uint)param_1[0x11e] < uVar8) {
        iVar6 = (*(code *)PTR_H264Calculate_000465d4)(iVar6,8,8);
        iVar5 = iVar5 + iVar6;
      }
      else {
        if ((uint)param_1[0x11d] < uVar8) {
          iVar2 = (*(code *)PTR_H264Calculate_000465d4)(iVar6,7,8);
          iVar5 = iVar5 + iVar2;
          iVar6 = (*(code *)PTR_H264Calculate_000465d4)(iVar6,1,8);
          iVar1 = param_1[0x11d];
          iVar2 = param_1[0x11e];
        }
        else if ((uint)param_1[0x11c] < uVar8) {
          iVar2 = (*(code *)PTR_H264Calculate_000465d4)(iVar6,6,8);
          iVar5 = iVar5 + iVar2;
          iVar6 = (*(code *)PTR_H264Calculate_000465d4)(iVar6,1,8);
          iVar1 = param_1[0x11c];
          iVar2 = param_1[0x11d];
        }
        else if ((uint)param_1[0x11b] < uVar8) {
          iVar2 = (*(code *)PTR_H264Calculate_000465d4)(iVar6,5,8);
          iVar5 = iVar5 + iVar2;
          iVar6 = (*(code *)PTR_H264Calculate_000465d4)(iVar6,1,8);
          iVar1 = param_1[0x11b];
          iVar2 = param_1[0x11c];
        }
        else if ((uint)param_1[0x11a] < uVar8) {
          iVar2 = (*(code *)PTR_H264Calculate_000465d4)(iVar6,4,8);
          iVar5 = iVar5 + iVar2;
          iVar6 = (*(code *)PTR_H264Calculate_000465d4)(iVar6,1,8);
          iVar1 = param_1[0x11a];
          iVar2 = param_1[0x11b];
        }
        else if ((uint)param_1[0x119] < uVar8) {
          iVar2 = (*(code *)PTR_H264Calculate_000465d4)(iVar6,3,8);
          iVar5 = iVar5 + iVar2;
          iVar6 = (*(code *)PTR_H264Calculate_000465d4)(iVar6,1,8);
          iVar1 = param_1[0x119];
          iVar2 = param_1[0x11a];
        }
        else if ((uint)param_1[0x118] < uVar8) {
          iVar2 = (*(code *)PTR_H264Calculate_000465d4)(iVar6,2,8);
          iVar5 = iVar5 + iVar2;
          iVar6 = (*(code *)PTR_H264Calculate_000465d4)(iVar6,1,8);
          iVar1 = param_1[0x118];
          iVar2 = param_1[0x119];
        }
        else {
          if (uVar8 <= (uint)param_1[0x117]) {
            iVar6 = (*(code *)PTR_H264Calculate_000465d4)();
            if (param_1[0x117] + 1U == 0) {
              trap(0x1c00);
            }
            iVar5 = (uVar8 * iVar6) / (param_1[0x117] + 1U) + iVar5;
            goto LAB_00020cc4;
          }
          iVar2 = (*(code *)PTR_H264Calculate_000465d4)(iVar6,1,8);
          iVar5 = iVar5 + iVar2;
          iVar6 = (*(code *)PTR_H264Calculate_000465d4)(iVar6,1,8);
          iVar1 = param_1[0x117];
          iVar2 = param_1[0x118];
        }
        uVar7 = (iVar2 + 1) - iVar1;
        if (uVar7 == 0) {
          trap(0x1c00);
        }
        iVar5 = (iVar6 * (uVar8 - iVar1)) / uVar7 + iVar5;
      }
    }
  }
LAB_00020cc4:
  param_1[0xe] = 1;
  param_1[0xc] = param_3;
  if (param_1[0x2a] == 0) {
    pcVar4 = (code *)(PTR_LAB_00046400 + -0x1f30);
    param_1[0x2a] = param_1[0xff] + -1;
    param_1[0x90] = 3;
    (*pcVar4)(param_1 + 0x74);
    if (param_1[0xc] != param_1[0xd]) {
      param_1[0xd0] = 3;
      (*pcVar4)(param_1 + 0xb4,param_1[0xff]);
    }
  }
  else {
    param_1[0x2a] = param_1[0x2a] + -1;
  }
  iVar6 = param_1[0xff];
  if (iVar6 < 1) {
    iVar6 = 1;
  }
  iVar5 = (*(code *)PTR_H264Calculate_000465d4)(iVar5,param_1[0x18],param_1[0x17]);
  iVar5 = iVar6 * iVar5;
  param_1[0x150] = iVar5;
  if (iVar6 == 1) {
    iVar5 = iVar5 - param_1[0x14d];
  }
  else {
    iVar2 = -1;
    iVar6 = iVar6 + -1;
    if (-1 < iVar5 - param_1[0x14d]) {
      iVar2 = 1;
    }
    iVar5 = ((iVar5 - param_1[0x14d]) + (iVar6 * iVar2) / 2) / iVar6;
    if (iVar6 == 0) {
      trap(0x1c00);
    }
  }
  iVar6 = param_1[0x151];
  param_1[0x14f] = iVar5;
  if (iVar6 == 0) {
    iVar2 = param_1[0x14e];
  }
  else {
    iVar2 = -1;
    if (-1 < param_1[0x14e]) {
      iVar2 = 1;
    }
    iVar2 = (param_1[0x14e] + (iVar6 * iVar2) / 2) / iVar6;
    if (iVar6 == 0) {
      trap(0x1c00);
    }
  }
  iVar1 = param_1[0x12];
  iVar3 = (param_1[6] + 6) * 0x10;
  param_1[0x10d] = 0xa00;
  iVar6 = iVar5 - iVar2;
  if (iVar5 - iVar2 < iVar3) {
    iVar6 = iVar3;
  }
  param_1[0xf4] = iVar6;
  param_1[0x10e] = 0xa00;
  param_1[0x10f] = iVar1;
  if (*param_1 == 1) {
    (*(code *)(PTR_LAB_00046400 + 0x424))(param_1);
    iVar5 = param_1[0x10];
    iVar1 = param_1[0x12];
  }
  else {
    iVar5 = param_1[0xf];
  }
  iVar6 = param_1[0x11];
  iVar2 = param_1[0xc];
  if (iVar5 < iVar6) {
    iVar5 = iVar6;
  }
  if (iVar1 < iVar5) {
    iVar5 = iVar1;
  }
  param_1[0x10] = iVar5;
  param_1[0x13] = iVar5;
  if ((iVar2 == 2) || (iVar2 == 7)) {
    iVar3 = param_1[0x103];
    if ((iVar3 == 0) && ((iVar3 = iVar5, param_1[0xd] != 2 && (param_1[0xd] != 7)))) {
      iVar3 = iVar5 + param_1[0x102];
    }
    if (iVar3 < iVar6) {
      iVar3 = iVar6;
    }
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    param_1[0x10] = iVar3;
    if (1 < param_1[0x101]) {
      param_1[0x100] = param_1[0x101];
    }
    iVar5 = param_1[0x10d];
    param_1[0x101] = 1;
    if (iVar3 < iVar5) {
      param_1[0x10] = iVar5;
      iVar3 = iVar5;
    }
  }
  else {
    iVar6 = param_1[0x101] + 1;
    param_1[0xf9] = param_1[0xf9] + iVar5;
    param_1[0xfa] = param_1[0xfa] + 1;
    param_1[0x101] = iVar6;
    if (param_1[0x100] < iVar6) {
      param_1[0x100] = iVar6;
    }
    iVar6 = param_1[0x10e];
    if (iVar5 < iVar6) {
      param_1[0x10] = iVar6;
      iVar5 = iVar6;
    }
    iVar6 = param_1[0x10f];
    iVar3 = iVar5;
    if (iVar6 < iVar5) {
      param_1[0x10] = iVar6;
      iVar3 = iVar6;
    }
  }
  param_1[10] = 0;
  param_1[0x40] = param_1[0x40] + param_2;
  param_1[0x14] = iVar3;
  param_1[0x15] = iVar3;
  param_1[8] = 0;
  param_1[0xd] = iVar2;
  param_1[0x42] = 0;
  return;
}



// ==== H264EncDnfInit @ 000212d0 size=40

undefined4 H264EncDnfInit(int param_1)

{
  *(undefined4 *)(param_1 + 0x3024) = 0x1400;
  *(undefined4 *)(param_1 + 0x3018) = 0x2800;
  *(undefined4 *)(param_1 + 0x3014) = 0;
  *(undefined4 *)(param_1 + 0x301c) = 0x400;
  *(undefined4 *)(param_1 + 0x3020) = 0;
  return 0;
}



// ==== H264EncDnfSetParameters @ 000212f8 size=32

undefined4 H264EncDnfSetParameters(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_2 + 0xb0);
  uVar1 = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x3014) = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x3024) = uVar2;
  *(undefined4 *)(param_1 + 0x3018) = uVar1;
  return 0;
}



// ==== H264EncDnfGetParameters @ 00021318 size=32

undefined4 H264EncDnfGetParameters(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x3024);
  uVar1 = *(undefined4 *)(param_1 + 0x3018);
  *(undefined4 *)(param_2 + 0xac) = *(undefined4 *)(param_1 + 0x3014);
  *(undefined4 *)(param_2 + 0xb0) = uVar2;
  *(undefined4 *)(param_2 + 0xb4) = uVar1;
  return 0;
}



// ==== H264EncDnfPrepare @ 00021338 size=840

undefined4 H264EncDnfPrepare(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined4 auStack_1052c [16433];
  int local_140 [64];
  int local_40 [16];
  
  piVar2 = local_40;
  piVar13 = (int *)(PTR_DAT_000463fc + -0x6310);
  do {
    piVar12 = piVar13 + 4;
    iVar7 = piVar13[1];
    iVar6 = piVar13[2];
    iVar3 = piVar13[3];
    *piVar2 = *piVar13;
    piVar2[1] = iVar7;
    piVar2[2] = iVar6;
    piVar2[3] = iVar3;
    piVar2 = piVar2 + 4;
    piVar13 = piVar12;
  } while (piVar12 != (int *)(PTR_DAT_000463fc + -0x62d0));
  piVar2 = local_140;
  piVar13 = (int *)(PTR_DAT_000463fc + -0x62d0);
  do {
    piVar12 = piVar13 + 4;
    iVar7 = piVar13[1];
    iVar6 = piVar13[2];
    iVar3 = piVar13[3];
    *piVar2 = *piVar13;
    piVar2[1] = iVar7;
    piVar2[2] = iVar6;
    piVar2[3] = iVar3;
    piVar2 = piVar2 + 4;
    piVar13 = piVar12;
  } while (piVar12 != (int *)(PTR_DAT_000463fc + -0x61d0));
  puVar1 = (undefined4 *)&stack0xfffffba0;
  puVar14 = (undefined4 *)(PTR_DAT_000463fc + -0x61d0);
  do {
    puVar15 = puVar14 + 4;
    uVar9 = puVar14[1];
    uVar8 = puVar14[2];
    uVar4 = puVar14[3];
    *puVar1 = *puVar14;
    puVar1[1] = uVar9;
    puVar1[2] = uVar8;
    puVar1[3] = uVar4;
    puVar1 = puVar1 + 4;
    puVar14 = puVar15;
  } while (puVar15 != (undefined4 *)(PTR_DAT_000463fc + -0x5eb0));
  iVar3 = *(int *)(param_1 + 0x3a8);
  if (*(int *)(param_1 + 0x3020) == 0) {
    piVar2 = (int *)(param_1 + 0x29a0);
    iVar6 = 0;
    do {
      iVar7 = iVar6 + 1;
      *piVar2 = local_40[iVar6] / 2 + 0x40;
      piVar2 = piVar2 + 1;
      iVar6 = iVar7;
    } while (iVar7 != 0x10);
    piVar2 = (int *)(param_1 + 0x29e0);
    iVar6 = 0;
    do {
      iVar7 = iVar6 + 1;
      *piVar2 = local_40[iVar6];
      piVar2 = piVar2 + 1;
      iVar6 = iVar7;
    } while (iVar7 != 0x10);
    uVar16 = 0;
    piVar2 = (int *)(param_1 + 0x2b20);
    do {
      iVar6 = (int)uVar16 >> 4;
      uVar11 = (int)uVar16 >> 2;
      uVar5 = uVar16 >> 1;
      uVar10 = uVar16 & 3;
      uVar16 = uVar16 + 1;
      *piVar2 = local_140[(iVar6 * 2 + (uVar11 & 1)) * 8 + (uVar5 & 4) + uVar10] / 2 + 0x40;
      piVar2 = piVar2 + 1;
    } while (uVar16 != 0x40);
    uVar16 = 0;
    piVar2 = (int *)(param_1 + 0x2b20);
    do {
      iVar6 = (int)uVar16 >> 4;
      uVar11 = (int)uVar16 >> 2;
      uVar5 = uVar16 >> 1;
      uVar10 = uVar16 & 3;
      uVar16 = uVar16 + 1;
      *piVar2 = local_140[(iVar6 * 2 + (uVar11 & 1)) * 8 + (uVar5 & 4) + uVar10];
      piVar2 = piVar2 + 1;
    } while (uVar16 != 0x40);
    *(undefined4 *)(param_1 + 0x3020) = 1;
  }
  if (*(int *)(param_1 + 0x3014) == 0) {
    return 0;
  }
  iVar6 = *(int *)(param_1 + 0x3018);
  iVar7 = *(int *)(param_1 + 0x3024);
  if (iVar7 < iVar6) {
    iVar3 = iVar3 * 0x50;
    if (iVar3 < iVar7) {
      iVar3 = iVar7;
    }
    iVar7 = iVar6 - iVar7;
    if (iVar3 < iVar6) {
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      iVar3 = 0x400 - (iVar7 * 0x19 >> 10);
      iVar7 = iVar6 * *(int *)(param_1 + 0x301c) >> 10;
      *(int *)(param_1 + 0x303c) = iVar7;
      if (iVar3 < 0x200) {
        iVar3 = 0x200;
      }
      else if (0x400 < iVar3) {
        iVar3 = 0x400;
      }
      *(int *)(param_1 + 0x2980) = iVar3;
      iVar3 = iVar6 * 0x51f >> 0x11;
      if (iVar3 < 0x33) {
        iVar3 = 0;
      }
      else if (iVar3 < 0xfb) {
        iVar3 = iVar3 + -0x33;
      }
      else {
        iVar3 = 199;
      }
      *(undefined4 *)(param_1 + 0x2988) = *(undefined4 *)((int)&stack0xfffffba0 + iVar3 * 4);
      iVar3 = iVar7 * 0x51f >> 0x11;
      if (iVar3 < 0x33) {
        iVar3 = 0;
      }
      else if (iVar3 < 0xfb) {
        iVar3 = iVar3 + -0x33;
      }
      else {
        iVar3 = 199;
      }
      *(undefined4 *)(param_1 + 0x298c) = *(undefined4 *)((int)&stack0xfffffba0 + iVar3 * 4);
      goto LAB_00021620;
    }
  }
  *(undefined4 *)(param_1 + 0x2980) = 0x400;
  *(undefined4 *)(param_1 + 0x2988) = 0xfff;
  *(undefined4 *)(param_1 + 0x298c) = 0xfff;
LAB_00021620:
  *(undefined4 *)(param_1 + 0x297c) = 1;
  *(undefined4 *)(param_1 + 0x2990) = *(undefined4 *)(param_1 + 0x3044);
  return 0;
}



// ==== H264EncDnfUpdate @ 00021680 size=400

undefined4 H264EncDnfUpdate(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int local_18 [6];
  
  uVar1 = *(uint *)(param_1 + 0x3054);
  local_18[0] = 0x400;
  local_18[1] = 0x200;
  local_18[2] = 0x155;
  local_18[3] = 0x100;
  *(uint *)(param_1 + 0x3054) = uVar1 + 1;
  local_18[4] = 0xcd;
  iVar4 = *(int *)(param_1 + 0x950);
  if ((*(int *)(param_1 + 0x3014) != 1) || (*(int *)(param_1 + 0x44) == 0)) {
    return 0;
  }
  uVar5 = *(uint *)(param_1 + 0x2994);
  if (uVar5 == 0) {
    *(undefined4 *)(param_1 + 0x3050) = *(undefined4 *)(param_1 + 0x93c);
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x299c) / uVar5;
    if (uVar5 == 0) {
      trap(0x1c00);
    }
    *(undefined4 *)(param_1 + 0x3050) = *(undefined4 *)(param_1 + 0x93c);
    if (uVar7 != 0xffffffff) goto LAB_00021714;
  }
  uVar7 = *(uint *)(param_1 + 0x3018);
LAB_00021714:
  uVar5 = 4;
  if (uVar1 < 5) {
    uVar5 = uVar1;
  }
  iVar3 = 0;
  iVar6 = 0;
  *(int *)(param_1 + (uVar1 % 5 + 0xc0a) * 4) = (int)(uVar7 * 0xa0) >> 7;
  do {
    iVar2 = param_1 + iVar6;
    iVar6 = iVar6 + 4;
    iVar3 = iVar3 + *(int *)(iVar2 + 0x3028);
  } while (iVar6 != (uVar5 + 1) * 4);
  iVar3 = iVar3 * local_18[uVar5] >> 10;
  if (0x7800 < iVar3) {
    iVar3 = 0x7800;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x3018) = iVar3;
  if (iVar4 == 1) {
    uVar1 = *(uint *)(param_1 + 0x304c);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x2998) / *(uint *)(param_1 + 4);
    if (*(uint *)(param_1 + 4) == 0) {
      trap(0x1c00);
    }
  }
  uVar5 = 0xffff;
  if ((int)uVar1 < 0x10000) {
    uVar5 = uVar1;
  }
  *(uint *)(param_1 + 0x3048) = uVar5;
  *(uint *)(param_1 + 0x3044) = uVar5;
  return 0;
}



// ==== H264SeqParameterSetInit @ 00021810 size=136

void H264SeqParameterSetInit(undefined4 *param_1)

{
  param_1[1] = 0x42;
  param_1[6] = 0x1e;
  param_1[9] = 0xc;
  param_1[10] = 2;
  param_1[0xd] = 10;
  *param_1 = 1;
  param_1[2] = 1;
  param_1[3] = 1;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[0xb] = 1;
  param_1[0xc] = 0;
  param_1[0xe] = 8;
  param_1[0xf] = 1;
  param_1[0x10] = 1;
  param_1[0x11] = 0;
  param_1[0x12] = 1;
  param_1[0x15] = 1;
  param_1[0x16] = 1;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  return;
}



// ==== H264SeqParameterSet @ 00021898 size=2516

void H264SeqParameterSet(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  if (param_3 == 1) {
    (*(code *)PTR_H264NalUnitHdr_000465e4)(param_1,1,7,*param_2);
  }
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[1],8);
  uVar7 = param_2[1];
  if ((uVar7 < 0x43) || (param_2[2] = 0, uVar7 < 0x4e)) {
    uVar3 = param_2[2];
  }
  else {
    param_2[3] = 0;
    if (uVar7 < 0x59) {
      uVar3 = 0;
    }
    else {
      param_2[4] = 0;
      uVar3 = 0;
    }
  }
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,uVar3,1);
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[3],1);
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[4],1);
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[5],1);
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,4);
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[6],8);
  (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,param_2[8]);
  if (99 < (uint)param_2[1]) {
    (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,1);
    (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,0);
    (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,0);
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,1);
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,1);
  }
  (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,param_2[9]);
  (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,param_2[10]);
  (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,param_2[0xb]);
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[0xc],1);
  (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,param_2[0xd]);
  (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,param_2[0xe]);
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[0xf],1);
  if (param_2[0xf] == 0) {
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,1);
  }
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[0x10],1);
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[0x11],1);
  if (param_2[0x11] != 0) {
    (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,param_2[0x22]);
    (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,param_2[0x23]);
    (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,param_2[0x24]);
    (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,param_2[0x25]);
  }
  if (((((param_2[0x19] == 0) && (param_2[0x13] == 0)) && (param_2[0x1b] == 0)) &&
      ((param_2[0x17] == 0 && (param_2[0x16] == 0)))) && (uVar3 = 0, param_2[0x15] == 0)) {
    param_2[0x12] = 0;
  }
  else {
    uVar3 = param_2[0x12];
  }
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,uVar3,1);
  if (param_2[0x12] != 1) goto LAB_00021b1c;
  iVar8 = param_2[0x17];
  uVar3 = param_2[0xb];
  iVar2 = param_2[0x18];
  if ((iVar8 == 0) || (iVar2 == 0)) {
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,1);
  }
  else {
    if (iVar8 == iVar2) {
      uVar4 = 1;
    }
    else if (iVar2 == 0xb) {
      if (iVar8 == 0xc) {
        uVar4 = 2;
      }
      else if (iVar8 == 10) {
        uVar4 = 3;
      }
      else if (iVar8 == 0x10) {
        uVar4 = 4;
      }
      else if (iVar8 == 0x18) {
        uVar4 = 6;
      }
      else if (iVar8 == 0x14) {
        uVar4 = 7;
      }
      else if (iVar8 == 0x20) {
        uVar4 = 8;
      }
      else if (iVar8 == 0x12) {
        uVar4 = 10;
      }
      else {
        uVar4 = 0xb;
        if (iVar8 != 0xf) goto LAB_00021c98;
      }
    }
    else if (iVar2 == 0x21) {
      if (iVar8 == 0x28) {
        uVar4 = 5;
      }
      else if (iVar8 == 0x50) {
        uVar4 = 9;
      }
      else {
        uVar4 = 0xc;
        if (iVar8 != 0x40) goto LAB_00021c98;
      }
    }
    else if ((iVar8 != 0xa0) || (uVar4 = 0xd, iVar2 != 99)) {
LAB_00021c98:
      (*(code *)PTR_H264PutNalBits_00046520)(param_1,1,1);
      (*(code *)PTR_H264PutNalBits_00046520)(param_1,0xff,8);
      (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[0x17],0x10);
      (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[0x18],0x10);
      goto LAB_00021d30;
    }
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,1,1);
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,uVar4,8);
  }
LAB_00021d30:
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,1);
  if (param_2[0x16] == 0) {
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,1);
  }
  else {
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,1,1);
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,5,3);
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,1,1);
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,1,1);
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,1,8);
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,1,8);
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,1,8);
  }
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,1);
  if (param_2[0x13] == 0) {
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,1);
  }
  else {
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,1,1);
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,*(undefined2 *)((int)param_2 + 0x52),0x10);
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,*(undefined2 *)(param_2 + 0x14),0x10);
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,*(undefined2 *)((int)param_2 + 0x4e),0x10);
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,*(undefined2 *)(param_2 + 0x13),0x10);
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,1,1);
  }
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[0x19],1);
  if (param_2[0x19] == 1) {
    (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,0);
    iVar2 = 0;
    do {
      iVar8 = iVar2;
      iVar2 = iVar8 + 1;
    } while (0xfff < (uint)param_2[0x21] >> (iVar8 + 4U & 0x1f));
    iVar2 = 0;
    do {
      iVar5 = iVar2;
      iVar2 = iVar5 + 1;
    } while (0xfff < (uint)param_2[0x20] >> (iVar5 + 6U & 0x1f));
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,iVar5 + 1,4);
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,iVar8 + 1,4);
    uVar7 = (uint)param_2[0x20] >> (iVar5 + 7U & 0x1f);
    (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,uVar7 - 1);
    puVar1 = PTR_H264ExpGolombUnsigned_0004668c;
    uVar6 = (uint)param_2[0x21] >> (iVar8 + 5U & 0x1f);
    param_2[0x20] = uVar7 << (iVar5 + 7U & 0x1f);
    (*(code *)puVar1)(param_1,uVar6 - 1);
    puVar1 = PTR_H264PutNalBits_00046520;
    param_2[0x21] = uVar6 << (iVar8 + 5U & 0x1f);
    (*(code *)puVar1)(param_1,0,1);
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[0x1c] + -1,5);
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[0x1d] + -1,5);
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[0x1e] + -1,5);
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[0x1f],5);
  }
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,1);
  if (param_2[0x19] == 1) {
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,1);
  }
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[0x1b],1);
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[0x15],1);
  if (param_2[0x15] == 1) {
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,1,1);
    (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,0);
    (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,0);
    (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,9);
    (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,7);
    (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,0);
    (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,uVar3);
  }
LAB_00021b1c:
  if (param_3 == 1) {
    (*(code *)PTR_H264NalUnitTrailinBits_000464bc)(param_1,*param_2);
    return;
  }
  return;
}



// ==== H264SubsetSeqParameterSet @ 0002226c size=528

void H264SubsetSeqParameterSet(undefined4 param_1,undefined4 *param_2)

{
  (*(code *)PTR_H264NalUnitHdr_000465e4)(param_1,1,0xf,*param_2);
  param_2[1] = 0x80;
  (*(code *)PTR_H264SeqParameterSet_00046474)(param_1,param_2,0);
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,1,1);
  (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,1);
  (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,0);
  (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,1);
  (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,1);
  (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,0);
  (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,0);
  (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,1);
  (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,0);
  (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,0);
  (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,0);
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[6],8);
  (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,0);
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,3);
  (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,0);
  (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,1);
  (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,1);
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,1);
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,1);
  (*(code *)PTR_H264NalUnitTrailinBits_000464bc)(param_1,*param_2);
  return;
}



// ==== H264CheckLevel @ 0002247c size=184

int H264CheckLevel(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  if (((0 < param_2) && (0 < param_3)) && (0 < param_4)) {
    uVar1 = (*(uint *)(param_1 + 0x34) + 1) * (*(uint *)(param_1 + 0x38) + 1);
    iVar2 = *(int *)(param_1 + 0x1c) * 4;
    if (((uVar1 <= *(uint *)(PTR_H264MaxFS_000464b8 + iVar2)) &&
        (*(uint *)(param_1 + 0x34) < *(uint *)(PTR_H264SqrtMaxFS8_00046524 + iVar2))) &&
       (*(uint *)(param_1 + 0x38) < *(uint *)(PTR_H264SqrtMaxFS8_00046524 + iVar2))) {
      if (param_4 == 0) {
        trap(0x1c00);
      }
      return -(uint)(*(uint *)(PTR_H264MaxMBPS_000465e8 + iVar2) <
                    (uint)((int)(param_3 * uVar1) / param_4));
    }
  }
  return -1;
}



// ==== H264GetLevelIndex @ 00022534 size=64

int H264GetLevelIndex(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = 0;
  piVar3 = (int *)PTR_H264LevelIdc_00046648;
  do {
    iVar2 = *piVar3;
    piVar3 = piVar3 + 1;
    if (iVar2 == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10);
  return 0xffff;
}



// ==== H264SpsSetVuiTimigInfo @ 00022574 size=28

void H264SpsSetVuiTimigInfo(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  *(undefined4 *)(param_1 + 0x50) = param_3;
  *(int *)(param_1 + 0x4c) = param_2 << 1;
  return;
}



// ==== H264SpsSetVuiVideoInfo @ 00022590 size=24

void H264SpsSetVuiVideoInfo(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  *(int *)(param_1 + 0x58) = param_2;
  return;
}



// ==== H264SpsSetVuiAspectRatio @ 000225a8 size=24

void H264SpsSetVuiAspectRatio(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  *(int *)(param_1 + 0x5c) = param_2;
  *(undefined4 *)(param_1 + 0x60) = param_3;
  return;
}



// ==== H264SpsSetVuiHrd @ 000225c0 size=84

void H264SpsSetVuiHrd(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  *(int *)(param_1 + 100) = param_2;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x70) = 0x18;
    *(undefined4 *)(param_1 + 0x74) = 0x18;
    *(undefined4 *)(param_1 + 0x78) = 0x18;
    uVar2 = 1;
    *(undefined4 *)(param_1 + 0x48) = 1;
    if (2 < *(uint *)(param_1 + 0x50)) {
      uVar1 = 2;
      do {
        uVar2 = uVar1;
        uVar1 = uVar2 + 1;
      } while ((uint)(1 << (uVar2 & 0x1f)) < *(uint *)(param_1 + 0x50));
    }
    *(uint *)(param_1 + 0x7c) = uVar2;
  }
  return;
}



// ==== H264SpsSetVuiHrdBitRate @ 00022614 size=8

void H264SpsSetVuiHrdBitRate(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x80) = param_2;
  return;
}



// ==== H264SpsSetVuiHrdCpbSize @ 0002261c size=8

void H264SpsSetVuiHrdCpbSize(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x84) = param_2;
  return;
}



// ==== H264SpsGetVuiHrdBitRate @ 00022624 size=8

undefined4 H264SpsGetVuiHrdBitRate(int param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}



// ==== H264SpsGetVuiHrdCpbSize @ 0002262c size=8

undefined4 H264SpsGetVuiHrdCpbSize(int param_1)

{
  return *(undefined4 *)(param_1 + 0x84);
}



// ==== H264EndOfSequence @ 00022634 size=36

void H264EndOfSequence(undefined4 param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00022650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_H264NalUnitHdr_000465e4)(param_1,0,10,*param_2);
  return;
}



// ==== H264EndOfStream @ 00022658 size=36

void H264EndOfStream(undefined4 param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00022674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_H264NalUnitHdr_000465e4)(param_1,0,0xb,*param_2);
  return;
}



// ==== H264SpsSetVuiPictStructPresentFlag @ 0002267c size=8

void H264SpsSetVuiPictStructPresentFlag(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x6c) = param_2;
  return;
}



// ==== H264SliceInit @ 00022690 size=84

void H264SliceInit(undefined4 *param_1)

{
  param_1[3] = 5;
  param_1[2] = 2;
  param_1[7] = 0x10;
  param_1[0xb] = 0xfffffffc;
  *param_1 = 1;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 1;
  param_1[10] = 0;
  param_1[0xc] = 6;
  param_1[1] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 1;
  return;
}



// ==== H264EncGetApiVersion @ 000226f0 size=24

undefined4 * H264EncGetApiVersion(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[1] = 5;
  return param_1;
}



// ==== H264EncGetBuild @ 00022708 size=76

undefined4 * H264EncGetBuild(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_EWLReadAsicID_000466b0)();
  param_1[1] = uVar1;
  *param_1 = 0x100590;
  return param_1;
}



// ==== H264EncRelease @ 00022754 size=88

undefined4 H264EncRelease(int param_1)

{
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  if (param_1 == *(int *)(param_1 + 0x2d08)) {
    (*(code *)PTR_H264Shutdown_00046590)();
    return 0;
  }
  return 0xfffffff2;
}



// ==== H264EncSetCodingCtrl @ 000227ac size=1996

undefined4 H264EncSetCodingCtrl(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  if ((param_1 == (uint *)0x0) || (param_2 == (uint *)0x0)) {
    return 0xfffffffe;
  }
  if (param_1 != (uint *)param_1[0xb42]) {
    return 0xfffffff2;
  }
  uVar2 = *param_2;
  uVar11 = param_1[3];
  if (uVar11 < uVar2) {
    return 0xfffffffd;
  }
  uVar3 = param_2[0xc];
  uVar1 = param_1[1];
  if (uVar1 < uVar3) {
    return 0xfffffffd;
  }
  uVar4 = param_2[0xd];
  if (uVar1 < uVar4) {
    return 0xfffffffd;
  }
  uVar6 = param_2[0x11];
  if (uVar6 != 0) {
    if (param_2[0x14] < param_2[0x12]) {
      return 0xfffffffd;
    }
    if (uVar11 <= param_2[0x14]) {
      return 0xfffffffd;
    }
    if (param_2[0x15] < param_2[0x13]) {
      return 0xfffffffd;
    }
    if (param_1[2] <= param_2[0x15]) {
      return 0xfffffffd;
    }
    if (param_2[0x29] != 0) {
      return 0xfffffffd;
    }
  }
  uVar5 = param_2[0x16];
  if (uVar5 != 0) {
    if (param_2[0x19] < param_2[0x17]) {
      return 0xfffffffd;
    }
    if (uVar11 <= param_2[0x19]) {
      return 0xfffffffd;
    }
    if (param_2[0x1a] < param_2[0x18]) {
      return 0xfffffffd;
    }
    if (param_1[2] <= param_2[0x1a]) {
      return 0xfffffffd;
    }
    if (param_2[0x29] != 0) {
      return 0xfffffffd;
    }
  }
  uVar7 = param_2[0x1b];
  if (uVar7 != 0) {
    if (param_2[0x1e] < param_2[0x1c]) {
      return 0xfffffffd;
    }
    if (uVar11 <= param_2[0x1e]) {
      return 0xfffffffd;
    }
    if (param_2[0x1f] < param_2[0x1d]) {
      return 0xfffffffd;
    }
    if (param_1[2] <= param_2[0x1f]) {
      return 0xfffffffd;
    }
  }
  uVar11 = param_2[0x20];
  if (0xf < uVar11 + 0xf) {
    return 0xfffffffd;
  }
  uVar8 = param_2[0x21];
  if (0xf < uVar8 + 0xf) {
    return 0xfffffffd;
  }
  uVar9 = param_2[0x22];
  if (0x33 < uVar9 + 0x33) {
    return 0xfffffffd;
  }
  uVar12 = param_1[0x4f2];
  if (uVar12 == 0x48317011) {
    if (0xf < param_2[0x25] + 8) {
      return 0xfffffffd;
    }
    if (0xfe < param_2[0x26] + 0x7f) {
      return 0xfffffffd;
    }
    if (0xfe < param_2[0x27] + 0x7f) {
      return 0xfffffffd;
    }
  }
  if (*param_1 == 0xa1) {
    if (1 < param_2[4]) {
      return 0xfffffffd;
    }
    uVar2 = param_2[5];
    if (2 < uVar2) {
      return 0xfffffffd;
    }
    uVar11 = param_2[8];
    if (2 < uVar11) {
      return 0xfffffffd;
    }
    uVar3 = param_2[10];
    if (2 < uVar3) {
      return 0xfffffffd;
    }
    if (2 < param_2[0xb]) {
      return 0xfffffffd;
    }
    if (1 < param_2[1]) {
      return 0xfffffffd;
    }
    if (1 < param_2[3]) {
      return 0xfffffffd;
    }
    if ((uVar12 == 0x48317011) && (1 < param_2[2])) {
      return 0xfffffffd;
    }
    uVar4 = param_2[6];
    if (0xffff < uVar4) {
      return 0xfffffffd;
    }
    uVar6 = param_2[7];
    if (0xffff < uVar6) {
      return 0xfffffffd;
    }
    uVar5 = param_2[9];
    if (2 < uVar5) {
      return 0xfffffffd;
    }
    if (param_2[4] == 0) {
      param_1[0x7d] = 0;
    }
    else {
      param_1[0x7d] = 1;
    }
    param_1[0x7c] = 1;
    param_1[0x8b] = uVar2;
    param_1[0x80] = uVar11;
    param_1[0x8e] = uVar5;
    if (((uVar11 == 0) && (1 < param_1[0x54])) && (param_1[4] == 0)) {
      param_1[0x54] = 1;
      param_1[0xb43] = 1;
    }
    if (((param_2[0x29] != 0) && (1 < param_1[0x54])) && (param_1[4] == 0)) {
      return 0xfffffffd;
    }
    if ((uVar12 == 0x48317011) && (param_1[0x96] != 0)) {
      if (param_1[0xbf5] == 0) {
        return 0xffffffff;
      }
      if (param_2[0x29] != 0) {
        return 0xfffffffd;
      }
      if (param_1[4] != 0) {
        return 0xfffffffd;
      }
      if (1 < param_1[8]) {
        return 0xfffffffd;
      }
    }
    if ((uVar3 == 2) || ((uVar3 == 1 && (0xe0f < uVar1)))) {
      param_1[0x7f] = 1;
    }
    if (uVar12 == 0x48317011) {
      if ((param_2[0x2b] != 0) && (param_1[0xbf1] == 0)) {
        return 0xffffffff;
      }
      (*(code *)PTR_H264EncDnfSetParameters_00046678)(param_1,param_2);
      uVar4 = param_2[6];
      uVar6 = param_2[7];
    }
    (*(code *)PTR_H264SpsSetVuiAspectRatio_00046580)(param_1 + 0x49,uVar4,uVar6);
    (*(code *)PTR_H264SpsSetVuiVideoInfo_000464c0)(param_1 + 0x49,param_2[3]);
    if (param_2[1] == 0) {
      param_1[0x112] = 0;
    }
    else {
      param_1[0x112] = 1;
    }
    uVar2 = *param_2;
    uVar12 = param_1[0x4f2];
    uVar3 = param_2[0xc];
    uVar4 = param_2[0xd];
    uVar6 = param_2[0x11];
    uVar5 = param_2[0x16];
    uVar7 = param_2[0x1b];
    uVar11 = param_2[0x20];
    uVar8 = param_2[0x21];
    uVar9 = param_2[0x22];
  }
  uVar1 = param_2[0x28];
  param_1[0x8f] = param_2[0xb];
  param_1[0x90] = (uint)(uVar1 != 0);
  param_1[0x82] = uVar2 * param_1[2];
  if (uVar12 == 0x48317011) {
    if (param_2[2] == 0) {
      param_1[0xe] = 0;
    }
    else {
      param_1[0xe] = 1;
    }
  }
  uVar10 = param_2[0xe];
  uVar1 = param_2[0xf];
  uVar2 = param_2[0x10];
  param_1[0x501] = uVar3;
  param_1[0x502] = uVar4;
  param_1[0xb] = uVar10;
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar2;
  if (uVar6 == 0) {
    param_1[0x509] = 0xff;
    param_1[0x508] = 0xff;
    param_1[0x507] = 0xff;
    param_1[0x506] = 0xff;
  }
  else {
    uVar3 = param_2[0x13];
    uVar1 = param_2[0x14];
    uVar2 = param_2[0x15];
    param_1[0x506] = param_2[0x12];
    param_1[0x507] = uVar3;
    param_1[0x508] = uVar1;
    param_1[0x509] = uVar2;
  }
  if (uVar5 == 0) {
    param_1[0x50d] = 0xff;
    param_1[0x50c] = 0xff;
    param_1[0x50b] = 0xff;
    param_1[0x50a] = 0xff;
  }
  else {
    uVar3 = param_2[0x18];
    uVar1 = param_2[0x19];
    uVar2 = param_2[0x1a];
    param_1[0x50a] = param_2[0x17];
    param_1[0x50b] = uVar3;
    param_1[0x50c] = uVar1;
    param_1[0x50d] = uVar2;
  }
  if (uVar7 == 0) {
    param_1[0x511] = 0xff;
    param_1[0x510] = 0xff;
    param_1[0x50f] = 0xff;
    param_1[0x50e] = 0xff;
  }
  else {
    uVar3 = param_2[0x1d];
    uVar1 = param_2[0x1e];
    uVar2 = param_2[0x1f];
    param_1[0x50e] = param_2[0x1c];
    param_1[0x50f] = uVar3;
    param_1[0x510] = uVar1;
    param_1[0x511] = uVar2;
  }
  uVar2 = 10;
  if ((int)param_2[0x23] < 0xb) {
    uVar2 = param_2[0x23];
  }
  param_1[0x512] = -uVar11;
  uVar11 = 0xfffffff6;
  if (-0xb < (int)uVar2) {
    uVar11 = uVar2;
  }
  param_1[0x514] = 1;
  param_1[0x513] = -uVar8;
  param_1[0x2e] = uVar9;
  param_1[0x32] = uVar11;
  if (uVar12 == 0x48317011) {
    uVar2 = param_2[0x24];
    param_1[0x2d] = uVar2;
    if (uVar2 != 0) {
      if (uVar9 != 0) {
        return 0xfffffffd;
      }
      if (uVar5 != 0) {
        return 0xfffffffd;
      }
      if (uVar7 != 0) {
        return 0xfffffffd;
      }
      uVar1 = param_2[0x25];
      uVar11 = param_2[0x26];
      uVar2 = param_2[0x27];
      param_1[0x50d] = 0xff;
      param_1[0x50c] = 0xff;
      param_1[0x50b] = 0xff;
      param_1[0x50a] = 0xff;
      param_1[0x511] = 0xff;
      param_1[0x510] = 0xff;
      param_1[0x50f] = 0xff;
      param_1[0x50e] = 0xff;
      param_1[0x2f] = uVar1;
      param_1[0x30] = uVar11;
      param_1[0x31] = uVar2;
    }
    uVar2 = param_2[0x29];
    param_1[0x129] = 0;
    param_1[0x12a] = uVar2;
    if (*param_1 < 0xa3) {
      param_1[0xbfd] = param_1[4] + 1;
    }
  }
  else {
    uVar2 = param_2[0x29];
    param_1[0x129] = 0;
    param_1[0x12a] = uVar2;
  }
  param_1[0xbf9] = uVar2;
  param_1[0xbf7] = (uint)(uVar2 != 0);
  if ((uVar2 != 0) != 0) {
    param_1[0xbf8] = 0;
    uVar11 = (param_1[3] - 2) / uVar2;
    if (uVar2 == 0) {
      trap(0x1c00);
    }
    param_1[0xbfa] = 0;
    param_1[0xbfb] = uVar11;
    uVar2 = (param_1[3] - 2) - uVar2 * uVar11;
    param_1[0xbfc] = uVar2;
    if (uVar11 == 0) {
      param_1[0x12a] = uVar2;
      param_1[0xbf9] = uVar2;
    }
  }
  if (uVar12 != 0x48317011) {
    return 0;
  }
  if (param_2[0x2e] == 0) {
    uVar1 = param_2[0x2f];
    uVar11 = param_2[0x30];
    uVar2 = param_2[0x31];
  }
  else {
    if (param_1[0xbf4] == 0) {
      return 0xffffffff;
    }
    uVar11 = param_2[0x30];
    if (uVar11 == 0) {
      if (param_2[0x2f] != 0) {
        return 0xffffffff;
      }
      uVar2 = 0;
      if (param_2[0x31] != 0) {
        return 0xffffffff;
      }
      uVar1 = 0;
    }
    else {
      if ((uVar11 * param_1[2] & 3) != 0) {
        return 0xffffffff;
      }
      uVar1 = param_2[0x2f];
      uVar2 = param_2[0x31];
    }
  }
  param_1[0xbfe] = param_2[0x2e];
  param_1[0xbff] = uVar1;
  param_1[0xc00] = uVar11;
  param_1[0xc01] = uVar2;
  return 0;
}



// ==== H264EncGetCodingCtrl @ 00022f78 size=664

undefined4 H264EncGetCodingCtrl(int param_1,uint *param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  
  if ((param_1 == 0) || (param_2 == (uint *)0x0)) {
    uVar3 = 0xfffffffe;
  }
  else {
    if (param_1 != *(int *)(param_1 + 0x2d08)) {
      return 0xfffffff2;
    }
    uVar2 = *(uint *)(param_1 + 0x208);
    uVar18 = *(uint *)(param_1 + 8);
    iVar19 = *(int *)(param_1 + 0x448);
    if (uVar18 == 0) {
      trap(0x1c00);
    }
    iVar16 = *(int *)(param_1 + 0x17c);
    iVar17 = *(int *)(param_1 + 500);
    uVar15 = *(uint *)(param_1 + 0x180);
    uVar14 = *(uint *)(param_1 + 0x184);
    uVar13 = *(uint *)(param_1 + 0x22c);
    uVar12 = *(uint *)(param_1 + 0x200);
    uVar11 = *(uint *)(param_1 + 0x238);
    uVar10 = *(uint *)(param_1 + 0x1fc);
    uVar9 = *(uint *)(param_1 + 0x23c);
    uVar8 = *(uint *)(param_1 + 0x1404);
    uVar7 = *(uint *)(param_1 + 0x1408);
    uVar6 = *(uint *)(param_1 + 0x2c);
    uVar4 = *(uint *)(param_1 + 0x34);
    uVar5 = *(uint *)(param_1 + 0x30);
    param_2[0x28] = *(uint *)(param_1 + 0x240);
    param_2[1] = (uint)(iVar19 == 1);
    param_2[3] = (uint)(iVar16 == 1);
    param_2[6] = uVar15;
    param_2[7] = uVar14;
    param_2[5] = uVar13;
    *param_2 = uVar2 / uVar18;
    param_2[8] = uVar12;
    param_2[9] = uVar11;
    param_2[10] = uVar10;
    param_2[0xb] = uVar9;
    param_2[0xc] = uVar8;
    param_2[0xd] = uVar7;
    param_2[0xe] = uVar6;
    param_2[4] = (uint)(iVar17 != 0);
    param_2[0xf] = uVar5;
    uVar13 = *(uint *)(param_1 + 0xc);
    uVar2 = *(uint *)(param_1 + 0x1438);
    uVar5 = *(uint *)(param_1 + 0x1418);
    iVar16 = *(int *)(param_1 + 0x1448);
    iVar19 = *(int *)(param_1 + 0x144c);
    param_2[0x10] = uVar4;
    uVar18 = *(uint *)(param_1 + 0x1428);
    uVar14 = *(uint *)(param_1 + 0x1420);
    uVar12 = *(uint *)(param_1 + 0x1424);
    uVar11 = *(uint *)(param_1 + 0x142c);
    uVar10 = *(uint *)(param_1 + 0x1430);
    uVar9 = *(uint *)(param_1 + 0x1434);
    uVar8 = *(uint *)(param_1 + 0x143c);
    uVar7 = *(uint *)(param_1 + 0x1440);
    uVar6 = *(uint *)(param_1 + 0x1444);
    param_2[0x13] = *(uint *)(param_1 + 0x141c);
    uVar4 = *(uint *)(param_1 + 0xb8);
    param_2[0x1b] = (uint)(uVar2 < uVar13);
    param_2[0x1c] = uVar2;
    param_2[0x11] = (uint)(uVar5 < uVar13);
    param_2[0x12] = uVar5;
    param_2[0x14] = uVar14;
    param_2[0x15] = uVar12;
    param_2[0x16] = (uint)(uVar18 < uVar13);
    param_2[0x17] = uVar18;
    param_2[0x18] = uVar11;
    param_2[0x19] = uVar10;
    param_2[0x1a] = uVar9;
    param_2[0x1d] = uVar8;
    param_2[0x1e] = uVar7;
    param_2[0x1f] = uVar6;
    param_2[0x20] = -iVar16;
    param_2[0x21] = -iVar19;
    uVar2 = *(uint *)(param_1 + 200);
    iVar19 = *(int *)(param_1 + 0x2fdc);
    param_2[0x22] = uVar4;
    param_2[0x23] = uVar2;
    if (iVar19 == 0) {
      iVar19 = *(int *)(param_1 + 0x13c8);
      param_2[0x29] = 0;
      pcVar1 = (code *)PTR_H264EncDnfGetParameters_00046564;
    }
    else {
      iVar19 = *(int *)(param_1 + 0x13c8);
      param_2[0x29] = *(uint *)(param_1 + 0x2fe4);
      pcVar1 = (code *)PTR_H264EncDnfGetParameters_00046564;
    }
    uVar3 = 0;
    PTR_H264EncDnfGetParameters_00046564 = pcVar1;
    if (iVar19 == 0x48317011) {
      uVar4 = *(uint *)(param_1 + 0xb4);
      uVar18 = *(uint *)(param_1 + 0xbc);
      uVar5 = *(uint *)(param_1 + 0xc4);
      uVar2 = *(uint *)(param_1 + 0xc0);
      param_2[2] = (uint)(*(int *)(param_1 + 0x38) == 1);
      param_2[0x24] = uVar4;
      param_2[0x25] = uVar18;
      param_2[0x27] = uVar5;
      param_2[0x26] = uVar2;
      (*pcVar1)(param_1,param_2);
      uVar18 = *(uint *)(param_1 + 0x2ffc);
      uVar2 = *(uint *)(param_1 + 0x3000);
      uVar4 = *(uint *)(param_1 + 0x3004);
      param_2[0x2e] = *(uint *)(param_1 + 0x2ff8);
      param_2[0x2f] = uVar18;
      param_2[0x30] = uVar2;
      param_2[0x31] = uVar4;
      return 0;
    }
  }
  return uVar3;
}



// ==== H264EncSetRateCtrl @ 00023210 size=1168

undefined4 H264EncSetRateCtrl(int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  
  if ((param_1 == (int *)0x0) || (param_2 == (uint *)0x0)) {
    uVar3 = 0xfffffffe;
  }
  else {
    if (param_1 != (int *)param_1[0xb42]) {
      return 0xfffffff2;
    }
    if ((*param_1 != 0xa3) || (uVar3 = 0xfffffff9, param_1[0xdd] != 1)) {
      if ((*param_2 < 2) &&
         ((((param_2[1] < 2 && (param_2[2] < 2)) && (param_2[7] < 2)) &&
          ((uVar13 = param_2[3], (int)uVar13 < 0x34 && (uVar4 = param_2[4], uVar4 < 0x34)))))) {
        uVar5 = param_2[5];
        if (((uVar5 < 0x34) && (uVar4 <= uVar5)) &&
           ((((uVar13 == 0xffffffff || (((int)uVar4 <= (int)uVar13 && ((int)uVar13 <= (int)uVar5))))
             && (param_2[10] + 0x33 < 0x67)) && ((param_2[0xb] < 0x34 && (param_2[9] - 1 < 300))))))
        {
          if ((*param_2 == 0) && ((param_2[2] == 0 && (param_2[7] == 0)))) {
            uVar13 = param_2[6];
          }
          else {
            uVar13 = param_2[6];
            if (0x3935ff0 < uVar13 - 10000) {
              return 0xfffffffd;
            }
          }
          uVar4 = param_2[8];
          iVar12 = param_1[0x50];
          uVar5 = (*(code *)PTR_H264Calculate_000465d4)
                            ((uint)(param_1[1] * 0x1800) >> 1,param_1[0xf1],param_1[0xf2]);
          if (uVar5 >> 1 <= uVar13) {
            uVar13 = uVar5 >> 1;
          }
          if (uVar4 == 0) {
            uVar4 = *(uint *)(PTR_H264MaxCPBS_00046510 + iVar12 * 4);
          }
          else if (uVar4 == 0xffffffff) {
            uVar4 = uVar13;
          }
          uVar5 = (*(code *)PTR_H264Calculate_000465d4)(uVar13,param_1[0xf2],param_1[0xf1]);
          iVar1 = 0;
          if (uVar5 < uVar4) {
            uVar5 = uVar4;
          }
          do {
            iVar14 = iVar1;
            iVar1 = iVar14 + 1;
          } while (0xfff < uVar5 >> (iVar14 + 4U & 0x1f));
          uVar4 = param_2[7];
          uVar5 = (uVar5 >> (iVar14 + 5U & 0x1f)) << (iVar14 + 5U & 0x1f);
          if (uVar4 == 0) {
LAB_0002341c:
            uVar2 = *param_2;
            param_1[0xf6] = uVar5;
            if (uVar2 == 0) {
              param_1[0xda] = 0;
            }
            else {
              param_1[0xda] = 1;
            }
            iVar12 = param_1[0x4f2];
            if (iVar12 == 0x48317011) {
              param_1[0xdb] = param_2[1];
            }
            else {
              param_1[0xdb] = 0;
            }
            if (param_2[2] == 0) {
              param_1[0xdc] = 0;
            }
            else {
              param_1[0xdc] = 1;
            }
            if (uVar4 == 0) {
              param_1[0xdd] = 0;
            }
            else {
              param_1[0xdd] = 1;
              param_1[0xda] = 1;
              if ((iVar12 == 0x48317011) && (param_1[0xdb] == 0)) {
                param_1[0xdb] = 1;
              }
            }
            uVar11 = param_2[4];
            uVar10 = param_2[5];
            uVar9 = param_2[10];
            uVar8 = param_2[0xb];
            uVar7 = param_2[0xf];
            uVar2 = param_2[0x10];
            uVar5 = param_2[0x11];
            uVar4 = param_2[9];
            param_1[0xea] = param_2[3] << 8;
            param_1[0xeb] = uVar11 << 8;
            param_1[0xec] = uVar10 << 8;
            param_1[0x1dc] = uVar9 << 8;
            param_1[0x1dd] = uVar8 << 8;
            param_1[0x1e3] = uVar7;
            param_1[0x1e5] = uVar2;
            uVar10 = param_1[0xf7];
            uVar11 = param_1[0x1d8];
            param_1[0xf7] = uVar13;
            param_1[0x1d8] = uVar4;
            param_1[0x1e6] = uVar5;
            *(char *)(param_1 + 0x1ec) = (char)param_2[0x13];
            uVar5 = param_2[0x18];
            uVar2 = param_2[0x17];
            uVar9 = param_2[0x14];
            uVar8 = param_2[0x15];
            uVar7 = param_2[0x12];
            param_1[0x22b] = param_2[0x16];
            param_1[0x1ed] = uVar9;
            param_1[0x1ee] = uVar8;
            param_1[0x1eb] = uVar7;
            param_1[0x22c] = uVar2;
            uVar8 = param_2[0x1b];
            param_1[0x22d] = uVar5;
            uVar5 = param_2[0x1c];
            uVar7 = param_2[0x19];
            uVar2 = param_2[0x1a];
            param_1[0x232] = uVar8;
            param_1[0x233] = uVar5;
            param_1[0x22e] = uVar7;
            param_1[0x22f] = uVar2;
            if (iVar12 == 0x48317011) {
              uVar7 = param_2[0xc];
              uVar2 = param_2[0xd];
              uVar5 = param_2[0xe];
              param_1[0x1de] = uVar7 * 2;
              param_1[0x1df] = uVar7 * 3;
              param_1[0x1e0] = uVar7 << 2;
              param_1[0x1e1] = uVar2;
              param_1[0x1e2] = uVar5;
              if (param_1[0xdb] != 0) {
                param_1[0x1e2] = 0;
                param_1[0x1de] = 0;
                param_1[0x1df] = 0;
                param_1[0x1e0] = 0;
              }
            }
            bVar6 = true;
            if ((*param_1 != 0xa1) && (uVar13 == uVar10)) {
              bVar6 = uVar11 != uVar4;
            }
            (*(code *)PTR_H264InitRc_00046460)(param_1 + 0xda,bVar6);
            return 0;
          }
          iVar12 = iVar12 * 4;
          if (uVar5 <= *(uint *)(PTR_H264MaxCPBS_00046510 + iVar12)) {
            if (*(uint *)(PTR_H264MaxBR_00046658 + iVar12) < uVar13) {
              return 0xfffffffd;
            }
            goto LAB_0002341c;
          }
        }
      }
      uVar3 = 0xfffffffd;
    }
  }
  return uVar3;
}



// ==== H264EncGetRateCtrl @ 000236a0 size=384

undefined4 H264EncGetRateCtrl(int param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  if ((param_1 != 0) && (param_2 != (uint *)0x0)) {
    if (param_1 == *(int *)(param_1 + 0x2d08)) {
      iVar1 = *(int *)(param_1 + 0x13c8);
      *param_2 = (uint)(*(int *)(param_1 + 0x368) != 0);
      if (iVar1 == 0x48317011) {
        param_2[1] = *(uint *)(param_1 + 0x36c);
      }
      iVar14 = *(int *)(param_1 + 0x778);
      iVar13 = *(int *)(param_1 + 0x3a8);
      iVar12 = *(int *)(param_1 + 0x3ac);
      iVar15 = *(int *)(param_1 + 0x3b0);
      iVar10 = *(int *)(param_1 + 0x374);
      iVar1 = *(int *)(param_1 + 0x770);
      uVar7 = *(uint *)(param_1 + 0x774);
      uVar8 = *(uint *)(param_1 + 0x3d8);
      uVar6 = *(uint *)(param_1 + 0x784);
      uVar5 = *(uint *)(param_1 + 0x788);
      uVar4 = *(uint *)(param_1 + 0x78c);
      uVar3 = *(uint *)(param_1 + 0x794);
      uVar2 = *(uint *)(param_1 + 0x798);
      uVar11 = *(uint *)(param_1 + 0x3dc);
      uVar9 = *(uint *)(param_1 + 0x760);
      param_2[2] = (uint)(*(int *)(param_1 + 0x370) != 0);
      param_2[3] = iVar13 >> 8;
      param_2[4] = iVar12 >> 8;
      param_2[8] = uVar8;
      param_2[10] = iVar1 >> 8;
      param_2[0xb] = uVar7 >> 8;
      param_2[0xd] = uVar6;
      param_2[0xe] = uVar5;
      param_2[0xf] = uVar4;
      param_2[0x10] = uVar3;
      param_2[0x11] = uVar2;
      param_2[5] = iVar15 >> 8;
      param_2[6] = uVar11;
      param_2[7] = (uint)(iVar10 != 0);
      param_2[9] = uVar9;
      param_2[0xc] = iVar14 / 2;
      *(undefined1 *)(param_2 + 0x13) = *(undefined1 *)(param_1 + 0x7b0);
      uVar9 = *(uint *)(param_1 + 0x7b4);
      uVar8 = *(uint *)(param_1 + 0x7b8);
      uVar7 = *(uint *)(param_1 + 0x7ac);
      uVar6 = *(uint *)(param_1 + 0x8ac);
      uVar5 = *(uint *)(param_1 + 0x8b0);
      uVar4 = *(uint *)(param_1 + 0x8b4);
      uVar3 = *(uint *)(param_1 + 0x8b8);
      uVar2 = *(uint *)(param_1 + 0x8bc);
      param_2[0x1b] = *(uint *)(param_1 + 0x8c8);
      uVar11 = *(uint *)(param_1 + 0x8cc);
      param_2[0x14] = uVar9;
      param_2[0x15] = uVar8;
      param_2[0x12] = uVar7;
      param_2[0x16] = uVar6;
      param_2[0x17] = uVar5;
      param_2[0x18] = uVar4;
      param_2[0x19] = uVar3;
      param_2[0x1a] = uVar2;
      param_2[0x1c] = uVar11;
      return 0;
    }
    return 0xfffffff2;
  }
  return 0xfffffffe;
}



// ==== H264EncSetPreProcessing @ 00023820 size=1128

undefined4 H264EncSetPreProcessing(int param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint local_d0 [47];
  
  if ((param_1 == 0) || (param_2 == (uint *)0x0)) {
    return 0xfffffffe;
  }
  if (param_1 != *(int *)(param_1 + 0x2d08)) {
    return 0xfffffff2;
  }
  (*(code *)PTR_EWLReadAsicConfig_00046538)(local_d0);
  if ((local_d0[4] == 0) && (param_2[6] != 0)) {
    return 0xfffffffd;
  }
  if (local_d0[5] == 0) {
    if (param_2[4] - 5 < 10) {
      return 0xfffffffd;
    }
    uVar6 = *param_2;
  }
  else {
    uVar6 = *param_2;
  }
  if (0x1ff0 < uVar6) {
    return 0xfffffffd;
  }
  uVar14 = param_2[1];
  if (0x1ff0 < uVar14) {
    return 0xfffffffd;
  }
  uVar7 = param_2[4];
  if (0xe < uVar7) {
    return 0xfffffffd;
  }
  uVar4 = param_2[5];
  if (2 < uVar4) {
    return 0xfffffffd;
  }
  if ((*(int *)(param_1 + 0x10) != 0) && (uVar4 != 0)) {
    return 0xfffffffd;
  }
  iVar8 = *(int *)(param_1 + 0x13c8);
  puVar13 = (uint *)(param_1 + 0x6c);
  if ((iVar8 == 0x48317011) && (*(int *)(param_1 + 0x2ff8) != 0)) {
    if (param_2[6] != 0) {
      return 0xfffffffd;
    }
    if (uVar4 != 0) {
      return 0xfffffffd;
    }
    puVar2 = puVar13;
    puVar5 = local_d0;
    do {
      puVar3 = puVar5;
      puVar1 = puVar2 + 4;
      uVar10 = puVar2[2];
      uVar9 = puVar2[3];
      uVar11 = *puVar2;
      puVar3[1] = puVar2[1];
      *puVar3 = uVar11;
      puVar3[2] = uVar10;
      puVar3[3] = uVar9;
      puVar2 = puVar1;
      puVar5 = puVar3 + 4;
    } while (puVar1 != (uint *)(param_1 + 0x11c));
    uVar9 = 0;
    uVar10 = *(uint *)(param_1 + 0x11c);
    puVar3[5] = *(uint *)(param_1 + 0x120);
    puVar3[4] = uVar10;
LAB_00023b24:
    local_d0[7] = param_2[3];
    local_d0[6] = param_2[2];
  }
  else {
    uVar9 = param_2[6];
    puVar2 = puVar13;
    puVar5 = local_d0;
    do {
      puVar3 = puVar5;
      puVar1 = puVar2 + 4;
      uVar11 = puVar2[2];
      uVar10 = puVar2[3];
      uVar12 = *puVar2;
      puVar3[1] = puVar2[1];
      *puVar3 = uVar12;
      puVar3[2] = uVar11;
      puVar3[3] = uVar10;
      puVar2 = puVar1;
      puVar5 = puVar3 + 4;
    } while (puVar1 != (uint *)(param_1 + 0x11c));
    uVar10 = *(uint *)(param_1 + 0x11c);
    puVar3[5] = *(uint *)(param_1 + 0x120);
    puVar3[4] = uVar10;
    if (uVar9 == 0) goto LAB_00023b24;
    local_d0[7] = 0;
    local_d0[6] = 0;
  }
  if (iVar8 == 0x48314810) {
    puVar2 = puVar13;
    puVar5 = local_d0;
    do {
      puVar3 = puVar5;
      puVar1 = puVar2;
      puVar2 = puVar1 + 4;
      uVar11 = puVar1[2];
      uVar10 = puVar1[3];
      uVar12 = *puVar1;
      puVar3[1] = puVar1[1];
      *puVar3 = uVar12;
      puVar3[2] = uVar11;
      puVar3[3] = uVar10;
      puVar5 = puVar3 + 4;
    } while (puVar2 != (uint *)(param_1 + 0x11c));
    uVar10 = *puVar2;
    puVar3[5] = puVar1[5];
    puVar3[4] = uVar10;
  }
  local_d0[10] = (uint)(uVar9 != 0);
  local_d0[0x2c] = (uint)(param_2[0xc] != 0);
  local_d0[0xb] = (uint)(param_2[0xb] != 0);
  if (*(int *)(param_1 + 0x80) * *(int *)(param_1 + 0x7c) == 0) {
    local_d0[0xb] = 0;
  }
  local_d0[0] = uVar6;
  local_d0[1] = uVar14;
  local_d0[8] = uVar7;
  local_d0[9] = uVar4;
  iVar8 = (*(code *)PTR_EncPreProcessCheck_00046598)(local_d0);
  if (iVar8 != 0) {
    return 0xfffffffd;
  }
  uVar6 = *(uint *)(param_1 + 0x74);
  if ((uVar6 & 0xf) == 0) {
    uVar14 = *(uint *)(param_1 + 0x78);
    if ((uVar14 & 0xf) == 0) goto LAB_00023a18;
  }
  else {
    uVar14 = *(uint *)(param_1 + 0x78);
  }
  uVar7 = param_2[5];
  *(undefined4 *)(param_1 + 0x168) = 1;
  uVar4 = (uVar6 + 0xf & 0xfffffff0) - uVar6 >> 1;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  uVar6 = (uVar14 + 0xf & 0xfffffff0) - uVar14 >> 1;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (uVar7 == 0) {
    *(uint *)(param_1 + 0x1b0) = uVar4;
    *(uint *)(param_1 + 0x1b8) = uVar6;
  }
  else if (uVar7 == 1) {
    *(uint *)(param_1 + 0x1ac) = uVar4;
    *(uint *)(param_1 + 0x1b8) = uVar6;
  }
  else {
    *(uint *)(param_1 + 0x1b0) = uVar4;
    *(uint *)(param_1 + 0x1b4) = uVar6;
  }
LAB_00023a18:
  if (local_d0[10] != 0) {
    uVar6 = local_d0[2];
    if (local_d0[9] == 0) {
      uVar6 = local_d0[3];
      local_d0[3] = local_d0[2];
    }
    if ((((local_d0[0] < 0x68) || (local_d0[1] < 0x68)) || (local_d0[3] < 0x60)) || (uVar6 < 0x60))
    {
      return 0xfffffffd;
    }
    if (((uVar6 | local_d0[3]) & 3) != 0) {
      return 0xfffffffd;
    }
  }
  local_d0[0x10] = (uint)*(ushort *)((int)param_2 + 0x26);
  local_d0[0x11] = (uint)(ushort)param_2[10];
  local_d0[0xc] = param_2[7];
  local_d0[0xd] = (uint)(ushort)param_2[8];
  local_d0[0xe] = (uint)*(ushort *)((int)param_2 + 0x22);
  local_d0[0xf] = (uint)(ushort)param_2[9];
  (*(code *)PTR_EncSetColorConversion_00046594)(local_d0,param_1 + 0x920);
  puVar2 = local_d0;
  do {
    puVar1 = puVar13;
    puVar5 = puVar2;
    puVar2 = puVar5 + 4;
    uVar7 = puVar5[1];
    uVar14 = puVar5[2];
    uVar6 = puVar5[3];
    *puVar1 = *puVar5;
    puVar1[1] = uVar7;
    puVar1[2] = uVar14;
    puVar1[3] = uVar6;
    puVar13 = puVar1 + 4;
  } while (puVar2 != local_d0 + 0x2c);
  uVar6 = puVar5[5];
  puVar1[4] = *puVar2;
  puVar1[5] = uVar6;
  return 0;
}



// ==== H264EncGetPreProcessing @ 00023c88 size=172

undefined4 H264EncGetPreProcessing(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    if (param_1 == *(int *)(param_1 + 0x2d08)) {
      uVar13 = *(undefined4 *)(param_1 + 0x84);
      param_2[1] = *(undefined4 *)(param_1 + 0x70);
      uVar11 = *(undefined4 *)(param_1 + 0x88);
      uVar10 = *(undefined4 *)(param_1 + 0x90);
      uVar9 = *(undefined4 *)(param_1 + 0x8c);
      uVar8 = *(undefined4 *)(param_1 + 0x11c);
      uVar7 = *(undefined4 *)(param_1 + 0x94);
      uVar6 = *(undefined4 *)(param_1 + 0x98);
      uVar5 = *(undefined4 *)(param_1 + 0x9c);
      uVar4 = *(undefined4 *)(param_1 + 0xa0);
      uVar3 = *(undefined4 *)(param_1 + 0xa4);
      uVar2 = *(undefined4 *)(param_1 + 0xa8);
      uVar1 = *(undefined4 *)(param_1 + 0xac);
      *param_2 = *(undefined4 *)(param_1 + 0x6c);
      uVar12 = *(undefined4 *)(param_1 + 0xb0);
      param_2[2] = uVar13;
      param_2[3] = uVar11;
      param_2[5] = uVar10;
      param_2[4] = uVar9;
      param_2[0xc] = uVar8;
      param_2[6] = uVar7;
      param_2[0xb] = uVar6;
      param_2[7] = uVar5;
      *(short *)(param_2 + 8) = (short)uVar4;
      *(short *)((int)param_2 + 0x22) = (short)uVar3;
      *(short *)(param_2 + 9) = (short)uVar2;
      *(short *)((int)param_2 + 0x26) = (short)uVar1;
      *(short *)(param_2 + 10) = (short)uVar12;
      return 0;
    }
    return 0xfffffff2;
  }
  return 0xfffffffe;
}



// ==== H264EncSetRoiMap @ 00023d34 size=200

undefined4 H264EncSetRoiMap(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar11 = *(uint *)(param_1 + 0xc);
  puVar9 = *(uint **)(param_1 + 0x2cc8);
  *(undefined4 *)(param_1 + 0x1624) = 1;
  *(undefined4 *)(param_1 + 0x1628) = 1;
  if (uVar11 == 0) {
    uVar3 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1 + 8);
    uVar10 = 0;
    iVar4 = 0;
    uVar1 = 0;
    uVar3 = 0;
    do {
      if (uVar7 != 0) {
        uVar12 = 0;
        iVar8 = param_2 + iVar4;
        uVar11 = uVar1;
        do {
          while( true ) {
            uVar2 = uVar11;
            pbVar5 = (byte *)(iVar8 + uVar12);
            iVar6 = ~uVar1 - uVar12;
            uVar12 = uVar12 + 1;
            iVar4 = iVar4 + 1;
            uVar3 = uVar3 | (uint)*pbVar5 << (iVar6 * 4 & 0x1fU);
            if ((uVar2 & 7) != 7) break;
            *puVar9 = uVar3;
            uVar7 = *(uint *)(param_1 + 8);
            puVar9 = puVar9 + 1;
            uVar3 = 0;
            uVar11 = uVar2 + 1;
            if (uVar7 <= uVar12) goto LAB_00023dcc;
          }
          uVar11 = uVar2 + 1;
        } while (uVar12 < uVar7);
LAB_00023dcc:
        uVar1 = uVar2 + 1;
        uVar11 = *(uint *)(param_1 + 0xc);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar11);
  }
  *puVar9 = uVar3;
  *(undefined4 *)(param_1 + 0x118) = 1;
  return 0;
}



// ==== H264EncSetSeiUserData @ 00023dfc size=108

undefined4 H264EncSetSeiUserData(int param_1,int param_2,int param_3)

{
  if ((param_1 == 0) || ((param_3 != 0 && (param_2 == 0)))) {
    return 0xfffffffe;
  }
  if (param_1 != *(int *)(param_1 + 0x2d08)) {
    return 0xfffffff2;
  }
  if (param_3 - 0x10U < 0x7f1) {
    *(undefined4 *)(param_1 + 0x498) = 1;
    *(int *)(param_1 + 0x49c) = param_2;
    *(int *)(param_1 + 0x4a0) = param_3;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x498) = 0;
  *(undefined4 *)(param_1 + 0x49c) = 0;
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  return 0;
}



// ==== H264EncStrmStart @ 00023e68 size=1360

undefined4 H264EncStrmStart(uint *param_1,int param_2,int param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  
  if (param_1 == (uint *)0x0) {
    return 0xfffffffe;
  }
  if (param_2 == 0) {
    return 0xfffffffe;
  }
  if (param_3 == 0) {
    return 0xfffffffe;
  }
  if (param_1 != (uint *)param_1[0xb42]) {
    return 0xfffffff2;
  }
  uVar2 = *param_1;
  *(undefined4 *)(param_3 + 4) = 0;
  if ((uVar2 & 0xfffffffd) != 0xa1) {
    return 0xfffffff9;
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    return 0xfffffffd;
  }
  if (*(uint *)(param_2 + 0x18) < 0x40) {
    return 0xfffffffd;
  }
  puVar4 = param_1 + 0xf;
  (*(code *)PTR_H264SetBuffer_0004658c)(puVar4,*(int *)(param_2 + 0x10));
  uVar2 = param_1[4];
  *(uint *)(param_3 + 0xc) = param_1[0xb36];
  *(undefined4 *)(param_3 + 0x10) = 0;
  param_1[0x4a] = 0x42;
  if (uVar2 != 0) {
    param_1[0x4a] = 0x4d;
  }
  if (param_1[0x80] != 0) {
    param_1[0x4a] = 0x4d;
  }
  if (param_1[0x7f] == 1) {
    param_1[0x4a] = 100;
  }
  if (param_1[0x112] == 1) {
    (*(code *)PTR_H264SpsSetVuiPictStructPresentFlag_00046630)(param_1 + 0x49,1);
  }
  if (param_1[0xdd] == 1) {
    puVar6 = param_1 + 0x49;
    (*(code *)PTR_H264SpsSetVuiHrd_00046418)(puVar6,1);
    (*(code *)PTR_H264SpsSetVuiHrdBitRate_000464fc)(puVar6,param_1[0xf7]);
    (*(code *)PTR_H264SpsSetVuiHrdCpbSize_000465ec)(puVar6,param_1[0xf6]);
  }
  if (param_1[0x80] == 0) {
    param_1[0x70] = 0;
    param_1[0x79] = ((int)param_1[0xea] >> 8) - 0x1a;
  }
  else {
    iVar7 = (*(code *)PTR_H264CabacInit_000464cc)(param_1[0xb29],param_1[0x8e]);
    if (iVar7 != 0) {
      return 0xfffffffc;
    }
    param_1[0x70] = 0;
    param_1[0x79] = ((int)param_1[0xea] >> 8) - 0x1a;
    if ((param_1[0x80] & 0xfffffffd) != 0) {
      param_1[0x72] = 1;
      goto LAB_00023fb8;
    }
  }
  param_1[0x72] = 0;
LAB_00023fb8:
  (*(code *)PTR_H264InitSei_000465dc)
            (param_1 + 0x107,param_1[0x49],param_1[0xdd],param_1[0xf1],param_1[0xf2]);
  if (param_1[0x4f2] == 0x48317011) {
    if (param_1[0x96] == 0) {
      uVar2 = param_1[0x11];
    }
    else {
      (*(code *)PTR_H264NalUnitHdr_000465e4)(puVar4,0,6,param_1[0x49]);
      if (param_1[0xf2] == 0) {
        trap(0x1c00);
      }
      (*(code *)PTR_H264ScalabilityInfoSei_00046620)
                (puVar4,param_1[0x96],(int)(param_1[0xf1] << 8) / (int)param_1[0xf2]);
      (*(code *)PTR_H264RbspTrailingBits_0004667c)(puVar4);
      iVar7 = *(int *)(param_3 + 0xc);
      uVar2 = param_1[0x11];
      if (iVar7 != 0) {
        iVar3 = *(int *)(param_3 + 0x10);
        *(int *)(param_3 + 0x10) = iVar3 + 1;
        *(uint *)(iVar7 + iVar3 * 4) = uVar2;
        *(undefined4 *)(iVar7 + *(int *)(param_3 + 0x10) * 4) = 0;
        uVar2 = param_1[0x11];
      }
    }
  }
  else {
    uVar2 = 0;
  }
  puVar6 = param_1 + 0x49;
  (*(code *)PTR_H264SeqParameterSet_00046474)(puVar4,puVar6,1);
  uVar5 = param_1[0x11];
  iVar7 = *(int *)(param_3 + 0xc);
  if (iVar7 != 0) {
    iVar3 = *(int *)(param_3 + 0x10);
    *(int *)(param_3 + 0x10) = iVar3 + 1;
    *(uint *)(iVar7 + iVar3 * 4) = uVar5 - uVar2;
    *(undefined4 *)(iVar7 + *(int *)(param_3 + 0x10) * 4) = 0;
    uVar5 = param_1[0x11];
  }
  uVar2 = uVar5;
  if (1 < param_1[8]) {
    (*(code *)PTR_H264SubsetSeqParameterSet_00046480)(puVar4,puVar6);
    uVar2 = param_1[0x11];
    iVar7 = *(int *)(param_3 + 0xc);
    if (iVar7 != 0) {
      iVar3 = *(int *)(param_3 + 0x10);
      *(int *)(param_3 + 0x10) = iVar3 + 1;
      *(uint *)(iVar7 + iVar3 * 4) = uVar2 - uVar5;
      *(undefined4 *)(iVar7 + *(int *)(param_3 + 0x10) * 4) = 0;
      uVar2 = param_1[0x11];
    }
  }
  (*(code *)PTR_H264PicParameterSet_00046668)(puVar4,param_1 + 0x6f);
  uVar5 = param_1[0x11];
  iVar7 = *(int *)(param_3 + 0xc);
  if (iVar7 != 0) {
    iVar3 = *(int *)(param_3 + 0x10);
    *(int *)(param_3 + 0x10) = iVar3 + 1;
    *(uint *)(iVar7 + iVar3 * 4) = uVar5 - uVar2;
    *(undefined4 *)(iVar7 + *(int *)(param_3 + 0x10) * 4) = 0;
    uVar5 = param_1[0x11];
  }
  puVar1 = PTR_H264PicParameterSet_00046668;
  if (param_1[0x80] == 2) {
    param_1[0x70] = 1;
    param_1[0x72] = 1;
    (*(code *)puVar1)(puVar4,param_1 + 0x6f);
    uVar2 = param_1[0x11];
    iVar7 = *(int *)(param_3 + 0xc);
    if (iVar7 != 0) {
      iVar3 = *(int *)(param_3 + 0x10);
      *(int *)(param_3 + 0x10) = iVar3 + 1;
      *(uint *)(iVar7 + iVar3 * 4) = uVar2 - uVar5;
      *(undefined4 *)(iVar7 + *(int *)(param_3 + 0x10) * 4) = 0;
    }
  }
  if (param_1[0x16] != 1) {
    uVar2 = param_1[0xdd];
    *(uint *)(param_3 + 4) = param_1[0x11];
    *param_1 = 0xa2;
    param_1[0x87] = 0;
    param_1[0xde] = 0xffffffff;
    if (uVar2 == 1) {
      uVar2 = (*(code *)PTR_H264SpsGetVuiHrdBitRate_00046448)(puVar6);
      uVar5 = (*(code *)PTR_H264SpsGetVuiHrdCpbSize_000465fc)(puVar6);
      puVar1 = PTR_H264InitRc_00046460;
      if ((param_1[0xf7] != uVar2) || (param_1[0xf6] != uVar5)) {
        param_1[0xf7] = uVar2;
        param_1[0xf6] = uVar5;
        (*(code *)puVar1)(param_1 + 0xda,1);
      }
    }
    return 0;
  }
  *(undefined4 *)(param_3 + 4) = 0;
  *(undefined4 *)(param_3 + 0x10) = 0;
  return 0xfffffff8;
}



// ==== H264EncStrmEncode @ 000243b8 size=424

undefined4 H264EncStrmEncode(int *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (((param_1 == (int *)0x0) || (param_2 == 0)) || (param_3 == (undefined4 *)0x0)) {
    uVar1 = 0xfffffffe;
  }
  else {
    if (param_1 != (int *)param_1[0xb42]) {
      return 0xfffffff2;
    }
    iVar3 = param_1[0x5e4];
    puVar4 = (undefined4 *)param_1[0xb36];
    iVar2 = param_1[0x4f2];
    param_3[7] = param_1[0xb26];
    *param_3 = 3;
    param_3[1] = 0;
    param_3[9] = 0;
    param_3[8] = 0;
    param_3[6] = iVar3;
    param_3[3] = puVar4;
    param_1[0xb3d] = 0;
    param_3[4] = 0;
    if (iVar2 == 0x48317011) {
      param_1[0xb3e] = 0;
    }
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0;
    }
    uVar1 = 0xfffffff9;
    if (*param_1 - 0xa2U < 2) {
      if (*(uint *)(param_2 + 0x14) != 0) {
        if ((*(uint *)(param_2 + 0x14) & 7) != 0) {
          return 0xfffffffd;
        }
        if (*(int *)(param_2 + 0x10) == 0) {
          return 0xfffffffd;
        }
        if (*(uint *)(param_2 + 0x18) < 0x1000) {
          return 0xfffffffd;
        }
        if (2 < *(uint *)(param_2 + 0x1c)) {
          return 0xfffffffd;
        }
        if ((uint)param_1[0x23] < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x000244e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_000463fc + param_1[0x23] * 4 + -0x5d30)))();
          return uVar1;
        }
      }
      uVar1 = 0xfffffffd;
    }
  }
  return uVar1;
}



// ==== H264EncStrmEnd @ 00025aa0 size=336

undefined4 H264EncStrmEnd(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (param_1 != (int *)0x0) {
    if (param_2 == 0) {
      return 0xfffffffe;
    }
    if (param_3 != 0) {
      if (param_1 != (int *)param_1[0xb42]) {
        return 0xfffffff2;
      }
      if (1 < *param_1 - 0xa2U) {
        return 0xfffffff9;
      }
      puVar3 = (undefined4 *)param_1[0xb36];
      *(undefined4 *)(param_3 + 4) = 0;
      *(undefined4 **)(param_3 + 0xc) = puVar3;
      *(undefined4 *)(param_3 + 0x10) = 0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
      }
      if ((*(int *)(param_2 + 0x10) != 0) && (0x3f < *(uint *)(param_2 + 0x18))) {
        iVar1 = (*(code *)PTR_H264SetBuffer_0004658c)(param_1 + 0xf,*(int *)(param_2 + 0x10));
        if (iVar1 == 0) {
          (*(code *)PTR_H264EndOfSequence_000464b4)(param_1 + 0xf,param_1 + 0x49);
          iVar1 = param_1[0x11];
          iVar4 = *(int *)(param_3 + 0xc);
          *(int *)(param_3 + 4) = iVar1;
          if (iVar4 != 0) {
            iVar2 = *(int *)(param_3 + 0x10);
            *(int *)(param_3 + 0x10) = iVar2 + 1;
            *(int *)(iVar4 + iVar2 * 4) = iVar1;
            *(undefined4 *)(iVar4 + *(int *)(param_3 + 0x10) * 4) = 0;
          }
          *param_1 = 0xa1;
          return 0;
        }
      }
      return 0xfffffffd;
    }
  }
  return 0xfffffffe;
}



// ==== H264EncGetBitsPerPixel @ 00025bf0 size=84

undefined4 H264EncGetBitsPerPixel(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (0xe < param_1) {
    return 0;
  }
  uVar2 = 1 << (param_1 & 0x1f);
  if ((uVar2 & 7) != 0) {
    return 0xc;
  }
  if ((uVar2 & 0x7800) != 0) {
    return 0x20;
  }
  uVar1 = 0;
  if ((uVar2 & 0x7f8) != 0) {
    uVar1 = 0x10;
  }
  return uVar1;
}



// ==== H264EncSetTestId @ 00025c44 size=8

undefined4 H264EncSetTestId(void)

{
  return 0xffffffff;
}



// ==== H264EncGetMbInfo @ 00025c4c size=124

undefined4 H264EncGetMbInfo(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      uVar2 = 0xfffffffe;
    }
    else if (param_3 < *(uint *)(param_1 + 4)) {
      uVar1 = (*(code *)PTR_EncAsicGetMvOutput_00046534)(param_1 + 0x920,param_3);
      uVar2 = 0;
      *(undefined4 *)(param_2 + 8) = uVar1;
    }
    else {
      uVar2 = 0xfffffffd;
    }
    return uVar2;
  }
  return 0xfffffffe;
}



// ==== H264EncGetEncodedMbLines @ 00025cc8 size=72

undefined4 H264EncGetEncodedMbLines(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  if (*(int *)(param_1 + 0x2ff8) == 0) {
    return 0xfffffffd;
  }
                    /* WARNING: Could not recover jumptable at 0x00025d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_EncAsicGetRegisterValue_00046500)
                    (*(undefined4 *)(param_1 + 0x920),param_1 + 0xbe0,0x49d);
  return uVar1;
}



// ==== H264EncSetInputMBLines @ 00025d10 size=100

undefined4 H264EncSetInputMBLines(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  if (*(int *)(param_1 + 0x2ff8) != 0) {
    (*(code *)PTR_EncAsicWriteRegisterValue_0004660c)
              (*(undefined4 *)(param_1 + 0x920),param_1 + 0xbe0,0x49c,param_2);
    return 0;
  }
  return 0xfffffffd;
}



// ==== H264EncGetMbSizeInfo @ 00025e88 size=60

undefined4 H264EncGetMbSizeInfo(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != (undefined1 *)0x0) && (param_1 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_2 + 8) = uVar1;
    *param_2 = 0x10;
    param_2[1] = 0x10;
    return 0;
  }
  return 0xfffffffd;
}



// ==== H264EncSetEpollHook @ 00025ec4 size=44

undefined4 H264EncSetEpollHook(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00025ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_h264_ewl_set_epoll_hook_000465f4)(*(undefined4 *)(param_1 + 0x920));
    return uVar1;
  }
  return 0xfffffffe;
}



// ==== H264EncCheckDone @ 00025ef0 size=44

undefined4 H264EncCheckDone(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00025f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_h264_ewl_check_done_000465e0)(*(undefined4 *)(param_1 + 0x920));
    return uVar1;
  }
  return 0xfffffffe;
}



// ==== H264EncMakeRdy @ 00025f1c size=44

undefined4 H264EncMakeRdy(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00025f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_h264_ewl_make_rdy_00046638)(*(undefined4 *)(param_1 + 0x920));
    return uVar1;
  }
  return 0xfffffffe;
}



// ==== H264EncUseSigio @ 00025f48 size=44

undefined4 H264EncUseSigio(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00025f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_h264_ewl_use_sigio_0004651c)(*(undefined4 *)(param_1 + 0x920));
    return uVar1;
  }
  return 0xfffffffe;
}



// ==== H264CabacInit @ 00025f80 size=392

undefined4 H264CabacInit(uint *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  
  iVar8 = 0;
  iVar7 = 0;
  piVar10 = (int *)(PTR_DAT_000463fc + -0x31d0);
  piVar9 = (int *)(PTR_DAT_000463fc + param_2 * 0xe60 + -0x5cf0);
LAB_00025fd4:
  iVar5 = iVar8 + (int)param_1;
  bVar1 = false;
  piVar2 = piVar10;
  do {
    iVar11 = 0;
    do {
      while( true ) {
        pbVar6 = (byte *)(iVar5 + iVar11);
        iVar4 = (iVar7 * *piVar2 >> 4) + piVar2[1];
        if (0 < iVar4) break;
        *(undefined1 *)(iVar5 + iVar11) = 0x7c;
LAB_00026040:
        iVar11 = iVar11 + 1;
        piVar2 = piVar2 + 2;
        if (iVar11 == 0x1cc) goto LAB_0002604c;
      }
      if (0x7e < iVar4) {
        iVar4 = 0x7e;
      }
      if (iVar4 < 0x40) {
        *(char *)(iVar5 + iVar11) = ('?' - (char)iVar4) * '\x02';
        goto LAB_00026040;
      }
      iVar11 = iVar11 + 1;
      *pbVar6 = ((char)iVar4 + -0x40) * '\x02' | 1;
      piVar2 = piVar2 + 2;
    } while (iVar11 != 0x1cc);
LAB_0002604c:
    if (bVar1) break;
    iVar5 = iVar5 + 0x1d0;
    bVar1 = true;
    piVar2 = piVar9;
  } while( true );
  iVar7 = iVar7 + 1;
  iVar8 = iVar8 + 0x3a0;
  if (iVar7 == 0x34) {
    iVar7 = 0;
    do {
      uVar12 = *param_1;
      iVar7 = iVar7 + 2;
      uVar3 = param_1[1];
      *param_1 = uVar3 >> 0x18 | uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | (uVar3 & 0xff0000) >> 8;
      param_1[1] = uVar12 >> 0x18 | uVar12 << 0x18 | (uVar12 & 0xff00) << 8 |
                   (uVar12 & 0xff0000) >> 8;
      param_1 = param_1 + 2;
    } while (iVar7 != 0x2f20);
    return 0;
  }
  goto LAB_00025fd4;
}



// ==== H264MadInit @ 00026110 size=68

void H264MadInit(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x3c) = 0x800;
  *(undefined4 *)(param_1 + 0x38) = 0x1000;
  *(undefined4 *)(param_1 + 0x44) = param_2;
  iVar1 = 5;
  *(undefined4 *)(param_1 + 0x40) = 0x400;
  iVar2 = param_1;
  do {
    iVar1 = iVar1 + -1;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    iVar2 = iVar2 + 4;
  } while (iVar1 != 0);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



// ==== H264MadThreshold @ 00026154 size=1232

void H264MadThreshold(int *param_1,uint *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  
  iVar12 = param_1[0x11];
  iVar2 = param_1[0xc];
  uVar9 = *param_2;
  iVar11 = param_1[0xe];
  param_1[iVar2 + 2] = iVar11;
  iVar3 = iVar2 + 1;
  param_1[iVar2 + 7] = uVar9;
  iVar2 = param_1[0xd];
  if (2 < iVar3) {
    iVar3 = 0;
  }
  param_1[0xc] = iVar3;
  uVar9 = (iVar12 * 0x28) / 100;
  if (iVar2 < 3) {
    iVar2 = iVar2 + 1;
    param_1[0xd] = iVar2;
  }
  piVar10 = param_1 + iVar2 + 7;
  iVar12 = 0;
  iVar3 = 0;
  piVar8 = piVar10;
  do {
    bVar1 = iVar12 == iVar2;
    iVar12 = iVar12 + 1;
    if (bVar1) {
      piVar8 = param_1 + iVar2 + 2;
      iVar6 = 0;
      iVar12 = 0;
      if (iVar2 != 0) goto LAB_00026214;
      iVar12 = 0;
      goto LAB_00026378;
    }
    iVar3 = iVar3 + piVar8[-1];
    piVar8 = piVar8 + -1;
  } while (-1 < iVar3);
  piVar8 = param_1 + iVar2 + 2;
  iVar3 = 0x7fffffff;
  iVar6 = 0;
  iVar12 = 0;
  do {
    if (iVar6 == iVar2) goto LAB_00026378;
LAB_00026214:
    iVar6 = iVar6 + 1;
    iVar12 = iVar12 + piVar8[-1];
    piVar8 = piVar8 + -1;
  } while (-1 < iVar12);
  iVar12 = 0x7fffffff;
  if (1 < iVar2) goto LAB_00026384;
LAB_00026238:
  *param_1 = 0;
  param_1[1] = 0;
LAB_00026240:
  uVar4 = *param_2;
  iVar3 = iVar11 * 2;
  if (uVar9 <= uVar4) {
    iVar12 = iVar11 * 3;
    if (iVar12 < 0) {
      iVar12 = iVar12 + 3;
    }
    iVar2 = iVar11 + -0x100;
    if (iVar12 >> 2 <= iVar11 + -0x100) {
      iVar2 = iVar12 >> 2;
    }
    goto LAB_00026574;
  }
  iVar12 = iVar11 * 5;
  if (iVar12 < 0) {
    iVar12 = iVar12 + 3;
  }
  iVar2 = iVar11 + 0x100;
  if (iVar11 + 0x100 <= iVar12 >> 2) {
    iVar2 = iVar12 >> 2;
  }
  if (uVar9 >> 1 <= uVar4) goto LAB_00026284;
LAB_00026584:
  if (iVar2 < iVar11 + 0x100) {
    iVar2 = iVar11 + 0x100;
  }
LAB_00026284:
  if ((uVar4 == 0) && (iVar2 < iVar11 + 0x400)) {
    iVar2 = iVar11 + 0x400;
  }
  iVar12 = 0x400;
  if (0x3ff < iVar3) {
    iVar12 = iVar3;
  }
  if (iVar2 < iVar11 / 2) {
    iVar2 = iVar11 / 2;
  }
  if (iVar12 < iVar2) {
    iVar2 = iVar12;
  }
  iVar3 = iVar2 + 0x80;
  if (iVar2 + 0x80 < 0) {
    iVar3 = iVar2 + 0x17f;
  }
  iVar2 = (iVar3 >> 8) << 8;
  if (iVar2 < 0) {
    param_1[0xe] = 0;
  }
  else {
    iVar3 = 0x3f00;
    if (iVar2 < 0x3f01) {
      iVar3 = iVar2;
    }
    iVar2 = ((iVar3 << 1) / 3 + 0x80 >> 8) << 8;
    param_1[0xe] = iVar3;
    if ((iVar2 < iVar3 + -0xff) || (iVar2 = iVar3 + -0x100, 0xff < iVar3)) {
      iVar3 = (iVar3 / 3 + 0x80 >> 8) << 8;
      param_1[0xf] = iVar2;
      if ((iVar2 + -0xff <= iVar3) && (iVar3 = 0, 0xff < iVar2)) {
        param_1[0x10] = iVar2 + -0x100;
        return;
      }
      param_1[0x10] = iVar3;
      return;
    }
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return;
LAB_00026378:
  if (iVar2 < 2) goto LAB_00026238;
LAB_00026384:
  iVar6 = 0;
  iVar5 = 0;
  iVar7 = iVar2;
  do {
    iVar7 = iVar7 + -1;
    if (iVar7 == -1) {
      iVar5 = 0x7fffffff;
      if (iVar2 == 0) {
        trap(0x1c00);
      }
      if (iVar6 < 0x7fffffff / iVar2) {
        iVar5 = iVar2 * iVar6;
      }
      goto LAB_000263f0;
    }
    iVar6 = iVar6 + *(int *)((int)piVar10 + iVar5 + -4) *
                    *(int *)((int)param_1 + iVar5 + iVar2 * 4 + 4);
    iVar5 = iVar5 + -4;
  } while (-1 < iVar6);
  iVar5 = 0x7fffffff;
LAB_000263f0:
  if (iVar12 != 0) {
    if (iVar12 == 0) {
      trap(0x1c00);
    }
    iVar6 = 0x7fffffff;
    if (iVar3 < 0x7fffffff / iVar12) {
      iVar6 = iVar12 * iVar3;
    }
    iVar5 = iVar5 - iVar6;
  }
  iVar6 = 0;
  iVar7 = iVar2;
  do {
    iVar7 = iVar7 + -1;
    if (iVar7 == -1) goto LAB_00026460;
    iVar6 = iVar6 + piVar10[-1] * piVar10[-1] * iVar2;
    piVar10 = piVar10 + -1;
  } while (-1 < iVar6);
  iVar6 = 0x7fffffff;
LAB_00026460:
  iVar6 = iVar6 - iVar3 * iVar3;
  iVar7 = 0;
  if (iVar6 == 0) {
    iVar5 = 0;
  }
  else {
    iVar7 = -1;
    if (-1 < iVar5) {
      iVar7 = 1;
    }
    iVar5 = (iVar5 * 0x20 + (iVar6 * iVar7) / 2) / iVar6;
    if (iVar6 == 0) {
      trap(0x1c00);
    }
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    if (0x8000 < iVar5) {
      iVar5 = 0x8000;
    }
    iVar7 = iVar3 * iVar5;
  }
  iVar3 = -1;
  iVar6 = -1;
  if (-1 < iVar12) {
    iVar6 = 1;
  }
  if (-1 < iVar7) {
    iVar3 = 1;
  }
  *param_1 = iVar5;
  if (iVar2 == 0) {
    trap(0x1c00);
  }
  if (iVar2 * -0x20 == 0) {
    trap(0x1c00);
  }
  iVar2 = (iVar12 + (iVar6 * iVar2) / 2) / iVar2 +
          ((iVar2 * 0x20 * iVar3 >> 1) + iVar7) / (iVar2 * -0x20);
  param_1[1] = iVar2;
  if (iVar5 == 0) goto LAB_00026240;
  iVar5 = uVar9 * iVar5;
  uVar4 = *param_2;
  iVar3 = iVar11 << 1;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0x1f;
  }
  iVar2 = (iVar5 >> 5) + iVar2;
LAB_00026574:
  if (uVar9 >> 1 <= uVar4) goto LAB_00026284;
  goto LAB_00026584;
}



// ==== H264InitSei @ 00026630 size=172

void H264InitSei(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                uint param_5)

{
  uint uVar1;
  uint uVar2;
  
  param_1[0x10] = 0x18;
  param_1[0x12] = 0x18;
  param_1[0x14] = 0x18;
  param_1[0x16] = 0x18;
  uVar2 = 1;
  param_1[0xc] = param_2;
  param_1[0xd] = param_3;
  param_1[0xe] = 0;
  param_1[0x17] = 1;
  param_1[0x19] = 1;
  param_1[0x18] = 0;
  param_1[0x1a] = 1;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  if (2 < param_5) {
    uVar1 = 2;
    do {
      uVar2 = uVar1;
      uVar1 = uVar2 + 1;
    } while ((uint)(1 << (uVar2 & 0x1f)) < param_5);
  }
  param_1[0x1e] = uVar2;
  param_1[1] = param_4;
  param_1[2] = param_5;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  *param_1 = 1;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  return;
}



// ==== H264UpdateSeiTS @ 000266dc size=232

void H264UpdateSeiTS(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 0x24);
  uVar2 = param_2 + *(int *)(param_1 + 0xc);
  while (uVar1 <= uVar2) {
    while( true ) {
      iVar4 = *(int *)(param_1 + 0x14) + 1;
      uVar2 = uVar2 - uVar1;
      if (iVar4 == 0x3c) break;
      *(int *)(param_1 + 0x14) = iVar4;
      if (uVar2 < uVar1) goto LAB_00026720;
    }
    iVar4 = *(int *)(param_1 + 0x1c) + 1;
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (iVar4 == 0x3c) {
      iVar3 = iVar3 + 1;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      if (iVar3 == 0x20) {
        *(undefined4 *)(param_1 + 0x24) = 0;
        iVar3 = 0;
      }
      else {
        *(int *)(param_1 + 0x24) = iVar3;
      }
    }
    else {
      *(int *)(param_1 + 0x1c) = iVar4;
    }
  }
LAB_00026720:
  uVar1 = *(uint *)(param_1 + 8);
  *(uint *)(param_1 + 0xc) = uVar2;
  if (uVar1 == 0) {
    trap(0x1c00);
  }
  *(uint *)(param_1 + 0x20) = (uint)(iVar3 != 0);
  *(uint *)(param_1 + 0x70) = uVar2 / uVar1;
  *(uint *)(param_1 + 0x74) = uVar2 - (uVar2 / uVar1) * uVar1;
  if (((iVar3 != 0) == 0) && (*(int *)(param_1 + 0x1c) == 0)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(uint *)(param_1 + 0x10) = (uint)(*(int *)(param_1 + 0x14) != 0);
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return;
}



// ==== H264FillerSei @ 000267c4 size=264

void H264FillerSei(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  (*(code *)PTR_H264NalUnitHdr_000465e4)(param_1,0,6,*(undefined4 *)(param_2 + 0x30));
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,3,8);
  iVar1 = param_3;
  if (param_3 < 0xff) {
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_3,8);
    if (param_3 < 1) goto LAB_00026888;
  }
  else {
    do {
      iVar1 = iVar1 + -0xff;
      (*(code *)PTR_H264PutNalBits_00046520)(param_1,0xff,8);
    } while (0xfe < iVar1);
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,iVar1,8);
  }
  do {
    param_3 = param_3 + -1;
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,0xff,8);
  } while (param_3 != 0);
LAB_00026888:
                    /* WARNING: Could not recover jumptable at 0x000268a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_H264RbspTrailingBits_0004667c)(param_1);
  return;
}



// ==== H264BufferingSei @ 000268cc size=288

void H264BufferingSei(undefined4 *param_1,int param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_2 + 0x34) == 0) {
    return;
  }
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,8);
  pcVar4 = (char *)*param_1;
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,0xff,8);
  puVar1 = PTR_H264ExpGolombUnsigned_0004668c;
  uVar3 = *(undefined4 *)(param_2 + 0x38);
  param_1[8] = 0;
  uVar5 = param_1[2];
  (*(code *)puVar1)(param_1,uVar3);
  (*(code *)PTR_H264PutNalBits_00046520)
            (param_1,*(undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_2 + 0x40));
  (*(code *)PTR_H264PutNalBits_00046520)
            (param_1,*(undefined4 *)(param_2 + 0x44),*(undefined4 *)(param_2 + 0x48));
  if (param_1[5] == 0) {
    cVar2 = (char)param_1[2];
  }
  else {
    (*(code *)PTR_H264RbspTrailingBits_0004667c)(param_1);
    cVar2 = (char)param_1[2];
  }
  *pcVar4 = (cVar2 - (char)uVar5) - (char)param_1[8];
  *(undefined4 *)(param_2 + 0x4c) = 0;
  return;
}



// ==== H264PicTimingSei @ 000269ec size=752

void H264PicTimingSei(undefined4 *param_1,int *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,1,8);
  pcVar1 = (char *)*param_1;
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,0xff,8);
  iVar3 = param_2[0xd];
  uVar2 = param_1[2];
  param_1[8] = 0;
  if (iVar3 != 0) {
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[0x13],param_2[0x14]);
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[0x15],param_2[0x16]);
  }
  if (param_2[0x17] != 0) {
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[0x18],4);
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[0x19],1);
    if (param_2[0x19] != 0) {
      (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,2);
      (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,1);
      (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[0x1a],5);
      (*(code *)PTR_H264PutNalBits_00046520)(param_1,*param_2,1);
      (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,1);
      (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[0x1b],1);
      (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[0x1c],8);
      if (*param_2 == 0) {
        (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[4],1);
        if (param_2[4] != 0) {
          (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[5],6);
          (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[6],1);
          if (param_2[6] != 0) {
            (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[7],6);
            (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[8],1);
            if (param_2[8] != 0) {
              (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[9],5);
            }
          }
        }
      }
      else {
        (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[5],6);
        (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[7],6);
        (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[9],5);
      }
      if (param_2[0x1e] != 0) {
        (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_2[0x1d]);
      }
    }
  }
  if (param_1[5] != 0) {
    (*(code *)PTR_H264RbspTrailingBits_0004667c)(param_1);
  }
  *pcVar1 = ((char)param_1[2] - (char)uVar2) - (char)param_1[8];
  return;
}



// ==== H264UserDataUnregSei @ 00026cdc size=324

void H264UserDataUnregSei(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  iVar3 = *(int *)(param_2 + 0x80);
  uVar1 = *(uint *)(param_2 + 0x84);
  if (*(int *)(param_2 + 0x7c) != 0) {
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,5,8);
    for (; 0xfe < uVar1; uVar1 = uVar1 - 0xff) {
      (*(code *)PTR_H264PutNalBits_00046520)(param_1,0xff,8);
    }
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,uVar1,8);
    iVar2 = 0;
    do {
      puVar4 = (undefined1 *)(iVar3 + iVar2);
      iVar2 = iVar2 + 1;
      (*(code *)PTR_H264PutNalBits_00046520)(param_1,*puVar4,8);
    } while (iVar2 != 0x10);
    uVar1 = 0x10;
    if (0x10 < *(uint *)(param_2 + 0x84)) {
      do {
        puVar4 = (undefined1 *)(iVar3 + uVar1);
        uVar1 = uVar1 + 1;
        (*(code *)PTR_H264PutNalBits_00046520)(param_1,*puVar4,8);
      } while (uVar1 < *(uint *)(param_2 + 0x84));
      return;
    }
  }
  return;
}



// ==== H264RecoveryPointSei @ 00026e20 size=260

void H264RecoveryPointSei(undefined4 *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,6,8);
  pcVar3 = (char *)*param_1;
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,0xff,8);
  puVar1 = PTR_H264ExpGolombUnsigned_0004668c;
  iVar2 = *(int *)(param_2 + 0x8c);
  param_1[8] = 0;
  uVar4 = param_1[2];
  (*(code *)puVar1)(param_1,iVar2 + -1);
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,1,1);
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,1);
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,2);
  if (param_1[5] != 0) {
    (*(code *)PTR_H264RbspTrailingBits_0004667c)(param_1);
  }
  *pcVar3 = ((char)param_1[2] - (char)uVar4) - (char)param_1[8];
  return;
}



// ==== H264ScalabilityInfoSei @ 00026f24 size=1136

void H264ScalabilityInfoSei(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,0x18,8);
  iVar3 = 0;
  pcVar5 = (char *)*param_1;
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,0xff,8);
  puVar2 = PTR_H264PutNalBits_00046520;
  param_1[8] = 0;
  uVar6 = param_1[2];
  (*(code *)puVar2)(param_1,0,1);
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,1);
  (*(code *)PTR_H264PutNalBits_00046520)(param_1,1,1);
  (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,param_2);
  if (-1 < param_2) {
    do {
      while( true ) {
        (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,iVar3);
        (*(code *)PTR_H264PutNalBits_00046520)(param_1,iVar3,6);
        (*(code *)PTR_H264PutNalBits_00046520)(param_1,1,1);
        (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,3);
        (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,4);
        (*(code *)PTR_H264PutNalBits_00046520)(param_1,iVar3,3);
        (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,1);
        (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,1);
        (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,1);
        (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,1);
        (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,1);
        (*(code *)PTR_H264PutNalBits_00046520)(param_1,1,1);
        (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,1);
        (*(code *)PTR_H264PutNalBits_00046520)(param_1,1,1);
        (*(code *)PTR_H264PutNalBits_00046520)(param_1,iVar3 == 0,1);
        (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,1);
        (*(code *)PTR_H264PutNalBits_00046520)(param_1,1,1);
        (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,1);
        (*(code *)PTR_H264PutNalBits_00046520)(param_1,1,1);
        (*(code *)PTR_H264PutNalBits_00046520)(param_1,0,2);
        (*(code *)PTR_H264PutNalBits_00046520)(param_1,param_3 >> (param_2 - iVar3 & 0x1fU),0x10);
        (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,iVar3 != 0);
        if (iVar3 != 0) break;
        iVar3 = 1;
        (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,0);
        (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,0);
        (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,0);
        (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,0);
        (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,0);
        (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,0);
        if (param_2 < 1) goto LAB_000272d8;
      }
      (*(code *)PTR_H264ExpGolombUnsigned_0004668c)(param_1,0);
      iVar3 = iVar3 + 1;
      (*(code *)PTR_H264ExpGolombUnsigned_0004668c)();
    } while (iVar3 <= param_2);
  }
LAB_000272d8:
  pcVar4 = (char *)&local_40;
  local_31 = 0;
  local_40 = *(undefined4 *)(PTR_DAT_000463fc + -0x2370);
  local_3c = *(undefined4 *)(PTR_DAT_000463fc + -0x236c);
  local_38 = *(undefined4 *)(PTR_DAT_000463fc + -0x2368);
  local_34 = *(undefined2 *)(PTR_DAT_000463fc + -0x2364);
  local_32 = PTR_DAT_000463fc[-0x2362];
  local_30 = 0;
  local_2f = 0;
  local_2e = 0;
  local_2d = 0;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    (*(code *)PTR_H264PutNalBits_00046520)(param_1,(int)cVar1,8);
  } while (cVar1 != 0);
  if (param_1[5] != 0) {
    (*(code *)PTR_H264RbspTrailingBits_0004667c)(param_1);
  }
  *pcVar5 = ((char)param_1[2] - (char)uVar6) - (char)param_1[8];
  return;
}



// ==== EWLReadAsicID @ 000273a0 size=184

void EWLReadAsicID(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_60 [72];
  undefined4 local_18 [3];
  
  puVar1 = PTR_DAT_000463ec;
  if (*(int *)(PTR_DAT_000463ec + 0x6740) != 0) {
    return;
  }
  (*(code *)PTR_memset_00046528)(auStack_60,0,0x48);
  iVar2 = (*(code *)PTR_rts_reg_h264_open_000466bc)(local_18);
  if (iVar2 == 0) {
    uVar3 = (*(code *)PTR_rts_reg_read_reg_00046600)(local_18[0],0);
    (*(code *)PTR_rts_reg_h264_close_00046420)(local_18[0]);
    *(undefined4 *)(puVar1 + 0x6740) = uVar3;
  }
  else {
    *(undefined4 *)(puVar1 + 0x6740) = 0xffffffff;
  }
  return;
}



// ==== EWLReadAsicConfig @ 00027458 size=580

undefined4 * EWLReadAsicConfig(undefined4 *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint local_a8 [38];
  
  puVar1 = PTR_DAT_000463ec;
  if (*(int *)(PTR_DAT_000463ec + 0x66f8) == 0) {
    puVar7 = local_a8 + 0x12;
    (*(code *)PTR_memset_00046528)(puVar7,0,0x48);
    iVar3 = (*(code *)PTR_rts_reg_h264_open_000466bc)(local_a8 + 0x24);
    if (iVar3 == 0) {
      uVar9 = (*(code *)PTR_rts_reg_read_reg_00046600)(local_a8[0x24],0xfc);
      local_a8[0x12] = uVar9 & 0xfff;
      local_a8[0x14] = uVar9 >> 0x19 & 1;
      local_a8[0x17] = uVar9 >> 0x1c & 1;
      local_a8[0x19] = uVar9 >> 0x1e & 1;
      local_a8[0x1a] = uVar9 >> 0x14 & 0xf;
      local_a8[0x1b] = uVar9 >> 0xc & 0xf;
      local_a8[0x13] = uVar9 >> 0x1b & 1;
      local_a8[0x15] = uVar9 >> 0x1a & 1;
      local_a8[0x16] = uVar9 >> 0x18 & 1;
      local_a8[0x18] = uVar9 >> 0x1d & 1;
      local_a8[0x1c] = uVar9 >> 0x10 & 0xf;
      (*(code *)PTR_rts_reg_h264_close_00046420)(local_a8[0x24]);
      puVar16 = local_a8;
      do {
        puVar6 = puVar7 + 4;
        puVar15 = puVar16 + 4;
        uVar12 = puVar7[1];
        uVar11 = puVar7[2];
        uVar9 = puVar7[3];
        *puVar16 = *puVar7;
        puVar16[1] = uVar12;
        puVar16[2] = uVar11;
        puVar16[3] = uVar9;
        puVar7 = puVar6;
        puVar16 = puVar15;
      } while (puVar6 != local_a8 + 0x22);
      uVar9 = *puVar6;
    }
    else {
      puVar16 = local_a8;
      do {
        puVar6 = puVar7 + 4;
        puVar15 = puVar16 + 4;
        uVar12 = puVar7[1];
        uVar11 = puVar7[2];
        uVar9 = puVar7[3];
        *puVar16 = *puVar7;
        puVar16[1] = uVar12;
        puVar16[2] = uVar11;
        puVar16[3] = uVar9;
        puVar7 = puVar6;
        puVar16 = puVar15;
      } while (puVar6 != local_a8 + 0x22);
      uVar9 = *puVar6;
    }
    uVar11 = puVar6[1];
    *puVar15 = uVar9;
    puVar15[1] = uVar11;
    puVar7 = local_a8;
    puVar16 = (uint *)(puVar1 + 0x66f8);
    do {
      puVar15 = puVar16;
      puVar6 = puVar7;
      puVar7 = puVar6 + 4;
      uVar12 = puVar6[1];
      uVar11 = puVar6[2];
      uVar9 = puVar6[3];
      *puVar15 = *puVar6;
      puVar15[1] = uVar12;
      puVar15[2] = uVar11;
      puVar15[3] = uVar9;
      puVar16 = puVar15 + 4;
    } while (puVar7 != local_a8 + 0x10);
    uVar9 = puVar6[5];
    puVar15[4] = *puVar7;
    puVar15[5] = uVar9;
  }
  puVar2 = param_1;
  puVar14 = (undefined4 *)(puVar1 + 0x66f8);
  do {
    puVar13 = puVar14;
    puVar4 = puVar2;
    puVar14 = puVar13 + 4;
    uVar10 = puVar13[1];
    uVar8 = puVar13[2];
    uVar5 = puVar13[3];
    *puVar4 = *puVar13;
    puVar4[1] = uVar10;
    puVar4[2] = uVar8;
    puVar4[3] = uVar5;
    puVar2 = puVar4 + 4;
  } while (puVar14 != (undefined4 *)(puVar1 + 0x6738));
  uVar5 = puVar13[5];
  puVar4[4] = *puVar14;
  puVar4[5] = uVar5;
  return param_1;
}



// ==== EWLWriteReg @ 000276c4 size=288

undefined4 EWLWriteReg(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) {
    if (param_2 == 4) {
      *(undefined4 *)PTR_asic_status_000465b4 = param_3;
    }
                    /* WARNING: Could not recover jumptable at 0x00027708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_rts_reg_write_reg_000466b8)();
    return uVar1;
  }
  puVar4 = PTR_DAT_000463fc + -0x2350;
  puVar5 = PTR___assert_00046450;
  (*(code *)PTR___assert_00046450)
            (puVar4,PTR_DAT_000463fc + -0x231c,0x13e,PTR_DAT_000463fc + -0x20d0);
  uVar2 = (**(code **)(puVar5 + 0x1eecc))(*(undefined4 *)(puVar4 + 8),4);
  if ((uVar2 & 0x1fc) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    (**(code **)(puVar5 + 0x1ecf0))(*(undefined4 *)(puVar4 + 8));
    (**(code **)(puVar5 + 0x1edb8))(puVar4,4,uVar2 & 0xfffffefe);
    uVar3 = (**(code **)(puVar5 + 0x1eecc))(*(undefined4 *)(puVar4 + 8),4);
    uVar1 = 0;
    **(undefined4 **)(puVar5 + 0x1ee80) = uVar3;
  }
  return uVar1;
}



// ==== dump_reg_to_file @ 000277e4 size=300

void dump_reg_to_file(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 auStack_60 [68];
  
  iVar1 = (*(code *)PTR_fopen_00046530)(PTR_DAT_000463fc + -0x22cc,PTR_DAT_000463fc + -0x22c0);
  if (iVar1 == 0) {
    (*(code *)PTR_fwrite_000464a0)
              (PTR_DAT_000463fc + -0x22bc,1,0x1b,*(undefined4 *)PTR_stderr_000464d0);
  }
  else {
    puVar5 = PTR_DAT_000463fc + -0x22a0;
    iVar3 = 0;
    do {
      uVar2 = (*(code *)PTR_rts_reg_read_reg_00046600)(*(undefined4 *)(param_1 + 8),iVar3);
      iVar4 = iVar3 + 4;
      (*(code *)PTR_snprintf_00046684)(auStack_60,0x40,puVar5,iVar3,uVar2);
      uVar2 = (*(code *)PTR_strlen_00046464)(auStack_60);
      (*(code *)PTR_fwrite_000464a0)(auStack_60,1,uVar2,iVar1);
      iVar3 = iVar4;
    } while (iVar4 != 0x4a0);
    (*(code *)PTR_fclose_00046514)(iVar1);
  }
  return;
}



// ==== EWLEnableHW @ 00027910 size=184

undefined4 EWLEnableHW(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined *puVar10;
  code *pcVar11;
  code *pcVar12;
  int iStack_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  
  if ((param_1 != 0) && (iVar3 = *(int *)(param_1 + 8), iVar3 != 0)) {
    if ((*(int *)(param_1 + 0x68) == 0) && (*(int *)(param_1 + 0x10) != 0)) {
      (*(code *)PTR_rts_reg_handle_sigio_00046484)();
      iVar3 = *(int *)(param_1 + 8);
    }
    if (param_2 == 4) {
      *(undefined4 *)PTR_asic_status_000465b4 = param_3;
    }
                    /* WARNING: Could not recover jumptable at 0x0002796c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_rts_reg_write_reg_000466b8)(iVar3);
    return uVar1;
  }
  uVar1 = 0x16a;
  puVar4 = PTR_DAT_000463fc + -0x2350;
  puVar10 = PTR___assert_00046450;
  (*(code *)PTR___assert_00046450)
            (puVar4,PTR_DAT_000463fc + -0x231c,0x16a,PTR_DAT_000463fc + -0x20dc);
  if ((puVar4 != (undefined *)0x0) && (*(int *)(puVar4 + 8) != 0)) {
    uVar2 = (**(code **)(puVar10 + 0x1ecf0))();
    **(undefined4 **)(puVar10 + 0x1ebec) = uVar1;
    return uVar2;
  }
  iVar3 = *(int *)(puVar10 + 0x1ea34) + -0x2350;
  pcVar11 = *(code **)(puVar10 + 0x1ea88);
  iVar6 = *(int *)(puVar10 + 0x1ea34) + -0x231c;
  (*pcVar11)(iVar3,iVar6,0x185,*(int *)(puVar10 + 0x1ea34) + -0x20ec);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 8) != 0)) {
    if (iVar6 == 4) {
      return **(undefined4 **)(pcVar11 + 0x1eb74);
    }
                    /* WARNING: Could not recover jumptable at 0x00027a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(pcVar11 + 0x1ebc0))();
    return uVar1;
  }
  piVar8 = (int *)&DAT_0000019c;
  iVar6 = *(int *)(pcVar11 + 0x1e9bc) + -0x2350;
  pcVar12 = *(code **)(pcVar11 + 0x1ea10);
  iVar7 = *(int *)(pcVar11 + 0x1e9bc) + -0x231c;
  (*pcVar12)();
  iStack_78 = param_1;
  iVar3 = (**(code **)(pcVar12 + 0x1eba8))();
  if (iVar6 == 0) {
    uVar1 = 0x22e;
    iVar5 = *(int *)(pcVar12 + 0x1e944) + -0x2294;
    goto LAB_00027c2c;
  }
  iVar5 = *(int *)(pcVar12 + 0x1e944);
  if (piVar8 == (int *)0x0) {
    do {
      uVar1 = 0x22f;
      iVar5 = iVar5 + -0x227c;
LAB_00027c2c:
      (**(code **)(pcVar12 + 0x1e998))
                (iVar5,*(int *)(pcVar12 + 0x1e944) + -0x231c,uVar1,
                 *(int *)(pcVar12 + 0x1e944) + -0x2128);
    } while( true );
  }
  piVar9 = *(int **)(iVar6 + 0x14);
  if (piVar9 == (int *)0x0) {
    uStack_84 = -iVar3 & iVar7 + -1 + iVar3;
    pcVar11 = *(code **)(pcVar12 + 0x1ea84);
    uVar1 = *(undefined4 *)(iVar6 + 4);
    iStack_88 = 0;
    piVar8[1] = uStack_84;
    iStack_80 = 0;
    uStack_7c = 0;
    *piVar8 = 0;
    iVar3 = (*pcVar11)(uVar1,&iStack_88);
    if (-1 < iVar3) {
      piVar9 = *(int **)(iVar6 + 0x14);
      goto LAB_00027b74;
    }
  }
  else {
    iVar3 = *(int *)(iVar6 + 0x1c);
    uStack_84 = iVar7 + 3U & 0xfffffffc;
    piVar8[1] = uStack_84;
    iStack_88 = 0;
    iStack_80 = 0;
    uStack_7c = 0;
    *piVar8 = 0;
    if (iVar3 == 1) {
      if (*piVar9 == 0) {
        piVar9[1] = piVar9[1] + uStack_84;
      }
      else {
        iVar3 = *(int *)(iVar6 + 0x18);
        iStack_88 = *piVar9 + iVar3;
        if ((uint)(piVar9[1] - iVar3) < uStack_84) {
          return 0xffffffff;
        }
        iStack_80 = piVar9[2] + iVar3;
        *(uint *)(iVar6 + 0x18) = uStack_84 + iVar3;
      }
LAB_00027b74:
      if (piVar9 == (int *)0x0) {
        (**(code **)(pcVar12 + 0x1e958))(iStack_80,*(int *)(pcVar12 + 0x1e944) + -0x2268);
      }
      *piVar8 = iStack_88;
      piVar8[2] = iStack_80;
      return 0;
    }
  }
  return 0xffffffff;
}



// ==== EWLDisableHW @ 000279c8 size=120

undefined4 EWLDisableHW(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined *puVar10;
  code *pcVar11;
  code *pcVar12;
  int iStack_60;
  uint uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) {
    uVar1 = (*(code *)PTR_rts_reg_write_reg_000466b8)();
    *(undefined4 *)PTR_asic_status_000465b4 = param_3;
    return uVar1;
  }
  puVar3 = PTR_DAT_000463fc + -0x2350;
  puVar6 = PTR_DAT_000463fc + -0x231c;
  puVar10 = PTR___assert_00046450;
  (*(code *)PTR___assert_00046450)(puVar3,puVar6,0x185,PTR_DAT_000463fc + -0x20ec);
  if ((puVar3 != (undefined *)0x0) && (*(int *)(puVar3 + 8) != 0)) {
    if (puVar6 == (undefined *)0x4) {
      return **(undefined4 **)(puVar10 + 0x1eb74);
    }
                    /* WARNING: Could not recover jumptable at 0x00027a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(puVar10 + 0x1ebc0))();
    return uVar1;
  }
  piVar8 = (int *)&DAT_0000019c;
  iVar4 = *(int *)(puVar10 + 0x1e9bc) + -0x2350;
  pcVar11 = *(code **)(puVar10 + 0x1ea10);
  iVar7 = *(int *)(puVar10 + 0x1e9bc) + -0x231c;
  (*pcVar11)();
  iVar2 = (**(code **)(pcVar11 + 0x1eba8))();
  if (iVar4 == 0) {
    uVar1 = 0x22e;
    iVar5 = *(int *)(pcVar11 + 0x1e944) + -0x2294;
    goto LAB_00027c2c;
  }
  iVar5 = *(int *)(pcVar11 + 0x1e944);
  if (piVar8 == (int *)0x0) {
    do {
      uVar1 = 0x22f;
      iVar5 = iVar5 + -0x227c;
LAB_00027c2c:
      (**(code **)(pcVar11 + 0x1e998))
                (iVar5,*(int *)(pcVar11 + 0x1e944) + -0x231c,uVar1,
                 *(int *)(pcVar11 + 0x1e944) + -0x2128);
    } while( true );
  }
  piVar9 = *(int **)(iVar4 + 0x14);
  if (piVar9 == (int *)0x0) {
    uStack_5c = -iVar2 & iVar7 + -1 + iVar2;
    pcVar12 = *(code **)(pcVar11 + 0x1ea84);
    uVar1 = *(undefined4 *)(iVar4 + 4);
    iStack_60 = 0;
    piVar8[1] = uStack_5c;
    iStack_58 = 0;
    uStack_54 = 0;
    *piVar8 = 0;
    iVar2 = (*pcVar12)(uVar1,&iStack_60);
    if (-1 < iVar2) {
      piVar9 = *(int **)(iVar4 + 0x14);
      goto LAB_00027b74;
    }
  }
  else {
    iVar2 = *(int *)(iVar4 + 0x1c);
    uStack_5c = iVar7 + 3U & 0xfffffffc;
    piVar8[1] = uStack_5c;
    iStack_60 = 0;
    iStack_58 = 0;
    uStack_54 = 0;
    *piVar8 = 0;
    if (iVar2 == 1) {
      if (*piVar9 == 0) {
        piVar9[1] = piVar9[1] + uStack_5c;
      }
      else {
        iVar2 = *(int *)(iVar4 + 0x18);
        iStack_60 = *piVar9 + iVar2;
        if ((uint)(piVar9[1] - iVar2) < uStack_5c) {
          return 0xffffffff;
        }
        iStack_58 = piVar9[2] + iVar2;
        *(uint *)(iVar4 + 0x18) = uStack_5c + iVar2;
      }
LAB_00027b74:
      if (piVar9 == (int *)0x0) {
        (**(code **)(pcVar11 + 0x1e958))(iStack_58,*(int *)(pcVar11 + 0x1e944) + -0x2268);
      }
      *piVar8 = iStack_60;
      piVar8[2] = iStack_58;
      return 0;
    }
  }
  return 0xffffffff;
}



// ==== EWLReadReg @ 00027a40 size=120

undefined4 EWLReadReg(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  int *piVar7;
  undefined *puVar8;
  code *pcVar9;
  int iStack_40;
  uint uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) {
    if (param_2 == 4) {
      return *(undefined4 *)PTR_asic_status_000465b4;
    }
                    /* WARNING: Could not recover jumptable at 0x00027a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_rts_reg_read_reg_00046600)();
    return uVar1;
  }
  piVar6 = (int *)&DAT_0000019c;
  puVar3 = PTR_DAT_000463fc + -0x2350;
  puVar5 = PTR_DAT_000463fc + -0x231c;
  puVar8 = PTR___assert_00046450;
  (*(code *)PTR___assert_00046450)();
  iVar2 = (**(code **)(puVar8 + 0x1eba8))();
  if (puVar3 == (undefined *)0x0) {
    uVar1 = 0x22e;
    iVar4 = *(int *)(puVar8 + 0x1e944) + -0x2294;
    goto LAB_00027c2c;
  }
  iVar4 = *(int *)(puVar8 + 0x1e944);
  if (piVar6 == (int *)0x0) {
    do {
      uVar1 = 0x22f;
      iVar4 = iVar4 + -0x227c;
LAB_00027c2c:
      (**(code **)(puVar8 + 0x1e998))
                (iVar4,*(int *)(puVar8 + 0x1e944) + -0x231c,uVar1,
                 *(int *)(puVar8 + 0x1e944) + -0x2128);
    } while( true );
  }
  piVar7 = *(int **)(puVar3 + 0x14);
  if (piVar7 == (int *)0x0) {
    uStack_3c = -iVar2 & (uint)(puVar5 + iVar2 + -1);
    pcVar9 = *(code **)(puVar8 + 0x1ea84);
    uVar1 = *(undefined4 *)(puVar3 + 4);
    iStack_40 = 0;
    piVar6[1] = uStack_3c;
    iStack_38 = 0;
    uStack_34 = 0;
    *piVar6 = 0;
    iVar2 = (*pcVar9)(uVar1,&iStack_40);
    if (-1 < iVar2) {
      piVar7 = *(int **)(puVar3 + 0x14);
      goto LAB_00027b74;
    }
  }
  else {
    iVar2 = *(int *)(puVar3 + 0x1c);
    uStack_3c = (uint)(puVar5 + 3) & 0xfffffffc;
    piVar6[1] = uStack_3c;
    iStack_40 = 0;
    iStack_38 = 0;
    uStack_34 = 0;
    *piVar6 = 0;
    if (iVar2 == 1) {
      if (*piVar7 == 0) {
        piVar7[1] = piVar7[1] + uStack_3c;
      }
      else {
        iVar2 = *(int *)(puVar3 + 0x18);
        iStack_40 = *piVar7 + iVar2;
        if ((uint)(piVar7[1] - iVar2) < uStack_3c) {
          return 0xffffffff;
        }
        iStack_38 = piVar7[2] + iVar2;
        *(uint *)(puVar3 + 0x18) = uStack_3c + iVar2;
      }
LAB_00027b74:
      if (piVar7 == (int *)0x0) {
        (**(code **)(puVar8 + 0x1e958))(iStack_38,*(int *)(puVar8 + 0x1e944) + -0x2268);
      }
      *piVar6 = iStack_40;
      piVar6[2] = iStack_38;
      return 0;
    }
  }
  return 0xffffffff;
}



// ==== EWLMallocLinear @ 00027ab8 size=408

undefined4 EWLMallocLinear(int param_1,int param_2,int *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int *piVar5;
  int local_20;
  uint local_1c;
  int local_18;
  undefined4 local_14;
  
  iVar2 = (*(code *)PTR_getpagesize_00046660)();
  puVar1 = PTR_rts_isp_mem_alloc_0004653c;
  if (param_1 == 0) {
    uVar3 = 0x22e;
    puVar4 = PTR_DAT_000463fc + -0x2294;
    goto LAB_00027c2c;
  }
  puVar4 = PTR_DAT_000463fc;
  if (param_3 == (int *)0x0) {
    do {
      uVar3 = 0x22f;
      puVar4 = puVar4 + -0x227c;
LAB_00027c2c:
      (*(code *)PTR___assert_00046450)
                (puVar4,PTR_DAT_000463fc + -0x231c,uVar3,PTR_DAT_000463fc + -0x2128);
    } while( true );
  }
  piVar5 = *(int **)(param_1 + 0x14);
  if (piVar5 == (int *)0x0) {
    local_1c = -iVar2 & param_2 + -1 + iVar2;
    uVar3 = *(undefined4 *)(param_1 + 4);
    local_20 = 0;
    param_3[1] = local_1c;
    local_18 = 0;
    local_14 = 0;
    *param_3 = 0;
    iVar2 = (*(code *)puVar1)(uVar3,&local_20);
    if (-1 < iVar2) {
      piVar5 = *(int **)(param_1 + 0x14);
      goto LAB_00027b74;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1c);
    local_1c = param_2 + 3U & 0xfffffffc;
    param_3[1] = local_1c;
    local_20 = 0;
    local_18 = 0;
    local_14 = 0;
    *param_3 = 0;
    if (iVar2 == 1) {
      if (*piVar5 == 0) {
        piVar5[1] = piVar5[1] + local_1c;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x18);
        local_20 = *piVar5 + iVar2;
        if ((uint)(piVar5[1] - iVar2) < local_1c) {
          return 0xffffffff;
        }
        local_18 = piVar5[2] + iVar2;
        *(uint *)(param_1 + 0x18) = local_1c + iVar2;
      }
LAB_00027b74:
      if (piVar5 == (int *)0x0) {
        (*(code *)PTR_rts_isp_set_dma_info_00046410)(local_18,PTR_DAT_000463fc + -0x2268);
      }
      *param_3 = local_20;
      param_3[2] = local_18;
      return 0;
    }
  }
  return 0xffffffff;
}



// ==== EWLMallocRefFrm @ 00027c50 size=104

void EWLMallocRefFrm(int param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0x1bb;
    puVar1 = PTR_DAT_000463fc + -0x2294;
    goto LAB_00027c90;
  }
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00027c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_EWLMallocLinear_0004661c)();
    return;
  }
  do {
    uVar2 = 0x1bc;
    puVar1 = PTR_DAT_000463fc + -0x227c;
LAB_00027c90:
    (*(code *)PTR___assert_00046450)
              (puVar1,PTR_DAT_000463fc + -0x231c,uVar2,PTR_DAT_000463fc + -0x2108);
  } while( true );
}



// ==== EWLFreeLinear @ 00027cb8 size=232

void EWLFreeLinear(int param_1,undefined4 *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  
  if (param_1 == 0) {
    puVar1 = PTR_DAT_000463fc + -0x2294;
    goto LAB_00027d7c;
  }
  if (param_2 != (undefined4 *)0x0) {
    local_14 = param_2[1];
    local_18 = *param_2;
    local_10 = param_2[2];
    if (*(int **)(param_1 + 0x14) == (int *)0x0) {
      (*(code *)PTR_rts_isp_mem_free_00046614)(*(undefined4 *)(param_1 + 4),&local_18);
      return;
    }
    if ((**(int **)(param_1 + 0x14) != 0) &&
       (iVar2 = *(uint *)(param_1 + 0x18) - local_14, local_14 <= *(uint *)(param_1 + 0x18))) {
      *(int *)(param_1 + 0x18) = iVar2;
      if (*(int *)(param_1 + 0x1c) == 1) {
        if (iVar2 != 0) {
          *(undefined4 *)(param_1 + 0x1c) = 0;
          return;
        }
      }
      else if (iVar2 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x1c) = 1;
    }
    return;
  }
  do {
    puVar1 = PTR_DAT_000463fc + -0x227c;
LAB_00027d7c:
    (*(code *)PTR___assert_00046450)(puVar1,PTR_DAT_000463fc + -0x231c);
  } while( true );
}



// ==== EWLFreeRefFrm @ 00027da0 size=100

void EWLFreeRefFrm(int param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0x1d7;
  if (param_1 == 0) {
    puVar1 = PTR_DAT_000463fc + -0x2294;
    goto LAB_00027ddc;
  }
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00027dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_EWLFreeLinear_0004643c)();
    return;
  }
  do {
    uVar2 = 0x1d8;
    puVar1 = PTR_DAT_000463fc + -0x227c;
LAB_00027ddc:
    (*(code *)PTR___assert_00046450)
              (puVar1,PTR_DAT_000463fc + -0x231c,uVar2,PTR_DAT_000463fc + -0x2118);
  } while( true );
}



// ==== EWLReserveHw @ 00027e04 size=172

undefined4 EWLReserveHw(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  code *pcVar9;
  code *pcVar10;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int iStack_e4;
  
  if (param_1 != 0) {
    if (((*(int *)(param_1 + 8) == 0) &&
        (iVar1 = (*(code *)PTR_rts_reg_h264_open_000466bc)(param_1 + 8), iVar1 != 0)) ||
       (iVar1 = (*(code *)PTR_rts_wq_lock_wait_00046584)(*(undefined4 *)(param_1 + 0xc)), iVar1 != 0
       )) {
      uVar2 = 0xffffffff;
    }
    else {
      (*(code *)PTR_EWLWriteReg_000464ec)(param_1,0x38,0);
      uVar2 = 0;
    }
    return uVar2;
  }
  uVar2 = 0x27a;
  puVar4 = PTR_DAT_000463fc + -0x225c;
  puVar5 = PTR_DAT_000463fc + -0x231c;
  puVar8 = PTR___assert_00046450;
  (*(code *)PTR___assert_00046450)();
  if (puVar4 != (undefined *)0x0) {
    *(undefined **)(puVar4 + 0x6c) = puVar5;
    *(undefined4 *)(puVar4 + 0x68) = uVar2;
    return 0;
  }
  iVar1 = *(int *)(puVar8 + 0x1e54c) + -0x2228;
  (**(code **)(puVar8 + 0x1e698))
            (4,*(int *)(puVar8 + 0x1e54c) + -0x2248,*(int *)(puVar8 + 0x1e54c) + -0x2160,0x2c4);
  pcVar9 = *(code **)(puVar8 + 0x1e5a0);
  iVar6 = *(int *)(puVar8 + 0x1e54c) + -0x231c;
  (*pcVar9)(iVar1,iVar6,0x2c4,*(int *)(puVar8 + 0x1e54c) + -0x2178);
  if (iVar1 != 0) {
    if (iVar6 == 0) {
      *(undefined4 *)(iVar1 + 0x10) = 0;
      return 0;
    }
    *(undefined4 *)(iVar1 + 0x10) = 1;
    return 0;
  }
  iVar1 = *(int *)(pcVar9 + 0x1e4cc) + -0x2228;
  (**(code **)(pcVar9 + 0x1e618))
            (4,*(int *)(pcVar9 + 0x1e4cc) + -0x2248,*(int *)(pcVar9 + 0x1e4cc) + -0x218c,0x2d0);
  pcVar10 = *(code **)(pcVar9 + 0x1e520);
  (*pcVar10)(iVar1,*(int *)(pcVar9 + 0x1e4cc) + -0x231c,0x2d0,*(int *)(pcVar9 + 0x1e4cc) + -0x21a0);
  if (iVar1 != 0) {
    uVar3 = (**(code **)(pcVar10 + 0x1e63c))(*(undefined4 *)(iVar1 + 8),4);
    uVar2 = 0xffffffef;
    if ((uVar3 & 0x1fc) != 0) {
      uVar2 = 0;
    }
    return uVar2;
  }
  iVar1 = *(int *)(pcVar10 + 0x1e438) + -0x2228;
  (**(code **)(pcVar10 + 0x1e584))
            (4,*(int *)(pcVar10 + 0x1e438) + -0x2248,*(int *)(pcVar10 + 0x1e438) + -0x21b4,0x2df);
  pcVar9 = *(code **)(pcVar10 + 0x1e48c);
  (*pcVar9)(iVar1,*(int *)(pcVar10 + 0x1e438) + -0x231c,0x2df,*(int *)(pcVar10 + 0x1e438) + -0x21c8)
  ;
  if (iVar1 != 0) {
    (**(code **)(pcVar9 + 0x1e428))(iVar1 + 0x20);
    pcVar10 = *(code **)(pcVar9 + 0x1e644);
    *(undefined4 *)(iVar1 + 0x70) = 1;
    (*pcVar10)(iVar1 + 0x38);
    (**(code **)(pcVar9 + 0x1e48c))(iVar1 + 0x20);
    return 0;
  }
  iVar6 = *(int *)(pcVar9 + 0x1e398) + -0x2228;
  (**(code **)(pcVar9 + 0x1e4e4))
            (4,*(int *)(pcVar9 + 0x1e398) + -0x2248,*(int *)(pcVar9 + 0x1e398) + -0x21dc,0x2ec);
  pcVar10 = *(code **)(pcVar9 + 0x1e3ec);
  iVar1 = iVar6;
  (*pcVar10)(iVar6,*(int *)(pcVar9 + 0x1e398) + -0x231c,0x2ec,*(int *)(pcVar9 + 0x1e398) + -0x21f0);
  iStack_e4 = iVar6;
  if (iVar1 == 0) {
    iVar1 = *(int *)(pcVar10 + 0x1e2d0) + -0x2224;
    pcVar9 = *(code **)(pcVar10 + 0x1e324);
    (*pcVar9)(iVar1,*(int *)(pcVar10 + 0x1e2d0) + -0x231c,0x33b,
              *(int *)(pcVar10 + 0x1e2d0) + -0x2200);
    if (iVar1 != 0) {
      uVar3 = (**(code **)(pcVar9 + 0x1e1ac))();
      (**(code **)(pcVar9 + 0x1e18c))(iVar1,0x38,uVar3 & 0xfffffffe);
      uVar2 = (**(code **)(pcVar9 + 0x1e1fc))(*(undefined4 *)(iVar1 + 0xc));
      if (*(int *)(iVar1 + 8) != 0) {
        uVar2 = (**(code **)(pcVar9 + 0x1e0c0))();
      }
      *(undefined4 *)(iVar1 + 8) = 0;
      return uVar2;
    }
    pcVar10 = *(code **)(pcVar9 + 0x1e0f0);
    (*pcVar10)(*(int *)(pcVar9 + 0x1e09c) + -0x225c,*(int *)(pcVar9 + 0x1e09c) + -0x231c,0x351,
               *(int *)(pcVar9 + 0x1e09c) + -0x2210);
                    /* WARNING: Could not recover jumptable at 0x0002841c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pcVar10 + 0x1e228))();
    return uVar2;
  }
  pcVar9 = *(code **)(pcVar10 + 0x1e37c);
  if (*(int *)(iVar1 + 0x68) == 0) {
    if (*(int *)(iVar1 + 0x10) == 0) {
      iVar6 = 1000;
      do {
        (**(code **)(pcVar10 + 0x1e548))(1000,0);
        uVar3 = (**(code **)(pcVar10 + 0x1e4d4))(*(undefined4 *)(iVar1 + 8),4);
        if ((uVar3 & 0x1fc) != 0) {
          iVar7 = *(int *)(pcVar10 + 0x1e2d4);
          break;
        }
        iVar6 = iVar6 + -1;
        iVar7 = *(int *)(pcVar10 + 0x1e2d4);
      } while (iVar6 != 0);
      uVar2 = (*(code *)(iVar7 + 0x7734))(iVar1);
      return uVar2;
    }
    uStack_ec = 1000000;
    uStack_f0 = 0;
    (**(code **)(pcVar10 + 0x1e56c))(auStack_100);
    iVar6 = 1000;
    (**(code **)(pcVar10 + 0x1e4ec))(auStack_100,0x16);
    (**(code **)(pcVar10 + 0x1e448))(1,auStack_100,auStack_110);
    do {
      uVar3 = (**(code **)(pcVar10 + 0x1e4d4))(*(undefined4 *)(iVar1 + 8),4);
      if ((uVar3 & 0x1fc) != 0) break;
      iVar6 = iVar6 + -1;
      (**(code **)(pcVar10 + 0x1e3d8))(auStack_100,0,&uStack_f0);
    } while (iVar6 != 0);
    (**(code **)(pcVar10 + 0x1e448))(2,auStack_100,0);
  }
  else {
    *(undefined4 *)(iVar1 + 0x70) = 0;
    uVar2 = (*pcVar9)(*(undefined4 *)(iVar1 + 8));
    iVar6 = (**(code **)(iVar1 + 0x68))(*(undefined4 *)(iVar1 + 0x6c),uVar2);
    if (iVar6 < 0) {
      return 0xffffffff;
    }
    iVar6 = iVar1 + 0x20;
    (**(code **)(pcVar10 + 0x1e360))(iVar6);
    iVar7 = *(int *)(iVar1 + 0x70);
    while (iVar7 == 0) {
      (**(code **)(pcVar10 + 0x1e35c))(iVar1 + 0x38,iVar6);
      iVar7 = *(int *)(iVar1 + 0x70);
    }
    pcVar9 = *(code **)(pcVar10 + 0x1e3c4);
    *(undefined4 *)(iVar1 + 0x70) = 0;
    (*pcVar9)(iVar6);
  }
  uVar2 = (*(code *)(*(int *)(pcVar10 + 0x1e2d4) + 0x7734))(iVar1);
  return uVar2;
}



// ==== EWLWaitHwRdy @ 0002812c size=564

undefined4 EWLWaitHwRdy(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  
  puVar6 = PTR_rts_reg_get_handle_000464a8;
  if (param_1 == 0) {
    puVar4 = PTR_DAT_000463fc + -0x2224;
    puVar6 = PTR___assert_00046450;
    (*(code *)PTR___assert_00046450)
              (puVar4,PTR_DAT_000463fc + -0x231c,0x33b,PTR_DAT_000463fc + -0x2200);
    if (puVar4 == (undefined *)0x0) {
      pcVar7 = *(code **)(puVar6 + 0x1e0f0);
      (*pcVar7)(*(int *)(puVar6 + 0x1e09c) + -0x225c,*(int *)(puVar6 + 0x1e09c) + -0x231c,0x351,
                *(int *)(puVar6 + 0x1e09c) + -0x2210);
                    /* WARNING: Could not recover jumptable at 0x0002841c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(pcVar7 + 0x1e228))();
      return uVar1;
    }
    uVar3 = (**(code **)(puVar6 + 0x1e1ac))();
    (**(code **)(puVar6 + 0x1e18c))(puVar4,0x38,uVar3 & 0xfffffffe);
    uVar1 = (**(code **)(puVar6 + 0x1e1fc))(*(undefined4 *)(puVar4 + 0xc));
    if (*(int *)(puVar4 + 8) != 0) {
      uVar1 = (**(code **)(puVar6 + 0x1e0c0))();
    }
    *(undefined4 *)(puVar4 + 8) = 0;
    return uVar1;
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar2 = 1000;
      do {
        (*(code *)PTR_rts_delay_00046674)(1000,0);
        uVar3 = (*(code *)PTR_rts_reg_read_reg_00046600)(*(undefined4 *)(param_1 + 8),4);
        if ((uVar3 & 0x1fc) != 0) break;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      uVar1 = (*(code *)(PTR_LAB_00046400 + 0x7734))(param_1);
      return uVar1;
    }
    local_1c = 1000000;
    local_20 = 0;
    (*(code *)PTR_sigemptyset_00046698)(auStack_30);
    iVar2 = 1000;
    (*(code *)PTR_sigaddset_00046618)(auStack_30,0x16);
    (*(code *)PTR_pthread_sigmask_00046574)(1,auStack_30,auStack_40);
    do {
      uVar3 = (*(code *)PTR_rts_reg_read_reg_00046600)(*(undefined4 *)(param_1 + 8),4);
      if ((uVar3 & 0x1fc) != 0) break;
      iVar2 = iVar2 + -1;
      (*(code *)PTR_sigtimedwait_00046504)(auStack_30,0,&local_20);
    } while (iVar2 != 0);
    (*(code *)PTR_pthread_sigmask_00046574)(2,auStack_30,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = 0;
    uVar1 = (*(code *)puVar6)(*(undefined4 *)(param_1 + 8));
    iVar2 = (**(code **)(param_1 + 0x68))(*(undefined4 *)(param_1 + 0x6c),uVar1);
    if (iVar2 < 0) {
      return 0xffffffff;
    }
    iVar2 = param_1 + 0x20;
    (*(code *)PTR_pthread_mutex_lock_0004648c)(iVar2);
    iVar5 = *(int *)(param_1 + 0x70);
    while (puVar6 = PTR_pthread_mutex_unlock_000464f0, iVar5 == 0) {
      (*(code *)PTR_pthread_cond_wait_00046488)(param_1 + 0x38,iVar2);
      iVar5 = *(int *)(param_1 + 0x70);
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    (*(code *)puVar6)(iVar2);
  }
  uVar1 = (*(code *)(PTR_LAB_00046400 + 0x7734))(param_1);
  return uVar1;
}



// ==== EWLReleaseHw @ 00028360 size=172

void EWLReleaseHw(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  if (param_1 != 0) {
    uVar1 = (*(code *)PTR_EWLReadReg_0004650c)(param_1,0x38);
    (*(code *)PTR_EWLWriteReg_000464ec)(param_1,0x38,uVar1 & 0xfffffffe);
    (*(code *)PTR_rts_wq_lock_post_0004655c)(*(undefined4 *)(param_1 + 0xc));
    if (*(int *)(param_1 + 8) != 0) {
      (*(code *)PTR_rts_reg_h264_close_00046420)();
    }
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  }
  puVar2 = PTR___assert_00046450;
  (*(code *)PTR___assert_00046450)
            (PTR_DAT_000463fc + -0x225c,PTR_DAT_000463fc + -0x231c,0x351,PTR_DAT_000463fc + -0x2210)
  ;
                    /* WARNING: Could not recover jumptable at 0x0002841c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar2 + 0x1e228))();
  return;
}



// ==== EWLfree @ 00028424 size=40

void EWLfree(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0002843c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_free_00046414)();
    return;
  }
  return;
}



// ==== EWLRelease @ 0002844c size=200

uint * EWLRelease(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  code *pcVar6;
  uint auStack_38 [3];
  int iStack_2c;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      (*(code *)PTR_rts_reg_h264_close_00046420)();
    }
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 4) != -1) {
      (*(code *)PTR_close_00046430)();
    }
    puVar5 = PTR_pthread_cond_destroy_00046478;
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    (*(code *)puVar5)(param_1 + 0x38);
    (*(code *)PTR_pthread_mutex_destroy_00046490)(param_1 + 0x20);
    (*(code *)PTR_EWLfree_000465a8)(param_1);
    return (uint *)0x0;
  }
  puVar4 = (uint *)(PTR_DAT_000463fc + -0x225c);
  puVar5 = PTR___assert_00046450;
  (*(code *)PTR___assert_00046450)
            (puVar4,PTR_DAT_000463fc + -0x231c,0x116,PTR_DAT_000463fc + -0x20c4);
  if ((puVar4 != (uint *)0x0) && (*puVar4 < 5)) {
    iStack_2c = param_1;
    puVar1 = (uint *)(**(code **)(puVar5 + 0x1e110))(0x78);
    if (puVar1 != (uint *)0x0) {
      pcVar6 = *(code **)(puVar5 + 0x1df54);
      *puVar1 = *puVar4;
      puVar1[1] = 0xffffffff;
      (*pcVar6)(puVar1 + 8,0);
      (**(code **)(puVar5 + 0x1e058))(puVar1 + 0xe,0);
      iVar2 = (**(code **)(puVar5 + 0x1e1a8))(auStack_38);
      if (iVar2 == 0) {
        pcVar6 = *(code **)(puVar5 + 0x1dfd0);
        puVar1[2] = auStack_38[0];
        uVar3 = (*pcVar6)(2);
        puVar1[1] = uVar3;
        if (uVar3 != 0xffffffff) {
          iVar2 = (**(code **)(puVar5 + 0x1e138))(0x8070);
          if (iVar2 == 0) {
            (**(code **)(puVar5 + 0x1e148))(0x8070,*(int *)(puVar5 + 0x1dee8) + -0x2220);
            puVar1[3] = 0x8070;
            return puVar1;
          }
        }
      }
      (**(code **)(puVar5 + 0x1df84))(puVar1);
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}



