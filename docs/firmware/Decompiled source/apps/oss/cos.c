/* oss — "cos" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "oss.h"

// ==== cos_auth @ 00410330 size=332

void cos_auth(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x44) == 0)) {
    if (2 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (3,PTR_LAB_00560984 + 0x2a30,0x25,PTR_LAB_00560984 + 0x2d68,
                 PTR_LAB_00560984 + 0x2a44);
    }
  }
  else if (param_2 == 0) {
    iVar1 = (*(code *)PTR_time_00561530)(0);
    if ((*(int *)(param_1 + 0x40) == 0) || (*(int *)(param_1 + 0x40) <= iVar1)) {
      (**(code **)(param_1 + 0x44))(param_1);
    }
  }
  else {
    (**(code **)(param_1 + 0x44))(param_1);
  }
  return;
}



// ==== cos_media_client @ 00410698 size=144

undefined4 cos_media_client(undefined4 param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_cos_log_set_level_005609b4)(param_1);
  (*(code *)PTR_cos_log_set_output_005609b8)(0);
  uVar1 = (*(code *)PTR_cos_http_io_initialize_005609c0)(PTR_COS_MEDIA_CLIENT_USER_AGENT_005609bc,0)
  ;
  return uVar1;
}



// ==== cos_media_file_create @ 00410774 size=232

int cos_media_file_create(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_malloc_005614ec)(0xf0);
  if (iVar1 == 0) {
    if (2 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (3,PTR_LAB_00560984 + 0x2a30,0x5d,PTR_LAB_00560984 + 0x2d74,
                 PTR_LAB_00560984 + 0x2a7c);
    }
    iVar1 = 0;
  }
  else {
    (*(code *)PTR_memset_00561588)(iVar1,0,0xf0);
  }
  return iVar1;
}



// ==== cos_media_file_open @ 004108c0 size=560

undefined4 cos_media_file_open(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_strcmp_005614e4)(PTR_LAB_00560984 + 0x2a70,param_2);
  if (((iVar1 != 0) &&
      (iVar1 = (*(code *)PTR_strcmp_005614e4)(PTR_LAB_00560984 + 0x2a98,param_2), iVar1 != 0)) &&
     (iVar1 = (*(code *)PTR_strcmp_005614e4)(PTR_LAB_00560984 + 0x2a9c,param_2), iVar1 != 0)) {
    (*(code *)(PTR_LAB_0056099c + 0x5ec))(param_1,0xffffffff,PTR_LAB_00560984 + 0x2aa0);
    if (2 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (3,PTR_LAB_00560984 + 0x2a30,0x71,PTR_LAB_00560984 + 0x2d8c,
                 PTR_LAB_00560984 + 0x2ab0,param_2);
    }
    return 0xffffffff;
  }
  (*(code *)(PTR_LAB_0056099c + 0x330))(param_1,1);
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = (*(code *)PTR_cos_media_file_stat_005609c8)(param_1,param_1 + 0x28);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (2 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (3,PTR_LAB_00560984 + 0x2a30,0x7b,PTR_LAB_00560984 + 0x2d8c,
                 PTR_LAB_00560984 + 0x2ac4,*(undefined4 *)(param_1 + 0x10));
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ==== cos_media_file_stat @ 00410b6c size=1192

undefined4 cos_media_file_stat(int param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined *local_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_24 = 0;
  local_20 = 0;
  local_c = 0;
  (*(code *)(PTR_LAB_0056099c + 0x330))(param_1,0);
  (*(code *)PTR_apr_pool_create_ex_005609cc)(&local_24,0,0,0);
  (*(code *)(PTR_LAB_0056099c + 0x58))(local_24,param_1,&local_20);
  uVar1 = (*(code *)PTR_apr_table_make_005609d0)(local_24,0);
  local_1c = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(param_1 + 0xc));
  local_18 = *(undefined4 *)(param_1 + 0xc);
  local_14 = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(param_1 + 0x10));
  local_10 = *(undefined4 *)(param_1 + 0x10);
  piVar2 = (int *)(*(code *)PTR_cos_head_object_005609d4)
                            (local_20,&local_1c,&local_14,uVar1,&local_c);
  (*(code *)(PTR_LAB_0056099c + 0x510))(param_1,piVar2);
  (*(code *)PTR_cos_op_debug_005609d8)(PTR_LAB_00560984 + 0x2ae0,piVar2,uVar1,local_c);
  iVar3 = (*(code *)(PTR_LAB_0056099c + -8))(piVar2);
  if (iVar3 == 0) {
    if (*piVar2 == *(int *)PTR_COS_MEDIA_FILE_NOT_FOUND_005609ec) {
      if (param_2 != (undefined8 *)0x0) {
        *(undefined4 *)param_2 = 0;
        *(undefined4 *)((int)param_2 + 4) = 0;
        *(undefined **)(param_2 + 2) = PTR_COS_MEDIA_FILE_UNKNOWN_TYPE_005609f0;
      }
      (*(code *)PTR_apr_pool_destroy_005609e8)(local_24);
      uVar1 = 0;
    }
    else {
      if (2 < *(uint *)PTR_cos_log_level_005609ac) {
        (**(code **)PTR_cos_log_format_005609b0)
                  (3,PTR_LAB_00560984 + 0x2a30,0xbd,PTR_LAB_00560984 + 0x2da0,
                   PTR_LAB_00560984 + 0x2b1c,*(undefined4 *)(param_1 + 0x10),*piVar2,piVar2[1],
                   piVar2[2],piVar2[3]);
      }
      (*(code *)PTR_apr_pool_destroy_005609e8)(local_24);
      uVar1 = 0xffffffff;
    }
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      uVar1 = (*(code *)PTR_apr_table_get_005609dc)(local_c,PTR_LAB_00560984 + 0x2af0);
      uVar5 = (*(code *)(PTR_LAB_0056099c + 0x288))(uVar1);
      *param_2 = uVar5;
      uVar1 = (*(code *)PTR_apr_table_get_005609dc)(local_c,PTR_LAB_00560984 + 0x2b00);
      uVar4 = (*(code *)PTR_strlen_00561504)(PTR_COS_OBJECT_TYPE_NORMAL_005609e0);
      iVar3 = (*(code *)PTR_strncmp_005615d4)(PTR_COS_OBJECT_TYPE_NORMAL_005609e0,uVar1,uVar4);
      if (iVar3 == 0) {
        local_30 = PTR_COS_OBJECT_TYPE_NORMAL_005609e0;
      }
      else {
        uVar4 = (*(code *)PTR_strlen_00561504)(PTR_COS_OBJECT_TYPE_APPENDABLE_005609e4);
        iVar3 = (*(code *)PTR_strncmp_005615d4)(PTR_COS_OBJECT_TYPE_APPENDABLE_005609e4,uVar1,uVar4)
        ;
        if (iVar3 == 0) {
          local_30 = PTR_COS_OBJECT_TYPE_APPENDABLE_005609e4;
        }
        else {
          local_30 = PTR_LAB_00560984 + 0x2b14;
        }
      }
      *(undefined **)(param_2 + 2) = local_30;
    }
    (*(code *)PTR_apr_pool_destroy_005609e8)(local_24);
    uVar1 = 0;
  }
  return uVar1;
}



// ==== cos_media_file_tell @ 00411014 size=300

undefined8 cos_media_file_tell(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)(PTR_LAB_0056099c + 0x47c))(param_1);
  if (iVar1 == 0) {
    (*(code *)(PTR_LAB_0056099c + 0x5ec))(param_1,0xffffffff,PTR_LAB_00560984 + 0x2aa0);
    if (2 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (3,PTR_LAB_00560984 + 0x2a30,0xc5,PTR_LAB_00560984 + 0x2db4,
                 PTR_LAB_00560984 + 0x2b5c,*(undefined4 *)(param_1 + 0x24));
    }
    uVar2 = 0xffffffff;
    uVar3 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    uVar3 = *(undefined4 *)(param_1 + 0x34);
  }
  return CONCAT44(uVar3,uVar2);
}



// ==== cos_media_file_seek @ 00411140 size=608

undefined8 cos_media_file_seek(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  
  iVar1 = (*(code *)(PTR_LAB_0056099c + 0x47c))(param_1);
  if (iVar1 == 0) {
    (*(code *)(PTR_LAB_0056099c + 0x5ec))(param_1,0xffffffff,PTR_LAB_00560984 + 0x2aa0);
    if (2 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (3,PTR_LAB_00560984 + 0x2a30,0xce,PTR_LAB_00560984 + 0x2dc8,
                 PTR_LAB_00560984 + 0x2b5c,*(undefined4 *)(param_1 + 0x24));
    }
    param_3 = 0xffffffff;
    param_4 = -1;
  }
  else {
    if (-1 < param_4) {
      if ((param_4 < *(int *)(param_1 + 0x2c)) ||
         ((param_4 == *(int *)(param_1 + 0x2c) && (param_3 < *(uint *)(param_1 + 0x28))))) {
        *(uint *)(param_1 + 0x30) = param_3;
        *(int *)(param_1 + 0x34) = param_4;
        goto LAB_00411370;
      }
    }
    (*(code *)(PTR_LAB_0056099c + 0x5ec))(param_1,0xffffffff,PTR_LAB_00560984 + 0x2b7c);
    if (2 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (3,PTR_LAB_00560984 + 0x2a30,0xd4,PTR_LAB_00560984 + 0x2dc8,
                 PTR_LAB_00560984 + 0x2b8c);
    }
    param_3 = 0xffffffff;
    param_4 = -1;
  }
LAB_00411370:
  return CONCAT44(param_4,param_3);
}



// ==== cos_media_file_read @ 004113a0 size=1920

longlong cos_media_file_read(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *****pppppuVar7;
  undefined4 *****pppppuVar8;
  longlong lVar9;
  undefined4 *****local_68;
  int local_60;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *****local_14;
  undefined4 *****local_10;
  
  local_30 = 0;
  local_2c = 0;
  local_18 = 0;
  local_60 = 0;
  (*(code *)(PTR_LAB_0056099c + 0x330))(param_1,0);
  iVar1 = (*(code *)(PTR_LAB_0056099c + 0x47c))(param_1);
  if (iVar1 == 0) {
    (*(code *)(PTR_LAB_0056099c + 0x5ec))(param_1,0xffffffff,PTR_LAB_00560984 + 0x2aa0);
    return -1;
  }
  uVar5 = *(uint *)(param_1 + 0x28) - 1;
  iVar1 = (uint)(uVar5 < *(uint *)(param_1 + 0x28)) + *(int *)(param_1 + 0x2c) + -1;
  if ((iVar1 < *(int *)(param_1 + 0x34)) ||
     ((*(int *)(param_1 + 0x34) == iVar1 && (uVar5 < *(uint *)(param_1 + 0x30))))) {
    (*(code *)(PTR_LAB_0056099c + 0x5ec))(param_1,0xffffffff,PTR_LAB_00560984 + 0x2bb8);
    if (2 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (3,PTR_LAB_00560984 + 0x2a30,0xf5,PTR_LAB_00560984 + 0x2ddc,
                 PTR_LAB_00560984 + 0x2bbc);
    }
    return 0;
  }
  (*(code *)PTR_apr_pool_create_ex_005609cc)(&local_30,0,0,0);
  (*(code *)(PTR_LAB_0056099c + 0x58))(local_30,param_1,&local_2c);
  local_28 = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(param_1 + 0xc));
  local_24 = *(undefined4 *)(param_1 + 0xc);
  local_20 = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(param_1 + 0x10));
  local_1c = *(undefined4 *)(param_1 + 0x10);
  local_14 = &local_14;
  local_10 = &local_14;
  if ((0 < *(int *)(param_1 + 0x2c)) ||
     ((*(int *)(param_1 + 0x2c) == 0 && (*(int *)(param_1 + 0x28) != 0)))) {
    uVar5 = *(uint *)(param_1 + 0x30) + param_3;
    iVar1 = (uint)(uVar5 < *(uint *)(param_1 + 0x30)) + *(int *)(param_1 + 0x34) + param_4;
    if ((*(int *)(param_1 + 0x2c) < iVar1) ||
       ((iVar1 == *(int *)(param_1 + 0x2c) && (*(uint *)(param_1 + 0x28) < uVar5)))) {
      uVar5 = *(uint *)(param_1 + 0x28) - 1;
      iVar1 = (uint)(uVar5 < *(uint *)(param_1 + 0x28)) + *(int *)(param_1 + 0x2c) + -1;
      goto LAB_00411760;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x30) + param_3;
  uVar5 = uVar6 - 1;
  iVar1 = (uint)(uVar5 < uVar6) +
          (uint)(uVar6 < *(uint *)(param_1 + 0x30)) + *(int *)(param_1 + 0x34) + param_4 + -1;
LAB_00411760:
  uVar2 = (*(code *)PTR_apr_psprintf_005609f4)
                    (local_30,PTR_LAB_00560984 + 0x2bc4,*(undefined4 *)(param_1 + 0x30),
                     *(undefined4 *)(param_1 + 0x34),uVar5,iVar1);
  uVar3 = (*(code *)PTR_apr_table_make_005609d0)(local_30,1);
  (*(code *)PTR_apr_table_set_005609f8)(uVar3,PTR_LAB_00560984 + 0x2bd4,uVar2);
  puVar4 = (undefined4 *)
           (*(code *)PTR_cos_get_object_to_buffer_005609fc)
                     (local_2c,&local_28,&local_20,uVar3,0,&local_14,&local_18);
  (*(code *)(PTR_LAB_0056099c + 0x510))(param_1,puVar4);
  (*(code *)PTR_cos_op_debug_005609d8)(PTR_LAB_00560984 + 0x2bdc,puVar4,uVar3,local_18);
  iVar1 = (*(code *)(PTR_LAB_0056099c + -8))(puVar4);
  if (iVar1 == 0) {
    if (2 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (3,PTR_LAB_00560984 + 0x2a30,0x10f,PTR_LAB_00560984 + 0x2ddc,
                 PTR_LAB_00560984 + 0x2bf8,puVar4[3],*puVar4,puVar4[1],puVar4[2]);
    }
    (*(code *)PTR_apr_pool_destroy_005609e8)(local_30);
    lVar9 = -1;
  }
  else {
    for (local_68 = local_14; (undefined4 ******)local_68 != &local_14;
        local_68 = (undefined4 *****)*local_68) {
      pppppuVar7 = (undefined4 *****)local_68[3];
      pppppuVar8 = (undefined4 *****)local_68[2];
      (*(code *)PTR_memcpy_005615a4)
                (param_2 + local_60,local_68[2],(int)pppppuVar7 - (int)pppppuVar8);
      local_60 = local_60 + ((int)pppppuVar7 - (int)pppppuVar8);
    }
    uVar2 = (*(code *)PTR_apr_table_get_005609dc)(local_18,PTR_LAB_00560984 + 0x2af0);
    lVar9 = (*(code *)(PTR_LAB_0056099c + 0x288))(uVar2);
    *(longlong *)(param_1 + 0x30) = lVar9 + *(longlong *)(param_1 + 0x30);
    (*(code *)PTR_apr_pool_destroy_005609e8)(local_30);
  }
  return lVar9;
}



// ==== cos_media_file_write @ 00411b20 size=1712

undefined8
cos_media_file_write(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 ***pppuVar8;
  undefined4 *puVar9;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 **local_10;
  undefined4 **local_c;
  
  local_2c = 0;
  local_28 = 0;
  local_14 = 0;
  (*(code *)(PTR_LAB_0056099c + 0x330))(param_1,0);
  if (*(int *)(param_1 + 0x24) == 0) {
LAB_00411c00:
    (*(code *)(PTR_LAB_0056099c + 0x5ec))(param_1,0xffffffff,PTR_LAB_00560984 + 0x2aa0);
    if (2 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (3,PTR_LAB_00560984 + 0x2a30,0x132,PTR_LAB_00560984 + 0x2df0,
                 PTR_LAB_00560984 + 0x2c44,*(undefined4 *)(param_1 + 0x24));
    }
    param_3 = 0xffffffff;
    param_4 = 0xffffffff;
  }
  else {
    iVar1 = (*(code *)PTR_strcmp_005614e4)
                      (PTR_LAB_00560984 + 0x2a98,*(undefined4 *)(param_1 + 0x24));
    if (iVar1 != 0) {
      iVar1 = (*(code *)PTR_strcmp_005614e4)
                        (PTR_LAB_00560984 + 0x2a9c,*(undefined4 *)(param_1 + 0x24));
      if (iVar1 != 0) goto LAB_00411c00;
    }
    (*(code *)PTR_apr_pool_create_ex_005609cc)(&local_2c,0,0,0);
    (*(code *)(PTR_LAB_0056099c + 0x58))(local_2c,param_1,&local_28);
    uVar2 = (*(code *)PTR_apr_table_make_005609d0)(local_2c,0);
    local_24 = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(param_1 + 0xc));
    local_20 = *(undefined4 *)(param_1 + 0xc);
    local_1c = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(param_1 + 0x10));
    local_18 = *(undefined4 *)(param_1 + 0x10);
    local_10 = &local_10;
    local_c = &local_10;
    uVar3 = (*(code *)PTR_cos_buf_pack_00560a00)(local_2c,param_2,param_3);
    (*(code *)(PTR_LAB_0056099c + -0x74))(uVar3,&local_10);
    iVar1 = (*(code *)PTR_strcmp_005614e4)
                      (PTR_LAB_00560984 + 0x2a98,*(undefined4 *)(param_1 + 0x24));
    if (iVar1 == 0) {
      puVar4 = (undefined4 *)
               (*(code *)PTR_cos_put_object_from_buffer_00560a04)
                         (local_28,&local_24,&local_1c,&local_10,uVar2,&local_14);
      (*(code *)(PTR_LAB_0056099c + 0x510))(param_1,puVar4);
      (*(code *)PTR_cos_op_debug_005609d8)(PTR_LAB_00560984 + 0x2c60,puVar4,uVar2,local_14);
      iVar1 = (*(code *)(PTR_LAB_0056099c + -8))(puVar4);
      if (iVar1 == 0) {
        if (2 < *(uint *)PTR_cos_log_level_005609ac) {
          (**(code **)PTR_cos_log_format_005609b0)
                    (3,PTR_LAB_00560984 + 0x2a30,0x14a,PTR_LAB_00560984 + 0x2df0,
                     PTR_LAB_00560984 + 0x2c7c,puVar4[3],*puVar4,puVar4[1],puVar4[2]);
        }
        (*(code *)PTR_apr_pool_destroy_005609e8)(local_2c);
        param_3 = 0xffffffff;
        param_4 = 0xffffffff;
        goto LAB_004121a0;
      }
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 0x28);
      uVar6 = *(undefined4 *)(param_1 + 0x2c);
      pppuVar8 = &local_10;
      puVar9 = &local_14;
      uVar3 = uVar2;
      puVar4 = (undefined4 *)
               (*(code *)PTR_cos_append_object_from_buffer_00560a08)(local_28,&local_24,&local_1c);
      (*(code *)(PTR_LAB_0056099c + 0x510))(param_1,puVar4);
      (*(code *)PTR_cos_op_debug_005609d8)
                (PTR_LAB_00560984 + 0x2cc8,puVar4,uVar2,local_14,uVar5,uVar6,pppuVar8,uVar3,puVar9);
      iVar1 = (*(code *)(PTR_LAB_0056099c + -8))(puVar4);
      if (iVar1 == 0) {
        if (2 < *(uint *)PTR_cos_log_level_005609ac) {
          (**(code **)PTR_cos_log_format_005609b0)
                    (3,PTR_LAB_00560984 + 0x2a30,0x159,PTR_LAB_00560984 + 0x2df0,
                     PTR_LAB_00560984 + 0x2ce8,puVar4[3],*puVar4,puVar4[1],puVar4[2]);
        }
        (*(code *)PTR_apr_pool_destroy_005609e8)(local_2c);
        param_3 = 0xffffffff;
        param_4 = 0xffffffff;
        goto LAB_004121a0;
      }
      uVar2 = (*(code *)PTR_apr_table_get_005609dc)(local_14,PTR_LAB_00560984 + 0x2d38);
      uVar7 = (*(code *)(PTR_LAB_0056099c + 0x288))(uVar2);
      *(undefined8 *)(param_1 + 0x28) = uVar7;
    }
    (*(code *)PTR_apr_pool_destroy_005609e8)(local_2c);
  }
LAB_004121a0:
  return CONCAT44(param_4,param_3);
}



// ==== cos_op_debug @ 004126e0 size=892

void cos_op_debug(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int local_18;
  
  if (5 < *(uint *)PTR_cos_log_level_005609ac) {
    if (((param_1 != 0) && (param_2 != (undefined4 *)0x0)) &&
       (5 < *(uint *)PTR_cos_log_level_005609ac)) {
      (**(code **)PTR_cos_log_format_005609b0)
                (6,PTR_LAB_00560984 + 0x2e10,0x11,PTR_LAB_00560984 + 0x2e8c,
                 PTR_LAB_00560984 + 0x2e20,param_2[3],*param_2,param_2[1],param_2[2]);
    }
    if (param_3 != 0) {
      if (5 < *(uint *)PTR_cos_log_level_005609ac) {
        (**(code **)PTR_cos_log_format_005609b0)
                  (6,PTR_LAB_00560984 + 0x2e10,0x15,PTR_LAB_00560984 + 0x2e8c,
                   PTR_LAB_00560984 + 0x2e58);
      }
      iVar1 = (*(code *)PTR_apr_table_elts_00560a0c)(param_3);
      iVar2 = *(int *)(iVar1 + 0x10);
      for (local_18 = 0; local_18 < *(int *)(iVar1 + 8); local_18 = local_18 + 1) {
        if (5 < *(uint *)PTR_cos_log_level_005609ac) {
          (**(code **)PTR_cos_log_format_005609b0)
                    (6,PTR_LAB_00560984 + 0x2e10,0x19,PTR_LAB_00560984 + 0x2e8c,
                     PTR_LAB_00560984 + 0x2e6c,*(undefined4 *)(iVar2 + local_18 * 0xc),
                     *(undefined4 *)(iVar2 + local_18 * 0xc + 4));
        }
      }
    }
    if (param_4 != 0) {
      if (5 < *(uint *)PTR_cos_log_level_005609ac) {
        (**(code **)PTR_cos_log_format_005609b0)
                  (6,PTR_LAB_00560984 + 0x2e10,0x1e,PTR_LAB_00560984 + 0x2e8c,
                   PTR_LAB_00560984 + 0x2e78);
      }
      iVar1 = (*(code *)PTR_apr_table_elts_00560a0c)(param_4);
      iVar2 = *(int *)(iVar1 + 0x10);
      for (local_18 = 0; local_18 < *(int *)(iVar1 + 8); local_18 = local_18 + 1) {
        if (5 < *(uint *)PTR_cos_log_level_005609ac) {
          (**(code **)PTR_cos_log_format_005609b0)
                    (6,PTR_LAB_00560984 + 0x2e10,0x22,PTR_LAB_00560984 + 0x2e8c,
                     PTR_LAB_00560984 + 0x2e6c,*(undefined4 *)(iVar2 + local_18 * 0xc),
                     *(undefined4 *)(iVar2 + local_18 * 0xc + 4));
        }
      }
    }
  }
  return;
}



// ==== cos_request_get @ 0041af2c size=268

int cos_request_get(void)

{
  int local_10;
  
  local_10 = 0;
  (*(code *)PTR_apr_thread_mutex_lock_00560a58)(*(undefined4 *)(PTR_DAT_0056098c + 0x1b54));
  if (0 < *(int *)(PTR_DAT_0056098c + 0x1bd8)) {
    *(int *)(PTR_DAT_0056098c + 0x1bd8) = *(int *)(PTR_DAT_0056098c + 0x1bd8) + -1;
    local_10 = *(int *)(PTR_DAT_0056098c + *(int *)(PTR_DAT_0056098c + 0x1bd8) * 4 + 7000);
  }
  (*(code *)PTR_apr_thread_mutex_unlock_00560a5c)(*(undefined4 *)(PTR_DAT_0056098c + 0x1b54));
  if (local_10 == 0) {
    local_10 = (*(code *)PTR_curl_easy_init_00560a64)();
  }
  else {
    (*(code *)PTR_curl_easy_reset_00560a60)(local_10);
  }
  return local_10;
}



// ==== cos_request_release @ 0041b038 size=252

void cos_request_release(undefined4 param_1)

{
  int iVar1;
  
  (*(code *)PTR_apr_thread_mutex_lock_00560a58)(*(undefined4 *)(PTR_DAT_0056098c + 0x1b54));
  if (*(int *)(PTR_DAT_0056098c + 0x1bd8) == 0x20) {
    (*(code *)PTR_apr_thread_mutex_unlock_00560a5c)(*(undefined4 *)(PTR_DAT_0056098c + 0x1b54));
    (*(code *)PTR_curl_easy_cleanup_00560a68)(param_1);
  }
  else {
    iVar1 = *(int *)(PTR_DAT_0056098c + 0x1bd8);
    *(int *)(PTR_DAT_0056098c + 0x1bd8) = iVar1 + 1;
    *(undefined4 *)(PTR_DAT_0056098c + iVar1 * 4 + 7000) = param_1;
    (*(code *)PTR_apr_thread_mutex_unlock_00560a5c)(*(undefined4 *)(PTR_DAT_0056098c + 0x1b54));
  }
  return;
}



// ==== cos_set_default_request_options @ 0041b134 size=60

void cos_set_default_request_options(undefined4 param_1)

{
  *(undefined4 *)PTR_cos_default_http_request_options_00560a6c = param_1;
  return;
}



// ==== cos_set_default_transport_options @ 0041b170 size=60

void cos_set_default_transport_options(undefined4 param_1)

{
  *(undefined4 *)PTR_cos_default_http_transport_options_00560a70 = param_1;
  return;
}



// ==== cos_http_request_options_create @ 0041b1ac size=248

undefined4 * cos_http_request_options_create(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = (*(code *)PTR_apr_palloc_00560a74)(param_1,0x28);
  puVar2 = (undefined4 *)(*(code *)PTR_memset_00561588)(uVar1,0,0x28);
  *puVar2 = 0x400;
  puVar2[1] = 0xf;
  puVar2[3] = 10;
  puVar2[2] = 0x3c;
  puVar2[4] = 0x40000000;
  puVar2[5] = 0;
  puVar2[6] = 1;
  puVar2[8] = 0;
  puVar2[7] = 0;
  return puVar2;
}



// ==== cos_http_controller_create @ 0041b328 size=372

undefined4 * cos_http_controller_create(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int local_res0;
  undefined4 local_res4;
  
  local_res0 = param_1;
  local_res4 = param_2;
  if ((param_1 == 0) &&
     (iVar1 = (*(code *)PTR_apr_pool_create_ex_005609cc)(&local_res0,0,0,0), iVar1 != 0)) {
    if (1 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (2,PTR_LAB_00560984 + 0x4070,0x68,PTR_LAB_00560984 + 0x4248,
                 PTR_LAB_00560984 + 0x4080);
    }
    return (undefined4 *)0x0;
  }
  uVar2 = (*(code *)PTR_apr_palloc_00560a74)(local_res0,0x30);
  puVar3 = (undefined4 *)(*(code *)PTR_memset_00561588)(uVar2,0,0x30);
  puVar3[1] = local_res0;
  *(byte *)(puVar3 + 8) = *(byte *)(puVar3 + 8) & 0xfe | (byte)local_res4 & 1;
  *puVar3 = *(undefined4 *)PTR_cos_default_http_request_options_00560a6c;
  return puVar3;
}



// ==== cos_http_request_create @ 0041b49c size=300

int cos_http_request_create(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (*(code *)PTR_apr_palloc_00560a74)(param_1,0x60);
  iVar2 = (*(code *)PTR_memset_00561588)(uVar1,0,0x60);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  uVar1 = (*(code *)PTR_apr_table_make_005609d0)(param_1,5);
  *(undefined4 *)(iVar2 + 0x18) = uVar1;
  uVar1 = (*(code *)PTR_apr_table_make_005609d0)(param_1,3);
  *(undefined4 *)(iVar2 + 0x1c) = uVar1;
  *(int *)(iVar2 + 0x20) = iVar2 + 0x20;
  *(int *)(iVar2 + 0x24) = iVar2 + 0x20;
  *(undefined4 *)(iVar2 + 0x44) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x38) = param_1;
  *(undefined **)(iVar2 + 0x40) = PTR_cos_read_http_body_memory_00560a78;
  return iVar2;
}



// ==== cos_http_response_create @ 0041b5c8 size=268

undefined4 * cos_http_response_create(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = (*(code *)PTR_apr_palloc_00560a74)(param_1,0x48);
  puVar2 = (undefined4 *)(*(code *)PTR_memset_00561588)(uVar1,0,0x48);
  *puVar2 = 0xffffffff;
  uVar1 = (*(code *)PTR_apr_table_make_005609d0)(param_1,10);
  puVar2[1] = uVar1;
  puVar2[2] = puVar2 + 2;
  puVar2[3] = puVar2 + 2;
  puVar2[0xd] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[10] = param_1;
  puVar2[0xc] = PTR_cos_write_http_body_memory_00560a7c;
  return puVar2;
}



// ==== cos_read_http_body_memory @ 0041b6d4 size=432

int cos_read_http_body_memory(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  
  local_18 = 0;
  local_14 = *(undefined4 **)(param_1 + 0x20);
  local_10 = (undefined4 *)*local_14;
  do {
    if (local_14 == (undefined4 *)(param_1 + 0x20)) {
      return local_18;
    }
    iVar1 = local_14[3] - local_14[2];
    if (iVar1 == 0) {
      (*(code *)(PTR_LAB_00560a54 + -0x5158))(local_14);
    }
    else {
      if (param_3 - local_18 <= iVar1) {
        iVar1 = param_3 - local_18;
      }
      if (iVar1 == 0) {
        return local_18;
      }
      (*(code *)PTR_memcpy_005615a4)(param_2 + local_18,local_14[2],iVar1);
      local_14[2] = local_14[2] + iVar1;
      local_18 = local_18 + iVar1;
      if (local_14[2] == local_14[3]) {
        (*(code *)(PTR_LAB_00560a54 + -0x5158))(local_14);
      }
    }
    local_14 = local_10;
    local_10 = (undefined4 *)*local_10;
  } while( true );
}



// ==== cos_read_http_body_file @ 0041b884 size=748

uint cos_read_http_body_file(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_118 [256];
  uint local_18 [2];
  
  local_18[0] = param_3;
  if ((*(int *)(param_1 + 0x34) == 0) || (*(int *)(*(int *)(param_1 + 0x34) + 0x18) == 0)) {
    if (2 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (3,PTR_LAB_00560984 + 0x4070,0xba,PTR_LAB_00560984 + 0x4264,
                 PTR_LAB_00560984 + 0x409c);
    }
    local_18[0] = 0xfffffc1e;
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + 0x34) + 0xc);
    iVar2 = *(int *)(*(int *)(param_1 + 0x34) + 0x14);
    if ((iVar6 < iVar2) ||
       ((iVar2 == iVar6 &&
        (*(uint *)(*(int *)(param_1 + 0x34) + 8) < *(uint *)(*(int *)(param_1 + 0x34) + 0x10))))) {
      uVar4 = *(int *)(*(int *)(param_1 + 0x34) + 0x10) - *(int *)(*(int *)(param_1 + 0x34) + 8);
      local_18[0] = param_3;
      if (uVar4 < param_3) {
        local_18[0] = uVar4;
      }
      iVar2 = (*(code *)PTR_apr_file_read_00560a80)
                        (*(undefined4 *)(*(int *)(param_1 + 0x34) + 0x18),param_2,local_18);
      if (iVar2 == 0) {
        iVar6 = *(int *)(param_1 + 0x34);
        uVar4 = *(uint *)(*(int *)(param_1 + 0x34) + 8);
        iVar2 = *(int *)(*(int *)(param_1 + 0x34) + 0xc);
        uVar5 = uVar4 + local_18[0];
        *(uint *)(iVar6 + 8) = uVar5;
        *(uint *)(iVar6 + 0xc) = (uint)(uVar5 < uVar4) + iVar2;
      }
      else {
        if (2 < *(uint *)PTR_cos_log_level_005609ac) {
          pcVar3 = *(code **)PTR_cos_log_format_005609b0;
          uVar1 = (*(code *)PTR_apr_strerror_00560a84)(iVar2,auStack_118,0x100);
          (*pcVar3)(3,PTR_LAB_00560984 + 0x4070,0xc9,PTR_LAB_00560984 + 0x4264,
                    PTR_LAB_00560984 + 0x40d8,iVar2,uVar1);
        }
        local_18[0] = 0xfffffc2a;
      }
    }
    else {
      if (5 < *(uint *)PTR_cos_log_level_005609ac) {
        (**(code **)PTR_cos_log_format_005609b0)
                  (6,PTR_LAB_00560984 + 0x4070,0xbf,PTR_LAB_00560984 + 0x4264,
                   PTR_LAB_00560984 + 0x40c4);
      }
      local_18[0] = 0;
    }
  }
  return local_18[0];
}



// ==== cos_write_http_body_memory @ 0041bb70 size=320

int cos_write_http_body_memory(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = (*(code *)PTR_cos_create_buf_00560a88)(*(undefined4 *)(param_1 + 0x28),param_3);
  (*(code *)PTR_memcpy_005615a4)(*(undefined4 *)(iVar1 + 8),param_2,param_3);
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + param_3;
  (*(code *)(PTR_LAB_00560a54 + -0x5204))(iVar1,param_1 + 8);
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar3 = uVar2 + param_3;
  *(uint *)(param_1 + 0x10) = uVar3;
  *(uint *)(param_1 + 0x14) = (uint)(uVar3 < uVar2) + *(int *)(param_1 + 0x14) + (param_3 >> 0x1f);
  return param_3;
}



// ==== cos_write_http_body_file @ 0041bcb0 size=900

int cos_write_http_body_file(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  undefined1 auStack_120 [256];
  int local_20 [2];
  
  local_20[0] = param_3;
  if (*(int *)(param_1 + 0x1c) == 0) {
    uVar1 = (*(code *)PTR_cos_create_file_buf_00560a8c)(*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
  }
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0x18) == 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      if (2 < *(uint *)PTR_cos_log_level_005609ac) {
        (**(code **)PTR_cos_log_format_005609b0)
                  (3,PTR_LAB_00560984 + 0x4070,0xea,PTR_LAB_00560984 + 0x427c,
                   PTR_LAB_00560984 + 0x40fc);
      }
      return -0x3e2;
    }
    if (6 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (7,PTR_LAB_00560984 + 0x4070,0xed,PTR_LAB_00560984 + 0x427c,
                 PTR_LAB_00560984 + 0x4118,*(undefined4 *)(param_1 + 0x18));
    }
    iVar2 = (*(code *)PTR_cos_open_file_for_write_00560a90)
                      (*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x18),
                       *(undefined4 *)(param_1 + 0x1c));
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0x18) == 0) {
    (*(code *)PTR___assert_00561580)
              (PTR_LAB_00560984 + 0x4128,PTR_LAB_00560984 + 0x4070,0xf3,PTR_LAB_00560984 + 0x4298);
  }
  iVar2 = (*(code *)PTR_apr_file_write_00560a94)
                    (*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18),param_2,local_20);
  if (iVar2 == 0) {
    iVar4 = *(int *)(param_1 + 0x1c);
    uVar3 = *(uint *)(*(int *)(param_1 + 0x1c) + 0x10);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x14);
    uVar6 = uVar3 + local_20[0];
    *(uint *)(iVar4 + 0x10) = uVar6;
    *(uint *)(iVar4 + 0x14) = (uint)(uVar6 < uVar3) + iVar2;
    uVar3 = *(uint *)(param_1 + 0x10);
    uVar6 = uVar3 + local_20[0];
    *(uint *)(param_1 + 0x10) = uVar6;
    *(uint *)(param_1 + 0x14) = (uint)(uVar6 < uVar3) + *(int *)(param_1 + 0x14);
  }
  else {
    if (2 < *(uint *)PTR_cos_log_level_005609ac) {
      pcVar5 = *(code **)PTR_cos_log_format_005609b0;
      uVar1 = (*(code *)PTR_apr_strerror_00560a84)(iVar2,auStack_120,0x100);
      (*pcVar5)(3,PTR_LAB_00560984 + 0x4070,0xf5,PTR_LAB_00560984 + 0x427c,PTR_LAB_00560984 + 0x414c
                ,iVar2,uVar1);
    }
    local_20[0] = -0x3d5;
  }
  return local_20[0];
}



// ==== cos_write_http_body_file_part @ 0041c034 size=648

int cos_write_http_body_file_part(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  undefined1 auStack_11c [256];
  int local_1c;
  
  local_1c = param_3;
  if (*(int *)(param_1 + 0x1c) == 0) {
    if (2 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (3,PTR_LAB_00560984 + 0x4070,0x106,PTR_LAB_00560984 + 0x42b4,
                 PTR_LAB_00560984 + 0x4170);
    }
    local_1c = -0x3e2;
  }
  else {
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0x18) == 0) {
      (*(code *)PTR___assert_00561580)
                (PTR_LAB_00560984 + 0x4128,PTR_LAB_00560984 + 0x4070,0x10a,PTR_LAB_00560984 + 0x42d4
                );
    }
    iVar1 = (*(code *)PTR_apr_file_write_00560a94)
                      (*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18),param_2,&local_1c);
    if (iVar1 == 0) {
      iVar4 = *(int *)(param_1 + 0x1c);
      uVar3 = *(uint *)(*(int *)(param_1 + 0x1c) + 0x10);
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x14);
      uVar6 = uVar3 + local_1c;
      *(uint *)(iVar4 + 0x10) = uVar6;
      *(uint *)(iVar4 + 0x14) = (uint)(uVar6 < uVar3) + iVar1;
      uVar3 = *(uint *)(param_1 + 0x10);
      uVar6 = uVar3 + local_1c;
      *(uint *)(param_1 + 0x10) = uVar6;
      *(uint *)(param_1 + 0x14) = (uint)(uVar6 < uVar3) + *(int *)(param_1 + 0x14);
    }
    else {
      if (2 < *(uint *)PTR_cos_log_level_005609ac) {
        pcVar5 = *(code **)PTR_cos_log_format_005609b0;
        uVar2 = (*(code *)PTR_apr_strerror_00560a84)(iVar1,auStack_11c,0x100);
        (*pcVar5)(3,PTR_LAB_00560984 + 0x4070,0x10c,PTR_LAB_00560984 + 0x42b4,
                  PTR_LAB_00560984 + 0x414c,iVar1,uVar2);
      }
      local_1c = -0x3d5;
    }
  }
  return local_1c;
}



// ==== cos_http_io_initialize @ 0041c2bc size=1256

undefined4 cos_http_io_initialize(char *param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  char *local_res0;
  undefined1 auStack_110 [260];
  
  if ((param_2 & 1) == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = 3;
  }
  iVar1 = (*(code *)PTR_curl_global_init_00560a98)(uVar4);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_apr_initialize_00560aa0)();
    if (iVar1 == 0) {
      if ((param_1 == (char *)0x0) || (local_res0 = param_1, *param_1 == '\0')) {
        local_res0 = PTR_LAB_00560984 + 0x41c4;
      }
      iVar1 = (*(code *)PTR_apr_pool_create_ex_005609cc)(PTR_cos_global_pool_00560aa4,0,0,0);
      if (iVar1 == 0) {
        iVar1 = (*(code *)PTR_apr_thread_mutex_create_00560aa8)
                          (PTR_DAT_0056098c + 0x1b54,0,*(undefined4 *)PTR_cos_global_pool_00560aa4);
        if (iVar1 == 0) {
          *(undefined4 *)(PTR_DAT_0056098c + 0x1bd8) = 0;
          iVar1 = (*(code *)PTR_apr_thread_mutex_create_00560aa8)
                            (PTR_downloadMutex_00560aac,0,
                             *(undefined4 *)PTR_cos_global_pool_00560aa4);
          if (iVar1 == 0) {
            (*(code *)PTR_apr_snprintf_00560ab0)
                      (PTR_DAT_0056098c + 0x1bdc,0xff,PTR_LAB_00560984 + 0x4224,
                       PTR_LAB_00560984 + 0x4238,local_res0);
            uVar4 = (*(code *)PTR_cos_http_request_options_create_00560ab4)
                              (*(undefined4 *)PTR_cos_global_pool_00560aa4);
            puVar2 = (undefined4 *)
                     (*(code *)(PTR_LAB_00560a54 + -0x4d5c))
                               (*(undefined4 *)PTR_cos_global_pool_00560aa4);
            *puVar2 = PTR_DAT_0056098c + 0x1bdc;
            (*(code *)PTR_cos_set_default_request_options_00560ab8)(uVar4);
            (*(code *)PTR_cos_set_default_transport_options_00560abc)(puVar2);
            uVar4 = 0;
          }
          else {
            if (2 < *(uint *)PTR_cos_log_level_005609ac) {
              pcVar3 = *(code **)PTR_cos_log_format_005609b0;
              uVar4 = (*(code *)PTR_apr_strerror_00560a84)(iVar1,auStack_110,0x100);
              (*pcVar3)(3,PTR_LAB_00560984 + 0x4070,0x13b,PTR_LAB_00560984 + 0x42f4,
                        PTR_LAB_00560984 + 0x41f4,iVar1,uVar4);
            }
            uVar4 = 0xfffffc1c;
          }
        }
        else {
          if (2 < *(uint *)PTR_cos_log_level_005609ac) {
            pcVar3 = *(code **)PTR_cos_log_format_005609b0;
            uVar4 = (*(code *)PTR_apr_strerror_00560a84)(iVar1,auStack_110,0x100);
            (*pcVar3)(3,PTR_LAB_00560984 + 0x4070,0x135,PTR_LAB_00560984 + 0x42f4,
                      PTR_LAB_00560984 + 0x41f4,iVar1,uVar4);
          }
          uVar4 = 0xfffffc1c;
        }
      }
      else {
        if (2 < *(uint *)PTR_cos_log_level_005609ac) {
          pcVar3 = *(code **)PTR_cos_log_format_005609b0;
          uVar4 = (*(code *)PTR_apr_strerror_00560a84)(iVar1,auStack_110,0x100);
          (*pcVar3)(3,PTR_LAB_00560984 + 0x4070,0x130,PTR_LAB_00560984 + 0x42f4,
                    PTR_LAB_00560984 + 0x41cc,iVar1,uVar4);
        }
        uVar4 = 0xfffffc1c;
      }
    }
    else {
      if (2 < *(uint *)PTR_cos_log_level_005609ac) {
        (**(code **)PTR_cos_log_format_005609b0)
                  (3,PTR_LAB_00560984 + 0x4070,0x127,PTR_LAB_00560984 + 0x42f4,
                   PTR_LAB_00560984 + 0x41ac);
      }
      uVar4 = 0xfffffc1c;
    }
  }
  else {
    if (2 < *(uint *)PTR_cos_log_level_005609ac) {
      pcVar3 = *(code **)PTR_cos_log_format_005609b0;
      uVar4 = (*(code *)PTR_curl_easy_strerror_00560a9c)(iVar1);
      (*pcVar3)(3,PTR_LAB_00560984 + 0x4070,0x122,PTR_LAB_00560984 + 0x42f4,
                PTR_LAB_00560984 + 0x4184,iVar1,uVar4);
    }
    uVar4 = 0xfffffc1c;
  }
  return uVar4;
}



// ==== cos_http_io_deinitialize @ 0041c7a4 size=340

void cos_http_io_deinitialize(void)

{
  int iVar1;
  
  (*(code *)PTR_apr_thread_mutex_destroy_00560ac0)(*(undefined4 *)(PTR_DAT_0056098c + 0x1b54));
  (*(code *)PTR_apr_thread_mutex_destroy_00560ac0)(*(undefined4 *)PTR_downloadMutex_00560aac);
  while (iVar1 = *(int *)(PTR_DAT_0056098c + 0x1bd8),
        *(int *)(PTR_DAT_0056098c + 0x1bd8) = iVar1 + -1, iVar1 != 0) {
    (*(code *)PTR_curl_easy_cleanup_00560a68)
              (*(undefined4 *)(PTR_DAT_0056098c + *(int *)(PTR_DAT_0056098c + 0x1bd8) * 4 + 7000));
  }
  if (*(int *)PTR_cos_stderr_file_00560ac4 != 0) {
    (*(code *)PTR_apr_file_close_00560ac8)(*(undefined4 *)PTR_cos_stderr_file_00560ac4);
    *(undefined4 *)PTR_cos_stderr_file_00560ac4 = 0;
  }
  if (*(int *)PTR_cos_global_pool_00560aa4 != 0) {
    (*(code *)PTR_apr_pool_destroy_005609e8)(*(undefined4 *)PTR_cos_global_pool_00560aa4);
    *(undefined4 *)PTR_cos_global_pool_00560aa4 = 0;
  }
  (*(code *)PTR_apr_terminate_00560acc)();
  return;
}



// ==== cos_http_send_request @ 0041c8f8 size=180

undefined4 cos_http_send_request(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)
           (**(code **)PTR_cos_http_transport_create_00560ad0)(*(undefined4 *)(param_1 + 4));
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[6] = param_1;
  uVar2 = (**(code **)PTR_cos_http_transport_perform_00560ad4)(puVar1);
  return uVar2;
}



// ==== cos_log_set_level @ 0041cd28 size=60

void cos_log_set_level(undefined4 param_1)

{
  *(undefined4 *)PTR_cos_log_level_005609ac = param_1;
  return;
}



// ==== cos_log_set_output @ 0041cd64 size=60

void cos_log_set_output(undefined4 param_1)

{
  *(undefined4 *)PTR_cos_stderr_file_00560ac4 = param_1;
  return;
}



// ==== cos_create_buf @ 0041d3d0 size=232

int cos_create_buf(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_apr_palloc_00560a74)(param_1,param_2 + 0x18);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(int *)(iVar1 + 8) = iVar1 + 0x18;
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x10);
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0xc) + param_2;
    *(int *)iVar1 = iVar1;
    *(int *)(iVar1 + 4) = iVar1;
  }
  return iVar1;
}



// ==== cos_buf_pack @ 0041d4b8 size=224

int cos_buf_pack(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_apr_palloc_00560a74)(param_1,0x18);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 8) = param_2;
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 8);
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0x10) + param_3;
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar1 + 0xc);
    *(int *)iVar1 = iVar1;
    *(int *)(iVar1 + 4) = iVar1;
  }
  return iVar1;
}



// ==== cos_buf_list_len @ 0041d598 size=212

undefined8 cos_buf_list_len(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *local_18;
  uint local_10;
  int local_c;
  
  local_10 = 0;
  local_c = 0;
  for (local_18 = (undefined4 *)*param_1; local_18 != param_1; local_18 = (undefined4 *)*local_18) {
    uVar1 = local_10 + (local_18[3] - local_18[2]);
    local_c = (uint)(uVar1 < local_10) + local_c + ((int)(local_18[3] - local_18[2]) >> 0x1f);
    local_10 = uVar1;
  }
  return CONCAT44(local_c,local_10);
}



// ==== cos_buf_list_content @ 0041d66c size=416

int cos_buf_list_content(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_30;
  undefined4 *local_28;
  
  local_30 = 0;
  iVar1 = (*(code *)PTR_cos_buf_list_len_00560ae8)(param_2);
  uVar2 = (*(code *)PTR_apr_palloc_00560a74)(param_1,iVar1 + 1);
  iVar3 = (*(code *)PTR_memset_00561588)(uVar2,0,iVar1 + 1);
  *(undefined1 *)(iVar3 + iVar1) = 0;
  for (local_28 = (undefined4 *)*param_2; local_28 != param_2; local_28 = (undefined4 *)*local_28) {
    iVar1 = local_28[3];
    iVar4 = local_28[2];
    (*(code *)PTR_memcpy_005615a4)(iVar3 + local_30,local_28[2],iVar1 - iVar4);
    local_30 = local_30 + (iVar1 - iVar4);
  }
  return iVar3;
}



// ==== cos_create_file_buf @ 0041d80c size=132

undefined4 cos_create_file_buf(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_apr_palloc_00560a74)(param_1,0x20);
  uVar1 = (*(code *)PTR_memset_00561588)(uVar1,0,0x20);
  return uVar1;
}



// ==== cos_open_file_for_read @ 0041d890 size=668

undefined4 cos_open_file_for_read(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 auStack_174 [260];
  undefined1 auStack_70 [44];
  int local_44;
  
  iVar1 = (*(code *)PTR_apr_file_open_00560aec)(param_3 + 0x18,param_2,1,0x440,param_1);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_apr_file_info_get_00560af0)
                      (auStack_70,0x73b170,*(undefined4 *)(param_3 + 0x18));
    if (iVar1 == 0) {
      *(undefined4 *)(param_3 + 8) = 0;
      *(undefined4 *)(param_3 + 0xc) = 0;
      *(int *)(param_3 + 0x10) = local_44;
      *(int *)(param_3 + 0x14) = local_44 >> 0x1f;
      *(byte *)(param_3 + 0x1c) = *(byte *)(param_3 + 0x1c) | 1;
      uVar2 = 0;
    }
    else {
      (*(code *)PTR_apr_file_close_00560ac8)(*(undefined4 *)(param_3 + 0x18));
      if (2 < *(uint *)PTR_cos_log_level_005609ac) {
        pcVar3 = *(code **)PTR_cos_log_format_005609b0;
        uVar2 = (*(code *)PTR_apr_strerror_00560a84)(iVar1,auStack_174,0x100);
        (*pcVar3)(3,PTR_LAB_00560984 + 0x4350,0x5b,PTR_LAB_00560984 + 0x43d8,
                  PTR_LAB_00560984 + 0x435c,iVar1,uVar2);
      }
      uVar2 = 0xfffffc29;
    }
  }
  else {
    if (2 < *(uint *)PTR_cos_log_level_005609ac) {
      pcVar3 = *(code **)PTR_cos_log_format_005609b0;
      uVar2 = (*(code *)PTR_apr_strerror_00560a84)(iVar1,auStack_174,0x100);
      (*pcVar3)(3,PTR_LAB_00560984 + 0x4350,0x54,PTR_LAB_00560984 + 0x43d8,PTR_LAB_00560984 + 0x435c
                ,iVar1,uVar2);
    }
    if (*(int *)(param_3 + 0x18) != 0) {
      (*(code *)PTR___assert_00561580)
                (PTR_LAB_00560984 + 0x4380,PTR_LAB_00560984 + 0x4350,0x55,PTR_LAB_00560984 + 0x43f0)
      ;
    }
    uVar2 = 0xfffffc27;
  }
  return uVar2;
}



// ==== cos_open_file_for_all_read @ 0041db2c size=108

undefined4 cos_open_file_for_all_read(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_cos_open_file_for_read_00560af4)(param_1,param_2,param_3);
  return uVar1;
}



// ==== cos_open_file_for_range_read @ 0041db98 size=596

int cos_open_file_for_range_read
              (undefined4 param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,
              int param_6,int param_7)

{
  int iVar1;
  uint local_res8;
  int local_resc;
  
  iVar1 = (*(code *)PTR_cos_open_file_for_read_00560af4)(param_1,param_2,param_7);
  if (iVar1 == 0) {
    if ((*(int *)(param_7 + 0xc) < param_4) ||
       ((param_4 == *(int *)(param_7 + 0xc) && (*(uint *)(param_7 + 8) < param_3)))) {
      if ((*(int *)(param_7 + 0x14) < param_4) ||
         ((local_res8 = param_3, local_resc = param_4, param_4 == *(int *)(param_7 + 0x14) &&
          (*(uint *)(param_7 + 0x10) < param_3)))) {
        if (3 < *(uint *)PTR_cos_log_level_005609ac) {
          (**(code **)PTR_cos_log_format_005609b0)
                    (4,PTR_LAB_00560984 + 0x4350,0x74,PTR_LAB_00560984 + 0x4408,
                     PTR_LAB_00560984 + 0x4398);
        }
        local_res8 = *(uint *)(param_7 + 0x10);
        local_resc = *(int *)(param_7 + 0x14);
      }
      *(uint *)(param_7 + 8) = local_res8;
      *(int *)(param_7 + 0xc) = local_resc;
    }
    if ((param_6 < *(int *)(param_7 + 0x14)) ||
       ((param_6 == *(int *)(param_7 + 0x14) && (param_5 < *(uint *)(param_7 + 0x10))))) {
      *(uint *)(param_7 + 0x10) = param_5;
      *(int *)(param_7 + 0x14) = param_6;
    }
    (*(code *)PTR_apr_file_seek_00560af8)(*(undefined4 *)(param_7 + 0x18),0,param_7 + 8);
  }
  return iVar1;
}



// ==== cos_open_file_for_write @ 0041ddec size=372

undefined4 cos_open_file_for_write(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 auStack_114 [264];
  
  iVar1 = (*(code *)PTR_apr_file_open_00560aec)(param_3 + 0x18,param_2,0x16,0x640,param_1);
  if (iVar1 == 0) {
    *(byte *)(param_3 + 0x1c) = *(byte *)(param_3 + 0x1c) | 1;
    uVar2 = 0;
  }
  else {
    if (2 < *(uint *)PTR_cos_log_level_005609ac) {
      pcVar3 = *(code **)PTR_cos_log_format_005609b0;
      uVar2 = (*(code *)PTR_apr_strerror_00560a84)(iVar1,auStack_114,0x100);
      (*pcVar3)(3,PTR_LAB_00560984 + 0x4350,0x89,PTR_LAB_00560984 + 0x4428,PTR_LAB_00560984 + 0x435c
                ,iVar1,uVar2);
    }
    if (*(int *)(param_3 + 0x18) != 0) {
      (*(code *)PTR___assert_00561580)
                (PTR_LAB_00560984 + 0x4380,PTR_LAB_00560984 + 0x4350,0x8a,PTR_LAB_00560984 + 0x4440)
      ;
    }
    uVar2 = 0xfffffc27;
  }
  return uVar2;
}



// ==== cos_open_file_for_range_write @ 0041df60 size=496

undefined4
cos_open_file_for_range_write
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 auStack_114 [264];
  
  iVar1 = (*(code *)PTR_apr_file_open_00560aec)(param_7 + 0x18,param_2,6,0x640,param_1);
  if (iVar1 == 0) {
    *(byte *)(param_7 + 0x1c) = *(byte *)(param_7 + 0x1c) | 1;
    *(undefined4 *)(param_7 + 8) = param_3;
    *(undefined4 *)(param_7 + 0xc) = param_4;
    *(undefined4 *)(param_7 + 0x10) = param_5;
    *(undefined4 *)(param_7 + 0x14) = param_6;
    (*(code *)PTR_apr_file_seek_00560af8)(*(undefined4 *)(param_7 + 0x18),0,param_7 + 8);
    uVar2 = 0;
  }
  else {
    if (2 < *(uint *)PTR_cos_log_level_005609ac) {
      pcVar3 = *(code **)PTR_cos_log_format_005609b0;
      uVar2 = (*(code *)PTR_apr_strerror_00560a84)(iVar1,auStack_114,0x100);
      (*pcVar3)(3,PTR_LAB_00560984 + 0x4350,0x99,PTR_LAB_00560984 + 0x4458,PTR_LAB_00560984 + 0x435c
                ,iVar1,uVar2);
    }
    if (*(int *)(param_7 + 0x18) != 0) {
      (*(code *)PTR___assert_00561580)
                (PTR_LAB_00560984 + 0x4380,PTR_LAB_00560984 + 0x4350,0x9a,PTR_LAB_00560984 + 0x4478)
      ;
    }
    uVar2 = 0xfffffc27;
  }
  return uVar2;
}



// ==== cos_buf_append_string @ 0041e150 size=468

void cos_buf_append_string(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0 < param_4) {
    if (param_4 + 0x80 < *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0xc)) {
      (*(code *)PTR_memcpy_005615a4)(*(undefined4 *)(param_2 + 0xc),param_3,param_4);
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + param_4;
    }
    else {
      iVar2 = *(int *)(param_2 + 0xc) - *(int *)(param_2 + 8);
      iVar3 = (iVar2 + param_4) * 2;
      iVar1 = (*(code *)PTR_apr_palloc_00560a74)(param_1,iVar3);
      (*(code *)PTR_memcpy_005615a4)(iVar1,*(undefined4 *)(param_2 + 8),iVar2);
      (*(code *)PTR_memcpy_005615a4)(iVar1 + iVar2,param_3,param_4);
      *(int *)(param_2 + 0x10) = iVar1;
      *(int *)(param_2 + 0x14) = iVar1 + iVar3;
      *(int *)(param_2 + 8) = iVar1;
      *(int *)(param_2 + 0xc) = iVar1 + iVar2 + param_4;
    }
  }
  return;
}



// ==== cos_init_curl_url @ 0041e9fc size=648

int cos_init_curl_url(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  int local_1818;
  undefined4 local_1814;
  undefined1 local_1810 [6152];
  
  local_1810[0] = 0;
  local_1818 = 0;
  local_1814 = 0;
  iVar1 = (*(code *)PTR_cos_url_encode_00560b10)(local_1810,*(undefined4 *)(*param_1 + 0x10),0x800);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_cos_query_params_to_string_00560b14)
                      (param_1[2],*(undefined4 *)(*param_1 + 0x1c),&local_1818);
    if (iVar1 == 0) {
      if (**(char **)(*param_1 + 4) == '\0') {
        puVar2 = PTR_LAB_00560984 + 0x48dc;
      }
      else {
        puVar2 = *(undefined **)(*param_1 + 4);
      }
      if (local_1818 == 0) {
        iVar1 = (*(code *)PTR_apr_psprintf_005609f4)
                          (param_1[2],PTR_LAB_00560984 + 0x48e4,puVar2,*(undefined4 *)*param_1,
                           local_1810);
        param_1[8] = iVar1;
      }
      else {
        iVar1 = (*(code *)PTR_apr_psprintf_005609f4)
                          (param_1[2],PTR_LAB_00560984 + 0x48ec,puVar2,*(undefined4 *)*param_1,
                           local_1810,local_1818,local_1814);
        param_1[8] = iVar1;
      }
      if (4 < *(uint *)PTR_cos_log_level_005609ac) {
        (**(code **)PTR_cos_log_format_005609b0)
                  (5,PTR_LAB_00560984 + 0x48f8,0x5b,PTR_LAB_00560984 + 0x4bcc,
                   PTR_LAB_00560984 + 0x4908,param_1[8]);
      }
      iVar1 = 0;
    }
    else {
      *(int *)(param_1[6] + 0x28) = iVar1;
      *(undefined **)(param_1[6] + 0x2c) = PTR_LAB_00560984 + 0x48bc;
    }
  }
  else {
    *(int *)(param_1[6] + 0x28) = iVar1;
    *(undefined **)(param_1[6] + 0x2c) = PTR_LAB_00560984 + 0x48a4;
  }
  return iVar1;
}



// ==== cos_transport_cleanup @ 0041ec84 size=708

void cos_transport_cleanup(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 auStack_114 [264];
  
  if ((*(int *)(*param_1 + 0x34) != 0) && ((*(uint *)(*(int *)(*param_1 + 0x34) + 0x1c) & 1) != 0))
  {
    if (6 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (7,PTR_LAB_00560984 + 0x48f8,0x66,PTR_LAB_00560984 + 0x4be0,
                 PTR_LAB_00560984 + 0x4910);
    }
    iVar1 = (*(code *)PTR_apr_file_close_00560ac8)
                      (*(undefined4 *)(*(int *)(*param_1 + 0x34) + 0x18));
    if ((iVar1 != 0) && (3 < *(uint *)PTR_cos_log_level_005609ac)) {
      pcVar3 = *(code **)PTR_cos_log_format_005609b0;
      uVar2 = (*(code *)PTR_apr_strerror_00560a84)(iVar1,auStack_114,0x100);
      (*pcVar3)(4,PTR_LAB_00560984 + 0x48f8,0x68,PTR_LAB_00560984 + 0x4be0,PTR_LAB_00560984 + 0x492c
                ,uVar2);
    }
    *(undefined4 *)(*param_1 + 0x34) = 0;
  }
  if ((*(int *)(param_1[1] + 0x1c) != 0) &&
     ((*(uint *)(*(int *)(param_1[1] + 0x1c) + 0x1c) & 1) != 0)) {
    if (6 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (7,PTR_LAB_00560984 + 0x48f8,0x6e,PTR_LAB_00560984 + 0x4be0,
                 PTR_LAB_00560984 + 0x4948);
    }
    iVar1 = (*(code *)PTR_apr_file_close_00560ac8)
                      (*(undefined4 *)(*(int *)(param_1[1] + 0x1c) + 0x18));
    if ((iVar1 != 0) && (3 < *(uint *)PTR_cos_log_level_005609ac)) {
      pcVar3 = *(code **)PTR_cos_log_format_005609b0;
      uVar2 = (*(code *)PTR_apr_strerror_00560a84)(iVar1,auStack_114,0x100);
      (*pcVar3)(4,PTR_LAB_00560984 + 0x48f8,0x70,PTR_LAB_00560984 + 0x4be0,PTR_LAB_00560984 + 0x492c
                ,uVar2);
    }
    *(undefined4 *)(param_1[1] + 0x1c) = 0;
  }
  return;
}



// ==== cos_curl_response_headers_parse @ 0041f11c size=396

void cos_curl_response_headers_parse(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  local_2c = param_4;
  local_28 = param_3;
  (*(code *)PTR_cos_trip_space_and_cntrl_00560b24)(&local_2c);
  local_18 = (*(code *)(PTR_LAB_00560a54 + -0x19d0))(local_28,local_28 + local_2c,0x3a);
  if (local_18 != 0) {
    local_20 = local_28;
    local_24 = local_18 - local_28;
    local_18 = local_18 + 1;
    local_1c = (local_28 + local_2c) - local_18;
    (*(code *)PTR_cos_strip_space_00560b28)(&local_1c);
    uVar1 = (*(code *)PTR_cos_pstrdup_00560b2c)(param_1,&local_24);
    uVar2 = (*(code *)PTR_cos_pstrdup_00560b2c)(param_1,&local_1c);
    (*(code *)PTR_apr_table_addn_00560b30)(param_2,uVar1,uVar2);
  }
  return;
}



// ==== cos_curl_transport_headers_done @ 0041f3c8 size=668

void cos_curl_transport_headers_done(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 local_14;
  
  if (*(int *)(*(int *)(param_1 + 0x18) + 0x28) == 0) {
    if (**(int **)(param_1 + 4) < 1) {
      **(undefined4 **)(param_1 + 4) = 0;
      iVar1 = (*(code *)PTR_curl_easy_getinfo_00560b38)
                        (*(undefined4 *)(param_1 + 0x1c),0x200002,&local_14);
      if (iVar1 == 0) {
        **(undefined4 **)(param_1 + 4) = local_14;
        iVar1 = (*(code *)PTR_apr_table_get_005609dc)
                          (*(undefined4 *)(*(int *)(param_1 + 4) + 4),PTR_LAB_00560984 + 0x4990);
        if (iVar1 != 0) {
          iVar3 = *(int *)(param_1 + 4);
          uVar5 = (*(code *)PTR_cos_atoi64_00560b40)(iVar1);
          *(undefined8 *)(iVar3 + 0x20) = uVar5;
        }
      }
      else {
        iVar3 = *(int *)(param_1 + 0x18);
        uVar4 = *(undefined4 *)(param_1 + 8);
        uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)(iVar1);
        uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)(uVar4,uVar2);
        *(undefined4 *)(iVar3 + 0x2c) = uVar2;
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x28) = 0xfffffc1c;
      }
    }
    else if (6 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (7,PTR_LAB_00560984 + 0x48f8,0xd0,PTR_LAB_00560984 + 0x4bf8,
                 PTR_LAB_00560984 + 0x4974,**(undefined4 **)(param_1 + 4));
    }
  }
  else if (5 < *(uint *)PTR_cos_log_level_005609ac) {
    (**(code **)PTR_cos_log_format_005609b0)
              (6,PTR_LAB_00560984 + 0x48f8,0xcb,PTR_LAB_00560984 + 0x4bf8,PTR_LAB_00560984 + 0x4964,
               *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x28));
  }
  return;
}



// ==== cos_curl_default_write_callback @ 0041f664 size=1336

int cos_curl_default_write_callback(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  param_2 = param_2 * param_3;
  if (*(int *)(*(int *)(param_4 + 0x18) + 0x10) == 0 &&
      *(int *)(*(int *)(param_4 + 0x18) + 0x14) == 0) {
    iVar2 = *(int *)(param_4 + 0x18);
    uVar4 = (*(code *)PTR_apr_time_now_00560adc)();
    *(undefined8 *)(iVar2 + 0x10) = uVar4;
  }
  (*(code *)(PTR_LAB_00560a54 + -0xc38))(param_4);
  if (*(int *)(*(int *)(param_4 + 0x18) + 0x28) == 0) {
    if ((**(int **)(param_4 + 4) < 200) || (299 < **(int **)(param_4 + 4))) {
      iVar2 = (*(code *)PTR_cos_write_http_body_memory_00560a7c)
                        (*(undefined4 *)(param_4 + 4),param_1,param_2);
      if (iVar2 != param_2) {
        (*(code *)PTR___assert_00561580)
                  (PTR_LAB_00560984 + 0x49b8,PTR_LAB_00560984 + 0x48f8,0xfa,
                   PTR_LAB_00560984 + 0x4c38);
      }
      (*(code *)(PTR_LAB_00560a54 + -0xf30))(param_4,2);
    }
    else {
      if (*(int *)(*(int *)(param_4 + 4) + 0x34) == 0) {
        iVar3 = *(int *)(*(int *)(param_4 + 4) + 0x14);
        iVar2 = *(int *)(**(int **)(param_4 + 0x18) + 0x14);
        if ((iVar2 <= iVar3) &&
           ((iVar2 != iVar3 ||
            (*(uint *)(**(int **)(param_4 + 0x18) + 0x10) <= *(uint *)(*(int *)(param_4 + 4) + 0x10)
            )))) {
          iVar2 = *(int *)(param_4 + 0x18);
          uVar1 = (*(code *)PTR_apr_psprintf_005609f4)
                            (*(undefined4 *)(param_4 + 8),PTR_LAB_00560984 + 0x49c8,
                             *(undefined4 *)(*(int *)(param_4 + 4) + 0x10),
                             *(undefined4 *)(*(int *)(param_4 + 4) + 0x14),
                             *(undefined4 *)(**(int **)(param_4 + 0x18) + 0x10),
                             *(undefined4 *)(**(int **)(param_4 + 0x18) + 0x14));
          *(undefined4 *)(iVar2 + 0x2c) = uVar1;
          *(undefined4 *)(*(int *)(param_4 + 0x18) + 0x28) = 0xfffffc19;
          if (2 < *(uint *)PTR_cos_log_level_005609ac) {
            (**(code **)PTR_cos_log_format_005609b0)
                      (3,PTR_LAB_00560984 + 0x48f8,0x104,PTR_LAB_00560984 + 0x4c18,
                       PTR_LAB_00560984 + 0x4a10,*(undefined4 *)(*(int *)(param_4 + 0x18) + 0x2c));
          }
          return 0;
        }
      }
      iVar2 = (**(code **)(*(int *)(param_4 + 4) + 0x30))
                        (*(undefined4 *)(param_4 + 4),param_1,param_2);
      if (iVar2 < 0) {
        if (5 < *(uint *)PTR_cos_log_level_005609ac) {
          (**(code **)PTR_cos_log_format_005609b0)
                    (6,PTR_LAB_00560984 + 0x48f8,0x109,PTR_LAB_00560984 + 0x4c18,
                     PTR_LAB_00560984 + 0x4a24,iVar2);
        }
        *(undefined4 *)(*(int *)(param_4 + 0x18) + 0x28) = 0xfffffc24;
        *(undefined **)(*(int *)(param_4 + 0x18) + 0x2c) = PTR_LAB_00560984 + 0x4a3c;
        iVar2 = 0;
      }
      else {
        if (-1 < iVar2) {
          if (*(int *)(*(int *)(param_4 + 4) + 0x38) != 0) {
            (**(code **)(*(int *)(param_4 + 4) + 0x38))
                      (*(undefined4 *)(*(int *)(param_4 + 4) + 0x10),
                       *(undefined4 *)(*(int *)(param_4 + 4) + 0x14),
                       *(undefined4 *)(*(int *)(param_4 + 4) + 0x20),
                       *(undefined4 *)(*(int *)(param_4 + 4) + 0x24));
          }
          if (*(int *)(**(int **)(param_4 + 0x18) + 0x18) != 0) {
            iVar3 = *(int *)(param_4 + 4);
            uVar4 = (*(code *)PTR_cos_crc64_00560b44)
                              (*(undefined4 *)(*(int *)(param_4 + 4) + 0x40),
                               *(undefined4 *)(*(int *)(param_4 + 4) + 0x44),param_1,iVar2);
            *(undefined8 *)(iVar3 + 0x40) = uVar4;
          }
        }
        (*(code *)(PTR_LAB_00560a54 + -0xf30))(param_4,2);
      }
    }
  }
  else {
    if (5 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (6,PTR_LAB_00560984 + 0x48f8,0xf3,PTR_LAB_00560984 + 0x4c18,
                 PTR_LAB_00560984 + 0x49a0);
    }
    iVar2 = 0;
  }
  return iVar2;
}



// ==== cos_curl_default_read_callback @ 0041fb9c size=788

int cos_curl_default_read_callback(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  
  if (*(int *)(param_4[6] + 0x28) == 0) {
    iVar4 = (**(code **)(*param_4 + 0x40))(*param_4,param_1,param_2 * param_3);
    if (iVar4 < 0) {
      if (5 < *(uint *)PTR_cos_log_level_005609ac) {
        (**(code **)PTR_cos_log_format_005609b0)
                  (6,PTR_LAB_00560984 + 0x48f8,0x12f,PTR_LAB_00560984 + 0x4c58,
                   PTR_LAB_00560984 + 0x4a68,iVar4);
      }
      *(undefined4 *)(param_4[6] + 0x28) = 0xfffffc25;
      *(undefined **)(param_4[6] + 0x2c) = PTR_LAB_00560984 + 0x4a80;
      iVar4 = 0x10000000;
    }
    else {
      if (-1 < iVar4) {
        iVar3 = *param_4;
        uVar1 = *(uint *)(*param_4 + 0x58);
        iVar2 = *(int *)(*param_4 + 0x5c);
        uVar5 = uVar1 + iVar4;
        *(uint *)(iVar3 + 0x58) = uVar5;
        *(uint *)(iVar3 + 0x5c) = (uint)(uVar5 < uVar1) + iVar2 + (iVar4 >> 0x1f);
        if (*(int *)(*param_4 + 0x48) != 0) {
          (**(code **)(*param_4 + 0x48))
                    (*(undefined4 *)(*param_4 + 0x58),*(undefined4 *)(*param_4 + 0x5c),
                     *(undefined4 *)(*param_4 + 0x28),*(undefined4 *)(*param_4 + 0x2c));
        }
        if (*(int *)(*(int *)param_4[6] + 0x18) != 0) {
          iVar2 = *param_4;
          uVar6 = (*(code *)PTR_cos_crc64_00560b44)
                            (*(undefined4 *)(*param_4 + 0x50),*(undefined4 *)(*param_4 + 0x54),
                             param_1,iVar4);
          *(undefined8 *)(iVar2 + 0x50) = uVar6;
        }
      }
      (*(code *)(PTR_LAB_00560a54 + -0xf30))(param_4,3);
    }
  }
  else {
    if (5 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (6,PTR_LAB_00560984 + 0x48f8,0x12a,PTR_LAB_00560984 + 0x4c58,
                 PTR_LAB_00560984 + 0x4a50);
    }
    iVar4 = 0x10000000;
  }
  return iVar4;
}



// ==== cos_curl_code_to_status @ 0041feb0 size=180

undefined4 cos_curl_code_to_status(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 - 5U < 0x38) {
                    /* WARNING: Could not emulate address calculation at 0x0041feec */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&_gp_1 + *(int *)(PTR_LAB_00560984 + (param_1 - 5U) * 4 + 0x4a94)))();
    return uVar1;
  }
  return 0xfffffc1c;
}



