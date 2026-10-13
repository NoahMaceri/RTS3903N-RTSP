/* dispatch — "sem" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "dispatch.h"

// ==== sem_wait @ 00415540 size=4

void sem_wait(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041554c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_sem_wait_0042607c)();
  return;
}



// ==== sem_post @ 00415550 size=16

void sem_post(void)

{
  (*(code *)PTR_sem_post_00426080)();
  return;
}



// ==== sem_init @ 00415620 size=4

void sem_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041562c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_sem_init_004260b4)();
  return;
}



