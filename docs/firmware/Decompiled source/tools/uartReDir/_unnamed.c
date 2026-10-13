/* uartReDir — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "uartReDir.h"

// ==== FUN_00400600 @ 00400600 size=64

/* WARNING: Removing unreachable block (ram,0x00400620) */
/* WARNING: Removing unreachable block (ram,0x00400630) */

void FUN_00400600(void)

{
  return;
}



// ==== FUN_00400640 @ 00400640 size=76

/* WARNING: Removing unreachable block (ram,0x0040066c) */
/* WARNING: Removing unreachable block (ram,0x0040067c) */

void FUN_00400640(void)

{
  return;
}



// ==== FUN_0040068c @ 0040068c size=176

/* WARNING: Removing unreachable block (ram,0x004006ec) */

void FUN_0040068c(void)

{
  if (DAT_00410b60 == '\0') {
    FUN_00400600();
    DAT_00410b60 = '\x01';
  }
  return;
}



// ==== FUN_0040073c @ 0040073c size=60

/* WARNING: Removing unreachable block (ram,0x00400758) */

void FUN_0040073c(void)

{
  FUN_00400640();
  return;
}



// ==== FUN_00400920 @ 00400920 size=72

void FUN_00400920(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = &DAT_00410ae4;
  pcVar2 = DAT_00410ae4;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