// ==== cos_curl_transport_setup @ 0041fff4 size=8772

undefined4 cos_curl_transport_setup(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)(param_1[7],0x2777,param_1);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)(param_1[7],0x272d,param_1);
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)(param_1[7],0x4e6f,param_1[10]);
      if (iVar1 == 0) {
        iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)(param_1[7],0x2719,param_1);
        if (iVar1 == 0) {
          iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)(param_1[7],0x4e2c,param_1[0xb]);
          if (iVar1 == 0) {
            iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)(param_1[7],0x2711,param_1);
            if (iVar1 == 0) {
              iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)(param_1[7],0x4e2b,param_1[0xc]);
              if (iVar1 == 0) {
                iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)(param_1[7],0x45,1);
                if (iVar1 == 0) {
                  iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)(param_1[7],99,1);
                  if (iVar1 == 0) {
                    iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)(param_1[7],0x2b,1);
                    if (iVar1 == 0) {
                      iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)(param_1[7],0x79,1);
                      if (iVar1 == 0) {
                        iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)(param_1[7],0x33,0);
                        if (iVar1 == 0) {
                          iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)(param_1[7],0x51,0);
                          if (iVar1 == 0) {
                            iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)(param_1[7],0x40,0);
                            if (iVar1 == 0) {
                              iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)
                                                (param_1[7],0x2722,*(undefined4 *)param_1[5]);
                              if (iVar1 == 0) {
                                iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)
                                                  (param_1[7],0x5c,
                                                   *(undefined4 *)(*(int *)param_1[6] + 8));
                                if (iVar1 == 0) {
                                  iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)
                                                    (param_1[7],0x4e,
                                                     *(undefined4 *)(*(int *)param_1[6] + 0xc));
                                  if (iVar1 == 0) {
                                    iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)
                                                      (param_1[7],0x13,**(undefined4 **)param_1[6]);
                                    if (iVar1 == 0) {
                                      iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)
                                                        (param_1[7],0x14,
                                                         *(undefined4 *)(*(int *)param_1[6] + 4));
                                      if (iVar1 == 0) {
                                        (*(code *)(PTR_LAB_00560a54 + -0x1950))(param_1);
                                        iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)
                                                          (param_1[7],0x2727,param_1[9]);
                                        if (iVar1 == 0) {
                                          if (*(int *)(*(int *)param_1[6] + 0x1c) != 0) {
                                            iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)
                                                              (param_1[7],0x65,0);
                                            if (iVar1 != 0) {
                                              iVar3 = param_1[6];
                                              iVar4 = param_1[2];
                                              uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)
                                                                (iVar1);
                                              uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                                                                (iVar4,uVar2);
                                              *(undefined4 *)(iVar3 + 0x2c) = uVar2;
                                              *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
                                              if (2 < *(uint *)PTR_cos_log_level_005609ac) {
                                                (**(code **)PTR_cos_log_format_005609b0)
                                                          (3,PTR_LAB_00560984 + 0x48f8,0x195,
                                                           PTR_LAB_00560984 + 0x4c78,
                                                           PTR_LAB_00560984 + 0x4b74,iVar1,
                                                           *(undefined4 *)(param_1[6] + 0x2c));
                                              }
                                              return 0xfffffc21;
                                            }
                                            iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)
                                                              (param_1[7],0x2714,
                                                               *(undefined4 *)
                                                                (*(int *)param_1[6] + 0x1c));
                                            if (iVar1 != 0) {
                                              iVar3 = param_1[6];
                                              iVar4 = param_1[2];
                                              uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)
                                                                (iVar1);
                                              uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                                                                (iVar4,uVar2);
                                              *(undefined4 *)(iVar3 + 0x2c) = uVar2;
                                              *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
                                              if (2 < *(uint *)PTR_cos_log_level_005609ac) {
                                                (**(code **)PTR_cos_log_format_005609b0)
                                                          (3,PTR_LAB_00560984 + 0x48f8,0x196,
                                                           PTR_LAB_00560984 + 0x4c78,
                                                           PTR_LAB_00560984 + 0x4b74,iVar1,
                                                           *(undefined4 *)(param_1[6] + 0x2c));
                                              }
                                              return 0xfffffc21;
                                            }
                                            if (*(int *)(*(int *)param_1[6] + 0x20) != 0) {
                                              iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)
                                                                (param_1[7],0x6f,1);
                                              if (iVar1 != 0) {
                                                iVar3 = param_1[6];
                                                iVar4 = param_1[2];
                                                uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)
                                                                  (iVar1);
                                                uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                                                                  (iVar4,uVar2);
                                                *(undefined4 *)(iVar3 + 0x2c) = uVar2;
                                                *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
                                                if (2 < *(uint *)PTR_cos_log_level_005609ac) {
                                                  (**(code **)PTR_cos_log_format_005609b0)
                                                            (3,PTR_LAB_00560984 + 0x48f8,0x199,
                                                             PTR_LAB_00560984 + 0x4c78,
                                                             PTR_LAB_00560984 + 0x4b74,iVar1,
                                                             *(undefined4 *)(param_1[6] + 0x2c));
                                                }
                                                return 0xfffffc21;
                                              }
                                              iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)
                                                                (param_1[7],0x2716,
                                                                 *(undefined4 *)
                                                                  (*(int *)param_1[6] + 0x20));
                                              if (iVar1 != 0) {
                                                iVar3 = param_1[6];
                                                iVar4 = param_1[2];
                                                uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)
                                                                  (iVar1);
                                                uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                                                                  (iVar4,uVar2);
                                                *(undefined4 *)(iVar3 + 0x2c) = uVar2;
                                                *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
                                                if (2 < *(uint *)PTR_cos_log_level_005609ac) {
                                                  (**(code **)PTR_cos_log_format_005609b0)
                                                            (3,PTR_LAB_00560984 + 0x48f8,0x19a,
                                                             PTR_LAB_00560984 + 0x4c78,
                                                             PTR_LAB_00560984 + 0x4b74,iVar1,
                                                             *(undefined4 *)(param_1[6] + 0x2c));
                                                }
                                                return 0xfffffc21;
                                              }
                                            }
                                          }
                                          if (*(int *)(*param_1 + 8) == 0) {
                                            iVar1 = (*(code *)(PTR_LAB_00560a54 + -0x1604))(param_1)
                                            ;
                                            if (iVar1 != 0) {
                                              return *(undefined4 *)(param_1[6] + 0x28);
                                            }
                                          }
                                          else {
                                            param_1[8] = *(int *)(*param_1 + 8);
                                          }
                                          iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)
                                                            (param_1[7],0x2712,param_1[8]);
                                          if (iVar1 == 0) {
                                            uVar5 = *(uint *)(*param_1 + 0xc);
                                            if (uVar5 == 2) {
                                              iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)
                                                                (param_1[7],0x2e,1);
                                              if (iVar1 != 0) {
                                                iVar3 = param_1[6];
                                                iVar4 = param_1[2];
                                                uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)
                                                                  (iVar1);
                                                uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                                                                  (iVar4,uVar2);
                                                *(undefined4 *)(iVar3 + 0x2c) = uVar2;
                                                *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
                                                if (2 < *(uint *)PTR_cos_log_level_005609ac) {
                                                  (**(code **)PTR_cos_log_format_005609b0)
                                                            (3,PTR_LAB_00560984 + 0x48f8,0x1ad,
                                                             PTR_LAB_00560984 + 0x4c78,
                                                             PTR_LAB_00560984 + 0x4b74,iVar1,
                                                             *(undefined4 *)(param_1[6] + 0x2c));
                                                }
                                                return 0xfffffc21;
                                              }
                                            }
                                            else if (uVar5 < 3) {
                                              if ((uVar5 == 1) &&
                                                 (iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)
                                                                    (param_1[7],0x2c,1), iVar1 != 0)
                                                 ) {
                                                iVar3 = param_1[6];
                                                iVar4 = param_1[2];
                                                uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)
                                                                  (iVar1);
                                                uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                                                                  (iVar4,uVar2);
                                                *(undefined4 *)(iVar3 + 0x2c) = uVar2;
                                                *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
                                                if (2 < *(uint *)PTR_cos_log_level_005609ac) {
                                                  (**(code **)PTR_cos_log_format_005609b0)
                                                            (3,PTR_LAB_00560984 + 0x48f8,0x1aa,
                                                             PTR_LAB_00560984 + 0x4c78,
                                                             PTR_LAB_00560984 + 0x4b74,iVar1,
                                                             *(undefined4 *)(param_1[6] + 0x2c));
                                                }
                                                return 0xfffffc21;
                                              }
                                            }
                                            else if (uVar5 == 3) {
                                              iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c)
                                                                (param_1[7],0x2f,1);
                                              if (iVar1 != 0) {
                                                iVar3 = param_1[6];
                                                iVar4 = param_1[2];
                                                uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)
                                                                  (iVar1);
                                                uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                                                                  (iVar4,uVar2);
                                                *(undefined4 *)(iVar3 + 0x2c) = uVar2;
                                                *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
                                                if (2 < *(uint *)PTR_cos_log_level_005609ac) {
                                                  (**(code **)PTR_cos_log_format_005609b0)
                                                            (3,PTR_LAB_00560984 + 0x48f8,0x1b0,
                                                             PTR_LAB_00560984 + 0x4c78,
                                                             PTR_LAB_00560984 + 0x4b74,iVar1,
                                                             *(undefined4 *)(param_1[6] + 0x2c));
                                                }
                                                return 0xfffffc21;
                                              }
                                            }
                                            else if ((uVar5 == 4) &&
                                                    (iVar1 = (*(code *)PTR_curl_easy_setopt_00560b4c
                                                             )(param_1[7],0x2734,
                                                               PTR_LAB_00560984 + 0x4b9c),
                                                    iVar1 != 0)) {
                                              iVar3 = param_1[6];
                                              iVar4 = param_1[2];
                                              uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)
                                                                (iVar1);
                                              uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                                                                (iVar4,uVar2);
                                              *(undefined4 *)(iVar3 + 0x2c) = uVar2;
                                              *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
                                              if (2 < *(uint *)PTR_cos_log_level_005609ac) {
                                                (**(code **)PTR_cos_log_format_005609b0)
                                                          (3,PTR_LAB_00560984 + 0x48f8,0x1b3,
                                                           PTR_LAB_00560984 + 0x4c78,
                                                           PTR_LAB_00560984 + 0x4b74,iVar1,
                                                           *(undefined4 *)(param_1[6] + 0x2c));
                                              }
                                              return 0xfffffc21;
                                            }
                                            param_1[3] = 0;
                                            uVar2 = 0;
                                          }
                                          else {
                                            iVar3 = param_1[6];
                                            iVar4 = param_1[2];
                                            uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)
                                                              (iVar1);
                                            uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)(iVar4,uVar2)
                                            ;
                                            *(undefined4 *)(iVar3 + 0x2c) = uVar2;
                                            *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
                                            if (2 < *(uint *)PTR_cos_log_level_005609ac) {
                                              (**(code **)PTR_cos_log_format_005609b0)
                                                        (3,PTR_LAB_00560984 + 0x48f8,0x1a6,
                                                         PTR_LAB_00560984 + 0x4c78,
                                                         PTR_LAB_00560984 + 0x4b74,iVar1,
                                                         *(undefined4 *)(param_1[6] + 0x2c));
                                            }
                                            uVar2 = 0xfffffc21;
                                          }
                                        }
                                        else {
                                          iVar3 = param_1[6];
                                          iVar4 = param_1[2];
                                          uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)(iVar1);
                                          uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)(iVar4,uVar2);
                                          *(undefined4 *)(iVar3 + 0x2c) = uVar2;
                                          *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
                                          if (2 < *(uint *)PTR_cos_log_level_005609ac) {
                                            (**(code **)PTR_cos_log_format_005609b0)
                                                      (3,PTR_LAB_00560984 + 0x48f8,0x191,
                                                       PTR_LAB_00560984 + 0x4c78,
                                                       PTR_LAB_00560984 + 0x4b74,iVar1,
                                                       *(undefined4 *)(param_1[6] + 0x2c));
                                          }
                                          uVar2 = 0xfffffc21;
                                        }
                                      }
                                      else {
                                        iVar3 = param_1[6];
                                        iVar4 = param_1[2];
                                        uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)(iVar1);
                                        uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)(iVar4,uVar2);
                                        *(undefined4 *)(iVar3 + 0x2c) = uVar2;
                                        *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
                                        if (2 < *(uint *)PTR_cos_log_level_005609ac) {
                                          (**(code **)PTR_cos_log_format_005609b0)
                                                    (3,PTR_LAB_00560984 + 0x48f8,0x18e,
                                                     PTR_LAB_00560984 + 0x4c78,
                                                     PTR_LAB_00560984 + 0x4b74,iVar1,
                                                     *(undefined4 *)(param_1[6] + 0x2c));
                                        }
                                        uVar2 = 0xfffffc21;
                                      }
                                    }
                                    else {
                                      iVar3 = param_1[6];
                                      iVar4 = param_1[2];
                                      uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)(iVar1);
                                      uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)(iVar4,uVar2);
                                      *(undefined4 *)(iVar3 + 0x2c) = uVar2;
                                      *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
                                      if (2 < *(uint *)PTR_cos_log_level_005609ac) {
                                        (**(code **)PTR_cos_log_format_005609b0)
                                                  (3,PTR_LAB_00560984 + 0x48f8,0x18d,
                                                   PTR_LAB_00560984 + 0x4c78,
                                                   PTR_LAB_00560984 + 0x4b74,iVar1,
                                                   *(undefined4 *)(param_1[6] + 0x2c));
                                      }
                                      uVar2 = 0xfffffc21;
                                    }
                                  }
                                  else {
                                    iVar3 = param_1[6];
                                    iVar4 = param_1[2];
                                    uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)(iVar1);
                                    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)(iVar4,uVar2);
                                    *(undefined4 *)(iVar3 + 0x2c) = uVar2;
                                    *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
                                    if (2 < *(uint *)PTR_cos_log_level_005609ac) {
                                      (**(code **)PTR_cos_log_format_005609b0)
                                                (3,PTR_LAB_00560984 + 0x48f8,0x18c,
                                                 PTR_LAB_00560984 + 0x4c78,PTR_LAB_00560984 + 0x4b74
                                                 ,iVar1,*(undefined4 *)(param_1[6] + 0x2c));
                                    }
                                    uVar2 = 0xfffffc21;
                                  }
                                }
                                else {
                                  iVar3 = param_1[6];
                                  iVar4 = param_1[2];
                                  uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)(iVar1);
                                  uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)(iVar4,uVar2);
                                  *(undefined4 *)(iVar3 + 0x2c) = uVar2;
                                  *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
                                  if (2 < *(uint *)PTR_cos_log_level_005609ac) {
                                    (**(code **)PTR_cos_log_format_005609b0)
                                              (3,PTR_LAB_00560984 + 0x48f8,0x18b,
                                               PTR_LAB_00560984 + 0x4c78,PTR_LAB_00560984 + 0x4b74,
                                               iVar1,*(undefined4 *)(param_1[6] + 0x2c));
                                  }
                                  uVar2 = 0xfffffc21;
                                }
                              }
                              else {
                                iVar3 = param_1[6];
                                iVar4 = param_1[2];
                                uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)(iVar1);
                                uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)(iVar4,uVar2);
                                *(undefined4 *)(iVar3 + 0x2c) = uVar2;
                                *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
                                if (2 < *(uint *)PTR_cos_log_level_005609ac) {
                                  (**(code **)PTR_cos_log_format_005609b0)
                                            (3,PTR_LAB_00560984 + 0x48f8,0x188,
                                             PTR_LAB_00560984 + 0x4c78,PTR_LAB_00560984 + 0x4b74,
                                             iVar1,*(undefined4 *)(param_1[6] + 0x2c));
                                }
                                uVar2 = 0xfffffc21;
                              }
                            }
                            else {
                              iVar3 = param_1[6];
                              iVar4 = param_1[2];
                              uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)(iVar1);
                              uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)(iVar4,uVar2);
                              *(undefined4 *)(iVar3 + 0x2c) = uVar2;
                              *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
                              if (2 < *(uint *)PTR_cos_log_level_005609ac) {
                                (**(code **)PTR_cos_log_format_005609b0)
                                          (3,PTR_LAB_00560984 + 0x48f8,0x187,
                                           PTR_LAB_00560984 + 0x4c78,PTR_LAB_00560984 + 0x4b74,iVar1
                                           ,*(undefined4 *)(param_1[6] + 0x2c));
                              }
                              uVar2 = 0xfffffc21;
                            }
                          }
                          else {
                            iVar3 = param_1[6];
                            iVar4 = param_1[2];
                            uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)(iVar1);
                            uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)(iVar4,uVar2);
                            *(undefined4 *)(iVar3 + 0x2c) = uVar2;
                            *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
                            if (2 < *(uint *)PTR_cos_log_level_005609ac) {
                              (**(code **)PTR_cos_log_format_005609b0)
                                        (3,PTR_LAB_00560984 + 0x48f8,0x186,PTR_LAB_00560984 + 0x4c78
                                         ,PTR_LAB_00560984 + 0x4b74,iVar1,
                                         *(undefined4 *)(param_1[6] + 0x2c));
                            }
                            uVar2 = 0xfffffc21;
                          }
                        }
                        else {
                          iVar3 = param_1[6];
                          iVar4 = param_1[2];
                          uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)(iVar1);
                          uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)(iVar4,uVar2);
                          *(undefined4 *)(iVar3 + 0x2c) = uVar2;
                          *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
                          if (2 < *(uint *)PTR_cos_log_level_005609ac) {
                            (**(code **)PTR_cos_log_format_005609b0)
                                      (3,PTR_LAB_00560984 + 0x48f8,0x182,PTR_LAB_00560984 + 0x4c78,
                                       PTR_LAB_00560984 + 0x4b74,iVar1,
                                       *(undefined4 *)(param_1[6] + 0x2c));
                          }
                          uVar2 = 0xfffffc21;
                        }
                      }
                      else {
                        iVar3 = param_1[6];
                        iVar4 = param_1[2];
                        uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)(iVar1);
                        uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)(iVar4,uVar2);
                        *(undefined4 *)(iVar3 + 0x2c) = uVar2;
                        *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
                        if (2 < *(uint *)PTR_cos_log_level_005609ac) {
                          (**(code **)PTR_cos_log_format_005609b0)
                                    (3,PTR_LAB_00560984 + 0x48f8,0x181,PTR_LAB_00560984 + 0x4c78,
                                     PTR_LAB_00560984 + 0x4b74,iVar1,
                                     *(undefined4 *)(param_1[6] + 0x2c));
                        }
                        uVar2 = 0xfffffc21;
                      }
                    }
                    else {
                      iVar3 = param_1[6];
                      iVar4 = param_1[2];
                      uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)(iVar1);
                      uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)(iVar4,uVar2);
                      *(undefined4 *)(iVar3 + 0x2c) = uVar2;
                      *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
                      if (2 < *(uint *)PTR_cos_log_level_005609ac) {
                        (**(code **)PTR_cos_log_format_005609b0)
                                  (3,PTR_LAB_00560984 + 0x48f8,0x180,PTR_LAB_00560984 + 0x4c78,
                                   PTR_LAB_00560984 + 0x4b74,iVar1,
                                   *(undefined4 *)(param_1[6] + 0x2c));
                      }
                      uVar2 = 0xfffffc21;
                    }
                  }
                  else {
                    iVar3 = param_1[6];
                    iVar4 = param_1[2];
                    uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)(iVar1);
                    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)(iVar4,uVar2);
                    *(undefined4 *)(iVar3 + 0x2c) = uVar2;
                    *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
                    if (2 < *(uint *)PTR_cos_log_level_005609ac) {
                      (**(code **)PTR_cos_log_format_005609b0)
                                (3,PTR_LAB_00560984 + 0x48f8,0x17f,PTR_LAB_00560984 + 0x4c78,
                                 PTR_LAB_00560984 + 0x4b74,iVar1,*(undefined4 *)(param_1[6] + 0x2c))
                      ;
                    }
                    uVar2 = 0xfffffc21;
                  }
                }
                else {
                  iVar3 = param_1[6];
                  iVar4 = param_1[2];
                  uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)(iVar1);
                  uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)(iVar4,uVar2);
                  *(undefined4 *)(iVar3 + 0x2c) = uVar2;
                  *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
                  if (2 < *(uint *)PTR_cos_log_level_005609ac) {
                    (**(code **)PTR_cos_log_format_005609b0)
                              (3,PTR_LAB_00560984 + 0x48f8,0x17e,PTR_LAB_00560984 + 0x4c78,
                               PTR_LAB_00560984 + 0x4b74,iVar1,*(undefined4 *)(param_1[6] + 0x2c));
                  }
                  uVar2 = 0xfffffc21;
                }
              }
              else {
                iVar3 = param_1[6];
                iVar4 = param_1[2];
                uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)(iVar1);
                uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)(iVar4,uVar2);
                *(undefined4 *)(iVar3 + 0x2c) = uVar2;
                *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
                if (2 < *(uint *)PTR_cos_log_level_005609ac) {
                  (**(code **)PTR_cos_log_format_005609b0)
                            (3,PTR_LAB_00560984 + 0x48f8,0x17c,PTR_LAB_00560984 + 0x4c78,
                             PTR_LAB_00560984 + 0x4b74,iVar1,*(undefined4 *)(param_1[6] + 0x2c));
                }
                uVar2 = 0xfffffc21;
              }
            }
            else {
              iVar3 = param_1[6];
              iVar4 = param_1[2];
              uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)(iVar1);
              uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)(iVar4,uVar2);
              *(undefined4 *)(iVar3 + 0x2c) = uVar2;
              *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
              if (2 < *(uint *)PTR_cos_log_level_005609ac) {
                (**(code **)PTR_cos_log_format_005609b0)
                          (3,PTR_LAB_00560984 + 0x48f8,0x17b,PTR_LAB_00560984 + 0x4c78,
                           PTR_LAB_00560984 + 0x4b74,iVar1,*(undefined4 *)(param_1[6] + 0x2c));
              }
              uVar2 = 0xfffffc21;
            }
          }
          else {
            iVar3 = param_1[6];
            iVar4 = param_1[2];
            uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)(iVar1);
            uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)(iVar4,uVar2);
            *(undefined4 *)(iVar3 + 0x2c) = uVar2;
            *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
            if (2 < *(uint *)PTR_cos_log_level_005609ac) {
              (**(code **)PTR_cos_log_format_005609b0)
                        (3,PTR_LAB_00560984 + 0x48f8,0x179,PTR_LAB_00560984 + 0x4c78,
                         PTR_LAB_00560984 + 0x4b74,iVar1,*(undefined4 *)(param_1[6] + 0x2c));
            }
            uVar2 = 0xfffffc21;
          }
        }
        else {
          iVar3 = param_1[6];
          iVar4 = param_1[2];
          uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)(iVar1);
          uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)(iVar4,uVar2);
          *(undefined4 *)(iVar3 + 0x2c) = uVar2;
          *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
          if (2 < *(uint *)PTR_cos_log_level_005609ac) {
            (**(code **)PTR_cos_log_format_005609b0)
                      (3,PTR_LAB_00560984 + 0x48f8,0x178,PTR_LAB_00560984 + 0x4c78,
                       PTR_LAB_00560984 + 0x4b74,iVar1,*(undefined4 *)(param_1[6] + 0x2c));
          }
          uVar2 = 0xfffffc21;
        }
      }
      else {
        iVar3 = param_1[6];
        iVar4 = param_1[2];
        uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)(iVar1);
        uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)(iVar4,uVar2);
        *(undefined4 *)(iVar3 + 0x2c) = uVar2;
        *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
        if (2 < *(uint *)PTR_cos_log_level_005609ac) {
          (**(code **)PTR_cos_log_format_005609b0)
                    (3,PTR_LAB_00560984 + 0x48f8,0x176,PTR_LAB_00560984 + 0x4c78,
                     PTR_LAB_00560984 + 0x4b74,iVar1,*(undefined4 *)(param_1[6] + 0x2c));
        }
        uVar2 = 0xfffffc21;
      }
    }
    else {
      iVar3 = param_1[6];
      iVar4 = param_1[2];
      uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)(iVar1);
      uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)(iVar4,uVar2);
      *(undefined4 *)(iVar3 + 0x2c) = uVar2;
      *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
      if (2 < *(uint *)PTR_cos_log_level_005609ac) {
        (**(code **)PTR_cos_log_format_005609b0)
                  (3,PTR_LAB_00560984 + 0x48f8,0x175,PTR_LAB_00560984 + 0x4c78,
                   PTR_LAB_00560984 + 0x4b74,iVar1,*(undefined4 *)(param_1[6] + 0x2c));
      }
      uVar2 = 0xfffffc21;
    }
  }
  else {
    iVar3 = param_1[6];
    iVar4 = param_1[2];
    uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)(iVar1);
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)(iVar4,uVar2);
    *(undefined4 *)(iVar3 + 0x2c) = uVar2;
    *(undefined4 *)(param_1[6] + 0x28) = 0xfffffc21;
    if (2 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (3,PTR_LAB_00560984 + 0x48f8,0x173,PTR_LAB_00560984 + 0x4c78,
                 PTR_LAB_00560984 + 0x4b74,iVar1,*(undefined4 *)(param_1[6] + 0x2c));
    }
    uVar2 = 0xfffffc21;
  }
  return uVar2;
}



