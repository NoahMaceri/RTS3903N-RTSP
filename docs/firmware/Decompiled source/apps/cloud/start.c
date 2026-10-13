/* cloud — C-runtime entry / init stubs
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "cloud.h"

// ==== _init @ 00400e20 size=72

void _init(void)

{
  FUN_0040154c();
  FUN_0040de00();
  return;
}



// ==== _ftext @ 00400e70 size=752

/* WARNING: Removing unreachable block (ram,0x00401070) */
/* WARNING: Removing unreachable block (ram,0x00401044) */
/* WARNING: Removing unreachable block (ram,0x00401014) */
/* WARNING: Removing unreachable block (ram,0x004010e4) */
/* WARNING: Removing unreachable block (ram,0x00400fe0) */
/* WARNING: Removing unreachable block (ram,0x0040102c) */
/* WARNING: Removing unreachable block (ram,0x00401054) */
/* WARNING: Removing unreachable block (ram,0x00401088) */
/* WARNING: Type propagation algorithm not settling */

undefined4 _ftext(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_1e0 [128];
  undefined1 auStack_160 [128];
  undefined1 auStack_e0 [128];
  undefined1 auStack_60 [4];
  uint local_5c;
  uint local_58;
  uint local_54;
  int local_50;
  int local_4c;
  int local_34 [8];
  
  memset(auStack_e0,0,0x80);
  if (param_2 != (int *)0x0) {
    iVar1 = FUN_0040b9ac(auStack_e0,"\"enable\"",param_1);
    if (iVar1 != 1) {
      printf(&DAT_0040def0,"parse_schedule_power",0xb46);
      return 0xffffffff;
    }
    iVar1 = atoi(auStack_e0);
    *param_2 = iVar1;
    if (iVar1 == 0) {
LAB_0040110c:
      printf(&DAT_0040df84,"parse_schedule_power",0xb6b,*param_2,param_2[1],param_2[2]);
      return 0;
    }
    memset(auStack_160,0,0x80);
    memset(auStack_1e0,0,0x80);
    iVar1 = FUN_0040b9ac(auStack_160,"\"repeater\"",param_1);
    if (iVar1 == 1) {
      iVar1 = FUN_0040b9ac(auStack_1e0,"\"time\"",param_1);
      if (iVar1 == 1) {
        local_34[0] = 0;
        local_34[1] = 0;
        local_34[2] = 0;
        local_34[3] = 0;
        local_34[4] = 0;
        local_34[5] = 0;
        local_34[6] = 0;
        iVar1 = sscanf(auStack_160,"%d,%d,%d,%d,%d,%d,%d",local_34,local_34 + 1,local_34 + 2,
                       local_34 + 3,local_34 + 4,local_34 + 5,local_34 + 6);
        iVar4 = 0;
        if (0 < iVar1) {
          iVar3 = 0;
          do {
            uVar2 = *(int *)((int)local_34 + iVar3) - 1;
            iVar4 = iVar4 + 1;
            if (uVar2 < 7) {
              param_2[1] = param_2[1] | 1 << ((int)uVar2 % 7 & 0x1fU);
            }
            iVar3 = iVar4 * 4;
          } while (iVar4 != iVar1);
        }
        uVar2 = atoi(auStack_1e0);
        memset(auStack_60,0,0x2c);
        local_4c = uVar2 / 100000000 + 100;
        uVar5 = (uVar2 % 100000000) / 1000000;
        local_54 = (uVar2 % 1000000) / 10000;
        local_50 = uVar5 - 1;
        local_58 = (uVar2 % 10000) / 100;
        local_5c = uVar2 % 100;
        printf(&DAT_0040df40,"parse_schedule_power",0xb68,auStack_160,uVar2,uVar2 / 100000000,uVar5,
               local_54,local_58,local_5c);
        iVar1 = mktime(auStack_60);
        param_2[2] = iVar1;
        goto LAB_0040110c;
      }
    }
  }
  return 0xffffffff;
}



// ==== main @ 00401160 size=580

undefined4 main(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1420 [1280];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14 [2];
  
  local_14[0] = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  signal(0x12,1);
  if (param_1 < 3) {
    iVar1 = sys_init();
    uVar2 = 0xffffffff;
    if (-1 < iVar1) {
      printf(&DAT_00410034,&DAT_004104a0,0x1561);
      while (*(int *)(DAT_00423a48 + 0x584) == 0) {
        FUN_0040b864(1000);
      }
      iVar1 = pthread_create(local_1420,0,&LAB_00406fac,0);
      if (iVar1 == 0) {
        pthread_detach(local_1420[0]);
      }
      printf(&DAT_00410054,&DAT_004104a0,0x1570);
      sync_time();
      iVar1 = pthread_create(&local_18,0,msg_proc,0);
      if (iVar1 < 0) goto LAB_004012f4;
      do {
        iVar1 = pthread_create(&local_1c,0,&DAT_0040826c,0);
        if (iVar1 < 0) {
          FUN_0040b244("cloud.c",&DAT_00410498,0x157c,"panorama_capture_push_proc failed");
          perror("panorama_capture_push_proc failed");
        }
        iVar1 = pthread_create(local_14,0,&LAB_0040698c,0);
        if (iVar1 < 0) {
          FUN_0040b244("cloud.c",&DAT_00410498,0x1583,"yi_motion_push_proc failed");
          perror("yi_motion_push_proc failed");
        }
        iVar1 = pthread_create(&local_20,0,&LAB_00407a44,0);
        if (iVar1 < 0) {
          FUN_0040b244("cloud.c",&DAT_00410498,0x158a,"update_upgrade_firmware_status failed");
          perror("update_upgrade_firmware_status failed");
        }
        yi_proc();
LAB_004012f4:
        FUN_0040b244("cloud.c",&DAT_00410498,0x1575,"msg_proc failed");
        perror("msg_proc failed");
      } while( true );
    }
  }
  else {
    memset(local_1420,0,0x1400);
    aec_dec(local_1420,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
            *(undefined4 *)(param_2 + 0xc));
    uVar2 = 0;
  }
  return uVar2;
}



// ==== __uClibc_main @ 0040de50 size=32

void __uClibc_main(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_0040149c();
  return;
}



// ==== _fini @ 0040de70 size=56

void _fini(void)

{
  FUN_0040149c();
  return;
}



