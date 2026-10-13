/* recbackup — "pthread" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "recbackup.h"

// ==== pthread_cond_signal @ 00406d00 size=16

void pthread_cond_signal(void)

{
  (*(code *)PTR_pthread_cond_signal_004171d8)();
  return;
}



// ==== pthread_create @ 00406d30 size=4

void pthread_create(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_create_004171e4)();
  return;
}



// ==== pthread_kill @ 00406f20 size=4

void pthread_kill(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_kill_00417260)();
  return;
}



// ==== pthread_sigmask @ 00406f80 size=16

void pthread_sigmask(void)

{
  (*(code *)PTR_pthread_sigmask_00417278)();
  return;
}



// ==== pthread_cond_init @ 00406f90 size=16

void pthread_cond_init(void)

{
  (*(code *)PTR_pthread_cond_init_0041727c)();
  return;
}



// ==== pthread_mutex_unlock @ 00407050 size=16

void pthread_mutex_unlock(void)

{
  (*(code *)PTR_pthread_mutex_unlock_004172ac)();
  return;
}



// ==== pthread_mutex_destroy @ 00407090 size=16

void pthread_mutex_destroy(void)

{
  (*(code *)PTR_pthread_mutex_destroy_004172bc)();
  return;
}



// ==== pthread_mutex_lock @ 004070a0 size=4

void pthread_mutex_lock(void)

{
                    /* WARNING: Could not recover jumptable at 0x004070ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_mutex_lock_004172c0)();
  return;
}



// ==== pthread_cond_wait @ 004070b0 size=16

void pthread_cond_wait(void)

{
  (*(code *)PTR_pthread_cond_wait_004172c4)();
  return;
}



// ==== pthread_cond_destroy @ 004070e0 size=16

void pthread_cond_destroy(void)

{
  (*(code *)PTR_pthread_cond_destroy_004172d0)();
  return;
}



// ==== pthread_mutex_init @ 00407100 size=16

void pthread_mutex_init(void)

{
  (*(code *)PTR_pthread_mutex_init_004172d8)();
  return;
}



