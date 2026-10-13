/* download_upgrade — "yi" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "download_upgrade.h"

// ==== yi_insmod_ko @ 00402b1c size=152

undefined4 yi_insmod_ko(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_288 [512];
  undefined1 auStack_88 [128];
  
  memset(auStack_88,0,0x80);
  memset(auStack_288,0,0x200);
  if (param_1 == 0) {
    printf("%s : %d ptr %s is NULL pointer\n","yi_insmod_ko",0x1f2,&DAT_0040412c);
    uVar1 = 0xffffffff;
  }
  else {
    sprintf(auStack_88,"insmod %s",param_1);
    system_cmd_withret_timeout(auStack_88,auStack_288,0x200,0);
    uVar1 = 0;
  }
  return uVar1;
}



// ==== yi_insmod_with_param @ 00402bb4 size=1

undefined4 yi_insmod_with_param(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 auStack_310 [512];
  undefined1 auStack_110 [260];
  
  memset(auStack_110,0,0x100);
  memset(auStack_310,0,0x200);
  if (param_1 == 0) {
    printf("%s : %d ptr %s is NULL pointer\n","yi_insmod_with_param",0x1ff,"ko path");
    uVar1 = 0xffffffff;
  }
  else if (param_2 == 0) {
    printf("%s : %d ptr %s is NULL pointer\n","yi_insmod_with_param",0x200,"params");
    uVar1 = 0xffffffff;
  }
  else {
    sprintf(auStack_110,"insmod %s %s",param_1,param_2);
    system_cmd_withret_timeout(auStack_110,auStack_310,0x200,0);
    uVar1 = 0;
  }
  return uVar1;
}



// ==== yi_insmod_with_openfile @ 00402c84 size=1

undefined4 yi_insmod_with_openfile(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_290 [512];
  undefined1 auStack_90 [132];
  
  memset(auStack_90,0,0x80);
  if (param_1 == 0) {
    printf("%s : %d ptr %s is NULL pointer\n","yi_insmod_with_openfile",0x20d,"ko path");
  }
  else if (param_2 == 0) {
    printf("%s : %d ptr %s is NULL pointer\n","yi_insmod_with_openfile",0x20e,"file node");
  }
  else {
    sprintf(auStack_90,"insmod %s",param_1);
    iVar1 = access(param_2,0);
    if (iVar1 == 0) {
      iVar1 = access(param_2,0);
    }
    else {
      memset(auStack_290,0,0x200);
      system_cmd_withret_timeout(auStack_90,auStack_290,0x200,0);
      ms_sleep(1000);
      iVar1 = access(param_2,0);
    }
    if (iVar1 == 0) {
      uVar2 = open(param_2,2);
      return uVar2;
    }
  }
  return 0xffffffff;
}



// ==== yi_insmod_with_param_openfile @ 00402db4 size=1

undefined4 yi_insmod_with_param_openfile(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_310 [512];
  undefined1 auStack_110 [256];
  
  memset(auStack_110,0,0x100);
  if (param_1 == 0) {
    printf("%s : %d ptr %s is NULL pointer\n","yi_insmod_with_param_openfile",0x225,"ko path");
  }
  else if (param_2 == 0) {
    printf("%s : %d ptr %s is NULL pointer\n","yi_insmod_with_param_openfile",0x226,"file node");
  }
  else if (param_3 == 0) {
    printf("%s : %d ptr %s is NULL pointer\n","yi_insmod_with_param_openfile",0x227,"params");
  }
  else {
    sprintf(auStack_110,"insmod %s %s",param_1,param_3);
    iVar1 = access(param_2,0);
    if (iVar1 == 0) {
      iVar1 = access(param_2,0);
    }
    else {
      memset(auStack_310,0,0x200);
      system_cmd_withret_timeout(auStack_110,auStack_310,0x200,0);
      ms_sleep(1000);
      iVar1 = access(param_2,0);
    }
    if (iVar1 == 0) {
      uVar2 = open(param_2,2);
      return uVar2;
    }
  }
  return 0xffffffff;
}



