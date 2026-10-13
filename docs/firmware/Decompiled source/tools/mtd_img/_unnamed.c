/* mtd_img — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "mtd_img.h"

// ==== FUN_00400b10 @ 00400b10 size=64

/* WARNING: Removing unreachable block (ram,0x00400b30) */
/* WARNING: Removing unreachable block (ram,0x00400b40) */

void FUN_00400b10(void)

{
  return;
}



// ==== FUN_00400b50 @ 00400b50 size=76

/* WARNING: Removing unreachable block (ram,0x00400b7c) */
/* WARNING: Removing unreachable block (ram,0x00400b8c) */

void FUN_00400b50(void)

{
  return;
}



// ==== FUN_00400b9c @ 00400b9c size=176

/* WARNING: Removing unreachable block (ram,0x00400bfc) */

void FUN_00400b9c(void)

{
  if (DAT_004110a0 == '\0') {
    FUN_00400b10();
    DAT_004110a0 = '\x01';
  }
  return;
}



// ==== FUN_00400c4c @ 00400c4c size=60

/* WARNING: Removing unreachable block (ram,0x00400c68) */

void FUN_00400c4c(void)

{
  FUN_00400b50();
  return;
}



// ==== FUN_00400c90 @ 00400c90 size=72

void FUN_00400c90(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = &DAT_00411000;
  pcVar2 = DAT_00411000;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



