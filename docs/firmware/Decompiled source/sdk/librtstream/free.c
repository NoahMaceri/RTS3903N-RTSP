/* librtstream — "free" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtstream.h"

// ==== __free_task_lk @ 0001a218 size=128

void __free_task_lk(int param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (param_1 != 0) {
    (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f4c);
    (*(code *)(PTR_LAB_00063268 + -0x5e38))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001a27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x5f4c);
    return;
  }
  return;
}



// ==== __free_h1_buffer @ 000256b0 size=208

undefined4 __free_h1_buffer(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_s0;
  int iVar3;
  code *in_t9;
  int in_stack_00000028;
  
  (*in_t9)(param_1,param_2 + -0x6cf0,param_3 + -0x4c18);
  iVar3 = unaff_s0;
  (**(code **)(in_stack_00000028 + -0x7a88))();
  iVar3 = iVar3 + 0xc;
  (**(code **)(in_stack_00000028 + -0x7938))(&stack0x00000030,iVar3,0x14);
  (**(code **)(in_stack_00000028 + -0x7938))(iVar3);
  if (*(int *)(unaff_s0 + 4) != 0) {
    uVar1 = (**(code **)(in_stack_00000028 + -0x7900))();
    iVar2 = (**(code **)(in_stack_00000028 + -0x7ec0))(uVar1);
    if (iVar2 != 0) {
      (**(code **)(in_stack_00000028 + -0x7ca0))(*(undefined4 *)(unaff_s0 + 4));
      (**(code **)(in_stack_00000028 + -0x7c54))
                (4,*(int *)(in_stack_00000028 + -0x7fd4) + -0x4dec,
                 *(int *)(in_stack_00000028 + -0x7fd4) + -0x4c18,0x12e);
      (**(code **)(in_stack_00000028 + -0x7938))(iVar3,&stack0x00000030,0x14);
      return uVar1;
    }
  }
  return 0;
}



// ==== free_dma_memory @ 00026a1c size=156

undefined4 free_dma_memory(int param_1,undefined4 *param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_2 != (undefined4 *)0x0) {
    if (param_1 < 1) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4820,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4520,0x4d);
      return 0xffffffe6;
    }
    (*(code *)PTR_rts_av_set_buffer_offset_000635bc)(param_2,0);
    local_20 = *param_2;
    local_18 = param_2[3];
    local_1c = param_2[1];
    (*(code *)PTR_rts_isp_mem_free_00063410)(param_1,&local_20);
    (*(code *)PTR_rts_av_uninit_buffer_00063674)(param_2);
  }
  return 0;
}



// ==== free_v4l2_buffers @ 00027a68 size=20

undefined4 free_v4l2_buffers(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int unaff_s1;
  undefined4 unaff_s3;
  int unaff_s4;
  int in_t8;
  
  if (param_2 != 0) {
    for (unaff_s1 = 0; in_t8 = unaff_s1 << 2, unaff_s1 < param_3; unaff_s1 = unaff_s1 + 1) {
LAB_00027ad0:
      piVar1 = *(int **)(param_2 + in_t8);
      (*(code *)PTR_rts_av_set_buffer_callback_00063998)(piVar1,0,0);
      if ((*piVar1 != 0) && (piVar1[1] != 0)) {
        (*(code *)PTR_rts_v4l2_munmap_buf_00063888)();
      }
      (*(code *)PTR_rts_av_uninit_buffer_00063674)(piVar1);
      piVar1[0xc] = 0;
    }
    (*(code *)PTR_rts_v4l2_request_bufs_00063a04)(param_1,0);
    return 0;
  }
  (*(code *)PTR___assert_000637b8)
            (PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4694,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x47d8,0x2a9,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4640);
  param_1 = unaff_s3;
  param_3 = unaff_s4;
  goto LAB_00027ad0;
}



// ==== __free_transfer_buffers @ 000323f8 size=308

undefined4 __free_transfer_buffers(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  
  if (param_1 == 0) {
    uVar1 = 0xfffffff6;
  }
  else {
    iVar2 = 0;
    while( true ) {
      iVar2 = iVar2 + 4;
      if (iVar2 == 0x28) break;
      (*(code *)PTR_rts_av_set_buffer_callback_00063998)
                (*(undefined4 *)(param_1 + iVar2 + 0x1a0),0,0);
    }
    iVar2 = 0;
    do {
      iVar6 = param_1 + iVar2;
      iVar2 = iVar2 + 4;
      (*(code *)PTR_rts_queue_clear_00063388)
                (*(undefined4 *)(iVar6 + 0x1c8),PTR_rts_av_put_buffer_00063548);
    } while (iVar2 != 0xc);
    iVar6 = 0;
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x207c;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x16fc;
    iVar2 = param_1;
    do {
      iVar3 = *(int *)(iVar2 + 0x1a4);
      iVar2 = (*(code *)PTR_rts_av_get_buffer_refs_00063538)(iVar3);
      if (iVar2 != 0) {
        (*(code *)PTR_rts_log_000635ec)(4,puVar5,puVar4,0x346);
      }
      if (iVar3 != 0) {
        (*(code *)PTR_rts_av_delete_buffer_000639b4)(iVar3);
      }
      iVar6 = iVar6 + 4;
      iVar2 = param_1 + iVar6;
    } while (iVar6 != 0x24);
    uVar1 = 0;
  }
  return uVar1;
}



// ==== __free_out_buffers @ 0003252c size=304

undefined4 __free_out_buffers(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  
  puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x1e4) + 4);
  iVar2 = 0;
  (*(code *)PTR_rts_av_set_buffer_callback_00063998)(*puVar4,0,0);
  (*(code *)PTR_rts_av_set_buffer_callback_00063998)(puVar4[1],0,0);
  (*(code *)PTR_rts_queue_clear_00063388)
            (**(undefined4 **)(param_1 + 0x1e4),PTR_rts_av_put_buffer_00063548);
  puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x204c;
  puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1710;
  do {
    iVar3 = *(int *)((int)puVar4 + iVar2);
    iVar1 = (*(code *)PTR_rts_av_get_buffer_refs_00063538)(iVar3);
    if (iVar1 != 0) {
      (*(code *)PTR_rts_log_000635ec)(4,puVar5,puVar6,0x249);
    }
    uVar7 = *(undefined4 *)(iVar3 + 0xc);
    iVar2 = iVar2 + 4;
    (*(code *)PTR_free_dma_memory_00063580)(*(undefined4 *)(param_1 + 0x11c),iVar3);
    *(undefined4 *)(iVar3 + 0xc) = uVar7;
  } while (iVar2 != 8);
  return 0;
}



// ==== __free_outbuf_shared @ 00033664 size=252

undefined4 __free_outbuf_shared(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1e4) + 8);
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1e0) + 0xc);
  (*(code *)PTR_free_dma_memory_00063580)(*(undefined4 *)(param_1 + 0x11c));
  *(undefined4 *)(*(int *)(param_1 + 0x1e0) + 0xc) = uVar4;
  if (iVar1 == 0) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x1e4) + 4);
    (*(code *)PTR_rts_av_set_buffer_callback_00063998)(*piVar2,0,0);
    (*(code *)PTR_rts_queue_clear_00063388)
              (**(undefined4 **)(param_1 + 0x1e4),PTR_rts_av_put_buffer_00063548);
    iVar3 = *piVar2;
    iVar1 = (*(code *)PTR_rts_av_get_buffer_refs_00063538)(iVar3);
    if (iVar1 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x204c,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1728,0x2ba);
    }
    uVar4 = *(undefined4 *)(iVar3 + 0xc);
    (*(code *)PTR_free_dma_memory_00063580)(*(undefined4 *)(param_1 + 0x11c),iVar3);
    *(undefined4 *)(iVar3 + 0xc) = uVar4;
  }
  return 0;
}



// ==== __free_h1_buffer @ 000356b0 size=280

undefined4 __free_h1_buffer(undefined *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  puVar1 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2190;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x173c,0x411,puVar1);
    param_1 = puVar1;
    (*(code *)PTR___assert_000637b8)
              (puVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2188,0x411,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1750);
  }
  if (*(int *)(param_1 + 0x1f0) != 0) {
    if (*(int *)(puVar1 + 0x20c) == 0) {
      pcVar3 = (code *)(PTR_LAB_00063270 + 0x252c);
    }
    else {
      pcVar3 = (code *)(PTR_LAB_00063270 + 0x3664);
    }
    (*pcVar3)();
    uVar2 = *(undefined4 *)(puVar1 + 0x19c);
    (*(code *)PTR_rts_isp_free_dma_0006341c)(puVar1 + 0x194);
    *(undefined4 *)(puVar1 + 0x19c) = uVar2;
    if (*(int *)(puVar1 + 0x210) != 0) {
      (*(code *)(PTR_LAB_00063270 + 0x23f8))(puVar1);
    }
    if (-1 < *(int *)(puVar1 + 0x11c)) {
      (*(code *)PTR_rts_isp_mem_close_000634b0)();
    }
    *(undefined4 *)(puVar1 + 0x11c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x1f0) = 0;
  }
  return 0;
}



