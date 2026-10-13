/* oss — "pthread" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "oss.h"

// ==== pthread_mutex_lock @ 0054eae0 size=16

void pthread_mutex_lock(void)

{
  (*(code *)PTR_pthread_mutex_lock_0055fc38)();
  return;
}



// ==== pthread_self @ 0054eb80 size=16

void pthread_self(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054eb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_self_0055fc60)();
  return;
}



// ==== pthread_cond_signal @ 0054eba0 size=16

void pthread_cond_signal(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054ebac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_cond_signal_0055fc68)();
  return;
}



// ==== pthread_exit @ 0054ecd0 size=4

void pthread_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054ecdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_exit_0055fcb4)();
  return;
}



// ==== pthread_mutex_unlock @ 0054ed80 size=16

void pthread_mutex_unlock(void)

{
  (*(code *)PTR_pthread_mutex_unlock_0055fce0)();
  return;
}



// ==== pthread_mutex_destroy @ 0054edd0 size=16

void pthread_mutex_destroy(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054eddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_mutex_destroy_0055fcf4)();
  return;
}



// ==== pthread_cond_wait @ 0054eea0 size=16

void pthread_cond_wait(void)

{
  (*(code *)PTR_pthread_cond_wait_0055fd28)();
  return;
}



// ==== pthread_cond_broadcast @ 0054ef90 size=16

void pthread_cond_broadcast(void)

{
  (*(code *)PTR_pthread_cond_broadcast_0055fd64)();
  return;
}



// ==== pthread_cond_timedwait @ 0054efb0 size=4

void pthread_cond_timedwait(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054efbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_cond_timedwait_0055fd6c)();
  return;
}



// ==== pthread_join @ 0054f0c0 size=16

void pthread_join(void)

{
  (*(code *)PTR_pthread_join_0055fdb0)();
  return;
}



// ==== pthread_create @ 0054f0d0 size=1

void pthread_create(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_create_0055fdb4)();
  return;
}



// ==== pthread_mutex_init @ 0054f1a0 size=16

void pthread_mutex_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_mutex_init_0055fde8)();
  return;
}



// ==== pthread_cond_init @ 0054f1c0 size=20

void pthread_cond_init(void)

{
  (*(code *)PTR_pthread_cond_init_0055fdf0)();
  return;
}



