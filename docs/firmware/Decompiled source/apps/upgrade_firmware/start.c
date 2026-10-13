/* upgrade_firmware — C-runtime entry / init stubs
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "upgrade_firmware.h"

// ==== _init @ 004008c4 size=72

void _init(void)

{
  FUN_00400d1c();
  FUN_00401970();
  return;
}



// ==== _ftext @ 00400910 size=620

undefined4 _ftext(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_a0 [128];
  
  memset(auStack_a0,0,0x80);
  if (param_1 == 3) {
    iVar1 = FUN_00401784(&DAT_004122e4,"/ipc_dispatch");
    if (iVar1 == 0) {
      DAT_004122e0 = FUN_00401808("/tmp/mmap.info",0xaa0);
      if (DAT_004122e0 == 0) {
        FUN_0040134c("upgrade_firmware.c",&DAT_00401d28,0xb4,"open share mem fail!\n");
        uVar3 = 0xffffffff;
      }
      else {
        FUN_00400f08(DAT_004122e4,0x100a,0,0);
        FUN_00401594("/home/app/script/killapp.sh",auStack_a0,0x80,0x3c);
        iVar1 = 5;
        FUN_00400f08(DAT_004122e4,0xf7,0,0);
        while( true ) {
          FUN_00400e9c();
          iVar2 = FUN_00400ff0(param_2[1],param_2[2]);
          if (iVar2 == 0) break;
          if (iVar2 != -2) {
            if (iVar2 != -1) goto LAB_004009e4;
LAB_00400abc:
            FUN_0040134c("upgrade_firmware.c",&DAT_00401d28,0xd5,"try too much times\n");
            FUN_00401960(*(undefined4 *)(DAT_004122e0 + 0x5ac),"get_upgradefile_fail");
            FUN_00400f08(DAT_004122e4,0x100c,0,0);
            goto LAB_00400a5c;
          }
          iVar1 = iVar1 + -1;
LAB_004009e4:
          if (iVar1 < 1) goto LAB_00400abc;
          sleep(5);
        }
        FUN_00400f08(DAT_004122e4,0x100b,0,0);
        FUN_00401960(*(undefined4 *)(DAT_004122e0 + 0x5ac),"get_upgradefile_ok");
        sleep(5);
        system("/backup/script/update.sh /tmp/update/firmware_m.bin");
LAB_00400a5c:
        printf("%s after update.sh, wait reboot\n",&DAT_00401d20);
        sleep(0x12);
        FUN_00401564("killall watchdog");
        FUN_00401564("reboot");
        uVar3 = 0;
      }
    }
    else {
      FUN_0040134c("upgrade_firmware.c",&DAT_00401d28,0xae,"init_mqueue dispatch fail!\n");
      uVar3 = 0xffffffff;
    }
  }
  else {
    printf("Usage: %s [URL] [MD5]..\n",*param_2);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// ==== __uClibc_main @ 004019c0 size=32

void __uClibc_main(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00400c6c();
  return;
}



// ==== _fini @ 004019e0 size=56

void _fini(void)

{
  FUN_00400c6c();
  return;
}



