/* librtscamkit — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtscamkit.h"

// ==== binary_semaphore_getval @ 00014a64 size=28

void binary_semaphore_getval(undefined4 param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_semctl_000284e4)(param_1,param_2,0xc);
  return;
}



// ==== __find_node @ 00014fc8 size=60

int * __find_node(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x18);
  while( true ) {
    if (piVar1 == (int *)(param_1 + 0x18)) {
      return (int *)0x0;
    }
    if (param_2 == piVar1[-1]) break;
    piVar1 = (int *)*piVar1;
  }
  return piVar1 + -1;
}



// ==== __delete_task @ 00015df0 size=120

void __delete_task(int param_1)

{
  if (param_1 != 0) {
    if (*(code **)(param_1 + 0xc) != (code *)0x0) {
      if (*(int *)(param_1 + 4) != 0) {
        (**(code **)(param_1 + 0xc))();
      }
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    (*(code *)PTR_rts_free_00028434)(param_1);
    return;
  }
  return;
}



// ==== thread_run @ 00015e68 size=448

undefined4 thread_run(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  do {
    iVar4 = 0;
    (*(code *)PTR_pthread_mutex_lock_0002843c)(param_1);
    iVar2 = param_1;
    do {
      iVar2 = (*(code *)PTR_rts_queue_empty_000284d8)(*(undefined4 *)(iVar2 + 0x48));
      if (iVar2 == 0) goto LAB_00015efc;
      iVar4 = iVar4 + 4;
      iVar2 = param_1 + iVar4;
    } while (iVar4 != 0x1c);
    iVar2 = *(int *)(param_1 + 0x70);
    if (iVar2 == 0) {
      (*(code *)PTR_pthread_cond_wait_00028438)(param_1 + 0x18,param_1);
LAB_00015efc:
      iVar2 = *(int *)(param_1 + 0x70);
    }
    iVar4 = 0;
    if (iVar2 != 0) {
      (*(code *)PTR_pthread_mutex_unlock_0002846c)(param_1);
      uVar3 = (*(code *)PTR_pthread_exit_00028518)(0);
      return uVar3;
    }
    iVar2 = 0;
    do {
      iVar2 = (*(code *)PTR_rts_queue_empty_000284d8)(*(undefined4 *)(param_1 + iVar2 + 0x48));
      if (iVar2 == 0) {
        puVar5 = (undefined4 *)
                 (*(code *)PTR_rts_queue_pop_000283ec)
                           (*(undefined4 *)(param_1 + (iVar4 + 0x12) * 4));
        goto LAB_00015f74;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar4 * 4;
    } while (iVar4 != 7);
    puVar5 = (undefined4 *)0x0;
LAB_00015f74:
    (*(code *)PTR_pthread_mutex_unlock_0002846c)(param_1);
    if (puVar5 != (undefined4 *)0x0) {
      (*(code *)*puVar5)(puVar5[1]);
      if ((code *)puVar5[3] != (code *)0x0) {
        if (puVar5[1] != 0) {
          (*(code *)puVar5[3])();
        }
        puVar5[1] = 0;
        puVar5[3] = 0;
      }
      puVar1 = PTR_rts_queue_push_back_00028454;
      if (puVar5[2] == 0) {
        (*(code *)PTR_rts_free_00028434)(puVar5,puVar5);
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 100);
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[3] = 0;
        (*(code *)puVar1)(uVar3);
      }
    }
  } while( true );
}



// ==== __new_task @ 00016028 size=108

void __new_task(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           (*(code *)PTR___rts_calloc_000284f8)(1,0x10,PTR_DAT_000283dc + -0x7e4c,0x4d);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = 0;
  }
  return;
}



// ==== __join_thread @ 00016094 size=28

void __join_thread(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000160a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_join_000283fc)(param_1,0);
  return;
}



// ==== show_mem_used @ 00016c20 size=8

void show_mem_used(void)

{
  return;
}



// ==== show_mem_info @ 00016c28 size=8

void show_mem_info(void)

{
  return;
}