// ==== cos_curl_http_transport_perform @ 00422238 size=628

int cos_curl_http_transport_perform(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  iVar1 = (*(code *)(PTR_LAB_00560a54 + -0xc))(param_1);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    uVar5 = (*(code *)PTR_apr_time_now_00560adc)();
    *(undefined8 *)(iVar1 + 8) = uVar5;
    iVar1 = (*(code *)PTR_curl_easy_perform_00560b50)(*(undefined4 *)(param_1 + 0x1c));
    iVar3 = *(int *)(param_1 + 0x18);
    uVar5 = (*(code *)PTR_apr_time_now_00560adc)();
    *(undefined8 *)(iVar3 + 0x18) = uVar5;
    (*(code *)(PTR_LAB_00560a54 + -0xf30))(param_1,5);
    if (((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 0x18) + 0x28) == 0)) &&
       (iVar3 = (*(code *)PTR_cos_curl_code_to_status_00560b54)(iVar1), iVar3 != 0)) {
      *(int *)(*(int *)(param_1 + 0x18) + 0x28) = iVar3;
      iVar3 = *(int *)(param_1 + 0x18);
      uVar4 = *(undefined4 *)(param_1 + 8);
      uVar2 = (*(code *)PTR_curl_easy_strerror_00560a9c)(iVar1);
      uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)(uVar4,uVar2);
      *(undefined4 *)(iVar3 + 0x2c) = uVar2;
      if (2 < *(uint *)PTR_cos_log_level_005609ac) {
        (**(code **)PTR_cos_log_format_005609b0)
                  (3,PTR_LAB_00560984 + 0x48f8,0x1d4,PTR_LAB_00560984 + 0x4c94,
                   PTR_LAB_00560984 + 0x4ba4,iVar1,*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x2c))
        ;
      }
    }
    (*(code *)(PTR_LAB_00560a54 + -0x9c))(param_1);
    iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x28);
  }
  return iVar1;
}



// ==== cos_put_object_from_buffer @ 00422874 size=144

undefined4
cos_put_object_from_buffer
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_cos_do_put_object_from_buffer_00560b58)
                    (param_1,param_2,param_3,param_4,param_5,0,0,param_6,0);
  return uVar1;
}



// ==== cos_do_put_object_from_buffer @ 00422904 size=616

undefined4
cos_do_put_object_from_buffer
          (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_c = 0;
  uVar1 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,param_5,2);
  (*(code *)PTR_set_content_type_00560b60)(0,*(undefined4 *)(param_3 + 4),uVar1);
  (*(code *)PTR_apr_table_add_00560b64)(uVar1,PTR_COS_EXPECT_00560b00,PTR_LAB_00560984 + 0x4cc0);
  uVar2 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,param_6,0);
  (*(code *)PTR_cos_init_object_request_00560b68)
            (param_1,param_2,param_3,2,&local_10,uVar2,uVar1,param_7,0,0,&local_c);
  (*(code *)PTR_cos_write_request_body_from_buffer_00560b6c)(param_4,local_10);
  uVar1 = (*(code *)PTR_cos_process_request_00560b70)(param_1,local_10,local_c);
  (*(code *)PTR_cos_fill_read_response_body_00560b74)(local_c,param_9);
  (*(code *)PTR_cos_fill_read_response_header_00560b78)(local_c,param_8);
  iVar3 = (*(code *)PTR_is_enable_crc_00560b7c)(param_1);
  if (iVar3 != 0) {
    iVar3 = (*(code *)PTR_has_crc_in_response_00560b80)(local_c);
    if (iVar3 != 0) {
      (*(code *)PTR_cos_check_crc_consistent_00560b84)
                (*(undefined4 *)(local_10 + 0x50),*(undefined4 *)(local_10 + 0x54),
                 *(undefined4 *)(local_c + 4),uVar1);
    }
  }
  return uVar1;
}



// ==== cos_do_put_object_from_file @ 00422bfc size=736

int * cos_do_put_object_from_file
                (int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int local_14;
  int local_10 [2];
  
  local_14 = 0;
  local_10[0] = 0;
  piVar1 = (int *)(*(code *)PTR_cos_status_create_00560b8c)(*(undefined4 *)(param_1 + 8));
  uVar2 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,param_5,2);
  (*(code *)PTR_set_content_type_00560b60)
            (*(undefined4 *)(param_4 + 4),*(undefined4 *)(param_3 + 4),uVar2);
  (*(code *)PTR_apr_table_add_00560b64)(uVar2,PTR_COS_EXPECT_00560b00,PTR_LAB_00560984 + 0x4cc0);
  uVar3 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,param_6,0);
  (*(code *)PTR_cos_init_object_request_00560b68)
            (param_1,param_2,param_3,2,&local_14,uVar3,uVar2,param_7,0,0,local_10);
  iVar4 = (*(code *)PTR_cos_write_request_body_from_file_00560b90)
                    (*(undefined4 *)(param_1 + 8),param_4,local_14);
  if (iVar4 == 0) {
    piVar1 = (int *)(*(code *)PTR_cos_process_request_00560b70)(param_1,local_14,local_10[0]);
    (*(code *)PTR_cos_fill_read_response_body_00560b74)(local_10[0],param_9);
    (*(code *)PTR_cos_fill_read_response_header_00560b78)(local_10[0],param_8);
    iVar4 = (*(code *)PTR_is_enable_crc_00560b7c)(param_1);
    if ((iVar4 != 0) &&
       (iVar4 = (*(code *)PTR_has_crc_in_response_00560b80)(local_10[0]), iVar4 != 0)) {
      (*(code *)PTR_cos_check_crc_consistent_00560b84)
                (*(undefined4 *)(local_14 + 0x50),*(undefined4 *)(local_14 + 0x54),
                 *(undefined4 *)(local_10[0] + 4),piVar1);
    }
  }
  else {
    *piVar1 = iVar4;
    piVar1[1] = (int)PTR_COS_OPEN_FILE_ERROR_CODE_00560b94;
    piVar1[2] = 0;
  }
  return piVar1;
}



// ==== cos_get_object_to_buffer @ 00422edc size=144

undefined4
cos_get_object_to_buffer
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_cos_do_get_object_to_buffer_00560b98)
                    (param_1,param_2,param_3,param_4,param_5,param_6,0,param_7);
  return uVar1;
}



// ==== cos_do_get_object_to_buffer @ 00422f6c size=544

undefined4
cos_do_get_object_to_buffer
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_14;
  int local_10 [2];
  
  local_14 = 0;
  local_10[0] = 0;
  uVar1 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,param_4,0);
  uVar2 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,param_5,0);
  (*(code *)PTR_cos_init_object_request_00560b68)
            (param_1,param_2,param_3,0,&local_14,uVar2,uVar1,param_7,0,0,local_10);
  uVar1 = (*(code *)PTR_cos_process_request_00560b70)(param_1,local_14,local_10[0]);
  (*(code *)PTR_cos_fill_read_response_body_00560b74)(local_10[0],param_6);
  (*(code *)PTR_cos_fill_read_response_header_00560b78)(local_10[0],param_8);
  iVar3 = (*(code *)PTR_is_enable_crc_00560b7c)(param_1);
  if (iVar3 != 0) {
    iVar3 = (*(code *)PTR_has_crc_in_response_00560b80)(local_10[0]);
    if (iVar3 != 0) {
      iVar3 = (*(code *)PTR_has_range_or_process_in_request_00560b9c)(local_14);
      if (iVar3 == 0) {
        (*(code *)PTR_cos_check_crc_consistent_00560b84)
                  (*(undefined4 *)(local_10[0] + 0x40),*(undefined4 *)(local_10[0] + 0x44),
                   *(undefined4 *)(local_10[0] + 4),uVar1);
      }
    }
  }
  return uVar1;
}



// ==== cos_do_get_object_to_file @ 0042321c size=760

int * cos_do_get_object_to_file
                (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_18;
  int local_14;
  undefined1 auStack_10 [4];
  undefined4 local_c;
  
  local_18 = 0;
  local_14 = 0;
  uVar1 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,param_4,0);
  uVar2 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,param_5,0);
  (*(code *)PTR_cos_get_temporary_file_name_00560ba4)
            (*(undefined4 *)(param_1 + 8),param_6,auStack_10);
  (*(code *)PTR_cos_init_object_request_00560b68)
            (param_1,param_2,param_3,0,&local_18,uVar2,uVar1,param_7,0,0,&local_14);
  piVar3 = (int *)(*(code *)PTR_cos_status_create_00560b8c)(*(undefined4 *)(param_1 + 8));
  iVar4 = (*(code *)PTR_cos_init_read_response_body_to_file_00560ba8)
                    (*(undefined4 *)(param_1 + 8),auStack_10,local_14);
  if (iVar4 == 0) {
    piVar3 = (int *)(*(code *)PTR_cos_process_request_00560b70)(param_1,local_18,local_14);
    (*(code *)PTR_cos_fill_read_response_header_00560b78)(local_14,param_8);
    iVar4 = (*(code *)PTR_is_enable_crc_00560b7c)(param_1);
    if (iVar4 != 0) {
      iVar4 = (*(code *)PTR_has_crc_in_response_00560b80)(local_14);
      if (iVar4 != 0) {
        iVar4 = (*(code *)PTR_has_range_or_process_in_request_00560b9c)(local_18);
        if (iVar4 == 0) {
          (*(code *)PTR_cos_check_crc_consistent_00560b84)
                    (*(undefined4 *)(local_14 + 0x40),*(undefined4 *)(local_14 + 0x44),
                     *(undefined4 *)(local_14 + 4),piVar3);
        }
      }
    }
    (*(code *)PTR_cos_temp_file_rename_00560bac)
              (piVar3,local_c,*(undefined4 *)(param_6 + 4),*(undefined4 *)(param_1 + 8));
  }
  else {
    *piVar3 = iVar4;
    piVar3[1] = (int)PTR_COS_OPEN_FILE_ERROR_CODE_00560b94;
    piVar3[2] = 0;
  }
  return piVar3;
}



// ==== cos_head_object @ 00423514 size=332

undefined4
cos_head_object(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  local_c = 0;
  uVar1 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,param_4,0);
  uVar2 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,0,0);
  (*(code *)PTR_cos_init_object_request_00560b68)
            (param_1,param_2,param_3,1,&local_10,uVar2,uVar1,0,0,0,&local_c);
  uVar1 = (*(code *)PTR_cos_process_request_00560b70)(param_1,local_10,local_c);
  (*(code *)PTR_cos_fill_read_response_header_00560b78)(local_c,param_5);
  return uVar1;
}



// ==== cos_do_delete_object @ 004236dc size=376

undefined4
cos_do_delete_object
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_14;
  undefined4 local_10 [2];
  
  local_14 = 0;
  local_10[0] = 0;
  uVar1 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,param_4,0);
  uVar2 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,0,0);
  (*(code *)PTR_cos_init_object_request_00560b68)
            (param_1,param_2,param_3,4,&local_14,uVar2,uVar1,0,0,0,local_10);
  (*(code *)PTR_cos_get_object_uri_00560bb4)(param_1,param_2,param_3,local_14);
  uVar1 = (*(code *)PTR_cos_process_request_00560b70)(param_1,local_14,local_10[0]);
  (*(code *)PTR_cos_fill_read_response_header_00560b78)(local_10[0],param_5);
  return uVar1;
}



// ==== cos_append_object_from_buffer @ 00423854 size=580

undefined4 cos_append_object_from_buffer(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 auStack_48 [64];
  
  local_50 = 0;
  local_4c = 0;
  uVar1 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,0,2);
  (*(code *)PTR_apr_table_add_00560b64)(uVar1,PTR_COS_APPEND_00560bb8,PTR_LAB_00560984 + 0x4cc0);
  (*(code *)PTR_apr_snprintf_00560ab0)(auStack_48,0x40,PTR_LAB_00560984 + 0x4cc4);
  (*(code *)PTR_apr_table_add_00560b64)(uVar1,PTR_COS_POSITION_00560bbc,auStack_48);
  uVar2 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,in_stack_0000001c,2);
  (*(code *)PTR_set_content_type_00560b60)(0,*(undefined4 *)(param_3 + 4),uVar2);
  (*(code *)PTR_apr_table_add_00560b64)(uVar2,PTR_COS_EXPECT_00560b00,PTR_LAB_00560984 + 0x4cc0);
  (*(code *)PTR_cos_init_object_request_00560b68)
            (param_1,param_2,param_3,3,&local_50,uVar1,uVar2,0,0,0,&local_4c);
  (*(code *)PTR_cos_write_request_body_from_buffer_00560b6c)(in_stack_00000018,local_50);
  uVar1 = (*(code *)PTR_cos_process_request_00560b70)(param_1,local_50,local_4c);
  (*(code *)PTR_cos_fill_read_response_header_00560b78)(local_4c,in_stack_00000020);
  return uVar1;
}



