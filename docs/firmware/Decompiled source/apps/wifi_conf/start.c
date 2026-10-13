/* wifi_conf — C-runtime entry / init stubs
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "wifi_conf.h"

// ==== _init @ 00400660 size=72

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  FUN_004008ec();
  iVar1 = FUN_00401930();
  return iVar1;
}



// ==== main @ 004006b0 size=148

int main(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 3) {
    iVar1 = FUN_0040183c("/tmp/mmap.info",0xaa0);
    iVar2 = iVar1 + 0x460;
    if (iVar1 == 0) {
      puts("wifi_conf get sharemem failed",0x460);
      return -1;
    }
    iVar1 = iVar1 + 0x420;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
    iVar2 = *(int *)(param_2 + 8);
  }
  iVar1 = FUN_00400930(iVar1,iVar2);
  if (iVar1 == 0) {
    puts("set wifi configuration success!");
    iVar1 = 0;
  }
  else {
    puts("set wifi configuration failed!");
  }
  return iVar1;
}



// ==== _fini @ 004019a0 size=56

void _fini(void)

{
  FUN_0040083c();
  return;
}



