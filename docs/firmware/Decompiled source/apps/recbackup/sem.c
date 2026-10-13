/* recbackup — "sem" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "recbackup.h"

// ==== sem_timedwait @ 00406d70 size=4

void sem_timedwait(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_sem_timedwait_004171f4)();
  return;
}



// ==== sem_destroy @ 00406dc0 size=16

void sem_destroy(void)

{
  (*(code *)PTR_sem_destroy_00417208)();
  return;
}



// ==== sem_post @ 00406e40 size=16

void sem_post(void)

{
  (*(code *)PTR_sem_post_00417228)();
  return;
}



// ==== sem_init @ 00406ef0 size=16

void sem_init(void)

{
  (*(code *)PTR_sem_init_00417254)();
  return;
}