// ==== cos_copy_object @ 004248b0 size=708

int * cos_copy_object(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                     undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,
                     undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_10;
  int local_c;
  
  local_10 = 0;
  local_c = 0;
  (*(code *)PTR_cos_status_create_00560b8c)(*(undefined4 *)(param_1 + 8));
  uVar1 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,param_7,2);
  uVar2 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,0,0);
  uVar3 = (*(code *)PTR_apr_psprintf_005609f4)
                    (*(undefined4 *)(param_1 + 8),PTR_LAB_00560984 + 0x4ccc,*param_2,param_2[1],
                     *param_4,param_4[1],*param_3,param_3[1]);
  (*(code *)PTR_apr_table_add_00560b64)
            (uVar1,PTR_COS_CANNONICALIZED_HEADER_COPY_SOURCE_00560be0,uVar3);
  (*(code *)PTR_set_content_type_00560b60)(0,*(undefined4 *)(param_6 + 4),uVar1);
  (*(code *)PTR_cos_init_object_request_00560b68)
            (param_1,param_5,param_6,2,&local_10,uVar2,uVar1,0,0,0,&local_c);
  piVar4 = (int *)(*(code *)PTR_cos_process_request_00560b70)(param_1,local_10,local_c);
  (*(code *)PTR_cos_fill_read_response_header_00560b78)(local_c,param_9);
  iVar5 = (*(code *)(PTR_LAB_00560a54 + 0x2814))(piVar4);
  if ((iVar5 != 0) &&
     (iVar5 = (*(code *)PTR_cos_copy_object_parse_from_body_00560be4)
                        (*(undefined4 *)(param_1 + 8),local_c + 8,param_8), iVar5 != 0)) {
    *piVar4 = iVar5;
    piVar4[1] = (int)PTR_COS_XML_PARSE_ERROR_CODE_00560bdc;
    piVar4[2] = 0;
  }
  return piVar4;
}



// ==== cos_gen_sign_string @ 00425488 size=476

int cos_gen_sign_string(int *param_1)

{
  int iVar1;
  int in_stack_00000018;
  undefined1 auStack_810 [2048];
  undefined4 local_10;
  undefined1 *local_c;
  
  iVar1 = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(in_stack_00000018 + 0x14));
  if (iVar1 < 0x7ff) {
    local_c = auStack_810;
    local_10 = (*(code *)PTR_apr_snprintf_00560ab0)
                         (auStack_810,0x800,PTR_LAB_00560984 + 0x4d08,
                          *(undefined4 *)(in_stack_00000018 + 0x14));
    iVar1 = (*(code *)PTR_cos_get_string_to_sign_00560c14)
                      (param_1[2],*(undefined4 *)(in_stack_00000018 + 0xc),*param_1 + 8,
                       *param_1 + 0x10,&local_10,*(undefined4 *)(in_stack_00000018 + 0x18),
                       *(undefined4 *)(in_stack_00000018 + 0x1c));
    if (iVar1 == 0) {
      iVar1 = 0;
    }
  }
  else {
    if (2 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (3,PTR_LAB_00560984 + 0x4cdc,0x2e1,PTR_LAB_00560984 + 0x4d78,
                 PTR_LAB_00560984 + 0x4cec,*(undefined4 *)(in_stack_00000018 + 0x14));
    }
    iVar1 = -0x3e2;
  }
  return iVar1;
}



// ==== cos_gen_presigned_url @ 00425664 size=1040

int cos_gen_presigned_url(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 in_stack_00000018;
  undefined4 *in_stack_0000001c;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 local_242c;
  undefined4 local_2428;
  int *local_2424;
  undefined4 local_2420;
  undefined1 local_241c [6148];
  undefined1 local_c18 [3084];
  
  local_2424 = (int *)0x0;
  local_2420 = 0;
  local_241c[0] = 0;
  local_c18[0] = 0;
  local_242c = 0;
  local_2428 = 0;
  uVar1 = (*(code *)PTR_apr_table_make_005609d0)(*(undefined4 *)(param_1 + 8),1);
  uVar2 = (*(code *)PTR_apr_table_make_005609d0)(*(undefined4 *)(param_1 + 8),1);
  (*(code *)PTR_cos_init_object_request_00560b68)
            (param_1,param_2,param_3,in_stack_00000018,&local_2424,uVar1,uVar2,0,0,0,&local_2420);
  if (*local_2424 != 0) {
    (*(code *)PTR_apr_table_set_005609f8)(local_2424[6],PTR_COS_HOST_00560c18,*local_2424);
  }
  puVar6 = &local_242c;
  piVar5 = local_2424;
  iVar3 = (*(code *)PTR_cos_gen_sign_string_00560c1c)(param_1,param_2,param_3);
  if (iVar3 == 0) {
    iVar3 = (*(code *)PTR_cos_url_encode_00560b10)(local_241c,local_2424[4],0x800);
    if (iVar3 == 0) {
      iVar3 = (*(code *)PTR_cos_url_encode_00560b10)(local_c18,local_2428,0x400);
      if (iVar3 == 0) {
        if ((local_2424[1] == 0) || (*(char *)local_2424[1] == '\0')) {
          puVar4 = PTR_LAB_00560984 + 0x4d60;
        }
        else {
          puVar4 = (undefined *)local_2424[1];
        }
        uVar1 = (*(code *)PTR_apr_psprintf_005609f4)
                          (*(undefined4 *)(param_1 + 8),PTR_LAB_00560984 + 0x4d68,puVar4,*local_2424
                           ,local_241c,local_c18,piVar5,puVar6);
        uVar2 = (*(code *)PTR_strlen_00561504)(uVar1);
        *in_stack_0000001c = uVar2;
        in_stack_0000001c[1] = uVar1;
        iVar3 = 0;
      }
      else if (2 < *(uint *)PTR_cos_log_level_005609ac) {
        (**(code **)PTR_cos_log_format_005609b0)
                  (3,PTR_LAB_00560984 + 0x4cdc,0x319,PTR_LAB_00560984 + 0x4d8c,
                   PTR_LAB_00560984 + 0x4d38,iVar3);
      }
    }
    else if (2 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (3,PTR_LAB_00560984 + 0x4cdc,0x313,PTR_LAB_00560984 + 0x4d8c,
                 PTR_LAB_00560984 + 0x4d38,iVar3);
    }
  }
  else if (2 < *(uint *)PTR_cos_log_level_005609ac) {
    (**(code **)PTR_cos_log_format_005609b0)
              (3,PTR_LAB_00560984 + 0x4cdc,0x30d,PTR_LAB_00560984 + 0x4d8c,PTR_LAB_00560984 + 0x4d0c
               ,iVar3);
  }
  return iVar3;
}



// ==== cos_status_create @ 00425df8 size=132

undefined4 cos_status_create(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_apr_palloc_00560a74)(param_1,0x10);
  uVar1 = (*(code *)PTR_memset_00561588)(uVar1,0,0x10);
  return uVar1;
}



// ==== cos_status_dup @ 00425e7c size=204

undefined4 * cos_status_dup(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(code *)PTR_cos_status_create_00560b8c)(param_1);
  *puVar1 = *param_2;
  uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)(param_1,param_2[1]);
  puVar1[1] = uVar2;
  uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)(param_1,param_2[2]);
  puVar1[2] = uVar2;
  return puVar1;
}



// ==== cos_status_parse_from_body @ 00426064 size=924

undefined4 *
cos_status_parse_from_body
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *local_resc;
  undefined4 local_10 [2];
  
  local_resc = param_4;
  if (param_4 == (undefined4 *)0x0) {
    local_resc = (undefined4 *)(*(code *)PTR_cos_status_create_00560b8c)(param_1);
  }
  *local_resc = param_3;
  iVar1 = (*(code *)(PTR_LAB_00560a54 + 24000))(param_3);
  if (iVar1 == 0) {
    iVar1 = (*(code *)(PTR_LAB_00560a54 + 0x5d80))(param_2);
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_cos_parse_xml_body_00560c24)(param_2,local_10);
      if (iVar1 == 0) {
        iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)
                          (local_10[0],local_10[0],PTR_LAB_00560984 + 0x4e78,0,0,1);
        if (iVar1 == 0) {
          uVar2 = (*(code *)PTR_cos_buf_list_content_00560c04)(param_1,param_2);
          if (2 < *(uint *)PTR_cos_log_level_005609ac) {
            (**(code **)PTR_cos_log_format_005609b0)
                      (3,PTR_LAB_00560984 + 0x4e80,0x54,PTR_LAB_00560984 + 0x4ee4,
                       PTR_LAB_00560984 + 0x4e90);
          }
          if (2 < *(uint *)PTR_cos_log_level_005609ac) {
            (**(code **)PTR_cos_log_format_005609b0)
                      (3,PTR_LAB_00560984 + 0x4e80,0x55,PTR_LAB_00560984 + 0x4ee4,
                       PTR_LAB_00560984 + 0x4ec4,uVar2);
          }
          local_resc[1] = PTR_COS_UNKNOWN_ERROR_CODE_00560c20;
          (*(code *)PTR_mxmlDelete_00560c2c)(local_10[0]);
        }
        else {
          iVar3 = (*(code *)PTR_mxmlFindElement_00560c28)
                            (iVar1,local_10[0],PTR_LAB_00560984 + 0x4ed4,0,0,1);
          if (iVar3 != 0) {
            uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                              (param_1,*(undefined4 *)(*(int *)(iVar3 + 0x10) + 0x18));
            local_resc[1] = uVar2;
          }
          iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)
                            (iVar1,local_10[0],PTR_LAB_00560984 + 0x4edc,0,0,1);
          if (iVar1 != 0) {
            uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                              (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
            local_resc[2] = uVar2;
          }
          (*(code *)PTR_mxmlDelete_00560c2c)(local_10[0]);
        }
      }
      else {
        local_resc[1] = PTR_COS_UNKNOWN_ERROR_CODE_00560c20;
      }
    }
    else {
      local_resc[1] = PTR_COS_UNKNOWN_ERROR_CODE_00560c20;
    }
  }
  return local_resc;
}



// ==== cos_is_valid_ip @ 00426b20 size=152

undefined4 cos_is_valid_ip(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_inet_addr_0056160c)(param_1);
  if ((iVar1 == -1) || (iVar1 = (*(code *)PTR_inet_addr_0056160c)(param_1), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// ==== cos_config_create @ 00426bb8 size=132

undefined4 cos_config_create(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_apr_palloc_00560a74)(param_1,0x48);
  uVar1 = (*(code *)PTR_memset_00561588)(uVar1,0,0x48);
  return uVar1;
}



// ==== cos_request_options_create @ 00426c3c size=308

int cos_request_options_create(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_res0 [4];
  
  local_res0[0] = param_1;
  if ((param_1 == 0) &&
     (iVar1 = (*(code *)PTR_apr_pool_create_ex_005609cc)(local_res0,0,0,0), iVar1 != 0)) {
    if (1 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (2,PTR_LAB_00560984 + 0x5688,0xbb,PTR_LAB_00560984 + 0x57c4,
                 PTR_LAB_00560984 + 0x5698);
    }
    return 0;
  }
  uVar2 = (*(code *)PTR_apr_palloc_00560a74)(local_res0[0],0xc);
  iVar1 = (*(code *)PTR_memset_00561588)(uVar2,0,0xc);
  *(int *)(iVar1 + 8) = local_res0[0];
  return iVar1;
}



// ==== cos_get_object_uri @ 00426d70 size=960

void cos_get_object_uri(int *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = false;
  (*(code *)(PTR_LAB_00560a54 + 0x69e8))(param_1,param_4);
  iVar2 = (*(code *)PTR_strlen_00561504)(param_4[1]);
  iVar3 = (*(code *)PTR_cos_pstrdup_00560b2c)(param_1[2],*param_1);
  iVar5 = *(int *)*param_1 - iVar2;
  iVar6 = *(int *)(*param_1 + 4) + iVar2;
  uVar4 = (*(code *)PTR_apr_psprintf_005609f4)
                    (param_1[2],PTR_LAB_00560984 + 0x5680,*param_3,param_3[1]);
  param_4[5] = uVar4;
  if (*(int *)(*param_1 + 0x28) == 0) {
    iVar2 = (*(code *)PTR_cos_is_valid_ip_00560c34)(iVar3 + iVar2);
    if (iVar2 == 0) {
      if ((*(int *)(*param_1 + 0x18) == 0) || (**(char **)(*param_1 + 0x1c) == '\0')) {
        bVar1 = true;
      }
      else {
        iVar2 = (*(code *)PTR_cos_ends_with_00560c38)(param_2,*param_1 + 0x18);
        if ((iVar2 != 0) &&
           ((*(int *)(*param_1 + 0x18) < *param_2 &&
            (*(char *)(param_2[1] + (*param_2 - *(int *)(*param_1 + 0x18)) + -1) == '-')))) {
          bVar1 = true;
        }
      }
      if (bVar1) {
        uVar4 = (*(code *)PTR_apr_psprintf_005609f4)
                          (param_1[2],PTR_LAB_00560984 + 0x56b4,*param_2,param_2[1],iVar5,iVar6);
        *param_4 = uVar4;
      }
      else {
        uVar4 = (*(code *)PTR_apr_psprintf_005609f4)
                          (param_1[2],PTR_LAB_00560984 + 0x56c0,*param_2,param_2[1],
                           *(undefined4 *)(*param_1 + 0x18),*(undefined4 *)(*param_1 + 0x1c),iVar5,
                           iVar6);
        *param_4 = uVar4;
      }
      goto LAB_004270d0;
    }
  }
  uVar4 = (*(code *)PTR_apr_psprintf_005609f4)(param_1[2],PTR_LAB_00560984 + 0x5680,iVar5,iVar6);
  *param_4 = uVar4;
LAB_004270d0:
  uVar4 = (*(code *)PTR_apr_psprintf_005609f4)
                    (param_1[2],PTR_LAB_00560984 + 0x5680,*param_3,param_3[1]);
  param_4[4] = uVar4;
  return;
}



// ==== cos_get_bucket_uri @ 00427130 size=924

void cos_get_bucket_uri(int *param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = false;
  (*(code *)(PTR_LAB_00560a54 + 0x69e8))(param_1,param_3);
  iVar2 = (*(code *)PTR_strlen_00561504)(param_3[1]);
  iVar3 = (*(code *)PTR_cos_pstrdup_00560b2c)(param_1[2],*param_1);
  iVar5 = *(int *)*param_1 - iVar2;
  iVar6 = *(int *)(*param_1 + 4) + iVar2;
  uVar4 = (*(code *)PTR_apr_psprintf_005609f4)
                    (param_1[2],PTR_LAB_00560984 + 0x56d0,PTR_LAB_00560984 + 0x5670);
  param_3[5] = uVar4;
  if (*(int *)(*param_1 + 0x28) == 0) {
    iVar2 = (*(code *)PTR_cos_is_valid_ip_00560c34)(iVar3 + iVar2);
    if (iVar2 == 0) {
      if ((*(int *)(*param_1 + 0x18) == 0) || (**(char **)(*param_1 + 0x1c) == '\0')) {
        bVar1 = true;
      }
      else {
        iVar2 = (*(code *)PTR_cos_ends_with_00560c38)(param_2,*param_1 + 0x18);
        if ((iVar2 != 0) &&
           ((*(int *)(*param_1 + 0x18) < *param_2 &&
            (*(char *)(param_2[1] + (*param_2 - *(int *)(*param_1 + 0x18)) + -1) == '-')))) {
          bVar1 = true;
        }
      }
      if (bVar1) {
        uVar4 = (*(code *)PTR_apr_psprintf_005609f4)
                          (param_1[2],PTR_LAB_00560984 + 0x56b4,*param_2,param_2[1],iVar5,iVar6);
        *param_3 = uVar4;
      }
      else {
        uVar4 = (*(code *)PTR_apr_psprintf_005609f4)
                          (param_1[2],PTR_LAB_00560984 + 0x56c0,*param_2,param_2[1],
                           *(undefined4 *)(*param_1 + 0x18),*(undefined4 *)(*param_1 + 0x1c),iVar5,
                           iVar6);
        *param_3 = uVar4;
      }
      goto LAB_0042747c;
    }
  }
  uVar4 = (*(code *)PTR_apr_psprintf_005609f4)(param_1[2],PTR_LAB_00560984 + 0x5680,iVar5,iVar6);
  *param_3 = uVar4;
LAB_0042747c:
  uVar4 = (*(code *)PTR_apr_psprintf_005609f4)
                    (param_1[2],PTR_LAB_00560984 + 0x56d0,PTR_LAB_00560984 + 0x5670);
  param_3[4] = uVar4;
  return;
}



// ==== cos_write_request_body_from_buffer @ 004274cc size=164

void cos_write_request_body_from_buffer(undefined4 param_1,int param_2)

{
  undefined8 uVar1;
  
  (*(code *)(PTR_LAB_00560a54 + 0x6740))(param_1,param_2 + 0x20);
  uVar1 = (*(code *)PTR_cos_buf_list_len_00560ae8)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x28) = uVar1;
  return;
}



// ==== cos_write_request_body_from_file @ 00427570 size=360

int cos_write_request_body_from_file(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_cos_create_file_buf_00560a8c)(param_1);
  iVar2 = (*(code *)PTR_cos_open_file_for_all_read_00560c3c)
                    (param_1,*(undefined4 *)(param_2 + 4),iVar1);
  if (iVar2 == 0) {
    uVar3 = *(undefined4 *)(iVar1 + 0x14);
    *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(iVar1 + 0x10);
    *(undefined4 *)(param_3 + 0x2c) = uVar3;
    *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(param_2 + 4);
    *(int *)(param_3 + 0x34) = iVar1;
    *(undefined4 *)(param_3 + 0x44) = 1;
    *(undefined **)(param_3 + 0x40) = PTR_cos_read_http_body_file_00560c40;
  }
  else if (2 < *(uint *)PTR_cos_log_level_005609ac) {
    (**(code **)PTR_cos_log_format_005609b0)
              (3,PTR_LAB_00560984 + 0x5688,0x165,PTR_LAB_00560984 + 0x57e0,PTR_LAB_00560984 + 0x56d4
               ,*(undefined4 *)(param_2 + 4));
  }
  return iVar2;
}



// ==== cos_write_request_body_from_upload_file @ 004276d8 size=444

int cos_write_request_body_from_upload_file(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = (*(code *)PTR_cos_create_file_buf_00560a8c)(param_1);
  iVar2 = (*(code *)PTR_cos_open_file_for_range_read_00560c44)
                    (param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                     *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),
                     *(undefined4 *)(param_2 + 0x14),iVar1);
  if (iVar2 == 0) {
    uVar3 = *(uint *)(iVar1 + 0x10);
    iVar4 = *(int *)(iVar1 + 0x14);
    iVar5 = *(int *)(iVar1 + 0xc);
    uVar6 = uVar3 - *(int *)(iVar1 + 8);
    *(uint *)(param_3 + 0x28) = uVar6;
    *(uint *)(param_3 + 0x2c) = (iVar4 - iVar5) - (uint)(uVar3 < uVar6);
    *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(param_2 + 4);
    *(int *)(param_3 + 0x34) = iVar1;
    *(undefined4 *)(param_3 + 0x44) = 1;
    *(undefined **)(param_3 + 0x40) = PTR_cos_read_http_body_file_00560c40;
  }
  else if (2 < *(uint *)PTR_cos_log_level_005609ac) {
    (**(code **)PTR_cos_log_format_005609b0)
              (3,PTR_LAB_00560984 + 0x5688,0x17c,PTR_LAB_00560984 + 0x5804,PTR_LAB_00560984 + 0x56d4
               ,*(undefined4 *)(param_2 + 4));
  }
  return iVar2;
}



// ==== cos_fill_read_response_body @ 00427894 size=116

void cos_fill_read_response_body(int param_1,int param_2)

{
  if (param_2 != 0) {
    (*(code *)(PTR_LAB_00560a54 + 0x6740))(param_1 + 8,param_2);
  }
  return;
}



// ==== cos_init_read_response_body_to_file @ 00427908 size=320

int cos_init_read_response_body_to_file(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (*(code *)PTR_cos_create_file_buf_00560a8c)(param_1);
  iVar2 = (*(code *)PTR_cos_open_file_for_write_00560a90)
                    (param_1,*(undefined4 *)(param_2 + 4),uVar1);
  if (iVar2 == 0) {
    *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_3 + 0x1c) = uVar1;
    *(undefined **)(param_3 + 0x30) = PTR_cos_write_http_body_file_00560c48;
    *(undefined4 *)(param_3 + 0x34) = 1;
  }
  else if (2 < *(uint *)PTR_cos_log_level_005609ac) {
    (**(code **)PTR_cos_log_format_005609b0)
              (3,PTR_LAB_00560984 + 0x5688,0x199,PTR_LAB_00560984 + 0x582c,PTR_LAB_00560984 + 0x56f8
               ,*(undefined4 *)(param_2 + 4));
  }
  return iVar2;
}



// ==== cos_init_read_response_body_to_file_part @ 00427a48 size=372

int cos_init_read_response_body_to_file_part(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (*(code *)PTR_cos_create_file_buf_00560a8c)(param_1);
  iVar2 = (*(code *)PTR_cos_open_file_for_range_write_00560c4c)
                    (param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                     *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),
                     *(undefined4 *)(param_2 + 0x14),uVar1);
  if (iVar2 == 0) {
    *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_3 + 0x1c) = uVar1;
    *(undefined **)(param_3 + 0x30) = PTR_cos_write_http_body_file_part_00560c50;
    *(undefined4 *)(param_3 + 0x34) = 1;
  }
  else if (2 < *(uint *)PTR_cos_log_level_005609ac) {
    (**(code **)PTR_cos_log_format_005609b0)
              (3,PTR_LAB_00560984 + 0x5688,0x1ac,PTR_LAB_00560984 + 0x5850,PTR_LAB_00560984 + 0x56f8
               ,*(undefined4 *)(param_2 + 4));
  }
  return iVar2;
}



// ==== cos_fill_read_response_header @ 00427bbc size=80

void cos_fill_read_response_header(int param_1,undefined4 *param_2)

{
  if ((param_2 != (undefined4 *)0x0) && (param_1 != 0)) {
    *param_2 = *(undefined4 *)(param_1 + 4);
  }
  return;
}



// ==== cos_create_api_result_content @ 00427c0c size=152

int cos_create_api_result_content(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_apr_palloc_00560a74)(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(int *)iVar1 = iVar1;
    *(int *)(iVar1 + 4) = iVar1;
  }
  return iVar1;
}



// ==== cos_create_acl_list_content @ 00427ca4 size=200

int cos_create_acl_list_content(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_cos_create_api_result_content_00560c54)(param_1,0x28);
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined **)(iVar1 + 0xc) = PTR_LAB_00560984 + 0x5670;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined **)(iVar1 + 0x14) = PTR_LAB_00560984 + 0x5670;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined **)(iVar1 + 0x1c) = PTR_LAB_00560984 + 0x5670;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined **)(iVar1 + 0x24) = PTR_LAB_00560984 + 0x5670;
  return iVar1;
}



// ==== cos_create_list_object_content @ 00427d6c size=96

undefined4 cos_create_list_object_content(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_cos_create_api_result_content_00560c54)(param_1,0x40);
  return uVar1;
}



// ==== cos_create_list_object_common_prefix @ 00427dcc size=96

undefined4 cos_create_list_object_common_prefix(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_cos_create_api_result_content_00560c54)(param_1,0x10);
  return uVar1;
}



// ==== cos_create_list_multipart_upload_content @ 00427e2c size=96

undefined4 cos_create_list_multipart_upload_content(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_cos_create_api_result_content_00560c54)(param_1,0x20);
  return uVar1;
}



// ==== cos_create_list_part_content @ 00427e8c size=104

undefined4 cos_create_list_part_content(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_cos_create_api_result_content_00560c54)(param_1,0x28);
  return uVar1;
}



// ==== cos_create_complete_part_content @ 00427ef4 size=104

undefined4 cos_create_complete_part_content(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_cos_create_api_result_content_00560c54)(param_1,0x18);
  return uVar1;
}



// ==== cos_create_copy_object_params @ 00428038 size=188

undefined4 * cos_create_copy_object_params(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = (*(code *)PTR_apr_palloc_00560a74)(param_1,0x10);
  puVar2 = (undefined4 *)(*(code *)PTR_memset_00561588)(uVar1,0,0x10);
  *puVar2 = 0;
  puVar2[1] = PTR_LAB_00560984 + 0x5670;
  puVar2[2] = 0;
  puVar2[3] = PTR_LAB_00560984 + 0x5670;
  return puVar2;
}



// ==== cos_create_list_upload_part_params @ 00428220 size=220

int cos_create_list_upload_part_params(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (*(code *)PTR_apr_palloc_00560a74)(param_1,0x28);
  iVar2 = (*(code *)PTR_memset_00561588)(uVar1,0,0x28);
  *(int *)(iVar2 + 0x20) = iVar2 + 0x20;
  *(int *)(iVar2 + 0x24) = iVar2 + 0x20;
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined **)(iVar2 + 0xc) = PTR_LAB_00560984 + 0x5670;
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)PTR_COS_PER_RET_NUM_00560c58;
  *(undefined4 *)(iVar2 + 0x14) = 1;
  return iVar2;
}



// ==== cos_create_upload_part_copy_params @ 00428420 size=344

undefined4 * cos_create_upload_part_copy_params(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = (*(code *)PTR_apr_palloc_00560a74)(param_1,0x40);
  puVar2 = (undefined4 *)(*(code *)PTR_memset_00561588)(uVar1,0,0x40);
  *puVar2 = 0;
  puVar2[1] = PTR_LAB_00560984 + 0x5670;
  puVar2[2] = 0;
  puVar2[3] = PTR_LAB_00560984 + 0x5670;
  puVar2[4] = 0;
  puVar2[5] = PTR_LAB_00560984 + 0x5670;
  puVar2[6] = 0;
  puVar2[7] = PTR_LAB_00560984 + 0x5670;
  puVar2[8] = 0;
  puVar2[10] = 0xffffffff;
  puVar2[0xb] = 0xffffffff;
  puVar2[0xc] = 0xffffffff;
  puVar2[0xd] = 0xffffffff;
  uVar1 = (*(code *)PTR_cos_create_copy_object_params_00560bf4)(param_1);
  puVar2[0xe] = uVar1;
  return puVar2;
}



// ==== cos_create_lifecycle_rule_content @ 00428578 size=328

int cos_create_lifecycle_rule_content(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (*(code *)PTR_apr_palloc_00560a74)(param_1,0x4c);
  iVar2 = (*(code *)PTR_memset_00561588)(uVar1,0,0x4c);
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined **)(iVar2 + 0xc) = PTR_LAB_00560984 + 0x5670;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined **)(iVar2 + 0x14) = PTR_LAB_00560984 + 0x5670;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined **)(iVar2 + 0x1c) = PTR_LAB_00560984 + 0x5670;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined **)(iVar2 + 0x28) = PTR_LAB_00560984 + 0x5670;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined **)(iVar2 + 0x3c) = PTR_LAB_00560984 + 0x5670;
  *(undefined4 *)(iVar2 + 0x40) = 0;
  *(undefined **)(iVar2 + 0x44) = PTR_LAB_00560984 + 0x5670;
  *(undefined4 *)(iVar2 + 0x20) = 0x7fffffff;
  *(undefined4 *)(iVar2 + 0x34) = 0x7fffffff;
  *(undefined4 *)(iVar2 + 0x48) = 0x7fffffff;
  return iVar2;
}



// ==== cos_create_cors_rule_content @ 004286c0 size=272

int cos_create_cors_rule_content(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (*(code *)PTR_apr_palloc_00560a74)(param_1,0x34);
  iVar2 = (*(code *)PTR_memset_00561588)(uVar1,0,0x34);
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined **)(iVar2 + 0xc) = PTR_LAB_00560984 + 0x5670;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined **)(iVar2 + 0x14) = PTR_LAB_00560984 + 0x5670;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined **)(iVar2 + 0x1c) = PTR_LAB_00560984 + 0x5670;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined **)(iVar2 + 0x24) = PTR_LAB_00560984 + 0x5670;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined **)(iVar2 + 0x2c) = PTR_LAB_00560984 + 0x5670;
  *(undefined4 *)(iVar2 + 0x30) = 0x7fffffff;
  return iVar2;
}



// ==== cos_create_replication_rule_content @ 00428934 size=256

int cos_create_replication_rule_content(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (*(code *)PTR_apr_palloc_00560a74)(param_1,0x30);
  iVar2 = (*(code *)PTR_memset_00561588)(uVar1,0,0x30);
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined **)(iVar2 + 0xc) = PTR_LAB_00560984 + 0x5670;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined **)(iVar2 + 0x14) = PTR_LAB_00560984 + 0x5670;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined **)(iVar2 + 0x1c) = PTR_LAB_00560984 + 0x5670;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined **)(iVar2 + 0x24) = PTR_LAB_00560984 + 0x5670;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined **)(iVar2 + 0x2c) = PTR_LAB_00560984 + 0x5670;
  return iVar2;
}



// ==== cos_create_upload_file @ 00428ae4 size=132

undefined4 cos_create_upload_file(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_apr_palloc_00560a74)(param_1,0x18);
  uVar1 = (*(code *)PTR_memset_00561588)(uVar1,0,0x18);
  return uVar1;
}



// ==== cos_create_cos_object_key @ 00428b68 size=132

undefined4 cos_create_cos_object_key(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_apr_palloc_00560a74)(param_1,0x10);
  uVar1 = (*(code *)PTR_memset_00561588)(uVar1,0,0x10);
  return uVar1;
}



// ==== cos_create_checkpoint_content @ 00428bec size=412

undefined4 * cos_create_checkpoint_content(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = (*(code *)PTR_apr_palloc_00560a74)(param_1,0x70);
  puVar2 = (undefined4 *)(*(code *)PTR_memset_00561588)(uVar1,0,0x70);
  uVar1 = (*(code *)PTR_apr_palloc_00560a74)(param_1,*(int *)PTR_COS_MAX_PART_NUM_00560c5c * 0x28);
  uVar1 = (*(code *)PTR_memset_00561588)(uVar1,0,*(int *)PTR_COS_MAX_PART_NUM_00560c5c * 0x28);
  puVar2[0x1a] = uVar1;
  *puVar2 = 0;
  puVar2[1] = PTR_LAB_00560984 + 0x5670;
  puVar2[4] = 0;
  puVar2[5] = PTR_LAB_00560984 + 0x5670;
  puVar2[10] = 0;
  puVar2[0xb] = PTR_LAB_00560984 + 0x5670;
  puVar2[0xc] = 0;
  puVar2[0xd] = PTR_LAB_00560984 + 0x5670;
  puVar2[0x10] = 0;
  puVar2[0x11] = PTR_LAB_00560984 + 0x5670;
  puVar2[0x12] = 0;
  puVar2[0x13] = PTR_LAB_00560984 + 0x5670;
  puVar2[0x14] = 0;
  puVar2[0x15] = PTR_LAB_00560984 + 0x5670;
  return puVar2;
}



// ==== cos_set_multipart_content_type @ 00428ea0 size=156

void cos_set_multipart_content_type(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = (undefined *)(*(code *)PTR_apr_table_get_005609dc)(param_1,PTR_COS_CONTENT_TYPE_00560c60)
  ;
  puVar2 = PTR_COS_MULTIPART_CONTENT_TYPE_00560c64;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
  }
  (*(code *)PTR_apr_table_set_005609f8)(param_1,PTR_COS_CONTENT_TYPE_00560c60,puVar2);
  return;
}



// ==== cos_init_request @ 00428fd4 size=264

void cos_init_request(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_cos_http_request_create_00560c68)(param_1[2]);
  *param_3 = iVar1;
  uVar2 = (*(code *)PTR_cos_http_response_create_00560c6c)(param_1[2]);
  *param_6 = uVar2;
  *(undefined4 *)(*param_3 + 0xc) = param_2;
  if (*(int *)(*param_1 + 0x24) != 0) {
    (*(code *)PTR_apr_table_set_005609f8)
              (param_5,PTR_COS_STS_SECURITY_TOKEN_00560c70,*(undefined4 *)(*param_1 + 0x24));
  }
  *(undefined4 *)(*param_3 + 0x18) = param_5;
  *(undefined4 *)(*param_3 + 0x1c) = param_4;
  return;
}



// ==== cos_init_bucket_request @ 004290dc size=164

void cos_init_bucket_request
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  (*(code *)PTR_cos_init_request_00560c74)(param_1,param_3,param_4,param_5,param_6,param_7);
  (*(code *)PTR_cos_get_bucket_uri_00560c78)(param_1,param_2,*param_4);
  return;
}



// ==== cos_init_object_request @ 00429180 size=292

void cos_init_object_request
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
               undefined4 param_10,int *param_11)

{
  int iVar1;
  
  (*(code *)PTR_cos_init_request_00560c74)(param_1,param_4,param_5,param_6,param_7,param_11);
  if (param_4 == 0) {
    *(undefined4 *)(*param_11 + 0x38) = param_8;
  }
  else if ((param_4 == 2) || (param_4 == 3)) {
    *(undefined4 *)(*param_5 + 0x48) = param_8;
    iVar1 = *param_5;
    *(undefined4 *)(iVar1 + 0x50) = param_9;
    *(undefined4 *)(iVar1 + 0x54) = param_10;
  }
  (*(code *)PTR_cos_get_object_uri_00560bb4)(param_1,param_2,param_3,*param_5);
  return;
}



// ==== cos_send_request @ 004292a4 size=520

int * cos_send_request(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *local_18;
  
  local_18 = (int *)(*(code *)PTR_cos_status_create_00560b8c)(*(undefined4 *)(param_1 + 4));
  iVar1 = (*(code *)PTR_cos_http_send_request_00560c7c)(param_1,param_2,param_3);
  if (iVar1 == 0) {
    iVar1 = (*(code *)(PTR_LAB_00560a54 + 0x6880))(*param_3);
    if (iVar1 == 0) {
      local_18 = (int *)(*(code *)PTR_cos_status_parse_from_body_00560c84)
                                  (*(undefined4 *)(param_1 + 4),param_3 + 2,*param_3,local_18);
    }
    else {
      *local_18 = *param_3;
    }
  }
  else {
    iVar2 = (*(code *)(PTR_LAB_00560a54 + 0x68b8))(param_1);
    *local_18 = iVar1;
    local_18[1] = (int)PTR_COS_HTTP_IO_ERROR_CODE_00560c80;
    local_18[2] = iVar2;
  }
  iVar1 = (*(code *)PTR_apr_table_get_005609dc)(param_3[1],PTR_LAB_00560984 + 0x5744);
  local_18[3] = iVar1;
  if (local_18[3] == 0) {
    iVar1 = (*(code *)PTR_apr_table_get_005609dc)(param_3[1],PTR_LAB_00560984 + 0x5758);
    local_18[3] = iVar1;
    if (local_18[3] == 0) {
      local_18[3] = (int)(PTR_LAB_00560984 + 0x5670);
    }
  }
  return local_18;
}



// ==== cos_process_request @ 004294ac size=252

int * cos_process_request(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(code *)PTR_cos_status_create_00560b8c)(param_1[2]);
  iVar2 = (*(code *)PTR_cos_sign_request_00560c88)(param_2,*param_1);
  if (iVar2 == 0) {
    piVar1 = (int *)(*(code *)PTR_cos_send_request_00560c90)(param_1[1],param_2,param_3);
  }
  else {
    *piVar1 = iVar2;
    piVar1[1] = (int)PTR_COS_CLIENT_ERROR_CODE_00560c8c;
    piVar1[2] = 0;
  }
  return piVar1;
}



// ==== cos_get_part_size @ 0042961c size=688

