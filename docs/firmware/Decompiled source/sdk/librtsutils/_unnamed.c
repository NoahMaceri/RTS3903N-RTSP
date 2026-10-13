/* librtsutils — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsutils.h"

// ==== FUN_00010a18 @ 00010a18 size=80

void FUN_00010a18(void)

{
  if (((DAT_00021b48 - (int)(PTR_Elf32_Ehdr_00021b4c + 0x1b40) >> 2) -
       (DAT_00021b48 - (int)(PTR_Elf32_Ehdr_00021b4c + 0x1b40) >> 0x1f) >> 1 != 0) &&
     (DAT_00021ba0 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00021ba0)();
    return;
  }
  return;
}



// ==== FUN_00010a68 @ 00010a68 size=216

void FUN_00010a68(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = PTR_Elf32_Ehdr_00021b4c;
  if (PTR_Elf32_Ehdr_00021b4c[0x1bd0] == '\0') {
    if (DAT_00021bb8 != (code *)0x0) {
      (*DAT_00021bb8)(*DAT_00021b50);
    }
    puVar2 = PTR_Elf32_Ehdr_00021b4c;
    puVar3 = PTR_Elf32_Ehdr_00021b4c + 0x1b2c;
    iVar6 = DAT_00021b54 - (int)puVar3;
    while (uVar4 = *(uint *)(puVar2 + 0x1bd4), iVar5 = uVar4 + 1, uVar4 < (iVar6 >> 2) - 1U) {
      *(int *)(puVar2 + 0x1bd4) = iVar5;
      (**(code **)(puVar3 + iVar5 * 4))();
    }
    (*(code *)(DAT_00021b58 + 0x9d0))();
    puVar1[0x1bd0] = 1;
  }
  return;
}



// ==== FUN_00010b40 @ 00010b40 size=80

void FUN_00010b40(void)

{
  if ((*(int *)(PTR_Elf32_Ehdr_00021b4c + 0x1b34) != 0) && (DAT_00021b68 != (code *)0x0)) {
    (*DAT_00021b68)(PTR_Elf32_Ehdr_00021b4c + 0x1b34);
  }
                    /* WARNING: Could not recover jumptable at 0x00010b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(DAT_00021b58 + 0xa18))();
  return;
}



// ==== FUN_00010cd8 @ 00010cd8 size=60

void FUN_00010cd8(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x94) < 3) {
    uVar1 = *(undefined1 *)(*(uint *)(param_1 + 0x94) + DAT_00021b58 + 0x1ab0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(DAT_00021b58 + 0xc40))(param_1,param_2,uVar1);
  return;
}



// ==== FUN_00010df0 @ 00010df0 size=60

void FUN_00010df0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    uVar1 = 4;
  }
  else {
    uVar1 = 2;
    if (*(int *)(param_1 + 0x94) != 1) {
      uVar1 = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(DAT_00021b58 + 0xd34))(param_1,param_2,uVar1);
  return;
}



// ==== FUN_000110b8 @ 000110b8 size=136

void FUN_000110b8(int param_1)

{
  if (param_1 != 0) {
    if (-1 < *(int *)(param_1 + 0xa0)) {
      (*DAT_00021bb4)();
    }
    *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
    if (*(int *)(param_1 + 0x84) != 0) {
      (*DAT_00021b74)();
    }
    *(undefined4 *)(param_1 + 0x84) = 0;
                    /* WARNING: Could not recover jumptable at 0x00011128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00021b74)(param_1);
    return;
  }
  return;
}



// ==== FUN_00011140 @ 00011140 size=240

undefined4 FUN_00011140(code *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  code *pcVar3;
  
  if (param_1 == (code *)0x0) {
    pcVar2 = DAT_00021b58 + 0x1978;
    (*DAT_00021b98)(4,DAT_00021b58 + 0x1958,DAT_00021b58 + 0x1afc,0x107,pcVar2);
    uVar1 = 0x107;
    param_1 = pcVar2;
  }
  else {
    if (*(int *)(param_1 + 0xa4) == 0) {
      (*DAT_00021b98)(4,DAT_00021b58 + 0x1958,DAT_00021b58 + 0x1afc,0x108,DAT_00021b58 + 0x19d8);
    }
    pcVar3 = DAT_00021b58;
    if (*(int *)(param_1 + 0xa4) != 0) goto LAB_00011210;
    uVar1 = 0x108;
    pcVar2 = DAT_00021b58 + 0x19d8;
  }
  pcVar3 = DAT_00021b6c;
  (*DAT_00021b6c)(pcVar2,DAT_00021b58 + 0x1980,uVar1,DAT_00021b58 + 0x1ae8);
LAB_00011210:
  (*(pcVar3 + 0xb90))(param_1);
  return 0;
}



// ==== FUN_00011230 @ 00011230 size=1124

int FUN_00011230(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  code *pcVar11;
  int local_98 [17];
  int local_54 [7];
  int *local_38;
  int *local_34;
  int local_30;
  
  local_54[3] = 0;
  local_54[4] = 0;
  local_54[5] = 0;
  local_54[0] = 0;
  local_54[1] = 0;
  local_54[2] = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xa4) != 0x32) {
      return -0x1e;
    }
    if (*(int *)(param_1 + 0x88) * *(int *)(param_1 + 0x8c) * 2 != *(int *)(param_1 + 0x80)) {
      return -0x1e;
    }
    if (*(int *)(param_1 + 0x84) != 0) {
      iVar2 = (*DAT_00021b70)(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0x90));
      if (iVar2 < 0) {
        (*DAT_00021b98)(4,DAT_00021b58 + 0x19ec,DAT_00021b58 + 0x1ad4,0x127,DAT_00021b58 + 0x1ad4);
        return iVar2;
      }
      iVar7 = 0;
      iVar2 = (*DAT_00021ba8)(*(undefined4 *)(param_1 + 0xa0),3);
      local_38 = local_54 + 3;
      local_34 = local_54;
      if (iVar2 < 1) {
        (*DAT_00021b98)(4,DAT_00021b58 + 0x1a08,DAT_00021b58 + 0x1ad4,0x12d,DAT_00021b58 + 0x1ad4);
        return iVar2;
      }
      do {
        iVar3 = (*DAT_00021bb0)(*(undefined4 *)(param_1 + 0xa0),iVar7,local_54 + iVar7 + 3,
                                local_54 + iVar7);
        if (iVar3 < 0) {
          uVar6 = 0x135;
          iVar7 = DAT_00021b58 + 0x1a2c;
          goto LAB_000113f4;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != iVar2);
      iVar3 = (*DAT_00021bc4)(*(undefined4 *)(param_1 + 0xa0));
      if (iVar3 < 0) {
        uVar6 = 0x13c;
        iVar7 = DAT_00021b58 + 0x1a50;
LAB_000113f4:
        iVar8 = 0;
        (*DAT_00021b98)(4,iVar7,DAT_00021b58 + 0x1ad4,uVar6,DAT_00021b58 + 0x1ad4);
      }
      else {
        iVar3 = (*DAT_00021b84)(*(undefined4 *)(param_1 + 0xa0),*(undefined1 *)(param_1 + 0x9c),
                                *(undefined4 *)(param_1 + 0x98));
        iVar7 = DAT_00021b58;
        if (iVar3 < 0) {
          (*DAT_00021b98)(4,DAT_00021b58 + 0x1a6c,DAT_00021b58 + 0x1ad4,0x141,DAT_00021b58 + 0x1ad4)
          ;
        }
        else {
          iVar8 = 1000;
          iVar9 = 0;
          iVar10 = DAT_00021b58 + 0x1958;
          do {
            iVar3 = -1;
            (*DAT_00021bbc)(10000);
            iVar4 = (*DAT_00021b7c)(*(undefined4 *)(param_1 + 0xa0));
            if (iVar4 != 0) {
              iVar3 = (*DAT_00021b94)(*(undefined4 *)(param_1 + 0xa0),local_98);
              if (-1 < iVar3) {
                iVar9 = iVar9 + 1;
                bVar1 = false;
                if (*(int *)(param_1 + 0xa8) < iVar9) {
                  iVar4 = local_54[local_98[0] + 3];
                  if (iVar4 == 0) {
                    iVar4 = DAT_00021b58 + 0x1a8c;
                    (*DAT_00021b98)(4,DAT_00021b58 + 0x1958,DAT_00021b58 + 0x1ac4,0xa1,iVar4);
                    uVar6 = 0xa1;
                    iVar3 = iVar4;
LAB_00011570:
                    pcVar11 = DAT_00021b6c;
                    iVar4 = (*DAT_00021b6c)(iVar4,DAT_00021b58 + 0x1980,uVar6,DAT_00021b58 + 0x1ab4)
                    ;
                  }
                  else {
                    if (*(int *)(param_1 + 0xac) == 0) {
                      local_30 = iVar4;
                      (*DAT_00021b98)(4,iVar10,iVar7 + 0x1ac4,0xa2,DAT_00021b58 + 0x1a94);
                      iVar4 = local_30;
                    }
                    pcVar11 = *(code **)(param_1 + 0xac);
                    if (pcVar11 == (code *)0x0) {
                      uVar6 = 0xa2;
                      iVar4 = DAT_00021b58 + 0x1a94;
                      goto LAB_00011570;
                    }
                  }
                  if (*(int *)(param_1 + 0x84) == 0) {
                    bVar1 = true;
                  }
                  else {
                    bVar1 = true;
                    if (*(int *)(param_1 + 0x80) ==
                        *(int *)(param_1 + 0x88) * *(int *)(param_1 + 0x8c) * 2) {
                      (*pcVar11)(param_1,iVar4);
                    }
                  }
                }
                (*DAT_00021b80)(*(undefined4 *)(param_1 + 0xa0),local_98);
                if (bVar1) break;
              }
            }
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          (*DAT_00021b84)(*(undefined4 *)(param_1 + 0xa0),*(undefined1 *)(param_1 + 0x9c),0);
        }
        (*DAT_00021b9c)(*(undefined4 *)(param_1 + 0xa0));
        iVar8 = 0;
      }
      do {
        iVar7 = iVar8 + 3;
        piVar5 = local_54 + iVar8;
        iVar8 = iVar8 + 1;
        (*DAT_00021b8c)(local_54[iVar7],*piVar5);
      } while (iVar8 != iVar2);
      (*DAT_00021ba8)(*(undefined4 *)(param_1 + 0xa0),0);
      return iVar3;
    }
  }
  return -10;
}



// ==== FUN_00011694 @ 00011694 size=116

undefined4 FUN_00011694(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0xfffffff6;
  }
  if (param_1 - 1U < 4) {
    *(int *)(param_2 + 0x98) = param_1;
    if (param_1 != 1) {
      if (*DAT_00021bac < 3) {
        iVar1 = DAT_00021b58 + 0xd14;
      }
      else {
        iVar1 = DAT_00021b58 + 0xe2c;
      }
      *(int *)(param_2 + 0xac) = iVar1;
    }
    return 0;
  }
  return 0xffffffeb;
}



// ==== FUN_00011710 @ 00011710 size=88

void FUN_00011710(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)(PTR_Elf32_Ehdr_00021b4c + 0x1b24);
  pcVar2 = (code *)*puVar1;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



