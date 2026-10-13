/* librtsjpeg — "jpg" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsjpeg.h"

// ==== jpg_ewl_check_done @ 00011804 size=60

undefined4 jpg_ewl_check_done(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_rtsjpgenc_get_register_0002574c)(param_1,2);
  uVar2 = 0xffffffef;
  if (iVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}



// ==== jpg_ewl_make_rdy @ 00011840 size=128

undefined4 jpg_ewl_make_rdy(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0xfffffff6;
  }
  else {
    (*(code *)PTR_pthread_mutex_lock_000256f0)(param_1 + 0x10);
    puVar1 = PTR_pthread_cond_signal_000257b0;
    *(undefined4 *)(param_1 + 0x60) = 1;
    (*(code *)puVar1)(param_1 + 0x28);
    (*(code *)PTR_pthread_mutex_unlock_00025710)(param_1 + 0x10);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== jpg_ewl_set_epoll_hook @ 00011b34 size=132

undefined4 jpg_ewl_set_epoll_hook(undefined *param_1,undefined *param_2,undefined4 param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_000256a8 + 0x4184;
    (*(code *)PTR_rts_log_0002572c)(4,PTR_000256a8 + 0x4164,PTR_000256a8 + 0x4338,0x127,param_1);
    param_3 = 0x127;
    param_2 = PTR_000256a8 + 0x4188;
    (*(code *)PTR___assert_000256c8)();
  }
  *(undefined4 *)(param_1 + 0x58) = param_3;
  *(undefined **)(param_1 + 0x5c) = param_2;
  return 0;
}



// ==== jpg_ewl_use_sigio @ 00011bb8 size=144

undefined4 jpg_ewl_use_sigio(undefined *param_1,undefined *param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_000256a8 + 0x4184;
    (*(code *)PTR_rts_log_0002572c)(4,PTR_000256a8 + 0x4164,PTR_000256a8 + 0x430c,0x133,param_1);
    param_2 = PTR_000256a8 + 0x4188;
    (*(code *)PTR___assert_000256c8)(param_1,param_2,0x133,PTR_000256a8 + 0x42f8);
  }
  if (param_2 == (undefined *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  return 0;
}



