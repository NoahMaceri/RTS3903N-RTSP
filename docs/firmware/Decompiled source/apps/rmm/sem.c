/* rmm — "sem" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rmm.h"

// ==== sem_post @ 00425e60 size=4

void sem_post(void)

{
                    /* WARNING: Could not recover jumptable at 0x00425e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_sem_post_00436738)();
  return;
}



// ==== sem_wait @ 004262c0 size=4

void sem_wait(void)

{
                    /* WARNING: Could not recover jumptable at 0x004262cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_sem_wait_00436850)();
  return;
}



// ==== sem_init @ 00426300 size=4

void sem_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042630c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_sem_init_00436860)();
  return;
}



