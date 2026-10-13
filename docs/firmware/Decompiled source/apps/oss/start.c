/* oss — C-runtime entry / init stubs
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "oss.h"

// ==== _init @ 00408148 size=72

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  FUN_00408e6c();
  iVar1 = FUN_005314a0();
  return iVar1;
}



// ==== _ftext @ 00408190 size=12

void _ftext(void)

{
  FUN_0052ee40();
  return;
}



// ==== main @ 004088f0 size=992

undefined4 main(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_30 [3];
  
  if (*param_2 == 0) {
    FUN_0052f238("oss.c",&DAT_00532678,0xb1f,"assert, argv[0] is NULL");
    return 0;
  }
  signal(0x12,1);
  iVar3 = *param_2;
  iVar1 = strstr(iVar3,"oss_fast");
  if (iVar1 == 0) {
    iVar1 = strstr(iVar3,"oss_lapse");
    if (iVar1 == 0) {
      uVar2 = 0x400;
      DAT_00561954 = 0xfa000;
      DAT_0055fff0 = 0x400;
      goto LAB_004089c0;
    }
    uVar2 = 0x2000;
    DAT_0055fff0 = 0x2000;
  }
  else {
    DAT_0055fff0 = 0x1000;
    uVar2 = 0x1000;
    DAT_0055ffec = 2;
  }
  DAT_00561954 = 0x32000;
  DAT_0055fe74._3_1_ = 0x12;
  DAT_0055fe84._2_1_ = 0x15;
  DAT_0055fe84._3_1_ = 0xbd;
  DAT_0055fe88._0_1_ = 0x4d;
  DAT_0055fe88._1_1_ = 0x56;
  DAT_0055fe88._2_1_ = 0xff;
  DAT_0055fe88._3_1_ = 0xff;
  DAT_0055fe8c = 0xff;
  DAT_0055fe8d = 0xff;
  DAT_0055fe8e = 0xff;
  iVar3 = *param_2;
LAB_004089c0:
  FUN_0052f238("oss.c",&DAT_00532678,0xb42,"oss stream = %s, venc chn = 0x%x",iVar3,uVar2);
  iVar1 = FUN_0052f670(&DAT_0056197c,"/ipc_dispatch");
  if (iVar1 == 0) {
    while (DAT_00561918 = FUN_0052f6f4("/tmp/mmap.info",0xaa0), DAT_00561918 == 0) {
      FUN_0052f238("oss.c",&DAT_00532678,0xb4d,"open share mem fail!",iVar3,uVar2);
      sleep(1);
    }
    iVar1 = FUN_004082f0();
    while (iVar1 != 0) {
      ms_sleep(1000);
      iVar1 = FUN_004082f0();
    }
    FUN_0052f238("oss.c",&DAT_00532678,0xb55,"fshare_open ok");
    while (*(int *)(DAT_00561918 + 0x5a0) != 1) {
      sleep(1);
    }
    FUN_0052f238("oss.c",&DAT_00532678,0xb60,"time sync ok");
    iVar1 = cipher_module_init();
    if (iVar1 == 0) {
      iVar1 = FUN_00408200();
      if (iVar1 == 0) {
        iVar1 = FUN_004081a0(2);
        if (iVar1 == 0) {
          if (DAT_0055fff0 == 0x400) {
            local_30[0] = 0;
            iVar1 = pthread_create(local_30,0,&LAB_0040c9d0,0);
            if (iVar1 < 0) {
              FUN_0052f238("oss.c",&DAT_00532678,0xb7c,"oss_gen_pic_index_proc failed");
              perror("oss_gen_pic_index_proc failed");
              return 0xffffffff;
            }
          }
          oss_media_write_file();
          if (DAT_00561694 != (void *)0x0) {
            free(DAT_00561694);
            DAT_00561694 = (void *)0x0;
          }
          FUN_004081b0();
          FUN_00408220();
          FUN_0040cbe8();
          uVar2 = 0;
        }
        else {
          FUN_0052f238("oss.c",&DAT_00532678,0xb73,"init cos media failed!");
          uVar2 = 0xffffffff;
        }
      }
      else {
        FUN_0052f238("oss.c",&DAT_00532678,0xb6c,"init oss media failed!");
        uVar2 = 0xffffffff;
      }
    }
    else {
      FUN_0052f238("oss.c",&DAT_00532678,0xb65,"init cipher module failed!");
      uVar2 = 0xffffffff;
    }
  }
  else {
    FUN_0052f238("oss.c",&DAT_00532678,0xb47,"init_mqueue dispatch fail!",iVar3,uVar2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ==== _fini @ 00531690 size=56

void _fini(void)

{
  FUN_00408dbc();
  return;
}



// ==== abort @ 0054ec60 size=16

void abort(void)

{
  (*(code *)PTR_abort_0055fc98)();
  return;
}



