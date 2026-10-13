/* rmm — "fshare" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rmm.h"

// ==== fshare_create @ 004128e8 size=752

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
  
  iVar2 = (*(code *)PTR_shm_open_00436aac)(PTR_LAB_00436a54 + 0x5058,0x102,0x1a4);
  if (iVar2 == -1) {
    puVar4 = (undefined4 *)(*(code *)PTR___errno_location_00436a98)();
    (*(code *)PTR_error_00436b08)(0,*puVar4,PTR_LAB_00436a54 + 0x506c,PTR_LAB_00436a54 + 0x513c);
  }
  else {
    (*(code *)PTR_ftruncate_00436b24)(iVar2,0x1b412c);
    iVar3 = (*(code *)PTR_mmap_00436b00)(0,0x1b412c,3,1,iVar2,0);
    puVar5 = PTR_LAB_00436a54;
    if (iVar3 != -1) {
      (*(code *)PTR_close_00436b14)(iVar2);
      puVar7 = PTR_sem_open_00436b04;
      puVar1 = PTR_DAT_00436a5c;
      *(int *)(PTR_DAT_00436a5c + 0x69d0) = iVar3;
      *(int *)(puVar1 + 0x6a20) = iVar3 + 0x1b412c;
      iVar2 = (*(code *)puVar7)(puVar5 + 0x5090,0x102,0x1a4,1);
      *(int *)(puVar1 + 0x69d4) = iVar2;
      if (iVar2 == 0) {
        puVar5 = puVar5 + 0x5090;
        puVar4 = (undefined4 *)(*(code *)PTR___errno_location_00436a98)();
      }
      else {
        iVar2 = 0;
        puVar7 = PTR_LAB_00436a54 + 0x50bc;
        piVar6 = (int *)(PTR_DAT_00436a5c + 0x69dc);
        do {
          (*(code *)PTR_snprintf_00436ac4)(auStack_38,0x17,puVar7,iVar2);
          iVar2 = iVar2 + 1;
          iVar3 = (*(code *)PTR_sem_open_00436b04)(auStack_38,0x102,0x1a4,0);
          *piVar6 = iVar3;
          puVar5 = PTR_LAB_00436a54;
          if (iVar3 == 0) {
            puVar4 = (undefined4 *)(*(code *)PTR___errno_location_00436a98)();
            (*(code *)PTR_error_00436b08)
                      (0,*puVar4,PTR_LAB_00436a54 + 0x50a4,PTR_LAB_00436a54 + 0x513c,auStack_38);
            goto LAB_00412acc;
          }
          piVar6 = piVar6 + 1;
        } while (iVar2 != 0x11);
        iVar2 = (*(code *)PTR_sem_open_00436b04)(PTR_LAB_00436a54 + 0x50d4,0x102,0x1a4,1);
        *(int *)(puVar1 + 0x69d8) = iVar2;
        if (iVar2 != 0) {
          return 0;
        }
        puVar5 = puVar5 + 0x50d4;
        puVar4 = (undefined4 *)(*(code *)PTR___errno_location_00436a98)();
      }
      (*(code *)PTR_error_00436b08)
                (0,*puVar4,PTR_LAB_00436a54 + 0x50a4,PTR_LAB_00436a54 + 0x513c,puVar5);
LAB_00412acc:
      (*(code *)(PTR_LAB_00436a58 + 0x22f0))();
      return 0xffffffff;
    }
    puVar4 = (undefined4 *)(*(code *)PTR___errno_location_00436a98)();
    (*(code *)PTR_error_00436b08)(0,*puVar4,PTR_LAB_00436a54 + 0x5080,PTR_LAB_00436a54 + 0x513c);
    (*(code *)PTR_close_00436b14)(iVar2);
  }
  return 0xffffffff;
}



// ==== fshare_write @ 00412ebc size=868

undefined4 fshare_write(undefined4 param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  code *pcVar12;
  int iVar13;
  int iVar14;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ushort local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  
  puVar3 = PTR_DAT_00436a5c;
  if (*(char *)((int)param_2 + 0x12) == '\x01') {
    iVar13 = 6;
  }
  else {
    iVar13 = 5;
    if (*(char *)((int)param_2 + 0x12) != '\x02') {
      iVar13 = 0;
    }
  }
  if (0x1b3fea < iVar13 + param_2[3]) {
    (*(code *)PTR_error_00436b08)
              (0,0,PTR_LAB_00436a54 + 0x50e8,PTR_LAB_00436a54 + 0x5120,iVar13 + param_2[3],0x1b3fea)
    ;
    return 0xffffffff;
  }
  (*(code *)PTR_sem_wait_00436ad0)(*(undefined4 *)(PTR_DAT_00436a5c + 0x69d4));
  iVar14 = param_2[3];
  iVar8 = *(int *)(puVar3 + 0x69d0);
  iVar10 = iVar14 + 0x16 + iVar13;
  iVar4 = iVar10 + *(int *)(iVar8 + 4);
  if (0x1b4000 < iVar4) {
    pcVar12 = (code *)(PTR_LAB_00436a58 + 0x24d4);
    do {
      while( true ) {
        (*pcVar12)(iVar8 + *(int *)(iVar8 + 0x10) + 300,&local_40,0x16);
        iVar14 = local_40 + 0x16 + *(int *)(iVar8 + 0x10);
        iVar4 = *(int *)(iVar8 + 4) - (local_40 + 0x16);
        *(int *)(iVar8 + 4) = iVar4;
        if (0x1b3fff < iVar14) break;
        *(int *)(iVar8 + 0x10) = iVar14;
        if (iVar10 + iVar4 < 0x1b4001) goto LAB_00412ff0;
      }
      *(int *)(iVar8 + 0x10) = iVar14 + -0x1b4000;
    } while (0x1b4000 < iVar10 + iVar4);
LAB_00412ff0:
    iVar4 = iVar10 + iVar4;
    iVar14 = param_2[3];
  }
  iVar6 = *(int *)(iVar8 + 0xc);
  iVar10 = iVar10 + iVar6;
  *(int *)(iVar8 + 4) = iVar4;
  if (0x1b3fff < iVar10) {
    iVar10 = iVar10 + -0x1b4000;
  }
  *(int *)(iVar8 + 0xc) = iVar10;
  local_3c = *(int *)(iVar8 + 0x18) + 1;
  if (local_3c == 0) {
    local_3c = 1;
    *(undefined4 *)(iVar8 + 0x18) = 1;
  }
  else {
    *(int *)(iVar8 + 0x18) = local_3c;
  }
  puVar2 = PTR_LAB_00436a58;
  local_34 = param_2[1];
  local_40 = iVar13 + iVar14;
  local_2e = *(undefined2 *)(param_2 + 2);
  local_30 = *(ushort *)((int)param_2 + 10);
  local_38 = *param_2;
  local_2c = *(undefined2 *)(param_2 + 4);
  if (iVar13 == 0) {
    uVar5 = (*(code *)(PTR_LAB_00436a58 + 0x2690))(iVar8 + iVar6 + 300,&local_40,0x16);
    uVar7 = param_2[3];
  }
  else {
    local_30 = local_30 | 0x20;
    pcVar12 = (code *)(PTR_LAB_00436a58 + 0x2690);
    uVar5 = (*pcVar12)();
    uVar5 = (*pcVar12)(uVar5,(int)param_2 + 0x12,iVar13);
    uVar7 = param_2[3];
  }
  (*(code *)(puVar2 + 0x2690))(uVar5,param_1,uVar7);
  uVar1 = *(ushort *)((int)param_2 + 10);
  if ((uVar1 & 0x200) == 0) {
    iVar13 = param_2[1];
    if (iVar13 - *(int *)(iVar8 + 0x14) < 0) {
      if (*(int *)(iVar8 + 0x14) != 0) goto LAB_004130e0;
      iVar4 = 1;
      if (iVar13 != 0) {
        iVar4 = iVar13;
      }
    }
    else {
      iVar4 = 1;
      if (iVar13 != 0) {
        iVar4 = iVar13;
      }
    }
    *(int *)(iVar8 + 0x14) = iVar4;
  }
LAB_004130e0:
  if (*(int *)(iVar8 + 8) < (int)param_2[3]) {
    *(undefined4 *)(iVar8 + 8) = param_2[3];
  }
  puVar9 = (undefined4 *)(iVar8 + 0x1c);
  puVar11 = (undefined4 *)(PTR_DAT_00436a5c + 0x69dc);
  while( true ) {
    if (((uVar1 & *(ushort *)(puVar9 + 3) & 0xff00) != 0) && (*puVar9 = 1, puVar9[1] != 0)) {
      (*(code *)PTR_sem_post_00436b3c)(*puVar11);
    }
    if (puVar11 + 1 == (undefined4 *)(puVar3 + 0x6a20)) break;
    puVar11 = puVar11 + 1;
    puVar9 = puVar9 + 4;
    uVar1 = *(ushort *)((int)param_2 + 10);
  }
  (*(code *)PTR_sem_post_00436b3c)(*(undefined4 *)(puVar3 + 0x69d4));
  return 0;
}



// ==== fshare_read @ 004132a0 size=636

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
  
  puVar1 = PTR_DAT_00436a5c;
  (*(code *)(PTR_LAB_00436a58 + 0x23bc))();
  if (*(int *)(*(int *)(puVar1 + 0x69d0) + param_1 * 0x10 + 0x1c) == 0) {
    (*(code *)(PTR_LAB_00436a58 + 0x2458))();
    uVar4 = 0xfffffffe;
  }
  else {
    iVar3 = (*(code *)(PTR_LAB_00436a58 + 0x2784))(param_2,param_3,param_4);
    if (iVar3 < 0) {
      (*(code *)(PTR_LAB_00436a58 + 0x2458))();
      uVar4 = 0xffffffff;
    }
    else {
      iVar6 = *(int *)(puVar1 + 0x69d0);
      local_2c = *param_2;
      iVar8 = *(int *)(iVar6 + 4);
      iVar9 = iVar6 + param_1 * 0x10 + 0x18;
      iVar3 = *(int *)(iVar6 + 0x10);
      local_30 = iVar9;
      if (0 < iVar8) {
        pcVar7 = (code *)(PTR_LAB_00436a58 + 0x24d4);
        do {
          uVar4 = (*pcVar7)(iVar6 + iVar3 + 300,&local_50,0x16);
          uVar2 = local_40;
          iVar5 = (*(code *)(PTR_LAB_00436a58 + 0x288c))
                            (*(undefined4 *)(iVar9 + 0xc),*(undefined2 *)(iVar9 + 0x10),local_40,
                             local_4c);
          if (iVar5 != 0) {
            if ((uVar2 & 0x20) == 0) {
              local_38[0] = 0;
              *(undefined1 *)((int)param_5 + 0x12) = 0;
              local_40 = uVar2;
            }
            else {
              uVar4 = (*(code *)(PTR_LAB_00436a58 + 0x25c8))(uVar4,param_5,local_38);
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
            goto LAB_00413464;
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
LAB_00413464:
      (*(code *)(PTR_LAB_00436a58 + 0x2458))();
    }
  }
  return uVar4;
}



// ==== fshare_read_newest @ 0041351c size=660

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
  
  puVar1 = PTR_DAT_00436a5c;
  (*(code *)(PTR_LAB_00436a58 + 0x23bc))();
  if (*(int *)(*(int *)(puVar1 + 0x69d0) + param_1 * 0x10 + 0x1c) == 0) {
    (*(code *)(PTR_LAB_00436a58 + 0x2458))();
    return 0xfffffffe;
  }
  iVar2 = (*(code *)(PTR_LAB_00436a58 + 0x2784))(param_2,param_3,param_4);
  if (iVar2 < 0) {
    (*(code *)(PTR_LAB_00436a58 + 0x2458))();
    return 0xffffffff;
  }
  iVar5 = *(int *)(puVar1 + 0x69d0);
  iVar8 = *(int *)(iVar5 + 4);
  iVar9 = iVar5 + param_1 * 0x10 + 0x18;
  local_2c = *param_2 + param_4;
  iVar2 = *(int *)(iVar5 + 0x10);
  local_30 = iVar9;
  if (0 < iVar8) {
    iVar10 = -1;
    pcVar6 = (code *)(PTR_LAB_00436a58 + 0x24d4);
    pcVar7 = (code *)(PTR_LAB_00436a58 + 0x288c);
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
        uVar4 = (*(code *)(PTR_LAB_00436a58 + 0x25c8))(uVar4,param_5,local_38);
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
      goto LAB_004136fc;
    }
  }
  uVar4 = 0xfffffffe;
  *(undefined4 *)(local_30 + 4) = 0;
LAB_004136fc:
  (*(code *)(PTR_LAB_00436a58 + 0x2458))();
  return uVar4;
}



// ==== fshare_wait @ 004137b0 size=196

undefined4 fshare_wait(int param_1)

{
  undefined *puVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  
  puVar1 = PTR_DAT_00436a5c;
  pcVar4 = (code *)(PTR_LAB_00436a58 + 0x23bc);
  iVar2 = *(int *)(PTR_DAT_00436a5c + 0x69d0) + param_1 * 0x10;
  pcVar3 = (code *)(PTR_LAB_00436a58 + 0x2458);
  while ((*pcVar4)(), *(int *)(iVar2 + 0x1c) == 0) {
    *(undefined4 *)(iVar2 + 0x20) = 1;
    (*pcVar3)();
    (*(code *)PTR_sem_wait_00436ad0)(*(undefined4 *)(puVar1 + (param_1 + 2) * 4 + 0x69d4));
  }
  *(undefined4 *)(iVar2 + 0x20) = 0;
  (*pcVar3)();
  return 0;
}



