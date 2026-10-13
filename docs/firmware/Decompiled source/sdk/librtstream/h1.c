/* librtstream — "h1" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtstream.h"

// ==== h1_ctrl_changed @ 000219a0 size=68

/* WARNING: Removing unreachable block (ram,0x00021a74) */

undefined4 h1_ctrl_changed(void)

{
  int unaff_gp;
  int in_stack_00000020;
  
  (*(code *)(*(int *)(unaff_gp + -0x7fd8) + 0x142c))();
  (**(code **)(in_stack_00000020 + -0x7ec0))(0xfffffff5);
  return 0xfffffff5;
}



// ==== h1_ctrl_changed @ 000319a0 size=48

/* WARNING: Control flow encountered bad instruction data */

void h1_ctrl_changed(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((((param_1 != 0) && (iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)(), iVar1 != 0)) &&
      (iVar2 = (*(code *)(PTR_LAB_00063270 + 0x1950))(param_1), iVar2 != 0)) &&
     (iVar2 = *(int *)(iVar2 + 0x24), iVar2 != 0)) {
    if ((*(int *)(iVar1 + 0x28) != 0) && (*(int *)(iVar1 + 0x204) == 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined4 *)(iVar1 + 0x204) = 0;
    *(int *)(iVar1 + 0xc) = iVar2;
  }
  return;
}



// ==== h1_fd @ 00031cc4 size=344

undefined4 h1_fd(undefined *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  
  if (param_1 == (undefined *)0x0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2190;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x169c,0x392,puVar3);
    uVar2 = 0x392;
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2188;
    param_1 = puVar3;
  }
  else {
    if (*(int *)(param_1 + 0x24) == 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x169c,0x393,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2118);
    }
    if (*(int *)(param_1 + 0x24) != 0) goto LAB_00031d90;
    uVar2 = 0x393;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2118;
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2188;
  }
  while( true ) {
    (*(code *)PTR___assert_000637b8)
              (puVar3,puVar1,uVar2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x16b4);
LAB_00031d90:
    uVar4 = *(uint *)(param_1 + 0x28);
    if (uVar4 == 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x169c,0x394,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x20f8);
      uVar4 = *(uint *)(param_1 + 0x28);
    }
    if (uVar4 != 0) break;
    uVar2 = 0x394;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x20f8;
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2188;
  }
  if (*(uint *)(param_1 + 0x24) == 0) {
    trap(0x1c00);
  }
  *(uint *)(param_1 + 0xf8) = uVar4 / *(uint *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0xfc) = 1;
  return 0;
}



// ==== __h1_epoll_finish @ 00034784 size=292

undefined4 __h1_epoll_finish(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  
  puVar4 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2190;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1914,0x4b7,puVar4);
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2188;
    param_1 = puVar4;
    (*(code *)PTR___assert_000637b8)
              (puVar4,param_2,0x4b7,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1928);
  }
  if (*(int *)(param_1 + 0x278) == 0) {
    uVar2 = 0xffffffef;
  }
  else {
    uVar2 = (*(code *)PTR_H264EncCheckDone_000637cc)(*(undefined4 *)(puVar4 + 0xe0));
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
    puVar1 = PTR_rts_av_del_poll_fd_00063378;
    if ((iVar3 == 0) || (param_2 != (undefined *)0x0)) {
      *(int *)(puVar4 + 0x278) = *(int *)(puVar4 + 0x278) + -1;
      (*(code *)puVar1)(puVar4 + 0x220);
      *(undefined4 *)(puVar4 + 0x224) = 0xffffffff;
      puVar1 = PTR_rts_av_del_task_000637f0;
      *(undefined4 *)(puVar4 + 0x220) = 0;
      *(undefined4 *)(puVar4 + 0x22c) = 0;
      (*(code *)puVar1)(puVar4 + 0x240);
      (*(code *)PTR_H264EncMakeRdy_00063b10)(*(undefined4 *)(puVar4 + 0xe0));
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ==== __h1_epoll_cb @ 000348a8 size=260

void __h1_epoll_cb(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if (param_1 == 0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c40;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x18f0,0x4d2,puVar3);
    uVar2 = 0x4d2;
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0xc);
    puVar4 = PTR_LAB_00063270;
    if (puVar3 != (undefined *)0x0) goto LAB_00034968;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2190;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x18f0,0x4d5,puVar3);
    uVar2 = 0x4d5;
  }
  puVar4 = PTR___assert_000637b8;
  (*(code *)PTR___assert_000637b8)
            (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2188,uVar2,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1900);
LAB_00034968:
  uVar2 = (*(code *)(puVar4 + 0x4784))(puVar3,0);
  iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
  if (iVar1 == 0) {
    *(int *)(puVar3 + 0x268) = *(int *)(puVar3 + 0x268) + 1;
  }
  return;
}



// ==== __h1_timeout @ 000349ac size=316

void __h1_timeout(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  if (param_1 == 0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c70;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1938,0x4e3,puVar3);
    uVar2 = 0x4e3;
  }
  else {
    puVar3 = *(undefined **)(param_1 + 4);
    pcVar5 = (code *)PTR_rts_get_monotonic_raw_time_0006355c;
    if (puVar3 != (undefined *)0x0) goto LAB_00034a6c;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2190;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1938,0x4e5,puVar3);
    uVar2 = 0x4e5;
  }
  pcVar5 = (code *)PTR___assert_000637b8;
  (*(code *)PTR___assert_000637b8)
            (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2188,uVar2,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1948);
LAB_00034a6c:
  uVar6 = (*pcVar5)();
  uVar4 = (uint)uVar6 - *(int *)(puVar3 + 0x270);
  uVar2 = (*(code *)(PTR_LAB_00063270 + 0x4784))
                    (puVar3,(int)((ulonglong)uVar6 >> 0x20) - *(int *)(puVar3 + 0x274) !=
                            (uint)((uint)uVar6 < uVar4) || 299999999 < uVar4);
  iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
  if (iVar1 == 0) {
    *(int *)(puVar3 + 0x26c) = *(int *)(puVar3 + 0x26c) + 1;
  }
  return;
}



