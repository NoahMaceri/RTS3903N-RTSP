/* oss — "apr" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "oss.h"

// ==== apr_md5_init @ 00442534 size=68

undefined4 apr_md5_init(undefined4 *param_1)

{
  *param_1 = 0x67452301;
  param_1[5] = 0;
  param_1[1] = 0xefcdab89;
  param_1[4] = 0;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  param_1[0x16] = 0;
  return 0;
}



// ==== apr_md5_update @ 00442578 size=12

void apr_md5_update(void)

{
  FUN_00442308();
  return;
}



// ==== apr_md5_final @ 00442584 size=180

undefined4 apr_md5_final(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_18 [12];
  
  FUN_004413e0(auStack_18,param_2 + 0x10,8);
  uVar2 = *(uint *)(param_2 + 0x10) >> 3 & 0x3f;
  *(undefined4 *)(param_2 + 0x58) = 0;
  if (uVar2 < 0x38) {
    iVar1 = 0x38 - uVar2;
  }
  else {
    iVar1 = 0x78 - uVar2;
  }
  FUN_00442308(param_2,&DAT_005362b4,iVar1,0);
  FUN_00442308(param_2,auStack_18,8,0);
  FUN_004413e0(param_1,param_2,0x10);
  memset(param_2,0,0x5c);
  return 0;
}



// ==== apr_sha1_init @ 004438e8 size=76

void apr_sha1_init(undefined4 *param_1)

{
  *param_1 = 0x67452301;
  param_1[5] = 0;
  param_1[1] = 0xefcdab89;
  param_1[6] = 0;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  param_1[0x17] = 0;
  param_1[4] = 0xc3d2e1f0;
  return;
}



// ==== apr_sha1_final @ 00443b8c size=452

void apr_sha1_final(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  
  puVar9 = (undefined1 *)(param_2 + 0x1c);
  uVar13 = *(uint *)(param_2 + 0x14);
  uVar11 = *(undefined4 *)(param_2 + 0x18);
  uVar12 = uVar13 >> 3 & 0x3f;
  puVar9[uVar12] = 0x80;
  if (uVar12 + 1 < 0x39) {
    memset(puVar9 + uVar12 + 1,0,0x37 - uVar12);
  }
  else {
    memset(puVar9 + uVar12 + 1,0,0x3f - uVar12);
    puVar4 = puVar9;
    puVar6 = (undefined1 *)(param_2 + 0x1f);
    puVar8 = (undefined1 *)(param_2 + 0x1e);
    puVar10 = (undefined1 *)(param_2 + 0x1d);
    do {
      puVar7 = puVar4 + 4;
      uVar1 = *puVar4;
      uVar2 = *puVar10;
      uVar3 = *puVar8;
      *puVar4 = *puVar6;
      *puVar10 = uVar3;
      *puVar8 = uVar2;
      *puVar6 = uVar1;
      puVar4 = puVar7;
      puVar6 = puVar6 + 4;
      puVar8 = puVar8 + 4;
      puVar10 = puVar10 + 4;
    } while (puVar7 != (undefined1 *)(param_2 + 0x5c));
    FUN_00442638(param_2);
    memset(puVar9,0,0x38);
  }
  DAT_00569ce0 = 1;
  puVar4 = (undefined1 *)(param_2 + 0x1e);
  puVar6 = (undefined1 *)(param_2 + 0x1d);
  puVar8 = (undefined1 *)(param_2 + 0x1f);
  do {
    puVar10 = puVar9 + 4;
    uVar1 = *puVar9;
    uVar2 = *puVar6;
    uVar3 = *puVar4;
    *puVar9 = *puVar8;
    *puVar6 = uVar3;
    *puVar4 = uVar2;
    *puVar8 = uVar1;
    puVar4 = puVar4 + 4;
    puVar6 = puVar6 + 4;
    puVar9 = puVar10;
    puVar8 = puVar8 + 4;
  } while (puVar10 != (undefined1 *)(param_2 + 0x5c));
  *(undefined4 *)(param_2 + 0x54) = uVar11;
  *(uint *)(param_2 + 0x58) = uVar13;
  FUN_00442638(param_2);
  iVar5 = 0;
  do {
    uVar11 = *(undefined4 *)(param_2 + iVar5);
    iVar5 = iVar5 + 4;
    param_1[3] = (char)uVar11;
    *param_1 = (char)((uint)uVar11 >> 0x18);
    param_1[1] = (char)((uint)uVar11 >> 0x10);
    param_1[2] = (char)((uint)uVar11 >> 8);
    param_1 = param_1 + 4;
  } while (iVar5 != 0x14);
  return;
}



// ==== apr_queue_create @ 00443d8c size=244

int apr_queue_create(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)apr_palloc(param_3,0x2c);
  *param_1 = (int)puVar1;
  iVar2 = apr_thread_mutex_create(puVar1 + 7,2,param_3);
  if (((iVar2 == 0) && (iVar2 = FUN_00449c20(puVar1 + 8,param_3), iVar2 == 0)) &&
     (iVar2 = FUN_00449c20(puVar1 + 9,param_3), iVar2 == 0)) {
    uVar3 = apr_palloc(param_3,param_2 << 2);
    uVar3 = memset(uVar3,0,param_2 << 2);
    *puVar1 = uVar3;
    puVar1[4] = param_2;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[10] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    FUN_0044b38c(param_3,puVar1,&LAB_00443d50,&LAB_0044b61c);
    iVar2 = 0;
  }
  return iVar2;
}



// ==== apr_queue_push @ 00443e80 size=356

int apr_queue_push(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1[10] == 0) {
    iVar1 = apr_thread_mutex_lock(param_1[7]);
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar2 = param_1[1];
    uVar4 = param_1[4];
    if (uVar2 != uVar4) {
LAB_00443ee4:
      uVar3 = param_1[2] + 1;
      *(undefined4 *)(*param_1 + param_1[2] * 4) = param_2;
      if (uVar3 < uVar4) {
        param_1[2] = uVar3;
      }
      else {
        param_1[2] = uVar3 - uVar4;
      }
      param_1[1] = uVar2 + 1;
      if ((param_1[6] != 0) && (iVar1 = FUN_00449d78(param_1[8]), iVar1 != 0)) {
        apr_thread_mutex_unlock(param_1[7]);
        return iVar1;
      }
      iVar1 = apr_thread_mutex_unlock(param_1[7]);
      return iVar1;
    }
    if (param_1[10] == 0) {
      param_1[5] = param_1[5] + 1;
      iVar1 = FUN_00449ca4(param_1[9],param_1[7]);
      param_1[5] = param_1[5] + -1;
      if (iVar1 != 0) {
        apr_thread_mutex_unlock(param_1[7]);
        return iVar1;
      }
      uVar2 = param_1[1];
      uVar4 = param_1[4];
      if (uVar2 != uVar4) goto LAB_00443ee4;
    }
    iVar1 = apr_thread_mutex_unlock(param_1[7]);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_1[10] == 0) {
      return 4;
    }
  }
  return 0x1117e;
}



// ==== apr_queue_pop @ 00443fe4 size=348

int apr_queue_pop(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1[10] == 0) {
    iVar1 = apr_thread_mutex_lock(param_1[7]);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = param_1[1];
    if (iVar1 != 0) {
LAB_004440ac:
      uVar3 = param_1[4];
      uVar2 = param_1[3] + 1;
      *param_2 = *(undefined4 *)(*param_1 + param_1[3] * 4);
      param_1[1] = iVar1 + -1;
      param_1[3] = uVar2;
      if (uVar3 <= uVar2) {
        param_1[3] = uVar2 - uVar3;
      }
      if ((param_1[5] != 0) && (iVar1 = FUN_00449d78(param_1[9]), iVar1 != 0)) {
        apr_thread_mutex_unlock(param_1[7]);
        return iVar1;
      }
      iVar1 = apr_thread_mutex_unlock(param_1[7]);
      return iVar1;
    }
    if (param_1[10] == 0) {
      param_1[6] = param_1[6] + 1;
      iVar1 = FUN_00449ca4(param_1[8],param_1[7]);
      param_1[6] = param_1[6] + -1;
      if (iVar1 != 0) {
        apr_thread_mutex_unlock(param_1[7]);
        return iVar1;
      }
      iVar1 = param_1[1];
      if (iVar1 != 0) goto LAB_004440ac;
    }
    iVar1 = apr_thread_mutex_unlock(param_1[7]);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_1[10] == 0) {
      return 4;
    }
  }
  return 0x1117e;
}



// ==== apr_queue_trypop @ 00444140 size=228

int apr_queue_trypop(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1[10] == 0) {
    iVar1 = apr_thread_mutex_lock(param_1[7]);
    if (iVar1 == 0) {
      iVar1 = param_1[1];
      if (iVar1 == 0) {
        apr_thread_mutex_unlock(param_1[7]);
        iVar1 = 0xb;
      }
      else {
        uVar3 = param_1[4];
        uVar2 = param_1[3] + 1;
        *param_2 = *(undefined4 *)(*param_1 + param_1[3] * 4);
        param_1[1] = iVar1 + -1;
        param_1[3] = uVar2;
        if (uVar3 <= uVar2) {
          param_1[3] = uVar2 - uVar3;
        }
        if ((param_1[5] == 0) || (iVar1 = FUN_00449d78(param_1[9]), iVar1 == 0)) {
          iVar1 = apr_thread_mutex_unlock(param_1[7]);
          return iVar1;
        }
        apr_thread_mutex_unlock(param_1[7]);
      }
    }
  }
  else {
    iVar1 = 0x1117e;
  }
  return iVar1;
}



// ==== apr_thread_pool_create @ 00444f04 size=652

int apr_thread_pool_create(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_20 [8];
  
  *param_1 = 0;
  uVar1 = apr_palloc(param_4,0x70);
  puVar2 = (undefined4 *)memset(uVar1,0,0x70);
  iVar3 = apr_pool_create_ex(puVar2,param_4,0,0);
  if (iVar3 == 0) {
    puVar2[1] = param_3;
    puVar2[2] = param_2;
    puVar2[10] = param_2 >> 1;
    iVar3 = apr_thread_mutex_create(puVar2 + 0x13,1,*puVar2);
    if (iVar3 == 0) {
      iVar3 = FUN_00449c20(puVar2 + 0x14,*puVar2);
      if (iVar3 == 0) {
        iVar3 = apr_palloc(*puVar2,8);
        puVar2[0xf] = iVar3;
        if (iVar3 != 0) {
          uVar1 = *puVar2;
          *(int *)iVar3 = iVar3;
          *(int *)(iVar3 + 4) = iVar3;
          iVar3 = apr_palloc(uVar1,8);
          puVar2[0x10] = iVar3;
          if (iVar3 != 0) {
            uVar1 = *puVar2;
            *(int *)iVar3 = iVar3;
            *(int *)(iVar3 + 4) = iVar3;
            iVar3 = apr_palloc(uVar1,8);
            puVar2[0x16] = iVar3;
            if (iVar3 != 0) {
              uVar1 = *puVar2;
              *(int *)iVar3 = iVar3;
              *(int *)(iVar3 + 4) = iVar3;
              iVar3 = apr_palloc(uVar1,8);
              puVar2[0x11] = iVar3;
              if (iVar3 != 0) {
                uVar1 = *puVar2;
                *(int *)iVar3 = iVar3;
                *(int *)(iVar3 + 4) = iVar3;
                iVar3 = apr_palloc(uVar1,8);
                puVar2[0x12] = iVar3;
                if (iVar3 != 0) {
                  uVar1 = *puVar2;
                  *(int *)iVar3 = iVar3;
                  *(int *)(iVar3 + 4) = iVar3;
                  iVar3 = apr_palloc(uVar1,8);
                  puVar2[0x17] = iVar3;
                  if (iVar3 != 0) {
                    uVar1 = *puVar2;
                    *(int *)iVar3 = iVar3;
                    *(int *)(iVar3 + 4) = iVar3;
                    puVar2[9] = 0;
                    puVar2[0x18] = 0;
                    puVar2[8] = 0;
                    puVar2[0x19] = 0;
                    puVar2[7] = 0;
                    puVar2[0x1a] = 0;
                    puVar2[6] = 0;
                    puVar2[0x1b] = 0;
                    puVar2[0xe] = 0;
                    puVar2[0xd] = 0;
                    puVar2[0xc] = 0;
                    puVar2[0xb] = 0;
                    puVar2[4] = 0;
                    puVar2[5] = 0;
                    puVar2[0x15] = 0;
                    FUN_0044b4c8(uVar1,puVar2,&LAB_00444e98);
                    while( true ) {
                      if (param_2 == 0) {
                        *param_1 = (int)puVar2;
                        return 0;
                      }
                      param_2 = param_2 - 1;
                      apr_thread_mutex_lock(puVar2[0x13]);
                      iVar3 = FUN_0044c1e4(auStack_20,0,&LAB_00444538,puVar2,*puVar2);
                      apr_thread_mutex_unlock(puVar2[0x13]);
                      if (iVar3 != 0) break;
                      puVar2[6] = puVar2[6] + 1;
                      if ((uint)puVar2[0xd] < (uint)puVar2[6]) {
                        puVar2[0xd] = puVar2[6];
                      }
                    }
                    return iVar3;
                  }
                }
              }
            }
          }
        }
        apr_thread_mutex_destroy(puVar2[0x13]);
        FUN_00449d90(puVar2[0x14]);
        iVar3 = 0xc;
      }
      else {
        apr_thread_mutex_destroy(puVar2[0x13]);
      }
    }
  }
  return iVar3;
}



// ==== apr_thread_pool_push @ 00445190 size=44

void apr_thread_pool_push(void)

{
  add_if_empty();
  return;
}



// ==== apr_snprintf @ 004474d8 size=148

int apr_snprintf(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_resc;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 *local_10;
  
  local_resc = param_4;
  if (param_2 == 0) {
    local_10 = &local_resc;
    local_18 = (undefined1 *)0x0;
    local_14 = (undefined1 *)0x0;
    iVar1 = FUN_00445748(&LAB_00445404,&local_18,param_3,local_10);
  }
  else {
    local_10 = &local_resc;
    local_14 = param_1 + param_2 + -1;
    local_18 = param_1;
    iVar1 = FUN_00445748(&LAB_00445404,&local_18,param_3,local_10);
    *local_18 = 0;
  }
  if (iVar1 == -1) {
    iVar1 = param_2 + -1;
  }
  return iVar1;
}



// ==== apr_pstrndup @ 0044756c size=124

int apr_pstrndup(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = memchr(param_2,0);
    if (iVar1 != 0) {
      param_3 = iVar1 - param_2;
    }
    uVar2 = apr_palloc(param_1,param_3 + 1);
    iVar1 = memcpy(uVar2,param_2,param_3);
    *(undefined1 *)(iVar1 + param_3) = 0;
  }
  return iVar1;
}



// ==== apr_pstrdup @ 00447630 size=72

undefined4 apr_pstrdup(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    iVar1 = strlen(param_2);
    uVar2 = FUN_004475e8(param_1,param_2,iVar1 + 1);
    return uVar2;
  }
  return 0;
}



// ==== apr_array_make @ 00447cc0 size=152

undefined4 * apr_array_make(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)apr_palloc(param_1,0x14);
  if (param_2 < 1) {
    param_2 = 1;
  }
  uVar2 = apr_palloc(param_1,param_3 * param_2);
  uVar2 = memset(uVar2,0,param_3 * param_2);
  puVar1[4] = uVar2;
  *puVar1 = param_1;
  puVar1[1] = param_3;
  puVar1[3] = param_2;
  puVar1[2] = 0;
  return puVar1;
}



// ==== apr_array_pop @ 00447d58 size=60

int apr_array_pop(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) {
    iVar1 = *(int *)(param_1 + 8) + -1;
    *(int *)(param_1 + 8) = iVar1;
    return *(int *)(param_1 + 0x10) + *(int *)(param_1 + 4) * iVar1;
  }
  return 0;
}



// ==== apr_array_push @ 00447d94 size=256

int apr_array_push(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[2];
  if (iVar2 != param_1[3]) {
    param_1[2] = iVar2 + 1;
    return param_1[4] + iVar2 * param_1[1];
  }
  iVar1 = 1;
  if (0 < iVar2) {
    iVar1 = iVar2 << 1;
  }
  iVar2 = apr_palloc(*param_1,iVar1 * param_1[1]);
  memcpy(iVar2,param_1[4],param_1[3] * param_1[1]);
  memset(iVar2 + param_1[3] * param_1[1],0,param_1[1] * (iVar1 - param_1[3]));
  iVar3 = param_1[2];
  param_1[4] = iVar2;
  param_1[3] = iVar1;
  param_1[2] = iVar3 + 1;
  return iVar2 + iVar3 * param_1[1];
}



// ==== apr_table_elts @ 00447e94 size=8

undefined4 apr_table_elts(undefined4 param_1)

{
  return param_1;
}



// ==== apr_is_empty_table @ 00447e9c size=28

bool apr_is_empty_table(int param_1)

{
  if (param_1 != 0) {
    return *(int *)(param_1 + 8) == 0;
  }
  return true;
}



// ==== apr_table_make @ 00447eb8 size=132

undefined4 * apr_table_make(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)apr_palloc(param_1,0x118);
  if (param_2 < 1) {
    iVar3 = 0xc;
    param_2 = 1;
  }
  else {
    iVar3 = param_2 * 0xc;
  }
  uVar2 = apr_palloc(param_1,iVar3);
  puVar1[4] = uVar2;
  *puVar1 = param_1;
  puVar1[3] = param_2;
  puVar1[1] = 0xc;
  puVar1[2] = 0;
  puVar1[5] = 0;
  return puVar1;
}



// ==== apr_table_get @ 00447f3c size=328

undefined4 apr_table_get(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  bVar1 = *param_2;
  if ((1 << (bVar1 & 0x1f) & *(uint *)(param_1 + 0x14)) == 0) {
    return 0;
  }
  if ((char)bVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = ((int)(char)bVar1 << 8 | (int)(char)param_2[1]) << 8;
    if ((int)(char)param_2[1] != 0) {
      uVar4 = (uVar4 | (int)(char)param_2[2]) << 8;
      if ((int)(char)param_2[2] != 0) {
        uVar4 = uVar4 | (int)(char)param_2[3];
      }
      goto LAB_00447fdc;
    }
  }
  uVar4 = uVar4 << 8;
LAB_00447fdc:
  iVar2 = *(int *)(param_1 + 0x10);
  param_1 = param_1 + (bVar1 & 0x1f) * 4;
  iVar6 = *(int *)(param_1 + 0x98);
  puVar5 = (undefined4 *)(iVar2 + *(int *)(param_1 + 0x18) * 0xc);
  while( true ) {
    if ((undefined4 *)(iVar2 + iVar6 * 0xc) < puVar5) {
      return 0;
    }
    if ((puVar5[2] == (uVar4 & 0xdfdfdfdf)) && (iVar3 = strcasecmp(*puVar5,param_2), iVar3 == 0))
    break;
    puVar5 = puVar5 + 3;
  }
  return puVar5[1];
}



// ==== apr_table_set @ 00448084 size=740

void apr_table_set(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  
  uVar10 = (uint)*param_2;
  if (uVar10 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = (uVar10 << 8 | (int)param_2[1]) << 8;
    if ((int)param_2[1] != 0) {
      uVar15 = (uVar15 | (int)param_2[2]) << 8;
      if ((int)param_2[2] != 0) {
        uVar15 = uVar15 | (int)param_2[3];
      }
      uVar2 = param_1[5];
      uVar6 = 1 << (uVar10 & 0x1f);
      uVar7 = uVar6 & uVar2;
      uVar15 = uVar15 & 0xdfdfdfdf;
      goto joined_r0x004481c4;
    }
  }
  uVar2 = param_1[5];
  uVar6 = 1 << (uVar10 & 0x1f);
  uVar7 = uVar6 & uVar2;
  uVar15 = (uVar15 & 0xdfdfdf) << 8;
joined_r0x004481c4:
  if (uVar7 == 0) {
    iVar12 = param_1[2];
    param_1[(uVar10 & 0x1f) + 6] = iVar12;
    param_1[5] = uVar6 | uVar2;
  }
  else {
    iVar13 = param_1[4];
    puVar14 = (undefined4 *)(iVar13 + param_1[(uVar10 & 0x1f) + 0x26] * 0xc);
    puVar3 = (undefined4 *)(iVar13 + param_1[(uVar10 & 0x1f) + 6] * 0xc);
    iVar12 = param_1[2];
    if (puVar3 <= puVar14) {
      uVar2 = puVar3[2];
      while( true ) {
        if ((uVar2 == uVar15) && (iVar5 = strcasecmp(*puVar3,param_2), iVar5 == 0)) {
          puVar11 = puVar3 + 3;
          uVar4 = apr_pstrdup(*param_1,param_3);
          puVar3[1] = uVar4;
          if (puVar14 < puVar11) {
            return;
          }
          bVar1 = false;
          puVar3 = (undefined4 *)0x0;
          do {
            puVar9 = puVar3;
            if ((puVar11[2] == uVar15) && (iVar5 = strcasecmp(*puVar11,param_2), iVar5 == 0)) {
              if (puVar3 == (undefined4 *)0x0) {
                puVar9 = puVar11;
              }
              param_1[2] = param_1[2] + -1;
            }
            else if (puVar3 != (undefined4 *)0x0) {
              puVar9 = puVar3 + 3;
              uVar4 = puVar11[1];
              bVar1 = true;
              uVar8 = puVar11[2];
              *puVar3 = *puVar11;
              puVar3[1] = uVar4;
              puVar3[2] = uVar8;
            }
            puVar11 = puVar11 + 3;
            puVar3 = puVar9;
          } while (puVar11 <= puVar14);
          if (puVar9 == (undefined4 *)0x0) {
            if (!bVar1) {
              return;
            }
          }
          else {
            for (; puVar11 < (undefined4 *)(iVar13 + iVar12 * 0xc); puVar11 = puVar11 + 3) {
              uVar8 = puVar11[1];
              uVar4 = puVar11[2];
              *puVar9 = *puVar11;
              puVar9[1] = uVar8;
              puVar9[2] = uVar4;
              puVar9 = puVar9 + 3;
            }
          }
          FUN_00447b8c(param_1);
          return;
        }
        if (puVar14 < puVar3 + 3) break;
        uVar2 = puVar3[5];
        puVar3 = puVar3 + 3;
      }
    }
  }
  param_1[(uVar10 & 0x1f) + 0x26] = iVar12;
  puVar3 = (undefined4 *)FUN_00447bf8(param_1);
  uVar4 = apr_pstrdup(*param_1,param_2);
  uVar8 = *param_1;
  *puVar3 = uVar4;
  uVar4 = apr_pstrdup(uVar8,param_3);
  puVar3[1] = uVar4;
  puVar3[2] = uVar15;
  return;
}



// ==== apr_table_add @ 00448368 size=244

void apr_table_add(undefined4 *param_1,byte *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar1 = param_1[2];
  uVar5 = *param_2 & 0x1f;
  param_1[uVar5 + 0x26] = uVar1;
  uVar3 = param_1[5];
  if ((1 << uVar5 & uVar3) == 0) {
    param_1[uVar5 + 6] = uVar1;
    param_1[5] = 1 << uVar5 | uVar3;
  }
  if ((char)*param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = ((int)(char)*param_2 << 8 | (int)(char)param_2[1]) << 8;
    if ((int)(char)param_2[1] != 0) {
      uVar3 = (uVar3 | (int)(char)param_2[2]) << 8;
      if ((int)(char)param_2[2] != 0) {
        uVar3 = uVar3 | (int)(char)param_2[3];
      }
      goto LAB_004483f8;
    }
  }
  uVar3 = uVar3 << 8;
LAB_004483f8:
  puVar2 = (undefined4 *)FUN_00447bf8(param_1);
  uVar1 = apr_pstrdup(*param_1,param_2);
  uVar4 = *param_1;
  *puVar2 = uVar1;
  uVar1 = apr_pstrdup(uVar4,param_3);
  puVar2[1] = uVar1;
  puVar2[2] = uVar3 & 0xdfdfdfdf;
  return;
}



// ==== apr_table_addn @ 0044845c size=204

void apr_table_addn(int param_1,byte *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  iVar3 = param_1 + (*param_2 & 0x1f) * 4;
  uVar5 = 1 << (*param_2 & 0x1f);
  *(undefined4 *)(iVar3 + 0x98) = uVar1;
  uVar4 = *(uint *)(param_1 + 0x14);
  if ((uVar5 & uVar4) == 0) {
    *(undefined4 *)(iVar3 + 0x18) = uVar1;
    *(uint *)(param_1 + 0x14) = uVar5 | uVar4;
  }
  if ((char)*param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = ((int)(char)*param_2 << 8 | (int)(char)param_2[1]) << 8;
    if ((int)(char)param_2[1] != 0) {
      uVar4 = (uVar4 | (int)(char)param_2[2]) << 8;
      if ((int)(char)param_2[2] != 0) {
        uVar4 = uVar4 | (int)(char)param_2[3];
      }
      goto LAB_004484e4;
    }
  }
  uVar4 = uVar4 << 8;
LAB_004484e4:
  puVar2 = (undefined4 *)FUN_00447bf8();
  *puVar2 = param_2;
  puVar2[1] = param_3;
  puVar2[2] = uVar4 & 0xdfdfdfdf;
  return;
}



// ==== apr_atomic_read32 @ 00448640 size=12

undefined4 apr_atomic_read32(undefined4 *param_1)

{
  return *param_1;
}



// ==== apr_atomic_inc32 @ 004486b0 size=12

void apr_atomic_inc32(undefined4 param_1)

{
  FUN_0044864c(param_1,1);
  return;
}



// ==== apr_file_info_get @ 0044895c size=168

int apr_file_info_get(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_a8 [152];
  
  if ((param_3[8] == 0) || (iVar1 = apr_file_flush(param_3), iVar1 == 0)) {
    iVar1 = fstat(param_3[1],auStack_a8);
    if (iVar1 == 0) {
      uVar3 = param_3[2];
      *param_1 = *param_3;
      param_1[0x14] = uVar3;
      FUN_004486bc(param_1,auStack_a8);
      iVar1 = 0;
      if ((param_2 & ~param_1[1]) != 0) {
        iVar1 = 0x11178;
      }
    }
    else {
      piVar2 = (int *)__errno_location();
      iVar1 = *piVar2;
    }
  }
  return iVar1;
}



// ==== apr_file_read_full @ 00448a04 size=144

void apr_file_read_full(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int local_20 [2];
  
  iVar2 = 0;
  do {
    local_20[0] = param_3;
    iVar1 = apr_file_read(param_1,param_2,local_20);
    param_3 = param_3 - local_20[0];
    param_2 = param_2 + local_20[0];
    iVar2 = iVar2 + local_20[0];
    if (iVar1 != 0) break;
  } while (param_3 != 0);
  if (param_4 != (int *)0x0) {
    *param_4 = iVar2;
  }
  return;
}



// ==== apr_file_open @ 00448be4 size=816

int apr_file_open(int *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_38 [2];
  int local_30;
  
  if ((param_3 & 3) == 3) {
    uVar5 = 2;
  }
  else if ((param_3 & 1) == 0) {
    uVar5 = 1;
    if ((param_3 & 2) == 0) {
      return 0xd;
    }
  }
  else {
    uVar5 = 0;
  }
  if ((param_3 & 4) != 0) {
    if ((param_3 & 0x40) == 0) {
      uVar5 = uVar5 | 0x100;
    }
    else {
      uVar5 = uVar5 | 0x500;
    }
  }
  if ((param_3 & 0x44) == 0x40) {
    return 0xd;
  }
  uVar5 = uVar5 | param_3 & 8;
  if ((param_3 & 0x10) != 0) {
    uVar5 = uVar5 | 0x200;
  }
  uVar7 = param_3 & 0x800;
  if ((param_3 & 0x40000) != 0) {
    uVar5 = uVar5 | 0x80;
  }
  if (uVar7 == 0) {
    uVar5 = uVar5 | 0x80000;
  }
  if ((param_3 & 0x4000) != 0) {
    uVar5 = uVar5 | 0x2000;
  }
  if (((param_3 & 0x280) == 0x280) &&
     (local_30 = param_4, iVar2 = apr_thread_mutex_create(local_38,0,param_5), param_4 = local_30,
     iVar2 != 0)) {
    return iVar2;
  }
  if (param_4 == 0xfff) {
    iVar2 = open(param_2,uVar5,0x1b6);
  }
  else {
    uVar1 = FUN_0044ca94(param_4);
    iVar2 = open(param_2,uVar5,uVar1);
  }
  if (-1 < iVar2) {
    if ((uVar7 != 0) || (DAT_00569d00 != 0)) goto LAB_00448cf8;
    uVar5 = fcntl(iVar2,1);
    if (uVar5 != 0xffffffff) {
      if ((uVar5 & 1) != 0) {
        DAT_00569d00 = 1;
LAB_00448cf8:
        uVar1 = apr_palloc(param_5,0x48);
        puVar3 = (undefined4 *)memset(uVar1,0,0x48);
        *param_1 = (int)puVar3;
        *puVar3 = param_5;
        iVar6 = *param_1;
        *(uint *)(iVar6 + 0xc) = param_3;
        *(int *)(iVar6 + 4) = iVar2;
        uVar5 = (uint)((param_3 & 0x80) != 0);
        uVar1 = apr_pstrdup(param_5,param_2);
        *(undefined4 *)(iVar6 + 8) = uVar1;
        iVar2 = *param_1;
        *(undefined4 *)(iVar2 + 0x24) = 2;
        *(uint *)(iVar2 + 0x20) = uVar5;
        if (uVar5 == 0) {
          *(undefined4 *)(iVar2 + 0x2c) = 0;
          puVar3 = (undefined4 *)*param_1;
        }
        else {
          uVar1 = apr_palloc(param_5,0x1000);
          *(undefined4 *)(iVar2 + 0x2c) = uVar1;
          puVar3 = (undefined4 *)*param_1;
          puVar3[0xd] = 0x1000;
          if ((puVar3[3] & 0x200) != 0) {
            puVar3[0x11] = local_38[0];
            puVar3 = (undefined4 *)*param_1;
          }
        }
        puVar3[6] = 0xffffffff;
        puVar3[5] = 0;
        puVar3[7] = 0xffffffff;
        puVar3[10] = 0xffffffff;
        puVar3[4] = 0;
        puVar3[0x10] = 0;
        puVar3[0xc] = 0;
        puVar3[0xe] = 0;
        puVar3[0xf] = 0;
        if (uVar7 == 0) {
          FUN_0044b38c(*puVar3,puVar3,FUN_00448a94,&LAB_00448b64);
          return 0;
        }
        return 0;
      }
      iVar6 = fcntl(iVar2,2,uVar5 | 1);
      if (iVar6 != -1) goto LAB_00448cf8;
    }
    close(iVar2);
  }
  piVar4 = (int *)__errno_location();
  return *piVar4;
}



// ==== apr_file_close @ 00448f14 size=24

void apr_file_close(undefined4 *param_1)

{
  FUN_0044b5e4(*param_1,param_1,FUN_00448a94);
  return;
}



// ==== apr_file_remove @ 00448f2c size=48

undefined4 apr_file_remove(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = unlink();
  uVar3 = 0;
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)__errno_location();
    uVar3 = *puVar2;
  }
  return uVar3;
}



// ==== apr_file_rename @ 00448f5c size=48

undefined4 apr_file_rename(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = rename();
  uVar3 = 0;
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)__errno_location();
    uVar3 = *puVar2;
  }
  return uVar3;
}



// ==== apr_file_read @ 00449360 size=580

int apr_file_read(int param_1,undefined1 *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      apr_thread_mutex_lock();
    }
    iVar2 = FUN_004491b0(param_1,param_2,param_3);
    if (*(int *)(param_1 + 0x44) == 0) {
      return iVar2;
    }
    apr_thread_mutex_unlock();
    return iVar2;
  }
  iVar3 = 0;
  if (*(int *)(param_1 + 0x28) != -1) {
    *param_2 = (char)*(int *)(param_1 + 0x28);
    *param_3 = *param_3 + -1;
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    iVar2 = *param_3;
    param_2 = param_2 + 1;
    if (iVar2 == 0) {
      *param_3 = 1;
      return 0;
    }
    iVar3 = 1;
  }
  while( true ) {
    iVar2 = read(*(undefined4 *)(param_1 + 4),param_2,iVar2);
    if (iVar2 != -1) goto LAB_00449478;
    piVar1 = (int *)__errno_location();
    if (*piVar1 != 4) break;
    iVar2 = *param_3;
  }
  if ((*piVar1 != 0xb) || (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0))
  goto LAB_0044950c;
  iVar2 = FUN_0044bd4c(param_1,0,1);
  if (iVar2 != 0) {
    *param_3 = iVar3;
    return iVar2;
  }
  while (iVar2 = read(*(undefined4 *)(param_1 + 4),param_2,*param_3), iVar2 == -1) {
    if (*piVar1 != 4) {
LAB_0044950c:
      *param_3 = iVar3;
      return *piVar1;
    }
  }
LAB_00449478:
  *param_3 = iVar3;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 0x1117e;
  }
  if (0 < iVar2) {
    *param_3 = iVar2 + iVar3;
    return 0;
  }
  piVar1 = (int *)__errno_location();
  return *piVar1;
}



// ==== apr_file_write @ 004495a4 size=688

int apr_file_write(int param_1,int param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    do {
      uVar3 = write(*(undefined4 *)(param_1 + 4),param_2,*param_3);
      if (uVar3 != 0xffffffff) goto LAB_004496e8;
      piVar1 = (int *)__errno_location();
    } while (*piVar1 == 4);
    if ((*piVar1 != 0xb) || (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0)) {
LAB_00449770:
      *param_3 = 0;
      return *piVar1;
    }
    iVar2 = FUN_0044bd4c(param_1,0,0);
    if (iVar2 == 0) {
      uVar3 = *param_3;
      while (uVar3 = write(*(undefined4 *)(param_1 + 4),param_2,uVar3), uVar3 == 0xffffffff) {
        if (*piVar1 == 4) {
          uVar3 = *param_3;
        }
        else {
          if (*piVar1 != 0xb) goto LAB_00449770;
          uVar3 = *param_3 >> 1;
          *param_3 = uVar3;
        }
      }
LAB_004496e8:
      *param_3 = uVar3;
      iVar2 = 0;
    }
    else {
      *param_3 = 0;
    }
  }
  else {
    uVar3 = *param_3;
    if (*(int *)(param_1 + 0x44) != 0) {
      apr_thread_mutex_lock();
    }
    if (*(int *)(param_1 + 0x3c) == 0) {
      iVar5 = *(int *)(param_1 + 0x40);
      iVar2 = (iVar5 - *(int *)(param_1 + 0x38)) + *(int *)(param_1 + 0x30);
      if ((iVar5 == iVar2) && (-1 < iVar5)) {
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      else {
        lseek(*(undefined4 *)(param_1 + 4),iVar2,0);
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 1;
    }
    if (0 < (int)uVar3) {
      uVar6 = *(uint *)(param_1 + 0x30);
      do {
        uVar4 = *(uint *)(param_1 + 0x34);
        iVar2 = 0;
        if ((uVar4 == uVar6) && (*(int *)(param_1 + 0x3c) == 1)) {
          if (uVar6 != 0) {
            iVar2 = FUN_004490c4(param_1);
            uVar4 = *(uint *)(param_1 + 0x34);
            uVar6 = *(uint *)(param_1 + 0x30);
            goto LAB_00449648;
          }
        }
        else {
LAB_00449648:
          uVar4 = uVar4 - uVar6;
        }
        if (uVar3 < uVar4) {
          uVar4 = uVar3;
        }
        memcpy(*(int *)(param_1 + 0x2c) + uVar6,param_2,uVar4);
        uVar3 = uVar3 - uVar4;
        param_2 = param_2 + uVar4;
        uVar6 = uVar4 + *(int *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = uVar6;
        if (iVar2 != 0) goto LAB_00449720;
      } while (0 < (int)uVar3);
    }
    iVar2 = 0;
LAB_00449720:
    if (*(int *)(param_1 + 0x44) != 0) {
      apr_thread_mutex_unlock();
      return iVar2;
    }
  }
  return iVar2;
}



// ==== apr_file_flush @ 00449880 size=168

undefined4 apr_file_flush(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      apr_thread_mutex_lock();
    }
    if ((*(int *)(param_1 + 0x3c) == 1) && (*(int *)(param_1 + 0x30) != 0)) {
      uVar1 = FUN_004490c4(param_1);
    }
    else {
      uVar1 = 0;
    }
    if (*(int *)(param_1 + 0x44) != 0) {
      apr_thread_mutex_unlock();
    }
    return uVar1;
  }
  return 0;
}



// ==== apr_file_seek @ 004499dc size=308

int apr_file_seek(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_78 [44];
  int local_4c;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar3 = lseek(*(undefined4 *)(param_1 + 4),*param_3,param_2);
    *param_3 = iVar3;
    if (iVar3 != -1) {
      return 0;
    }
    piVar1 = (int *)__errno_location();
    return *piVar1;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    apr_thread_mutex_lock();
  }
  if (param_2 == 1) {
    local_4c = (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x38)) + *(int *)(param_1 + 0x30);
    iVar3 = *param_3;
LAB_00449a88:
    local_4c = local_4c + iVar3;
  }
  else {
    if (param_2 == 2) {
      iVar3 = FUN_004488b4(auStack_78,0x100,param_1);
      if (iVar3 != 0) goto LAB_00449a98;
      iVar3 = *param_3;
      goto LAB_00449a88;
    }
    iVar3 = 0x16;
    if (param_2 != 0) goto LAB_00449a98;
    local_4c = *param_3;
  }
  iVar3 = FUN_00449928(param_1,local_4c);
LAB_00449a98:
  iVar2 = *(int *)(param_1 + 0x44);
  *param_3 = (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x38)) + *(int *)(param_1 + 0x30);
  if (iVar2 != 0) {
    apr_thread_mutex_unlock();
  }
  return iVar3;
}



// ==== apr_file_trunc @ 00449b10 size=260

int apr_file_trunc(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int local_res4 [3];
  
  local_res4[0] = param_2;
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      apr_thread_mutex_lock();
    }
    iVar1 = 0;
    if ((*(int *)(param_1 + 0x3c) == 1) && (uVar4 = *(uint *)(param_1 + 0x30), uVar4 != 0)) {
      iVar1 = uVar4 + *(int *)(param_1 + 0x40);
      uVar3 = iVar1 - local_res4[0];
      if (local_res4[0] < iVar1) {
        if (((int)uVar3 < 0) || (uVar4 < uVar3)) {
          *(undefined4 *)(param_1 + 0x30) = 0;
        }
        else {
          *(uint *)(param_1 + 0x30) = uVar4 - uVar3;
        }
      }
      iVar1 = FUN_00449854(param_1);
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    if (*(int *)(param_1 + 0x44) != 0) {
      apr_thread_mutex_unlock();
    }
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  iVar1 = ftruncate(*(undefined4 *)(param_1 + 4),local_res4[0]);
  if (iVar1 == -1) {
    piVar2 = (int *)__errno_location();
    iVar1 = *piVar2;
  }
  else {
    iVar1 = apr_file_seek(param_1,0,local_res4);
  }
  return iVar1;
}



// ==== apr_thread_mutex_create @ 00449db4 size=164

int apr_thread_mutex_create(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((param_2 & 1) != 0) {
    return 0x11187;
  }
  uVar1 = apr_palloc(param_3,0x1c);
  puVar2 = (undefined4 *)memset(uVar1,0,0x1c);
  *puVar2 = param_3;
  iVar3 = pthread_mutex_init(puVar2 + 1,0);
  if (iVar3 == 0) {
    FUN_0044b38c(*puVar2,puVar2,&LAB_00449da8,&LAB_0044b61c);
    iVar3 = 0;
    *param_1 = (int)puVar2;
  }
  return iVar3;
}



// ==== apr_thread_mutex_lock @ 00449e58 size=12

void apr_thread_mutex_lock(int param_1)

{
  pthread_mutex_lock(param_1 + 4);
  return;
}



// ==== apr_thread_mutex_unlock @ 00449e64 size=12

void apr_thread_mutex_unlock(int param_1)

{
  pthread_mutex_unlock(param_1 + 4);
  return;
}



// ==== apr_thread_mutex_destroy @ 00449e70 size=24

void apr_thread_mutex_destroy(undefined4 *param_1)

{
  FUN_0044b5e4(*param_1,param_1,&LAB_00449da8);
  return;
}



// ==== apr_palloc @ 0044a504 size=944

uint * apr_palloc(int param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  size_t __size;
  undefined4 *puVar8;
  uint uVar9;
  uint *puVar10;
  
  uVar7 = param_2 + 7 & 0xfffffff8;
  if (uVar7 < param_2) {
LAB_0044a650:
    puVar2 = (uint *)0x0;
    if (*(code **)(param_1 + 0x20) != (code *)0x0) {
      (**(code **)(param_1 + 0x20))(0xc);
      puVar2 = (uint *)0x0;
    }
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x2c);
    puVar1 = (uint *)puVar6[4];
    if (uVar7 <= puVar6[5] - (int)puVar1) {
      puVar6[4] = (int)puVar1 + uVar7;
      return puVar1;
    }
    puVar1 = (uint *)*puVar6;
    if (puVar1[5] - puVar1[4] < uVar7) {
      __size = uVar7 + 0x1017 & 0xfffff000;
      puVar2 = *(uint **)(param_1 + 0x18);
      if (__size < uVar7) goto LAB_0044a650;
      uVar9 = 1;
      if (__size < 0x2000) {
        __size = 0x2000;
      }
      else {
        uVar9 = (uVar7 + 0x1017 >> 0xc) - 1;
      }
      uVar5 = *puVar2;
      if (uVar5 < uVar9) {
        puVar1 = (uint *)puVar2[5];
        if (puVar1 == (uint *)0x0) goto LAB_0044a850;
        if (puVar2[3] != 0) {
          apr_thread_mutex_lock();
          puVar1 = (uint *)puVar2[5];
          if (puVar1 == (uint *)0x0) goto LAB_0044a83c;
        }
        uVar5 = puVar1[2];
        puVar10 = puVar2 + 5;
        while (uVar5 < uVar9) {
          puVar4 = (uint *)*puVar1;
          if (puVar4 == (uint *)0x0) goto LAB_0044a83c;
          puVar10 = puVar1;
          puVar1 = puVar4;
          uVar5 = puVar4[2];
        }
        uVar9 = puVar2[1];
        uVar5 = puVar2[2] + 1 + uVar5;
        *puVar10 = *puVar1;
        puVar2[2] = uVar5;
        if (uVar9 < uVar5) goto LAB_0044a7d0;
      }
      else {
        if (puVar2[3] != 0) {
          apr_thread_mutex_lock();
          uVar5 = *puVar2;
        }
        puVar1 = (uint *)puVar2[uVar9 + 5];
        puVar10 = puVar2 + uVar9 + 5;
        uVar3 = uVar9;
        if (puVar1 == (uint *)0x0) {
          if (uVar9 < uVar5) {
            puVar10 = puVar2 + uVar9 + 6;
            do {
              uVar3 = uVar3 + 1;
              puVar1 = (uint *)*puVar10;
              if (puVar1 != (uint *)0x0) goto LAB_0044a754;
              puVar10 = puVar10 + 1;
            } while (uVar3 < uVar5);
          }
LAB_0044a83c:
          if (puVar2[3] != 0) {
            apr_thread_mutex_unlock();
          }
LAB_0044a850:
          puVar1 = malloc(__size);
          if (puVar1 != (uint *)0x0) {
            puVar2 = puVar1 + 6;
            *puVar1 = 0;
            puVar1[2] = uVar9;
            puVar1[4] = (uint)puVar2;
            puVar1[5] = (int)puVar1 + __size;
            goto LAB_0044a594;
          }
          goto LAB_0044a650;
        }
LAB_0044a754:
        uVar9 = *puVar1;
        *puVar10 = uVar9;
        if ((uVar9 == 0) && (puVar10 = puVar10 + -1, uVar5 <= uVar3)) {
          uVar9 = *puVar10;
          while ((uVar5 = uVar5 - 1, uVar9 == 0 && (puVar10 = puVar10 + -1, uVar5 != 0))) {
            uVar9 = *puVar10;
          }
          *puVar2 = uVar5;
        }
        uVar9 = puVar2[1];
        uVar5 = puVar2[2] + puVar1[2] + 1;
        puVar2[2] = uVar5;
        if (uVar9 < uVar5) {
LAB_0044a7d0:
          puVar2[2] = uVar9;
        }
      }
      if (puVar2[3] != 0) {
        apr_thread_mutex_unlock();
      }
      puVar2 = puVar1 + 6;
      *puVar1 = 0;
      puVar1[4] = (uint)puVar2;
    }
    else {
      *(uint *)puVar1[1] = *puVar1;
      puVar2 = (uint *)puVar1[4];
      *(uint *)(*puVar1 + 4) = puVar1[1];
    }
LAB_0044a594:
    puVar8 = (undefined4 *)puVar6[1];
    puVar1[3] = 0;
    puVar1[4] = (int)puVar2 + uVar7;
    puVar1[1] = (uint)puVar8;
    *puVar8 = puVar1;
    uVar9 = puVar6[4];
    uVar7 = puVar6[5];
    *puVar1 = (uint)puVar6;
    puVar4 = (uint *)*puVar6;
    uVar7 = (int)(((uVar7 - uVar9) + 0x1000 & 0xfffff000) - 0x1000) >> 0xc;
    puVar6[1] = (uint)puVar1;
    *(uint **)(param_1 + 0x2c) = puVar1;
    puVar6[3] = uVar7;
    puVar10 = puVar4;
    if (uVar7 < puVar4[3]) {
      do {
        puVar10 = (uint *)*puVar10;
      } while (uVar7 < puVar10[3]);
      *puVar1 = (uint)puVar4;
      *(uint *)(*puVar6 + 4) = puVar6[1];
      puVar8 = (undefined4 *)puVar10[1];
      puVar6[1] = (uint)puVar8;
      *puVar8 = puVar6;
      *puVar6 = (uint)puVar10;
      puVar10[1] = (uint)puVar6;
      return puVar2;
    }
  }
  return puVar2;
}



// ==== apr_pool_destroy @ 0044a8b4 size=580

void apr_pool_destroy(int *param_1)

{
  bool bVar1;
  bool bVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *__ptr;
  uint *puVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  
  piVar11 = (int *)param_1[0xe];
  while (piVar11 != (int *)0x0) {
    param_1[0xe] = *piVar11;
    (*(code *)piVar11[2])(piVar11[1]);
    piVar11 = (int *)param_1[0xe];
  }
  param_1[0xe] = 0;
  if (param_1[1] == 0) goto LAB_0044a938;
  do {
    apr_pool_destroy();
  } while (param_1[1] != 0);
  piVar11 = (int *)param_1[4];
  while (piVar11 != (int *)0x0) {
    param_1[4] = *piVar11;
    (*(code *)piVar11[2])(piVar11[1]);
LAB_0044a938:
    piVar11 = (int *)param_1[4];
  }
  FUN_00449e88(param_1[7]);
  if (*param_1 != 0) {
    iVar8 = *(int *)(*(int *)(*param_1 + 0x18) + 0xc);
    if (iVar8 != 0) {
      apr_thread_mutex_lock(iVar8);
    }
    iVar12 = param_1[2];
    *(int *)param_1[3] = iVar12;
    if (iVar12 != 0) {
      *(int *)(param_1[2] + 0xc) = param_1[3];
    }
    if (iVar8 != 0) {
      apr_thread_mutex_unlock(iVar8);
    }
  }
  puVar9 = (uint *)param_1[0xc];
  puVar10 = (uint *)param_1[6];
  *(undefined4 *)puVar9[1] = 0;
  if (param_1 == (int *)puVar10[4]) {
    puVar10[3] = 0;
  }
  else if (puVar10[3] != 0) {
    apr_thread_mutex_lock();
  }
  uVar13 = puVar9[2];
  __ptr = (uint *)0x0;
  uVar4 = puVar10[2];
  uVar6 = puVar10[1];
  uVar7 = *puVar10;
  bVar1 = uVar4 < uVar13 + 1;
  puVar3 = (uint *)*puVar9;
  if (uVar6 == 0) goto LAB_0044aa24;
  do {
    bVar2 = !bVar1;
    bVar1 = false;
    if (bVar2) goto LAB_0044aa24;
    *puVar9 = (uint)__ptr;
    __ptr = puVar9;
    while( true ) {
      puVar9 = puVar3;
      if (puVar9 == (uint *)0x0) {
        *puVar10 = uVar7;
        puVar10[2] = uVar4;
        if (puVar10[3] != 0) {
          apr_thread_mutex_unlock();
        }
        if (__ptr == (uint *)0x0) {
          piVar11 = (int *)puVar10[4];
        }
        else {
          do {
            puVar9 = (uint *)*__ptr;
            free(__ptr);
            __ptr = puVar9;
          } while (puVar9 != (uint *)0x0);
          piVar11 = (int *)puVar10[4];
        }
        if (param_1 != piVar11) {
          return;
        }
        FUN_0044a4a0(puVar10);
        return;
      }
      uVar13 = puVar9[2];
      puVar3 = (uint *)*puVar9;
      bVar1 = uVar4 < uVar13 + 1;
      if (uVar6 != 0) break;
LAB_0044aa24:
      if (uVar13 < 0x14) {
        uVar5 = puVar10[uVar13 + 5];
        *puVar9 = uVar5;
        if ((uVar5 == 0) && (uVar7 < uVar13)) {
          uVar7 = uVar13;
        }
        puVar10[uVar13 + 5] = (uint)puVar9;
      }
      else {
        *puVar9 = puVar10[5];
        puVar10[5] = (uint)puVar9;
      }
      if (bVar1) {
        uVar4 = 0;
      }
      else {
        uVar4 = (uVar4 - uVar13) - 1;
      }
    }
  } while( true );
}



// ==== apr_pool_create_ex @ 0044ab50 size=844

undefined4 apr_pool_create_ex(undefined4 *param_1,uint param_2,code *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  
  *param_1 = 0;
  if (param_2 == 0) {
    param_2 = DAT_00569d14;
    if ((param_3 == (code *)0x0) && (DAT_00569d14 != 0)) goto LAB_0044ae34;
  }
  else if (param_3 == (code *)0x0) {
LAB_0044ae34:
    param_3 = *(code **)(param_2 + 0x20);
  }
  if (param_4 == (uint *)0x0) {
    param_4 = *(uint **)(param_2 + 0x18);
  }
  uVar2 = *param_4;
  if (uVar2 == 0) {
    puVar4 = (uint *)param_4[5];
    if (puVar4 != (uint *)0x0) {
      if (param_4[3] != 0) {
        apr_thread_mutex_lock();
        puVar4 = (uint *)param_4[5];
        if (puVar4 == (uint *)0x0) goto LAB_0044ad54;
      }
      uVar2 = puVar4[2];
      puVar6 = param_4 + 5;
      while (uVar2 == 0) {
        puVar7 = (uint *)*puVar4;
        if (puVar7 == (uint *)0x0) goto LAB_0044ad54;
        puVar6 = puVar4;
        puVar4 = puVar7;
        uVar2 = puVar7[2];
      }
      uVar1 = param_4[1];
      uVar2 = param_4[2] + 1 + uVar2;
      *puVar6 = *puVar4;
      param_4[2] = uVar2;
      if (uVar1 < uVar2) {
        param_4[2] = uVar1;
      }
      if (param_4[3] != 0) {
        apr_thread_mutex_unlock();
      }
      puVar6 = puVar4 + 6;
      *puVar4 = 0;
      puVar4[4] = (uint)puVar6;
      goto LAB_0044ac3c;
    }
  }
  else {
    if (param_4[3] != 0) {
      apr_thread_mutex_lock();
      uVar2 = *param_4;
    }
    puVar4 = (uint *)param_4[6];
    puVar6 = param_4 + 6;
    if (puVar4 != (uint *)0x0) {
      uVar1 = 1;
LAB_0044abf4:
      uVar3 = *puVar4;
      *puVar6 = uVar3;
      if ((uVar3 == 0) && (puVar6 = puVar6 + -1, uVar2 <= uVar1)) {
        uVar1 = *puVar6;
        while ((uVar2 = uVar2 - 1, uVar1 == 0 && (puVar6 = puVar6 + -1, uVar2 != 0))) {
          uVar1 = *puVar6;
        }
        *param_4 = uVar2;
      }
      uVar2 = param_4[2] + puVar4[2] + 1;
      param_4[2] = uVar2;
      if (param_4[1] < uVar2) {
        param_4[2] = param_4[1];
      }
      puVar6 = puVar4 + 6;
      if (param_4[3] != 0) {
        apr_thread_mutex_unlock();
      }
      *puVar4 = 0;
      puVar4[4] = (uint)puVar6;
      goto LAB_0044ac3c;
    }
    uVar1 = 1;
    if (1 < uVar2) {
      puVar6 = param_4 + 7;
      do {
        puVar4 = (uint *)*puVar6;
        uVar1 = uVar1 + 1;
        if (puVar4 != (uint *)0x0) goto LAB_0044abf4;
        puVar6 = puVar6 + 1;
      } while (uVar1 != uVar2);
    }
LAB_0044ad54:
    if (param_4[3] != 0) {
      apr_thread_mutex_unlock();
    }
  }
  puVar4 = malloc(0x2000);
  puVar6 = puVar4 + 6;
  if (puVar4 == (uint *)0x0) {
    if (param_3 == (code *)0x0) {
      return 0xc;
    }
    (*param_3)(0xc);
    return 0xc;
  }
  *puVar4 = 0;
  puVar4[2] = 1;
  puVar4[4] = (uint)puVar6;
  puVar4[5] = (uint)(puVar4 + 0x800);
LAB_0044ac3c:
  *puVar4 = (uint)puVar4;
  puVar4[1] = (uint)puVar4;
  puVar6[0xd] = (uint)(puVar6 + 0x10);
  puVar4[4] = (uint)(puVar6 + 0x10);
  puVar6[6] = (uint)param_4;
  puVar6[0xc] = (uint)puVar4;
  puVar6[0xb] = (uint)puVar4;
  puVar6[8] = (uint)param_3;
  puVar6[1] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[0xe] = 0;
  puVar6[7] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  *puVar6 = param_2;
  if (param_2 == 0) {
    puVar6[2] = 0;
    puVar6[3] = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(param_2 + 0x18) + 0xc);
    if (iVar5 != 0) {
      apr_thread_mutex_lock(iVar5);
    }
    uVar2 = *(uint *)(param_2 + 4);
    puVar6[2] = uVar2;
    if (uVar2 != 0) {
      *(uint **)(uVar2 + 0xc) = puVar6 + 2;
    }
    *(uint **)(param_2 + 4) = puVar6;
    puVar6[3] = param_2 + 4;
    if (iVar5 != 0) {
      apr_thread_mutex_unlock(iVar5);
    }
  }
  *param_1 = puVar6;
  return 0;
}



// ==== apr_global_pool @ 0044ae9c size=240

int apr_global_pool(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_20 [2];
  int local_18;
  
  if (DAT_00569d18 != '\0') {
    DAT_00569d18 = DAT_00569d18 + '\x01';
    return 0;
  }
  DAT_00569d18 = DAT_00569d18 + '\x01';
  local_18 = FUN_0044a434(&DAT_00569d10);
  if (local_18 == 0) {
    local_18 = apr_pool_create_ex(&DAT_00569d14,0,0,DAT_00569d10);
    if (local_18 == 0) {
      *(char **)(DAT_00569d14 + 0x28) = "apr_global_pool";
      iVar1 = FUN_004485a4();
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar2 = apr_thread_mutex_create(local_20,0,DAT_00569d14);
      iVar1 = DAT_00569d10;
      if (iVar2 != 0) {
        return iVar2;
      }
      *(int *)(DAT_00569d10 + 0x10) = DAT_00569d14;
      *(undefined4 *)(iVar1 + 0xc) = local_20[0];
      return 0;
    }
    FUN_0044a4a0(DAT_00569d10);
    DAT_00569d10 = 0;
  }
  DAT_00569d18 = 0;
  return local_18;
}



// ==== apr_psprintf @ 0044b358 size=44

void apr_psprintf(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res8 = param_3;
  local_resc = param_4;
  FUN_0044af8c(param_1,param_2,&local_res8);
  return;
}



// ==== apr_strerror @ 0044b624 size=1424

char * apr_strerror(int param_1,char *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  
  if (param_1 < 20000) {
    *param_2 = '\0';
    uVar1 = __glibc_strerror_r();
    if (*param_2 != '\0') {
      return param_2;
    }
    FUN_004452d8(param_2,uVar1,param_3);
    return param_2;
  }
  if (param_1 < 120000) {
    if (param_1 == 0x4e39) {
      pcVar2 = "The given path contained wildcard characters";
    }
    else {
      if (param_1 < 0x4e3a) {
        if (param_1 == 0x4e2c) {
          pcVar2 = "No thread was provided and one was required.";
          goto LAB_0044b698;
        }
        if (param_1 < 0x4e2d) {
          if (param_1 == 0x4e26) {
            pcVar2 = "No process was provided and one was required.";
            goto LAB_0044b698;
          }
          if (param_1 < 0x4e27) {
            if (param_1 == 0x4e22) {
              pcVar2 = "A new pool could not be created.";
              goto LAB_0044b698;
            }
            if (param_1 < 0x4e23) {
              if (param_1 == 0x4e21) {
                pcVar2 = "Could not perform a stat on the file.";
                goto LAB_0044b698;
              }
            }
            else {
              if (param_1 == 0x4e24) {
                pcVar2 = "An invalid date has been provided";
                goto LAB_0044b698;
              }
              if (param_1 == 0x4e25) {
                pcVar2 = "An invalid socket was returned";
                goto LAB_0044b698;
              }
            }
          }
          else {
            if (param_1 == 0x4e29) {
              pcVar2 = "No lock was provided and one was required.";
              goto LAB_0044b698;
            }
            if (param_1 < 0x4e2a) {
              if (param_1 == 0x4e27) {
                pcVar2 = "No time was provided and one was required.";
                goto LAB_0044b698;
              }
              if (param_1 == 0x4e28) {
                pcVar2 = "No directory was provided and one was required.";
                goto LAB_0044b698;
              }
            }
            else {
              if (param_1 == 0x4e2a) {
                pcVar2 = "No poll structure was provided and one was required.";
                goto LAB_0044b698;
              }
              if (param_1 == 0x4e2b) {
                pcVar2 = "No socket was provided and one was required.";
                goto LAB_0044b698;
              }
            }
          }
        }
        else {
          if (param_1 == 0x4e33) {
            pcVar2 = "DSO load failed";
            goto LAB_0044b698;
          }
          if (param_1 < 0x4e34) {
            if (param_1 == 0x4e2f) {
              pcVar2 = "No shared memory is currently available";
              goto LAB_0044b698;
            }
            if (param_1 < 0x4e30) {
              if (param_1 == 0x4e2d) {
                pcVar2 = "No thread key structure was provided and one was required.";
                goto LAB_0044b698;
              }
              if (param_1 == 0x4e2e) {
                pcVar2 = "Internal error (specific information not available)";
                goto LAB_0044b698;
              }
            }
            else {
              if (param_1 == 0x4e30) {
                pcVar2 = "The specified IP address is invalid.";
                goto LAB_0044b698;
              }
              if (param_1 == 0x4e31) {
                pcVar2 = "The specified network mask is invalid.";
                goto LAB_0044b698;
              }
            }
          }
          else {
            if (param_1 == 0x4e36) {
              pcVar2 = "The given path is incomplete";
              goto LAB_0044b698;
            }
            if (param_1 < 0x4e37) {
              if (param_1 == 0x4e34) {
                pcVar2 = "The given path is absolute";
                goto LAB_0044b698;
              }
              if (param_1 == 0x4e35) {
                pcVar2 = "The given path is relative";
                goto LAB_0044b698;
              }
            }
            else {
              if (param_1 == 0x4e37) {
                pcVar2 = "The given path was above the root path";
                goto LAB_0044b698;
              }
              if (param_1 == 0x4e38) {
                pcVar2 = "The given path is misformatted or contained invalid characters";
                goto LAB_0044b698;
              }
            }
          }
        }
      }
      else {
        if (param_1 == 0x11178) {
          pcVar2 = "Partial results are valid but processing is incomplete";
          goto LAB_0044b698;
        }
        if (param_1 < 0x11179) {
          if (param_1 == 0x11172) {
            pcVar2 = "Your code just forked, and you are currently executing in the parent process";
            goto LAB_0044b698;
          }
          if (param_1 < 0x11173) {
            if (param_1 == 0x4e3b) {
              pcVar2 = "The process is not recognized.";
              goto LAB_0044b698;
            }
            if (param_1 < 0x4e3b) {
              pcVar2 = "Could not find the requested symbol.";
              goto LAB_0044b698;
            }
            if (param_1 == 0x4e3c) {
              pcVar2 = "Not enough entropy to continue.";
              goto LAB_0044b698;
            }
            if (param_1 == 0x11171) {
              pcVar2 = "Your code just forked, and you are currently executing in the child process"
              ;
              goto LAB_0044b698;
            }
          }
          else {
            if (param_1 == 0x11175) {
              pcVar2 = "The specified child process is done executing";
              goto LAB_0044b698;
            }
            if (param_1 < 0x11176) {
              if (param_1 == 0x11173) {
                pcVar2 = "The specified thread is detached";
                goto LAB_0044b698;
              }
              if (param_1 == 0x11174) {
                pcVar2 = "The specified thread is not detached";
                goto LAB_0044b698;
              }
            }
            else {
              if (param_1 == 0x11176) {
                pcVar2 = "The specified child process is not done executing";
                goto LAB_0044b698;
              }
              if (param_1 == 0x11177) {
                pcVar2 = "The timeout specified has expired";
                goto LAB_0044b698;
              }
            }
          }
        }
        else {
          if (param_1 == 0x11184) {
            pcVar2 = "Shared memory is implemented using files";
            goto LAB_0044b698;
          }
          if (param_1 < 0x11185) {
            if (param_1 == 0x1117e) {
              pcVar2 = "End of file found";
              goto LAB_0044b698;
            }
            if (param_1 < 0x1117f) {
              if (param_1 == 0x1117c) {
                pcVar2 = "Bad character specified on command line";
                goto LAB_0044b698;
              }
              if (param_1 == 0x1117d) {
                pcVar2 = "Missing parameter for the specified command line option";
                goto LAB_0044b698;
              }
            }
            else {
              if (param_1 == 0x1117f) {
                pcVar2 = "Could not find specified socket in poll list.";
                goto LAB_0044b698;
              }
              if (param_1 == 0x11183) {
                pcVar2 = "Shared memory is implemented anonymously";
                goto LAB_0044b698;
              }
            }
          }
          else {
            if (param_1 == 0x11187) {
              pcVar2 = "This function has not been implemented on this platform";
              goto LAB_0044b698;
            }
            if (param_1 < 0x11188) {
              if (param_1 == 0x11185) {
                pcVar2 = "Shared memory is implemented using a key system";
                goto LAB_0044b698;
              }
              if (param_1 == 0x11186) {
                pcVar2 = "There is no error, this value signifies an initialized error code";
                goto LAB_0044b698;
              }
            }
            else {
              if (param_1 == 0x11188) {
                pcVar2 = "passwords do not match";
                goto LAB_0044b698;
              }
              if (param_1 == 0x11189) {
                pcVar2 = "The given lock was busy.";
                goto LAB_0044b698;
              }
            }
          }
        }
      }
      pcVar2 = "Error string not specified yet";
    }
  }
  else {
    if (param_1 < 670000) {
      FUN_004452d8(param_2,"APR does not understand this error code");
      return param_2;
    }
    if (param_1 < 720000) {
      uVar1 = gai_strerror(param_1 + -670000);
      FUN_004452d8(param_2,uVar1,param_3);
      return param_2;
    }
    if (param_1 == 0xafc81) {
      pcVar2 = "Unknown host";
    }
    else if (param_1 == 0xafc84) {
      pcVar2 = "No address for host";
    }
    else {
      pcVar2 = "Unrecognized resolver error";
    }
  }
LAB_0044b698:
  FUN_004452d8(param_2,pcVar2,param_3);
  return param_2;
}



// ==== apr_initialize @ 0044bbb4 size=152

int apr_initialize(void)

{
  bool bVar1;
  int iVar2;
  undefined4 local_18 [2];
  int local_10;
  
  iVar2 = DAT_00569d20 + 1;
  bVar1 = DAT_00569d20 != 0;
  DAT_00569d20 = iVar2;
  if (bVar1) {
    return 0;
  }
  FUN_0044cbb4();
  FUN_0044c5cc();
  local_10 = apr_global_pool();
  if (local_10 == 0) {
    local_10 = apr_pool_create_ex(local_18,0,0,0);
    if (local_10 != 0) {
      return 0x4e22;
    }
    FUN_0044b384(local_18[0],"apr_initialize");
    FUN_0044bfbc(local_18[0]);
  }
  return local_10;
}



// ==== apr_terminate @ 0044bc4c size=36

void apr_terminate(void)

{
  DAT_00569d20 = DAT_00569d20 + -1;
  if (DAT_00569d20 != 0) {
    return;
  }
  FUN_0044aaf8();
  return;
}



// ==== apr_time_now @ 0044c4a8 size=80

void apr_time_now(void)

{
  undefined1 local_10 [12];
  
  gettimeofday(local_10,0);
  return;
}



// ==== apr_time_exp_gmt @ 0044c4f8 size=52

undefined4 apr_time_exp_gmt(int param_1)

{
  FUN_0044c394();
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 0;
}



// ==== apr_time_exp_lt @ 0044c52c size=40

undefined4 apr_time_exp_lt(void)

{
  FUN_0044c394();
  return 0;
}



// ==== apr_sleep @ 0044c554 size=120

void apr_sleep(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = FUN_005303f8(param_1,param_2,1000000,0);
  local_18 = FUN_0052fe28(param_1,param_2,1000000,0);
  select(0,0,0,0,&local_18);
  return;
}



