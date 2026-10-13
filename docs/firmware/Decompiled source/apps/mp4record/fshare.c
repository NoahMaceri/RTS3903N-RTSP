/* mp4record — "fshare" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "mp4record.h"

// ==== fshare_create @ 00403b78 size=752

undefined4 fshare_create(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  int *piVar6;
  undefined *puVar7;
  undefined1 auStack_38 [28];
  
  iVar2 = (*(code *)PTR_shm_open_0041a24c)(PTR_DAT_0041a1fc + -0x67a8,0x102,0x1a4);
  if (iVar2 == -1) {
    puVar4 = (undefined4 *)(*(code *)PTR___errno_location_0041a220)();
    (*(code *)PTR_error_0041a224)(0,*puVar4,PTR_DAT_0041a1fc + -0x6794,PTR_DAT_0041a1fc + -0x66c4);
  }
  else {
    (*(code *)PTR_ftruncate_0041a23c)(iVar2,0x1b412c);
    iVar3 = (*(code *)PTR_mmap_0041a238)(0,0x1b412c,3,1,iVar2,0);
    puVar5 = PTR_DAT_0041a1fc;
    if (iVar3 != -1) {
      (*(code *)PTR_close_0041a21c)(iVar2);
      puVar7 = PTR_sem_open_0041a228;
      puVar1 = PTR_DAT_0041a1f4;
      *(int *)(PTR_DAT_0041a1f4 + -0x5e90) = iVar3;
      *(int *)(puVar1 + -0x5e40) = iVar3 + 0x1b412c;
      iVar2 = (*(code *)puVar7)(puVar5 + -0x6770,0x102,0x1a4,1);
      *(int *)(puVar1 + -0x5e8c) = iVar2;
      if (iVar2 == 0) {
        puVar5 = puVar5 + -0x6770;
        puVar4 = (undefined4 *)(*(code *)PTR___errno_location_0041a220)();
      }
      else {
        iVar2 = 0;
        puVar7 = PTR_DAT_0041a1fc + -0x6744;
        piVar6 = (int *)(PTR_DAT_0041a1f4 + -0x5e84);
        do {
          (*(code *)PTR_snprintf_0041a254)(auStack_38,0x17,puVar7,iVar2);
          iVar2 = iVar2 + 1;
          iVar3 = (*(code *)PTR_sem_open_0041a228)(auStack_38,0x102,0x1a4,0);
          *piVar6 = iVar3;
          puVar5 = PTR_DAT_0041a1fc;
          if (iVar3 == 0) {
            puVar4 = (undefined4 *)(*(code *)PTR___errno_location_0041a220)();
            (*(code *)PTR_error_0041a224)
                      (0,*puVar4,PTR_DAT_0041a1fc + -0x675c,PTR_DAT_0041a1fc + -0x66c4,auStack_38);
            goto LAB_00403d5c;
          }
          piVar6 = piVar6 + 1;
        } while (iVar2 != 0x11);
        iVar2 = (*(code *)PTR_sem_open_0041a228)(PTR_DAT_0041a1fc + -0x672c,0x102,0x1a4,1);
        *(int *)(puVar1 + -0x5e88) = iVar2;
        if (iVar2 != 0) {
          return 0;
        }
        puVar5 = puVar5 + -0x672c;
        puVar4 = (undefined4 *)(*(code *)PTR___errno_location_0041a220)();
      }
      (*(code *)PTR_error_0041a224)
                (0,*puVar4,PTR_DAT_0041a1fc + -0x675c,PTR_DAT_0041a1fc + -0x66c4,puVar5);
LAB_00403d5c:
      (*(code *)(PTR___DT_MIPS_BASE_ADDRESS_0041a1f8 + 0x3580))();
      return 0xffffffff;
    }
    puVar4 = (undefined4 *)(*(code *)PTR___errno_location_0041a220)();
    (*(code *)PTR_error_0041a224)(0,*puVar4,PTR_DAT_0041a1fc + -0x6780,PTR_DAT_0041a1fc + -0x66c4);
    (*(code *)PTR_close_0041a21c)(iVar2);
  }
  return 0xffffffff;
}



// ==== fshare_open @ 00403e68 size=740

undefined4 fshare_open(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined *puVar7;
  undefined1 auStack_38 [28];
  
  puVar1 = PTR_DAT_0041a1fc;
  puVar7 = PTR_DAT_0041a1f4;
  iVar3 = (*(code *)PTR_sem_open_0041a228)(PTR_DAT_0041a1fc + -0x672c,2);
  *(int *)(puVar7 + -0x5e88) = iVar3;
  if (iVar3 == 0) {
    puVar5 = (undefined4 *)(*(code *)PTR___errno_location_0041a220)();
    (*(code *)PTR_error_0041a224)
              (0,*puVar5,PTR_DAT_0041a1fc + -0x675c,PTR_DAT_0041a1fc + -0x66d0,puVar1 + -0x672c);
    return 0xffffffff;
  }
  iVar3 = (*(code *)PTR_shm_open_0041a24c)(PTR_DAT_0041a1fc + -0x67a8,2,0);
  if (iVar3 == -1) {
    puVar5 = (undefined4 *)(*(code *)PTR___errno_location_0041a220)();
    (*(code *)PTR_error_0041a224)(0,*puVar5,PTR_DAT_0041a1fc + -0x6794,PTR_DAT_0041a1fc + -0x66d0);
  }
  else {
    iVar4 = (*(code *)PTR_mmap_0041a238)(0,0x1b412c,3,1,iVar3,0);
    puVar1 = PTR_DAT_0041a1fc;
    if (iVar4 == -1) {
      puVar5 = (undefined4 *)(*(code *)PTR___errno_location_0041a220)();
      (*(code *)PTR_error_0041a224)(0,*puVar5,PTR_DAT_0041a1fc + -0x6780,PTR_DAT_0041a1fc + -0x66d0)
      ;
      (*(code *)PTR_close_0041a21c)(iVar3);
    }
    else {
      (*(code *)PTR_close_0041a21c)(iVar3);
      puVar2 = PTR_sem_open_0041a228;
      *(int *)(puVar7 + -0x5e90) = iVar4;
      *(int *)(puVar7 + -0x5e40) = iVar4 + 0x1b412c;
      iVar3 = (*(code *)puVar2)(puVar1 + -0x6770,2);
      *(int *)(puVar7 + -0x5e8c) = iVar3;
      if (iVar3 == 0) {
        puVar5 = (undefined4 *)(*(code *)PTR___errno_location_0041a220)();
        (*(code *)PTR_error_0041a224)
                  (0,*puVar5,PTR_DAT_0041a1fc + -0x675c,PTR_DAT_0041a1fc + -0x66d0,puVar1 + -0x6770)
        ;
      }
      else {
        iVar3 = 0;
        puVar7 = PTR_DAT_0041a1fc + -0x6744;
        piVar6 = (int *)(PTR_DAT_0041a1f4 + -0x5e84);
        while( true ) {
          (*(code *)PTR_snprintf_0041a254)(auStack_38,0x17,puVar7,iVar3);
          iVar3 = iVar3 + 1;
          iVar4 = (*(code *)PTR_sem_open_0041a228)(auStack_38,2);
          *piVar6 = iVar4;
          if (iVar4 == 0) break;
          piVar6 = piVar6 + 1;
          if (iVar3 == 0x11) {
            return 0;
          }
        }
        puVar5 = (undefined4 *)(*(code *)PTR___errno_location_0041a220)();
        (*(code *)PTR_error_0041a224)
                  (0,*puVar5,PTR_DAT_0041a1fc + -0x675c,PTR_DAT_0041a1fc + -0x66d0,auStack_38);
      }
    }
  }
  (*(code *)(PTR___DT_MIPS_BASE_ADDRESS_0041a1f8 + 0x3580))();
  return 0xffffffff;
}



// ==== fshare_read @ 00404530 size=636

undefined4 fshare_read(int param_1,int *param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  undefined *puVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ushort local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  int local_38 [2];
  int local_30;
  int local_2c;
  
  puVar1 = PTR_DAT_0041a1f4;
  (*(code *)(PTR___DT_MIPS_BASE_ADDRESS_0041a1f8 + 0x364c))();
  if (*(int *)(*(int *)(puVar1 + -0x5e90) + param_1 * 0x10 + 0x1c) == 0) {
    (*(code *)(PTR___DT_MIPS_BASE_ADDRESS_0041a1f8 + 0x36e8))();
    uVar4 = 0xfffffffe;
  }
  else {
    iVar3 = (*(code *)(PTR___DT_MIPS_BASE_ADDRESS_0041a1f8 + 0x3a14))(param_2,param_3,param_4);
    if (iVar3 < 0) {
      (*(code *)(PTR___DT_MIPS_BASE_ADDRESS_0041a1f8 + 0x36e8))();
      uVar4 = 0xffffffff;
    }
    else {
      iVar6 = *(int *)(puVar1 + -0x5e90);
      local_2c = *param_2;
      iVar8 = *(int *)(iVar6 + 4);
      iVar9 = iVar6 + param_1 * 0x10 + 0x18;
      iVar3 = *(int *)(iVar6 + 0x10);
      local_30 = iVar9;
      if (0 < iVar8) {
        pcVar7 = (code *)(PTR___DT_MIPS_BASE_ADDRESS_0041a1f8 + 0x3764);
        do {
          uVar4 = (*pcVar7)(iVar6 + iVar3 + 300,&local_50,0x16);
          uVar2 = local_40;
          iVar5 = (*(code *)(PTR___DT_MIPS_BASE_ADDRESS_0041a1f8 + 0x3b1c))
                            (*(undefined4 *)(iVar9 + 0xc),*(undefined2 *)(iVar9 + 0x10),local_40,
                             local_4c);
          if (iVar5 != 0) {
            if ((uVar2 & 0x20) == 0) {
              local_38[0] = 0;
              *(undefined1 *)((int)param_5 + 0x12) = 0;
              local_40 = uVar2;
            }
            else {
              uVar4 = (*(code *)(PTR___DT_MIPS_BASE_ADDRESS_0041a1f8 + 0x3858))
                                (uVar4,param_5,local_38);
            }
            *(ushort *)((int)param_5 + 10) = local_40;
            param_5[3] = local_50 - local_38[0];
            *param_5 = local_48;
            param_5[1] = local_44;
            *(undefined2 *)(param_5 + 2) = local_3e;
            *(undefined2 *)(param_5 + 4) = local_3c;
            (*pcVar7)(uVar4,local_2c + param_4,local_50 - local_38[0]);
            iVar3 = *(int *)(iVar6 + 0x18);
            *(int *)(iVar9 + 0xc) = local_4c;
            if (local_4c == iVar3) {
              *(undefined4 *)(local_30 + 4) = 0;
            }
            uVar4 = param_5[3];
            goto LAB_004046f4;
          }
          iVar5 = iVar3 + local_50;
          iVar8 = (iVar8 + -0x16) - local_50;
          iVar3 = iVar5 + 0x16;
          if (0x1b3fff < iVar3) {
            iVar3 = iVar5 + -0x1b3fea;
          }
        } while (0 < iVar8);
      }
      uVar4 = 0xfffffffe;
      *(undefined4 *)(local_30 + 4) = 0;
LAB_004046f4:
      (*(code *)(PTR___DT_MIPS_BASE_ADDRESS_0041a1f8 + 0x36e8))();
    }
  }
  return uVar4;
}



// ==== fshare_read_newest @ 004047ac size=660

undefined4
fshare_read_newest(int param_1,int *param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ushort local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  int local_38 [2];
  int local_30;
  int local_2c;
  
  puVar1 = PTR_DAT_0041a1f4;
  (*(code *)(PTR___DT_MIPS_BASE_ADDRESS_0041a1f8 + 0x364c))();
  if (*(int *)(*(int *)(puVar1 + -0x5e90) + param_1 * 0x10 + 0x1c) == 0) {
    (*(code *)(PTR___DT_MIPS_BASE_ADDRESS_0041a1f8 + 0x36e8))();
    return 0xfffffffe;
  }
  iVar2 = (*(code *)(PTR___DT_MIPS_BASE_ADDRESS_0041a1f8 + 0x3a14))(param_2,param_3,param_4);
  if (iVar2 < 0) {
    (*(code *)(PTR___DT_MIPS_BASE_ADDRESS_0041a1f8 + 0x36e8))();
    return 0xffffffff;
  }
  iVar5 = *(int *)(puVar1 + -0x5e90);
  iVar8 = *(int *)(iVar5 + 4);
  iVar9 = iVar5 + param_1 * 0x10 + 0x18;
  local_2c = *param_2 + param_4;
  iVar2 = *(int *)(iVar5 + 0x10);
  local_30 = iVar9;
  if (0 < iVar8) {
    iVar10 = -1;
    pcVar6 = (code *)(PTR___DT_MIPS_BASE_ADDRESS_0041a1f8 + 0x3764);
    pcVar7 = (code *)(PTR___DT_MIPS_BASE_ADDRESS_0041a1f8 + 0x3b1c);
    do {
      (*pcVar6)(iVar5 + iVar2 + 300,&local_50,0x16);
      iVar3 = (*pcVar7)(*(undefined4 *)(iVar9 + 0xc),*(undefined2 *)(iVar9 + 0x10),local_40,local_4c
                       );
      if (iVar3 != 0) {
        iVar10 = iVar2;
      }
      iVar8 = (iVar8 + -0x16) - local_50;
      iVar2 = local_50 + 0x16 + iVar2;
      if (0x1b3fff < iVar2) {
        iVar2 = iVar2 + -0x1b4000;
      }
    } while (0 < iVar8);
    if (iVar10 != -1) {
      uVar4 = (*pcVar6)(iVar5 + iVar10 + 300,&local_50,0x16);
      if ((local_40 & 0x20) == 0) {
        local_38[0] = 0;
        *(undefined1 *)((int)param_5 + 0x12) = 0;
      }
      else {
        uVar4 = (*(code *)(PTR___DT_MIPS_BASE_ADDRESS_0041a1f8 + 0x3858))(uVar4,param_5,local_38);
      }
      *param_5 = local_48;
      *(ushort *)((int)param_5 + 10) = local_40;
      param_5[1] = local_44;
      param_5[3] = local_50 - local_38[0];
      *(undefined2 *)(param_5 + 2) = local_3e;
      *(undefined2 *)(param_5 + 4) = local_3c;
      (*pcVar6)(uVar4,local_2c,local_50 - local_38[0]);
      iVar2 = *(int *)(iVar5 + 0x18);
      *(int *)(iVar9 + 0xc) = local_4c;
      if (local_4c == iVar2) {
        *(undefined4 *)(local_30 + 4) = 0;
      }
      uVar4 = param_5[3];
      goto LAB_0040498c;
    }
  }
  uVar4 = 0xfffffffe;
  *(undefined4 *)(local_30 + 4) = 0;
LAB_0040498c:
  (*(code *)(PTR___DT_MIPS_BASE_ADDRESS_0041a1f8 + 0x36e8))();
  return uVar4;
}



// ==== fshare_wait @ 00404a40 size=196

undefined4 fshare_wait(int param_1)

{
  undefined *puVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  
  puVar1 = PTR_DAT_0041a1f4;
  pcVar4 = (code *)(PTR___DT_MIPS_BASE_ADDRESS_0041a1f8 + 0x364c);
  iVar2 = *(int *)(PTR_DAT_0041a1f4 + -0x5e90) + param_1 * 0x10;
  pcVar3 = (code *)(PTR___DT_MIPS_BASE_ADDRESS_0041a1f8 + 0x36e8);
  while ((*pcVar4)(), *(int *)(iVar2 + 0x1c) == 0) {
    *(undefined4 *)(iVar2 + 0x20) = 1;
    (*pcVar3)();
    (*(code *)PTR_sem_wait_0041a244)(*(undefined4 *)(puVar1 + (param_1 + 2) * 4 + -0x5e8c));
  }
  *(undefined4 *)(iVar2 + 0x20) = 0;
  (*pcVar3)();
  return 0;
}



