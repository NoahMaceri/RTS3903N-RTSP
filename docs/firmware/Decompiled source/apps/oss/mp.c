/* oss — "mp" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "oss.h"

// ==== mp_init_multi @ 004b4608 size=828

int mp_init_multi(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int local_10;
  
  local_10 = 0;
  if ((param_1 == 0) || (local_10 = (*(code *)PTR_mp_init_005611f0)(param_1), local_10 == 0)) {
    if ((param_2 == 0) || (local_10 = (*(code *)PTR_mp_init_005611f0)(param_2), local_10 == 0)) {
      if ((param_3 == 0) || (local_10 = (*(code *)PTR_mp_init_005611f0)(param_3), local_10 == 0)) {
        if ((param_4 == 0) || (local_10 = (*(code *)PTR_mp_init_005611f0)(param_4), local_10 == 0))
        {
          if ((param_5 == 0) || (local_10 = (*(code *)PTR_mp_init_005611f0)(param_5), local_10 == 0)
             ) {
            if ((param_6 != 0) &&
               (local_10 = (*(code *)PTR_mp_init_005611f0)(param_6), local_10 != 0)) {
              (*(code *)PTR_mp_clear_005611f8)(param_1);
              (*(code *)PTR_mp_clear_005611f8)(param_2);
              (*(code *)PTR_mp_clear_005611f8)(param_3);
              (*(code *)PTR_mp_clear_005611f8)(param_4);
              (*(code *)PTR_mp_clear_005611f8)(param_5);
            }
          }
          else {
            (*(code *)PTR_mp_clear_005611f8)(param_1);
            (*(code *)PTR_mp_clear_005611f8)(param_2);
            (*(code *)PTR_mp_clear_005611f8)(param_3);
            (*(code *)PTR_mp_clear_005611f8)(param_4);
          }
        }
        else {
          (*(code *)PTR_mp_clear_005611f8)(param_1);
          (*(code *)PTR_mp_clear_005611f8)(param_2);
          (*(code *)PTR_mp_clear_005611f8)(param_3);
        }
      }
      else {
        (*(code *)PTR_mp_clear_005611f8)(param_1);
        (*(code *)PTR_mp_clear_005611f8)(param_2);
      }
    }
    else {
      (*(code *)PTR_mp_clear_005611f8)(param_1);
    }
  }
  return local_10;
}



// ==== mp_init @ 004b4944 size=216

undefined4 mp_init(undefined4 *param_1)

{
  undefined4 uVar1;
  int local_10;
  
  uVar1 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(4);
  param_1[3] = uVar1;
  if (param_1[3] == 0) {
    uVar1 = 0xfffffffe;
  }
  else {
    for (local_10 = 0; local_10 < 1; local_10 = local_10 + 1) {
      *(undefined4 *)(param_1[3] + local_10 * 4) = 0;
    }
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    uVar1 = 0;
  }
  return uVar1;
}



// ==== mp_clear @ 004b4a1c size=256

void mp_clear(int *param_1)

{
  int local_10;
  
  if ((param_1 != (int *)0x0) && (param_1[3] != 0)) {
    for (local_10 = 0; local_10 < *param_1; local_10 = local_10 + 1) {
      *(undefined4 *)(param_1[3] + local_10 * 4) = 0;
    }
    if (param_1[3] != 0) {
      (*(code *)PTR_CyaSSL_Free_00560f84)(param_1[3]);
    }
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = *param_1;
    param_1[2] = 0;
  }
  return;
}



// ==== mp_unsigned_bin_size @ 004b4b1c size=136

int mp_unsigned_bin_size(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(code *)PTR_mp_count_bits_00561210)(param_1);
  uVar2 = uVar1;
  if ((int)uVar1 < 0) {
    uVar2 = uVar1 + 7;
  }
  return ((int)uVar2 >> 3) + (uint)((uVar1 & 7) != 0);
}



// ==== mp_count_bits @ 004b4ba4 size=192

int mp_count_bits(int *param_1)

{
  int local_10;
  uint local_c;
  
  if (*param_1 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = (*param_1 + -1) * 0x1c;
    for (local_c = *(uint *)(param_1[3] + (*param_1 + 0x3fffffff) * 4); local_c != 0;
        local_c = local_c >> 1) {
      local_10 = local_10 + 1;
    }
  }
  return local_10;
}



// ==== mp_to_unsigned_bin @ 004b4d6c size=352

int mp_to_unsigned_bin(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_20;
  int local_18 [3];
  undefined4 *local_c;
  
  iVar1 = (*(code *)PTR_FUN_00561304)(local_18,param_1);
  if (iVar1 == 0) {
    local_20 = 0;
    do {
      if (local_18[0] == 0) {
        (*(code *)(PTR_LAB_005612c8 + 0x5200))(param_2,local_20);
        (*(code *)PTR_mp_clear_005611f8)(local_18);
        return 0;
      }
      *(char *)(param_2 + local_20) = (char)*local_c;
      iVar1 = (*(code *)PTR_FUN_00561308)(local_18,8,local_18,0);
      local_20 = local_20 + 1;
    } while (iVar1 == 0);
    (*(code *)PTR_mp_clear_005611f8)(local_18);
  }
  return iVar1;
}



// ==== mp_copy @ 004b4f64 size=384

int mp_copy(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_18;
  
  if (param_1 == param_2) {
    iVar3 = 0;
  }
  else if ((*param_1 <= param_2[1]) ||
          (iVar3 = (*(code *)PTR_FUN_0056130c)(param_2,*param_1), iVar3 == 0)) {
    puVar1 = (undefined4 *)param_2[3];
    puVar2 = (undefined4 *)param_1[3];
    for (local_18 = 0; local_18 < *param_1; local_18 = local_18 + 1) {
      *puVar1 = *puVar2;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    for (; local_18 < *param_2; local_18 = local_18 + 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    *param_2 = *param_1;
    param_2[2] = param_1[2];
    iVar3 = 0;
  }
  return iVar3;
}



// ==== mp_read_unsigned_bin @ 004b5bb8 size=352

int mp_read_unsigned_bin(int *param_1,byte *param_2,int param_3)

{
  int iVar1;
  byte *local_res4;
  int local_res8;
  
  if ((1 < param_1[1]) || (iVar1 = (*(code *)PTR_FUN_0056130c)(param_1,2), iVar1 == 0)) {
    (*(code *)PTR_FUN_00561314)(param_1);
    local_res4 = param_2;
    local_res8 = param_3;
    while (0 < local_res8) {
      iVar1 = (*(code *)PTR_FUN_0056132c)(param_1,8,param_1);
      if (iVar1 != 0) {
        return iVar1;
      }
      *(uint *)param_1[3] = *(uint *)param_1[3] | (uint)*local_res4;
      *param_1 = *param_1 + 1;
      local_res4 = local_res4 + 1;
      local_res8 = local_res8 + -1;
    }
    (*(code *)PTR_FUN_00561324)(param_1);
    iVar1 = 0;
  }
  return iVar1;
}



// ==== mp_exptmod @ 004b61e8 size=940

int mp_exptmod(undefined4 param_1,int param_2,int *param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int local_30;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  if (param_3[2] == 1) {
    iVar2 = -3;
  }
  else if (*(int *)(param_2 + 8) == 1) {
    iVar2 = (*(code *)PTR_mp_init_005611f0)(auStack_28);
    if (iVar2 == 0) {
      iVar2 = (*(code *)PTR_mp_invmod_00561294)(param_1,param_3,auStack_28);
      if (iVar2 == 0) {
        iVar2 = (*(code *)PTR_mp_init_005611f0)(auStack_18);
        if (iVar2 == 0) {
          iVar2 = (*(code *)PTR_FUN_00561334)(param_2,auStack_18);
          if (iVar2 == 0) {
            iVar2 = (*(code *)PTR_mp_exptmod_0056126c)(auStack_28,auStack_18,param_3,param_4);
            (*(code *)PTR_mp_clear_005611f8)(auStack_28);
            (*(code *)PTR_mp_clear_005611f8)(auStack_18);
          }
          else {
            (*(code *)PTR_mp_clear_005611f8)(auStack_28);
            (*(code *)PTR_mp_clear_005611f8)(auStack_18);
          }
        }
        else {
          (*(code *)PTR_mp_clear_005611f8)(auStack_28);
        }
      }
      else {
        (*(code *)PTR_mp_clear_005611f8)(auStack_28);
      }
    }
  }
  else {
    iVar2 = (*(code *)PTR_FUN_00561338)(param_3);
    if (iVar2 == 1) {
      iVar2 = (*(code *)PTR_FUN_0056133c)(param_1,param_2,param_3,param_4,1);
    }
    else {
      local_30 = (*(code *)PTR_FUN_00561340)(param_3);
      if (local_30 == 0) {
        local_30 = (*(code *)PTR_FUN_00561344)(param_3);
        local_30 = local_30 << 1;
      }
      if ((*param_3 < 1) || ((*(uint *)param_3[3] & 1) == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) || (local_30 != 0)) {
        iVar2 = (*(code *)PTR_FUN_00561348)(param_1,param_2,param_3,param_4,local_30);
      }
      else {
        iVar2 = (*(code *)PTR_FUN_0056133c)(param_1,param_2,param_3,param_4,0);
      }
    }
  }
  return iVar2;
}



// ==== mp_invmod @ 004b662c size=268

undefined4 mp_invmod(undefined4 param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  
  if ((param_2[2] == 1) || (*param_2 == 0)) {
    uVar2 = 0xfffffffd;
  }
  else {
    if ((*param_2 < 1) || ((*(uint *)param_2[3] & 1) == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar2 = (*(code *)PTR_FUN_0056134c)(param_1,param_2,param_3);
    }
    else {
      uVar2 = (*(code *)PTR_FUN_00561350)(param_1,param_2,param_3);
    }
  }
  return uVar2;
}



// ==== mp_cmp @ 004b7ac8 size=228

undefined4 mp_cmp(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) {
    if (*(int *)(param_1 + 8) == 1) {
      uVar1 = (*(code *)PTR_FUN_0056135c)(param_2,param_1);
    }
    else {
      uVar1 = (*(code *)PTR_FUN_0056135c)(param_1,param_2);
    }
  }
  else if (*(int *)(param_1 + 8) == 1) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// ==== mp_cmp_d @ 004b7bac size=192

undefined4 mp_cmp_d(int *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] == 1) {
    uVar1 = 0xffffffff;
  }
  else if (*param_1 < 2) {
    if (param_2 < *(uint *)param_1[3]) {
      uVar1 = 1;
    }
    else if (*(uint *)param_1[3] < param_2) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// ==== mp_mod @ 004b7d00 size=360

int mp_mod(undefined4 param_1,int param_2,undefined4 param_3)

{
  int local_20;
  undefined1 auStack_1c [8];
  int local_14;
  
  local_20 = (*(code *)PTR_mp_init_005611f0)(auStack_1c);
  if (local_20 == 0) {
    local_20 = (*(code *)PTR_FUN_00561360)(param_1,param_2,0,auStack_1c);
    if (local_20 == 0) {
      if (local_14 == *(int *)(param_2 + 8)) {
        local_20 = 0;
        (*(code *)PTR_FUN_00561328)(auStack_1c,param_3);
      }
      else {
        local_20 = (*(code *)PTR_mp_add_00561278)(param_2,auStack_1c,param_3);
      }
      (*(code *)PTR_mp_clear_005611f8)(auStack_1c);
    }
    else {
      (*(code *)PTR_mp_clear_005611f8)(auStack_1c);
    }
  }
  return local_20;
}



// ==== mp_add @ 004b8584 size=316

undefined4 mp_add(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_2 + 8);
  if (iVar2 == iVar3) {
    *(int *)(param_3 + 8) = iVar2;
    local_18 = (*(code *)PTR_FUN_00561364)(param_1,param_2,param_3);
  }
  else {
    iVar1 = (*(code *)PTR_FUN_0056135c)(param_1,param_2);
    if (iVar1 == -1) {
      *(int *)(param_3 + 8) = iVar3;
      local_18 = (*(code *)PTR_FUN_00561368)(param_2,param_1,param_3);
    }
    else {
      *(int *)(param_3 + 8) = iVar2;
      local_18 = (*(code *)PTR_FUN_00561368)(param_1,param_2,param_3);
    }
  }
  return local_18;
}



// ==== mp_sub @ 004b8b6c size=328

undefined4 mp_sub(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == *(int *)(param_2 + 8)) {
    iVar1 = (*(code *)PTR_FUN_0056135c)(param_1,param_2);
    if (iVar1 == -1) {
      *(uint *)(param_3 + 8) = (uint)(iVar2 == 0);
      local_18 = (*(code *)PTR_FUN_00561368)(param_2,param_1,param_3);
    }
    else {
      *(int *)(param_3 + 8) = iVar2;
      local_18 = (*(code *)PTR_FUN_00561368)(param_1,param_2,param_3);
    }
  }
  else {
    *(int *)(param_3 + 8) = iVar2;
    local_18 = (*(code *)PTR_FUN_00561364)(param_1,param_2,param_3);
  }
  return local_18;
}



// ==== mp_mulmod @ 004bb1a0 size=296

int mp_mulmod(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_1c [20];
  
  iVar1 = (*(code *)PTR_mp_init_005611f0)(auStack_1c);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_mp_mul_00561274)(param_1,param_2,auStack_1c);
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_mp_mod_00561200)(auStack_1c,param_3,param_4);
      (*(code *)PTR_mp_clear_005611f8)(auStack_1c);
    }
    else {
      (*(code *)PTR_mp_clear_005611f8)(auStack_1c);
    }
  }
  return iVar1;
}



// ==== mp_mul @ 004bb390 size=340

undefined4 mp_mul(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  
  uVar1 = (uint)(param_1[2] != param_2[2]);
  iVar2 = *param_1 + *param_2 + 1;
  if (iVar2 < 0x200) {
    iVar3 = *param_1;
    if (*param_2 <= *param_1) {
      iVar3 = *param_2;
    }
    if (iVar3 < 0x101) {
      local_18 = (*(code *)PTR_FUN_005613a0)(param_1,param_2,param_3,iVar2);
      goto LAB_004bb49c;
    }
  }
  local_18 = (*(code *)PTR_FUN_005613a4)(param_1,param_2,param_3,*param_1 + *param_2 + 1);
LAB_004bb49c:
  if (*param_3 < 1) {
    uVar1 = 0;
  }
  param_3[2] = uVar1;
  return local_18;
}



// ==== mp_set_int @ 004be8c8 size=288

int mp_set_int(int *param_1,uint param_2)

{
  int iVar1;
  uint local_res4;
  int local_10;
  
  (*(code *)PTR_FUN_00561314)(param_1);
  local_10 = 0;
  local_res4 = param_2;
  while( true ) {
    if (7 < local_10) {
      (*(code *)PTR_FUN_00561324)(param_1);
      return 0;
    }
    iVar1 = (*(code *)PTR_FUN_0056132c)(param_1,4,param_1);
    if (iVar1 != 0) break;
    *(uint *)param_1[3] = *(uint *)param_1[3] | local_res4 >> 0x1c;
    local_res4 = local_res4 << 4;
    *param_1 = *param_1 + 1;
    local_10 = local_10 + 1;
  }
  return iVar1;
}



// ==== mp_add_d @ 004beb08 size=900

int mp_add_d(int *param_1,uint param_2,int *param_3)

{
  int iVar1;
  uint *puVar2;
  int local_20;
  int *local_1c;
  uint *local_18;
  uint local_14;
  
  if ((*param_1 + 1 <= param_3[1]) ||
     (iVar1 = (*(code *)PTR_FUN_0056130c)(param_3,*param_1 + 1), iVar1 == 0)) {
    if ((param_1[2] == 1) && ((1 < *param_1 || (param_2 <= *(uint *)param_1[3])))) {
      param_1[2] = 0;
      iVar1 = (*(code *)PTR_mp_sub_d_0056123c)(param_1,param_2,param_3);
      param_3[2] = 1;
      param_1[2] = param_3[2];
      (*(code *)PTR_FUN_00561324)(param_3);
    }
    else {
      iVar1 = *param_3;
      param_3[2] = 0;
      local_1c = (int *)param_1[3];
      puVar2 = (uint *)param_3[3];
      if (param_1[2] == 0) {
        *puVar2 = *local_1c + param_2;
        local_14 = *puVar2;
        *puVar2 = *puVar2 & 0xfffffff;
        local_20 = 1;
        while( true ) {
          local_14 = local_14 >> 0x1c;
          local_18 = puVar2 + 1;
          local_1c = local_1c + 1;
          if (*param_1 <= local_20) break;
          *local_18 = *local_1c + local_14;
          local_14 = *local_18;
          *local_18 = *local_18 & 0xfffffff;
          local_20 = local_20 + 1;
          puVar2 = local_18;
        }
        if ((local_14 != 0) && (local_20 < param_3[1])) {
          local_20 = local_20 + 1;
          *local_18 = local_14;
          local_18 = puVar2 + 2;
        }
        *param_3 = *param_1 + 1;
      }
      else {
        *param_3 = 1;
        if (*param_1 == 1) {
          *puVar2 = param_2 - *(int *)param_1[3];
        }
        else {
          *puVar2 = param_2;
        }
        local_18 = puVar2 + 1;
        local_20 = 1;
      }
      while (local_20 < iVar1) {
        *local_18 = 0;
        local_20 = local_20 + 1;
        local_18 = local_18 + 1;
      }
      (*(code *)PTR_FUN_00561324)(param_3);
      iVar1 = 0;
    }
  }
  return iVar1;
}



// ==== mp_sub_d @ 004bee8c size=836

int mp_sub_d(int *param_1,uint param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int *local_20;
  uint *local_1c;
  int local_14;
  
  if ((*param_1 + 1 <= param_3[1]) ||
     (iVar1 = (*(code *)PTR_FUN_0056130c)(param_3,*param_1 + 1), iVar1 == 0)) {
    if (param_1[2] == 1) {
      param_1[2] = 0;
      iVar1 = (*(code *)PTR_mp_add_d_00561300)(param_1,param_2,param_3);
      param_3[2] = 1;
      param_1[2] = param_3[2];
      (*(code *)PTR_FUN_00561324)(param_3);
    }
    else {
      iVar1 = *param_3;
      local_20 = (int *)param_1[3];
      local_1c = (uint *)param_3[3];
      if (((*param_1 == 1) && (*(uint *)param_1[3] <= param_2)) || (*param_1 == 0)) {
        if (*param_1 == 1) {
          *local_1c = param_2 - *local_20;
        }
        else {
          *local_1c = param_2;
        }
        local_1c = local_1c + 1;
        local_14 = 1;
        param_3[2] = 1;
        *param_3 = 1;
      }
      else {
        param_3[2] = 0;
        *param_3 = *param_1;
        *local_1c = *local_20 - param_2;
        uVar2 = *local_1c;
        *local_1c = *local_1c & 0xfffffff;
        local_14 = 1;
        while( true ) {
          local_1c = local_1c + 1;
          local_20 = local_20 + 1;
          if (*param_1 <= local_14) break;
          *local_1c = *local_20 + ((int)uVar2 >> 0x1f);
          uVar2 = *local_1c;
          *local_1c = *local_1c & 0xfffffff;
          local_14 = local_14 + 1;
        }
      }
      while (local_14 < iVar1) {
        *local_1c = 0;
        local_1c = local_1c + 1;
        local_14 = local_14 + 1;
      }
      (*(code *)PTR_FUN_00561324)(param_3);
      iVar1 = 0;
    }
  }
  return iVar1;
}



// ==== mp_prime_is_prime @ 004bfd80 size=620

int mp_prime_is_prime(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int local_28;
  int local_24;
  undefined1 auStack_20 [16];
  int local_10 [2];
  
  *param_3 = 0;
  if ((param_2 < 1) || (0x100 < param_2)) {
    local_24 = -3;
  }
  else {
    for (local_28 = 0; local_28 < 0x100; local_28 = local_28 + 1) {
      iVar1 = (*(code *)PTR_mp_cmp_d_00561214)
                        (param_1,*(undefined4 *)(PTR_DAT_005613d8 + local_28 * 4));
      if (iVar1 == 0) {
        *param_3 = 1;
        return 0;
      }
    }
    local_24 = (*(code *)(PTR_LAB_005613c8 + -0x370))(param_1,local_10);
    if (local_24 == 0) {
      if (local_10[0] == 1) {
        local_24 = 0;
      }
      else {
        local_24 = (*(code *)PTR_mp_init_005611f0)(auStack_20);
        if (local_24 == 0) {
          for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
            (*(code *)PTR_FUN_00561354)(auStack_20,*(undefined4 *)(PTR_DAT_005613d8 + local_28 * 4))
            ;
            local_24 = (*(code *)(PTR_LAB_005613c8 + -0x758))(param_1,auStack_20,local_10);
            if ((local_24 != 0) || (local_10[0] == 0)) goto LAB_004bffb0;
          }
          *param_3 = 1;
LAB_004bffb0:
          (*(code *)PTR_mp_clear_005611f8)(auStack_20);
        }
      }
    }
  }
  return local_24;
}



// ==== mp_lcm @ 004bffec size=544

int mp_lcm(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int local_30;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [20];
  
  iVar1 = (*(code *)PTR_mp_init_multi_00561288)(auStack_2c,auStack_1c,0,0,0,0);
  if (iVar1 != 0) {
    return iVar1;
  }
  local_30 = (*(code *)PTR_mp_gcd_0056128c)(param_1,param_2,auStack_2c);
  if (local_30 == 0) {
    iVar1 = (*(code *)PTR_FUN_0056135c)(param_1,param_2);
    if (iVar1 == -1) {
      local_30 = (*(code *)PTR_FUN_00561360)(param_1,auStack_2c,auStack_1c,0);
      if (local_30 != 0) goto LAB_004c01b4;
      local_30 = (*(code *)PTR_mp_mul_00561274)(param_2,auStack_1c,param_3);
    }
    else {
      local_30 = (*(code *)PTR_FUN_00561360)(param_2,auStack_2c,auStack_1c,0);
      if (local_30 != 0) goto LAB_004c01b4;
      local_30 = (*(code *)PTR_mp_mul_00561274)(param_1,auStack_1c,param_3);
    }
    *(undefined4 *)(param_3 + 8) = 0;
  }
LAB_004c01b4:
  (*(code *)PTR_mp_clear_005611f8)(auStack_2c);
  (*(code *)PTR_mp_clear_005611f8)(auStack_1c);
  return local_30;
}



// ==== mp_gcd @ 004c020c size=1140

int mp_gcd(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_38;
  undefined1 auStack_28 [8];
  undefined4 local_20;
  int local_18 [2];
  undefined4 local_10;
  
  if (*param_1 == 0) {
    local_38 = (*(code *)PTR_FUN_00561334)(param_2,param_3);
  }
  else if (*param_2 == 0) {
    local_38 = (*(code *)PTR_FUN_00561334)(param_1,param_3);
  }
  else {
    local_38 = (*(code *)PTR_FUN_00561304)(auStack_28,param_1);
    if (local_38 == 0) {
      local_38 = (*(code *)PTR_FUN_00561304)(local_18,param_2);
      if (local_38 == 0) {
        local_10 = 0;
        local_20 = 0;
        iVar1 = (*(code *)PTR_FUN_005613d0)(auStack_28);
        iVar2 = (*(code *)PTR_FUN_005613d0)(local_18);
        iVar4 = iVar1;
        if (iVar2 <= iVar1) {
          iVar4 = iVar2;
        }
        if (((iVar4 < 1) ||
            ((local_38 = (*(code *)PTR_FUN_00561308)(auStack_28,iVar4,auStack_28,0), local_38 == 0
             && (local_38 = (*(code *)PTR_FUN_00561308)(local_18,iVar4,local_18,0), local_38 == 0)))
            ) && ((iVar1 == iVar4 ||
                  (local_38 = (*(code *)PTR_FUN_00561308)(auStack_28,iVar1 - iVar4,auStack_28,0),
                  local_38 == 0)))) {
          if (iVar2 == iVar4) goto LAB_004c05d4;
          local_38 = (*(code *)PTR_FUN_00561308)(local_18,iVar2 - iVar4,local_18,0);
          while (local_38 == 0) {
LAB_004c05d4:
            if (local_18[0] == 0) {
              local_38 = (*(code *)PTR_FUN_0056132c)(auStack_28,iVar4,param_3);
              if (local_38 == 0) {
                *(undefined4 *)(param_3 + 8) = 0;
                local_38 = 0;
              }
              break;
            }
            iVar1 = (*(code *)PTR_FUN_0056135c)(auStack_28,local_18);
            if (iVar1 == 1) {
              (*(code *)PTR_FUN_00561328)(auStack_28,local_18);
            }
            local_38 = (*(code *)PTR_FUN_00561368)(local_18,auStack_28,local_18);
            if (local_38 != 0) break;
            uVar3 = (*(code *)PTR_FUN_005613d0)(local_18);
            local_38 = (*(code *)PTR_FUN_00561308)(local_18,uVar3,local_18,0);
          }
        }
        (*(code *)PTR_mp_clear_005611f8)(auStack_28);
      }
      (*(code *)PTR_mp_clear_005611f8)(local_18);
    }
  }
  return local_38;
}



