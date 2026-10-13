/* p2p_tnp — "mutex" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "p2p_tnp.h"

// ==== MUTEX_INIT @ 0042e150 size=52

/* tnp::MUTEX_INIT(pthread_mutex_t*) */

undefined4 tnp::MUTEX_INIT(pthread_mutex_t *param_1)

{
  (*(code *)PTR_pthread_mutex_init_004687c4)(param_1,0);
  return 0;
}



// ==== MUTEX_DESTROY @ 0042e184 size=24

/* tnp::MUTEX_DESTROY(pthread_mutex_t*) */

void tnp::MUTEX_DESTROY(pthread_mutex_t *param_1)

{
  (*(code *)PTR_pthread_mutex_destroy_004687d8)();
  return;
}



// ==== MUTEX_LOCK @ 0042e19c size=24

/* tnp::MUTEX_LOCK(pthread_mutex_t*) */

void tnp::MUTEX_LOCK(pthread_mutex_t *param_1)

{
  (*(code *)PTR_pthread_mutex_lock_004687d4)();
  return;
}



// ==== MUTEX_TRYLOCK @ 0042e1b4 size=24

/* tnp::MUTEX_TRYLOCK(pthread_mutex_t*) */

void tnp::MUTEX_TRYLOCK(pthread_mutex_t *param_1)

{
  (*(code *)PTR_pthread_mutex_trylock_004687cc)();
  return;
}



// ==== MUTEX_RELEASE @ 0042e1cc size=24

/* tnp::MUTEX_RELEASE(pthread_mutex_t*) */

void tnp::MUTEX_RELEASE(pthread_mutex_t *param_1)

{
  (*(code *)PTR_pthread_mutex_unlock_004687f8)();
  return;
}