void cos_get_part_size(uint param_1,int param_2,uint *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar2 = *param_3;
  uVar4 = param_3[1];
  if (((int)uVar4 < 0) || ((uVar4 == 0 && (uVar2 < 0x100000)))) {
    uVar2 = 0x100000;
    uVar4 = 0;
  }
  *param_3 = uVar2;
  param_3[1] = uVar4;
  uVar2 = *(uint *)PTR_COS_MAX_PART_NUM_00560c5c;
  lVar1 = (ulonglong)*param_3 * (ulonglong)uVar2;
  iVar3 = param_3[1] * uVar2 + ((int)uVar2 >> 0x1f) * *param_3 + (int)((ulonglong)lVar1 >> 0x20);
  if ((iVar3 < param_2) || ((param_2 == iVar3 && ((uint)lVar1 < param_1)))) {
    uVar2 = *(uint *)PTR_COS_MAX_PART_NUM_00560c5c;
    uVar4 = uVar2 + param_1;
    uVar6 = (*(code *)PTR___moddi3_00560c94)
                      (param_1,param_2,*(int *)PTR_COS_MAX_PART_NUM_00560c5c,
                       *(int *)PTR_COS_MAX_PART_NUM_00560c5c >> 0x1f);
    uVar5 = uVar4 - (int)uVar6;
    uVar6 = (*(code *)PTR___divdi3_00560c98)
                      (uVar5,(((uint)(uVar4 < uVar2) + ((int)uVar2 >> 0x1f) + param_2) -
                             (int)((ulonglong)uVar6 >> 0x20)) - (uint)(uVar4 < uVar5),
                       *(int *)PTR_COS_MAX_PART_NUM_00560c5c,
                       *(int *)PTR_COS_MAX_PART_NUM_00560c5c >> 0x1f);
    *(undefined8 *)param_3 = uVar6;
    if (3 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (4,PTR_LAB_00560984 + 0x5688,0x398,PTR_LAB_00560984 + 0x587c,
                 PTR_LAB_00560984 + 0x576c);
    }
  }
  return;
}



// ==== cos_table_create_if_null @ 00429b94 size=128

int cos_table_create_if_null(int param_1,int param_2,undefined4 param_3)

{
  undefined4 local_res4;
  
  local_res4 = param_2;
  if (param_2 == 0) {
    local_res4 = (*(code *)PTR_apr_table_make_005609d0)(*(undefined4 *)(param_1 + 8),param_3);
  }
  return local_res4;
}



// ==== cos_check_crc_consistent @ 00429e44 size=164

int cos_check_crc_consistent(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = (*(code *)(PTR_LAB_00560cb0 + -0x6280))(param_1,param_2,param_3);
  if (iVar1 != 0) {
    *param_4 = iVar1;
    param_4[1] = (int)PTR_COS_INCONSISTENT_ERROR_CODE_00560cb4;
    param_4[2] = 0;
  }
  return iVar1;
}



// ==== cos_get_temporary_file_name @ 00429ee8 size=308

int cos_get_temporary_file_name(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *param_2 + 5;
  uVar1 = (*(code *)PTR_apr_palloc_00560a74)(param_1,iVar3);
  uVar1 = (*(code *)PTR_memset_00561588)(uVar1,0,iVar3);
  (*(code *)PTR_apr_snprintf_00560ab0)
            (uVar1,iVar3,PTR_LAB_00560984 + 0x57b4,*param_2,param_2[1],PTR_LAB_00560984 + 0x57bc);
  uVar2 = (*(code *)PTR_strlen_00561504)(uVar1);
  *param_3 = uVar2;
  param_3[1] = uVar1;
  return iVar3;
}



// ==== cos_temp_file_rename @ 0042a01c size=216

undefined4
cos_temp_file_rename(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = 0xffffffff;
  if (param_1 != 0) {
    iVar1 = (*(code *)(PTR_LAB_00560a54 + 0x6820))(param_1);
    if (iVar1 == 0) {
      local_10 = (*(code *)PTR_apr_file_remove_00560cbc)(param_2,param_4);
    }
    else {
      local_10 = (*(code *)PTR_apr_file_rename_00560cb8)(param_2,param_3,param_4);
    }
  }
  return local_10;
}



// ==== cos_crc64 @ 0042b554 size=264

/* WARNING: Removing unreachable block (ram,0x0042b5ec) */

undefined8 cos_crc64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)(PTR_LAB_00560cb0 + -0x56c4))(param_1,param_2,param_3,param_4);
  return uVar1;
}



// ==== cos_get_string_to_sign @ 0042be90 size=1620

undefined4
cos_get_string_to_sign
          (undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
          undefined4 *param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
          undefined4 param_10,undefined4 *param_11)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [64];
  undefined1 auStack_58 [40];
  undefined1 auStack_30 [40];
  
  *param_11 = 0;
  param_11[1] = 0;
  iVar1 = (*(code *)PTR_cos_create_buf_00560a88)(param_1,0x400);
  if (iVar1 == 0) {
    if (2 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (3,PTR_LAB_00560984 + 0x5890,0x38,PTR_LAB_00560984 + 0x5984,
                 PTR_LAB_00560984 + 0x589c);
    }
    uVar5 = 0xfffffc19;
  }
  else {
    iVar2 = (*(code *)PTR_cos_create_buf_00560a88)(param_1,0x100);
    if (iVar2 == 0) {
      if (2 < *(uint *)PTR_cos_log_level_005609ac) {
        (**(code **)PTR_cos_log_format_005609b0)
                  (3,PTR_LAB_00560984 + 0x5890,0x3d,PTR_LAB_00560984 + 0x5984,
                   PTR_LAB_00560984 + 0x589c);
      }
      uVar5 = 0xfffffc19;
    }
    else {
      uVar5 = (*(code *)PTR_cos_http_method_to_string_lower_00560cc0)(param_2);
      uVar3 = (*(code *)PTR_strlen_00561504)(uVar5);
      (*(code *)PTR_cos_buf_append_string_00560cc4)(param_1,iVar1,uVar5,uVar3);
      (*(code *)PTR_cos_buf_append_string_00560cc4)(param_1,iVar1,PTR_LAB_00560984 + 0x58bc,1);
      (*(code *)PTR_cos_buf_append_string_00560cc4)(param_1,iVar1,param_5[1],*param_5);
      (*(code *)PTR_cos_buf_append_string_00560cc4)(param_1,iVar1,PTR_LAB_00560984 + 0x58bc,1);
      (*(code *)PTR_cos_buf_append_string_00560cc4)(param_1,iVar1,PTR_LAB_00560984 + 0x58bc,1);
      (*(code *)PTR_cos_buf_append_string_00560cc4)(param_1,iVar1,PTR_LAB_00560984 + 0x58c0,5);
      if (param_6 != 0) {
        iVar4 = (*(code *)PTR_apr_table_get_005609dc)(param_6,PTR_COS_HOST_00560c18);
        if (iVar4 != 0) {
          uVar5 = (*(code *)PTR_strlen_00561504)(iVar4);
          (*(code *)PTR_cos_buf_append_string_00560cc4)(param_1,iVar1,iVar4,uVar5);
        }
      }
      (*(code *)PTR_cos_buf_append_string_00560cc4)(param_1,iVar1,PTR_LAB_00560984 + 0x58bc,1);
      (*(code *)PTR_cos_get_sha1_hexdigest_00560cc8)
                (auStack_58,*(undefined4 *)(iVar1 + 8),*(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8));
      (*(code *)PTR_cos_buf_append_string_00560cc4)(param_1,iVar2,PTR_LAB_00560984 + 0x58c8,5);
      uVar6 = (*(code *)PTR_apr_time_now_00560adc)();
      lVar7 = (*(code *)PTR___divdi3_00560c98)((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000000,0)
      ;
      lVar8 = lVar7 + CONCAT44(param_10,param_9);
      uVar5 = (*(code *)PTR_apr_snprintf_00560ab0)(auStack_98,0x40,PTR_LAB_00560984 + 0x58d0);
      (*(code *)PTR_cos_buf_append_string_00560cc4)(param_1,iVar2,auStack_98,uVar5,lVar7,lVar8);
      (*(code *)PTR_cos_buf_append_string_00560cc4)(param_1,iVar2,PTR_LAB_00560984 + 0x58bc,1);
      (*(code *)PTR_cos_buf_append_string_00560cc4)(param_1,iVar2,auStack_58,0x28);
      (*(code *)PTR_cos_buf_append_string_00560cc4)(param_1,iVar2,PTR_LAB_00560984 + 0x58bc,1);
      (*(code *)PTR_cos_get_hmac_sha1_hexdigest_00560ccc)
                (auStack_30,param_4[1],*param_4,auStack_98,uVar5);
      (*(code *)PTR_cos_get_hmac_sha1_hexdigest_00560ccc)
                (auStack_58,auStack_30,0x28,*(undefined4 *)(iVar2 + 8),
                 *(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 8));
      uVar5 = (*(code *)PTR_apr_psprintf_005609f4)
                        (param_1,PTR_LAB_00560984 + 0x58dc,*param_3,param_3[1],uVar5,auStack_98,
                         uVar5,auStack_98,0x28,auStack_58);
      param_11[1] = uVar5;
      uVar5 = (*(code *)PTR_strlen_00561504)(uVar5);
      *param_11 = uVar5;
      uVar5 = 0;
    }
  }
  return uVar5;
}



// ==== cos_sign_headers @ 0042c4e4 size=116

void cos_sign_headers(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  (*(code *)PTR_apr_table_addn_00560b30)
            (param_5,PTR_COS_AUTHORIZATION_00560cd0,*(undefined4 *)(param_2 + 4));
  return;
}



// ==== cos_get_signed_headers @ 0042c558 size=372

int cos_get_signed_headers
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              int param_5)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = (*(code *)PTR_cos_get_string_to_sign_00560c14)
                    (param_1,*(undefined4 *)(param_5 + 0xc),param_2,param_3,param_4,
                     *(undefined4 *)(param_5 + 0x18),*(undefined4 *)(param_5 + 0x1c));
  if (iVar1 == 0) {
    if (5 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (6,PTR_LAB_00560984 + 0x5890,0x8c,PTR_LAB_00560984 + 0x599c,
                 PTR_LAB_00560984 + 0x5954,local_14,local_10);
    }
    (*(code *)PTR_cos_sign_headers_00560cd4)
              (param_1,&local_14,param_2,param_3,*(undefined4 *)(param_5 + 0x18));
    iVar1 = 0;
  }
  return iVar1;
}



// ==== cos_sign_request @ 0042c6cc size=616

undefined4 cos_sign_request(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_894;
  undefined1 *local_890;
  undefined1 auStack_88c [2048];
  undefined1 auStack_8c [132];
  
  iVar1 = (*(code *)PTR_strlen_00561504)(param_1[5]);
  if (iVar1 < 0x7ff) {
    local_890 = auStack_88c;
    local_894 = (*(code *)PTR_apr_snprintf_00560ab0)
                          (auStack_88c,0x800,PTR_LAB_00560984 + 0x5980,param_1[5]);
    iVar1 = (*(code *)PTR_apr_table_get_005609dc)
                      (param_1[6],PTR_COS_CANNONICALIZED_HEADER_DATE_00560cd8);
    if (iVar1 == 0) {
      (*(code *)PTR_cos_get_gmt_str_time_00560cdc)(auStack_8c);
      (*(code *)PTR_apr_table_set_005609f8)(param_1[6],PTR_COS_DATE_00560ce0,auStack_8c);
    }
    if (*param_1 != 0) {
      iVar1 = (*(code *)PTR_apr_table_get_005609dc)(param_1[6],PTR_COS_HOST_00560c18);
      if (iVar1 == 0) {
        (*(code *)PTR_apr_table_set_005609f8)(param_1[6],PTR_COS_HOST_00560c18,*param_1);
      }
    }
    uVar2 = (*(code *)PTR_cos_get_signed_headers_00560ce4)
                      (param_1[0xe],param_2 + 8,param_2 + 0x10,&local_894,param_1);
  }
  else {
    if (2 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (3,PTR_LAB_00560984 + 0x5890,0x9f,PTR_LAB_00560984 + 0x59b4,
                 PTR_LAB_00560984 + 0x5964,param_1[5]);
    }
    uVar2 = 0xfffffc1e;
  }
  return uVar2;
}



// ==== cos_get_thread_num @ 0042cdcc size=108

undefined4 cos_get_thread_num(int param_1)

{
  undefined4 uVar1;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 8) < 1)) || (0x400 < *(int *)(param_1 + 8))) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}



// ==== cos_get_checkpoint_path @ 0042ce38 size=412

void cos_get_checkpoint_path(int param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (((param_4 != (undefined4 *)0x0) && (param_1 != 0)) && (*(int *)(param_1 + 0xc) != 0)) {
    iVar1 = (*(code *)(PTR_LAB_00560cb0 + -0x32f8))(param_1 + 0x10);
    if (iVar1 == 0) {
      param_4[1] = *(undefined4 *)(param_1 + 0x14);
      *param_4 = *(undefined4 *)(param_1 + 0x10);
    }
    else {
      iVar1 = *param_2 + 4;
      uVar2 = (*(code *)PTR_apr_palloc_00560a74)(param_3,iVar1);
      uVar2 = (*(code *)PTR_memset_00561588)(uVar2,0,iVar1);
      (*(code *)PTR_apr_snprintf_00560ab0)
                (uVar2,iVar1,PTR_LAB_00560984 + 0x59d0,*param_2,param_2[1]);
      uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
      *param_4 = uVar3;
      param_4[1] = uVar2;
    }
  }
  return;
}



// ==== cos_get_file_info @ 0042cfd4 size=556

int cos_get_file_info(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 auStack_114 [256];
  undefined4 local_14 [2];
  
  iVar1 = (*(code *)PTR_apr_file_open_00560aec)
                    (local_14,*(undefined4 *)(param_1 + 4),1,0x440,param_2);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_apr_file_info_get_00560af0)(param_3,0x73b170,local_14[0]);
    if (iVar1 == 0) {
      (*(code *)PTR_apr_file_close_00560ac8)(local_14[0]);
      iVar1 = 0;
    }
    else {
      (*(code *)PTR_apr_file_close_00560ac8)(local_14[0]);
      if (2 < *(uint *)PTR_cos_log_level_005609ac) {
        pcVar3 = *(code **)PTR_cos_log_format_005609b0;
        uVar2 = (*(code *)PTR_apr_strerror_00560a84)(iVar1,auStack_114,0x100);
        (*pcVar3)(3,PTR_LAB_00560984 + 23000,0x36,PTR_LAB_00560984 + 0x5b20,
                  PTR_LAB_00560984 + 0x5a0c,iVar1,uVar2);
      }
    }
  }
  else if (2 < *(uint *)PTR_cos_log_level_005609ac) {
    pcVar3 = *(code **)PTR_cos_log_format_005609b0;
    uVar2 = (*(code *)PTR_apr_strerror_00560a84)(iVar1,auStack_114,0x100);
    (*pcVar3)(3,PTR_LAB_00560984 + 23000,0x2f,PTR_LAB_00560984 + 0x5b20,PTR_LAB_00560984 + 0x59e8,
              iVar1,uVar2);
  }
  return iVar1;
}



// ==== cos_does_file_exist @ 0042d200 size=184

bool cos_does_file_exist(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = (*(code *)PTR_apr_file_open_00560aec)
                    (&local_c,*(undefined4 *)(param_1 + 4),1,0x440,param_2);
  if (iVar1 == 0) {
    (*(code *)PTR_apr_file_close_00560ac8)(local_c);
  }
  return iVar1 == 0;
}



// ==== cos_open_checkpoint_file @ 0042d2b8 size=300

int cos_open_checkpoint_file(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 local_114;
  undefined1 auStack_110 [260];
  
  iVar1 = (*(code *)PTR_apr_file_open_00560aec)
                    (&local_114,*(undefined4 *)(param_2 + 4),6,0x640,param_1);
  if (iVar1 == 0) {
    if (2 < *(uint *)PTR_cos_log_level_005609ac) {
      pcVar3 = *(code **)PTR_cos_log_format_005609b0;
      uVar2 = (*(code *)PTR_apr_strerror_00560a84)(0,auStack_110,0x100);
      (*pcVar3)(3,PTR_LAB_00560984 + 23000,0x53,PTR_LAB_00560984 + 0x5b34,PTR_LAB_00560984 + 0x5a0c,
                0,uVar2);
    }
    *(undefined4 *)(param_3 + 0xc) = local_114;
  }
  return iVar1;
}



// ==== cos_get_part_num @ 0042d3e4 size=288

int cos_get_part_num(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = (*(code *)PTR___moddi3_00560c94)(param_1,param_2,param_3,param_4);
  iVar1 = (*(code *)PTR___divdi3_00560c98)(param_1,param_2,param_3,param_4);
  return iVar1 + (uint)(lVar2 != 0);
}



// ==== cos_build_parts @ 0042d504 size=544

void cos_build_parts(uint param_1,int param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_10;
  
  local_10 = 0;
  while( true ) {
    iVar4 = (int)local_10 >> 0x1f;
    iVar1 = param_3 * iVar4 + param_4 * local_10 +
            (int)((ulonglong)param_3 * (ulonglong)local_10 >> 0x20);
    if ((param_2 <= iVar1) &&
       ((param_2 != iVar1 || (param_1 <= (uint)((ulonglong)param_3 * (ulonglong)local_10))))) break;
    *(uint *)(param_5 + local_10 * 0x28) = local_10;
    iVar1 = param_5 + local_10 * 0x28;
    *(int *)(iVar1 + 8) = (int)((ulonglong)param_3 * (ulonglong)local_10);
    *(uint *)(iVar1 + 0xc) =
         param_3 * iVar4 + param_4 * local_10 +
         (int)((ulonglong)param_3 * (ulonglong)local_10 >> 0x20);
    iVar2 = param_5 + local_10 * 0x28;
    uVar3 = param_1 - (int)((ulonglong)param_3 * (ulonglong)local_10);
    iVar1 = (param_2 -
            (param_3 * iVar4 + param_4 * local_10 +
            (int)((ulonglong)param_3 * (ulonglong)local_10 >> 0x20))) - (uint)(param_1 < uVar3);
    if ((param_4 < iVar1) || ((iVar1 == param_4 && (param_3 < uVar3)))) {
      uVar3 = param_3;
      iVar1 = param_4;
    }
    *(uint *)(iVar2 + 0x10) = uVar3;
    *(int *)(iVar2 + 0x14) = iVar1;
    *(undefined4 *)(param_5 + local_10 * 0x28 + 0x18) = 0;
    local_10 = local_10 + 1;
  }
  return;
}



// ==== cos_build_thread_params @ 0042d724 size=920

void cos_build_thread_params
               (int param_1,int param_2,undefined4 param_3,int *param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,int param_10)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int local_18;
  undefined4 local_c;
  
  local_c = 0;
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    (*(code *)PTR_apr_pool_create_ex_005609cc)(&local_c,param_3,0,0);
    puVar1 = (undefined4 *)(*(code *)PTR_cos_config_create_005609a4)(local_c);
    uVar2 = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(*param_4 + 4));
    *puVar1 = uVar2;
    puVar1[1] = *(undefined4 *)(*param_4 + 4);
    uVar2 = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(*param_4 + 0xc));
    puVar1[2] = uVar2;
    puVar1[3] = *(undefined4 *)(*param_4 + 0xc);
    uVar2 = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(*param_4 + 0x14));
    puVar1[4] = uVar2;
    puVar1[5] = *(undefined4 *)(*param_4 + 0x14);
    uVar2 = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(*param_4 + 0x1c));
    puVar1[6] = uVar2;
    puVar1[7] = *(undefined4 *)(*param_4 + 0x1c);
    puVar1[10] = *(undefined4 *)(*param_4 + 0x28);
    uVar2 = (*(code *)PTR_cos_http_controller_create_005609a8)(local_c,0);
    *(undefined4 **)(param_1 + local_18 * 0x38) = puVar1;
    *(undefined4 *)(param_1 + local_18 * 0x38 + 4) = uVar2;
    *(undefined4 *)(param_1 + local_18 * 0x38 + 8) = local_c;
    *(undefined4 *)(param_1 + local_18 * 0x38 + 0xc) = param_5;
    *(undefined4 *)(param_1 + local_18 * 0x38 + 0x10) = param_6;
    *(undefined4 *)(param_1 + local_18 * 0x38 + 0x18) = param_7;
    *(undefined4 *)(param_1 + local_18 * 0x38 + 0x14) = param_8;
    *(int *)(param_1 + local_18 * 0x38 + 0x1c) = param_9 + local_18 * 0x28;
    *(int *)(param_1 + local_18 * 0x38 + 0x20) = param_10 + local_18 * 0x10;
    **(undefined4 **)(param_1 + local_18 * 0x38 + 0x20) =
         *(undefined4 *)(param_1 + local_18 * 0x38 + 0x1c);
  }
  return;
}



// ==== cos_build_copy_thread_params @ 0042dabc size=920

void cos_build_copy_thread_params
               (int param_1,int param_2,undefined4 param_3,int *param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,int param_10)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int local_18;
  undefined4 local_c;
  
  local_c = 0;
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    (*(code *)PTR_apr_pool_create_ex_005609cc)(&local_c,param_3,0,0);
    puVar1 = (undefined4 *)(*(code *)PTR_cos_config_create_005609a4)(local_c);
    uVar2 = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(*param_4 + 4));
    *puVar1 = uVar2;
    puVar1[1] = *(undefined4 *)(*param_4 + 4);
    uVar2 = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(*param_4 + 0xc));
    puVar1[2] = uVar2;
    puVar1[3] = *(undefined4 *)(*param_4 + 0xc);
    uVar2 = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(*param_4 + 0x14));
    puVar1[4] = uVar2;
    puVar1[5] = *(undefined4 *)(*param_4 + 0x14);
    uVar2 = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(*param_4 + 0x1c));
    puVar1[6] = uVar2;
    puVar1[7] = *(undefined4 *)(*param_4 + 0x1c);
    puVar1[10] = *(undefined4 *)(*param_4 + 0x28);
    uVar2 = (*(code *)PTR_cos_http_controller_create_005609a8)(local_c,0);
    *(undefined4 **)(param_1 + local_18 * 0x38) = puVar1;
    *(undefined4 *)(param_1 + local_18 * 0x38 + 4) = uVar2;
    *(undefined4 *)(param_1 + local_18 * 0x38 + 8) = local_c;
    *(undefined4 *)(param_1 + local_18 * 0x38 + 0xc) = param_5;
    *(undefined4 *)(param_1 + local_18 * 0x38 + 0x10) = param_6;
    *(undefined4 *)(param_1 + local_18 * 0x38 + 0x18) = param_7;
    *(undefined4 *)(param_1 + local_18 * 0x38 + 0x14) = param_8;
    *(int *)(param_1 + local_18 * 0x38 + 0x1c) = param_9 + local_18 * 0x28;
    *(int *)(param_1 + local_18 * 0x38 + 0x20) = param_10 + local_18 * 0x10;
    **(undefined4 **)(param_1 + local_18 * 0x38 + 0x20) =
         *(undefined4 *)(param_1 + local_18 * 0x38 + 0x1c);
  }
  return;
}



// ==== cos_destroy_thread_pool @ 0042de54 size=160

void cos_destroy_thread_pool(int param_1,int param_2)

{
  undefined4 local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    (*(code *)PTR_apr_pool_destroy_005609e8)(*(undefined4 *)(param_1 + local_10 * 0x38 + 8));
  }
  return;
}



// ==== cos_destroy_copy_thread_pool @ 0042def4 size=160

void cos_destroy_copy_thread_pool(int param_1,int param_2)

{
  undefined4 local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    (*(code *)PTR_apr_pool_destroy_005609e8)(*(undefined4 *)(param_1 + local_10 * 0x38 + 8));
  }
  return;
}



// ==== cos_set_task_tracker @ 0042df94 size=252

void cos_set_task_tracker
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7)

{
  undefined4 local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    *(undefined4 *)(param_1 + local_10 * 0x38 + 0x24) = param_3;
    *(undefined4 *)(param_1 + local_10 * 0x38 + 0x28) = param_4;
    *(undefined4 *)(param_1 + local_10 * 0x38 + 0x2c) = param_5;
    *(undefined4 *)(param_1 + local_10 * 0x38 + 0x30) = param_6;
    *(undefined4 *)(param_1 + local_10 * 0x38 + 0x34) = param_7;
  }
  return;
}



// ==== cos_set_copy_task_tracker @ 0042e090 size=252

void cos_set_copy_task_tracker
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7)

{
  undefined4 local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    *(undefined4 *)(param_1 + local_10 * 0x38 + 0x24) = param_3;
    *(undefined4 *)(param_1 + local_10 * 0x38 + 0x28) = param_4;
    *(undefined4 *)(param_1 + local_10 * 0x38 + 0x2c) = param_5;
    *(undefined4 *)(param_1 + local_10 * 0x38 + 0x30) = param_6;
    *(undefined4 *)(param_1 + local_10 * 0x38 + 0x34) = param_7;
  }
  return;
}



// ==== cos_verify_checkpoint_md5 @ 0042e18c size=48

undefined4 cos_verify_checkpoint_md5(void)

{
  return 1;
}



// ==== cos_build_upload_checkpoint @ 0042e1bc size=1108

void cos_build_upload_checkpoint
               (undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
               undefined4 param_6,uint param_7,int param_8)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint local_40;
  
  local_40 = 0;
  *(undefined4 *)(param_2 + 8) = 1;
  uVar1 = (*(code *)PTR_cos_pstrdup_00560b2c)(param_1,param_3);
  uVar1 = (*(code *)PTR_strlen_00561504)(uVar1);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  uVar1 = (*(code *)PTR_cos_pstrdup_00560b2c)(param_1,param_3);
  *(undefined4 *)(param_2 + 0x14) = uVar1;
  iVar3 = *(int *)(param_4 + 0x2c);
  *(int *)(param_2 + 0x18) = iVar3;
  *(int *)(param_2 + 0x1c) = iVar3 >> 0x1f;
  uVar1 = *(undefined4 *)(param_4 + 0x44);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_4 + 0x40);
  *(undefined4 *)(param_2 + 0x24) = uVar1;
  uVar1 = (*(code *)PTR_cos_pstrdup_00560b2c)(param_1,param_5);
  uVar1 = (*(code *)PTR_strlen_00561504)(uVar1);
  *(undefined4 *)(param_2 + 0x50) = uVar1;
  uVar1 = (*(code *)PTR_cos_pstrdup_00560b2c)(param_1,param_5);
  *(undefined4 *)(param_2 + 0x54) = uVar1;
  *(uint *)(param_2 + 0x60) = param_7;
  *(int *)(param_2 + 100) = param_8;
  while( true ) {
    iVar6 = (int)local_40 >> 0x1f;
    iVar3 = param_7 * iVar6 + param_8 * local_40 +
            (int)((ulonglong)param_7 * (ulonglong)local_40 >> 0x20);
    iVar2 = (int)*(uint *)(param_4 + 0x2c) >> 0x1f;
    if ((iVar2 <= iVar3) &&
       ((iVar2 != iVar3 ||
        (*(uint *)(param_4 + 0x2c) <= (uint)((ulonglong)param_7 * (ulonglong)local_40))))) break;
    *(uint *)(*(int *)(param_2 + 0x68) + local_40 * 0x28) = local_40;
    iVar3 = *(int *)(param_2 + 0x68) + local_40 * 0x28;
    *(int *)(iVar3 + 8) = (int)((ulonglong)param_7 * (ulonglong)local_40);
    *(uint *)(iVar3 + 0xc) =
         param_7 * iVar6 + param_8 * local_40 +
         (int)((ulonglong)param_7 * (ulonglong)local_40 >> 0x20);
    iVar2 = *(int *)(param_2 + 0x68) + local_40 * 0x28;
    uVar4 = *(uint *)(param_4 + 0x2c);
    uVar5 = uVar4 - (int)((ulonglong)param_7 * (ulonglong)local_40);
    iVar3 = (((int)uVar4 >> 0x1f) -
            (param_7 * iVar6 + param_8 * local_40 +
            (int)((ulonglong)param_7 * (ulonglong)local_40 >> 0x20))) - (uint)(uVar4 < uVar5);
    if ((param_8 < iVar3) || ((iVar3 == param_8 && (param_7 < uVar5)))) {
      uVar5 = param_7;
      iVar3 = param_8;
    }
    *(uint *)(iVar2 + 0x10) = uVar5;
    *(int *)(iVar2 + 0x14) = iVar3;
    *(undefined4 *)(*(int *)(param_2 + 0x68) + local_40 * 0x28 + 0x18) = 0;
    *(undefined4 *)(*(int *)(param_2 + 0x68) + local_40 * 0x28 + 0x1c) = 0;
    *(undefined **)(*(int *)(param_2 + 0x68) + local_40 * 0x28 + 0x20) = PTR_LAB_00560984 + 0x5a34;
    local_40 = local_40 + 1;
  }
  *(uint *)(param_2 + 0x58) = local_40;
  return;
}



// ==== cos_dump_checkpoint @ 0042e610 size=764

undefined4 cos_dump_checkpoint(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined1 auStack_118 [256];
  undefined4 local_18 [3];
  
  iVar1 = (*(code *)PTR_cos_build_checkpoint_xml_00560ce8)(param_1,param_2);
  if (iVar1 == 0) {
    uVar4 = 0xfffffc18;
  }
  else {
    iVar2 = (*(code *)PTR_apr_file_trunc_00560cec)(*(undefined4 *)(param_2 + 0xc),0);
    if (iVar2 == 0) {
      local_18[0] = (*(code *)PTR_strlen_00561504)(iVar1);
      iVar1 = (*(code *)PTR_apr_file_write_00560a94)(*(undefined4 *)(param_2 + 0xc),iVar1,local_18);
      if (iVar1 == 0) {
        iVar1 = (*(code *)PTR_apr_file_flush_00560cf0)(*(undefined4 *)(param_2 + 0xc));
        if (iVar1 == 0) {
          uVar4 = 0;
        }
        else {
          if (2 < *(uint *)PTR_cos_log_level_005609ac) {
            pcVar3 = *(code **)PTR_cos_log_format_005609b0;
            uVar4 = (*(code *)PTR_apr_strerror_00560a84)(iVar1,auStack_118,0x100);
            (*pcVar3)(3,PTR_LAB_00560984 + 23000,0x114,PTR_LAB_00560984 + 0x5b50,
                      PTR_LAB_00560984 + 0x5a5c,iVar1,uVar4);
          }
          uVar4 = 0xfffffc2f;
        }
      }
      else {
        if (2 < *(uint *)PTR_cos_log_level_005609ac) {
          pcVar3 = *(code **)PTR_cos_log_format_005609b0;
          uVar4 = (*(code *)PTR_apr_strerror_00560a84)(iVar1,auStack_118,0x100);
          (*pcVar3)(3,PTR_LAB_00560984 + 23000,0x10d,PTR_LAB_00560984 + 0x5b50,
                    PTR_LAB_00560984 + 0x5a38,iVar1,uVar4);
        }
        uVar4 = 0xfffffc2b;
      }
    }
    else {
      if (2 < *(uint *)PTR_cos_log_level_005609ac) {
        pcVar3 = *(code **)PTR_cos_log_format_005609b0;
        uVar4 = (*(code *)PTR_apr_strerror_00560a84)(iVar2,auStack_118,0x100);
        (*pcVar3)(3,PTR_LAB_00560984 + 23000,0x105,PTR_LAB_00560984 + 0x5b50,
                  PTR_LAB_00560984 + 0x5a38,iVar2,uVar4);
      }
      uVar4 = 0xfffffc30;
    }
  }
  return uVar4;
}



// ==== cos_load_checkpoint @ 0042e90c size=892

undefined4 cos_load_checkpoint(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined1 auStack_180 [256];
  int local_80 [2];
  undefined1 auStack_78 [44];
  int local_4c;
  undefined4 local_18 [3];
  
  iVar1 = (*(code *)PTR_apr_file_open_00560aec)
                    (local_18,*(undefined4 *)(param_2 + 4),1,0x440,param_1);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_apr_file_info_get_00560af0)(auStack_78,0x73b170,local_18[0]);
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_apr_palloc_00560a74)(param_1,local_4c + 1);
      iVar3 = (*(code *)PTR_apr_file_read_full_00560cf4)(local_18[0],iVar1,local_4c,local_80);
      if (iVar3 == 0) {
        (*(code *)PTR_apr_file_close_00560ac8)(local_18[0]);
        *(undefined1 *)(iVar1 + local_80[0]) = 0;
        uVar2 = (*(code *)PTR_cos_checkpoint_parse_from_body_00560cf8)(param_1,iVar1,param_3);
      }
      else {
        if (2 < *(uint *)PTR_cos_log_level_005609ac) {
          pcVar4 = *(code **)PTR_cos_log_format_005609b0;
          uVar2 = (*(code *)PTR_apr_strerror_00560a84)(iVar3,auStack_180,0x100);
          (*pcVar4)(3,PTR_LAB_00560984 + 23000,0x138,PTR_LAB_00560984 + 0x5b64,
                    PTR_LAB_00560984 + 0x5a80,iVar3,uVar2);
        }
        (*(code *)PTR_apr_file_close_00560ac8)(local_18[0]);
        uVar2 = 0xfffffc2a;
      }
    }
    else {
      if (2 < *(uint *)PTR_cos_log_level_005609ac) {
        pcVar4 = *(code **)PTR_cos_log_format_005609b0;
        uVar2 = (*(code *)PTR_apr_strerror_00560a84)(iVar1,auStack_180,0x100);
        (*pcVar4)(3,PTR_LAB_00560984 + 23000,0x12e,PTR_LAB_00560984 + 0x5b64,
                  PTR_LAB_00560984 + 0x5a0c,iVar1,uVar2);
      }
      (*(code *)PTR_apr_file_close_00560ac8)(local_18[0]);
      uVar2 = 0xfffffc29;
    }
  }
  else {
    if (2 < *(uint *)PTR_cos_log_level_005609ac) {
      pcVar4 = *(code **)PTR_cos_log_format_005609b0;
      uVar2 = (*(code *)PTR_apr_strerror_00560a84)(iVar1,auStack_180,0x100);
      (*pcVar4)(3,PTR_LAB_00560984 + 23000,0x127,PTR_LAB_00560984 + 0x5b64,PTR_LAB_00560984 + 0x59e8
                ,iVar1,uVar2);
    }
    uVar2 = 0xfffffc27;
  }
  return uVar2;
}



// ==== cos_is_upload_checkpoint_valid @ 0042ec88 size=248

undefined4 cos_is_upload_checkpoint_valid(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_cos_verify_checkpoint_md5_00560cfc)(param_1,param_2);
  if (iVar1 != 0) {
    if ((*(int *)(param_2 + 0x18) == *(int *)(param_3 + 0x2c)) &&
       (*(int *)(param_2 + 0x1c) == *(int *)(param_3 + 0x2c) >> 0x1f)) {
      if ((*(int *)(param_2 + 0x20) == *(int *)(param_3 + 0x40)) &&
         (*(int *)(param_2 + 0x24) == *(int *)(param_3 + 0x44))) {
        return 1;
      }
    }
  }
  return 0;
}



// ==== cos_update_checkpoint @ 0042ed80 size=256

void cos_update_checkpoint(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(*(int *)(param_2 + 0x68) + param_3 * 0x28 + 0x18) = 1;
  uVar1 = (*(code *)PTR_apr_pstrdup_00560b3c)(param_1,*(undefined4 *)(param_4 + 4));
  iVar2 = *(int *)(param_2 + 0x68);
  uVar3 = (*(code *)PTR_strlen_00561504)(uVar1);
  *(undefined4 *)(iVar2 + param_3 * 0x28 + 0x1c) = uVar3;
  *(undefined4 *)(*(int *)(param_2 + 0x68) + param_3 * 0x28 + 0x20) = uVar1;
  return;
}



// ==== cos_get_checkpoint_undo_parts @ 0042ee80 size=448

void cos_get_checkpoint_undo_parts(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 0;
  for (local_10 = 0; local_10 < *(int *)(param_1 + 0x58); local_10 = local_10 + 1) {
    if (*(int *)(*(int *)(param_1 + 0x68) + local_10 * 0x28 + 0x18) == 0) {
      *(undefined4 *)(param_3 + local_c * 0x28) =
           *(undefined4 *)(*(int *)(param_1 + 0x68) + local_10 * 0x28);
      iVar1 = param_3 + local_c * 0x28;
      iVar3 = *(int *)(param_1 + 0x68) + local_10 * 0x28;
      uVar2 = *(undefined4 *)(iVar3 + 0xc);
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar3 + 8);
      *(undefined4 *)(iVar1 + 0xc) = uVar2;
      iVar1 = param_3 + local_c * 0x28;
      iVar3 = *(int *)(param_1 + 0x68) + local_10 * 0x28;
      uVar2 = *(undefined4 *)(iVar3 + 0x14);
      *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar3 + 0x10);
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
      *(undefined4 *)(param_3 + local_c * 0x28 + 0x18) =
           *(undefined4 *)(*(int *)(param_1 + 0x68) + local_10 * 0x28 + 0x18);
      local_c = local_c + 1;
    }
  }
  *param_2 = local_c;
  return;
}



// ==== cos_resumable_upload_file_without_cp @ 0042f3b8 size=3200

