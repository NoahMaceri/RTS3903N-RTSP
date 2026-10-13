/* cloud — "pthread" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "cloud.h"

// ==== pthread_create @ 00413260 size=20

void pthread_create(void)

{
  (*(code *)PTR_FUN_00423640)();
  return;
}



// ==== pthread_detach @ 004133c0 size=4

void pthread_detach(void)

{
                    /* WARNING: Could not recover jumptable at 0x004133cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_00423698)();
  return;
}



// ==== pthread_self @ 00413540 size=4

void pthread_self(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041354c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_004236f8)();
  return;
}



