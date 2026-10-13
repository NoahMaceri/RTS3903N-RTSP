/* librtstream — "rtstream" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtstream.h"

// ==== rtstream @ 0001ab3c size=204

void rtstream(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c20);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6468,0x78c,param_1);
    param_2 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8);
    (*(code *)PTR___assert_000637b8)
              (param_1,param_2,0x78c,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6478);
  }
  if (param_2 == (undefined4 *)0x0) {
    *param_1 = 0;
    return;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  iVar1 = param_2[3];
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  param_1[3] = iVar1;
  param_1[4] = param_2[4];
  param_1[5] = (uint)(param_2[5] == 1);
  return;
}



// ==== rtstream_0003e710 @ 0003e710 size=448

undefined4 rtstream_0003e710(int param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int local_18 [2];
  
  local_18[0] = 0;
  if (param_1 == 0) {
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x66c,0xe0,param_2);
    uVar3 = 0xe0;
  }
  else {
    if (param_2 != (undefined *)0x0) goto LAB_0003e7dc;
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x394;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x66c,0xe1,param_2);
    uVar3 = 0xe1;
  }
  (*(code *)PTR___assert_000637b8)
            (param_2,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x330,uVar3,
             PTR_s_snd_device_0004ffec_0x14_0006326c + 0x658);
LAB_0003e7dc:
  puVar2 = (undefined4 *)(*(code *)PTR_rts_av_get_unit_priv_00063344)();
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0xfffffff6;
  }
  else {
    if (puVar2[0x1a] == 0) {
      trap(0x1c00);
    }
    (*(code *)PTR_rts_audio_calc_volume_00063b1c)
              (param_2,*(uint *)(param_2 + 8) / (uint)puVar2[0x1a],puVar2[0x11],puVar2[0x12]);
    uVar3 = (*(code *)PTR_rts_audio_codec_encode_00063a00)(*puVar2,param_2,local_18);
    if (local_18[0] != 0) {
      (*(code *)PTR_rts_av_set_buffer_observer_000639c4)(local_18[0],param_1);
      uVar3 = *(undefined4 *)(param_2 + 0x2c);
      *(undefined4 *)(local_18[0] + 0x28) = *(undefined4 *)(param_2 + 0x28);
      puVar2 = (undefined4 *)*puVar2;
      *(undefined4 *)(local_18[0] + 0x2c) = uVar3;
      puVar1 = PTR_rts_av_push_back_output_buffer_lk_00063a0c;
      *(undefined4 *)(local_18[0] + 0x18) = *(undefined4 *)*puVar2;
      *(undefined4 *)(local_18[0] + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(local_18[0] + 0x20) = *(undefined4 *)(param_2 + 0x20);
      (*(code *)puVar1)(param_1);
      if (local_18[0] != 0) {
        (*(code *)PTR_rts_av_put_buffer_00063548)();
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}



// ==== rtstream_00042af0 @ 00042af0 size=3584

undefined4 rtstream_00042af0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  byte *pbVar7;
  short *psVar8;
  undefined *puVar9;
  undefined4 uVar10;
  char cVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  short sVar15;
  byte *pbVar16;
  int *piVar17;
  int *unaff_s1;
  uint uVar18;
  code *pcVar19;
  int *piVar20;
  int *unaff_s3;
  int unaff_s4;
  undefined *unaff_s5;
  uint uVar21;
  undefined *puVar22;
  short *psVar23;
  undefined1 *puVar24;
  int *local_38 [2];
  int *local_30;
  undefined4 local_2c;
  
  local_38[0] = (int *)0x0;
  if (param_1 != 0) {
    piVar1 = (int *)(*(code *)PTR_rts_av_get_unit_priv_00063344)();
    if (piVar1 != (int *)0x0) {
      unaff_s3 = (int *)piVar1[0x3f];
      unaff_s4 = 0;
      if (unaff_s3 == (int *)0x0) {
        unaff_s3 = (int *)0x5;
      }
      unaff_s5 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0xf78;
      goto LAB_00042bb4;
    }
    return 0xfffffff6;
  }
  piVar17 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38);
  (*(code *)PTR_rts_log_000635ec)
            (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
             PTR_s_snd_device_0004ffec_0x14_0006326c + 0x132c,0x2ea,piVar17);
  uVar10 = 0x2ea;
  puVar9 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0xee0;
  puVar12 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x131c;
  piVar1 = piVar17;
LAB_00042cec:
  do {
    (*(code *)PTR___assert_000637b8)(piVar17,puVar9,uVar10,puVar12);
LAB_00042cf8:
    uVar18 = 0xffffffe1;
LAB_00042c00:
    iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar18);
    if ((iVar2 == 0) && (uVar18 < 5)) {
      iVar2 = (*(code *)PTR_rts_av_get_buffer_source_00063714)(unaff_s1);
      if (iVar2 == 0) {
        uVar3 = 0xffffffe1;
      }
      else {
        uVar3 = (*(code *)PTR_rts_av_get_pipe_flags_00063a8c)(iVar2);
      }
      iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
      uVar21 = 0;
      if (iVar2 == 0) {
        uVar21 = uVar3 & 1;
      }
      piVar17 = piVar1 + uVar18 * 8;
      if (uVar21 != piVar17[3]) {
        (*(code *)(PTR_LAB_00063274 + 0x2630))(piVar17);
        piVar17[3] = uVar21;
      }
      if (piVar17[1] == 0) {
        if (*piVar17 == 0) {
          (*(code *)PTR_rts_log_000635ec)
                    (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + 0x12ec,0x5e,unaff_s5);
        }
        iVar2 = *piVar17;
        if (iVar2 == 0) {
          uVar10 = 0x5e;
          piVar17 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0xf78);
          puVar9 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0xee0;
          puVar12 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x12d4;
          goto LAB_00042cec;
        }
        local_2c = (*(code *)PTR_rts_audio_check_argument_00063330)
                             (*(undefined4 *)(iVar2 + 0xe8),*(undefined4 *)(iVar2 + 0xe0),
                              *(undefined4 *)(iVar2 + 0xe4));
        iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(local_2c);
        if (iVar4 == 0) {
          iVar4 = (*(code *)PTR_rts_audio_fifo_alloc_00063804)
                            (*(undefined4 *)(iVar2 + 0xe0),*(undefined4 *)(iVar2 + 0xe4),0x400);
          piVar17[1] = iVar4;
          if (iVar4 == 0) {
            (*(code *)PTR_rts_log_000635ec)(1,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xfc0);
          }
          else {
            iVar4 = (*(code *)PTR_rts_queue_init_000635dc)();
            piVar17[7] = iVar4;
            if (iVar4 != 0) {
              piVar17[5] = 1;
              iVar4 = *(int *)(iVar2 + 0xfc);
              piVar17[4] = 0;
              piVar17[6] = 0;
              *(int *)(iVar2 + 0xfc) = iVar4 + 1;
              uVar10 = 0;
              goto LAB_00042e24;
            }
            if (piVar17[1] != 0) {
              (*(code *)PTR_rts_audio_fifo_free_00063474)();
            }
            piVar17[1] = 0;
          }
          uVar10 = 0xfffffff5;
        }
        else {
          (*(code *)PTR_rts_log_000635ec)
                    (4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xf84,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + 0x12ec,0x66,local_2c);
          uVar10 = local_2c;
        }
LAB_00042e24:
        iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar10);
        if (iVar2 == 0) goto LAB_00042e6c;
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xfe0,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1304,0x1d4,uVar18,uVar10);
      }
      else {
LAB_00042e6c:
        iVar2 = (*(code *)(PTR_LAB_00063274 + 0x2888))(piVar17);
        pcVar19 = (code *)(PTR_LAB_00063274 + 0x2888);
        if (iVar2 == 0) {
          if (*piVar17 == 0) {
            (*(code *)PTR_rts_log_000635ec)
                      (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                       PTR_s_snd_device_0004ffec_0x14_0006326c + 0x125c,0x136,unaff_s5);
          }
          if (*piVar17 == 0) {
            uVar10 = 0x136;
            piVar17 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0xf78);
            puVar9 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0xee0;
            puVar12 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x123c;
            goto LAB_00042cec;
          }
          iVar2 = (*pcVar19)(piVar17);
          if (iVar2 == 0) {
            iVar2 = *piVar17;
            if (piVar17[5] == 1) {
              piVar17[5] = 3;
              pcVar19 = (code *)(PTR_LAB_00063274 + 0x253c);
              *(int *)(iVar2 + 0x100) = *(int *)(iVar2 + 0x100) + 1;
              (*pcVar19)(iVar2);
            }
            iVar4 = (*(code *)(PTR_LAB_00063274 + 0x2a38))(piVar17);
            if ((iVar4 == 0) &&
               (iVar4 = (*(code *)PTR_rts_queue_empty_00063b60)(piVar17[7]), iVar4 != 0)) {
              if (*(uint *)(iVar2 + 0xf0) == 0) {
                trap(0x1c00);
              }
              uVar18 = (*(code *)PTR_rts_audio_fifo_write_0006363c)
                                 (piVar17[1],*unaff_s1,(uint)unaff_s1[2] / *(uint *)(iVar2 + 0xf0));
              iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar18);
              if (iVar2 != 0) {
                uVar10 = 0x14d;
                puVar9 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x3e0;
                puVar12 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x125c;
                goto LAB_0004315c;
              }
            }
            else {
              iVar2 = piVar17[7];
              uVar10 = (*(code *)PTR_rts_av_get_buffer_0006379c)(unaff_s1);
              (*(code *)PTR_rts_queue_push_back_00063310)(iVar2,uVar10);
            }
          }
        }
        else {
          if (*piVar17 == 0) {
            (*(code *)PTR_rts_log_000635ec)
                      (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                       PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1298,0x15a,unaff_s5);
          }
          if (*piVar17 == 0) {
            uVar10 = 0x15a;
            piVar17 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0xf78);
            puVar9 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0xee0;
            puVar12 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x127c;
            goto LAB_00042cec;
          }
          iVar2 = (*pcVar19)(piVar17);
          if (iVar2 != 0) {
            iVar2 = piVar17[5];
            iVar4 = *piVar17;
            if (iVar2 == 1) {
              piVar17[5] = 2;
              iVar2 = piVar17[5];
            }
            if ((iVar2 == 3) &&
               (iVar2 = (*(code *)PTR_rts_audio_fifo_size_00063470)(piVar17[1]), 0x4800 < iVar2)) {
              (*(code *)PTR_rts_audio_fifo_drain_00063458)(piVar17[1],iVar2 + -0x4000);
            }
            if (*(uint *)(iVar4 + 0xf0) == 0) {
              trap(0x1c00);
            }
            uVar10 = (*(code *)PTR_rts_audio_fifo_write_0006363c)
                               (piVar17[1],*unaff_s1,(uint)unaff_s1[2] / *(uint *)(iVar4 + 0xf0));
            iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar10);
            if (iVar2 != 0) {
              (*(code *)PTR_rts_log_000635ec)
                        (4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x3e0,
                         PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1298,0x174,uVar10);
            }
            if ((piVar17[5] == 2) &&
               (iVar2 = (*(code *)PTR_rts_audio_fifo_size_00063470)(piVar17[1]),
               puVar9 = PTR_LAB_00063274, 0x4000 < iVar2)) {
              iVar2 = *(int *)(iVar4 + 0x100);
              piVar17[5] = 3;
              *(int *)(iVar4 + 0x100) = iVar2 + 1;
              (*(code *)(puVar9 + 0x253c))(iVar4);
            }
          }
        }
      }
    }
    else {
      uVar10 = 0x1c2;
      puVar9 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0xf48;
      puVar12 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1304;
LAB_0004315c:
      (*(code *)PTR_rts_log_000635ec)(4,puVar9,puVar12,uVar10,uVar18);
    }
    while( true ) {
      if (local_38[0] != (int *)0x0) {
        (*(code *)PTR_rts_av_put_buffer_00063548)();
      }
      local_38[0] = (int *)0x0;
      unaff_s4 = unaff_s4 + 1;
LAB_00042bb4:
      puVar9 = PTR_LAB_00063274;
      if ((int)unaff_s3 <= unaff_s4) break;
      (*(code *)PTR_rts_av_pop_input_buffer_lk_000635e0)(param_1,local_38);
      unaff_s1 = local_38[0];
      if (local_38[0] != (int *)0x0) goto code_r0x00042bd8;
    }
    iVar2 = 0;
    puVar12 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x3e0;
    puVar22 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x11f0;
    piVar17 = piVar1;
    do {
      if ((((piVar17[1] != 0) && (piVar17[7] != 0)) &&
          (iVar4 = (*(code *)PTR_rts_queue_empty_00063b60)(), iVar4 == 0)) &&
         ((iVar4 = (*(code *)(puVar9 + 0x2a38))(piVar17), iVar4 == 0 &&
          (puVar5 = (undefined4 *)(*(code *)PTR_rts_queue_pop_0006333c)(piVar17[7]),
          puVar5 != (undefined4 *)0x0)))) {
        if (*(uint *)(*piVar17 + 0xf0) == 0) {
          trap(0x1c00);
        }
        uVar10 = (*(code *)PTR_rts_audio_fifo_write_0006363c)
                           (piVar17[1],*puVar5,(uint)puVar5[2] / *(uint *)(*piVar17 + 0xf0));
        iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar10);
        if (iVar4 != 0) {
          (*(code *)PTR_rts_log_000635ec)(4,puVar12,puVar22,0x1ae,uVar10);
        }
        (*(code *)PTR_rts_av_put_buffer_00063548)(puVar5);
      }
      iVar2 = iVar2 + 1;
      piVar17 = piVar17 + 8;
    } while (iVar2 != 5);
    if (0 < piVar1[0x42]) {
      return 0;
    }
    iVar4 = 0;
    iVar2 = 0;
    piVar17 = piVar1;
    do {
      if (piVar17[1] != 0) {
        iVar6 = (*(code *)PTR_rts_audio_fifo_size_00063470)();
        iVar2 = iVar2 + (uint)(iVar6 != 0);
      }
      iVar4 = iVar4 + 0x20;
      piVar17 = (int *)((int)piVar1 + iVar4);
    } while (iVar4 != 0xa0);
    iVar4 = piVar1[0x3f];
    if (piVar1[0x41] != 0) {
      iVar4 = piVar1[0x40];
    }
    if (iVar2 < iVar4) {
      if (iVar2 != 0) {
        piVar1[0x44] = piVar1[0x44] + 1;
      }
    }
    else {
      piVar1[0x44] = iVar4;
    }
    unaff_s5 = PTR_LAB_00063274;
    if (piVar1[0x44] < iVar4) {
      return 0;
    }
    piVar20 = (int *)0x7fffffff;
    iVar2 = 0;
    unaff_s1 = piVar1;
    piVar17 = piVar20;
    do {
      unaff_s3 = piVar20;
      if ((unaff_s1[1] != 0) &&
         (iVar4 = (*(code *)(unaff_s5 + 0x2908))(unaff_s1),
         puVar9 = PTR_rts_audio_fifo_size_00063470, iVar4 != 0)) {
        unaff_s1[4] = 0;
        unaff_s3 = (int *)(*(code *)puVar9)(unaff_s1[1]);
        if ((unaff_s3 == (int *)0x0) &&
           (iVar4 = (*(code *)(unaff_s5 + 0x2888))(unaff_s1), iVar4 == 0)) {
LAB_000433e4:
          unaff_s3 = (int *)0x400;
        }
        else {
          iVar4 = unaff_s1[6];
          if (iVar4 == 0) {
            iVar4 = (*(code *)(unaff_s5 + 0x2888))(unaff_s1);
            if ((iVar4 != 0) && ((int)unaff_s3 < 0x800)) {
              unaff_s1[6] = 1;
            }
            iVar4 = unaff_s1[6];
          }
          if (iVar4 != 0) {
            if ((int)unaff_s3 < 0x4001) goto LAB_000433e4;
            unaff_s1[6] = 0;
          }
          unaff_s1[4] = 1;
        }
      }
      iVar2 = iVar2 + 1;
      if ((int)unaff_s3 < (int)piVar17) {
        piVar17 = unaff_s3;
      }
      unaff_s1 = unaff_s1 + 8;
    } while (iVar2 != 5);
    if (piVar17 == (int *)0x7fffffff) {
      iVar2 = piVar1[0x40];
LAB_0004335c:
      if ((iVar2 != 0) || (piVar1[0x41] != 1)) goto LAB_00043364;
      iVar2 = piVar1[0x43];
      if (iVar2 == 0) {
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + 0x11bc,0x21d,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1010);
        iVar2 = piVar1[0x43];
      }
      if (iVar2 != 0) {
        puVar5 = (undefined4 *)(*(code *)PTR_rts_audio_new_buffer_00063770)(piVar1 + 0x42,3);
        if (puVar5 != (undefined4 *)0x0) {
          (*(code *)PTR_rts_av_set_buffer_observer_000639c4)(puVar5,piVar1[0x43]);
          puVar24 = (undefined1 *)*puVar5;
          *puVar24 = 0x45;
          puVar24[1] = 0x4e;
          puVar24[2] = 0x44;
          puVar9 = PTR_rts_av_push_back_output_buffer_lk_00063a0c;
          iVar2 = piVar1[0x43];
          puVar5[2] = 3;
          (*(code *)puVar9)(iVar2,puVar5);
          (*(code *)PTR_rts_av_put_buffer_00063548)(puVar5);
          piVar1[0x41] = 0;
        }
LAB_00043364:
        piVar1[0x44] = 0;
        return 0;
      }
      uVar10 = 0x21d;
      piVar17 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1010);
      puVar9 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0xee0;
      puVar12 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x11a0;
      unaff_s4 = 5;
      goto LAB_00042cec;
    }
    if (piVar17 == (int *)0x0) {
      iVar2 = piVar1[0x40];
      goto LAB_0004335c;
    }
    unaff_s1 = (int *)0x400;
    if ((int)piVar17 < 0x401) {
      unaff_s1 = piVar17;
    }
    unaff_s4 = (int)unaff_s1 * piVar1[0x3c];
    if ((unaff_s4 < 1) ||
       (pbVar7 = (byte *)(*(code *)PTR___rts_calloc_00063a28)
                                   (1,unaff_s4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x11d8,
                                    0x2ba), pbVar7 == (byte *)0x0)) goto LAB_00043364;
    unaff_s3 = (int *)(*(code *)PTR_rts_audio_new_buffer_00063770)(piVar1 + 0x42,unaff_s4);
    if (unaff_s3 == (int *)0x0) {
LAB_000438ac:
      (*(code *)PTR_rts_free_000638d4)(pbVar7);
      piVar1[0x44] = 0;
      return 0;
    }
    unaff_s5 = (undefined *)0xffffffff;
    (*(code *)PTR_rts_av_set_buffer_observer_000639c4)(unaff_s3,piVar1[0x43]);
    local_30 = piVar1 + 0x28;
    psVar23 = (short *)*unaff_s3;
    piVar17 = piVar1;
LAB_000435b0:
    puVar9 = PTR_rts_av_push_back_output_buffer_lk_00063a0c;
    if (piVar17 == local_30) {
      iVar2 = piVar1[0x43];
      unaff_s3[2] = unaff_s4;
      (*(code *)puVar9)(iVar2,unaff_s3);
      puVar9 = PTR_rts_av_put_buffer_00063548;
      piVar1[0x41] = 1;
      (*(code *)puVar9)(unaff_s3);
      goto LAB_000438ac;
    }
    if (((piVar17[1] == 0) || (iVar2 = (*(code *)(PTR_LAB_00063274 + 0x2908))(piVar17), iVar2 == 0))
       || (piVar17[4] == 0)) goto LAB_00043878;
    (*(code *)PTR_rts_audio_fifo_read_000633d8)(piVar17[1],pbVar7,unaff_s1);
    iVar6 = piVar1[0x38];
    iVar2 = piVar1[0x39];
    iVar4 = piVar1[0x3d];
    uVar18 = piVar1[0x3e];
    if (iVar6 == 0x10) {
      if (psVar23 == (short *)0x0) {
        piVar17 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5098);
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1134,0x254,piVar17);
        uVar10 = 0x254;
        puVar9 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0xee0;
        puVar12 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1118;
        piVar1 = piVar17;
        goto LAB_00042cec;
      }
      psVar8 = psVar23;
      pbVar16 = pbVar7;
      for (iVar6 = 0; iVar6 < (int)unaff_s1 * iVar2; iVar6 = iVar6 + 1) {
        if (iVar4 == 0) {
          sVar15 = (short)((int)*(short *)pbVar16 >> (uVar18 & 0x1f));
        }
        else {
          sVar15 = (short)((uint)(*(short *)pbVar16 * iVar4) >> 8);
        }
        pbVar16 = pbVar16 + 2;
        *psVar8 = sVar15 + *psVar8;
        psVar8 = psVar8 + 1;
      }
      piVar17 = piVar17 + 8;
      goto LAB_000435b0;
    }
    iVar2 = (int)unaff_s1 * iVar2;
    if (iVar6 == 0x18) {
      if (psVar23 != (short *)0x0) {
        psVar8 = psVar23;
        for (iVar6 = 0; iVar14 = 2, iVar6 < iVar2 * 3; iVar6 = iVar6 + 3) {
          uVar3 = 0;
          do {
            iVar13 = iVar14 + iVar6;
            iVar14 = iVar14 + -1;
            uVar3 = (uint)pbVar7[iVar13] | uVar3 << 8;
          } while (iVar14 != -1);
          iVar14 = uVar3 * iVar4;
          if (iVar4 == 0) {
            iVar14 = (int)(uVar3 << 8) >> (uVar18 & 0x1f);
          }
          iVar13 = 2;
          uVar3 = 0;
          do {
            pbVar16 = (byte *)((int)psVar8 + iVar13);
            iVar13 = iVar13 + -1;
            uVar3 = (uint)*pbVar16 | uVar3 << 8;
          } while (iVar13 != -1);
          iVar14 = uVar3 * 0x100 + iVar14;
          *(char *)psVar8 = (char)((uint)iVar14 >> 8);
          *(char *)((int)psVar8 + 1) = (char)((uint)iVar14 >> 0x10);
          *(char *)(psVar8 + 1) = (char)((uint)iVar14 >> 0x18);
          psVar8 = (short *)((int)psVar8 + 3);
        }
        goto LAB_00043878;
      }
      piVar17 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5098);
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + 0x10fc,0x271,piVar17);
      uVar10 = 0x271;
      puVar9 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0xee0;
      puVar12 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x10e0;
      piVar1 = piVar17;
      goto LAB_00042cec;
    }
    if (iVar6 != 8) {
LAB_00043878:
      piVar17 = piVar17 + 8;
      goto LAB_000435b0;
    }
    psVar8 = psVar23;
    pbVar16 = pbVar7;
    if (psVar23 != (short *)0x0) {
      for (; (int)psVar8 - (int)psVar23 < iVar2; psVar8 = (short *)((int)psVar8 + 1)) {
        if (iVar4 == 0) {
          cVar11 = (char)((int)(uint)*pbVar16 >> (uVar18 & 0x1f));
        }
        else {
          cVar11 = (char)((uint)*pbVar16 * iVar4 >> 8);
        }
        *(char *)psVar8 = cVar11 + (char)*psVar8;
        pbVar16 = pbVar16 + 1;
      }
      piVar17 = piVar17 + 8;
      goto LAB_000435b0;
    }
    piVar17 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5098);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1168,0x239,piVar17);
    uVar10 = 0x239;
    puVar9 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0xee0;
    puVar12 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1150;
    piVar1 = piVar17;
  } while( true );
code_r0x00042bd8:
  iVar2 = (*(code *)PTR_rts_av_get_buffer_source_00063714)(local_38[0]);
  if (iVar2 == 0) goto LAB_00042cf8;
  uVar18 = (*(code *)PTR_rts_av_get_pipe_id_000639d8)(iVar2);
  goto LAB_00042c00;
}