int * cos_resumable_upload_file_without_cp
                (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                undefined4 param_10,int param_11,code *param_12,undefined4 param_13,
                undefined4 param_14)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 local_a0;
  uint local_9c;
  uint local_98;
  int local_94;
  int local_90;
  undefined4 local_5c;
  undefined4 ***local_58;
  undefined4 ***local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30 [2];
  
  local_5c = 0;
  local_a0 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_98 = 0;
  local_94 = 0;
  uVar9 = *(undefined4 *)(param_1 + 8);
  piVar1 = (int *)(*(code *)PTR_cos_status_create_00560b8c)(uVar9);
  uVar2 = (*(code *)PTR_cos_get_part_num_00560d14)
                    (*(int *)(param_11 + 0x2c),*(int *)(param_11 + 0x2c) >> 0x1f,param_9,param_10);
  uVar3 = (*(code *)PTR_apr_palloc_00560a74)(uVar9,uVar2 * 0x28);
  (*(code *)PTR_cos_build_parts_00560d18)
            (*(int *)(param_11 + 0x2c),*(int *)(param_11 + 0x2c) >> 0x1f,param_9,param_10,uVar3);
  uVar4 = (*(code *)PTR_apr_palloc_00560a74)(uVar9,uVar2 << 4);
  iVar5 = (*(code *)PTR_apr_palloc_00560a74)(uVar9,uVar2 * 0x38);
  (*(code *)PTR_cos_build_thread_params_00560d1c)
            (iVar5,uVar2,uVar9,param_1,param_2,param_3,param_4,&local_50,uVar3,uVar4);
  (*(code *)PTR_apr_pool_create_ex_005609cc)(&local_5c,uVar9,0,0);
  *(undefined4 *)(param_1 + 8) = local_5c;
  uVar3 = (*(code *)PTR_cos_init_multipart_upload_00560d20)
                    (param_1,param_2,param_3,&local_50,param_5,param_13);
  iVar6 = (*(code *)(PTR_LAB_00560cb0 + -0x3294))(uVar3);
  if (iVar6 == 0) {
    piVar1 = (int *)(*(code *)PTR_cos_status_dup_00560be8)(uVar9,uVar3);
    (*(code *)PTR_apr_pool_destroy_005609e8)(local_5c);
    *(undefined4 *)(param_1 + 8) = uVar9;
  }
  else {
    uVar3 = (*(code *)PTR_apr_pstrdup_00560b3c)(uVar9,local_4c);
    local_50 = (*(code *)PTR_strlen_00561504)(uVar3);
    local_4c = (*(code *)PTR_apr_pstrdup_00560b3c)(uVar9,local_4c);
    *(undefined4 *)(param_1 + 8) = uVar9;
    (*(code *)PTR_apr_pool_destroy_005609e8)(local_5c);
    iVar6 = (*(code *)PTR_apr_thread_pool_create_00560d24)(&local_48,0,param_7,uVar9);
    if (iVar6 == 0) {
      iVar6 = (*(code *)PTR_apr_queue_create_00560d2c)(&local_38,uVar2,uVar9);
      if (iVar6 == 0) {
        iVar6 = (*(code *)PTR_apr_queue_create_00560d2c)(&local_34,uVar2,uVar9);
        if (iVar6 == 0) {
          (*(code *)PTR_cos_set_task_tracker_00560d34)
                    (iVar5,uVar2,&local_44,&local_40,&local_3c,local_38,local_34);
          for (local_90 = 0; local_90 < (int)uVar2; local_90 = local_90 + 1) {
            (*(code *)PTR_apr_thread_pool_push_00560d3c)
                      (local_48,PTR_upload_part_00560d38,iVar5 + local_90 * 0x38,0,0);
          }
          iVar6 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_44);
          iVar7 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_40);
          iVar8 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_3c);
          local_9c = iVar6 + iVar7 + iVar8;
          while (local_9c < uVar2) {
            iVar6 = (*(code *)PTR_apr_queue_trypop_00560d40)(local_34,local_30);
            if ((iVar6 == 4) || (iVar6 == 0xb)) {
              (*(code *)PTR_apr_sleep_00560d44)(1000,0);
            }
            else {
              if (iVar6 == 0x1117e) break;
              if ((iVar6 == 0) && (param_12 != (code *)0x0)) {
                uVar10 = local_98 + *(int *)(*local_30[0] + 0x10);
                local_94 = (uint)(uVar10 < local_98) + local_94 + *(int *)(*local_30[0] + 0x14);
                (*param_12)(uVar10,local_94,*(int *)(param_11 + 0x2c),
                            *(int *)(param_11 + 0x2c) >> 0x1f);
                local_98 = uVar10;
              }
            }
            iVar6 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_44);
            iVar7 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_40);
            iVar8 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_3c);
            local_9c = iVar6 + iVar7 + iVar8;
          }
          while (iVar6 = (*(code *)PTR_apr_queue_trypop_00560d40)(local_34,local_30), iVar6 == 0) {
            if (param_12 != (code *)0x0) {
              uVar10 = local_98 + *(int *)(*local_30[0] + 0x10);
              local_94 = (uint)(uVar10 < local_98) + local_94 + *(int *)(*local_30[0] + 0x14);
              (*param_12)(uVar10,local_94,*(int *)(param_11 + 0x2c),
                          *(int *)(param_11 + 0x2c) >> 0x1f);
              local_98 = uVar10;
            }
          }
          iVar6 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_40);
          if (iVar6 == 0) {
            (*(code *)PTR_apr_pool_create_ex_005609cc)(&local_5c,uVar9,0,0);
            local_58 = &local_58;
            local_54 = &local_58;
            for (local_90 = 0; local_90 < (int)uVar2; local_90 = local_90 + 1) {
              iVar6 = (*(code *)PTR_cos_create_complete_part_content_00560d50)(local_5c);
              uVar3 = (*(code *)PTR_apr_psprintf_005609f4)
                                (local_5c,PTR_LAB_00560984 + 0x5ab0,
                                 **(int **)(iVar5 + local_90 * 0x38 + 0x1c) + 1);
              uVar4 = (*(code *)PTR_strlen_00561504)(uVar3);
              *(undefined4 *)(iVar6 + 8) = uVar4;
              *(undefined4 *)(iVar6 + 0xc) = uVar3;
              uVar3 = (*(code *)PTR_apr_pstrdup_00560b3c)
                                (local_5c,*(undefined4 *)
                                           (*(int *)(iVar5 + local_90 * 0x38 + 0x20) + 0xc));
              uVar4 = (*(code *)PTR_strlen_00561504)(uVar3);
              *(undefined4 *)(iVar6 + 0x10) = uVar4;
              *(undefined4 *)(iVar6 + 0x14) = uVar3;
              (*(code *)(PTR_LAB_00560cb0 + -0x3364))(iVar6,&local_58);
            }
            (*(code *)PTR_cos_destroy_thread_pool_00560d4c)(iVar5,uVar2);
            *(undefined4 *)(param_1 + 8) = local_5c;
            if ((param_5 != 0) &&
               (iVar5 = (*(code *)PTR_apr_table_get_005609dc)(param_5,PTR_COS_CALLBACK_00560d54),
               iVar5 != 0)) {
              local_a0 = (*(code *)PTR_apr_table_make_005609d0)(local_5c,2);
              uVar3 = (*(code *)PTR_apr_table_get_005609dc)(param_5,PTR_COS_CALLBACK_00560d54);
              (*(code *)PTR_apr_table_set_005609f8)(local_a0,PTR_COS_CALLBACK_00560d54,uVar3);
              iVar5 = (*(code *)PTR_apr_table_get_005609dc)(param_5,PTR_COS_CALLBACK_VAR_00560d58);
              if (iVar5 != 0) {
                uVar3 = (*(code *)PTR_apr_table_get_005609dc)(param_5,PTR_COS_CALLBACK_VAR_00560d58)
                ;
                (*(code *)PTR_apr_table_set_005609f8)(local_a0,PTR_COS_CALLBACK_VAR_00560d58,uVar3);
              }
            }
            uVar3 = (*(code *)PTR_cos_do_complete_multipart_upload_00560d5c)
                              (param_1,param_2,param_3,&local_50,&local_58,local_a0,0,param_13,
                               param_14);
            piVar1 = (int *)(*(code *)PTR_cos_status_dup_00560be8)(uVar9,uVar3);
            (*(code *)PTR_apr_pool_destroy_005609e8)(local_5c);
            *(undefined4 *)(param_1 + 8) = uVar9;
          }
          else {
            (*(code *)PTR_apr_queue_pop_00560d48)(local_38,local_30);
            piVar1 = (int *)(*(code *)PTR_cos_status_dup_00560be8)(uVar9,local_30[0][1]);
            (*(code *)PTR_cos_destroy_thread_pool_00560d4c)(iVar5,uVar2);
          }
        }
        else {
          *piVar1 = iVar6;
          piVar1[1] = (int)PTR_COS_CREATE_QUEUE_ERROR_CODE_00560d30;
          piVar1[2] = 0;
        }
      }
      else {
        *piVar1 = iVar6;
        piVar1[1] = (int)PTR_COS_CREATE_QUEUE_ERROR_CODE_00560d30;
        piVar1[2] = 0;
      }
    }
    else {
      *piVar1 = iVar6;
      piVar1[1] = (int)PTR_COS_CREATE_THREAD_POOL_ERROR_CODE_00560d28;
      piVar1[2] = 0;
    }
  }
  return piVar1;
}



// ==== cos_resumable_upload_file_with_cp @ 00430038 size=4092

int * cos_resumable_upload_file_with_cp
                (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                undefined4 param_10,int param_11,int param_12,code *param_13,undefined4 param_14,
                undefined4 param_15)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 local_a0;
  uint local_9c;
  uint local_90;
  int local_8c;
  int local_88;
  undefined4 local_54;
  undefined4 *****local_50;
  undefined4 *****local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int *local_28;
  uint local_24 [2];
  
  local_54 = 0;
  local_a0 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  bVar1 = true;
  bVar2 = false;
  local_90 = 0;
  local_8c = 0;
  local_24[0] = 0;
  uVar12 = *(undefined4 *)(param_1 + 8);
  piVar4 = (int *)(*(code *)PTR_cos_status_create_00560b8c)(uVar12);
  iVar5 = (*(code *)PTR_cos_create_checkpoint_content_00560d60)(uVar12);
  iVar6 = (*(code *)PTR_cos_does_file_exist_00560d64)(param_11,uVar12);
  if (iVar6 != 0) {
    iVar6 = (*(code *)PTR_cos_load_checkpoint_00560d68)(uVar12,param_11,iVar5);
    if ((iVar6 == 0) &&
       (iVar6 = (*(code *)PTR_cos_is_upload_checkpoint_valid_00560d6c)(uVar12,iVar5,param_12),
       iVar6 != 0)) {
      local_48 = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(iVar5 + 0x54));
      local_44 = *(undefined4 *)(iVar5 + 0x54);
      bVar1 = false;
    }
    else {
      (*(code *)PTR_apr_file_remove_00560cbc)(*(undefined4 *)(param_11 + 4),uVar12);
    }
  }
  if (bVar1) {
    (*(code *)PTR_apr_pool_create_ex_005609cc)(&local_54,uVar12,0,0);
    *(undefined4 *)(param_1 + 8) = local_54;
    uVar8 = param_14;
    uVar7 = (*(code *)PTR_cos_init_multipart_upload_00560d20)
                      (param_1,param_2,param_3,&local_48,param_5,param_14);
    iVar6 = (*(code *)(PTR_LAB_00560cb0 + -0x3294))(uVar7);
    if (iVar6 == 0) {
      piVar4 = (int *)(*(code *)PTR_cos_status_dup_00560be8)(uVar12,uVar7);
      (*(code *)PTR_apr_pool_destroy_005609e8)(local_54);
      *(undefined4 *)(param_1 + 8) = uVar12;
      return piVar4;
    }
    uVar7 = (*(code *)PTR_apr_pstrdup_00560b3c)(uVar12,local_44);
    local_48 = (*(code *)PTR_strlen_00561504)(uVar7);
    local_44 = (*(code *)PTR_apr_pstrdup_00560b3c)(uVar12,local_44);
    *(undefined4 *)(param_1 + 8) = uVar12;
    (*(code *)PTR_apr_pool_destroy_005609e8)(local_54);
    (*(code *)PTR_cos_build_upload_checkpoint_00560d70)
              (uVar12,iVar5,param_4,param_12,&local_48,uVar8,param_9,param_10);
  }
  iVar6 = (*(code *)PTR_cos_open_checkpoint_file_00560d74)(uVar12,param_11,iVar5);
  if (iVar6 == 0) {
    piVar4 = (int *)(*(code *)PTR_cos_status_create_00560b8c)(uVar12);
    uVar8 = (*(code *)PTR_apr_palloc_00560a74)(uVar12,*(int *)(iVar5 + 0x58) * 0x28);
    (*(code *)PTR_cos_get_checkpoint_undo_parts_00560d78)(iVar5,local_24,uVar8);
    uVar7 = (*(code *)PTR_apr_palloc_00560a74)(uVar12,local_24[0] << 4);
    iVar6 = (*(code *)PTR_apr_palloc_00560a74)(uVar12,local_24[0] * 0x38);
    (*(code *)PTR_cos_build_thread_params_00560d1c)
              (iVar6,local_24[0],uVar12,param_1,param_2,param_3,param_4,&local_48,uVar8,uVar7);
    iVar9 = (*(code *)PTR_apr_thread_pool_create_00560d24)(&local_40,0,param_7,uVar12);
    if (iVar9 == 0) {
      iVar9 = (*(code *)PTR_apr_queue_create_00560d2c)(&local_30,local_24[0],uVar12);
      if (iVar9 == 0) {
        iVar9 = (*(code *)PTR_apr_queue_create_00560d2c)(&local_2c,local_24[0],uVar12);
        if (iVar9 == 0) {
          (*(code *)PTR_cos_set_task_tracker_00560d34)
                    (iVar6,local_24[0],&local_3c,&local_38,&local_34,local_30,local_2c);
          for (local_88 = 0; local_88 < (int)local_24[0]; local_88 = local_88 + 1) {
            (*(code *)PTR_apr_thread_pool_push_00560d3c)
                      (local_40,PTR_upload_part_00560d38,iVar6 + local_88 * 0x38,0,0);
          }
          iVar9 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_3c);
          iVar10 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_38);
          iVar11 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_34);
          local_9c = iVar9 + iVar10 + iVar11;
          while (local_9c < local_24[0]) {
            iVar9 = (*(code *)PTR_apr_queue_trypop_00560d40)(local_2c,&local_28);
            piVar3 = local_28;
            if ((iVar9 == 4) || (iVar9 == 0xb)) {
              (*(code *)PTR_apr_sleep_00560d44)(1000,0);
            }
            else {
              if (iVar9 == 0x1117e) break;
              if (iVar9 == 0) {
                (*(code *)PTR_cos_update_checkpoint_00560d7c)
                          (uVar12,iVar5,*(undefined4 *)*local_28,local_28 + 2);
                iVar9 = (*(code *)PTR_cos_dump_checkpoint_00560d80)(uVar12,iVar5);
                if (iVar9 != 0) {
                  iVar10 = *(int *)*piVar3;
                  *piVar4 = iVar9;
                  piVar4[1] = (int)PTR_COS_WRITE_FILE_ERROR_CODE_00560d84;
                  piVar4[2] = 0;
                  (*(code *)PTR_apr_atomic_inc32_00560d04)(&local_38);
                  *(int **)(*(int *)(iVar6 + iVar10 * 0x38 + 0x20) + 4) = piVar4;
                  (*(code *)PTR_apr_queue_push_00560d10)
                            (local_30,*(undefined4 *)(iVar6 + iVar10 * 0x38 + 0x20));
                }
                if (param_13 != (code *)0x0) {
                  iVar9 = *piVar3;
                  uVar13 = local_90 + *(int *)(iVar9 + 0x10);
                  local_8c = (uint)(uVar13 < local_90) + local_8c + *(int *)(iVar9 + 0x14);
                  (*param_13)(uVar13,local_8c,*(int *)(param_12 + 0x2c),
                              *(int *)(param_12 + 0x2c) >> 0x1f);
                  local_90 = uVar13;
                }
              }
            }
            iVar9 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_3c);
            iVar10 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_38);
            iVar11 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_34);
            local_9c = iVar9 + iVar10 + iVar11;
          }
          while (iVar9 = (*(code *)PTR_apr_queue_trypop_00560d40)(local_2c,&local_28),
                piVar3 = local_28, iVar9 == 0) {
            (*(code *)PTR_cos_update_checkpoint_00560d7c)
                      (uVar12,iVar5,*(undefined4 *)*local_28,local_28 + 2);
            uVar13 = local_90 + *(int *)(*piVar3 + 0x10);
            local_8c = (uint)(uVar13 < local_90) + local_8c + *(int *)(*piVar3 + 0x14);
            bVar2 = true;
            local_90 = uVar13;
          }
          if (bVar2) {
            iVar9 = (*(code *)PTR_cos_dump_checkpoint_00560d80)(uVar12,iVar5);
            if (iVar9 != 0) {
              *piVar4 = iVar9;
              piVar4[1] = (int)PTR_COS_WRITE_FILE_ERROR_CODE_00560d84;
              piVar4[2] = 0;
              return piVar4;
            }
            if (param_13 != (code *)0x0) {
              (*param_13)(local_90,local_8c,*(int *)(param_12 + 0x2c),
                          *(int *)(param_12 + 0x2c) >> 0x1f);
            }
          }
          (*(code *)PTR_apr_file_close_00560ac8)(*(undefined4 *)(iVar5 + 0xc));
          iVar9 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_38);
          if (iVar9 == 0) {
            (*(code *)PTR_apr_pool_create_ex_005609cc)(&local_54,uVar12,0,0);
            local_50 = &local_50;
            local_4c = &local_50;
            for (local_88 = 0; local_88 < *(int *)(iVar5 + 0x58); local_88 = local_88 + 1) {
              iVar9 = (*(code *)PTR_cos_create_complete_part_content_00560d50)(local_54);
              uVar8 = (*(code *)PTR_apr_psprintf_005609f4)
                                (local_54,PTR_LAB_00560984 + 0x5ab0,
                                 *(int *)(*(int *)(iVar5 + 0x68) + local_88 * 0x28) + 1);
              uVar7 = (*(code *)PTR_strlen_00561504)(uVar8);
              *(undefined4 *)(iVar9 + 8) = uVar7;
              *(undefined4 *)(iVar9 + 0xc) = uVar8;
              uVar8 = (*(code *)PTR_strlen_00561504)
                                (*(undefined4 *)(*(int *)(iVar5 + 0x68) + local_88 * 0x28 + 0x20));
              *(undefined4 *)(iVar9 + 0x10) = uVar8;
              *(undefined4 *)(iVar9 + 0x14) =
                   *(undefined4 *)(*(int *)(iVar5 + 0x68) + local_88 * 0x28 + 0x20);
              (*(code *)(PTR_LAB_00560cb0 + -0x3364))(iVar9,&local_50);
            }
            (*(code *)PTR_cos_destroy_thread_pool_00560d4c)(iVar6,local_24[0]);
            *(undefined4 *)(param_1 + 8) = local_54;
            if ((param_5 != 0) &&
               (iVar5 = (*(code *)PTR_apr_table_get_005609dc)(param_5,PTR_COS_CALLBACK_00560d54),
               iVar5 != 0)) {
              local_a0 = (*(code *)PTR_apr_table_make_005609d0)(local_54,2);
              uVar8 = (*(code *)PTR_apr_table_get_005609dc)(param_5,PTR_COS_CALLBACK_00560d54);
              (*(code *)PTR_apr_table_set_005609f8)(local_a0,PTR_COS_CALLBACK_00560d54,uVar8);
              iVar5 = (*(code *)PTR_apr_table_get_005609dc)(param_5,PTR_COS_CALLBACK_VAR_00560d58);
              if (iVar5 != 0) {
                uVar8 = (*(code *)PTR_apr_table_get_005609dc)(param_5,PTR_COS_CALLBACK_VAR_00560d58)
                ;
                (*(code *)PTR_apr_table_set_005609f8)(local_a0,PTR_COS_CALLBACK_VAR_00560d58,uVar8);
              }
            }
            uVar8 = (*(code *)PTR_cos_do_complete_multipart_upload_00560d5c)
                              (param_1,param_2,param_3,&local_48,&local_50,local_a0,0,param_14,
                               param_15);
            piVar4 = (int *)(*(code *)PTR_cos_status_dup_00560be8)(uVar12,uVar8);
            (*(code *)PTR_apr_pool_destroy_005609e8)(local_54);
            *(undefined4 *)(param_1 + 8) = uVar12;
            (*(code *)PTR_apr_file_remove_00560cbc)(*(undefined4 *)(param_11 + 4),uVar12);
          }
          else {
            (*(code *)PTR_apr_queue_pop_00560d48)(local_30,&local_28);
            piVar4 = (int *)(*(code *)PTR_cos_status_dup_00560be8)(uVar12,local_28[1]);
            (*(code *)PTR_cos_destroy_thread_pool_00560d4c)(iVar6,local_24[0]);
          }
        }
        else {
          *piVar4 = iVar9;
          piVar4[1] = (int)PTR_COS_CREATE_QUEUE_ERROR_CODE_00560d30;
          piVar4[2] = 0;
        }
      }
      else {
        *piVar4 = iVar9;
        piVar4[1] = (int)PTR_COS_CREATE_QUEUE_ERROR_CODE_00560d30;
        piVar4[2] = 0;
      }
    }
    else {
      *piVar4 = iVar9;
      piVar4[1] = (int)PTR_COS_CREATE_THREAD_POOL_ERROR_CODE_00560d28;
      piVar4[2] = 0;
    }
  }
  else {
    *piVar4 = iVar6;
    piVar4[1] = (int)PTR_COS_OPEN_FILE_ERROR_CODE_00560b94;
    piVar4[2] = 0;
  }
  return piVar4;
}



// ==== cos_resumable_upload_file @ 00431034 size=908

int * cos_resumable_upload_file
                (int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                undefined4 param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  int iVar2;
  int *local_98;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_80 [8];
  undefined4 local_78 [2];
  undefined1 auStack_70 [44];
  int local_44;
  
  local_88 = 0;
  local_84 = 0;
  uVar1 = (*(code *)PTR_cos_get_thread_num_00560d88)(param_7);
  (*(code *)PTR_apr_pool_create_ex_005609cc)(local_78,*(undefined4 *)(param_1 + 8),0,0);
  iVar2 = (*(code *)PTR_cos_get_file_info_00560d8c)(param_4,local_78[0],auStack_70);
  if (iVar2 == 0) {
    local_88 = *param_7;
    local_84 = param_7[1];
    (*(code *)PTR_cos_get_part_size_00560d90)(local_44,local_44 >> 0x1f,&local_88);
    if ((param_7 == (undefined4 *)0x0) || (param_7[3] == 0)) {
      local_98 = (int *)(*(code *)PTR_cos_resumable_upload_file_without_cp_00560d9c)
                                  (param_1,param_2,param_3,param_4,param_5,param_6,uVar1);
    }
    else {
      (*(code *)PTR_cos_get_checkpoint_path_00560d94)(param_7,param_4,local_78[0],auStack_80);
      local_98 = (int *)(*(code *)PTR_cos_resumable_upload_file_with_cp_00560d98)
                                  (param_1,param_2,param_3,param_4,param_5,param_6,uVar1);
    }
    (*(code *)PTR_apr_pool_destroy_005609e8)(local_78[0]);
  }
  else {
    if (2 < *(uint *)PTR_cos_log_level_005609ac) {
      (**(code **)PTR_cos_log_format_005609b0)
                (3,PTR_LAB_00560984 + 23000,0x309,PTR_LAB_00560984 + 0x5b78,
                 PTR_LAB_00560984 + 0x5ab4,*(undefined4 *)(param_4 + 4));
    }
    local_98 = (int *)(*(code *)PTR_cos_status_create_00560b8c)(*(undefined4 *)(param_1 + 8));
    *local_98 = iVar2;
    local_98[1] = (int)PTR_COS_OPEN_FILE_ERROR_CODE_00560b94;
    local_98[2] = 0;
    (*(code *)PTR_apr_pool_destroy_005609e8)(local_78[0]);
  }
  return local_98;
}



// ==== cos_upload_object_by_part_copy_mt @ 004317f0 size=3720

int * cos_upload_object_by_part_copy_mt
                (int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,code *param_10)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint local_b0;
  uint local_a8;
  int local_a4;
  int local_a0;
  int local_50;
  undefined4 ***local_4c;
  undefined4 ***local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14 [2];
  
  local_50 = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_a8 = 0;
  local_a4 = 0;
  uVar1 = (*(code *)PTR_apr_psprintf_005609f4)
                    (param_1[2],PTR_LAB_00560984 + 0x5ad8,*param_2,param_2[1],*param_4,param_4[1],
                     *param_3,param_3[1]);
  local_20 = (*(code *)PTR_strlen_00561504)(uVar1);
  local_4c = &local_4c;
  local_48 = &local_4c;
  iVar11 = param_1[2];
  local_1c = uVar1;
  (*(code *)PTR_apr_pool_create_ex_005609cc)(&local_50,param_1[2],0,0);
  param_1[2] = local_50;
  local_18 = 0;
  piVar2 = (int *)(*(code *)PTR_cos_request_options_create_005609a0)(local_50);
  iVar3 = (*(code *)PTR_cos_config_create_005609a4)(local_50);
  *piVar2 = iVar3;
  puVar10 = (undefined4 *)*piVar2;
  uVar1 = (*(code *)PTR_strlen_00561504)(param_4[1]);
  *puVar10 = uVar1;
  *(undefined4 *)(*piVar2 + 4) = param_4[1];
  iVar3 = *piVar2;
  uVar1 = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(*param_1 + 0xc));
  *(undefined4 *)(iVar3 + 8) = uVar1;
  *(undefined4 *)(*piVar2 + 0xc) = *(undefined4 *)(*param_1 + 0xc);
  iVar3 = *piVar2;
  uVar1 = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(*param_1 + 0x14));
  *(undefined4 *)(iVar3 + 0x10) = uVar1;
  *(undefined4 *)(*piVar2 + 0x14) = *(undefined4 *)(*param_1 + 0x14);
  *(undefined4 *)(*piVar2 + 0x18) = 0;
  *(undefined **)(*piVar2 + 0x1c) = PTR_LAB_00560984 + 0x5a34;
  iVar3 = (*(code *)PTR_cos_http_controller_create_005609a8)(local_50,0);
  piVar2[1] = iVar3;
  uVar1 = (*(code *)PTR_cos_head_object_005609d4)(piVar2,param_2,param_3,0,&local_18);
  iVar3 = (*(code *)(PTR_LAB_00560cb0 + -0x3294))(uVar1);
  if (iVar3 == 0) {
    piVar2 = (int *)(*(code *)PTR_cos_status_dup_00560be8)(iVar11,uVar1);
    (*(code *)PTR_apr_pool_destroy_005609e8)(local_50);
    param_1[2] = iVar11;
  }
  else {
    uVar1 = (*(code *)PTR_apr_table_get_005609dc)(local_18,PTR_COS_CONTENT_LENGTH_00560bec);
    iVar3 = (*(code *)PTR_atol_005615c4)(uVar1);
    iVar12 = iVar3 >> 0x1f;
    param_1[2] = iVar11;
    (*(code *)PTR_apr_pool_destroy_005609e8)(local_50);
    piVar2 = (int *)(*(code *)PTR_cos_status_create_00560b8c)(iVar11);
    uVar4 = (*(code *)PTR_cos_get_part_num_00560d14)(iVar3,iVar12,param_7,param_8);
    uVar1 = (*(code *)PTR_apr_palloc_00560a74)(iVar11,uVar4 * 0x28);
    (*(code *)PTR_cos_build_parts_00560d18)(iVar3,iVar12,param_7,param_8,uVar1);
    uVar5 = (*(code *)PTR_apr_palloc_00560a74)(iVar11,uVar4 << 4);
    iVar6 = (*(code *)PTR_apr_palloc_00560a74)(iVar11,uVar4 * 0x38);
    (*(code *)PTR_cos_build_copy_thread_params_00560da8)
              (iVar6,uVar4,iVar11,param_1,param_5,param_6,&local_20,&local_44,uVar1,uVar5);
    (*(code *)PTR_apr_pool_create_ex_005609cc)(&local_50,iVar11,0,0);
    param_1[2] = local_50;
    local_14[0] = 0;
    uVar1 = (*(code *)PTR_cos_init_multipart_upload_00560d20)
                      (param_1,param_5,param_6,&local_44,0,local_14);
    iVar7 = (*(code *)(PTR_LAB_00560cb0 + -0x3294))(uVar1);
    if (iVar7 == 0) {
      piVar2 = (int *)(*(code *)PTR_cos_status_dup_00560be8)(iVar11,uVar1);
      (*(code *)PTR_apr_pool_destroy_005609e8)(local_50);
      param_1[2] = iVar11;
    }
    else {
      uVar1 = (*(code *)PTR_apr_pstrdup_00560b3c)(iVar11,local_40);
      local_44 = (*(code *)PTR_strlen_00561504)(uVar1);
      local_40 = (*(code *)PTR_apr_pstrdup_00560b3c)(iVar11,local_40);
      param_1[2] = iVar11;
      (*(code *)PTR_apr_pool_destroy_005609e8)(local_50);
      iVar7 = (*(code *)PTR_apr_thread_pool_create_00560d24)(&local_3c,0,param_9,iVar11);
      if (iVar7 == 0) {
        iVar7 = (*(code *)PTR_apr_queue_create_00560d2c)(&local_2c,uVar4,iVar11);
        if (iVar7 == 0) {
          iVar7 = (*(code *)PTR_apr_queue_create_00560d2c)(&local_28,uVar4,iVar11);
          if (iVar7 == 0) {
            (*(code *)PTR_cos_set_copy_task_tracker_00560dac)
                      (iVar6,uVar4,&local_38,&local_34,&local_30,local_2c,local_28);
            for (local_a0 = 0; local_a0 < (int)uVar4; local_a0 = local_a0 + 1) {
              (*(code *)PTR_apr_thread_pool_push_00560d3c)
                        (local_3c,PTR_upload_part_copy_00560db0,iVar6 + local_a0 * 0x38,0,0);
            }
            iVar7 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_38);
            iVar8 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_34);
            iVar9 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_30);
            local_b0 = iVar7 + iVar8 + iVar9;
            while (local_b0 < uVar4) {
              iVar7 = (*(code *)PTR_apr_queue_trypop_00560d40)(local_28,&local_24);
              if ((iVar7 == 4) || (iVar7 == 0xb)) {
                (*(code *)PTR_apr_sleep_00560d44)(1000,0);
              }
              else {
                if (iVar7 == 0x1117e) break;
                if ((iVar7 == 0) && (param_10 != (code *)0x0)) {
                  uVar13 = local_a8 + *(int *)(*local_24 + 0x10);
                  local_a4 = (uint)(uVar13 < local_a8) + local_a4 + *(int *)(*local_24 + 0x14);
                  (*param_10)(uVar13,local_a4,iVar3,iVar12);
                  local_a8 = uVar13;
                }
              }
              iVar7 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_38);
              iVar8 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_34);
              iVar9 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_30);
              local_b0 = iVar7 + iVar8 + iVar9;
            }
            while (iVar7 = (*(code *)PTR_apr_queue_trypop_00560d40)(local_28,&local_24), iVar7 == 0)
            {
              if (param_10 != (code *)0x0) {
                uVar13 = local_a8 + *(int *)(*local_24 + 0x10);
                local_a4 = (uint)(uVar13 < local_a8) + local_a4 + *(int *)(*local_24 + 0x14);
                (*param_10)(uVar13,local_a4,iVar3,iVar12);
                local_a8 = uVar13;
              }
            }
            iVar3 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_34);
            if (iVar3 == 0) {
              (*(code *)PTR_apr_pool_create_ex_005609cc)(&local_50,iVar11,0,0);
              local_4c = &local_4c;
              local_48 = &local_4c;
              for (local_a0 = 0; local_a0 < (int)uVar4; local_a0 = local_a0 + 1) {
                iVar3 = (*(code *)PTR_cos_create_complete_part_content_00560d50)(local_50);
                uVar1 = (*(code *)PTR_apr_psprintf_005609f4)
                                  (local_50,PTR_LAB_00560984 + 0x5ab0,
                                   **(int **)(iVar6 + local_a0 * 0x38 + 0x1c) + 1);
                uVar5 = (*(code *)PTR_strlen_00561504)(uVar1);
                *(undefined4 *)(iVar3 + 8) = uVar5;
                *(undefined4 *)(iVar3 + 0xc) = uVar1;
                uVar1 = (*(code *)PTR_apr_pstrdup_00560b3c)
                                  (local_50,*(undefined4 *)
                                             (*(int *)(iVar6 + local_a0 * 0x38 + 0x20) + 0xc));
                uVar5 = (*(code *)PTR_strlen_00561504)(uVar1);
                *(undefined4 *)(iVar3 + 0x10) = uVar5;
                *(undefined4 *)(iVar3 + 0x14) = uVar1;
                (*(code *)(PTR_LAB_00560cb0 + -0x3364))(iVar3,&local_4c);
              }
              (*(code *)PTR_cos_destroy_copy_thread_pool_00560db4)(iVar6,uVar4);
              param_1[2] = local_50;
              uVar1 = (*(code *)PTR_cos_do_complete_multipart_upload_00560d5c)
                                (param_1,param_5,param_6,&local_44,&local_4c,0,0,0,0);
              piVar2 = (int *)(*(code *)PTR_cos_status_dup_00560be8)(iVar11,uVar1);
              (*(code *)PTR_apr_pool_destroy_005609e8)(local_50);
              param_1[2] = iVar11;
            }
            else {
              (*(code *)PTR_apr_queue_pop_00560d48)(local_2c,&local_24);
              piVar2 = (int *)(*(code *)PTR_cos_status_dup_00560be8)(iVar11,local_24[1]);
              (*(code *)PTR_cos_destroy_copy_thread_pool_00560db4)(iVar6,uVar4);
            }
          }
          else {
            *piVar2 = iVar7;
            piVar2[1] = (int)PTR_COS_CREATE_QUEUE_ERROR_CODE_00560d30;
            piVar2[2] = 0;
          }
        }
        else {
          *piVar2 = iVar7;
          piVar2[1] = (int)PTR_COS_CREATE_QUEUE_ERROR_CODE_00560d30;
          piVar2[2] = 0;
        }
      }
      else {
        *piVar2 = iVar7;
        piVar2[1] = (int)PTR_COS_CREATE_THREAD_POOL_ERROR_CODE_00560d28;
        piVar2[2] = 0;
      }
    }
  }
  return piVar2;
}



// ==== cos_get_safe_size_for_download @ 00432a88 size=220

undefined8 cos_get_safe_size_for_download(uint param_1,int param_2)

{
  if ((param_2 < 1) && ((param_2 != 0 || (param_1 < 0x400000)))) {
    param_1 = 0x400000;
    param_2 = 0;
  }
  else if ((0 < param_2) || ((param_2 == 0 && (0x1400000 < param_1)))) {
    param_1 = 0x1400000;
    param_2 = 0;
  }
  return CONCAT44(param_2,param_1);
}



// ==== cos_fstack_create @ 004337a0 size=104

undefined4 cos_fstack_create(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_apr_array_make_00560dc8)(param_1,param_2,0xc);
  return uVar1;
}



// ==== cos_fstack_push @ 00433808 size=136

void cos_fstack_push(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)PTR_apr_array_push_00560dcc)(param_1);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  return;
}



// ==== cos_fstack_pop @ 00433890 size=352

undefined4 * cos_fstack_pop(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(code *)PTR_apr_array_pop_00560dd0)(param_1);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    iVar2 = puVar1[2];
    if (iVar2 == 2) {
      (*(code *)puVar1[1])();
    }
    else if (iVar2 < 3) {
      if (iVar2 == 1) {
        (*(code *)puVar1[1])(*puVar1);
      }
    }
    else if (iVar2 == 3) {
      (*(code *)puVar1[1])(*puVar1);
    }
    else if (iVar2 == 4) {
      (*(code *)puVar1[1])();
    }
  }
  return puVar1;
}



// ==== cos_fstack_destory @ 004339f0 size=100

void cos_fstack_destory(undefined4 param_1)

{
  int iVar1;
  
  do {
    iVar1 = (*(code *)PTR_cos_fstack_pop_00560dd4)(param_1);
  } while (iVar1 != 0);
  return;
}



// ==== cos_acl_grantee_content_parse @ 004341c8 size=1004

