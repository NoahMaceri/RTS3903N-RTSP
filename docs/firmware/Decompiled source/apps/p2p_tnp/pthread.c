/* p2p_tnp — "pthread" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "p2p_tnp.h"

// ==== pthread_create @ 00456ea0 size=4

void pthread_create(void)

{
                    /* WARNING: Could not recover jumptable at 0x00456eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_create_0046802c)();
  return;
}



// ==== pthread_exit @ 00456ed0 size=4

void pthread_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00456edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_exit_00468038)();
  return;
}



// ==== pthread_detach @ 00457010 size=4

void pthread_detach(void)

{
                    /* WARNING: Could not recover jumptable at 0x0045701c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_detach_00468088)();
  return;
}



// ==== pthread_sigmask @ 004570e0 size=4

void pthread_sigmask(void)

{
                    /* WARNING: Could not recover jumptable at 0x004570ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam004680bc)();
  return;
}



// ==== pthread_mutex_unlock @ 004571c0 size=16

void pthread_mutex_unlock(void)

{
  (*(code *)PTR_pthread_mutex_unlock_004680f4)();
  return;
}



// ==== pthread_self @ 004571e0 size=4

void pthread_self(void)

{
                    /* WARNING: Could not recover jumptable at 0x004571ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam004680fc)();
  return;
}



// ==== pthread_mutex_lock @ 00457200 size=4

void pthread_mutex_lock(void)

{
                    /* WARNING: Could not recover jumptable at 0x0045720c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00468104)();
  return;
}



