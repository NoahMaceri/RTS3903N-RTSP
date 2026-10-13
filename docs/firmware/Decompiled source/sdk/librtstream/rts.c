/* librtstream — "rts" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtstream.h"

// ==== rts_isp_get_attr @ 000192d0 size=108

undefined4 rts_isp_get_attr(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  code *in_t9;
  int unaff_gp;
  int in_stack_00000018;
  undefined4 uStack00000050;
  undefined4 uStack00000058;
  undefined4 uStack0000005c;
  undefined4 uStack00000060;
  undefined4 uStack00000064;
  undefined4 uStack00000068;
  undefined4 uStack0000006c;
  undefined4 uStack00000074;
  
  uStack00000050 = *(undefined4 *)(unaff_gp + -0x7b08);
  uStack00000058 = *(undefined4 *)(unaff_gp + -0x79ec);
  uStack0000005c = *(undefined4 *)(unaff_gp + -0x7838);
  uStack00000064 = *(undefined4 *)(unaff_gp + -0x7b18);
  uStack00000060 = *(undefined4 *)(unaff_gp + -0x770c);
  uStack00000068 = *(undefined4 *)(unaff_gp + -0x7b84);
  uStack0000006c = *(undefined4 *)(unaff_gp + -0x7b40);
  uStack00000074 = *(undefined4 *)(unaff_gp + -0x7ed8);
  uVar1 = (*in_t9)();
  iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
  uVar3 = 0;
  if (iVar2 != 0) {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x416c,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x4140,0x1e7);
    uVar3 = uVar1;
  }
  return uVar3;
}



// ==== rts_isp_get_profile @ 0001933c size=48

void rts_isp_get_profile(undefined4 param_1,int param_2)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7c54))
            (param_1,param_2 + -0x416c,*(int *)(unaff_gp + -0x7fd4) + -0x4140,0x1e7);
  return;
}



// ==== rts_isp_start @ 000193c8 size=180

undefined4 rts_isp_start(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_gp;
  int in_stack_00000018;
  undefined4 uStack00000040;
  undefined4 uStack00000044;
  undefined4 uStack00000048;
  undefined4 uStack0000004c;
  undefined4 uStack00000050;
  undefined4 uStack00000054;
  undefined4 uStack00000058;
  undefined4 uStack0000005c;
  undefined4 uStack00000060;
  undefined4 uStack00000064;
  undefined4 uStack00000068;
  undefined4 uStack0000006c;
  undefined4 uStack00000070;
  undefined4 uStack00000078;
  undefined4 uStack0000007c;
  
  uStack00000040 = *(undefined4 *)(unaff_gp + -0x7e44);
  uStack00000044 = *(undefined4 *)(unaff_gp + -0x7da4);
  uStack0000004c = *(undefined4 *)(unaff_gp + -0x7d6c);
  uStack00000050 = *(undefined4 *)(unaff_gp + -0x7998);
  uStack00000058 = *(undefined4 *)(unaff_gp + -0x7b28);
  uStack0000005c = *(undefined4 *)(unaff_gp + -0x7aa0);
  uStack00000064 = *(undefined4 *)(unaff_gp + -0x7ed4);
  uStack00000060 = *(undefined4 *)(unaff_gp + -0x7d38);
  uStack00000068 = *(undefined4 *)(unaff_gp + -0x7cf4);
  uStack0000006c = *(undefined4 *)(unaff_gp + -0x7ee8);
  uStack00000070 = *(undefined4 *)(unaff_gp + -0x7be4);
  uStack00000078 = *(undefined4 *)(unaff_gp + -0x77ac);
  uStack0000007c = *(undefined4 *)(unaff_gp + -0x79a0);
  uStack00000048 = *(undefined4 *)(unaff_gp + -0x777c);
  uStack00000054 = *(undefined4 *)(unaff_gp + -0x7d84);
  uVar1 = (**(code **)(unaff_gp + -0x7c88))();
  iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
  uVar3 = 0;
  if (iVar2 != 0) {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x1aa0,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x1a60,0x8cf);
    uVar3 = uVar1;
  }
  return uVar3;
}



// ==== rts_isp_stop @ 0001947c size=36

void rts_isp_stop(undefined4 param_1,int param_2,int param_3)

{
  code *in_t9;
  
  (*in_t9)(param_1,param_2 + -0x1aa0,param_3 + -0x1a60);
  return;
}



// ==== rts_isp_check_ready @ 00019508 size=96

undefined4 rts_isp_check_ready(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_t8;
  int unaff_gp;
  int in_stack_00000018;
  int iStack00000024;
  undefined4 uStack00000034;
  undefined4 uStack00000040;
  undefined4 uStack00000044;
  undefined4 uStack0000004c;
  undefined4 uStack00000050;
  undefined4 uStack00000058;
  undefined4 uStack0000005c;
  undefined4 uStack00000068;
  undefined4 uStack0000006c;
  undefined4 uStack00000070;
  
  iStack00000024 = in_t8 + 0x736f;
  uStack00000034 = 1;
  uStack00000040 = *(undefined4 *)(unaff_gp + -0x7974);
  uStack00000044 = *(undefined4 *)(unaff_gp + -0x7738);
  uStack0000004c = *(undefined4 *)(unaff_gp + -0x7728);
  uStack00000050 = *(undefined4 *)(unaff_gp + -0x7da8);
  uStack00000058 = *(undefined4 *)(unaff_gp + -0x7e48);
  uStack0000005c = *(undefined4 *)(unaff_gp + -0x77a0);
  uStack00000068 = *(undefined4 *)(unaff_gp + -0x7b70);
  uStack0000006c = *(undefined4 *)(unaff_gp + -0x7f0c);
  uStack00000070 = *(undefined4 *)(unaff_gp + -0x7a2c);
  uVar1 = (**(code **)(unaff_gp + -0x7c88))();
  iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x1448,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x1410,0x203);
  }
  return uVar1;
}



// ==== rts_isp_run @ 00019568 size=88

void rts_isp_run(void)

{
  int iVar1;
  int in_stack_00000018;
  
  iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))();
  if (iVar1 != 0) {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x1448,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x1410,0x203);
  }
  return;
}



// ==== rts_isp_set_profile @ 000196d4 size=8

void rts_isp_set_profile(void)

{
  return;
}



// ==== rts_isp_query_ability @ 00019890 size=152

undefined4 rts_isp_query_ability(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  code *in_t9;
  int unaff_gp;
  int in_stack_00000018;
  undefined4 uStack00000058;
  undefined4 uStack0000005c;
  undefined4 uStack00000060;
  undefined4 uStack00000064;
  undefined4 uStack00000068;
  undefined4 uStack0000006c;
  undefined4 uStack00000074;
  undefined4 uStack00000080;
  
  uStack00000058 = *(undefined4 *)(unaff_gp + -0x7794);
  uStack0000005c = *(undefined4 *)(unaff_gp + -0x7a04);
  uStack00000064 = *(undefined4 *)(unaff_gp + -0x78ac);
  uStack00000060 = *(undefined4 *)(unaff_gp + -0x7f50);
  uStack00000068 = *(undefined4 *)(unaff_gp + -0x7e9c);
  uStack0000006c = *(undefined4 *)(unaff_gp + -0x7c24);
  uStack00000074 = *(undefined4 *)(unaff_gp + -0x771c);
  uStack00000080 = *(undefined4 *)(unaff_gp + -0x76f0);
  uVar1 = (*in_t9)();
  iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
  uVar3 = 0;
  if (iVar2 != 0) {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + 0x460,
               *(int *)(in_stack_00000018 + -0x7fd4) + 0x4a4,0x2c7);
    uVar3 = uVar1;
  }
  return uVar3;
}



// ==== rts_isp_init @ 00019a44 size=16

void rts_isp_init(void)

{
  return;
}



// ==== rts_isp_cleanup @ 00019b50 size=8

void rts_isp_cleanup(void)

{
  return;
}



// ==== rts_isp_set_attr @ 00019bdc size=112

undefined4 rts_isp_set_attr(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  code *in_t9;
  int unaff_gp;
  int in_stack_00000018;
  undefined4 uStack00000068;
  undefined4 uStack0000006c;
  undefined4 uStack00000080;
  
  uStack00000068 = *(undefined4 *)(unaff_gp + -0x7808);
  uStack0000006c = *(undefined4 *)(unaff_gp + -0x78b0);
  uStack00000080 = *(undefined4 *)(unaff_gp + -0x76f0);
  uVar1 = (*in_t9)();
  iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
  uVar3 = 0;
  if (iVar2 != 0) {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + 0xc10,
               *(int *)(in_stack_00000018 + -0x7fd4) + 0xc40,0x143);
    uVar3 = uVar1;
  }
  return uVar3;
}



// ==== rts_av_get_isp_daynight_statis @ 00019dd4 size=172

undefined4 rts_av_get_isp_daynight_statis(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_t8;
  code *in_t9;
  int unaff_gp;
  int in_stack_00000018;
  undefined4 uStack00000028;
  int iStack00000050;
  int iStack00000058;
  int iStack0000005c;
  int iStack00000068;
  int iStack0000006c;
  int iStack0000007c;
  undefined4 uStack00000080;
  
  iStack00000050 = in_t8 + 0x2168;
  iStack00000058 = *(int *)(unaff_gp + -0x7fcc) + 0x298c;
  iStack0000005c = *(int *)(unaff_gp + -0x7fcc) + 0x2af0;
  iStack00000068 = *(int *)(unaff_gp + -0x7fcc) + 0x2170;
  iStack0000006c = *(int *)(unaff_gp + -0x7fcc) + 0x2278;
  iStack0000007c = *(int *)(unaff_gp + -0x7fcc) + 10000;
  uStack00000080 = *(undefined4 *)(unaff_gp + -0x76f0);
  uStack00000028 = 1;
  uVar1 = (*in_t9)();
  iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
  uVar3 = 0;
  if (iVar2 != 0) {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + 0x101c,
               *(int *)(in_stack_00000018 + -0x7fd4) + 0x13fc,0x389);
    uVar3 = uVar1;
  }
  return uVar3;
}



// ==== rts_av_to_af_t @ 0001a034 size=12

void rts_av_to_af_t(void)

{
  int in_t9;
  
                    /* WARNING: Could not recover jumptable at 0x0001a038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(in_t9 + -0x6138))();
  return;
}



// ==== rts_av_query_isp_af @ 0001a850 size=8

undefined4 rts_av_query_isp_af(void)

{
  return 0xfffffff5;
}



// ==== rts_av_release_isp_af @ 0001a928 size=44

undefined4 rts_av_release_isp_af(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_s0;
  int in_stack_00000018;
  
  iVar2 = unaff_s0;
  (**(code **)(in_stack_00000018 + -0x7a88))();
  uVar1 = 0;
  if ((*(int *)(iVar2 + 0x1c) != 0) && (uVar1 = 0, *(int *)(unaff_s0 + 0x128) != 0)) {
    if (*(int *)(unaff_s0 + 0x18) != 0) {
      *(int *)(*(int *)(unaff_s0 + 0x124) + 8) = *(int *)(*(int *)(unaff_s0 + 0x124) + 8) + -1;
    }
    if (*(code **)(unaff_s0 + 0x34) == (code *)0x0) {
      uVar1 = 0;
      *(undefined4 *)(unaff_s0 + 0x128) = 0;
    }
    else {
      uVar1 = (**(code **)(unaff_s0 + 0x34))();
      *(undefined4 *)(unaff_s0 + 0x128) = 0;
    }
  }
  return uVar1;
}



// ==== rts_av_get_isp_af @ 0001a954 size=100

undefined4 rts_av_get_isp_af(void)

{
  undefined4 uVar1;
  int unaff_s0;
  int in_t8;
  
  uVar1 = 0;
  if ((in_t8 != 0) && (uVar1 = 0, *(int *)(unaff_s0 + 0x128) != 0)) {
    if (*(int *)(unaff_s0 + 0x18) != 0) {
      *(int *)(*(int *)(unaff_s0 + 0x124) + 8) = *(int *)(*(int *)(unaff_s0 + 0x124) + 8) + -1;
    }
    if (*(code **)(unaff_s0 + 0x34) == (code *)0x0) {
      uVar1 = 0;
      *(undefined4 *)(unaff_s0 + 0x128) = 0;
    }
    else {
      uVar1 = (**(code **)(unaff_s0 + 0x34))();
      *(undefined4 *)(unaff_s0 + 0x128) = 0;
    }
  }
  return uVar1;
}



// ==== rts_av_set_isp_af @ 0001a9dc size=68

undefined4 rts_av_set_isp_af(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_s0;
  int *piVar3;
  uint uVar4;
  int unaff_gp;
  int *piStack00000010;
  int in_stack_00000018;
  
  piVar3 = (int *)(unaff_s0 + -0x6c30);
  piStack00000010 = piVar3;
  (**(code **)(unaff_gp + -0x7c54))
            (4,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x5f0c,0x300);
  iVar2 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x6cc8;
  (**(code **)(in_stack_00000018 + -0x7a88))
            (piVar3,iVar2,0x300,*(int *)(in_stack_00000018 + -0x7fd4) + -0x5f18);
  uVar1 = 0xffffffef;
  if ((*piVar3 != 0) && (uVar4 = piVar3[3], uVar4 != 0)) {
    uVar1 = 0xffffffef;
    if ((int)uVar4 < 1) {
      uVar1 = 0;
    }
    else if (*(uint *)(iVar2 + 8) < uVar4) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



// ==== rts_av_refresh_isp_af_statis @ 0001aa64 size=88

undefined4 rts_av_refresh_isp_af_statis(int *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7a88))();
  uVar1 = 0xffffffef;
  if ((*param_1 != 0) && (uVar2 = param_1[3], uVar2 != 0)) {
    uVar1 = 0xffffffef;
    if ((int)uVar2 < 1) {
      uVar1 = 0;
    }
    else if (*(uint *)(param_2 + 8) < uVar2) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



// ==== rts_av_register_unit @ 0001ad6c size=696

undefined4 rts_av_register_unit(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  
  puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (param_1 == (int *)0x0) {
    piVar6 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c0c);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5d10,0xc0,piVar6);
    uVar5 = 0xc0;
    param_1 = piVar6;
  }
  else {
    if (param_1[1] == 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5d10,0xc1,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c08);
    }
    if (param_1[1] != 0) goto LAB_0001ae40;
    uVar5 = 0xc1;
    piVar6 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c08);
  }
  (*(code *)PTR___assert_000637b8)
            (piVar6,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,uVar5,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5d28);
LAB_0001ae40:
  uVar5 = 0xffffffcb;
  if ((((param_1[8] != 0) && (param_1[9] != 0)) && (param_1[0xf] != 0)) &&
     (((param_1[0x12] != 0 && (param_1[0x13] != 0)) && (uVar5 = 0xffffffea, *param_1 - 1U < 3)))) {
    uVar5 = 0;
  }
  iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar5);
  puVar1 = PTR_DAT_0006325c;
  if (iVar3 == 0) {
    if (*(int *)(PTR_DAT_0006325c + 0x3c08) == 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6be8,puVar2 + -0x5d10,0xca);
      uVar5 = 0xffffffe1;
    }
    else {
      (*(code *)PTR_rts_queue_lock_00063304)();
      iVar3 = (*(code *)(PTR_LAB_00063268 + -0x5f2c))(param_1[1]);
      if (iVar3 == 0) {
        iVar3 = (*(code *)PTR___rts_calloc_00063a28)(1,100,puVar2 + -0x5d10,0xd9);
        if (iVar3 == 0) {
          uVar5 = 0xfffffff5;
        }
        else {
          (*(code *)PTR_memcpy_00063908)(iVar3,param_1,100);
          uVar5 = (*(code *)PTR_rts_queue_add_000635d4)(*(undefined4 *)(puVar1 + 0x3c08),iVar3);
          iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar5);
          if (iVar4 != 0) {
            (*(code *)PTR_rts_free_000638d4)(iVar3);
          }
        }
      }
      else {
        uVar7 = param_1[1];
        uVar5 = 0xfffffff3;
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6bbc,puVar2 + -0x5d10,0xd4,
                   uVar7 & 0xff,uVar7 >> 8 & 0xff,uVar7 >> 0x10 & 0xff,uVar7 >> 0x18);
      }
      (*(code *)PTR_rts_queue_unlock_000634c4)(*(undefined4 *)(puVar1 + 0x3c08));
    }
  }
  else {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c00,puVar2 + -0x5d10,0xc5);
  }
  return uVar5;
}



// ==== rts_av_unregister_unit @ 0001b024 size=160

undefined4 rts_av_unregister_unit(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0006325c;
  (*(code *)PTR_rts_queue_lock_00063304)(*(undefined4 *)(PTR_DAT_0006325c + 0x3c08));
  iVar2 = (*(code *)(PTR_LAB_00063268 + -0x5f2c))(param_1);
  if (iVar2 != 0) {
    (*(code *)PTR_rts_queue_rm_00063970)(*(undefined4 *)(puVar1 + 0x3c08),iVar2);
    (*(code *)PTR_rts_free_000638d4)(iVar2);
  }
  (*(code *)PTR_rts_queue_unlock_000634c4)(*(undefined4 *)(puVar1 + 0x3c08));
  return 0;
}



// ==== rts_av_get_unit_id @ 0001b0c4 size=124

undefined4 rts_av_get_unit_id(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5dd4,0x222,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x222,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5de8);
  }
  return *(undefined4 *)(param_1 + 4);
}



// ==== rts_av_get_isp_ctrl @ 0001b60c size=152

undefined4 rts_av_get_isp_ctrl(undefined *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_00063268;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6090,0x388,param_1);
    puVar1 = PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x388,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x60a0);
  }
  *(undefined4 *)(param_1 + 0x120) = 1;
  (*(code *)(puVar1 + -0x4b44))();
  return 0;
}



// ==== rts_av_set_isp_ctrl @ 0001b724 size=604

undefined4 rts_av_set_isp_ctrl(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar4;
  undefined4 uVar5;
  int unaff_s3;
  uint uVar6;
  code *in_t9;
  code *pcVar7;
  undefined8 uVar8;
  int in_stack_00000030;
  
  (*in_t9)(unaff_s3 + -0x6080);
  if (unaff_s1 != 0) {
    (**(code **)(in_stack_00000030 + -0x79f4))();
  }
  (**(code **)(in_stack_00000030 + -0x77e8))(unaff_s3 + -0x6080);
  iVar1 = 0;
  if (*(int *)(unaff_s0 + 0x68) == 0) {
LAB_0001b760:
    pcVar7 = *(code **)(unaff_s0 + 0x30);
  }
  else {
    while (*(int *)(unaff_s0 + 0x68) != 0) {
      iVar2 = (**(code **)(in_stack_00000030 + -0x77bc))();
      if (iVar2 <= iVar1) goto LAB_0001b760;
      uVar4 = (**(code **)(in_stack_00000030 + -0x7778))(*(undefined4 *)(unaff_s0 + 0x68),iVar1);
      (**(code **)(in_stack_00000030 + -0x7a14))(uVar4);
      iVar1 = iVar1 + 1;
    }
    pcVar7 = *(code **)(unaff_s0 + 0x30);
  }
  uVar4 = 0xffffffcb;
  if (pcVar7 != (code *)0x0) {
    uVar4 = (*pcVar7)();
  }
  iVar1 = (**(code **)(in_stack_00000030 + -0x7ec0))(uVar4);
  if (iVar1 != 0) {
    *(undefined4 *)(unaff_s0 + 0x74) = 1;
  }
  iVar1 = 0;
  if (*(int *)(unaff_s0 + 100) == 0) {
LAB_0001b7fc:
    pcVar7 = *(code **)(in_stack_00000030 + -0x7ec0);
  }
  else {
    while (pcVar7 = *(code **)(in_stack_00000030 + -0x7ec0), *(int *)(unaff_s0 + 100) != 0) {
      iVar2 = (**(code **)(in_stack_00000030 + -0x77bc))();
      if (iVar2 <= iVar1) goto LAB_0001b7fc;
      uVar3 = (**(code **)(in_stack_00000030 + -0x7778))(*(undefined4 *)(unaff_s0 + 100),iVar1);
      (**(code **)(in_stack_00000030 + -0x7a14))(uVar3);
      iVar1 = iVar1 + 1;
    }
  }
  iVar1 = (*pcVar7)(uVar4);
  pcVar7 = (code *)(*(int *)(in_stack_00000030 + -0x7fd8) + -0x4ec0);
  if (iVar1 == 0) {
    uVar8 = (**(code **)(in_stack_00000030 + -0x7ce4))();
    iVar1 = *(int *)(unaff_s0 + 0x134);
    uVar6 = (uint)uVar8 - *(int *)(unaff_s0 + 0x130);
    uVar3 = (*pcVar7)();
    uVar5 = *(undefined4 *)(unaff_s0 + 0x138);
    (**(code **)(in_stack_00000030 + -0x7748))
              (uVar6,((int)((ulonglong)uVar8 >> 0x20) - iVar1) - (uint)((uint)uVar8 < uVar6),1000000
               ,0);
    (**(code **)(in_stack_00000030 + -0x7c54))
              (1,*(int *)(in_stack_00000030 + -0x7fd4) + -0x6b1c,uVar3,uVar5);
  }
  else {
    (*pcVar7)();
    (**(code **)(in_stack_00000030 + -0x7c54))
              (4,*(int *)(in_stack_00000030 + -0x7fd4) + -0x6b3c,unaff_s3 + -0x6080,0x410);
  }
  return uVar4;
}



// ==== rts_av_get_unit_type @ 0001b980 size=124

undefined4 rts_av_get_unit_type(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5e00,0x229,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x229,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5e18);
  }
  return *param_1;
}



// ==== rts_av_get_input_limit @ 0001b9fc size=144

undefined4 rts_av_get_input_limit(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5e30,0x230,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x230,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5e48);
  }
  if (*(int *)(param_1 + 100) != 0) {
    return *(undefined4 *)(param_1 + 0x6c);
  }
  return 0;
}



// ==== rts_av_set_input_limit @ 0001ba8c size=132

void rts_av_set_input_limit(undefined *param_1,undefined *param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5e60,0x23a,param_1);
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8;
    (*(code *)PTR___assert_000637b8)
              (param_1,param_2,0x23a,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5e78);
  }
  if (*(int *)(param_1 + 100) == 0) {
    param_2 = (undefined *)0x0;
  }
  *(undefined **)(param_1 + 0x6c) = param_2;
  return;
}



// ==== rts_av_check_ready @ 0001bb10 size=20

undefined4 rts_av_check_ready(undefined *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  puVar2 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5e8c,0x246);
    (*(code *)PTR___assert_000637b8)
              (puVar2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x246,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5ea0);
  }
  *(int *)(puVar2 + 0x138) = *(int *)(puVar2 + 0x138) + 1;
  if ((*(int *)(puVar2 + 0x74) != 0) && (*(int *)(param_1 + 0xd4) != 0)) {
    if (2 < *(int *)(param_1 + 0x88)) {
      return 0xffffffb6;
    }
    if (*(code **)(param_1 + 0x38) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001bbc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 0x38))();
      return uVar1;
    }
  }
  return 0xffffffef;
}



// ==== rts_av_get_isp_fov_mode @ 0001bb24 size=184

undefined4 rts_av_get_isp_fov_mode(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_t8;
  int unaff_gp;
  
  iVar2 = *(int *)(unaff_gp + -0x7fd4) + -0x6c38;
  (**(code **)(unaff_gp + -0x7c54))
            (4,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x5e8c,0x246,
             iVar2);
  (**(code **)(unaff_gp + -0x7a88))
            (iVar2,*(int *)(unaff_gp + -0x7fd4) + -0x6cc8,0x246,
             *(int *)(unaff_gp + -0x7fd4) + -0x5ea0);
  *(int *)(iVar2 + 0x138) = *(int *)(iVar2 + 0x138) + 1;
  if ((*(int *)(iVar2 + 0x74) != 0) && (*(int *)(in_t8 + 0xd4) != 0)) {
    if (2 < *(int *)(in_t8 + 0x88)) {
      return 0xffffffb6;
    }
    if (*(code **)(in_t8 + 0x38) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001bbc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(in_t8 + 0x38))();
      return uVar1;
    }
  }
  return 0xffffffef;
}



// ==== rts_av_get_unit_attr @ 0001bbdc size=4

undefined4 rts_av_get_unit_attr(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0xfffffff6;
  }
  if (*(code **)(param_1 + 0x44) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001bbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x44))();
    return uVar1;
  }
  return 0xffffffcb;
}



// ==== rts_av_set_isp_fov_mode @ 0001bbe0 size=32

undefined4 rts_av_set_isp_fov_mode(int param_1)

{
  undefined4 uVar1;
  
  if (*(code **)(param_1 + 0x44) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001bbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x44))();
    return uVar1;
  }
  return 0xffffffcb;
}



// ==== rts_av_set_unit_attr @ 0001bc08 size=148

undefined4 rts_av_set_unit_attr(undefined *param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_1 == (undefined *)0x0) {
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f9c,0x437,puVar2);
    uVar1 = 0x437;
    puVar3 = param_1;
  }
  else {
    puVar3 = param_1;
    if (param_2 != 0) goto LAB_0001bcc4;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f9c,0x438,puVar2);
    uVar1 = 0x438;
    puVar3 = param_1;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,uVar1,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5fb4);
  param_1 = puVar2;
LAB_0001bcc4:
  if (*(int *)(param_1 + 0x74) == 0) {
    if (*(code **)(puVar3 + 0x40) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001bce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(puVar3 + 0x40))();
      return uVar1;
    }
    uVar1 = 0xffffffcb;
  }
  else {
    uVar1 = 0xffffffb6;
  }
  return uVar1;
}



// ==== rts_av_set_isp_dynamic_fps @ 0001bc9c size=104

undefined4 rts_av_set_isp_dynamic_fps(void)

{
  undefined4 uVar1;
  int unaff_s0;
  int in_t8;
  int in_stack_00000018;
  
  (**(code **)(in_stack_00000018 + -0x7a88))();
  if (*(int *)(unaff_s0 + 0x74) == 0) {
    if (*(code **)(in_t8 + 0x40) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001bce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(in_t8 + 0x40))();
      return uVar1;
    }
    uVar1 = 0xffffffcb;
  }
  else {
    uVar1 = 0xffffffb6;
  }
  return uVar1;
}



// ==== rts_av_get_unit_profile @ 0001bd04 size=20

undefined4 rts_av_get_unit_profile(undefined *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_s1;
  
  uVar2 = 0x485;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    param_2 = unaff_s1;
  }
  else {
    if (param_2 != 0) goto LAB_0001bd6c;
    uVar2 = 0x486;
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac8;
  }
  (*(code *)PTR___assert_000637b8)
            (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,uVar2,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5fcc);
LAB_0001bd6c:
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
    (**(code **)(param_1 + 0x48))();
    uVar2 = rts_av_query_isp_ability();
    return uVar2;
  }
  uVar2 = 0xffffffcb;
  iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(0xffffffcb);
  if (iVar1 == 0) {
    uVar2 = (*(code *)(PTR_LAB_00063268 + -0x5fa0))(param_2);
    iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ==== rts_av_get_isp_dynamic_fps @ 0001bd18 size=120

undefined4 rts_av_get_isp_dynamic_fps(undefined *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_s1;
  
  uVar2 = 0x485;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    param_2 = unaff_s1;
  }
  else {
    if (param_2 != 0) goto LAB_0001bd6c;
    uVar2 = 0x486;
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac8;
  }
  (*(code *)PTR___assert_000637b8)
            (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,uVar2,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5fcc);
LAB_0001bd6c:
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
    (**(code **)(param_1 + 0x48))();
    uVar2 = rts_av_query_isp_ability();
    return uVar2;
  }
  uVar2 = 0xffffffcb;
  iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(0xffffffcb);
  if (iVar1 == 0) {
    uVar2 = (*(code *)(PTR_LAB_00063268 + -0x5fa0))(param_2);
    iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ==== rts_av_query_isp_ability @ 0001bd90 size=84

undefined4 rts_av_query_isp_ability(void)

{
  int iVar1;
  undefined4 unaff_s0;
  int unaff_gp;
  int in_stack_00000010;
  
  iVar1 = (**(code **)(unaff_gp + -0x7ec0))();
  if (iVar1 == 0) {
    unaff_s0 = (*(code *)(*(int *)(in_stack_00000010 + -0x7fd8) + -0x5fa0))();
    iVar1 = (**(code **)(in_stack_00000010 + -0x7ec0))(unaff_s0);
    if (iVar1 == 0) {
      unaff_s0 = 0;
    }
  }
  return unaff_s0;
}



// ==== rts_av_get_unit_input_profile @ 0001bde4 size=328

undefined4 rts_av_get_unit_input_profile(undefined *param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int unaff_s1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5fec,0x496,param_1);
    uVar2 = 0x496;
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8;
    puVar3 = param_1;
    param_2 = unaff_s1;
  }
  else {
    puVar3 = param_1;
    if (param_2 != 0) goto LAB_0001bea8;
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac8;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5fec,0x497,param_1);
    uVar2 = 0x497;
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8;
    puVar3 = param_1;
  }
  while( true ) {
    (*(code *)PTR___assert_000637b8)
              (param_1,puVar1,uVar2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x600c);
LAB_0001bea8:
    if (*(int *)(param_1 + 100) == 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5fec,0x498,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac0);
    }
    if (*(int *)(puVar3 + 100) != 0) break;
    uVar2 = 0x498;
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac0;
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8;
  }
  (*(code *)PTR_memcpy_00063908)(param_2,puVar3 + 0xe4,0x14);
  return 0;
}



// ==== rts_av_pop_input_buffer_lk @ 0001bf2c size=56

undefined4 rts_av_pop_input_buffer_lk(undefined *param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x614c,0x603,param_1);
    param_2 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8);
    (*(code *)PTR___assert_000637b8)
              (param_1,param_2,0x603,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6168);
  }
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (param_2 == (int *)0x0) {
    uVar3 = 0xfffffff6;
  }
  else {
    (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6180);
    iVar2 = (*(code *)PTR_rts_queue_count_00063a84)(*(undefined4 *)(param_1 + 100));
    for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
      iVar6 = (iVar5 + *(int *)(param_1 + 0x70)) % iVar2;
      if (iVar2 == 0) {
        trap(0x1c00);
      }
      uVar3 = (*(code *)PTR_rts_queue_enumerate_00063ac8)(*(undefined4 *)(param_1 + 100),iVar6);
      iVar4 = (*(code *)PTR_rts_av_pipe_poll_00063a48)(uVar3);
      if (iVar4 == 0) {
        iVar4 = (*(code *)PTR_rts_av_pipe_pop_00063934)(uVar3);
        if (iVar4 != 0) {
          (*(code *)(PTR_LAB_00063268 + -0x5ab4))(param_1,param_1 + 0x8c,param_1 + 0xa4,iVar4);
          if (iVar2 == 0) {
            trap(0x1c00);
          }
          *(int *)(param_1 + 0x70) = (iVar6 + 1) % iVar2;
          uVar3 = 0;
          *param_2 = iVar4;
          goto LAB_0001c060;
        }
      }
    }
    uVar3 = 0xffffffee;
LAB_0001c060:
    (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x6180);
  }
  return uVar3;
}



// ==== rts_av_release_isp_ability @ 0001bf64 size=52

undefined4 rts_av_release_isp_ability(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_gp;
  int iVar9;
  int iStack00000010;
  int in_stack_00000018;
  
  iVar5 = *(int *)(unaff_gp + -0x7fd4);
  iVar6 = iVar5 + -0x6c38;
  iStack00000010 = iVar6;
  (**(code **)(unaff_gp + -0x7c54))
            (4,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x614c,0x603);
  piVar4 = (int *)(*(int *)(in_stack_00000018 + -0x7fd4) + -0x6cc8);
  (**(code **)(in_stack_00000018 + -0x7a88))
            (iVar6,piVar4,0x603,*(int *)(in_stack_00000018 + -0x7fd4) + -0x6168);
  if (piVar4 == (int *)0x0) {
    uVar2 = 0xfffffff6;
  }
  else {
    iVar8 = *(int *)(in_stack_00000018 + -0x7fd4);
    (**(code **)(in_stack_00000018 + -0x77e8))(iVar8 + -0x6180);
    iVar1 = (**(code **)(in_stack_00000018 + -0x77bc))(*(undefined4 *)(iVar5 + -0x6bd4));
    for (iVar7 = 0; iVar7 < iVar1; iVar7 = iVar7 + 1) {
      iVar9 = (iVar7 + *(int *)(iVar5 + -0x6bc8)) % iVar1;
      if (iVar1 == 0) {
        trap(0x1c00);
      }
      uVar2 = (**(code **)(in_stack_00000018 + -0x7778))(*(undefined4 *)(iVar5 + -0x6bd4),iVar9);
      iVar3 = (**(code **)(in_stack_00000018 + -0x77f8))(uVar2);
      if (iVar3 == 0) {
        iVar3 = (**(code **)(in_stack_00000018 + -0x790c))(uVar2);
        if (iVar3 != 0) {
          (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + -0x5ab4))
                    (iVar6,iVar5 + -0x6bac,iVar5 + -0x6b94,iVar3);
          if (iVar1 == 0) {
            trap(0x1c00);
          }
          *(int *)(iVar5 + -0x6bc8) = (iVar9 + 1) % iVar1;
          uVar2 = 0;
          *piVar4 = iVar3;
          goto LAB_0001c060;
        }
      }
    }
    uVar2 = 0xffffffee;
LAB_0001c060:
    (**(code **)(in_stack_00000018 + -0x7afc))(iVar8 + -0x6180);
  }
  return uVar2;
}



// ==== rts_av_get_isp_snr_crop @ 0001bf90 size=144

undefined4 rts_av_get_isp_snr_crop(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int unaff_s0;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_stack_00000018;
  
  piVar4 = (int *)(*(int *)(in_stack_00000018 + -0x7fd4) + -0x6cc8);
  (**(code **)(in_stack_00000018 + -0x7a88))();
  if (piVar4 == (int *)0x0) {
    uVar2 = 0xfffffff6;
  }
  else {
    iVar6 = *(int *)(in_stack_00000018 + -0x7fd4);
    (**(code **)(in_stack_00000018 + -0x77e8))(iVar6 + -0x6180);
    iVar1 = (**(code **)(in_stack_00000018 + -0x77bc))(*(undefined4 *)(unaff_s0 + 100));
    for (iVar5 = 0; iVar5 < iVar1; iVar5 = iVar5 + 1) {
      iVar7 = (iVar5 + *(int *)(unaff_s0 + 0x70)) % iVar1;
      if (iVar1 == 0) {
        trap(0x1c00);
      }
      uVar2 = (**(code **)(in_stack_00000018 + -0x7778))(*(undefined4 *)(unaff_s0 + 100),iVar7);
      iVar3 = (**(code **)(in_stack_00000018 + -0x77f8))(uVar2);
      if (iVar3 == 0) {
        iVar3 = (**(code **)(in_stack_00000018 + -0x790c))(uVar2);
        if (iVar3 != 0) {
          (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + -0x5ab4))();
          if (iVar1 == 0) {
            trap(0x1c00);
          }
          *(int *)(unaff_s0 + 0x70) = (iVar7 + 1) % iVar1;
          uVar2 = 0;
          *piVar4 = iVar3;
          goto LAB_0001c060;
        }
      }
    }
    uVar2 = 0xffffffee;
LAB_0001c060:
    (**(code **)(in_stack_00000018 + -0x7afc))(iVar6 + -0x6180);
  }
  return uVar2;
}



// ==== rts_av_set_isp_snr_crop @ 0001c020 size=192

undefined4 rts_av_set_isp_snr_crop(void)

{
  undefined4 in_v0;
  int iVar1;
  int unaff_s0;
  undefined4 uVar2;
  int unaff_s1;
  int unaff_s2;
  int *unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int in_stack_00000018;
  
  while( true ) {
    iVar1 = (**(code **)(in_stack_00000018 + -0x77f8))(in_v0);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(in_stack_00000018 + -0x790c))(in_v0);
      if (iVar1 != 0) {
        (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + -0x5ab4))();
        if (unaff_s1 == 0) {
          trap(0x1c00);
        }
        *(int *)(unaff_s0 + 0x70) = (unaff_s5 + 1) % unaff_s1;
        uVar2 = 0;
        *unaff_s4 = iVar1;
        goto LAB_0001c060;
      }
    }
    unaff_s2 = unaff_s2 + 1;
    if (unaff_s1 <= unaff_s2) break;
    unaff_s5 = (unaff_s2 + *(int *)(unaff_s0 + 0x70)) % unaff_s1;
    if (unaff_s1 == 0) {
      trap(0x1c00);
    }
    in_v0 = (**(code **)(in_stack_00000018 + -0x7778))(*(undefined4 *)(unaff_s0 + 100),unaff_s5);
  }
  uVar2 = 0xffffffee;
LAB_0001c060:
  (**(code **)(in_stack_00000018 + -0x7afc))(unaff_s6 + -0x6180);
  return uVar2;
}



// ==== rts_av_push_back_output_buffer_lk @ 0001c0e8 size=332

undefined4 rts_av_push_back_output_buffer_lk(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6220,0x60d,param_1);
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8;
    (*(code *)PTR___assert_000637b8)
              (param_1,param_2,0x60d,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6244);
  }
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (param_2 == (undefined *)0x0) {
    uVar2 = 0xfffffff6;
  }
  else {
    (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6264);
    (*(code *)PTR_rts_av_get_buffer_0006379c)(param_2);
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    (**(code **)(param_1 + 0x48))(param_1,&local_30);
    iVar4 = 0;
    (*(code *)PTR_rts_av_set_buffer_profile_00063354)(param_2,&local_30);
    (*(code *)(PTR_LAB_00063268 + -0x5ab4))(param_1,param_1 + 0xb0,param_1 + 200,param_2);
    (*(code *)PTR_rts_get_monotonic_raw_time_0006355c)();
    (*(code *)PTR_rts_av_set_buffer_ts_00063850)(param_2);
    if (*(int *)(param_1 + 0x68) != 0) {
      for (; (*(int *)(param_1 + 0x68) != 0 &&
             (iVar3 = (*(code *)PTR_rts_queue_count_00063a84)(), iVar4 < iVar3)); iVar4 = iVar4 + 1)
      {
        uVar2 = (*(code *)PTR_rts_queue_enumerate_00063ac8)(*(undefined4 *)(param_1 + 0x68),iVar4);
        (*(code *)PTR_rts_av_pipe_push_back_0006351c)(uVar2,param_2);
      }
    }
    (*(code *)PTR_rts_av_put_buffer_00063548)(param_2);
    (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x6264);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== rts_av_get_supported_snr_name @ 0001c234 size=28

undefined4 rts_av_get_supported_snr_name(void)

{
  int unaff_s3;
  int in_stack_00000018;
  
  (**(code **)(in_stack_00000018 + -0x7afc))(unaff_s3 + -0x6264);
  return 0;
}



// ==== rts_av_get_supported_modules @ 0001c2ac size=24

void rts_av_get_supported_modules(void)

{
  return;
}



// ==== rts_av_exec_cmd @ 0001c2c4 size=44

undefined4 rts_av_exec_cmd(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0xfffffff6;
  }
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001c2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x50))();
    return uVar1;
  }
  return 0xffffffcb;
}



// ==== rts_av_query_ability @ 0001c2f0 size=168

int rts_av_query_ability(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    iVar2 = -10;
  }
  else {
    iVar1 = (*(code *)PTR___rts_calloc_00063a28)
                      (1,0x2c,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x627c,0x628);
    if (iVar1 == 0) {
      iVar2 = -0xb;
    }
    else if (*(code **)(param_1 + 0x54) == (code *)0x0) {
      iVar2 = -0x35;
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x54))(param_1,iVar1);
      if (iVar2 == 0) {
        *param_2 = iVar1;
      }
    }
  }
  return iVar2;
}



// ==== rts_av_release_ability @ 0001c398 size=440

void rts_av_release_ability(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != (int *)0x0) {
    iVar4 = *param_1;
    if (iVar4 == 2) {
      if (param_1[2] != 0) {
        (*(code *)PTR_rts_free_000638d4)();
      }
      param_1[2] = 0;
      param_1[1] = 0;
      if (param_1[10] != 0) {
        (*(code *)PTR_rts_free_000638d4)();
      }
      param_1[10] = 0;
      param_1[9] = 0;
    }
    else if (iVar4 == 3) {
      if (param_1[2] != 0) {
        (*(code *)PTR_rts_free_000638d4)();
      }
      param_1[2] = 0;
      param_1[1] = 0;
    }
    else if ((iVar4 == 1) && (iVar4 = 0, param_1[2] != 0)) {
      for (; iVar4 < param_1[1]; iVar4 = iVar4 + 1) {
        iVar2 = param_1[2] + iVar4 * 0xc;
        iVar1 = 0;
        if (*(int *)(iVar2 + 8) != 0) {
          for (; iVar1 < *(int *)(iVar2 + 4); iVar1 = iVar1 + 1) {
            iVar3 = *(int *)(iVar2 + 8) + iVar1 * 0x24;
            if (*(int *)(iVar3 + 0x20) != 0) {
              (*(code *)PTR_rts_free_000638d4)();
            }
            *(undefined4 *)(iVar3 + 0x20) = 0;
          }
          if (*(int *)(iVar2 + 8) != 0) {
            (*(code *)PTR_rts_free_000638d4)();
          }
          *(undefined4 *)(iVar2 + 8) = 0;
        }
      }
      if (param_1[2] != 0) {
        (*(code *)PTR_rts_free_000638d4)();
      }
      param_1[2] = 0;
    }
    (*(code *)PTR_rts_free_000638d4)(param_1);
    return;
  }
  return;
}



// ==== rts_av_get_unit_owner @ 0001c550 size=24

undefined4 rts_av_get_unit_owner(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x78);
  }
  return 0;
}



// ==== rts_av_check_unit_is_runnable @ 0001c568 size=400

undefined4 rts_av_check_unit_is_runnable(undefined *param_1)

{
  int iVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  puVar2 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5ec0,0x323,puVar2);
    param_1 = puVar2;
    (*(code *)PTR___assert_000637b8)
              (puVar2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x323,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5ee0);
  }
  if (*(int *)(param_1 + 0x74) == 0) {
    return 0xffffffef;
  }
  iVar1 = (*(code *)PTR_rts_av_get_unit_owner_00063a60)();
  if (iVar1 != 0) {
    uVar4 = (*(code *)PTR_rts_av_get_unit_owner_00063a60)(puVar2);
    iVar1 = (*(code *)PTR_rts_av_get_stream_status_000639fc)(uVar4);
    if (iVar1 == 0) {
      return 0xffffffef;
    }
  }
  iVar1 = (*(code *)PTR_rts_av_get_unit_type_00063618)(puVar2);
  if (iVar1 < 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ab4,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f00,0x312,iVar1);
  }
  else {
    if (iVar1 == 2) {
      return 0;
    }
    if (*(int *)(puVar2 + 0xc) != 0) {
      return 0;
    }
  }
  if ((*(int *)(puVar2 + 0x68) != 0) &&
     (iVar1 = (*(code *)PTR_rts_queue_count_00063a84)(), 0 < iVar1)) {
    return 0;
  }
  pcVar3 = (code *)(PTR_LAB_00063268 + -0x5648);
  uVar4 = 0xffffffef;
  iVar1 = (*pcVar3)(puVar2 + 0x8c,puVar2 + 0xa4);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  iVar1 = (*pcVar3)(puVar2 + 0xb0,puVar2 + 200);
  if (iVar1 == 0) {
    return 0;
  }
  return uVar4;
}



// ==== rts_av_run_unit @ 0001c6f8 size=556

undefined4 rts_av_run_unit(undefined *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  
  if (param_1 == (undefined *)0x0) {
    puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f24,0x341,puVar7);
    uVar5 = 0x341;
    param_1 = puVar7;
  }
  else {
    if (*(int *)(param_1 + 0x3c) == 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f24,0x343,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6b90);
    }
    if (*(int *)(param_1 + 0x3c) != 0) goto LAB_0001c7c8;
    uVar5 = 0x343;
    puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6b90;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar7,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,uVar5,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f30);
LAB_0001c7c8:
  *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + 1;
  if (*(int *)(param_1 + 0xd4) != 0) {
    uVar5 = (*(code *)PTR_rts_av_check_unit_is_runnable_000634d0)(param_1);
    iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar5);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0xd4) != 0) {
        puVar3 = (undefined4 *)
                 (*(code *)PTR___rts_calloc_00063a28)
                           (1,8,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f3c,0x2ca);
        if (puVar3 == (undefined4 *)0x0) {
          return 0xfffffff5;
        }
        SYNC(0);
        *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
        puVar7 = PTR_rts_pthreadpool_add_task_000639b0;
        SYNC(0);
        uVar8 = *(undefined4 *)(param_1 + 0x158);
        puVar4 = PTR_LAB_00063268 + -0x4e04;
        uVar5 = *(undefined4 *)(param_1 + 0xd4);
        puVar6 = PTR_LAB_00063268 + -0x5de8;
        *puVar3 = param_1;
        puVar3[1] = uVar8;
        uVar5 = (*(code *)puVar7)(uVar5,puVar4,puVar3,puVar6);
        iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar5);
        if (iVar1 == 0) {
          return 0;
        }
        (*(code *)(PTR_LAB_00063268 + -0x5e38))(puVar3);
        return uVar5;
      }
    }
    else {
      iVar1 = 0;
      if (*(int *)(param_1 + 100) != 0) {
        for (; (*(int *)(param_1 + 100) != 0 &&
               (iVar2 = (*(code *)PTR_rts_queue_count_00063a84)(), iVar1 < iVar2));
            iVar1 = iVar1 + 1) {
          uVar5 = (*(code *)PTR_rts_queue_enumerate_00063ac8)(*(undefined4 *)(param_1 + 100),iVar1);
          (*(code *)PTR_rts_av_pipe_clear_0006382c)(uVar5);
        }
      }
    }
  }
  return 0xffffffef;
}



// ==== rts_av_to_awb_t @ 0001c928 size=276

undefined4 rts_av_to_awb_t(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int in_t9;
  code *pcVar9;
  int unaff_gp;
  int iVar10;
  undefined8 uVar11;
  
  iVar10 = unaff_gp + -0x16e4 + in_t9;
  iVar5 = param_1;
  if (param_1 == 0) {
    iVar5 = *(int *)(iVar10 + -0x7fd4) + -0x6c38;
    (**(code **)(iVar10 + -0x7c54))
              (4,*(int *)(iVar10 + -0x7fd4) + -0x6cf0,*(int *)(iVar10 + -0x7fd4) + -0x60e4,0x3b4,
               iVar5);
    param_1 = iVar5;
    (**(code **)(iVar10 + -0x7a88))
              (iVar5,*(int *)(iVar10 + -0x7fd4) + -0x6cc8,0x3b4,*(int *)(iVar10 + -0x7fd4) + -0x60f4
              );
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    return 0;
  }
  *(undefined4 *)(iVar5 + 0x74) = 1;
  uVar6 = 0;
  if ((*(int *)(iVar5 + 0x1c) == 0) || (uVar6 = 0, *(int *)(iVar5 + 0x128) != 0)) {
LAB_0001cb8c:
    pcVar9 = *(code **)(iVar10 + -0x7ec0);
  }
  else {
    if (*(int *)(iVar5 + 0x124) == 0) {
      if (*(int *)(iVar5 + 0x18) == 0) {
        iVar2 = (**(code **)(iVar10 + -0x7818))(1,0xc,*(int *)(iVar10 + -0x7fd4) + -0x6110,0x147);
        *(int *)(iVar5 + 0x124) = iVar2;
        if (iVar2 != 0) goto LAB_0001ca18;
        uVar6 = 0xfffffff5;
      }
      else {
        uVar6 = (**(code **)(iVar10 + -0x77e0))();
        piVar1 = (int *)(**(code **)(iVar10 + -0x7a20))(uVar6);
        iVar2 = *piVar1;
        *(int **)(iVar5 + 0x124) = piVar1;
        if (iVar2 != 0) goto LAB_0001c9d8;
LAB_0001ca18:
        iVar2 = *(int *)(iVar5 + 0x124);
        uVar6 = (**(code **)(iVar10 + -0x7818))
                          (4,*(undefined4 *)(iVar5 + 0x1c),*(int *)(iVar10 + -0x7fd4) + -0x6110,
                           0x14d);
        iVar3 = *(int *)(iVar5 + 0x124);
        *(undefined4 *)(iVar2 + 4) = uVar6;
        iVar2 = *(int *)(iVar3 + 4);
        uVar7 = 0;
        if (iVar2 == 0) {
          uVar6 = 0xfffffff5;
        }
        else {
          for (; uVar7 < *(uint *)(iVar5 + 0x1c); uVar7 = uVar7 + 1) {
            iVar3 = (**(code **)(iVar10 + -0x7860))(0);
            *(int *)(iVar2 + uVar7 * 4) = iVar3;
            if (iVar3 == 0) {
              uVar6 = 0xfffffff5;
              goto LAB_0001caf8;
            }
            (**(code **)(iVar10 + -0x787c))(iVar3,iVar5);
          }
          puVar8 = *(undefined4 **)(iVar5 + 0x124);
          uVar6 = (**(code **)(iVar10 + -0x7c64))();
          piVar1 = *(int **)(iVar5 + 0x124);
          *puVar8 = uVar6;
          uVar6 = 0;
          if (*piVar1 != 0) goto LAB_0001cb0c;
          uVar6 = 0xfffffff6;
        }
LAB_0001caf8:
        (*(code *)(*(int *)(iVar10 + -0x7fd8) + -0x53f8))(iVar5);
      }
    }
    else {
LAB_0001c9d8:
      uVar6 = 0;
    }
LAB_0001cb0c:
    iVar2 = (**(code **)(iVar10 + -0x7ec0))(uVar6);
    if (iVar2 != 0) goto LAB_0001cb8c;
    if (*(code **)(iVar5 + 0x28) != (code *)0x0) {
      uVar6 = (**(code **)(iVar5 + 0x28))(iVar5);
      iVar2 = (**(code **)(iVar10 + -0x7ec0))(uVar6);
      if (iVar2 != 0) {
        (*(code *)(*(int *)(iVar10 + -0x7fd8) + -0x53f8))(iVar5);
        goto LAB_0001cb8c;
      }
    }
    *(undefined4 *)(iVar5 + 0x128) = 1;
    pcVar9 = *(code **)(iVar10 + -0x7ec0);
    if (*(int *)(iVar5 + 0x18) != 0) {
      *(int *)(*(int *)(iVar5 + 0x124) + 8) = *(int *)(*(int *)(iVar5 + 0x124) + 8) + 1;
      goto LAB_0001cb8c;
    }
  }
  iVar2 = (*pcVar9)(uVar6);
  if (iVar2 == 0) {
    if (*(code **)(iVar5 + 0x2c) == (code *)0x0) {
      uVar6 = 0xffffffcb;
    }
    else {
      uVar6 = (**(code **)(iVar5 + 0x2c))(iVar5);
    }
    iVar2 = (**(code **)(iVar10 + -0x7ec0))(uVar6);
    if (iVar2 == 0) {
      (*(code *)(*(int *)(iVar10 + -0x7fd8) + -0x5544))(iVar5);
      if (*(int *)(iVar5 + 0x78) == 0) {
LAB_0001ccb8:
        pcVar9 = *(code **)(iVar10 + -0x7ce4);
      }
      else {
        pcVar9 = *(code **)(iVar10 + -0x7ce4);
        if ((-1 < *(int *)(iVar5 + 0x100)) && (*(int *)(iVar5 + 0x104) != 0)) {
          iVar2 = (**(code **)(iVar10 + -0x77ec))();
          if (iVar2 == 0) goto LAB_0001ccf8;
          pcVar9 = *(code **)(iVar10 + -0x79dc);
          *(int *)(iVar5 + 0xfc) = *(int *)(iVar10 + -0x7fd8) + -0x22f0;
          *(int *)(iVar5 + 0x108) = iVar5;
          uVar6 = (*pcVar9)(iVar2,iVar5 + 0xfc);
          iVar3 = (**(code **)(iVar10 + -0x7ec0))(uVar6);
          if (iVar3 == 0) {
            *(int *)(iVar5 + 0xf8) = iVar2;
          }
          else {
            iVar2 = *(int *)(iVar10 + -0x7fd8);
            *(undefined4 *)(iVar5 + 0xf8) = 0;
            uVar4 = (*(code *)(iVar2 + -0x4ec0))(iVar5);
            (**(code **)(iVar10 + -0x7c54))
                      (4,*(int *)(iVar10 + -0x7fd4) + -0x6a8c,*(int *)(iVar10 + -0x7fd4) + -0x60e4,
                       0x3d1,uVar4,uVar6);
            uVar6 = 0;
          }
          goto LAB_0001ccb8;
        }
      }
      uVar11 = (*pcVar9)();
      *(undefined8 *)(iVar5 + 0x130) = uVar11;
      *(undefined4 *)(iVar5 + 0x138) = 0;
      *(undefined4 *)(iVar5 + 0x13c) = 0;
      *(undefined4 *)(iVar5 + 0x144) = 0;
      *(undefined4 *)(iVar5 + 0x148) = 0;
      *(undefined4 *)(iVar5 + 0x140) = 0;
      *(undefined4 *)(iVar5 + 0x14c) = 0;
      *(undefined4 *)(iVar5 + 0x150) = 0;
      *(int *)(iVar5 + 0x158) = *(int *)(iVar5 + 0x158) + 1;
      goto LAB_0001ccf8;
    }
  }
  *(undefined4 *)(iVar5 + 0x74) = 0;
LAB_0001ccf8:
  iVar2 = (**(code **)(iVar10 + -0x7ec0))(uVar6);
  if (iVar2 != 0) {
    uVar4 = (*(code *)(*(int *)(iVar10 + -0x7fd8) + -0x4ec0))(iVar5);
    (**(code **)(iVar10 + -0x7c54))
              (4,*(int *)(iVar10 + -0x7fd4) + -0x6a64,*(int *)(iVar10 + -0x7fd4) + -0x60e4,0x3e5,
               uVar4,uVar6);
    (*(code *)(*(int *)(iVar10 + -0x7fd8) + -0x5724))(iVar5);
  }
  return uVar6;
}



// ==== rts_av_update_unit_profile @ 0001d1e0 size=220

void rts_av_update_unit_profile(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  puVar1 = param_2;
  if (param_2 == (undefined *)0x0) {
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x69bc;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6028,0x506,puVar1);
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8;
    param_1 = puVar1;
    (*(code *)PTR___assert_000637b8)
              (puVar1,param_2,0x506,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6044);
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  (*(code *)PTR_rts_av_get_tr_profile_00063a64)(param_2,&local_28);
  (*(code *)(PTR_LAB_00063268 + -0x3288))(param_1,&local_28,puVar1);
  return;
}



// ==== rts_av_set_unit_profile @ 0001d2bc size=32

void rts_av_set_unit_profile(undefined4 param_1,undefined4 param_2)

{
  (*(code *)(PTR_LAB_00063268 + -0x3288))(param_1,param_2,0);
  return;
}



// ==== rts_av_set_unit_owner @ 0001d2dc size=180

void rts_av_set_unit_owner(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar6 = PTR_rts_av_get_unit_owner_00063a60;
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    (*(code *)(PTR_LAB_00063268 + -0x4b44))();
    puVar5 = PTR_rts_av_get_unit_owner_00063a60;
    puVar1 = PTR_rts_av_post_00063744;
    puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c;
    if (*(int *)(param_1 + 0xd8) == 0) {
      iVar2 = *(int *)(param_1 + 0xd4);
      puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x62a8;
      *(undefined4 *)(param_1 + 0xd4) = 0;
      (*(code *)puVar1)(puVar5);
      if (iVar2 != 0) {
        (*(code *)PTR_rts_pthreadpool_destroy_0006384c)(iVar2);
      }
      (*(code *)PTR_rts_av_wait_00063a58)(puVar6 + -0x62a8);
    }
    else {
      *(undefined4 *)(param_1 + 0xd4) = 0;
      *(undefined4 *)(param_1 + 0xd8) = 0;
      uVar3 = (*(code *)puVar5)(param_1);
      uVar4 = (*(code *)PTR_rts_av_get_unit_id_000635a0)(param_1);
      (*(code *)PTR_rts_av_stream_put_handler_000632b0)(uVar3,uVar4);
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
LAB_0001d434:
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0x78) = param_2;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    iVar2 = (*(code *)puVar6)();
    if ((*(int *)(param_1 + 0x14) != 0) && (iVar2 != 0)) {
      uVar3 = (*(code *)PTR_rts_av_get_unit_id_000635a0)(param_1);
      iVar2 = (*(code *)PTR_rts_av_stream_get_handler_000633e0)(iVar2,uVar3);
      *(int *)(param_1 + 0xd4) = iVar2;
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0xd8) = 1;
        goto LAB_0001d434;
      }
    }
    uVar3 = 0xfffffff5;
    iVar2 = (*(code *)PTR_rts_pthreadpool_init_00063664)(1);
    if (iVar2 != 0) {
      uVar3 = 0;
    }
    *(int *)(param_1 + 0xd4) = iVar2;
  }
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
  if (iVar2 != 0) {
    if (param_2 == 0) {
      puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x69ac;
    }
    else {
      puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x69b4;
    }
    uVar4 = (*(code *)(PTR_LAB_00063268 + -0x4ec0))(param_1);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x69a4,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6294,0x680,puVar6,uVar4,uVar3);
  }
  return;
}



// ==== rts_av_set_unit_rotation @ 0001d4c0 size=32

void rts_av_set_unit_rotation(int param_1,uint param_2)

{
  if ((param_1 != 0) && (param_2 < 4)) {
    *(uint *)(param_1 + 0x7c) = param_2;
  }
  return;
}



// ==== rts_av_get_unit_rotation @ 0001d4e0 size=24

undefined4 rts_av_get_unit_rotation(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x7c);
  }
  return 0xfffffff6;
}



// ==== rts_av_register_attribute @ 0001d4f8 size=28

undefined4 rts_av_register_attribute(undefined *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x62f4,0x6af,param_1);
    uVar1 = 0x6af;
  }
  else {
    uVar1 = 0;
    if (param_2 != (undefined4 *)0x0) goto LAB_0001d5b4;
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x697c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x62f4,0x6b0,param_1);
    uVar1 = 0x6b0;
  }
  param_2 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8);
  uVar1 = (*(code *)PTR___assert_000637b8)
                    (param_1,param_2,uVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6310);
LAB_0001d5b4:
  puVar2 = *(undefined4 **)(param_1 + 0x84);
  *(undefined4 **)(param_1 + 0x84) = param_2;
  *param_2 = param_1 + 0x80;
  param_2[1] = puVar2;
  *puVar2 = param_2;
  return uVar1;
}



// ==== rts_av_find_attribute @ 0001d5dc size=80

undefined4 * rts_av_find_attribute(undefined *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_s1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6328,0x6bc,param_1);
    uVar2 = 0x6bc;
    param_2 = unaff_s1;
  }
  else {
    if (param_2 != 0) goto LAB_0001d6a0;
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6970;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6328,0x6bd,param_1);
    uVar2 = 0x6bd;
  }
  (*(code *)PTR___assert_000637b8)
            (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,uVar2,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6340);
LAB_0001d6a0:
  puVar3 = *(undefined4 **)(param_1 + 0x80);
  while( true ) {
    if (puVar3 == (undefined4 *)(param_1 + 0x80)) {
      return (undefined4 *)0x0;
    }
    iVar1 = (*(code *)PTR_strcasecmp_00063554)(puVar3 + 9,param_2);
    if (iVar1 == 0) break;
    puVar3 = (undefined4 *)*puVar3;
  }
  return puVar3;
}



// ==== rts_av_query_isp_awb @ 0001d62c size=124

int rts_av_query_isp_awb(void)

{
  int iVar1;
  int unaff_s0;
  int *piVar2;
  int in_stack_00000018;
  
  (**(code **)(in_stack_00000018 + -0x7a88))();
  piVar2 = *(int **)(unaff_s0 + 0x80);
  while( true ) {
    if (piVar2 == (int *)(unaff_s0 + 0x80)) {
      return 0;
    }
    iVar1 = (**(code **)(in_stack_00000018 + -0x7cec))(piVar2 + 9);
    if (iVar1 == 0) break;
    piVar2 = (int *)*piVar2;
  }
  return (int)piVar2;
}



// ==== rts_av_unit_plug @ 0001d6f0 size=20

uint rts_av_unit_plug(undefined *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  
  if (param_1 == (undefined *)0x0) {
    puVar8 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6354,0x6ed,puVar8);
    uVar1 = rts_av_set_isp_awb(puVar8,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x6ed);
    return uVar1;
  }
  puVar8 = param_1;
  if (param_2 == 0) {
    puVar8 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x69bc;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6354,0x6ee,puVar8);
    param_3 = 0x6ee;
    param_1 = puVar8;
    (*(code *)PTR___assert_000637b8)
              (puVar8,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x6ee,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6368);
  }
  iVar7 = *(int *)(param_1 + 0x68);
  if (param_3 == 0) {
    iVar7 = *(int *)(param_1 + 100);
  }
  if (iVar7 == 0) {
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = 0;
    uVar2 = (*(code *)PTR_rts_queue_check_00063b2c)(iVar7);
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
    if (iVar3 != 0) {
      if (iVar7 == *(int *)(puVar8 + 100)) {
        uVar4 = (*(code *)PTR_rts_av_get_input_limit_00063530)(puVar8);
        uVar5 = (*(code *)PTR_rts_queue_count_00063a84)(iVar7);
        if (uVar4 <= uVar5) {
          return 0xffffffec;
        }
        iVar3 = 0;
rts_av_refresh_isp_awb_statis:
        do {
          iVar6 = (*(code *)PTR_rts_queue_count_00063a84)(iVar7);
          if (iVar3 < iVar6) {
            iVar6 = (*(code *)PTR_rts_queue_enumerate_00063ac8)(iVar7,iVar3);
            if ((iVar6 == 0) ||
               (uVar5 = (*(code *)PTR_rts_av_get_pipe_id_000639d8)(iVar6), uVar1 != uVar5)) {
              iVar3 = iVar3 + 1;
              goto rts_av_refresh_isp_awb_statis;
            }
            uVar2 = 0xffffffe0;
          }
          else {
            uVar2 = 0;
          }
          iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
          if (iVar3 == 0) {
            (*(code *)PTR_rts_av_set_pipe_id_00063a1c)(param_2,uVar1);
            break;
          }
          uVar1 = uVar1 + 1;
          iVar3 = 0;
        } while (uVar1 != uVar4);
      }
      (*(code *)(PTR_LAB_00063268 + -0x49f4))(puVar8);
      uVar1 = (*(code *)PTR_rts_queue_push_back_00063310)(iVar7,param_2);
      iVar7 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
      if (iVar7 == 0) {
        if (param_3 == 0) {
          if (*(code **)(puVar8 + 0x58) == (code *)0x0) {
            iVar7 = -0x35;
          }
          else {
            iVar7 = (**(code **)(puVar8 + 0x58))(puVar8,param_2);
          }
          iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar7);
          if ((iVar3 != 0) && (iVar7 != -0x35)) {
            uVar2 = (*(code *)(PTR_LAB_00063268 + -0x4ec0))(puVar8);
            (*(code *)PTR_rts_log_000635ec)
                      (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6968,
                       PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6354,0x713,uVar2,iVar7);
          }
        }
        uVar1 = 0;
      }
      (*(code *)(PTR_LAB_00063268 + -0x5544))(puVar8);
    }
  }
  return uVar1;
}



// ==== rts_av_release_isp_awb @ 0001d704 size=116

uint rts_av_release_isp_awb(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_gp;
  
  if (param_1 == 0) {
    iVar8 = *(int *)(unaff_gp + -0x7fd4);
    (**(code **)(unaff_gp + -0x7c54))
              (4,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x6354,0x6ed
              );
    uVar1 = rts_av_set_isp_awb(iVar8 + -0x6c38,*(int *)(unaff_gp + -0x7fd4) + -0x6cc8,0x6ed);
    return uVar1;
  }
  iVar8 = param_1;
  if (param_2 == 0) {
    iVar8 = *(int *)(unaff_gp + -0x7fd4) + -0x69bc;
    (**(code **)(unaff_gp + -0x7c54))
              (4,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x6354,0x6ee
              );
    param_3 = 0x6ee;
    param_1 = iVar8;
    (**(code **)(unaff_gp + -0x7a88))
              (iVar8,*(int *)(unaff_gp + -0x7fd4) + -0x6cc8,0x6ee,
               *(int *)(unaff_gp + -0x7fd4) + -0x6368);
  }
  iVar7 = *(int *)(param_1 + 0x68);
  if (param_3 == 0) {
    iVar7 = *(int *)(param_1 + 100);
  }
  if (iVar7 == 0) {
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = 0;
    uVar2 = (**(code **)(unaff_gp + -0x7714))(iVar7);
    iVar3 = (**(code **)(unaff_gp + -0x7ec0))(uVar2);
    if (iVar3 != 0) {
      iVar3 = *(int *)(unaff_gp + -0x7fd8);
      if (iVar7 == *(int *)(iVar8 + 100)) {
        uVar4 = (**(code **)(unaff_gp + -0x7d10))(iVar8);
        uVar5 = (**(code **)(unaff_gp + -0x77bc))(iVar7);
        if (uVar4 <= uVar5) {
          return 0xffffffec;
        }
        iVar3 = 0;
rts_av_refresh_isp_awb_statis:
        do {
          iVar6 = (**(code **)(unaff_gp + -0x77bc))(iVar7);
          if (iVar3 < iVar6) {
            iVar6 = (**(code **)(unaff_gp + -0x7778))(iVar7,iVar3);
            if ((iVar6 == 0) || (uVar5 = (**(code **)(unaff_gp + -0x7868))(iVar6), uVar1 != uVar5))
            {
              iVar3 = iVar3 + 1;
              goto rts_av_refresh_isp_awb_statis;
            }
            uVar2 = 0xffffffe0;
          }
          else {
            uVar2 = 0;
          }
          iVar3 = (**(code **)(unaff_gp + -0x7ec0))(uVar2);
          if (iVar3 == 0) {
            (**(code **)(unaff_gp + -0x7824))(param_2,uVar1);
            break;
          }
          uVar1 = uVar1 + 1;
          iVar3 = 0;
        } while (uVar1 != uVar4);
        iVar3 = *(int *)(unaff_gp + -0x7fd8);
      }
      (*(code *)(iVar3 + -0x49f4))(iVar8);
      uVar1 = (**(code **)(unaff_gp + -0x7f30))(iVar7,param_2);
      iVar7 = (**(code **)(unaff_gp + -0x7ec0))(uVar1);
      if (iVar7 == 0) {
        if (param_3 == 0) {
          if (*(code **)(iVar8 + 0x58) == (code *)0x0) {
            iVar7 = -0x35;
          }
          else {
            iVar7 = (**(code **)(iVar8 + 0x58))(iVar8,param_2);
          }
          iVar3 = (**(code **)(unaff_gp + -0x7ec0))(iVar7);
          if ((iVar3 != 0) && (iVar7 != -0x35)) {
            (*(code *)(*(int *)(unaff_gp + -0x7fd8) + -0x4ec0))(iVar8);
            (**(code **)(unaff_gp + -0x7c54))
                      (4,*(int *)(unaff_gp + -0x7fd4) + -0x6968,
                       *(int *)(unaff_gp + -0x7fd4) + -0x6354,0x713);
          }
        }
        uVar1 = 0;
      }
      (*(code *)(*(int *)(unaff_gp + -0x7fd8) + -0x5544))(iVar8);
    }
  }
  return uVar1;
}



// ==== rts_av_get_isp_awb @ 0001d730 size=64

void rts_av_get_isp_awb(void)

{
  int unaff_s0;
  int iStack00000010;
  int in_stack_00000018;
  
  iStack00000010 = unaff_s0 + -0x6c38;
  (*(code *)PTR_rts_log_000635ec)
            (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6354,0x6ed);
  rts_av_set_isp_awb(unaff_s0 + -0x6c38,*(int *)(in_stack_00000018 + -0x7fd4) + -0x6cc8,0x6ed);
  return;
}



// ==== rts_av_set_isp_awb @ 0001d7b8 size=136

uint rts_av_set_isp_awb(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int unaff_s0;
  uint uVar7;
  int unaff_gp;
  int in_stack_00000018;
  
  (**(code **)(unaff_gp + -0x7a88))();
  iVar6 = *(int *)(param_1 + 0x68);
  if (param_3 == 0) {
    iVar6 = *(int *)(param_1 + 100);
  }
  if (iVar6 == 0) {
    uVar7 = 0xffffffea;
  }
  else {
    uVar7 = 0;
    uVar1 = (**(code **)(unaff_gp + -0x7714))(iVar6);
    iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
    if (iVar2 != 0) {
      iVar2 = *(int *)(in_stack_00000018 + -0x7fd8);
      if (iVar6 == *(int *)(unaff_s0 + 100)) {
        uVar3 = (**(code **)(in_stack_00000018 + -0x7d10))();
        uVar4 = (**(code **)(in_stack_00000018 + -0x77bc))(iVar6);
        if (uVar3 <= uVar4) {
          return 0xffffffec;
        }
        iVar2 = 0;
rts_av_refresh_isp_awb_statis:
        do {
          iVar5 = (**(code **)(in_stack_00000018 + -0x77bc))(iVar6);
          if (iVar2 < iVar5) {
            iVar5 = (**(code **)(in_stack_00000018 + -0x7778))(iVar6,iVar2);
            if ((iVar5 == 0) ||
               (uVar4 = (**(code **)(in_stack_00000018 + -0x7868))(iVar5), uVar7 != uVar4)) {
              iVar2 = iVar2 + 1;
              goto rts_av_refresh_isp_awb_statis;
            }
            uVar1 = 0xffffffe0;
          }
          else {
            uVar1 = 0;
          }
          iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
          if (iVar2 == 0) {
            (**(code **)(in_stack_00000018 + -0x7824))();
            break;
          }
          uVar7 = uVar7 + 1;
          iVar2 = 0;
        } while (uVar7 != uVar3);
        iVar2 = *(int *)(in_stack_00000018 + -0x7fd8);
      }
      (*(code *)(iVar2 + -0x49f4))();
      uVar7 = (**(code **)(in_stack_00000018 + -0x7f30))(iVar6);
      iVar6 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar7);
      if (iVar6 == 0) {
        if (param_3 == 0) {
          if (*(code **)(unaff_s0 + 0x58) == (code *)0x0) {
            iVar6 = -0x35;
          }
          else {
            iVar6 = (**(code **)(unaff_s0 + 0x58))();
          }
          iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(iVar6);
          if ((iVar2 != 0) && (iVar6 != -0x35)) {
            (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + -0x4ec0))();
            (**(code **)(in_stack_00000018 + -0x7c54))
                      (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x6968,
                       *(int *)(in_stack_00000018 + -0x7fd4) + -0x6354,0x713);
          }
        }
        uVar7 = 0;
      }
      (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + -0x5544))();
    }
  }
  return uVar7;
}



// ==== rts_av_refresh_isp_awb_statis @ 0001d840 size=136

undefined4 rts_av_refresh_isp_awb_statis(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_s0;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_gp;
  int in_stack_00000018;
  
  do {
    while( true ) {
      iVar1 = (**(code **)(unaff_gp + -0x77bc))();
      unaff_gp = in_stack_00000018;
      if (iVar1 <= unaff_s4) break;
      iVar1 = (**(code **)(in_stack_00000018 + -0x7778))();
      if (iVar1 != 0) {
        iVar1 = (**(code **)(in_stack_00000018 + -0x7868))(iVar1);
        if (unaff_s2 == iVar1) {
          uVar3 = 0xffffffe0;
          goto LAB_0001d898;
        }
      }
      unaff_s4 = unaff_s4 + 1;
    }
    uVar3 = 0;
LAB_0001d898:
    iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar3);
    if (iVar1 == 0) {
      (**(code **)(in_stack_00000018 + -0x7824))();
      goto LAB_0001d8d0;
    }
    unaff_s2 = unaff_s2 + 1;
    unaff_s4 = 0;
    if (unaff_s2 == unaff_s6) {
LAB_0001d8d0:
      (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + -0x49f4))();
      uVar3 = (**(code **)(in_stack_00000018 + -0x7f30))();
      iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar3);
      if (iVar1 == 0) {
        if (unaff_s5 == 0) {
          if (*(code **)(unaff_s0 + 0x58) == (code *)0x0) {
            iVar1 = -0x35;
          }
          else {
            iVar1 = (**(code **)(unaff_s0 + 0x58))();
          }
          iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(iVar1);
          if ((iVar2 != 0) && (iVar1 != -0x35)) {
            (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + -0x4ec0))();
            (**(code **)(in_stack_00000018 + -0x7c54))
                      (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x6968,
                       *(int *)(in_stack_00000018 + -0x7fd4) + -0x6354,0x713);
          }
        }
        uVar3 = 0;
      }
      (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + -0x5544))();
      return uVar3;
    }
  } while( true );
}



// ==== rts_av_get_isp_awb_ct_gain @ 0001d8c8 size=276

undefined4 rts_av_get_isp_awb_ct_gain(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_s0;
  int unaff_s2;
  int iVar3;
  int unaff_s5;
  int unaff_s6;
  int unaff_gp;
  int in_stack_00000018;
  
  do {
    iVar3 = 0;
    if (unaff_s2 == unaff_s6) {
LAB_0001d8d0:
      (*(code *)(*(int *)(unaff_gp + -0x7fd8) + -0x49f4))();
      uVar1 = (**(code **)(in_stack_00000018 + -0x7f30))();
      iVar3 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
      if (iVar3 == 0) {
        if (unaff_s5 == 0) {
          if (*(code **)(unaff_s0 + 0x58) == (code *)0x0) {
            iVar3 = -0x35;
          }
          else {
            iVar3 = (**(code **)(unaff_s0 + 0x58))();
          }
          iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(iVar3);
          if ((iVar2 != 0) && (iVar3 != -0x35)) {
            (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + -0x4ec0))();
            (**(code **)(in_stack_00000018 + -0x7c54))
                      (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x6968,
                       *(int *)(in_stack_00000018 + -0x7fd4) + -0x6354,0x713);
          }
        }
        uVar1 = 0;
      }
      (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + -0x5544))();
      return uVar1;
    }
    while( true ) {
      iVar2 = (**(code **)(unaff_gp + -0x77bc))();
      unaff_gp = in_stack_00000018;
      if (iVar2 <= iVar3) break;
      iVar2 = (**(code **)(in_stack_00000018 + -0x7778))();
      if (iVar2 != 0) {
        iVar2 = (**(code **)(in_stack_00000018 + -0x7868))(iVar2);
        if (unaff_s2 == iVar2) {
          uVar1 = 0xffffffe0;
          goto LAB_0001d898;
        }
      }
      iVar3 = iVar3 + 1;
    }
    uVar1 = 0;
LAB_0001d898:
    iVar3 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
    if (iVar3 == 0) {
      (**(code **)(in_stack_00000018 + -0x7824))();
      goto LAB_0001d8d0;
    }
    unaff_s2 = unaff_s2 + 1;
  } while( true );
}



// ==== rts_av_unit_unplug @ 0001d9ec size=580

void rts_av_unit_unplug(undefined *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int unaff_s1;
  
  if (param_1 == (undefined *)0x0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x637c,0x720,puVar4);
    uVar3 = 0x720;
    param_2 = unaff_s1;
  }
  else {
    puVar4 = param_1;
    if (param_2 != 0) goto LAB_0001dab4;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x69bc;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x637c,0x721,puVar4);
    uVar3 = 0x721;
  }
  param_1 = puVar4;
  (*(code *)PTR___assert_000637b8)
            (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,uVar3,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6390);
LAB_0001dab4:
  uVar3 = (*(code *)PTR_rts_queue_check_00063b2c)(*(undefined4 *)(param_1 + 0x68));
  iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
  if (iVar1 != 0) {
    uVar3 = (*(code *)PTR_rts_queue_check_00063b2c)(*(undefined4 *)(puVar4 + 100),param_2);
    iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
    if (iVar1 != 0) {
      return;
    }
  }
  (*(code *)(PTR_LAB_00063268 + -0x49f4))(puVar4);
  if (*(int *)(puVar4 + 0x68) != 0) {
    iVar1 = (*(code *)PTR_rts_queue_check_00063b2c)(*(int *)(puVar4 + 0x68),param_2);
    if (iVar1 == 0) {
      (*(code *)PTR_rts_queue_del_00063b48)(*(undefined4 *)(puVar4 + 0x68),param_2);
    }
  }
  if (*(int *)(puVar4 + 100) != 0) {
    iVar1 = (*(code *)PTR_rts_queue_check_00063b2c)(*(int *)(puVar4 + 100),param_2);
    if (iVar1 == 0) {
      if (*(code **)(puVar4 + 0x5c) == (code *)0x0) {
        iVar1 = -0x35;
      }
      else {
        iVar1 = (**(code **)(puVar4 + 0x5c))(puVar4,param_2);
      }
      iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar1);
      if ((iVar2 != 0) && (iVar1 != -0x35)) {
        uVar3 = (*(code *)(PTR_LAB_00063268 + -0x4ec0))(puVar4);
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6940,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + -0x637c,0x733,uVar3,iVar1);
      }
      (*(code *)PTR_rts_queue_del_00063b48)(*(undefined4 *)(puVar4 + 100),param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001dc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_LAB_00063268 + -0x5544))(puVar4);
  return;
}



// ==== rts_av_check_and_run_unit @ 0001dc30 size=224

undefined4 rts_av_check_and_run_unit(undefined *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar3 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x63ac,0x73f,puVar3);
    param_1 = puVar3;
    (*(code *)PTR___assert_000637b8)
              (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x73f,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x63c8);
  }
  if (*(int *)(param_1 + 0x120) == 0) {
    uVar1 = (*(code *)PTR_rts_av_check_ready_00063a9c)();
    iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
    if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001dcec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)PTR_rts_av_run_unit_00063834)(puVar3);
      return uVar1;
    }
  }
  else {
    uVar1 = 0xffffffef;
  }
  return uVar1;
}



// ==== rts_av_trigger_unit @ 0001dda8 size=196

undefined4 rts_av_trigger_unit(undefined *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  puVar3 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x63dc,0x74f,puVar3);
    (*(code *)PTR___assert_000637b8)
              (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x74f,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x63f0);
  }
  puVar1 = PTR_rts_av_run_unit_00063834;
  uVar2 = 0xffffffef;
  if ((*(int *)(puVar3 + 0x74) != 0) && (uVar2 = 0xffffffef, *(int *)(param_1 + 0xd4) != 0)) {
    if (*(int *)(param_1 + 0x120) == 0) {
      *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
      (*(code *)puVar1)();
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffef;
    }
  }
  return uVar2;
}



// ==== rts_av_check_is_unit_src_recursive @ 0001de6c size=236

undefined4 rts_av_check_is_unit_src_recursive(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((param_1 != 0) && (param_2 != 0)) && (iVar3 = 0, *(int *)(param_1 + 100) != 0)) {
    for (; iVar1 = (*(code *)PTR_rts_queue_count_00063a84)(*(undefined4 *)(param_1 + 100)),
        iVar3 < iVar1; iVar3 = iVar3 + 1) {
      uVar2 = (*(code *)PTR_rts_queue_enumerate_00063ac8)(*(undefined4 *)(param_1 + 100),iVar3);
      iVar1 = (*(code *)PTR_rts_av_get_pipe_src_000636f0)(uVar2);
      if (iVar1 != 0) {
        if (iVar1 == param_2) {
          return 0xfffffff3;
        }
        uVar2 = (*(code *)PTR_rts_av_check_is_unit_src_recursive_000633c0)(iVar1,param_2);
        iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
        if (iVar1 != 0) {
          return uVar2;
        }
      }
    }
  }
  return 0;
}



// ==== rts_av_set_unit_callback @ 0001df58 size=268

int rts_av_set_unit_callback(undefined *param_1,undefined *param_2,int param_3)

{
  int iVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x643c,0x7a7,param_1);
    param_3 = 0x7a7;
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8;
    (*(code *)PTR___assert_000637b8)
              (param_1,param_2,0x7a7,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6458);
  }
  iVar1 = (*(code *)PTR_rts_av_get_unit_type_00063618)();
  if (-1 < iVar1) {
    if (param_3 == 0) {
      if (iVar1 == 2) {
        return -0x16;
      }
      (*(code *)(PTR_LAB_00063268 + -0x54c4))(param_1 + 0xb0,param_2);
      param_1 = param_1 + 200;
    }
    else {
      if (iVar1 == 1) {
        return -0x16;
      }
      (*(code *)(PTR_LAB_00063268 + -0x54c4))(param_1 + 0x8c);
      param_1 = param_1 + 0xa4;
    }
    (*(code *)PTR_memset_000637dc)(param_1,0,0xc);
    return 0;
  }
  return iVar1;
}



// ==== rts_av_set_unit_priv @ 0001e064 size=124

void rts_av_set_unit_priv(undefined *param_1,undefined *param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6490,0x7bf,param_1);
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8;
    (*(code *)PTR___assert_000637b8)
              (param_1,param_2,0x7bf,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x64a8);
  }
  *(undefined **)(param_1 + 300) = param_2;
  return;
}



// ==== rts_av_get_unit_priv @ 0001e0e0 size=124

undefined4 rts_av_get_unit_priv(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x64c0,0x7c6,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x7c6,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x64d8);
  }
  return *(undefined4 *)(param_1 + 300);
}



// ==== rts_av_get_unit_status @ 0001e15c size=16

undefined4 rts_av_get_unit_status(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x64f0,0x7cd,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x7cd,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6508);
  }
  return *(undefined4 *)(param_1 + 0xdc);
}



// ==== rts_av_enable_unit @ 0001e1d8 size=200

void rts_av_enable_unit(undefined *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  
  puVar4 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x651c,0x7d6,puVar4);
    param_1 = puVar4;
    (*(code *)PTR___assert_000637b8)
              (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x7d6,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6530);
  }
  puVar1 = PTR_rts_av_get_unit_owner_00063a60;
  *(undefined4 *)(param_1 + 0xdc) = 1;
  uVar2 = (*(code *)puVar1)();
  iVar3 = (*(code *)PTR_rts_av_get_stream_status_000639fc)(uVar2);
  if (iVar3 != 0) {
    (*(code *)(PTR_LAB_00063268 + -0x36dc))(puVar4);
    return;
  }
  return;
}



// ==== rts_av_disable_unit @ 0001e2a0 size=168

undefined4 rts_av_disable_unit(undefined *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6544,0x7e3,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x7e3,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6558);
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    uVar1 = (*(code *)(PTR_LAB_00063268 + -0x495c))();
    return uVar1;
  }
  return 0;
}



// ==== rts_av_delete_unit @ 0001e348 size=504

undefined4 rts_av_delete_unit(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  int *piVar7;
  
  if (param_1 == 0) {
    uVar2 = 0xfffffff6;
  }
  else {
    pcVar6 = (code *)(PTR_LAB_00063268 + -0x4ec0);
    uVar2 = (*pcVar6)();
    (*(code *)PTR_rts_log_000635ec)
              (1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x68ec,uVar2,param_1);
    (*(code *)PTR_rts_av_disable_unit_0006331c)(param_1);
    iVar3 = (*(code *)PTR_rts_av_get_unit_owner_00063a60)(param_1);
    if (iVar3 != 0) {
      uVar2 = (*(code *)PTR_rts_av_get_unit_owner_00063a60)(param_1);
      (*(code *)PTR_rts_av_stream_del_00063b5c)(uVar2,param_1);
    }
    if (*(int *)(param_1 + 0x68) != 0) {
      (*(code *)PTR_rts_av_clr_pipe_flags_00063a40)(*(int *)(param_1 + 0x68),0x10000);
      iVar3 = 0;
      while( true ) {
        if (*(int *)(param_1 + 0x68) == 0) break;
        iVar4 = (*(code *)PTR_rts_queue_count_00063a84)();
        if (iVar4 <= iVar3) break;
        uVar2 = (*(code *)PTR_rts_queue_enumerate_00063ac8)(*(undefined4 *)(param_1 + 0x68),iVar3);
        (*(code *)PTR_rts_av_pipe_clear_0006382c)(uVar2);
        iVar3 = iVar3 + 1;
      }
    }
    if (*(int *)(param_1 + 100) == 0) {
      iVar3 = 0;
    }
    else {
      (*(code *)PTR_rts_av_clr_pipe_flags_00063a40)(*(int *)(param_1 + 100),0x10000);
      iVar3 = 0;
      while( true ) {
        if (*(int *)(param_1 + 100) == 0) break;
        iVar4 = (*(code *)PTR_rts_queue_count_00063a84)();
        if (iVar4 <= iVar3) break;
        uVar2 = (*(code *)PTR_rts_queue_enumerate_00063ac8)(*(undefined4 *)(param_1 + 100),iVar3);
        (*(code *)PTR_rts_av_pipe_clear_0006382c)(uVar2);
        iVar3 = iVar3 + 1;
      }
      iVar3 = *(int *)(param_1 + 100);
    }
    if (iVar3 != 0) {
      (*(code *)PTR_rts_queue_destroy_000632cc)();
    }
    *(undefined4 *)(param_1 + 100) = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      (*(code *)PTR_rts_queue_destroy_000632cc)();
    }
    puVar1 = PTR_rts_av_get_unit_priv_00063344;
    *(undefined4 *)(param_1 + 0x68) = 0;
    iVar3 = (*(code *)puVar1)(param_1);
    if (iVar3 != 0) {
      uVar2 = (*(code *)(PTR_LAB_00063268 + -0x5724))(param_1);
      iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
      if (iVar3 != 0) {
        uVar2 = (*pcVar6)(param_1);
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x68d4,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5d80,0x20c,uVar2);
      }
      uVar2 = (*(code *)(PTR_LAB_00063268 + -0x53f8))(param_1);
      iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
      if (iVar3 != 0) {
        uVar2 = (*pcVar6)(param_1);
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x68d4,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5d80,0x211,uVar2);
      }
      if (*(code **)(param_1 + 0x24) == (code *)0x0) {
        uVar2 = 0xffffffcb;
      }
      else {
        uVar2 = (**(code **)(param_1 + 0x24))(param_1);
      }
      iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
      if (iVar3 != 0) {
        uVar2 = (*pcVar6)(param_1);
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x68b0,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5d80,0x216,uVar2);
      }
    }
    piVar5 = *(int **)(param_1 + 0x80);
    piVar7 = (int *)**(int **)(param_1 + 0x80);
    while (puVar1 = PTR_rts_free_000638d4, piVar5 != (int *)(param_1 + 0x80)) {
      (*(code *)PTR_rts_av_obj_put_00063ab8)();
      piVar5 = piVar7;
      piVar7 = (int *)*piVar7;
    }
    iVar3 = *(int *)(param_1 + 0x80);
    piVar7 = *(int **)(param_1 + 0x84);
    *(int **)(iVar3 + 4) = piVar7;
    *piVar7 = iVar3;
    *(int **)(param_1 + 0x80) = piVar5;
    *(int **)(param_1 + 0x84) = piVar5;
    (*(code *)puVar1)(param_1);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== rts_av_get_unit_input_count @ 0001e6bc size=188

undefined4 rts_av_get_unit_input_count(undefined *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  puVar3 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6574,0x7ed,puVar3);
    param_1 = puVar3;
    (*(code *)PTR___assert_000637b8)
              (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x7ed,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -26000);
  }
  if (*(int *)(param_1 + 100) != 0) {
    iVar1 = (*(code *)PTR_rts_queue_empty_00063b60)();
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001e75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)PTR_rts_queue_count_00063a84)(*(undefined4 *)(puVar3 + 100));
      return uVar2;
    }
  }
  return 0;
}



// ==== rts_av_get_unit_output_count @ 0001e778 size=188

undefined4 rts_av_get_unit_output_count(undefined *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  puVar3 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x65b0,0x7f7,puVar3);
    param_1 = puVar3;
    (*(code *)PTR___assert_000637b8)
              (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x7f7,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x65d0);
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    iVar1 = (*(code *)PTR_rts_queue_empty_00063b60)();
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001e818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)PTR_rts_queue_count_00063a84)(*(undefined4 *)(puVar3 + 0x68));
      return uVar2;
    }
  }
  return 0;
}



// ==== rts_av_get_unit_input @ 0001e834 size=140

void rts_av_get_unit_input(undefined *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_00063268;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x65e8,0x813,param_1);
    puVar1 = PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x813,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6600);
  }
  (*(code *)(puVar1 + -0x5ea8))(*(undefined4 *)(param_1 + 100));
  return;
}



// ==== rts_av_get_unit_output @ 0001e8c0 size=140

void rts_av_get_unit_output(undefined *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_00063268;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6618,0x81e,param_1);
    puVar1 = PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x81e,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6630);
  }
  (*(code *)(puVar1 + -0x5ea8))(*(undefined4 *)(param_1 + 0x68));
  return;
}



// ==== rts_av_find_src_by_id @ 0001e94c size=236

int rts_av_find_src_by_id(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 100) != 0) &&
     (iVar1 = (*(code *)PTR_rts_queue_empty_00063b60)(), iVar1 == 0)) {
    for (iVar1 = 0; iVar2 = (*(code *)PTR_rts_queue_count_00063a84)(*(undefined4 *)(param_1 + 100)),
        iVar1 < iVar2; iVar1 = iVar1 + 1) {
      uVar3 = (*(code *)PTR_rts_queue_enumerate_00063ac8)(*(undefined4 *)(param_1 + 100),iVar1);
      iVar2 = (*(code *)PTR_rts_av_get_pipe_src_000636f0)(uVar3);
      if (iVar2 != 0) {
        iVar4 = (*(code *)PTR_rts_av_get_unit_id_000635a0)(iVar2);
        if (iVar4 == param_2) {
          return iVar2;
        }
        iVar2 = (*(code *)PTR_rts_av_find_src_by_id_000632ac)(iVar2,param_2);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
    }
  }
  return 0;
}



// ==== rts_av_is_changeable @ 0001ea38 size=160

bool rts_av_is_changeable(undefined *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6648,0x841,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x841,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6660);
  }
  if (*(int *)(param_1 + 100) == 0) {
    bVar1 = true;
  }
  else {
    iVar2 = (*(code *)PTR_rts_queue_count_00063a84)();
    bVar1 = iVar2 < 2;
  }
  return bVar1;
}



// ==== rts_av_is_unit_idle @ 0001ead8 size=300

undefined4 rts_av_is_unit_idle(undefined *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  
  puVar4 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6674,0x84e,puVar4);
    param_1 = puVar4;
    (*(code *)PTR___assert_000637b8)
              (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x84e,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6688);
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    iVar1 = (*(code *)PTR_rts_av_get_unit_type_00063618)();
    if (iVar1 != 1) {
      iVar1 = 0;
      if (*(int *)(puVar4 + 100) != 0) {
        for (; iVar3 = (*(code *)PTR_rts_queue_count_00063a84)(*(undefined4 *)(puVar4 + 100)),
            iVar1 < iVar3; iVar1 = iVar1 + 1) {
          uVar2 = (*(code *)PTR_rts_queue_enumerate_00063ac8)(*(undefined4 *)(puVar4 + 100),iVar1);
          iVar3 = (*(code *)PTR_rts_av_pipe_poll_00063a48)(uVar2);
          if (iVar3 == 0) goto LAB_0001eb74;
        }
      }
      uVar2 = (*(code *)PTR_rts_av_check_ready_00063a9c)(puVar4);
      return uVar2;
    }
LAB_0001eb74:
    uVar2 = 0xffffffb6;
  }
  return uVar2;
}



// ==== rts_av_set_unit_poll_fd @ 0001ec04 size=32

undefined4 rts_av_set_unit_poll_fd(undefined *param_1,undefined *param_2,uint param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x66a0,0x86e,param_1);
    param_3 = 0x86e;
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8;
    (*(code *)PTR___assert_000637b8)();
  }
  if (*(int *)(param_1 + 0x74) == 0) {
    if ((0 < (int)param_2) && ((param_3 & 7) != 0)) {
      *(undefined **)(param_1 + 0x100) = param_2;
      *(uint *)(param_1 + 0x104) = param_3 & 7;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x104) = 0;
    return 0;
  }
  return 0xffffffb6;
}



// ==== rts_av_set_unit_event_trigger @ 0001ecb4 size=144

undefined4 rts_av_set_unit_event_trigger(undefined *param_1,undefined *param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x66d8,0x8a2,param_1);
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8;
    (*(code *)PTR___assert_000637b8)
              (param_1,param_2,0x8a2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x66f8);
  }
  if (param_2 == (undefined *)0x0) {
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x11c) = 1;
  }
  return 0;
}



// ==== rts_av_new_unit @ 0001ed44 size=100

int rts_av_new_unit(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_30 [24];
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  puVar6 = PTR_DAT_0006325c;
  if (*(int *)(PTR_DAT_0006325c + 0x3c08) == 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6be8,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5d44,0x98);
LAB_0001ede8:
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6890,puVar1 + -0x5d38,0x1a8,param_1);
    return 0;
  }
  (*(code *)PTR_rts_queue_lock_00063304)();
  iVar2 = (*(code *)(PTR_LAB_00063268 + -0x5f2c))(param_1);
  (*(code *)PTR_rts_queue_unlock_000634c4)(*(undefined4 *)(puVar6 + 0x3c08));
  if (iVar2 == 0) goto LAB_0001ede8;
  iVar3 = (*(code *)PTR___rts_calloc_00063a28)(1,0x160,puVar1 + -0x5d38,0x1ac);
  if (iVar3 == 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6870,puVar1 + -0x5d38,0x1ae);
    return 0;
  }
  (*(code *)PTR_memcpy_00063908)(iVar3,iVar2,100);
  *(int *)(iVar3 + 0x80) = iVar3 + 0x80;
  puVar6 = PTR_rts_av_set_unit_event_trigger_0006345c;
  *(int *)(iVar3 + 0x84) = iVar3 + 0x80;
  *(undefined4 *)(iVar3 + 0x100) = 0xffffffff;
  (*(code *)puVar6)(iVar3,1);
  *(undefined4 *)(iVar3 + 0x128) = 0;
  puVar6 = PTR_rts_av_get_unit_type_00063618;
  *(undefined4 *)(iVar3 + 0x124) = 0;
  uVar4 = (*(code *)puVar6)(iVar3);
  if ((int)uVar4 < 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6840,puVar1 + -0x5d38,0x1bc,uVar4);
    goto LAB_0001f0b0;
  }
  if ((uVar4 & 1) != 0) {
    iVar2 = (*(code *)PTR_rts_queue_init_000635dc)();
    *(int *)(iVar3 + 0x68) = iVar2;
    if (iVar2 == 0) goto LAB_0001f0b0;
  }
  if ((uVar4 & 2) != 0) {
    iVar2 = (*(code *)PTR_rts_queue_init_000635dc)();
    *(int *)(iVar3 + 100) = iVar2;
    if (iVar2 == 0) goto LAB_0001f0b0;
  }
  uVar8 = 0xffffffcb;
  (*(code *)PTR_rts_av_set_input_limit_0006398c)(iVar3,1);
  if (*(code **)(iVar3 + 0x20) != (code *)0x0) {
    uVar8 = (**(code **)(iVar3 + 0x20))(iVar3);
  }
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar8);
  if (iVar2 == 0) {
    if ((param_2 != 0) && (*(code **)(iVar3 + 0x40) != (code *)0x0)) {
      uVar8 = (**(code **)(iVar3 + 0x40))(iVar3,param_2);
      iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar8);
      if (iVar2 != 0) {
        uVar5 = (*(code *)(PTR_LAB_00063268 + -0x4ec0))(iVar3);
        uVar7 = 0x1d8;
        puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x67f8;
        goto LAB_0001f09c;
      }
    }
    if (*(code **)(iVar3 + 0x60) == (code *)0x0) {
      return iVar3;
    }
    (**(code **)(iVar3 + 0x60))(auStack_30);
    if (*(code **)(iVar3 + 0x4c) == (code *)0x0) {
      uVar8 = 0xffffffcb;
    }
    else {
      uVar8 = (**(code **)(iVar3 + 0x4c))(iVar3,auStack_30);
    }
    iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar8);
    if (iVar2 == 0) {
      return iVar3;
    }
    uVar5 = (*(code *)(PTR_LAB_00063268 + -0x4ec0))(iVar3);
    uVar7 = 0x1e3;
    puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x67d4;
  }
  else {
    uVar5 = (*(code *)(PTR_LAB_00063268 + -0x4ec0))(iVar3);
    uVar7 = 0x1d0;
    puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6820;
  }
LAB_0001f09c:
  (*(code *)PTR_rts_log_000635ec)(4,puVar6,puVar1 + -0x5d38,uVar7,uVar5,uVar8);
LAB_0001f0b0:
  (*(code *)PTR_rts_av_delete_unit_00063acc)(iVar3);
  return 0;
}



// ==== rts_av_query_isp_ae @ 0001eec0 size=32

undefined4 rts_av_query_isp_ae(undefined4 param_1,int param_2)

{
  int unaff_s1;
  int unaff_gp;
  int in_stack_00000018;
  
  (**(code **)(unaff_gp + -0x7c54))(param_1,param_2 + -0x6840,unaff_s1 + -0x5d38,0x1bc);
  (**(code **)(in_stack_00000018 + -0x7774))();
  return 0;
}



// ==== rts_av_release_isp_ae @ 0001ef98 size=20

undefined4 rts_av_release_isp_ae(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_gp;
  int in_stack_00000018;
  
  (**(code **)(unaff_gp + -0x7c54))(param_1,*(int *)(unaff_gp + -0x7fd4) + -0x6820,param_3,0x1d0);
  (**(code **)(in_stack_00000018 + -0x7774))();
  return 0;
}



// ==== rts_av_get_isp_ae @ 0001efc4 size=140

int rts_av_get_isp_ae(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_s0;
  int unaff_s1;
  int in_stack_00000018;
  
  iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))();
  if (iVar1 == 0) {
    if (*(code **)(unaff_s0 + 0x60) == (code *)0x0) {
      return unaff_s0;
    }
    (**(code **)(unaff_s0 + 0x60))(&stack0x00000020);
    if (*(code **)(unaff_s0 + 0x4c) == (code *)0x0) {
      uVar2 = 0xffffffcb;
    }
    else {
      uVar2 = (**(code **)(unaff_s0 + 0x4c))();
    }
    iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar2);
    if (iVar1 == 0) {
      return unaff_s0;
    }
    (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + -0x4ec0))();
    uVar2 = 0x1e3;
    iVar1 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x67d4;
  }
  else {
    (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + -0x4ec0))();
    uVar2 = 0x1d8;
    iVar1 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x67f8;
  }
  (**(code **)(in_stack_00000018 + -0x7c54))(4,iVar1,unaff_s1 + -0x5d38,uVar2);
  (**(code **)(in_stack_00000018 + -0x7774))();
  return 0;
}



// ==== rts_av_set_isp_ae @ 0001f04c size=132

undefined4 rts_av_set_isp_ae(void)

{
  int iVar1;
  undefined4 unaff_s0;
  int unaff_s1;
  int unaff_gp;
  int in_stack_00000018;
  
  iVar1 = (**(code **)(unaff_gp + -0x7ec0))(0xffffffcb);
  if (iVar1 != 0) {
    (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + -0x4ec0))();
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x67d4,unaff_s1 + -0x5d38,0x1e3);
    (**(code **)(in_stack_00000018 + -0x7774))();
    unaff_s0 = 0;
  }
  return unaff_s0;
}



// ==== rts_av_refresh_isp_ae_statis @ 0001f0d4 size=20

void rts_av_refresh_isp_ae_statis(void)

{
  return;
}



// ==== rts_av_get_unit_event_trigger @ 0001f0e8 size=124

undefined4 rts_av_get_unit_event_trigger(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6718,0x8ae,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x8ae,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6738);
  }
  return *(undefined4 *)(param_1 + 0x11c);
}



// ==== rts_av_unit_keep_active @ 0001f164 size=188

undefined4 rts_av_unit_keep_active(undefined *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x62c0,0x6a0,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x6a0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x62d8);
  }
  iVar1 = (*(code *)PTR_rts_av_get_unit_event_trigger_00063634)();
  if ((iVar1 == 0) || (iVar1 = (*(code *)PTR_rts_av_get_unit_type_00063618)(param_1), iVar1 == 1)) {
    uVar2 = 1;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 8);
  }
  return uVar2;
}



// ==== rts_av_keep_unit_active @ 0001f220 size=248

undefined4 rts_av_keep_unit_active(undefined *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar3 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6408,0x75d,puVar3);
    param_1 = puVar3;
    (*(code *)PTR___assert_000637b8)
              (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x75d,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6420);
  }
  *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + 1;
  uVar1 = 0xffffffef;
  if (((*(int *)(param_1 + 0x74) != 0) && (*(int *)(puVar3 + 0xd4) != 0)) &&
     (*(int *)(puVar3 + 0x120) == 0)) {
    iVar2 = (*(code *)(PTR_LAB_00063268 + -0x5d68))();
    if ((iVar2 == 0) &&
       (iVar2 = (*(code *)PTR_rts_av_unit_keep_active_0006342c)(puVar3), iVar2 == 0)) {
      uVar1 = 0;
    }
    else {
      (*(code *)PTR_rts_av_check_and_run_unit_00063638)(puVar3);
      uVar1 = 0;
    }
  }
  return uVar1;
}



// ==== rts_av_unit_send @ 0001f318 size=276

undefined4 rts_av_unit_send(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0xfffffff6;
  }
  else {
    iVar1 = (*(code *)PTR_rts_av_get_unit_event_trigger_00063634)();
    if (iVar1 == 0) {
      uVar2 = 0xffffffe3;
    }
    else {
      uVar2 = 0xffffffe1;
      if (*(int *)(param_1 + 0x78) != 0) {
        *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
        if ((*(int *)(param_1 + 0x74) == 0) ||
           (((*(int *)(param_1 + 100) != 0 &&
             (iVar1 = (*(code *)PTR_rts_av_unit_keep_active_0006342c)(param_1), iVar1 == 0)) &&
            (iVar1 = (*(code *)(PTR_LAB_00063268 + -0x5d68))(param_1), iVar1 == 0)))) {
          uVar2 = 0xffffffef;
        }
        else {
          uVar2 = (*(code *)PTR_rts_av_check_ready_00063a9c)(param_1);
          iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
          if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar2 = (*(code *)PTR_rts_av_trigger_stream_00063868)
                              (*(undefined4 *)(param_1 + 0x78),param_1);
            return uVar2;
          }
        }
      }
    }
  }
  return uVar2;
}



// ==== rts_av_get_unit_loop @ 0001f42c size=136

void rts_av_get_unit_loop(undefined *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)PTR_rts_av_get_stream_loop_00063a54;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6750,0x8b5,param_1);
    UNRECOVERED_JUMPTABLE = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x8b5,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6768);
  }
                    /* WARNING: Could not recover jumptable at 0x0001f4ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)(param_1 + 0x78));
  return;
}



// ==== rts_av_get_unit_buffer_obj @ 0001f4b4 size=124

undefined4 rts_av_get_unit_buffer_obj(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6784,0x8bc,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x8bc,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x67a0);
  }
  return *(undefined4 *)(param_1 + 0x124);
}



// ==== rts_av_loop_open @ 0001f860 size=76

int * rts_av_loop_open(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  piVar2 = (int *)(*(code *)PTR___rts_calloc_00063a28)
                            (1,0x20,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5900,0xdb);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    iVar3 = (*(code *)PTR_epoll_create_000636fc)(1);
    *piVar2 = iVar3;
    if (iVar3 < 0) {
      puVar4 = (undefined4 *)(*(code *)PTR___errno_location_000632b4)();
      uVar5 = (*(code *)PTR_strerror_000639d4)(*puVar4);
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c68,puVar1 + -0x5900,0xe3,uVar5);
      (*(code *)PTR_rts_free_000638d4)(piVar2);
      piVar2 = (int *)0x0;
    }
    else {
      uVar6 = (*(code *)PTR_fcntl_000635ac)(iVar3,1);
      (*(code *)PTR_fcntl_000635ac)(iVar3,2,uVar6 | 1);
      piVar2[2] = (int)(piVar2 + 2);
      piVar2[3] = (int)(piVar2 + 2);
      piVar2[4] = (int)(piVar2 + 4);
      piVar2[5] = (int)(piVar2 + 4);
      piVar2[1] = 0;
      if (param_1 < 1) {
        piVar2[6] = 100;
      }
      else {
        piVar2[6] = param_1;
      }
    }
  }
  return piVar2;
}



// ==== rts_av_loop_close @ 0001f9a8 size=500

void rts_av_loop_close(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int *piVar7;
  int *unaff_s2;
  
  if (param_1 == (int *)0x0) {
    piVar7 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c48);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5914,0xfa,piVar7);
    uVar5 = 0xfa;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5ce8;
    puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5928;
    param_1 = piVar7;
  }
  else {
    if (*param_1 < 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5938,0x6c,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c94);
    }
    unaff_s2 = param_1 + 2;
    if (-1 < *param_1) goto LAB_0001fa90;
    uVar5 = 0x6c;
    piVar7 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c94);
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5ce8;
    puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5948;
  }
  while( true ) {
    (*(code *)PTR___assert_000637b8)(piVar7,puVar3,uVar5,puVar6);
LAB_0001fa90:
    puVar3 = PTR_LAB_00063268;
    piVar2 = *(int **)param_1[2];
    piVar7 = (int *)param_1[2];
    while( true ) {
      piVar1 = piVar2;
      if (piVar7 == unaff_s2) break;
      (*(code *)(puVar3 + -0xaa8))(param_1);
      piVar2 = (int *)*piVar1;
      piVar7 = piVar1;
    }
    if (*param_1 < 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5978,0x8d,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c94);
    }
    uVar5 = 0x8d;
    if (-1 < *param_1) break;
    piVar7 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c94);
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5ce8;
    puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5988;
  }
  piVar2 = (int *)*(int *)param_1[4];
  piVar7 = (int *)param_1[4];
  while (piVar1 = piVar2, piVar7 + -4 != param_1) {
    piVar2 = (int *)piVar7[1];
    iVar4 = *piVar7;
    *(int **)(iVar4 + 4) = piVar2;
    *piVar2 = iVar4;
    *piVar7 = (int)piVar7;
    piVar7[1] = (int)piVar7;
    piVar2 = (int *)*piVar1;
    piVar7 = piVar1;
  }
  (*(code *)PTR_close_00063a70)();
  piVar7[-4] = -1;
  return;
}



// ==== rts_av_loop_end @ 0001fb9c size=44

undefined4 rts_av_loop_end(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (param_1 == (int *)0x0) {
    piVar2 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5cf0);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5998,0x105,piVar2);
    uVar1 = 0x105;
    param_1 = piVar2;
  }
  else {
    if (*param_1 < 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5998,0x106,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c94);
    }
    if (-1 < *param_1) goto LAB_0001fc68;
    uVar1 = 0x106;
    piVar2 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c94);
  }
  (*(code *)PTR___assert_000637b8)
            (piVar2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5ce8,uVar1,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x59a8);
LAB_0001fc68:
  param_1[1] = 0;
  if (param_1[7] != 0) {
    (*(code *)PTR_kill_00063418)(param_1[7],0x120);
  }
  return 0;
}



// ==== rts_av_add_poll_fd @ 0001fc94 size=724

undefined4 rts_av_add_poll_fd(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 local_28 [2];
  int *local_20;
  
  if (param_1 == (int *)0x0) {
    piVar6 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5cf0);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x59bc,0x115,piVar6);
    uVar5 = 0x115;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5ce8;
    param_2 = piVar6;
  }
  else {
    if (*param_1 < 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x59bc,0x116,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c94);
    }
    if (-1 < *param_1) goto LAB_0001fd70;
    uVar5 = 0x116;
    piVar6 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c94);
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5ce8;
  }
  while( true ) {
    while( true ) {
      while( true ) {
        (*(code *)PTR___assert_000637b8)
                  (piVar6,puVar3,uVar5,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x59d0);
LAB_0001fd70:
        if (param_2 != (int *)0x0) break;
        piVar6 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c40);
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + -0x59bc,0x117,piVar6);
        uVar5 = 0x117;
        puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5ce8;
        param_2 = piVar6;
      }
      iVar8 = param_2[1];
      if (iVar8 < 0) {
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + -0x59bc,0x118,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c3c);
        iVar8 = param_2[1];
      }
      if (-1 < iVar8) break;
      uVar5 = 0x118;
      piVar6 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c3c);
      puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5ce8;
    }
    iVar8 = *param_2;
    if (iVar8 == 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x59bc,0x119,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c2c);
      iVar8 = *param_2;
    }
    if (iVar8 != 0) break;
    uVar5 = 0x119;
    piVar6 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c2c);
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5ce8;
  }
  iVar8 = (*(code *)(PTR_LAB_00063268 + -0x90c))(param_1,param_2);
  if (iVar8 == 0) {
    local_28[0] = (*(code *)(PTR_LAB_00063268 + -0xad0))(param_2[2]);
    local_20 = param_2;
    iVar8 = (*(code *)PTR_epoll_ctl_00063724)(*param_1,1,param_2[1],local_28);
    uVar5 = local_28[0];
    puVar3 = PTR_rts_log_000635ec;
    iVar7 = param_2[1];
    if (iVar8 < 0) {
      puVar1 = (undefined4 *)(*(code *)PTR___errno_location_000632b4)();
      uVar2 = (*(code *)PTR_strerror_000639d4)(*puVar1);
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c24,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x59bc,0x126,iVar7,uVar5,uVar2);
      return 0xffffffe4;
    }
    puVar1 = (undefined4 *)param_1[3];
    iVar8 = param_2[2];
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5bfc;
    param_1[3] = (int)(param_2 + 5);
    param_2[5] = (int)(param_1 + 2);
    param_2[6] = (int)puVar1;
    *puVar1 = param_2 + 5;
    param_2[4] = (int)param_1;
    (*(code *)puVar3)(0,puVar4,iVar7,iVar8);
  }
  return 0;
}



// ==== rts_av_del_poll_fd @ 0001ff78 size=384

undefined4 rts_av_del_poll_fd(undefined *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int *piVar4;
  int iVar5;
  
  puVar3 = param_1;
  if (param_1 != (undefined *)0x0) goto LAB_0002004c;
  puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c40;
  (*(code *)PTR_rts_log_000635ec)
            (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5a04,0x139,puVar3);
  uVar2 = 0x139;
  while( true ) {
    (*(code *)PTR___assert_000637b8)
              (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5ce8,uVar2,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5a18);
LAB_0002004c:
    piVar4 = *(int **)(puVar3 + 0x10);
    if (piVar4 == (int *)0x0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5be8,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5a04,0x13b);
      return 0xfffffff4;
    }
    iVar5 = *piVar4;
    if (iVar5 < 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5a04,0x140,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c94);
      iVar5 = *piVar4;
    }
    if (-1 < iVar5) break;
    uVar2 = 0x140;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c94;
  }
  iVar5 = (*(code *)(PTR_LAB_00063268 + -0x90c))(piVar4,param_1);
  uVar2 = 0xfffffff1;
  if (iVar5 != 0) {
    (*(code *)(PTR_LAB_00063268 + -0xaa8))(piVar4,param_1);
    iVar5 = piVar4[7];
    if ((iVar5 != 0) && (iVar1 = (*(code *)PTR_syscall_000634a8)(0x107e), iVar5 != iVar1)) {
      (*(code *)PTR_kill_00063418)(piVar4[7],0x120);
    }
    uVar2 = 0;
  }
  return uVar2;
}



// ==== rts_av_mod_poll_fd @ 000200f8 size=424

undefined4 rts_av_mod_poll_fd(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 local_20 [2];
  int *local_18;
  
  piVar5 = param_1;
  if (param_1 != (int *)0x0) goto LAB_000201e0;
  param_1 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c40);
  (*(code *)PTR_rts_log_000635ec)
            (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5a2c,0x153,param_1);
  uVar4 = 0x153;
  puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5ce8;
  piVar5 = param_1;
  while( true ) {
    while( true ) {
      while( true ) {
        (*(code *)PTR___assert_000637b8)
                  (param_1,puVar3,uVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5a40);
LAB_000201e0:
        piVar6 = (int *)param_1[4];
        if (piVar6 == (int *)0x0) {
          (*(code *)PTR_rts_log_000635ec)
                    (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5be8,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5a2c,0x155);
          return 0xfffffff4;
        }
        iVar1 = (*(code *)(PTR_LAB_00063268 + -0x90c))(piVar6,piVar5);
        if (iVar1 == 0) {
          return 0xfffffff1;
        }
        iVar1 = *piVar6;
        if (iVar1 < 0) {
          (*(code *)PTR_rts_log_000635ec)
                    (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5a2c,0x15d,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c94);
          iVar1 = *piVar6;
        }
        if (-1 < iVar1) break;
        uVar4 = 0x15d;
        param_1 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c94);
        puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5ce8;
      }
      iVar1 = piVar5[1];
      if (iVar1 < 0) {
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5a2c,0x15e,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c3c);
        iVar1 = piVar5[1];
      }
      if (-1 < iVar1) break;
      uVar4 = 0x15e;
      param_1 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c3c);
      puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5ce8;
    }
    iVar1 = *piVar5;
    if (iVar1 == 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5a2c,0x15f,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c2c);
      iVar1 = *piVar5;
    }
    if (iVar1 != 0) break;
    uVar4 = 0x15f;
    param_1 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c2c);
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5ce8;
  }
  local_20[0] = (*(code *)(PTR_LAB_00063268 + -0xad0))(piVar5[2]);
  local_18 = piVar5;
  iVar1 = (*(code *)PTR_epoll_ctl_00063724)(*piVar6,3,piVar5[1],local_20);
  uVar4 = local_20[0];
  uVar7 = 0;
  if (iVar1 < 0) {
    iVar1 = piVar5[1];
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_000632b4)();
    uVar7 = (*(code *)PTR_strerror_000639d4)(*puVar2);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c24,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5a2c,0x166,iVar1,uVar4,uVar7);
    uVar7 = 0xffffffe4;
  }
  return uVar7;
}



// ==== rts_av_add_task @ 00020378 size=308

undefined4 rts_av_add_task(int param_1,undefined *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5cf0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5a50,0x173,param_2);
    uVar2 = 0x173;
  }
  else {
    if (param_2 != (undefined *)0x0) goto LAB_0002043c;
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c70;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5a50,0x174,param_2);
    uVar2 = 0x174;
  }
  (*(code *)PTR___assert_000637b8)
            (param_2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5ce8,uVar2,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5a60);
LAB_0002043c:
  iVar1 = (*(code *)(PTR_LAB_00063268 + -0x854))();
  if (iVar1 == 0) {
    uVar4 = (*(code *)PTR_rts_get_monotonic_raw_time_0006355c)();
    *(undefined8 *)(param_2 + 0x18) = uVar4;
    *(int *)(param_2 + 0xc) = param_1;
    if (0 < *(int *)(param_2 + 8)) {
      *(int *)(param_2 + 0x20) = *(int *)(param_2 + 8);
    }
    puVar3 = *(undefined4 **)(param_1 + 0x14);
    *(undefined **)(param_1 + 0x14) = param_2 + 0x10;
    *(int *)(param_2 + 0x10) = param_1 + 0x10;
    *(undefined4 **)(param_2 + 0x14) = puVar3;
    *puVar3 = param_2 + 0x10;
  }
  return 0;
}



// ==== rts_av_del_task @ 000204ac size=208

undefined4 rts_av_del_task(undefined *param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar3 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c70;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5a98,0x186,puVar3);
    param_1 = puVar3;
    (*(code *)PTR___assert_000637b8)
              (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5ce8,0x186,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5aa8);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5bb8,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5a98,0x188);
  }
  piVar1 = *(int **)(puVar3 + 0x14);
  iVar2 = *(int *)(puVar3 + 0x10);
  *(int **)(iVar2 + 4) = piVar1;
  *piVar1 = iVar2;
  *(undefined **)(puVar3 + 0x10) = puVar3 + 0x10;
  *(undefined **)(puVar3 + 0x14) = puVar3 + 0x10;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  return 0;
}



// ==== rts_av_loop_run_lk @ 0002057c size=332

undefined4 rts_av_loop_run_lk(int *param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  uint *puVar11;
  int *piVar12;
  int in_t8;
  undefined8 uVar13;
  undefined8 uVar14;
  uint local_58 [12];
  
  if (param_1 == (int *)0x0) {
    piVar10 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5cf0);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5abc,0x196,piVar10);
    uVar9 = 0x196;
    param_1 = piVar10;
  }
  else {
    if (*param_1 < 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5abc,0x197,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c94);
    }
    in_t8 = 1;
    if (-1 < *param_1) goto LAB_0002066c;
    uVar9 = 0x197;
    piVar10 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c94);
  }
  (*(code *)PTR___assert_000637b8)
            (piVar10,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5ce8,uVar9,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5ad0);
LAB_0002066c:
  puVar3 = PTR_syscall_000634a8;
  param_1[1] = in_t8;
  iVar4 = (*(code *)puVar3)(0x107e);
  puVar3 = PTR_rts_delay_0006332c;
  param_1[7] = iVar4;
  (*(code *)puVar3)(1000,0);
  (*(code *)PTR_rts_log_000635ec)(1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5b88);
  puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  while (param_1[1] != 0) {
    uVar13 = (*(code *)PTR_rts_get_monotonic_raw_time_0006355c)();
    iVar4 = param_1[6];
    (*(code *)PTR_rts_av_wait_00063a58)(puVar3 + -0x5ae0);
    puVar2 = PTR_LAB_00063268;
    piVar12 = (int *)*(int *)param_1[4];
    piVar10 = (int *)param_1[4];
    while (piVar1 = piVar12, piVar12 = piVar10 + -4, piVar12 != param_1) {
      if (0 < piVar10[-2]) {
        uVar5 = 999999 - piVar10[2];
        uVar8 = uVar5 + (int)uVar13;
        uVar14 = (*(code *)PTR___udivdi3_00063af8)
                           (uVar8,(uint)(uVar8 < uVar5) +
                                  (((int)((ulonglong)uVar13 >> 0x20) - (uint)(999999 < uVar5)) -
                                  piVar10[3]),1000000,0);
        uVar5 = (uint)((ulonglong)uVar14 >> 0x20);
        uVar8 = piVar10[4];
        if ((uVar5 < (uint)((int)uVar8 >> 0x1f)) ||
           (((int)uVar8 >> 0x1f == uVar5 && ((uint)uVar14 < uVar8)))) {
          piVar10[4] = uVar8 - (uint)uVar14;
        }
        else {
          iVar6 = (*(code *)(puVar2 + -0x854))(param_1,piVar12);
          if ((iVar6 != 0) && ((code *)*piVar12 != (code *)0x0)) {
            (*(code *)*piVar12)(piVar12);
          }
          *(undefined8 *)(piVar10 + 2) = uVar13;
          piVar10[4] = piVar10[-2];
        }
        if (piVar10[4] < iVar4) {
          iVar4 = piVar10[4];
        }
      }
      piVar12 = (int *)*piVar1;
      piVar10 = piVar1;
    }
    puVar11 = local_58;
    (*(code *)PTR_rts_av_post_00063744)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5ae0);
    iVar4 = (*(code *)PTR_epoll_wait_00063a50)(*param_1,puVar11,3,iVar4);
    (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5af0);
    puVar2 = PTR_LAB_00063268;
    for (iVar6 = 0; iVar6 < iVar4; iVar6 = iVar6 + 1) {
      piVar10 = (int *)puVar11[2];
      if (((piVar10 != (int *)0x0) && (*piVar10 != 0)) &&
         (iVar7 = (*(code *)(puVar2 + -0x90c))(param_1,piVar10), iVar7 != 0)) {
        uVar5 = *puVar11 & 1;
        if ((*puVar11 & 4) != 0) {
          uVar5 = uVar5 | 2;
        }
        (*(code *)*piVar10)(piVar10,uVar5);
      }
      puVar11 = puVar11 + 4;
    }
    (*(code *)PTR_rts_av_post_00063744)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5af0);
  }
  (*(code *)PTR_rts_log_000635ec)(1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5b7c);
  param_1[7] = 0;
  return 0;
}



// ==== rts_av_add_poll_fd_lk @ 000208f4 size=120

undefined4 rts_av_add_poll_fd_lk(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5b08);
  uVar2 = (*(code *)PTR_rts_av_add_poll_fd_00063864)(param_1,param_2);
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x5b08);
  return uVar2;
}



// ==== rts_av_del_poll_fd_lk @ 0002096c size=112

undefined4 rts_av_del_poll_fd_lk(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5b20);
  uVar2 = (*(code *)PTR_rts_av_del_poll_fd_00063378)(param_1);
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x5b20);
  return uVar2;
}



// ==== rts_av_mod_poll_fd_lk @ 000209dc size=112

undefined4 rts_av_mod_poll_fd_lk(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5b38);
  uVar2 = (*(code *)PTR_rts_av_mod_poll_fd_00063a44)(param_1);
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x5b38);
  return uVar2;
}



// ==== rts_av_add_task_lk @ 00020a4c size=120

undefined4 rts_av_add_task_lk(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5b4c);
  uVar2 = (*(code *)PTR_rts_av_add_task_00063900)(param_1,param_2);
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x5b4c);
  return uVar2;
}



// ==== rts_av_del_task_lk @ 00020ac4 size=112

undefined4 rts_av_del_task_lk(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5b60);
  uVar2 = (*(code *)PTR_rts_av_del_task_000637f0)(param_1);
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x5b60);
  return uVar2;
}



// ==== rts_av_get_cur_time @ 00020b40 size=76

void rts_av_get_cur_time(void)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)PTR_rts_get_monotonic_raw_time_0006355c)();
  (*(code *)PTR___udivdi3_00063af8)((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),1000,0);
  return;
}



// ==== rts_av_get_time @ 00020b8c size=68

longlong rts_av_get_time(int *param_1)

{
  if (param_1 != (int *)0x0) {
    return (longlong)*param_1 * 1000000 + (longlong)param_1[1];
  }
  return 0;
}



// ==== rts_av_check_valid_stepwise_value @ 00020c00 size=64

undefined4 rts_av_check_valid_stepwise_value(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  
  if ((param_2 <= param_1) && (param_1 <= param_3)) {
    if (param_4 == 0) {
      trap(0x1c00);
    }
    uVar1 = 0xffffffcf;
    if ((param_1 - param_2) % param_4 == 0) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0xffffffcf;
}



// ==== rts_av_make_valid_stepwise_value @ 00020c40 size=4

uint rts_av_make_valid_stepwise_value(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_2;
  if ((param_2 <= param_1) && (uVar1 = param_3, param_1 <= param_3)) {
    uVar1 = (param_1 - param_2) % param_4;
    if (param_4 == 0) {
      trap(0x1c00);
    }
    if (param_4 < uVar1 << 1) {
      param_1 = param_1 + param_4;
    }
    uVar1 = param_1 - uVar1;
  }
  return uVar1;
}



// ==== rts_av_get_h264_mediainfo @ 00020c44 size=72

uint rts_av_get_h264_mediainfo(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int in_t8;
  uint uVar1;
  
  uVar1 = param_2;
  if ((in_t8 == 0) && (uVar1 = param_3, param_1 <= param_3)) {
    uVar1 = (param_1 - param_2) % param_4;
    if (param_4 == 0) {
      trap(0x1c00);
    }
    if (param_4 < uVar1 << 1) {
      param_1 = param_1 + param_4;
    }
    uVar1 = param_1 - uVar1;
  }
  return uVar1;
}



// ==== rts_av_get_reverse_rotation @ 00020c8c size=32

int rts_av_get_reverse_rotation(int param_1)

{
  int iVar1;
  
  iVar1 = 2;
  if ((param_1 != 1) && (iVar1 = 1, param_1 != 2)) {
    iVar1 = param_1;
  }
  return iVar1;
}



// ==== rts_av_overlay_rotation @ 00020cac size=60

int rts_av_overlay_rotation(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 1) {
    if (param_2 == 2) {
      return 0;
    }
    iVar1 = 3;
    if (param_2 == 3) {
      return 2;
    }
LAB_00020d40:
    if (param_2 == 1) {
      param_1 = iVar1;
    }
    return param_1;
  }
  if (param_1 < 2) {
    if (param_1 == 0) {
      param_1 = param_2;
    }
    return param_1;
  }
  iVar1 = 2;
  if (param_1 == 2) {
    if (param_2 == 2) {
      return 3;
    }
    if (param_2 != 3) {
      iVar1 = 2;
      if (param_2 == 1) {
        iVar1 = 0;
      }
      return iVar1;
    }
  }
  else {
    if (param_1 != 3) {
      return param_1;
    }
    if (param_2 != 2) {
      if (param_2 == 3) {
        return 0;
      }
      goto LAB_00020d40;
    }
  }
  return 1;
}



// ==== rts_av_get_h264_profile @ 00020ce8 size=52

undefined4 rts_av_get_h264_profile(undefined4 param_1,int param_2)

{
  undefined4 in_v0;
  
  if (param_2 == 2) {
    return 0;
  }
  if (param_2 == 3) {
    return 2;
  }
  if (param_2 == 1) {
    in_v0 = 3;
  }
  return in_v0;
}



// ==== rts_av_rotate_coordinate @ 00020d5c size=96

undefined4 rts_av_rotate_coordinate(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_4;
  iVar1 = *param_5;
  if (param_3 == 2) {
    *param_4 = iVar1;
    iVar2 = param_1 - iVar2;
  }
  else {
    if (param_3 == 3) {
      *param_4 = param_1 - iVar2;
      *param_5 = param_2 - iVar1;
      return 0;
    }
    if (param_3 != 1) {
      return 0;
    }
    *param_4 = param_2 - iVar1;
  }
  *param_5 = iVar2;
  return 0;
}



// ==== rts_av_cmp_profile @ 00020dbc size=160

undefined4 rts_av_cmp_profile(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  if (uVar1 == *param_2) {
    if (uVar1 == 0) {
      return 0;
    }
    if ((uVar1 & 0x8000) == 0) {
      if (param_1[1] != param_2[1]) {
        return 0xffffffc0;
      }
      if (param_1[2] != param_2[2]) {
        return 0xffffffc0;
      }
      if (param_1[3] == param_2[3]) {
        uVar1 = param_1[4];
        uVar2 = param_2[4];
        goto LAB_00020e3c;
      }
    }
    else {
      if (param_1[1] != param_2[1]) {
        return 0xffffffc0;
      }
      if (param_1[2] == param_2[2]) {
        uVar1 = param_1[3];
        uVar2 = param_2[3];
LAB_00020e3c:
        uVar3 = 0xffffffc0;
        if (uVar1 == uVar2) {
          uVar3 = 0;
        }
        return uVar3;
      }
    }
  }
  return 0xffffffc0;
}



// ==== rts_av_obj_init @ 00020e60 size=8

void rts_av_obj_init(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x57d0,0x12,puVar1);
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58dc;
    param_1 = puVar1;
    (*(code *)PTR___assert_000637b8)
              (puVar1,param_2,0x12,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x57e0);
  }
  (*(code *)PTR_pthread_mutex_init_00063490)(param_1 + 0xc,0);
  *(undefined **)(puVar1 + 100) = param_2;
  *(undefined **)puVar1 = puVar1;
  *(undefined **)(puVar1 + 4) = puVar1;
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined **)(puVar1 + 0x68) = puVar1;
  return;
}



// ==== rts_av_set_h264_ctrl @ 00020e68 size=136

void rts_av_set_h264_ctrl(int param_1,int param_2)

{
  int iVar1;
  int in_t9;
  int unaff_gp;
  int iVar2;
  
  iVar2 = unaff_gp + in_t9;
  iVar1 = param_1;
  if (param_1 == 0) {
    iVar1 = *(int *)(iVar2 + -0x7fd4) + -0x58e0;
    (**(code **)(iVar2 + -0x7c54))
              (4,*(int *)(iVar2 + -0x7fd4) + -0x6cf0,*(int *)(iVar2 + -0x7fd4) + -0x57d0,0x12,iVar1)
    ;
    param_2 = *(int *)(iVar2 + -0x7fd4) + -0x58dc;
    param_1 = iVar1;
    (**(code **)(iVar2 + -0x7a88))(iVar1,param_2,0x12,*(int *)(iVar2 + -0x7fd4) + -0x57e0);
  }
  (**(code **)(iVar2 + -0x7db0))(param_1 + 0xc,0);
  *(int *)(iVar1 + 100) = param_2;
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(int *)(iVar1 + 0x68) = iVar1;
  return;
}



// ==== rts_av_get_h264_ctrl @ 00020ef0 size=36

void rts_av_get_h264_ctrl(void)

{
  int unaff_s0;
  
  *(int *)unaff_s0 = unaff_s0;
  *(int *)(unaff_s0 + 4) = unaff_s0;
  *(undefined4 *)(unaff_s0 + 8) = 0;
  *(int *)(unaff_s0 + 0x68) = unaff_s0;
  return;
}



// ==== rts_av_obj_release @ 00020f14 size=100

void rts_av_obj_release(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = PTR_pthread_mutex_destroy_00063828;
  if (param_1 != (int *)0x0) {
    piVar3 = (int *)param_1[1];
    iVar2 = *param_1;
    *(int **)(iVar2 + 4) = piVar3;
    *piVar3 = iVar2;
    *param_1 = (int)param_1;
    param_1[1] = (int)param_1;
    (*(code *)puVar1)(param_1 + 3);
    if ((code *)param_1[0x19] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00020f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x19])(param_1);
      return;
    }
  }
  return;
}



// ==== rts_av_request_h264_key_frame @ 00020f78 size=20

void rts_av_request_h264_key_frame(void)

{
  return;
}



// ==== rts_av_obj_set_name @ 00020f8c size=52

undefined4 rts_av_obj_set_name(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x57f4,0x2c,puVar2);
    uVar1 = 0x2c;
  }
  else {
    if (*(int *)(param_1 + 0x68) != param_1) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x57f4,0x2d,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5888);
    }
    if (*(int *)(param_1 + 0x68) == param_1) goto rts_av_release_h264_roi;
    uVar1 = 0x2d;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5888;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58dc,uVar1,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5808);
rts_av_release_h264_roi:
  (*(code *)PTR_vsnprintf_00063600)();
  return 0;
}



// ==== rts_av_query_h264_roi @ 00020fc0 size=80

undefined4 rts_av_query_h264_roi(void)

{
  int unaff_s0;
  int unaff_gp;
  int iStack00000010;
  int in_stack_00000018;
  
  iStack00000010 = unaff_s0 + -0x58e0;
  (**(code **)(unaff_gp + -0x7c54))
            (4,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x57f4,0x2c);
  (**(code **)(in_stack_00000018 + -0x7a88))
            (unaff_s0 + -0x58e0,*(int *)(in_stack_00000018 + -0x7fd4) + -0x58dc,0x2c,
             *(int *)(in_stack_00000018 + -0x7fd4) + -0x5808);
  (**(code **)(in_stack_00000018 + -0x7c40))();
  return 0;
}



// ==== rts_av_release_h264_roi @ 0002106c size=8

undefined4 rts_av_release_h264_roi(undefined4 param_1)

{
  int unaff_gp;
  undefined1 *puStack00000020;
  
  puStack00000020 = &stack0x00000040;
  (**(code **)(unaff_gp + -0x7c40))(param_1,0x40);
  return 0;
}



// ==== rts_av_set_h264_roi @ 00021074 size=40

undefined4
rts_av_set_h264_roi(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *in_t9;
  undefined4 uStack00000020;
  
  uStack00000020 = param_4;
  (*in_t9)(param_1,0x40);
  return 0;
}



// ==== rts_av_obj_get_name @ 0002109c size=96

int rts_av_obj_get_name(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  if (param_1 == 0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x581c,0x38,puVar3);
    uVar2 = 0x38;
  }
  else {
    if (*(int *)(param_1 + 0x68) != param_1) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x581c,0x39,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5888);
    }
    if (*(int *)(param_1 + 0x68) == param_1) {
      return param_1 + 0x24;
    }
    uVar2 = 0x39;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5888;
  }
  iVar1 = (*(code *)PTR___assert_000637b8)
                    (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58dc,uVar2,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5830);
  return iVar1;
}



// ==== rts_av_get_h264_roi @ 000210fc size=40

void rts_av_get_h264_roi(undefined4 param_1,int param_2,undefined4 param_3)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7a88))
            (param_1,param_2 + -0x58dc,param_3,*(int *)(unaff_gp + -0x7fd4) + -0x5830);
  return;
}



// ==== rts_av_obj_get @ 0002117c size=8

undefined * rts_av_obj_get(undefined *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *unaff_s1;
  
  if (param_1 == (undefined *)0x0) {
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5840,0x40,puVar2);
    uVar1 = 0x40;
    param_1 = puVar2;
  }
  else {
    if (*(undefined **)(param_1 + 0x68) != param_1) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5840,0x41,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5888);
    }
    unaff_s1 = param_1 + 0xc;
    if (*(undefined **)(param_1 + 0x68) == param_1) goto LAB_00021250;
    uVar1 = 0x41;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5888;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58dc,uVar1,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5850);
LAB_00021250:
  (*(code *)PTR_pthread_mutex_lock_00063ae8)(unaff_s1);
  puVar2 = PTR_pthread_mutex_unlock_00063890;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  (*(code *)puVar2)(unaff_s1);
  return param_1;
}



// ==== rts_av_release_h264_roi_map @ 00021184 size=8

int rts_av_release_h264_roi_map(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_s1;
  int in_t9;
  code *pcVar4;
  int unaff_gp;
  int iVar5;
  
  iVar5 = unaff_gp + in_t9;
  if (param_1 == 0) {
    iVar3 = *(int *)(iVar5 + -0x7fd4) + -0x58e0;
    (**(code **)(iVar5 + -0x7c54))
              (4,*(int *)(iVar5 + -0x7fd4) + -0x6cf0,*(int *)(iVar5 + -0x7fd4) + -0x5840,0x40,iVar3)
    ;
    uVar2 = 0x40;
    iVar1 = *(int *)(iVar5 + -0x7fd4);
    param_1 = iVar3;
  }
  else {
    if (*(int *)(param_1 + 0x68) != param_1) {
      (**(code **)(iVar5 + -0x7c54))
                (4,*(int *)(iVar5 + -0x7fd4) + -0x6cf0,*(int *)(iVar5 + -0x7fd4) + -0x5840,0x41,
                 *(int *)(iVar5 + -0x7fd4) + -0x5888);
    }
    unaff_s1 = param_1 + 0xc;
    if (*(int *)(param_1 + 0x68) == param_1) goto LAB_00021250;
    uVar2 = 0x41;
    iVar1 = *(int *)(iVar5 + -0x7fd4);
    iVar3 = *(int *)(iVar5 + -0x7fd4) + -0x5888;
  }
  (**(code **)(iVar5 + -0x7a88))(iVar3,iVar1 + -0x58dc,uVar2,*(int *)(iVar5 + -0x7fd4) + -0x5850);
LAB_00021250:
  (**(code **)(iVar5 + -0x7758))(unaff_s1);
  pcVar4 = *(code **)(iVar5 + -0x79b0);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  (*pcVar4)(unaff_s1);
  return param_1;
}



// ==== rts_av_set_h264_roi_map @ 0002118c size=260

int rts_av_set_h264_roi_map(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_s1;
  code *pcVar4;
  int unaff_gp;
  
  if (param_1 == 0) {
    iVar3 = *(int *)(unaff_gp + -0x7fd4) + -0x58e0;
    (**(code **)(unaff_gp + -0x7c54))
              (4,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x5840,0x40)
    ;
    uVar2 = 0x40;
    iVar1 = *(int *)(unaff_gp + -0x7fd4);
    param_1 = iVar3;
  }
  else {
    if (*(int *)(param_1 + 0x68) != param_1) {
      (**(code **)(unaff_gp + -0x7c54))
                (4,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x5840,
                 0x41);
    }
    unaff_s1 = param_1 + 0xc;
    if (*(int *)(param_1 + 0x68) == param_1) goto LAB_00021250;
    uVar2 = 0x41;
    iVar1 = *(int *)(unaff_gp + -0x7fd4);
    iVar3 = *(int *)(unaff_gp + -0x7fd4) + -0x5888;
  }
  (**(code **)(unaff_gp + -0x7a88))
            (iVar3,iVar1 + -0x58dc,uVar2,*(int *)(unaff_gp + -0x7fd4) + -0x5850);
LAB_00021250:
  (**(code **)(unaff_gp + -0x7758))(unaff_s1);
  pcVar4 = *(code **)(unaff_gp + -0x79b0);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  (*pcVar4)(unaff_s1);
  return param_1;
}



// ==== rts_av_obj_put @ 00021290 size=164

void rts_av_obj_put(undefined *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *unaff_s1;
  int iVar4;
  code *pcVar5;
  
  if (param_1 == (undefined *)0x0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5860,0x4e,puVar3);
    uVar2 = 0x4e;
    param_1 = puVar3;
  }
  else {
    if (*(undefined **)(param_1 + 0x68) != param_1) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5860,0x4f,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5888);
    }
    unaff_s1 = *(undefined **)(param_1 + 0x68);
    pcVar5 = (code *)PTR_pthread_mutex_lock_00063ae8;
    if (unaff_s1 == param_1) goto LAB_00021368;
    uVar2 = 0x4f;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5888;
  }
  pcVar5 = (code *)PTR___assert_000637b8;
  (*(code *)PTR___assert_000637b8)
            (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58dc,uVar2,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5870);
LAB_00021368:
  (*pcVar5)(param_1 + 0xc);
  if (*(int *)(param_1 + 8) < 1) {
    bVar1 = false;
  }
  else {
    iVar4 = *(int *)(param_1 + 8) + -1;
    *(int *)(param_1 + 8) = iVar4;
    bVar1 = iVar4 == 0;
  }
  (*(code *)PTR_pthread_mutex_unlock_00063890)(param_1 + 0xc);
  if (bVar1) {
    (*(code *)PTR_rts_av_obj_release_00063924)(unaff_s1);
    return;
  }
  return;
}



// ==== rts_av_query_h264_roi_map @ 00021508 size=92

void rts_av_query_h264_roi_map(void)

{
  int unaff_s0;
  int unaff_s1;
  code *in_t9;
  code *pcVar1;
  int in_stack_00000010;
  
  (*in_t9)();
  pcVar1 = *(code **)(in_stack_00000010 + -0x796c);
  *(undefined4 *)(unaff_s0 + 4) = 0;
  (*pcVar1)();
  if (*(int *)(unaff_s1 + 0x1c) == *(int *)(in_stack_00000010 + -0x7fe4) + 0x3c30) {
    (**(code **)(in_stack_00000010 + -0x7bfc))(*(undefined4 *)(unaff_s1 + 0x24));
    return;
  }
  return;
}



// ==== rts_av_get_api_abi @ 00021568 size=24

undefined4 rts_av_get_api_abi(void)

{
  return *(undefined4 *)(PTR_DAT_0006325c + 0x3c10);
}



// ==== rts_av_init @ 00021580 size=44

undefined4 rts_av_init(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_DAT_0006325c;
  uVar3 = 0;
  (*(code *)PTR_pthread_mutex_lock_00063ae8)(PTR_DAT_0006325c + 0x3c14);
  if (*(int *)(puVar1 + 0x3c3c) == 0) {
    iVar2 = (*(code *)PTR_rts_av_new_stream_0006368c)();
    *(int *)(puVar1 + 0x3c38) = iVar2;
    if (iVar2 == 0) {
      uVar3 = 0xfffffff5;
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x57c0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5138,0x89);
    }
    else {
      *(undefined4 *)(puVar1 + 0x3c3c) = 1;
    }
  }
  (*(code *)PTR_pthread_mutex_unlock_00063890)(puVar1 + 0x3c14);
  return uVar3;
}



// ==== rts_av_get_h264_roi_map @ 000215ac size=144

undefined4 rts_av_get_h264_roi_map(void)

{
  int iVar1;
  int unaff_s0;
  undefined4 unaff_s2;
  code *in_t9;
  int unaff_gp;
  
  (*in_t9)(unaff_s0 + 0x3c14);
  if (*(int *)(unaff_s0 + 0x3c3c) == 0) {
    iVar1 = (**(code **)(unaff_gp + -0x7bb4))();
    *(int *)(unaff_s0 + 0x3c38) = iVar1;
    if (iVar1 == 0) {
      unaff_s2 = 0xfffffff5;
      (**(code **)(unaff_gp + -0x7c54))
                (4,*(int *)(unaff_gp + -0x7fd4) + -0x57c0,*(int *)(unaff_gp + -0x7fd4) + -0x5138,
                 0x89);
    }
    else {
      *(undefined4 *)(unaff_s0 + 0x3c3c) = 1;
    }
  }
  (**(code **)(unaff_gp + -0x79b0))(unaff_s0 + 0x3c14);
  return unaff_s2;
}



// ==== rts_av_release @ 0002163c size=172

undefined4 rts_av_release(void)

{
  int *piVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  undefined *puVar7;
  
  puVar3 = PTR_DAT_0006325c;
  (*(code *)PTR_pthread_mutex_lock_00063ae8)(PTR_DAT_0006325c + 0x3c14);
  puVar4 = PTR_LAB_00063268;
  if (*(int *)(puVar3 + 0x3c3c) != 0) {
    puVar7 = PTR_DAT_0006325c + 0x3c30;
    piVar5 = (int *)**(int **)(puVar3 + 0x3c30);
    piVar2 = *(int **)(puVar3 + 0x3c30);
    while( true ) {
      piVar1 = piVar5;
      if (piVar2 == (int *)puVar7) break;
      piVar5 = (int *)piVar2[1];
      iVar6 = *piVar2;
      *(int **)(iVar6 + 4) = piVar5;
      *piVar5 = iVar6;
      *piVar2 = (int)piVar2;
      piVar2[1] = (int)piVar2;
      (*(code *)(puVar4 + 0x142c))();
      piVar5 = (int *)*piVar1;
      piVar2 = piVar1;
    }
    if (*(int *)(puVar3 + 0x3c38) != 0) {
      (*(code *)PTR_rts_av_delete_stream_00063534)();
    }
    *(undefined4 *)(puVar3 + 0x3c38) = 0;
    *(undefined4 *)(puVar3 + 0x3c3c) = 0;
  }
  (*(code *)PTR_pthread_mutex_unlock_00063890)(puVar3 + 0x3c14);
  return 0;
}



// ==== rts_h1encoder_get_profile @ 0002187c size=292

uint rts_h1encoder_get_profile(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  int unaff_s5;
  undefined4 *puVar8;
  code *pcVar9;
  int unaff_gp;
  int in_stack_00000020;
  
  (**(code **)(unaff_gp + -0x79a4))();
  uVar4 = *(uint *)(unaff_s5 + 4);
  puVar3 = (uint *)0x0;
  iVar1 = (**(code **)(in_stack_00000020 + -0x7ec0))(uVar4);
  uVar5 = uVar4;
  if (iVar1 != 0) goto LAB_00021a58;
  uVar5 = 0xfffffff3;
  puVar3 = (uint *)0x0;
  iVar1 = (*(code *)(*(int *)(in_stack_00000020 + -0x7fd8) + 0x13e0))(uVar4);
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  iVar1 = (**(code **)(in_stack_00000020 + -0x7ec0))(uVar5);
  if (iVar1 != 0) goto LAB_00021a58;
  iVar1 = *(int *)(in_stack_00000020 + -0x7fd4);
  puVar3 = (uint *)(**(code **)(in_stack_00000020 + -0x7818))(1,0x18,iVar1 + -0x5164,0xd2);
  if (puVar3 == (uint *)0x0) {
    (**(code **)(in_stack_00000020 + -0x7c54))
              (4,*(int *)(in_stack_00000020 + -0x7fd4) + -0x5750,iVar1 + -0x5164,0xd4);
  }
  else {
    puVar7 = puVar3 + 4;
    pcVar9 = *(code **)(in_stack_00000020 + -0x7984);
    puVar3[4] = (uint)puVar7;
    puVar3[5] = (uint)puVar7;
    *puVar3 = uVar4;
    uVar5 = (*pcVar9)();
    puVar3[1] = uVar5;
    if (uVar5 != 0) {
      iVar1 = *(int *)(in_stack_00000020 + -0x7fe4);
      piVar6 = *(int **)(iVar1 + 0x3c30);
      uVar5 = *(int *)(in_stack_00000020 + -0x7fe4) + 0x3c30;
      if (piVar6 == (int *)uVar5) {
        uVar5 = (**(code **)(in_stack_00000020 + -0x7f40))(*(undefined4 *)(iVar1 + 0x3c38));
        iVar2 = (**(code **)(in_stack_00000020 + -0x7ec0))(uVar5);
        if (iVar2 == 0) {
          puVar8 = *(undefined4 **)(iVar1 + 0x3c34);
          *(uint **)(iVar1 + 0x3c34) = puVar7;
          puVar3[4] = (uint)piVar6;
          goto LAB_00021aec;
        }
        (**(code **)(in_stack_00000020 + -0x7c54))
                  (4,*(int *)(in_stack_00000020 + -0x7fd4) + -0x5718,
                   *(int *)(in_stack_00000020 + -0x7fd4) + -0x5170,0xf2);
      }
      else {
        for (; piVar6 != (int *)uVar5; piVar6 = (int *)*piVar6) {
          if (*puVar3 < (uint)piVar6[-4]) {
            puVar8 = (undefined4 *)piVar6[1];
            piVar6[1] = (int)puVar7;
            puVar3[4] = (uint)piVar6;
            puVar3[5] = (uint)puVar8;
            *puVar8 = puVar7;
            goto LAB_00021af4;
          }
        }
        puVar8 = *(undefined4 **)(iVar1 + 0x3c34);
        *(uint **)(iVar1 + 0x3c34) = puVar7;
        puVar3[4] = uVar5;
LAB_00021aec:
        puVar3[5] = (uint)puVar8;
        *puVar8 = puVar7;
LAB_00021af4:
        uVar5 = 0;
      }
      iVar2 = (**(code **)(in_stack_00000020 + -0x7ec0))(uVar5);
      if (iVar2 == 0) {
        (**(code **)(in_stack_00000020 + -0x79c0))(*(undefined4 *)(iVar1 + 0x3c38),puVar3[1]);
        uVar5 = *puVar3;
      }
      goto LAB_00021a58;
    }
    (**(code **)(in_stack_00000020 + -0x7c54))
              (4,*(int *)(in_stack_00000020 + -0x7fd4) + -0x5738,iVar1 + -0x5164,0xdf);
    (*(code *)(*(int *)(in_stack_00000020 + -0x7fd8) + 0x142c))(puVar3);
  }
  uVar5 = 0xfffffff5;
  puVar3 = (uint *)0x0;
LAB_00021a58:
  iVar1 = (**(code **)(in_stack_00000020 + -0x7ec0))(uVar5);
  if ((iVar1 != 0) && (puVar3 != (uint *)0x0)) {
    (*(code *)(*(int *)(in_stack_00000020 + -0x7fd8) + 0x142c))(puVar3);
    uVar5 = rts_h1encoder_set_attr();
    return uVar5;
  }
  return uVar5;
}



// ==== rts_h1encoder_get_attr @ 00021a78 size=16

void rts_h1encoder_get_attr(void)

{
  code *in_t9;
  
  (*in_t9)();
  rts_h1encoder_set_attr();
  return;
}



// ==== rts_h1encoder_set_attr @ 00021b00 size=36

void rts_h1encoder_set_attr(void)

{
  return;
}



// ==== rts_av_wait @ 00021b24 size=216

undefined4 rts_av_wait(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1bdc;
  }
  (*(code *)PTR_rts_log_000635ec)(0,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x56f0,param_1);
  puVar1 = PTR_DAT_0006325c;
  (*(code *)PTR_pthread_mutex_lock_00063ae8)(PTR_DAT_0006325c + 0x3c14);
  puVar3 = PTR_rts_log_000635ec;
  puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  *(int *)(puVar1 + 0x3c40) = *(int *)(puVar1 + 0x3c40) + 1;
  (*(code *)puVar3)(0,puVar2 + -0x56e8,param_1);
  if (1 < *(int *)(puVar1 + 0x3c40)) {
    (*(code *)PTR_rts_log_000635ec)
              (3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x56dc,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5580,0x4bf,param_1,
               *(int *)(puVar1 + 0x3c40));
  }
  return 0;
}



// ==== rts_av_post @ 00021bfc size=160

undefined4 rts_av_post(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_rts_log_000635ec;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1bdc;
  }
  puVar3 = PTR_DAT_0006325c + 0x3c14;
  puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x56bc;
  *(int *)(PTR_DAT_0006325c + 0x3c40) = *(int *)(PTR_DAT_0006325c + 0x3c40) + -1;
  (*(code *)puVar1)(0,puVar2,param_1);
  (*(code *)PTR_pthread_mutex_unlock_00063890)(puVar3);
  (*(code *)PTR_rts_log_000635ec)(0,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x56b0,param_1);
  return 0;
}



// ==== rts_av_create_chn @ 00021c9c size=120

undefined4 rts_av_create_chn(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5184);
  uVar2 = (*(code *)PTR___create_chn_00063318)(param_1,param_2);
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x5184);
  return uVar2;
}



// ==== rts_av_create_isp_chn @ 00021d14 size=144

void rts_av_create_isp_chn(int param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x53a0,0x39e,puVar1);
    (*(code *)PTR___assert_000637b8)
              (puVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x57a4,0x39e,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x53b8);
  }
                    /* WARNING: Could not recover jumptable at 0x00021d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_create_chn_00063a74)(0x707369);
  return;
}



// ==== rts_av_create_h264_chn @ 00021da4 size=144

void rts_av_create_h264_chn(int param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x53d0,0x3a6,puVar1);
    (*(code *)PTR___assert_000637b8)
              (puVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x57a4,0x3a6,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x53e8);
  }
                    /* WARNING: Could not recover jumptable at 0x00021e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_create_chn_00063a74)(0x34363268);
  return;
}



// ==== rts_av_create_mjpeg_chn @ 00021e34 size=144

void rts_av_create_mjpeg_chn(int param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5400,0x3ad,puVar1);
    (*(code *)PTR___assert_000637b8)
              (puVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x57a4,0x3ad,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5418);
  }
                    /* WARNING: Could not recover jumptable at 0x00021ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_create_chn_00063a74)(0x67706a6d);
  return;
}



// ==== rts_av_create_osd_chn @ 00021ec4 size=56

void rts_av_create_osd_chn(void)

{
  int iVar1;
  
  iVar1 = 0x640000;
  if (2 < *(ushort *)PTR_rts_hw_id_0006385c) {
    iVar1 = 0x32640000;
  }
                    /* WARNING: Could not recover jumptable at 0x00021ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_create_chn_00063a74)(iVar1 + 0x736f,0);
  return;
}



// ==== rts_av_create_audio_playback_chn @ 00021efc size=144

void rts_av_create_audio_playback_chn(int param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5454,0x40a,puVar1);
    (*(code *)PTR___assert_000637b8)
              (puVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x57a4,0x40a,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5478);
  }
                    /* WARNING: Could not recover jumptable at 0x00021f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_create_chn_00063a74)(0x6c707561);
  return;
}



// ==== rts_av_create_audio_capture_chn @ 00021f8c size=144

void rts_av_create_audio_capture_chn(int param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5498,0x411,puVar1);
    (*(code *)PTR___assert_000637b8)
              (puVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x57a4,0x411,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x54b8);
  }
                    /* WARNING: Could not recover jumptable at 0x00022014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_create_chn_00063a74)(0x61637561);
  return;
}



// ==== rts_av_create_audio_encode_chn @ 0002201c size=64

void rts_av_create_audio_encode_chn(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = param_1;
  local_c = param_2;
  (*(code *)PTR_rts_av_create_chn_00063a74)(0x636e6561,&local_10);
  return;
}



// ==== rts_av_create_audio_decode_chn @ 0002205c size=36

void rts_av_create_audio_decode_chn(void)

{
                    /* WARNING: Could not recover jumptable at 0x00022078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_create_chn_00063a74)(0x63656461,0);
  return;
}



// ==== rts_av_create_audio_resample_chn @ 00022080 size=68

void rts_av_create_audio_resample_chn(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [64];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_18 = param_2;
  local_14 = param_3;
  local_10 = param_1;
  (*(code *)PTR_rts_av_create_chn_00063a74)(0x6d737261,auStack_58);
  return;
}



// ==== rts_av_create_audio_mixer_chn @ 000220c4 size=36

void rts_av_create_audio_mixer_chn(void)

{
                    /* WARNING: Could not recover jumptable at 0x000220e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_create_chn_00063a74)(0x78696d61,0);
  return;
}



// ==== rts_av_create_audio_aec_chn @ 000220e8 size=36

void rts_av_create_audio_aec_chn(void)

{
                    /* WARNING: Could not recover jumptable at 0x00022104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_create_chn_00063a74)(0x636561,0);
  return;
}



// ==== rts_av_destroy_chn @ 0002210c size=136

undefined4 rts_av_destroy_chn(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5198);
  iVar2 = (*(code *)(PTR_LAB_00063268 + 0x13e0))(param_1);
  if (iVar2 != 0) {
    (*(code *)(PTR_LAB_00063268 + 0x142c))(iVar2);
  }
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x5198);
  return 0;
}



// ==== rts_av_get_id @ 00022194 size=148

undefined4 rts_av_get_id(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x51a8);
  iVar2 = (*(code *)(PTR_LAB_00063268 + 0x13e0))(param_1);
  if (iVar2 == 0) {
    uVar3 = 0xfffffff1;
  }
  else {
    uVar3 = (*(code *)PTR_rts_av_get_unit_id_000635a0)(*(undefined4 *)(iVar2 + 4));
  }
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x51a8);
  return uVar3;
}



// ==== rts_av_get_type @ 00022228 size=148

undefined4 rts_av_get_type(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x51b8);
  iVar2 = (*(code *)(PTR_LAB_00063268 + 0x13e0))(param_1);
  if (iVar2 == 0) {
    uVar3 = 0xfffffff1;
  }
  else {
    uVar3 = (*(code *)PTR_rts_av_get_unit_type_00063618)(*(undefined4 *)(iVar2 + 4));
  }
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x51b8);
  return uVar3;
}



// ==== rts_av_enable_chn @ 000222bc size=200

undefined4 rts_av_enable_chn(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x51cc);
  iVar2 = (*(code *)(PTR_LAB_00063268 + 0x13e0))(param_1);
  if (iVar2 == 0) {
    uVar4 = 0xfffffff1;
  }
  else {
    uVar4 = 0;
    iVar3 = (*(code *)PTR_rts_av_get_unit_status_000632c4)(*(undefined4 *)(iVar2 + 4));
    if (iVar3 == 0) {
      uVar4 = (*(code *)PTR_rts_av_enable_unit_000639f4)(*(undefined4 *)(iVar2 + 4));
      (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
    }
  }
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x51cc);
  return uVar4;
}



// ==== rts_av_disable_chn @ 00022384 size=204

undefined4 rts_av_disable_chn(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x51e0);
  iVar2 = (*(code *)(PTR_LAB_00063268 + 0x13e0))(param_1);
  if (iVar2 == 0) {
    uVar4 = 0xfffffff1;
  }
  else {
    uVar4 = 0;
    iVar3 = (*(code *)PTR_rts_av_get_unit_status_000632c4)(*(undefined4 *)(iVar2 + 4));
    if (iVar3 != 0) {
      uVar4 = (*(code *)PTR_rts_av_disable_unit_0006331c)(*(undefined4 *)(iVar2 + 4));
      iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
      if (iVar2 == 0) {
        uVar4 = 0;
      }
    }
  }
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x51e0);
  return uVar4;
}



// ==== rts_av_get_chn_status @ 00022450 size=180

undefined4 rts_av_get_chn_status(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x51f8);
  iVar2 = (*(code *)(PTR_LAB_00063268 + 0x13e0))(param_1);
  if (iVar2 == 0) {
    uVar3 = 0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x56a8,puVar1 + -0x51f8,0x1d3,param_1);
  }
  else {
    uVar3 = (*(code *)PTR_rts_av_get_unit_status_000632c4)(*(undefined4 *)(iVar2 + 4));
  }
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x51f8);
  return uVar3;
}



// ==== rts_av_bind @ 00022504 size=276

undefined4 rts_av_bind(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5204);
  pcVar7 = (code *)(PTR_LAB_00063268 + 0x13e0);
  iVar2 = (*pcVar7)(param_1);
  if (iVar2 == 0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5688;
    uVar5 = 0x1e7;
    param_2 = param_1;
  }
  else {
    iVar3 = (*pcVar7)(param_2);
    if (iVar3 != 0) {
      uVar6 = (*(code *)PTR_rts_av_connect_00063364)
                        (*(undefined4 *)(PTR_DAT_0006325c + 0x3c38),*(undefined4 *)(iVar2 + 4),
                         *(undefined4 *)(iVar3 + 4));
      goto LAB_000225e8;
    }
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5660;
    uVar5 = 0x1ed;
  }
  uVar6 = 0xfffffff1;
  (*(code *)PTR_rts_log_000635ec)(4,puVar4,puVar1 + -0x5204,uVar5,param_2);
LAB_000225e8:
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x5204);
  return uVar6;
}



// ==== rts_av_unbind @ 00022618 size=204

undefined4 rts_av_unbind(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5214);
  pcVar5 = (code *)(PTR_LAB_00063268 + 0x13e0);
  iVar2 = (*pcVar5)(param_1);
  if (iVar2 != 0) {
    iVar3 = (*pcVar5)(param_2);
    if (iVar3 != 0) {
      uVar4 = (*(code *)PTR_rts_av_disconnect_000636d8)
                        (*(undefined4 *)(PTR_DAT_0006325c + 0x3c38),*(undefined4 *)(iVar2 + 4),
                         *(undefined4 *)(iVar3 + 4));
      goto LAB_000226b8;
    }
  }
  uVar4 = 0xfffffff1;
LAB_000226b8:
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x5214);
  return uVar4;
}



// ==== rts_av_get_src_count @ 000226e4 size=148

undefined4 rts_av_get_src_count(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x522c);
  iVar2 = (*(code *)(PTR_LAB_00063268 + 0x13e0))(param_1);
  if (iVar2 == 0) {
    uVar3 = 0xfffffff1;
  }
  else {
    uVar3 = (*(code *)PTR_rts_av_get_unit_input_count_00063988)(*(undefined4 *)(iVar2 + 4));
  }
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x522c);
  return uVar3;
}



// ==== rts_av_get_dst_count @ 00022778 size=148

undefined4 rts_av_get_dst_count(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5244);
  iVar2 = (*(code *)(PTR_LAB_00063268 + 0x13e0))(param_1);
  if (iVar2 == 0) {
    uVar3 = 0xfffffff1;
  }
  else {
    uVar3 = (*(code *)PTR_rts_av_get_unit_output_count_00063384)(*(undefined4 *)(iVar2 + 4));
  }
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x5244);
  return uVar3;
}



// ==== rts_av_get_bind_by_src @ 0002280c size=220

undefined4 rts_av_get_bind_by_src(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x525c);
  iVar2 = (*(code *)(PTR_LAB_00063268 + 0x13e0))(param_1);
  if (iVar2 == 0) {
    uVar3 = 0xfffffff1;
  }
  else {
    iVar2 = (*(code *)PTR_rts_av_get_unit_input_0006347c)(*(undefined4 *)(iVar2 + 4),param_2);
    if (iVar2 == 0) {
      uVar3 = 0xffffffeb;
    }
    else {
      iVar2 = (*(code *)PTR_rts_av_get_pipe_src_000636f0)(iVar2);
      for (puVar4 = *(undefined4 **)(PTR_DAT_0006325c + 0x3c30);
          puVar4 != (undefined4 *)(PTR_DAT_0006325c + 0x3c30); puVar4 = (undefined4 *)*puVar4) {
        if (puVar4[-3] == iVar2) {
          uVar3 = puVar4[-4];
          goto LAB_000228e0;
        }
      }
      uVar3 = 0xfffffff2;
    }
  }
LAB_000228e0:
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x525c);
  return uVar3;
}



// ==== rts_h1encoder_start @ 000228e8 size=28

void rts_h1encoder_start(void)

{
  return;
}



// ==== rts_av_get_bind_by_dst @ 00022904 size=248

undefined4 rts_av_get_bind_by_dst(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5274);
  iVar2 = (*(code *)(PTR_LAB_00063268 + 0x13e0))(param_1);
  if (iVar2 == 0) {
    uVar3 = 0xfffffff1;
  }
  else {
    iVar2 = (*(code *)PTR_rts_av_get_unit_output_00063b54)(*(undefined4 *)(iVar2 + 4),param_2);
    if (iVar2 == 0) {
      uVar3 = 0xffffffeb;
    }
    else {
      iVar2 = (*(code *)PTR_rts_av_get_pipe_dst_000634d8)(iVar2);
      for (puVar4 = *(undefined4 **)(PTR_DAT_0006325c + 0x3c30);
          puVar4 != (undefined4 *)(PTR_DAT_0006325c + 0x3c30); puVar4 = (undefined4 *)*puVar4) {
        if (puVar4[-3] == iVar2) {
          uVar3 = puVar4[-4];
          goto LAB_000229d8;
        }
      }
      uVar3 = 0xfffffff2;
    }
  }
LAB_000229d8:
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x5274);
  return uVar3;
}



// ==== rts_av_start_recv @ 000229fc size=216

undefined4 rts_av_start_recv(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5288);
  iVar2 = (*(code *)(PTR_LAB_00063268 + 0x13e0))(param_1);
  if (iVar2 == 0) {
    uVar5 = 0xfffffff1;
  }
  else {
    uVar3 = (*(code *)PTR_rts_av_get_unit_type_00063618)(*(undefined4 *)(iVar2 + 4));
    if ((uVar3 & 1) == 0) {
      uVar5 = 0xffffffea;
    }
    else {
      uVar5 = 0;
      if (*(int *)(iVar2 + 0xc) == 0) {
        uVar5 = 0xfffffff5;
        iVar4 = (*(code *)PTR_rts_av_new_pipe_0006328c)(*(undefined4 *)(iVar2 + 4),0);
        if (iVar4 != 0) {
          uVar5 = 0;
        }
        *(int *)(iVar2 + 0xc) = iVar4;
      }
    }
  }
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x5288);
  return uVar5;
}



// ==== rts_av_stop_recv @ 00022ad4 size=160

undefined4 rts_av_stop_recv(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x529c);
  iVar2 = (*(code *)(PTR_LAB_00063268 + 0x13e0))(param_1);
  if (iVar2 == 0) {
    uVar3 = 0xfffffff1;
  }
  else {
    if (*(int *)(iVar2 + 0xc) != 0) {
      (*(code *)PTR_rts_av_delete_pipe_0006366c)();
    }
    *(undefined4 *)(iVar2 + 0xc) = 0;
    uVar3 = 0;
  }
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x529c);
  return uVar3;
}



// ==== rts_av_start_send @ 00022b74 size=216

undefined4 rts_av_start_send(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x52b0);
  iVar2 = (*(code *)(PTR_LAB_00063268 + 0x13e0))(param_1);
  if (iVar2 == 0) {
    uVar5 = 0xfffffff1;
  }
  else {
    uVar3 = (*(code *)PTR_rts_av_get_unit_type_00063618)(*(undefined4 *)(iVar2 + 4));
    if ((uVar3 & 2) == 0) {
      uVar5 = 0xffffffea;
    }
    else {
      uVar5 = 0;
      if (*(int *)(iVar2 + 8) == 0) {
        uVar5 = 0xfffffff5;
        iVar4 = (*(code *)PTR_rts_av_new_pipe_0006328c)(0,*(undefined4 *)(iVar2 + 4));
        if (iVar4 != 0) {
          uVar5 = 0;
        }
        *(int *)(iVar2 + 8) = iVar4;
      }
    }
  }
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x52b0);
  return uVar5;
}



// ==== rts_av_stop_send @ 00022c4c size=160

undefined4 rts_av_stop_send(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x52c4);
  iVar2 = (*(code *)(PTR_LAB_00063268 + 0x13e0))(param_1);
  if (iVar2 == 0) {
    uVar3 = 0xfffffff1;
  }
  else {
    if (*(int *)(iVar2 + 8) != 0) {
      (*(code *)PTR_rts_av_delete_pipe_0006366c)();
    }
    *(undefined4 *)(iVar2 + 8) = 0;
    uVar3 = 0;
  }
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x52c4);
  return uVar3;
}



// ==== rts_av_poll @ 00022cec size=164

undefined4 rts_av_poll(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x52d0);
  iVar2 = (*(code *)(PTR_LAB_00063268 + 0x13e0))(param_1);
  if (iVar2 == 0) {
    uVar3 = 0xfffffff1;
  }
  else if (*(int *)(iVar2 + 0xc) == 0) {
    uVar3 = 0xffffffea;
  }
  else {
    uVar3 = (*(code *)PTR_rts_av_pipe_poll_00063a48)();
  }
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x52d0);
  return uVar3;
}



// ==== rts_av_recv @ 00022d90 size=268

undefined4 rts_av_recv(int *param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (param_2 == (int *)0x0) {
    param_2 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5638);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x52dc,0x304,param_2);
    param_1 = param_2;
    (*(code *)PTR___assert_000637b8)
              (param_2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x57a4,0x304,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x52e8);
  }
  (*(code *)PTR_rts_av_wait_00063a58)(puVar1 + -0x52dc);
  iVar2 = (*(code *)(PTR_LAB_00063268 + 0x13e0))(param_1);
  if (iVar2 == 0) {
    uVar3 = 0xfffffff1;
  }
  else if (*(int *)(iVar2 + 0xc) == 0) {
    uVar3 = 0xffffffea;
  }
  else {
    iVar2 = (*(code *)PTR_rts_av_pipe_pop_00063934)();
    if (iVar2 == 0) {
      uVar3 = 0xffffffee;
    }
    else {
      *param_2 = iVar2;
      uVar3 = 0;
    }
  }
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x52dc);
  return uVar3;
}



// ==== rts_av_send @ 00022e9c size=248

undefined4 rts_av_send(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (param_2 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x398;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x52f4,0x324,param_1);
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x57a4;
    (*(code *)PTR___assert_000637b8)
              (param_1,param_2,0x324,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5300);
  }
  (*(code *)PTR_rts_av_wait_00063a58)(puVar1 + -0x52f4);
  iVar2 = (*(code *)(PTR_LAB_00063268 + 0x13e0))(param_1);
  if (iVar2 == 0) {
    uVar3 = 0xfffffff1;
  }
  else if (*(int *)(iVar2 + 8) == 0) {
    uVar3 = 0xffffffea;
  }
  else {
    uVar3 = (*(code *)PTR_rts_av_pipe_push_back_0006351c)(*(int *)(iVar2 + 8),param_2);
  }
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x52f4);
  return uVar3;
}



// ==== rts_av_set_callback @ 00022f94 size=164

undefined4 rts_av_set_callback(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5314);
  iVar2 = (*(code *)(PTR_LAB_00063268 + 0x13e0))(param_1);
  if (iVar2 == 0) {
    uVar3 = 0xfffffff1;
  }
  else {
    uVar3 = (*(code *)PTR_rts_av_set_unit_callback_000636c4)
                      (*(undefined4 *)(iVar2 + 4),param_2,param_3);
  }
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x5314);
  return uVar3;
}



// ==== rts_av_get_profile @ 00023038 size=116

undefined4 rts_av_get_profile(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (param_2 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac8;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5328,0x351,param_1);
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x57a4;
    (*(code *)PTR___assert_000637b8)
              (param_1,param_2,0x351,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x533c);
  }
  (*(code *)PTR_rts_av_wait_00063a58)(puVar1 + -0x5328);
  iVar2 = (*(code *)(PTR_LAB_00063268 + 0x13e0))(param_1);
  if (iVar2 == 0) {
    uVar3 = 0xfffffff1;
  }
  else {
    uVar3 = (*(code *)PTR_rts_av_get_unit_profile_00063408)(*(undefined4 *)(iVar2 + 4),param_2);
  }
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x5328);
  return uVar3;
}



// ==== rts_h1encoder_stop @ 000230ac size=116

undefined4 rts_h1encoder_stop(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_s0;
  int unaff_gp;
  int in_stack_00000018;
  undefined4 uStack00000020;
  
  uStack00000020 = param_2;
  (**(code **)(unaff_gp + -0x77e8))(unaff_s0 + -0x5328);
  iVar1 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + 0x13e0))(param_1);
  if (iVar1 == 0) {
    uVar2 = 0xfffffff1;
  }
  else {
    uVar2 = (**(code **)(in_stack_00000018 + -0x7e38))(*(undefined4 *)(iVar1 + 4),uStack00000020);
  }
  (**(code **)(in_stack_00000018 + -0x7afc))(unaff_s0 + -0x5328);
  return uVar2;
}



// ==== rts_av_set_profile @ 00023120 size=248

undefined4 rts_av_set_profile(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (param_2 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac8;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5350,0x366,param_1);
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x57a4;
    (*(code *)PTR___assert_000637b8)
              (param_1,param_2,0x366,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5364);
  }
  (*(code *)PTR_rts_av_wait_00063a58)(puVar1 + -0x5350);
  iVar2 = (*(code *)(PTR_LAB_00063268 + 0x13e0))(param_1);
  if (iVar2 == 0) {
    uVar3 = 0xfffffff1;
  }
  else {
    iVar4 = *(int *)(iVar2 + 8);
    pcVar5 = (code *)PTR_rts_av_set_tr_profile_000638f8;
    if (iVar4 == 0) {
      iVar4 = *(int *)(iVar2 + 4);
      pcVar5 = (code *)PTR_rts_av_set_unit_profile_00063460;
    }
    uVar3 = (*pcVar5)(iVar4,param_2);
  }
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x5350);
  return uVar3;
}



// ==== rts_av_is_idle @ 00023218 size=164

bool rts_av_is_idle(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5374);
  iVar2 = (*(code *)(PTR_LAB_00063268 + 0x13e0))(param_1);
  if (iVar2 == 0) {
    uVar3 = 0xfffffff1;
  }
  else {
    uVar3 = (*(code *)PTR_rts_av_is_unit_idle_000633f0)(*(undefined4 *)(iVar2 + 4));
  }
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x5374);
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
  return iVar2 == 0;
}



// ==== rts_av_list_chns @ 000232bc size=40

undefined4 rts_av_list_chns(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5388);
  puVar3 = *(undefined4 **)(PTR_DAT_0006325c + 0x3c30);
  puVar5 = (undefined4 *)(PTR_DAT_0006325c + 0x3c30);
  puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5630;
  while( true ) {
    if (puVar3 == puVar5) break;
    uVar2 = (*(code *)PTR_rts_av_get_unit_id_000635a0)(puVar3[-3]);
    (*(code *)PTR_rts_log_000635ec)
              (1,puVar4,uVar2 & 0xff,uVar2 >> 8 & 0xff,uVar2 >> 0x10 & 0xff,uVar2 >> 0x18,puVar3[-4]
              );
    puVar3 = (undefined4 *)*puVar3;
  }
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x5388);
  return 0;
}



// ==== rts_h1encoder_check_ready @ 000232e4 size=184

undefined4 rts_h1encoder_check_ready(void)

{
  uint uVar1;
  int *piVar2;
  int unaff_s1;
  int iVar3;
  int iVar4;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x77e8))(unaff_s1 + -0x5388);
  iVar4 = *(int *)(unaff_gp + -0x7fe4);
  iVar3 = *(int *)(unaff_gp + -0x7fd4);
  piVar2 = *(int **)(iVar4 + 0x3c30);
  while( true ) {
    if (piVar2 == (int *)(iVar4 + 0x3c30)) break;
    uVar1 = (**(code **)(unaff_gp + -0x7ca0))(piVar2[-3]);
    (**(code **)(unaff_gp + -0x7c54))(1,iVar3 + -0x5630,uVar1 & 0xff,uVar1 >> 8 & 0xff);
    piVar2 = (int *)*piVar2;
  }
  (**(code **)(unaff_gp + -0x7afc))(unaff_s1 + -0x5388);
  return 0;
}



// ==== rts_h1encoder_post_connect @ 00023418 size=260

undefined4 rts_h1encoder_post_connect(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_s1;
  code *in_t9;
  int unaff_gp;
  int in_stack_00000038;
  
  (*in_t9)();
  (**(code **)(unaff_gp + -0x77e8))(unaff_s1 + -0x5424);
  iVar1 = (*(code *)(*(int *)(in_stack_00000038 + -0x7fd8) + 0x13e0))(param_1);
  if (iVar1 == 0) {
    uVar3 = 0xfffffff1;
  }
  else {
    iVar2 = (**(code **)(in_stack_00000038 + -0x7ca0))(*(undefined4 *)(iVar1 + 4));
    if (iVar2 == param_2) {
      uVar3 = (**(code **)(in_stack_00000038 + -0x7a38))(*(undefined4 *)(iVar1 + 4));
    }
    else {
      uVar3 = 0xffffffe9;
      (**(code **)(in_stack_00000038 + -0x7c54))
                (4,*(int *)(in_stack_00000038 + -0x7fd4) + -0x5620,unaff_s1 + -0x5424,0x3cd);
    }
  }
  (**(code **)(in_stack_00000038 + -0x7afc))(unaff_s1 + -0x5424);
  return uVar3;
}



// ==== rts_av_get_isp_attr @ 0002351c size=40

void rts_av_get_isp_attr(undefined4 param_1,undefined4 param_2)

{
  (*(code *)(PTR_LAB_00063268 + 0x339c))(param_1,0x707369,param_2);
  return;
}



// ==== rts_av_get_h264_attr @ 00023544 size=40

void rts_av_get_h264_attr(undefined4 param_1,undefined4 param_2)

{
  (*(code *)(PTR_LAB_00063268 + 0x339c))(param_1,0x34363268,param_2);
  return;
}



// ==== rts_av_get_mjpeg_attr @ 0002356c size=40

void rts_av_get_mjpeg_attr(undefined4 param_1,undefined4 param_2)

{
  (*(code *)(PTR_LAB_00063268 + 0x339c))(param_1,0x67706a6d,param_2);
  return;
}



// ==== rts_av_get_audio_capture_attr @ 00023594 size=148

void rts_av_get_audio_capture_attr(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 == 0) {
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x54d8,0x43e,puVar1);
    (*(code *)PTR___assert_000637b8)
              (puVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x57a4,0x43e,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x54f8);
  }
  (*(code *)(PTR_LAB_00063268 + 0x339c))();
  return;
}



// ==== rts_av_get_audio_playback_attr @ 00023628 size=148

void rts_av_get_audio_playback_attr(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 == 0) {
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5518,0x446,puVar1);
    (*(code *)PTR___assert_000637b8)
              (puVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x57a4,0x446,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5538);
  }
  (*(code *)(PTR_LAB_00063268 + 0x339c))();
  return;
}



// ==== rts_av_get_audio_encode_attr @ 000236bc size=152

undefined4 rts_av_get_audio_encode_attr(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = (*(code *)(PTR_LAB_00063268 + 0x339c))(param_1,0x636e6561,&local_18);
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
  if (iVar2 == 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = local_18;
    }
    uVar1 = 0;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = local_14;
    }
  }
  return uVar1;
}



// ==== rts_av_get_audio_resample_attr @ 00023754 size=176

undefined4
rts_av_get_audio_resample_attr
          (undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_68 [64];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  uVar1 = (*(code *)(PTR_LAB_00063268 + 0x339c))(param_1,0x6d737261,auStack_68);
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
  if (iVar2 == 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = local_20;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = local_28;
    }
    uVar1 = 0;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = local_24;
    }
  }
  return uVar1;
}



// ==== rts_h1encoder_init @ 00023920 size=68

undefined4 rts_h1encoder_init(void)

{
  int unaff_s1;
  code *in_t9;
  int in_stack_00000038;
  
  (*in_t9)();
  (**(code **)(in_stack_00000038 + -0x7afc))(unaff_s1 + -0x5544);
  return 0xffffffe9;
}



// ==== rts_av_set_audio_encode_attr @ 00023984 size=68

void rts_av_set_audio_encode_attr(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = param_2;
  local_c = param_3;
  (*(code *)(PTR_LAB_00063268 + 0x3804))(param_1,0x636e6561,&local_10);
  return;
}



// ==== rts_av_set_audio_resample_attr @ 000239c8 size=72

void rts_av_set_audio_resample_attr
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_58 [64];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_18 = param_3;
  local_14 = param_4;
  local_10 = param_2;
  (*(code *)(PTR_LAB_00063268 + 0x3804))(param_1,0x6d737261,auStack_58);
  return;
}



// ==== rts_av_set_audio_mixer_droppable @ 00023a10 size=332

undefined4 rts_av_set_audio_mixer_droppable(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5574);
  pcVar6 = (code *)(PTR_LAB_00063268 + 0x13e0);
  iVar2 = (*pcVar6)(param_2);
  if ((iVar2 == 0) || (iVar3 = (*pcVar6)(param_1), iVar3 == 0)) {
    uVar8 = 0xfffffff1;
  }
  else {
    for (iVar7 = 0;
        iVar4 = (*(code *)PTR_rts_av_get_unit_input_count_00063988)(*(undefined4 *)(iVar3 + 4)),
        iVar7 < iVar4; iVar7 = iVar7 + 1) {
      iVar4 = (*(code *)PTR_rts_av_get_unit_input_0006347c)(*(undefined4 *)(iVar3 + 4),iVar7);
      iVar5 = (*(code *)PTR_rts_av_get_pipe_src_000636f0)(iVar4);
      if (*(int *)(iVar2 + 4) == iVar5) {
        if (iVar4 != 0) {
          pcVar6 = (code *)PTR_rts_av_clr_pipe_flags_00063a40;
          if (param_3 != 0) {
            pcVar6 = (code *)PTR_rts_av_set_pipe_flags_00063740;
          }
          uVar8 = 0;
          (*pcVar6)(iVar4,1);
          goto LAB_00023b28;
        }
        break;
      }
    }
    uVar8 = 0xffffffe9;
  }
LAB_00023b28:
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x5574);
  return uVar8;
}



// ==== rts_av_find_unit_by_chnno @ 00023b5c size=40

undefined4 rts_av_find_unit_by_chnno(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)(PTR_LAB_00063268 + 0x13e0))();
  if (iVar1 == 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -22000,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x559c,0x4d7,param_1);
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 4);
  }
  return uVar2;
}



// ==== rts_h1encoder_cleanup @ 00023b84 size=76

undefined4 rts_h1encoder_cleanup(undefined4 param_1)

{
  int in_v0;
  undefined4 uVar1;
  undefined4 uStack00000010;
  int in_stack_00000018;
  
  if (in_v0 == 0) {
    uStack00000010 = param_1;
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -22000,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x559c,0x4d7);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(in_v0 + 4);
  }
  return uVar1;
}



// ==== rts_av_check_chn_id @ 00023bd0 size=64

undefined4 rts_av_check_chn_id(undefined4 param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x55b0);
  iVar2 = (*(code *)PTR_rts_av_find_unit_by_chnno_00063a6c)(param_1);
  if (iVar2 == 0) {
    uVar4 = 0xfffffff1;
  }
  else {
    uVar4 = 0;
    uVar3 = (*(code *)PTR_rts_av_get_unit_id_000635a0)(iVar2);
    if ((param_2 != 0) && (uVar3 != param_2)) {
      uVar4 = 0xffffffe9;
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5620,puVar1 + -0x55b0,0x4ee,param_1,
                 uVar3,uVar3 >> 8,uVar3 >> 0x10,uVar3 >> 0x18,param_2,param_2 >> 8,param_2 >> 0x10,
                 param_2 >> 0x18);
    }
  }
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x55b0);
  return uVar4;
}



// ==== rts_h1encoder_set_profile @ 00023c10 size=204

undefined4 rts_h1encoder_set_profile(void)

{
  int iVar1;
  int unaff_s0;
  undefined4 uVar2;
  int unaff_s2;
  code *pcVar3;
  int in_stack_00000038;
  
  iVar1 = (**(code **)(in_stack_00000038 + -0x77d4))();
  if (iVar1 == 0) {
    uVar2 = 0xfffffff1;
  }
  else {
    uVar2 = 0;
    iVar1 = (**(code **)(in_stack_00000038 + -0x7ca0))(iVar1);
    if (unaff_s0 != 0) {
      pcVar3 = *(code **)(in_stack_00000038 + -0x7afc);
      if (iVar1 == unaff_s0) goto LAB_00023cb4;
      uVar2 = 0xffffffe9;
      (**(code **)(in_stack_00000038 + -0x7c54))
                (4,*(int *)(in_stack_00000038 + -0x7fd4) + -0x5620,unaff_s2 + -0x55b0,0x4ee);
    }
  }
  pcVar3 = *(code **)(in_stack_00000038 + -0x7afc);
LAB_00023cb4:
  (*pcVar3)(unaff_s2 + -0x55b0);
  return uVar2;
}



// ==== rts_av_do_cmd @ 00023cdc size=280

undefined4 rts_av_do_cmd(undefined *param_1,undefined *param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (param_3 == 0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2614;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x55c0,0x500,param_1);
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x57a4;
    (*(code *)PTR___assert_000637b8)
              (param_1,param_2,0x500,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x55d0);
  }
  (*(code *)PTR_rts_av_wait_00063a58)(puVar1 + -0x55c0);
  iVar2 = (*(code *)PTR_rts_av_find_unit_by_chnno_00063a6c)(param_1);
  if (iVar2 == 0) {
    uVar4 = 0xfffffff1;
  }
  else {
    puVar3 = (undefined *)(*(code *)PTR_rts_av_get_unit_id_000635a0)(iVar2);
    if ((param_2 == (undefined *)0x0) || (puVar3 == param_2)) {
      uVar4 = (*(code *)PTR_rts_av_exec_cmd_00063704)(iVar2,param_3);
    }
    else {
      uVar4 = 0xffffffe9;
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5620,puVar1 + -0x55c0,0x50d,param_1,
                 puVar3,(uint)puVar3 >> 8,(uint)puVar3 >> 0x10,(uint)puVar3 >> 0x18,param_2,
                 (uint)param_2 >> 8,(uint)param_2 >> 0x10,(uint)param_2 >> 0x18);
    }
  }
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x55c0);
  return uVar4;
}



// ==== rts_h1encoder_run @ 00023df4 size=76

undefined4 rts_h1encoder_run(void)

{
  int unaff_s1;
  code *in_t9;
  int in_stack_00000038;
  
  (*in_t9)();
  (**(code **)(in_stack_00000038 + -0x7afc))(unaff_s1 + -0x55c0);
  return 0xffffffe9;
}



// ==== rts_av_new_stream @ 000241dc size=360

undefined4 * rts_av_new_stream(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  puVar2 = (undefined4 *)
           (*(code *)PTR___rts_calloc_00063a28)
                     (1,0x58,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4e84,0x98);
  if (puVar2 == (undefined4 *)0x0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x50c0,puVar1 + -0x4e84,0x9a);
  }
  else {
    iVar3 = (*(code *)PTR_rts_queue_init_000635dc)();
    puVar2[3] = iVar3;
    if (iVar3 != 0) {
      iVar3 = (*(code *)PTR_rts_queue_init_000635dc)();
      puVar2[4] = iVar3;
      if (iVar3 == 0) {
        uVar4 = puVar2[3];
      }
      else {
        iVar3 = (*(code *)PTR_rts_queue_init_000635dc)();
        puVar2[5] = iVar3;
        if (iVar3 != 0) {
          iVar3 = (*(code *)PTR_rts_av_loop_open_00063518)(10);
          puVar2[7] = iVar3;
          puVar1 = PTR_rts_av_add_task_00063900;
          if (iVar3 != 0) {
            puVar2[8] = PTR_LAB_00063268 + 0x3e60;
            puVar2[9] = puVar2;
            puVar2[10] = 10;
            (*(code *)puVar1)(iVar3,puVar2 + 8);
            *puVar2 = 0;
            puVar2[0x12] = 0;
            return puVar2;
          }
          (*(code *)PTR_rts_queue_destroy_000632cc)(puVar2[5]);
        }
        (*(code *)PTR_rts_queue_destroy_000632cc)(puVar2[3]);
        uVar4 = puVar2[4];
      }
      (*(code *)PTR_rts_queue_destroy_000632cc)(uVar4);
    }
    (*(code *)PTR_rts_free_000638d4)(puVar2);
  }
  return (undefined4 *)0x0;
}



// ==== rts_av_stream_add_tail @ 00024344 size=112

undefined4 rts_av_stream_add_tail(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar1 = 0xfffffff6;
  }
  else {
    (*(code *)PTR_rts_queue_push_back_00063310)(*(undefined4 *)(param_1 + 0xc));
    (*(code *)PTR_rts_av_set_unit_owner_00063404)(param_2,param_1);
    uVar1 = 0;
  }
  return uVar1;
}



// ==== rts_av_stream_del @ 000243b4 size=296

undefined4 rts_av_stream_del(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 0) {
    uVar1 = 0xfffffff6;
  }
  else if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    iVar4 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      while (iVar3 = (*(code *)PTR_rts_queue_count_00063a84)(*(undefined4 *)(param_1 + 0x10)),
            iVar4 < iVar3) {
        iVar3 = (*(code *)PTR_rts_queue_enumerate_00063ac8)(*(undefined4 *)(param_1 + 0x10),iVar4);
        iVar2 = (*(code *)PTR_rts_av_get_pipe_src_000636f0)(iVar3);
        if ((param_2 == iVar2) ||
           (iVar2 = (*(code *)PTR_rts_av_get_pipe_dst_000634d8)(iVar3), param_2 == iVar2)) {
          (*(code *)PTR_rts_queue_rm_00063970)(*(undefined4 *)(param_1 + 0x10),iVar3);
          if (iVar3 != 0) {
            (*(code *)PTR_rts_av_delete_pipe_0006366c)(iVar3);
          }
        }
        else {
          iVar4 = iVar4 + 1;
        }
      }
    }
    (*(code *)PTR_rts_av_set_unit_owner_00063404)(param_2,0);
    (*(code *)PTR_rts_queue_del_00063b48)(*(undefined4 *)(param_1 + 0xc),param_2);
    uVar1 = 0;
  }
  return uVar1;
}



// ==== rts_av_apply @ 000244dc size=164

undefined4 rts_av_apply(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_rts_pthreadpool_init_00063664;
  if (param_1 == (int *)0x0) {
    uVar3 = 0xfffffff6;
  }
  else if (*param_1 == 0) {
    *param_1 = 1;
    iVar2 = (*(code *)puVar1)(2);
    param_1[6] = iVar2;
    if (iVar2 == 0) {
      *param_1 = 0;
      uVar3 = 0xffffffda;
    }
    else {
      (*(code *)PTR_rts_pthreadpool_add_task_000639b0)(iVar2,PTR_LAB_00063268 + 0x4048,param_1,0);
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// ==== rts_av_cancel @ 00024580 size=264

undefined4 rts_av_cancel(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  
  if (param_1 == (int *)0x0) {
    uVar3 = 0xfffffff6;
  }
  else {
    iVar6 = 0;
    if (*param_1 != 0) {
      *param_1 = 0;
      if (param_1[7] != 0) {
        (*(code *)PTR_rts_av_loop_end_00063950)();
      }
      puVar2 = PTR_rts_av_post_00063744;
      puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
      iVar6 = param_1[6];
      puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4ed4;
      param_1[6] = 0;
      (*(code *)puVar2)(puVar5);
      if (iVar6 != 0) {
        (*(code *)PTR_rts_pthreadpool_destroy_0006384c)(iVar6);
      }
      (*(code *)PTR_rts_av_wait_00063a58)(puVar1 + -0x4ed4);
      iVar6 = 0;
    }
    while( true ) {
      if (param_1[4] == 0) break;
      iVar4 = (*(code *)PTR_rts_queue_count_00063a84)();
      if (iVar4 <= iVar6) break;
      uVar3 = (*(code *)PTR_rts_queue_enumerate_00063ac8)(param_1[4],iVar6);
      (*(code *)PTR_rts_av_pipe_clear_0006382c)(uVar3);
      iVar6 = iVar6 + 1;
    }
    uVar3 = 0;
  }
  return uVar3;
}



// ==== rts_av_delete_stream @ 00024688 size=8

undefined4 rts_av_delete_stream(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      (*(code *)PTR_rts_av_cancel_00063644)();
    }
    iVar2 = (*(code *)PTR_rts_queue_empty_00063b60)(param_1[3]);
    if (iVar2 == 0) goto LAB_00024720;
    iVar2 = 0;
    while (iVar2 != 0) {
      (*(code *)PTR_rts_av_stream_del_00063b5c)(param_1,iVar2);
      (*(code *)PTR_rts_av_delete_unit_00063acc)(iVar2);
      iVar2 = (*(code *)PTR_rts_queue_empty_00063b60)(param_1[3]);
      if (iVar2 != 0) break;
LAB_00024720:
      iVar2 = (*(code *)PTR_rts_queue_enumerate_00063ac8)(param_1[3],0);
    }
    if (param_1[3] != 0) {
      (*(code *)PTR_rts_queue_destroy_000632cc)();
    }
    puVar3 = PTR_rts_av_delete_pipe_0006366c;
    puVar1 = PTR_rts_queue_clear_00063388;
    param_1[3] = 0;
    (*(code *)puVar1)(param_1[4],puVar3);
    if (param_1[4] != 0) {
      (*(code *)PTR_rts_queue_destroy_000632cc)();
    }
    puVar1 = PTR_rts_queue_clear_00063388;
    puVar3 = PTR_LAB_00063268 + 0x3f8c;
    param_1[4] = 0;
    (*(code *)puVar1)(param_1[5],puVar3);
    if (param_1[5] != 0) {
      (*(code *)PTR_rts_queue_destroy_000632cc)();
    }
    puVar1 = PTR_rts_av_del_task_000637f0;
    param_1[5] = 0;
    (*(code *)puVar1)(param_1 + 8);
    if (param_1[7] != 0) {
      (*(code *)PTR_rts_av_loop_close_000632bc)();
    }
    puVar1 = PTR_rts_free_000638d4;
    param_1[7] = 0;
    (*(code *)puVar1)(param_1);
  }
  return 0;
}



// ==== rts_h1encoder_pre_disconnect @ 00024690 size=4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 rts_h1encoder_pre_disconnect(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      (*_DAT_00087cd0)();
    }
    iVar3 = (*_DAT_000881ec)(param_1[3]);
    if (iVar3 == 0) goto LAB_00024720;
    iVar3 = 0;
    while (iVar3 != 0) {
      (*_DAT_000881e8)(param_1,iVar3);
      (*_DAT_00088158)(iVar3);
      iVar3 = (*_DAT_000881ec)(param_1[3]);
      if (iVar3 != 0) break;
LAB_00024720:
      iVar3 = (*_DAT_00088154)(param_1[3],0);
    }
    if (param_1[3] != 0) {
      (*_DAT_00087958)();
    }
    uVar2 = _DAT_00087cf8;
    pcVar1 = _DAT_00087a14;
    param_1[3] = 0;
    (*pcVar1)(param_1[4],uVar2);
    if (param_1[4] != 0) {
      (*_DAT_00087958)();
    }
    pcVar1 = _DAT_00087a14;
    iVar3 = _DAT_000878f4 + 0x3f8c;
    param_1[4] = 0;
    (*pcVar1)(param_1[5],iVar3);
    if (param_1[5] != 0) {
      (*_DAT_00087958)();
    }
    pcVar1 = _DAT_00087e7c;
    param_1[5] = 0;
    (*pcVar1)(param_1 + 8);
    if (param_1[7] != 0) {
      (*_DAT_00087948)();
    }
    pcVar1 = _DAT_00087f60;
    param_1[7] = 0;
    (*pcVar1)(param_1);
  }
  return 0;
}



// ==== rts_av_connect @ 000248cc size=448

undefined4 rts_av_connect(undefined *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int unaff_s3;
  
  if (param_1 == (undefined *)0x0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x50c8;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4ee4,0x14c,puVar3);
    param_3 = 0x14c;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5120;
    param_2 = unaff_s3;
  }
  else {
    puVar3 = param_1;
    if (param_2 != 0) goto LAB_00024998;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x509c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4ee4,0x14d,puVar3);
    param_3 = 0x14d;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5120;
  }
  while( true ) {
    param_1 = puVar3;
    (*(code *)PTR___assert_000637b8)
              (puVar3,puVar2,param_3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4ef4);
LAB_00024998:
    if (param_3 != 0) break;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5098;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4ee4,0x14e,puVar3);
    param_3 = 0x14e;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5120;
  }
  iVar1 = (*(code *)PTR_rts_queue_check_00063b2c)(*(undefined4 *)(param_1 + 0xc));
  if ((iVar1 == 0) &&
     (iVar1 = (*(code *)PTR_rts_queue_check_00063b2c)(*(undefined4 *)(puVar3 + 0xc),param_3),
     iVar1 == 0)) {
    iVar1 = (*(code *)PTR___find_pipe_000635a4)(puVar3,param_2,param_3);
    uVar4 = 0;
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_rts_av_new_pipe_0006328c)(param_2,param_3);
      if (iVar1 == 0) {
        uVar4 = 0xfffffff5;
      }
      else {
        (*(code *)PTR_rts_queue_add_000635d4)(*(undefined4 *)(puVar3 + 0x10),iVar1);
      }
    }
  }
  else {
    uVar4 = 0xfffffff1;
  }
  return uVar4;
}



// ==== rts_av_disconnect @ 00024a8c size=92

undefined4 rts_av_disconnect(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_1 == 0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x50c8;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4f08,0x16b,puVar3);
    param_3 = 0x16b;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5120;
  }
  else {
    if (param_2 != 0) goto LAB_00024b4c;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x509c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4f08,0x16c,puVar3);
    param_3 = 0x16c;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5120;
  }
  while( true ) {
    (*(code *)PTR___assert_000637b8)
              (puVar3,puVar2,param_3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4f1c);
LAB_00024b4c:
    if (param_3 != 0) break;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5098;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4f08,0x16d,puVar3);
    param_3 = 0x16d;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5120;
  }
  iVar1 = (*(code *)PTR___find_pipe_000635a4)();
  if (iVar1 != 0) {
    (*(code *)PTR_rts_queue_rm_00063970)(*(undefined4 *)(param_1 + 0x10),iVar1);
    (*(code *)PTR_rts_av_delete_pipe_0006366c)(iVar1);
  }
  return 0;
}



// ==== rts_av_get_stream_status @ 00024be4 size=24

undefined4 rts_av_get_stream_status(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
  return 0;
}



// ==== rts_av_stream_get_handler @ 00024bfc size=432

undefined4 rts_av_stream_get_handler(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 unaff_s2;
  code *pcVar7;
  
  if (param_1 == 0) {
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x50c8;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4f38,0x198,puVar5);
    uVar3 = 0x198;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4f54;
    puVar6 = puVar5;
    param_2 = unaff_s2;
LAB_00024cf8:
    pcVar7 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (puVar5,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5120,uVar3,puVar4);
  }
  else {
    if (*(int *)(param_1 + 0x14) == 0) {
      return 0;
    }
    puVar1 = (undefined4 *)(*(code *)(PTR_LAB_00063268 + 0x4104))();
    puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c;
    if (puVar1 != (undefined4 *)0x0) goto LAB_00024d6c;
    iVar2 = *(int *)(param_1 + 0x14);
    if (iVar2 == 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4f84,0x39,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5094);
      iVar2 = *(int *)(param_1 + 0x14);
    }
    pcVar7 = (code *)PTR___rts_calloc_00063a28;
    if (iVar2 == 0) {
      uVar3 = 0x39;
      puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5094;
      puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4f94;
      goto LAB_00024cf8;
    }
  }
  puVar1 = (undefined4 *)(*pcVar7)(1,0x10,puVar6 + -0x4f84,0x3b);
  puVar6 = PTR_rts_pthreadpool_init_00063664;
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = param_2;
  iVar2 = (*(code *)puVar6)(1);
  puVar1[1] = iVar2;
  if (iVar2 == 0) {
    (*(code *)PTR_rts_free_000638d4)(puVar1);
    return 0;
  }
  (*(code *)PTR_rts_queue_add_000635d4)(*(undefined4 *)(param_1 + 0x14),puVar1);
  puVar1[3] = *(undefined4 *)(param_1 + 0x14);
LAB_00024d6c:
  SYNC(0);
  puVar1[2] = puVar1[2] + 1;
  SYNC(0);
  return puVar1[1];
}



// ==== rts_av_stream_put_handler @ 00024dac size=224

void rts_av_stream_put_handler(undefined *param_1)

{
  int iVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x50c8;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4fb0,0x1ad,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5120,0x1ad,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4fcc);
  }
  if ((*(int *)(param_1 + 0x14) != 0) &&
     (iVar1 = (*(code *)(PTR_LAB_00063268 + 0x4104))(), iVar1 != 0)) {
    SYNC(0);
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
    SYNC(0);
    if (*(int *)(iVar1 + 8) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00024e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(PTR_LAB_00063268 + 0x3f8c))(iVar1);
      return;
    }
  }
  return;
}



// ==== rts_av_trigger_stream @ 00024e8c size=184

undefined4 rts_av_trigger_stream(undefined *param_1,undefined *param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x50c8;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4fe4,0x1c9,param_1);
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5120;
    (*(code *)PTR___assert_000637b8)
              (param_1,param_2,0x1c9,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4ffc);
  }
  uVar1 = 0xffffffef;
  if (*(int *)(param_1 + 0x18) != 0) {
    if (param_2 != (undefined *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00024f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)PTR_rts_pthreadpool_add_task_000639b0)
                        (*(int *)(param_1 + 0x18),PTR_LAB_00063268 + 0x4088,param_2,0);
      return uVar1;
    }
    uVar1 = 0xfffffff6;
  }
  return uVar1;
}



// ==== rts_av_get_stream_loop @ 00024f44 size=124

undefined4 rts_av_get_stream_loop(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x50c8;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5028,0x1d7,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5120,0x1d7,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5040);
  }
  return *(undefined4 *)(param_1 + 0x1c);
}



// ==== rts_av_get_stream_buffer_obj @ 00024fc0 size=124

undefined * rts_av_get_stream_buffer_obj(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x50c8;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5060,0x1df,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5120,0x1df,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5080);
  }
  return param_1 + 0x48;
}



// ==== rts_av_get_pipe_src @ 00025040 size=124

undefined4 rts_av_get_pipe_src(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x69bc);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4ab8,0x8b,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4e70,0x8b,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4acc);
  }
  return *param_1;
}



// ==== rts_av_get_pipe_dst @ 000250bc size=124

undefined4 rts_av_get_pipe_dst(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x69bc;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4ae0,0x94,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4e70,0x94,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4af4);
  }
  return *(undefined4 *)(param_1 + 4);
}



// ==== rts_av_pipe_push_back @ 00025138 size=552

undefined4 rts_av_pipe_push_back(undefined *param_1,undefined *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  int local_28 [6];
  
  puVar4 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x69bc;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4b0c,0xbc,puVar4);
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4e70;
    param_1 = puVar4;
    (*(code *)PTR___assert_000637b8)
              (puVar4,param_2,0xbc,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4b24);
  }
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = (*(code *)PTR_rts_av_get_unit_status_000632c4)();
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = (*(code *)PTR_rts_av_check_unit_is_runnable_000634d0)(*(undefined4 *)(puVar4 + 4));
    iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
    if (iVar1 != 0) {
      return 0;
    }
  }
  if (param_2 != (undefined *)0x0) {
    (*(code *)PTR_rts_av_get_buffer_0006379c)(param_2);
    local_28[0] = 0;
    local_28[1] = 0;
    local_28[2] = 0;
    local_28[3] = 0;
    local_28[4] = 0;
    (*(code *)PTR_rts_av_get_buffer_profile_0006386c)(param_2,local_28);
    if ((((*(int *)(puVar4 + 4) == 0) ||
         (iVar1 = (*(code *)PTR_rts_av_is_changeable_000634b8)(), iVar1 != 0)) || (local_28[0] == 0)
        ) || ((*(int *)(puVar4 + 0xc) == 0 ||
              (iVar1 = (*(code *)PTR_rts_av_cmp_profile_000633e8)(local_28,puVar4 + 0xc), iVar1 == 0
              )))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffb5;
      uVar3 = (*(code *)PTR_rts_av_get_unit_id_000635a0)(*(undefined4 *)(puVar4 + 4));
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4e1c,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4b38,0xb3,uVar3,uVar3 >> 8,
                 uVar3 >> 0x10,uVar3 >> 0x18);
    }
    iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
    if (iVar1 != 0) {
      (*(code *)PTR_rts_av_put_buffer_00063548)();
      return uVar2;
    }
    (*(code *)PTR_rts_av_set_buffer_source_000635b4)(param_2,puVar4);
    (*(code *)PTR_rts_queue_push_back_00063310)(*(undefined4 *)(puVar4 + 8),param_2);
  }
  if (*(int *)(puVar4 + 4) != 0) {
    (*(code *)PTR_rts_av_unit_send_00063b44)();
  }
  return 0;
}



// ==== rts_av_pipe_pop @ 00025360 size=180

undefined4 rts_av_pipe_pop(undefined *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  puVar3 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x69bc;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4b48,0xde,puVar3);
    param_1 = puVar3;
    (*(code *)PTR___assert_000637b8)
              (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4e70,0xde,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4b58);
  }
  iVar1 = (*(code *)PTR_rts_queue_empty_00063b60)(*(undefined4 *)(param_1 + 8));
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000253f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)PTR_rts_queue_pop_0006333c)(*(undefined4 *)(puVar3 + 8));
    return uVar2;
  }
  return 0;
}



// ==== rts_av_pipe_poll @ 00025414 size=152

undefined4 rts_av_pipe_poll(undefined *param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  pcVar3 = (code *)PTR_rts_queue_empty_00063b60;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x69bc;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4b6c,0xea,param_1);
    pcVar3 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4e70,0xea,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4b80);
  }
  iVar1 = (*pcVar3)(*(undefined4 *)(param_1 + 8));
  uVar2 = 0xffffffee;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}



// ==== rts_av_pipe_flush @ 000254ac size=212

undefined4 rts_av_pipe_flush(undefined *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  puVar3 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x69bc;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4b94,0xf6,puVar3);
    param_1 = puVar3;
    (*(code *)PTR___assert_000637b8)
              (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4e70,0xf6,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4ba8);
  }
  if (*(int *)(param_1 + 4) == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    iVar1 = (*(code *)PTR_rts_av_pipe_poll_00063a48)();
    if ((iVar1 != 0) &&
       (iVar1 = (*(code *)PTR_rts_av_unit_keep_active_0006342c)(*(undefined4 *)(puVar3 + 4)),
       iVar1 == 0)) {
      return 0xffffffef;
    }
    (*(code *)PTR_rts_av_check_and_run_unit_00063638)(*(undefined4 *)(puVar3 + 4));
    uVar2 = 0;
  }
  return uVar2;
}



// ==== rts_av_get_tr_profile @ 00025580 size=28

undefined4 rts_av_get_tr_profile(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x69bc;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4be8,0x113,puVar2);
    uVar1 = 0x113;
  }
  else {
    if (param_2 != 0) goto LAB_00025640;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac8;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4be8,0x114,puVar2);
    uVar1 = 0x114;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4e70,uVar1,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4c00);
LAB_00025640:
  (*(code *)PTR_memcpy_00063908)();
  return 0;
}



// ==== rts_h1encoder_alloc_buffer @ 0002559c size=200

undefined4 rts_h1encoder_alloc_buffer(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_gp;
  int in_stack_00000018;
  
  if (param_1 == 0) {
    iVar3 = *(int *)(unaff_gp + -0x7fd4) + -0x69bc;
    (**(code **)(unaff_gp + -0x7c54))
              (4,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x4be8,0x113
              );
    uVar2 = 0x113;
    iVar1 = *(int *)(in_stack_00000018 + -0x7fd4);
  }
  else {
    if (param_2 != 0) goto LAB_00025640;
    iVar3 = *(int *)(unaff_gp + -0x7fd4) + -0x6ac8;
    (**(code **)(unaff_gp + -0x7c54))
              (4,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x4be8,0x114
              );
    uVar2 = 0x114;
    iVar1 = *(int *)(in_stack_00000018 + -0x7fd4);
  }
  (**(code **)(in_stack_00000018 + -0x7a88))
            (iVar3,iVar1 + -0x4e70,uVar2,*(int *)(in_stack_00000018 + -0x7fd4) + -0x4c00);
  unaff_gp = in_stack_00000018;
LAB_00025640:
  (**(code **)(unaff_gp + -0x7938))();
  return 0;
}



// ==== rts_av_set_tr_profile @ 00025664 size=76

undefined4 rts_av_set_tr_profile(undefined *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int unaff_s2;
  undefined1 auStack_30 [28];
  
  if (param_1 == (undefined *)0x0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x69bc;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4c18,0x120,puVar4);
    uVar3 = 0x120;
    param_2 = unaff_s2;
  }
  else {
    puVar4 = param_1;
    if (param_2 != 0) goto LAB_00025730;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac8;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4c18,0x121,puVar4);
    uVar3 = 0x121;
  }
  param_1 = puVar4;
  (*(code *)PTR___assert_000637b8)
            (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4e70,uVar3,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4c30);
LAB_00025730:
  param_1 = param_1 + 0xc;
  (*(code *)PTR_memcpy_00063908)(auStack_30,param_1,0x14);
  (*(code *)PTR_memcpy_00063908)(param_1,param_2,0x14);
  if (*(int *)(puVar4 + 4) != 0) {
    uVar3 = (*(code *)PTR_rts_av_update_unit_profile_00063940)(*(int *)(puVar4 + 4),puVar4);
    iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
    if (iVar1 != 0) {
      uVar2 = (*(code *)PTR_rts_av_get_unit_id_000635a0)(*(undefined4 *)(puVar4 + 4));
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4dec,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4c18,0x12e,uVar2,uVar2 >> 8,
                 uVar2 >> 0x10,uVar2 >> 0x18,uVar3);
      (*(code *)PTR_memcpy_00063908)(param_1,auStack_30,0x14);
      return uVar3;
    }
  }
  return 0;
}



// ==== rts_h1encoder_free_buffer @ 000257c8 size=100

void rts_h1encoder_free_buffer(undefined4 param_1,int param_2)

{
  uint in_t8;
  int unaff_gp;
  uint uStack00000018;
  uint uStack0000001c;
  int in_stack_00000028;
  
  uStack00000018 = in_t8 >> 0x10;
  uStack0000001c = in_t8 >> 0x18;
  (**(code **)(unaff_gp + -0x7c54))
            (param_1,param_2 + -0x4dec,*(int *)(unaff_gp + -0x7fd4) + -0x4c18);
  (**(code **)(in_stack_00000028 + -0x7938))();
  return;
}



// ==== rts_av_set_pipe_id @ 0002582c size=72

void rts_av_set_pipe_id(undefined *param_1,undefined *param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x69bc;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4c44,0x13b,param_1);
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4e70;
    (*(code *)PTR___assert_000637b8)
              (param_1,param_2,0x13b,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4c58);
  }
  *(undefined **)(param_1 + 0x20) = param_2;
  return;
}



// ==== rts_h1encoder_get_h264_info @ 00025874 size=52

void rts_h1encoder_get_h264_info(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int unaff_s0;
  code *in_t9;
  int in_stack_00000018;
  
  (*in_t9)(param_1,param_2,param_3 + -0x4c44);
  iVar1 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x4e70;
  (**(code **)(in_stack_00000018 + -0x7a88))();
  *(int *)(unaff_s0 + 0x20) = iVar1;
  return;
}



// ==== rts_av_get_pipe_id @ 000258a8 size=100

undefined4 rts_av_get_pipe_id(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x69bc;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4c6c,0x144,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4e70,0x144,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4c80);
  }
  return *(undefined4 *)(param_1 + 0x20);
}



// ==== rts_h1encoder_exec_cmd @ 0002590c size=24

undefined4 rts_h1encoder_exec_cmd(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7a88))(param_1,param_2 + -0x4e70,param_3,param_4 + -0x4c80);
  return *(undefined4 *)(param_1 + 0x20);
}



// ==== rts_av_set_pipe_flags @ 00025924 size=132

void rts_av_set_pipe_flags(undefined *param_1,undefined *param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x69bc;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4c98,0x14d,param_1);
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4e70;
    (*(code *)PTR___assert_000637b8)
              (param_1,param_2,0x14d,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4cb0);
  }
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | (uint)param_2;
  return;
}



// ==== rts_av_clr_pipe_flags @ 000259a8 size=132

void rts_av_clr_pipe_flags(undefined *param_1,uint param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)~param_2;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x69bc;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4cc8,0x156,param_1);
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4e70;
    (*(code *)PTR___assert_000637b8)
              (param_1,puVar1,0x156,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4ce0);
  }
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & (uint)puVar1;
  return;
}



// ==== rts_av_get_pipe_flags @ 00025a2c size=124

undefined4 rts_av_get_pipe_flags(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x69bc;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4cf8,0x15f,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4e70,0x15f,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4d10);
  }
  return *(undefined4 *)(param_1 + 0x24);
}



// ==== rts_av_pipe_clear @ 00025aa8 size=188

void rts_av_pipe_clear(undefined *param_1)

{
  uint uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x69bc;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4bbc,0x107,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4e70,0x107,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4bd0);
  }
  uVar1 = (*(code *)PTR_rts_av_get_pipe_flags_00063a8c)();
  if ((uVar1 & 0x10000) == 0) {
    (*(code *)PTR_rts_queue_clear_00063388)
              (*(undefined4 *)(param_1 + 8),PTR_rts_av_put_buffer_00063548);
    return;
  }
  return;
}



// ==== rts_av_delete_pipe @ 00025b64 size=88

void rts_av_delete_pipe(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x69bc);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4a90,0x78,piVar1);
    param_1 = piVar1;
    (*(code *)PTR___assert_000637b8)
              (piVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4e70,0x78,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4aa4);
  }
  if (param_1[1] != 0) {
    (*(code *)PTR_rts_av_unit_unplug_000637bc)(param_1[1],piVar1);
    piVar1[1] = 0;
  }
  if (*piVar1 != 0) {
    (*(code *)PTR_rts_av_unit_unplug_000637bc)(*piVar1,piVar1);
    *piVar1 = 0;
  }
  (*(code *)PTR_rts_av_clr_pipe_flags_00063a40)(piVar1,0x10000);
  (*(code *)PTR_rts_av_pipe_clear_0006382c)(piVar1);
  if (piVar1[2] != 0) {
    (*(code *)PTR_rts_queue_destroy_000632cc)();
  }
  piVar1[2] = 0;
  (*(code *)PTR_rts_free_000638d4)(piVar1);
  return;
}



// ==== rts_av_set_h264_color_conversion @ 00025bbc size=84

void rts_av_set_h264_color_conversion(int param_1)

{
  int *unaff_s0;
  int unaff_gp;
  int in_stack_00000018;
  
  (**(code **)(unaff_gp + -0x7a88))
            (param_1,*(int *)(unaff_gp + -0x7fd4) + -0x4e70,0x78,
             *(int *)(unaff_gp + -0x7fd4) + -0x4aa4);
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(unaff_gp + -0x7a84))();
    unaff_s0[1] = 0;
    unaff_gp = in_stack_00000018;
  }
  if (*unaff_s0 != 0) {
    (**(code **)(unaff_gp + -0x7a84))();
    *unaff_s0 = 0;
    unaff_gp = in_stack_00000018;
  }
  (**(code **)(unaff_gp + -0x7800))();
  (**(code **)(in_stack_00000018 + -0x7a14))();
  if (unaff_s0[2] != 0) {
    (**(code **)(in_stack_00000018 + -0x7f74))();
  }
  unaff_s0[2] = 0;
  (**(code **)(in_stack_00000018 + -0x796c))();
  return;
}



// ==== rts_av_osdenc_check_ready @ 00025c10 size=88

void rts_av_osdenc_check_ready(void)

{
  int unaff_s0;
  int unaff_gp;
  int in_stack_00000018;
  
  (**(code **)(unaff_gp + -0x7800))();
  (**(code **)(in_stack_00000018 + -0x7a14))();
  if (*(int *)(unaff_s0 + 8) != 0) {
    (**(code **)(in_stack_00000018 + -0x7f74))();
  }
  *(undefined4 *)(unaff_s0 + 8) = 0;
  (**(code **)(in_stack_00000018 + -0x796c))();
  return;
}



// ==== rts_av_new_pipe @ 00025c68 size=16

int * rts_av_new_pipe(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined4 uVar5;
  code *pcVar6;
  
  if ((param_1 == 0) && (param_2 == 0)) {
    return (int *)0x0;
  }
  uVar1 = (*(code *)PTR_rts_av_check_is_unit_src_recursive_000633c0)(param_1,param_2);
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
  puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (iVar2 != 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4dbc,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4a70,0x49);
    return (int *)0x0;
  }
  piVar3 = (int *)(*(code *)PTR___rts_calloc_00063a28)
                            (1,0x28,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4a7c,0x24);
  if (piVar3 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar2 = (*(code *)PTR_rts_queue_init_000635dc)();
  piVar3[2] = iVar2;
  if (iVar2 == 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4d84,puVar4 + -0x4a7c,0x2a);
    pcVar6 = (code *)PTR_rts_free_000638d4;
    goto LAB_00025dc4;
  }
  if (param_1 == 0) {
LAB_00025e04:
    if (param_2 == 0) {
      return piVar3;
    }
    if (piVar3[3] == 0) {
      (*(code *)PTR_rts_av_get_unit_input_profile_00063754)(param_2,piVar3 + 3);
    }
    else {
      uVar1 = (*(code *)PTR_rts_av_set_unit_profile_00063460)();
      iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
      if (iVar2 != 0) {
        uVar5 = 0x61;
        puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4d40;
        goto LAB_00025dac;
      }
    }
    uVar1 = (*(code *)PTR_rts_av_unit_plug_00063478)(param_2,piVar3,0);
    iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
    pcVar6 = (code *)PTR_rts_av_delete_pipe_0006366c;
    if (iVar2 == 0) {
      piVar3[1] = param_2;
      return piVar3;
    }
  }
  else {
    uVar1 = (*(code *)PTR_rts_av_get_unit_profile_00063408)(param_1,piVar3 + 3);
    iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
    if (iVar2 == 0) {
      uVar1 = (*(code *)PTR_rts_av_unit_plug_00063478)(param_1,piVar3,1);
      iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
      pcVar6 = (code *)PTR_rts_av_delete_pipe_0006366c;
      if (iVar2 != 0) goto LAB_00025dc4;
      *piVar3 = param_1;
      goto LAB_00025e04;
    }
    uVar5 = 0x54;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4d64;
LAB_00025dac:
    (*(code *)PTR_rts_log_000635ec)
              (4,puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4a70,uVar5,uVar1);
    pcVar6 = (code *)PTR_rts_av_delete_pipe_0006366c;
  }
LAB_00025dc4:
  (*pcVar6)(piVar3);
  return (int *)0x0;
}



// ==== rts_av_osdenc_init @ 00025c78 size=392

int * rts_av_osdenc_init(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  int unaff_gp;
  
  if ((param_1 == 0) && (param_2 == 0)) {
    return (int *)0x0;
  }
  uVar1 = (**(code **)(unaff_gp + -0x7e80))(param_1,param_2);
  iVar2 = (**(code **)(unaff_gp + -0x7ec0))(uVar1);
  if (iVar2 != 0) {
    (**(code **)(unaff_gp + -0x7c54))
              (4,*(int *)(unaff_gp + -0x7fd4) + -0x4dbc,*(int *)(unaff_gp + -0x7fd4) + -0x4a70,0x49)
    ;
    return (int *)0x0;
  }
  iVar2 = *(int *)(unaff_gp + -0x7fd4);
  piVar3 = (int *)(**(code **)(unaff_gp + -0x7818))(1,0x28,iVar2 + -0x4a7c,0x24);
  if (piVar3 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar4 = (**(code **)(unaff_gp + -0x7c64))();
  piVar3[2] = iVar4;
  if (iVar4 == 0) {
    (**(code **)(unaff_gp + -0x7c54))(4,*(int *)(unaff_gp + -0x7fd4) + -0x4d84,iVar2 + -0x4a7c,0x2a)
    ;
    pcVar5 = *(code **)(unaff_gp + -0x796c);
    goto LAB_00025dc4;
  }
  if (param_1 == 0) {
LAB_00025e04:
    if (param_2 == 0) {
      return piVar3;
    }
    if (piVar3[3] == 0) {
      (**(code **)(unaff_gp + -0x7aec))(param_2,piVar3 + 3);
    }
    else {
      uVar1 = (**(code **)(unaff_gp + -0x7de0))();
      iVar2 = (**(code **)(unaff_gp + -0x7ec0))(uVar1);
      if (iVar2 != 0) {
        iVar4 = *(int *)(unaff_gp + -0x7fd4);
        uVar1 = 0x61;
        iVar2 = *(int *)(unaff_gp + -0x7fd4) + -0x4d40;
        goto LAB_00025dac;
      }
    }
    uVar1 = (**(code **)(unaff_gp + -0x7dc8))(param_2,piVar3,0);
    iVar2 = (**(code **)(unaff_gp + -0x7ec0))(uVar1);
    if (iVar2 == 0) {
      piVar3[1] = param_2;
      return piVar3;
    }
  }
  else {
    uVar1 = (**(code **)(unaff_gp + -0x7e38))(param_1,piVar3 + 3);
    iVar2 = (**(code **)(unaff_gp + -0x7ec0))(uVar1);
    if (iVar2 == 0) {
      uVar1 = (**(code **)(unaff_gp + -0x7dc8))(param_1,piVar3,1);
      iVar2 = (**(code **)(unaff_gp + -0x7ec0))(uVar1);
      if (iVar2 == 0) {
        *piVar3 = param_1;
        goto LAB_00025e04;
      }
    }
    else {
      iVar4 = *(int *)(unaff_gp + -0x7fd4);
      uVar1 = 0x54;
      iVar2 = *(int *)(unaff_gp + -0x7fd4) + -0x4d64;
LAB_00025dac:
      (**(code **)(unaff_gp + -0x7c54))(4,iVar2,iVar4 + -0x4a70,uVar1);
    }
  }
  pcVar5 = *(code **)(unaff_gp + -0x7bd4);
LAB_00025dc4:
  (*pcVar5)(piVar3);
  return (int *)0x0;
}



// ==== rts_av_osdenc_cleanup @ 00025e00 size=140

void rts_av_osdenc_cleanup(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *unaff_s0;
  int unaff_s1;
  undefined4 unaff_s2;
  int unaff_gp;
  int in_stack_00000018;
  
  *unaff_s0 = unaff_s2;
  if (unaff_s1 == 0) {
    return;
  }
  if (unaff_s0[3] == 0) {
    (**(code **)(unaff_gp + -0x7aec))();
  }
  else {
    uVar1 = (**(code **)(unaff_gp + -0x7de0))();
    iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
    if (iVar2 != 0) {
      (**(code **)(in_stack_00000018 + -0x7c54))
                (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x4d40,
                 *(int *)(in_stack_00000018 + -0x7fd4) + -0x4a70,0x61);
      goto LAB_00025dbc;
    }
  }
  uVar1 = (**(code **)(in_stack_00000018 + -0x7dc8))();
  iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
  if (iVar2 == 0) {
    unaff_s0[1] = unaff_s1;
    return;
  }
LAB_00025dbc:
  (**(code **)(in_stack_00000018 + -0x7bd4))();
  return;
}



// ==== rts_av_osdenc_start @ 00025e8c size=52

void rts_av_osdenc_start(void)

{
  int iVar1;
  int unaff_s0;
  undefined4 unaff_s1;
  code *in_t9;
  int in_stack_00000018;
  
  iVar1 = (*in_t9)();
  if (iVar1 == 0) {
    *(undefined4 *)(unaff_s0 + 4) = unaff_s1;
  }
  else {
    (**(code **)(in_stack_00000018 + -0x7bd4))();
  }
  return;
}



// ==== rts_av_delete_buffer @ 00025ec0 size=180

undefined4 rts_av_delete_buffer(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if (param_1[0xf] == 0) {
      if (param_1[0x19] != 0) {
        if (param_1[0x16] != 0) {
          (*(code *)PTR_rts_free_000638d4)();
        }
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        param_1[0x18] = 0;
        param_1[0x19] = 0;
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[0xc] = 0;
    }
    (*(code *)PTR_pthread_mutex_destroy_00063828)(param_1 + 0x10);
    (*(code *)PTR_rts_free_000638d4)(param_1);
  }
  return 0;
}



// ==== rts_av_uninit_buffer @ 00025fdc size=84

undefined4 rts_av_uninit_buffer(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0xfffffff6;
  }
  else {
    uVar1 = 0xffffffea;
    if ((param_1[0xf] == 1) && (uVar1 = 0, param_1[0x19] != 0)) {
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      return 0;
    }
  }
  return uVar1;
}



// ==== rts_av_get_buffer @ 00026030 size=108

int rts_av_get_buffer(int param_1)

{
  undefined *puVar1;
  
  if (param_1 != 0) {
    (*(code *)PTR_pthread_mutex_lock_00063ae8)(param_1 + 0x40);
    puVar1 = PTR_pthread_mutex_unlock_00063890;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    (*(code *)puVar1)(param_1 + 0x40);
  }
  return param_1;
}



// ==== rts_av_put_buffer @ 0002609c size=180

undefined4 rts_av_put_buffer(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 != 0) {
    bVar1 = false;
    (*(code *)PTR_pthread_mutex_lock_00063ae8)(param_1 + 0x40);
    if (*(int *)(param_1 + 0x38) != 0) {
      iVar2 = *(int *)(param_1 + 0x38) + -1;
      *(int *)(param_1 + 0x38) = iVar2;
      bVar1 = iVar2 == 0;
    }
    (*(code *)PTR_pthread_mutex_unlock_00063890)(param_1 + 0x40);
    if (bVar1) {
      iVar2 = *(int *)(param_1 + 0x90);
      if (*(code **)(param_1 + 0x6c) != (code *)0x0) {
        (**(code **)(param_1 + 0x6c))(*(undefined4 *)(param_1 + 0x68),param_1);
      }
      if (iVar2 != 0) {
        (*(code *)PTR_rts_av_unit_send_00063b44)(iVar2);
      }
    }
  }
  return 0;
}



// ==== rts_av_get_buffer_refs @ 00026150 size=24

undefined4 rts_av_get_buffer_refs(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x38);
  }
  return 0;
}



// ==== rts_av_set_buffer_offset @ 00026168 size=112

undefined4 rts_av_set_buffer_offset(int *param_1,uint param_2)

{
  if (param_1 == (int *)0x0) {
    return 0xfffffff6;
  }
  if (param_1[0x19] != 0) {
    if (param_2 <= (uint)param_1[0x17]) {
      param_1[1] = param_1[0x17] - param_2;
      *param_1 = param_1[0x16] + param_2;
      if (param_1[0x18] == 0) {
        param_1[3] = 0;
      }
      else {
        param_1[3] = param_2 + param_1[0x18];
      }
      return 0;
    }
    return 0xffffffeb;
  }
  return 0xffffffe1;
}



// ==== rts_av_new_buffer @ 000261d8 size=56

int rts_av_new_buffer(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  iVar2 = (*(code *)PTR___rts_calloc_00063a28)
                    (1,0x98,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4840,0x32);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if (param_1 == 0) {
      *(undefined4 *)(iVar2 + 0x3c) = 1;
    }
    else {
      iVar3 = (*(code *)PTR___rts_calloc_00063a28)(1,param_1,puVar1 + -0x4840,0x39);
      *(int *)(iVar2 + 0x58) = iVar3;
      puVar1 = PTR_rts_av_set_buffer_offset_000635bc;
      if (iVar3 == 0) {
        (*(code *)PTR_rts_free_000638d4)(iVar2);
        return 0;
      }
      *(int *)(iVar2 + 0x5c) = param_1;
      *(undefined4 *)(iVar2 + 0x60) = 0;
      *(undefined4 *)(iVar2 + 100) = 1;
      (*(code *)puVar1)(iVar2,0);
      *(undefined4 *)(iVar2 + 0x10) = 0;
      *(undefined4 *)(iVar2 + 0x14) = 0;
      *(undefined4 *)(iVar2 + 0x18) = 0;
      *(undefined4 *)(iVar2 + 0x3c) = 0;
    }
    uVar4 = (*(code *)PTR_rts_get_monotonic_raw_time_0006355c)();
    *(int *)(iVar2 + 0x70) = (int)uVar4;
    puVar1 = PTR_pthread_mutex_init_00063490;
    *(int *)(iVar2 + 0x74) = (int)((ulonglong)uVar4 >> 0x20);
    (*(code *)puVar1)(iVar2 + 0x40,0);
  }
  return iVar2;
}



// ==== rts_av_osdenc_stop @ 00026210 size=224

int rts_av_osdenc_stop(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      int param_5)

{
  int iVar1;
  int iVar2;
  int unaff_s1;
  int unaff_s2;
  code *in_t9;
  code *pcVar3;
  undefined8 uVar4;
  
  iVar1 = (*in_t9)(param_1,param_2,unaff_s2 + -0x4840,0x32);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    if (unaff_s1 == 0) {
      *(undefined4 *)(iVar1 + 0x3c) = 1;
    }
    else {
      iVar2 = (**(code **)(param_5 + -0x7818))(1);
      *(int *)(iVar1 + 0x58) = iVar2;
      if (iVar2 == 0) {
        (**(code **)(param_5 + -0x796c))(iVar1);
        return 0;
      }
      pcVar3 = *(code **)(param_5 + -0x7c84);
      *(int *)(iVar1 + 0x5c) = unaff_s1;
      *(undefined4 *)(iVar1 + 0x60) = 0;
      *(undefined4 *)(iVar1 + 100) = 1;
      (*pcVar3)(iVar1,0);
      *(undefined4 *)(iVar1 + 0x10) = 0;
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(undefined4 *)(iVar1 + 0x18) = 0;
      *(undefined4 *)(iVar1 + 0x3c) = 0;
    }
    uVar4 = (**(code **)(param_5 + -0x7ce4))();
    pcVar3 = *(code **)(param_5 + -0x7db0);
    *(undefined8 *)(iVar1 + 0x70) = uVar4;
    (*pcVar3)(iVar1 + 0x40,0);
  }
  return iVar1;
}



// ==== rts_av_init_buffer @ 000262f0 size=132

undefined4 rts_av_init_buffer(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_rts_av_set_buffer_offset_000635bc;
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar2 = 0xfffffff6;
  }
  else {
    uVar2 = 0xffffffea;
    if (*(int *)(param_1 + 0x3c) == 1) {
      if (*(int *)(param_1 + 100) == 0) {
        *(int *)(param_1 + 0x58) = param_2;
        *(undefined4 *)(param_1 + 0x5c) = param_3;
        *(undefined4 *)(param_1 + 0x60) = param_4;
        *(undefined4 *)(param_1 + 100) = 1;
        (*(code *)puVar1)(param_1,0);
        uVar2 = 0;
      }
      else {
        uVar2 = 0xffffffe2;
      }
    }
  }
  return uVar2;
}



// ==== rts_av_set_buffer_callback @ 00026374 size=52

undefined4 rts_av_set_buffer_callback(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 == 0) {
    return 0xfffffff6;
  }
  if (*(int *)(param_1 + 100) != 0) {
    *(undefined4 *)(param_1 + 0x68) = param_2;
    *(undefined4 *)(param_1 + 0x6c) = param_3;
    return 0;
  }
  return 0xffffffe1;
}



// ==== rts_av_set_buffer_source @ 000263a8 size=128

undefined4 rts_av_set_buffer_source(undefined *param_1,undefined *param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x398;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x485c,0x115,param_1);
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4a60;
    (*(code *)PTR___assert_000637b8)
              (param_1,param_2,0x115,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4878);
  }
  *(undefined **)(param_1 + 0x78) = param_2;
  return 0;
}



// ==== rts_av_get_buffer_source @ 00026428 size=124

undefined4 rts_av_get_buffer_source(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x398;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4894,0x122,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4a60,0x122,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x48b0);
  }
  return *(undefined4 *)(param_1 + 0x78);
}



// ==== rts_av_set_buffer_ts @ 000264a4 size=128

void rts_av_set_buffer_ts
               (undefined *param_1,undefined4 param_2,undefined4 param_3,undefined *param_4)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x398;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x48c8,0x12d,param_1);
    param_3 = 0x12d;
    param_4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x48e0;
    (*(code *)PTR___assert_000637b8)(param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4a60);
  }
  *(undefined4 *)(param_1 + 0x70) = param_3;
  *(undefined **)(param_1 + 0x74) = param_4;
  return;
}



// ==== rts_av_get_buffer_ts @ 00026524 size=128

undefined8 rts_av_get_buffer_ts(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x398;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x48f8,0x138,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4a60,0x138,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4910);
  }
  return *(undefined8 *)(param_1 + 0x70);
}



// ==== rts_av_set_buffer_profile @ 000265a4 size=156

undefined4 rts_av_set_buffer_profile(undefined *param_1,int param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x398;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x492c,0x144,param_1);
    uVar1 = 0x144;
  }
  else {
    pcVar2 = (code *)PTR_memcpy_00063908;
    if (param_2 != 0) goto LAB_00026660;
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac8;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x492c,0x145,param_1);
    uVar1 = 0x145;
  }
  pcVar2 = (code *)PTR___assert_000637b8;
  (*(code *)PTR___assert_000637b8)
            (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4a60,uVar1,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4948);
LAB_00026660:
  (*pcVar2)(param_1 + 0x7c);
  return 0;
}



// ==== rts_av_osdenc_get_profile @ 00026640 size=64

undefined4 rts_av_osdenc_get_profile(int param_1)

{
  code *pcVar1;
  int in_stack_00000018;
  
  pcVar1 = *(code **)(in_stack_00000018 + -0x7a88);
  (*pcVar1)(param_1,*(int *)(in_stack_00000018 + -0x7fd4) + -0x4a60,0x145,
            *(int *)(in_stack_00000018 + -0x7fd4) + -0x4948);
  (*pcVar1)(param_1 + 0x7c);
  return 0;
}



// ==== rts_av_get_buffer_profile @ 00026680 size=84

undefined4 rts_av_get_buffer_profile(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x398;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4964,0x153,puVar2);
    uVar1 = 0x153;
  }
  else {
    if (param_2 != 0) goto LAB_00026740;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac8;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4964,0x154,puVar2);
    uVar1 = 0x154;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4a60,uVar1,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4980);
LAB_00026740:
  (*(code *)PTR_memcpy_00063908)();
  return 0;
}



// ==== rts_av_osdenc_exec_cmd @ 000266d4 size=72

undefined4 rts_av_osdenc_exec_cmd(undefined4 param_1)

{
  int in_t8;
  int in_stack_00000018;
  
  (**(code **)(in_stack_00000018 + -0x7a88))
            (param_1,*(int *)(in_stack_00000018 + -0x7fd4) + -0x4a60,0x153,
             *(int *)(in_stack_00000018 + -0x7fd4) + -0x4980);
  (**(code **)(in_stack_00000018 + -0x7938))(param_1,in_t8 + 0x7c,0x14);
  return 0;
}



// ==== rts_av_create_auto_recycle_buffer @ 00026764 size=132

void rts_av_create_auto_recycle_buffer(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    param_1 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4a08);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x49a4,0x16c,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4a60,0x16c,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x49c8);
  }
  iVar1 = (*(code *)PTR_rts_av_new_buffer_000639e0)();
  if (iVar1 == 0) {
    return;
  }
  (*(code *)PTR_rts_av_set_buffer_callback_00063998)(iVar1,param_1,PTR_LAB_00063268 + 0x5f74);
  if (param_1 != (int *)0x0) {
    SYNC(0);
    *param_1 = *param_1 + 1;
    SYNC(0);
  }
                    /* WARNING: Could not recover jumptable at 0x00026848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_get_buffer_0006379c)(iVar1);
  return;
}



// ==== rts_av_osdenc_run @ 000267e8 size=124

void rts_av_osdenc_run(void)

{
  int in_v0;
  int *unaff_s0;
  int in_stack_00000018;
  
  if (in_v0 == 0) {
    return;
  }
  (**(code **)(in_stack_00000018 + -0x78a8))();
  if (unaff_s0 != (int *)0x0) {
    SYNC(0);
    *unaff_s0 = *unaff_s0 + 1;
    SYNC(0);
  }
                    /* WARNING: Could not recover jumptable at 0x00026848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_stack_00000018 + -0x7aa4))();
  return;
}



// ==== rts_av_set_buffer_observer @ 00026864 size=124

void rts_av_set_buffer_observer(undefined *param_1,undefined *param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x398;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x49e4,0x17f,param_1);
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4a60;
    (*(code *)PTR___assert_000637b8)
              (param_1,param_2,0x17f,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4a00);
  }
  *(undefined **)(param_1 + 0x90) = param_2;
  return;
}



// ==== rts_av_osdenc_set_profile @ 00026ab8 size=32

undefined4 rts_av_osdenc_set_profile(void)

{
  code *in_t9;
  
  (*in_t9)();
  return 0;
}



// ==== rts_av_sync_dma_device @ 00026ad8 size=96

undefined4 rts_av_sync_dma_device(int param_1)

{
  if (((param_1 != 0) && (*(int *)(param_1 + 0xc) != 0)) && ((*(uint *)(param_1 + 0x10) & 0xc) != 0)
     ) {
    (*(code *)PTR_rts_isp_mem_sync_device_00063b30)();
    return 0;
  }
  return 0;
}



// ==== rts_av_sync_dma_cpu @ 00026b38 size=96

undefined4 rts_av_sync_dma_cpu(int param_1)

{
  if (((param_1 != 0) && (*(int *)(param_1 + 0xc) != 0)) && ((*(uint *)(param_1 + 0x10) & 0xc) != 0)
     ) {
    (*(code *)PTR_rts_isp_mem_sync_cpu_00063a10)();
    return 0;
  }
  return 0;
}



// ==== rts_av_to_osdenc_t @ 00026e18 size=32

void rts_av_to_osdenc_t(void)

{
  return;
}



// ==== rts_av_to_osdenc_attr @ 00026f08 size=52

void rts_av_to_osdenc_attr(void)

{
  int in_v0;
  undefined4 uVar1;
  undefined4 *unaff_s0;
  int in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  
  if (in_v0 == 0) {
    uVar1 = (**(code **)(in_stack_00000010 + -0x7b74))(in_stack_00000028);
    *unaff_s0 = uVar1;
    unaff_s0[1] = in_stack_00000024;
    unaff_s0[2] = in_stack_00000020;
    unaff_s0[3] = in_stack_0000001c;
    unaff_s0[4] = in_stack_00000018;
  }
  else {
    (**(code **)(in_stack_00000010 + -0x7c54))
              (4,*(int *)(in_stack_00000010 + -0x7fd4) + -0x4750,
               *(int *)(in_stack_00000010 + -0x7fd4) + -0x455c,0xf6);
  }
  return;
}



// ==== rts_av_set_osdenc_attr_owner @ 00026f3c size=32

void rts_av_set_osdenc_attr_owner(void)

{
  return;
}



// ==== rts_av_alloc_osdenc_attr @ 00027058 size=356

undefined4 rts_av_alloc_osdenc_attr(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int unaff_s1;
  int unaff_s2;
  code *pcVar6;
  int unaff_gp;
  int in_stack_00000018;
  int in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  
  puVar1 = (undefined4 *)(**(code **)(unaff_gp + -0x7818))(param_1,0x1c,param_3 + -0x4570,0x126);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0xfffffff5;
  }
  else {
    iVar4 = 0;
    puVar5 = puVar1;
    do {
      uVar2 = (**(code **)(in_stack_00000018 + -0x789c))();
      iVar3 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar2);
      if (iVar3 != 0) {
        pcVar6 = *(code **)(in_stack_00000018 + -0x7ec0);
        goto LAB_000270e4;
      }
      if (in_stack_00000030 == 1) {
        *puVar5 = 1;
        puVar5[1] = in_stack_00000034;
        puVar5[2] = in_stack_00000038;
      }
      else {
        *puVar5 = 3;
        puVar5[1] = in_stack_00000034;
        puVar5[2] = in_stack_00000038;
        puVar5[3] = in_stack_0000003c;
        puVar5[4] = in_stack_00000040;
        puVar5[5] = in_stack_00000044;
        puVar5[6] = in_stack_00000048;
      }
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 7;
    } while (iVar4 < unaff_s2);
    pcVar6 = *(code **)(in_stack_00000018 + -0x7ec0);
LAB_000270e4:
    iVar4 = (*pcVar6)(uVar2);
    if (iVar4 == 0) {
      *(int *)(unaff_s1 + 0x1c) = unaff_s2;
      *(undefined4 **)(unaff_s1 + 0x20) = puVar1;
    }
    else {
      (**(code **)(in_stack_00000018 + -0x796c))(puVar1);
    }
  }
  return uVar2;
}



// ==== rts_av_set_osdenc_fps @ 000271d8 size=320

undefined4 rts_av_set_osdenc_fps(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int unaff_gp;
  undefined1 auStack_60 [8];
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 *local_30;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0xfffffff6;
  }
  else {
    local_30 = auStack_60;
    iVar6 = 0;
    while( true ) {
      uVar1 = (**(code **)(unaff_gp + -0x7820))(param_1,*param_2,iVar6,auStack_60);
      iVar2 = (**(code **)(unaff_gp + -0x7ec0))(uVar1);
      if (iVar2 != 0) break;
      iVar6 = iVar6 + 1;
    }
    if (iVar6 == 0) {
      uVar1 = 0xffffffee;
    }
    else {
      puVar3 = (undefined4 *)
               (**(code **)(unaff_gp + -0x7818))
                         (iVar6,0x24,*(int *)(unaff_gp + -0x7fd4) + -0x4588,0x16d);
      if (puVar3 == (undefined4 *)0x0) {
        uVar1 = 0xfffffff5;
      }
      else {
        iVar2 = 0;
        puVar5 = puVar3;
        do {
          uVar1 = (**(code **)(unaff_gp + -0x7820))(param_1,*param_2,iVar2,auStack_60);
          iVar4 = (**(code **)(unaff_gp + -0x7ec0))(uVar1);
          if (iVar4 != 0) break;
          if (local_58 == 1) {
            *puVar5 = 1;
            puVar5[1] = local_54;
            puVar5[2] = local_50;
          }
          else {
            *puVar5 = 3;
            puVar5[1] = local_54;
            puVar5[2] = local_50;
            puVar5[3] = local_4c;
            puVar5[4] = uStack_48;
            puVar5[5] = uStack_44;
            puVar5[6] = uStack_40;
          }
          uVar1 = (**(code **)(unaff_gp + -0x7744))(param_1,*param_2,puVar5);
          iVar4 = (**(code **)(unaff_gp + -0x7ec0))(uVar1);
          if (iVar4 != 0) break;
          iVar2 = iVar2 + 1;
          puVar5 = puVar5 + 9;
        } while (iVar2 < iVar6);
        iVar2 = (**(code **)(unaff_gp + -0x7ec0))(uVar1);
        if (iVar2 == 0) {
          param_2[1] = iVar6;
          param_2[2] = puVar3;
        }
        else {
          (**(code **)(unaff_gp + -0x796c))(puVar3);
        }
      }
    }
  }
  return uVar1;
}



// ==== rts_av_update_osdenc_flick_info @ 00027304 size=196

undefined4 rts_av_update_osdenc_flick_info(void)

{
  int in_v0;
  undefined4 uVar1;
  int iVar2;
  int *unaff_s0;
  int *piVar3;
  int unaff_s1;
  int unaff_s3;
  undefined4 unaff_s4;
  int unaff_s6;
  int unaff_s7;
  int unaff_gp;
  int unaff_s8;
  int in_stack_00000010;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  
code_r0x00027304:
  unaff_s0[3] = in_v0;
  unaff_s0[4] = in_stack_00000030;
  unaff_s0[5] = in_stack_00000034;
  unaff_s0[6] = in_stack_00000038;
  piVar3 = unaff_s0;
  do {
    uVar1 = (**(code **)(unaff_gp + -0x7744))();
    iVar2 = (**(code **)(in_stack_00000010 + -0x7ec0))(uVar1);
    if (iVar2 != 0) {
LAB_00027360:
      iVar2 = (**(code **)(in_stack_00000010 + -0x7ec0))(uVar1);
      if (iVar2 == 0) {
        *(int *)(unaff_s3 + 4) = unaff_s1;
        *(undefined4 *)(unaff_s3 + 8) = unaff_s4;
      }
      else {
        (**(code **)(in_stack_00000010 + -0x796c))();
      }
      return uVar1;
    }
    unaff_s7 = unaff_s7 + 1;
    unaff_s0 = piVar3 + 9;
    if (unaff_s1 <= unaff_s7) goto LAB_00027360;
    uVar1 = (**(code **)(in_stack_00000010 + -0x7820))();
    iVar2 = (**(code **)(in_stack_00000010 + -0x7ec0))(uVar1);
    if (iVar2 != 0) goto LAB_00027360;
    unaff_gp = in_stack_00000010;
    if (in_stack_00000020 != unaff_s6) break;
    *unaff_s0 = unaff_s6;
    piVar3[10] = in_stack_00000024;
    piVar3[0xb] = in_stack_00000028;
    piVar3 = unaff_s0;
  } while( true );
  *unaff_s0 = unaff_s8;
  piVar3[10] = in_stack_00000024;
  piVar3[0xb] = in_stack_00000028;
  in_v0 = in_stack_0000002c;
  goto code_r0x00027304;
}



// ==== rts_av_get_osdenc_attr_single @ 00027484 size=228

undefined4 rts_av_get_osdenc_attr_single(void)

{
  undefined4 *in_v0;
  undefined4 uVar1;
  int iVar2;
  int unaff_s0;
  int iVar3;
  undefined4 *puVar4;
  int *unaff_s5;
  code *pcVar5;
  int unaff_gp;
  int in_stack_00000010;
  undefined4 in_stack_00000044;
  
  iVar3 = 0;
  puVar4 = in_v0;
  do {
    uVar1 = (**(code **)(unaff_gp + -0x77f4))();
    iVar2 = (**(code **)(in_stack_00000010 + -0x7ec0))(uVar1);
    if (iVar2 != 0) break;
    pcVar5 = *(code **)(in_stack_00000010 + -0x78ec);
    *puVar4 = in_stack_00000044;
    uVar1 = (*pcVar5)();
    iVar2 = (**(code **)(in_stack_00000010 + -0x7ec0))(uVar1);
    if (iVar2 != 0) break;
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 3;
    unaff_gp = in_stack_00000010;
  } while (iVar3 < unaff_s0);
  iVar3 = (**(code **)(in_stack_00000010 + -0x7ec0))(uVar1);
  if (iVar3 == 0) {
    *unaff_s5 = unaff_s0;
    unaff_s5[1] = (int)in_v0;
  }
  else {
    (**(code **)(in_stack_00000010 + -0x796c))();
  }
  return uVar1;
}



// ==== rts_av_set_osdenc_attr_single @ 00027698 size=496

void rts_av_set_osdenc_attr_single(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_s0;
  undefined4 unaff_s2;
  undefined4 unaff_s6;
  undefined4 *puVar6;
  code *pcVar7;
  int in_stack_00000018;
  int in_stack_00000028;
  undefined4 in_stack_0000002c;
  int in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  
  iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))();
  if (iVar1 == 0) {
    *(undefined4 *)(unaff_s0 + 4) = unaff_s2;
    *(undefined4 *)(unaff_s0 + 8) = unaff_s6;
  }
  else {
    (**(code **)(in_stack_00000018 + -0x796c))();
  }
  iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))();
  if (iVar1 != 0) {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x4730,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x45b0,0x266);
    return;
  }
  if (*(undefined4 **)(unaff_s0 + 8) == (undefined4 *)0x0) {
    iVar1 = *(int *)(in_stack_00000018 + -0x7fd4);
    uVar4 = 0x20f;
    iVar3 = *(int *)(in_stack_00000018 + -0x7fd4);
    iVar5 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x45dc;
    puVar2 = (undefined4 *)0x0;
  }
  else {
    (**(code **)(in_stack_00000018 + -0x7828))(**(undefined4 **)(unaff_s0 + 8));
    uVar4 = (**(code **)(in_stack_00000018 + -0x7820))();
    iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar4);
    if (iVar1 == 0) {
      if (in_stack_00000028 == 1) {
        uVar4 = 0xffffffea;
      }
      else {
        *(undefined4 *)(unaff_s0 + 0xc) = in_stack_0000002c;
        *(int *)(unaff_s0 + 0x10) = in_stack_00000030;
        *(undefined4 *)(unaff_s0 + 0x14) = in_stack_00000034;
        *(undefined4 *)(unaff_s0 + 0x18) = in_stack_00000038;
        *(undefined4 *)(unaff_s0 + 0x1c) = in_stack_0000003c;
        *(undefined4 *)(unaff_s0 + 0x20) = in_stack_00000040;
        uVar4 = 0;
      }
    }
    iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar4);
    if (iVar1 != 0) {
      (**(code **)(in_stack_00000018 + -0x7c54))
                (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x46f0,
                 *(int *)(in_stack_00000018 + -0x7fd4) + -0x45b0,0x26c);
      if (*(int *)(unaff_s0 + 8) != 0) {
        (**(code **)(in_stack_00000018 + -0x796c))();
      }
      *(undefined4 *)(unaff_s0 + 8) = 0;
      return;
    }
    puVar2 = *(undefined4 **)(unaff_s0 + 8);
    pcVar7 = *(code **)(in_stack_00000018 + -0x7828);
    unaff_s2 = 0;
    if (puVar2 != (undefined4 *)0x0) goto LAB_0002789c;
    iVar1 = *(int *)(in_stack_00000018 + -0x7fd4);
    uVar4 = 0x231;
    iVar3 = *(int *)(in_stack_00000018 + -0x7fd4);
    iVar5 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x45f0;
  }
  pcVar7 = *(code **)(in_stack_00000018 + -0x7a88);
  (*pcVar7)(iVar1 + -0x4704,iVar3 + -0x47d8,uVar4,iVar5);
LAB_0002789c:
  iVar1 = 0;
  (*pcVar7)(*puVar2);
  while( true ) {
    uVar4 = (**(code **)(in_stack_00000018 + -0x789c))();
    iVar3 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar4);
    if (iVar3 != 0) break;
    if (in_stack_00000030 != 1) {
      unaff_s2 = 0xffffffea;
      goto LAB_000279d0;
    }
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == 0) {
    unaff_s2 = 0xffffffee;
  }
  else {
    puVar2 = (undefined4 *)
             (**(code **)(in_stack_00000018 + -0x7818))
                       (iVar1,8,*(int *)(in_stack_00000018 + -0x7fd4) + -0x4604,0x246);
    if (puVar2 == (undefined4 *)0x0) {
      unaff_s2 = 0xfffffff5;
    }
    else {
      iVar3 = 0;
      pcVar7 = *(code **)(in_stack_00000018 + -0x789c);
      puVar6 = puVar2;
      do {
        uVar4 = (*pcVar7)();
        iVar5 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar4);
        if (iVar5 != 0) {
          *(int *)(unaff_s0 + 0x24) = iVar1;
          goto LAB_00027988;
        }
        iVar3 = iVar3 + 1;
        *puVar6 = in_stack_00000034;
        puVar6[1] = in_stack_00000038;
        pcVar7 = *(code **)(in_stack_00000018 + -0x789c);
        puVar6 = puVar6 + 2;
      } while (iVar3 < iVar1);
      *(int *)(unaff_s0 + 0x24) = iVar1;
LAB_00027988:
      *(undefined4 **)(unaff_s0 + 0x28) = puVar2;
    }
  }
LAB_000279d0:
  iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(unaff_s2);
  if (iVar1 != 0) {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x46c0,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x45b0,0x273);
    if (*(int *)(unaff_s0 + 8) != 0) {
      (**(code **)(in_stack_00000018 + -0x796c))();
    }
    *(undefined4 *)(unaff_s0 + 8) = 0;
  }
  return;
}



// ==== rts_av_query_osd2 @ 000278c8 size=184

undefined4 rts_av_query_osd2(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int unaff_s0;
  int unaff_s1;
  undefined4 unaff_s2;
  int unaff_s5;
  undefined4 *puVar5;
  code *in_t9;
  code *pcVar6;
  int iStack00000010;
  int in_stack_00000018;
  int in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  
  while( true ) {
    iStack00000010 = unaff_s1;
    uVar1 = (*in_t9)();
    iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
    if (iVar2 != 0) break;
    if (in_stack_00000030 != unaff_s5) {
      unaff_s2 = 0xffffffea;
      goto LAB_000279d0;
    }
    unaff_s1 = unaff_s1 + 1;
    in_t9 = *(code **)(in_stack_00000018 + -0x789c);
  }
  if (unaff_s1 == 0) {
    unaff_s2 = 0xffffffee;
  }
  else {
    puVar3 = (undefined4 *)
             (**(code **)(in_stack_00000018 + -0x7818))
                       (unaff_s1,8,*(int *)(in_stack_00000018 + -0x7fd4) + -0x4604,0x246);
    if (puVar3 == (undefined4 *)0x0) {
      unaff_s2 = 0xfffffff5;
    }
    else {
      iVar2 = 0;
      pcVar6 = *(code **)(in_stack_00000018 + -0x789c);
      puVar5 = puVar3;
      do {
        iStack00000010 = iVar2;
        uVar1 = (*pcVar6)();
        iVar4 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
        if (iVar4 != 0) {
          *(int *)(unaff_s0 + 0x24) = unaff_s1;
          goto LAB_00027988;
        }
        iVar2 = iVar2 + 1;
        *puVar5 = in_stack_00000034;
        puVar5[1] = in_stack_00000038;
        pcVar6 = *(code **)(in_stack_00000018 + -0x789c);
        puVar5 = puVar5 + 2;
      } while (iVar2 < unaff_s1);
      *(int *)(unaff_s0 + 0x24) = unaff_s1;
LAB_00027988:
      *(undefined4 **)(unaff_s0 + 0x28) = puVar3;
    }
  }
LAB_000279d0:
  iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(unaff_s2);
  uVar1 = 0;
  if (iVar2 != 0) {
    iStack00000010 = unaff_s2;
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x46c0,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x45b0,0x273);
    if (*(int *)(unaff_s0 + 8) != 0) {
      (**(code **)(in_stack_00000018 + -0x796c))();
    }
    *(undefined4 *)(unaff_s0 + 8) = 0;
    uVar1 = unaff_s2;
  }
  return uVar1;
}



// ==== rts_av_set_osd2_single @ 0002796c size=116

undefined4 rts_av_set_osd2_single(void)

{
  undefined4 in_v0;
  int iVar1;
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar2;
  undefined4 unaff_s2;
  int unaff_s5;
  code *in_t9;
  int in_stack_00000018;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000060;
  undefined4 *in_stack_00000064;
  
  do {
    iVar1 = (*in_t9)(in_v0);
    if (iVar1 != 0) {
      *(int *)(unaff_s0 + 0x24) = unaff_s1;
LAB_00027988:
      *(undefined4 *)(unaff_s0 + 0x28) = in_stack_00000060;
      iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))();
      uVar2 = 0;
      if (iVar1 != 0) {
        (**(code **)(in_stack_00000018 + -0x7c54))
                  (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x46c0,
                   *(int *)(in_stack_00000018 + -0x7fd4) + -0x45b0,0x273);
        if (*(int *)(unaff_s0 + 8) != 0) {
          (**(code **)(in_stack_00000018 + -0x796c))();
        }
        *(undefined4 *)(unaff_s0 + 8) = 0;
        uVar2 = unaff_s2;
      }
      return uVar2;
    }
    unaff_s5 = unaff_s5 + 1;
    *in_stack_00000064 = in_stack_00000034;
    in_stack_00000064[1] = in_stack_00000038;
    if (unaff_s1 <= unaff_s5) {
      *(int *)(unaff_s0 + 0x24) = unaff_s1;
      goto LAB_00027988;
    }
    in_v0 = (**(code **)(in_stack_00000018 + -0x789c))();
    in_t9 = *(code **)(in_stack_00000018 + -0x7ec0);
    in_stack_00000064 = in_stack_00000064 + 2;
  } while( true );
}



// ==== rts_av_get_osd2_single @ 000279f4 size=112

void rts_av_get_osd2_single(undefined4 param_1,int param_2,int param_3)

{
  int unaff_s0;
  int unaff_gp;
  int in_stack_00000018;
  
  (**(code **)(unaff_gp + -0x7c54))(param_1,param_2 + -0x46c0,param_3 + -0x45b0,0x273);
  if (*(int *)(unaff_s0 + 8) != 0) {
    (**(code **)(in_stack_00000018 + -0x796c))();
  }
  *(undefined4 *)(unaff_s0 + 8) = 0;
  return;
}



// ==== rts_av_set_osd2 @ 00027a7c size=240

undefined4 rts_av_set_osd2(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int unaff_s1;
  undefined4 unaff_s3;
  int unaff_s4;
  int in_t8;
  code *pcVar2;
  int unaff_gp;
  
  if (param_2 == 0) {
    (**(code **)(unaff_gp + -0x7a88))
              (*(int *)(unaff_gp + -0x7fd4) + -0x4694,*(int *)(unaff_gp + -0x7fd4) + -0x47d8,0x2a9,
               *(int *)(unaff_gp + -0x7fd4) + -0x4640);
    param_1 = unaff_s3;
    param_3 = unaff_s4;
    goto LAB_00027ad0;
  }
  unaff_s1 = 0;
  do {
    in_t8 = unaff_s1 << 2;
    if (param_3 <= unaff_s1) {
      (**(code **)(unaff_gp + -0x783c))(param_1,0);
      return 0;
    }
LAB_00027ad0:
    piVar1 = *(int **)(param_2 + in_t8);
    (**(code **)(unaff_gp + -0x78a8))(piVar1,0,0);
    if (*piVar1 == 0) {
LAB_00027af8:
      pcVar2 = *(code **)(unaff_gp + -0x7bcc);
    }
    else {
      pcVar2 = *(code **)(unaff_gp + -0x7bcc);
      if (piVar1[1] != 0) {
        (**(code **)(unaff_gp + -0x79b8))();
        goto LAB_00027af8;
      }
    }
    unaff_s1 = unaff_s1 + 1;
    (*pcVar2)(piVar1);
    piVar1[0xc] = 0;
  } while( true );
}



// ==== rts_av_get_osd2 @ 00027b6c size=8

void rts_av_get_osd2(void)

{
  return;
}



// ==== rts_av_resume_osd2_single @ 00027c5c size=208

int rts_av_resume_osd2_single(void)

{
  int in_v0;
  int iVar1;
  undefined4 uVar2;
  int unaff_s0;
  int unaff_s1;
  int unaff_s3;
  int unaff_s5;
  int unaff_gp;
  undefined4 unaff_s8;
  int in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while( true ) {
    iVar1 = (**(code **)(unaff_gp + -0x7ec0))(in_v0);
    if (iVar1 != 0) {
      (**(code **)(in_stack_00000010 + -0x7c54))
                (4,*(int *)(in_stack_00000010 + -0x7fd4) + -0x4670,
                 *(int *)(in_stack_00000010 + -0x7fd4) + -0x462c,0x295);
      (**(code **)(in_stack_00000010 + -0x78e0))();
      return in_v0;
    }
    if (unaff_s5 != 0) {
      uVar2 = (**(code **)(in_stack_00000010 + -0x7c78))();
      (**(code **)(in_stack_00000010 + -0x78bc))(unaff_s8,in_stack_0000001c,in_stack_00000018,uVar2)
      ;
    }
    unaff_s0 = unaff_s0 + 1;
    if (unaff_s0 == unaff_s1) break;
    unaff_s8 = *(undefined4 *)(unaff_s3 + unaff_s0 * 4);
    in_v0 = (**(code **)(in_stack_00000010 + -0x7e6c))();
    unaff_gp = in_stack_00000010;
  }
  return unaff_s0;
}



// ==== rts_av_pause_osd2_single @ 00027d7c size=20

undefined4
rts_av_pause_osd2_single
          (undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_t8;
  
  *param_1 = param_4;
  *param_2 = in_t8;
  return 0;
}



// ==== rts_av_set_osd2_color_table @ 00027e9c size=88

undefined4 rts_av_set_osd2_color_table(void)

{
  int unaff_s0;
  int unaff_gp;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  
  (**(code **)(unaff_gp + -0x7ef4))();
  *(undefined4 *)(unaff_s0 + 8) = in_stack_00000034;
  *(undefined4 *)(unaff_s0 + 0xc) = in_stack_00000030;
  return 0;
}



// ==== rts_video_alloc_grid_bitmap @ 00028000 size=12

undefined4 rts_video_alloc_grid_bitmap(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint unaff_s1;
  
  if (param_1 == (int *)0x0) {
    param_1 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x44f0);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x42a4,0x1b,param_1);
    puVar3 = (undefined *)0x1b;
  }
  else {
    unaff_s1 = param_2 + 7;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c;
    if (param_2 != 0) goto LAB_000280c0;
    param_1 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4480);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x42a4,0x1c,param_1);
    puVar3 = (undefined *)0x1c;
  }
  (*(code *)PTR___assert_000637b8)
            (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x44e8,puVar3,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x42c0);
LAB_000280c0:
  iVar1 = (*(code *)PTR___rts_calloc_00063a28)(1,unaff_s1 >> 3,puVar3 + -0x42a4,0x20);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0xfffffff6;
  }
  else {
    param_1[1] = unaff_s1 >> 3;
    uVar2 = 0;
  }
  return uVar2;
}



// ==== rts_av_get_osd2_color_table @ 0002800c size=252

undefined4 rts_av_get_osd2_color_table(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint unaff_s1;
  int unaff_gp;
  
  iVar3 = *(int *)(unaff_gp + -0x7fd4);
  if (param_1 == (int *)0x0) {
    param_1 = (int *)(*(int *)(unaff_gp + -0x7fd4) + -0x44f0);
    (**(code **)(unaff_gp + -0x7c54))
              (4,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,iVar3 + -0x42a4,0x1b,param_1);
    iVar3 = 0x1b;
    iVar2 = *(int *)(unaff_gp + -0x7fd4);
  }
  else {
    unaff_s1 = param_2 + 7;
    if (param_2 != 0) goto LAB_000280c0;
    param_1 = (int *)(*(int *)(unaff_gp + -0x7fd4) + -0x4480);
    (**(code **)(unaff_gp + -0x7c54))
              (4,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,iVar3 + -0x42a4,0x1c,param_1);
    iVar3 = 0x1c;
    iVar2 = *(int *)(unaff_gp + -0x7fd4);
  }
  (**(code **)(unaff_gp + -0x7a88))
            (param_1,iVar2 + -0x44e8,iVar3,*(int *)(unaff_gp + -0x7fd4) + -0x42c0);
LAB_000280c0:
  iVar3 = (**(code **)(unaff_gp + -0x7818))(1,unaff_s1 >> 3,iVar3 + -0x42a4,0x20);
  *param_1 = iVar3;
  if (iVar3 == 0) {
    uVar1 = 0xfffffff6;
  }
  else {
    param_1[1] = unaff_s1 >> 3;
    uVar1 = 0;
  }
  return uVar1;
}



// ==== rts_video_free_grid_bitmap @ 00028108 size=100

void rts_video_free_grid_bitmap(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x44f0);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x42dc,0x2b,piVar1);
    param_1 = piVar1;
    (*(code *)PTR___assert_000637b8)
              (piVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x44e8,0x2b,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x42f8);
  }
  if (*param_1 != 0) {
    (*(code *)PTR_rts_free_000638d4)();
  }
  *piVar1 = 0;
  piVar1[1] = 0;
  return;
}



// ==== rts_av_release_osd2 @ 0002816c size=60

void rts_av_release_osd2(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 *unaff_s0;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7a88))(param_1,param_2 + -0x44e8,param_3,param_4 + -0x42f8);
  if (*param_1 != 0) {
    (**(code **)(unaff_gp + -0x796c))();
  }
  *unaff_s0 = 0;
  unaff_s0[1] = 0;
  return;
}



// ==== rts_video_cvrt_grid_from_isp @ 000281a8 size=52

void rts_video_cvrt_grid_from_isp(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4478);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4318,0x34,param_1);
    uVar1 = 0x34;
  }
  else {
    if (param_2 != (undefined4 *)0x0) goto LAB_00028264;
    param_1 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4470);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4318,0x35,param_1);
    uVar1 = 0x35;
  }
  param_2 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x44e8);
  (*(code *)PTR___assert_000637b8)
            (param_1,param_2,uVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4338);
LAB_00028264:
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[5];
  param_1[5] = param_2[4];
  return;
}



// ==== rts_jpgencoder_post_connect @ 000281dc size=124

void rts_jpgencoder_post_connect(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int unaff_s0;
  undefined4 *puVar2;
  int unaff_gp;
  undefined4 *puStack00000010;
  int in_stack_00000018;
  
  puVar2 = (undefined4 *)(unaff_s0 + -0x4478);
  puStack00000010 = puVar2;
  (**(code **)(unaff_gp + -0x7c54))(param_1,param_2 + -0x6cf0,param_3 + -0x4318);
  puVar1 = (undefined4 *)(*(int *)(in_stack_00000018 + -0x7fd4) + -0x44e8);
  (**(code **)(in_stack_00000018 + -0x7a88))
            (puVar2,puVar1,0x34,*(int *)(in_stack_00000018 + -0x7fd4) + -0x4338);
  *puVar2 = *puVar1;
  puVar2[1] = puVar1[1];
  puVar2[2] = puVar1[2];
  puVar2[3] = puVar1[3];
  puVar2[4] = puVar1[5];
  puVar2[5] = puVar1[4];
  return;
}



// ==== rts_video_cvrt_grid_to_isp @ 000282a0 size=248

void rts_video_cvrt_grid_to_isp(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4478);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4354,0x42,param_1);
    uVar1 = 0x42;
  }
  else {
    if (param_2 != (undefined4 *)0x0) goto LAB_0002835c;
    param_1 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4470);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4354,0x43,param_1);
    uVar1 = 0x43;
  }
  param_2 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x44e8);
  (*(code *)PTR___assert_000637b8)
            (param_1,param_2,uVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4370);
LAB_0002835c:
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[3] = param_1[3];
  param_2[5] = param_1[4];
  param_2[4] = param_1[5];
  return;
}



// ==== rts_video_cvrt_rect_from_isp @ 00028398 size=232

void rts_video_cvrt_rect_from_isp(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4468);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4390,0x50,param_1);
    uVar1 = 0x50;
  }
  else {
    if (param_2 != (undefined4 *)0x0) goto LAB_00028450;
    param_1 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4460);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4390,0x51,param_1);
    uVar1 = 0x51;
  }
  param_2 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x44e8);
  (*(code *)PTR___assert_000637b8)
            (param_1,param_2,uVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x43b0);
LAB_00028450:
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return;
}



// ==== rts_video_cvrt_rect_to_isp @ 00028480 size=232

void rts_video_cvrt_rect_to_isp(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4468);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x43cc,0x5c,param_1);
    uVar1 = 0x5c;
  }
  else {
    if (param_2 != (undefined4 *)0x0) goto LAB_0002853c;
    param_1 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4460);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x43cc,0x5d,param_1);
    uVar1 = 0x5d;
  }
  param_2 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x44e8);
  (*(code *)PTR___assert_000637b8)
            (param_1,param_2,uVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x43e8);
LAB_0002853c:
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[3] = param_1[3];
  return;
}



// ==== rts_video_cvrt_blk_type_from_isp @ 00028568 size=40

undefined4 rts_video_cvrt_blk_type_from_isp(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 1) {
    uVar1 = 2;
    if (param_1 != 2) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 1;
}



// ==== rts_video_cvrt_blk_type_to_isp @ 00028590 size=40

undefined4 rts_video_cvrt_blk_type_to_isp(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 1) {
    uVar1 = 2;
    if (param_1 != 2) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 1;
}



// ==== rts_av_rotate_rect @ 000285b8 size=160

undefined4 rts_av_rotate_rect(int param_1,int param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = *param_4;
  uVar5 = param_4[1];
  uVar6 = param_4[2];
  uVar1 = param_4[3];
  if (param_3 == 2) {
    iVar4 = param_1 - uVar6;
    uVar6 = (param_1 - uVar3) - 1;
    uVar3 = iVar4 - 1;
  }
  else if (param_3 == 3) {
    iVar4 = param_1 - uVar6;
    uVar2 = ~uVar1;
    uVar1 = (param_1 - uVar3) - 1;
    uVar6 = ~uVar5 + param_2;
    uVar3 = uVar2 + param_2;
    uVar5 = iVar4 - 1;
  }
  else if (param_3 == 1) {
    uVar2 = ~uVar5;
    uVar5 = ~uVar1 + param_2;
    uVar1 = uVar2 + param_2;
  }
  else {
    uVar6 = 0;
    uVar1 = 0;
    uVar3 = 0;
    uVar5 = 0;
  }
  param_4[2] = uVar1;
  *param_4 = uVar5;
  param_4[1] = uVar3;
  param_4[3] = uVar6;
  return 0;
}



// ==== rts_av_rotate_bitmap @ 00028658 size=364

/* WARNING: Removing unreachable block (ram,0x00028760) */
/* WARNING: Removing unreachable block (ram,0x000287a0) */

undefined4 rts_av_rotate_bitmap(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = param_1 * param_2 + 7 >> 3;
  if (param_5 < (int)uVar7) {
    uVar3 = 0xffffffeb;
  }
  else {
    iVar1 = (*(code *)PTR___rts_calloc_00063a28)
                      (1,param_5,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4400,0xd4);
    if (iVar1 == 0) {
      uVar3 = 0xfffffff5;
    }
    else {
      if (param_3 == 2) {
        uVar3 = FUN_000287c4();
        return uVar3;
      }
      if (param_3 == 3) {
        uVar3 = FUN_0002885c();
        return uVar3;
      }
      if (param_3 == 1) {
        for (uVar8 = 0; (int)uVar8 < (int)(param_1 * param_2); uVar8 = uVar8 + 1) {
          if (param_2 == 0) {
            trap(0x1c00);
          }
          iVar2 = ~(uVar8 / param_2) + (uVar8 % param_2 + 1) * param_1;
          iVar4 = iVar2 + 7;
          if (-1 < iVar2) {
            iVar4 = iVar2;
          }
          uVar6 = uVar8 + 7;
          if (-1 < (int)uVar8) {
            uVar6 = uVar8;
          }
          pbVar5 = (byte *)(iVar1 + (iVar4 >> 3));
          *pbVar5 = (byte)(((int)(uint)*(byte *)(param_4 + ((int)uVar6 >> 3)) >>
                            ((int)uVar8 % 8 & 0x1fU) & 1U) << (iVar2 % 8 & 0x1fU)) | *pbVar5;
        }
        (*(code *)PTR_memcpy_00063908)(param_4,iVar1,uVar7);
      }
      (*(code *)PTR_rts_free_000638d4)(iVar1);
      uVar3 = 0;
    }
  }
  return uVar3;
}



// ==== rts_jpgencoder_start @ 000287d8 size=132

void rts_jpgencoder_start(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int in_v1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int unaff_s1;
  int unaff_s2;
  int unaff_s5;
  int in_t8;
  int in_lo;
  int in_hi;
  
  trap(0x1c00);
  if (in_v1 == 0) {
    trap(0x1c00);
  }
  iVar1 = (param_2 - in_hi) * unaff_s5 + in_lo;
  iVar2 = iVar1 + 7;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  iVar4 = in_t8 + 7;
  if (param_4 == 0) {
    iVar4 = in_t8;
  }
  pbVar3 = (byte *)(unaff_s1 + (iVar2 >> 3));
  if (in_v1 == 0) {
    trap(0x1c00);
  }
  *pbVar3 = (byte)(((int)(uint)*(byte *)(unaff_s2 + (iVar4 >> 3)) >> (in_t8 % in_v1 & 0x1fU) & 1U)
                  << (iVar1 % in_v1 & 0x1fU)) | *pbVar3;
  FUN_000287c4();
  return;
}



// ==== rts_av_rotate_grid @ 00028958 size=384

undefined4 rts_av_rotate_grid(uint param_1,uint param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_4;
  uVar4 = param_4[1];
  uVar2 = param_4[5] * param_4[2] + uVar3;
  uVar1 = param_4[4] * param_4[3] + uVar4;
  if ((int)uVar3 < 0) {
    return 0xffffffeb;
  }
  if (param_1 <= uVar3) {
    return 0xffffffeb;
  }
  if ((int)uVar2 < 0) {
    return 0xffffffeb;
  }
  if (param_1 <= uVar2) {
    return 0xffffffeb;
  }
  if ((int)uVar2 < (int)uVar3) {
    return 0xffffffeb;
  }
  if ((int)uVar4 < 0) {
    return 0xffffffeb;
  }
  if (param_2 <= uVar4) {
    return 0xffffffeb;
  }
  if (-1 < (int)uVar1) {
    if (param_2 <= uVar1) {
      return 0xffffffeb;
    }
    if ((int)uVar1 < (int)uVar4) {
      return 0xffffffeb;
    }
    (*(code *)PTR_rts_av_rotate_bitmap_000632ec)();
    if (param_3 == 2) {
      *param_4 = param_2 - uVar1;
      param_4[1] = uVar3;
    }
    else {
      if (param_3 == 3) {
        *param_4 = param_1 - uVar2;
        param_4[1] = param_2 - uVar1;
        return 0;
      }
      if (param_3 != 1) {
        return 0;
      }
      *param_4 = uVar4;
      param_4[1] = param_1 - uVar2;
    }
    uVar1 = param_4[3];
    param_4[3] = param_4[2];
    param_4[2] = uVar1;
    uVar1 = param_4[5];
    param_4[5] = param_4[4];
    param_4[4] = uVar1;
    return 0;
  }
  return 0xffffffeb;
}



// ==== rts_av_check_rect @ 00028ad8 size=184

undefined4 rts_av_check_rect(uint param_1,uint param_2,uint *param_3)

{
  if ((int)*param_3 < 0) {
    *param_3 = 0;
  }
  else if (param_1 < *param_3) {
    *param_3 = param_1 - 1;
  }
  if ((int)param_3[2] < 0) {
    param_3[2] = 0;
  }
  else if (param_1 < param_3[2]) {
    param_3[2] = param_1 - 1;
  }
  if ((int)param_3[1] < 0) {
    param_3[1] = 0;
  }
  else if (param_2 < param_3[1]) {
    param_3[1] = param_2 - 1;
  }
  if ((int)param_3[3] < 0) {
    param_3[3] = 0;
  }
  else if (param_2 < param_3[3]) {
    param_3[3] = param_2 - 1;
  }
  if ((int)param_3[2] < (int)*param_3) {
    *param_3 = param_3[2];
  }
  if ((int)param_3[3] < (int)param_3[1]) {
    param_3[1] = param_3[3];
  }
  return 0;
}



// ==== rts_set_isp_bitmap @ 00028b90 size=100

undefined4 rts_set_isp_bitmap(int param_1,int param_2,int param_3)

{
  if (param_1 == 0) {
    return 0xfffffff6;
  }
  if ((-1 < param_3) && (param_3 < param_2 << 3)) {
    (*(code *)PTR_rts_set_bit_00063308)();
    return 0;
  }
  return 0xffffffeb;
}



// ==== rts_clear_isp_bitmap @ 00028bf4 size=100

undefined4 rts_clear_isp_bitmap(int param_1,int param_2,int param_3)

{
  if (param_1 == 0) {
    return 0xfffffff6;
  }
  if ((-1 < param_3) && (param_3 < param_2 << 3)) {
    (*(code *)PTR_rts_clear_bit_000633b8)();
    return 0;
  }
  return 0xffffffeb;
}



// ==== rts_get_isp_bitmap @ 00028c58 size=36

undefined4 rts_get_isp_bitmap(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0xfffffff6;
  }
  if ((-1 < param_3) && (param_3 < param_2 << 3)) {
    uVar1 = (*(code *)PTR_rts_get_bits_val_00063768)();
    return uVar1;
  }
  return 0xffffffeb;
}



// ==== rts_jpgencoder_check_ready @ 00028c7c size=32

undefined4 rts_jpgencoder_check_ready(void)

{
  undefined4 uVar1;
  int in_t8;
  
  if (in_t8 != 0) {
    uVar1 = (*(code *)PTR_rts_get_bits_val_00063768)();
    return uVar1;
  }
  return 0xffffffeb;
}



// ==== rts_set_all_isp_bitmap @ 00028ca4 size=72

undefined4 rts_set_all_isp_bitmap(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    (*(code *)PTR_memset_000637dc)(param_1,0xff,param_2);
    return 0;
  }
  return 0xfffffff6;
}



// ==== rts_clear_all_isp_bitmap @ 00028cec size=8

undefined4 rts_clear_all_isp_bitmap(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    (*(code *)PTR_memset_000637dc)(param_1,0,param_2);
    return 0;
  }
  return 0xfffffff6;
}



// ==== rts_jpgencoder_run @ 00028cf4 size=64

undefined4 rts_jpgencoder_run(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_t9;
  int unaff_gp;
  
  if (param_1 != 0) {
    (**(code **)(unaff_gp + in_t9 + -0x7a64))(param_1,0,param_2,param_4,unaff_gp + in_t9);
    return 0;
  }
  return 0xfffffff6;
}



// ==== rts_av_cvrt_point_res @ 00028d34 size=408

undefined4 rts_av_cvrt_point_res(undefined *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_s2;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x509c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4418,0x18b,param_1);
    param_3 = 0x18b;
    param_2 = unaff_s2;
  }
  else {
    if (param_2 != 0) goto LAB_00028dfc;
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5098;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4418,0x18c,param_1);
    param_3 = 0x18c;
  }
  (*(code *)PTR___assert_000637b8)
            (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x44e8,param_3,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4430);
LAB_00028dfc:
  if (param_3 == 0) {
    local_18 = 1;
    local_14 = 1;
  }
  else {
    (*(code *)PTR_memcpy_00063908)(&local_18,param_3,8);
  }
  iVar1 = (*(code *)PTR_rts_isp_ctrl_open_00063964)();
  if (iVar1 < 0) {
    uVar2 = 0xffffffe8;
  }
  else {
    uVar2 = (*(code *)PTR_rts_isp_cvrt_point_res_00063758)(iVar1,param_1,param_2,&local_18);
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
    if (iVar3 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x445c,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4418,0x19b,uVar2);
    }
    (*(code *)PTR_rts_isp_ctrl_close_00063660)(iVar1);
  }
  return uVar2;
}



// ==== rts_jpgencoder_set_attr @ 00029118 size=200

void rts_jpgencoder_set_attr(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *unaff_s0;
  int unaff_s1;
  int in_t8;
  code *pcVar5;
  int unaff_gp;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puStack00000010;
  int in_stack_00000018;
  
  puStack00000010 = (undefined4 *)(in_t8 + -0x4214);
  (**(code **)(unaff_gp + -0x7c54))
            (param_1,param_2 + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x40bc,0x33);
  if (unaff_s0[8] != 0) goto LAB_00029168;
  uVar4 = 0x33;
  iVar3 = *(int *)(in_stack_00000018 + -0x7fd4);
  puVar1 = (undefined4 *)(*(int *)(in_stack_00000018 + -0x7fd4) + -0x4214);
  while( true ) {
    (**(code **)(in_stack_00000018 + -0x7a88))
              (puVar1,iVar3 + -0x4278,uVar4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x40d4);
LAB_00029168:
    if (unaff_s1 != 0) break;
    puVar1 = (undefined4 *)(*(int *)(in_stack_00000018 + -0x7fd4) + 0x398);
    puStack00000010 = puVar1;
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x6cf0,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x40bc,0x34);
    uVar4 = 0x34;
    iVar3 = *(int *)(in_stack_00000018 + -0x7fd4);
    unaff_s0 = puVar1;
  }
  (**(code **)(in_stack_00000018 + -0x7754))(*unaff_s0,*(undefined4 *)(unaff_s1 + 0x14));
  uVar6 = (**(code **)(in_stack_00000018 + -0x7ce4))();
  uVar7 = (**(code **)(in_stack_00000018 + -0x7fac))();
  uVar2 = (uint)uVar6 - (int)uVar7;
  iVar3 = ((int)((ulonglong)uVar6 >> 0x20) - (int)((ulonglong)uVar7 >> 0x20)) -
          (uint)((uint)uVar6 < uVar2);
  if (iVar3 == 0) {
    pcVar5 = *(code **)(in_stack_00000018 + -0x7748);
    if (uVar2 < 0x3938701) {
      return;
    }
  }
  else {
    pcVar5 = *(code **)(in_stack_00000018 + -0x7748);
  }
  puStack00000010 = (undefined4 *)(*pcVar5)(uVar2,iVar3,1000000,0);
  (**(code **)(in_stack_00000018 + -0x7c54))
            (3,*(int *)(in_stack_00000018 + -0x7fd4) + -0x41d4,
             *(int *)(in_stack_00000018 + -0x7fd4) + -0x40bc,0x3b);
  return;
}



// ==== rts_jpgencoder_get_attr @ 000291e0 size=148

void rts_jpgencoder_get_attr(void)

{
  int in_v1;
  uint uVar1;
  int iVar2;
  uint unaff_s0;
  code *in_t9;
  code *pcVar3;
  undefined8 uVar4;
  int in_stack_00000018;
  
  uVar4 = (*in_t9)();
  uVar1 = unaff_s0 - (int)uVar4;
  iVar2 = (in_v1 - (int)((ulonglong)uVar4 >> 0x20)) - (uint)(unaff_s0 < uVar1);
  if (iVar2 == 0) {
    pcVar3 = *(code **)(in_stack_00000018 + -0x7748);
    if (uVar1 < 0x3938701) {
      return;
    }
  }
  else {
    pcVar3 = *(code **)(in_stack_00000018 + -0x7748);
  }
  (*pcVar3)(uVar1,iVar2,1000000,0);
  (**(code **)(in_stack_00000018 + -0x7c54))
            (3,*(int *)(in_stack_00000018 + -0x7fd4) + -0x41d4,
             *(int *)(in_stack_00000018 + -0x7fd4) + -0x40bc,0x3b);
  return;
}



// ==== rts_isp_get_attr @ 000292d0 size=108

undefined4 rts_isp_get_attr(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)(PTR_LAB_00063270 + -0x6d8c))();
  if (iVar1 == 0) {
    uVar2 = 0xffffffe1;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      param_2[1] = *(undefined4 *)(iVar1 + 4);
      *param_2 = *(undefined4 *)(iVar1 + 0x24);
    }
    uVar2 = 0;
  }
  return uVar2;
}



// ==== rts_isp_get_profile @ 0002933c size=56

undefined4 rts_isp_get_profile(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)(PTR_LAB_00063270 + -0x6d8c))();
  if (iVar1 == 0) {
    uVar2 = 0xffffffe1;
  }
  else if (*(int *)(iVar1 + 0x20) == 0) {
    uVar2 = 0xffffffe6;
  }
  else {
    *param_2 = *(undefined4 *)(iVar1 + 0xc);
    param_2[1] = *(undefined4 *)(iVar1 + 0x10);
    param_2[2] = *(undefined4 *)(iVar1 + 0x14);
    param_2[3] = *(undefined4 *)(iVar1 + 0x18);
    uVar2 = 0;
    param_2[4] = *(undefined4 *)(iVar1 + 0x1c);
  }
  return uVar2;
}



// ==== rts_jpgencoder_set_profile @ 00029374 size=76

undefined4 rts_jpgencoder_set_profile(void)

{
  int in_v0;
  undefined4 uVar1;
  undefined4 *unaff_s0;
  int in_t8;
  
  if (in_t8 == 0) {
    uVar1 = 0xffffffe6;
  }
  else {
    *unaff_s0 = *(undefined4 *)(in_v0 + 0xc);
    unaff_s0[1] = *(undefined4 *)(in_v0 + 0x10);
    unaff_s0[2] = *(undefined4 *)(in_v0 + 0x14);
    unaff_s0[3] = *(undefined4 *)(in_v0 + 0x18);
    uVar1 = 0;
    unaff_s0[4] = *(undefined4 *)(in_v0 + 0x1c);
  }
  return uVar1;
}



// ==== rts_isp_start @ 000293c8 size=180

undefined4 rts_isp_start(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(*(code *)(PTR_LAB_00063270 + -0x6d8c))();
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0xffffffe1;
  }
  else {
    uVar2 = (*(code *)(PTR_LAB_00063270 + -0x7130))(puVar1,puVar1[2]);
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
    if (iVar3 == 0) {
      uVar2 = (*(code *)PTR_rts_v4l2_streamon_00063440)(*puVar1);
      iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
      uVar2 = 0xffffffe4;
      if (iVar3 == 0) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



// ==== rts_isp_stop @ 0002947c size=108

undefined4 rts_isp_stop(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(code *)(PTR_LAB_00063270 + -0x6d8c))();
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0xffffffe1;
  }
  else {
    (*(code *)PTR_rts_v4l2_streamoff_000635c0)(*puVar1);
    (*(code *)(PTR_LAB_00063270 + -0x7130))(puVar1,0);
    (*(code *)PTR_update_v4l2_profile_000634e4)(*puVar1,puVar1 + 3);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== rts_jpgencoder_pre_disconnect @ 000294e8 size=28

undefined4 rts_jpgencoder_pre_disconnect(void)

{
  return 0;
}



// ==== rts_isp_check_ready @ 00029508 size=96

undefined4 rts_isp_check_ready(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)(*(code *)(PTR_LAB_00063270 + -0x6d8c))();
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0xffffffe1;
  }
  else {
    iVar2 = (*(code *)PTR_rts_v4l2_pollin_000635f0)(*puVar1,0);
    uVar3 = 0xffffffef;
    if (iVar2 != 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// ==== rts_isp_run @ 00029568 size=64

undefined4 rts_isp_run(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint local_60 [2];
  undefined4 local_58;
  undefined1 auStack_4c [56];
  
  puVar2 = (undefined4 *)(*(code *)(PTR_LAB_00063270 + -0x6d8c))();
  if (puVar2 == (undefined4 *)0x0) {
    uVar4 = 0xffffffe1;
  }
  else {
    iVar3 = (*(code *)PTR_rts_v4l2_pollin_000635f0)(*puVar2,0);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = (*(code *)PTR_rts_v4l2_get_buffer_000638c8)(*puVar2,local_60);
      iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
      puVar1 = PTR_rts_av_get_time_0006396c;
      if (iVar3 == 0) {
        if (local_60[0] < (uint)puVar2[9]) {
          iVar3 = puVar2[local_60[0] + 10];
          *(uint *)(iVar3 + 0x14) = local_60[0];
          *(undefined4 *)(iVar3 + 8) = local_58;
          uVar5 = (*(code *)puVar1)(auStack_4c);
          puVar1 = PTR_update_v4l2_profile_000634e4;
          uVar4 = *puVar2;
          *(undefined8 *)(iVar3 + 0x28) = uVar5;
          (*(code *)puVar1)(uVar4,puVar2 + 3);
          (*(code *)PTR_rts_av_push_back_output_buffer_lk_00063a0c)
                    (param_1,puVar2[local_60[0] + 10]);
          uVar4 = 0;
        }
        else {
          (*(code *)PTR_rts_log_000635ec)
                    (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x41b4,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + -0x40e0,0x14b,local_60[0],puVar2[9]);
          uVar4 = 0xffffffcf;
        }
      }
      else {
        uVar4 = 0xffffffe5;
      }
    }
  }
  return uVar4;
}



// ==== rts_jpgencoder_stop @ 000295a8 size=212

undefined4 rts_jpgencoder_stop(void)

{
  undefined4 *in_v0;
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int unaff_gp;
  undefined8 uVar4;
  int in_stack_00000018;
  uint in_stack_00000020;
  undefined4 in_stack_00000028;
  
  iVar1 = (**(code **)(unaff_gp + -0x7c50))(*in_v0,0);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = (**(code **)(in_stack_00000018 + -0x7978))(*in_v0,&stack0x00000020);
    iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar2);
    if (iVar1 == 0) {
      if (in_stack_00000020 < (uint)in_v0[9]) {
        pcVar3 = *(code **)(in_stack_00000018 + -0x78d4);
        iVar1 = in_v0[in_stack_00000020 + 10];
        *(uint *)(iVar1 + 0x14) = in_stack_00000020;
        *(undefined4 *)(iVar1 + 8) = in_stack_00000028;
        uVar4 = (*pcVar3)(&stack0x00000034);
        uVar2 = *in_v0;
        pcVar3 = *(code **)(in_stack_00000018 + -0x7d5c);
        *(undefined8 *)(iVar1 + 0x28) = uVar4;
        (*pcVar3)(uVar2,in_v0 + 3);
        (**(code **)(in_stack_00000018 + -0x7834))();
        uVar2 = 0;
      }
      else {
        (**(code **)(in_stack_00000018 + -0x7c54))
                  (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x41b4,
                   *(int *)(in_stack_00000018 + -0x7fd4) + -0x40e0,0x14b);
        uVar2 = 0xffffffcf;
      }
    }
    else {
      uVar2 = 0xffffffe5;
    }
  }
  return uVar2;
}



// ==== rts_jpgencoder_get_profile @ 00029674 size=80

void rts_jpgencoder_get_profile(void)

{
  undefined4 in_v0;
  int unaff_s2;
  code *in_t9;
  int in_stack_00000018;
  
  *(undefined4 *)(unaff_s2 + 0x28) = in_v0;
  (*in_t9)();
  (**(code **)(in_stack_00000018 + -0x7834))();
  return;
}



// ==== rts_isp_set_profile @ 000296d4 size=444

undefined4 rts_isp_set_profile(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)(*(code *)(PTR_LAB_00063270 + -0x6d8c))();
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[8] == 0) {
      return 0xffffffe6;
    }
    if (param_2 != (undefined4 *)0x0) {
      iVar2 = (*(code *)PTR_memcmp_000634cc)(puVar1 + 3,param_2,0x14);
      if (iVar2 == 0) {
        return 0;
      }
      uVar3 = (*(code *)PTR_check_v4l2_profile_00063574)(*puVar1,param_2);
      iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
      if (iVar2 != 0) {
        return uVar3;
      }
      uVar5 = *puVar1;
      uVar3 = (*(code *)PTR_rts_get_v4l2_fmt_from_av_fmt_00063a18)(*param_2);
      uVar3 = (*(code *)PTR_rts_v4l2_set_fmt_000637c0)(uVar5,uVar3,param_2[1],param_2[2]);
      iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
      if (iVar2 != 0) {
        return uVar3;
      }
      uVar3 = (*(code *)PTR_rts_v4l2_set_frmival_000638ac)(*puVar1,param_2[3],param_2[4]);
      iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
      if (iVar2 != 0) {
        return uVar3;
      }
      (*(code *)PTR_update_v4l2_profile_000634e4)(*puVar1,puVar1 + 3);
      return 0;
    }
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac8;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x411c,0x1aa,puVar4);
    (*(code *)PTR___assert_000637b8)
              (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4278,0x1aa,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4130);
  }
  return 0xffffffe1;
}



// ==== rts_isp_query_ability @ 00029890 size=124

undefined4 rts_isp_query_ability(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(code *)(PTR_LAB_00063270 + -0x6d8c))();
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar2 = 0xfffffff6;
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = (*(code *)PTR_query_isp_ability_0006387c)(*puVar1);
      return uVar2;
    }
    uVar2 = 0xffffffe1;
  }
  return uVar2;
}



// ==== rts_isp_init @ 00029a44 size=116

undefined4 rts_isp_init(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 == 0) {
    uVar4 = 0xfffffff6;
  }
  else {
    puVar2 = (undefined4 *)
             (*(code *)PTR___rts_calloc_00063a28)
                       (1,0x3c,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4074,0xce);
    if (puVar2 == (undefined4 *)0x0) {
      uVar4 = 0xfffffff5;
    }
    else {
      *puVar2 = 0xffffffff;
      puVar2[8] = 0;
      iVar5 = 0;
      do {
        iVar3 = (*(code *)PTR_rts_av_new_buffer_000639e0)(0);
        iVar6 = iVar5 + 4;
        *(int *)((int)puVar2 + iVar5 + 0x28) = iVar3;
        puVar1 = PTR_rts_av_set_unit_priv_0006374c;
        if (iVar3 == 0) {
          (*(code *)PTR_rts_av_set_unit_priv_0006374c)(param_1,0);
          (*(code *)(PTR_LAB_00063270 + -0x6658))(puVar2);
          return 0xfffffff5;
        }
        iVar5 = iVar6;
      } while (iVar6 != 0x10);
      puVar2[1] = 0xffffffff;
      puVar2[0xe] = param_1;
      (*(code *)puVar1)(param_1,puVar2);
      uVar4 = 0;
    }
  }
  return uVar4;
}



// ==== rts_jpgencoder_exec_cmd @ 00029ab8 size=140

undefined4 rts_jpgencoder_exec_cmd(void)

{
  int in_v0;
  int unaff_s0;
  undefined4 unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int iVar1;
  code *pcVar2;
  int in_stack_00000010;
  
  while( true ) {
    iVar1 = unaff_s0 + unaff_s2;
    unaff_s2 = unaff_s2 + 4;
    *(int *)(iVar1 + 0x28) = in_v0;
    if (in_v0 == 0) {
      (**(code **)(in_stack_00000010 + -0x7af4))();
      (*(code *)(*(int *)(in_stack_00000010 + -0x7fd0) + -0x6658))();
      return 0xfffffff5;
    }
    if (unaff_s2 == unaff_s3) break;
    in_v0 = (**(code **)(in_stack_00000010 + -0x7860))(0);
  }
  pcVar2 = *(code **)(in_stack_00000010 + -0x7af4);
  *(undefined4 *)(unaff_s0 + 4) = 0xffffffff;
  *(undefined4 *)(unaff_s0 + 0x38) = unaff_s1;
  (*pcVar2)();
  return 0;
}



// ==== rts_isp_cleanup @ 00029b50 size=140

undefined4 rts_isp_cleanup(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
    if (iVar1 != 0) {
      (*(code *)PTR_rts_av_set_unit_priv_0006374c)(param_1,0);
      uVar2 = (*(code *)(PTR_LAB_00063270 + -0x6658))(iVar1);
      return uVar2;
    }
  }
  return 0xfffffff6;
}



// ==== rts_isp_set_attr @ 00029bdc size=96

undefined4 rts_isp_set_attr(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int *unaff_s2;
  
  if (param_1 == 0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x40f4,0x171,puVar4);
    uVar3 = 0x171;
    param_2 = unaff_s2;
  }
  else {
    if (param_2 != (int *)0x0) goto LAB_00029ca0;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x40f4,0x172,puVar4);
    uVar3 = 0x172;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4278,uVar3,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4108);
LAB_00029ca0:
  puVar1 = (undefined4 *)(*(code *)PTR_rts_av_get_unit_priv_00063344)();
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0xfffffff6;
  }
  else {
    if (param_2[1] != puVar1[1]) {
      (*(code *)(PTR_LAB_00063270 + -0x66f4))(puVar1);
      iVar2 = param_2[1];
      puVar1[1] = iVar2;
      if (puVar1[8] == 0) {
        if (iVar2 < 0) {
          uVar3 = 0xffffffeb;
        }
        else {
          uVar3 = (*(code *)PTR_rts_isp_v4l2_open_000639a0)();
          puVar4 = PTR_rts_av_set_unit_poll_fd_0006395c;
          *puVar1 = uVar3;
          (*(code *)puVar4)(puVar1[0xe],uVar3,5);
          puVar1[8] = 1;
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
      iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
      if (iVar2 != 0) {
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4190,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + -0x40f4,0x17f,puVar1[1],uVar3);
        return uVar3;
      }
      (*(code *)PTR_update_v4l2_profile_000634e4)(*puVar1,puVar1 + 3);
    }
    iVar2 = *param_2;
    if (iVar2 < 5) {
      if (iVar2 < 1) {
        iVar2 = 1;
      }
    }
    else {
      iVar2 = 4;
    }
    puVar1[2] = iVar2;
    uVar3 = 0;
  }
  return uVar3;
}



// ==== rts_jpgencoder_init @ 00029c3c size=336

undefined4 rts_jpgencoder_init(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_s2;
  code *pcVar4;
  int unaff_gp;
  int in_stack_00000018;
  
  (**(code **)(unaff_gp + -0x7a88))
            (param_1,*(int *)(unaff_gp + -0x7fd4) + -0x4278,param_3,
             *(int *)(unaff_gp + -0x7fd4) + -0x4108);
  puVar1 = (undefined4 *)(**(code **)(unaff_gp + -0x7efc))();
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0xfffffff6;
  }
  else {
    if (unaff_s2[1] != puVar1[1]) {
      (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + -0x66f4))(puVar1);
      iVar3 = unaff_s2[1];
      puVar1[1] = iVar3;
      if (puVar1[8] == 0) {
        if (iVar3 < 0) {
          uVar2 = 0xffffffeb;
        }
        else {
          uVar2 = (**(code **)(in_stack_00000018 + -0x78a0))();
          pcVar4 = *(code **)(in_stack_00000018 + -0x78e4);
          *puVar1 = uVar2;
          (*pcVar4)(puVar1[0xe],uVar2,5);
          puVar1[8] = 1;
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
      iVar3 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar2);
      if (iVar3 != 0) {
        (**(code **)(in_stack_00000018 + -0x7c54))
                  (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x4190,
                   *(int *)(in_stack_00000018 + -0x7fd4) + -0x40f4,0x17f);
        return uVar2;
      }
      (**(code **)(in_stack_00000018 + -0x7d5c))(*puVar1,puVar1 + 3);
    }
    iVar3 = *unaff_s2;
    if (iVar3 < 5) {
      if (iVar3 < 1) {
        iVar3 = 1;
      }
    }
    else {
      iVar3 = 4;
    }
    puVar1[2] = iVar3;
    uVar2 = 0;
  }
  return uVar2;
}



// ==== rts_av_get_isp_daynight_statis @ 00029dd4 size=112

undefined4 rts_av_get_isp_daynight_statis(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_rts_isp_ctrl_open_00063964)();
  if (iVar1 < 0) {
    uVar2 = 0xffffffe8;
  }
  else {
    uVar2 = (*(code *)PTR_rts_isp_get_daynight_statis_00063468)(iVar1);
    (*(code *)PTR_rts_isp_ctrl_close_00063660)(iVar1);
  }
  return uVar2;
}



// ==== rts_jpgencoder_cleanup @ 00029e44 size=8

void rts_jpgencoder_cleanup(void)

{
  return;
}



// ==== rts_av_to_af_t @ 0002a034 size=36

int rts_av_to_af_t(int param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3cc8,0x25,puVar1);
    param_1 = (*(code *)PTR___assert_000637b8)
                        (puVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4034,0x25,
                         PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3cd8);
  }
  return param_1;
}



// ==== rts_av_query_mjpeg_ctrl @ 0002a7fc size=72

void rts_av_query_mjpeg_ctrl(void)

{
  int iVar1;
  int in_t9;
  int in_stack_00000018;
  
  iVar1 = (*(code *)(in_t9 + -0x6080))();
  if (iVar1 != 0) {
    (**(code **)(in_stack_00000018 + -0x7a88))
              (*(int *)(in_stack_00000018 + -0x7fd4) + -0x3ee8,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x4034,0x102,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x3dc8);
  }
  (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + -0x61b0))();
  return;
}



// ==== rts_av_release_mjpeg_ctrl @ 0002a844 size=8

void rts_av_release_mjpeg_ctrl(void)

{
  FUN_00024694();
  return;
}



// ==== rts_av_get_mjpeg_ctrl @ 0002a84c size=4

undefined4 rts_av_get_mjpeg_ctrl(int *param_1)

{
  undefined4 uVar1;
  int in_t9;
  int iVar2;
  int iStack00000018;
  
  iVar2 = in_t9 + 0x409f0;
  iStack00000018 = iVar2;
  if (param_1 == (int *)0x0) {
    param_1 = (int *)(*(int *)(in_t9 + 0x38a1c) + -0x4038);
    (**(code **)(in_t9 + 0x38d9c))
              (4,*(int *)(in_t9 + 0x38a1c) + -0x6cf0,*(int *)(in_t9 + 0x38a1c) + -0x3ddc,0x10c);
    iVar2 = iStack00000018;
    (**(code **)(iStack00000018 + -0x7a88))
              (param_1,*(int *)(iStack00000018 + -0x7fd4) + -0x4034,0x10c,
               *(int *)(iStack00000018 + -0x7fd4) + -0x3df0);
  }
  iVar2 = (**(code **)(iVar2 + -0x78c8))();
  if (iVar2 == 0) {
    (**(code **)(iStack00000018 + -0x7c54))
              (4,*(int *)(iStack00000018 + -0x7fd4) + -0x3e9c,
               *(int *)(iStack00000018 + -0x7fd4) + -0x3ddc,0x110);
    uVar1 = 0xfffffff5;
  }
  else {
    iVar2 = (**(code **)(iStack00000018 + -0x7f80))(iVar2);
    *param_1 = iVar2 + 0x6c;
    uVar1 = 0;
  }
  return uVar1;
}



// ==== rts_av_query_isp_af @ 0002a850 size=132

undefined4 rts_av_query_isp_af(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (int *)0x0) {
    param_1 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4038);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3ddc,0x10c,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4034,0x10c,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3df0);
  }
  iVar1 = (*(code *)PTR_alloc_af_ctrl_00063978)();
  if (iVar1 == 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3e9c,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3ddc,0x110);
    uVar2 = 0xfffffff5;
  }
  else {
    iVar1 = (*(code *)PTR_rts_av_to_af_t_000632c0)(iVar1);
    *param_1 = iVar1 + 0x6c;
    uVar2 = 0;
  }
  return uVar2;
}



// ==== rts_av_set_mjpeg_ctrl @ 0002a8d4 size=60

undefined4 rts_av_set_mjpeg_ctrl(void)

{
  int in_stack_00000018;
  
  (**(code **)(in_stack_00000018 + -0x7c54))
            (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x3e9c,
             *(int *)(in_stack_00000018 + -0x7fd4) + -0x3ddc,0x110);
  return 0xfffffff5;
}



// ==== rts_av_release_isp_af @ 0002a928 size=44

void rts_av_release_isp_af(int param_1)

{
  if (param_1 != 0) {
    (*(code *)PTR_rts_av_obj_put_00063ab8)(param_1 + -0x6c);
    return;
  }
  return;
}



// ==== rts_av_get_isp_af @ 0002a954 size=136

void rts_av_get_isp_af(undefined *param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)PTR_get_af_ctrl_00063420;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4038;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3e04,0x12a,param_1);
    pcVar1 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4034,0x12a,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3e18);
  }
  (*pcVar1)(param_1 + -0x6c);
  return;
}



// ==== rts_av_set_isp_af @ 0002a9dc size=136

void rts_av_set_isp_af(undefined *param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)PTR_set_af_ctrl_0006372c;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4038;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3e2c,0x135,param_1);
    pcVar1 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4034,0x135,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3e40);
  }
  (*pcVar1)(param_1 + -0x6c);
  return;
}



// ==== rts_av_refresh_isp_af_statis @ 0002aa64 size=136

void rts_av_refresh_isp_af_statis(undefined *param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)PTR_refresh_af_statis_00063610;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4038;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3e60,0x140,param_1);
    pcVar1 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4034,0x140,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -16000);
  }
  (*pcVar1)(param_1 + -0x6c);
  return;
}



// ==== rts_av_get_isp_ctrl @ 0002b60c size=280

undefined4 rts_av_get_isp_ctrl(uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  
  if (param_2 == 0) {
    return 0xfffffff6;
  }
  if (0x36 < param_1) {
    return 0xffffffeb;
  }
  iVar1 = (*(code *)PTR_rts_isp_ctrl_open_00063964)();
  if (iVar1 < 0) {
    return 0xffffffe8;
  }
  if ((param_1 - 1 < 0x2d) &&
     (*(uint *)(PTR_s_snd_device_0004ffec_0x14_0006326c + (param_1 - 1) * 4 + -0x39b0) != 0)) {
    pcVar4 = (code *)(PTR_LAB_00063270 + -0x5510);
    param_1 = *(uint *)(PTR_s_snd_device_0004ffec_0x14_0006326c + (param_1 - 1) * 4 + -0x39b0);
  }
  else {
    if (param_1 == 0x16) {
      uVar3 = 0;
    }
    else {
      if (param_1 != 0x15) {
        pcVar4 = (code *)(PTR_LAB_00063270 + -0x50ec);
        goto LAB_0002b6d8;
      }
      uVar3 = 1;
    }
    pcVar4 = (code *)(PTR_LAB_00063270 + -0x5410);
    param_1 = param_2;
    param_2 = uVar3;
  }
LAB_0002b6d8:
  uVar2 = (*pcVar4)(iVar1,param_1,param_2);
  (*(code *)PTR_rts_isp_ctrl_close_00063660)(iVar1);
  return uVar2;
}



// ==== rts_av_set_isp_ctrl @ 0002b724 size=1024

undefined4 rts_av_set_isp_ctrl(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_68;
  undefined4 local_64;
  int local_44;
  int local_40;
  int local_3c;
  
  if (param_2 == 0) {
    return 0xfffffff6;
  }
  if (0x36 < param_1) {
    return 0xffffffeb;
  }
  iVar1 = (*(code *)PTR_rts_isp_ctrl_open_00063964)();
  if (iVar1 < 0) {
    return 0xffffffe8;
  }
  if ((param_1 - 1 < 0x2d) &&
     (*(int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + (param_1 - 1) * 4 + -0x39b0) != 0)) {
    local_64 = *(undefined4 *)(param_2 + 0x34);
    local_68 = *(int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + (param_1 - 1) * 4 + -0x39b0);
    uVar3 = (*(code *)PTR_rts_v4l2_set_ctrl_0006337c)(iVar1,&local_68);
  }
  else {
    if (param_1 == 0x16) {
      uVar3 = 0;
    }
    else {
      if (param_1 != 0x15) {
        uVar3 = (*(code *)(PTR_LAB_00063270 + -0x50ec))(iVar1,param_1,&local_68);
        iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_2 + 0x34);
          if (iVar2 < local_44) {
            *(int *)(param_2 + 0x34) = local_44;
          }
          else if (local_40 < iVar2) {
            *(int *)(param_2 + 0x34) = local_40;
          }
          else if (local_3c != 0) {
            iVar4 = (iVar2 - local_44) % local_3c;
            if (local_3c == 0) {
              trap(0x1c00);
            }
            if (iVar4 != 0) {
              *(int *)(param_2 + 0x34) = iVar2 - iVar4;
            }
          }
          if (param_1 - 0x27 < 0x10) {
                    /* WARNING: Could not emulate address calculation at 0x0002b89c */
                    /* WARNING: Treating indirect jump as call */
            uVar3 = (*(code *)(&_gp_1 + *(int *)(PTR_s_snd_device_0004ffec_0x14_0006326c +
                                                (param_1 - 0x27) * 4 + -0x39f0)))();
            return uVar3;
          }
          uVar3 = 0xffffffe3;
        }
        goto LAB_0002bae0;
      }
      uVar3 = 1;
    }
    uVar3 = (*(code *)(PTR_LAB_00063270 + -0x4ad8))(iVar1,param_2 + 0x34,uVar3);
  }
LAB_0002bae0:
  (*(code *)PTR_rts_isp_ctrl_close_00063660)(iVar1);
  return uVar3;
}



// ==== rts_av_get_isp_fov_mode @ 0002bb24 size=188

undefined4 rts_av_get_isp_fov_mode(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  
  uVar1 = (*(code *)PTR_rts_av_get_isp_attr_000638d8)(param_1,auStack_18);
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
  if (iVar2 == 0) {
    iVar2 = (*(code *)PTR_rts_isp_ctrl_open_00063964)();
    if (iVar2 < 0) {
      uVar1 = 0xffffffe8;
    }
    else {
      uVar1 = (*(code *)PTR_rts_isp_get_fov_mode_00063590)(iVar2,local_14,param_2);
      (*(code *)PTR_rts_isp_ctrl_close_00063660)(iVar2);
    }
  }
  return uVar1;
}



// ==== rts_av_set_isp_fov_mode @ 0002bbe0 size=188

undefined4 rts_av_set_isp_fov_mode(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  
  uVar1 = (*(code *)PTR_rts_av_get_isp_attr_000638d8)(param_1,auStack_18);
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
  if (iVar2 == 0) {
    iVar2 = (*(code *)PTR_rts_isp_ctrl_open_00063964)();
    if (iVar2 < 0) {
      uVar1 = 0xffffffe8;
    }
    else {
      uVar1 = (*(code *)PTR_rts_isp_set_fov_mode_000637d8)(iVar2,local_14,param_2);
      (*(code *)PTR_rts_isp_ctrl_close_00063660)(iVar2);
    }
  }
  return uVar1;
}



// ==== rts_av_set_isp_dynamic_fps @ 0002bc9c size=124

undefined4 rts_av_set_isp_dynamic_fps(undefined1 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_rts_isp_ctrl_open_00063964)();
  if (iVar1 < 0) {
    uVar2 = 0xffffffe8;
  }
  else {
    uVar2 = (*(code *)PTR_rts_isp_set_dynamic_fps_00063a30)(iVar1,param_1);
    (*(code *)PTR_rts_isp_ctrl_close_00063660)(iVar1);
  }
  return uVar2;
}



// ==== rts_av_get_isp_dynamic_fps @ 0002bd18 size=120

undefined4 rts_av_get_isp_dynamic_fps(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_rts_isp_ctrl_open_00063964)();
  if (iVar1 < 0) {
    uVar2 = 0xffffffe8;
  }
  else {
    uVar2 = (*(code *)PTR_rts_isp_get_dynamic_fps_000639e4)(iVar1);
    (*(code *)PTR_rts_isp_ctrl_close_00063660)(iVar1);
  }
  return uVar2;
}



// ==== rts_av_query_isp_ability @ 0002bd90 size=468

undefined4 rts_av_query_isp_ability(undefined *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *local_20 [3];
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (param_2 == (undefined4 *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3aec;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x38a4,0x3ae,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3c74,0x3ae,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x38c0);
  }
  (*(code *)PTR_rts_av_wait_00063a58)(puVar1 + -0x38a4);
  iVar2 = (*(code *)PTR_rts_av_find_unit_by_chnno_00063a6c)(param_1);
  if (iVar2 == 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3ae0,puVar1 + -0x38a4,0x3b4);
    uVar4 = 0xfffffff1;
  }
  else {
    iVar3 = (*(code *)PTR_rts_av_get_unit_id_000635a0)(iVar2);
    if (iVar3 == 0x707369) {
      uVar4 = (*(code *)PTR_rts_av_query_ability_000637c8)(iVar2,local_20);
      iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
      if (iVar2 == 0) {
        if (*local_20[0] == 2) {
          uVar4 = 0;
          *param_2 = local_20[0] + 1;
        }
        else {
          uVar4 = 0xffffffea;
          (*(code *)PTR_rts_av_release_ability_00063328)(local_20[0]);
          local_20[0] = (int *)0x0;
        }
      }
      else {
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3a9c,puVar1 + -0x38a4,0x3c1,uVar4)
        ;
      }
    }
    else {
      uVar4 = 0xffffffe9;
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3ac0,puVar1 + -0x38a4,0x3ba,param_1)
      ;
    }
  }
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x38a4);
  return uVar4;
}



// ==== rts_av_release_isp_ability @ 0002bf64 size=44

void rts_av_release_isp_ability(int param_1)

{
  if (param_1 != 0) {
    (*(code *)PTR_rts_av_release_ability_00063328)(param_1 + -4);
    return;
  }
  return;
}



// ==== rts_av_get_isp_snr_crop @ 0002bf90 size=144

undefined4 rts_av_get_isp_snr_crop(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0xfffffff6;
  }
  else {
    iVar1 = (*(code *)PTR_rts_isp_ctrl_open_00063964)();
    if (iVar1 < 0) {
      uVar2 = 0xffffffe8;
    }
    else {
      uVar2 = (*(code *)(PTR_LAB_00063270 + -0x4d44))(iVar1,param_1);
      (*(code *)PTR_rts_isp_ctrl_close_00063660)(iVar1);
    }
  }
  return uVar2;
}



// ==== rts_av_set_isp_snr_crop @ 0002c020 size=200

undefined4 rts_av_set_isp_snr_crop(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_60 [3];
  int local_54;
  undefined4 local_4c;
  int local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  
  if (param_1 == (int *)0x0) {
    uVar2 = 0xfffffff6;
  }
  else {
    iVar1 = (*(code *)PTR_rts_isp_ctrl_open_00063964)();
    if (iVar1 < 0) {
      uVar2 = 0xffffffe8;
    }
    else {
      iVar6 = param_1[8];
      iVar5 = param_1[9];
      uVar2 = (*(code *)(PTR_LAB_00063270 + -0x4d44))(iVar1,param_1);
      iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
      if (iVar3 == 0) {
        iVar7 = *param_1;
        iVar3 = iVar7;
        if ((iVar7 <= iVar6) && (iVar3 = param_1[2], iVar6 <= iVar3)) {
          iVar4 = param_1[4];
          iVar3 = iVar6;
          if (iVar4 != 0) {
            if (iVar4 == 0) {
              trap(0x1c00);
            }
            iVar3 = iVar6 - (iVar6 - iVar7) % iVar4;
          }
        }
        iVar7 = param_1[1];
        iVar6 = iVar7;
        if ((iVar7 <= iVar5) && (iVar6 = param_1[3], iVar5 <= iVar6)) {
          iVar4 = param_1[5];
          iVar6 = iVar5;
          if (iVar4 != 0) {
            if (iVar4 == 0) {
              trap(0x1c00);
            }
            iVar6 = iVar5 - (iVar5 - iVar7) % iVar4;
          }
        }
        local_60[0] = 0x98f904;
        local_4c = 0x98f905;
        local_34 = 2;
        local_24 = local_60;
        local_38 = 0;
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_54 = iVar3;
        local_40 = iVar6;
        uVar2 = (*(code *)PTR_rts_v4l2_set_ext_ctrls_00063af0)(iVar1);
        iVar5 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
        if (iVar5 == 0) {
          param_1[8] = iVar3;
          param_1[9] = iVar6;
          uVar2 = 0;
        }
        else {
          (*(code *)PTR_rts_log_000635ec)
                    (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3a74,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + -0x38fc,0x435,uVar2);
        }
      }
      (*(code *)PTR_rts_isp_ctrl_close_00063660)(iVar1);
    }
  }
  return uVar2;
}



// ==== rts_av_query_aec_ctrl @ 0002c0e8 size=160

undefined4 rts_av_query_aec_ctrl(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_s0;
  int unaff_s1;
  undefined4 in_t8;
  int iVar4;
  int unaff_gp;
  int in_stack_00000018;
  undefined4 uStack00000020;
  undefined4 uStack00000034;
  int iStack00000040;
  undefined4 uStack00000048;
  undefined4 uStack0000004c;
  undefined4 uStack00000050;
  undefined4 uStack00000054;
  undefined4 uStack00000058;
  undefined1 *puStack0000005c;
  
  iVar4 = *(int *)(unaff_s0 + 4);
  iVar1 = iVar4;
  if ((iVar4 <= unaff_s1) && (iVar1 = *(int *)(unaff_s0 + 0xc), unaff_s1 <= iVar1)) {
    iVar2 = *(int *)(unaff_s0 + 0x14);
    iVar1 = unaff_s1;
    if (iVar2 != 0) {
      if (iVar2 == 0) {
        trap(0x1c00);
      }
      iVar1 = unaff_s1 - (unaff_s1 - iVar4) % iVar2;
    }
  }
  uStack00000020 = 0x98f904;
  uStack00000034 = 0x98f905;
  uStack0000004c = 2;
  puStack0000005c = (undefined1 *)&stack0x00000020;
  uStack00000048 = 0;
  uStack00000050 = 0;
  uStack00000054 = 0;
  uStack00000058 = 0;
  iStack00000040 = iVar1;
  uVar3 = (**(code **)(unaff_gp + -0x7750))();
  iVar4 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar3);
  if (iVar4 == 0) {
    *(undefined4 *)(unaff_s0 + 0x20) = in_t8;
    *(int *)(unaff_s0 + 0x24) = iVar1;
    uVar3 = 0;
  }
  else {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x3a74,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x38fc,0x435);
  }
  (**(code **)(in_stack_00000018 + -0x7be0))();
  return uVar3;
}



// ==== rts_av_set_aec_ctrl @ 0002c18c size=152

undefined4 rts_av_set_aec_ctrl(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  code *in_t9;
  int in_stack_00000018;
  
  uVar1 = (*in_t9)();
  iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
  if (iVar2 == 0) {
    *(undefined4 *)(unaff_s0 + 0x20) = unaff_s2;
    *(undefined4 *)(unaff_s0 + 0x24) = unaff_s1;
    uVar1 = 0;
  }
  else {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x3a74,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x38fc,0x435);
  }
  (**(code **)(in_stack_00000018 + -0x7be0))();
  return uVar1;
}



// ==== rts_av_get_supported_snr_name @ 0002c234 size=120

undefined4 rts_av_get_supported_snr_name(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_rts_isp_ctrl_open_00063964)();
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)PTR_rts_isp_get_supported_snr_name_00063550)(iVar1);
    (*(code *)PTR_rts_isp_ctrl_close_00063660)(iVar1);
  }
  return uVar2;
}



// ==== rts_av_get_supported_modules @ 0002c2ac size=60

undefined * rts_av_get_supported_modules(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0006325c;
  iVar3 = (*(code *)PTR_strlen_000633a8)(PTR_DAT_0006325c + 0x3c50);
  (*(code *)PTR_strncat_0006335c)
            (puVar1 + 0x3c50,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3a4c,99 - iVar3);
  iVar3 = (*(code *)PTR_strlen_000633a8)(puVar1 + 0x3c50);
  puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  (*(code *)PTR_strncat_0006335c)
            (puVar1 + 0x3c50,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3a44,99 - iVar3);
  iVar3 = (*(code *)PTR_strlen_000633a8)(puVar1 + 0x3c50);
  (*(code *)PTR_strncat_0006335c)
            (puVar1 + 0x3c50,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3a40,99 - iVar3);
  iVar3 = (*(code *)PTR_strlen_000633a8)(puVar1 + 0x3c50);
  (*(code *)PTR_strncat_0006335c)(puVar1 + 0x3c50,puVar2 + -0x3a44,99 - iVar3);
  iVar3 = (*(code *)PTR_strlen_000633a8)(puVar1 + 0x3c50);
  (*(code *)PTR_strncat_0006335c)
            (puVar1 + 0x3c50,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3a38,99 - iVar3);
  return puVar1 + 0x3c50;
}



// ==== rts_av_release_aec_ctrl @ 0002c2e8 size=224

int rts_av_release_aec_ctrl(undefined4 param_1)

{
  int in_v0;
  int iVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  int in_stack_00000010;
  
  (**(code **)(in_stack_00000010 + -0x7ee4))
            (param_1,*(int *)(in_stack_00000010 + -0x7fd4) + -0x3a4c,unaff_s1 - in_v0);
  iVar1 = (**(code **)(in_stack_00000010 + -0x7e98))(unaff_s0 + 0x3c50);
  iVar2 = *(int *)(in_stack_00000010 + -0x7fd4);
  (**(code **)(in_stack_00000010 + -0x7ee4))(unaff_s0 + 0x3c50,iVar2 + -0x3a44,unaff_s1 - iVar1);
  iVar1 = (**(code **)(in_stack_00000010 + -0x7e98))(unaff_s0 + 0x3c50);
  (**(code **)(in_stack_00000010 + -0x7ee4))
            (unaff_s0 + 0x3c50,*(int *)(in_stack_00000010 + -0x7fd4) + -0x3a40,unaff_s1 - iVar1);
  iVar1 = (**(code **)(in_stack_00000010 + -0x7e98))(unaff_s0 + 0x3c50);
  (**(code **)(in_stack_00000010 + -0x7ee4))(unaff_s0 + 0x3c50,iVar2 + -0x3a44,unaff_s1 - iVar1);
  iVar1 = (**(code **)(in_stack_00000010 + -0x7e98))(unaff_s0 + 0x3c50);
  (**(code **)(in_stack_00000010 + -0x7ee4))
            (unaff_s0 + 0x3c50,*(int *)(in_stack_00000010 + -0x7fd4) + -0x3a38,unaff_s1 - iVar1);
  return unaff_s0 + 0x3c50;
}



// ==== rts_av_to_awb_t @ 0002c928 size=124

int rts_av_to_awb_t(int param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x30dc,0x29,puVar1);
    param_1 = (*(code *)PTR___assert_000637b8)
                        (puVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3718,0x29,
                         PTR_s_snd_device_0004ffec_0x14_0006326c + -0x30ec);
  }
  return param_1;
}



// ==== rts_audio_init @ 0002ca80 size=184

undefined4 rts_audio_init(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_gp;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  
  iVar6 = *(int *)(unaff_gp + -0x7fd4);
  iVar1 = (**(code **)(unaff_gp + -0x7818))(1,0x184,iVar6 + -0x30fc,0x1b4);
  if (iVar1 == 0) {
    return 0;
  }
  (**(code **)(unaff_gp + -0x7c20))(iVar1,*(int *)(unaff_gp + -0x7fd0) + -0x365c);
  uVar2 = (**(code **)(unaff_gp + -0x79b4))(iVar1);
  iVar3 = (**(code **)(unaff_gp + -0x78dc))();
  *(int *)(iVar1 + 0x164) = iVar3;
  if (iVar3 < 0) {
    (**(code **)(unaff_gp + -0x7c54))
              (4,*(int *)(unaff_gp + -0x7fd4) + -0x3fa8,iVar6 + -0x30fc,0x1bd);
    goto LAB_0002cd28;
  }
  uVar4 = (**(code **)(unaff_gp + -0x775c))(&stack0x00000020);
  iVar3 = (**(code **)(unaff_gp + -0x7ec0))(uVar4);
  if (iVar3 == 0) {
    uVar5 = (**(code **)(unaff_gp + -0x7b5c))(iVar1 + 0x168,uVar4);
    iVar3 = (**(code **)(unaff_gp + -0x7ec0))(uVar5);
    if (iVar3 == 0) {
      uVar5 = (**(code **)(unaff_gp + -0x7b5c))(iVar1 + 0x170,uVar4);
      iVar3 = (**(code **)(unaff_gp + -0x7ec0))(uVar5);
      if (iVar3 == 0) {
        uVar5 = (**(code **)(unaff_gp + -0x7b5c))(iVar1 + 0x178,uVar4);
        iVar3 = (**(code **)(unaff_gp + -0x7ec0))(uVar5);
        if (iVar3 == 0) {
          iVar3 = *(int *)(unaff_gp + -0x7fd0);
          *(undefined4 *)(iVar1 + 0x6c) = in_stack_00000020;
          *(undefined4 *)(iVar1 + 0x74) = uVar4;
          *(undefined4 *)(iVar1 + 0x70) = in_stack_00000024;
          (*(code *)(iVar3 + -0x389c))(iVar1);
          *(undefined4 *)(iVar1 + 0xe8) = in_stack_00000020;
          *(undefined4 *)(iVar1 + 0xf0) = uVar4;
          *(undefined4 *)(iVar1 + 0xec) = in_stack_00000024;
          uVar5 = 0;
          goto LAB_0002cc5c;
        }
      }
    }
    (*(code *)(*(int *)(unaff_gp + -0x7fd0) + -0x380c))(iVar1);
  }
  else {
    (**(code **)(unaff_gp + -0x7c54))
              (4,*(int *)(unaff_gp + -0x7fd4) + -0x3688,*(int *)(unaff_gp + -0x7fd4) + -0x3140,0x67)
    ;
    uVar5 = uVar4;
  }
LAB_0002cc5c:
  iVar3 = (**(code **)(unaff_gp + -0x7ec0))(uVar5);
  if (iVar3 == 0) {
    uVar4 = (*(code *)(*(int *)(unaff_gp + -0x7fd0) + -0x3c30))(iVar1);
    iVar3 = (**(code **)(unaff_gp + -0x7ec0))(uVar4);
    if (iVar3 == 0) {
      uVar4 = (*(code *)(*(int *)(unaff_gp + -0x7fd0) + -0x393c))(iVar1);
      iVar3 = (**(code **)(unaff_gp + -0x7ec0))(uVar4);
      if (iVar3 == 0) {
        *(int *)(iVar1 + 0x180) = iVar1;
        return uVar2;
      }
      iVar1 = *(int *)(unaff_gp + -0x7fd4) + -0x3608;
      uVar4 = 0x1cf;
    }
    else {
      iVar1 = *(int *)(unaff_gp + -0x7fd4) + -0x3630;
      uVar4 = 0x1c9;
    }
  }
  else {
    iVar1 = *(int *)(unaff_gp + -0x7fd4) + -0x365c;
    uVar4 = 0x1c3;
  }
  (**(code **)(unaff_gp + -0x7c54))(4,iVar1,iVar6 + -0x30fc,uVar4);
LAB_0002cd28:
  (**(code **)(unaff_gp + -0x7788))(uVar2);
  return 0;
}



// ==== rts_audio_cleanup @ 0002cb34 size=152

void rts_audio_cleanup(void)

{
  undefined4 in_v0;
  int iVar1;
  undefined4 uVar2;
  int unaff_s0;
  int unaff_s4;
  int unaff_gp;
  int in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  
  iVar1 = (**(code **)(unaff_gp + -0x7ec0))();
  if (iVar1 == 0) {
    uVar2 = (**(code **)(in_stack_00000018 + -0x7b5c))(unaff_s0 + 0x168);
    iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar2);
    if (iVar1 == 0) {
      uVar2 = (**(code **)(in_stack_00000018 + -0x7b5c))(unaff_s0 + 0x170);
      iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar2);
      if (iVar1 == 0) {
        uVar2 = (**(code **)(in_stack_00000018 + -0x7b5c))(unaff_s0 + 0x178);
        iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar2);
        if (iVar1 == 0) {
          iVar1 = *(int *)(in_stack_00000018 + -0x7fd0);
          *(undefined4 *)(unaff_s0 + 0x6c) = in_stack_00000020;
          *(undefined4 *)(unaff_s0 + 0x74) = in_v0;
          *(undefined4 *)(unaff_s0 + 0x70) = in_stack_00000024;
          (*(code *)(iVar1 + -0x389c))();
          *(undefined4 *)(unaff_s0 + 0xe8) = in_stack_00000020;
          *(undefined4 *)(unaff_s0 + 0xf0) = in_v0;
          *(undefined4 *)(unaff_s0 + 0xec) = in_stack_00000024;
          uVar2 = 0;
          goto LAB_0002cc5c;
        }
      }
    }
    (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + -0x380c))();
  }
  else {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x3688,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x3140,0x67);
    uVar2 = in_v0;
  }
LAB_0002cc5c:
  iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar2);
  if (iVar1 == 0) {
    uVar2 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + -0x3c30))();
    iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar2);
    if (iVar1 == 0) {
      uVar2 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + -0x393c))();
      iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar2);
      if (iVar1 == 0) {
        *(int *)(unaff_s0 + 0x180) = unaff_s0;
        return;
      }
      iVar1 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3608;
      uVar2 = 0x1cf;
    }
    else {
      iVar1 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3630;
      uVar2 = 0x1c9;
    }
  }
  else {
    iVar1 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x365c;
    uVar2 = 0x1c3;
  }
  (**(code **)(in_stack_00000018 + -0x7c54))(4,iVar1,unaff_s4 + -0x30fc,uVar2);
  (**(code **)(in_stack_00000018 + -0x7788))();
  return;
}



// ==== rts_audio_start @ 0002cbcc size=416

void rts_audio_start(void)

{
  int in_v0;
  int iVar1;
  undefined4 uVar2;
  int unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  int unaff_s4;
  int in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  
  if (in_v0 == 0) {
    unaff_s2 = (**(code **)(in_stack_00000018 + -0x7b5c))(unaff_s0 + 0x178);
    iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(unaff_s2);
    if (iVar1 == 0) {
      iVar1 = *(int *)(in_stack_00000018 + -0x7fd0);
      *(undefined4 *)(unaff_s0 + 0x6c) = in_stack_00000020;
      *(undefined4 *)(unaff_s0 + 0x74) = unaff_s1;
      *(undefined4 *)(unaff_s0 + 0x70) = in_stack_00000024;
      (*(code *)(iVar1 + -0x389c))();
      *(undefined4 *)(unaff_s0 + 0xe8) = in_stack_00000020;
      *(undefined4 *)(unaff_s0 + 0xf0) = unaff_s1;
      *(undefined4 *)(unaff_s0 + 0xec) = in_stack_00000024;
      unaff_s2 = 0;
      goto LAB_0002cc5c;
    }
  }
  (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + -0x380c))();
LAB_0002cc5c:
  iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(unaff_s2);
  if (iVar1 == 0) {
    uVar2 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + -0x3c30))();
    iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar2);
    if (iVar1 == 0) {
      uVar2 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + -0x393c))();
      iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar2);
      if (iVar1 == 0) {
        *(int *)(unaff_s0 + 0x180) = unaff_s0;
        return;
      }
      iVar1 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3608;
      uVar2 = 0x1cf;
    }
    else {
      iVar1 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3630;
      uVar2 = 0x1c9;
    }
  }
  else {
    iVar1 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x365c;
    uVar2 = 0x1c3;
  }
  (**(code **)(in_stack_00000018 + -0x7c54))(4,iVar1,unaff_s4 + -0x30fc,uVar2);
  (**(code **)(in_stack_00000018 + -0x7788))();
  return;
}



// ==== rts_audio_stop @ 0002ce70 size=164

undefined4 rts_audio_stop(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_s0;
  undefined4 unaff_s2;
  uint uVar7;
  int unaff_gp;
  int in_stack_00000018;
  undefined4 in_stack_00000020;
  uint in_stack_00000024;
  
  uVar7 = *(uint *)(unaff_s0 + 0x78);
  uVar2 = 0xffffffeb;
  if (2 < uVar7) goto LAB_0002d2d0;
  uVar1 = *(uint *)(unaff_s0 + 0xf4);
  if (uVar7 != uVar1) {
    if (uVar1 == 1) {
      iVar4 = *(int *)(unaff_gp + -0x7fd4) + -0x35d0;
    }
    else if (uVar1 == 2) {
      iVar4 = *(int *)(unaff_gp + -0x7fd4) + -0x35c8;
    }
    else {
      iVar4 = 0;
      if (uVar1 == 0) {
        iVar4 = *(int *)(unaff_gp + -0x7fd4) + -0x35dc;
      }
    }
    if (uVar7 == 1) {
      iVar5 = *(int *)(unaff_gp + -0x7fd4) + -0x35d0;
LAB_0002cf0c:
      iVar3 = *(int *)(unaff_gp + -0x7fd4);
    }
    else {
      if (uVar7 == 2) {
        iVar5 = *(int *)(unaff_gp + -0x7fd4) + -0x35c8;
        goto LAB_0002cf0c;
      }
      iVar5 = 0;
      if (uVar7 == 0) {
        iVar5 = *(int *)(unaff_gp + -0x7fd4) + -0x35dc;
        goto LAB_0002cf0c;
      }
      iVar3 = *(int *)(unaff_gp + -0x7fd4);
    }
    (**(code **)(unaff_gp + -0x7c54))(1,iVar3 + -0x3594,iVar4,iVar5);
    in_stack_00000020 = 0x98090c;
    in_stack_00000024 = *(uint *)(unaff_s0 + 0x78);
    uVar2 = (**(code **)(in_stack_00000018 + -0x7ec4))
                      (*(undefined4 *)(unaff_s0 + 0x164),&stack0x00000020);
    iVar4 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar2);
    if (iVar4 != 0) {
      (**(code **)(in_stack_00000018 + -0x7c54))
                (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x3578,
                 *(int *)(in_stack_00000018 + -0x7fd4) + -0x31c8,0x188);
      unaff_gp = in_stack_00000018;
      goto LAB_0002d2d0;
    }
    *(undefined4 *)(unaff_s0 + 0xf4) = *(undefined4 *)(unaff_s0 + 0x78);
    unaff_gp = in_stack_00000018;
  }
  iVar4 = *(int *)(unaff_s0 + 0x78);
  if (iVar4 == 1) {
    uVar2 = unaff_s2;
    if (*(int *)(unaff_s0 + 0x7c) == *(int *)(unaff_s0 + 0xf8)) goto LAB_0002d2d0;
    (**(code **)(unaff_gp + -0x7c54))
              (1,*(int *)(unaff_gp + -0x7fd4) + -0x3550,*(undefined2 *)(unaff_s0 + 0xf8),
               *(undefined2 *)(unaff_s0 + 0xfa));
    in_stack_00000020 = *(undefined4 *)(unaff_s0 + 0x7c);
    uVar2 = (**(code **)(in_stack_00000018 + -0x7f5c))
                      (*(undefined4 *)(unaff_s0 + 0x164),&stack0x00000020);
    iVar4 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar2);
    if (iVar4 == 0) {
      *(undefined2 *)(unaff_s0 + 0xf8) = *(undefined2 *)(unaff_s0 + 0x7c);
      *(undefined2 *)(unaff_s0 + 0xfa) = *(undefined2 *)(unaff_s0 + 0x7e);
      uVar2 = 0;
      unaff_gp = in_stack_00000018;
      goto LAB_0002d2d0;
    }
    uVar6 = 0xfc;
    iVar4 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x351c;
    iVar5 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x31d8;
  }
  else {
    if (iVar4 != 2) {
      if (iVar4 == 0) {
        uVar2 = FUN_0002d070();
        return uVar2;
      }
      uVar2 = 0xffffffeb;
      goto LAB_0002d2d0;
    }
    if (*(short *)(unaff_s0 + 0xa4) != *(short *)(unaff_s0 + 0x120)) {
      (**(code **)(unaff_gp + -0x7c54))(1,*(int *)(unaff_gp + -0x7fd4) + -0x3494);
      in_stack_00000020 = 0x98090e;
      in_stack_00000024 = (uint)*(ushort *)(unaff_s0 + 0xa4);
      uVar2 = (**(code **)(in_stack_00000018 + -0x7ec4))
                        (*(undefined4 *)(unaff_s0 + 0x164),&stack0x00000020);
      iVar4 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar2);
      if (iVar4 != 0) {
        uVar6 = 0x137;
        iVar4 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3470;
        iVar5 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3200;
        goto LAB_0002d21c;
      }
      *(undefined2 *)(unaff_s0 + 0x120) = *(undefined2 *)(unaff_s0 + 0xa4);
      unaff_gp = in_stack_00000018;
    }
    if (*(short *)(unaff_s0 + 0xa6) != *(short *)(unaff_s0 + 0x122)) {
      (**(code **)(unaff_gp + -0x7c54))(1,*(int *)(unaff_gp + -0x7fd4) + -0x3444);
      in_stack_00000020 = 0x98f902;
      in_stack_00000024 = (uint)*(ushort *)(unaff_s0 + 0xa6);
      uVar2 = (**(code **)(in_stack_00000018 + -0x7ec4))
                        (*(undefined4 *)(unaff_s0 + 0x164),&stack0x00000020);
      iVar4 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar2);
      if (iVar4 != 0) {
        uVar6 = 0x146;
        iVar4 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3420;
        iVar5 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3200;
        goto LAB_0002d21c;
      }
      *(undefined2 *)(unaff_s0 + 0x122) = *(undefined2 *)(unaff_s0 + 0xa6);
      unaff_gp = in_stack_00000018;
    }
    uVar2 = unaff_s2;
    if (*(short *)(unaff_s0 + 0xa8) == *(short *)(unaff_s0 + 0x124)) goto LAB_0002d2d0;
    (**(code **)(unaff_gp + -0x7c54))(1,*(int *)(unaff_gp + -0x7fd4) + -0x33f4);
    in_stack_00000020 = 0x98090f;
    in_stack_00000024 = (uint)*(ushort *)(unaff_s0 + 0xa8);
    uVar2 = (**(code **)(in_stack_00000018 + -0x7ec4))
                      (*(undefined4 *)(unaff_s0 + 0x164),&stack0x00000020);
    iVar4 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar2);
    if (iVar4 == 0) {
      *(undefined2 *)(unaff_s0 + 0x124) = *(undefined2 *)(unaff_s0 + 0xa8);
      uVar2 = 0;
      unaff_gp = in_stack_00000018;
      goto LAB_0002d2d0;
    }
    uVar6 = 0x155;
    iVar4 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x33d0;
    iVar5 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3200;
  }
LAB_0002d21c:
  (**(code **)(in_stack_00000018 + -0x7c54))(4,iVar4,iVar5,uVar6);
  unaff_gp = in_stack_00000018;
LAB_0002d2d0:
  iVar4 = (**(code **)(unaff_gp + -0x7ec0))(uVar2);
  if (iVar4 == 0) {
    uVar2 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + -0x3c30))();
    iVar4 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar2);
    if (iVar4 == 0) {
      uVar2 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + -0x393c))();
      return uVar2;
    }
    iVar5 = *(int *)(in_stack_00000018 + -0x7fd4);
    uVar6 = 0x1ed;
    iVar4 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3630;
  }
  else {
    iVar5 = *(int *)(in_stack_00000018 + -0x7fd4);
    uVar6 = 0x1e7;
    iVar4 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x33a4;
  }
  (**(code **)(in_stack_00000018 + -0x7c54))(4,iVar4,iVar5 + -0x3178,uVar6);
  return uVar2;
}



// ==== rts_audio_check_ready @ 0002cf14 size=256

undefined4 rts_audio_check_ready(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_s0;
  undefined4 unaff_s2;
  int in_stack_00000018;
  undefined4 in_stack_00000020;
  uint in_stack_00000024;
  
  (*(code *)PTR_rts_log_000635ec)(param_1,param_2 + -0x3594);
  in_stack_00000020 = 0x98090c;
  in_stack_00000024 = *(uint *)(unaff_s0 + 0x78);
  uVar1 = (**(code **)(in_stack_00000018 + -0x7ec4))
                    (*(undefined4 *)(unaff_s0 + 0x164),&stack0x00000020);
  iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
  if (iVar2 != 0) {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x3578,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x31c8,0x188);
    unaff_s2 = uVar1;
    goto LAB_0002d2d0;
  }
  *(undefined4 *)(unaff_s0 + 0xf4) = *(undefined4 *)(unaff_s0 + 0x78);
  iVar2 = *(int *)(unaff_s0 + 0x78);
  if (iVar2 == 1) {
    if (*(int *)(unaff_s0 + 0x7c) == *(int *)(unaff_s0 + 0xf8)) goto LAB_0002d2d0;
    (**(code **)(in_stack_00000018 + -0x7c54))
              (1,*(int *)(in_stack_00000018 + -0x7fd4) + -0x3550,*(undefined2 *)(unaff_s0 + 0xf8),
               *(undefined2 *)(unaff_s0 + 0xfa));
    in_stack_00000020 = *(undefined4 *)(unaff_s0 + 0x7c);
    uVar1 = (**(code **)(in_stack_00000018 + -0x7f5c))
                      (*(undefined4 *)(unaff_s0 + 0x164),&stack0x00000020);
    iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
    if (iVar2 == 0) {
      *(undefined2 *)(unaff_s0 + 0xf8) = *(undefined2 *)(unaff_s0 + 0x7c);
      *(undefined2 *)(unaff_s0 + 0xfa) = *(undefined2 *)(unaff_s0 + 0x7e);
      unaff_s2 = 0;
      goto LAB_0002d2d0;
    }
    uVar4 = 0xfc;
    iVar2 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x351c;
    iVar3 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x31d8;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 0) {
        uVar1 = FUN_0002d070();
        return uVar1;
      }
      unaff_s2 = 0xffffffeb;
      goto LAB_0002d2d0;
    }
    if (*(short *)(unaff_s0 + 0xa4) != *(short *)(unaff_s0 + 0x120)) {
      (**(code **)(in_stack_00000018 + -0x7c54))(1,*(int *)(in_stack_00000018 + -0x7fd4) + -0x3494);
      in_stack_00000020 = 0x98090e;
      in_stack_00000024 = (uint)*(ushort *)(unaff_s0 + 0xa4);
      uVar1 = (**(code **)(in_stack_00000018 + -0x7ec4))
                        (*(undefined4 *)(unaff_s0 + 0x164),&stack0x00000020);
      iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
      if (iVar2 != 0) {
        uVar4 = 0x137;
        iVar2 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3470;
        iVar3 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3200;
        goto LAB_0002d21c;
      }
      *(undefined2 *)(unaff_s0 + 0x120) = *(undefined2 *)(unaff_s0 + 0xa4);
    }
    if (*(short *)(unaff_s0 + 0xa6) != *(short *)(unaff_s0 + 0x122)) {
      (**(code **)(in_stack_00000018 + -0x7c54))(1,*(int *)(in_stack_00000018 + -0x7fd4) + -0x3444);
      in_stack_00000020 = 0x98f902;
      in_stack_00000024 = (uint)*(ushort *)(unaff_s0 + 0xa6);
      uVar1 = (**(code **)(in_stack_00000018 + -0x7ec4))
                        (*(undefined4 *)(unaff_s0 + 0x164),&stack0x00000020);
      iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
      if (iVar2 != 0) {
        uVar4 = 0x146;
        iVar2 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3420;
        iVar3 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3200;
        goto LAB_0002d21c;
      }
      *(undefined2 *)(unaff_s0 + 0x122) = *(undefined2 *)(unaff_s0 + 0xa6);
    }
    if (*(short *)(unaff_s0 + 0xa8) == *(short *)(unaff_s0 + 0x124)) goto LAB_0002d2d0;
    (**(code **)(in_stack_00000018 + -0x7c54))(1,*(int *)(in_stack_00000018 + -0x7fd4) + -0x33f4);
    in_stack_00000020 = 0x98090f;
    in_stack_00000024 = (uint)*(ushort *)(unaff_s0 + 0xa8);
    uVar1 = (**(code **)(in_stack_00000018 + -0x7ec4))
                      (*(undefined4 *)(unaff_s0 + 0x164),&stack0x00000020);
    iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
    if (iVar2 == 0) {
      *(undefined2 *)(unaff_s0 + 0x124) = *(undefined2 *)(unaff_s0 + 0xa8);
      unaff_s2 = 0;
      goto LAB_0002d2d0;
    }
    uVar4 = 0x155;
    iVar2 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x33d0;
    iVar3 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3200;
  }
LAB_0002d21c:
  (**(code **)(in_stack_00000018 + -0x7c54))(4,iVar2,iVar3,uVar4);
  unaff_s2 = uVar1;
LAB_0002d2d0:
  iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(unaff_s2);
  if (iVar2 == 0) {
    unaff_s2 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + -0x3c30))();
    iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(unaff_s2);
    if (iVar2 == 0) {
      uVar1 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + -0x393c))();
      return uVar1;
    }
    iVar3 = *(int *)(in_stack_00000018 + -0x7fd4);
    uVar1 = 0x1ed;
    iVar2 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3630;
  }
  else {
    iVar3 = *(int *)(in_stack_00000018 + -0x7fd4);
    uVar1 = 0x1e7;
    iVar2 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x33a4;
  }
  (**(code **)(in_stack_00000018 + -0x7c54))(4,iVar2,iVar3 + -0x3178,uVar1);
  return unaff_s2;
}



// ==== rts_audio_pop_idle @ 0002d014 size=92

undefined4 rts_audio_pop_idle(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_s0;
  code *in_t9;
  int in_stack_00000018;
  
  uVar1 = (*in_t9)();
  iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
  if (iVar2 == 0) {
    *(undefined2 *)(unaff_s0 + 0xf8) = *(undefined2 *)(unaff_s0 + 0x7c);
    *(undefined2 *)(unaff_s0 + 0xfa) = *(undefined2 *)(unaff_s0 + 0x7e);
    uVar1 = 0;
  }
  else {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x351c,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x31d8,0xfc);
  }
  iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
  if (iVar2 == 0) {
    uVar1 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + -0x3c30))();
    iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
    if (iVar2 == 0) {
      uVar1 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + -0x393c))();
      return uVar1;
    }
    iVar3 = *(int *)(in_stack_00000018 + -0x7fd4);
    uVar4 = 0x1ed;
    iVar2 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3630;
  }
  else {
    iVar3 = *(int *)(in_stack_00000018 + -0x7fd4);
    uVar4 = 0x1e7;
    iVar2 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x33a4;
  }
  (**(code **)(in_stack_00000018 + -0x7c54))(4,iVar2,iVar3 + -0x3178,uVar4);
  return uVar1;
}



// ==== rts_audio_get_attr @ 0002d0b4 size=92

undefined4 rts_audio_get_attr(void)

{
  undefined4 in_v0;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_s0;
  int in_stack_00000018;
  
  iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))();
  if (iVar1 == 0) {
    *(undefined4 *)(unaff_s0 + 0x10c) = *(undefined4 *)(unaff_s0 + 0x90);
    in_v0 = 0;
  }
  else {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x34c0,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x31ec,0x11a);
  }
  iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(in_v0);
  if (iVar1 == 0) {
    in_v0 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + -0x3c30))();
    iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(in_v0);
    if (iVar1 == 0) {
      uVar3 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + -0x393c))();
      return uVar3;
    }
    iVar2 = *(int *)(in_stack_00000018 + -0x7fd4);
    uVar3 = 0x1ed;
    iVar1 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3630;
  }
  else {
    iVar2 = *(int *)(in_stack_00000018 + -0x7fd4);
    uVar3 = 0x1e7;
    iVar1 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x33a4;
  }
  (**(code **)(in_stack_00000018 + -0x7c54))(4,iVar1,iVar2 + -0x3178,uVar3);
  return in_v0;
}



// ==== rts_audio_set_attr @ 0002d13c size=592

undefined4 rts_audio_set_attr(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_s0;
  undefined4 unaff_s2;
  undefined4 in_t8;
  int in_stack_00000018;
  undefined4 uStack00000020;
  uint uStack00000024;
  
  uStack00000024 = (uint)*(ushort *)(unaff_s0 + 0xa4);
  uStack00000020 = in_t8;
  uVar1 = (**(code **)(in_stack_00000018 + -0x7ec4))(*(undefined4 *)(unaff_s0 + 0x164));
  iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
  if (iVar2 == 0) {
    *(undefined2 *)(unaff_s0 + 0x120) = *(undefined2 *)(unaff_s0 + 0xa4);
    if (*(short *)(unaff_s0 + 0xa6) != *(short *)(unaff_s0 + 0x122)) {
      (**(code **)(in_stack_00000018 + -0x7c54))(1,*(int *)(in_stack_00000018 + -0x7fd4) + -0x3444);
      uStack00000020 = 0x98f902;
      uStack00000024 = (uint)*(ushort *)(unaff_s0 + 0xa6);
      uVar1 = (**(code **)(in_stack_00000018 + -0x7ec4))
                        (*(undefined4 *)(unaff_s0 + 0x164),&stack0x00000020);
      iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
      if (iVar2 != 0) {
        uVar4 = 0x146;
        iVar2 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3420;
        iVar3 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3200;
        goto LAB_0002d21c;
      }
      *(undefined2 *)(unaff_s0 + 0x122) = *(undefined2 *)(unaff_s0 + 0xa6);
    }
    if (*(short *)(unaff_s0 + 0xa8) == *(short *)(unaff_s0 + 0x124)) goto LAB_0002d0fc;
    (**(code **)(in_stack_00000018 + -0x7c54))(1,*(int *)(in_stack_00000018 + -0x7fd4) + -0x33f4);
    uStack00000020 = 0x98090f;
    uStack00000024 = (uint)*(ushort *)(unaff_s0 + 0xa8);
    uVar1 = (**(code **)(in_stack_00000018 + -0x7ec4))
                      (*(undefined4 *)(unaff_s0 + 0x164),&stack0x00000020);
    iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
    if (iVar2 == 0) {
      *(undefined2 *)(unaff_s0 + 0x124) = *(undefined2 *)(unaff_s0 + 0xa8);
      unaff_s2 = 0;
      goto LAB_0002d0fc;
    }
    uVar4 = 0x155;
    iVar2 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x33d0;
    iVar3 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3200;
  }
  else {
    uVar4 = 0x137;
    iVar2 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3470;
    iVar3 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3200;
  }
LAB_0002d21c:
  (**(code **)(in_stack_00000018 + -0x7c54))(4,iVar2,iVar3,uVar4);
  unaff_s2 = uVar1;
LAB_0002d0fc:
  iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(unaff_s2);
  if (iVar2 == 0) {
    unaff_s2 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + -0x3c30))();
    iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(unaff_s2);
    if (iVar2 == 0) {
      uVar1 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + -0x393c))();
      return uVar1;
    }
    iVar3 = *(int *)(in_stack_00000018 + -0x7fd4);
    uVar1 = 0x1ed;
    iVar2 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3630;
  }
  else {
    iVar3 = *(int *)(in_stack_00000018 + -0x7fd4);
    uVar1 = 0x1e7;
    iVar2 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x33a4;
  }
  (**(code **)(in_stack_00000018 + -0x7c54))(4,iVar2,iVar3 + -0x3178,uVar1);
  return unaff_s2;
}



// ==== rts_audio_get_profile @ 0002d448 size=152

undefined4 rts_audio_get_profile(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *unaff_s1;
  code *in_t9;
  undefined4 uStack00000010;
  int in_stack_00000018;
  
  (*in_t9)(param_1,param_2,param_3 + -0x3210);
  iVar1 = (*unaff_s1)();
  if (iVar1 != 0) {
    (**(code **)(in_stack_00000018 + -0x7a88))
              (*(int *)(in_stack_00000018 + -0x7fd4) + -0x35bc,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x3718,0x1fc,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x3220);
  }
  uVar2 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + -0x3c30))();
  iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar2);
  if (iVar1 == 0) {
    uVar2 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + -0x393c))();
    return uVar2;
  }
  uStack00000010 = uVar2;
  (**(code **)(in_stack_00000018 + -0x7c54))
            (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x3630,
             *(int *)(in_stack_00000018 + -0x7fd4) + -0x3210,0x200);
  return uVar2;
}



// ==== rts_audio_set_profile @ 0002d4e0 size=52

void rts_audio_set_profile(undefined4 param_1,int param_2)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7c54))
            (param_1,param_2 + -0x3630,*(int *)(unaff_gp + -0x7fd4) + -0x3210,0x200);
  return;
}



// ==== rts_audio_xrun @ 0002d5d8 size=84

void rts_audio_xrun(void)

{
  int iVar1;
  int in_stack_00000018;
  
  iVar1 = FUN_00029e4c();
  if (iVar1 != 0) {
    (**(code **)(in_stack_00000018 + -0x7a88))
              (*(int *)(in_stack_00000018 + -0x7fd4) + -0x35bc,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x3718,0x20e,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x3248);
  }
  (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + -0x393c))();
  return;
}



// ==== rts_av_query_isp_awb @ 0002d62c size=216

undefined4 rts_av_query_isp_awb(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (int *)0x0) {
    param_1 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x371c);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3260,0x218,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3718,0x218,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3278);
  }
  iVar1 = (*(code *)PTR_alloc_awb_ctrl_000638c0)();
  if (iVar1 == 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x337c,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3260,0x21c);
    uVar2 = 0xfffffff5;
  }
  else {
    iVar1 = (*(code *)PTR_rts_av_to_awb_t_00063838)(iVar1);
    *param_1 = iVar1 + 0x6c;
    uVar2 = 0;
  }
  return uVar2;
}



// ==== rts_av_release_isp_awb @ 0002d704 size=44

void rts_av_release_isp_awb(int param_1)

{
  if (param_1 != 0) {
    (*(code *)PTR_rts_av_obj_put_00063ab8)(param_1 + -0x6c);
    return;
  }
  return;
}



// ==== rts_av_get_isp_awb @ 0002d730 size=136

void rts_av_get_isp_awb(undefined *param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)PTR_get_awb_ctrl_000639d0;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x371c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x328c,0x236,param_1);
    pcVar1 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3718,0x236,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x32a0);
  }
  (*pcVar1)(param_1 + -0x6c);
  return;
}



// ==== rts_av_set_isp_awb @ 0002d7b8 size=136

void rts_av_set_isp_awb(undefined *param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)PTR_set_awb_ctrl_0006330c;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x371c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x32b4,0x241,param_1);
    pcVar1 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3718,0x241,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -13000);
  }
  (*pcVar1)(param_1 + -0x6c);
  return;
}



// ==== rts_av_refresh_isp_awb_statis @ 0002d840 size=136

void rts_av_refresh_isp_awb_statis(undefined *param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)PTR_refresh_awb_statis_00063604;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x371c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x32e8,0x24c,param_1);
    pcVar1 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3718,0x24c,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3308);
  }
  (*pcVar1)(param_1 + -0x6c);
  return;
}



// ==== rts_av_get_isp_awb_ct_gain @ 0002d8c8 size=24

int rts_av_get_isp_awb_ct_gain(byte param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  code *pcVar4;
  byte local_18;
  byte local_17;
  
  pcVar4 = (code *)PTR_rts_isp_ctrl_open_00063964;
  if (5 < param_1) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x335c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3324,0x259,puVar3);
    param_2 = (ushort *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3718);
    pcVar4 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (puVar3,param_2,0x259,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3340);
  }
  iVar1 = (*pcVar4)();
  if (iVar1 < 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3fa8,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3324,0x25d);
    iVar2 = -0x18;
  }
  else {
    iVar2 = (*(code *)PTR_rts_isp_get_awb_ct_gain_000634c0)(iVar1,param_1,&local_18);
    if ((iVar2 == 0) && (param_2 != (ushort *)0x0)) {
      *param_2 = (ushort)local_18;
      param_2[1] = (ushort)local_17;
    }
    (*(code *)PTR_rts_isp_ctrl_close_00063660)(iVar1);
  }
  return iVar2;
}



// ==== rts_audio_calc_block_align @ 0002d8e0 size=16

int rts_audio_calc_block_align(byte param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int unaff_gp;
  byte bStack00000020;
  byte bStack00000021;
  
  pcVar3 = *(code **)(unaff_gp + -0x78dc);
  if (5 < param_1) {
    iVar2 = *(int *)(unaff_gp + -0x7fd4);
    (**(code **)(unaff_gp + -0x7c54))
              (4,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x3324,0x259
              );
    pcVar3 = *(code **)(unaff_gp + -0x7a88);
    param_2 = (ushort *)(*(int *)(unaff_gp + -0x7fd4) + -0x3718);
    (*pcVar3)(iVar2 + -0x335c,param_2,0x259,*(int *)(unaff_gp + -0x7fd4) + -0x3340);
  }
  iVar2 = (*pcVar3)();
  if (iVar2 < 0) {
    (**(code **)(unaff_gp + -0x7c54))
              (4,*(int *)(unaff_gp + -0x7fd4) + -0x3fa8,*(int *)(unaff_gp + -0x7fd4) + -0x3324,0x25d
              );
    iVar1 = -0x18;
  }
  else {
    iVar1 = (**(code **)(unaff_gp + -0x7d80))(iVar2,param_1,&stack0x00000020);
    if ((iVar1 == 0) && (param_2 != (ushort *)0x0)) {
      *param_2 = (ushort)bStack00000020;
      param_2[1] = (ushort)bStack00000021;
    }
    (**(code **)(unaff_gp + -0x7be0))(iVar2);
  }
  return iVar1;
}



// ==== rts_audio_calc_ts_delta @ 0002d8f0 size=52

int rts_audio_calc_ts_delta(undefined4 param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  uint unaff_s2;
  code *pcVar3;
  int unaff_gp;
  int in_stack_00000018;
  byte bStack00000020;
  byte bStack00000021;
  
  pcVar3 = *(code **)(unaff_gp + -0x78dc);
  if (5 < unaff_s2) {
    iVar2 = *(int *)(unaff_gp + -0x7fd4);
    (**(code **)(unaff_gp + -0x7c54))
              (4,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x3324,0x259
              );
    pcVar3 = *(code **)(in_stack_00000018 + -0x7a88);
    param_2 = (ushort *)(*(int *)(in_stack_00000018 + -0x7fd4) + -0x3718);
    (*pcVar3)(iVar2 + -0x335c,param_2,0x259,*(int *)(in_stack_00000018 + -0x7fd4) + -0x3340);
  }
  iVar2 = (*pcVar3)();
  if (iVar2 < 0) {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x3fa8,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x3324,0x25d);
    iVar1 = -0x18;
  }
  else {
    iVar1 = (**(code **)(in_stack_00000018 + -0x7d80))(iVar2);
    if ((iVar1 == 0) && (param_2 != (ushort *)0x0)) {
      *param_2 = (ushort)bStack00000020;
      param_2[1] = (ushort)bStack00000021;
    }
    (**(code **)(in_stack_00000018 + -0x7be0))(iVar2);
  }
  return iVar1;
}



// ==== rts_audio_calc_volume @ 0002d924 size=192

int rts_audio_calc_volume(void)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  code *pcVar4;
  int in_stack_00000018;
  byte bStack00000020;
  byte bStack00000021;
  
  pcVar4 = *(code **)(in_stack_00000018 + -0x7a88);
  puVar3 = (ushort *)(*(int *)(in_stack_00000018 + -0x7fd4) + -0x3718);
  (*pcVar4)();
  iVar1 = (*pcVar4)();
  if (iVar1 < 0) {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x3fa8,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x3324,0x25d);
    iVar2 = -0x18;
  }
  else {
    iVar2 = (**(code **)(in_stack_00000018 + -0x7d80))(iVar1);
    if ((iVar2 == 0) && (puVar3 != (ushort *)0x0)) {
      *puVar3 = (ushort)bStack00000020;
      puVar3[1] = (ushort)bStack00000021;
    }
    (**(code **)(in_stack_00000018 + -0x7be0))(iVar1);
  }
  return iVar2;
}



// ==== rts_audio_is_end @ 0002da80 size=172

undefined4 rts_audio_is_end(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_s0;
  int unaff_s3;
  undefined2 uVar7;
  code *pcVar8;
  int unaff_gp;
  int in_stack_00000018;
  undefined4 uStack00000030;
  undefined2 uStack00000058;
  undefined1 uStack0000005a;
  undefined4 in_stack_00000098;
  undefined4 in_stack_0000009c;
  int iStack000000a0;
  undefined4 in_stack_000000a4;
  undefined2 uStack000000a8;
  undefined2 uStack000000aa;
  undefined2 uStack000000ac;
  char cStack000000ae;
  
  uStack00000030 = in_stack_000000a4;
  iStack000000a0 = 0x98f903;
  uVar3 = (**(code **)(unaff_gp + -0x7a30))(*(undefined4 *)(unaff_s0 + 0x15c));
  iVar4 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar3);
  if (iVar4 == 0) {
    uVar7 = (undefined2)in_stack_000000a4;
    uVar3 = (**(code **)(in_stack_00000018 + -0x780c))
                      (*(undefined4 *)(unaff_s0 + 0x15c),&stack0x000000a8);
    iVar4 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar3);
    uVar2 = uStack000000ac;
    uVar1 = uStack000000a8;
    if (iVar4 == 0) {
      iStack000000a0 = unaff_s3 + 0x902;
      uVar3 = (**(code **)(in_stack_00000018 + -0x7a30))(*(undefined4 *)(unaff_s0 + 0x15c));
      iVar4 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar3);
      uVar6 = in_stack_000000a4;
      if (iVar4 != 0) {
        iVar4 = *(int *)(in_stack_00000018 + -0x7fd4);
        uVar6 = 0xd6;
        iVar5 = *(int *)(in_stack_00000018 + -0x7fd4);
        goto LAB_0002dae4;
      }
      uVar3 = (**(code **)(in_stack_00000018 + -0x7b38))
                        (*(undefined4 *)(unaff_s0 + 0x15c),(int)&stack0x000000ac + 2);
      iVar4 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar3);
      if (iVar4 == 0) {
        uVar3 = (**(code **)(in_stack_00000018 + -0x7e84))
                          (*(undefined4 *)(unaff_s0 + 0x15c),&stack0x00000058);
        iVar4 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar3);
        if (iVar4 == 0) {
          uVar3 = (**(code **)(in_stack_00000018 + -0x78f4))
                            (*(undefined4 *)(unaff_s0 + 0x15c),(int)&stack0x00000058 + 2);
          iVar4 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar3);
          if (iVar4 == 0) {
            in_stack_00000098 = *(undefined4 *)(unaff_s0 + 0x74);
            in_stack_0000009c = *(undefined4 *)(unaff_s0 + 0x160);
            uVar3 = (**(code **)(in_stack_00000018 + -0x7e4c))
                              (*(undefined4 *)(unaff_s0 + 0x15c),&stack0x00000098);
            iVar4 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar3);
            if (iVar4 != 0) {
              (**(code **)(in_stack_00000018 + -0x7c54))
                        (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x2ff8,
                         *(int *)(in_stack_00000018 + -0x7fd4) + -0x29ec,0xf2);
              return uVar3;
            }
            *(undefined2 *)(unaff_s0 + 0x84) = uStack000000aa;
            *(undefined2 *)(unaff_s0 + 0x86) = uVar2;
            *(undefined4 *)(unaff_s0 + 0x88) = uVar6;
            *(undefined2 *)(unaff_s0 + 0xfc) = uStack000000aa;
            *(undefined2 *)(unaff_s0 + 0xfe) = uVar2;
            *(undefined4 *)(unaff_s0 + 0x100) = uVar6;
            pcVar8 = *(code **)(in_stack_00000018 + -0x7938);
            *(undefined4 *)(unaff_s0 + 0x7c) = uStack00000030;
            *(undefined2 *)(unaff_s0 + 0x80) = uVar7;
            *(undefined2 *)(unaff_s0 + 0x82) = uVar1;
            *(int *)(unaff_s0 + 0xa0) = (int)cStack000000ae;
            *(undefined2 *)(unaff_s0 + 0xa4) = uStack00000058;
            *(undefined1 *)(unaff_s0 + 0xa6) = uStack0000005a;
            *(undefined4 *)(unaff_s0 + 0xf4) = uStack00000030;
            *(undefined2 *)(unaff_s0 + 0xf8) = uVar7;
            *(undefined2 *)(unaff_s0 + 0xfa) = uVar1;
            *(int *)(unaff_s0 + 0x118) = (int)cStack000000ae;
            *(undefined2 *)(unaff_s0 + 0x11c) = uStack00000058;
            *(undefined1 *)(unaff_s0 + 0x11e) = uStack0000005a;
            (*pcVar8)(*(undefined4 *)(unaff_s0 + 0x168),*(undefined4 *)(unaff_s0 + 0x160),
                      *(undefined4 *)(unaff_s0 + 0x164));
            return 0;
          }
          uVar6 = 0xea;
          iVar4 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3020;
          iVar5 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x29ec;
        }
        else {
          uVar6 = 0xe4;
          iVar4 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3048;
          iVar5 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x29ec;
        }
      }
      else {
        uVar6 = 0xdd;
        iVar4 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3074;
        iVar5 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x29ec;
      }
    }
    else {
      uVar6 = 0xcc;
      iVar4 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3098;
      iVar5 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x29ec;
    }
    (**(code **)(in_stack_00000018 + -0x7c54))(4,iVar4,iVar5,uVar6);
  }
  else {
    iVar4 = *(int *)(in_stack_00000018 + -0x7fd4);
    uVar6 = 0xc5;
    iVar5 = *(int *)(in_stack_00000018 + -0x7fd4);
LAB_0002dae4:
    (**(code **)(in_stack_00000018 + -0x7c54))(4,iVar4 + -0x30c0,iVar5 + -0x29ec,uVar6);
  }
  return uVar3;
}



// ==== rts_audio_default_profile @ 0002db2c size=32

void rts_audio_default_profile(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7c54))
            (4,*(int *)(unaff_gp + -0x7fd4) + -0x3098,*(int *)(unaff_gp + -0x7fd4) + -0x29ec,0xcc);
  return;
}



// ==== rts_fifo_free @ 0002db60 size=104

undefined4 rts_fifo_free(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_s0;
  code *in_t9;
  code *pcVar5;
  int in_stack_00000018;
  undefined4 in_stack_00000030;
  undefined2 uStack00000034;
  undefined2 uStack00000036;
  undefined2 uStack00000038;
  undefined2 uStack0000003a;
  undefined2 uStack00000058;
  undefined1 uStack0000005a;
  undefined4 in_stack_00000098;
  undefined4 in_stack_0000009c;
  undefined4 in_stack_000000a4;
  undefined4 in_stack_000000a8;
  undefined2 uStack000000ac;
  char cStack000000ae;
  
  uStack00000038 = in_stack_000000a8._2_2_;
  uStack0000003a = uStack000000ac;
  uVar1 = (*in_t9)(*(undefined4 *)(unaff_s0 + 0x15c));
  iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
  if (iVar2 == 0) {
    uVar1 = (**(code **)(in_stack_00000018 + -0x7b38))
                      (*(undefined4 *)(unaff_s0 + 0x15c),(int)&stack0x000000ac + 2);
    iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
    if (iVar2 == 0) {
      uVar1 = (**(code **)(in_stack_00000018 + -0x7e84))
                        (*(undefined4 *)(unaff_s0 + 0x15c),&stack0x00000058);
      iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
      if (iVar2 == 0) {
        uVar1 = (**(code **)(in_stack_00000018 + -0x78f4))
                          (*(undefined4 *)(unaff_s0 + 0x15c),(int)&stack0x00000058 + 2);
        iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
        if (iVar2 == 0) {
          in_stack_00000098 = *(undefined4 *)(unaff_s0 + 0x74);
          in_stack_0000009c = *(undefined4 *)(unaff_s0 + 0x160);
          uVar1 = (**(code **)(in_stack_00000018 + -0x7e4c))
                            (*(undefined4 *)(unaff_s0 + 0x15c),&stack0x00000098);
          iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
          if (iVar2 != 0) {
            (**(code **)(in_stack_00000018 + -0x7c54))
                      (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x2ff8,
                       *(int *)(in_stack_00000018 + -0x7fd4) + -0x29ec,0xf2);
            return uVar1;
          }
          *(undefined2 *)(unaff_s0 + 0x84) = uStack00000038;
          *(undefined2 *)(unaff_s0 + 0x86) = uStack0000003a;
          *(undefined4 *)(unaff_s0 + 0x88) = in_stack_000000a4;
          *(undefined2 *)(unaff_s0 + 0xfc) = uStack00000038;
          *(undefined2 *)(unaff_s0 + 0xfe) = uStack0000003a;
          *(undefined4 *)(unaff_s0 + 0x100) = in_stack_000000a4;
          pcVar5 = *(code **)(in_stack_00000018 + -0x7938);
          *(undefined4 *)(unaff_s0 + 0x7c) = in_stack_00000030;
          *(undefined2 *)(unaff_s0 + 0x80) = uStack00000034;
          *(undefined2 *)(unaff_s0 + 0x82) = uStack00000036;
          *(int *)(unaff_s0 + 0xa0) = (int)cStack000000ae;
          *(undefined2 *)(unaff_s0 + 0xa4) = uStack00000058;
          *(undefined1 *)(unaff_s0 + 0xa6) = uStack0000005a;
          *(undefined4 *)(unaff_s0 + 0xf4) = in_stack_00000030;
          *(undefined2 *)(unaff_s0 + 0xf8) = uStack00000034;
          *(undefined2 *)(unaff_s0 + 0xfa) = uStack00000036;
          *(int *)(unaff_s0 + 0x118) = (int)cStack000000ae;
          *(undefined2 *)(unaff_s0 + 0x11c) = uStack00000058;
          *(undefined1 *)(unaff_s0 + 0x11e) = uStack0000005a;
          (*pcVar5)(*(undefined4 *)(unaff_s0 + 0x168),*(undefined4 *)(unaff_s0 + 0x160),
                    *(undefined4 *)(unaff_s0 + 0x164));
          return 0;
        }
        uVar4 = 0xea;
        iVar2 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3020;
        iVar3 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x29ec;
      }
      else {
        uVar4 = 0xe4;
        iVar2 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3048;
        iVar3 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x29ec;
      }
    }
    else {
      uVar4 = 0xdd;
      iVar2 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3074;
      iVar3 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x29ec;
    }
    (**(code **)(in_stack_00000018 + -0x7c54))(4,iVar2,iVar3,uVar4);
  }
  else {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x30c0,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x29ec,0xd6);
  }
  return uVar1;
}



// ==== rts_fifo_reset @ 0002dbc8 size=24

undefined4 rts_fifo_reset(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_s0;
  undefined4 in_t8;
  code *pcVar5;
  int unaff_gp;
  int in_stack_00000018;
  undefined4 in_stack_00000030;
  undefined2 uStack00000034;
  undefined2 uStack00000036;
  undefined2 uStack00000038;
  undefined2 uStack0000003a;
  undefined4 uStack0000003c;
  undefined2 uStack00000058;
  undefined1 uStack0000005a;
  undefined4 in_stack_00000098;
  undefined4 in_stack_0000009c;
  undefined4 in_stack_000000ac;
  
  uStack0000003c = in_t8;
  uVar1 = (**(code **)(unaff_gp + -0x7b38))(*(undefined4 *)(unaff_s0 + 0x15c));
  iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
  if (iVar2 == 0) {
    uVar1 = (**(code **)(in_stack_00000018 + -0x7e84))
                      (*(undefined4 *)(unaff_s0 + 0x15c),&stack0x00000058);
    iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
    if (iVar2 == 0) {
      uVar1 = (**(code **)(in_stack_00000018 + -0x78f4))
                        (*(undefined4 *)(unaff_s0 + 0x15c),(int)&stack0x00000058 + 2);
      iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
      if (iVar2 == 0) {
        in_stack_00000098 = *(undefined4 *)(unaff_s0 + 0x74);
        in_stack_0000009c = *(undefined4 *)(unaff_s0 + 0x160);
        uVar1 = (**(code **)(in_stack_00000018 + -0x7e4c))
                          (*(undefined4 *)(unaff_s0 + 0x15c),&stack0x00000098);
        iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
        if (iVar2 != 0) {
          (**(code **)(in_stack_00000018 + -0x7c54))
                    (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x2ff8,
                     *(int *)(in_stack_00000018 + -0x7fd4) + -0x29ec,0xf2);
          return uVar1;
        }
        *(undefined2 *)(unaff_s0 + 0x84) = uStack00000038;
        *(undefined2 *)(unaff_s0 + 0x86) = uStack0000003a;
        *(undefined4 *)(unaff_s0 + 0x88) = uStack0000003c;
        *(undefined2 *)(unaff_s0 + 0xfc) = uStack00000038;
        *(undefined2 *)(unaff_s0 + 0xfe) = uStack0000003a;
        *(undefined4 *)(unaff_s0 + 0x100) = uStack0000003c;
        pcVar5 = *(code **)(in_stack_00000018 + -0x7938);
        *(undefined4 *)(unaff_s0 + 0x7c) = in_stack_00000030;
        *(undefined2 *)(unaff_s0 + 0x80) = uStack00000034;
        *(undefined2 *)(unaff_s0 + 0x82) = uStack00000036;
        *(int *)(unaff_s0 + 0xa0) = (int)in_stack_000000ac._2_1_;
        *(undefined2 *)(unaff_s0 + 0xa4) = uStack00000058;
        *(undefined1 *)(unaff_s0 + 0xa6) = uStack0000005a;
        *(undefined4 *)(unaff_s0 + 0xf4) = in_stack_00000030;
        *(undefined2 *)(unaff_s0 + 0xf8) = uStack00000034;
        *(undefined2 *)(unaff_s0 + 0xfa) = uStack00000036;
        *(int *)(unaff_s0 + 0x118) = (int)in_stack_000000ac._2_1_;
        *(undefined2 *)(unaff_s0 + 0x11c) = uStack00000058;
        *(undefined1 *)(unaff_s0 + 0x11e) = uStack0000005a;
        (*pcVar5)(*(undefined4 *)(unaff_s0 + 0x168),*(undefined4 *)(unaff_s0 + 0x160),
                  *(undefined4 *)(unaff_s0 + 0x164));
        return 0;
      }
      uVar4 = 0xea;
      iVar2 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3020;
      iVar3 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x29ec;
    }
    else {
      uVar4 = 0xe4;
      iVar2 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3048;
      iVar3 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x29ec;
    }
  }
  else {
    uVar4 = 0xdd;
    iVar2 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3074;
    iVar3 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x29ec;
  }
  (**(code **)(in_stack_00000018 + -0x7c54))(4,iVar2,iVar3,uVar4);
  return uVar1;
}



// ==== rts_fifo_alloc @ 0002dbe0 size=232

undefined4 rts_fifo_alloc(void)

{
  undefined4 in_v0;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_s0;
  code *pcVar4;
  int unaff_gp;
  int in_stack_00000018;
  undefined4 in_stack_00000030;
  undefined2 uStack00000034;
  undefined2 uStack00000036;
  undefined2 uStack00000038;
  undefined2 uStack0000003a;
  undefined4 in_stack_0000003c;
  undefined2 uStack00000058;
  undefined1 uStack0000005a;
  undefined4 in_stack_00000098;
  undefined4 in_stack_0000009c;
  undefined4 in_stack_000000ac;
  
  iVar1 = (**(code **)(unaff_gp + -0x7ec0))();
  if (iVar1 == 0) {
    in_v0 = (**(code **)(in_stack_00000018 + -0x7e84))
                      (*(undefined4 *)(unaff_s0 + 0x15c),&stack0x00000058);
    iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(in_v0);
    if (iVar1 == 0) {
      in_v0 = (**(code **)(in_stack_00000018 + -0x78f4))
                        (*(undefined4 *)(unaff_s0 + 0x15c),(int)&stack0x00000058 + 2);
      iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(in_v0);
      if (iVar1 == 0) {
        in_stack_00000098 = *(undefined4 *)(unaff_s0 + 0x74);
        in_stack_0000009c = *(undefined4 *)(unaff_s0 + 0x160);
        uVar3 = (**(code **)(in_stack_00000018 + -0x7e4c))
                          (*(undefined4 *)(unaff_s0 + 0x15c),&stack0x00000098);
        iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar3);
        if (iVar1 != 0) {
          (**(code **)(in_stack_00000018 + -0x7c54))
                    (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x2ff8,
                     *(int *)(in_stack_00000018 + -0x7fd4) + -0x29ec,0xf2);
          return uVar3;
        }
        *(undefined2 *)(unaff_s0 + 0x84) = uStack00000038;
        *(undefined2 *)(unaff_s0 + 0x86) = uStack0000003a;
        *(undefined4 *)(unaff_s0 + 0x88) = in_stack_0000003c;
        *(undefined2 *)(unaff_s0 + 0xfc) = uStack00000038;
        *(undefined2 *)(unaff_s0 + 0xfe) = uStack0000003a;
        *(undefined4 *)(unaff_s0 + 0x100) = in_stack_0000003c;
        pcVar4 = *(code **)(in_stack_00000018 + -0x7938);
        *(undefined4 *)(unaff_s0 + 0x7c) = in_stack_00000030;
        *(undefined2 *)(unaff_s0 + 0x80) = uStack00000034;
        *(undefined2 *)(unaff_s0 + 0x82) = uStack00000036;
        *(int *)(unaff_s0 + 0xa0) = (int)in_stack_000000ac._2_1_;
        *(undefined2 *)(unaff_s0 + 0xa4) = uStack00000058;
        *(undefined1 *)(unaff_s0 + 0xa6) = uStack0000005a;
        *(undefined4 *)(unaff_s0 + 0xf4) = in_stack_00000030;
        *(undefined2 *)(unaff_s0 + 0xf8) = uStack00000034;
        *(undefined2 *)(unaff_s0 + 0xfa) = uStack00000036;
        *(int *)(unaff_s0 + 0x118) = (int)in_stack_000000ac._2_1_;
        *(undefined2 *)(unaff_s0 + 0x11c) = uStack00000058;
        *(undefined1 *)(unaff_s0 + 0x11e) = uStack0000005a;
        (*pcVar4)(*(undefined4 *)(unaff_s0 + 0x168),*(undefined4 *)(unaff_s0 + 0x160),
                  *(undefined4 *)(unaff_s0 + 0x164));
        return 0;
      }
      uVar3 = 0xea;
      iVar1 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3020;
      iVar2 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x29ec;
    }
    else {
      uVar3 = 0xe4;
      iVar1 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3048;
      iVar2 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x29ec;
    }
  }
  else {
    uVar3 = 0xdd;
    iVar1 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3074;
    iVar2 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x29ec;
  }
  (**(code **)(in_stack_00000018 + -0x7c54))(4,iVar1,iVar2,uVar3);
  return in_v0;
}



// ==== rts_fifo_size @ 0002dc9c size=16

void rts_fifo_size(undefined4 param_1,int param_2)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7c54))
            (param_1,param_2 + -0x3020,*(int *)(unaff_gp + -0x7fd4) + -0x29ec,0xea);
  return;
}



// ==== rts_fifo_space @ 0002dcac size=24

void rts_fifo_space(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7c54))(param_1,param_2,param_3 + -0x29ec);
  return;
}



// ==== rts_fifo_drain @ 0002dcf0 size=148

undefined4 rts_fifo_drain(void)

{
  undefined4 in_v0;
  int iVar1;
  int unaff_s0;
  code *in_t9;
  code *pcVar2;
  int in_stack_00000018;
  undefined4 in_stack_00000030;
  undefined2 uStack00000034;
  undefined2 uStack00000036;
  undefined2 uStack00000038;
  undefined2 uStack0000003a;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000054;
  undefined2 uStack00000058;
  undefined1 uStack0000005a;
  
  iVar1 = (*in_t9)();
  if (iVar1 == 0) {
    *(undefined2 *)(unaff_s0 + 0x84) = uStack00000038;
    *(undefined2 *)(unaff_s0 + 0x86) = uStack0000003a;
    *(undefined4 *)(unaff_s0 + 0x88) = in_stack_0000003c;
    *(undefined2 *)(unaff_s0 + 0xfc) = uStack00000038;
    *(undefined2 *)(unaff_s0 + 0xfe) = uStack0000003a;
    *(undefined4 *)(unaff_s0 + 0x100) = in_stack_0000003c;
    pcVar2 = *(code **)(in_stack_00000018 + -0x7938);
    *(undefined4 *)(unaff_s0 + 0x7c) = in_stack_00000030;
    *(undefined2 *)(unaff_s0 + 0x80) = uStack00000034;
    *(undefined2 *)(unaff_s0 + 0x82) = uStack00000036;
    *(undefined4 *)(unaff_s0 + 0xa0) = in_stack_00000054;
    *(undefined2 *)(unaff_s0 + 0xa4) = uStack00000058;
    *(undefined1 *)(unaff_s0 + 0xa6) = uStack0000005a;
    *(undefined4 *)(unaff_s0 + 0xf4) = in_stack_00000030;
    *(undefined2 *)(unaff_s0 + 0xf8) = uStack00000034;
    *(undefined2 *)(unaff_s0 + 0xfa) = uStack00000036;
    *(undefined4 *)(unaff_s0 + 0x118) = in_stack_00000054;
    *(undefined2 *)(unaff_s0 + 0x11c) = uStack00000058;
    *(undefined1 *)(unaff_s0 + 0x11e) = uStack0000005a;
    (*pcVar2)(*(undefined4 *)(unaff_s0 + 0x168),*(undefined4 *)(unaff_s0 + 0x160),
              *(undefined4 *)(unaff_s0 + 0x164));
    in_v0 = 0;
  }
  else {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x2ff8,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x29ec,0xf2);
  }
  return in_v0;
}



// ==== rts_fifo_generic_write @ 0002dd84 size=76

void rts_fifo_generic_write(void)

{
  undefined2 in_v0;
  undefined4 in_v1;
  undefined2 in_a3;
  undefined2 in_t0;
  undefined4 in_t1;
  int unaff_s0;
  undefined1 in_t8;
  code *in_t9;
  
  *(undefined2 *)(unaff_s0 + 0x82) = in_a3;
  *(undefined4 *)(unaff_s0 + 0xa0) = in_v1;
  *(undefined2 *)(unaff_s0 + 0xa4) = in_v0;
  *(undefined1 *)(unaff_s0 + 0xa6) = in_t8;
  *(undefined4 *)(unaff_s0 + 0xf4) = in_t1;
  *(undefined2 *)(unaff_s0 + 0xf8) = in_t0;
  *(undefined2 *)(unaff_s0 + 0xfa) = in_a3;
  *(undefined4 *)(unaff_s0 + 0x118) = in_v1;
  *(undefined2 *)(unaff_s0 + 0x11c) = in_v0;
  *(undefined1 *)(unaff_s0 + 0x11e) = in_t8;
  (*in_t9)();
  return;
}



// ==== rts_fifo_generic_read @ 0002de88 size=152

void rts_fifo_generic_read(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2fa8;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x29b0,0x4a,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2fa4,0x4a,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x29c8);
  }
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x168);
  return;
}



// ==== rts_fifo_realloc2 @ 0002df48 size=88

void rts_fifo_realloc2(int param_1)

{
  int unaff_s0;
  code *in_t9;
  int in_stack_00000010;
  
  (*in_t9)(param_1 + 0x160);
  (**(code **)(in_stack_00000010 + -0x7858))(unaff_s0 + 0x168);
  (**(code **)(in_stack_00000010 + -0x7858))(unaff_s0 + 0x170);
  (**(code **)(in_stack_00000010 + -0x7858))(unaff_s0 + 0x178);
  (*(code *)(*(int *)(in_stack_00000010 + -0x7fd0) + -0x2178))();
  return;
}



// ==== rts_audio_encode_init @ 0002e050 size=20

undefined4 rts_audio_encode_init(void)

{
  return 0;
}



// ==== rts_audio_encode_stop @ 0002e0e4 size=136

void rts_audio_encode_stop(int param_1)

{
  int iVar1;
  int in_t9;
  int iVar2;
  int unaff_gp;
  int iVar3;
  
  iVar3 = unaff_gp + -0x2ea0 + in_t9;
  if (param_1 != 0) {
    iVar1 = (**(code **)(iVar3 + -0x776c))();
    if (-1 < *(int *)(iVar1 + 0x15c)) {
      (**(code **)(iVar3 + -0x7be0))();
    }
    iVar2 = *(int *)(iVar3 + -0x7fd0);
    *(undefined4 *)(iVar1 + 0x15c) = 0xffffffff;
    (*(code *)(iVar2 + -0x20e0))(iVar1);
    (**(code **)(iVar3 + -0x796c))(iVar1);
    return;
  }
  return;
}



// ==== rts_audio_encode_cleanup @ 0002e1a4 size=148

undefined4 rts_audio_encode_cleanup(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int in_t9;
  int unaff_gp;
  int iVar9;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar9 = unaff_gp + -0x2f60 + in_t9;
  iVar8 = *(int *)(iVar9 + -0x7fd4);
  iVar1 = (**(code **)(iVar9 + -0x7818))(1,0x184,iVar8 + -0x2998,0x1d9);
  if (iVar1 == 0) {
    return 0;
  }
  (**(code **)(iVar9 + -0x7c20))(iVar1,*(int *)(iVar9 + -0x7fd0) + -0x1f20);
  uVar2 = (**(code **)(iVar9 + -0x79b4))(iVar1);
  iVar3 = (**(code **)(iVar9 + -0x78dc))();
  *(int *)(iVar1 + 0x15c) = iVar3;
  if (iVar3 < 0) {
    (**(code **)(iVar9 + -0x7c54))(4,*(int *)(iVar9 + -0x7fd4) + -0x3fa8,iVar8 + -0x2998,0x1e2);
    goto LAB_0002e4f4;
  }
  iVar3 = (**(code **)(iVar9 + -0x7908))(&uStack_28);
  iVar4 = (**(code **)(iVar9 + -0x7ec0))(iVar3);
  if (iVar4 == 0) {
    iVar4 = (**(code **)(iVar9 + -0x7b88))();
    iVar6 = (**(code **)(iVar9 + -0x7ec0))(iVar4);
    if (iVar6 == 0) {
      iVar6 = (**(code **)(iVar9 + -0x7b5c))(iVar1 + 0x160,iVar3);
      iVar5 = (**(code **)(iVar9 + -0x7ec0))(iVar6);
      if (iVar5 == 0) {
        iVar6 = (**(code **)(iVar9 + -0x7b5c))(iVar1 + 0x168,iVar3);
        iVar5 = (**(code **)(iVar9 + -0x7ec0))(iVar6);
        if (iVar5 == 0) {
          iVar6 = (**(code **)(iVar9 + -0x7b5c))(iVar1 + 0x170,iVar3);
          iVar5 = (**(code **)(iVar9 + -0x7ec0))(iVar6);
          if (iVar5 == 0) {
            iVar6 = (**(code **)(iVar9 + -0x7b5c))(iVar1 + 0x178,iVar4 << 1);
            iVar5 = (**(code **)(iVar9 + -0x7ec0))(iVar6);
            if (iVar5 == 0) {
              iVar6 = *(int *)(iVar9 + -0x7fd0);
              *(undefined4 *)(iVar1 + 0x6c) = uStack_28;
              *(int *)(iVar1 + 0x74) = iVar3;
              *(undefined4 *)(iVar1 + 0x70) = uStack_24;
              *(int *)(iVar1 + 0x78) = iVar4;
              (*(code *)(iVar6 + -0x2178))(iVar1);
              *(undefined4 *)(iVar1 + 0xe4) = uStack_28;
              *(int *)(iVar1 + 0xec) = iVar3;
              *(int *)(iVar1 + 0xf0) = iVar4;
              *(undefined4 *)(iVar1 + 0xe8) = uStack_24;
              iVar6 = 0;
              goto LAB_0002e428;
            }
          }
        }
      }
      (*(code *)(*(int *)(iVar9 + -0x7fd0) + -0x20e0))(iVar1);
    }
    else {
      (**(code **)(iVar9 + -0x7c54))
                (4,*(int *)(iVar9 + -0x7fd4) + -0x2eec,*(int *)(iVar9 + -0x7fd4) + -0x29dc,0x76,
                 iVar4);
      iVar6 = iVar4;
    }
  }
  else {
    (**(code **)(iVar9 + -0x7c54))
              (4,*(int *)(iVar9 + -0x7fd4) + -0x2f18,*(int *)(iVar9 + -0x7fd4) + -0x29dc,0x6f,iVar3)
    ;
    iVar6 = iVar3;
  }
LAB_0002e428:
  iVar3 = (**(code **)(iVar9 + -0x7ec0))(iVar6);
  if (iVar3 == 0) {
    iVar6 = (*(code *)(*(int *)(iVar9 + -0x7fd0) + -0x2610))(iVar1);
    iVar3 = (**(code **)(iVar9 + -0x7ec0))(iVar6);
    if (iVar3 == 0) {
      iVar6 = (*(code *)(*(int *)(iVar9 + -0x7fd0) + -0x2230))(iVar1);
      iVar3 = (**(code **)(iVar9 + -0x7ec0))(iVar6);
      if (iVar3 == 0) {
        *(int *)(iVar1 + 0x180) = iVar1;
        return uVar2;
      }
      iVar1 = *(int *)(iVar9 + -0x7fd4) + -0x2e70;
      uVar7 = 500;
    }
    else {
      iVar1 = *(int *)(iVar9 + -0x7fd4) + -0x2e94;
      uVar7 = 0x1ee;
    }
  }
  else {
    iVar1 = *(int *)(iVar9 + -0x7fd4) + -0x2ebc;
    uVar7 = 0x1e8;
  }
  (**(code **)(iVar9 + -0x7c54))(4,iVar1,iVar8 + -0x2998,uVar7,iVar6);
LAB_0002e4f4:
  (**(code **)(iVar9 + -0x7788))(uVar2);
  return 0;
}



// ==== rts_audio_encode_start @ 0002e238 size=40

undefined4 rts_audio_encode_start(void)

{
  undefined4 in_v0;
  int unaff_s0;
  int unaff_s1;
  int unaff_gp;
  int in_stack_00000018;
  
  *(undefined4 *)(unaff_s0 + 0x15c) = in_v0;
  (**(code **)(unaff_gp + -0x7c54))
            (4,*(int *)(unaff_gp + -0x7fd4) + -0x3fa8,unaff_s1 + -0x2998,0x1e2);
  (**(code **)(in_stack_00000018 + -0x7788))();
  return 0;
}



// ==== rts_audio_encode_check_ready @ 0002e484 size=104

undefined4 rts_audio_encode_check_ready(void)

{
  int unaff_s5;
  int unaff_gp;
  int in_stack_00000018;
  
  (**(code **)(unaff_gp + -0x7c54))
            (4,*(int *)(unaff_gp + -0x7fd4) + -0x2e94,unaff_s5 + -0x2998,0x1ee);
  (**(code **)(in_stack_00000018 + -0x7788))();
  return 0;
}



// ==== rts_audio_encode_set_attr @ 0002e59c size=692

undefined4 rts_audio_encode_set_attr(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_s0;
  undefined4 uVar4;
  uint uVar5;
  code *pcVar6;
  int unaff_gp;
  int in_stack_00000020;
  undefined4 in_stack_00000028;
  uint in_stack_0000002c;
  
  (**(code **)(unaff_gp + -0x7a88))
            (param_1,*(int *)(unaff_gp + -0x7fd4) + -0x2fa4,0x205,
             *(int *)(unaff_gp + -0x7fd4) + -0x2a18);
  uVar5 = *(uint *)(unaff_s0 + 0x7c);
  uVar4 = 0xffffffeb;
  if (1 < uVar5) goto LAB_0002eb68;
  if (*(uint *)(unaff_s0 + 0xf4) != uVar5) {
    if (*(uint *)(unaff_s0 + 0xf4) == 0) {
      iVar1 = *(int *)(unaff_gp + -0x7fd4) + -0x35d0;
    }
    else {
      iVar1 = *(int *)(unaff_gp + -0x7fd4) + -0x2e44;
    }
    if (uVar5 == 0) {
      iVar2 = *(int *)(unaff_gp + -0x7fd4) + -0x35d0;
    }
    else {
      iVar2 = *(int *)(unaff_gp + -0x7fd4) + -0x2e44;
    }
    (**(code **)(unaff_gp + -0x7c54))(1,*(int *)(unaff_gp + -0x7fd4) + -0x2e14,iVar1,iVar2);
    in_stack_00000028 = 0x9a0901;
    in_stack_0000002c = *(uint *)(unaff_s0 + 0x7c);
    uVar4 = (**(code **)(in_stack_00000020 + -0x7ec4))
                      (*(undefined4 *)(unaff_s0 + 0x15c),&stack0x00000028);
    iVar1 = (**(code **)(in_stack_00000020 + -0x7ec0))(uVar4);
    if (iVar1 != 0) {
      (**(code **)(in_stack_00000020 + -0x7c54))
                (4,*(int *)(in_stack_00000020 + -0x7fd4) + -0x2df8,
                 *(int *)(in_stack_00000020 + -0x7fd4) + -0x2a58,0x1ad);
      unaff_gp = in_stack_00000020;
      goto LAB_0002eb68;
    }
    *(undefined4 *)(unaff_s0 + 0xf4) = *(undefined4 *)(unaff_s0 + 0x7c);
    uVar5 = *(uint *)(unaff_s0 + 0x7c);
    unaff_gp = in_stack_00000020;
  }
  if (uVar5 == 0) {
    iVar1 = (**(code **)(unaff_gp + -0x7d74))
                      (*(undefined4 *)(unaff_s0 + 0x114),*(undefined4 *)(unaff_s0 + 0x9c),
                       *(undefined4 *)(unaff_s0 + 0x74));
    if (iVar1 == 0) {
LAB_0002e7e0:
      if (*(int *)(unaff_s0 + 0x118) != *(int *)(unaff_s0 + 0xa0)) {
        (**(code **)(in_stack_00000020 + -0x7c54))
                  (1,*(int *)(in_stack_00000020 + -0x7fd4) + -0x2d94);
        uVar4 = (**(code **)(in_stack_00000020 + -0x7b94))
                          (*(undefined4 *)(unaff_s0 + 0x15c),(int)*(char *)(unaff_s0 + 0xa0));
        iVar1 = (**(code **)(in_stack_00000020 + -0x7ec0))(uVar4);
        if (iVar1 != 0) {
          uVar3 = 0x178;
          iVar1 = *(int *)(in_stack_00000020 + -0x7fd4) + -0x2d70;
          iVar2 = *(int *)(in_stack_00000020 + -0x7fd4) + -0x2a68;
          goto LAB_0002eb34;
        }
        *(undefined4 *)(unaff_s0 + 0x118) = *(undefined4 *)(unaff_s0 + 0xa0);
      }
      if (*(short *)(unaff_s0 + 0x11c) != *(short *)(unaff_s0 + 0xa4)) {
        (**(code **)(in_stack_00000020 + -0x7c54))
                  (1,*(int *)(in_stack_00000020 + -0x7fd4) + -0x2d44);
        uVar4 = (**(code **)(in_stack_00000020 + -0x7f20))
                          (*(undefined4 *)(unaff_s0 + 0x15c),*(undefined2 *)(unaff_s0 + 0xa4));
        iVar1 = (**(code **)(in_stack_00000020 + -0x7ec0))(uVar4);
        if (iVar1 != 0) {
          uVar3 = 0x183;
          iVar1 = *(int *)(in_stack_00000020 + -0x7fd4) + -0x2d24;
          iVar2 = *(int *)(in_stack_00000020 + -0x7fd4) + -0x2a68;
          goto LAB_0002eb34;
        }
        *(undefined2 *)(unaff_s0 + 0x11c) = *(undefined2 *)(unaff_s0 + 0xa4);
      }
      uVar4 = 0;
      unaff_gp = in_stack_00000020;
      if (*(char *)(unaff_s0 + 0x11e) == *(char *)(unaff_s0 + 0xa6)) goto LAB_0002eb54;
      (**(code **)(in_stack_00000020 + -0x7c54))(1,*(int *)(in_stack_00000020 + -0x7fd4) + -0x2cfc);
      uVar4 = (**(code **)(in_stack_00000020 + -0x7d64))
                        (*(undefined4 *)(unaff_s0 + 0x15c),*(undefined1 *)(unaff_s0 + 0xa6));
      iVar1 = (**(code **)(in_stack_00000020 + -0x7ec0))(uVar4);
      if (iVar1 == 0) {
        *(undefined1 *)(unaff_s0 + 0x11e) = *(undefined1 *)(unaff_s0 + 0xa6);
        goto LAB_0002eb50;
      }
      uVar3 = 0x18e;
      iVar1 = *(int *)(in_stack_00000020 + -0x7fd4) + -0x2cdc;
      iVar2 = *(int *)(in_stack_00000020 + -0x7fd4) + -0x2a68;
    }
    else {
      (**(code **)(in_stack_00000020 + -0x7c54))(1,*(int *)(in_stack_00000020 + -0x7fd4) + -0x2dd0);
      in_stack_00000028 = *(undefined4 *)(unaff_s0 + 0x74);
      in_stack_0000002c = *(uint *)(unaff_s0 + 0x9c);
      uVar4 = (**(code **)(in_stack_00000020 + -0x7df0))
                        (*(undefined4 *)(unaff_s0 + 0x15c),&stack0x00000028);
      iVar1 = (**(code **)(in_stack_00000020 + -0x7ec0))(uVar4);
      if (iVar1 == 0) {
        (**(code **)(in_stack_00000020 + -0x7938))
                  (*(undefined4 *)(unaff_s0 + 0x114),*(undefined4 *)(unaff_s0 + 0x9c),
                   *(undefined4 *)(unaff_s0 + 0x74));
        goto LAB_0002e7e0;
      }
      uVar3 = 0x16a;
      iVar1 = *(int *)(in_stack_00000020 + -0x7fd4) + -0x2dbc;
      iVar2 = *(int *)(in_stack_00000020 + -0x7fd4) + -0x2a68;
    }
LAB_0002eb34:
    (**(code **)(in_stack_00000020 + -0x7c54))(4,iVar1,iVar2,uVar3);
    unaff_gp = in_stack_00000020;
LAB_0002eb54:
    pcVar6 = *(code **)(unaff_gp + -0x7ec0);
  }
  else {
    uVar4 = 0xffffffeb;
    if (uVar5 == 1) {
      if ((*(short *)(unaff_s0 + 0x82) != *(short *)(unaff_s0 + 0xfa)) ||
         (*(int *)(unaff_s0 + 0x84) != *(int *)(unaff_s0 + 0xfc))) {
        (**(code **)(unaff_gp + -0x7c54))
                  (1,*(int *)(unaff_gp + -0x7fd4) + -0x2cb4,*(short *)(unaff_s0 + 0xfa),
                   *(undefined2 *)(unaff_s0 + 0xfc));
        in_stack_00000028 = *(undefined4 *)(unaff_s0 + 0x82);
        in_stack_0000002c = CONCAT22(in_stack_0000002c._2_2_,*(undefined2 *)(unaff_s0 + 0x86));
        uVar4 = (**(code **)(in_stack_00000020 + -0x773c))
                          (*(undefined4 *)(unaff_s0 + 0x15c),&stack0x00000028);
        iVar1 = (**(code **)(in_stack_00000020 + -0x7ec0))(uVar4);
        if (iVar1 != 0) {
          uVar3 = 300;
          iVar1 = *(int *)(in_stack_00000020 + -0x7fd4) + -0x2c84;
          iVar2 = *(int *)(in_stack_00000020 + -0x7fd4) + -0x2a78;
          goto LAB_0002eb34;
        }
        *(undefined2 *)(unaff_s0 + 0xfa) = *(undefined2 *)(unaff_s0 + 0x82);
        *(undefined2 *)(unaff_s0 + 0xfc) = *(undefined2 *)(unaff_s0 + 0x84);
        *(undefined2 *)(unaff_s0 + 0xfe) = *(undefined2 *)(unaff_s0 + 0x86);
        unaff_gp = in_stack_00000020;
      }
      if (*(short *)(unaff_s0 + 0x80) != *(short *)(unaff_s0 + 0xf8)) {
        (**(code **)(unaff_gp + -0x7c54))(1,*(int *)(unaff_gp + -0x7fd4) + -0x2c60);
        in_stack_00000028 = 0x98f903;
        in_stack_0000002c = (uint)*(ushort *)(unaff_s0 + 0x80);
        uVar4 = (**(code **)(in_stack_00000020 + -0x7ec4))
                          (*(undefined4 *)(unaff_s0 + 0x15c),&stack0x00000028);
        iVar1 = (**(code **)(in_stack_00000020 + -0x7ec0))(uVar4);
        if (iVar1 != 0) {
          uVar3 = 0x13e;
          iVar1 = *(int *)(in_stack_00000020 + -0x7fd4) + -0x2c3c;
          iVar2 = *(int *)(in_stack_00000020 + -0x7fd4) + -0x2a78;
          goto LAB_0002eb34;
        }
        *(undefined2 *)(unaff_s0 + 0xf8) = *(undefined2 *)(unaff_s0 + 0x80);
        unaff_gp = in_stack_00000020;
      }
      uVar4 = 0;
      if (*(int *)(unaff_s0 + 0x88) != *(int *)(unaff_s0 + 0x100)) {
        (**(code **)(unaff_gp + -0x7c54))(1,*(int *)(unaff_gp + -0x7fd4) + -0x2c10);
        in_stack_00000028 = 0x9a0902;
        in_stack_0000002c = *(uint *)(unaff_s0 + 0x88);
        uVar4 = (**(code **)(in_stack_00000020 + -0x7ec4))
                          (*(undefined4 *)(unaff_s0 + 0x15c),&stack0x00000028);
        iVar1 = (**(code **)(in_stack_00000020 + -0x7ec0))(uVar4);
        if (iVar1 != 0) {
          uVar3 = 0x14d;
          iVar1 = *(int *)(in_stack_00000020 + -0x7fd4) + -0x2bec;
          iVar2 = *(int *)(in_stack_00000020 + -0x7fd4) + -0x2a78;
          goto LAB_0002eb34;
        }
        *(undefined4 *)(unaff_s0 + 0x100) = *(undefined4 *)(unaff_s0 + 0x88);
LAB_0002eb50:
        uVar4 = 0;
        unaff_gp = in_stack_00000020;
      }
      goto LAB_0002eb54;
    }
    pcVar6 = *(code **)(unaff_gp + -0x7ec0);
  }
  iVar1 = (*pcVar6)(uVar4);
  unaff_gp = in_stack_00000020;
  if (iVar1 == 0) {
    uVar4 = 0;
  }
LAB_0002eb68:
  iVar1 = (**(code **)(unaff_gp + -0x7ec0))(uVar4);
  if (iVar1 == 0) {
    uVar4 = (*(code *)(*(int *)(in_stack_00000020 + -0x7fd0) + -0x2610))();
    iVar1 = (**(code **)(in_stack_00000020 + -0x7ec0))(uVar4);
    if (iVar1 == 0) {
      uVar4 = (*(code *)(*(int *)(in_stack_00000020 + -0x7fd0) + -0x2230))();
      return uVar4;
    }
    iVar2 = *(int *)(in_stack_00000020 + -0x7fd4);
    uVar3 = 0x212;
    iVar1 = *(int *)(in_stack_00000020 + -0x7fd4) + -0x2e94;
  }
  else {
    iVar2 = *(int *)(in_stack_00000020 + -0x7fd4);
    uVar3 = 0x20c;
    iVar1 = *(int *)(in_stack_00000020 + -0x7fd4) + -0x2bbc;
  }
  (**(code **)(in_stack_00000020 + -0x7c54))(4,iVar1,iVar2 + -0x2a0c,uVar3);
  return uVar4;
}



// ==== rts_audio_encode_run @ 0002e8d0 size=360

undefined4 rts_audio_encode_run(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_s0;
  undefined4 uVar4;
  int unaff_gp;
  int in_stack_00000020;
  
  uVar4 = 0;
  if (*(char *)(unaff_s0 + 0x11e) != *(char *)(unaff_s0 + 0xa6)) {
    (**(code **)(unaff_gp + -0x7c54))(1,*(int *)(unaff_gp + -0x7fd4) + -0x2cfc);
    uVar4 = (**(code **)(in_stack_00000020 + -0x7d64))
                      (*(undefined4 *)(unaff_s0 + 0x15c),*(undefined1 *)(unaff_s0 + 0xa6));
    iVar1 = (**(code **)(in_stack_00000020 + -0x7ec0))(uVar4);
    unaff_gp = in_stack_00000020;
    if (iVar1 == 0) {
      *(undefined1 *)(unaff_s0 + 0x11e) = *(undefined1 *)(unaff_s0 + 0xa6);
      uVar4 = 0;
    }
    else {
      (**(code **)(in_stack_00000020 + -0x7c54))
                (4,*(int *)(in_stack_00000020 + -0x7fd4) + -0x2cdc,
                 *(int *)(in_stack_00000020 + -0x7fd4) + -0x2a68,0x18e);
    }
  }
  iVar1 = (**(code **)(unaff_gp + -0x7ec0))(uVar4);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  iVar1 = (**(code **)(in_stack_00000020 + -0x7ec0))(uVar4);
  if (iVar1 == 0) {
    uVar4 = (*(code *)(*(int *)(in_stack_00000020 + -0x7fd0) + -0x2610))();
    iVar1 = (**(code **)(in_stack_00000020 + -0x7ec0))(uVar4);
    if (iVar1 == 0) {
      uVar4 = (*(code *)(*(int *)(in_stack_00000020 + -0x7fd0) + -0x2230))();
      return uVar4;
    }
    iVar2 = *(int *)(in_stack_00000020 + -0x7fd4);
    uVar3 = 0x212;
    iVar1 = *(int *)(in_stack_00000020 + -0x7fd4) + -0x2e94;
  }
  else {
    iVar2 = *(int *)(in_stack_00000020 + -0x7fd4);
    uVar3 = 0x20c;
    iVar1 = *(int *)(in_stack_00000020 + -0x7fd4) + -0x2bbc;
  }
  (**(code **)(in_stack_00000020 + -0x7c54))(4,iVar1,iVar2 + -0x2a0c,uVar3);
  return uVar4;
}



// ==== rts_audio_encode_get_profile @ 0002edd8 size=100

void rts_audio_encode_get_profile(undefined4 param_1,int param_2)

{
  int unaff_s0;
  int iVar1;
  int iStack00000010;
  int in_stack_00000018;
  
  iVar1 = unaff_s0 + -0x58e0;
  iStack00000010 = iVar1;
  (*(code *)PTR_rts_log_000635ec)
            (param_1,param_2 + -0x6cf0,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2aa4,0x230);
  (**(code **)(in_stack_00000018 + -0x7a88))
            (iVar1,*(int *)(in_stack_00000018 + -0x7fd4) + -0x2fa4,0x230,
             *(int *)(in_stack_00000018 + -0x7fd4) + -0x2ab8);
  (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + -0x2230))(iVar1);
  return;
}



// ==== rts_av_query_isp_ae @ 0002eec0 size=116

undefined4 rts_av_query_isp_ae(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (int *)0x0) {
    param_1 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2fa8);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2acc,0x23d,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2fa4,0x23d,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2ae0);
  }
  iVar1 = (*(code *)PTR_alloc_ae_ctrl_00063ad8)();
  if (iVar1 == 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2b98,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2acc,0x241);
    uVar2 = 0xfffffff5;
  }
  else {
    iVar1 = (*(code *)PTR_to_ae_t_00063ad4)(iVar1);
    *param_1 = iVar1 + 0x6c;
    uVar2 = 0;
  }
  return uVar2;
}



// ==== rts_audio_encode_set_profile @ 0002ef34 size=100

undefined4 rts_audio_encode_set_profile(void)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_s0;
  int unaff_gp;
  int in_stack_00000018;
  
  iVar1 = (**(code **)(unaff_gp + -0x7768))();
  if (iVar1 == 0) {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x2b98,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x2acc,0x241);
    uVar2 = 0xfffffff5;
  }
  else {
    iVar1 = (**(code **)(in_stack_00000018 + -0x776c))(iVar1);
    *unaff_s0 = iVar1 + 0x6c;
    uVar2 = 0;
  }
  return uVar2;
}



// ==== rts_av_release_isp_ae @ 0002ef98 size=44

void rts_av_release_isp_ae(int param_1)

{
  if (param_1 != 0) {
    (*(code *)PTR_rts_av_obj_put_00063ab8)(param_1 + -0x6c);
    return;
  }
  return;
}



// ==== rts_av_get_isp_ae @ 0002efc4 size=136

void rts_av_get_isp_ae(undefined *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)PTR_get_ae_ctrl_00063750;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2fa8;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2af4,0x25b,param_1);
    UNRECOVERED_JUMPTABLE = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2fa4,0x25b,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2b08);
  }
                    /* WARNING: Could not recover jumptable at 0x0002f044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + -0x6c);
  return;
}



// ==== rts_av_set_isp_ae @ 0002f04c size=136

void rts_av_set_isp_ae(undefined *param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)PTR_set_ae_ctrl_00063464;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2fa8;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2b1c,0x266,param_1);
    pcVar1 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2fa4,0x266,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2b30);
  }
  (*pcVar1)(param_1 + -0x6c);
  return;
}



// ==== rts_av_refresh_isp_ae_statis @ 0002f0d4 size=16

void rts_av_refresh_isp_ae_statis(undefined *param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)PTR_refresh_ae_statis_000634a0;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2fa8;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2b50,0x271,param_1);
    pcVar1 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2fa4,0x271,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2b70);
  }
  (*pcVar1)(param_1 + -0x6c);
  return;
}



// ==== rts_audio_encode_query_ability @ 0002f0e4 size=120

void rts_audio_encode_query_ability(int param_1)

{
  code *pcVar1;
  int unaff_gp;
  
  pcVar1 = *(code **)(unaff_gp + -0x7da0);
  if (param_1 == 0) {
    param_1 = *(int *)(unaff_gp + -0x7fd4) + -0x2fa8;
    (**(code **)(unaff_gp + -0x7c54))
              (4,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x2b50,0x271
              );
    pcVar1 = *(code **)(unaff_gp + -0x7a88);
    (*pcVar1)(param_1,*(int *)(unaff_gp + -0x7fd4) + -0x2fa4,0x271,
              *(int *)(unaff_gp + -0x7fd4) + -0x2b70);
  }
  (*pcVar1)(param_1 + -0x6c);
  return;
}



// ==== rts_audio_encode_get_attr @ 0002f434 size=56

undefined4 rts_audio_encode_get_attr(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7c54))(param_1,param_2,param_3 + -0x2238);
  return 0xffffffe4;
}



// ==== rts_av_query_audio_encode_ability @ 0002f530 size=268

undefined4 rts_av_query_audio_encode_ability(void)

{
  int in_v0;
  int iVar1;
  int unaff_s0;
  int iVar2;
  code *pcVar3;
  int in_stack_00000018;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b4;
  undefined4 in_stack_000000b8;
  undefined4 in_stack_000000bc;
  undefined1 uStack000000e8;
  undefined1 uStack000000e9;
  undefined4 in_stack_000000ec;
  undefined4 in_stack_000000f0;
  
  if (in_v0 == 0) {
    iVar2 = unaff_s0 + 0x25c;
    (**(code **)(in_stack_00000018 + -0x7758))(iVar2);
    *(undefined4 *)(unaff_s0 + 0x1f0) = in_stack_000000b0;
    *(undefined4 *)(unaff_s0 + 0x1f8) = 3;
    pcVar3 = *(code **)(in_stack_00000018 + -0x7ae4);
    *(undefined4 *)(unaff_s0 + 0x1fc) = in_stack_000000b4;
    *(undefined4 *)(unaff_s0 + 0x200) = in_stack_000000b8;
    *(undefined4 *)(unaff_s0 + 0x204) = in_stack_000000bc;
    iVar1 = (*pcVar3)(*(undefined4 *)(unaff_s0 + 0x254),&stack0x000000e8);
    if (iVar1 == 0) {
      pcVar3 = *(code **)(in_stack_00000018 + -0x79b0);
      *(undefined4 *)(unaff_s0 + 0x1e8) = in_stack_000000f0;
      *(undefined4 *)(unaff_s0 + 0x1e4) = in_stack_000000ec;
      *(undefined1 *)(unaff_s0 + 0x1ec) = uStack000000e8;
      *(undefined1 *)(unaff_s0 + 0x1ed) = uStack000000e9;
      (*pcVar3)(iVar2);
      return 0;
    }
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x283c,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x2368,0x2a3);
    (**(code **)(in_stack_00000018 + -0x79b0))(iVar2);
  }
  else {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x28c8,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x2368,0x293);
  }
  return 0xffffffe5;
}



// ==== rts_av_release_audio_encode_ability @ 0002f708 size=136

undefined1 rts_av_release_audio_encode_ability(void)

{
  undefined1 uVar1;
  int iVar2;
  int unaff_gp;
  
  iVar2 = *(int *)(unaff_gp + -0x7fd4) + -0x27e4;
  (**(code **)(unaff_gp + -0x7c54))
            (4,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x22dc,0x218,
             iVar2);
  (**(code **)(unaff_gp + -0x7a88))
            (iVar2,*(int *)(unaff_gp + -0x7fd4) + -0x2960,0x218,
             *(int *)(unaff_gp + -0x7fd4) + -0x22f0);
  uVar1 = 2;
  if ((*(int *)(iVar2 + 0x90) == 0) && (uVar1 = 1, *(int *)(iVar2 + 0x58) == 0)) {
    uVar1 = *(int *)(iVar2 + 0x6c) != 0;
  }
  return uVar1;
}



// ==== rts_audio_fifo_free @ 0002f7c8 size=68

void rts_audio_fifo_free(undefined4 param_1,int param_2,int param_3)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7c54))(param_1,param_2 + -0x6cf0,param_3 + -0x21b0);
  (**(code **)(unaff_gp + -0x7a88))();
  return;
}



// ==== rts_audio_fifo_alloc @ 0002f830 size=116

void rts_audio_fifo_alloc(void)

{
  int iVar1;
  code *in_t9;
  int unaff_gp;
  
  iVar1 = (*in_t9)();
  (**(code **)(unaff_gp + -0x7a18))(iVar1 + 0x25c);
  if (*(int *)(iVar1 + 500) != 0) {
    (**(code **)(unaff_gp + -0x796c))();
  }
  *(undefined4 *)(iVar1 + 500) = 0;
  if (*(int *)(iVar1 + 0x228) != 0) {
    (**(code **)(unaff_gp + -0x796c))();
  }
  *(undefined4 *)(iVar1 + 0x228) = 0;
  (**(code **)(unaff_gp + -0x796c))(iVar1);
  return;
}



// ==== rts_audio_fifo_read @ 0002f9d0 size=168

undefined4 rts_audio_fifo_read(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_s2;
  code *pcVar4;
  int unaff_gp;
  undefined4 uVar5;
  
  iVar1 = (**(code **)(unaff_gp + -0x7818))(param_1,0x280,unaff_s2 + -0x21c8,0x30d);
  if (iVar1 != 0) {
    (**(code **)(unaff_gp + -0x7c20))(iVar1,*(int *)(unaff_gp + -0x7fd0) + -0x7f4);
    uVar2 = (**(code **)(unaff_gp + -0x79b4))(iVar1);
    *(int *)(iVar1 + 0x27c) = iVar1;
    (**(code **)(unaff_gp + -0x7db0))(iVar1 + 0x25c,0);
    *(undefined4 *)(iVar1 + 0x6c) = 0xe;
    *(undefined4 *)(iVar1 + 0x90) = 0x96;
    *(undefined4 *)(iVar1 + 0x74) = 0x100000;
    *(undefined4 *)(iVar1 + 0xc0) = 0xf;
    iVar3 = *(int *)(unaff_gp + -0x7fd4);
    *(undefined4 *)(iVar1 + 0x78) = 0x1400000;
    uVar5 = *(undefined4 *)(iVar3 + -0x21a0);
    *(undefined4 *)(iVar1 + 0x7c) = 0x4000;
    *(undefined4 *)(iVar1 + 0x80) = 0xffffffff;
    pcVar4 = *(code **)(unaff_gp + -0x7938);
    *(undefined4 *)(iVar1 + 200) = uVar5;
    *(undefined4 *)(iVar1 + 0x84) = 0x33;
    *(undefined4 *)(iVar1 + 0x88) = 10;
    *(undefined4 *)(iVar1 + 0xcc) = 10;
    *(undefined4 *)(iVar1 + 0x70) = 2;
    *(undefined4 *)(iVar1 + 0x8c) = 0;
    *(undefined4 *)(iVar1 + 0x94) = 0;
    *(undefined4 *)(iVar1 + 0x98) = 0;
    *(undefined4 *)(iVar1 + 0x9c) = 1;
    *(undefined4 *)(iVar1 + 0xa0) = 0;
    *(undefined4 *)(iVar1 + 0xa4) = 0;
    *(undefined4 *)(iVar1 + 0xa8) = 1;
    *(undefined4 *)(iVar1 + 0xac) = 0;
    *(undefined4 *)(iVar1 + 0xb0) = 2;
    *(undefined4 *)(iVar1 + 0xb4) = 0;
    *(undefined4 *)(iVar1 + 0xb8) = 0;
    *(undefined4 *)(iVar1 + 0xbc) = 0;
    *(undefined4 *)(iVar1 + 0xc4) = 1;
    (*pcVar4)(iVar1 + 0xe0,iVar1 + 0x6c,0x74);
    iVar3 = (**(code **)(unaff_gp + -0x7ec0))(0);
    if (iVar3 == 0) {
      pcVar4 = *(code **)(unaff_gp + -0x7ec0);
      *(int *)(iVar1 + 0x158) = iVar1 + 0x170;
      *(undefined4 *)(iVar1 + 0x18c) = 0xfffffff1;
      *(undefined4 *)(iVar1 + 0x1c4) = 0xfffffff1;
      *(undefined4 *)(iVar1 + 0x154) = 1;
      *(undefined4 *)(iVar1 + 0x15c) = 2;
      *(undefined4 *)(iVar1 + 0x170) = 0;
      *(undefined4 *)(iVar1 + 0x174) = 0;
      *(undefined4 *)(iVar1 + 400) = 0;
      *(undefined4 *)(iVar1 + 0x194) = 1;
      *(undefined4 *)(iVar1 + 0x1a8) = 1;
      *(undefined4 *)(iVar1 + 0x1ac) = 0;
      *(undefined4 *)(iVar1 + 0x1c8) = 0;
      *(undefined4 *)(iVar1 + 0x1cc) = 1;
      iVar1 = (*pcVar4)(0);
      if (iVar1 == 0) {
        return uVar2;
      }
      iVar1 = *(int *)(unaff_gp + -0x7fd4) + -0x27b0;
      uVar5 = 800;
    }
    else {
      iVar1 = *(int *)(unaff_gp + -0x7fd4) + -0x27dc;
      uVar5 = 0x31a;
    }
    (**(code **)(unaff_gp + -0x7c54))(4,iVar1,unaff_s2 + -0x21c8,uVar5);
    (**(code **)(unaff_gp + -0x7788))(uVar2);
  }
  return 0;
}



// ==== rts_audio_fifo_drain @ 0002fa78 size=188

undefined4 rts_audio_fifo_drain(undefined4 param_1,undefined4 param_2)

{
  int in_v0;
  int iVar1;
  int unaff_s0;
  undefined4 unaff_s1;
  int unaff_s2;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  undefined4 in_t8;
  code *pcVar2;
  int unaff_gp;
  undefined4 uVar3;
  int in_stack_00000018;
  
  uVar3 = *(undefined4 *)(in_v0 + -0x21a0);
  *(undefined4 *)(unaff_s0 + 0x7c) = in_t8;
  *(undefined4 *)(unaff_s0 + 0x80) = 0xffffffff;
  pcVar2 = *(code **)(unaff_gp + -0x7938);
  *(undefined4 *)(unaff_s0 + 200) = uVar3;
  *(undefined4 *)(unaff_s0 + 0x84) = 0x33;
  *(undefined4 *)(unaff_s0 + 0x88) = 10;
  *(undefined4 *)(unaff_s0 + 0xcc) = 10;
  *(undefined4 *)(unaff_s0 + 0x70) = unaff_s3;
  *(undefined4 *)(unaff_s0 + 0x8c) = 0;
  *(undefined4 *)(unaff_s0 + 0x94) = 0;
  *(undefined4 *)(unaff_s0 + 0x98) = 0;
  *(undefined4 *)(unaff_s0 + 0x9c) = unaff_s1;
  *(undefined4 *)(unaff_s0 + 0xa0) = 0;
  *(undefined4 *)(unaff_s0 + 0xa4) = 0;
  *(undefined4 *)(unaff_s0 + 0xa8) = unaff_s1;
  *(undefined4 *)(unaff_s0 + 0xac) = 0;
  *(undefined4 *)(unaff_s0 + 0xb0) = unaff_s3;
  *(undefined4 *)(unaff_s0 + 0xb4) = 0;
  *(undefined4 *)(unaff_s0 + 0xb8) = 0;
  *(undefined4 *)(unaff_s0 + 0xbc) = 0;
  *(undefined4 *)(unaff_s0 + 0xc4) = unaff_s1;
  (*pcVar2)(param_1,param_2,0x74);
  iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(0);
  if (iVar1 == 0) {
    pcVar2 = *(code **)(in_stack_00000018 + -0x7ec0);
    *(int *)(unaff_s0 + 0x158) = unaff_s0 + 0x170;
    *(undefined4 *)(unaff_s0 + 0x18c) = 0xfffffff1;
    *(undefined4 *)(unaff_s0 + 0x1c4) = 0xfffffff1;
    *(undefined4 *)(unaff_s0 + 0x154) = unaff_s1;
    *(undefined4 *)(unaff_s0 + 0x15c) = unaff_s3;
    *(undefined4 *)(unaff_s0 + 0x170) = 0;
    *(undefined4 *)(unaff_s0 + 0x174) = 0;
    *(undefined4 *)(unaff_s0 + 400) = 0;
    *(undefined4 *)(unaff_s0 + 0x194) = unaff_s1;
    *(undefined4 *)(unaff_s0 + 0x1a8) = unaff_s1;
    *(undefined4 *)(unaff_s0 + 0x1ac) = 0;
    *(undefined4 *)(unaff_s0 + 0x1c8) = 0;
    *(undefined4 *)(unaff_s0 + 0x1cc) = unaff_s1;
    iVar1 = (*pcVar2)(0);
    if (iVar1 == 0) {
      return unaff_s4;
    }
    iVar1 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x27b0;
    uVar3 = 800;
  }
  else {
    iVar1 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x27dc;
    uVar3 = 0x31a;
  }
  (**(code **)(in_stack_00000018 + -0x7c54))(4,iVar1,unaff_s2 + -0x21c8,uVar3);
  (**(code **)(in_stack_00000018 + -0x7788))();
  return 0;
}



// ==== rts_audio_fifo_reset @ 0002fb04 size=20

undefined4 rts_audio_fifo_reset(undefined4 param_1,int param_2)

{
  int unaff_s2;
  int unaff_gp;
  undefined4 uStack00000010;
  int in_stack_00000018;
  
  uStack00000010 = 0;
  (**(code **)(unaff_gp + -0x7c54))(param_1,param_2 + -0x27dc,unaff_s2 + -0x21c8,0x31a);
  (**(code **)(in_stack_00000018 + -0x7788))();
  return 0;
}



// ==== rts_audio_fifo_size @ 0002fb48 size=8

undefined4 rts_audio_fifo_size(void)

{
  int iVar1;
  int unaff_s0;
  undefined4 unaff_s1;
  int unaff_s2;
  undefined4 unaff_s4;
  code *in_t9;
  int in_stack_00000018;
  
  *(undefined4 *)(unaff_s0 + 0x194) = unaff_s1;
  *(undefined4 *)(unaff_s0 + 0x1a8) = unaff_s1;
  *(undefined4 *)(unaff_s0 + 0x1ac) = 0;
  *(undefined4 *)(unaff_s0 + 0x1c8) = 0;
  *(undefined4 *)(unaff_s0 + 0x1cc) = unaff_s1;
  iVar1 = (*in_t9)();
  if (iVar1 != 0) {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x27b0,unaff_s2 + -0x21c8,800);
    (**(code **)(in_stack_00000018 + -0x7788))();
    unaff_s4 = 0;
  }
  return unaff_s4;
}



// ==== rts_audio_fifo_space @ 0002fb50 size=16

undefined4 rts_audio_fifo_space(void)

{
  int iVar1;
  int unaff_s0;
  undefined4 unaff_s1;
  int unaff_s2;
  undefined4 unaff_s4;
  code *in_t9;
  int in_stack_00000018;
  
  *(undefined4 *)(unaff_s0 + 0x1ac) = 0;
  *(undefined4 *)(unaff_s0 + 0x1c8) = 0;
  *(undefined4 *)(unaff_s0 + 0x1cc) = unaff_s1;
  iVar1 = (*in_t9)();
  if (iVar1 != 0) {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x27b0,unaff_s2 + -0x21c8,800);
    (**(code **)(in_stack_00000018 + -0x7788))();
    unaff_s4 = 0;
  }
  return unaff_s4;
}



// ==== rts_audio_fifo_write @ 0002fb60 size=104

undefined4 rts_audio_fifo_write(void)

{
  int in_v0;
  int unaff_s2;
  undefined4 unaff_s4;
  undefined4 uStack00000010;
  int in_stack_00000018;
  
  if (in_v0 != 0) {
    uStack00000010 = 0;
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x27b0,unaff_s2 + -0x21c8,800);
    (**(code **)(in_stack_00000018 + -0x7788))();
    unaff_s4 = 0;
  }
  return unaff_s4;
}



// ==== rts_audio_tfilter_new @ 00030a60 size=240

undefined4 rts_audio_tfilter_new(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_s0;
  int iVar3;
  code *pcVar4;
  int unaff_gp;
  int in_stack_00000018;
  int in_stack_00000024;
  int in_stack_00000028;
  
  if (*(int *)(unaff_s0 + 0x254) == 0) {
    uVar1 = 0xffffffe1;
    in_stack_00000018 = unaff_gp;
  }
  else {
    uVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fd0) + -0xb5c))();
    iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
    iVar3 = *(int *)(in_stack_00000018 + -0x7fd4);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(in_stack_00000018 + -0x7ae4))
                        (*(undefined4 *)(unaff_s0 + 0x254),&stack0x00000020);
      if (iVar2 == 0) {
        if (*(int *)(unaff_s0 + 500) != 0) {
          (**(code **)(in_stack_00000018 + -0x796c))();
        }
        *(undefined4 *)(unaff_s0 + 500) = 0;
        if (*(int *)(unaff_s0 + 0x228) != 0) {
          (**(code **)(in_stack_00000018 + -0x796c))();
        }
        pcVar4 = *(code **)(in_stack_00000018 + -0x7818);
        *(undefined4 *)(unaff_s0 + 0x228) = 0;
        iVar2 = (*pcVar4)(in_stack_00000024 * in_stack_00000028,1,iVar3 + -0x2354,0x2ce);
        *(int *)(unaff_s0 + 500) = iVar2;
        if (iVar2 != 0) {
          (**(code **)(in_stack_00000018 + -0x7938))(unaff_s0 + 0x218,unaff_s0 + 0x1e4,0x34);
          iVar2 = (**(code **)(in_stack_00000018 + -0x7818))
                            (in_stack_00000024 * in_stack_00000028,1,
                             *(int *)(in_stack_00000018 + -0x7fd4) + -0x2354,0x2d7);
          *(int *)(unaff_s0 + 0x228) = iVar2;
          uVar1 = 0;
          if (iVar2 != 0) goto LAB_00030c08;
          if (*(int *)(unaff_s0 + 500) != 0) {
            (**(code **)(in_stack_00000018 + -0x796c))();
          }
          *(undefined4 *)(unaff_s0 + 500) = 0;
          if (*(int *)(unaff_s0 + 0x228) != 0) {
            (**(code **)(in_stack_00000018 + -0x796c))();
          }
          *(undefined4 *)(unaff_s0 + 0x228) = 0;
        }
        uVar1 = 0xfffffff5;
      }
      else {
        uVar1 = 0xffffffe5;
        (**(code **)(in_stack_00000018 + -0x7c54))
                  (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x283c,iVar3 + -0x2354,0x2c6);
      }
    }
    else {
      (**(code **)(in_stack_00000018 + -0x7c54))
                (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x269c,iVar3 + -0x2354,0x2c0);
    }
  }
LAB_00030c08:
  iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



// ==== rts_audio_tfilter_free @ 00030b50 size=40

undefined4 rts_audio_tfilter_free(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_s0;
  undefined4 unaff_s1;
  int in_t8;
  code *pcVar2;
  int unaff_gp;
  int in_stack_00000018;
  int in_stack_00000024;
  int in_stack_00000028;
  
  pcVar2 = *(code **)(unaff_gp + -0x7818);
  *(undefined4 *)(unaff_s0 + 0x228) = 0;
  iVar1 = (*pcVar2)(param_1 * in_t8,param_2,param_3,0x2ce);
  *(int *)(unaff_s0 + 500) = iVar1;
  if (iVar1 != 0) {
    (**(code **)(in_stack_00000018 + -0x7938))(unaff_s0 + 0x218,unaff_s0 + 0x1e4,0x34);
    iVar1 = (**(code **)(in_stack_00000018 + -0x7818))
                      (in_stack_00000024 * in_stack_00000028,1,
                       *(int *)(in_stack_00000018 + -0x7fd4) + -0x2354,0x2d7);
    *(int *)(unaff_s0 + 0x228) = iVar1;
    if (iVar1 != 0) goto LAB_00030c08;
    if (*(int *)(unaff_s0 + 500) != 0) {
      (**(code **)(in_stack_00000018 + -0x796c))();
    }
    *(undefined4 *)(unaff_s0 + 500) = 0;
    if (*(int *)(unaff_s0 + 0x228) != 0) {
      (**(code **)(in_stack_00000018 + -0x796c))();
    }
    *(undefined4 *)(unaff_s0 + 0x228) = 0;
  }
  unaff_s1 = 0xfffffff5;
LAB_00030c08:
  iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(unaff_s1);
  if (iVar1 == 0) {
    unaff_s1 = 0;
  }
  return unaff_s1;
}



// ==== rts_audio_tfilter_reset @ 00030b78 size=8

undefined4 rts_audio_tfilter_reset(void)

{
  int iVar1;
  int unaff_s0;
  undefined4 unaff_s1;
  code *in_t9;
  int in_stack_00000018;
  int in_stack_00000024;
  int in_stack_00000028;
  
  (*in_t9)(unaff_s0 + 0x218,unaff_s0 + 0x1e4,0x34);
  iVar1 = (**(code **)(in_stack_00000018 + -0x7818))
                    (in_stack_00000024 * in_stack_00000028,1,
                     *(int *)(in_stack_00000018 + -0x7fd4) + -0x2354,0x2d7);
  *(int *)(unaff_s0 + 0x228) = iVar1;
  if (iVar1 == 0) {
    if (*(int *)(unaff_s0 + 500) != 0) {
      (**(code **)(in_stack_00000018 + -0x796c))();
    }
    *(undefined4 *)(unaff_s0 + 500) = 0;
    if (*(int *)(unaff_s0 + 0x228) != 0) {
      (**(code **)(in_stack_00000018 + -0x796c))();
    }
    *(undefined4 *)(unaff_s0 + 0x228) = 0;
    unaff_s1 = 0xfffffff5;
  }
  iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(unaff_s1);
  if (iVar1 == 0) {
    unaff_s1 = 0;
  }
  return unaff_s1;
}



// ==== rts_audio_tfilter_update @ 00030b80 size=152

undefined4 rts_audio_tfilter_update(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_s0;
  undefined4 unaff_s1;
  code *in_t9;
  int in_stack_00000018;
  int in_stack_00000024;
  int in_stack_00000028;
  
  (*in_t9)(param_1,param_2,0x34);
  iVar1 = (**(code **)(in_stack_00000018 + -0x7818))
                    (in_stack_00000024 * in_stack_00000028,1,
                     *(int *)(in_stack_00000018 + -0x7fd4) + -0x2354,0x2d7);
  *(int *)(unaff_s0 + 0x228) = iVar1;
  if (iVar1 == 0) {
    if (*(int *)(unaff_s0 + 500) != 0) {
      (**(code **)(in_stack_00000018 + -0x796c))();
    }
    *(undefined4 *)(unaff_s0 + 500) = 0;
    if (*(int *)(unaff_s0 + 0x228) != 0) {
      (**(code **)(in_stack_00000018 + -0x796c))();
    }
    *(undefined4 *)(unaff_s0 + 0x228) = 0;
    unaff_s1 = 0xfffffff5;
  }
  iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(unaff_s1);
  if (iVar1 == 0) {
    unaff_s1 = 0;
  }
  return unaff_s1;
}



// ==== rts_audio_capture_run @ 00030c20 size=36

void rts_audio_capture_run(void)

{
  return;
}



// ==== rts_av_get_h264_mediainfo @ 00030c44 size=164

void rts_av_get_h264_mediainfo(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 == 0) {
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cd0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2398,0x38b,puVar1);
    (*(code *)PTR___assert_000637b8)
              (puVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2960,0x38b,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x23b4);
  }
  (*(code *)PTR_rts_av_do_cmd_00063488)();
  return;
}



// ==== rts_av_get_h264_profile @ 00030ce8 size=212

undefined4 rts_av_get_h264_profile(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_24;
  
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac8);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x23cc,0x39a,param_2);
    (*(code *)PTR___assert_000637b8)
              (param_2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2960,0x39a,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x23e4);
  }
  uVar1 = (*(code *)PTR_rts_av_do_cmd_00063488)();
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
  if (iVar2 == 0) {
    *param_2 = local_24;
    uVar1 = 0;
  }
  return uVar1;
}



// ==== rts_av_query_h264_ctrl @ 00030dbc size=164

void rts_av_query_h264_ctrl(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 == 0) {
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x267c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x23fc,0x3ad,puVar1);
    (*(code *)PTR___assert_000637b8)
              (puVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2960,0x3ad,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2414);
  }
  (*(code *)PTR_rts_av_do_cmd_00063488)();
  return;
}



// ==== rts_av_release_h264_ctrl @ 00030e60 size=8

void rts_av_release_h264_ctrl(void)

{
  return;
}



// ==== rts_av_set_h264_ctrl @ 00030e68 size=120

void rts_av_set_h264_ctrl(undefined *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)PTR_set_h1_ctrl_000633b0;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2674;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x242c,0x3bf,param_1);
    UNRECOVERED_JUMPTABLE = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2960,0x3bf,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2444);
  }
                    /* WARNING: Could not recover jumptable at 0x00030ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + -0x6c);
  return;
}



// ==== rts_audio_capture_init @ 00030ee0 size=16

void rts_audio_capture_init(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00030ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// ==== rts_av_get_h264_ctrl @ 00030ef0 size=136

void rts_av_get_h264_ctrl(undefined *param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)PTR_get_h1_ctrl_00063974;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2674;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x245c,0x3ca,param_1);
    pcVar1 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2960,0x3ca,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2474);
  }
  (*pcVar1)(param_1 + -0x6c);
  return;
}



// ==== rts_av_request_h264_key_frame @ 00030f78 size=8

void rts_av_request_h264_key_frame(undefined4 param_1)

{
  undefined4 local_20 [5];
  undefined4 local_c;
  
  local_20[0] = 0x2a037672;
  local_c = 0;
  (*(code *)PTR_rts_av_do_cmd_00063488)(param_1,0x34363268,local_20);
  return;
}



// ==== rts_audio_decode_get_profile @ 00030f80 size=64

void rts_audio_decode_get_profile
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_t9;
  int unaff_gp;
  undefined4 local_20 [5];
  undefined4 local_c;
  
  local_20[0] = 0x2a037672;
  local_c = 0;
  (**(code **)(unaff_gp + in_t9 + -0x7db8))(param_1,0x34363268,local_20,param_4,unaff_gp + in_t9);
  return;
}



// ==== rts_av_query_h264_roi @ 00030fc0 size=172

void rts_av_query_h264_roi(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 == 0) {
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x248c,0x3df,puVar1);
    (*(code *)PTR___assert_000637b8)
              (puVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2960,0x3df,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x24a4);
  }
  (*(code *)PTR_rts_av_do_cmd_00063488)();
  return;
}



// ==== rts_av_release_h264_roi @ 0003106c size=8

void rts_av_release_h264_roi(void)

{
  return;
}



// ==== rts_av_set_h264_roi @ 00031074 size=20

void rts_av_set_h264_roi(undefined *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)PTR_set_h1_roi_00063a88;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x24b8,0x3f0,param_1);
    UNRECOVERED_JUMPTABLE = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2960,0x3f0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x24cc);
  }
                    /* WARNING: Could not recover jumptable at 0x000310f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + -0x154);
  return;
}



// ==== rts_audio_decode_start @ 00031088 size=116

void rts_audio_decode_start(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int unaff_gp;
  
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_gp + -0x77b8);
  if (param_1 == 0) {
    param_1 = *(int *)(unaff_gp + -0x7fd4) + -0x126c;
    (**(code **)(unaff_gp + -0x7c54))
              (4,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x24b8,0x3f0
              );
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_gp + -0x7a88);
    (*UNRECOVERED_JUMPTABLE)
              (param_1,*(int *)(unaff_gp + -0x7fd4) + -0x2960,0x3f0,
               *(int *)(unaff_gp + -0x7fd4) + -0x24cc);
  }
                    /* WARNING: Could not recover jumptable at 0x000310f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + -0x154);
  return;
}



// ==== rts_av_get_h264_roi @ 000310fc size=136

void rts_av_get_h264_roi(undefined *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)PTR_get_h1_roi_000636c8;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x24e0,0x3fb,param_1);
    UNRECOVERED_JUMPTABLE = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2960,0x3fb,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x24f4);
  }
                    /* WARNING: Could not recover jumptable at 0x0003117c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + -0x154);
  return;
}



// ==== rts_av_release_h264_roi_map @ 00031184 size=8

void rts_av_release_h264_roi_map(void)

{
  return;
}



// ==== rts_av_set_h264_roi_map @ 0003118c size=176

undefined4 rts_av_set_h264_roi_map(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_e0 [204];
  
  piVar4 = param_1;
  if (param_1 == (int *)0x0) {
    piVar4 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x266c);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x250c,0x40a,piVar4);
    param_1 = piVar4;
    (*(code *)PTR___assert_000637b8)
              (piVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2960,0x40a,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2524);
  }
  if (param_1[0x1c] == 0) {
    uVar3 = 0xffffffe1;
  }
  else {
    iVar2 = (*(code *)PTR_H264EncGetCodingCtrl_00063374)(param_1[0x1c],auStack_e0);
    if (iVar2 == 0) {
      iVar2 = (*(code *)(PTR_LAB_00063270 + -0x90c))(auStack_e0);
      if (iVar2 == 1) {
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2664,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2538,0x2fb,0xffffffb7);
        uVar3 = 0xffffffb7;
      }
      else {
        (*(code *)PTR_pthread_mutex_lock_00063ae8)(piVar4 + 0x1e);
        iVar2 = piVar4[0x11];
        (*(code *)PTR_memcpy_00063908)(iVar2,piVar4[4],piVar4[1] * *piVar4);
        (*(code *)PTR_memcpy_00063908)(piVar4 + 0xd,piVar4,0x34);
        piVar4[0x11] = iVar2;
        puVar1 = PTR_pthread_mutex_unlock_00063890;
        piVar4[-1] = 1;
        (*(code *)puVar1)(piVar4 + 0x1e);
        uVar3 = 0;
      }
    }
    else {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x28c8,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2538,0x2f5,iVar2);
      uVar3 = 0xffffffe5;
    }
  }
  return uVar3;
}



// ==== rts_audio_decode_run @ 0003123c size=56

undefined4 rts_audio_decode_run(undefined4 param_1,int param_2,int param_3)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7c54))(param_1,param_2 + -0x28c8,param_3 + -0x2538);
  return 0xffffffe5;
}



// ==== rts_av_query_h264_roi_map @ 00031508 size=120

void rts_av_query_h264_roi_map(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 == 0) {
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2618;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2574,0x451,puVar1);
    (*(code *)PTR___assert_000637b8)
              (puVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2960,0x451,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2590);
  }
  (*(code *)PTR_rts_av_do_cmd_00063488)();
  return;
}



// ==== rts_audio_decode_set_profile @ 00031580 size=44

void rts_audio_decode_set_profile(undefined4 param_1,undefined4 param_2)

{
  int in_t8;
  int unaff_gp;
  int iStack00000020;
  undefined4 uStack00000034;
  
  iStack00000020 = in_t8 + 0x7672;
  uStack00000034 = param_2;
  (**(code **)(unaff_gp + -0x7db8))(param_1,0x34363268);
  return;
}



// ==== rts_av_get_h264_roi_map @ 000315ac size=316

undefined4 rts_av_get_h264_roi_map(undefined *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 *unaff_s2;
  
  if (param_1 == (undefined *)0x0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x266c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x25a8,0x461,puVar3);
    uVar2 = 0x461;
    param_2 = unaff_s2;
  }
  else {
    puVar3 = param_1;
    if (param_2 != (undefined4 *)0x0) goto LAB_00031674;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2618;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x25a8,0x462,puVar3);
    uVar2 = 0x462;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2960,uVar2,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x25c0);
LAB_00031674:
  uVar2 = (*(code *)(PTR_LAB_00063270 + -0xb5c))(puVar3 + -0x1e4);
  iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
  if (iVar1 == 0) {
    *param_2 = param_1;
    uVar2 = 0;
  }
  else {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2610,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x25a8,0x468,uVar2);
  }
  return uVar2;
}



// ==== rts_audio_decode_stop @ 000317c4 size=80

void rts_audio_decode_stop(void)

{
  int in_v0;
  int unaff_s0;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  int in_stack_00000018;
  
  if (in_v0 != 0) {
    (**(code **)(in_stack_00000018 + -0x7a88))
              (*(int *)(in_stack_00000018 + -0x7fd4) + -0x278c,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x2960,0x479,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x25e0);
  }
  *(undefined4 *)(unaff_s0 + 0x274) = unaff_s2;
  *(undefined4 *)(unaff_s0 + 0x278) = unaff_s3;
  return;
}



// ==== rts_audio_decode_init @ 00031840 size=52

int rts_audio_decode_init(void)

{
  int iVar1;
  code *in_t9;
  
  iVar1 = (*in_t9)();
  if ((iVar1 == 0) || (*(int *)(iVar1 + 500) == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}



// ==== rts_h1encoder_get_profile @ 0003187c size=132

undefined4 rts_h1encoder_get_profile(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
  if (iVar1 == 0) {
    uVar3 = 0xffffffe1;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      iVar2 = *(int *)(iVar1 + 0x10);
      *param_2 = 0x301;
      uVar3 = *(undefined4 *)(iVar1 + 0x20);
      if (iVar2 == 0) {
        param_2[1] = *(undefined4 *)(iVar1 + 0x1c);
      }
      else {
        param_2[1] = uVar3;
        uVar3 = *(undefined4 *)(iVar1 + 0x1c);
      }
      param_2[2] = uVar3;
      if (*(int *)(iVar1 + 0x14) != 0) {
        param_2[1] = param_2[1] + -0x10;
        param_2[2] = param_2[2] + -0x10;
      }
      param_2[3] = *(undefined4 *)(iVar1 + 0x24);
      param_2[4] = *(undefined4 *)(iVar1 + 0x28);
    }
    uVar3 = 0;
  }
  return uVar3;
}



// ==== rts_audio_decode_check_ready @ 00031900 size=40

undefined4 rts_audio_decode_check_ready(void)

{
  int in_v0;
  int unaff_s0;
  
  *(undefined4 *)(unaff_s0 + 0xc) = *(undefined4 *)(in_v0 + 0x24);
  *(undefined4 *)(unaff_s0 + 0x10) = *(undefined4 *)(in_v0 + 0x28);
  return 0;
}



// ==== rts_audio_decode_cleanup @ 000319d0 size=116

/* WARNING: Control flow encountered bad instruction data */

void rts_audio_decode_cleanup(void)

{
  int in_v0;
  int iVar1;
  int in_stack_00000010;
  
  if (((in_v0 != 0) &&
      (iVar1 = (*(code *)(*(int *)(in_stack_00000010 + -0x7fd0) + 0x1950))(), iVar1 != 0)) &&
     (iVar1 = *(int *)(iVar1 + 0x24), iVar1 != 0)) {
    if ((*(int *)(in_v0 + 0x28) != 0) && (*(int *)(in_v0 + 0x204) == 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined4 *)(in_v0 + 0x204) = 0;
    *(int *)(in_v0 + 0xc) = iVar1;
  }
  return;
}



// ==== rts_h1encoder_get_attr @ 00031a78 size=48

undefined4 rts_h1encoder_get_attr(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0xfffffff6;
  }
  iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
  if (iVar1 == 0) {
    uVar2 = 0xfffffff6;
  }
  else {
    if (param_2 != 0) {
      if (*(int *)(iVar1 + 500) == 0) {
        return 0xffffffef;
      }
      (*(code *)PTR_memcpy_00063908)(param_2,iVar1,0x18);
    }
    uVar2 = 0;
  }
  return uVar2;
}



// ==== rts_h1encoder_set_attr @ 00031b00 size=452

undefined4 rts_h1encoder_set_attr(int param_1,uint *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (((param_1 == 0) || (param_2 == (uint *)0x0)) ||
     (iVar2 = (*(code *)PTR_rts_av_get_unit_priv_00063344)(), iVar2 == 0)) {
    return 0xfffffff6;
  }
  if ((int)param_2[1] < -1) {
    uVar5 = 0xffffffff;
LAB_00031b7c:
    param_2[1] = uVar5;
  }
  else {
    uVar5 = 0x33;
    if (0x33 < (int)param_2[1]) goto LAB_00031b7c;
  }
  uVar5 = 10000;
  if ((param_2[2] < 10000) || (uVar5 = 40000000, 40000000 < param_2[2])) {
    param_2[2] = uVar5;
  }
  if (param_2[3] == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0x96;
    if (param_2[3] < 0x97) goto LAB_00031bcc;
  }
  param_2[3] = uVar5;
LAB_00031bcc:
  uVar4 = 0xffffffeb;
  if (param_2[4] < 3) {
    if (0x10 < *param_2) {
      *param_2 = 0x10;
    }
    uVar4 = 0;
    if (*param_2 == 0) {
      *param_2 = 0xc;
    }
  }
  iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
  if (iVar3 != 0) {
    return uVar4;
  }
  iVar3 = (*(code *)PTR_memcmp_000634cc)(param_2,iVar2,0x18);
  if (iVar3 != 0) {
    (*(code *)PTR_memcpy_00063908)(iVar2,param_2,0x18);
    puVar1 = PTR_rts_av_set_unit_rotation_0006343c;
    uVar5 = param_2[4];
    *(undefined4 *)(iVar2 + 0x14) = 0;
    (*(code *)puVar1)(param_1,uVar5);
    iVar3 = (*(code *)(PTR_LAB_00063270 + 0x1950))(param_1);
    puVar1 = PTR_rts_av_set_h264_ctrl_0006371c;
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar2 + 4);
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 8);
      *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(iVar2 + 0xc);
      (*(code *)puVar1)(iVar3);
    }
  }
  return 0;
}



// ==== rts_audio_playback_check_ready @ 00031ed0 size=8

undefined4 rts_audio_playback_check_ready(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int in_t8;
  uint uVar3;
  
  if ((((in_t8 - 0x60U < 0xf91) && (uVar3 = *(uint *)(param_1 + 0xc), uVar3 != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x10), uVar1 != 0)) && (uVar3 <= uVar1)) {
    if (uVar3 == 0) {
      trap(0x1c00);
    }
    uVar2 = 0xffffffeb;
    if (uVar1 / uVar3 < 0x10000) {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xffffffeb;
}



// ==== rts_audio_playback_run @ 00031ed8 size=88

undefined4 rts_audio_playback_run(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int in_t8;
  uint uVar3;
  
  if ((((in_t8 != 0) && (uVar3 = *(uint *)(param_1 + 0xc), uVar3 != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x10), uVar1 != 0)) && (uVar3 <= uVar1)) {
    if (uVar3 == 0) {
      trap(0x1c00);
    }
    uVar2 = 0xffffffeb;
    if (uVar1 / uVar3 < 0x10000) {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xffffffeb;
}



// ==== rts_audio_playback_init @ 000320b8 size=20

void rts_audio_playback_init(void)

{
  return;
}



// ==== rts_h1encoder_start @ 000328e8 size=1988

int rts_h1encoder_start(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_40;
  int local_3c;
  uint local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  
  iVar2 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
  if (iVar2 == 0) {
    return -0x1f;
  }
  if (param_1 == 0) {
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1958,0x69e,puVar5);
    (*(code *)PTR___assert_000637b8)
              (puVar5,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2188,0x69e,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1968);
    return -0x1f;
  }
  if (*(int *)(iVar2 + 500) != 0) goto LAB_00032e10;
  if (*(int *)(iVar2 + 0x1f0) == 0) {
    iVar6 = -0x1f;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1fc8,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x197c,0x44d);
  }
  else {
    iVar6 = *(int *)(iVar2 + 0x18);
    if (iVar6 == 3) {
      uVar4 = 3;
    }
    else if (iVar6 == 4) {
      uVar4 = 0;
    }
    else {
      if (iVar6 != 1) {
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1f94,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + -0x197c,0x45d,iVar6);
        iVar6 = -0x1d;
        goto LAB_00032db4;
      }
      uVar4 = 1;
    }
    iVar6 = (*(code *)PTR_H264EncInit_V2_00063870)
                      (iVar2 + 0xe4,iVar2 + 0xe0,*(undefined4 *)(iVar2 + 0x120),iVar2 + 0x194);
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c;
    if (iVar6 == 0) {
      iVar6 = (*(code *)PTR_H264EncGetPreProcessing_00063594)
                        (*(undefined4 *)(iVar2 + 0xe0),&local_50);
      if (iVar6 == 0) {
        iVar6 = *(int *)(iVar2 + 0x10);
        if ((*(int *)(iVar2 + 0x14) != 0) || (iVar6 != 0)) {
          local_50 = *(undefined4 *)(iVar2 + 0x1c);
          local_4c = *(undefined4 *)(iVar2 + 0x20);
        }
        iVar3 = iVar6;
        if ((iVar6 != 1) && ((iVar6 == 0 || ((iVar6 != 2 && (iVar3 = local_3c, iVar6 == 3)))))) {
          local_3c = 0;
          iVar3 = local_3c;
        }
        local_3c = iVar3;
        local_38 = (uint)(*(int *)(iVar2 + 0x14) != 0);
        if (*(int *)(iVar2 + 0x124) == 0) {
          local_34 = 0;
        }
        else if (*(int *)(iVar2 + 0x124) == 1) {
          local_34 = 1;
        }
        else {
          local_34 = 2;
          local_30 = (undefined2)*(undefined4 *)(iVar2 + 0x128);
          local_2e = (undefined2)*(undefined4 *)(iVar2 + 300);
          local_2c = (undefined2)*(undefined4 *)(iVar2 + 0x130);
          local_2a = (undefined2)*(undefined4 *)(iVar2 + 0x134);
          local_28 = (undefined2)*(undefined4 *)(iVar2 + 0x138);
        }
        local_40 = uVar4;
        iVar6 = (*(code *)PTR_H264EncSetPreProcessing_00063668)
                          (*(undefined4 *)(iVar2 + 0xe0),&local_50);
        puVar5 = PTR_LAB_00063270;
        if (iVar6 == 0) {
          *(undefined4 *)(iVar2 + 500) = 1;
          *(undefined4 *)(iVar2 + 0x1f8) = 0;
          *(undefined4 *)(iVar2 + 0x1fc) = 0;
          uVar4 = (*(code *)(puVar5 + 0x1930))(*(undefined4 *)(iVar2 + 0x27c));
          (*(code *)PTR_set_h1_ctrl_owner_00063ae0)
                    (uVar4,*(undefined4 *)(iVar2 + 0xe0),*(undefined4 *)(iVar2 + 0x1c),
                     *(undefined4 *)(iVar2 + 0x20));
          iVar6 = 0;
          goto LAB_00032db4;
        }
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1e10,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + -0x197c,0x49f,iVar6);
        iVar6 = -0x1c;
      }
      else {
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1e40,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + -0x197c,0x474,iVar6);
        iVar6 = -0x1b;
      }
      if (*(int *)(iVar2 + 0xe0) != 0) {
        (*(code *)PTR_H264EncRelease_00063780)();
      }
      *(undefined4 *)(iVar2 + 0xe0) = 0;
    }
    else {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1f64,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x197c,0x464,iVar6);
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1f3c,puVar5 + -0x197c,0x465,
                 *(undefined4 *)(iVar2 + 0xe4));
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1f20,puVar5 + -0x197c,0x466,
                 *(undefined4 *)(iVar2 + 0xe8));
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1f08,puVar5 + -0x197c,0x467,
                 *(undefined4 *)(iVar2 + 0xec));
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1ef4,puVar5 + -0x197c,0x468,
                 *(undefined4 *)(iVar2 + 0xf0));
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1ee0,puVar5 + -0x197c,0x469,
                 *(undefined4 *)(iVar2 + 0xf4));
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1ecc,puVar5 + -0x197c,0x46a,
                 *(undefined4 *)(iVar2 + 0xf8));
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1eb0,puVar5 + -0x197c,0x46b,
                 *(undefined4 *)(iVar2 + 0xfc));
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1e94,puVar5 + -0x197c,0x46c,
                 *(undefined4 *)(iVar2 + 0x108));
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1e78,puVar5 + -0x197c,0x46d,
                 *(undefined4 *)(iVar2 + 0x100));
      iVar6 = -0x1e;
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1e5c,puVar5 + -0x197c,0x46e,
                 *(undefined4 *)(iVar2 + 0x104));
    }
  }
LAB_00032db4:
  iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar6);
  if ((iVar3 != 0) && ((*(code *)PTR_memset_000637dc)(iVar2 + 0x18,0,0x14), iVar6 != 0)) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1de0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x18b8,0x6ba,iVar6);
    return iVar6;
  }
LAB_00032e10:
  puVar8 = (undefined4 *)0x0;
  if (*(int *)(iVar2 + 0x1e4) == 0) {
    iVar6 = -10;
  }
  else if (*(int *)(iVar2 + 500) == 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1dc0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1994,0x168);
    iVar6 = -0x1f;
  }
  else {
    if (*(int *)(iVar2 + 0x1e8) != 0) {
      (*(code *)PTR_rts_av_put_buffer_00063548)();
    }
    *(undefined4 *)(iVar2 + 0x1e8) = 0;
    if (*(int *)(iVar2 + 0x1ec) != 0) {
      (*(code *)PTR_rts_av_put_buffer_00063548)();
    }
    *(undefined4 *)(iVar2 + 0x1ec) = 0;
    if (*(int *)(iVar2 + 0x20c) == 0) {
      puVar8 = (undefined4 *)(*(code *)PTR_rts_queue_pop_0006333c)(**(undefined4 **)(iVar2 + 0x1e4))
      ;
    }
    else {
      puVar8 = *(undefined4 **)(iVar2 + 0x1e0);
    }
    puVar5 = PTR_H264EncStrmStart_000639f8;
    if (puVar8 == (undefined4 *)0x0) {
      iVar6 = -0xb;
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1d94,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1994,0x178);
    }
    else {
      *(undefined4 *)(iVar2 + 0x14c) = *puVar8;
      *(undefined4 *)(iVar2 + 0x150) = puVar8[3];
      *(undefined4 *)(iVar2 + 0x154) = puVar8[1];
      iVar6 = (*(code *)puVar5)(*(undefined4 *)(iVar2 + 0xe0),iVar2 + 0x13c,iVar2 + 0x16c);
      if (iVar6 == 0) {
        iVar6 = 0;
        puVar8[2] = *(undefined4 *)(iVar2 + 0x170);
      }
      else {
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1d58,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1994,0x182,iVar6);
        iVar6 = -0x1c;
        (*(code *)PTR_rts_av_put_buffer_00063548)(puVar8);
        puVar8 = (undefined4 *)0x0;
      }
    }
  }
  iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar6);
  if (iVar3 == 0) {
    uVar7 = 0x40;
    if ((uint)puVar8[2] < 0x41) {
      uVar7 = puVar8[2];
    }
    (*(code *)PTR_memset_000637dc)(iVar2 + 0xa0,0,0x40);
    (*(code *)PTR_memcpy_00063908)(iVar2 + 0xa0,*puVar8,uVar7);
    puVar5 = PTR_rts_get_monotonic_raw_time_0006355c;
    *(uint *)(iVar2 + 0x9c) = uVar7;
    (*(code *)puVar5)();
    (*(code *)PTR_rts_av_set_buffer_ts_00063850)(puVar8);
    (*(code *)PTR_rts_av_put_buffer_00063548)(puVar8);
    *(undefined4 *)(iVar2 + 0x268) = 0;
    *(undefined4 *)(iVar2 + 0x26c) = 0;
    if (*(int *)(iVar2 + 0x218) != 0) {
      (*(code *)PTR_H264EncSetEpollHook_00063614)
                (*(undefined4 *)(iVar2 + 0xe0),iVar2,PTR_LAB_00063270 + 0x269c);
      (*(code *)PTR_H264EncUseSigio_00063360)(*(undefined4 *)(iVar2 + 0xe0),0);
      return 0;
    }
    bVar1 = *(int *)(iVar2 + 0x21c) == 0;
    if (bVar1) {
      (*(code *)PTR_H264EncSetEpollHook_00063614)(*(undefined4 *)(iVar2 + 0xe0),0,0);
      uVar4 = *(undefined4 *)(iVar2 + 0xe0);
    }
    else {
      (*(code *)PTR_H264EncSetEpollHook_00063614)();
      uVar4 = *(undefined4 *)(iVar2 + 0xe0);
    }
    (*(code *)PTR_H264EncUseSigio_00063360)(uVar4,!bVar1);
    return 0;
  }
  return iVar6;
}



// ==== rts_h1encoder_stop @ 000330ac size=568

undefined4 rts_h1encoder_stop(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  iVar2 = (*(code *)(PTR_LAB_00063270 + 0x1820))();
  if (iVar2 == 0) {
    uVar5 = 0xffffffe1;
  }
  else {
    if (*(int *)(iVar2 + 0x1e4) == 0) {
      puVar4 = (undefined4 *)0x0;
      uVar5 = 0xfffffff6;
    }
    else if (*(int *)(iVar2 + 500) == 0) {
      puVar4 = (undefined4 *)0x0;
      uVar5 = 0xffffffe1;
    }
    else {
      if (*(int *)(iVar2 + 0x1e8) != 0) {
        (*(code *)PTR_rts_av_put_buffer_00063548)();
      }
      *(undefined4 *)(iVar2 + 0x1e8) = 0;
      if (*(int *)(iVar2 + 0x1ec) != 0) {
        (*(code *)PTR_rts_av_put_buffer_00063548)();
      }
      *(undefined4 *)(iVar2 + 0x1ec) = 0;
      if (*(int *)(iVar2 + 0x20c) == 0) {
        puVar4 = (undefined4 *)
                 (*(code *)PTR_rts_queue_pop_0006333c)(**(undefined4 **)(iVar2 + 0x1e4));
      }
      else {
        puVar4 = *(undefined4 **)(iVar2 + 0x1e0);
      }
      if (puVar4 == (undefined4 *)0x0) {
        uVar5 = 0xfffffff5;
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1d34,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + -0x19ac,0x144);
      }
      else {
        (*(code *)PTR_rts_av_set_buffer_offset_000635bc)(puVar4,0x40);
        *(undefined4 *)(iVar2 + 0x14c) = *puVar4;
        puVar1 = PTR_H264EncStrmEnd_00063648;
        *(undefined4 *)(iVar2 + 0x150) = puVar4[3];
        *(undefined4 *)(iVar2 + 0x154) = puVar4[1];
        iVar3 = (*(code *)puVar1)(*(undefined4 *)(iVar2 + 0xe0),iVar2 + 0x13c,iVar2 + 0x16c);
        if (iVar3 == 0) {
          uVar5 = 0;
          puVar4[2] = *(undefined4 *)(iVar2 + 0x170);
        }
        else {
          (*(code *)PTR_rts_log_000635ec)
                    (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1cf8,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + -0x19ac,0x150,iVar3);
          uVar5 = 0xffffffe4;
          (*(code *)PTR_rts_av_put_buffer_00063548)(puVar4);
          puVar4 = (undefined4 *)0x0;
        }
      }
    }
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar5);
    if (iVar3 == 0) {
      if (puVar4 != (undefined4 *)0x0) {
        (*(code *)PTR_rts_get_monotonic_raw_time_0006355c)();
        (*(code *)PTR_rts_av_set_buffer_ts_00063850)(puVar4);
        (*(code *)PTR_rts_av_put_buffer_00063548)(puVar4);
      }
      uVar5 = 0;
      if (*(int *)(iVar2 + 0x218) != 0) {
        (*(code *)PTR_rts_log_000635ec)
                  (1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1cd4,
                   *(undefined4 *)(iVar2 + 0x268),*(undefined4 *)(iVar2 + 0x26c));
        uVar5 = 0;
      }
    }
  }
  return uVar5;
}



// ==== rts_h1encoder_check_ready @ 000332e4 size=128

undefined4 rts_h1encoder_check_ready(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)(PTR_LAB_00063270 + 0x1820))();
  if ((iVar1 == 0) || (*(undefined4 **)(iVar1 + 0x1e4) == (undefined4 *)0x0)) {
    uVar3 = 0xffffffe1;
  }
  else {
    iVar2 = (*(code *)PTR_rts_queue_empty_00063b60)(**(undefined4 **)(iVar1 + 0x1e4));
    uVar3 = 0xffffffec;
    if (iVar2 == 0) {
      if (*(int *)(iVar1 + 0x214) < 10) {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0xffffffef;
    }
  }
  return uVar3;
}



// ==== rts_h1encoder_post_connect @ 00033418 size=588

undefined4 rts_h1encoder_post_connect(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int local_28;
  int local_24;
  undefined1 auStack_20 [4];
  undefined4 local_1c;
  
  if (param_1 == 0) {
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x17b0,0x612,puVar5);
    uVar4 = 0x612;
  }
  else {
    if (param_2 != 0) goto LAB_000334e4;
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x69bc;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x17b0,0x613,puVar5);
    uVar4 = 0x613;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar5,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2188,uVar4,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x17cc);
LAB_000334e4:
  iVar1 = (*(code *)PTR_rts_av_get_pipe_src_000636f0)();
  if (iVar1 != 0) {
    iVar2 = (*(code *)PTR_rts_av_get_unit_priv_00063344)(param_1);
    if (iVar2 == 0) {
      return 0xfffffff6;
    }
    iVar3 = (*(code *)PTR_rts_av_get_unit_id_000635a0)(iVar1);
    if ((iVar3 == 0x707369) ||
       (iVar1 = (*(code *)PTR_rts_av_find_src_by_id_000632ac)(iVar1), iVar1 != 0)) {
      uVar4 = (*(code *)PTR_rts_av_get_unit_attr_00063808)(iVar1,auStack_20);
      iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
      if (iVar1 != 0) {
        return uVar4;
      }
      if (-1 < *(int *)(iVar2 + 0x120)) {
        (*(code *)PTR_rts_isp_v4l2_close_0006389c)();
      }
      puVar5 = PTR_rts_isp_v4l2_open_000639a0;
      *(undefined4 *)(iVar2 + 0x120) = 0xffffffff;
      iVar1 = (*(code *)puVar5)(local_1c);
      *(int *)(iVar2 + 0x120) = iVar1;
      if (-1 < iVar1) {
        local_24 = 1;
        local_28 = 0;
        (*(code *)PTR_rts_isp_get_color_range_desc_00063910)(iVar1,&local_28);
        *(uint *)(iVar2 + 0x124) = (uint)(local_28 != 0);
        (*(code *)(PTR_LAB_00063270 + 0x3364))(param_1,local_24 != 0);
        uVar4 = (*(code *)(PTR_LAB_00063270 + 0x1930))(param_1);
        (*(code *)PTR_set_h264_bind_isp_flag_00063560)(uVar4,1);
        return 0;
      }
    }
  }
  return 0;
}



// ==== rts_h1encoder_init @ 00033920 size=456

undefined4 rts_h1encoder_init(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  if (param_1 == 0) {
    uVar5 = 0xfffffff6;
  }
  else {
    iVar2 = (*(code *)PTR___rts_calloc_00063a28)
                      (1,0x280,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1764,0x59c);
    puVar1 = PTR_memset_000637dc;
    if (iVar2 == 0) {
      uVar5 = 0xfffffff5;
    }
    else {
      *(undefined4 *)(iVar2 + 0x11c) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0xe0) = 0;
      *(undefined4 *)(iVar2 + 500) = 0;
      *(undefined4 *)(iVar2 + 0x1f8) = 0;
      (*(code *)puVar1)(iVar2 + 0x194,0,0x10);
      puVar1 = PTR_rts_isp_get_hz_0006353c;
      *(undefined4 *)(iVar2 + 0x210) = 0;
      iVar3 = (*(code *)puVar1)();
      if (iVar3 < 500) {
        *(undefined4 *)(iVar2 + 0x218) = 1;
      }
      else {
        *(undefined4 *)(iVar2 + 0x218) = 0;
      }
      puVar1 = PTR_rts_log_000635ec;
      puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1cb4;
      *(undefined4 *)(iVar2 + 0x21c) = 0;
      (*(code *)puVar1)(1,puVar6,*(undefined4 *)(iVar2 + 0x218),0);
      *(undefined4 *)(iVar2 + 0x20c) = 0;
      if (*(int *)(iVar2 + 0x210) != 0) {
        iVar3 = 0;
        do {
          iVar4 = (*(code *)PTR_rts_queue_init_000635dc)();
          *(int *)(iVar2 + iVar3 + 0x1c8) = iVar4;
          if (iVar4 == 0) {
            uVar5 = rts_audio_resample_init();
            return uVar5;
          }
          iVar3 = iVar3 + 4;
        } while (iVar3 != 0xc);
        *(undefined4 *)(iVar2 + 0x1d4) = 0x2800;
        *(undefined4 *)(iVar2 + 0x1d8) = 0x7800;
        *(undefined4 *)(iVar2 + 0x1dc) = 0x14000;
      }
      (*(code *)PTR_rts_av_set_unit_rotation_0006343c)(param_1,*(undefined4 *)(iVar2 + 0x10));
      *(undefined4 *)(iVar2 + 0x120) = 0xffffffff;
      puVar1 = PTR_alloc_h1_ctrl_00063414;
      *(undefined4 *)(iVar2 + 0x124) = 1;
      *(undefined4 *)(iVar2 + 0x204) = 0;
      iVar3 = (*(code *)puVar1)();
      if (iVar3 != 0) {
        (*(code *)PTR_rts_av_obj_set_name_000638e8)
                  (iVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x219c);
        uVar5 = (*(code *)PTR_rts_av_register_attribute_00063788)(param_1,iVar3);
        iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar5);
        if (iVar4 == 0) {
          (*(code *)PTR_set_h1_observer_000638d0)(iVar3,PTR_h1_ctrl_changed_00063914,param_1);
          (*(code *)(PTR_LAB_00063270 + 0x3364))(param_1,1);
          puVar1 = PTR_rts_av_set_unit_priv_0006374c;
          *(int *)(iVar2 + 0x27c) = param_1;
          (*(code *)puVar1)(param_1,iVar2);
          return 0;
        }
        (*(code *)PTR_rts_av_obj_put_00063ab8)();
      }
      uVar5 = 0xffffffe1;
      (*(code *)PTR_rts_av_set_unit_priv_0006374c)(param_1,0);
      (*(code *)(PTR_LAB_00063270 + 0x3830))(iVar2);
    }
  }
  return uVar5;
}



// ==== rts_audio_resample_init @ 00033ae8 size=44

void rts_audio_resample_init(void)

{
  int unaff_gp;
  int in_stack_00000010;
  
  (**(code **)(unaff_gp + -0x7af4))();
  (*(code *)(*(int *)(in_stack_00000010 + -0x7fd0) + 0x3830))();
  return;
}



// ==== rts_audio_resample_free @ 00033b40 size=68

void rts_audio_resample_free(undefined4 param_1)

{
  int unaff_s0;
  undefined4 unaff_s1;
  int in_t9;
  code *pcVar1;
  int in_stack_00000010;
  
  (*(code *)(in_t9 + 0x3364))(param_1,1);
  pcVar1 = *(code **)(in_stack_00000010 + -0x7af4);
  *(undefined4 *)(unaff_s0 + 0x27c) = unaff_s1;
  (*pcVar1)();
  return;
}



// ==== rts_h1encoder_cleanup @ 00033b84 size=116

undefined4 rts_h1encoder_cleanup(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
    if (iVar1 != 0) {
      (*(code *)PTR_rts_av_set_unit_priv_0006374c)(param_1,0);
      uVar2 = (*(code *)(PTR_LAB_00063270 + 0x3830))(iVar1);
      return uVar2;
    }
  }
  return 0xfffffff6;
}



// ==== rts_audio_check_argument @ 00033be0 size=24

void rts_audio_check_argument(void)

{
  (*(code *)(PTR_LAB_00063270 + 0x3830))();
  return;
}



// ==== rts_h1encoder_set_profile @ 00033c10 size=68

/* WARNING: Control flow encountered bad instruction data */

undefined4 rts_h1encoder_set_profile(int param_1,undefined *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1a2c,0x7f4,param_2);
    uVar3 = 0x7f4;
  }
  else {
    if (param_2 != (undefined *)0x0) goto LAB_00033cdc;
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac8;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1a2c,0x7f5,param_2);
    uVar3 = 0x7f5;
  }
  (*(code *)PTR___assert_000637b8)
            (param_2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2188,uVar3,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1a48);
LAB_00033cdc:
  iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
  if (iVar1 == 0) {
    uVar3 = 0xfffffff6;
  }
  else {
    iVar2 = (*(code *)PTR_memcmp_000634cc)(param_2,iVar1 + 0x18,0x14);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = (*(code *)(PTR_LAB_00063270 + 0x1e1c))(param_2);
      iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
      if (iVar2 == 0) {
        (*(code *)PTR_memcpy_00063908)(iVar1 + 0x18,param_2,0x14);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  return uVar3;
}



// ==== rts_audio_set_in_param @ 00033c54 size=140

/* WARNING: Control flow encountered bad instruction data */

undefined4 rts_audio_set_in_param(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_s0;
  int iVar4;
  int unaff_gp;
  int iStack00000010;
  int in_stack_00000018;
  
  iVar4 = unaff_s0 + -0x6c38;
  iStack00000010 = iVar4;
  (**(code **)(unaff_gp + -0x7c54))(param_1,param_2 + -0x6cf0,param_3 + -0x1a2c);
  (**(code **)(in_stack_00000018 + -0x7a88))
            (iVar4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x2188,0x7f4,
             *(int *)(in_stack_00000018 + -0x7fd4) + -0x1a48);
  iVar1 = (**(code **)(in_stack_00000018 + -0x7efc))();
  if (iVar1 == 0) {
    uVar3 = 0xfffffff6;
  }
  else {
    iVar2 = (**(code **)(in_stack_00000018 + -0x7d74))(iVar4,iVar1 + 0x18,0x14);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + 0x1e1c))(iVar4);
      iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar3);
      if (iVar2 == 0) {
        (**(code **)(in_stack_00000018 + -0x7938))(iVar1 + 0x18,iVar4,0x14);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  return uVar3;
}



// ==== rts_audio_set_out_param @ 00033d28 size=128

/* WARNING: Control flow encountered bad instruction data */

void rts_audio_set_out_param(void)

{
  int iVar1;
  int in_stack_00000018;
  
  iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))();
  if (iVar1 == 0) {
    (**(code **)(in_stack_00000018 + -0x7938))();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// ==== rts_h1encoder_run @ 00033df4 size=8

/* WARNING: Control flow encountered bad instruction data */

undefined4 rts_h1encoder_run(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar1 = (*(code *)(PTR_LAB_00063270 + 0x1820))();
  local_24 = 0;
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x1e4) == 0)) {
LAB_000340b4:
    uVar11 = 0xffffffe1;
  }
  else {
    iVar2 = (*(code *)(PTR_LAB_00063270 + 0x1930))(param_1);
    if ((iVar2 == 0) || (iVar2 = (*(code *)PTR_to_h1_roi_map_00063288)(iVar2), iVar2 == 0)) {
      uVar11 = 0xffffffe1;
    }
    else {
      uVar11 = (*(code *)PTR_set_h1_roi_map_000638f4)(iVar2);
      iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar11);
      if (iVar2 == 0) {
        uVar11 = 0;
      }
    }
    iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar11);
    if (iVar2 != 0) {
      return uVar11;
    }
    iVar2 = (*(code *)PTR_rts_queue_empty_00063b60)(**(undefined4 **)(iVar1 + 0x1e4));
    if (iVar2 == 0) {
      if (*(int *)(iVar1 + 0x14) == 0) {
        iVar2 = *(int *)(iVar1 + 0x1e8);
      }
      else {
        iVar2 = *(int *)(iVar1 + 0x1ec);
      }
      if ((iVar2 == 0) &&
         ((*(code *)PTR_rts_av_pop_input_buffer_lk_000635e0)(param_1,&local_24), iVar2 = local_24,
         local_24 != 0)) {
        if (param_1 == 0) {
          puVar10 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
          (*(code *)PTR_rts_log_000635ec)
                    (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + -0x19b8,0x726,puVar10);
          uVar11 = 0x726;
          puVar9 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x19c4;
        }
        else {
          iVar3 = (*(code *)PTR_rts_av_get_unit_priv_00063344)(param_1);
          if (iVar3 == 0) {
            uVar11 = 0xffffffe1;
          }
          else {
            local_38 = 0;
            local_34 = 0;
            local_30 = 0;
            local_2c = 0;
            local_28 = 0;
            (*(code *)PTR_rts_av_get_buffer_profile_0006386c)(iVar2,&local_38);
            uVar11 = 0;
            if (local_38 != 0) {
              if (((local_38 == *(int *)(iVar3 + 0x18)) && (local_34 == *(int *)(iVar3 + 0x1c))) &&
                 (local_30 == *(int *)(iVar3 + 0x20))) {
                if ((local_2c != *(int *)(iVar3 + 0x24)) || (local_28 != *(int *)(iVar3 + 0x28))) {
                  (*(code *)PTR_rts_log_000635ec)
                            (1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1ca0,
                             *(int *)(iVar3 + 0x24),*(int *)(iVar3 + 0x28),local_2c,local_28);
                  (*(code *)PTR_rts_h1encoder_stop_000638a8)(param_1);
                  puVar10 = PTR_LAB_00063270;
                  *(int *)(iVar3 + 0x24) = local_2c;
                  *(int *)(iVar3 + 0x28) = local_28;
                  (*(code *)(puVar10 + 0x1cc4))(iVar3);
                  iVar2 = (*(code *)(PTR_LAB_00063270 + 0x1950))(param_1);
                  if (iVar2 != 0) {
                    if (local_2c == 0) {
                      trap(0x1c00);
                    }
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  (*(code *)(PTR_LAB_00063270 + 0x3760))(iVar3);
                  uVar11 = (*(code *)PTR_rts_h1encoder_start_000634d4)(param_1);
                }
              }
              else {
                uVar11 = 0xffffffb5;
              }
            }
          }
          iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar11);
          if (iVar2 != 0) {
            if (local_24 == 0) {
              return uVar11;
            }
            (*(code *)PTR_rts_av_put_buffer_00063548)();
            return uVar11;
          }
          puVar4 = (undefined4 *)
                   (*(code *)PTR_rts_queue_pop_0006333c)(**(undefined4 **)(iVar1 + 0x1e4));
          if (puVar4 == (undefined4 *)0x0) {
            if (local_24 != 0) {
              (*(code *)PTR_rts_av_put_buffer_00063548)();
            }
            goto LAB_00033ff0;
          }
          iVar2 = *(int *)(iVar1 + 0x14);
          if ((iVar2 == 0) || (*(int *)(iVar1 + 0x1e8) == 0)) {
            *(int *)(iVar1 + 0x1e8) = local_24;
          }
          else {
            *(int *)(iVar1 + 0x1ec) = local_24;
          }
          iVar3 = *(int *)(iVar1 + 0x1e8);
          uVar11 = 0xffffffef;
          if ((iVar3 != 0) && ((iVar2 == 0 || (*(int *)(iVar1 + 0x1ec) != 0)))) {
            iVar12 = *(int *)(iVar1 + 0x18);
            uVar6 = *(uint *)(iVar1 + 0x1c);
            uVar7 = *(uint *)(iVar1 + 0x20);
            if (iVar12 == 3) {
              *(undefined4 *)(iVar1 + 0x13c) = *(undefined4 *)(iVar3 + 0xc);
            }
            else if (iVar12 == 4) {
              iVar3 = *(int *)(iVar3 + 0xc);
              *(int *)(iVar1 + 0x13c) = iVar3;
              iVar3 = uVar7 * uVar6 + iVar3;
              *(int *)(iVar1 + 0x140) = iVar3;
              *(uint *)(iVar1 + 0x144) = (uVar7 >> 1) * (uVar6 >> 1) + iVar3;
            }
            else {
              if (iVar12 != 1) {
                (*(code *)PTR_rts_log_000635ec)
                          (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1c6c,
                           PTR_s_snd_device_0004ffec_0x14_0006326c + -0x19e0,0x53f,iVar12);
                uVar11 = 0xffffffe3;
                goto LAB_00034024;
              }
              iVar3 = *(int *)(iVar3 + 0xc);
              *(int *)(iVar1 + 0x13c) = iVar3;
              *(uint *)(iVar1 + 0x140) = uVar7 * uVar6 + iVar3;
            }
            if (iVar2 != 0) {
              *(undefined4 *)(iVar1 + 0x15c) = *(undefined4 *)(*(int *)(iVar1 + 0x1ec) + 0xc);
            }
            *(undefined4 *)(iVar1 + 0x148) = *(undefined4 *)(iVar1 + 0x1fc);
            if (0 < *(int *)(iVar1 + 0x208)) {
              *(undefined4 *)(iVar1 + 0x1f8) = 0;
              *(undefined4 *)(iVar1 + 0x208) = 0;
            }
            if (*(uint *)(iVar1 + 0xc) == 0) {
              trap(0x1c00);
            }
            if (*(uint *)(iVar1 + 0x1f8) % *(uint *)(iVar1 + 0xc) == 0) {
              *(undefined4 *)(iVar1 + 0x158) = 0;
              *(undefined4 *)(iVar1 + 0x1f8) = 0;
            }
            else {
              *(undefined4 *)(iVar1 + 0x158) = 1;
            }
            puVar10 = PTR_rts_av_set_buffer_offset_000635bc;
            *(undefined4 *)(iVar1 + 0x160) = 3;
            *(undefined4 *)(iVar1 + 0x164) = 1;
            (*(code *)puVar10)(puVar4,0x40);
            *(undefined4 *)(iVar1 + 0x14c) = *puVar4;
            iVar2 = puVar4[1];
            *(undefined4 *)(iVar1 + 0x150) = puVar4[3];
            puVar10 = PTR_H264EncStrmEncode_0006350c;
            *(int *)(iVar1 + 0x154) = iVar2 - *(int *)(iVar1 + 0x9c);
            iVar2 = (*(code *)puVar10)(*(undefined4 *)(iVar1 + 0xe0),iVar1 + 0x13c,iVar1 + 0x16c,0,0
                                      );
            if (iVar2 == 1) {
              if (*(int *)(iVar1 + 0x16c) == 0) {
                (*(code *)PTR_rts_av_set_buffer_offset_000635bc)
                          (puVar4,0x40 - *(int *)(iVar1 + 0x9c));
                (*(code *)PTR_memcpy_00063908)(*puVar4,iVar1 + 0xa0,*(undefined4 *)(iVar1 + 0x9c));
                puVar4[2] = *(int *)(iVar1 + 0x9c) + *(int *)(iVar1 + 0x170);
                uVar6 = puVar4[4] | 1;
              }
              else {
                puVar4[2] = *(undefined4 *)(iVar1 + 0x170);
                uVar6 = puVar4[4] & 0xfffffffe;
              }
              puVar4[4] = uVar6;
              uVar11 = 0;
              *(int *)(iVar1 + 0x1f8) = *(int *)(iVar1 + 0x1f8) + 1;
              *(undefined4 *)(iVar1 + 0x1fc) = 1;
              uVar13 = *(undefined4 *)(*(int *)(iVar1 + 0x1e8) + 0x28);
              puVar4[0xb] = *(undefined4 *)(*(int *)(iVar1 + 0x1e8) + 0x2c);
              puVar4[10] = uVar13;
            }
            else {
              (*(code *)PTR_rts_log_000635ec)
                        (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1c44,
                         PTR_s_snd_device_0004ffec_0x14_0006326c + -0x19e0,0x56d,iVar2);
              uVar11 = 0xffffffef;
            }
            if (*(int *)(iVar1 + 0x1e8) != 0) {
              (*(code *)PTR_rts_av_put_buffer_00063548)();
            }
            *(undefined4 *)(iVar1 + 0x1e8) = 0;
            if (*(int *)(iVar1 + 0x14) != 0) {
              uVar13 = *(undefined4 *)(iVar1 + 0x1ec);
              *(undefined4 *)(iVar1 + 0x1ec) = 0;
              *(undefined4 *)(iVar1 + 0x1e8) = uVar13;
            }
          }
LAB_00034024:
          iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar11);
          if (iVar2 != 0) {
LAB_00034654:
            (*(code *)PTR_rts_av_put_buffer_00063548)(puVar4);
            return uVar11;
          }
          if (*(int *)(iVar1 + 0x210) == 0) {
            (*(code *)PTR_rts_av_push_back_output_buffer_lk_00063a0c)(param_1,puVar4);
            goto LAB_00034654;
          }
          if (puVar4[2] == 0) {
            (*(code *)PTR_rts_log_000635ec)
                      (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                       PTR_s_snd_device_0004ffec_0x14_0006326c + -0x19f8,0x777,
                       PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1c10);
          }
          uVar6 = puVar4[2];
          iVar3 = 0;
          iVar2 = iVar1;
          if (uVar6 != 0) {
            do {
              if ((uVar6 <= *(uint *)(iVar2 + 0x1d4)) &&
                 (iVar12 = (*(code *)PTR_rts_queue_empty_00063b60)(*(undefined4 *)(iVar2 + 0x1c8)),
                 iVar12 == 0)) {
                puVar5 = (undefined4 *)
                         (*(code *)PTR_rts_queue_pop_0006333c)
                                   (*(undefined4 *)(iVar1 + (iVar3 + 0x72) * 4));
                goto LAB_00034564;
              }
              iVar3 = iVar3 + 1;
              iVar2 = iVar2 + 4;
            } while (iVar3 != 3);
            puVar5 = (undefined4 *)
                     (*(code *)PTR_rts_av_create_auto_recycle_buffer_000632e8)
                               (iVar1 + 0x214,uVar6 + 0x1f);
            (*(code *)(PTR_LAB_00063270 + 0x265c))(puVar5);
LAB_00034564:
            if (puVar5 == (undefined4 *)0x0) {
              uVar11 = 0xfffffff5;
              (*(code *)PTR_rts_log_000635ec)
                        (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1c00,
                         PTR_s_snd_device_0004ffec_0x14_0006326c + -0x19f8,0x77b);
            }
            else {
              if ((puVar4[4] & 1) == 0) {
                uVar6 = puVar5[4] & 0xfffffffe;
              }
              else {
                uVar6 = puVar5[4] | 1;
              }
              puVar5[4] = uVar6;
              uVar11 = 0;
              uVar13 = puVar4[0xb];
              puVar5[5] = puVar4[5];
              uVar14 = puVar4[10];
              uVar8 = puVar4[2];
              puVar5[0xb] = uVar13;
              puVar10 = PTR_rts_memcpy_000636c0;
              uVar13 = *puVar4;
              puVar5[10] = uVar14;
              (*(code *)puVar10)(*puVar5,uVar13,uVar8);
              puVar10 = PTR_rts_av_push_back_output_buffer_lk_00063a0c;
              puVar5[2] = puVar4[2];
              (*(code *)puVar10)(param_1,puVar5);
              (*(code *)PTR_rts_av_put_buffer_00063548)(puVar5);
              (*(code *)PTR_rts_get_monotonic_raw_time_0006355c)();
              (*(code *)PTR_rts_av_set_buffer_ts_00063850)(puVar4);
            }
            goto LAB_00034654;
          }
          uVar11 = 0x777;
          puVar10 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1c10;
          puVar9 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1a10;
        }
        (*(code *)PTR___assert_000637b8)
                  (puVar10,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2188,uVar11,puVar9);
        goto LAB_000340b4;
      }
    }
LAB_00033ff0:
    uVar11 = 0xffffffef;
  }
  return uVar11;
}



// ==== rts_audio_get_outsize @ 00033dfc size=216

/* WARNING: Control flow encountered bad instruction data */

undefined4 rts_audio_get_outsize(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int in_t9;
  code *pcVar13;
  int unaff_gp;
  int iVar14;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int local_24;
  
  iVar14 = unaff_gp + in_t9;
  iVar1 = (*(code *)(*(int *)(iVar14 + -0x7fd0) + 0x1820))();
  local_24 = 0;
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x1e4) == 0)) {
LAB_000340b4:
    uVar9 = 0xffffffe1;
  }
  else {
    iVar2 = (*(code *)(*(int *)(iVar14 + -0x7fd0) + 0x1930))(param_1);
    if ((iVar2 == 0) || (iVar2 = (**(code **)(iVar14 + -0x7fb8))(iVar2), iVar2 == 0)) {
      uVar9 = 0xffffffe1;
    }
    else {
      uVar9 = (**(code **)(iVar14 + -0x794c))(iVar2);
      iVar2 = (**(code **)(iVar14 + -0x7ec0))(uVar9);
      if (iVar2 == 0) {
        uVar9 = 0;
      }
    }
    iVar2 = (**(code **)(iVar14 + -0x7ec0))(uVar9);
    if (iVar2 != 0) {
      return uVar9;
    }
    iVar2 = (**(code **)(iVar14 + -0x76e0))(**(undefined4 **)(iVar1 + 0x1e4));
    if (iVar2 == 0) {
      if (*(int *)(iVar1 + 0x14) == 0) {
        iVar2 = *(int *)(iVar1 + 0x1e8);
      }
      else {
        iVar2 = *(int *)(iVar1 + 0x1ec);
      }
      if ((iVar2 == 0) &&
         ((**(code **)(iVar14 + -0x7c60))(param_1,&local_24), iVar2 = local_24, local_24 != 0)) {
        if (param_1 == 0) {
          iVar1 = *(int *)(iVar14 + -0x7fd4) + -0x6c38;
          (**(code **)(iVar14 + -0x7c54))
                    (4,*(int *)(iVar14 + -0x7fd4) + -0x6cf0,*(int *)(iVar14 + -0x7fd4) + -0x19b8,
                     0x726,iVar1);
          uVar9 = 0x726;
          iVar2 = *(int *)(iVar14 + -0x7fd4);
          iVar8 = *(int *)(iVar14 + -0x7fd4) + -0x19c4;
        }
        else {
          iVar8 = (**(code **)(iVar14 + -0x7efc))(param_1);
          if (iVar8 == 0) {
            uVar9 = 0xffffffe1;
LAB_00033fac:
            pcVar13 = *(code **)(iVar14 + -0x7ec0);
          }
          else {
            iStack_38 = 0;
            iStack_34 = 0;
            iStack_30 = 0;
            iStack_2c = 0;
            iStack_28 = 0;
            (**(code **)(iVar14 + -0x79d4))(iVar2,&iStack_38);
            uVar9 = 0;
            if (iStack_38 == 0) goto LAB_00033fac;
            if (((iStack_38 != *(int *)(iVar8 + 0x18)) || (iStack_34 != *(int *)(iVar8 + 0x1c))) ||
               (iStack_30 != *(int *)(iVar8 + 0x20))) {
              uVar9 = 0xffffffb5;
              goto LAB_00033fac;
            }
            if ((iStack_2c != *(int *)(iVar8 + 0x24)) ||
               (pcVar13 = *(code **)(iVar14 + -0x7ec0), iStack_28 != *(int *)(iVar8 + 0x28))) {
              (**(code **)(iVar14 + -0x7c54))
                        (1,*(int *)(iVar14 + -0x7fd4) + -0x1ca0,*(int *)(iVar8 + 0x24),
                         *(int *)(iVar8 + 0x28),iStack_2c,iStack_28);
              (**(code **)(iVar14 + -0x7998))(param_1);
              iVar2 = *(int *)(iVar14 + -0x7fd0);
              *(int *)(iVar8 + 0x24) = iStack_2c;
              *(int *)(iVar8 + 0x28) = iStack_28;
              (*(code *)(iVar2 + 0x1cc4))(iVar8);
              iVar2 = (*(code *)(*(int *)(iVar14 + -0x7fd0) + 0x1950))(param_1);
              if (iVar2 != 0) {
                if (iStack_2c == 0) {
                  trap(0x1c00);
                }
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              (*(code *)(*(int *)(iVar14 + -0x7fd0) + 0x3760))(iVar8);
              uVar9 = (**(code **)(iVar14 + -0x7d6c))(param_1);
              goto LAB_00033fac;
            }
          }
          iVar2 = (*pcVar13)(uVar9);
          if (iVar2 != 0) {
            if (local_24 == 0) {
              return uVar9;
            }
            (**(code **)(iVar14 + -0x7cf8))();
            return uVar9;
          }
          puVar3 = (undefined4 *)(**(code **)(iVar14 + -0x7f04))(**(undefined4 **)(iVar1 + 0x1e4));
          if (puVar3 == (undefined4 *)0x0) {
            if (local_24 != 0) {
              (**(code **)(iVar14 + -0x7cf8))();
            }
            goto LAB_00033ff0;
          }
          iVar2 = *(int *)(iVar1 + 0x14);
          if ((iVar2 == 0) || (*(int *)(iVar1 + 0x1e8) == 0)) {
            *(int *)(iVar1 + 0x1e8) = local_24;
          }
          else {
            *(int *)(iVar1 + 0x1ec) = local_24;
          }
          iVar8 = *(int *)(iVar1 + 0x1e8);
          uVar9 = 0xffffffef;
          if (iVar8 == 0) {
LAB_00034020:
            pcVar13 = *(code **)(iVar14 + -0x7ec0);
          }
          else if ((iVar2 == 0) ||
                  (pcVar13 = *(code **)(iVar14 + -0x7ec0), *(int *)(iVar1 + 0x1ec) != 0)) {
            iVar10 = *(int *)(iVar1 + 0x18);
            uVar5 = *(uint *)(iVar1 + 0x1c);
            uVar6 = *(uint *)(iVar1 + 0x20);
            if (iVar10 == 3) {
              *(undefined4 *)(iVar1 + 0x13c) = *(undefined4 *)(iVar8 + 0xc);
            }
            else if (iVar10 == 4) {
              iVar8 = *(int *)(iVar8 + 0xc);
              *(int *)(iVar1 + 0x13c) = iVar8;
              iVar8 = uVar6 * uVar5 + iVar8;
              *(int *)(iVar1 + 0x140) = iVar8;
              *(uint *)(iVar1 + 0x144) = (uVar6 >> 1) * (uVar5 >> 1) + iVar8;
            }
            else {
              if (iVar10 != 1) {
                (**(code **)(iVar14 + -0x7c54))
                          (4,*(int *)(iVar14 + -0x7fd4) + -0x1c6c,
                           *(int *)(iVar14 + -0x7fd4) + -0x19e0,0x53f,iVar10);
                uVar9 = 0xffffffe3;
                goto LAB_00034020;
              }
              iVar8 = *(int *)(iVar8 + 0xc);
              *(int *)(iVar1 + 0x13c) = iVar8;
              *(uint *)(iVar1 + 0x140) = uVar6 * uVar5 + iVar8;
            }
            if (iVar2 != 0) {
              *(undefined4 *)(iVar1 + 0x15c) = *(undefined4 *)(*(int *)(iVar1 + 0x1ec) + 0xc);
            }
            *(undefined4 *)(iVar1 + 0x148) = *(undefined4 *)(iVar1 + 0x1fc);
            if (0 < *(int *)(iVar1 + 0x208)) {
              *(undefined4 *)(iVar1 + 0x1f8) = 0;
              *(undefined4 *)(iVar1 + 0x208) = 0;
            }
            if (*(uint *)(iVar1 + 0xc) == 0) {
              trap(0x1c00);
            }
            if (*(uint *)(iVar1 + 0x1f8) % *(uint *)(iVar1 + 0xc) == 0) {
              *(undefined4 *)(iVar1 + 0x158) = 0;
              *(undefined4 *)(iVar1 + 0x1f8) = 0;
            }
            else {
              *(undefined4 *)(iVar1 + 0x158) = 1;
            }
            pcVar13 = *(code **)(iVar14 + -0x7c84);
            *(undefined4 *)(iVar1 + 0x160) = 3;
            *(undefined4 *)(iVar1 + 0x164) = 1;
            (*pcVar13)(puVar3,0x40);
            *(undefined4 *)(iVar1 + 0x14c) = *puVar3;
            iVar2 = puVar3[1];
            *(undefined4 *)(iVar1 + 0x150) = puVar3[3];
            pcVar13 = *(code **)(iVar14 + -0x7d34);
            *(int *)(iVar1 + 0x154) = iVar2 - *(int *)(iVar1 + 0x9c);
            iVar2 = (*pcVar13)(*(undefined4 *)(iVar1 + 0xe0),iVar1 + 0x13c,iVar1 + 0x16c,0,0);
            if (iVar2 == 1) {
              if (*(int *)(iVar1 + 0x16c) == 0) {
                (**(code **)(iVar14 + -0x7c84))(puVar3,0x40 - *(int *)(iVar1 + 0x9c));
                (**(code **)(iVar14 + -0x7938))(*puVar3,iVar1 + 0xa0,*(undefined4 *)(iVar1 + 0x9c));
                puVar3[2] = *(int *)(iVar1 + 0x9c) + *(int *)(iVar1 + 0x170);
                uVar5 = puVar3[4] | 1;
              }
              else {
                puVar3[2] = *(undefined4 *)(iVar1 + 0x170);
                uVar5 = puVar3[4] & 0xfffffffe;
              }
              puVar3[4] = uVar5;
              uVar9 = 0;
              *(int *)(iVar1 + 0x1f8) = *(int *)(iVar1 + 0x1f8) + 1;
              *(undefined4 *)(iVar1 + 0x1fc) = 1;
              uVar11 = *(undefined4 *)(*(int *)(iVar1 + 0x1e8) + 0x28);
              puVar3[0xb] = *(undefined4 *)(*(int *)(iVar1 + 0x1e8) + 0x2c);
              puVar3[10] = uVar11;
            }
            else {
              (**(code **)(iVar14 + -0x7c54))
                        (4,*(int *)(iVar14 + -0x7fd4) + -0x1c44,*(int *)(iVar14 + -0x7fd4) + -0x19e0
                         ,0x56d,iVar2);
              uVar9 = 0xffffffef;
            }
            if (*(int *)(iVar1 + 0x1e8) != 0) {
              (**(code **)(iVar14 + -0x7cf8))();
            }
            *(undefined4 *)(iVar1 + 0x1e8) = 0;
            if (*(int *)(iVar1 + 0x14) != 0) {
              uVar11 = *(undefined4 *)(iVar1 + 0x1ec);
              *(undefined4 *)(iVar1 + 0x1ec) = 0;
              *(undefined4 *)(iVar1 + 0x1e8) = uVar11;
            }
            goto LAB_00034020;
          }
          iVar2 = (*pcVar13)(uVar9);
          if (iVar2 != 0) {
LAB_00034654:
            (**(code **)(iVar14 + -0x7cf8))(puVar3);
            return uVar9;
          }
          if (*(int *)(iVar1 + 0x210) == 0) {
            (**(code **)(iVar14 + -0x7834))(param_1,puVar3);
            goto LAB_00034654;
          }
          if (puVar3[2] == 0) {
            (**(code **)(iVar14 + -0x7c54))
                      (4,*(int *)(iVar14 + -0x7fd4) + -0x6cf0,*(int *)(iVar14 + -0x7fd4) + -0x19f8,
                       0x777,*(int *)(iVar14 + -0x7fd4) + -0x1c10);
          }
          uVar5 = puVar3[2];
          iVar8 = 0;
          iVar2 = iVar1;
          if (uVar5 != 0) {
            do {
              if ((uVar5 <= *(uint *)(iVar2 + 0x1d4)) &&
                 (iVar10 = (**(code **)(iVar14 + -0x76e0))(*(undefined4 *)(iVar2 + 0x1c8)),
                 iVar10 == 0)) {
                puVar4 = (undefined4 *)
                         (**(code **)(iVar14 + -0x7f04))
                                   (*(undefined4 *)(iVar1 + (iVar8 + 0x72) * 4));
                goto LAB_00034564;
              }
              iVar8 = iVar8 + 1;
              iVar2 = iVar2 + 4;
            } while (iVar8 != 3);
            puVar4 = (undefined4 *)(**(code **)(iVar14 + -0x7f58))(iVar1 + 0x214,uVar5 + 0x1f);
            (*(code *)(*(int *)(iVar14 + -0x7fd0) + 0x265c))(puVar4);
LAB_00034564:
            if (puVar4 == (undefined4 *)0x0) {
              uVar9 = 0xfffffff5;
              (**(code **)(iVar14 + -0x7c54))
                        (4,*(int *)(iVar14 + -0x7fd4) + -0x1c00,*(int *)(iVar14 + -0x7fd4) + -0x19f8
                         ,0x77b);
            }
            else {
              if ((puVar3[4] & 1) == 0) {
                uVar5 = puVar4[4] & 0xfffffffe;
              }
              else {
                uVar5 = puVar4[4] | 1;
              }
              puVar4[4] = uVar5;
              uVar9 = 0;
              uVar11 = puVar3[0xb];
              puVar4[5] = puVar3[5];
              uVar12 = puVar3[10];
              uVar7 = puVar3[2];
              puVar4[0xb] = uVar11;
              pcVar13 = *(code **)(iVar14 + -0x7b80);
              uVar11 = *puVar3;
              puVar4[10] = uVar12;
              (*pcVar13)(*puVar4,uVar11,uVar7);
              pcVar13 = *(code **)(iVar14 + -0x7834);
              puVar4[2] = puVar3[2];
              (*pcVar13)(param_1,puVar4);
              (**(code **)(iVar14 + -0x7cf8))(puVar4);
              (**(code **)(iVar14 + -0x7ce4))();
              (**(code **)(iVar14 + -0x79f0))(puVar3);
            }
            goto LAB_00034654;
          }
          uVar9 = 0x777;
          iVar2 = *(int *)(iVar14 + -0x7fd4);
          iVar1 = *(int *)(iVar14 + -0x7fd4) + -0x1c10;
          iVar8 = *(int *)(iVar14 + -0x7fd4) + -0x1a10;
        }
        (**(code **)(iVar14 + -0x7a88))(iVar1,iVar2 + -0x2188,uVar9,iVar8);
        goto LAB_000340b4;
      }
    }
LAB_00033ff0:
    uVar9 = 0xffffffef;
  }
  return uVar9;
}



// ==== rts_audio_resample_process @ 00033ed4 size=1860

/* WARNING: Control flow encountered bad instruction data */

undefined4 rts_audio_resample_process(void)

{
  int in_v0;
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int unaff_s0;
  int unaff_s2;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  code *pcVar12;
  int unaff_gp;
  int in_stack_00000018;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  
  if (in_v0 != 0) {
    return 0xffffffef;
  }
  if (*(int *)(unaff_s0 + 0x14) == 0) {
    iVar9 = *(int *)(unaff_s0 + 0x1e8);
  }
  else {
    iVar9 = *(int *)(unaff_s0 + 0x1ec);
  }
  if (iVar9 != 0) {
    return 0xffffffef;
  }
  (**(code **)(unaff_gp + -0x7c60))();
  iVar9 = in_stack_00000034;
  if (in_stack_00000034 == 0) {
    return 0xffffffef;
  }
  if (unaff_s2 == 0) {
    iVar9 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x6c38;
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x6cf0,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x19b8,0x726);
    uVar6 = 0x726;
    iVar4 = *(int *)(in_stack_00000018 + -0x7fd4);
    iVar8 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x19c4;
    goto LAB_000340a8;
  }
  iVar4 = (**(code **)(in_stack_00000018 + -0x7efc))();
  if (iVar4 == 0) {
    uVar6 = 0xffffffe1;
LAB_00033fac:
    pcVar12 = *(code **)(in_stack_00000018 + -0x7ec0);
  }
  else {
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
    in_stack_00000028 = 0;
    in_stack_0000002c = 0;
    in_stack_00000030 = 0;
    (**(code **)(in_stack_00000018 + -0x79d4))(iVar9,&stack0x00000020);
    uVar6 = 0;
    if (in_stack_00000020 == 0) goto LAB_00033fac;
    if (((in_stack_00000020 != *(int *)(iVar4 + 0x18)) ||
        (in_stack_00000024 != *(int *)(iVar4 + 0x1c))) ||
       (in_stack_00000028 != *(int *)(iVar4 + 0x20))) {
      uVar6 = 0xffffffb5;
      goto LAB_00033fac;
    }
    if ((in_stack_0000002c != *(int *)(iVar4 + 0x24)) ||
       (pcVar12 = *(code **)(in_stack_00000018 + -0x7ec0),
       in_stack_00000030 != *(int *)(iVar4 + 0x28))) {
      (**(code **)(in_stack_00000018 + -0x7c54))(1,*(int *)(in_stack_00000018 + -0x7fd4) + -0x1ca0);
      (**(code **)(in_stack_00000018 + -0x7998))();
      iVar9 = *(int *)(in_stack_00000018 + -0x7fd0);
      *(int *)(iVar4 + 0x24) = in_stack_0000002c;
      *(int *)(iVar4 + 0x28) = in_stack_00000030;
      (*(code *)(iVar9 + 0x1cc4))(iVar4);
      iVar9 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + 0x1950))();
      if (iVar9 != 0) {
        if (in_stack_0000002c == 0) {
          trap(0x1c00);
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + 0x3760))(iVar4);
      uVar6 = (**(code **)(in_stack_00000018 + -0x7d6c))();
      goto LAB_00033fac;
    }
  }
  iVar9 = (*pcVar12)(uVar6);
  if (iVar9 != 0) {
    if (in_stack_00000034 != 0) {
      (**(code **)(in_stack_00000018 + -0x7cf8))();
      return uVar6;
    }
    return uVar6;
  }
  puVar1 = (undefined4 *)
           (**(code **)(in_stack_00000018 + -0x7f04))(**(undefined4 **)(unaff_s0 + 0x1e4));
  if (puVar1 == (undefined4 *)0x0) {
    if (in_stack_00000034 != 0) {
      (**(code **)(in_stack_00000018 + -0x7cf8))();
    }
    return 0xffffffef;
  }
  iVar9 = *(int *)(unaff_s0 + 0x14);
  if ((iVar9 == 0) || (*(int *)(unaff_s0 + 0x1e8) == 0)) {
    *(int *)(unaff_s0 + 0x1e8) = in_stack_00000034;
  }
  else {
    *(int *)(unaff_s0 + 0x1ec) = in_stack_00000034;
  }
  iVar4 = *(int *)(unaff_s0 + 0x1e8);
  uVar6 = 0xffffffef;
  if (iVar4 == 0) {
LAB_00034020:
    pcVar12 = *(code **)(in_stack_00000018 + -0x7ec0);
  }
  else if ((iVar9 == 0) ||
          (pcVar12 = *(code **)(in_stack_00000018 + -0x7ec0), *(int *)(unaff_s0 + 0x1ec) != 0)) {
    iVar8 = *(int *)(unaff_s0 + 0x18);
    uVar3 = *(uint *)(unaff_s0 + 0x1c);
    uVar5 = *(uint *)(unaff_s0 + 0x20);
    if (iVar8 == 3) {
      *(undefined4 *)(unaff_s0 + 0x13c) = *(undefined4 *)(iVar4 + 0xc);
    }
    else if (iVar8 == 4) {
      iVar4 = *(int *)(iVar4 + 0xc);
      *(int *)(unaff_s0 + 0x13c) = iVar4;
      iVar4 = uVar5 * uVar3 + iVar4;
      *(int *)(unaff_s0 + 0x140) = iVar4;
      *(uint *)(unaff_s0 + 0x144) = (uVar5 >> 1) * (uVar3 >> 1) + iVar4;
    }
    else {
      if (iVar8 != 1) {
        (**(code **)(in_stack_00000018 + -0x7c54))
                  (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x1c6c,
                   *(int *)(in_stack_00000018 + -0x7fd4) + -0x19e0,0x53f);
        uVar6 = 0xffffffe3;
        goto LAB_00034020;
      }
      iVar4 = *(int *)(iVar4 + 0xc);
      *(int *)(unaff_s0 + 0x13c) = iVar4;
      *(uint *)(unaff_s0 + 0x140) = uVar5 * uVar3 + iVar4;
    }
    if (iVar9 != 0) {
      *(undefined4 *)(unaff_s0 + 0x15c) = *(undefined4 *)(*(int *)(unaff_s0 + 0x1ec) + 0xc);
    }
    *(undefined4 *)(unaff_s0 + 0x148) = *(undefined4 *)(unaff_s0 + 0x1fc);
    if (0 < *(int *)(unaff_s0 + 0x208)) {
      *(undefined4 *)(unaff_s0 + 0x1f8) = 0;
      *(undefined4 *)(unaff_s0 + 0x208) = 0;
    }
    if (*(uint *)(unaff_s0 + 0xc) == 0) {
      trap(0x1c00);
    }
    if (*(uint *)(unaff_s0 + 0x1f8) % *(uint *)(unaff_s0 + 0xc) == 0) {
      *(undefined4 *)(unaff_s0 + 0x158) = 0;
      *(undefined4 *)(unaff_s0 + 0x1f8) = 0;
    }
    else {
      *(undefined4 *)(unaff_s0 + 0x158) = 1;
    }
    pcVar12 = *(code **)(in_stack_00000018 + -0x7c84);
    *(undefined4 *)(unaff_s0 + 0x160) = 3;
    *(undefined4 *)(unaff_s0 + 0x164) = 1;
    (*pcVar12)(puVar1,0x40);
    *(undefined4 *)(unaff_s0 + 0x14c) = *puVar1;
    iVar9 = puVar1[1];
    *(undefined4 *)(unaff_s0 + 0x150) = puVar1[3];
    pcVar12 = *(code **)(in_stack_00000018 + -0x7d34);
    *(int *)(unaff_s0 + 0x154) = iVar9 - *(int *)(unaff_s0 + 0x9c);
    iVar9 = (*pcVar12)(*(undefined4 *)(unaff_s0 + 0xe0),unaff_s0 + 0x13c,unaff_s0 + 0x16c,0);
    if (iVar9 == 1) {
      if (*(int *)(unaff_s0 + 0x16c) == 0) {
        (**(code **)(in_stack_00000018 + -0x7c84))(puVar1,0x40 - *(int *)(unaff_s0 + 0x9c));
        (**(code **)(in_stack_00000018 + -0x7938))
                  (*puVar1,unaff_s0 + 0xa0,*(undefined4 *)(unaff_s0 + 0x9c));
        puVar1[2] = *(int *)(unaff_s0 + 0x9c) + *(int *)(unaff_s0 + 0x170);
        uVar3 = puVar1[4] | 1;
      }
      else {
        puVar1[2] = *(undefined4 *)(unaff_s0 + 0x170);
        uVar3 = puVar1[4] & 0xfffffffe;
      }
      puVar1[4] = uVar3;
      uVar6 = 0;
      *(int *)(unaff_s0 + 0x1f8) = *(int *)(unaff_s0 + 0x1f8) + 1;
      *(undefined4 *)(unaff_s0 + 0x1fc) = 1;
      uVar10 = *(undefined4 *)(*(int *)(unaff_s0 + 0x1e8) + 0x28);
      puVar1[0xb] = *(undefined4 *)(*(int *)(unaff_s0 + 0x1e8) + 0x2c);
      puVar1[10] = uVar10;
    }
    else {
      (**(code **)(in_stack_00000018 + -0x7c54))
                (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x1c44,
                 *(int *)(in_stack_00000018 + -0x7fd4) + -0x19e0,0x56d);
      uVar6 = 0xffffffef;
    }
    if (*(int *)(unaff_s0 + 0x1e8) != 0) {
      (**(code **)(in_stack_00000018 + -0x7cf8))();
    }
    *(undefined4 *)(unaff_s0 + 0x1e8) = 0;
    if (*(int *)(unaff_s0 + 0x14) != 0) {
      uVar10 = *(undefined4 *)(unaff_s0 + 0x1ec);
      *(undefined4 *)(unaff_s0 + 0x1ec) = 0;
      *(undefined4 *)(unaff_s0 + 0x1e8) = uVar10;
    }
    goto LAB_00034020;
  }
  iVar9 = (*pcVar12)(uVar6);
  if (iVar9 == 0) {
    if (*(int *)(unaff_s0 + 0x210) == 0) {
      (**(code **)(in_stack_00000018 + -0x7834))();
    }
    else {
      if (puVar1[2] == 0) {
        (**(code **)(in_stack_00000018 + -0x7c54))
                  (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x6cf0,
                   *(int *)(in_stack_00000018 + -0x7fd4) + -0x19f8,0x777);
      }
      uVar3 = puVar1[2];
      iVar4 = 0;
      iVar9 = unaff_s0;
      if (uVar3 == 0) {
        uVar6 = 0x777;
        iVar4 = *(int *)(in_stack_00000018 + -0x7fd4);
        iVar9 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x1c10;
        iVar8 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x1a10;
LAB_000340a8:
        (**(code **)(in_stack_00000018 + -0x7a88))(iVar9,iVar4 + -0x2188,uVar6,iVar8);
        return 0xffffffe1;
      }
      do {
        if ((uVar3 <= *(uint *)(iVar9 + 0x1d4)) &&
           (iVar8 = (**(code **)(in_stack_00000018 + -0x76e0))(*(undefined4 *)(iVar9 + 0x1c8)),
           iVar8 == 0)) {
          puVar2 = (undefined4 *)
                   (**(code **)(in_stack_00000018 + -0x7f04))
                             (*(undefined4 *)(unaff_s0 + (iVar4 + 0x72) * 4));
          goto LAB_00034564;
        }
        iVar4 = iVar4 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar4 != 3);
      puVar2 = (undefined4 *)
               (**(code **)(in_stack_00000018 + -0x7f58))(unaff_s0 + 0x214,uVar3 + 0x1f);
      (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + 0x265c))(puVar2);
LAB_00034564:
      if (puVar2 == (undefined4 *)0x0) {
        uVar6 = 0xfffffff5;
        (**(code **)(in_stack_00000018 + -0x7c54))
                  (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x1c00,
                   *(int *)(in_stack_00000018 + -0x7fd4) + -0x19f8,0x77b);
      }
      else {
        if ((puVar1[4] & 1) == 0) {
          uVar3 = puVar2[4] & 0xfffffffe;
        }
        else {
          uVar3 = puVar2[4] | 1;
        }
        puVar2[4] = uVar3;
        uVar6 = 0;
        uVar10 = puVar1[0xb];
        puVar2[5] = puVar1[5];
        uVar11 = puVar1[10];
        uVar7 = puVar1[2];
        puVar2[0xb] = uVar10;
        pcVar12 = *(code **)(in_stack_00000018 + -0x7b80);
        uVar10 = *puVar1;
        puVar2[10] = uVar11;
        (*pcVar12)(*puVar2,uVar10,uVar7);
        pcVar12 = *(code **)(in_stack_00000018 + -0x7834);
        puVar2[2] = puVar1[2];
        (*pcVar12)();
        (**(code **)(in_stack_00000018 + -0x7cf8))(puVar2);
        (**(code **)(in_stack_00000018 + -0x7ce4))();
        (**(code **)(in_stack_00000018 + -0x79f0))(puVar1);
      }
    }
  }
  (**(code **)(in_stack_00000018 + -0x7cf8))(puVar1);
  return uVar6;
}



// ==== rts_h1encoder_pre_disconnect @ 00034690 size=244

undefined4 rts_h1encoder_pre_disconnect(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  if (param_1 == 0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x17ec,0x64f,puVar3);
    (*(code *)PTR___assert_000637b8)
              (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2188,0x64f,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x180c);
  }
  iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
  if (iVar1 == 0) {
    uVar2 = 0xfffffff6;
  }
  else {
    uVar2 = (*(code *)(PTR_LAB_00063270 + 0x1930))(param_1);
    (*(code *)PTR_set_h264_bind_isp_flag_00063560)(uVar2,0);
    if (-1 < *(int *)(iVar1 + 0x120)) {
      (*(code *)PTR_rts_isp_v4l2_close_0006389c)();
    }
    uVar2 = 0;
    *(undefined4 *)(iVar1 + 0x120) = 0xffffffff;
  }
  return uVar2;
}



// ==== rts_h1encoder_alloc_buffer @ 0003559c size=28

undefined4 rts_h1encoder_alloc_buffer(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  code *pcVar5;
  
  pcVar5 = (code *)PTR_rts_av_get_unit_priv_00063344;
  if (param_1 == 0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1828,0x67b,puVar4);
    pcVar5 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2188,0x67b,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1844);
  }
  iVar1 = (*pcVar5)();
  if (iVar1 == 0) {
    uVar2 = 0xffffffe1;
  }
  else {
    uVar2 = (*(code *)(PTR_LAB_00063270 + 0x1e1c))(iVar1 + 0x18);
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
    if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00035690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)PTR___alloc_h1_buffer_000638e4)(iVar1);
      return uVar2;
    }
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1ac8,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1828,0x683);
  }
  return uVar2;
}



// ==== rts_h1encoder_free_buffer @ 000357c8 size=172

undefined4 rts_h1encoder_free_buffer(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  code *pcVar4;
  
  pcVar4 = (code *)PTR_rts_av_get_unit_priv_00063344;
  if (param_1 == 0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1888,0x68e,puVar3);
    pcVar4 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2188,0x68e,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x18a4);
  }
  iVar1 = (*pcVar4)();
  if (iVar1 == 0) {
    uVar2 = 0xffffffe1;
  }
  else {
    (*(code *)PTR___free_h1_buffer_00063570)(iVar1);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== rts_h1encoder_get_h264_info @ 00035874 size=4

undefined4 rts_h1encoder_get_h264_info(int param_1,uint *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  puVar1 = PTR_memset_000637dc;
  uVar3 = *(uint *)(param_1 + 0x9c);
  if ((int)uVar3 < 1) {
    uVar2 = 0xffffffef;
  }
  else {
    if (0x40 < uVar3) {
      uVar3 = 0x40;
    }
    *param_2 = uVar3;
    (*(code *)puVar1)(param_2 + 1,0,0x40);
    (*(code *)PTR_memcpy_00063908)(param_2 + 1,param_1 + 0xa0,*param_2);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== rts_h1encoder_exec_cmd @ 0003590c size=604

undefined4 rts_h1encoder_exec_cmd(int param_1,uint *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  
  if ((param_1 == 0) || (param_2 == (uint *)0x0)) {
    return 0xfffffff6;
  }
  iVar2 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
  puVar1 = PTR_memcpy_00063908;
  if (iVar2 == 0) {
    return 0xffffffe1;
  }
  uVar6 = *param_2;
  if (uVar6 == 0x2d037672) {
    iVar2 = (*(code *)(PTR_LAB_00063270 + 0x1950))(param_1);
    if (iVar2 == 0) {
      return 0xffffffe1;
    }
    uVar3 = (*(code *)PTR_rts_av_get_h264_ctrl_00063694)(iVar2);
    iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
    if (iVar4 == 0) {
      uVar6 = 3;
      if ((*(int *)(iVar2 + 0x44) == 0) && (uVar6 = 2, *(int *)(iVar2 + 0x3c) == 0)) {
        uVar6 = 1;
      }
      param_2[1] = uVar6;
      return 0;
    }
    return uVar3;
  }
  if (uVar6 < 0x2d037673) {
    if (uVar6 == 0x2a037672) {
      *(undefined4 *)(iVar2 + 0x208) = 1;
      return 0;
    }
    if (uVar6 == 0x2b037672) {
      uVar3 = (*(code *)PTR_rts_h1encoder_get_h264_info_000637ac)(iVar2,param_2[5]);
      return uVar3;
    }
    if (uVar6 != 0x28037672) {
      return 0xffffffcb;
    }
    piVar5 = (int *)param_2[5];
    if (piVar5 == (int *)0x0) {
      return 0xffffffcb;
    }
    iVar2 = (*(code *)(PTR_LAB_00063270 + 0x1950))(param_1);
  }
  else {
    if (uVar6 != 0x3c037672) {
      if (uVar6 != 0x64037672) {
        if (uVar6 != 0x2e037672) {
          return 0xffffffcb;
        }
        uVar7 = param_2[1];
        uVar6 = param_2[5];
        if ((*(int *)(iVar2 + 0x120) < 0) && (-1 < (int)uVar7)) {
          if ((int)uVar7 < 2) {
            *(uint *)(iVar2 + 0x124) = uVar7;
          }
          else if ((uVar7 == 2) && (uVar6 != 0)) {
            *(undefined4 *)(iVar2 + 0x124) = 2;
            (*(code *)puVar1)(iVar2 + 0x128,uVar6,0x14);
          }
        }
      }
      uVar6 = param_2[5];
      iVar2 = (*(code *)(PTR_LAB_00063270 + 0x1930))(param_1);
      if (iVar2 == 0) {
        return 0xffffffe1;
      }
      iVar2 = (*(code *)PTR_to_h1_roi_map_00063288)(iVar2);
      if (iVar2 == 0) {
        return 0xffffffe1;
      }
      uVar3 = (*(code *)PTR_rts_av_get_h264_roi_map_00063390)(iVar2,uVar6);
      iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
      if (iVar2 == 0) {
        return 0;
      }
      return uVar3;
    }
    if (param_2[1] != 1) {
      return 0xffffffcb;
    }
    if (param_2[5] == 0) {
      return 0xffffffcb;
    }
    iVar2 = (*(code *)(PTR_LAB_00063270 + 0x1930))(param_1);
    piVar5 = (int *)param_2[5];
    if (iVar2 == 0) {
      return 0xffffffcb;
    }
    iVar2 = (*(code *)PTR_to_h264_roi_0006380c)(iVar2);
  }
  *piVar5 = iVar2;
  if (iVar2 != 0) {
    return 0;
  }
  return 0xffffffe1;
}



// ==== rts_av_set_h264_color_conversion @ 00035bbc size=76

void rts_av_set_h264_color_conversion(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_c;
  
  local_20 = 0x2e037672;
  local_1c = param_2;
  local_c = param_3;
  (*(code *)PTR_rts_av_do_cmd_00063488)(param_1,0x34363268,&local_20);
  return;
}



// ==== rts_av_osdenc_check_ready @ 00035c10 size=8

undefined4 rts_av_osdenc_check_ready(void)

{
  return 0;
}



// ==== rts_av_osdenc_init @ 00035c78 size=272

undefined4 rts_av_osdenc_init(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == 0) {
    uVar4 = 0xfffffff6;
  }
  else {
    iVar2 = (*(code *)PTR___rts_calloc_00063a28)
                      (1,0x80,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1284,0x77);
    if (iVar2 == 0) {
      uVar4 = 0xfffffff5;
    }
    else {
      iVar3 = (*(code *)PTR_rts_av_alloc_osdenc_attr_0006362c)(*(undefined4 *)(iVar2 + 0x14));
      if (iVar3 != 0) {
        (*(code *)PTR_rts_av_obj_set_name_000638e8)
                  (iVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x157c);
        uVar4 = (*(code *)PTR_rts_av_register_attribute_00063788)(param_1,iVar3);
        iVar5 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
        if (iVar5 == 0) {
          iVar3 = (*(code *)PTR_rts_isp_get_hz_0006353c)();
          if (iVar3 < 500) {
            *(undefined4 *)(iVar2 + 0x18) = 1;
          }
          else {
            *(undefined4 *)(iVar2 + 0x18) = 0;
          }
          puVar1 = PTR_rts_av_set_unit_priv_0006374c;
          *(undefined4 *)(iVar2 + 0x1c) = 0;
          *(int *)(iVar2 + 0x7c) = param_1;
          (*(code *)puVar1)(param_1,iVar2);
          (*(code *)PTR_rts_log_000635ec)
                    (1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1570,
                     *(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x1c));
          return 0;
        }
        (*(code *)PTR_rts_av_obj_put_00063ab8)(iVar3);
      }
      (*(code *)PTR_rts_av_set_unit_priv_0006374c)(param_1,0);
      (*(code *)(PTR_LAB_00063270 + 0x5c18))(iVar2);
      uVar4 = 0xffffffe2;
    }
  }
  return uVar4;
}



// ==== rts_av_osdenc_cleanup @ 00035e00 size=140

undefined4 rts_av_osdenc_cleanup(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
    if (iVar1 != 0) {
      (*(code *)PTR_rts_av_set_unit_priv_0006374c)(param_1,0);
      uVar2 = (*(code *)(PTR_LAB_00063270 + 0x5c18))(iVar1);
      return uVar2;
    }
  }
  return 0xfffffff6;
}



// ==== rts_av_osdenc_start @ 00035e8c size=76

undefined4 rts_av_osdenc_start(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  code *pcVar5;
  
  pcVar5 = (code *)PTR_rts_av_get_unit_priv_00063344;
  if (param_1 == 0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1298,0x110,puVar4);
    pcVar5 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1558,0x110,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x12ac);
  }
  iVar2 = (*pcVar5)();
  if (iVar2 == 0) {
    uVar3 = 0xfffffff6;
  }
  else {
    *(undefined4 *)(iVar2 + 0x68) = 0;
    *(undefined4 *)(iVar2 + 0x6c) = 0;
    if (*(int *)(iVar2 + 0x18) == 0) {
      bVar1 = *(int *)(iVar2 + 0x1c) == 0;
      if (bVar1) {
        (*(code *)PTR_rts_osd2_set_epoll_hook_000636e0)(*(undefined4 *)(iVar2 + 0x14),0,0);
        uVar3 = *(undefined4 *)(iVar2 + 0x14);
      }
      else {
        (*(code *)PTR_rts_osd2_set_epoll_hook_000636e0)();
        uVar3 = *(undefined4 *)(iVar2 + 0x14);
      }
      (*(code *)PTR_rts_osd2_use_sigio_000638c4)(uVar3,!bVar1);
      uVar3 = 0;
    }
    else {
      (*(code *)PTR_rts_osd2_set_epoll_hook_000636e0)
                (*(undefined4 *)(iVar2 + 0x14),iVar2,PTR_LAB_00063270 + 0x5fcc);
      (*(code *)PTR_rts_osd2_use_sigio_000638c4)(*(undefined4 *)(iVar2 + 0x14),0);
      uVar3 = 0;
    }
  }
  return uVar3;
}



// ==== rts_av_osdenc_stop @ 00036210 size=8

undefined4 rts_av_osdenc_stop(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  code *pcVar4;
  
  pcVar4 = (code *)PTR_rts_av_get_unit_priv_00063344;
  if (param_1 == 0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1370,299,puVar3);
    pcVar4 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1558,299,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1384);
  }
  iVar1 = (*pcVar4)();
  if (iVar1 == 0) {
    uVar2 = 0xfffffff6;
  }
  else {
    uVar2 = 0;
    if (*(int *)(iVar1 + 0x18) != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x148c,*(undefined4 *)(iVar1 + 0x68),
                 *(undefined4 *)(iVar1 + 0x6c));
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ==== rts_audio_free_codec_context @ 00036350 size=112

undefined4 rts_audio_free_codec_context(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_s0;
  code *in_t9;
  code *pcVar3;
  int unaff_gp;
  int in_stack_00000018;
  
  (*in_t9)();
  if (*(int *)(param_1 + 0x78) == 0) {
    uVar1 = 0xffffffef;
  }
  else {
    uVar1 = (**(code **)(unaff_gp + -0x7ba4))(*(undefined4 *)(unaff_s0 + 0x14));
    iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
    if ((iVar2 == 0) || (param_2 != 0)) {
      pcVar3 = *(code **)(in_stack_00000018 + -0x7ec8);
      *(int *)(unaff_s0 + 0x78) = *(int *)(unaff_s0 + 0x78) + -1;
      (*pcVar3)(unaff_s0 + 0x20);
      *(undefined4 *)(unaff_s0 + 0x24) = 0xffffffff;
      pcVar3 = *(code **)(in_stack_00000018 + -0x7a50);
      *(undefined4 *)(unaff_s0 + 0x20) = 0;
      *(undefined4 *)(unaff_s0 + 0x2c) = 0;
      (*pcVar3)(unaff_s0 + 0x40);
      (**(code **)(in_stack_00000018 + -0x7a28))(*(undefined4 *)(unaff_s0 + 0x14));
      uVar1 = 0;
    }
  }
  return uVar1;
}



// ==== rts_audio_create_codec_context @ 000363c0 size=60

undefined4 rts_audio_create_codec_context(void)

{
  int unaff_s0;
  code *in_t9;
  int in_stack_00000018;
  
  *(undefined4 *)(unaff_s0 + 0x20) = 0;
  *(undefined4 *)(unaff_s0 + 0x2c) = 0;
  (*in_t9)();
  (**(code **)(in_stack_00000018 + -0x7a28))(*(undefined4 *)(unaff_s0 + 0x14));
  return 0;
}



// ==== rts_audio_codec_decode @ 00036524 size=68

void rts_audio_codec_decode(void)

{
  undefined *puVar1;
  undefined *puStack00000010;
  int in_stack_00000018;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c70;
  puStack00000010 = puVar1;
  (*(code *)PTR_rts_log_000635ec)
            (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1348,0xd6);
  rts_audio_codec_check_encode_id(puVar1,*(int *)(in_stack_00000018 + -0x7fd4) + -0x1558,0xd6);
  return;
}



// ==== rts_audio_codec_encode @ 0003656c size=72

void rts_audio_codec_encode(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_s0;
  uint uVar3;
  code *pcVar4;
  int unaff_gp;
  undefined8 uVar5;
  int in_stack_00000018;
  
  pcVar4 = *(code **)(unaff_gp + -0x7ce4);
  if (unaff_s0 == 0) {
    unaff_s0 = *(int *)(unaff_gp + -0x7fd4) + -0x14f0;
    (**(code **)(unaff_gp + -0x7c54))
              (4,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x1348,0xd8)
    ;
    pcVar4 = *(code **)(in_stack_00000018 + -0x7a88);
    (*pcVar4)(unaff_s0,*(int *)(in_stack_00000018 + -0x7fd4) + -0x1558,0xd8,
              *(int *)(in_stack_00000018 + -0x7fd4) + -0x135c);
  }
  uVar5 = (*pcVar4)();
  uVar3 = (uint)uVar5 - *(int *)(unaff_s0 + 0x70);
  uVar1 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + 0x62dc))
                    (unaff_s0,(int)((ulonglong)uVar5 >> 0x20) - *(int *)(unaff_s0 + 0x74) !=
                              (uint)((uint)uVar5 < uVar3) || 299999999 < uVar3);
  iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
  if (iVar2 == 0) {
    *(int *)(unaff_s0 + 0x6c) = *(int *)(unaff_s0 + 0x6c) + 1;
  }
  return;
}



// ==== rts_audio_codec_check_encode_id @ 000365b4 size=64

void rts_audio_codec_check_encode_id(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_s0;
  code *pcVar3;
  int unaff_gp;
  int in_stack_00000018;
  
  pcVar3 = *(code **)(unaff_gp + -0x7a88);
  (*pcVar3)();
  (*pcVar3)();
  uVar1 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + 0x62dc))();
  iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
  if (iVar2 == 0) {
    *(int *)(unaff_s0 + 0x6c) = *(int *)(unaff_s0 + 0x6c) + 1;
  }
  return;
}



// ==== rts_audio_codec_check_decode_id @ 000365f4 size=76

void rts_audio_codec_check_decode_id(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_s0;
  int unaff_gp;
  int in_stack_00000018;
  
  uVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fd0) + 0x62dc))();
  iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
  if (iVar2 == 0) {
    *(int *)(unaff_s0 + 0x6c) = *(int *)(unaff_s0 + 0x6c) + 1;
  }
  return;
}



// ==== rts_av_osdenc_get_profile @ 00036640 size=60

undefined4 rts_av_osdenc_get_profile(int param_1,undefined *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  pcVar3 = (code *)PTR_rts_av_get_unit_priv_00063344;
  if (param_1 == 0) {
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1558;
    pcVar3 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38,param_2,400,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x13e0);
  }
  iVar1 = (*pcVar3)();
  if (iVar1 == 0) {
    uVar2 = 0xffffffe1;
  }
  else if (param_2 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    (*(code *)PTR_memcpy_00063908)(param_2,iVar1,0x14);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== rts_audio_cvrt_codec_id_to_fmt @ 0003667c size=60

undefined4
rts_audio_cvrt_codec_id_to_fmt
          (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  code *in_t9;
  
  param_2 = param_2 + -0x1558;
  (*in_t9)();
  iVar1 = (*in_t9)();
  if (iVar1 == 0) {
    uVar2 = 0xffffffe1;
  }
  else if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    (**(code **)(param_5 + -0x7938))(param_2,iVar1,0x14);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== rts_audio_check_encode_param @ 000366b4 size=28

undefined4 rts_audio_check_encode_param(void)

{
  return 0xffffffe1;
}



// ==== rts_av_osdenc_exec_cmd @ 000366d4 size=188

undefined4 rts_av_osdenc_exec_cmd(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    uVar2 = 0xfffffff6;
  }
  else {
    iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
    if (iVar1 == 0) {
      uVar2 = 0xffffffe1;
    }
    else {
      uVar2 = 0xffffffcb;
      if (*param_2 == 0x5c037672) {
        piVar4 = (int *)param_2[5];
        if (piVar4 != (int *)0x0) {
          iVar1 = (*(code *)PTR_rts_av_find_attribute_0006340c)
                            (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x157c);
          if (iVar1 == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = (*(code *)PTR_rts_av_to_osdenc_attr_000636f4)(iVar1);
          }
          uVar2 = (*(code *)PTR_rts_av_get_osd2_000634fc)(iVar1);
          iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
          if (iVar3 == 0) {
            *piVar4 = iVar1;
            uVar2 = 0;
          }
          else {
            if (*(int *)(iVar1 + 4) != 0) {
              (*(code *)PTR_rts_free_000638d4)();
            }
            *(undefined4 *)(iVar1 + 4) = 0;
          }
        }
      }
    }
  }
  return uVar2;
}



// ==== rts_pcm_decode_init @ 00036790 size=72

void rts_pcm_decode_init(void)

{
  int in_v0;
  int unaff_s0;
  int *unaff_s1;
  int in_stack_00000010;
  
  if (in_v0 == 0) {
    *unaff_s1 = unaff_s0;
  }
  else {
    if (*(int *)(unaff_s0 + 4) != 0) {
      (**(code **)(in_stack_00000010 + -0x796c))();
    }
    *(undefined4 *)(unaff_s0 + 4) = 0;
  }
  return;
}



// ==== rts_av_osdenc_run @ 000367e8 size=260

undefined4 rts_av_osdenc_run(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c [2];
  
  local_1c[0] = (int *)0x0;
  if (param_1 == 0) {
    puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1398,0x167,puVar6);
    uVar4 = 0x167;
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x13ac;
LAB_00036904:
    (*(code *)PTR___assert_000637b8)
              (puVar6,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1558,uVar4,puVar5);
    return 0xffffffef;
  }
  piVar2 = (int *)(*(code *)PTR_rts_av_get_unit_priv_00063344)();
  if (piVar2 == (int *)0x0) {
    return 0xfffffff6;
  }
  (*(code *)PTR_rts_av_pop_input_buffer_lk_000635e0)(param_1,local_1c);
  piVar1 = local_1c[0];
  if (local_1c[0] == (int *)0x0) {
    return 0xffffffef;
  }
  iVar3 = (*(code *)PTR_rts_av_find_attribute_0006340c)
                    (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x157c);
  if (iVar3 == 0) {
    puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x13b8,0x144,puVar6);
    uVar4 = 0x144;
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x13c4;
    goto LAB_00036904;
  }
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  (*(code *)PTR_rts_av_get_buffer_profile_0006386c)(piVar1,&local_30);
  puVar6 = PTR_rts_av_set_osdenc_fps_00063aa4;
  if (local_30 != 0) {
    if (((local_30 != *piVar2) || (local_2c != piVar2[1])) || (local_28 != piVar2[2])) {
      uVar4 = 0xffffffb5;
      goto LAB_000369d4;
    }
    if ((local_24 != piVar2[3]) || (local_20 != piVar2[4])) {
      piVar2[3] = local_24;
      piVar2[4] = local_20;
      (*(code *)puVar6)(iVar3);
      if (piVar2[5] != 0) {
        uVar4 = (*(code *)PTR_rts_av_update_osdenc_flick_info_0006397c)(iVar3);
        goto LAB_000369d4;
      }
    }
  }
  uVar4 = 0;
LAB_000369d4:
  iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
  if (iVar3 == 0) {
    if (piVar2[5] != 0) {
      local_30 = local_1c[0][3];
      local_2c = piVar2[2] * piVar2[1] + local_30;
      local_28 = *local_1c[0];
      local_24 = local_1c[0][1];
      uVar4 = (*(code *)PTR_rts_osd2_encode_000635e8)(piVar2[5],&local_30);
      iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
      if (iVar3 != 0) {
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1468,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1398,0x181);
      }
    }
    (*(code *)PTR_rts_av_push_back_output_buffer_lk_00063a0c)(param_1,local_1c[0]);
  }
  if (local_1c[0] != (int *)0x0) {
    (*(code *)PTR_rts_av_put_buffer_00063548)();
  }
  return uVar4;
}



// ==== rts_pcm_decode_frame @ 000368ec size=72

undefined4 rts_pcm_decode_frame(undefined4 param_1)

{
  int in_stack_00000018;
  
  (**(code **)(in_stack_00000018 + -0x7a88))
            (param_1,*(int *)(in_stack_00000018 + -0x7fd4) + -0x1558,0x144,
             *(int *)(in_stack_00000018 + -0x7fd4) + -0x13c4);
  return 0xffffffef;
}



// ==== rts_av_osdenc_set_profile @ 00036ab8 size=52

undefined4 rts_av_osdenc_set_profile(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int *unaff_s0;
  int iVar6;
  code *pcVar7;
  int local_28;
  int local_24;
  int local_20;
  
  if (param_1 == 0) {
    uVar5 = 0x1a3;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    param_2 = unaff_s0;
  }
  else {
    if (param_2 != (int *)0x0) goto LAB_00036b2c;
    uVar5 = 0x1a4;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac8;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1558,uVar5,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x13fc);
LAB_00036b2c:
  iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
  if (iVar1 == 0) {
    uVar5 = 0xffffffe1;
  }
  else {
    local_28 = *param_2;
    uVar5 = 0xffffffeb;
    if ((local_28 == 1) && (local_24 = param_2[1], local_24 != 0)) {
      local_20 = param_2[2];
      if (local_20 == 0) {
        uVar5 = 0xffffffeb;
      }
      else {
        iVar6 = *(int *)(iVar1 + 0x14);
        if (iVar6 == 0) {
          uVar5 = (*(code *)PTR_rts_osd2_init_0006378c)(iVar1 + 0x14,&local_28);
          iVar6 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar5);
          if (iVar6 != 0) {
            return uVar5;
          }
          (*(code *)PTR_rts_osd2_set_adma_copy_0006339c)(*(undefined4 *)(iVar1 + 0x14),0);
          iVar6 = (*(code *)PTR_rts_av_find_attribute_0006340c)
                            (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x157c);
          piVar4 = *(int **)(iVar1 + 0x14);
          pcVar7 = (code *)PTR_rts_av_set_osdenc_attr_owner_000639dc;
        }
        else {
          iVar2 = (*(code *)PTR_memcmp_000634cc)(param_2,iVar1,0x14);
          if (iVar2 == 0) {
            return 0;
          }
          piVar4 = &local_28;
          pcVar7 = (code *)PTR_rts_osd2_update_00063a2c;
        }
        (*pcVar7)(iVar6,piVar4);
        (*(code *)PTR_memcpy_00063908)(iVar1,param_2,0x14);
        uVar5 = (*(code *)PTR_rts_av_find_attribute_0006340c)
                          (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x157c);
        (*(code *)PTR_rts_av_set_osdenc_fps_00063aa4)(uVar5,param_2[3],param_2[4]);
        uVar5 = 0;
      }
    }
  }
  return uVar5;
}



// ==== rts_pcm_decode_close @ 00036aec size=404

undefined4 rts_pcm_decode_close(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *unaff_s0;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  int unaff_gp;
  int in_stack_00000010;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  
  (**(code **)(unaff_gp + -0x7a88))
            (param_1 + -0x6c38,*(int *)(unaff_gp + -0x7fd4) + -0x1558,0x1a3,
             *(int *)(unaff_gp + -0x7fd4) + -0x13fc);
  iVar1 = (**(code **)(unaff_gp + -0x7efc))();
  if (iVar1 == 0) {
    uVar5 = 0xffffffe1;
  }
  else {
    in_stack_00000018 = *unaff_s0;
    uVar5 = 0xffffffeb;
    if ((in_stack_00000018 == 1) && (in_stack_0000001c = unaff_s0[1], in_stack_0000001c != 0)) {
      in_stack_00000020 = unaff_s0[2];
      if (in_stack_00000020 == 0) {
        uVar5 = 0xffffffeb;
      }
      else {
        iVar4 = *(int *)(iVar1 + 0x14);
        if (iVar4 == 0) {
          uVar5 = (**(code **)(in_stack_00000010 + -0x7ab4))(iVar1 + 0x14,&stack0x00000018);
          iVar4 = (**(code **)(in_stack_00000010 + -0x7ec0))(uVar5);
          if (iVar4 != 0) {
            return uVar5;
          }
          (**(code **)(in_stack_00000010 + -0x7ea4))(*(undefined4 *)(iVar1 + 0x14),0);
          iVar4 = (**(code **)(in_stack_00000010 + -0x7e34))();
          puVar3 = *(undefined4 **)(iVar1 + 0x14);
          pcVar6 = *(code **)(in_stack_00000010 + -0x7864);
        }
        else {
          iVar2 = (**(code **)(in_stack_00000010 + -0x7d74))();
          if (iVar2 == 0) {
            return 0;
          }
          puVar3 = &stack0x00000018;
          pcVar6 = *(code **)(in_stack_00000010 + -0x7814);
        }
        (*pcVar6)(iVar4,puVar3);
        (**(code **)(in_stack_00000010 + -0x7938))(iVar1);
        uVar5 = (**(code **)(in_stack_00000010 + -0x7e34))();
        (**(code **)(in_stack_00000010 + -0x779c))(uVar5,unaff_s0[3],unaff_s0[4]);
        uVar5 = 0;
      }
    }
  }
  return uVar5;
}



// ==== rts_pcm_encode_init @ 00036ccc size=144

void rts_pcm_encode_init(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int in_t8;
  int unaff_gp;
  undefined4 uStack00000018;
  uint uStack0000001c;
  uint uStack00000020;
  
  iVar2 = *(int *)(param_1 + 0x70) + in_t8;
  uStack00000018 = *(undefined4 *)(iVar2 + 0x20);
  uVar1 = param_3 * 1000;
  uStack0000001c = ((*(int *)(param_1 + 0x84) * *(int *)(iVar2 + 0x24) + uVar1) - 1) / uVar1;
  if (uVar1 == 0) {
    trap(0x1c00);
  }
  uStack00000020 = ((uVar1 + *(int *)(param_1 + 0x84) * *(int *)(iVar2 + 0x28)) - 1) / uVar1;
  if (uVar1 == 0) {
    trap(0x1c00);
  }
  (**(code **)(unaff_gp + -0x7d94))(*(undefined4 *)(param_1 + 0x8c),param_2,&stack0x00000018);
  return;
}



// ==== rts_pcm_encode_frame @ 00036d78 size=160

undefined4 rts_pcm_encode_frame(int param_1)

{
  undefined4 uVar1;
  int unaff_gp;
  
  if (param_1 == 0) {
    param_1 = *(int *)(unaff_gp + -0x7fd4) + -0x1270;
    (**(code **)(unaff_gp + -0x7c54))
              (4,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0xeac,0x26);
    (**(code **)(unaff_gp + -0x7a88))
              (param_1,*(int *)(unaff_gp + -0x7fd4) + -0x1264,0x26,
               *(int *)(unaff_gp + -0x7fd4) + -0xec8);
  }
  if (*(int *)(param_1 + 0x90) == param_1) {
    uVar1 = 0;
  }
  else {
    (**(code **)(unaff_gp + -0x7c54))
              (4,*(int *)(unaff_gp + -0x7fd4) + -0x11f8,*(int *)(unaff_gp + -0x7fd4) + -0xeac,0x29);
    uVar1 = 0xffffffe1;
  }
  return uVar1;
}



// ==== rts_av_to_osdenc_t @ 00036e18 size=124

int rts_av_to_osdenc_t(int param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xe3c,0xc4,puVar1);
    param_1 = (*(code *)PTR___assert_000637b8)
                        (puVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1264,0xc4,
                         PTR_s_snd_device_0004ffec_0x14_0006326c + -0xe50);
  }
  return param_1;
}



// ==== rts_av_to_osdenc_attr @ 00036f08 size=52

int rts_av_to_osdenc_attr(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rts_av_to_osdenc_t_00063588)();
  return iVar1 + 0x6c;
}



// ==== rts_av_set_osdenc_attr_owner @ 00036f3c size=244

void rts_av_set_osdenc_attr_owner(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined4 unaff_s2;
  
  if (param_1 == 0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xe70,0xd8,puVar4);
    uVar3 = 0xd8;
    puVar1 = puVar4;
    param_2 = unaff_s2;
  }
  else {
    puVar1 = (undefined *)(*(code *)PTR_rts_av_to_osdenc_t_00063588)();
    pcVar5 = (code *)(PTR_LAB_00063270 + 0x6d64);
    iVar2 = (*pcVar5)(puVar1);
    if (iVar2 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0xe70,0xdb,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x11c4);
    }
    iVar2 = (*pcVar5)(puVar1);
    if (iVar2 == 0) goto LAB_0003703c;
    uVar3 = 0xdb;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x11c4;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1264,uVar3,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0xe90);
LAB_0003703c:
  *(undefined4 *)(puVar1 + 0x8c) = param_2;
  return;
}



// ==== rts_pcm_encode_close @ 00037030 size=8

void rts_pcm_encode_close(void)

{
  int unaff_s0;
  undefined4 unaff_s2;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7a88))();
  *(undefined4 *)(unaff_s0 + 0x8c) = unaff_s2;
  return;
}



// ==== rts_pcm_check_aulaw @ 00037038 size=32

void rts_pcm_check_aulaw(void)

{
  int unaff_s0;
  undefined4 unaff_s2;
  
  *(undefined4 *)(unaff_s0 + 0x8c) = unaff_s2;
  return;
}



// ==== rts_av_alloc_osdenc_attr @ 00037058 size=368

undefined4 rts_av_alloc_osdenc_attr(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar2 = (*(code *)PTR___rts_calloc_00063a28)
                    (1,0x94,PTR_s_snd_device_0004ffec_0x14_0006326c + -0xee4,0xe8);
  if (iVar2 != 0) {
    (*(code *)PTR_rts_av_obj_init_00063620)(iVar2,PTR_LAB_00063270 + 0x6e94);
    uVar3 = (*(code *)PTR_rts_av_obj_get_0006388c)(iVar2);
    puVar1 = PTR_rts_osd2_get_blk_max_num_000632f8;
    *(int *)(iVar2 + 0x90) = iVar2;
    iVar4 = (*(code *)puVar1)();
    iVar5 = (*(code *)PTR___rts_calloc_00063a28)
                      (iVar4,0x44,PTR_s_snd_device_0004ffec_0x14_0006326c + -0xef8,0xb2);
    *(int *)(iVar2 + 0x70) = iVar5;
    if (iVar5 == 0) {
      uVar7 = 0xfffffff6;
    }
    else {
      for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
        *(undefined1 *)(*(int *)(iVar2 + 0x70) + iVar5 * 0x44 + 0x2c) = 0;
        iVar6 = *(int *)(iVar2 + 0x70) + iVar5 * 0x44;
        *(undefined4 *)(iVar6 + 0x20) = 0;
        *(undefined4 *)(iVar6 + 0x30) = 0;
      }
      *(int *)(iVar2 + 0x6c) = iVar4;
      uVar7 = 0;
    }
    iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar7);
    if (iVar2 == 0) {
      uVar7 = (*(code *)PTR_rts_av_set_osdenc_attr_owner_000639dc)(uVar3,param_1);
      iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar7);
      if (iVar2 == 0) {
        return uVar3;
      }
    }
    (*(code *)PTR_rts_av_obj_put_00063ab8)(uVar3);
  }
  return 0;
}



// ==== rts_g726_encode_init @ 000371c8 size=16

void rts_g726_encode_init(void)

{
  return;
}



// ==== rts_av_set_osdenc_fps @ 000371d8 size=300

void rts_av_set_osdenc_fps(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  
  if (param_1 == 0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xf10,0x104,puVar4);
    uVar3 = 0x104;
    puVar1 = puVar4;
    param_2 = unaff_s2;
    param_3 = unaff_s3;
  }
  else {
    puVar1 = (undefined *)(*(code *)PTR_rts_av_to_osdenc_t_00063588)();
    pcVar5 = (code *)(PTR_LAB_00063270 + 0x6d64);
    iVar2 = (*pcVar5)(puVar1);
    if (iVar2 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0xf10,0x107,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x11c4);
    }
    iVar2 = (*pcVar5)(puVar1);
    if (iVar2 == 0) goto LAB_000372e0;
    uVar3 = 0x107;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x11c4;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1264,uVar3,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0xf28);
LAB_000372e0:
  *(undefined4 *)(puVar1 + 0x88) = param_2;
  *(undefined4 *)(puVar1 + 0x84) = param_3;
  return;
}



// ==== rts_av_update_osdenc_flick_info @ 00037304 size=224

undefined4 rts_av_update_osdenc_flick_info(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  code *pcVar6;
  
  pcVar6 = (code *)PTR_rts_av_to_osdenc_t_00063588;
  if (param_1 != 0) goto LAB_000373a0;
  puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
  (*(code *)PTR_rts_log_000635ec)
            (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0xf48,0x114,puVar5);
  uVar4 = 0x114;
  while( true ) {
    pcVar6 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (puVar5,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1264,uVar4,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xf68);
LAB_000373a0:
    iVar1 = (*pcVar6)();
    pcVar6 = (code *)(PTR_LAB_00063270 + 0x6d64);
    iVar2 = (*pcVar6)(iVar1);
    if (iVar2 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0xf48,0x117,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x11c4);
    }
    iVar2 = (*pcVar6)(iVar1);
    puVar5 = PTR_LAB_00063270;
    if (iVar2 == 0) break;
    uVar4 = 0x117;
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x11c4;
  }
  iVar2 = 0;
  do {
    if (*(int *)(iVar1 + 0x6c) <= iVar2) {
      return 0;
    }
    uVar4 = (*(code *)(puVar5 + 0x6ca0))(iVar1,iVar2);
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
    iVar2 = iVar2 + 1;
  } while (iVar3 == 0);
  return uVar4;
}



// ==== rts_g726_encode_frame @ 000373e4 size=160

undefined4
rts_g726_encode_frame
          (undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,int param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_s0;
  code *unaff_s1;
  int iVar4;
  int in_t8;
  code *pcVar5;
  int unaff_gp;
  
  do {
    param_5 = in_t8;
    (**(code **)(unaff_gp + -0x7c54))(param_1,param_2 + -0x6cf0,param_3 + -0xf48,param_4);
    do {
      iVar1 = (*unaff_s1)(unaff_s0);
      if (iVar1 == 0) {
        iVar1 = 0;
        iVar4 = *(int *)(param_7 + -0x7fd0);
        do {
          if (*(int *)(unaff_s0 + 0x6c) <= iVar1) {
            return 0;
          }
          uVar2 = (*(code *)(iVar4 + 0x6ca0))(unaff_s0,iVar1);
          iVar3 = (**(code **)(param_7 + -0x7ec0))(uVar2);
          iVar1 = iVar1 + 1;
        } while (iVar3 == 0);
        return uVar2;
      }
      pcVar5 = *(code **)(param_7 + -0x7a88);
      (*pcVar5)(*(int *)(param_7 + -0x7fd4) + -0x11c4,*(int *)(param_7 + -0x7fd4) + -0x1264,0x117,
                *(int *)(param_7 + -0x7fd4) + -0xf68);
      unaff_s0 = (*pcVar5)();
      unaff_s1 = (code *)(*(int *)(param_7 + -0x7fd0) + 0x6d64);
      iVar1 = (*unaff_s1)(unaff_s0);
    } while (iVar1 == 0);
    param_1 = 4;
    param_2 = *(int *)(param_7 + -0x7fd4);
    param_4 = 0x117;
    param_3 = *(int *)(param_7 + -0x7fd4);
    in_t8 = *(int *)(param_7 + -0x7fd4) + -0x11c4;
    unaff_gp = param_7;
  } while( true );
}



// ==== rts_av_get_osdenc_attr_single @ 00037484 size=532

undefined4 rts_av_get_osdenc_attr_single(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined4 *puVar5;
  int unaff_s1;
  int unaff_s2;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24 [4];
  
  if (param_1 == 0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xf88,0x126,puVar3);
    uVar2 = 0x126;
    param_2 = unaff_s1;
  }
  else {
    unaff_s2 = (*(code *)PTR_rts_av_to_osdenc_t_00063588)();
    pcVar4 = (code *)(PTR_LAB_00063270 + 0x6d64);
    iVar1 = (*pcVar4)(unaff_s2);
    if (iVar1 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0xf88,0x129,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x11c4);
    }
    iVar1 = (*pcVar4)(unaff_s2);
    if (iVar1 == 0) goto LAB_00037588;
    uVar2 = 0x129;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x11c4;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1264,uVar2,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0xfa8);
LAB_00037588:
  uVar2 = 0xffffffeb;
  if (-1 < param_2) {
    if (param_2 < *(int *)(unaff_s2 + 0x6c)) {
      puVar5 = (undefined4 *)(*(int *)(unaff_s2 + 0x70) + param_2 * 0x44);
      uVar2 = (*(code *)PTR_rts_osd2_query_block_0006367c)
                        (*(undefined4 *)(unaff_s2 + 0x8c),param_2,&local_48,puVar5 + 0xb);
      iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
      puVar3 = PTR_rts_osd2_get_attr_00063324;
      if (iVar1 == 0) {
        *puVar5 = local_48;
        puVar5[2] = local_40;
        puVar5[1] = local_44;
        puVar5[3] = local_3c;
        uVar2 = *(undefined4 *)(unaff_s2 + 0x8c);
        puVar5[4] = local_38;
        puVar5[6] = local_30;
        puVar5[7] = local_28;
        puVar5[5] = local_34;
        uVar2 = (*(code *)puVar3)(uVar2,param_2,local_24);
        iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
        if (iVar1 == 0) {
          puVar5[8] = local_24[0];
          puVar5[0xc] = local_2c;
          uVar2 = 0;
        }
      }
    }
    else {
      uVar2 = 0xffffffeb;
    }
  }
  return uVar2;
}



// ==== rts_av_set_osdenc_attr_single @ 00037698 size=560

undefined4 rts_av_set_osdenc_attr_single(int param_1,undefined *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int unaff_s1;
  code *pcVar4;
  undefined4 *puVar5;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_1 == 0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xfc8,0x135,puVar3);
    uVar2 = 0x135;
    param_2 = puVar3;
  }
  else {
    unaff_s1 = (*(code *)PTR_rts_av_to_osdenc_t_00063588)();
    pcVar4 = (code *)(PTR_LAB_00063270 + 0x6d64);
    iVar1 = (*pcVar4)(unaff_s1);
    if (iVar1 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0xfc8,0x138,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x11c4);
    }
    iVar1 = (*pcVar4)(unaff_s1);
    if (iVar1 == 0) goto LAB_00037798;
    uVar2 = 0x138;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x11c4;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1264,uVar2,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0xfe8);
LAB_00037798:
  if ((int)param_2 < 0) {
    return 0xffffffeb;
  }
  if (*(int *)(unaff_s1 + 0x6c) <= (int)param_2) {
    return 0xffffffeb;
  }
  puVar5 = (undefined4 *)(*(int *)(unaff_s1 + 0x70) + (int)param_2 * 0x44);
  uVar2 = *(undefined4 *)(unaff_s1 + 0x8c);
  pcVar4 = (code *)PTR_rts_osd2_disable_block_000639bc;
  if (*(char *)(puVar5 + 0xb) == '\x01') {
    local_38 = *puVar5;
    local_30 = puVar5[2];
    local_34 = puVar5[1];
    local_2c = puVar5[3];
    local_28 = puVar5[4];
    local_20 = puVar5[6];
    local_18 = puVar5[7];
    local_24 = puVar5[5];
    local_1c = puVar5[0xc];
    uVar2 = (*(code *)PTR_rts_osd2_config_block_00063904)(uVar2,param_2,&local_38);
    iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
    if (iVar1 != 0) {
      return uVar2;
    }
    uVar2 = (*(code *)(PTR_LAB_00063270 + 0x6ca0))(unaff_s1,param_2);
    iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
    if (iVar1 != 0) {
      return uVar2;
    }
    if (local_24 == 0) {
      return uVar2;
    }
    uVar2 = *(undefined4 *)(unaff_s1 + 0x8c);
    pcVar4 = (code *)PTR_rts_osd2_enable_block_0006381c;
  }
  uVar2 = (*pcVar4)(uVar2,param_2);
  return uVar2;
}



// ==== rts_av_query_osd2 @ 000378c8 size=164

void rts_av_query_osd2(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 == 0) {
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xffc,0x144,puVar1);
    (*(code *)PTR___assert_000637b8)
              (puVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1264,0x144,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1010);
  }
  (*(code *)PTR_rts_av_do_cmd_00063488)();
  return;
}



// ==== rts_av_set_osd2_single @ 0003796c size=136

void rts_av_set_osd2_single(undefined *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)PTR_rts_av_set_osdenc_attr_single_00063928;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1028,0x150,param_1);
    UNRECOVERED_JUMPTABLE = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1264,0x150,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1040);
  }
                    /* WARNING: Could not recover jumptable at 0x000379ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + -0x6c);
  return;
}



// ==== rts_av_get_osd2_single @ 000379f4 size=136

void rts_av_get_osd2_single(undefined *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)PTR_rts_av_get_osdenc_attr_single_00063860;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1058,0x15b,param_1);
    UNRECOVERED_JUMPTABLE = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1264,0x15b,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1070);
  }
                    /* WARNING: Could not recover jumptable at 0x00037a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + -0x6c);
  return;
}



// ==== rts_av_set_osd2 @ 00037a7c size=240

undefined4 rts_av_set_osd2(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  int *unaff_s3;
  code *pcVar4;
  
  if (param_1 == (int *)0x0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1080,0x168,puVar3);
    pcVar4 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1264,0x168,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1090);
    goto LAB_00037b08;
  }
  puVar3 = (undefined *)0x0;
  unaff_s3 = param_1 + -0x1b;
  while( true ) {
    pcVar4 = (code *)PTR_rts_av_set_osdenc_attr_single_00063928;
    if (*param_1 <= (int)puVar3) {
      return 0;
    }
LAB_00037b08:
    uVar1 = (*pcVar4)(unaff_s3,puVar3);
    iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
    if (iVar2 != 0) break;
    puVar3 = puVar3 + 1;
  }
  return uVar1;
}



// ==== rts_av_get_osd2 @ 00037b6c size=240

undefined4 rts_av_get_osd2(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  int *unaff_s3;
  code *pcVar4;
  
  if (param_1 == (int *)0x0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x10a0,0x17a,puVar3);
    pcVar4 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1264,0x17a,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x10b0);
    goto LAB_00037bf8;
  }
  puVar3 = (undefined *)0x0;
  unaff_s3 = param_1 + -0x1b;
  while( true ) {
    pcVar4 = (code *)PTR_rts_av_get_osdenc_attr_single_00063860;
    if (*param_1 <= (int)puVar3) {
      return 0;
    }
LAB_00037bf8:
    uVar1 = (*pcVar4)(unaff_s3,puVar3);
    iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
    if (iVar2 != 0) break;
    puVar3 = puVar3 + 1;
  }
  return uVar1;
}



// ==== rts_av_resume_osd2_single @ 00037c5c size=228

void rts_av_resume_osd2_single(undefined *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 unaff_s2;
  
  if (param_1 == (undefined *)0x0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x10cc,0x18a,puVar3);
    uVar2 = 0x18a;
    param_1 = puVar3;
    param_2 = unaff_s2;
  }
  else {
    iVar1 = (*(code *)(PTR_LAB_00063270 + 0x6d64))(param_1 + -0x6c);
    if (iVar1 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x10cc,0x18e,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x11c4);
    }
    iVar1 = (*(code *)(PTR_LAB_00063270 + 0x6d64))(param_1 + -0x6c);
    if (iVar1 == 0) goto LAB_00037d58;
    uVar2 = 0x18e;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x11c4;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1264,uVar2,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x10e8);
LAB_00037d58:
  (*(code *)PTR_rts_osd2_enable_block_0006381c)(*(undefined4 *)(param_1 + 0x20),param_2);
  return;
}



// ==== rts_g726_encode_close @ 00037d40 size=60

void rts_g726_encode_close(int param_1,int param_2,undefined4 param_3)

{
  int unaff_s0;
  
  (*(code *)PTR___assert_000637b8)
            (param_1 + -0x11c4,param_2 + -0x1264,param_3,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x10e8);
  (*(code *)PTR_rts_osd2_enable_block_0006381c)(*(undefined4 *)(unaff_s0 + 0x20));
  return;
}



// ==== rts_av_pause_osd2_single @ 00037d7c size=12

void rts_av_pause_osd2_single(undefined *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 unaff_s2;
  
  if (param_1 == (undefined *)0x0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1104,0x197,puVar3);
    uVar2 = 0x197;
    param_1 = puVar3;
    param_2 = unaff_s2;
  }
  else {
    iVar1 = (*(code *)(PTR_LAB_00063270 + 0x6d64))(param_1 + -0x6c);
    if (iVar1 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1104,0x19b,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x11c4);
    }
    iVar1 = (*(code *)(PTR_LAB_00063270 + 0x6d64))(param_1 + -0x6c);
    if (iVar1 == 0) goto LAB_00037e78;
    uVar2 = 0x19b;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x11c4;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1264,uVar2,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1120);
LAB_00037e78:
  (*(code *)PTR_rts_osd2_disable_block_000639bc)(*(undefined4 *)(param_1 + 0x20),param_2);
  return;
}



// ==== rts_g726_encode_check @ 00037d88 size=184

void rts_g726_encode_check(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_s2;
  int unaff_gp;
  
  if (param_1 == 0) {
    iVar3 = *(int *)(unaff_gp + -0x7fd4) + -0x126c;
    (**(code **)(unaff_gp + -0x7c54))
              (4,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x1104,0x197
               ,iVar3);
    uVar2 = 0x197;
    iVar1 = *(int *)(unaff_gp + -0x7fd4);
    param_1 = iVar3;
    param_2 = unaff_s2;
  }
  else {
    iVar3 = (*(code *)(*(int *)(unaff_gp + -0x7fd0) + 0x6d64))(param_1 + -0x6c);
    if (iVar3 != 0) {
      (**(code **)(unaff_gp + -0x7c54))
                (4,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x1104,
                 0x19b,*(int *)(unaff_gp + -0x7fd4) + -0x11c4);
    }
    iVar3 = (*(code *)(*(int *)(unaff_gp + -0x7fd0) + 0x6d64))(param_1 + -0x6c);
    if (iVar3 == 0) goto LAB_00037e78;
    uVar2 = 0x19b;
    iVar1 = *(int *)(unaff_gp + -0x7fd4);
    iVar3 = *(int *)(unaff_gp + -0x7fd4) + -0x11c4;
  }
  (**(code **)(unaff_gp + -0x7a88))
            (iVar3,iVar1 + -0x1264,uVar2,*(int *)(unaff_gp + -0x7fd4) + -0x1120);
LAB_00037e78:
  (**(code **)(unaff_gp + -0x7884))(*(undefined4 *)(param_1 + 0x20),param_2);
  return;
}



// ==== rts_aac_encode_check @ 00037e40 size=92

void rts_aac_encode_check(void)

{
  int iVar1;
  int unaff_s0;
  int in_stack_00000018;
  
  iVar1 = __process_encode_input();
  if (iVar1 != 0) {
    (**(code **)(in_stack_00000018 + -0x7a88))
              (*(int *)(in_stack_00000018 + -0x7fd4) + -0x11c4,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x1264,0x19b,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x1120);
  }
  (**(code **)(in_stack_00000018 + -0x7884))(*(undefined4 *)(unaff_s0 + 0x20));
  return;
}



// ==== rts_av_set_osd2_color_table @ 00037e9c size=88

void rts_av_set_osd2_color_table
               (undefined *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  
  if (param_1 == (undefined *)0x0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x113c,0x1a6,puVar3);
    uVar2 = 0x1a6;
    param_1 = puVar3;
    param_2 = unaff_s2;
    param_3 = unaff_s3;
  }
  else {
    iVar1 = (*(code *)(PTR_LAB_00063270 + 0x6d64))(param_1 + -0x6c);
    if (iVar1 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x113c,0x1aa,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x11c4);
    }
    iVar1 = (*(code *)(PTR_LAB_00063270 + 0x6d64))(param_1 + -0x6c);
    if (iVar1 == 0) goto LAB_00037fc0;
    uVar2 = 0x1aa;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x11c4;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1264,uVar2,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1158);
LAB_00037fc0:
  (*(code *)PTR_rts_osd2_set_color_table_000639a8)
            (*(undefined4 *)(param_1 + 0x20),param_2,param_3,param_4);
  return;
}



// ==== rts_aac_encode_init @ 00037ef4 size=152

void rts_aac_encode_init(undefined4 param_1)

{
  int unaff_s0;
  int iStack00000010;
  int in_stack_00000018;
  
  iStack00000010 = unaff_s0 + -0x126c;
  (*(code *)PTR_rts_log_000635ec)
            (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x113c,0x1a6);
  (**(code **)(in_stack_00000018 + -0x7a88))
            (unaff_s0 + -0x126c,*(int *)(in_stack_00000018 + -0x7fd4) + -0x1264,0x1a6,
             *(int *)(in_stack_00000018 + -0x7fd4) + -0x1158);
  (**(code **)(in_stack_00000018 + -0x7898))(*(undefined4 *)(unaff_s0 + -0x124c));
  return;
}



// ==== rts_av_get_osd2_color_table @ 0003800c size=196

void rts_av_get_osd2_color_table
               (undefined *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 unaff_s2;
  
  if (param_1 == (undefined *)0x0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1174,0x1b4,puVar3);
    uVar2 = 0x1b4;
    param_1 = puVar3;
    param_2 = unaff_s2;
  }
  else {
    iVar1 = (*(code *)(PTR_LAB_00063270 + 0x6d64))(param_1 + -0x6c);
    if (iVar1 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1174,0x1b8,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x11c4);
    }
    iVar1 = (*(code *)(PTR_LAB_00063270 + 0x6d64))(param_1 + -0x6c);
    if (iVar1 == 0) goto LAB_00038128;
    uVar2 = 0x1b8;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x11c4;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1264,uVar2,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1190);
LAB_00038128:
                    /* WARNING: Could not recover jumptable at 0x00038164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_osd2_get_color_table_000634c8)
            (*(undefined4 *)(param_1 + 0x20),param_2,param_3,param_4);
  return;
}



// ==== rts_aac_encode_frame @ 000380d0 size=156

void rts_aac_encode_frame(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int unaff_s0;
  int in_t8;
  int unaff_gp;
  int iStack00000010;
  int in_stack_00000018;
  
  iStack00000010 = in_t8 + -0x11c4;
  (**(code **)(unaff_gp + -0x7c54))(param_1,param_2 + -0x6cf0,param_3 + -0x1174);
  iVar1 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + 0x6d64))();
  if (iVar1 != 0) {
    (**(code **)(in_stack_00000018 + -0x7a88))
              (*(int *)(in_stack_00000018 + -0x7fd4) + -0x11c4,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x1264,0x1b8,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x1190);
  }
                    /* WARNING: Could not recover jumptable at 0x00038164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_stack_00000018 + -0x7d78))(*(undefined4 *)(unaff_s0 + 0x20));
  return;
}



// ==== rts_av_release_osd2 @ 0003816c size=8

void rts_av_release_osd2(void)

{
  return;
}



// ==== rts_jpgencoder_post_connect @ 000381dc size=296

undefined4 rts_jpgencoder_post_connect(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  
  if (param_1 == 0) {
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x988,0x1c3,puVar5);
    uVar4 = 0x1c3;
  }
  else {
    if (param_2 != 0) goto LAB_000382a4;
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x69bc;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x988,0x1c4,puVar5);
    uVar4 = 0x1c4;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar5,PTR_s_snd_device_0004ffec_0x14_0006326c + -0xe20,uVar4,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x9a4);
LAB_000382a4:
  iVar1 = (*(code *)PTR_rts_av_get_pipe_src_000636f0)();
  if (iVar1 != 0) {
    iVar2 = (*(code *)PTR_rts_av_get_unit_priv_00063344)(param_1);
    if (iVar2 == 0) {
      return 0xfffffff6;
    }
    iVar3 = (*(code *)PTR_rts_av_get_unit_id_000635a0)(iVar1);
    if ((iVar3 == 0x707369) ||
       (iVar1 = (*(code *)PTR_rts_av_find_src_by_id_000632ac)(iVar1), iVar1 != 0)) {
      uVar4 = (*(code *)PTR_rts_av_get_unit_attr_00063808)(iVar1,auStack_18);
      iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
      if (iVar1 != 0) {
        return uVar4;
      }
      if (-1 < *(int *)(iVar2 + 0x40)) {
        (*(code *)PTR_rts_isp_v4l2_close_0006389c)();
      }
      puVar5 = PTR_rts_isp_v4l2_open_000639a0;
      *(undefined4 *)(iVar2 + 0x40) = 0xffffffff;
      uVar4 = (*(code *)puVar5)(local_14);
      *(undefined4 *)(iVar2 + 0x40) = uVar4;
      return 0;
    }
  }
  return 0;
}



// ==== rts_aac_encode_close @ 00038304 size=40

undefined4 rts_aac_encode_close(void)

{
  return 0;
}



// ==== rts_isp_get_ae_gain @ 000385e0 size=504

void rts_isp_get_ae_gain(undefined *param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int unaff_s1;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1 == (undefined *)0x0) {
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0xdb4;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xaf0,0x74,puVar5);
    uVar4 = 0x74;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0xe20;
    param_1 = puVar5;
    param_2 = unaff_s1;
  }
  else {
    if (*(int *)(param_1 + 0x44) == 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0xaf0,0x75,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0xda8);
    }
    if (*(int *)(param_1 + 0x44) != 0) goto LAB_000386b8;
    uVar4 = 0x75;
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0xda8;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0xe20;
  }
  while( true ) {
    (*(code *)PTR___assert_000637b8)
              (puVar5,puVar2,uVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0xb08);
LAB_000386b8:
    if (param_2 != 0) break;
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x398;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xaf0,0x76,puVar5);
    uVar4 = 0x76;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0xe20;
    param_1 = puVar5;
  }
  uVar6 = *(undefined4 *)(param_1 + 0x3c);
  uVar4 = (*(code *)PTR_rts_av_get_buffer_0006379c)(param_2);
  (*(code *)PTR_rts_queue_push_back_00063310)(uVar6,uVar4);
  uVar7 = (*(code *)PTR_rts_get_monotonic_raw_time_0006355c)();
  uVar8 = (*(code *)PTR_rts_av_get_buffer_ts_00063294)(param_2);
  uVar1 = (uint)uVar7 - (int)uVar8;
  iVar3 = ((int)((ulonglong)uVar7 >> 0x20) - (int)((ulonglong)uVar8 >> 0x20)) -
          (uint)((uint)uVar7 < uVar1);
  if ((iVar3 != 0) || (60000000 < uVar1)) {
    uVar7 = (*(code *)PTR___udivdi3_00063af8)(uVar1,iVar3,1000000,0);
    (*(code *)PTR_rts_log_000635ec)
              (3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0xd90,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xaf0,0x7d,uVar7);
  }
  return;
}



// ==== rts_jpgencoder_start @ 000387d8 size=1188

undefined4 rts_jpgencoder_start(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_30;
  undefined4 local_2c;
  ushort local_28;
  ushort local_26;
  int local_24;
  int local_20 [2];
  
  if (param_1 == 0) {
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x9fc,0x25c,puVar5);
    (*(code *)PTR___assert_000637b8)
              (puVar5,PTR_s_snd_device_0004ffec_0x14_0006326c + -0xe20,0x25c,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xa14);
  }
  piVar1 = (int *)(*(code *)PTR_rts_av_get_unit_priv_00063344)();
  if (piVar1 == (int *)0x0) {
    return 0xfffffff6;
  }
  if (piVar1[0x11] != 0) {
    return 0;
  }
  iVar8 = piVar1[1];
  if (iVar8 != 1) {
    if (iVar8 == 2) {
      local_30 = 1;
      goto LAB_000388c4;
    }
    uVar3 = 0x9d;
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0xd6c;
LAB_00038920:
    uVar2 = 0xffffffe3;
    (*(code *)PTR_rts_log_000635ec)
              (4,puVar5,PTR_s_snd_device_0004ffec_0x14_0006326c + -0xad8,uVar3,iVar8);
    goto LAB_00038b74;
  }
  local_30 = 0;
LAB_000388c4:
  iVar8 = *piVar1;
  if (iVar8 == 1) {
    local_2c = 2;
  }
  else {
    if (iVar8 != 0) {
      if (iVar8 == 2) {
        local_2c = 3;
        goto LAB_00038934;
      }
      if (iVar8 != 3) {
        uVar3 = 0xad;
        puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0xd38;
        goto LAB_00038920;
      }
    }
    local_2c = 0;
  }
LAB_00038934:
  local_28 = (ushort)piVar1[2];
  local_26 = (ushort)piVar1[3];
  uVar2 = (*(code *)PTR_rtsjpgenc_init_00063b68)(piVar1 + 6);
  iVar8 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
  if (iVar8 == 0) {
    uVar2 = (*(code *)PTR_rtsjpgenc_set_config_00063444)(piVar1[6],&local_30);
    iVar8 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
    if (iVar8 == 0) {
      iVar8 = (*(code *)PTR_rts_isp_mem_open_000637e8)(0x82);
      piVar1[7] = iVar8;
      if (iVar8 < 0) {
        uVar2 = 0xffffffe8;
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1bd8,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + -0xad8,0xc1);
      }
      else {
        uVar7 = (uint)local_28 * (uint)local_26;
        if (-1 < piVar1[0x10]) {
          local_20[0] = 0;
          local_24 = 0;
          uVar3 = (*(code *)PTR_rts_get_v4l2_fmt_from_av_fmt_00063a18)(piVar1[1]);
          (*(code *)PTR_rts_v4l2_get_max_frmsize_00063918)(piVar1[0x10],uVar3,local_20,&local_24);
          if (uVar7 < (uint)(local_24 * local_20[0])) {
            uVar7 = local_24 * local_20[0];
          }
        }
        puVar5 = PTR_alloc_dma_memory_000637a8;
        iVar6 = piVar1[0xe];
        iVar8 = piVar1[7];
        *(uint *)(iVar6 + 4) = uVar7;
        *(uint *)(iVar6 + 0x10) = *(uint *)(iVar6 + 0x10) | 0xc;
        uVar3 = (*(code *)puVar5)(iVar8,iVar6);
        iVar8 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
        if (iVar8 == 0) {
          (*(code *)PTR_rts_isp_set_dma_info_00063434)
                    (*(undefined4 *)(iVar6 + 0xc),PTR_s_snd_device_0004ffec_0x14_0006326c + -0xcc0);
          iVar8 = piVar1[0xe];
          (*(code *)PTR_rts_av_set_buffer_callback_00063998)
                    (iVar8,piVar1,PTR_LAB_00063274 + -0x7a20);
          iVar6 = piVar1[0xf];
          uVar3 = (*(code *)PTR_rts_av_get_buffer_0006379c)(iVar8);
          (*(code *)PTR_rts_queue_push_back_00063310)(iVar6,uVar3);
          piVar1[0x11] = 1;
          uVar2 = 0;
          goto LAB_00038b74;
        }
        uVar2 = 0xfffffff5;
      }
    }
    else {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0xce4,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0xad8,0xbb);
    }
    (*(code *)PTR_free_dma_memory_00063580)(piVar1[7],piVar1[0xe]);
    if (piVar1[6] != 0) {
      (*(code *)PTR_rtsjpgenc_release_00063a7c)();
    }
    piVar1[6] = 0;
  }
  else {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0xd08,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xad8,0xb5,uVar2);
  }
LAB_00038b74:
  iVar8 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
  if (iVar8 == 0) {
    uVar3 = (*(code *)PTR_rts_av_find_attribute_0006340c)
                      (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0xcb4);
    (*(code *)PTR_set_mjpeg_ctrl_owner_000634ec)(uVar3,piVar1[6]);
    piVar1[0x28] = 0;
    piVar1[0x29] = 0;
    if (piVar1[0x14] == 0) {
      piVar4 = (int *)0x0;
      puVar5 = (undefined *)0x0;
      if (piVar1[0x15] != 0) {
        (*(code *)PTR_rtsjpgenc_set_epoll_hook_00063798)(piVar1[6],0,0);
        (*(code *)PTR_rtsjpgenc_use_sigio_00063a80)(piVar1[6],1);
        return 0;
      }
    }
    else {
      puVar5 = PTR_LAB_00063274 + -0x7c64;
      piVar4 = piVar1;
    }
    uVar2 = 0;
    (*(code *)PTR_rtsjpgenc_set_epoll_hook_00063798)(piVar1[6],piVar4,puVar5);
    (*(code *)PTR_rtsjpgenc_use_sigio_00063a80)(piVar1[6],0);
  }
  else {
    (*(code *)PTR_memset_000637dc)(piVar1 + 1,0,0x14);
  }
  return uVar2;
}



// ==== rts_jpgencoder_check_ready @ 00038c7c size=120

undefined4 rts_jpgencoder_check_ready(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)(PTR_LAB_00063274 + -0x7e80))();
  if (iVar1 == 0) {
    uVar3 = 0xffffffe1;
  }
  else {
    iVar2 = (*(code *)PTR_rts_queue_empty_00063b60)(*(undefined4 *)(iVar1 + 0x3c));
    uVar3 = 0xffffffec;
    if (iVar2 == 0) {
      if (*(int *)(iVar1 + 0x4c) < 10) {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0xffffffef;
    }
  }
  return uVar3;
}



// ==== rts_jpgencoder_run @ 00038cf4 size=1060

undefined4 rts_jpgencoder_run(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  code *pcVar11;
  uint uVar12;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar1 = (*(code *)(PTR_LAB_00063274 + -0x7e80))();
  local_1c = 0;
  if (iVar1 == 0) {
    return 0xffffffe1;
  }
  iVar2 = (*(code *)PTR_rts_queue_empty_00063b60)(*(undefined4 *)(iVar1 + 0x3c));
  if ((iVar2 != 0) ||
     ((*(code *)PTR_rts_av_pop_input_buffer_lk_000635e0)(param_1,&local_1c), local_1c == 0)) {
    return 0xffffffef;
  }
  local_30 = 0;
  uVar8 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  (*(code *)PTR_rts_av_get_buffer_profile_0006386c)(local_1c,&local_30);
  if (local_30 != 0) {
    if (((local_30 == *(int *)(iVar1 + 4)) && (local_2c == *(int *)(iVar1 + 8))) &&
       (local_28 == *(int *)(iVar1 + 0xc))) {
      if ((local_24 != *(int *)(iVar1 + 0x10)) || (local_20 != *(int *)(iVar1 + 0x14))) {
        *(int *)(iVar1 + 0x10) = local_24;
        uVar8 = 0;
        *(int *)(iVar1 + 0x14) = local_20;
      }
    }
    else {
      uVar8 = 0xffffffb5;
    }
  }
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar8);
  if (iVar2 != 0) goto LAB_00039028;
  puVar3 = (undefined4 *)(*(code *)PTR_rts_queue_pop_0006333c)(*(undefined4 *)(iVar1 + 0x3c));
  iVar2 = local_1c;
  puVar7 = PTR_rts_av_sync_dma_device_00063598;
  iVar9 = *(int *)(local_1c + 0xc);
  *(int *)(iVar1 + 0x20) = iVar9;
  *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0xc) * *(int *)(iVar1 + 8) + iVar9;
  *(undefined4 *)(iVar1 + 0x28) = puVar3[3];
  *(undefined4 *)(iVar1 + 0x2c) = puVar3[1];
  uVar8 = *puVar3;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x30) = uVar8;
  (*(code *)puVar7)(puVar3);
  uVar8 = (*(code *)PTR_rtsjpgenc_encode_000634e0)(*(undefined4 *)(iVar1 + 0x18),iVar1 + 0x20);
  (*(code *)PTR_rts_av_sync_dma_cpu_00063690)(puVar3);
  iVar9 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar8);
  if (iVar9 == 0) {
    uVar8 = 0;
    uVar6 = *(undefined4 *)(iVar2 + 0x2c);
    puVar3[2] = *(undefined4 *)(iVar1 + 0x34);
    uVar5 = *(undefined4 *)(iVar2 + 0x28);
    puVar3[0xb] = uVar6;
    puVar3[10] = uVar5;
  }
  else {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1c44,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xb48,0x13c,uVar8);
  }
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar8);
  if (iVar2 == 0) {
    pcVar11 = (code *)PTR_rts_av_push_back_output_buffer_lk_00063a0c;
    if (*(int *)(iVar1 + 0x48) != 0) {
      if (param_1 == 0) {
        puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + -0xb60,0x2c5,puVar7);
        uVar5 = 0x2c5;
      }
      else {
        if (puVar3[2] == 0) {
          (*(code *)PTR_rts_log_000635ec)
                    (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + -0xb60,0x2c8,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1c10);
        }
        if (puVar3[2] != 0) {
          puVar4 = (uint *)(*(code *)PTR_rts_av_create_auto_recycle_buffer_000632e8)
                                     (iVar1 + 0x4c,puVar3[2] + 0x1f);
          if (puVar4 == (uint *)0x0) {
            uVar8 = 0xfffffff5;
            (*(code *)PTR_rts_log_000635ec)
                      (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0xca4,
                       PTR_s_snd_device_0004ffec_0x14_0006326c + -0xb60,0x2cf);
          }
          else {
            uVar8 = 0;
            (*(code *)PTR_rts_av_set_buffer_offset_000635bc)(puVar4,*puVar4 & 0x1f);
            uVar12 = puVar3[0xb];
            puVar4[5] = puVar3[5];
            uVar10 = puVar3[10];
            uVar6 = puVar3[2];
            puVar4[0xb] = uVar12;
            puVar7 = PTR_rts_memcpy_000636c0;
            uVar5 = *puVar3;
            puVar4[10] = uVar10;
            (*(code *)puVar7)(*puVar4,uVar5,uVar6);
            puVar7 = PTR_rts_av_push_back_output_buffer_lk_00063a0c;
            puVar4[2] = puVar3[2];
            (*(code *)puVar7)(param_1,puVar4);
            (*(code *)PTR_rts_av_put_buffer_00063548)(puVar4);
            (*(code *)PTR_rts_get_monotonic_raw_time_0006355c)();
            (*(code *)PTR_rts_av_set_buffer_ts_00063850)(puVar3);
          }
          goto LAB_00039018;
        }
        uVar5 = 0x2c8;
        puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1c10;
      }
      pcVar11 = (code *)PTR___assert_000637b8;
      (*(code *)PTR___assert_000637b8)
                (puVar7,PTR_s_snd_device_0004ffec_0x14_0006326c + -0xe20,uVar5,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0xb78);
    }
    (*pcVar11)(param_1,puVar3);
  }
LAB_00039018:
  (*(code *)PTR_rts_av_put_buffer_00063548)(puVar3);
LAB_00039028:
  if (local_1c != 0) {
    (*(code *)PTR_rts_av_put_buffer_00063548)();
  }
  return uVar8;
}



// ==== rts_jpgencoder_set_attr @ 00039118 size=200

undefined4 rts_jpgencoder_set_attr(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((param_1 == 0) || (param_2 == (uint *)0x0)) ||
     (iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)(), iVar1 == 0)) {
    return 0xfffffff6;
  }
  uVar3 = 0xffffffeb;
  if (*param_2 < 3) {
    uVar3 = 0;
  }
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
  if (iVar2 != 0) {
    return uVar3;
  }
  (*(code *)PTR_memcpy_00063908)(iVar1,param_2,4);
  (*(code *)PTR_rts_av_set_unit_rotation_0006343c)(param_1,*param_2);
  return 0;
}



// ==== rts_jpgencoder_get_attr @ 000391e0 size=120

undefined4 rts_jpgencoder_get_attr(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0xfffffff6;
  }
  if ((param_2 != 0) && (iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)(), iVar1 != 0)) {
    (*(code *)PTR_memcpy_00063908)(param_2,iVar1,4);
    return 0;
  }
  return 0xfffffff6;
}



// ==== rts_jpgencoder_set_profile @ 00039374 size=372

undefined4 rts_jpgencoder_set_profile(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int *unaff_s0;
  uint uVar6;
  
  uVar5 = 0x359;
  if (param_1 == 0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    param_2 = unaff_s0;
LAB_000393d0:
    (*(code *)PTR___assert_000637b8)
              (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0xe20,uVar5,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xbcc);
  }
  else if (param_2 == (int *)0x0) {
    uVar5 = 0x35a;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac8;
    goto LAB_000393d0;
  }
  iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
  if (iVar1 == 0) {
    return 0xfffffff6;
  }
  iVar2 = (*(code *)PTR_memcmp_000634cc)(param_2,iVar1 + 4,0x14);
  if (iVar2 == 0) {
LAB_000394bc:
    uVar5 = 0;
  }
  else {
    if ((*param_2 - 1U < 2) && (param_2[1] - 0x90U < 0xf61)) {
      if (0xf90 < param_2[2] - 0x60U) {
        return 0xffffffeb;
      }
      uVar6 = param_2[3];
      if (uVar6 == 0) {
        return 0xffffffeb;
      }
      uVar3 = param_2[4];
      if ((uVar3 != 0) && (uVar6 <= uVar3)) {
        if (uVar6 == 0) {
          trap(0x1c00);
        }
        if (uVar3 / uVar6 < 0x10000) {
          (*(code *)PTR_memcpy_00063908)(iVar1 + 4,param_2,0x14);
          if (*(int *)(iVar1 + 0x44) != 0) {
            (*(code *)(PTR_LAB_00063274 + -0x6da8))(iVar1);
          }
          goto LAB_000394bc;
        }
      }
    }
    uVar5 = 0xffffffeb;
  }
  return uVar5;
}



// ==== rts_jpgencoder_pre_disconnect @ 000394e8 size=192

undefined4 rts_jpgencoder_pre_disconnect(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  code *pcVar4;
  
  pcVar4 = (code *)PTR_rts_av_get_unit_priv_00063344;
  if (param_1 == 0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x9c4,0x1e7,puVar3);
    pcVar4 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0xe20,0x1e7,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x9e4);
  }
  iVar1 = (*pcVar4)();
  if (iVar1 == 0) {
    uVar2 = 0xfffffff6;
  }
  else {
    if (-1 < *(int *)(iVar1 + 0x40)) {
      (*(code *)PTR_rts_isp_v4l2_close_0006389c)();
    }
    uVar2 = 0;
    *(undefined4 *)(iVar1 + 0x40) = 0xffffffff;
  }
  return uVar2;
}



// ==== rts_jpgencoder_stop @ 000395a8 size=204

undefined4 rts_jpgencoder_stop(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  code *pcVar4;
  
  pcVar4 = (code *)PTR_rts_av_get_unit_priv_00063344;
  if (param_1 == 0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xb1c,0x282,puVar3);
    pcVar4 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0xe20,0x282,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xb30);
  }
  iVar1 = (*pcVar4)();
  if (iVar1 == 0) {
    uVar2 = 0xfffffff6;
  }
  else {
    uVar2 = 0;
    if (*(int *)(iVar1 + 0x50) != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0xc4c,*(undefined4 *)(iVar1 + 0xa0),
                 *(undefined4 *)(iVar1 + 0xa4));
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ==== rts_jpgencoder_get_profile @ 00039674 size=224

undefined4 rts_jpgencoder_get_profile(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  code *pcVar6;
  
  pcVar6 = (code *)PTR_rts_av_get_unit_priv_00063344;
  if (param_1 == 0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xb94,0x33e,puVar4);
    param_2 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0xe20);
    pcVar6 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (puVar4,param_2,0x33e,PTR_s_snd_device_0004ffec_0x14_0006326c + -0xbb0);
  }
  piVar1 = (int *)(*pcVar6)();
  if (piVar1 == (int *)0x0) {
    uVar2 = 0xffffffe1;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      iVar3 = *piVar1;
      *param_2 = 0x300;
      iVar5 = piVar1[3];
      if (iVar3 == 0) {
        param_2[1] = piVar1[2];
      }
      else {
        param_2[1] = iVar5;
        iVar5 = piVar1[2];
      }
      param_2[2] = iVar5;
      param_2[3] = piVar1[4];
      param_2[4] = piVar1[5];
    }
    uVar2 = 0;
  }
  return uVar2;
}



// ==== rts_jpgencoder_exec_cmd @ 00039ab8 size=204

undefined4 rts_jpgencoder_exec_cmd(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    uVar2 = 0xfffffff6;
  }
  else {
    iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
    if (iVar1 == 0) {
      uVar2 = 0xffffffe1;
    }
    else {
      uVar2 = 0xffffffcb;
      if (*param_2 == 0x32037672) {
        piVar3 = (int *)param_2[5];
        if (piVar3 != (int *)0x0) {
          iVar1 = (*(code *)PTR_rts_av_find_attribute_0006340c)
                            (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0xcb4);
          if (iVar1 == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = (*(code *)PTR_to_mjpeg_ctrl_00063774)(iVar1);
          }
          uVar2 = 0xffffffe1;
          if (iVar1 != 0) {
            uVar2 = 0;
          }
          *piVar3 = iVar1;
        }
      }
    }
  }
  return uVar2;
}



// ==== rts_jpgencoder_init @ 00039c3c size=520

undefined4 rts_jpgencoder_init(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == 0) {
    return 0xfffffff6;
  }
  puVar2 = (undefined4 *)
           (*(code *)PTR___rts_calloc_00063a28)
                     (1,0xb8,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x954,0x165);
  puVar1 = PTR_rts_av_new_buffer_000639e0;
  if (puVar2 == (undefined4 *)0x0) {
    return 0xfffffff5;
  }
  puVar2[6] = 0;
  puVar2[7] = 0xffffffff;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  iVar3 = (*(code *)puVar1)(0);
  puVar2[0xe] = iVar3;
  if (iVar3 != 0) {
    (*(code *)PTR_rts_av_set_buffer_observer_000639c4)(iVar3,param_1);
    iVar3 = (*(code *)PTR_rts_queue_init_000635dc)();
    puVar2[0xf] = iVar3;
    puVar1 = PTR_rts_av_set_unit_rotation_0006343c;
    if (iVar3 != 0) {
      *puVar2 = 0;
      (*(code *)puVar1)(param_1,0);
      puVar1 = PTR_alloc_mjpeg_ctrl_000632f4;
      puVar2[0x10] = 0xffffffff;
      iVar3 = (*(code *)puVar1)(puVar2[6]);
      if (iVar3 != 0) {
        (*(code *)PTR_rts_av_obj_set_name_000638e8)
                  (iVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0xcb4);
        uVar4 = (*(code *)PTR_rts_av_register_attribute_00063788)(param_1,iVar3);
        iVar5 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
        if (iVar5 == 0) {
          iVar3 = (*(code *)PTR_rts_isp_get_hz_0006353c)();
          if (iVar3 < 500) {
            puVar2[0x14] = 1;
          }
          else {
            puVar2[0x14] = 0;
          }
          puVar1 = PTR_rts_av_set_unit_priv_0006374c;
          puVar2[0x15] = 0;
          puVar2[0x2d] = param_1;
          (*(code *)puVar1)(param_1,puVar2);
          (*(code *)PTR_rts_log_000635ec)
                    (1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0xc28,puVar2[0x14],puVar2[0x15]);
          return 0;
        }
        (*(code *)PTR_rts_av_obj_put_00063ab8)(iVar3);
      }
      uVar4 = 0;
      goto LAB_00039d80;
    }
  }
  uVar4 = 0xfffffff5;
LAB_00039d80:
  (*(code *)PTR_rts_av_set_unit_priv_0006374c)(param_1,0);
  (*(code *)(PTR_LAB_00063274 + -0x647c))(puVar2);
  return uVar4;
}



// ==== rts_jpgencoder_cleanup @ 00039e44 size=140

undefined4 rts_jpgencoder_cleanup(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
    if (iVar1 != 0) {
      (*(code *)PTR_rts_av_set_unit_priv_0006374c)(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00039eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(PTR_LAB_00063274 + -0x647c))(iVar1);
      return uVar2;
    }
  }
  return 0xfffffff6;
}



// ==== rts_av_query_mjpeg_ctrl @ 0003a7fc size=72

void rts_av_query_mjpeg_ctrl(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_20 [5];
  undefined4 local_c;
  
  local_20[0] = 0x32037672;
  local_c = param_2;
  (*(code *)PTR_rts_av_do_cmd_00063488)(param_1,0x67706a6d,local_20);
  return;
}



// ==== rts_av_release_mjpeg_ctrl @ 0003a844 size=8

void rts_av_release_mjpeg_ctrl(void)

{
  return;
}



// ==== rts_av_get_mjpeg_ctrl @ 0003a84c size=136

void rts_av_get_mjpeg_ctrl(undefined *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)PTR_get_mjpeg_ctrl_00063b70;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2674;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x738,0xfc,param_1);
    UNRECOVERED_JUMPTABLE = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x938,0xfc,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x750);
  }
                    /* WARNING: Could not recover jumptable at 0x0003a8cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + -0x6c);
  return;
}



// ==== rts_av_set_mjpeg_ctrl @ 0003a8d4 size=136

void rts_av_set_mjpeg_ctrl(undefined *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)PTR_set_mjpeg_ctrl_000638ec;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2674;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x768,0x107,param_1);
    UNRECOVERED_JUMPTABLE = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x938,0x107,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x780);
  }
                    /* WARNING: Could not recover jumptable at 0x0003a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + -0x6c);
  return;
}



// ==== rts_av_query_aec_ctrl @ 0003c0e8 size=164

void rts_av_query_aec_ctrl(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 == 0) {
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x267c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -700,0x2ce,puVar1);
    (*(code *)PTR___assert_000637b8)
              (puVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f0,0x2ce,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2d4);
  }
  (*(code *)PTR_rts_av_do_cmd_00063488)();
  return;
}



// ==== rts_av_set_aec_ctrl @ 0003c18c size=348

undefined4 rts_av_set_aec_ctrl(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint local_18 [3];
  
  puVar4 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2674);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2e8,0x2da,puVar4);
    param_1 = puVar4;
    (*(code *)PTR___assert_000637b8)
              (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f0,0x2da,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2fc);
  }
  if (param_1[-0x11] == 0) {
    uVar2 = 0xfffffff6;
  }
  else {
    (*(code *)PTR_pthread_mutex_lock_00063ae8)(puVar4 + -6);
    uVar1 = puVar4[2];
    iVar3 = 0;
    if (puVar4[-0x11] != 0) {
      local_18[0] = 0xf;
      if ((0xe < (int)uVar1) && (local_18[0] = 0x28, (int)uVar1 < 0x29)) {
        local_18[0] = uVar1;
      }
      (*(code *)PTR_RTAecNs_API_Set_00063658)(puVar4[-0x11],local_18,4,4);
      iVar3 = puVar4[-0x11];
    }
    if (iVar3 != 0) {
      local_18[0] = (uint)(puVar4[1] != 0);
      (*(code *)PTR_RTAecNs_API_Set_00063658)(iVar3,local_18,4,1);
    }
    puVar4[-7] = *puVar4;
    if (puVar4[-0x17] != 0) {
      (*(code *)(PTR_LAB_00063274 + -0x5690))(puVar4 + -0x17);
    }
    (*(code *)PTR_pthread_mutex_unlock_00063890)(puVar4 + -6);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== rts_av_release_aec_ctrl @ 0003c2e8 size=8

void rts_av_release_aec_ctrl(void)

{
  return;
}



// ==== rts_audio_set_params @ 0003c5e4 size=976

int rts_audio_set_params(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  code *pcVar7;
  int local_28;
  uint local_24 [2];
  
  uVar6 = *param_1;
  iVar1 = (*(code *)PTR_snd_pcm_hw_params_sizeof_00063b14)();
  uVar2 = (*(code *)PTR_snd_pcm_hw_params_sizeof_00063b14)();
  puVar5 = &stack0xffffffd0 + -(iVar1 + 0xeU & 0xfffffff8);
  (*(code *)PTR_memset_000637dc)(puVar5,0,uVar2);
  iVar1 = (*(code *)PTR_snd_pcm_hw_params_any_00063b58)(uVar6,puVar5);
  if (iVar1 < 0) {
    uVar2 = 0x1a3;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -500;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1b8;
  }
  else {
    iVar1 = (*(code *)PTR_snd_pcm_hw_params_set_access_00063438)(uVar6,puVar5,3);
    if (iVar1 < 0) {
      uVar2 = 0x1ab;
      puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1cc;
      puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1b8;
    }
    else {
      iVar1 = param_1[0x12];
      if (iVar1 == 0x10) {
        uVar2 = 2;
      }
      else if (iVar1 == 0x18) {
        uVar2 = 0x20;
      }
      else {
        if (iVar1 != 8) {
          (*(code *)PTR_rts_log_000635ec)
                    (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1a8,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1b8,0x1bb);
          return -0x16;
        }
        uVar2 = 1;
      }
      iVar1 = (*(code *)PTR_snd_pcm_hw_params_set_format_000635f8)(uVar6,puVar5,uVar2);
      if (iVar1 < 0) {
        uVar2 = 0x1c0;
        puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x184;
        puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1b8;
      }
      else {
        iVar1 = (*(code *)PTR_snd_pcm_hw_params_set_channels_00063ad0)(uVar6,puVar5,param_1[0x13]);
        if (iVar1 < 0) {
          uVar2 = 0x1c8;
          puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x15c;
          puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1b8;
        }
        else {
          iVar1 = (*(code *)PTR_snd_pcm_hw_params_set_rate_near_00063abc)
                            (uVar6,puVar5,param_1 + 0x14,0);
          if (iVar1 < 0) {
            uVar2 = 0x1d0;
            puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x134;
            puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1b8;
          }
          else {
            iVar1 = (*(code *)PTR_snd_pcm_hw_params_get_buffer_time_max_00063680)(puVar5,local_24,0)
            ;
            if (iVar1 < 0) {
              uVar2 = 0x1d8;
              puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x110;
              puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1b8;
            }
            else {
              if (local_24[0] == 0) {
                (*(code *)PTR_rts_log_000635ec)
                          (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0xe8,
                           PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1b8,0x1dc);
                return -0x31;
              }
              if (500000 < local_24[0]) {
                local_24[0] = 500000;
              }
              local_28 = param_1[0x15];
              pcVar7 = (code *)PTR_snd_pcm_hw_params_set_period_size_near_00063514;
              if (local_28 == 0) {
                local_28 = 30000;
                pcVar7 = (code *)PTR_snd_pcm_hw_params_set_period_time_near_000636b0;
              }
              iVar1 = (*pcVar7)(uVar6,puVar5,&local_28,0);
              if (iVar1 < 0) {
                uVar2 = 0x1ef;
                puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -200;
                puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1b8;
              }
              else {
                iVar1 = (*(code *)PTR_snd_pcm_hw_params_set_buffer_time_near_000632a0)
                                  (uVar6,puVar5,local_24,0);
                if (iVar1 < 0) {
                  uVar2 = 0x1f7;
                  puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0xa4;
                  puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1b8;
                }
                else {
                  iVar1 = (*(code *)PTR_snd_pcm_hw_params_00063794)(uVar6,puVar5);
                  if (-1 < iVar1) {
                    if (param_1[0x15] != 0) {
                      return 0;
                    }
                    (*(code *)PTR_snd_pcm_hw_params_get_period_size_000638e0)
                              (puVar5,param_1 + 0x15,0);
                    return 0;
                  }
                  uVar2 = 0x1fe;
                  puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x80;
                  puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1b8;
                }
              }
            }
          }
        }
      }
    }
  }
  (*(code *)PTR_rts_log_000635ec)(4,puVar3,puVar4,uVar2);
  return iVar1;
}



// ==== rts_audio_init @ 0003ca80 size=180

undefined4 rts_audio_init(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    uVar3 = 0xfffffff6;
  }
  else {
    puVar2 = (undefined4 *)
             (*(code *)PTR___rts_calloc_00063a28)
                       (1,0x90,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x2a4,0x13f);
    puVar1 = PTR_memset_000637dc;
    if (puVar2 == (undefined4 *)0x0) {
      uVar3 = 0xfffffff5;
    }
    else {
      *puVar2 = 0;
      puVar2[0x16] = 0;
      puVar2[0x17] = 0;
      puVar2[0x18] = 0;
      (*(code *)puVar1)(puVar2 + 2,0,0x40);
      puVar1 = PTR_rts_av_set_unit_priv_0006374c;
      puVar2[0x22] = param_1;
      (*(code *)puVar1)(param_1,puVar2);
      uVar3 = 0;
    }
  }
  return uVar3;
}



// ==== rts_audio_cleanup @ 0003cb34 size=152

undefined4 rts_audio_cleanup(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  if ((param_1 != 0) && (iVar2 = (*(code *)PTR_rts_av_get_unit_priv_00063344)(), iVar2 != 0)) {
    (*(code *)PTR_rts_av_set_unit_priv_0006374c)(param_1,0);
    (*(code *)(PTR_LAB_00063274 + -0x364c))(iVar2);
    puVar1 = PTR_rts_free_000638d4;
    *(undefined4 *)(iVar2 + 0x88) = 0;
    (*(code *)puVar1)(iVar2);
    return 0;
  }
  return 0xfffffff6;
}



// ==== rts_audio_start @ 0003cbcc size=572

/* WARNING: Control flow encountered bad instruction data */

undefined4 rts_audio_start(int param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if ((param_1 == 0) || (iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)(), iVar1 == 0)) {
    uVar4 = 0xfffffff6;
  }
  else {
    uVar4 = 0;
    if (*(int *)(iVar1 + 0x5c) == 0) {
      if (*(int *)(iVar1 + 0x60) != 0) {
        iVar5 = 0;
        pcVar7 = (code *)(PTR_LAB_00063274 + -0x3d10);
        (*pcVar7)(iVar1);
        iVar8 = *(int *)(iVar1 + 0x4c);
        iVar9 = *(int *)(iVar1 + 0x48);
        iVar10 = *(int *)(iVar1 + 0x54);
        do {
          iVar2 = (*(code *)PTR_rts_av_new_buffer_000639e0)((uint)(iVar8 * iVar9 * iVar10) >> 3);
          *(int *)(iVar1 + iVar5 + 100) = iVar2;
          if (iVar2 == 0) {
            uVar4 = 0x72;
            puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58;
            goto LAB_0003cd00;
          }
          iVar5 = iVar5 + 4;
        } while (iVar5 != 0x14);
        iVar5 = (*(code *)PTR_rts_queue_init_000635dc)();
        *(int *)(iVar1 + 0x78) = iVar5;
        if (iVar5 == 0) {
          uVar4 = 0x7a;
          puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x34;
LAB_0003cd00:
          uVar6 = 0xfffffff5;
          (*(code *)PTR_rts_log_000635ec)
                    (4,puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x290,uVar4);
          (*pcVar7)(iVar1);
        }
        else {
          pcVar7 = (code *)(PTR_LAB_00063274 + -0x3c18);
          iVar5 = iVar1;
          do {
            iVar8 = *(int *)(iVar5 + 100);
            if (iVar8 != 0) {
              (*(code *)PTR_rts_av_set_buffer_callback_00063998)(iVar8,iVar1,pcVar7);
              (*(code *)PTR_rts_get_monotonic_raw_time_0006355c)();
              (*(code *)PTR_rts_av_set_buffer_ts_00063850)(iVar8);
              (*pcVar7)(iVar1,iVar8);
            }
            iVar5 = iVar5 + 4;
          } while (iVar5 != iVar1 + 0x14);
          uVar6 = 0;
        }
        iVar5 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar6);
        if (iVar5 != 0) {
          return uVar6;
        }
      }
      if (*(int *)(iVar1 + 4) == 1) {
        if (*(int *)(iVar1 + 0x7c) != 0) {
          (*(code *)PTR_rts_audio_tfilter_free_00063608)();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar4 = 0;
      *(undefined4 *)(iVar1 + 0x5c) = 1;
    }
  }
  return uVar4;
}



// ==== rts_audio_stop @ 0003ce70 size=164

undefined4 rts_audio_stop(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
    if (iVar1 == 0) {
      uVar2 = 0xfffffff6;
    }
    else {
      if (*(int *)(iVar1 + 0x5c) != 0) {
        if (*(int *)(iVar1 + 0x60) != 0) {
          (*(code *)(PTR_LAB_00063274 + -0x3d10))(iVar1);
        }
        *(undefined4 *)(iVar1 + 0x5c) = 0;
        if (*(int *)(iVar1 + 0x7c) != 0) {
          (*(code *)PTR_rts_audio_tfilter_free_00063608)();
        }
        *(undefined4 *)(iVar1 + 0x7c) = 0;
      }
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xfffffff6;
}



// ==== rts_audio_check_ready @ 0003cf14 size=256

undefined4 rts_audio_check_ready(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  if (param_1 == 0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x248,0x17f,puVar3);
    uVar2 = 0x17f;
  }
  else {
    iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
    if (iVar1 != 0) goto LAB_0003cfdc;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2a0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x248,0x182,puVar3);
    uVar2 = 0x182;
  }
  iVar1 = (*(code *)PTR___assert_000637b8)
                    (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x294,uVar2,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + 0x230);
LAB_0003cfdc:
  if (*(int *)(iVar1 + 0x78) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (*(code *)PTR_rts_queue_empty_00063b60)();
    uVar2 = 0xffffffef;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ==== rts_audio_pop_idle @ 0003d014 size=160

undefined4 rts_audio_pop_idle(undefined *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2a0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x21c,399,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x294,399,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x208);
  }
  if (*(int *)(param_1 + 0x78) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0003d098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_rts_queue_pop_0006333c)();
    return uVar1;
  }
  return 0;
}



// ==== rts_audio_get_attr @ 0003d0b4 size=136

undefined4 rts_audio_get_attr(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
    if (iVar1 == 0) {
      uVar2 = 0xfffffff6;
    }
    else {
      uVar2 = 0;
      if ((param_2 != 0) && (uVar2 = 0, *(int *)(iVar1 + 0x58) != 0)) {
        (*(code *)PTR_memcpy_00063908)(param_2,iVar1 + 8,0x50);
        uVar2 = 0;
      }
    }
    return uVar2;
  }
  return 0xfffffff6;
}



// ==== rts_audio_set_attr @ 0003d13c size=780

undefined4 rts_audio_set_attr(int param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  
  if (((param_1 == 0) || (param_2 == 0)) ||
     (piVar2 = (int *)(*(code *)PTR_rts_av_get_unit_priv_00063344)(), piVar2 == (int *)0x0)) {
    uVar6 = 0xfffffff6;
  }
  else {
    piVar7 = piVar2 + 2;
    iVar3 = (*(code *)PTR_strcasecmp_00063554)(param_2,piVar7);
    if (iVar3 != 0) {
      (*(code *)(PTR_LAB_00063274 + -0x364c))(piVar2);
    }
    if (piVar2[0x16] == 0) {
      (*(code *)PTR_strcpy_000636f8)(piVar7,param_2);
      uVar6 = 0;
      if (piVar2[0x16] == 0) {
        iVar3 = (*(code *)PTR_snd_pcm_open_00063394)(piVar2,piVar7,piVar2[1],0);
        if (iVar3 == 0) {
          iVar3 = piVar2[0x22];
          if ((iVar3 != 0) && (iVar8 = *piVar2, iVar8 != 0)) {
            iVar4 = (*(code *)PTR_snd_pcm_poll_descriptors_count_00063874)(iVar8);
            puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
            if (iVar4 < 1) {
              (*(code *)PTR_rts_log_000635ec)
                        (4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x10,
                         PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1d0,0xd8);
            }
            else {
              puVar5 = (undefined4 *)
                       (*(code *)PTR___rts_calloc_00063a28)
                                 (iVar4,8,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1d0,0xdc);
              if (puVar5 != (undefined4 *)0x0) {
                iVar8 = (*(code *)PTR_snd_pcm_poll_descriptors_000632d8)(iVar8,puVar5,iVar4);
                if (iVar8 < 0) {
                  (*(code *)PTR_rts_log_000635ec)
                            (4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x38,puVar1 + 0x1d0,0xe2,
                             iVar8);
                }
                else {
                  iVar8 = 0;
                  puVar9 = puVar5;
                  do {
                    uVar6 = 5;
                    if ((*(ushort *)(puVar9 + 1) & 1) != 0) {
LAB_0003d370:
                      (*(code *)PTR_rts_av_set_unit_poll_fd_0006395c)(iVar3,*puVar9,uVar6);
                      break;
                    }
                    iVar8 = iVar8 + 1;
                    if ((*(ushort *)(puVar9 + 1) & 4) != 0) {
                      uVar6 = 6;
                      goto LAB_0003d370;
                    }
                    puVar9 = puVar9 + 2;
                  } while (iVar8 != iVar4);
                }
                (*(code *)PTR_rts_free_000638d4)(puVar5);
              }
            }
          }
          uVar6 = 0;
          piVar2[0x16] = 1;
        }
        else {
          uVar6 = 0xffffffe8;
          (*(code *)PTR_rts_log_000635ec)
                    (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x14,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1e4,0x109);
        }
      }
      iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar6);
      if (iVar3 != 0) {
        return uVar6;
      }
    }
    puVar1 = PTR_LAB_00063274;
    if (piVar2[0x17] == 0) {
      piVar2[0x14] = *(int *)(param_2 + 0x48);
      piVar2[0x12] = *(int *)(param_2 + 0x40);
      piVar2[0x13] = *(int *)(param_2 + 0x44);
      piVar2[0x15] = *(int *)(param_2 + 0x4c);
      uVar6 = (*(code *)(puVar1 + -0x3a1c))(piVar2);
      iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar6);
      if (iVar3 == 0) {
        *(int *)(param_2 + 0x48) = piVar2[0x14];
        *(int *)(param_2 + 0x4c) = piVar2[0x15];
        uVar6 = 0;
      }
    }
    else {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x68,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + 500,0x239);
      uVar6 = 0xffffffef;
    }
  }
  return uVar6;
}



// ==== rts_audio_get_profile @ 0003d448 size=152

undefined4 rts_audio_get_profile(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
    if (iVar1 == 0) {
      uVar2 = 0xfffffff6;
    }
    else if (*(int *)(iVar1 + 0x58) == 0) {
      uVar2 = 0xffffffe1;
    }
    else {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 0x8001;
        param_2[1] = *(undefined4 *)(iVar1 + 0x50);
        param_2[2] = *(undefined4 *)(iVar1 + 0x48);
        param_2[3] = *(undefined4 *)(iVar1 + 0x4c);
      }
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xfffffff6;
}



// ==== rts_audio_set_profile @ 0003d4e0 size=248

undefined4 rts_audio_set_profile(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_60 [64];
  int local_20;
  int local_1c;
  int local_18;
  
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    if (*param_2 != 0x8001) {
      return 0xffffffeb;
    }
    iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x58) == 0) {
        return 0xffffffe1;
      }
      uVar2 = (*(code *)PTR_memcpy_00063908)(auStack_60,iVar1 + 8,0x50);
      if (((local_20 == param_2[2]) && (local_18 == param_2[1])) && (local_1c == param_2[3])) {
        return 0;
      }
      local_20 = param_2[2];
      local_1c = param_2[3];
      local_18 = param_2[1];
      uVar2 = (*(code *)PTR_rts_audio_set_attr_00063884)(param_1,uVar2);
      return uVar2;
    }
  }
  return 0xfffffff6;
}



// ==== rts_audio_xrun @ 0003d5d8 size=752

undefined4 rts_audio_xrun(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  double dStack_38;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  if (param_1 == 0) {
    return 0xfffffff6;
  }
  puVar1 = (undefined4 *)(*(code *)PTR_rts_av_get_unit_priv_00063344)();
  if (puVar1 == (undefined4 *)0x0) {
    return 0xfffffff6;
  }
  uVar7 = *puVar1;
  iVar2 = (*(code *)PTR_snd_pcm_status_sizeof_000639ac)();
  iVar2 = -(iVar2 + 0xeU & 0xfffffff8);
  uVar3 = (*(code *)PTR_snd_pcm_status_sizeof_000639ac)();
  puVar8 = &stack0xffffffd0 + iVar2;
  (*(code *)PTR_memset_000637dc)(puVar8,0,uVar3);
  iVar4 = (*(code *)PTR_snd_pcm_status_000635c4)(uVar7,puVar8);
  if (iVar4 < 0) {
    uVar3 = (*(code *)PTR_snd_strerror_0006348c)(iVar4);
    uVar7 = 0x297;
    *(undefined4 *)((int)&dStack_38 + iVar2) = uVar3;
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0xa8;
    puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1a8;
  }
  else {
    iVar4 = (*(code *)PTR_snd_pcm_status_get_state_00063298)(puVar8);
    if (iVar4 == 4) {
      (*(code *)PTR_clock_gettime_00063ac0)(1,&local_20);
      (*(code *)PTR_snd_pcm_status_get_trigger_htstamp_000637a4)(puVar8,&local_28);
      local_20 = local_20 - local_28;
      local_1c = local_1c - local_24;
      if (local_1c < 0) {
        local_20 = local_20 + -1;
        local_1c = local_1c + 1000000000;
      }
      if (puVar1[1] == 0) {
        puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x94;
      }
      else {
        puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0xa0;
      }
      *(double *)((int)&dStack_38 + iVar2) =
           (double)(local_20 * 1000) +
           (double)local_1c / *(double *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0x2c0);
      (*(code *)PTR_rts_log_000635ec)(1,PTR_s_snd_device_0004ffec_0x14_0006326c + 200,puVar5);
      iVar4 = (*(code *)PTR_snd_pcm_prepare_00063338)(uVar7);
      if (-1 < iVar4) {
        return 0;
      }
      uVar3 = (*(code *)PTR_snd_strerror_0006348c)(iVar4);
      uVar7 = 0x2ab;
      *(undefined4 *)((int)&dStack_38 + iVar2) = uVar3;
      puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0xe8;
      puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1a8;
    }
    else {
      iVar4 = (*(code *)PTR_snd_pcm_status_get_state_00063298)(puVar8);
      if (iVar4 != 5) {
        uVar3 = (*(code *)PTR_snd_pcm_status_get_state_00063298)(puVar8);
        uVar3 = (*(code *)PTR_snd_pcm_state_name_000632e0)(uVar3);
        *(undefined4 *)((int)&dStack_38 + iVar2) = uVar3;
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x10c,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1a8,0x2bf);
        return 0xffffffff;
      }
      if ((puVar1[1] != 1) || (iVar4 = (*(code *)PTR_snd_pcm_prepare_00063338)(uVar7), -1 < iVar4))
      {
        return 0;
      }
      uVar3 = (*(code *)PTR_snd_strerror_0006348c)(iVar4);
      uVar7 = 0x2b6;
      *(undefined4 *)((int)&dStack_38 + iVar2) = uVar3;
      puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0xe8;
      puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1a8;
    }
  }
  (*(code *)PTR_rts_log_000635ec)(4,puVar5,puVar6,uVar7);
  return 0xffffffe4;
}



// ==== rts_audio_calc_block_align @ 0003d8e0 size=16

int rts_audio_calc_block_align(int param_1,uint param_2)

{
  return (param_2 >> 3) * param_1;
}



// ==== rts_audio_calc_ts_delta @ 0003d8f0 size=52

/* WARNING: Removing unreachable block (ram,0x0003d908) */

uint rts_audio_calc_ts_delta(int param_1,uint param_2)

{
  if (param_2 / 100 == 0) {
    trap(0x1c00);
  }
  return (uint)(param_1 * 10000) / (param_2 / 100);
}



// ==== rts_audio_calc_volume @ 0003d924 size=348

undefined4 rts_audio_calc_volume(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int unaff_s1;
  int local_20;
  int local_1c;
  
  if (param_1 == (int *)0x0) {
    piVar2 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0x398);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 400,0x2db,piVar2);
    uVar1 = 0x2db;
    param_1 = piVar2;
    param_4 = unaff_s1;
LAB_0003d9fc:
    (*(code *)PTR___assert_000637b8)
              (piVar2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x294,uVar1,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x178);
  }
  else {
    if (*param_1 == 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + 400,0x2dc,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + 0x134);
    }
    if (*param_1 == 0) {
      uVar1 = 0x2dc;
      piVar2 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0x134);
      goto LAB_0003d9fc;
    }
  }
  (*(code *)PTR_compute_max_peak_000632dc)();
  if (param_4 != 1) {
    if (param_4 == 2) {
      param_1[7] = local_20;
      goto LAB_0003da5c;
    }
    local_20 = 0;
  }
  local_1c = 0;
  param_1[7] = local_20;
LAB_0003da5c:
  param_1[8] = local_1c;
  return 0;
}



// ==== rts_audio_is_end @ 0003da80 size=172

bool rts_audio_is_end(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 3;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0x398);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x164,0x2f4,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x294,0x2f4,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x150);
  }
  bVar1 = false;
  if (param_1[2] == iVar2) {
    iVar2 = (*(code *)PTR_memcmp_000634cc)
                      (*param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x144,3);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}



// ==== rts_audio_default_profile @ 0003db2c size=40

undefined4 * rts_audio_default_profile(undefined4 *param_1)

{
  *param_1 = 0x8001;
  param_1[1] = 8000;
  param_1[2] = 0x10;
  param_1[3] = 1;
  return param_1;
}



// ==== rts_fifo_free @ 0003db60 size=104

void rts_fifo_free(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      (*(code *)PTR_rts_free_000638d4)();
      *param_1 = 0;
    }
    (*(code *)PTR_rts_free_000638d4)(param_1);
    return;
  }
  return;
}



// ==== rts_fifo_reset @ 0003dbc8 size=24

void rts_fifo_reset(undefined4 *param_1)

{
  param_1[4] = 0;
  param_1[1] = *param_1;
  param_1[2] = *param_1;
  param_1[5] = 0;
  return;
}



// ==== rts_fifo_alloc @ 0003dbe0 size=188

int * rts_fifo_alloc(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  piVar2 = (int *)(*(code *)PTR___rts_calloc_00063a28)
                            (1,0x18,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x2d0,0x15);
  if (piVar2 != (int *)0x0) {
    iVar3 = (*(code *)PTR___rts_calloc_00063a28)(1,param_1,puVar1 + 0x2d0,0x19);
    *piVar2 = iVar3;
    puVar1 = PTR_rts_fifo_reset_00063944;
    piVar2[3] = iVar3 + param_1;
    (*(code *)puVar1)(piVar2);
    if (*piVar2 != 0) {
      return piVar2;
    }
    (*(code *)PTR_rts_free_000638d4)(piVar2);
  }
  return (int *)0x0;
}



// ==== rts_fifo_size @ 0003dc9c size=16

int rts_fifo_size(int param_1)

{
  return *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
}



// ==== rts_fifo_space @ 0003dcac size=68

int rts_fifo_space(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[3];
  iVar3 = *param_1;
  iVar1 = (*(code *)PTR_rts_fifo_size_00063424)();
  return (iVar2 - iVar3) - iVar1;
}



// ==== rts_fifo_drain @ 0003dcf0 size=148

void rts_fifo_drain(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (*(code *)PTR_rts_fifo_size_00063424)();
  if (iVar1 < param_2) {
    param_2 = (*(code *)PTR_rts_fifo_size_00063424)(param_1);
  }
  uVar2 = param_1[1] + param_2;
  param_1[1] = uVar2;
  if ((uint)param_1[3] <= uVar2) {
    param_1[1] = uVar2 - (param_1[3] - *param_1);
  }
  param_1[4] = param_1[4] + param_2;
  return;
}



// ==== rts_fifo_generic_write @ 0003dd84 size=260

int rts_fifo_generic_write(uint *param_1,int param_2,int param_3,code *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = param_1[5];
  uVar2 = param_1[2];
  iVar3 = param_3;
  do {
    iVar4 = param_1[3] - uVar2;
    if (iVar3 < (int)(param_1[3] - uVar2)) {
      iVar4 = iVar3;
    }
    if (param_4 == (code *)0x0) {
      iVar5 = param_2 + iVar4;
      (*(code *)PTR_memcpy_00063908)(uVar2,param_2,iVar4);
    }
    else {
      iVar1 = (*param_4)(param_2,uVar2,iVar4);
      iVar5 = param_2;
      if (iVar1 < 1) break;
    }
    uVar2 = uVar2 + iVar4;
    if (param_1[3] <= uVar2) {
      uVar2 = *param_1;
    }
    iVar3 = iVar3 - iVar4;
    uVar6 = uVar6 + iVar4;
    param_2 = iVar5;
  } while (0 < iVar3);
  param_1[5] = uVar6;
  param_1[2] = uVar2;
  return param_3 - iVar3;
}



// ==== rts_fifo_generic_read @ 0003de88 size=192

undefined4 rts_fifo_generic_read(int param_1,int param_2,int param_3,code *param_4)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4);
    if (param_3 <= iVar1) {
      iVar1 = param_3;
    }
    if (param_4 == (code *)0x0) {
      iVar2 = param_2 + iVar1;
      (*(code *)PTR_memcpy_00063908)(param_2,*(int *)(param_1 + 4),iVar1);
    }
    else {
      (*param_4)();
      iVar2 = param_2;
    }
    param_3 = param_3 - iVar1;
    (*(code *)PTR_rts_fifo_drain_00063578)(param_1,iVar1);
    param_2 = iVar2;
  } while (0 < param_3);
  return 0;
}



// ==== rts_fifo_realloc2 @ 0003df48 size=264

undefined4 rts_fifo_realloc2(int *param_1,uint param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  uVar2 = 0;
  if ((uint)(param_1[3] - *param_1) < param_2) {
    iVar3 = (*(code *)PTR_rts_fifo_size_00063424)();
    puVar4 = (undefined4 *)(*(code *)PTR_rts_fifo_alloc_00063790)(param_2);
    if (puVar4 == (undefined4 *)0x0) {
      uVar2 = 0xfffffff5;
    }
    else {
      (*(code *)PTR_rts_fifo_generic_read_0006391c)(param_1,*puVar4,iVar3,0);
      puVar4[2] = puVar4[2] + iVar3;
      iVar5 = *param_1;
      puVar4[5] = puVar4[5] + iVar3;
      if (iVar5 != 0) {
        (*(code *)PTR_rts_free_000638d4)();
      }
      puVar1 = PTR_memcpy_00063908;
      *param_1 = 0;
      (*(code *)puVar1)(param_1,puVar4,0x18);
      (*(code *)PTR_rts_free_000638d4)(puVar4);
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ==== rts_audio_encode_init @ 0003e050 size=148

undefined4 rts_audio_encode_init(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    uVar3 = 0xfffffff6;
  }
  else {
    puVar2 = (undefined4 *)
             (*(code *)PTR___rts_calloc_00063a28)
                       (1,0x70,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x730,0x75);
    if (puVar2 == (undefined4 *)0x0) {
      uVar3 = 0xfffffff5;
    }
    else {
      puVar2[0x19] = 0;
      puVar1 = PTR_rts_av_set_unit_priv_0006374c;
      *puVar2 = 0;
      puVar2[0x17] = 0;
      puVar2[0x18] = 0;
      (*(code *)puVar1)(param_1,puVar2);
      uVar3 = 0;
    }
  }
  return uVar3;
}



// ==== rts_audio_encode_stop @ 0003e0e4 size=76

undefined4 rts_audio_encode_stop(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
    uVar2 = 0xfffffff6;
    if (iVar1 != 0) {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xfffffff6;
}



// ==== rts_audio_encode_cleanup @ 0003e1a4 size=148

undefined4 rts_audio_encode_cleanup(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)(), iVar1 != 0)) {
    (*(code *)(PTR_LAB_00063274 + -0x1ed0))(iVar1);
    (*(code *)PTR_rts_free_000638d4)(iVar1);
    (*(code *)PTR_rts_av_set_unit_priv_0006374c)(param_1,0);
    return 0;
  }
  return 0xfffffff6;
}



// ==== rts_audio_encode_start @ 0003e238 size=588

undefined4 rts_audio_encode_start(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  if ((param_1 == 0) ||
     (piVar1 = (int *)(*(code *)PTR_rts_av_get_unit_priv_00063344)(), piVar1 == (int *)0x0)) {
    return 0xfffffff6;
  }
  if (*piVar1 != 0) {
    return 0;
  }
  uVar2 = (*(code *)PTR_rts_audio_codec_check_encode_id_000632b8)(piVar1[0x15]);
  iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
  if (iVar3 != 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x2e0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x718,0xa7);
    return uVar2;
  }
  local_38 = piVar1[0x15];
  if (local_38 == 4) {
    return 0;
  }
  local_28 = piVar1[0x16];
  local_34 = piVar1[0x13];
  local_30 = piVar1[0x11];
  local_2c = piVar1[0x12];
  iVar3 = (*(code *)PTR_rts_audio_create_codec_context_00063b4c)(local_38,0,&local_38);
  *piVar1 = iVar3;
  if (iVar3 == 0) {
    uVar2 = 0xfffffff5;
    goto LAB_0003e434;
  }
  if (local_38 == 4) {
    uVar2 = (*(code *)PTR_rts_audio_check_argument_00063330)(local_34,local_30,local_2c);
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
    if (iVar3 == 0) {
      iVar3 = *piVar1;
      *(int *)(iVar3 + 4) = local_34;
      *(int *)(iVar3 + 0xc) = local_30;
      *(int *)(iVar3 + 8) = local_2c;
      goto LAB_0003e388;
    }
  }
  else {
LAB_0003e388:
    iVar3 = *piVar1;
    uVar2 = 0xffffffe9;
    if (((piVar1[0x13] == *(int *)(iVar3 + 4)) && (piVar1[0x11] == *(int *)(iVar3 + 0xc))) &&
       (piVar1[0x12] == *(int *)(iVar3 + 8))) {
      iVar3 = (*(code *)PTR_rts_audio_fifo_alloc_00063804)(piVar1[0x11],piVar1[0x12],0x400);
      piVar1[0x17] = iVar3;
      if (iVar3 != 0) {
        iVar3 = (*(code *)PTR_rts_audio_calc_block_align_00063524)
                          (*(undefined4 *)(*piVar1 + 8),*(undefined4 *)(*piVar1 + 0xc));
        piVar1[0x18] = 0;
        piVar1[0x1a] = iVar3;
        iVar3 = *(int *)(*piVar1 + 0x10);
        piVar1[0x19] = 0;
        piVar1[0x16] = iVar3;
        uVar2 = 0;
        goto LAB_0003e434;
      }
      uVar2 = 0xfffffff5;
    }
  }
  (*(code *)(PTR_LAB_00063274 + -0x1ed0))(piVar1);
LAB_0003e434:
  iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
  if (iVar3 != 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x30c,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x718,0xb0);
  }
  return uVar2;
}



// ==== rts_audio_encode_check_ready @ 0003e484 size=280

undefined4 rts_audio_encode_check_ready(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  if (param_1 == 0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x6f8,199,puVar3);
    uVar2 = 199;
  }
  else {
    piVar1 = (int *)(*(code *)PTR_rts_av_get_unit_priv_00063344)();
    if (piVar1 != (int *)0x0) goto LAB_0003e54c;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0xf80;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x6f8,0xca,puVar3);
    uVar2 = 0xca;
  }
  piVar1 = (int *)(*(code *)PTR___assert_000637b8)
                            (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x330,uVar2,
                             PTR_s_snd_device_0004ffec_0x14_0006326c + 0x6d8);
LAB_0003e54c:
  if (piVar1[0x15] == 4) {
    uVar2 = 0;
  }
  else if (*piVar1 == 0) {
    uVar2 = 0xffffffe1;
  }
  else {
    uVar2 = 0xffffffec;
    if (*(int *)(*piVar1 + 0x18) < 5) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ==== rts_audio_encode_set_attr @ 0003e59c size=372

undefined4 rts_audio_encode_set_attr(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int *unaff_s2;
  
  if (param_1 == 0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x5d4,0x1b0,puVar4);
    uVar3 = 0x1b0;
    param_2 = unaff_s2;
  }
  else {
    if (param_2 != (int *)0x0) goto LAB_0003e664;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x5d4,0x1b1,puVar4);
    uVar3 = 0x1b1;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x330,uVar3,
             PTR_s_snd_device_0004ffec_0x14_0006326c + 0x5b8);
LAB_0003e664:
  iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
  if (iVar1 == 0) {
    uVar3 = 0xfffffff6;
  }
  else {
    uVar3 = (*(code *)PTR_rts_audio_codec_check_encode_id_000632b8)(*param_2);
    iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
    puVar4 = PTR_LAB_00063274;
    if (iVar2 == 0) {
      iVar2 = param_2[1];
      uVar3 = 0;
      if ((*param_2 != *(int *)(iVar1 + 0x54)) || (iVar2 != *(int *)(iVar1 + 0x58))) {
        *(int *)(iVar1 + 0x54) = *param_2;
        *(int *)(iVar1 + 0x58) = iVar2;
        (*(code *)(puVar4 + -0x1ed0))(iVar1);
      }
    }
  }
  return uVar3;
}



// ==== rts_audio_encode_run @ 0003e8d0 size=724

undefined4 rts_audio_encode_run(undefined *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  code *pcVar15;
  undefined4 *local_30 [3];
  
  if (param_1 == (undefined *)0x0) {
    puVar10 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x6c0,0x17f,puVar10);
    uVar7 = 0x17f;
    puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x330;
    puVar9 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x6a8;
    param_1 = puVar10;
  }
  else {
    piVar1 = (int *)(*(code *)PTR_rts_av_get_unit_priv_00063344)();
    if (piVar1 == (int *)0x0) {
      return 0xfffffff6;
    }
    pcVar15 = (code *)PTR_rts_av_pop_input_buffer_lk_000635e0;
    if (piVar1[0x15] == 4) goto LAB_0003ea24;
    if (*(int *)(*piVar1 + 0x14) == 0) {
      local_30[0] = (undefined4 *)0x0;
      piVar1 = (int *)(*(code *)PTR_rts_av_get_unit_priv_00063344)(param_1);
      if (piVar1 == (int *)0x0) {
        return 0xfffffff6;
      }
      if (*piVar1 == 0) {
        return 0xfffffff6;
      }
      if (*(int *)(*piVar1 + 0x14) != 0) {
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + 0x694,0x108,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + 0x3a0);
      }
      if (*(int *)(*piVar1 + 0x14) == 0) {
        (*(code *)PTR_rts_av_pop_input_buffer_lk_000635e0)(param_1,local_30);
        if (local_30[0] == (undefined4 *)0x0) {
          return 0xffffffef;
        }
        uVar7 = (*(code *)(PTR_LAB_00063274 + -0x18f0))(param_1);
        if (local_30[0] == (undefined4 *)0x0) {
          return uVar7;
        }
        (*(code *)PTR_rts_av_put_buffer_00063548)();
        return uVar7;
      }
      uVar7 = 0x108;
      puVar10 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x3a0;
      puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x330;
      puVar9 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x680;
    }
    else {
      if (*(int *)(*piVar1 + 0x14) < 1) {
        return 0;
      }
      piVar1 = (int *)(*(code *)PTR_rts_av_get_unit_priv_00063344)(param_1);
      if (piVar1 == (int *)0x0) {
        return 0xfffffff6;
      }
      if (*piVar1 == 0) {
        return 0xfffffff6;
      }
      if (*(int *)(*piVar1 + 0x14) < 1) {
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + 0x64c,0x164,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + 0x3c0);
      }
      if (0 < *(int *)(*piVar1 + 0x14)) {
        iVar2 = (*(code *)PTR_rts_audio_fifo_size_00063470)(piVar1[0x17]);
        if (iVar2 < *(int *)(*piVar1 + 0x14)) {
          local_30[0] = (undefined4 *)0x0;
          piVar3 = (int *)(*(code *)PTR_rts_av_get_unit_priv_00063344)(param_1);
          if ((piVar3 != (int *)0x0) &&
             ((*(code *)PTR_rts_av_pop_input_buffer_lk_000635e0)(param_1,local_30),
             local_30[0] != (undefined4 *)0x0)) {
            uVar11 = local_30[0][10];
            iVar12 = local_30[0][0xb];
            iVar2 = (*(code *)PTR_rts_audio_calc_ts_delta_00063980)
                              (iVar2,*(undefined4 *)(*piVar3 + 4));
            uVar4 = uVar11 - iVar2;
            uVar8 = local_30[0][2];
            piVar3[0x18] = uVar4;
            puVar10 = PTR_rts_audio_fifo_write_0006363c;
            if (piVar3[0x1a] == 0) {
              trap(0x1c00);
            }
            uVar7 = *local_30[0];
            piVar3[0x19] = (iVar12 - (iVar2 >> 0x1f)) - (uint)(uVar11 < uVar4);
            uVar7 = (*(code *)puVar10)(piVar3[0x17],uVar7,uVar8 / (uint)piVar3[0x1a]);
            iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar7);
            if (iVar2 != 0) {
              (*(code *)PTR_rts_log_000635ec)
                        (4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x3e0,
                         PTR_s_snd_device_0004ffec_0x14_0006326c + 0x628,0x12a,uVar7);
            }
            if (local_30[0] != (undefined4 *)0x0) {
              (*(code *)PTR_rts_av_put_buffer_00063548)();
            }
          }
        }
        puVar10 = PTR_LAB_00063274;
        uVar7 = 0;
        do {
          iVar2 = (*(code *)PTR_rts_audio_fifo_size_00063470)(piVar1[0x17]);
          iVar12 = *(int *)(*piVar1 + 0x14);
          if (iVar2 < iVar12) {
            return uVar7;
          }
          piVar3 = (int *)(*(code *)PTR_rts_av_get_unit_priv_00063344)(param_1);
          if (piVar3 == (int *)0x0) {
            uVar7 = 0xfffffff6;
          }
          else if ((iVar12 < 1) || (iVar2 = iVar12 * piVar3[0x1a], iVar2 < 1)) {
            uVar7 = 0xffffffdc;
          }
          else {
            puVar5 = (undefined4 *)(*(code *)PTR_rts_audio_new_buffer_00063770)(0,iVar2);
            if (puVar5 == (undefined4 *)0x0) {
              uVar7 = 0xfffffff5;
            }
            else {
              (*(code *)PTR_rts_audio_fifo_read_000633d8)(piVar3[0x17],*puVar5,iVar12);
              iVar14 = *piVar3;
              iVar13 = piVar3[0x18];
              puVar5[2] = iVar2;
              puVar6 = PTR_rts_audio_calc_ts_delta_00063980;
              iVar2 = piVar3[0x19];
              uVar7 = *(undefined4 *)(iVar14 + 4);
              puVar5[10] = iVar13;
              puVar5[0xb] = iVar2;
              uVar4 = (*(code *)puVar6)(iVar12,uVar7);
              uVar8 = uVar4 + iVar13;
              piVar3[0x18] = uVar8;
              piVar3[0x19] = (uint)(uVar8 < uVar4) + ((int)uVar4 >> 0x1f) + iVar2;
              uVar7 = (*(code *)(puVar10 + -0x18f0))(param_1,puVar5);
              (*(code *)PTR_rts_av_put_buffer_00063548)(puVar5);
            }
          }
          iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar7);
        } while (iVar2 == 0);
        return uVar7;
      }
      uVar7 = 0x164;
      puVar10 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x3c0;
      puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x330;
      puVar9 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x640;
    }
  }
  pcVar15 = (code *)PTR___assert_000637b8;
  (*(code *)PTR___assert_000637b8)(puVar10,puVar6,uVar7,puVar9);
LAB_0003ea24:
  local_30[0] = (undefined4 *)0x0;
  (*pcVar15)(param_1,local_30);
  if (local_30[0] == (undefined4 *)0x0) {
    return 0xffffffef;
  }
  (*(code *)PTR_rts_av_push_back_output_buffer_lk_00063a0c)(param_1);
  if (local_30[0] != (undefined4 *)0x0) {
    (*(code *)PTR_rts_av_put_buffer_00063548)();
    return 0;
  }
  return 0;
}



// ==== rts_audio_encode_get_profile @ 0003edd8 size=348

undefined4 rts_audio_encode_get_profile(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 *unaff_s1;
  undefined4 uVar5;
  
  if (param_1 == 0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x598,0x1cf,puVar4);
    uVar3 = 0x1cf;
    param_2 = unaff_s1;
  }
  else {
    if (param_2 != (undefined4 *)0x0) goto LAB_0003ee9c;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac8;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x598,0x1d0,puVar4);
    uVar3 = 0x1d0;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x330,uVar3,
             PTR_s_snd_device_0004ffec_0x14_0006326c + 0x578);
LAB_0003ee9c:
  iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
  if (iVar1 == 0) {
    uVar3 = 0xfffffff6;
  }
  else {
    uVar3 = (*(code *)PTR_rts_audio_codec_check_encode_id_000632b8)(*(undefined4 *)(iVar1 + 0x54));
    iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
    if (iVar2 == 0) {
      uVar3 = (*(code *)PTR_rts_audio_cvrt_codec_id_to_fmt_00063730)(*(undefined4 *)(iVar1 + 0x54));
      uVar5 = *(undefined4 *)(iVar1 + 0x4c);
      *param_2 = uVar3;
      param_2[1] = uVar5;
      param_2[2] = *(undefined4 *)(iVar1 + 0x44);
      param_2[3] = *(undefined4 *)(iVar1 + 0x48);
      uVar3 = 0;
    }
    else {
      *param_2 = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}



// ==== rts_audio_encode_set_profile @ 0003ef34 size=432

undefined4 rts_audio_encode_set_profile(int param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  
  if ((param_1 == 0) || (iVar2 = (*(code *)PTR_rts_av_get_unit_priv_00063344)(), iVar2 == 0)) {
    uVar4 = 0xfffffff6;
  }
  else {
    uVar4 = 0xffffffeb;
    if (((*param_2 == 0x8001) && (param_2[1] != 0)) && (uVar4 = 0xffffffeb, param_2[2] != 0)) {
      if (param_2[3] == 0) {
        uVar4 = 0xffffffeb;
      }
      else {
        uVar4 = (*(code *)PTR_rts_audio_check_argument_00063330)();
        iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
        if (iVar3 == 0) {
          if (*(int *)(iVar2 + 0x54) != 0) {
            local_30 = *(undefined4 *)(iVar2 + 0x58);
            local_3c = param_2[1];
            local_38 = param_2[2];
            local_34 = param_2[3];
            local_40 = *(int *)(iVar2 + 0x54);
            uVar4 = (*(code *)PTR_rts_audio_check_encode_param_000635a8)(&local_40);
            iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
            if (iVar3 != 0) {
              (*(code *)PTR_rts_log_000635ec)
                        (4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x408,
                         PTR_s_snd_device_0004ffec_0x14_0006326c + 0x558,0x209,uVar4);
              return uVar4;
            }
          }
          uVar4 = 0;
          if (((*(int *)(iVar2 + 0x4c) != param_2[1]) || (*(int *)(iVar2 + 0x48) != param_2[3])) ||
             (*(int *)(iVar2 + 0x44) != param_2[2])) {
            *(int *)(iVar2 + 0x4c) = param_2[1];
            puVar1 = PTR_LAB_00063274;
            *(int *)(iVar2 + 0x48) = param_2[3];
            *(int *)(iVar2 + 0x44) = param_2[2];
            (*(code *)(puVar1 + -0x1ed0))(iVar2);
          }
        }
      }
    }
  }
  return uVar4;
}



// ==== rts_audio_encode_query_ability @ 0003f0e4 size=848

undefined4 rts_audio_encode_query_ability(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 *unaff_s2;
  int iVar9;
  int iVar10;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_74 [5];
  undefined4 ***local_60 [7];
  undefined4 ***local_44;
  int *local_40;
  int local_3c;
  int local_38;
  undefined *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  
  if (param_1 == 0) {
    puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x538,0x263,puVar7);
    uVar6 = 0x263;
    param_2 = unaff_s2;
  }
  else {
    if (param_2 != (undefined4 *)0x0) goto LAB_0003f1c0;
    puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3ae8;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x538,0x264,puVar7);
    uVar6 = 0x264;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar7,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x330,uVar6,
             PTR_s_snd_device_0004ffec_0x14_0006326c + 0x518);
LAB_0003f1c0:
  iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
  if (iVar1 == 0) {
    uVar6 = 0xfffffff6;
  }
  else {
    iVar9 = *(int *)(iVar1 + 0x54);
    if (iVar9 == 0) {
      uVar6 = 0xffffffe1;
    }
    else {
      uVar6 = *(undefined4 *)(iVar1 + 0x58);
      (*(code *)PTR_memcpy_00063908)(local_74,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x490,0x14);
      puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c;
      local_60[0] = (undefined4 ***)0x8;
      local_60[1] = (undefined4 ***)0x10;
      local_60[2] = (undefined4 ***)0x18;
      local_60[3] = (undefined4 ***)0x1;
      local_60[4] = (undefined4 ***)0x2;
      iVar1 = (*(code *)PTR___rts_calloc_00063a28)
                        (0x1e,0xc,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x500,0x22d);
      if (iVar1 == 0) {
        uVar6 = 0xfffffff5;
      }
      else {
        iVar8 = 0;
        local_60[6] = local_60;
        local_44 = local_60 + 3;
        iVar10 = 0;
        local_40 = &local_98;
        local_34 = puVar7;
        do {
          iVar4 = 0;
          local_2c = (undefined4 *)((int)local_60 + iVar10 + 0xc);
          do {
            iVar5 = 0;
            local_30 = (undefined4 *)((int)local_60 + iVar4);
            puVar3 = local_74;
            local_3c = iVar4;
            iVar4 = iVar8;
            do {
              local_94 = *puVar3;
              local_90 = *local_30;
              local_8c = *local_2c;
              local_98 = iVar9;
              local_88 = uVar6;
              local_38 = iVar5;
              uVar2 = (*(code *)PTR_rts_audio_check_encode_param_000635a8)(&local_98);
              iVar5 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
              iVar8 = iVar4;
              if (iVar5 == 0) {
                iVar8 = iVar4 + 1;
                puVar3 = (undefined4 *)(iVar1 + iVar4 * 0xc);
                puVar3[2] = local_94;
                *puVar3 = local_90;
                puVar3[1] = local_8c;
              }
              iVar5 = local_38 + 4;
              puVar3 = (undefined4 *)((int)local_74 + iVar5);
              iVar4 = iVar8;
            } while (iVar5 != 0x14);
            iVar4 = local_3c + 4;
          } while (iVar4 != 0xc);
          iVar10 = iVar10 + 4;
        } while (iVar10 != 8);
        uVar6 = 0xffffffe3;
        if (iVar8 != 0) {
          iVar9 = (*(code *)PTR___rts_calloc_00063a28)(iVar8,0xc,local_34 + 0x500,0x24d);
          param_2[2] = iVar9;
          if (iVar9 == 0) {
            uVar6 = 0xfffffff5;
          }
          else {
            uVar6 = 0;
            (*(code *)PTR_memcpy_00063908)(iVar9,iVar1,iVar8 * 0xc);
            param_2[1] = iVar8;
          }
        }
        (*(code *)PTR_rts_free_000638d4)(iVar1);
      }
      iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar6);
      if (iVar1 == 0) {
        uVar6 = 0;
        *param_2 = 3;
      }
    }
  }
  return uVar6;
}



// ==== rts_audio_encode_get_attr @ 0003f434 size=252

undefined4 rts_audio_encode_get_attr(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    param_2 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x60c,0x19c,param_2);
    uVar2 = 0x19c;
  }
  else {
    if (param_2 != (undefined4 *)0x0) goto LAB_0003f4f0;
    param_2 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x60c,0x19d,param_2);
    uVar2 = 0x19d;
  }
  (*(code *)PTR___assert_000637b8)
            (param_2,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x330,uVar2,
             PTR_s_snd_device_0004ffec_0x14_0006326c + 0x5f0);
LAB_0003f4f0:
  iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
  if (iVar1 == 0) {
    uVar2 = 0xfffffff6;
  }
  else {
    *param_2 = *(undefined4 *)(iVar1 + 0x54);
    uVar2 = 0;
    param_2[1] = *(undefined4 *)(iVar1 + 0x58);
  }
  return uVar2;
}



// ==== rts_av_query_audio_encode_ability @ 0003f530 size=472

undefined4 rts_av_query_audio_encode_ability(undefined *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *local_20 [3];
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  local_20[0] = (int *)0x0;
  if (param_2 == (undefined4 *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3ae8;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x4dc,0x27e,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x330,0x27e,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x4b8);
  }
  (*(code *)PTR_rts_av_wait_00063a58)(puVar1 + 0x4dc);
  iVar2 = (*(code *)PTR_rts_av_find_unit_by_chnno_00063a6c)(param_1);
  if (iVar2 == 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3ae0,puVar1 + 0x4dc,0x284);
    uVar4 = 0xfffffff1;
  }
  else {
    iVar3 = (*(code *)PTR_rts_av_get_unit_id_000635a0)(iVar2);
    if (iVar3 == 0x636e6561) {
      uVar4 = (*(code *)PTR_rts_av_query_ability_000637c8)(iVar2,local_20);
      iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
      if (iVar2 == 0) {
        if (*local_20[0] == 3) {
          uVar4 = 0;
          *param_2 = local_20[0] + 1;
        }
        else {
          uVar4 = 0xffffffea;
          (*(code *)PTR_rts_av_release_ability_00063328)(local_20[0]);
          local_20[0] = (int *)0x0;
        }
      }
      else {
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3a9c,puVar1 + 0x4dc,0x291,uVar4);
      }
    }
    else {
      uVar4 = 0xffffffe9;
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x434,puVar1 + 0x4dc,0x28a,param_1);
    }
  }
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + 0x4dc);
  return uVar4;
}



// ==== rts_av_release_audio_encode_ability @ 0003f708 size=44

void rts_av_release_audio_encode_ability(int param_1)

{
  if (param_1 != 0) {
    (*(code *)PTR_rts_av_release_ability_00063328)(param_1 + -4);
    return;
  }
  return;
}



// ==== rts_audio_fifo_free @ 0003f7c8 size=104

void rts_audio_fifo_free(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      (*(code *)PTR_rts_fifo_free_000634a4)();
      *param_1 = 0;
    }
    (*(code *)PTR_rts_free_000638d4)(param_1);
    return;
  }
  return;
}



// ==== rts_audio_fifo_alloc @ 0003f830 size=228

int * rts_audio_fifo_alloc(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int local_20 [3];
  
  iVar2 = (*(code *)(PTR_LAB_00063274 + -0x8c0))(local_20,param_2,param_3,param_1);
  if ((-1 < iVar2) &&
     (piVar3 = (int *)(*(code *)PTR___rts_calloc_00063a28)
                                (1,0x18,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x750,0x45),
     puVar1 = PTR_rts_fifo_alloc_00063790, piVar3 != (int *)0x0)) {
    if (param_3 == 0) {
      trap(0x1c00);
    }
    piVar3[3] = param_2;
    piVar3[4] = param_1;
    piVar3[5] = local_20[0] / param_3;
    iVar2 = (*(code *)puVar1)();
    *piVar3 = iVar2;
    if (iVar2 != 0) {
      piVar3[2] = param_3;
      return piVar3;
    }
    (*(code *)PTR_rts_audio_fifo_free_00063474)(piVar3);
  }
  return (int *)0x0;
}



// ==== rts_audio_fifo_realloc @ 0003f914 size=188

undefined4 rts_audio_fifo_realloc(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18 [2];
  
  uVar1 = (*(code *)(PTR_LAB_00063274 + -0x8c0))(local_18,param_1[3],param_2,param_1[4]);
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
  if (iVar2 == 0) {
    uVar1 = (*(code *)PTR_rts_fifo_realloc2_00063568)(*param_1,local_18[0]);
    iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
    if (iVar2 == 0) {
      param_1[2] = param_2;
      uVar1 = 0;
    }
  }
  return uVar1;
}



// ==== rts_audio_fifo_read @ 0003f9d0 size=168

int rts_audio_fifo_read(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (-1 < param_3) {
    iVar3 = param_1[1];
    if (param_3 <= (int)param_1[1]) {
      iVar3 = param_3;
    }
    iVar2 = 0;
    if (iVar3 != 0) {
      uVar1 = (*(code *)PTR_rts_fifo_generic_read_0006391c)(*param_1,param_2,iVar3 * param_1[5],0);
      iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
      if (iVar2 == 0) {
        param_1[1] = param_1[1] - iVar3;
        iVar2 = iVar3;
      }
      else {
        iVar2 = -0x2b;
      }
    }
    return iVar2;
  }
  return -0x15;
}



// ==== rts_audio_fifo_drain @ 0003fa78 size=140

undefined4 rts_audio_fifo_drain(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 < 0) {
    uVar1 = 0xffffffeb;
  }
  else {
    uVar1 = 0;
    iVar2 = param_1[1];
    if (param_2 <= (int)param_1[1]) {
      iVar2 = param_2;
    }
    if (iVar2 != 0) {
      (*(code *)PTR_rts_fifo_drain_00063578)(*param_1,iVar2 * param_1[5]);
      param_1[1] = param_1[1] - iVar2;
    }
  }
  return uVar1;
}



// ==== rts_audio_fifo_reset @ 0003fb04 size=68

void rts_audio_fifo_reset(undefined4 *param_1)

{
  (*(code *)PTR_rts_fifo_reset_00063944)(*param_1);
  param_1[1] = 0;
  return;
}



// ==== rts_audio_fifo_size @ 0003fb48 size=8

undefined4 rts_audio_fifo_size(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



// ==== rts_audio_fifo_space @ 0003fb50 size=16

int rts_audio_fifo_space(int param_1)

{
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
}



// ==== rts_audio_fifo_write @ 0003fb60 size=276

int rts_audio_fifo_write(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR_rts_audio_fifo_space_00063a68)();
  if (iVar1 < param_3) {
    iVar1 = (*(code *)PTR_rts_audio_fifo_size_00063470)(param_1);
    if (0x3fffffff - iVar1 < param_3) {
      return -0x15;
    }
    iVar1 = (*(code *)PTR_rts_audio_fifo_realloc_00063640)(param_1,(iVar1 + param_3) * 2);
    iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar1);
    if (iVar2 != 0) {
      return iVar1;
    }
  }
  iVar2 = param_1[5];
  iVar1 = (*(code *)PTR_rts_fifo_generic_write_00063800)(*param_1,param_2,param_3 * iVar2,0);
  if (iVar1 == param_3 * iVar2) {
    param_1[1] = param_1[1] + param_3;
  }
  else {
    param_3 = -0x2b;
  }
  return param_3;
}



// ==== rts_audio_tfilter_new @ 00040a60 size=240

void rts_audio_tfilter_new(double param_1,double param_2)

{
  undefined *puVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double in_stack_00000010;
  
  iVar2 = (*(code *)PTR___rts_calloc_00063a28)
                    (1,0x28,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xa90,0x1c);
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  dVar4 = in_stack_00000010 * *(double *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0xab0) * param_2
          * param_1;
  if (iVar2 != 0) {
    *(double *)(iVar2 + 0x18) = param_1;
    dVar7 = *(double *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0xac0);
    dVar5 = dVar4 * *(double *)(puVar1 + 0xab8);
    dVar4 = dVar4 * dVar4;
    dVar6 = *(double *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0xac8);
    dVar3 = *(double *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0xad0);
    *(double *)(iVar2 + 8) =
         dVar3 - dVar3 / (dVar5 * (dVar5 * dVar7 * (dVar5 / dVar6 + dVar3) + dVar3) + dVar3);
    *(double *)(iVar2 + 0x10) =
         (dVar3 - dVar3 / (dVar4 * (dVar4 * dVar7 * (dVar4 / dVar6 + dVar3) + dVar3) + dVar3)) /
         param_2;
  }
  return;
}



// ==== rts_audio_tfilter_free @ 00040b50 size=40

void rts_audio_tfilter_free(int param_1)

{
  if (param_1 != 0) {
    (*(code *)PTR_rts_free_000638d4)();
    return;
  }
  return;
}



// ==== rts_audio_tfilter_reset @ 00040b78 size=8

void rts_audio_tfilter_reset(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



// ==== rts_audio_tfilter_update @ 00040b80 size=56

/* WARNING: Control flow encountered bad instruction data */

undefined8
rts_audio_tfilter_update
          (undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined4 *)param_1 = param_3;
    *(undefined4 *)((int)param_1 + 4) = param_4;
    return *param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== rts_audio_capture_run @ 00040c20 size=676

/* WARNING: Control flow encountered bad instruction data */

undefined4 rts_audio_capture_run(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  double dVar8;
  undefined8 uVar9;
  int local_30 [2];
  
  local_30[0] = 0;
  if ((param_1 == 0) ||
     (puVar2 = (undefined4 *)(*(code *)PTR_rts_av_get_unit_priv_00063344)(),
     puVar2 == (undefined4 *)0x0)) {
    return 0xfffffff6;
  }
  if ((puVar2[0x17] == 0) ||
     (puVar3 = (undefined4 *)(*(code *)PTR_rts_audio_pop_idle_0006392c)(puVar2),
     puVar3 == (undefined4 *)0x0)) {
    return 0xffffffef;
  }
  iVar4 = (*(code *)PTR_snd_pcm_readi_00063340)(*puVar2,*puVar3,puVar2[0x15]);
  puVar1 = PTR_rts_audio_calc_volume_00063b1c;
  if (iVar4 < 0) {
    if (iVar4 != -0x20) {
      uVar7 = 0xffffffde;
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xad8,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + 0xb44,0x4f);
      goto LAB_00040ea0;
    }
    (*(code *)PTR_rts_audio_xrun_00063b6c)(param_1);
  }
  else {
    puVar3[2] = (uint)(puVar2[0x12] * puVar2[0x13] * iVar4) >> 3;
    (*(code *)puVar1)(puVar3,iVar4);
    uVar9 = (*(code *)PTR_rts_av_get_cur_time_000638fc)();
    (*(code *)PTR_snd_pcm_delay_00063540)(*puVar2,local_30);
    iVar5 = (*(code *)PTR_rts_audio_calc_ts_delta_00063980)(iVar4 + local_30[0],puVar2[0x14]);
    uVar6 = (uint)uVar9 - iVar5;
    uVar7 = puVar2[0x1f];
    iVar5 = (*(code *)PTR___cmpdi2_000636a8)
                      (uVar6,((int)((ulonglong)uVar9 >> 0x20) - (iVar5 >> 0x1f)) -
                             (uint)((uint)uVar9 < uVar6),0,0);
    if (iVar5 < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    dVar8 = (double)(int)puVar2[0x20];
    (*(code *)PTR_rts_audio_tfilter_update_00063684)(uVar7);
    if (dVar8 < *(double *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0xb60)) {
      *(longlong *)(puVar3 + 10) = (longlong)dVar8;
    }
    else {
      *(longlong *)(puVar3 + 10) =
           (longlong)(dVar8 - *(double *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0xb60));
      puVar3[0xb] = puVar3[0xb] ^ 0x80000000;
    }
    puVar1 = PTR_rts_av_push_back_output_buffer_lk_00063a0c;
    puVar2[0x20] = iVar4;
    (*(code *)puVar1)(param_1,puVar3);
  }
  uVar7 = 0;
LAB_00040ea0:
  (*(code *)PTR_rts_av_put_buffer_00063548)(puVar3);
  return uVar7;
}



// ==== rts_audio_capture_init @ 00040ee0 size=160

undefined4 rts_audio_capture_init(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    uVar1 = (*(code *)PTR_rts_audio_init_00063630)();
    iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
    if (iVar2 != 0) {
      return uVar1;
    }
    iVar2 = (*(code *)PTR_rts_av_get_unit_priv_00063344)(param_1);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 4) = 1;
      *(undefined4 *)(iVar2 + 0x60) = 1;
      return 0;
    }
  }
  return 0xfffffff6;
}



// ==== rts_audio_decode_get_profile @ 00040f80 size=264

undefined4 rts_audio_decode_get_profile(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    param_2 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0xcb4,0xed,param_2);
    uVar2 = 0xed;
  }
  else {
    if (param_2 != (undefined4 *)0x0) goto LAB_0004103c;
    param_2 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac8);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0xcb4,0xee,param_2);
    uVar2 = 0xee;
  }
  (*(code *)PTR___assert_000637b8)
            (param_2,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xb68,uVar2,
             PTR_s_snd_device_0004ffec_0x14_0006326c + 0xc94);
LAB_0004103c:
  iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
  if (iVar1 == 0) {
    uVar2 = 0xffffffe1;
  }
  else {
    *param_2 = 0x8001;
    param_2[1] = *(undefined4 *)(iVar1 + 0x50);
    param_2[3] = *(undefined4 *)(iVar1 + 0x4c);
    uVar2 = 0;
    param_2[2] = *(undefined4 *)(iVar1 + 0x48);
  }
  return uVar2;
}



// ==== rts_audio_decode_start @ 00041088 size=436

undefined4 rts_audio_decode_start(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  code *pcVar5;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  pcVar5 = (code *)PTR_rts_av_get_unit_priv_00063344;
  if (param_1 == 0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0xdac,0x46,puVar4);
    pcVar5 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xb68,0x46,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0xd94);
  }
  piVar1 = (int *)(*pcVar5)();
  if (piVar1 == (int *)0x0) {
    return 0xffffffe1;
  }
  if (*piVar1 == 0) {
    uVar2 = (*(code *)PTR_rts_audio_codec_check_decode_id_000637c4)(piVar1[1]);
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
    local_30 = piVar1[1];
    if (iVar3 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xbcc,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + 0xdac,0x51,local_30);
      return uVar2;
    }
    if (local_30 != 4) {
      local_2c = piVar1[0x14];
      local_28 = piVar1[0x12];
      local_24 = piVar1[0x13];
      iVar3 = (*(code *)PTR_rts_audio_create_codec_context_00063b4c)(local_30,1,&local_30);
      *piVar1 = iVar3;
      if (iVar3 == 0) {
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xbec,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + 0xdac,0x60);
        return 0xfffffff5;
      }
      if (piVar1[1] == 4) {
        *(int *)(iVar3 + 4) = piVar1[0x14];
        *(int *)(iVar3 + 0xc) = piVar1[0x12];
        *(int *)(iVar3 + 8) = piVar1[0x13];
        return 0;
      }
    }
  }
  return 0;
}



// ==== rts_audio_decode_run @ 0004123c size=836

undefined4 rts_audio_decode_run(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_48 [9];
  
  local_48[6] = 0;
  if (param_1 != 0) goto LAB_00041324;
  puVar9 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
  (*(code *)PTR_rts_log_000635ec)
            (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
             PTR_s_snd_device_0004ffec_0x14_0006326c + 0xd0c,0xcb,puVar9);
  uVar7 = 0xcb;
  puVar8 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0xcf4;
  while( true ) {
    (*(code *)PTR___assert_000637b8)
              (puVar9,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xb68,uVar7,puVar8);
LAB_00041324:
    piVar1 = (int *)(*(code *)PTR_rts_av_get_unit_priv_00063344)();
    if (piVar1 == (int *)0x0) {
      return 0xffffffe1;
    }
    (*(code *)PTR_rts_av_pop_input_buffer_lk_000635e0)(param_1,local_48 + 6);
    if (local_48[6] == 0) {
      return 0xffffffef;
    }
    local_48[0] = 0;
    local_48[1] = 0;
    local_48[2] = 0;
    local_48[3] = 0;
    local_48[4] = 0;
    (*(code *)PTR_rts_av_get_buffer_profile_0006386c)(local_48[6],local_48);
    iVar2 = local_48[0];
    if (local_48[0] == 0) {
      iVar2 = piVar1[1];
    }
    else {
      uVar7 = 0xffffffe9;
      iVar3 = (*(code *)PTR_rts_audio_cvrt_codec_id_to_fmt_00063730)(piVar1[1]);
      if (iVar2 != iVar3) goto LAB_00041438;
      iVar2 = piVar1[1];
    }
    iVar3 = local_48[6];
    if (iVar2 == 4) {
      (*(code *)PTR_rts_av_push_back_output_buffer_lk_00063a0c)(param_1,local_48[6]);
      goto LAB_00041434;
    }
    if (local_48[6] != 0) break;
    puVar9 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x394;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0xce4,0x7e,puVar9);
    uVar7 = 0x7e;
    puVar8 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0xcd4;
  }
  iVar2 = *piVar1;
  iVar10 = 0;
  if (iVar2 != 0) {
    iVar11 = *(int *)(local_48[6] + 8);
    while ((iVar11 == 0 || (*(int *)(iVar3 + 8) != 0))) {
      local_48[5] = 0;
      iVar4 = (*(code *)PTR_rts_audio_codec_decode_000637b0)(iVar2,iVar3,local_48 + 5);
      iVar5 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar4);
      if (iVar5 != 0) break;
      if (*(int *)(iVar3 + 8) != 0) {
        iVar10 = iVar10 + iVar4;
        (*(code *)PTR_rts_av_set_buffer_offset_000635bc)(iVar3,iVar10);
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) - iVar4;
      }
      if (local_48[5] != 0) {
        uVar7 = *(undefined4 *)(iVar3 + 0x2c);
        iVar5 = *(int *)(iVar2 + 4);
        iVar6 = piVar1[0x14];
        *(undefined4 *)(local_48[5] + 0x28) = *(undefined4 *)(iVar3 + 0x28);
        *(undefined4 *)(local_48[5] + 0x2c) = uVar7;
        iVar4 = *(int *)(iVar2 + 0xc);
        iVar12 = *(int *)(iVar2 + 8);
        if (((iVar6 != iVar5) || (piVar1[0x12] != iVar4)) || (piVar1[0x13] != iVar12)) {
          piVar1[0x14] = iVar5;
          piVar1[0x12] = iVar4;
          piVar1[0x13] = iVar12;
        }
        puVar9 = PTR_rts_av_set_buffer_observer_000639c4;
        *(undefined4 *)(local_48[5] + 0x1c) = *(undefined4 *)(iVar3 + 0x1c);
        *(undefined4 *)(local_48[5] + 0x20) = *(undefined4 *)(iVar3 + 0x20);
        (*(code *)puVar9)(local_48[5],param_1);
        (*(code *)PTR_rts_av_push_back_output_buffer_lk_00063a0c)(param_1,local_48[5]);
        if (local_48[5] != 0) {
          (*(code *)PTR_rts_av_put_buffer_00063548)();
        }
      }
    }
    (*(code *)PTR_rts_av_set_buffer_offset_000635bc)(iVar3,0);
    *(int *)(iVar3 + 8) = iVar11;
  }
LAB_00041434:
  uVar7 = 0;
LAB_00041438:
  if (local_48[6] != 0) {
    (*(code *)PTR_rts_av_put_buffer_00063548)();
  }
  return uVar7;
}



// ==== rts_audio_decode_set_profile @ 00041580 size=580

undefined4 rts_audio_decode_set_profile(int param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  
  if (param_1 == 0) {
    puVar5 = (uint *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0xc74,0x103,puVar5);
    uVar4 = 0x103;
  }
  else {
    puVar5 = param_2;
    if (param_2 != (uint *)0x0) goto LAB_0004164c;
    puVar5 = (uint *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac8);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0xc74,0x104,puVar5);
    uVar4 = 0x104;
  }
  param_2 = (uint *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0xb68);
  (*(code *)PTR___assert_000637b8)
            (puVar5,param_2,uVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xc54);
LAB_0004164c:
  if ((*param_2 & 0x8000) == 0) {
    return 0xffffffeb;
  }
  if (puVar5[1] != 0) {
    if (puVar5[3] == 0) {
      return 0xffffffeb;
    }
    if (puVar5[2] != 0) {
      piVar1 = (int *)(*(code *)PTR_rts_av_get_unit_priv_00063344)();
      if (piVar1 == (int *)0x0) {
        return 0xffffffe1;
      }
      iVar2 = (*(code *)PTR_rts_audio_cvrt_fmt_to_codec_id_0006352c)(*puVar5);
      iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar2);
      if (iVar3 == 0) {
        uVar4 = (*(code *)PTR_rts_audio_codec_check_decode_id_000637c4)(iVar2);
        iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
        if (iVar3 != 0) {
          return uVar4;
        }
        uVar4 = (*(code *)PTR_rts_audio_check_argument_00063330)(puVar5[1],puVar5[2],puVar5[3]);
        iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
        if (iVar3 != 0) {
          return uVar4;
        }
        if ((((iVar2 == piVar1[1]) && (piVar1[0x14] == puVar5[1])) && (piVar1[0x13] == puVar5[3]))
           && (piVar1[0x12] == puVar5[2])) {
          return 0;
        }
        piVar1[1] = iVar2;
        piVar1[0x14] = puVar5[1];
        piVar1[0x13] = puVar5[3];
        piVar1[0x12] = puVar5[2];
        if (*piVar1 != 0) {
          (*(code *)PTR_rts_audio_free_codec_context_000638dc)();
        }
        *piVar1 = 0;
        return 0;
      }
    }
  }
  return 0xffffffeb;
}



// ==== rts_audio_decode_stop @ 000417c4 size=124

undefined4 rts_audio_decode_stop(int param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0xd7c,0x6f,puVar1);
    (*(code *)PTR___assert_000637b8)
              (puVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xb68,0x6f,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0xd64);
  }
  return 0;
}



// ==== rts_audio_decode_init @ 00041840 size=192

undefined4 rts_audio_decode_init(undefined *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0xe14,0x24,param_1);
    puVar3 = (undefined *)0x24;
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xb68,0x24,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0xdfc);
  }
  iVar1 = (*(code *)PTR___rts_calloc_00063a28)(1,0x58,puVar3 + 0xe14,0x26);
  if (iVar1 == 0) {
    uVar2 = 0xfffffff5;
  }
  else {
    (*(code *)PTR_rts_av_set_unit_priv_0006374c)(param_1,iVar1);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== rts_audio_decode_check_ready @ 00041900 size=208

undefined4 rts_audio_decode_check_ready(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  code *pcVar3;
  
  pcVar3 = (code *)PTR_rts_av_get_unit_priv_00063344;
  if (param_1 == 0) {
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0xd44,0xb2,puVar2);
    pcVar3 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (puVar2,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xb68,0xb2,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0xd24);
  }
  piVar1 = (int *)(*pcVar3)();
  if (piVar1 != (int *)0x0) {
    if (piVar1[1] == 4) {
      return 0;
    }
    if (*piVar1 != 0) {
      if (4 < *(int *)(*piVar1 + 0x18)) {
        return 0xffffffec;
      }
      return 0;
    }
  }
  return 0xffffffe1;
}



// ==== rts_audio_decode_cleanup @ 000419d0 size=204

undefined4 rts_audio_decode_cleanup(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined *puVar3;
  code *pcVar4;
  
  pcVar4 = (code *)PTR_rts_av_get_unit_priv_00063344;
  if (param_1 == 0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0xde0,0x33,puVar3);
    pcVar4 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xb68,0x33,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0xdc4);
  }
  piVar1 = (int *)(*pcVar4)();
  if (piVar1 == (int *)0x0) {
    uVar2 = 0xffffffe1;
  }
  else {
    if (*piVar1 != 0) {
      (*(code *)PTR_rts_audio_free_codec_context_000638dc)();
    }
    puVar3 = PTR_rts_free_000638d4;
    *piVar1 = 0;
    (*(code *)puVar3)(piVar1);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== rts_audio_playback_check_ready @ 00041ed0 size=8

undefined4 rts_audio_playback_check_ready(void)

{
  return 0;
}



// ==== rts_audio_playback_run @ 00041ed8 size=480

undefined4 rts_audio_playback_run(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 local_28;
  undefined4 *local_24;
  uint local_20;
  
  local_24 = (undefined4 *)0x0;
  local_28 = 0;
  if ((param_1 == 0) ||
     (puVar3 = (undefined4 *)(*(code *)PTR_rts_av_get_unit_priv_00063344)(),
     puVar3 == (undefined4 *)0x0)) {
    return 0xfffffff6;
  }
  if ((puVar3[0x17] != 0) &&
     ((*(code *)PTR_rts_av_pop_input_buffer_lk_000635e0)(param_1,&local_24),
     local_24 != (undefined4 *)0x0)) {
    iVar4 = (*(code *)PTR_rts_audio_is_end_000632a4)();
    if (iVar4 == 0) {
      if (puVar3[0x13] == 0) {
        trap(0x1c00);
      }
      local_20 = ((uint)(local_24[2] << 3) / (uint)puVar3[0x13]) / (uint)puVar3[0x12];
      if (puVar3[0x12] == 0) {
        trap(0x1c00);
      }
      lVar7 = (*(code *)PTR_rts_av_get_cur_time_000638fc)();
      (*(code *)PTR_snd_pcm_delay_00063540)(*puVar3,&local_28);
      puVar2 = local_24;
      iVar4 = (*(code *)PTR_rts_audio_calc_ts_delta_00063980)(local_28,puVar3[0x14]);
      puVar2[0xb] = (int)((ulonglong)(lVar7 + iVar4) >> 0x20);
      puVar1 = PTR_snd_pcm_writei_000639cc;
      uVar5 = *puVar3;
      uVar6 = *local_24;
      puVar2[10] = (int)(lVar7 + iVar4);
      iVar4 = (*(code *)puVar1)(uVar5,uVar6,local_20);
      if (iVar4 < 0) {
        if (iVar4 == -0x20) {
          (*(code *)PTR_rts_audio_xrun_00063b6c)(param_1);
        }
        else {
          (*(code *)PTR_rts_log_000635ec)
                    (4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xe50,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + 0xec4,0x5a);
        }
      }
    }
    (*(code *)PTR_rts_av_push_back_output_buffer_lk_00063a0c)(param_1,local_24);
    if (local_24 != (undefined4 *)0x0) {
      (*(code *)PTR_rts_av_put_buffer_00063548)();
    }
    return 0;
  }
  return 0xffffffef;
}



// ==== rts_audio_playback_init @ 000420b8 size=160

undefined4 rts_audio_playback_init(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    uVar1 = (*(code *)PTR_rts_audio_init_00063630)();
    iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
    if (iVar2 != 0) {
      return uVar1;
    }
    iVar2 = (*(code *)PTR_rts_av_get_unit_priv_00063344)(param_1);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 4) = 0;
      *(undefined4 *)(iVar2 + 0x60) = 0;
      return 0;
    }
  }
  return 0xfffffff6;
}



// ==== rts_audio_resample_init @ 00043ae8 size=88

void rts_audio_resample_init(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           (*(code *)PTR___rts_calloc_00063a28)
                     (1,0x10,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x145c,0x23);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
  }
  return;
}



// ==== rts_audio_resample_free @ 00043b40 size=160

void rts_audio_resample_free(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (param_1[1] != 0) {
      (*(code *)PTR_rts_free_000638d4)();
      param_1[1] = 0;
    }
    if (param_1[2] != 0) {
      (*(code *)PTR_rts_free_000638d4)();
      param_1[2] = 0;
    }
    if (*param_1 != 0) {
      (*(code *)PTR_speex_resampler_destroy_000638b4)();
      *param_1 = 0;
    }
    (*(code *)PTR_rts_free_000638d4)(param_1);
    return;
  }
  return;
}



// ==== rts_audio_check_argument @ 00043be0 size=116

undefined4 rts_audio_check_argument(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  if (1 < param_3 - 1U) {
    return 0xffffffeb;
  }
  if (((param_2 & 0xffffffef) == 8) || (uVar1 = 0xffffffeb, param_2 == 0x10)) {
    if ((param_1 != 48000) &&
       (((param_1 != 0xac44 && (param_1 != 32000)) && (uVar1 = 0xffffffeb, param_1 != 16000)))) {
      if (param_1 == 8000) {
        uVar1 = 0;
      }
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



// ==== rts_audio_set_in_param @ 00043c54 size=212

int rts_audio_set_in_param(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == 0) {
    iVar1 = -10;
  }
  else if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 4) == 0) {
      iVar1 = (*(code *)PTR___rts_calloc_00063a28)
                        (1,0xc,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1444,0x62);
      *(int *)(param_1 + 4) = iVar1;
      if (iVar1 == 0) {
        return -0xb;
      }
    }
    iVar1 = (*(code *)PTR_rts_audio_check_argument_00063330)(param_2,param_3,param_4);
    if (iVar1 == 0) {
      puVar2 = *(undefined4 **)(param_1 + 4);
      *puVar2 = param_2;
      puVar2[1] = param_3;
      puVar2[2] = param_4;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



// ==== rts_audio_set_out_param @ 00043d28 size=212

int rts_audio_set_out_param(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == 0) {
    iVar1 = -10;
  }
  else if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      iVar1 = (*(code *)PTR___rts_calloc_00063a28)
                        (1,0xc,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x142c,0x7e);
      *(int *)(param_1 + 8) = iVar1;
      if (iVar1 == 0) {
        return -0xb;
      }
    }
    iVar1 = (*(code *)PTR_rts_audio_check_argument_00063330)(param_2,param_3,param_4);
    if (iVar1 == 0) {
      puVar2 = *(undefined4 **)(param_1 + 8);
      *puVar2 = param_2;
      puVar2[1] = param_3;
      puVar2[2] = param_4;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



// ==== rts_audio_get_outsize @ 00043dfc size=216

int rts_audio_get_outsize(int param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 != 0) {
    piVar2 = *(int **)(param_1 + 4);
    piVar4 = *(int **)(param_1 + 8);
    if ((piVar2 == (int *)0x0) || (piVar4 == (int *)0x0)) {
      iVar3 = -10;
    }
    else {
      iVar3 = (piVar2[1] >> 3) * piVar2[2];
      if (iVar3 == 0) {
        trap(0x1c00);
      }
      lVar1 = (longlong)(param_2 / iVar3) * (longlong)*piVar4 + (longlong)*piVar2 + -1;
      iVar3 = (*(code *)PTR___divdi3_000637ec)((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
      iVar3 = piVar4[2] * iVar3 * (piVar4[1] >> 3);
    }
    return iVar3;
  }
  return -10;
}



// ==== rts_audio_resample_process @ 00043ed4 size=1272

undefined4
rts_audio_resample_process(int *param_1,int param_2,int *param_3,int param_4,int *param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_38;
  int local_34;
  undefined4 local_30;
  
  if (param_1 == (int *)0x0) {
    return 0xfffffff6;
  }
  piVar9 = (int *)param_1[1];
  piVar8 = (int *)param_1[2];
  if (piVar9 == (int *)0x0) {
    return 0xfffffff6;
  }
  if (piVar8 == (int *)0x0) {
    return 0xfffffff6;
  }
  if (param_2 == 0) {
    return 0xfffffff6;
  }
  iVar5 = *param_3;
  if (iVar5 == 0) {
    return 0xfffffff6;
  }
  if (param_4 == 0) {
    return 0xfffffff6;
  }
  if (*param_5 == 0) {
    return 0xfffffff6;
  }
  iVar2 = (*(code *)PTR_rts_audio_get_outsize_000633c8)(param_1,iVar5);
  iVar10 = *param_5;
  if (iVar10 < iVar2) {
    return 0xffffffeb;
  }
  if (param_1[3] == 0) {
    param_1[3] = 1;
  }
  if (piVar9[2] == piVar8[2]) {
    iVar2 = param_2;
    iVar7 = 0;
  }
  else {
    iVar11 = iVar5 << 1;
    if (piVar9[2] != 1) {
      iVar11 = iVar5 >> 1;
    }
    local_34 = iVar5;
    iVar2 = (*(code *)PTR___rts_calloc_00063a28)
                      (1,iVar11,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1410,0x11b);
    if (iVar2 == 0) {
      return 0xfffffff5;
    }
    iVar3 = piVar9[1] >> 3;
    iVar7 = iVar2;
    iVar5 = iVar11;
    if (piVar9[2] == 1) {
      iVar11 = iVar2;
      iVar12 = param_2;
      if (piVar8[2] == 2) {
        for (; iVar4 = 0, iVar12 - param_2 < local_34; iVar12 = iVar12 + iVar3) {
          for (; iVar4 < iVar3; iVar4 = iVar4 + 1) {
            *(undefined1 *)(iVar11 + iVar4) = *(undefined1 *)(iVar12 + iVar4);
            *(undefined1 *)(iVar11 + iVar3 + iVar4) = *(undefined1 *)(iVar12 + iVar4);
          }
          iVar11 = iVar11 + iVar3 * 2;
        }
      }
    }
    else if ((piVar9[2] == 2) && (piVar8[2] == 1)) {
      for (iVar11 = 0; iVar11 < local_34; iVar11 = iVar11 + iVar3 * 2) {
        for (iVar12 = 0; iVar12 < iVar3; iVar12 = iVar12 + 1) {
          *(undefined1 *)(iVar2 + (iVar11 >> 1) + iVar12) =
               *(undefined1 *)(param_2 + iVar11 + iVar12);
        }
      }
    }
  }
  local_34 = iVar5;
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  iVar5 = piVar9[1];
  if (*piVar9 == *piVar8) {
    iVar11 = 0;
    iVar3 = 0;
LAB_00044260:
    if (iVar5 != piVar8[1]) {
      if (iVar3 != 0) {
        (*(code *)PTR_rts_free_000638d4)(iVar3);
      }
      iVar12 = ((piVar8[1] >> 3) * local_34) / (iVar5 >> 3);
      if (iVar5 >> 3 == 0) {
        trap(0x1c00);
      }
      iVar3 = (*(code *)PTR___rts_calloc_00063a28)
                        (1,iVar12,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1410,0x162);
      if (iVar3 == 0) goto LAB_0004433c;
      (*(code *)(PTR_LAB_00063274 + 0x3a00))(iVar2,local_34,iVar3,iVar5,piVar8[1]);
      iVar2 = iVar3;
      local_34 = iVar12;
    }
    iVar5 = local_34;
    uVar6 = 0xffffffeb;
    if (local_34 <= iVar10) {
      uVar6 = 0;
      (*(code *)PTR_memcpy_00063908)(param_4,iVar2,local_34);
      *param_5 = iVar5;
    }
  }
  else {
    if (iVar5 == 0x10) {
      iVar3 = 0;
      iVar12 = iVar2;
LAB_00044148:
      iVar5 = *piVar9;
      local_38 = (local_34 * *piVar8 + iVar5 + -1) / iVar5;
      if (iVar5 == 0) {
        trap(0x1c00);
      }
      iVar2 = (*(code *)PTR___rts_calloc_00063a28)(1,local_38,puVar1 + 0x1410,0x13c);
      iVar11 = iVar2;
      if (iVar2 != 0) {
        iVar5 = piVar8[2] << 1;
        local_38 = local_38 / iVar5;
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        local_34 = local_34 / iVar5;
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if (*param_1 == 0) {
          iVar5 = (*(code *)PTR_speex_resampler_init_00063654)(piVar8[2],*piVar9,*piVar8,1,0);
          puVar1 = PTR_speex_resampler_skip_zeros_000633e4;
          *param_1 = iVar5;
          (*(code *)puVar1)(iVar5);
        }
        iVar5 = 0x10;
        (*(code *)PTR_speex_resampler_process_interleaved_int_00063a98)
                  (*param_1,iVar12,&local_34,iVar2,&local_38);
        local_38 = piVar8[2] * 2 * local_38;
        local_34 = local_38;
        goto LAB_00044260;
      }
    }
    else {
      local_30 = 0x10;
      iVar11 = (local_34 << 1) / (iVar5 >> 3);
      if (iVar5 >> 3 == 0) {
        trap(0x1c00);
      }
      iVar3 = (*(code *)PTR___rts_calloc_00063a28)
                        (1,iVar11,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1410,0x12d);
      if (iVar3 != 0) {
        (*(code *)(PTR_LAB_00063274 + 0x3a00))(iVar2,local_34,iVar3,piVar9[1],local_30);
        iVar12 = iVar3;
        local_34 = iVar11;
        goto LAB_00044148;
      }
      iVar11 = 0;
    }
LAB_0004433c:
    uVar6 = 0xfffffff5;
  }
  if (iVar7 != 0) {
    (*(code *)PTR_rts_free_000638d4)(iVar7);
  }
  if (iVar3 != 0) {
    (*(code *)PTR_rts_free_000638d4)(iVar3);
  }
  if (iVar11 != 0) {
    (*(code *)PTR_rts_free_000638d4)(iVar11);
    return uVar6;
  }
  return uVar6;
}



// ==== rts_audio_free_codec_context @ 00046350 size=112

void rts_audio_free_codec_context(int *param_1)

{
  code *pcVar1;
  
  if (param_1 != (int *)0x0) {
    if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0x10), pcVar1 != (code *)0x0)) {
      (*pcVar1)();
    }
    (*(code *)PTR_rts_free_000638d4)(param_1);
    return;
  }
  return;
}



// ==== rts_audio_create_codec_context @ 000463c0 size=356

undefined4 * rts_audio_create_codec_context(int param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  if (param_2 == 1) {
    piVar3 = (int *)(PTR_DAT_0006325c + 0x3208);
    if (param_1 != *(int *)(PTR_DAT_0006325c + 0x3208)) {
      if (param_1 == *(int *)(PTR_DAT_0006325c + 0x3220)) {
        piVar3 = (int *)(PTR_DAT_0006325c + 0x3220);
      }
      else {
        if (param_1 != *(int *)(PTR_DAT_0006325c + 0x3238)) {
          return (undefined4 *)0x0;
        }
        piVar3 = (int *)(PTR_DAT_0006325c + 0x3238);
      }
      goto LAB_00046464;
    }
  }
  else {
    piVar3 = (int *)(PTR_DAT_0006325c + 0x3190);
    while (param_1 != *piVar3) {
      piVar3 = piVar3 + 6;
      if (piVar3 == (int *)(PTR_DAT_0006325c + 0x3208)) {
        return (undefined4 *)0x0;
      }
    }
LAB_00046464:
    if (piVar3 == (int *)0x0) {
      return (undefined4 *)0x0;
    }
  }
  puVar1 = (undefined4 *)
           (*(code *)PTR___rts_calloc_00063a28)
                     (1,0x20,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1c24,0xb1);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar1 = piVar3;
  puVar1[5] = 0;
  puVar1[7] = 0;
  if (param_2 == 0) {
    puVar1[4] = param_3[4];
  }
  else if ((param_2 != 1) || (*param_3 != 9)) goto LAB_000464d4;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[3];
LAB_000464d4:
  if ((code *)piVar3[1] == (code *)0x0) {
    return puVar1;
  }
  iVar2 = (*(code *)piVar3[1])();
  if (iVar2 < 0) {
    (*(code *)PTR_rts_audio_free_codec_context_000638dc)();
    return (undefined4 *)0x0;
  }
  return puVar1;
}



// ==== rts_audio_codec_decode @ 00046524 size=72

undefined4 rts_audio_codec_decode(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && (param_3 != 0)) {
    if ((*param_1 != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 8), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00046554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
    return 0xfffffff4;
  }
  return 0xfffffff6;
}



// ==== rts_audio_codec_encode @ 0004656c size=72

undefined4 rts_audio_codec_encode(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && (param_3 != 0)) {
    if ((*param_1 != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xc), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0004659c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
    return 0xfffffff4;
  }
  return 0xfffffff6;
}



// ==== rts_audio_codec_check_encode_id @ 000465b4 size=64

undefined4 rts_audio_codec_check_encode_id(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(PTR_DAT_0006325c + 0x3190);
  do {
    if (param_1 == *piVar1) {
      return 0;
    }
    piVar1 = piVar1 + 6;
  } while (piVar1 != (int *)(PTR_DAT_0006325c + 0x3208));
  return 0xffffffea;
}



// ==== rts_audio_codec_check_decode_id @ 000465f4 size=76

undefined4 rts_audio_codec_check_decode_id(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != *(int *)(PTR_DAT_0006325c + 0x3208)) &&
     (param_1 != *(int *)(PTR_DAT_0006325c + 0x3220))) {
    uVar1 = 0xffffffea;
    if (param_1 == *(int *)(PTR_DAT_0006325c + 0x3238)) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0;
}



// ==== rts_audio_cvrt_fmt_to_codec_id @ 00046640 size=60

int rts_audio_cvrt_fmt_to_codec_id(int param_1)

{
  int iVar1;
  
  iVar1 = -0x37;
  if (param_1 - 0x8001U < 7) {
    iVar1 = (int)(char)PTR_s_snd_device_0004ffec_0x14_0006326c[param_1 + -0x6439];
  }
  return iVar1;
}



// ==== rts_audio_cvrt_codec_id_to_fmt @ 0004667c size=56

undefined4 rts_audio_cvrt_codec_id_to_fmt(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffc9;
  if (param_1 - 2U < 6) {
    uVar1 = *(undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + (param_1 - 2U) * 4 + 0x1bb0);
  }
  return uVar1;
}



// ==== rts_audio_check_encode_param @ 000466b4 size=212

undefined4 rts_audio_check_encode_param(int *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  int *piVar3;
  
  puVar2 = PTR_DAT_0006325c;
  if (param_1 == (int *)0x0) {
    param_1 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1ba4);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1bf0,0x173,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1b38,0x173,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1bd0);
  }
  piVar3 = (int *)(puVar2 + 0x3190);
  while (*param_1 != *piVar3) {
    piVar3 = piVar3 + 6;
    if (piVar3 == (int *)(puVar2 + 0x3208)) {
      return 0xffffffea;
    }
  }
  if (piVar3 == (int *)0x0) {
    return 0xffffffea;
  }
  if ((code *)piVar3[5] == (code *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0004676c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)piVar3[5])();
  return uVar1;
}



// ==== rts_pcm_decode_init @ 00046790 size=348

undefined4 rts_pcm_decode_init(undefined4 *param_1)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  short *psVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  
  psVar1 = (short *)(*(code *)PTR___rts_calloc_00063a28)
                              (1,0x200,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1d00,0x1d);
  if (psVar1 == (short *)0x0) {
    return 0xfffffff5;
  }
  iVar8 = *(int *)*param_1;
  if (iVar8 == 3) {
    uVar9 = 0;
    do {
      uVar4 = uVar9 & 0xff ^ 0x55;
      uVar6 = (uVar4 & 0x70) >> 4;
      iVar8 = (uVar4 & 0xf) * 2;
      if (uVar6 == 0) {
        sVar3 = ((short)iVar8 + 1) * 8;
      }
      else {
        sVar3 = (short)(iVar8 + 0x21 << uVar6 + 2);
      }
      if ((uVar9 & 0xff) >> 7 == 0) {
        sVar3 = -sVar3;
      }
      psVar5 = psVar1 + uVar9;
      uVar9 = uVar9 + 1;
      *psVar5 = sVar3;
    } while (uVar9 != 0x100);
  }
  else {
    if (iVar8 == 4) goto LAB_000468c4;
    if (iVar8 != 2) {
      return 0xffffffea;
    }
    uVar9 = 0xff;
    psVar5 = psVar1;
    do {
      uVar6 = uVar9 & 0xf;
      uVar4 = uVar9 & 0x70;
      cVar7 = (char)uVar9;
      uVar9 = uVar9 - 1;
      sVar3 = (short)(uVar6 * 8 + 0x84 << (uVar4 >> 4));
      sVar2 = 0x84 - sVar3;
      if (-1 < cVar7) {
        sVar2 = sVar3 + -0x84;
      }
      *psVar5 = sVar2;
      psVar5 = psVar5 + 1;
    } while (uVar9 != 0xffffffff);
  }
  param_1[1] = 8000;
  param_1[2] = 1;
  param_1[3] = 0x10;
LAB_000468c4:
  param_1[7] = psVar1;
  return 0;
}



// ==== rts_pcm_decode_frame @ 000468ec size=512

int rts_pcm_decode_frame(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1c50);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1ce8,0x46,param_1);
    param_3 = (undefined4 *)&DAT_00000046;
  }
  else {
    if (param_2 != (undefined4 *)0x0) goto LAB_000469b8;
    param_1 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1cc0);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1ce8,0x47,param_1);
    param_3 = (undefined4 *)0x47;
  }
  param_2 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1c58);
  (*(code *)PTR___assert_000637b8)();
LAB_000469b8:
  iVar5 = param_2[2];
  if (iVar5 == 0) {
    return -0x12;
  }
  iVar7 = param_1[7];
  if (iVar7 == 0) {
    return -10;
  }
  iVar1 = *(int *)*param_1;
  pbVar6 = (byte *)*param_2;
  if (iVar1 < 2) {
    return -0x16;
  }
  if (iVar1 < 4) {
    iVar1 = iVar5 << 1;
    puVar3 = (undefined4 *)(*(code *)PTR_rts_audio_new_buffer_00063770)(param_1 + 6,iVar1);
    if (puVar3 == (undefined4 *)0x0) {
      return -0xb;
    }
    puVar2 = (undefined2 *)*puVar3;
    pbVar8 = pbVar6;
    while (0 < (int)(pbVar6 + (iVar5 - (int)pbVar8))) {
      *puVar2 = *(undefined2 *)(iVar7 + (uint)*pbVar8 * 2);
      puVar2 = puVar2 + 1;
      pbVar8 = pbVar8 + 1;
    }
  }
  else {
    if (iVar1 != 4) {
      return -0x16;
    }
    puVar3 = (undefined4 *)(*(code *)PTR_rts_audio_new_buffer_00063770)(param_1 + 6,iVar5);
    if (puVar3 == (undefined4 *)0x0) {
      return -0xb;
    }
    (*(code *)PTR_memcpy_00063908)(*puVar3,pbVar6,iVar5);
    iVar1 = iVar5;
  }
  puVar3[2] = iVar1;
  if (param_3 != (undefined4 *)0x0) {
    uVar4 = (*(code *)PTR_rts_av_get_buffer_0006379c)(puVar3);
    *param_3 = uVar4;
  }
  (*(code *)PTR_rts_av_put_buffer_00063548)(puVar3);
  return iVar5;
}



// ==== rts_pcm_decode_close @ 00046aec size=72

undefined4 rts_pcm_decode_close(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    (*(code *)PTR_rts_free_000638d4)();
    return 0;
  }
  return 0;
}



// ==== rts_pcm_encode_init @ 00046ccc size=172

undefined4 rts_pcm_encode_init(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)*param_1;
  if (iVar4 == 3) {
    uVar3 = 0xd5;
    puVar1 = PTR_DAT_0006325c + 0x3cc0;
    puVar2 = PTR_LAB_00063274 + 0x6b80;
  }
  else {
    if (iVar4 == 4) {
      return 0;
    }
    if (iVar4 != 2) {
      return 0xffffffea;
    }
    uVar3 = 0xff;
    puVar1 = PTR_DAT_0006325c + 0x7cc0;
    puVar2 = PTR_LAB_00063274 + 0x6b40;
  }
  (*(code *)(PTR_LAB_00063274 + 0x6bc4))(puVar1,puVar2,uVar3);
  param_1[1] = 8000;
  param_1[2] = 1;
  param_1[3] = 0x10;
  return 0;
}



// ==== rts_pcm_encode_frame @ 00046d78 size=696

int rts_pcm_encode_frame(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  
  if (param_1 == (undefined4 *)0x0) {
    piVar4 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1c50);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1de0,0x77,piVar4);
    param_3 = (undefined4 *)&DAT_00000077;
    param_2 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1d20);
    piVar5 = piVar4;
  }
  else {
    piVar5 = param_2;
    if (param_2 != (int *)0x0) goto LAB_00046e4c;
    piVar4 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1cc0);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1de0,0x78,piVar4);
    param_3 = (undefined4 *)0x78;
    param_2 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1d20);
    piVar5 = piVar4;
  }
  while( true ) {
    (*(code *)PTR___assert_000637b8)
              (piVar4,param_2,param_3,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1dc8);
LAB_00046e4c:
    if (*param_2 == 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1de0,0x79,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1d88);
    }
    psVar7 = (short *)*piVar5;
    if (psVar7 != (short *)0x0) break;
    param_3 = (undefined4 *)0x79;
    piVar4 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1d88);
    param_2 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1d20);
  }
  iVar8 = piVar5[2];
  if (iVar8 == 0) {
    return 0;
  }
  iVar9 = *(int *)*param_1;
  if ((iVar9 < 2) || ((iVar6 = iVar8 >> 1, 3 < iVar9 && (iVar6 = iVar8, iVar9 != 4)))) {
    iVar6 = -0x16;
  }
  iVar9 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar6);
  if (iVar9 != 0) {
    return iVar6;
  }
  if (iVar6 < 1) {
    return -0x24;
  }
  puVar2 = (undefined4 *)(*(code *)PTR_rts_audio_new_buffer_00063770)(param_1 + 6,iVar6);
  puVar1 = PTR_DAT_0006325c;
  if (puVar2 == (undefined4 *)0x0) {
    return -0xb;
  }
  puVar10 = (undefined1 *)*puVar2;
  iVar9 = *(int *)*param_1;
  if (iVar9 == 3) {
    puVar11 = puVar10;
    do {
      puVar12 = puVar11 + 1;
      *puVar11 = puVar1[(*psVar7 + 0x8000 >> 2) + 0x3cc0];
      psVar7 = psVar7 + 1;
      puVar11 = puVar12;
    } while (puVar12 != puVar10 + iVar6);
    puVar2[2] = iVar6;
  }
  else {
    if (iVar9 == 4) {
      (*(code *)PTR_memcpy_00063908)(puVar10,psVar7,iVar6);
    }
    else if (iVar9 == 2) {
      puVar11 = puVar10;
      do {
        puVar12 = puVar11 + 1;
        *puVar11 = puVar1[(*psVar7 + 0x8000 >> 2) + 0x7cc0];
        psVar7 = psVar7 + 1;
        puVar11 = puVar12;
      } while (puVar12 != puVar10 + iVar6);
      puVar2[2] = iVar6;
      goto LAB_00046fd0;
    }
    puVar2[2] = iVar6;
  }
LAB_00046fd0:
  if (param_3 != (undefined4 *)0x0) {
    uVar3 = (*(code *)PTR_rts_av_get_buffer_0006379c)(puVar2);
    *param_3 = uVar3;
  }
  (*(code *)PTR_rts_av_put_buffer_00063548)(puVar2);
  return iVar8;
}



// ==== rts_pcm_encode_close @ 00047030 size=8

undefined4 rts_pcm_encode_close(void)

{
  return 0;
}



// ==== rts_pcm_check_aulaw @ 00047038 size=172

undefined4 rts_pcm_check_aulaw(undefined *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 8000;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1ba4;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1db4,0xb0,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1d20,0xb0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1da0);
  }
  if ((*(int *)(param_1 + 4) == iVar2) && (*(int *)(param_1 + 0xc) == 1)) {
    uVar1 = 0xffffffeb;
    if (*(int *)(param_1 + 8) == 0x10) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0xffffffeb;
}



// ==== rts_g726_encode_init @ 000471c8 size=540

/* WARNING: Removing unreachable block (ram,0x000472a4) */

undefined4 rts_g726_encode_init(undefined *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_20 [16];
  
  puVar4 = param_1;
  puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (param_1 == (undefined *)0x0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1c50;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x2014,0x183,puVar4);
    puVar3 = (undefined *)0x183;
    (*(code *)PTR___assert_000637b8)
              (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1e00,0x183,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1ffc);
  }
  iVar5 = *(int *)(puVar4 + 0x10);
  if ((iVar5 == 24000) ||
     (((iVar1 = 16000, 24000 < iVar5 && (iVar1 = 40000, iVar5 == 32000)) || (iVar5 == iVar1)))) {
    iVar5 = (*(code *)PTR___rts_calloc_00063a28)(1,0x7c,puVar3 + 0x2014,400);
    if (iVar5 == 0) {
      uVar2 = 0xfffffff5;
    }
    else {
      *(undefined4 *)(param_1 + 8) = 1;
      *(undefined4 *)(param_1 + 0xc) = 0x10;
      *(undefined4 *)(param_1 + 4) = 8000;
      if (*(int *)(param_1 + 0x10) != 0) {
        *(int *)(iVar5 + 0x74) = (*(int *)(param_1 + 0x10) + 4000) / 8000;
      }
      puVar3 = PTR_memcpy_00063908;
      puVar4 = PTR_DAT_0006325c;
      iVar1 = *(int *)(iVar5 + 0x74);
      if (iVar1 < 2) {
        iVar6 = 2;
      }
      else {
        iVar6 = 5;
        if (iVar1 < 6) {
          iVar6 = iVar1;
        }
      }
      *(int *)(iVar5 + 0x74) = iVar6;
      *(int *)(param_1 + 0x10) = iVar6 * 8000;
      (*(code *)puVar3)(iVar5,puVar4 + (iVar6 + -2) * 0x10 + 0x314c,0x10);
      puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c;
      *(undefined1 *)(iVar5 + 0x12) = 0x20;
      *(undefined4 *)(iVar5 + 0x48) = 1;
      *(undefined1 *)(iVar5 + 0x15) = 0x20;
      *(undefined4 *)(iVar5 + 0x4c) = 1;
      *(undefined1 *)(iVar5 + 0x18) = 0x20;
      *(undefined1 *)(iVar5 + 0x1b) = 0x20;
      *(undefined1 *)(iVar5 + 0x1e) = 0x20;
      *(undefined1 *)(iVar5 + 0x21) = 0x20;
      *(undefined1 *)(iVar5 + 0x24) = 0x20;
      *(undefined1 *)(iVar5 + 0x27) = 0x20;
      puVar3 = PTR_memcpy_00063908;
      *(undefined4 *)(iVar5 + 0x54) = 0x220;
      *(undefined4 *)(iVar5 + 0x70) = 0x220;
      *(undefined4 *)(iVar5 + 0x58) = 0x8800;
      iVar1 = (*(code *)puVar3)(auStack_20,puVar4 + 0x1f80,0x10);
      uVar2 = 0;
      uVar7 = *(undefined4 *)(iVar1 + (iVar6 + -2) * 4);
      *(int *)(param_1 + 0x1c) = iVar5;
      *(undefined4 *)(param_1 + 0x14) = uVar7;
    }
  }
  else {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1e6c,puVar3 + 0x2014,0x18c);
    uVar2 = 0xffffffeb;
  }
  return uVar2;
}



// ==== rts_g726_encode_frame @ 000473e4 size=2396

int rts_g726_encode_frame(undefined *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined *puVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  undefined *puVar15;
  int *unaff_s1;
  int iVar16;
  uint uVar17;
  code *pcVar18;
  int *piVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  int *piVar22;
  int iVar23;
  undefined1 auStack_68 [8];
  int local_60;
  undefined4 *local_5c;
  undefined1 *local_58;
  int local_54;
  int local_50;
  int local_4c;
  int *local_48;
  int local_44;
  int local_40;
  undefined1 *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  
  if (param_1 == (undefined *)0x0) {
    puVar15 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1c50;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1fe4,0x1b6,puVar15);
    uVar10 = 0x1b6;
    param_2 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1e00);
    param_1 = puVar15;
  }
  else {
    unaff_s1 = param_2;
    if (param_2 != (int *)0x0) goto LAB_000474cc;
    puVar15 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1cc0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1fe4,0x1b7,puVar15);
    uVar10 = 0x1b7;
    param_2 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1e00);
    param_1 = puVar15;
  }
  do {
    puVar11 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1fcc;
LAB_000474c0:
    (*(code *)PTR___assert_000637b8)(puVar15,param_2,uVar10,puVar11);
LAB_000474cc:
    if (*param_2 == 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1fe4,0x1b8,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1d88);
    }
    local_50 = *unaff_s1;
    if (local_50 != 0) {
      piVar22 = *(int **)(param_1 + 0x1c);
      iVar3 = -10;
      if (piVar22 != (int *)0x0) {
        local_4c = unaff_s1[2];
        local_60 = local_4c >> 1;
        if (local_60 == *(int *)(param_1 + 0x14)) {
          if (local_60 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = local_60 * piVar22[0x1d] + 7;
            iVar16 = local_60 * piVar22[0x1d] + 0xe;
            if (-1 < iVar3) {
              iVar16 = iVar3;
            }
            iVar16 = iVar16 >> 3;
            iVar3 = 0;
            if (iVar16 != 0) {
              local_40 = iVar16;
              local_5c = (undefined4 *)
                         (*(code *)PTR_rts_audio_new_buffer_00063770)(param_1 + 0x18,iVar16);
              if (local_5c != (undefined4 *)0x0) {
                puVar20 = (undefined1 *)*local_5c;
                if (iVar16 < 0) {
                  iVar16 = 0;
                  puVar20 = (undefined1 *)0x0;
                }
                local_3c = puVar20 + iVar16;
                uVar17 = 0x20;
                local_54 = 0;
                piVar19 = (int *)0x0;
                do {
                  if (local_60 <= local_54) {
                    if ((int)uVar17 < 0x20) {
                      piVar19 = (int *)((int)piVar19 << (uVar17 & 0x1f));
                    }
                    for (; (int)uVar17 < 0x20; uVar17 = uVar17 + 8) {
                      *puVar20 = (char)((uint)piVar19 >> 0x18);
                      puVar20 = puVar20 + 1;
                      piVar19 = (int *)((int)piVar19 << 8);
                    }
                    local_5c[2] = local_40;
                    if (param_3 != (undefined4 *)0x0) {
                      uVar10 = (*(code *)PTR_rts_av_get_buffer_0006379c)(local_5c);
                      *param_3 = uVar10;
                    }
                    (*(code *)PTR_rts_av_put_buffer_00063548)(local_5c);
                    return local_4c;
                  }
                  iVar16 = piVar22[0x1a];
                  iVar8 = (int)*(short *)(local_50 + local_54 * 2);
                  param_1 = (undefined *)piVar22[0x1d];
                  iVar3 = iVar8 + 3;
                  if (-1 < iVar8) {
                    iVar3 = iVar8;
                  }
                  uVar4 = (iVar3 >> 2) - iVar16;
                  bVar2 = (int)uVar4 < 0;
                  if (bVar2) {
                    uVar4 = -uVar4;
                  }
                  iVar3 = 0;
                  uVar12 = uVar4;
                  if ((uVar4 & 0xff00) != 0) {
                    uVar12 = uVar4 >> 8;
                    iVar3 = 8;
                  }
                  for (uVar5 = 0;
                      (iVar8 = *(int *)(*piVar22 + uVar5 * 4), iVar8 != 0x7fffffff &&
                      (iVar8 < (int)(((iVar3 + (uint)(byte)PTR_rts_log2_tab_000638b0[uVar12]) * 0x80
                                     + ((int)(uVar4 << 7) >>
                                        (iVar3 + (uint)(byte)PTR_rts_log2_tab_000638b0[uVar12] &
                                        0x1f) & 0x7fU)) - (piVar22[0x1c] >> 2)))); uVar5 = uVar5 + 1
                      ) {
                  }
                  if (bVar2) {
                    uVar5 = ~uVar5;
                  }
                  if ((param_1 != (undefined *)0x2) && (uVar5 == 0)) {
                    uVar5 = 0xff;
                  }
                  unaff_s1 = (int *)(uVar5 & (1 << ((uint)param_1 & 0x1f)) - 1U & 0xff);
                  local_44 = (int)unaff_s1 * 2;
                  local_58 = (undefined1 *)((int)unaff_s1 >> ((uint)(param_1 + -1) & 0x1f));
                  uVar4 = (int)*(short *)(piVar22[1] + local_44) + (piVar22[0x1c] >> 2);
                  if ((int)uVar4 < 0) {
                    local_38 = (int *)0x0;
                  }
                  else {
                    local_38 = (int *)(int)(short)((int)((uVar4 & 0x7f) + 0x80 <<
                                                        ((int)uVar4 >> 7 & 0xfU)) >> 7);
                  }
                  uVar4 = piVar22[0x16] >> 0xf;
                  iVar3 = 0x7c00;
                  if ((int)uVar4 < 10) {
                    iVar3 = (piVar22[0x16] >> 10 & 0x1fU) + 0x20 << (uVar4 & 0x1f);
                  }
                  iVar8 = piVar22[0x19];
                  bVar2 = (int)local_38 <= iVar3 * 3 >> 2;
                  if (local_58 != (undefined1 *)0x0) {
                    local_38 = (int *)-(int)local_38;
                  }
                  iVar3 = 0;
                  if (((int)local_38 + piVar22[0x1b] != 0) &&
                     (iVar3 = -1, -1 < (int)local_38 + piVar22[0x1b])) {
                    iVar3 = 1;
                  }
                  iVar23 = 0;
                  if ((local_38 != (int *)0x0) && (iVar23 = -1, -1 < (int)local_38)) {
                    iVar23 = 1;
                  }
                  if (iVar8 != 1 || bVar2) {
                    iVar14 = piVar22[10];
                    iVar9 = -iVar14 * piVar22[0x12] * iVar3 >> 5;
                    if (0xff < iVar9) {
                      iVar9 = 0xff;
                    }
                    if (iVar9 < -0x100) {
                      iVar9 = -0x100;
                    }
                    iVar9 = piVar22[0xb] +
                            ((iVar3 * 0x80 * piVar22[0x13] + iVar9) - (piVar22[0xb] >> 7));
                    if (0x3000 < iVar9) {
                      iVar9 = 0x3000;
                    }
                    if (iVar9 < -0x3000) {
                      iVar9 = -0x3000;
                    }
                    iVar14 = iVar14 + (iVar3 * 0xc0 * piVar22[0x12] - (iVar14 >> 8));
                    piVar22[0xb] = iVar9;
                    iVar7 = iVar9 + -0x3c00;
                    if ((iVar9 + -0x3c00 <= iVar14) && (iVar7 = iVar14, 0x3c00 - iVar9 <= iVar14)) {
                      iVar7 = 0x3c00 - iVar9;
                    }
                    piVar22[10] = iVar7;
                    iVar9 = 0;
                    piVar13 = piVar22;
                    do {
                      iVar7 = -1;
                      iVar14 = iVar9 + 0x16;
                      iVar9 = iVar9 + 3;
                      if (*(char *)((int)piVar22 + iVar14) == '\0') {
                        iVar7 = 1;
                      }
                      piVar13[0xc] = piVar13[0xc] + (iVar23 * 0x80 * iVar7 - (piVar13[0xc] >> 8));
                      piVar13 = piVar13 + 1;
                    } while (iVar9 != 0x12);
                    iVar23 = piVar22[0x12];
                  }
                  else {
                    piVar22[10] = 0;
                    piVar22[0xb] = 0;
                    piVar22[0xc] = 0;
                    piVar22[0xd] = 0;
                    piVar22[0xe] = 0;
                    piVar22[0xf] = 0;
                    piVar22[0x10] = 0;
                    piVar22[0x11] = 0;
                    iVar23 = piVar22[0x12];
                  }
                  puVar15 = PTR_LAB_00063274;
                  piVar22[0x13] = iVar23;
                  iVar23 = 1;
                  if (iVar3 != 0) {
                    iVar23 = iVar3;
                  }
                  piVar22[0x12] = iVar23;
                  *(char *)((int)piVar22 + 0x13) = (char)piVar22[4];
                  *(undefined1 *)(piVar22 + 5) = *(undefined1 *)((int)piVar22 + 0x11);
                  *(undefined1 *)((int)piVar22 + 0x15) = *(undefined1 *)((int)piVar22 + 0x12);
                  local_48 = unaff_s1;
                  (*(code *)(puVar15 + 0x7154))(iVar16 + (int)local_38,piVar22 + 4);
                  piVar13 = local_38;
                  iVar3 = 5;
                  pcVar18 = (code *)(PTR_LAB_00063274 + 0x7154);
                  piVar6 = piVar22;
                  do {
                    iVar3 = iVar3 + -1;
                    *(undefined1 *)((int)piVar6 + 0x25) = *(undefined1 *)((int)piVar6 + 0x22);
                    *(undefined1 *)((int)piVar6 + 0x26) = *(undefined1 *)((int)piVar6 + 0x23);
                    *(char *)((int)piVar6 + 0x27) = (char)piVar6[9];
                    piVar6 = (int *)((int)piVar6 + -3);
                  } while (iVar3 != 0);
                  local_38 = (int *)((int)piVar22 + 0x16);
                  (*pcVar18)(piVar13,local_38);
                  *(char *)((int)piVar22 + 0x16) = (char)local_58;
                  piVar22[0x19] = (uint)(piVar22[0xb] < -0x2e00);
                  iVar23 = piVar22[0x17] +
                           (uint)*(byte *)(piVar22[3] + (int)unaff_s1) * 0x10 +
                           (-piVar22[0x17] >> 5);
                  piVar22[0x17] = iVar23;
                  iVar16 = piVar22[0x18] +
                           (uint)*(byte *)(piVar22[3] + (int)unaff_s1) * 0x10 +
                           (-piVar22[0x18] >> 7);
                  piVar22[0x18] = iVar16;
                  iVar3 = piVar22[0x1c];
                  if (iVar8 != 1 || bVar2) {
                    iVar8 = piVar22[0x14] + (-piVar22[0x14] >> 4);
                    piVar22[0x14] = iVar8;
                    if (((iVar3 < 0x600) || (piVar22[0xb] < -0x2e00 != 0)) ||
                       (uVar12 = iVar23 * 4 - iVar16, uVar4 = (int)uVar12 >> 0x1f,
                       iVar16 >> 3 <= (int)((uVar4 ^ uVar12) - uVar4))) {
                      piVar22[0x14] = iVar8 + 0x20;
                    }
                  }
                  else {
                    piVar22[0x14] = 0x100;
                  }
                  iVar16 = iVar3 + *(short *)(piVar22[2] + local_44) + (-iVar3 >> 5);
                  iVar3 = 0x220;
                  if ((0x21f < iVar16) && (iVar3 = 0x1400, iVar16 < 0x1401)) {
                    iVar3 = iVar16;
                  }
                  piVar22[0x15] = iVar3;
                  local_58 = auStack_68;
                  piVar22[0x1a] = 0;
                  iVar8 = piVar22[0x16] + iVar3 + (-piVar22[0x16] >> 6);
                  piVar22[0x16] = iVar8;
                  iVar16 = 0x40;
                  if (piVar22[0x14] < 0x100) {
                    iVar16 = piVar22[0x14] >> 2;
                  }
                  local_30 = piVar22 + 6;
                  piVar22[0x1c] = iVar8 + (iVar3 - (iVar8 >> 6)) * iVar16 >> 6;
                  piVar13 = piVar22;
                  piVar6 = local_38;
                  do {
                    local_34 = (int *)piVar22[0x1a];
                    local_38 = piVar13;
                    uVar10 = (*pcVar18)(piVar13[0xc] >> 2,auStack_68);
                    iVar3 = (*(code *)(PTR_LAB_00063274 + 0x70f0))(uVar10,piVar6);
                    iVar3 = (int)local_34 + iVar3;
                    piVar13 = local_38 + 1;
                    piVar22[0x1a] = iVar3;
                    piVar6 = (int *)((int)piVar6 + 3);
                  } while (piVar13 != local_30);
                  local_34 = piVar22 + 2;
                  piVar22[0x1b] = iVar3 >> 1;
                  piVar13 = piVar22;
                  piVar6 = piVar22 + 4;
                  do {
                    local_30 = (int *)piVar22[0x1a];
                    piVar1 = piVar13 + 10;
                    piVar13 = piVar13 + 1;
                    uVar10 = (*pcVar18)(*piVar1 >> 2,auStack_68);
                    iVar3 = (*(code *)(PTR_LAB_00063274 + 0x70f0))(uVar10,piVar6);
                    piVar22[0x1a] = (int)local_30 + iVar3;
                    piVar6 = (int *)((int)piVar6 + 3);
                  } while (piVar13 != local_34);
                  piVar22[0x1a] = (int)local_30 + iVar3 >> 1;
                  if ((0x1f < (int)param_1) || ((uint)unaff_s1 >> ((uint)param_1 & 0x1f) != 0)) {
                    uVar10 = 0x62;
                    puVar15 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1ed4;
                    goto LAB_00047c48;
                  }
                  if ((int)param_1 < (int)uVar17) {
                    uVar17 = uVar17 - (int)param_1;
                    local_48 = (int *)((uint)unaff_s1 | (int)piVar19 << ((uint)param_1 & 0x1f));
                    puVar21 = puVar20;
                  }
                  else {
                    uVar4 = (uint)unaff_s1 >> ((int)param_1 - uVar17 & 0x1f) |
                            (int)piVar19 << (uVar17 & 0x1f);
                    if (local_3c <= puVar20 + 3) goto code_r0x00047c34;
                    puVar20[3] = (char)uVar4;
                    puVar20[2] = (char)(uVar4 >> 8);
                    puVar21 = puVar20 + 4;
                    puVar20[1] = (char)(uVar4 >> 0x10);
                    *puVar20 = (char)(uVar4 >> 0x18);
                    uVar17 = (uVar17 - (int)param_1) + 0x20;
                  }
                  local_54 = local_54 + 1;
                  piVar19 = local_48;
                  puVar20 = puVar21;
                } while( true );
              }
              iVar3 = -0xb;
            }
          }
        }
        else {
          (*(code *)PTR_rts_log_000635ec)
                    (4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1e98,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1fe4,0x1c4,local_60,
                     *(int *)(param_1 + 0x14));
          iVar3 = -0x31;
        }
      }
      return iVar3;
    }
    uVar10 = 0x1b8;
    puVar15 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1d88;
    param_2 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1e00);
  } while( true );
code_r0x00047c34:
  uVar10 = 0x6d;
  puVar15 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1f5c;
LAB_00047c48:
  param_2 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1ef4);
  puVar11 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1fc0;
  goto LAB_000474c0;
}



// ==== rts_g726_encode_close @ 00047d40 size=72

undefined4 rts_g726_encode_close(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    (*(code *)PTR_rts_free_000638d4)();
    return 0;
  }
  return 0;
}



// ==== rts_g726_encode_check @ 00047d88 size=172

undefined4 rts_g726_encode_check(undefined *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 8000;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1ba4;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1fa8,0x1f0,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1e00,0x1f0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1f90);
  }
  if ((*(int *)(param_1 + 4) == iVar2) && (*(int *)(param_1 + 0xc) == 1)) {
    uVar1 = 0xffffffeb;
    if (*(int *)(param_1 + 8) == 0x10) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0xffffffeb;
}



// ==== rts_aac_encode_check @ 00047e40 size=180

undefined4 rts_aac_encode_check(undefined *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = 16000;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1ba4;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x24bc,0x20,param_1);
    iVar1 = (*(code *)PTR___assert_000637b8)
                      (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x22d0,0x20,
                       PTR_s_snd_device_0004ffec_0x14_0006326c + 0x24a4);
  }
  iVar3 = *(int *)(param_1 + 4);
  if (((iVar3 != iVar1) && (iVar3 != 48000)) && (iVar3 != 8000)) {
    return 0xffffffeb;
  }
  uVar2 = 0xffffffeb;
  if (*(int *)(param_1 + 8) == 0x10) {
    uVar2 = 0;
  }
  return uVar2;
}



// ==== rts_aac_encode_init @ 00047ef4 size=476

undefined4 rts_aac_encode_init(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [3];
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  piVar3 = (int *)(*(code *)PTR___rts_calloc_00063a28)
                            (1,4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x2490,0x3a);
  puVar2 = PTR_rts_log_000635ec;
  puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (piVar3 == (int *)0x0) {
    uVar5 = 0xfffffff5;
  }
  else {
    iVar6 = *(int *)(param_1 + 4);
    if (((iVar6 == 16000) || (iVar6 == 48000)) || (iVar6 == 8000)) {
      iVar6 = iVar6 << 1;
      if (*(int *)(param_1 + 8) - 1U < 2) {
        if (iVar6 < *(int *)(param_1 + 0x10)) {
          *(int *)(param_1 + 0x10) = iVar6;
          (*(code *)puVar2)(4,puVar4 + 0x238c,puVar1 + 0x2490,0x57,iVar6);
        }
        iVar6 = (*(code *)PTR_AACEncoder_API_context_Create_00063720)();
        *piVar3 = iVar6;
        if (iVar6 != 0) {
          local_28 = *(undefined4 *)(param_1 + 4);
          local_24 = *(undefined4 *)(param_1 + 0x10);
          (*(code *)PTR_AACEncoder_API_Set_00063b00)(iVar6,&local_28,4,0);
          local_20[0] = *(undefined4 *)(param_1 + 8);
          (*(code *)PTR_AACEncoder_API_Set_00063b00)(*piVar3,local_20,4,1);
          puVar1 = PTR_AACEncoder_API_GetBlockLen_000639c0;
          iVar6 = *piVar3;
          *(undefined4 *)(param_1 + 0xc) = 0x10;
          iVar6 = (*(code *)puVar1)(iVar6);
          *(int **)(param_1 + 0x1c) = piVar3;
          *(int *)(param_1 + 0x14) = iVar6 >> (*(uint *)(param_1 + 8) & 0x1f);
          return 0;
        }
        uVar5 = 0x5c;
        puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x23b8;
      }
      else {
        uVar5 = 0x4f;
        puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x2364;
      }
    }
    else {
      uVar5 = 0x44;
      puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x2338;
    }
    (*(code *)PTR_rts_log_000635ec)(4,puVar4,puVar1 + 0x2490,uVar5);
    (*(code *)PTR_rts_free_000638d4)(piVar3);
    uVar5 = 0xffffffeb;
  }
  return uVar5;
}



// ==== rts_aac_encode_frame @ 000480d0 size=564

int rts_aac_encode_frame(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  
  if (param_1 == 0) {
    piVar4 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1c50);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x2478,0x7d,piVar4);
    param_3 = (undefined4 *)&DAT_0000007d;
    param_2 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0x22d0);
    piVar5 = piVar4;
  }
  else {
    piVar5 = param_2;
    if (param_2 != (int *)0x0) goto LAB_000481a0;
    piVar4 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1cc0);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x2478,0x7e,piVar4);
    param_3 = (undefined4 *)0x7e;
    param_2 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0x22d0);
    piVar5 = piVar4;
  }
  while( true ) {
    (*(code *)PTR___assert_000637b8)
              (piVar4,param_2,param_3,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x2460);
LAB_000481a0:
    if (*param_2 == 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + 0x2478,0x7f,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1d88);
    }
    iVar7 = *piVar5;
    if (iVar7 != 0) break;
    param_3 = (undefined4 *)0x7f;
    piVar4 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1d88);
    param_2 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0x22d0);
  }
  puVar8 = *(undefined4 **)(param_1 + 0x1c);
  iVar1 = -10;
  if (puVar8 != (undefined4 *)0x0) {
    iVar6 = piVar5[2];
    iVar1 = iVar6 >> (*(uint *)(param_1 + 8) & 0x1f);
    if (iVar1 == *(int *)(param_1 + 0x14)) {
      iVar1 = 0;
      if (iVar6 != 0) {
        puVar2 = (undefined4 *)(*(code *)PTR_rts_audio_new_buffer_00063770)(param_1 + 0x18,iVar6);
        if (puVar2 == (undefined4 *)0x0) {
          iVar1 = -0xb;
        }
        else {
          iVar7 = (*(code *)PTR_AACEncoder_API_Process_0006373c)(*puVar8,iVar7,*puVar2,iVar6 >> 1);
          if (iVar7 < 0) {
            (*(code *)PTR_rts_log_000635ec)
                      (1,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x2424,iVar7);
          }
          else {
            puVar2[2] = iVar7;
            if (param_3 != (undefined4 *)0x0) {
              uVar3 = (*(code *)PTR_rts_av_get_buffer_0006379c)(puVar2);
              *param_3 = uVar3;
            }
          }
          (*(code *)PTR_rts_av_put_buffer_00063548)(puVar2);
          iVar1 = iVar6;
        }
      }
    }
    else {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x23e8,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + 0x2478,0x8c,iVar1,
                 *(int *)(param_1 + 0x14));
      iVar1 = -0x31;
    }
  }
  return iVar1;
}



// ==== rts_aac_encode_close @ 00048304 size=96

undefined4 rts_aac_encode_close(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      (*(code *)PTR_AACEncoder_API_free_00063370)();
    }
    (*(code *)PTR_rts_free_000638d4)(piVar1);
  }
  return 0;
}



