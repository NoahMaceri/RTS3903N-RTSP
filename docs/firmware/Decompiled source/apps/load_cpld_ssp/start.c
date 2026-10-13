/* load_cpld_ssp — C-runtime entry / init stubs
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "load_cpld_ssp.h"

// ==== _init @ 0040069c size=72

void _init(void)

{
  FUN_0040088c();
  FUN_004011a0();
  return;
}



// ==== main @ 004010cc size=200

int main(void)

{
  int iVar1;
  undefined1 auStack_8c [64];
  undefined1 auStack_4c [68];
  
  memset(auStack_8c,0,0x40);
  memset(auStack_4c,0,0x40);
  iVar1 = FUN_00400c34(auStack_8c,auStack_4c);
  if (iVar1 == 0) {
    FUN_00400d2c(auStack_8c,auStack_4c);
  }
  else {
    puts("read_productinfo() fail !!! ");
  }
  return iVar1;
}



// ==== __uClibc_main @ 004011f0 size=32

void __uClibc_main(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_004007dc();
  return;
}



// ==== _fini @ 00401210 size=56

void _fini(void)

{
  FUN_004007dc();
  return;
}



