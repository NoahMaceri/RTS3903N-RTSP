/* reboot_by_watchdog — C-runtime entry / init stubs
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "reboot_by_watchdog.h"

// ==== _init @ 00400850 size=72

void _init(void)

{
  FUN_00400b9c();
  FUN_004011a0();
  return;
}



// ==== _ftext @ 004008a0 size=340

undefined4 _ftext(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_210 [129];
  
  iVar1 = access("/dev/watchdog",0);
  if (iVar1 != 0) {
    memset(local_210,0,0x200);
    FUN_00400f44("insmod /home/app/localko/watchdog.ko",local_210,0x200,0);
    FUN_00401134(1000);
  }
  iVar1 = access("/dev/watchdog",0);
  if (iVar1 == 0) {
    iVar1 = open("/dev/watchdog",2);
    if (iVar1 < 0) {
      FUN_00400cfc("reboot_by_watchdog.c",&DAT_00401310,0x4d,"Open /dev/watchdog error!\n");
      return 0xffffffff;
    }
    local_210[0] = 5;
    iVar1 = ioctl(iVar1,0xc0045706,local_210);
    if (iVar1 < 0) {
      puVar2 = (undefined4 *)__errno_location();
      uVar4 = *puVar2;
      uVar3 = strerror(uVar4);
      FUN_00400cfc("reboot_by_watchdog.c",&DAT_00401310,0x54,"ioctl failed,errno = %d, errno : %s\n"
                   ,uVar4,uVar3);
      return 0;
    }
  }
  else {
    FUN_00400cfc("reboot_by_watchdog.c",&DAT_00401310,0x59,"access /dev/watchdog failed!");
  }
  return 0;
}



// ==== __uClibc_main @ 004011f0 size=32

void __uClibc_main(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00400aec();
  return;
}



// ==== _fini @ 00401210 size=56

void _fini(void)

{
  FUN_00400aec();
  return;
}



