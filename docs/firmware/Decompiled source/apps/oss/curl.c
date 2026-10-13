/* oss — "curl" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "oss.h"

// ==== curl_global_init @ 0044d0f0 size=220

undefined4 curl_global_init(uint param_1)

{
  int iVar1;
  
  iVar1 = DAT_00569f94;
  DAT_00569f94 = DAT_00569f94 + 1;
  if (iVar1 != 0) {
    return 0;
  }
  DAT_005605f0 = malloc;
  DAT_005605ec = free;
  DAT_005605e8 = realloc;
  DAT_005605e4 = strdup;
  PTR_calloc_005605e0 = calloc;
  if (((param_1 & 1) != 0) && (iVar1 = FUN_00453cc4(), iVar1 == 0)) {
    return 2;
  }
  if ((param_1 & 4) != 0) {
    DAT_00569fa0 = 1;
  }
  DAT_00569f90 = param_1;
  return 0;
}



// ==== curl_easy_init @ 0044d2f0 size=88

undefined4 curl_easy_init(void)

{
  int iVar1;
  undefined4 local_10 [3];
  
  if ((DAT_00569f94 == 0) && (iVar1 = curl_global_init(3), iVar1 != 0)) {
    return 0;
  }
  iVar1 = FUN_0045e120(local_10);
  if (iVar1 != 0) {
    local_10[0] = 0;
  }
  return local_10[0];
}



// ==== curl_easy_setopt @ 0044d348 size=48

undefined4 curl_easy_setopt(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x2b;
  if (param_1 != 0) {
    uVar1 = FUN_0045e238();
  }
  return uVar1;
}



// ==== curl_easy_perform @ 0044d378 size=492

undefined4 curl_easy_perform(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24 [2];
  
  if (param_1 == 0) {
    return 0x2b;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_0045cf40(param_1,"easy handle already used in multi handle");
    return 2;
  }
  iVar2 = *(int *)(param_1 + 0x44);
  if (iVar2 == 0) {
    iVar2 = FUN_0044f69c(1,3);
    if (iVar2 == 0) {
      return 0x1b;
    }
    *(int *)(param_1 + 0x44) = iVar2;
  }
  FUN_0044ff00(iVar2,6,*(undefined4 *)(param_1 + 0x3d8));
  iVar1 = FUN_004502f4(iVar2,param_1);
  if (iVar1 != 0) {
    FUN_0044fcb4(iVar2);
    if (iVar1 == 3) {
      return 0x1b;
    }
    return 2;
  }
  *(int *)(param_1 + 0x40) = iVar2;
  uVar3 = 0;
  do {
    while( true ) {
      local_24[0] = 0;
      FUN_004551c0(&local_30);
      iVar1 = FUN_0044f97c(iVar2,0,0,1000,&local_28);
      uVar5 = uVar3;
      if (iVar1 == 0) break;
LAB_0044d50c:
      uVar3 = uVar5;
      if (iVar1 != 0) {
        uVar4 = 0x2b;
        if (iVar1 == 3) {
          uVar4 = 0x1b;
        }
        goto LAB_0044d524;
      }
    }
    if (local_28 == -1) {
      uVar4 = 0x38;
      goto LAB_0044d524;
    }
    if (local_28 == 0) {
      uVar5 = 0;
      FUN_004551c0(&local_38);
      iVar1 = FUN_00455238(local_38,local_34,local_30,local_2c);
      if (iVar1 < 0xb) {
        uVar5 = uVar3 + 1;
        if (2 < (int)uVar5) {
          iVar1 = 1000;
          if ((int)uVar5 < 10) {
            iVar1 = 1 << (uVar3 & 0x1f);
          }
          FUN_00452290(iVar1);
        }
      }
    }
    else {
      uVar5 = 0;
    }
    iVar1 = FUN_004517b4(iVar2,local_24);
    if (iVar1 != 0) goto LAB_0044d50c;
    uVar3 = uVar5;
    if ((local_24[0] == 0) && (iVar1 = FUN_0044fdf0(iVar2,&local_38), iVar1 != 0)) {
      uVar4 = *(undefined4 *)(iVar1 + 8);
LAB_0044d524:
      FUN_0045048c(iVar2,param_1);
      return uVar4;
    }
  } while( true );
}



// ==== curl_easy_cleanup @ 0044d564 size=24

void curl_easy_cleanup(int param_1)

{
  if (param_1 != 0) {
    FUN_00460548();
    return;
  }
  return;
}



// ==== curl_easy_getinfo @ 0044d57c size=40

void curl_easy_getinfo(void)

{
  FUN_00464b9c();
  return;
}



// ==== curl_easy_reset @ 0044d760 size=180

void curl_easy_reset(int param_1)

{
  if (*(int *)(param_1 + 0x8620) != 0) {
    (*DAT_005605ec)();
    *(undefined4 *)(param_1 + 0x8620) = 0;
  }
  *(undefined4 *)(param_1 + 0x8624) = 0;
  FUN_004604f0(param_1);
  FUN_0045deb8(param_1);
  memset(param_1 + 0x118,0,0x2d0);
  FUN_0045e008(param_1 + 0x118);
  memset(param_1 + 0x408,0,0x110);
  *(undefined4 *)(param_1 + 0x440) = 0x10;
  *(undefined4 *)(param_1 + 0x8538) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x853c) = 0xffffffff;
  return;
}



// ==== curl_easy_strerror @ 00452120 size=44

char * curl_easy_strerror(uint param_1)

{
  if (param_1 < 0x5a) {
    return (&PTR_s_No_error_0053874c)[param_1];
  }
  return "Unknown error";
}



// ==== curl_slist_append @ 00452c98 size=116

int curl_slist_append(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*DAT_005605e4)(param_2);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00452c20(param_1,iVar1);
    if (iVar2 == 0) {
      (*DAT_005605ec)(iVar1);
    }
  }
  return iVar2;
}



// ==== curl_slist_free_all @ 00452d0c size=104

void curl_slist_free_all(int *param_1)

{
  int *piVar1;
  
  while (param_1 != (int *)0x0) {
    piVar1 = (int *)param_1[1];
    if (*param_1 != 0) {
      (*DAT_005605ec)();
      *param_1 = 0;
    }
    (*DAT_005605ec)(param_1);
    param_1 = piVar1;
  }
  return;
}



