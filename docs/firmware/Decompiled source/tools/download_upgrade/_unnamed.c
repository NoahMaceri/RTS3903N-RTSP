/* download_upgrade — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "download_upgrade.h"

// ==== FUN_00401b30 @ 00401b30 size=64

/* WARNING: Removing unreachable block (ram,0x00401b50) */
/* WARNING: Removing unreachable block (ram,0x00401b60) */

void FUN_00401b30(void)

{
  return;
}



// ==== FUN_00401b70 @ 00401b70 size=76

/* WARNING: Removing unreachable block (ram,0x00401b9c) */
/* WARNING: Removing unreachable block (ram,0x00401bac) */

void FUN_00401b70(void)

{
  return;
}



// ==== FUN_00401bbc @ 00401bbc size=176

/* WARNING: Removing unreachable block (ram,0x00401c1c) */

void FUN_00401bbc(void)

{
  if (DAT_004147f0 == '\0') {
    FUN_00401b30();
    DAT_004147f0 = '\x01';
  }
  return;
}



// ==== FUN_00401c6c @ 00401c6c size=60

/* WARNING: Removing unreachable block (ram,0x00401c88) */

void FUN_00401c6c(void)

{
  FUN_00401b70();
  return;
}



// ==== FUN_004039e0 @ 004039e0 size=72

void FUN_004039e0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = &DAT_00414684;
  pcVar2 = DAT_00414684;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