void cos_acl_grantee_content_parse(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5bb8,0,0,1);
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_mxmlElementGetAttr_00560de0)(iVar1,PTR_LAB_00560984 + 0x5bc0);
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)(param_1,uVar2);
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 8) = uVar3;
    *(undefined4 *)(param_3 + 0xc) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5bcc,0,0,1);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x10) == 0)) {
    iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5bd0,0,0,1)
    ;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
      uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                        (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
      uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
      *(undefined4 *)(param_3 + 0x10) = uVar3;
      *(undefined4 *)(param_3 + 0x14) = uVar2;
    }
  }
  else {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 0x10) = uVar3;
    *(undefined4 *)(param_3 + 0x14) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5bd4,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 0x18) = uVar3;
    *(undefined4 *)(param_3 + 0x1c) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5be0,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 0x20) = uVar3;
    *(undefined4 *)(param_3 + 0x24) = uVar2;
  }
  return;
}



// ==== cos_acl_contents_parse @ 004345b4 size=292

void cos_acl_contents_parse
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_10;
  
  for (local_10 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,param_3,0,0,1);
      local_10 != 0;
      local_10 = (*(code *)PTR_mxmlFindElement_00560c28)(local_10,param_2,param_3,0,0,1)) {
    uVar1 = (*(code *)PTR_cos_create_acl_list_content_00560de4)(param_1);
    (*(code *)PTR_cos_acl_grantee_content_parse_00560de8)(param_1,local_10,uVar1);
    (*(code *)(PTR_LAB_00560cb0 + 0x3dbc))(uVar1,param_4);
  }
  return;
}



// ==== cos_acl_owner_parse @ 004346d8 size=436

void cos_acl_owner_parse(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5bcc,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *param_3 = uVar3;
    param_3[1] = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5bd4,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    param_3[2] = uVar3;
    param_3[3] = uVar2;
  }
  return;
}



// ==== cos_acl_parse_from_body @ 0043488c size=384

int cos_acl_parse_from_body(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_10 [2];
  
  iVar1 = (*(code *)PTR_get_xmldoc_00560dec)(param_2,local_10);
  if (iVar1 == 0) {
    iVar2 = (*(code *)PTR_mxmlFindElement_00560c28)
                      (local_10[0],local_10[0],PTR_LAB_00560984 + 0x5bec,0,0,1);
    if (iVar2 != 0) {
      (*(code *)PTR_cos_acl_owner_parse_00560df0)(param_1,iVar2,param_3);
    }
    iVar2 = (*(code *)PTR_mxmlFindElement_00560c28)
                      (local_10[0],local_10[0],PTR_LAB_00560984 + 0x5bf4,0,0,1);
    if (iVar2 != 0) {
      (*(code *)PTR_cos_acl_contents_parse_00560df4)
                (param_1,iVar2,PTR_LAB_00560984 + 0x5c08,param_3 + 0x10);
    }
    (*(code *)PTR_mxmlDelete_00560c2c)(local_10[0]);
  }
  return iVar1;
}



// ==== cos_replication_rule_parse @ 00434a0c size=988

void cos_replication_rule_parse(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5c10,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 0x10) = uVar3;
    *(undefined4 *)(param_3 + 0x14) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5bcc,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 8) = uVar3;
    *(undefined4 *)(param_3 + 0xc) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5c18,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 0x18) = uVar3;
    *(undefined4 *)(param_3 + 0x1c) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5c20,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 0x20) = uVar3;
    *(undefined4 *)(param_3 + 0x24) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5c28,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 0x28) = uVar3;
    *(undefined4 *)(param_3 + 0x2c) = uVar2;
  }
  return;
}



// ==== cos_replication_rules_parse @ 00434de8 size=292

void cos_replication_rules_parse
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_10;
  
  for (local_10 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,param_3,0,0,1);
      local_10 != 0;
      local_10 = (*(code *)PTR_mxmlFindElement_00560c28)(local_10,param_2,param_3,0,0,1)) {
    uVar1 = (*(code *)PTR_cos_create_replication_rule_content_00560df8)(param_1);
    (*(code *)PTR_cos_replication_rule_parse_00560dfc)(param_1,local_10,uVar1);
    (*(code *)(PTR_LAB_00560cb0 + 0x3dbc))(uVar1,param_4);
  }
  return;
}



// ==== cos_copy_object_parse_from_body @ 00435098 size=536

int cos_copy_object_parse_from_body(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_c;
  
  iVar1 = (*(code *)PTR_get_xmldoc_00560dec)(param_2,&local_c);
  if (iVar1 == 0) {
    iVar2 = (*(code *)PTR_mxmlFindElement_00560c28)(local_c,local_c,PTR_LAB_00560984 + 0x5c48,0,0,1)
    ;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x10) != 0)) {
      uVar3 = (*(code *)PTR_apr_pstrdup_00560b3c)
                        (param_1,*(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x18));
      uVar4 = (*(code *)PTR_strlen_00561504)(uVar3);
      *param_3 = uVar4;
      param_3[1] = uVar3;
    }
    iVar2 = (*(code *)PTR_mxmlFindElement_00560c28)(local_c,local_c,PTR_LAB_00560984 + 0x5c50,0,0,1)
    ;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x10) != 0)) {
      uVar3 = (*(code *)PTR_apr_pstrdup_00560b3c)
                        (param_1,*(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x18));
      uVar4 = (*(code *)PTR_strlen_00561504)(uVar3);
      param_3[2] = uVar4;
      param_3[3] = uVar3;
    }
    (*(code *)PTR_mxmlDelete_00560c2c)(local_c);
  }
  return iVar1;
}



// ==== cos_list_objects_owner_parse @ 004352b0 size=436

void cos_list_objects_owner_parse(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5bcc,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 0x28) = uVar3;
    *(undefined4 *)(param_3 + 0x2c) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5bd4,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 0x30) = uVar3;
    *(undefined4 *)(param_3 + 0x34) = uVar2;
  }
  return;
}



// ==== cos_list_objects_content_parse @ 00435464 size=1088

void cos_list_objects_content_parse(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5c60,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 8) = uVar3;
    *(undefined4 *)(param_3 + 0xc) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5c50,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 0x10) = uVar3;
    *(undefined4 *)(param_3 + 0x14) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5c48,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 0x18) = uVar3;
    *(undefined4 *)(param_3 + 0x1c) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5c64,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 0x20) = uVar3;
    *(undefined4 *)(param_3 + 0x24) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5bec,0,0,1);
  if (iVar1 != 0) {
    (*(code *)PTR_cos_list_objects_owner_parse_00560e04)(param_1,iVar1,param_3);
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5c28,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 0x38) = uVar3;
    *(undefined4 *)(param_3 + 0x3c) = uVar2;
  }
  return;
}



// ==== cos_list_objects_contents_parse @ 004358a4 size=292

void cos_list_objects_contents_parse
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_10;
  
  for (local_10 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,param_3,0,0,1);
      local_10 != 0;
      local_10 = (*(code *)PTR_mxmlFindElement_00560c28)(local_10,param_2,param_3,0,0,1)) {
    uVar1 = (*(code *)PTR_cos_create_list_object_content_00560e08)(param_1);
    (*(code *)PTR_cos_list_objects_content_parse_00560e0c)(param_1,local_10,uVar1);
    (*(code *)(PTR_LAB_00560cb0 + 0x3dbc))(uVar1,param_4);
  }
  return;
}



// ==== cos_list_objects_prefix_parse @ 004359c8 size=252

void cos_list_objects_prefix_parse(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5c18,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 8) = uVar3;
    *(undefined4 *)(param_3 + 0xc) = uVar2;
  }
  return;
}



// ==== cos_list_objects_common_prefix_parse @ 00435ac4 size=292

void cos_list_objects_common_prefix_parse
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_10;
  
  for (local_10 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,param_3,0,0,1);
      local_10 != 0;
      local_10 = (*(code *)PTR_mxmlFindElement_00560c28)(local_10,param_2,param_3,0,0,1)) {
    uVar1 = (*(code *)PTR_cos_create_list_object_common_prefix_00560e10)(param_1);
    (*(code *)PTR_cos_list_objects_prefix_parse_00560e14)(param_1,local_10,uVar1);
    (*(code *)(PTR_LAB_00560cb0 + 0x3dbc))(uVar1,param_4);
  }
  return;
}



// ==== cos_upload_id_parse_from_body @ 00435e28 size=296

int cos_upload_id_parse_from_body(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  local_14 = *(undefined4 *)(PTR_LAB_00560984 + 0x5ca0);
  local_10 = *(undefined4 *)(PTR_LAB_00560984 + 0x5ca4);
  local_c = PTR_LAB_00560984[0x5ca8];
  iVar1 = (*(code *)PTR_get_xmldoc_00560dec)(param_2,&local_18);
  if (iVar1 == 0) {
    iVar2 = (*(code *)PTR_get_xmlnode_value_00560dd8)(param_1,local_18,&local_14);
    if (iVar2 != 0) {
      uVar3 = (*(code *)PTR_strlen_00561504)(iVar2);
      *param_3 = uVar3;
      param_3[1] = iVar2;
    }
    (*(code *)PTR_mxmlDelete_00560c2c)(local_18);
  }
  return iVar1;
}



// ==== cos_list_parts_contents_parse @ 00435f50 size=292

void cos_list_parts_contents_parse
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_10;
  
  for (local_10 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,param_3,0,0,1);
      local_10 != 0;
      local_10 = (*(code *)PTR_mxmlFindElement_00560c28)(local_10,param_2,param_3,0,0,1)) {
    uVar1 = (*(code *)PTR_cos_create_list_part_content_00560e20)(param_1);
    (*(code *)PTR_cos_list_parts_content_parse_00560e24)(param_1,local_10,uVar1);
    (*(code *)(PTR_LAB_00560cb0 + 0x3dbc))(uVar1,param_4);
  }
  return;
}



// ==== cos_list_parts_content_parse @ 00436074 size=804

void cos_list_parts_content_parse(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5cac,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 8) = uVar3;
    *(undefined4 *)(param_3 + 0xc) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5c50,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 0x20) = uVar3;
    *(undefined4 *)(param_3 + 0x24) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5c48,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 0x18) = uVar3;
    *(undefined4 *)(param_3 + 0x1c) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5c64,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 0x10) = uVar3;
    *(undefined4 *)(param_3 + 0x14) = uVar2;
  }
  return;
}



// ==== cos_list_parts_parse_from_body @ 00436398 size=484

int cos_list_parts_parse_from_body
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
              undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  local_34 = *(undefined4 *)(PTR_LAB_00560984 + 0x5cb8);
  local_30 = *(undefined4 *)(PTR_LAB_00560984 + 0x5cbc);
  local_2c = *(undefined4 *)(PTR_LAB_00560984 + 0x5cc0);
  local_28 = *(undefined4 *)(PTR_LAB_00560984 + 0x5cc4);
  local_24 = *(undefined4 *)(PTR_LAB_00560984 + 0x5cc8);
  local_20 = PTR_LAB_00560984[0x5ccc];
  local_1c = *(undefined4 *)(PTR_LAB_00560984 + 0x5c78);
  local_18 = *(undefined4 *)(PTR_LAB_00560984 + 0x5c7c);
  local_14 = *(undefined4 *)(PTR_LAB_00560984 + 0x5c80);
  local_10 = 0x74726150;
  local_c = 0;
  iVar1 = (*(code *)PTR_get_xmldoc_00560dec)(param_2,&local_38);
  if (iVar1 == 0) {
    iVar2 = (*(code *)PTR_get_xmlnode_value_00560dd8)(param_1,local_38,&local_34);
    if (iVar2 != 0) {
      uVar3 = (*(code *)PTR_strlen_00561504)(iVar2);
      *param_4 = uVar3;
      param_4[1] = iVar2;
    }
    uVar3 = (*(code *)(PTR_LAB_00560cb0 + 0x3e68))(param_1,local_38,&local_1c);
    *param_5 = uVar3;
    (*(code *)PTR_cos_list_parts_contents_parse_00560e28)(param_1,local_38,&local_10,param_3);
    (*(code *)PTR_mxmlDelete_00560c2c)(local_38);
  }
  return iVar1;
}



// ==== cos_list_multipart_uploads_contents_parse @ 0043657c size=292

void cos_list_multipart_uploads_contents_parse
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_10;
  
  for (local_10 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,param_3,0,0,1);
      local_10 != 0;
      local_10 = (*(code *)PTR_mxmlFindElement_00560c28)(local_10,param_2,param_3,0,0,1)) {
    uVar1 = (*(code *)PTR_cos_create_list_multipart_upload_content_00560e2c)(param_1);
    (*(code *)PTR_cos_list_multipart_uploads_content_parse_00560e30)(param_1,local_10,uVar1);
    (*(code *)(PTR_LAB_00560cb0 + 0x3dbc))(uVar1,param_4);
  }
  return;
}



// ==== cos_list_multipart_uploads_content_parse @ 004366a0 size=620

void cos_list_multipart_uploads_content_parse(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5c60,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 8) = uVar3;
    *(undefined4 *)(param_3 + 0xc) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5cd0,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 0x10) = uVar3;
    *(undefined4 *)(param_3 + 0x14) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5cdc,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 0x18) = uVar3;
    *(undefined4 *)(param_3 + 0x1c) = uVar2;
  }
  return;
}



// ==== cos_list_multipart_uploads_parse_from_body @ 0043690c size=644

int cos_list_multipart_uploads_parse_from_body
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
              undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined1 local_1e;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  undefined1 local_a;
  
  local_40 = *(undefined4 *)(PTR_LAB_00560984 + 0x5ce8);
  local_3c = *(undefined4 *)(PTR_LAB_00560984 + 0x5cec);
  local_38 = *(undefined4 *)(PTR_LAB_00560984 + 0x5cf0);
  local_34 = *(undefined2 *)(PTR_LAB_00560984 + 0x5cf4);
  local_30 = *(undefined4 *)(PTR_LAB_00560984 + 0x5cf8);
  local_2c = *(undefined4 *)(PTR_LAB_00560984 + 0x5cfc);
  local_28 = *(undefined4 *)(PTR_LAB_00560984 + 0x5d00);
  local_24 = *(undefined4 *)(PTR_LAB_00560984 + 0x5d04);
  local_20 = *(undefined2 *)(PTR_LAB_00560984 + 0x5d08);
  local_1e = PTR_LAB_00560984[0x5d0a];
  local_1c = *(undefined4 *)(PTR_LAB_00560984 + 0x5c78);
  local_18 = *(undefined4 *)(PTR_LAB_00560984 + 0x5c7c);
  local_14 = *(undefined4 *)(PTR_LAB_00560984 + 0x5c80);
  local_10 = 0x6f6c7055;
  local_c = 0x6461;
  local_a = 0;
  iVar1 = (*(code *)PTR_get_xmldoc_00560dec)(param_2,&local_44);
  if (iVar1 == 0) {
    iVar2 = (*(code *)PTR_get_xmlnode_value_00560dd8)(param_1,local_44,&local_40);
    if (iVar2 != 0) {
      uVar3 = (*(code *)PTR_strlen_00561504)(iVar2);
      *param_4 = uVar3;
      param_4[1] = iVar2;
    }
    iVar2 = (*(code *)PTR_get_xmlnode_value_00560dd8)(param_1,local_44,&local_30);
    if (iVar2 != 0) {
      uVar3 = (*(code *)PTR_strlen_00561504)(iVar2);
      *param_5 = uVar3;
      param_5[1] = iVar2;
    }
    uVar3 = (*(code *)(PTR_LAB_00560cb0 + 0x3e68))(param_1,local_44,&local_1c);
    *param_6 = uVar3;
    (*(code *)PTR_cos_list_multipart_uploads_contents_parse_00560e34)
              (param_1,local_44,&local_10,param_3);
    (*(code *)PTR_mxmlDelete_00560c2c)(local_44);
  }
  return iVar1;
}



// ==== cos_cors_rule_contents_parse @ 00438850 size=292

void cos_cors_rule_contents_parse
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_10;
  
  for (local_10 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,param_3,0,0,1);
      local_10 != 0;
      local_10 = (*(code *)PTR_mxmlFindElement_00560c28)(local_10,param_2,param_3,0,0,1)) {
    uVar1 = (*(code *)PTR_cos_create_cors_rule_content_00560e5c)(param_1);
    (*(code *)PTR_cos_cors_rule_content_parse_00560e60)(param_1,local_10,uVar1);
    (*(code *)(PTR_LAB_00560cb0 + 0x3dbc))(uVar1,param_4);
  }
  return;
}



// ==== cos_cors_rule_content_parse @ 00438974 size=1152

void cos_cors_rule_content_parse(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5bcc,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 8) = uVar3;
    *(undefined4 *)(param_3 + 0xc) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5de8,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 0x10) = uVar3;
    *(undefined4 *)(param_3 + 0x14) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5df8,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 0x18) = uVar3;
    *(undefined4 *)(param_3 + 0x1c) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5e08,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 0x20) = uVar3;
    *(undefined4 *)(param_3 + 0x24) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5e28,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 0x28) = uVar3;
    *(undefined4 *)(param_3 + 0x2c) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5e18,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar2 = (*(code *)PTR_atoi_00561564)(uVar2);
    *(undefined4 *)(param_3 + 0x30) = uVar2;
  }
  return;
}



// ==== cos_lifecycle_rule_contents_parse @ 00438ecc size=292

void cos_lifecycle_rule_contents_parse
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_10;
  
  for (local_10 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,param_3,0,0,1);
      local_10 != 0;
      local_10 = (*(code *)PTR_mxmlFindElement_00560c28)(local_10,param_2,param_3,0,0,1)) {
    uVar1 = (*(code *)PTR_cos_create_lifecycle_rule_content_00560e68)(param_1);
    (*(code *)PTR_cos_lifecycle_rule_content_parse_00560e6c)(param_1,local_10,uVar1);
    (*(code *)(PTR_LAB_00560cb0 + 0x3dbc))(uVar1,param_4);
  }
  return;
}



// ==== cos_lifecycle_rule_content_parse @ 00438ff0 size=920

void cos_lifecycle_rule_content_parse(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5bcc,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 8) = uVar3;
    *(undefined4 *)(param_3 + 0xc) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5c18,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 0x10) = uVar3;
    *(undefined4 *)(param_3 + 0x14) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5c10,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 0x18) = uVar3;
    *(undefined4 *)(param_3 + 0x1c) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5d50,0,0,1);
  if (iVar1 != 0) {
    (*(code *)PTR_cos_lifecycle_rule_expire_parse_00560e70)(param_1,iVar1,param_3);
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5d70,0,0,1);
  if (iVar1 != 0) {
    (*(code *)PTR_cos_lifecycle_rule_transition_parse_00560e74)(param_1,iVar1,param_3);
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5d7c,0,0,1);
  if (iVar1 != 0) {
    (*(code *)PTR_cos_lifecycle_rule_abort_parse_00560e78)(param_1,iVar1,param_3);
  }
  return;
}



// ==== cos_lifecycle_rule_expire_parse @ 00439388 size=416

void cos_lifecycle_rule_expire_parse(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5d5c,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar2 = (*(code *)PTR_atoi_00561564)(uVar2);
    *(undefined4 *)(param_3 + 0x20) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5d68,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 0x24) = uVar3;
    *(undefined4 *)(param_3 + 0x28) = uVar2;
  }
  return;
}



// ==== cos_lifecycle_rule_transition_parse @ 00439528 size=600

void cos_lifecycle_rule_transition_parse(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5d5c,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar2 = (*(code *)PTR_atoi_00561564)(uVar2);
    *(undefined4 *)(param_3 + 0x34) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5d68,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 0x38) = uVar3;
    *(undefined4 *)(param_3 + 0x3c) = uVar2;
  }
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5c28,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 0x40) = uVar3;
    *(undefined4 *)(param_3 + 0x44) = uVar2;
  }
  return;
}



// ==== cos_lifecycle_rule_abort_parse @ 00439780 size=232

void cos_lifecycle_rule_abort_parse(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5d5c,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar2 = (*(code *)PTR_apr_pstrdup_00560b3c)
                      (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
    uVar2 = (*(code *)PTR_atoi_00561564)(uVar2);
    *(undefined4 *)(param_3 + 0x48) = uVar2;
  }
  return;
}



// ==== cos_delete_objects_contents_parse @ 00439868 size=292

void cos_delete_objects_contents_parse
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_10;
  
  for (local_10 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,param_3,0,0,1);
      local_10 != 0;
      local_10 = (*(code *)PTR_mxmlFindElement_00560c28)(local_10,param_2,param_3,0,0,1)) {
    uVar1 = (*(code *)PTR_cos_create_cos_object_key_00560e7c)(param_1);
    (*(code *)PTR_cos_object_key_parse_00560e80)(param_1,local_10,uVar1);
    (*(code *)(PTR_LAB_00560cb0 + 0x3dbc))(uVar1,param_4);
  }
  return;
}



// ==== cos_object_key_parse @ 0043998c size=316

void cos_object_key_parse(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,PTR_LAB_00560984 + 0x5c60,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar3 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18);
    uVar2 = (*(code *)PTR_strlen_00561504)(uVar3);
    uVar2 = (*(code *)PTR_apr_palloc_00560a74)(param_1,uVar2);
    (*(code *)PTR_cos_url_decode_00560e84)(uVar3,uVar2);
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    *(undefined4 *)(param_3 + 8) = uVar3;
    *(undefined4 *)(param_3 + 0xc) = uVar2;
  }
  return;
}



// ==== cos_build_checkpoint_xml @ 0043a374 size=1556

undefined4 cos_build_checkpoint_xml(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int local_38;
  undefined4 local_10;
  int local_c;
  
  uVar1 = (*(code *)PTR_mxmlNewXML_00560e38)(PTR_LAB_00560984 + 0x5d0c);
  uVar2 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar1,PTR_LAB_00560984 + 0x5ec4);
  (*(code *)PTR_set_xmlnode_value_str_00560e90)(uVar2,PTR_LAB_00560984 + 0x5ed0,param_2);
  (*(code *)PTR_set_xmlnode_value_int_00560e94)
            (uVar2,PTR_LAB_00560984 + 0x5ed4,*(undefined4 *)(param_2 + 8));
  uVar3 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar2,PTR_LAB_00560984 + 0x5edc);
  (*(code *)PTR_set_xmlnode_value_str_00560e90)(uVar3,PTR_LAB_00560984 + 0x5ee8,param_2 + 0x10);
  (*(code *)PTR_set_xmlnode_value_int64_00560e98)
            (uVar3,PTR_LAB_00560984 + 0x5c64,*(undefined4 *)(param_2 + 0x18),
             *(undefined4 *)(param_2 + 0x1c));
  (*(code *)PTR_set_xmlnode_value_int64_00560e98)
            (uVar3,PTR_LAB_00560984 + 0x5c50,*(undefined4 *)(param_2 + 0x20),
             *(undefined4 *)(param_2 + 0x24));
  (*(code *)PTR_set_xmlnode_value_str_00560e90)(uVar3,PTR_LAB_00560984 + 0x5ed0,param_2 + 0x28);
  uVar3 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar2,PTR_LAB_00560984 + 0x5ea4);
  (*(code *)PTR_set_xmlnode_value_str_00560e90)(uVar3,PTR_LAB_00560984 + 0x5c60,param_2 + 0x30);
  (*(code *)PTR_set_xmlnode_value_int64_00560e98)
            (uVar3,PTR_LAB_00560984 + 0x5c64,*(undefined4 *)(param_2 + 0x38),
             *(undefined4 *)(param_2 + 0x3c));
  (*(code *)PTR_set_xmlnode_value_str_00560e90)(uVar3,PTR_LAB_00560984 + 0x5c50,param_2 + 0x40);
  (*(code *)PTR_set_xmlnode_value_str_00560e90)(uVar3,PTR_LAB_00560984 + 0x5c48,param_2 + 0x48);
  (*(code *)PTR_set_xmlnode_value_str_00560e90)(uVar2,PTR_LAB_00560984 + 0x5ca0,param_2 + 0x50);
  uVar2 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar2,PTR_LAB_00560984 + 0x5ef0);
  (*(code *)PTR_set_xmlnode_value_int_00560e94)
            (uVar2,PTR_LAB_00560984 + 0x5ef8,*(undefined4 *)(param_2 + 0x58));
  (*(code *)PTR_set_xmlnode_value_int64_00560e98)
            (uVar2,PTR_LAB_00560984 + 0x5c64,*(undefined4 *)(param_2 + 0x60),
             *(undefined4 *)(param_2 + 100));
  uVar2 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar2,PTR_LAB_00560984 + 0x5f00);
  for (local_38 = 0; local_38 < *(int *)(param_2 + 0x58); local_38 = local_38 + 1) {
    uVar3 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar2,PTR_LAB_00560984 + 0x5d28);
    (*(code *)PTR_set_xmlnode_value_int_00560e94)
              (uVar3,PTR_LAB_00560984 + 0x5f08,
               *(undefined4 *)(*(int *)(param_2 + 0x68) + local_38 * 0x28));
    iVar4 = *(int *)(param_2 + 0x68) + local_38 * 0x28;
    (*(code *)PTR_set_xmlnode_value_int64_00560e98)
              (uVar3,PTR_LAB_00560984 + 0x5f10,*(undefined4 *)(iVar4 + 8),
               *(undefined4 *)(iVar4 + 0xc));
    iVar4 = *(int *)(param_2 + 0x68) + local_38 * 0x28;
    (*(code *)PTR_set_xmlnode_value_int64_00560e98)
              (uVar3,PTR_LAB_00560984 + 0x5c64,*(undefined4 *)(iVar4 + 0x10),
               *(undefined4 *)(iVar4 + 0x14));
    (*(code *)PTR_set_xmlnode_value_int_00560e94)
              (uVar3,PTR_LAB_00560984 + 0x5f18,
               *(undefined4 *)(*(int *)(param_2 + 0x68) + local_38 * 0x28 + 0x18));
    (*(code *)PTR_set_xmlnode_value_str_00560e90)
              (uVar3,PTR_LAB_00560984 + 0x5c48,*(int *)(param_2 + 0x68) + local_38 * 0x28 + 0x1c);
  }
  iVar4 = (*(code *)(PTR_LAB_00560cb0 + 0x3f18))(uVar1);
  if (iVar4 == 0) {
    uVar2 = 0;
  }
  else {
    local_10 = (*(code *)PTR_strlen_00561504)(iVar4);
    local_c = iVar4;
    uVar2 = (*(code *)PTR_cos_pstrdup_00560b2c)(param_1,&local_10);
    (*(code *)PTR_free_005615c0)(iVar4);
    (*(code *)PTR_mxmlDelete_00560c2c)(uVar1);
  }
  return uVar2;
}



// ==== cos_checkpoint_parse_from_body @ 0043a988 size=1508

undefined4 cos_checkpoint_parse_from_body(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_28;
  int local_10 [2];
  
  local_10[0] = 0;
  iVar1 = (*(code *)PTR_mxmlLoadString_00560ea0)(0,param_2,PTR_mxml_opaque_cb_00560e9c);
  if (iVar1 == 0) {
    uVar2 = 0xfffffc2c;
  }
  else {
    (*(code *)PTR_get_xmlnode_value_str_00560ea4)(param_1,iVar1,PTR_LAB_00560984 + 0x5ed0,param_3);
    (*(code *)PTR_get_xmlnode_value_int_00560ea8)
              (param_1,iVar1,PTR_LAB_00560984 + 0x5ed4,param_3 + 8);
    uVar2 = (*(code *)PTR_mxmlFindElement_00560c28)(iVar1,iVar1,PTR_LAB_00560984 + 0x5edc,0,0,1);
    (*(code *)PTR_get_xmlnode_value_str_00560ea4)
              (param_1,uVar2,PTR_LAB_00560984 + 0x5ee8,param_3 + 0x10);
    (*(code *)PTR_get_xmlnode_value_int64_00560eac)
              (param_1,uVar2,PTR_LAB_00560984 + 0x5c64,param_3 + 0x18);
    (*(code *)PTR_get_xmlnode_value_int64_00560eac)
              (param_1,uVar2,PTR_LAB_00560984 + 0x5c50,param_3 + 0x20);
    (*(code *)PTR_get_xmlnode_value_str_00560ea4)
              (param_1,uVar2,PTR_LAB_00560984 + 0x5ed0,param_3 + 0x28);
    uVar2 = (*(code *)PTR_mxmlFindElement_00560c28)(iVar1,iVar1,PTR_LAB_00560984 + 0x5ea4,0,0,1);
    (*(code *)PTR_get_xmlnode_value_str_00560ea4)
              (param_1,uVar2,PTR_LAB_00560984 + 0x5c60,param_3 + 0x30);
    (*(code *)PTR_get_xmlnode_value_int64_00560eac)
              (param_1,uVar2,PTR_LAB_00560984 + 0x5c64,param_3 + 0x38);
    (*(code *)PTR_get_xmlnode_value_str_00560ea4)
              (param_1,uVar2,PTR_LAB_00560984 + 0x5c50,param_3 + 0x40);
    (*(code *)PTR_get_xmlnode_value_str_00560ea4)
              (param_1,uVar2,PTR_LAB_00560984 + 0x5c48,param_3 + 0x48);
    (*(code *)PTR_get_xmlnode_value_str_00560ea4)
              (param_1,iVar1,PTR_LAB_00560984 + 0x5ca0,param_3 + 0x50);
    uVar2 = (*(code *)PTR_mxmlFindElement_00560c28)(iVar1,iVar1,PTR_LAB_00560984 + 0x5ef0,0,0,1);
    (*(code *)PTR_get_xmlnode_value_int_00560ea8)
              (param_1,uVar2,PTR_LAB_00560984 + 0x5ef8,param_3 + 0x58);
    (*(code *)PTR_get_xmlnode_value_int64_00560eac)
              (param_1,uVar2,PTR_LAB_00560984 + 0x5c64,param_3 + 0x60);
    uVar2 = (*(code *)PTR_mxmlFindElement_00560c28)(uVar2,uVar2,PTR_LAB_00560984 + 0x5f00,0,0,1);
    for (local_28 = (*(code *)PTR_mxmlFindElement_00560c28)
                              (uVar2,uVar2,PTR_LAB_00560984 + 0x5d28,0,0,1); local_28 != 0;
        local_28 = (*(code *)PTR_mxmlFindElement_00560c28)
                             (local_28,uVar2,PTR_LAB_00560984 + 0x5d28,0,0,1)) {
      (*(code *)PTR_get_xmlnode_value_int_00560ea8)
                (param_1,local_28,PTR_LAB_00560984 + 0x5f08,local_10);
      *(int *)(*(int *)(param_3 + 0x68) + local_10[0] * 0x28) = local_10[0];
      (*(code *)PTR_get_xmlnode_value_int64_00560eac)
                (param_1,local_28,PTR_LAB_00560984 + 0x5f10,
                 *(int *)(param_3 + 0x68) + local_10[0] * 0x28 + 8);
      (*(code *)PTR_get_xmlnode_value_int64_00560eac)
                (param_1,local_28,PTR_LAB_00560984 + 0x5c64,
                 *(int *)(param_3 + 0x68) + local_10[0] * 0x28 + 0x10);
      (*(code *)PTR_get_xmlnode_value_int_00560ea8)
                (param_1,local_28,PTR_LAB_00560984 + 0x5f18,
                 *(int *)(param_3 + 0x68) + local_10[0] * 0x28 + 0x18);
      (*(code *)PTR_get_xmlnode_value_str_00560ea4)
                (param_1,local_28,PTR_LAB_00560984 + 0x5c48,
                 *(int *)(param_3 + 0x68) + local_10[0] * 0x28 + 0x1c);
    }
    (*(code *)PTR_mxmlDelete_00560c2c)(iVar1);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== cos_pstrdup @ 0043b340 size=120

undefined4 cos_pstrdup(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_apr_pstrndup_00560eb0)(param_1,param_2[1],*param_2);
  return uVar1;
}



// ==== cos_strip_space @ 0043b554 size=96

void cos_strip_space(undefined4 param_1)

{
  (*(code *)(PTR_LAB_00560eb4 + -0x4c48))(param_1,PTR_LAB_00560eb4 + -0x4d54);
  return;
}



// ==== cos_trip_space_and_cntrl @ 0043b5b4 size=96

void cos_trip_space_and_cntrl(undefined4 param_1)

{
  (*(code *)(PTR_LAB_00560eb4 + -0x4c48))(param_1,PTR_LAB_00560eb4 + -0x4cf8);
  return;
}



// ==== cos_ends_with @ 0043b614 size=244

undefined4 cos_ends_with(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    uVar2 = 0;
  }
  else if ((*param_1 < *param_2) ||
          (iVar1 = (*(code *)PTR_strncmp_005615d4)
                             (param_1[1] + (*param_1 - *param_2),param_2[1],*param_2), iVar1 != 0))
  {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// ==== cos_parse_xml_body @ 0043ba10 size=452

undefined4 cos_parse_xml_body(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *local_18;
  int local_14;
  
  *param_2 = 0;
  iVar1 = (*(code *)PTR_cos_buf_list_len_00560ae8)(param_1);
  local_14 = 0;
  iVar2 = (*(code *)PTR_malloc_005614ec)(iVar1 + 1);
  (*(code *)PTR_memset_00561588)(iVar2,0,iVar1 + 1);
  for (local_18 = (undefined4 *)*param_1; local_18 != param_1; local_18 = (undefined4 *)*local_18) {
    (*(code *)PTR_memcpy_005615a4)(iVar2 + local_14,local_18[2],local_18[3] - local_18[2]);
    local_14 = local_14 + (local_18[3] - local_18[2]);
  }
  iVar1 = (*(code *)PTR_mxmlLoadString_00560ea0)(0,iVar2,PTR_mxml_opaque_cb_00560e9c);
  *param_2 = iVar1;
  (*(code *)PTR_free_005615c0)(iVar2);
  if (*param_2 == 0) {
    uVar3 = 0xfffffc1c;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// ==== cos_convert_to_gmt_time @ 0043bbd4 size=280

undefined4 cos_convert_to_gmt_time(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_apr_snprintf_00560ab0)
                    (param_1,0x80,param_2,
                     *(undefined4 *)(PTR_DAT_0056098c + *(int *)(param_3 + 0x1c) * 4 + 0x580),
                     *(undefined4 *)(param_3 + 0x10),
                     *(undefined4 *)(PTR_DAT_0056098c + *(int *)(param_3 + 0x14) * 4 + 0x59c),
                     *(int *)(param_3 + 0x18) + 0x76c,*(undefined4 *)(param_3 + 0xc),
                     *(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 4));
  if ((iVar1 < 0) || (0x7f < iVar1)) {
    uVar2 = 0xfffffc1c;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// ==== cos_get_gmt_str_time @ 0043bcec size=444

int cos_get_gmt_str_time(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 auStack_bc [128];
  undefined1 auStack_3c [48];
  
  (*(code *)PTR_apr_time_now_00560adc)();
  iVar1 = (*(code *)PTR_apr_time_exp_gmt_00560eb8)(auStack_3c);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_cos_convert_to_gmt_time_00560ebc)
                      (param_1,PTR_LAB_00560984 + 0x5f7c,auStack_3c);
    if ((iVar1 != 0) && (2 < *(uint *)PTR_cos_log_level_005609ac)) {
      (**(code **)PTR_cos_log_format_005609b0)
                (3,PTR_LAB_00560984 + 0x5fa0,0x42,PTR_LAB_00560984 + 0x60c4,
                 PTR_LAB_00560984 + 0x5fd8,iVar1);
    }
  }
  else {
    if (2 < *(uint *)PTR_cos_log_level_005609ac) {
      pcVar3 = *(code **)PTR_cos_log_format_005609b0;
      uVar2 = (*(code *)PTR_apr_strerror_00560a84)(iVar1,auStack_bc,0x80);
      (*pcVar3)(3,PTR_LAB_00560984 + 0x5fa0,0x3c,PTR_LAB_00560984 + 0x60c4,PTR_LAB_00560984 + 0x5fb0
                ,iVar1,uVar2);
    }
    iVar1 = -0x3e4;
  }
  return iVar1;
}



// ==== cos_url_encode @ 0043bea8 size=500

undefined4 cos_url_encode(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *local_res0;
  byte *local_res4;
  int local_10;
  
  local_10 = 0;
  local_res0 = param_1;
  local_res4 = param_2;
  while( true ) {
    if (*local_res4 == 0) {
      *local_res0 = 0;
      return 0;
    }
    local_10 = local_10 + 1;
    if (param_3 < local_10) break;
    bVar1 = *local_res4;
    if (((((*(ushort *)(*(int *)PTR___ctype_b_00561578 + (uint)bVar1 * 2) & 0x800) == 0) &&
         (bVar1 != 0x2d)) && (bVar1 != 0x5f)) && ((bVar1 != 0x2e && (bVar1 != 0x7e)))) {
      if (*local_res4 == 0x20) {
        *local_res0 = 0x25;
        pbVar2 = local_res0 + 2;
        local_res0[1] = 0x32;
        local_res0 = local_res0 + 3;
        *pbVar2 = 0x30;
      }
      else {
        *local_res0 = 0x25;
        pbVar2 = local_res0 + 2;
        local_res0[1] = *(byte *)(*(int *)(PTR_DAT_0056098c + 0x5cc) + (uint)(bVar1 >> 4));
        local_res0 = local_res0 + 3;
        *pbVar2 = *(byte *)(*(int *)(PTR_DAT_0056098c + 0x5cc) + (bVar1 & 0xf));
      }
    }
    else {
      *local_res0 = bVar1;
      local_res0 = local_res0 + 1;
    }
    local_res4 = local_res4 + 1;
  }
  *local_res0 = 0;
  return 0xfffffc1e;
}



// ==== cos_query_params_to_string @ 0043c09c size=1124

undefined4 cos_query_params_to_string(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_24b0;
  int local_24ac;
  undefined1 local_24a8;
  undefined1 auStack_2490 [3076];
  undefined1 auStack_188c [6276];
  
  local_24a8 = 0x3f;
  iVar1 = (*(code *)PTR_apr_is_empty_table_00560ec0)(param_2);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_cos_create_buf_00560a88)(param_1,0x100);
    *param_3 = 0;
    param_3[1] = 0;
    iVar2 = (*(code *)PTR_apr_table_elts_00560a0c)(param_2);
    iVar4 = *(int *)(iVar2 + 0x10);
    for (local_24b0 = 0; local_24b0 < *(int *)(iVar2 + 8); local_24b0 = local_24b0 + 1) {
      iVar3 = (*(code *)PTR_cos_url_encode_00560b10)
                        (auStack_2490,*(undefined4 *)(iVar4 + local_24b0 * 0xc),0x400);
      if (iVar3 != 0) {
        if (2 < *(uint *)PTR_cos_log_level_005609ac) {
          (**(code **)PTR_cos_log_format_005609b0)
                    (3,PTR_LAB_00560984 + 0x5fa0,0x82,PTR_LAB_00560984 + 0x60f0,
                     PTR_LAB_00560984 + 0x6000,*(undefined4 *)(iVar4 + local_24b0 * 0xc));
        }
        return 0xfffffc1e;
      }
      local_24ac = (*(code *)PTR_apr_snprintf_00560ab0)
                             (auStack_188c,0x187f,PTR_LAB_00560984 + 0x6024,local_24a8,auStack_2490)
      ;
      if ((*(int *)(iVar4 + local_24b0 * 0xc + 4) != 0) &&
         (**(char **)(iVar4 + local_24b0 * 0xc + 4) != '\0')) {
        iVar3 = (*(code *)PTR_cos_url_encode_00560b10)
                          (auStack_2490,*(undefined4 *)(iVar4 + local_24b0 * 0xc + 4),0x400);
        if (iVar3 != 0) {
          if (2 < *(uint *)PTR_cos_log_level_005609ac) {
            (**(code **)PTR_cos_log_format_005609b0)
                      (3,PTR_LAB_00560984 + 0x5fa0,0x88,PTR_LAB_00560984 + 0x60f0,
                       PTR_LAB_00560984 + 0x602c,*(undefined4 *)(iVar4 + local_24b0 * 0xc + 4));
          }
          return 0xfffffc1e;
        }
        iVar3 = (*(code *)PTR_apr_snprintf_00560ab0)
                          (auStack_188c + local_24ac,0x187f - local_24ac,PTR_LAB_00560984 + 0x6054,
                           auStack_2490);
        local_24ac = local_24ac + iVar3;
        if (0x3ff < local_24ac) {
          if (2 < *(uint *)PTR_cos_log_level_005609ac) {
            (**(code **)PTR_cos_log_format_005609b0)
                      (3,PTR_LAB_00560984 + 0x5fa0,0x8d,PTR_LAB_00560984 + 0x60f0,
                       PTR_LAB_00560984 + 0x6058,auStack_188c);
          }
          return 0xfffffc1e;
        }
      }
      (*(code *)PTR_cos_buf_append_string_00560cc4)(param_1,iVar1,auStack_188c,local_24ac);
      local_24a8 = 0x26;
    }
    param_3[1] = *(int *)(iVar1 + 8);
    *param_3 = *(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8);
  }
  return 0;
}



// ==== cos_http_method_to_string_lower @ 0043c500 size=192

undefined * cos_http_method_to_string_lower(uint param_1)

{
  undefined *puVar1;
  
  if (param_1 < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0043c53c */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined *)(*(code *)(&_gp_1 + *(int *)(PTR_LAB_00560984 + param_1 * 4 + 0x60a0)))();
    return puVar1;
  }
  return PTR_LAB_00560984 + 0x6098;
}



