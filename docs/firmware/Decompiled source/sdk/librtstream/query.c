/* librtstream — "query" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtstream.h"

// ==== query_v4l2_frmival @ 00026f90 size=200

undefined4 query_v4l2_frmival(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_70 [16];
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined1 *local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if (param_3 == (int *)0x0) {
    uVar1 = 0xfffffff6;
  }
  else {
    if (*param_3 == 1) {
      iVar6 = param_3[1];
      iVar7 = param_3[2];
    }
    else {
      iVar6 = param_3[2];
      iVar7 = param_3[5];
    }
    local_38 = auStack_70;
    iVar5 = 0;
    while( true ) {
      uVar1 = (*(code *)PTR_rts_v4l2_enum_frmival_000639a4)
                        (param_1,param_2,iVar6,iVar7,iVar5,auStack_70);
      iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
      if (iVar2 != 0) break;
      iVar5 = iVar5 + 1;
    }
    if (iVar5 == 0) {
      uVar1 = 0xffffffee;
    }
    else {
      piVar3 = (int *)(*(code *)PTR___rts_calloc_00063a28)
                                (iVar5,0x1c,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4570,0x126)
      ;
      if (piVar3 == (int *)0x0) {
        uVar1 = 0xfffffff5;
      }
      else {
        iVar2 = 0;
        local_30 = 1;
        local_2c = 3;
        piVar4 = piVar3;
        do {
          local_34 = iVar2;
          uVar1 = (*(code *)PTR_rts_v4l2_enum_frmival_000639a4)
                            (param_1,param_2,iVar6,iVar7,iVar2,auStack_70);
          iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
          if (iVar2 != 0) break;
          if (local_60 == local_30) {
            *piVar4 = local_30;
            piVar4[1] = local_5c;
            piVar4[2] = local_58;
          }
          else {
            *piVar4 = local_2c;
            piVar4[1] = local_5c;
            piVar4[2] = local_58;
            piVar4[3] = local_54;
            piVar4[4] = local_50;
            piVar4[5] = local_4c;
            piVar4[6] = local_48;
          }
          iVar2 = local_34 + 1;
          piVar4 = piVar4 + 7;
        } while (iVar2 < iVar5);
        iVar6 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
        if (iVar6 == 0) {
          param_3[7] = iVar5;
          param_3[8] = (int)piVar3;
        }
        else {
          (*(code *)PTR_rts_free_000638d4)(piVar3);
        }
      }
    }
  }
  return uVar1;
}



// ==== query_v4l2_resolution @ 000271cc size=12

undefined4 query_v4l2_resolution(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 auStack_60 [8];
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 *local_30;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0xfffffff6;
  }
  else {
    local_30 = auStack_60;
    iVar6 = 0;
    while( true ) {
      uVar1 = (*(code *)PTR_rts_v4l2_enum_frmsizes_00063a20)(param_1,*param_2,iVar6,auStack_60);
      iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
      if (iVar2 != 0) break;
      iVar6 = iVar6 + 1;
    }
    if (iVar6 == 0) {
      uVar1 = 0xffffffee;
    }
    else {
      puVar3 = (undefined4 *)
               (*(code *)PTR___rts_calloc_00063a28)
                         (iVar6,0x24,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4588,0x16d);
      if (puVar3 == (undefined4 *)0x0) {
        uVar1 = 0xfffffff5;
      }
      else {
        iVar2 = 0;
        puVar5 = puVar3;
        do {
          uVar1 = (*(code *)PTR_rts_v4l2_enum_frmsizes_00063a20)(param_1,*param_2,iVar2,auStack_60);
          iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
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
            puVar5[4] = local_48;
            puVar5[5] = local_44;
            puVar5[6] = local_40;
          }
          uVar1 = (*(code *)PTR_query_v4l2_frmival_00063afc)(param_1,*param_2,puVar5);
          iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
          if (iVar4 != 0) break;
          iVar2 = iVar2 + 1;
          puVar5 = puVar5 + 9;
        } while (iVar2 < iVar6);
        iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
        if (iVar2 == 0) {
          param_2[1] = iVar6;
          param_2[2] = puVar3;
        }
        else {
          (*(code *)PTR_rts_free_000638d4)(puVar3);
        }
      }
    }
  }
  return uVar1;
}



// ==== query_v4l2_format @ 000273dc size=168

undefined4 query_v4l2_format(undefined4 param_1,int *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  
  if (param_2 == (int *)0x0) {
    uVar2 = 0xfffffff6;
  }
  else {
    iVar6 = 0;
    while( true ) {
      uVar2 = (*(code *)PTR_rts_v4l2_enum_fmt_00063a4c)(param_1,iVar6,auStack_68);
      iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
      if (iVar3 != 0) break;
      iVar6 = iVar6 + 1;
    }
    if (iVar6 == 0) {
      uVar2 = 0xffffffee;
    }
    else {
      puVar4 = (undefined4 *)
               (*(code *)PTR___rts_calloc_00063a28)
                         (iVar6,0xc,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x459c,0x1b4);
      if (puVar4 == (undefined4 *)0x0) {
        uVar2 = 0xfffffff5;
      }
      else {
        iVar3 = 0;
        puVar7 = puVar4;
        do {
          uVar2 = (*(code *)PTR_rts_v4l2_enum_fmt_00063a4c)(param_1,iVar3,auStack_68);
          iVar5 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
          puVar1 = PTR_query_v4l2_resolution_00063954;
          if (iVar5 != 0) break;
          *puVar7 = local_3c;
          uVar2 = (*(code *)puVar1)(param_1,puVar7);
          iVar5 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
          if (iVar5 != 0) break;
          iVar3 = iVar3 + 1;
          puVar7 = puVar7 + 3;
        } while (iVar3 < iVar6);
        iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
        if (iVar3 == 0) {
          *param_2 = iVar6;
          param_2[1] = (int)puVar4;
        }
        else {
          (*(code *)PTR_rts_free_000638d4)(puVar4);
        }
      }
    }
  }
  return uVar2;
}



// ==== query_v4l2_ability @ 0002757c size=52

undefined4 query_v4l2_ability(undefined4 param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_query_v4l2_format_000639f0;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 1;
    uVar2 = (*(code *)puVar1)();
    return uVar2;
  }
  return 0xfffffff6;
}



// ==== query_isp_ability @ 000275b0 size=232

int query_isp_ability(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  code *pcVar11;
  undefined4 uVar12;
  undefined1 auStack_70 [8];
  int local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_44;
  undefined4 *local_30;
  undefined4 *local_2c;
  
  if (param_2 == (undefined4 *)0x0) {
    return -10;
  }
  *param_2 = 2;
  iVar8 = 0;
  while( true ) {
    uVar1 = (*(code *)PTR_rts_v4l2_enum_fmt_00063a4c)(param_1,iVar8,auStack_70);
    iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
    if (iVar2 != 0) break;
    iVar8 = iVar8 + 1;
  }
  if (iVar8 == 0) {
    iVar2 = -0x12;
  }
  else {
    iVar3 = (*(code *)PTR___rts_calloc_00063a28)
                      (iVar8,4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x45c4,0x1f2);
    if (iVar3 == 0) {
      iVar2 = -0xb;
    }
    else {
      iVar9 = 0;
      do {
        iVar2 = (*(code *)PTR_rts_v4l2_enum_fmt_00063a4c)(param_1,iVar9,auStack_70);
        iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar2);
        if (iVar4 != 0) break;
        uVar1 = (*(code *)PTR_rts_get_av_fmt_from_v4l2_fmt_000636cc)(local_44);
        iVar4 = iVar9 * 4;
        iVar9 = iVar9 + 1;
        *(undefined4 *)(iVar3 + iVar4) = uVar1;
      } while (iVar9 < iVar8);
      iVar9 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar2);
      if (iVar9 == 0) {
        param_2[1] = iVar8;
        param_2[2] = iVar3;
      }
      else {
        (*(code *)PTR_rts_free_000638d4)(iVar3);
      }
    }
  }
  iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar2);
  if (iVar3 != 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4730,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x45b0,0x266,iVar2);
    return iVar2;
  }
  if ((undefined4 *)param_2[2] == (undefined4 *)0x0) {
    uVar1 = 0x20f;
    puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x45dc;
    puVar6 = (undefined4 *)0x0;
  }
  else {
    uVar1 = (*(code *)PTR_rts_get_v4l2_fmt_from_av_fmt_00063a18)(*(undefined4 *)param_2[2]);
    iVar8 = (*(code *)PTR_rts_v4l2_enum_frmsizes_00063a20)(param_1,uVar1,0,auStack_70);
    iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar8);
    if (iVar2 == 0) {
      if (local_68 == 1) {
        iVar8 = -0x16;
      }
      else {
        param_2[3] = local_64;
        param_2[4] = local_60;
        param_2[5] = local_5c;
        param_2[6] = local_58;
        param_2[7] = local_54;
        param_2[8] = local_50;
        iVar8 = 0;
      }
    }
    iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar8);
    if (iVar2 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x46f0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x45b0,0x26c,iVar8);
      if (param_2[2] != 0) {
        (*(code *)PTR_rts_free_000638d4)();
      }
      param_2[2] = 0;
      return iVar8;
    }
    puVar6 = (undefined4 *)param_2[2];
    iVar8 = 0;
    pcVar11 = (code *)PTR_rts_get_v4l2_fmt_from_av_fmt_00063a18;
    if (puVar6 != (undefined4 *)0x0) goto LAB_0002789c;
    uVar1 = 0x231;
    puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x45f0;
  }
  pcVar11 = (code *)PTR___assert_000637b8;
  (*(code *)PTR___assert_000637b8)
            (PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4704,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x47d8,uVar1,puVar7);
LAB_0002789c:
  iVar2 = 0;
  uVar1 = (*pcVar11)(*puVar6);
  uVar10 = param_2[4];
  uVar12 = param_2[7];
  while( true ) {
    uVar5 = (*(code *)PTR_rts_v4l2_enum_frmival_000639a4)
                      (param_1,uVar1,uVar10,uVar12,iVar2,auStack_70);
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar5);
    if (iVar3 != 0) break;
    if (local_60 != 1) {
      iVar8 = -0x16;
      goto LAB_000279d0;
    }
    iVar2 = iVar2 + 1;
  }
  if (iVar2 == 0) {
    iVar8 = -0x12;
  }
  else {
    puVar6 = (undefined4 *)
             (*(code *)PTR___rts_calloc_00063a28)
                       (iVar2,8,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4604,0x246);
    if (puVar6 == (undefined4 *)0x0) {
      iVar8 = -0xb;
    }
    else {
      iVar3 = 0;
      local_30 = puVar6;
      do {
        local_2c = puVar6;
        uVar5 = (*(code *)PTR_rts_v4l2_enum_frmival_000639a4)
                          (param_1,uVar1,uVar10,uVar12,iVar3,auStack_70);
        iVar9 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar5);
        if (iVar9 != 0) {
          param_2[9] = iVar2;
          goto LAB_00027988;
        }
        iVar3 = iVar3 + 1;
        puVar6 = local_2c + 2;
        *local_2c = local_5c;
        local_2c[1] = local_58;
      } while (iVar3 < iVar2);
      param_2[9] = iVar2;
LAB_00027988:
      param_2[10] = local_30;
    }
  }
LAB_000279d0:
  iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar8);
  iVar2 = 0;
  if (iVar3 != 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x46c0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x45b0,0x273,iVar8);
    if (param_2[2] != 0) {
      (*(code *)PTR_rts_free_000638d4)();
    }
    param_2[2] = 0;
    iVar2 = iVar8;
  }
  return iVar2;
}



