/* rmm — "pthread" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rmm.h"

// ==== pthread_detach @ 00425e40 size=16

void pthread_detach(void)

{
  (*(code *)PTR_pthread_detach_00436730)();
  return;
}



// ==== pthread_mutex_lock @ 00425ec0 size=16

void pthread_mutex_lock(void)

{
  (*(code *)PTR_pthread_mutex_lock_00436750)();
  return;
}



// ==== pthread_self @ 00425f20 size=16

void pthread_self(void)

{
  (*(code *)PTR_pthread_self_00436768)();
  return;
}



// ==== pthread_mutex_unlock @ 004260b0 size=4

void pthread_mutex_unlock(void)

{
                    /* WARNING: Could not recover jumptable at 0x004260bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_mutex_unlock_004367cc)();
  return;
}



// ==== pthread_once @ 00426240 size=16

void pthread_once(void)

{
  (*(code *)PTR_pthread_once_00436830)();
  return;
}



// ==== pthread_create @ 00426440 size=16

void pthread_create(void)

{
  (*(code *)PTR_pthread_create_004368b0)();
  return;
}



// ==== pthread_mutex_init @ 00426500 size=16

void pthread_mutex_init(void)

{
  (*(code *)PTR_pthread_mutex_init_004368e0)();
  return;
}