// ==== cos_base64_encode @ 0043c5c0 size=608

int cos_base64_encode(byte *param_1,int param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  byte *local_res0;
  int local_res4;
  undefined1 *local_res8;
  
  local_res0 = param_1;
  local_res4 = param_2;
  local_res8 = param_3;
  do {
    if (local_res4 == 0) {
LAB_0043c7fc:
      return (int)local_res8 - (int)param_3;
    }
    *local_res8 = *(undefined1 *)(*(int *)(PTR_DAT_0056098c + 0x5d0) + (uint)(*local_res0 >> 2));
    if (local_res4 == 1) {
      local_res8[1] = *(undefined1 *)(*(int *)(PTR_DAT_0056098c + 0x5d0) + (*local_res0 & 3) * 0x10)
      ;
      puVar1 = local_res8 + 3;
      local_res8[2] = 0x3d;
      local_res8 = local_res8 + 4;
      *puVar1 = 0x3d;
      goto LAB_0043c7fc;
    }
    local_res8[1] =
         *(undefined1 *)
          (*(int *)(PTR_DAT_0056098c + 0x5d0) +
          ((*local_res0 & 3) << 4 | (uint)(local_res0[1] >> 4)));
    if (local_res4 == 2) {
      puVar1 = local_res8 + 3;
      local_res8[2] =
           *(undefined1 *)(*(int *)(PTR_DAT_0056098c + 0x5d0) + (local_res0[1] & 0xf) * 4);
      local_res8 = local_res8 + 4;
      *puVar1 = 0x3d;
      goto LAB_0043c7fc;
    }
    puVar1 = local_res8 + 3;
    local_res8[2] =
         *(undefined1 *)
          (*(int *)(PTR_DAT_0056098c + 0x5d0) +
          ((local_res0[1] & 0xf) << 2 | (uint)(local_res0[2] >> 6)));
    local_res8 = local_res8 + 4;
    *puVar1 = *(undefined1 *)(*(int *)(PTR_DAT_0056098c + 0x5d0) + (local_res0[2] & 0x3f));
    local_res0 = local_res0 + 3;
    local_res4 = local_res4 + -3;
  } while( true );
}



// ==== COS_HMAC_SHA1 @ 0043c820 size=580

void COS_HMAC_SHA1(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int local_res8;
  int local_100;
  byte abStack_fc [64];
  byte abStack_bc [64];
  undefined1 auStack_7c [20];
  undefined1 auStack_68 [96];
  
  local_res8 = param_3;
  if (0x40 < param_3) {
    local_res8 = 0x40;
  }
  for (local_100 = 0; local_100 < local_res8; local_100 = local_100 + 1) {
    abStack_fc[local_100] = *(byte *)(param_2 + local_100) ^ 0x5c;
    abStack_bc[local_100] = *(byte *)(param_2 + local_100) ^ 0x36;
  }
  for (; local_100 < 0x40; local_100 = local_100 + 1) {
    abStack_fc[local_100] = 0x5c;
    abStack_bc[local_100] = 0x36;
  }
  (*(code *)PTR_apr_sha1_init_00560ec4)(auStack_68);
  (*(code *)PTR_apr_sha1_update_00560ec8)(auStack_68,abStack_bc,0x40);
  (*(code *)PTR_apr_sha1_update_00560ec8)(auStack_68,param_4,param_5);
  (*(code *)PTR_apr_sha1_final_00560ecc)(auStack_7c,auStack_68);
  (*(code *)PTR_apr_sha1_init_00560ec4)(auStack_68);
  (*(code *)PTR_apr_sha1_update_00560ec8)(auStack_68,abStack_fc,0x40);
  (*(code *)PTR_apr_sha1_update_00560ec8)(auStack_68,auStack_7c,0x14);
  (*(code *)PTR_apr_sha1_final_00560ecc)(param_1,auStack_68);
  return;
}



// ==== cos_md5 @ 0043ca64 size=312

int cos_md5(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_64 [92];
  
  iVar1 = (*(code *)PTR_apr_palloc_00560a74)(param_1,0x11);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar2 = (*(code *)PTR_apr_md5_init_00560ed0)(auStack_64);
    if (iVar2 == 0) {
      iVar2 = (*(code *)PTR_apr_md5_update_00560ed4)(auStack_64,param_2,param_3);
      if (iVar2 == 0) {
        iVar2 = (*(code *)PTR_apr_md5_final_00560ed8)(iVar1,auStack_64);
        if (iVar2 == 0) {
          *(undefined1 *)(iVar1 + 0x10) = 0;
        }
        else {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}



// ==== cos_url_decode @ 0043cb9c size=384

undefined4 cos_url_decode(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *local_res0;
  byte *local_res4;
  byte local_10;
  
  local_res0 = param_1;
  local_res4 = param_2;
  if (param_1 != (byte *)0x0) {
    while( true ) {
      pbVar1 = local_res0 + 1;
      local_10 = *local_res0;
      if (local_10 == 0) break;
      if (local_10 == 0x25) {
        if ((*pbVar1 == 0) || ((char)PTR_LAB_00560984[*pbVar1 + 0x6150] < '\0')) {
LAB_0043cc74:
          *local_res4 = 0;
          return 0xffffffff;
        }
        if ((local_res0[2] == 0) || ((char)PTR_LAB_00560984[local_res0[2] + 0x6150] < '\0'))
        goto LAB_0043cc74;
        local_10 = (byte)((uint)((int)(char)PTR_LAB_00560984[*pbVar1 + 0x6150] << 0x1c) >> 0x18) |
                   PTR_LAB_00560984[local_res0[2] + 0x6150];
        local_res0 = local_res0 + 3;
      }
      else {
        local_res0 = pbVar1;
        if (local_10 == 0x2b) {
          local_10 = 0x20;
        }
      }
      *local_res4 = local_10;
      local_res4 = local_res4 + 1;
    }
  }
  *local_res4 = 0;
  return 0;
}



// ==== cos_atoi64 @ 0043d490 size=140

undefined4 cos_atoi64(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_cos_strtoull_00560edc)(param_1,0,10);
  return uVar1;
}



// ==== cos_strtoull @ 0043d51c size=1372

/* WARNING: Removing unreachable block (ram,0x0043d860) */

undefined8 cos_strtoull(byte *param_1,undefined4 *param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  int iVar8;
  ulonglong uVar9;
  uint local_res8;
  byte *local_50;
  uint local_48;
  int local_44;
  uint local_40;
  int local_38;
  
  pbVar7 = param_1;
  do {
    local_50 = pbVar7;
    pbVar7 = local_50 + 1;
    local_40 = (uint)*local_50;
  } while ((*(ushort *)(*(int *)PTR___ctype_b_00561578 + local_40 * 2) & 0x20) != 0);
  if (local_40 == 0x2d) {
    bVar3 = true;
    local_40 = (uint)(char)*pbVar7;
    pbVar7 = local_50 + 2;
  }
  else {
    bVar3 = false;
    if (local_40 == 0x2b) {
      local_40 = (uint)(char)*pbVar7;
      pbVar7 = local_50 + 2;
    }
  }
  local_50 = pbVar7;
  local_res8 = param_3;
  if ((((param_3 == 0) || (param_3 == 0x10)) && (local_40 == 0x30)) &&
     ((*local_50 == 0x78 || (*local_50 == 0x58)))) {
    local_40 = (uint)(char)local_50[1];
    local_50 = local_50 + 2;
    local_res8 = 0x10;
  }
  if (local_res8 == 0) {
    if (local_40 == 0x30) {
      local_res8 = 8;
    }
    else {
      local_res8 = 10;
    }
  }
  iVar4 = (int)local_res8 >> 0x1f;
  uVar9 = (*(code *)PTR___udivdi3_00560ee0)(0xffffffff,0xffffffff,local_res8,iVar4);
  iVar5 = (*(code *)PTR___umoddi3_00560ee4)(0xffffffff,0xffffffff,local_res8,iVar4);
  local_48 = 0;
  local_44 = 0;
  local_38 = 0;
  do {
    if ((*(ushort *)(*(int *)PTR___ctype_b_00561578 + local_40 * 2) & 8) == 0) {
      if ((*(ushort *)(*(int *)PTR___ctype_b_00561578 + local_40 * 2) & 4) == 0) {
LAB_0043d9a8:
        if ((bVar3) && (0 < local_38)) {
          local_48 = -local_48;
          local_44 = -(uint)(local_48 != 0) - local_44;
        }
        if (param_2 != (undefined4 *)0x0) {
          if (local_38 != 0) {
            param_1 = local_50 + -1;
          }
          *param_2 = param_1;
        }
        return CONCAT44(local_44,local_48);
      }
      if ((*(ushort *)(*(int *)PTR___ctype_b_00561578 + local_40 * 2) & 1) == 0) {
        iVar8 = 0x57;
      }
      else {
        iVar8 = 0x37;
      }
      local_40 = local_40 - iVar8;
    }
    else {
      local_40 = local_40 - 0x30;
    }
    if ((int)local_res8 <= (int)local_40) goto LAB_0043d9a8;
    if (-1 < local_38) {
      if ((uVar9 < CONCAT44(local_44,local_48)) ||
         ((uVar9 == CONCAT44(local_44,local_48) && (iVar5 < (int)local_40)))) {
        local_38 = -1;
        local_48 = 0xffffffff;
        local_44 = -1;
        puVar6 = (undefined4 *)(*(code *)PTR___errno_location_005614f0)();
        *puVar6 = 0x22;
      }
      else {
        local_38 = 1;
        iVar8 = local_48 * iVar4;
        uVar1 = (ulonglong)local_48;
        uVar2 = (uint)(uVar1 * local_res8);
        local_48 = uVar2 + local_40;
        local_44 = (uint)(local_48 < uVar2) +
                   local_44 * local_res8 + iVar8 + (int)(uVar1 * local_res8 >> 0x20) +
                   ((int)local_40 >> 0x1f);
      }
    }
    local_40 = (uint)*local_50;
    local_50 = local_50 + 1;
  } while( true );
}



// ==== cos_atoui64 @ 0043da78 size=124

undefined4 cos_atoui64(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_cos_strtoull_00560edc)(param_1,0,10);
  return uVar1;
}



// ==== cos_get_hex_from_digest @ 0043daf4 size=308

void cos_get_hex_from_digest(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_20;
  int local_1c;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar1 = (uint)(PTR_LAB_00560984 + 0x60b7) & 3;
  uVar2 = (uint)(PTR_LAB_00560984 + 0x60b4) & 3;
  local_18 = (*(int *)(PTR_LAB_00560984 + 0x60b7 + -uVar1) << (3 - uVar1) * 8 |
             (uint)(PTR_LAB_00560984 + 0x60b4) & 0xffffffffU >> (uVar1 + 1) * 8) &
             -1 << (4 - uVar2) * 8 | *(uint *)(PTR_LAB_00560984 + 0x60b4 + -uVar2) >> uVar2 * 8;
  local_14 = *(undefined4 *)(PTR_LAB_00560984 + 0x60b8);
  local_10 = *(undefined4 *)(PTR_LAB_00560984 + 0x60bc);
  local_c = *(undefined4 *)(PTR_LAB_00560984 + 0x60c0);
  local_20 = 0;
  for (local_1c = 0; local_1c < 0x14; local_1c = local_1c + 1) {
    iVar3 = local_20 + 1;
    *(undefined1 *)(param_1 + local_20) =
         *(undefined1 *)((int)&local_18 + (uint)(*(byte *)(param_2 + local_1c) >> 4));
    local_20 = local_20 + 2;
    *(undefined1 *)(param_1 + iVar3) =
         *(undefined1 *)((int)&local_18 + (*(byte *)(param_2 + local_1c) & 0xf));
  }
  return;
}



// ==== cos_get_hmac_sha1_hexdigest @ 0043dc28 size=152

void cos_get_hmac_sha1_hexdigest
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined1 auStack_20 [24];
  
  (*(code *)PTR_COS_HMAC_SHA1_00560ee8)(auStack_20,param_2,param_3,param_4,param_5);
  (*(code *)PTR_cos_get_hex_from_digest_00560eec)(param_1,auStack_20);
  return;
}



// ==== cos_get_sha1_hexdigest @ 0043dcc0 size=204

void cos_get_sha1_hexdigest(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_80 [20];
  undefined1 auStack_6c [100];
  
  (*(code *)PTR_apr_sha1_init_00560ec4)(auStack_6c);
  (*(code *)PTR_apr_sha1_update_00560ec8)(auStack_6c,param_2,param_3);
  (*(code *)PTR_apr_sha1_final_00560ecc)(auStack_80,auStack_6c);
  (*(code *)PTR_cos_get_hex_from_digest_00560eec)(param_1,auStack_80);
  return;
}



// ==== cos_init_multipart_upload @ 0043e21c size=544

int * cos_init_multipart_upload
                (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_14;
  int local_10 [2];
  
  local_14 = 0;
  local_10[0] = 0;
  uVar1 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,0,1);
  (*(code *)PTR_apr_table_add_00560b64)(uVar1,PTR_COS_UPLOADS_00560ef0,PTR_LAB_00560984 + 0x6250);
  uVar2 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,param_5,1);
  (*(code *)PTR_cos_set_multipart_content_type_00560ef4)(uVar2);
  (*(code *)PTR_cos_init_object_request_00560b68)
            (param_1,param_2,param_3,3,&local_14,uVar1,uVar2,0,0,0,local_10);
  piVar3 = (int *)(*(code *)PTR_cos_process_request_00560b70)(param_1,local_14,local_10[0]);
  (*(code *)PTR_cos_fill_read_response_header_00560b78)(local_10[0],param_6);
  iVar4 = (*(code *)(PTR_LAB_00560eb4 + -0x1e44))(piVar3);
  if ((iVar4 != 0) &&
     (iVar4 = (*(code *)PTR_cos_upload_id_parse_from_body_00560ef8)
                        (*(undefined4 *)(param_1 + 8),local_10[0] + 8,param_4), iVar4 != 0)) {
    *piVar3 = iVar4;
    piVar3[1] = (int)PTR_COS_XML_PARSE_ERROR_CODE_00560bdc;
    piVar3[2] = 0;
  }
  return piVar3;
}



// ==== cos_list_upload_part @ 0043e5b4 size=816

int * cos_list_upload_part
                (int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_50;
  int local_4c;
  undefined1 auStack_48 [64];
  
  local_50 = 0;
  local_4c = 0;
  uVar1 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,0,4);
  (*(code *)PTR_apr_table_add_00560b64)
            (uVar1,PTR_COS_UPLOAD_ID_00560efc,*(undefined4 *)(param_4 + 4));
  iVar2 = (*(code *)(PTR_LAB_00560eb4 + -0x1ea8))(param_5);
  if (iVar2 == 0) {
    (*(code *)PTR_apr_table_add_00560b64)
              (uVar1,PTR_COS_ENCODING_TYPE_00560f00,*(undefined4 *)(param_5 + 4));
  }
  (*(code *)PTR_apr_snprintf_00560ab0)
            (auStack_48,0x40,PTR_LAB_00560984 + 0x6254,*(undefined4 *)(param_5 + 0x10));
  (*(code *)PTR_apr_table_add_00560b64)(uVar1,PTR_COS_MAX_PARTS_00560f04,auStack_48);
  iVar2 = (*(code *)(PTR_LAB_00560eb4 + -0x1ea8))(param_5 + 8);
  if (iVar2 == 0) {
    (*(code *)PTR_apr_table_add_00560b64)
              (uVar1,PTR_COS_PART_NUMBER_MARKER_00560f08,*(undefined4 *)(param_5 + 0xc));
  }
  uVar3 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,0,0);
  (*(code *)PTR_cos_init_object_request_00560b68)
            (param_1,param_2,param_3,0,&local_50,uVar1,uVar3,0,0,0,&local_4c);
  piVar4 = (int *)(*(code *)PTR_cos_process_request_00560b70)(param_1,local_50,local_4c);
  (*(code *)PTR_cos_fill_read_response_header_00560b78)(local_4c,param_6);
  iVar2 = (*(code *)(PTR_LAB_00560eb4 + -0x1e44))(piVar4);
  if ((iVar2 != 0) &&
     (iVar2 = (*(code *)PTR_cos_list_parts_parse_from_body_00560f0c)
                        (*(undefined4 *)(param_1 + 8),local_4c + 8,param_5 + 0x20,param_5 + 0x18,
                         param_5 + 0x14), iVar2 != 0)) {
    *piVar4 = iVar2;
    piVar4[1] = (int)PTR_COS_XML_PARSE_ERROR_CODE_00560bdc;
    piVar4[2] = 0;
  }
  return piVar4;
}



// ==== cos_complete_multipart_upload @ 0043ed0c size=148

undefined4
cos_complete_multipart_upload
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_cos_do_complete_multipart_upload_00560d5c)
                    (param_1,param_2,param_3,param_4,param_5,param_6,0,param_7,0);
  return uVar1;
}



// ==== cos_do_complete_multipart_upload @ 0043eda0 size=508

undefined4
cos_do_complete_multipart_upload
          (int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 auStack_10 [8];
  
  local_18 = 0;
  local_14 = 0;
  uVar1 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,param_7,1);
  (*(code *)PTR_apr_table_add_00560b64)
            (uVar1,PTR_COS_UPLOAD_ID_00560efc,*(undefined4 *)(param_4 + 4));
  uVar2 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,param_6,1);
  (*(code *)PTR_cos_set_multipart_content_type_00560ef4)(uVar2);
  (*(code *)PTR_cos_init_object_request_00560b68)
            (param_1,param_2,param_3,3,&local_18,uVar1,uVar2,0,0,0,&local_14);
  (*(code *)PTR_build_complete_multipart_upload_body_00560f2c)
            (*(undefined4 *)(param_1 + 8),param_5,auStack_10);
  (*(code *)PTR_cos_write_request_body_from_buffer_00560b6c)(auStack_10,local_18);
  uVar1 = (*(code *)PTR_cos_process_request_00560b70)(param_1,local_18,local_14);
  (*(code *)PTR_cos_fill_read_response_header_00560b78)(local_14,param_8);
  (*(code *)PTR_cos_fill_read_response_body_00560b74)(local_14,param_9);
  return uVar1;
}



// ==== cos_do_upload_part_from_buffer @ 0043f038 size=660

undefined4
cos_do_upload_part_from_buffer
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
          undefined4 param_10,undefined4 param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_50;
  int local_4c;
  undefined1 auStack_48 [64];
  
  local_50 = 0;
  local_4c = 0;
  uVar1 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,param_9,2);
  (*(code *)PTR_apr_table_add_00560b64)
            (uVar1,PTR_COS_UPLOAD_ID_00560efc,*(undefined4 *)(param_4 + 4));
  (*(code *)PTR_apr_snprintf_00560ab0)(auStack_48,0x40,PTR_LAB_00560984 + 0x6254,param_5);
  (*(code *)PTR_apr_table_add_00560b64)(uVar1,PTR_COS_PARTNUMBER_00560f34,auStack_48);
  uVar2 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,param_8,0);
  (*(code *)PTR_cos_init_object_request_00560b68)
            (param_1,param_2,param_3,2,&local_50,uVar1,uVar2,param_7,0,0,&local_4c);
  (*(code *)PTR_cos_write_request_body_from_buffer_00560b6c)(param_6,local_50);
  uVar1 = (*(code *)PTR_cos_process_request_00560b70)(param_1,local_50,local_4c);
  (*(code *)PTR_cos_fill_read_response_header_00560b78)(local_4c,param_10);
  (*(code *)PTR_cos_fill_read_response_body_00560b74)(local_4c,param_11);
  iVar3 = (*(code *)PTR_is_enable_crc_00560b7c)(param_1);
  if (iVar3 != 0) {
    iVar3 = (*(code *)PTR_has_crc_in_response_00560b80)(local_4c);
    if (iVar3 != 0) {
      (*(code *)PTR_cos_check_crc_consistent_00560b84)
                (*(undefined4 *)(local_50 + 0x50),*(undefined4 *)(local_50 + 0x54),
                 *(undefined4 *)(local_4c + 4),uVar1);
    }
  }
  return uVar1;
}



// ==== cos_upload_part_from_file @ 0043f2cc size=156

undefined4
cos_upload_part_from_file
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_cos_do_upload_part_from_file_00560f38)
                    (param_1,param_2,param_3,param_4,param_5,param_6,0,0,0,param_7,0);
  return uVar1;
}



// ==== cos_do_upload_part_from_file @ 0043f368 size=772

int * cos_do_upload_part_from_file
                (int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                undefined4 param_10,undefined4 param_11)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int local_54;
  int local_50;
  undefined1 auStack_4c [68];
  
  local_54 = 0;
  local_50 = 0;
  piVar1 = (int *)(*(code *)PTR_cos_status_create_00560b8c)(*(undefined4 *)(param_1 + 8));
  uVar2 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,param_9,2);
  (*(code *)PTR_apr_table_add_00560b64)
            (uVar2,PTR_COS_UPLOAD_ID_00560efc,*(undefined4 *)(param_4 + 4));
  (*(code *)PTR_apr_snprintf_00560ab0)(auStack_4c,0x40,PTR_LAB_00560984 + 0x6254,param_5);
  (*(code *)PTR_apr_table_add_00560b64)(uVar2,PTR_COS_PARTNUMBER_00560f34,auStack_4c);
  uVar3 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,param_8,0);
  (*(code *)PTR_cos_init_object_request_00560b68)
            (param_1,param_2,param_3,2,&local_54,uVar2,uVar3,param_7,0,0,&local_50);
  iVar4 = (*(code *)PTR_cos_write_request_body_from_upload_file_00560f3c)
                    (*(undefined4 *)(param_1 + 8),param_6,local_54);
  if (iVar4 == 0) {
    piVar1 = (int *)(*(code *)PTR_cos_process_request_00560b70)(param_1,local_54,local_50);
    (*(code *)PTR_cos_fill_read_response_header_00560b78)(local_50,param_10);
    (*(code *)PTR_cos_fill_read_response_body_00560b74)(local_50,param_11);
    iVar4 = (*(code *)PTR_is_enable_crc_00560b7c)(param_1);
    if ((iVar4 != 0) && (iVar4 = (*(code *)PTR_has_crc_in_response_00560b80)(local_50), iVar4 != 0))
    {
      (*(code *)PTR_cos_check_crc_consistent_00560b84)
                (*(undefined4 *)(local_54 + 0x50),*(undefined4 *)(local_54 + 0x54),
                 *(undefined4 *)(local_50 + 4),piVar1);
    }
  }
  else {
    *piVar1 = iVar4;
    piVar1[1] = (int)PTR_COS_OPEN_FILE_ERROR_CODE_00560b94;
    piVar1[2] = 0;
  }
  return piVar1;
}



// ==== cos_upload_part_copy @ 0043f66c size=924

int * cos_upload_part_copy(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_50;
  int local_4c;
  undefined1 auStack_48 [64];
  
  local_50 = 0;
  local_4c = 0;
  (*(code *)PTR_cos_status_create_00560b8c)(*(undefined4 *)(param_1 + 8));
  uVar1 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,0,2);
  (*(code *)PTR_apr_table_add_00560b64)
            (uVar1,PTR_COS_UPLOAD_ID_00560efc,*(undefined4 *)(param_2 + 0x1c));
  (*(code *)PTR_apr_snprintf_00560ab0)
            (auStack_48,0x40,PTR_LAB_00560984 + 0x6254,*(undefined4 *)(param_2 + 0x20));
  (*(code *)PTR_apr_table_add_00560b64)(uVar1,PTR_COS_PARTNUMBER_00560f34,auStack_48);
  uVar2 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,param_3,2);
  (*(code *)PTR_apr_table_add_00560b64)
            (uVar2,PTR_COS_COPY_SOURCE_00560f40,*(undefined4 *)(param_2 + 4));
  if (((*(int *)(param_2 + 0x28) != -1) || (*(int *)(param_2 + 0x2c) != -1)) &&
     ((*(int *)(param_2 + 0x30) != -1 || (*(int *)(param_2 + 0x34) != -1)))) {
    uVar3 = (*(code *)PTR_apr_psprintf_005609f4)
                      (*(undefined4 *)(param_1 + 8),PTR_LAB_00560984 + 0x6258,
                       *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),
                       *(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34));
    (*(code *)PTR_apr_table_add_00560b64)(uVar2,PTR_COS_COPY_SOURCE_RANGE_00560f44,uVar3);
  }
  (*(code *)PTR_cos_init_object_request_00560b68)
            (param_1,param_2 + 8,param_2 + 0x10,2,&local_50,uVar1,uVar2,0,0,0,&local_4c);
  piVar4 = (int *)(*(code *)PTR_cos_process_request_00560b70)(param_1,local_50,local_4c);
  (*(code *)PTR_cos_fill_read_response_header_00560b78)(local_4c,param_4);
  iVar5 = (*(code *)(PTR_LAB_00560eb4 + -0x1e44))(piVar4);
  if (((iVar5 != 0) && (*(int *)(param_2 + 0x38) != 0)) &&
     (iVar5 = (*(code *)PTR_cos_copy_object_parse_from_body_00560be4)
                        (*(undefined4 *)(param_1 + 8),local_4c + 8,*(undefined4 *)(param_2 + 0x38)),
     iVar5 != 0)) {
    *piVar4 = iVar5;
    piVar4[1] = (int)PTR_COS_XML_PARSE_ERROR_CODE_00560bdc;
    piVar4[2] = 0;
  }
  return piVar4;
}



// ==== cos_get_sorted_uploaded_part @ 0043fa08 size=1192

undefined4
cos_get_sorted_uploaded_part
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          int *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 *local_38;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_1c = 0;
  local_48 = 0;
  local_3c = 0;
  local_18 = 0;
  uVar6 = *(undefined4 *)(param_1 + 8);
  iVar1 = (*(code *)PTR_apr_palloc_00560a74)(uVar6,*(int *)PTR_COS_MAX_PART_NUM_00560c5c << 2);
  iVar2 = (*(code *)PTR_cos_create_list_upload_part_params_00560f48)(uVar6);
  while( true ) {
    local_44 = 0;
    if (*(int *)(iVar2 + 0x14) == 0) {
      *param_6 = local_3c;
      *(undefined4 *)(param_1 + 8) = uVar6;
      return local_48;
    }
    (*(code *)PTR_apr_pool_create_ex_005609cc)(&local_1c,uVar6,0,0);
    *(undefined4 *)(param_1 + 8) = local_1c;
    uVar3 = (*(code *)PTR_cos_list_upload_part_00560f4c)
                      (param_1,param_2,param_3,param_4,iVar2,&local_18);
    iVar4 = (*(code *)(PTR_LAB_00560eb4 + -0x1e44))(uVar3);
    if (iVar4 == 0) break;
    if (*(int *)(iVar2 + 0x14) == 0) {
      local_48 = (*(code *)PTR_cos_status_dup_00560be8)(uVar6,uVar3);
    }
    for (local_38 = *(undefined4 **)(iVar2 + 0x20); local_38 != (undefined4 *)(iVar2 + 0x20);
        local_38 = (undefined4 *)*local_38) {
      local_10 = local_38[7];
      local_14 = (*(code *)PTR_atoi_00561564)(local_38[3]);
      puVar7 = (undefined4 *)(iVar1 + local_44 * 8);
      *puVar7 = local_14;
      puVar7[1] = local_10;
      local_3c = local_3c + 1;
      local_44 = local_44 + 1;
    }
    *(int *)(iVar2 + 0x20) = iVar2 + 0x20;
    *(int *)(iVar2 + 0x24) = iVar2 + 0x20;
    if (*(int *)(iVar2 + 0x1c) != 0) {
      uVar3 = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(iVar2 + 0x1c));
      *(undefined4 *)(iVar2 + 8) = uVar3;
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar2 + 0x1c);
    }
    (*(code *)PTR_qsort_00561594)(iVar1,local_3c,8,PTR_part_sort_cmp_00560f50);
    for (local_40 = 0; local_40 < local_44; local_40 = local_40 + 1) {
      iVar4 = (*(code *)PTR_cos_create_complete_part_content_00560d50)(uVar6);
      uVar3 = (*(code *)PTR_apr_psprintf_005609f4)
                        (uVar6,PTR_LAB_00560984 + 0x6254,*(undefined4 *)(iVar1 + local_40 * 8));
      uVar5 = (*(code *)PTR_strlen_00561504)(uVar3);
      *(undefined4 *)(iVar4 + 8) = uVar5;
      *(undefined4 *)(iVar4 + 0xc) = uVar3;
      uVar3 = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(iVar1 + local_40 * 8 + 4));
      *(undefined4 *)(iVar4 + 0x10) = uVar3;
      *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(iVar1 + local_40 * 8 + 4);
      (*(code *)(PTR_LAB_00560eb4 + -0x1f14))(iVar4,param_5);
    }
    (*(code *)PTR_apr_pool_destroy_005609e8)(local_1c);
  }
  uVar3 = (*(code *)PTR_cos_status_dup_00560be8)(uVar6,uVar3);
  (*(code *)PTR_apr_pool_destroy_005609e8)(local_1c);
  *(undefined4 *)(param_1 + 8) = uVar6;
  return uVar3;
}



// ==== cos_download_part_to_file @ 0044101c size=136

undefined4
cos_download_part_to_file
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_cos_do_download_part_to_file_00560f5c)
                    (param_1,param_2,param_3,param_4,0,0,0,param_5);
  return uVar1;
}



// ==== cos_do_download_part_to_file @ 004410a4 size=816

int * cos_do_download_part_to_file
                (int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_50;
  int local_4c;
  undefined1 auStack_48 [64];
  
  local_50 = 0;
  local_4c = 0;
  uVar1 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,param_6,1);
  uVar2 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,param_7,0);
  uVar5 = *(uint *)(param_4 + 0x10) - 1;
  (*(code *)PTR_apr_snprintf_00560ab0)
            (auStack_48,0x40,PTR_LAB_00560984 + 0x6258,*(undefined4 *)(param_4 + 0xc),
             *(undefined4 *)(param_4 + 8),*(undefined4 *)(param_4 + 0xc),uVar5,
             (uint)(uVar5 < *(uint *)(param_4 + 0x10)) + *(int *)(param_4 + 0x14) + -1);
  (*(code *)PTR_apr_table_add_00560b64)(uVar1,PTR_COS_RANGE_00560f60,auStack_48);
  (*(code *)PTR_cos_init_object_request_00560b68)
            (param_1,param_2,param_3,0,&local_50,uVar2,uVar1,param_5,0,0,&local_4c);
  piVar3 = (int *)(*(code *)PTR_cos_status_create_00560b8c)(*(undefined4 *)(param_1 + 8));
  iVar4 = (*(code *)PTR_cos_init_read_response_body_to_file_part_00560f64)
                    (*(undefined4 *)(param_1 + 8),param_4,local_4c);
  if (iVar4 == 0) {
    piVar3 = (int *)(*(code *)PTR_cos_process_request_00560b70)(param_1,local_50,local_4c);
    (*(code *)PTR_cos_fill_read_response_header_00560b78)(local_4c,param_8);
    iVar4 = (*(code *)PTR_is_enable_crc_00560b7c)(param_1);
    if (((iVar4 != 0) && (iVar4 = (*(code *)PTR_has_crc_in_response_00560b80)(local_4c), iVar4 != 0)
        ) && (iVar4 = (*(code *)PTR_has_range_or_process_in_request_00560b9c)(local_50), iVar4 == 0)
       ) {
      (*(code *)PTR_cos_check_crc_consistent_00560b84)
                (*(undefined4 *)(local_4c + 0x40),*(undefined4 *)(local_4c + 0x44),
                 *(undefined4 *)(local_4c + 4),piVar3);
    }
  }
  else {
    *piVar3 = iVar4;
    piVar3[1] = (int)PTR_COS_OPEN_FILE_ERROR_CODE_00560b94;
    piVar3[2] = 0;
  }
  return piVar3;
}



