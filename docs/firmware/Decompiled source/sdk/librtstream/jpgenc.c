/* librtstream — "jpgenc" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtstream.h"

// ==== __jpgenc_epoll_finish @ 00039754 size=292

undefined4 __jpgenc_epoll_finish(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  
  puVar4 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0xdb4;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xa84,0x1f6,puVar4);
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0xe20;
    param_1 = puVar4;
    (*(code *)PTR___assert_000637b8)
              (puVar4,param_2,0x1f6,PTR_s_snd_device_0004ffec_0x14_0006326c + -0xa9c);
  }
  if (*(int *)(param_1 + 0xb0) == 0) {
    uVar2 = 0xffffffef;
  }
  else {
    uVar2 = (*(code *)PTR_rtsjpgenc_check_done_0006359c)(*(undefined4 *)(puVar4 + 0x18));
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
    puVar1 = PTR_rts_av_del_poll_fd_00063378;
    if ((iVar3 == 0) || (param_2 != (undefined *)0x0)) {
      *(int *)(puVar4 + 0xb0) = *(int *)(puVar4 + 0xb0) + -1;
      (*(code *)puVar1)(puVar4 + 0x58);
      *(undefined4 *)(puVar4 + 0x5c) = 0xffffffff;
      puVar1 = PTR_rts_av_del_task_000637f0;
      *(undefined4 *)(puVar4 + 0x58) = 0;
      *(undefined4 *)(puVar4 + 100) = 0;
      (*(code *)puVar1)(puVar4 + 0x78);
      (*(code *)PTR_rtsjpgenc_make_rdy_000633d0)(*(undefined4 *)(puVar4 + 0x18));
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ==== __jpgenc_epoll_cb @ 00039878 size=260

void __jpgenc_epoll_cb(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if (param_1 == 0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c40;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xa58,0x211,puVar3);
    uVar2 = 0x211;
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0xc);
    puVar4 = PTR_LAB_00063274;
    if (puVar3 != (undefined *)0x0) goto LAB_00039938;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0xdb4;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xa58,0x213,puVar3);
    uVar2 = 0x213;
  }
  puVar4 = PTR___assert_000637b8;
  (*(code *)PTR___assert_000637b8)
            (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0xe20,uVar2,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0xa6c);
LAB_00039938:
  uVar2 = (*(code *)(puVar4 + -0x68ac))(puVar3,0);
  iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
  if (iVar1 == 0) {
    *(int *)(puVar3 + 0xa0) = *(int *)(puVar3 + 0xa0) + 1;
  }
  return;
}



// ==== __jpgenc_timeout @ 0003997c size=316

void __jpgenc_timeout(int param_1)

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
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xab0,0x221,puVar3);
    uVar2 = 0x221;
  }
  else {
    puVar3 = *(undefined **)(param_1 + 4);
    pcVar5 = (code *)PTR_rts_get_monotonic_raw_time_0006355c;
    if (puVar3 != (undefined *)0x0) goto LAB_00039a3c;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0xdb4;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xab0,0x223,puVar3);
    uVar2 = 0x223;
  }
  pcVar5 = (code *)PTR___assert_000637b8;
  (*(code *)PTR___assert_000637b8)
            (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0xe20,uVar2,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0xac4);
LAB_00039a3c:
  uVar6 = (*pcVar5)();
  uVar4 = (uint)uVar6 - *(int *)(puVar3 + 0xa8);
  uVar2 = (*(code *)(PTR_LAB_00063274 + -0x68ac))
                    (puVar3,(int)((ulonglong)uVar6 >> 0x20) - *(int *)(puVar3 + 0xac) !=
                            (uint)((uint)uVar6 < uVar4) || 299999999 < uVar4);
  iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
  if (iVar1 == 0) {
    *(int *)(puVar3 + 0xa4) = *(int *)(puVar3 + 0xa4) + 1;
  }
  return;
}



