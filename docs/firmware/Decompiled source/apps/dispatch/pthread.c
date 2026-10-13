/* dispatch — "pthread" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "dispatch.h"

// ==== pthread_create @ 00415420 size=4

void pthread_create(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041542c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_create_00426034)();
  return;
}



// ==== pthread_detach @ 004155c0 size=16

void pthread_detach(void)

{
  (*(code *)PTR_pthread_detach_0042609c)();
  return;
}



// ==== pthread_mutex_unlock @ 004157c0 size=4

void pthread_mutex_unlock(void)

{
                    /* WARNING: Could not recover jumptable at 0x004157cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_mutex_unlock_0042611c)();
  return;
}



// ==== pthread_self @ 004157e0 size=4

void pthread_self(void)

{
                    /* WARNING: Could not recover jumptable at 0x004157ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_self_00426124)();
  return;
}



// ==== pthread_mutex_lock @ 00415810 size=16

void pthread_mutex_lock(void)

{
  (*(code *)PTR_pthread_mutex_lock_00426130)();
  return;
}



// ==== pthread_mutex_init @ 00415850 size=4

void pthread_mutex_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041585c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_mutex_init_00426140)();
  return;
}



