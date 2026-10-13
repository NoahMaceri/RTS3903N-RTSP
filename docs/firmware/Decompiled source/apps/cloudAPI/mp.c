/* cloudAPI — "mp" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "cloudAPI.h"

// ==== mp_init_multi @ 00475ef8 size=828

int mp_init_multi(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int local_10;
  
  local_10 = 0;
  if ((param_1 == 0) || (local_10 = (*(code *)PTR_mp_init_004be8b0)(param_1), local_10 == 0)) {
    if ((param_2 == 0) || (local_10 = (*(code *)PTR_mp_init_004be8b0)(param_2), local_10 == 0)) {
      if ((param_3 == 0) || (local_10 = (*(code *)PTR_mp_init_004be8b0)(param_3), local_10 == 0)) {
        if ((param_4 == 0) || (local_10 = (*(code *)PTR_mp_init_004be8b0)(param_4), local_10 == 0))
        {
          if ((param_5 == 0) || (local_10 = (*(code *)PTR_mp_init_004be8b0)(param_5), local_10 == 0)
             ) {
            if ((param_6 != 0) &&
               (local_10 = (*(code *)PTR_mp_init_004be8b0)(param_6), local_10 != 0)) {
              (*(code *)PTR_mp_clear_004be8b8)(param_1);
              (*(code *)PTR_mp_clear_004be8b8)(param_2);
              (*(code *)PTR_mp_clear_004be8b8)(param_3);
              (*(code *)PTR_mp_clear_004be8b8)(param_4);
              (*(code *)PTR_mp_clear_004be8b8)(param_5);
            }
          }
          else {
            (*(code *)PTR_mp_clear_004be8b8)(param_1);
            (*(code *)PTR_mp_clear_004be8b8)(param_2);
            (*(code *)PTR_mp_clear_004be8b8)(param_3);
            (*(code *)PTR_mp_clear_004be8b8)(param_4);
          }
        }
        else {
          (*(code *)PTR_mp_clear_004be8b8)(param_1);
          (*(code *)PTR_mp_clear_004be8b8)(param_2);
          (*(code *)PTR_mp_clear_004be8b8)(param_3);
        }
      }
      else {
        (*(code *)PTR_mp_clear_004be8b8)(param_1);
        (*(code *)PTR_mp_clear_004be8b8)(param_2);
      }
    }
    else {
      (*(code *)PTR_mp_clear_004be8b8)(param_1);
    }
  }
  return local_10;
}



// ==== mp_init @ 00476234 size=216

undefined4 mp_init(undefined4 *param_1)

{
  undefined4 uVar1;
  int local_10;
  
  uVar1 = (*(code *)PTR_CyaSSL_Malloc_004be634)(4);
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



// ==== mp_clear @ 0047630c size=256

void mp_clear(int *param_1)

{
  int local_10;
  
  if ((param_1 != (int *)0x0) && (param_1[3] != 0)) {
    for (local_10 = 0; local_10 < *param_1; local_10 = local_10 + 1) {
      *(undefined4 *)(param_1[3] + local_10 * 4) = 0;
    }
    if (param_1[3] != 0) {
      (*(code *)PTR_CyaSSL_Free_004be640)(param_1[3]);
    }
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = *param_1;
    param_1[2] = 0;
  }
  return;
}



// ==== mp_unsigned_bin_size @ 0047640c size=136

int mp_unsigned_bin_size(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(code *)PTR_mp_count_bits_004be8d0)(param_1);
  uVar2 = uVar1;
  if ((int)uVar1 < 0) {
    uVar2 = uVar1 + 7;
  }
  return ((int)uVar2 >> 3) + (uint)((uVar1 & 7) != 0);
}



// ==== mp_count_bits @ 00476494 size=192

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



// ==== mp_to_unsigned_bin @ 0047665c size=352

int mp_to_unsigned_bin(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_20;
  int local_18 [3];
  undefined4 *local_c;
  
  iVar1 = (*(code *)PTR_FUN_004be9c4)(local_18,param_1);
  if (iVar1 == 0) {
    local_20 = 0;
    do {
      if (local_18[0] == 0) {
        (*(code *)(PTR_LAB_004be984 + 0x6af0))(param_2,local_20);
        (*(code *)PTR_mp_clear_004be8b8)(local_18);
        return 0;
      }
      *(char *)(param_2 + local_20) = (char)*local_c;
      iVar1 = (*(code *)PTR_FUN_004be9c8)(local_18,8,local_18,0);
      local_20 = local_20 + 1;
    } while (iVar1 == 0);
    (*(code *)PTR_mp_clear_004be8b8)(local_18);
  }
  return iVar1;
}



// ==== mp_copy @ 00476854 size=384

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
          (iVar3 = (*(code *)PTR_FUN_004be9cc)(param_2,*param_1), iVar3 == 0)) {
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



// ==== mp_read_unsigned_bin @ 004774a8 size=352

int mp_read_unsigned_bin(int *param_1,byte *param_2,int param_3)

{
  int iVar1;
  byte *local_res4;
  int local_res8;
  
  if ((1 < param_1[1]) || (iVar1 = (*(code *)PTR_FUN_004be9cc)(param_1,2), iVar1 == 0)) {
    (*(code *)PTR_FUN_004be9d4)(param_1);
    local_res4 = param_2;
    local_res8 = param_3;
    while (0 < local_res8) {
      iVar1 = (*(code *)PTR_FUN_004be9ec)(param_1,8,param_1);
      if (iVar1 != 0) {
        return iVar1;
      }
      *(uint *)param_1[3] = *(uint *)param_1[3] | (uint)*local_res4;
      *param_1 = *param_1 + 1;
      local_res4 = local_res4 + 1;
      local_res8 = local_res8 + -1;
    }
    (*(code *)PTR_FUN_004be9e4)(param_1);
    iVar1 = 0;
  }
  return iVar1;
}



// ==== mp_exptmod @ 00477ad8 size=940

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
    iVar2 = (*(code *)PTR_mp_init_004be8b0)(auStack_28);
    if (iVar2 == 0) {
      iVar2 = (*(code *)PTR_mp_invmod_004be954)(param_1,param_3,auStack_28);
      if (iVar2 == 0) {
        iVar2 = (*(code *)PTR_mp_init_004be8b0)(auStack_18);
        if (iVar2 == 0) {
          iVar2 = (*(code *)PTR_FUN_004be9f4)(param_2,auStack_18);
          if (iVar2 == 0) {
            iVar2 = (*(code *)PTR_mp_exptmod_004be92c)(auStack_28,auStack_18,param_3,param_4);
            (*(code *)PTR_mp_clear_004be8b8)(auStack_28);
            (*(code *)PTR_mp_clear_004be8b8)(auStack_18);
          }
          else {
            (*(code *)PTR_mp_clear_004be8b8)(auStack_28);
            (*(code *)PTR_mp_clear_004be8b8)(auStack_18);
          }
        }
        else {
          (*(code *)PTR_mp_clear_004be8b8)(auStack_28);
        }
      }
      else {
        (*(code *)PTR_mp_clear_004be8b8)(auStack_28);
      }
    }
  }
  else {
    iVar2 = (*(code *)PTR_FUN_004be9f8)(param_3);
    if (iVar2 == 1) {
      iVar2 = (*(code *)PTR_FUN_004be9fc)(param_1,param_2,param_3,param_4,1);
    }
    else {
      local_30 = (*(code *)PTR_FUN_004bea00)(param_3);
      if (local_30 == 0) {
        local_30 = (*(code *)PTR_FUN_004bea04)(param_3);
        local_30 = local_30 << 1;
      }
      if ((*param_3 < 1) || ((*(uint *)param_3[3] & 1) == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) || (local_30 != 0)) {
        iVar2 = (*(code *)PTR_FUN_004bea08)(param_1,param_2,param_3,param_4,local_30);
      }
      else {
        iVar2 = (*(code *)PTR_FUN_004be9fc)(param_1,param_2,param_3,param_4,0);
      }
    }
  }
  return iVar2;
}



// ==== mp_invmod @ 00477f1c size=268

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
      uVar2 = (*(code *)PTR_FUN_004bea0c)(param_1,param_2,param_3);
    }
    else {
      uVar2 = (*(code *)PTR_FUN_004bea10)(param_1,param_2,param_3);
    }
  }
  return uVar2;
}



// ==== mp_cmp @ 004793b8 size=228

undefined4 mp_cmp(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) {
    if (*(int *)(param_1 + 8) == 1) {
      uVar1 = (*(code *)PTR_FUN_004bea1c)(param_2,param_1);
    }
    else {
      uVar1 = (*(code *)PTR_FUN_004bea1c)(param_1,param_2);
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



// ==== mp_cmp_d @ 0047949c size=192

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



// ==== mp_mod @ 004795f0 size=360

int mp_mod(undefined4 param_1,int param_2,undefined4 param_3)

{
  int local_20;
  undefined1 auStack_1c [8];
  int local_14;
  
  local_20 = (*(code *)PTR_mp_init_004be8b0)(auStack_1c);
  if (local_20 == 0) {
    local_20 = (*(code *)PTR_FUN_004bea20)(param_1,param_2,0,auStack_1c);
    if (local_20 == 0) {
      if (local_14 == *(int *)(param_2 + 8)) {
        local_20 = 0;
        (*(code *)PTR_FUN_004be9e8)(auStack_1c,param_3);
      }
      else {
        local_20 = (*(code *)PTR_mp_add_004be938)(param_2,auStack_1c,param_3);
      }
      (*(code *)PTR_mp_clear_004be8b8)(auStack_1c);
    }
    else {
      (*(code *)PTR_mp_clear_004be8b8)(auStack_1c);
    }
  }
  return local_20;
}



// ==== mp_add @ 00479e74 size=316

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
    local_18 = (*(code *)PTR_FUN_004bea24)(param_1,param_2,param_3);
  }
  else {
    iVar1 = (*(code *)PTR_FUN_004bea1c)(param_1,param_2);
    if (iVar1 == -1) {
      *(int *)(param_3 + 8) = iVar3;
      local_18 = (*(code *)PTR_FUN_004bea28)(param_2,param_1,param_3);
    }
    else {
      *(int *)(param_3 + 8) = iVar2;
      local_18 = (*(code *)PTR_FUN_004bea28)(param_1,param_2,param_3);
    }
  }
  return local_18;
}



// ==== mp_sub @ 0047a45c size=328

undefined4 mp_sub(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == *(int *)(param_2 + 8)) {
    iVar1 = (*(code *)PTR_FUN_004bea1c)(param_1,param_2);
    if (iVar1 == -1) {
      *(uint *)(param_3 + 8) = (uint)(iVar2 == 0);
      local_18 = (*(code *)PTR_FUN_004bea28)(param_2,param_1,param_3);
    }
    else {
      *(int *)(param_3 + 8) = iVar2;
      local_18 = (*(code *)PTR_FUN_004bea28)(param_1,param_2,param_3);
    }
  }
  else {
    *(int *)(param_3 + 8) = iVar2;
    local_18 = (*(code *)PTR_FUN_004bea24)(param_1,param_2,param_3);
  }
  return local_18;
}



// ==== mp_mulmod @ 0047ca90 size=296

int mp_mulmod(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_1c [20];
  
  iVar1 = (*(code *)PTR_mp_init_004be8b0)(auStack_1c);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_mp_mul_004be934)(param_1,param_2,auStack_1c);
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_mp_mod_004be8c0)(auStack_1c,param_3,param_4);
      (*(code *)PTR_mp_clear_004be8b8)(auStack_1c);
    }
    else {
      (*(code *)PTR_mp_clear_004be8b8)(auStack_1c);
    }
  }
  return iVar1;
}



// ==== mp_mul @ 0047cc80 size=340

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
      local_18 = (*(code *)PTR_FUN_004bea60)(param_1,param_2,param_3,iVar2);
      goto LAB_0047cd8c;
    }
  }
  local_18 = (*(code *)PTR_FUN_004bea64)(param_1,param_2,param_3,*param_1 + *param_2 + 1);
LAB_0047cd8c:
  if (*param_3 < 1) {
    uVar1 = 0;
  }
  param_3[2] = uVar1;
  return local_18;
}



// ==== mp_set_int @ 004801b8 size=288

int mp_set_int(int *param_1,uint param_2)

{
  int iVar1;
  uint local_res4;
  int local_10;
  
  (*(code *)PTR_FUN_004be9d4)(param_1);
  local_10 = 0;
  local_res4 = param_2;
  while( true ) {
    if (7 < local_10) {
      (*(code *)PTR_FUN_004be9e4)(param_1);
      return 0;
    }
    iVar1 = (*(code *)PTR_FUN_004be9ec)(param_1,4,param_1);
    if (iVar1 != 0) break;
    *(uint *)param_1[3] = *(uint *)param_1[3] | local_res4 >> 0x1c;
    local_res4 = local_res4 << 4;
    *param_1 = *param_1 + 1;
    local_10 = local_10 + 1;
  }
  return iVar1;
}



// ==== mp_add_d @ 004803f8 size=900

int mp_add_d(int *param_1,uint param_2,int *param_3)

{
  int iVar1;
  uint *puVar2;
  int local_20;
  int *local_1c;
  uint *local_18;
  uint local_14;
  
  if ((*param_1 + 1 <= param_3[1]) ||
     (iVar1 = (*(code *)PTR_FUN_004be9cc)(param_3,*param_1 + 1), iVar1 == 0)) {
    if ((param_1[2] == 1) && ((1 < *param_1 || (param_2 <= *(uint *)param_1[3])))) {
      param_1[2] = 0;
      iVar1 = (*(code *)PTR_mp_sub_d_004be8fc)(param_1,param_2,param_3);
      param_3[2] = 1;
      param_1[2] = param_3[2];
      (*(code *)PTR_FUN_004be9e4)(param_3);
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
      (*(code *)PTR_FUN_004be9e4)(param_3);
      iVar1 = 0;
    }
  }
  return iVar1;
}



// ==== mp_sub_d @ 0048077c size=836

int mp_sub_d(int *param_1,uint param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int *local_20;
  uint *local_1c;
  int local_14;
  
  if ((*param_1 + 1 <= param_3[1]) ||
     (iVar1 = (*(code *)PTR_FUN_004be9cc)(param_3,*param_1 + 1), iVar1 == 0)) {
    if (param_1[2] == 1) {
      param_1[2] = 0;
      iVar1 = (*(code *)PTR_mp_add_d_004be9c0)(param_1,param_2,param_3);
      param_3[2] = 1;
      param_1[2] = param_3[2];
      (*(code *)PTR_FUN_004be9e4)(param_3);
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
      (*(code *)PTR_FUN_004be9e4)(param_3);
      iVar1 = 0;
    }
  }
  return iVar1;
}



// ==== mp_prime_is_prime @ 00481670 size=620

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
      iVar1 = (*(code *)PTR_mp_cmp_d_004be8d4)
                        (param_1,*(undefined4 *)(PTR_DAT_004bea9c + local_28 * 4));
      if (iVar1 == 0) {
        *param_3 = 1;
        return 0;
      }
    }
    local_24 = (*(code *)(PTR_LAB_004bea88 + 0x1580))(param_1,local_10);
    if (local_24 == 0) {
      if (local_10[0] == 1) {
        local_24 = 0;
      }
      else {
        local_24 = (*(code *)PTR_mp_init_004be8b0)(auStack_20);
        if (local_24 == 0) {
          for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
            (*(code *)PTR_FUN_004bea14)(auStack_20,*(undefined4 *)(PTR_DAT_004bea9c + local_28 * 4))
            ;
            local_24 = (*(code *)(PTR_LAB_004bea88 + 0x1198))(param_1,auStack_20,local_10);
            if ((local_24 != 0) || (local_10[0] == 0)) goto LAB_004818a0;
          }
          *param_3 = 1;
LAB_004818a0:
          (*(code *)PTR_mp_clear_004be8b8)(auStack_20);
        }
      }
    }
  }
  return local_24;
}



// ==== mp_lcm @ 004818dc size=544

int mp_lcm(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int local_30;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [20];
  
  iVar1 = (*(code *)PTR_mp_init_multi_004be948)(auStack_2c,auStack_1c,0,0,0,0);
  if (iVar1 != 0) {
    return iVar1;
  }
  local_30 = (*(code *)PTR_mp_gcd_004be94c)(param_1,param_2,auStack_2c);
  if (local_30 == 0) {
    iVar1 = (*(code *)PTR_FUN_004bea1c)(param_1,param_2);
    if (iVar1 == -1) {
      local_30 = (*(code *)PTR_FUN_004bea20)(param_1,auStack_2c,auStack_1c,0);
      if (local_30 != 0) goto LAB_00481aa4;
      local_30 = (*(code *)PTR_mp_mul_004be934)(param_2,auStack_1c,param_3);
    }
    else {
      local_30 = (*(code *)PTR_FUN_004bea20)(param_2,auStack_2c,auStack_1c,0);
      if (local_30 != 0) goto LAB_00481aa4;
      local_30 = (*(code *)PTR_mp_mul_004be934)(param_1,auStack_1c,param_3);
    }
    *(undefined4 *)(param_3 + 8) = 0;
  }
LAB_00481aa4:
  (*(code *)PTR_mp_clear_004be8b8)(auStack_2c);
  (*(code *)PTR_mp_clear_004be8b8)(auStack_1c);
  return local_30;
}



// ==== mp_gcd @ 00481afc size=1140

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
    local_38 = (*(code *)PTR_FUN_004be9f4)(param_2,param_3);
  }
  else if (*param_2 == 0) {
    local_38 = (*(code *)PTR_FUN_004be9f4)(param_1,param_3);
  }
  else {
    local_38 = (*(code *)PTR_FUN_004be9c4)(auStack_28,param_1);
    if (local_38 == 0) {
      local_38 = (*(code *)PTR_FUN_004be9c4)(local_18,param_2);
      if (local_38 == 0) {
        local_10 = 0;
        local_20 = 0;
        iVar1 = (*(code *)PTR_FUN_004bea94)(auStack_28);
        iVar2 = (*(code *)PTR_FUN_004bea94)(local_18);
        iVar4 = iVar1;
        if (iVar2 <= iVar1) {
          iVar4 = iVar2;
        }
        if (((iVar4 < 1) ||
            ((local_38 = (*(code *)PTR_FUN_004be9c8)(auStack_28,iVar4,auStack_28,0), local_38 == 0
             && (local_38 = (*(code *)PTR_FUN_004be9c8)(local_18,iVar4,local_18,0), local_38 == 0)))
            ) && ((iVar1 == iVar4 ||
                  (local_38 = (*(code *)PTR_FUN_004be9c8)(auStack_28,iVar1 - iVar4,auStack_28,0),
                  local_38 == 0)))) {
          if (iVar2 == iVar4) goto LAB_00481ec4;
          local_38 = (*(code *)PTR_FUN_004be9c8)(local_18,iVar2 - iVar4,local_18,0);
          while (local_38 == 0) {
LAB_00481ec4:
            if (local_18[0] == 0) {
              local_38 = (*(code *)PTR_FUN_004be9ec)(auStack_28,iVar4,param_3);
              if (local_38 == 0) {
                *(undefined4 *)(param_3 + 8) = 0;
                local_38 = 0;
              }
              break;
            }
            iVar1 = (*(code *)PTR_FUN_004bea1c)(auStack_28,local_18);
            if (iVar1 == 1) {
              (*(code *)PTR_FUN_004be9e8)(auStack_28,local_18);
            }
            local_38 = (*(code *)PTR_FUN_004bea28)(local_18,auStack_28,local_18);
            if (local_38 != 0) break;
            uVar3 = (*(code *)PTR_FUN_004bea94)(local_18);
            local_38 = (*(code *)PTR_FUN_004be9c8)(local_18,uVar3,local_18,0);
          }
        }
        (*(code *)PTR_mp_clear_004be8b8)(auStack_28);
      }
      (*(code *)PTR_mp_clear_004be8b8)(local_18);
    }
  }
  return local_38;
}



