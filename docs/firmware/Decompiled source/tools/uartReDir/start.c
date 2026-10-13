/* uartReDir — C-runtime entry / init stubs
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "uartReDir.h"

// ==== _init @ 00400554 size=72

void _init(void)

{
  FUN_0040073c();
  FUN_00400920();
  return;
}



// ==== main @ 00400780 size=408

undefined4 main(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_10;
  
  if (param_1 < 2) {
    puts("miss argument");
  }
  else {
    uVar1 = ttyname(1);
    printf("tty_name: %s\n",uVar1);
    iVar2 = strcmp(*(undefined4 *)(param_2 + 4),&DAT_004009f0);
    if (iVar2 == 0) {
      local_10 = open(uVar1,1);
      ioctl(local_10,0x80047478);
      perror("ioctl TIOCCONS");
    }
    else {
      iVar2 = strcmp(*(undefined4 *)(param_2 + 4),&DAT_00400a04);
      if (iVar2 != 0) {
        puts("error argument");
        return 0;
      }
      local_10 = open("/dev/console",1);
      ioctl(local_10,0x80047478);
      perror("ioctl TIOCCONS");
    }
    close(local_10);
  }
  return 0;
}



// ==== __uClibc_main @ 00400970 size=32

void __uClibc_main(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_0040068c();
  return;
}



// ==== _fini @ 00400990 size=56

void _fini(void)

{
  FUN_0040068c();
  return;
}



