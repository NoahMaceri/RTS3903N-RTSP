/* oss — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "oss.h"

// ==== entry @ 00408cd0 size=92

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = PTR__fini_00560980;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_00561514)
            (PTR_main_00560978,param_2,&stack0x00000004,PTR__init_0056097c);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ==== check_ststoken @ 00409d74 size=428

undefined4 check_ststoken(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*DAT_00561918 == 1) {
    iVar1 = time(0);
    iVar1 = iVar1 + 0x7080;
  }
  else {
    iVar1 = time(0);
  }
  DAT_00561974 = iVar1 / 0x3c;
  uVar2 = 0;
  if (0x32 < (uint)(DAT_00561974 - DAT_00561978)) {
    iVar1 = get_ststoken(1);
    if (iVar1 == 0) {
      iVar1 = DAT_0056bba4 - DAT_0056bba0;
      DAT_00561978 = DAT_00561974;
      if (((iVar1 != DAT_00561918[0x278]) || (DAT_0056bba8 != DAT_00561918[0x279])) ||
         (DAT_0056bba4 != DAT_00561918[0x277])) {
        oss_set_lapse_framerate();
        oss_set_lapse_force_idr();
        iVar1 = DAT_0056bba4 - DAT_0056bba0;
      }
      FUN_0052f238("oss.c","check_ststoken",0x1ca,"video duration = %u, lapse video duration = %u",
                   iVar1,DAT_0056bba8);
      return 0;
    }
    FUN_0052f238("oss.c","check_ststoken",0x1ba,"get_ststoken failed!");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ==== add_pat_pmt @ 0040ad58 size=680

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void add_pat_pmt(int param_1,int *param_2,int *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  
  piVar5 = *(int **)(param_1 + 4);
  if ((uint)(piVar5[4] - piVar5[2]) < 0xbc) {
    iVar3 = oss_media_write_frame();
    if (iVar3 != 0) {
      uVar6 = 0x5a9;
      goto LAB_0040af84;
    }
    piVar5 = *(int **)(param_1 + 4);
  }
  *param_2 = *param_2 + 1;
  *param_3 = *param_3 + 1;
  DAT_0055ff2c._3_1_ = (byte)*param_2 & 0xf | 0x10;
  puVar1 = &DAT_0055ff2c;
  puVar2 = (undefined4 *)(*piVar5 + piVar5[2]);
  do {
    puVar10 = puVar2;
    puVar4 = puVar1;
    uVar8 = puVar4[1];
    uVar7 = puVar4[2];
    uVar6 = puVar4[3];
    *puVar10 = *puVar4;
    puVar10[1] = uVar8;
    puVar10[2] = uVar7;
    puVar10[3] = uVar6;
    puVar1 = puVar4 + 4;
    puVar2 = puVar10 + 4;
  } while (puVar4 + 4 != (undefined4 *)&DAT_0055ffdc);
  uVar7 = puVar4[5];
  uVar6 = puVar4[6];
  puVar10[4] = _DAT_0055ffdc;
  puVar10[5] = uVar7;
  puVar10[6] = uVar6;
  iVar9 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(iVar9 + 8) + 0xbc;
  *(int *)(iVar9 + 8) = iVar3;
  if ((0xbb < (uint)(*(int *)(iVar9 + 0x10) - iVar3)) ||
     (iVar3 = oss_media_write_frame(param_1), iVar3 == 0)) {
    _fdata._3_1_ = (byte)*param_3 & 0xf | 0x10;
    if (((param_4 != DAT_0056191c) && (DAT_0055fff0 != 0x1000)) && (DAT_0055fff0 != 0x2000)) {
      DAT_0056191c = param_4;
      if (param_4 == 0) {
        DAT_0055fe80._1_1_ = 0x1b;
        DAT_0055fe88._3_1_ = 0x2f;
        DAT_0055fe8c = 0x44;
        DAT_0055fe8d = 0xb9;
        DAT_0055fe8e = 0x9b;
      }
      else {
        DAT_0055fe80._1_1_ = 0x24;
        DAT_0055fe88._3_1_ = 199;
        DAT_0055fe8c = 0x72;
        DAT_0055fe8d = 0xb7;
        DAT_0055fe8e = 0xcb;
      }
    }
    puVar1 = &_fdata;
    puVar2 = (undefined4 *)(**(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[2]);
    do {
      puVar10 = puVar2;
      puVar4 = puVar1;
      uVar8 = puVar4[1];
      uVar7 = puVar4[2];
      uVar6 = puVar4[3];
      *puVar10 = *puVar4;
      puVar10[1] = uVar8;
      puVar10[2] = uVar7;
      puVar10[3] = uVar6;
      puVar1 = puVar4 + 4;
      puVar2 = puVar10 + 4;
    } while (puVar4 + 4 != (undefined4 *)0x55ff20);
    uVar7 = puVar4[5];
    uVar6 = puVar4[6];
    puVar10[4] = uRam0055ff20;
    puVar10[5] = uVar7;
    puVar10[6] = uVar6;
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(*(int *)(param_1 + 4) + 8) + 0xbc;
    return;
  }
  uVar6 = 0x5b9;
LAB_0040af84:
  FUN_0052f238("oss.c","add_pat_pmt",uVar6,"oss_media_write_frame failed!");
  return;
}



// ==== cipher_module_init @ 0040cb20 size=200

undefined4 cipher_module_init(void)

{
  void *pvVar1;
  size_t __size;
  
  __size = DAT_0055ffe8 + 0x10;
  if (DAT_0055ffe8 == 0) {
    DAT_00561664 = 0;
  }
  else {
    pvVar1 = malloc(__size);
    if (pvVar1 == (void *)0x0) {
      DAT_00561664 = 0;
    }
    else {
      DAT_00561664 = (int)pvVar1 + 0x10U & 0xfffffff0;
      *(void **)(DAT_00561664 - 4) = pvVar1;
    }
    pvVar1 = malloc(__size);
    if (pvVar1 != (void *)0x0) {
      DAT_00561660 = (int)pvVar1 + 0x10U & 0xfffffff0;
      *(void **)(DAT_00561660 - 4) = pvVar1;
      if (DAT_00561664 != 0) {
        return 0;
      }
      goto LAB_0040cbb8;
    }
  }
  DAT_00561660 = 0;
LAB_0040cbb8:
  FUN_0052f238("oss.c","cipher_module_init",0x8f5,"_aligned_malloc failed!");
  return 0xffffffff;
}



// ==== restore @ 00425190 size=760

undefined4
restore(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
       undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 auStack_14 [12];
  
  local_1c = 0;
  local_18 = 0;
  uVar1 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,param_6,1);
  (*(code *)PTR_apr_table_add_00560b64)(uVar1,PTR_COS_RESTORE_00560bfc,PTR_LAB_00560984 + 0x4cc0);
  uVar2 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,param_5,1);
  (*(code *)PTR_cos_init_object_request_00560b68)
            (param_1,param_2,param_3,3,&local_1c,uVar1,uVar2,0,0,0,&local_18);
  (*(code *)PTR_build_object_restore_body_00560c00)(*(undefined4 *)(param_1 + 8),param_4,auStack_14)
  ;
  uVar1 = (*(code *)PTR_cos_buf_list_len_00560ae8)(auStack_14);
  uVar3 = (*(code *)PTR_cos_buf_list_content_00560c04)(*(undefined4 *)(param_1 + 8),auStack_14);
  uVar1 = (*(code *)PTR_cos_md5_00560c08)(*(undefined4 *)(param_1 + 8),uVar3,uVar1);
  uVar3 = (*(code *)PTR_apr_palloc_00560a74)(*(undefined4 *)(param_1 + 8),0x1c);
  iVar4 = (*(code *)PTR_memset_00561588)(uVar3,0,0x1c);
  iVar5 = (*(code *)PTR_cos_base64_encode_00560c0c)(uVar1,0x10,iVar4);
  *(undefined1 *)(iVar4 + iVar5) = 0;
  (*(code *)PTR_apr_table_addn_00560b30)(uVar2,PTR_COS_CONTENT_MD5_00560c10,iVar4);
  (*(code *)PTR_cos_write_request_body_from_buffer_00560b6c)(auStack_14,local_1c);
  uVar1 = (*(code *)PTR_cos_process_request_00560b70)(param_1,local_1c,local_18);
  (*(code *)PTR_cos_fill_read_response_header_00560b78)(local_18,param_7);
  return uVar1;
}



// ==== starts_with @ 004268f0 size=248

undefined4 starts_with(int *param_1,char *param_2)

{
  undefined4 uVar1;
  int local_10;
  
  if ((((param_1 == (int *)0x0) || (param_2 == (char *)0x0)) || (*param_1 < 1)) ||
     (*param_2 == '\0')) {
    uVar1 = 0;
  }
  else {
    for (local_10 = 0; (*(char *)(param_1[1] + local_10) != '\0' && (param_2[local_10] != '\0'));
        local_10 = local_10 + 1) {
      if (param_2[local_10] != *(char *)(param_1[1] + local_10)) {
        return 0;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}



// ==== part_sort_cmp @ 004298cc size=88

undefined4 part_sort_cmp(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*param_1 - *param_2 < 1) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// ==== is_enable_crc @ 00429c14 size=56

undefined4 is_enable_crc(int param_1)

{
  return *(undefined4 *)(**(int **)(param_1 + 4) + 0x18);
}



// ==== has_crc_in_response @ 00429c4c size=128

bool has_crc_in_response(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_apr_table_get_005609dc)
                    (*(undefined4 *)(param_1 + 4),PTR_COS_HASH_CRC64_ECMA_00560ca4);
  return iVar1 != 0;
}



// ==== has_range_or_process_in_request @ 00429ccc size=180

undefined4 has_range_or_process_in_request(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_apr_table_get_005609dc)
                    (*(undefined4 *)(param_1 + 0x18),PTR_LAB_00560984 + 0x57ac);
  if ((iVar1 == 0) &&
     (iVar1 = (*(code *)PTR_apr_table_get_005609dc)
                        (*(undefined4 *)(param_1 + 0x1c),PTR_COS_PROCESS_00560ca8), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// ==== upload_part @ 0042f040 size=888

undefined4 upload_part(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_14 [2];
  
  local_14[0] = 0;
  iVar1 = (*(code *)PTR_apr_atomic_read32_00560d00)(*(undefined4 *)(param_2 + 0x28));
  if (iVar1 == 0) {
    iVar7 = **(int **)(param_2 + 0x1c);
    puVar2 = (undefined4 *)
             (*(code *)PTR_cos_create_upload_file_00560d08)(*(undefined4 *)(param_2 + 8));
    uVar6 = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(*(int *)(param_2 + 0x18) + 4));
    *puVar2 = uVar6;
    puVar2[1] = *(undefined4 *)(*(int *)(param_2 + 0x18) + 4);
    uVar6 = *(undefined4 *)(*(int *)(param_2 + 0x1c) + 0xc);
    puVar2[2] = *(undefined4 *)(*(int *)(param_2 + 0x1c) + 8);
    puVar2[3] = uVar6;
    uVar3 = *(uint *)(*(int *)(param_2 + 0x1c) + 8);
    iVar1 = *(int *)(*(int *)(param_2 + 0x1c) + 0xc);
    iVar4 = *(int *)(*(int *)(param_2 + 0x1c) + 0x14);
    uVar8 = uVar3 + *(int *)(*(int *)(param_2 + 0x1c) + 0x10);
    puVar2[4] = uVar8;
    puVar2[5] = (uint)(uVar8 < uVar3) + iVar1 + iVar4;
    uVar6 = (*(code *)PTR_cos_upload_part_from_file_00560d0c)
                      (param_2,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),
                       *(undefined4 *)(param_2 + 0x14),iVar7 + 1,puVar2,local_14);
    iVar1 = (*(code *)(PTR_LAB_00560cb0 + -0x3294))(uVar6);
    if (iVar1 == 0) {
      (*(code *)PTR_apr_atomic_inc32_00560d04)(*(undefined4 *)(param_2 + 0x28));
      *(undefined4 *)(*(int *)(param_2 + 0x20) + 4) = uVar6;
      (*(code *)PTR_apr_queue_push_00560d10)
                (*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x20));
    }
    else {
      uVar5 = *(undefined4 *)(param_2 + 8);
      uVar6 = (*(code *)PTR_apr_table_get_005609dc)(local_14[0],PTR_LAB_00560984 + 0x5aa8);
      uVar6 = (*(code *)PTR_apr_pstrdup_00560b3c)(uVar5,uVar6);
      iVar1 = *(int *)(param_2 + 0x20);
      uVar5 = (*(code *)PTR_strlen_00561504)(uVar6);
      *(undefined4 *)(iVar1 + 8) = uVar5;
      *(undefined4 *)(*(int *)(param_2 + 0x20) + 0xc) = uVar6;
      (*(code *)PTR_apr_atomic_inc32_00560d04)(*(undefined4 *)(param_2 + 0x2c));
      (*(code *)PTR_apr_queue_push_00560d10)
                (*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x20));
      uVar6 = 0;
    }
  }
  else {
    (*(code *)PTR_apr_atomic_inc32_00560d04)(*(undefined4 *)(param_2 + 0x24));
    uVar6 = 0;
  }
  return uVar6;
}



// ==== upload_part_copy @ 004313c0 size=1072

undefined4 upload_part_copy(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 local_18 [3];
  
  local_18[0] = 0;
  iVar1 = (*(code *)PTR_apr_atomic_read32_00560d00)(*(undefined4 *)(param_2 + 0x28));
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)
             (*(code *)PTR_cos_create_upload_part_copy_params_00560da0)
                       (*(undefined4 *)(param_2 + 8));
    uVar6 = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(*(int *)(param_2 + 0x18) + 4));
    *puVar2 = uVar6;
    puVar2[1] = *(undefined4 *)(*(int *)(param_2 + 0x18) + 4);
    uVar6 = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(*(int *)(param_2 + 0xc) + 4));
    puVar2[2] = uVar6;
    puVar2[3] = *(undefined4 *)(*(int *)(param_2 + 0xc) + 4);
    uVar6 = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(*(int *)(param_2 + 0x10) + 4));
    puVar2[4] = uVar6;
    puVar2[5] = *(undefined4 *)(*(int *)(param_2 + 0x10) + 4);
    uVar6 = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(*(int *)(param_2 + 0x14) + 4));
    puVar2[6] = uVar6;
    puVar2[7] = *(undefined4 *)(*(int *)(param_2 + 0x14) + 4);
    uVar6 = *(undefined4 *)(*(int *)(param_2 + 0x1c) + 0xc);
    puVar2[10] = *(undefined4 *)(*(int *)(param_2 + 0x1c) + 8);
    puVar2[0xb] = uVar6;
    uVar3 = *(uint *)(*(int *)(param_2 + 0x1c) + 8);
    iVar1 = *(int *)(*(int *)(param_2 + 0x1c) + 0xc);
    iVar5 = *(int *)(*(int *)(param_2 + 0x1c) + 0x14);
    uVar7 = uVar3 + *(int *)(*(int *)(param_2 + 0x1c) + 0x10);
    puVar2[0xc] = uVar7 - 1;
    puVar2[0xd] = (uint)(uVar7 - 1 < uVar7) + (uint)(uVar7 < uVar3) + iVar1 + iVar5 + -1;
    puVar2[8] = **(int **)(param_2 + 0x1c) + 1;
    uVar6 = (*(code *)PTR_cos_upload_part_copy_00560da4)(param_2,puVar2,0,local_18);
    iVar1 = (*(code *)(PTR_LAB_00560cb0 + -0x3294))(uVar6);
    if (iVar1 == 0) {
      (*(code *)PTR_apr_atomic_inc32_00560d04)(*(undefined4 *)(param_2 + 0x28));
      *(undefined4 *)(*(int *)(param_2 + 0x20) + 4) = uVar6;
      (*(code *)PTR_apr_queue_push_00560d10)
                (*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x20));
    }
    else {
      uVar6 = (*(code *)PTR_apr_pstrdup_00560b3c)
                        (*(undefined4 *)(param_2 + 8),*(undefined4 *)(puVar2[0xe] + 4));
      iVar1 = *(int *)(param_2 + 0x20);
      uVar4 = (*(code *)PTR_strlen_00561504)(uVar6);
      *(undefined4 *)(iVar1 + 8) = uVar4;
      *(undefined4 *)(*(int *)(param_2 + 0x20) + 0xc) = uVar6;
      (*(code *)PTR_apr_atomic_inc32_00560d04)(*(undefined4 *)(param_2 + 0x2c));
      (*(code *)PTR_apr_queue_push_00560d10)
                (*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x20));
      uVar6 = 0;
    }
  }
  else {
    (*(code *)PTR_apr_atomic_inc32_00560d04)(*(undefined4 *)(param_2 + 0x24));
    uVar6 = 0;
  }
  return uVar6;
}



// ==== download_part @ 00432678 size=1040

undefined4 download_part(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_14 [2];
  
  local_14[0] = 0;
  iVar1 = (*(code *)PTR_apr_atomic_read32_00560d00)(*(undefined4 *)(param_2 + 0x28));
  if (iVar1 == 0) {
    iVar7 = **(int **)(param_2 + 0x1c);
    puVar2 = (undefined4 *)
             (*(code *)PTR_cos_create_upload_file_00560d08)(*(undefined4 *)(param_2 + 8));
    uVar6 = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(*(int *)(param_2 + 0x18) + 4));
    *puVar2 = uVar6;
    puVar2[1] = *(undefined4 *)(*(int *)(param_2 + 0x18) + 4);
    uVar6 = *(undefined4 *)(*(int *)(param_2 + 0x1c) + 0xc);
    puVar2[2] = *(undefined4 *)(*(int *)(param_2 + 0x1c) + 8);
    puVar2[3] = uVar6;
    uVar3 = *(uint *)(*(int *)(param_2 + 0x1c) + 8);
    iVar1 = *(int *)(*(int *)(param_2 + 0x1c) + 0xc);
    iVar4 = *(int *)(*(int *)(param_2 + 0x1c) + 0x14);
    uVar8 = uVar3 + *(int *)(*(int *)(param_2 + 0x1c) + 0x10);
    puVar2[4] = uVar8;
    puVar2[5] = (uint)(uVar8 < uVar3) + iVar1 + iVar4;
    uVar6 = (*(code *)PTR_cos_download_part_to_file_00560db8)
                      (param_2,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),puVar2
                       ,local_14);
    iVar1 = (*(code *)(PTR_LAB_00560cb0 + -0x3294))(uVar6);
    if (iVar1 == 0) {
      (*(code *)PTR_apr_atomic_inc32_00560d04)(*(undefined4 *)(param_2 + 0x28));
      *(undefined4 *)(*(int *)(param_2 + 0x20) + 4) = uVar6;
      (*(code *)PTR_apr_queue_push_00560d10)
                (*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x20));
    }
    else {
      if (3 < *(uint *)PTR_cos_log_level_005609ac) {
        uVar3 = puVar2[4] - 1;
        (**(code **)PTR_cos_log_format_005609b0)
                  (4,PTR_LAB_00560984 + 23000,0x419,PTR_LAB_00560984 + 0x5b94,
                   PTR_LAB_00560984 + 0x5ae8,iVar7 + 1,puVar2[2],puVar2[3],uVar3,
                   (uint)(uVar3 < (uint)puVar2[4]) + puVar2[5] + -1);
      }
      uVar5 = *(undefined4 *)(param_2 + 8);
      uVar6 = (*(code *)PTR_apr_table_get_005609dc)(local_14[0],PTR_LAB_00560984 + 0x5aa8);
      uVar6 = (*(code *)PTR_apr_pstrdup_00560b3c)(uVar5,uVar6);
      iVar1 = *(int *)(param_2 + 0x20);
      uVar5 = (*(code *)PTR_strlen_00561504)(uVar6);
      *(undefined4 *)(iVar1 + 8) = uVar5;
      *(undefined4 *)(*(int *)(param_2 + 0x20) + 0xc) = uVar6;
      (*(code *)PTR_apr_atomic_inc32_00560d04)(*(undefined4 *)(param_2 + 0x2c));
      (*(code *)PTR_apr_queue_push_00560d10)
                (*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x20));
      uVar6 = 0;
    }
  }
  else {
    (*(code *)PTR_apr_atomic_inc32_00560d04)(*(undefined4 *)(param_2 + 0x24));
    uVar6 = 0;
  }
  return uVar6;
}



// ==== LackOfContentLength @ 00432b64 size=2352

int * LackOfContentLength(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                         undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8
                         ,undefined4 param_9,undefined4 param_10,code *param_11)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 uVar13;
  uint local_80;
  uint local_78;
  int local_74;
  int local_70;
  undefined4 local_3c;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  undefined4 local_14 [2];
  
  local_3c = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_78 = 0;
  local_74 = 0;
  local_14[0] = 0;
  uVar11 = *(undefined4 *)(param_1 + 8);
  piVar1 = (int *)(*(code *)PTR_cos_status_create_00560b8c)(uVar11);
  (*(code *)PTR_apr_pool_create_ex_005609cc)(&local_3c,uVar11,0,0);
  *(undefined4 *)(param_1 + 8) = local_3c;
  uVar2 = (*(code *)PTR_cos_head_object_005609d4)(param_1,param_2,param_3,0,local_14);
  iVar3 = (*(code *)(PTR_LAB_00560cb0 + -0x3294))(uVar2);
  if (iVar3 == 0) {
    piVar1 = (int *)(*(code *)PTR_cos_status_dup_00560be8)(uVar11,uVar2);
    (*(code *)PTR_apr_pool_destroy_005609e8)(local_3c);
    *(undefined4 *)(param_1 + 8) = uVar11;
  }
  else {
    iVar3 = (*(code *)PTR_apr_table_get_005609dc)(local_14[0],PTR_COS_CONTENT_LENGTH_00560bec);
    if (iVar3 == 0) {
      *piVar1 = -0x3e2;
      piVar1[1] = (int)PTR_COS_LACK_OF_CONTENT_LEN_ERROR_CODE_00560dbc;
      piVar1[2] = 0;
      (*(code *)PTR_apr_pool_destroy_005609e8)(local_3c);
      *(undefined4 *)(param_1 + 8) = uVar11;
    }
    else {
      uVar13 = (*(code *)PTR_cos_atoi64_00560b40)(iVar3);
      uVar10 = (undefined4)((ulonglong)uVar13 >> 0x20);
      uVar2 = (undefined4)uVar13;
      (*(code *)PTR_apr_pool_destroy_005609e8)(local_3c);
      *(undefined4 *)(param_1 + 8) = uVar11;
      uVar13 = (*(code *)PTR_cos_get_safe_size_for_download_00560dc0)(param_9,param_10);
      uVar6 = (undefined4)((ulonglong)uVar13 >> 0x20);
      uVar4 = (*(code *)PTR_cos_get_part_num_00560d14)(uVar2,uVar10,(int)uVar13,uVar6);
      uVar5 = (*(code *)PTR_apr_palloc_00560a74)(uVar11,uVar4 * 0x28);
      (*(code *)PTR_cos_build_parts_00560d18)(uVar2,uVar10,(int)uVar13,uVar6,uVar5);
      uVar6 = (*(code *)PTR_apr_palloc_00560a74)(uVar11,uVar4 << 4);
      iVar3 = (*(code *)PTR_apr_palloc_00560a74)(uVar11,uVar4 * 0x38);
      (*(code *)PTR_cos_build_thread_params_00560d1c)
                (iVar3,uVar4,uVar11,param_1,param_2,param_3,param_4,auStack_38,uVar5,uVar6);
      iVar7 = (*(code *)PTR_apr_thread_pool_create_00560d24)(&local_30,0,param_7,uVar11);
      if (iVar7 == 0) {
        iVar7 = (*(code *)PTR_apr_queue_create_00560d2c)(&local_20,uVar4,uVar11);
        if (iVar7 == 0) {
          iVar7 = (*(code *)PTR_apr_queue_create_00560d2c)(&local_1c,uVar4,uVar11);
          if (iVar7 == 0) {
            (*(code *)PTR_cos_set_task_tracker_00560d34)
                      (iVar3,uVar4,&local_2c,&local_28,&local_24,local_20,local_1c);
            for (local_70 = 0; local_70 < (int)uVar4; local_70 = local_70 + 1) {
              (*(code *)PTR_apr_thread_pool_push_00560d3c)
                        (local_30,PTR_download_part_00560dc4,iVar3 + local_70 * 0x38,0,0);
            }
            iVar7 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_2c);
            iVar8 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_28);
            iVar9 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_24);
            local_80 = iVar7 + iVar8 + iVar9;
            while (local_80 < uVar4) {
              iVar7 = (*(code *)PTR_apr_queue_trypop_00560d40)(local_1c,&local_18);
              if ((iVar7 == 4) || (iVar7 == 0xb)) {
                (*(code *)PTR_apr_sleep_00560d44)(1000,0);
              }
              else {
                if (iVar7 == 0x1117e) break;
                if ((iVar7 == 0) && (param_11 != (code *)0x0)) {
                  uVar12 = local_78 + *(int *)(*local_18 + 0x10);
                  local_74 = (uint)(uVar12 < local_78) + local_74 + *(int *)(*local_18 + 0x14);
                  (*param_11)(uVar12,local_74,uVar2,uVar10);
                  local_78 = uVar12;
                }
              }
              iVar7 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_2c);
              iVar8 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_28);
              iVar9 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_24);
              local_80 = iVar7 + iVar8 + iVar9;
            }
            while (iVar7 = (*(code *)PTR_apr_queue_trypop_00560d40)(local_1c,&local_18), iVar7 == 0)
            {
              if (param_11 != (code *)0x0) {
                uVar12 = local_78 + *(int *)(*local_18 + 0x10);
                local_74 = (uint)(uVar12 < local_78) + local_74 + *(int *)(*local_18 + 0x14);
                (*param_11)(uVar12,local_74,uVar2,uVar10);
                local_78 = uVar12;
              }
            }
            iVar7 = (*(code *)PTR_apr_atomic_read32_00560d00)(&local_28);
            if (iVar7 == 0) {
              (*(code *)PTR_cos_destroy_thread_pool_00560d4c)(iVar3,uVar4);
              piVar1 = (int *)(*(code *)PTR_cos_status_create_00560b8c)
                                        (*(undefined4 *)(param_1 + 8));
            }
            else {
              (*(code *)PTR_apr_queue_pop_00560d48)(local_20,&local_18);
              piVar1 = (int *)(*(code *)PTR_cos_status_dup_00560be8)(uVar11,local_18[1]);
              (*(code *)PTR_cos_destroy_thread_pool_00560d4c)(iVar3,uVar4);
            }
          }
          else {
            *piVar1 = iVar7;
            piVar1[1] = (int)PTR_COS_CREATE_QUEUE_ERROR_CODE_00560d30;
            piVar1[2] = 0;
          }
        }
        else {
          *piVar1 = iVar7;
          piVar1[1] = (int)PTR_COS_CREATE_QUEUE_ERROR_CODE_00560d30;
          piVar1[2] = 0;
        }
      }
      else {
        *piVar1 = iVar7;
        piVar1[1] = (int)PTR_COS_CREATE_THREAD_POOL_ERROR_CODE_00560d28;
        piVar1[2] = 0;
      }
    }
  }
  return piVar1;
}



// ==== uploads @ 0043e8e4 size=1064

int * uploads(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
  uVar1 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,0,7);
  (*(code *)PTR_apr_table_add_00560b64)(uVar1,PTR_COS_UPLOADS_00560ef0,PTR_LAB_00560984 + 0x6250);
  iVar2 = (*(code *)(PTR_LAB_00560eb4 + -0x1ea8))(param_3);
  if (iVar2 == 0) {
    (*(code *)PTR_apr_table_add_00560b64)
              (uVar1,PTR_COS_ENCODING_TYPE_00560f00,*(undefined4 *)(param_3 + 4));
  }
  iVar2 = (*(code *)(PTR_LAB_00560eb4 + -0x1ea8))(param_3 + 8);
  if (iVar2 == 0) {
    (*(code *)PTR_apr_table_add_00560b64)
              (uVar1,PTR_COS_PREFIX_00560f10,*(undefined4 *)(param_3 + 0xc));
  }
  iVar2 = (*(code *)(PTR_LAB_00560eb4 + -0x1ea8))(param_3 + 0x20);
  if (iVar2 == 0) {
    (*(code *)PTR_apr_table_add_00560b64)
              (uVar1,PTR_COS_DELIMITER_00560f14,*(undefined4 *)(param_3 + 0x24));
  }
  iVar2 = (*(code *)(PTR_LAB_00560eb4 + -0x1ea8))(param_3 + 0x10);
  if (iVar2 == 0) {
    (*(code *)PTR_apr_table_add_00560b64)
              (uVar1,PTR_COS_KEY_MARKER_00560f18,*(undefined4 *)(param_3 + 0x14));
  }
  iVar2 = (*(code *)(PTR_LAB_00560eb4 + -0x1ea8))(param_3 + 0x18);
  if (iVar2 == 0) {
    (*(code *)PTR_apr_table_add_00560b64)
              (uVar1,PTR_COS_UPLOAD_ID_MARKER_00560f1c,*(undefined4 *)(param_3 + 0x1c));
  }
  (*(code *)PTR_apr_snprintf_00560ab0)
            (auStack_48,0x40,PTR_LAB_00560984 + 0x6254,*(undefined4 *)(param_3 + 0x28));
  (*(code *)PTR_apr_table_add_00560b64)(uVar1,PTR_COS_MAX_UPLOADS_00560f20,auStack_48);
  uVar3 = (*(code *)PTR_cos_table_create_if_null_00560b5c)(param_1,0,0);
  (*(code *)PTR_cos_init_bucket_request_00560f24)(param_1,param_2,0,&local_50,uVar1,uVar3,&local_4c)
  ;
  piVar4 = (int *)(*(code *)PTR_cos_process_request_00560b70)(param_1,local_50,local_4c);
  (*(code *)PTR_cos_fill_read_response_header_00560b78)(local_4c,param_4);
  iVar2 = (*(code *)(PTR_LAB_00560eb4 + -0x1e44))(piVar4);
  if ((iVar2 != 0) &&
     (iVar2 = (*(code *)PTR_cos_list_multipart_uploads_parse_from_body_00560f28)
                        (*(undefined4 *)(param_1 + 8),local_4c + 8,param_3 + 0x40,param_3 + 0x30,
                         param_3 + 0x38,param_3 + 0x2c), iVar2 != 0)) {
    *piVar4 = iVar2;
    piVar4[1] = (int)PTR_COS_XML_PARSE_ERROR_CODE_00560bdc;
    piVar4[2] = 0;
  }
  return piVar4;
}



// ==== trim_threads @ 00444224 size=356

int * trim_threads(int param_1,uint *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  
  apr_thread_mutex_lock(*(undefined4 *)(param_1 + 0x4c));
  puVar3 = *(undefined4 **)(param_1 + 0x44);
  if (param_3 == 0) {
    uVar9 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x1c);
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x1c);
    puVar3 = *(undefined4 **)(param_1 + 0x48);
  }
  uVar4 = *param_2;
  if (uVar4 < uVar9) {
    piVar7 = (int *)*puVar3;
    if (uVar4 != 0) {
      uVar10 = 1;
      do {
        piVar7 = (int *)*piVar7;
        bVar1 = uVar10 != uVar4;
        uVar10 = uVar10 + 1;
      } while (bVar1);
    }
    piVar8 = (int *)puVar3[1];
    if (param_3 != 0) {
      *(int *)piVar7[1] = *piVar8;
      *(int *)(*piVar8 + 4) = piVar7[1];
      *(uint *)(param_1 + 0x1c) = uVar4;
    }
    if (piVar8 == piVar7) {
      uVar10 = 1;
      piVar11 = piVar8;
    }
    else {
      iVar2 = 0;
      piVar11 = piVar7;
      do {
        iVar5 = iVar2;
        piVar11[4] = 1;
        piVar11 = (int *)*piVar11;
        iVar2 = iVar5 + 1;
      } while (piVar8 != piVar11);
      uVar10 = iVar5 + 2;
    }
    piVar11[4] = 1;
    if (uVar10 != uVar9 - uVar4) {
                    /* WARNING: Subroutine does not return */
      __assert("n == n_dbg","misc/apr_thread_pool.c",0x332,"trim_threads");
    }
    uVar6 = *(undefined4 *)(param_1 + 0x4c);
    *param_2 = uVar10;
    apr_thread_mutex_unlock(uVar6);
    piVar7[1] = 0;
    *piVar8 = 0;
  }
  else {
    apr_thread_mutex_unlock(*(undefined4 *)(param_1 + 0x4c));
    piVar7 = (int *)0x0;
    *param_2 = 0;
  }
  return piVar7;
}



// ==== pop_task @ 00444388 size=432

int * pop_task(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    piVar5 = (int *)**(int **)(param_1 + 0x40);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert("task != ((void *)0)","misc/apr_thread_pool.c",0x9f,"pop_task");
    }
    if (*(int **)(param_1 + 0x40) == piVar5) {
                    /* WARNING: Subroutine does not return */
      __assert("task != (struct apr_thread_pool_task *)((char *)(&(me->scheduled_tasks)->next) - ((long) (((char *) (&(((struct apr_thread_pool_task*)((void *)0))->link))) - ((char *) ((void *)0)))))"
               ,"misc/apr_thread_pool.c",0xa2,"pop_task");
    }
    iVar6 = piVar5[7];
    uVar7 = piVar5[6];
    uVar8 = apr_time_now();
    iVar3 = (int)((ulonglong)uVar8 >> 0x20);
    if ((iVar6 <= iVar3) && ((iVar6 != iVar3 || (uVar7 <= (uint)uVar8)))) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
      *(int *)piVar5[1] = *piVar5;
      *(int *)(*piVar5 + 4) = piVar5[1];
      return piVar5;
    }
  }
  piVar5 = (int *)0x0;
  if (*(int *)(param_1 + 0x20) != 0) {
    piVar2 = *(int **)(param_1 + 0x3c);
    piVar5 = (int *)*piVar2;
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert("task != ((void *)0)","misc/apr_thread_pool.c",0xb0,"pop_task");
    }
    if (piVar2 == piVar5) {
                    /* WARNING: Subroutine does not return */
      __assert("task != (struct apr_thread_pool_task *)((char *)(&(me->tasks)->next) - ((long) (((char *) (&(((struct apr_thread_pool_task*)((void *)0))->link))) - ((char *) ((void *)0)))))"
               ,"misc/apr_thread_pool.c",0xb1,"pop_task");
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    bVar1 = *(byte *)(piVar5 + 6);
    param_1 = param_1 + (uint)(bVar1 >> 6) * 4;
    if (*(int **)(param_1 + 0x60) == piVar5) {
      piVar4 = (int *)*piVar5;
      *(int **)(param_1 + 0x60) = piVar4;
      if ((piVar2 == piVar4) || ((uint)(bVar1 >> 6) != (uint)(*(byte *)(piVar4 + 6) >> 6))) {
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
    }
    *(int *)piVar5[1] = *piVar5;
    *(int *)(*piVar5 + 4) = piVar5[1];
  }
  return piVar5;
}



// ==== add_if_empty @ 00444aac size=756

int add_if_empty(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int param_5,undefined4 param_6)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  apr_thread_mutex_lock(param_1[0x13]);
  piVar2 = (int *)FUN_00444984(param_1,local_20,local_1c,local_18,param_6);
  if (piVar2 == (int *)0x0) {
    apr_thread_mutex_unlock(param_1[0x13]);
    return 0xc;
  }
  bVar1 = *(byte *)(piVar2 + 6);
  uVar3 = (uint)(bVar1 >> 6);
  piVar7 = (int *)param_1[uVar3 + 0x18];
  if (piVar7 == (int *)0x0) {
    iVar6 = uVar3 - 1;
    if (uVar3 == 0) {
LAB_00444d60:
      iVar6 = param_1[0xf];
      *piVar2 = iVar6;
      piVar2[1] = *(int *)(iVar6 + 4);
      **(int **)(iVar6 + 4) = (int)piVar2;
      *(int **)(iVar6 + 4) = piVar2;
      param_1[uVar3 + 0x18] = piVar2;
    }
    else {
      iVar4 = param_1[uVar3 + 0x17];
      if (iVar4 == 0) {
        piVar7 = param_1 + uVar3 + 0x16;
        do {
          iVar6 = iVar6 + -1;
          if (iVar6 == -1) goto LAB_00444d60;
          iVar4 = *piVar7;
          piVar7 = piVar7 + -1;
        } while (iVar4 == 0);
      }
      *piVar2 = iVar4;
      piVar2[1] = *(int *)(iVar4 + 4);
      **(int **)(iVar4 + 4) = (int)piVar2;
      *(int **)(iVar4 + 4) = piVar2;
LAB_00444d10:
      param_1[uVar3 + 0x18] = piVar2;
    }
  }
  else {
    piVar5 = (int *)param_1[0xf];
    if (piVar7 == piVar5) {
                    /* WARNING: Subroutine does not return */
      __assert("(struct apr_thread_pool_task *)((char *)(&(me->tasks)->next) - ((long) (((char *) (&(((struct apr_thread_pool_task*)((void *)0))->link))) - ((char *) ((void *)0))))) != me->task_idx[seg]"
               ,"misc/apr_thread_pool.c",0x1c2,"add_if_empty");
    }
    do {
      if (*(byte *)(piVar7 + 6) <= bVar1) {
        if (param_5 == 0) goto LAB_00444b5c;
        if ((piVar5 == piVar7) || (*(byte *)(piVar7 + 6) < bVar1)) goto LAB_00444c34;
        goto LAB_00444c28;
      }
      piVar7 = (int *)*piVar7;
    } while (piVar5 != piVar7);
    if (piVar7 != (int *)0x0) {
      if (param_5 != 0) goto LAB_00444c34;
LAB_00444b5c:
      *piVar2 = (int)piVar7;
      piVar2[1] = piVar7[1];
      *(int **)piVar7[1] = piVar2;
      piVar7[1] = (int)piVar2;
      if ((int *)param_1[uVar3 + 0x18] == piVar7) goto LAB_00444d10;
    }
  }
  goto LAB_00444b80;
  while (bVar1 <= *(byte *)(piVar7 + 6)) {
LAB_00444c28:
    piVar7 = (int *)*piVar7;
    if (piVar7 == piVar5) break;
  }
LAB_00444c34:
  *piVar2 = (int)piVar7;
  piVar2[1] = piVar7[1];
  *(int **)piVar7[1] = piVar2;
  piVar7[1] = (int)piVar2;
LAB_00444b80:
  param_1[8] = param_1[8] + 1;
  if ((uint)param_1[0xc] < (uint)param_1[8]) {
    param_1[0xc] = param_1[8];
  }
  if (param_1[6] == 0) {
LAB_00444c80:
    iVar6 = FUN_0044c1e4(auStack_28,0,&LAB_00444538,param_1,*param_1);
    if (iVar6 != 0) goto LAB_00444bd8;
    param_1[6] = param_1[6] + 1;
    if ((uint)param_1[0xd] < (uint)param_1[6]) {
      param_1[0xd] = param_1[6];
      goto LAB_00444bd8;
    }
  }
  else {
    iVar6 = 0;
    if (param_1[7] != 0) goto LAB_00444bd8;
    if (((uint)param_1[6] < (uint)param_1[1]) && ((uint)param_1[10] < (uint)param_1[8]))
    goto LAB_00444c80;
  }
  iVar6 = 0;
LAB_00444bd8:
  FUN_00449d78(param_1[0x14]);
  apr_thread_mutex_unlock(param_1[0x13]);
  return iVar6;
}



// ==== trim_idle_threads @ 00444da0 size=248

int trim_idle_threads(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_res4 [3];
  undefined1 auStack_20 [12];
  
  local_res4[0] = param_2;
  piVar2 = (int *)trim_threads(param_1,local_res4,1);
  apr_thread_mutex_lock(*(undefined4 *)(param_1 + 0x4c));
  FUN_00449d84(*(undefined4 *)(param_1 + 0x50));
  apr_thread_mutex_unlock(*(undefined4 *)(param_1 + 0x4c));
  if (piVar2 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    piVar1 = piVar2;
    do {
      piVar4 = piVar1;
      iVar5 = iVar5 + 1;
      FUN_0044c32c(auStack_20,piVar4[2]);
      piVar1 = (int *)*piVar4;
    } while ((int *)*piVar4 != (int *)0x0);
    apr_thread_mutex_lock(*(undefined4 *)(param_1 + 0x4c));
    iVar6 = *(int *)(param_1 + 0x5c);
    uVar3 = *(undefined4 *)(param_1 + 0x4c);
    *piVar4 = iVar6;
    piVar2[1] = *(int *)(iVar6 + 4);
    **(int **)(iVar6 + 4) = (int)piVar2;
    *(int **)(iVar6 + 4) = piVar4;
    apr_thread_mutex_unlock(uVar3);
  }
  if (local_res4[0] != iVar5) {
                    /* WARNING: Subroutine does not return */
    __assert("cnt == n_dbg","misc/apr_thread_pool.c",0x355,"trim_idle_threads");
  }
  return iVar5;
}



// ==== domain @ 004573c8 size=2892

/* WARNING: Removing unreachable block (ram,0x00457740) */

undefined4 *
domain(undefined4 param_1,int *param_2,char param_3,char *param_4,char *param_5,int param_6)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  char *pcVar12;
  char *pcVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  longlong lVar20;
  undefined8 uVar21;
  uint local_438 [256];
  undefined1 auStack_38 [8];
  uint local_30;
  undefined4 *local_2c;
  
  uVar5 = time(0);
  piVar6 = (int *)(*(code *)PTR_calloc_005605e0)(1,0x38);
  if (piVar6 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  if (param_3 != '\0') {
    pcVar7 = (char *)(*DAT_005605f0)(5000);
    if (pcVar7 != (char *)0x0) {
      pcVar8 = (char *)strchr(param_4,0x3b);
      while( true ) {
        cVar1 = *param_4;
        bVar2 = false;
        if ((cVar1 == '\0') || ((cVar1 != ' ' && (bVar2 = false, cVar1 != '\t')))) break;
        param_4 = param_4 + 1;
      }
LAB_00457544:
      *pcVar7 = '\0';
      local_438[0] = local_438[0] & 0xffffff00;
      iVar9 = sscanf(param_4,&DAT_005390dc,local_438,pcVar7);
      if (0 < iVar9) {
        local_2c = (undefined4 *)strlen(pcVar7);
        iVar9 = strlen(local_438);
        param_4 = param_4 + iVar9;
        do {
          while( true ) {
            puVar17 = (undefined4 *)(int)*param_4;
            puVar11 = local_2c;
            if (puVar17 == (undefined4 *)0x0) goto LAB_004574b4;
            if (puVar17 != (undefined4 *)0x20) break;
            param_4 = param_4 + 1;
          }
          param_4 = param_4 + 1;
        } while (puVar17 == (undefined4 *)0x9);
LAB_004574b4:
        do {
          pcVar13 = pcVar7;
          if (puVar11 == (undefined4 *)0x0) goto LAB_004574c8;
          cVar1 = pcVar7[(int)puVar11 + -1];
          if ((cVar1 != ' ') && (cVar1 != '\t')) goto LAB_004574c8;
          pcVar7[(int)puVar11 + -1] = '\0';
          puVar11 = (undefined4 *)((int)puVar11 + -1);
        } while( true );
      }
      goto LAB_00457500;
    }
LAB_00457864:
    (*DAT_005605ec)(piVar6);
    return (undefined4 *)0x0;
  }
  local_438[0] = 0;
  iVar9 = strncmp(param_4,"#HttpOnly_",10);
  if (iVar9 == 0) {
    param_4 = param_4 + 10;
    *(undefined1 *)((int)piVar6 + 0x32) = 1;
  }
  if (*param_4 == '#') goto LAB_00457864;
  puVar10 = (undefined1 *)strchr(param_4,0xd);
  if (puVar10 != (undefined1 *)0x0) {
    *puVar10 = 0;
  }
  puVar10 = (undefined1 *)strchr(param_4,10);
  if (puVar10 != (undefined1 *)0x0) {
    *puVar10 = 0;
  }
  pcVar7 = (char *)strtok_r(param_4,&DAT_00539154,local_438);
  iVar9 = 0;
  bVar2 = false;
  while (pcVar7 != (char *)0x0) {
    if (bVar2) {
      if (iVar9 != 6) goto LAB_00457820;
      goto LAB_00457a3c;
    }
    switch(iVar9) {
    case 0:
      iVar15 = (*DAT_005605e4)(pcVar7 + (*pcVar7 == '.'));
      piVar6[5] = iVar15;
      goto LAB_00457a0c;
    case 1:
      iVar15 = FUN_0046a70c(pcVar7,&DAT_005388c0);
      *(bool *)(piVar6 + 9) = iVar15 != 0;
      break;
    case 2:
      iVar15 = strcmp(&DAT_005388c0,pcVar7);
      if ((iVar15 == 0) || (iVar15 = strcmp("FALSE",pcVar7), iVar15 == 0)) {
        iVar9 = (*DAT_005605e4)(&DAT_00539308);
        pcVar3 = DAT_005605e4;
        bVar2 = iVar9 == 0;
        piVar6[3] = iVar9;
        iVar9 = (*pcVar3)(&DAT_00539308);
        piVar6[4] = iVar9;
        if (iVar9 == 0) {
          bVar2 = true;
        }
        goto switchD_004578f8_caseD_3;
      }
      iVar15 = (*DAT_005605e4)(pcVar7);
      piVar6[3] = iVar15;
      if (iVar15 != 0) {
        iVar15 = FUN_004571b8(iVar15);
        piVar6[4] = iVar15;
        goto LAB_00457a0c;
      }
      bVar2 = true;
      break;
    case 3:
switchD_004578f8_caseD_3:
      iVar9 = 3;
      iVar15 = FUN_0046a70c(pcVar7,&DAT_005388c0);
      *(bool *)(piVar6 + 0xc) = iVar15 != 0;
      break;
    case 4:
      uVar21 = strtoll(pcVar7,0,10);
      *(undefined8 *)(piVar6 + 6) = uVar21;
      break;
    case 5:
      iVar15 = (*DAT_005605e4)(pcVar7);
      piVar6[1] = iVar15;
      goto LAB_00457a0c;
    case 6:
      iVar15 = (*DAT_005605e4)(pcVar7);
      piVar6[2] = iVar15;
LAB_00457a0c:
      bVar2 = iVar15 == 0;
    }
    iVar9 = iVar9 + 1;
    pcVar7 = (char *)strtok_r(0,&DAT_00539154,local_438);
  }
  if (iVar9 == 6) {
LAB_00457a3c:
    iVar9 = (*DAT_005605e4)(&DAT_0053b564);
    piVar6[2] = iVar9;
    if ((iVar9 == 0) || (bVar2)) goto LAB_00457820;
  }
  else if ((bVar2) || (iVar9 != 7)) goto LAB_00457820;
  goto LAB_00457a6c;
LAB_004574c8:
  for (; (cVar1 = *pcVar13, cVar1 != '\0' && ((cVar1 == ' ' || (cVar1 == '\t'))));
      pcVar13 = pcVar13 + 1) {
  }
  if (puVar11 == (undefined4 *)0x0) {
    local_2c = puVar17;
    iVar9 = FUN_0046a70c("secure",local_438);
    if (iVar9 == 0) {
      iVar9 = FUN_0046a70c("httponly",local_438);
      if (iVar9 == 0) {
        if (local_2c == (undefined4 *)0x3d) goto LAB_0045766c;
      }
      else {
        *(undefined1 *)((int)piVar6 + 0x32) = 1;
      }
    }
    else {
      *(undefined1 *)(piVar6 + 0xc) = 1;
    }
LAB_00457500:
    if ((pcVar8 != (char *)0x0) && (param_4 = pcVar8, *pcVar8 != '\0')) {
      do {
        param_4 = param_4 + 1;
        local_2c = (undefined4 *)(int)*param_4;
        if (local_2c == (undefined4 *)0x0) break;
      } while ((local_2c == (undefined4 *)0x20) || (local_2c == (undefined4 *)0x9));
      pcVar8 = (char *)strchr(param_4,0x3b);
      if (pcVar8 != (char *)0x0) goto LAB_00457544;
      if (local_2c != (undefined4 *)0x0) {
        pcVar8 = (char *)strchr(param_4,0);
        if (pcVar8 == (char *)0x0) goto code_r0x00457660;
        goto LAB_00457544;
      }
    }
  }
  else {
LAB_0045766c:
    iVar9 = FUN_0046a70c(&DAT_00539190,local_438);
    if (iVar9 == 0) {
      iVar9 = FUN_0046a70c("domain",local_438);
      if (iVar9 == 0) {
        iVar9 = FUN_0046a70c("version",local_438,auStack_38);
        if (iVar9 == 0) {
          iVar9 = FUN_0046a70c("max-age",local_438);
          if (iVar9 == 0) {
            iVar9 = FUN_0046a70c("expires",local_438);
            if (iVar9 == 0) {
              if (piVar6[1] == 0) {
                local_2c = &DAT_00560000;
                uVar18 = (*DAT_005605e4)(local_438);
                piVar6[1] = uVar18;
                iVar9 = (*(code *)local_2c[0x179])(pcVar13);
                piVar6[2] = iVar9;
                if (piVar6[1] != 0) goto LAB_00457d0c;
                goto LAB_004576ec;
              }
              goto LAB_00457500;
            }
            FUN_00456ef4(piVar6 + 8,pcVar13);
            iVar9 = piVar6[8];
          }
          else {
            FUN_00456ef4(piVar6 + 0xb,pcVar13);
            iVar9 = piVar6[0xb];
          }
        }
        else {
          FUN_00456ef4(piVar6 + 10,pcVar13);
          iVar9 = piVar6[10];
        }
        if (iVar9 == 0) {
          bVar2 = true;
          goto LAB_004576f0;
        }
        goto LAB_00457500;
      }
      pcVar13 = pcVar13 + (*pcVar13 == '.');
      pcVar12 = pcVar13;
      if (param_5 != (char *)0x0) {
        pcVar12 = param_5;
      }
      iVar9 = inet_pton(2,pcVar12);
      local_30 = (uint)(iVar9 != 0);
      iVar9 = strchr(pcVar13,0x2e);
      if (iVar9 == 0) {
        param_5 = ":";
LAB_00457be4:
        if (local_30 == 0) {
          iVar9 = FUN_00457020(pcVar13,param_5);
          if (iVar9 == 0) {
LAB_00457c38:
            FUN_0045ced0(param_1,"skipped cookie with bad tailmatch domain: %s\n",pcVar13);
            bVar2 = true;
            goto LAB_00457500;
          }
        }
        else {
          iVar9 = strcmp();
          if (iVar9 != 0) goto LAB_00457c38;
        }
      }
      else if (param_5 != (char *)0x0) goto LAB_00457be4;
      FUN_00456ef4(piVar6 + 5,pcVar13);
      if (piVar6[5] != 0) {
        if (local_30 == 0) {
          *(undefined1 *)(piVar6 + 9) = 1;
        }
        goto LAB_00457500;
      }
    }
    else {
      FUN_00456ef4(piVar6 + 3,pcVar13);
      if (piVar6[3] != 0) {
        iVar9 = FUN_004571b8();
        piVar6[4] = iVar9;
LAB_00457d0c:
        if (iVar9 == 0) {
          bVar2 = true;
          goto LAB_004576f0;
        }
        goto LAB_00457500;
      }
    }
LAB_004576ec:
    bVar2 = true;
  }
LAB_004576f0:
  pcVar8 = (char *)piVar6[0xb];
  goto LAB_004576f4;
code_r0x00457660:
  pcVar8 = (char *)piVar6[0xb];
LAB_004576f4:
  if (pcVar8 == (char *)0x0) {
    if (piVar6[8] != 0) {
      iVar9 = FUN_00469f80(piVar6[8],0);
      if (iVar9 == 0) {
        uVar18 = 1;
      }
      else {
        if (-1 < iVar9 >> 0x1f) {
          piVar6[6] = iVar9;
          piVar6[7] = iVar9 >> 0x1f;
          goto LAB_004577c8;
        }
        uVar18 = 0;
      }
      uVar19 = 0;
      goto LAB_004577c0;
    }
  }
  else {
    lVar20 = strtoll(pcVar8 + (*pcVar8 == '\"'),0,10);
    *(longlong *)(piVar6 + 6) = lVar20;
    if (CONCAT44(0x7fffffff - ((int)uVar5 >> 0x1f),~uVar5) < lVar20) {
      uVar18 = 0xffffffff;
      uVar19 = 0x7fffffff;
LAB_004577c0:
      piVar6[6] = uVar18;
      piVar6[7] = uVar19;
    }
    else {
      *(longlong *)(piVar6 + 6) = lVar20 + (int)uVar5;
    }
  }
LAB_004577c8:
  if (bVar2) {
LAB_004577f8:
    bVar2 = true;
  }
  else {
    if ((piVar6[5] == 0) && (param_5 != (char *)0x0)) {
      iVar9 = (*DAT_005605e4)(param_5);
      piVar6[5] = iVar9;
      if (iVar9 == 0) goto LAB_004577f8;
    }
    bVar2 = false;
    if ((piVar6[3] == 0) && (param_6 != 0)) {
      iVar9 = strchr(param_6,0x3f);
      if (iVar9 == 0) {
        iVar9 = strrchr();
      }
      else {
        iVar9 = FUN_0046ae30(param_6,0x2f,iVar9 - param_6);
      }
      if (iVar9 != 0) {
        iVar15 = (iVar9 - param_6) + 1;
        iVar9 = (*DAT_005605f0)((iVar9 - param_6) + 2);
        piVar6[3] = iVar9;
        if (iVar9 == 0) goto LAB_004577f8;
        memcpy(iVar9,param_6,iVar15);
        *(undefined1 *)(piVar6[3] + iVar15) = 0;
        iVar9 = FUN_004571b8(piVar6[3]);
        piVar6[4] = iVar9;
        bVar2 = iVar9 == 0;
      }
    }
  }
  (*DAT_005605ec)(pcVar7);
  if ((bVar2) || (piVar6[1] == 0)) goto LAB_00457820;
LAB_00457a6c:
  if (((char)param_2[2] != '\0') ||
     (((char)param_2[4] == '\0' || (piVar6[6] != 0 || piVar6[7] != 0)))) {
    *(char *)((int)piVar6 + 0x31) = (char)param_2[2];
    FUN_00456f4c(param_2);
    piVar14 = (int *)*param_2;
    piVar16 = (int *)0x0;
LAB_00457aac:
    if (piVar14 == (int *)0x0) {
      bVar2 = false;
LAB_00457b24:
      if ((char)param_2[2] != '\0') {
        if (bVar2) {
          pcVar7 = "Replaced";
        }
        else {
          pcVar7 = "Added";
        }
        FUN_0045ced0(param_1,"%s cookie %s=\"%s\" for domain %s, path %s, expire %lld\n",pcVar7,
                     piVar6[1],piVar6[2],piVar6[5],piVar6[3]);
      }
      if (!bVar2) {
        if (piVar16 == (int *)0x0) {
          *param_2 = (int)piVar6;
        }
        else {
          *piVar16 = (int)piVar6;
        }
        param_2[3] = param_2[3] + 1;
        return piVar6;
      }
      return piVar6;
    }
    iVar9 = FUN_0046a70c(piVar14[1],piVar6[1]);
    piVar16 = piVar14;
    if (iVar9 != 0) {
      if (piVar14[5] != 0) {
        if (piVar6[5] == 0) goto LAB_00457b14;
        iVar9 = FUN_0046a70c();
        if (iVar9 != 0) goto LAB_00457afc;
        piVar14 = (int *)*piVar14;
        goto LAB_00457aac;
      }
      if (piVar6[5] != 0) goto LAB_00457b14;
LAB_00457afc:
      if (piVar14[4] == 0) {
        if (piVar6[4] == 0) {
          cVar1 = *(char *)((int)piVar6 + 0x31);
          goto LAB_00457dd4;
        }
      }
      else if ((piVar6[4] != 0) && (iVar9 = FUN_0046a70c(), iVar9 != 0)) {
        cVar1 = *(char *)((int)piVar6 + 0x31);
LAB_00457dd4:
        pcVar3 = DAT_005605ec;
        if ((cVar1 != '\0') || (*(char *)((int)piVar14 + 0x31) == '\0')) {
          uVar18 = piVar14[1];
          *piVar6 = *piVar14;
          (*pcVar3)(uVar18);
          if (piVar14[2] != 0) {
            (*DAT_005605ec)();
          }
          if (piVar14[5] != 0) {
            (*DAT_005605ec)();
          }
          if (piVar14[3] != 0) {
            (*DAT_005605ec)();
          }
          if (piVar14[4] != 0) {
            (*DAT_005605ec)();
          }
          if (piVar14[8] != 0) {
            (*DAT_005605ec)();
          }
          if (piVar14[10] != 0) {
            (*DAT_005605ec)();
          }
          if (piVar14[0xb] != 0) {
            (*DAT_005605ec)();
          }
          memcpy(piVar14,piVar6,0x38);
          (*DAT_005605ec)(piVar6);
          piVar4 = piVar14;
          do {
            piVar16 = piVar4;
            bVar2 = true;
            piVar6 = piVar14;
            piVar4 = (int *)*piVar16;
          } while ((int *)*piVar16 != (int *)0x0);
          goto LAB_00457b24;
        }
        goto LAB_00457820;
      }
    }
LAB_00457b14:
    piVar14 = (int *)*piVar14;
    goto LAB_00457aac;
  }
LAB_00457820:
  FUN_00456e20(piVar6);
  return (undefined4 *)0x0;
}



// ==== compress @ 0045ba08 size=4332

int compress(int param_1,int param_2,int *param_3,char *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  char cVar10;
  undefined4 uVar11;
  int iVar12;
  longlong lVar13;
  undefined8 uVar14;
  int local_30;
  int local_2c;
  
  do {
    iVar12 = *(int *)(param_1 + 0xac);
    iVar8 = *param_3;
    *(int *)(param_1 + 0xb0) = iVar12;
    iVar2 = memchr(iVar12,10,iVar8);
    *(int *)(param_1 + 0xb4) = iVar2;
    if (iVar2 == 0) {
      iVar2 = FUN_00459124(param_1,param_1 + 0x50,iVar8);
      if (iVar2 != 0) {
        return iVar2;
      }
      if (*(int *)(param_1 + 0xa0) != 0) {
        return 0;
      }
      if (*(uint *)(param_1 + 0xa8) < 6) {
        return 0;
      }
      iVar2 = FUN_004590a8(*(undefined4 *)(param_1 + 0x290),*(undefined4 *)(param_1 + 0x52c));
      if (iVar2 != 0) {
        return 0;
      }
      *(undefined1 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0x9c) = 2;
      return 0;
    }
    iVar7 = (iVar2 - iVar12) + 1;
    *param_3 = iVar8 - iVar7;
    *(int *)(param_1 + 0xac) = iVar2 + 1;
    iVar2 = FUN_00459124(param_1,param_1 + 0x50,(iVar2 + 1) - iVar12);
    if (iVar2 != 0) {
      return iVar2;
    }
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0xa4);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x52c);
    if (((*(int *)(param_1 + 0xa0) == 0) && (5 < *(uint *)(param_1 + 0xa8))) &&
       (iVar2 = FUN_004590a8(*(undefined4 *)(param_1 + 0x290)), iVar2 == 0)) {
      iVar2 = *param_3;
      *(undefined1 *)(param_1 + 0x98) = 0;
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x9c) = 1;
        return 0;
      }
      *(undefined4 *)(param_1 + 0x9c) = 2;
      *param_3 = iVar7;
      return 0;
    }
    pcVar5 = *(char **)(param_1 + 0xb8);
    if (*pcVar5 == '\n') {
LAB_0045bb7c:
      if (**(char **)(param_1 + 0xb8) == '\n') {
        *(char **)(param_1 + 0xb8) = *(char **)(param_1 + 0xb8) + 1;
      }
      iVar2 = *(int *)(param_1 + 200);
      if (iVar2 - 100U < 100) {
        *(undefined1 *)(param_1 + 0x98) = 1;
        *(undefined4 *)(param_1 + 0xa0) = 0;
        if (iVar2 == 100) {
          if (*(int *)(param_1 + 0xd4) != 0) {
            *(undefined4 *)(param_1 + 0xd4) = 0;
            *(uint *)(param_1 + 0xf4) = *(uint *)(param_1 + 0xf4) | 2;
          }
        }
        else if ((iVar2 == 0x65) && (*(int *)(param_1 + 0xd8) == 1)) {
          FUN_0045ced0(param_1,"Received 101\n");
          *(undefined4 *)(param_1 + 0xd8) = 2;
          return 1;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x98) = 0;
        if (((((*(int *)(param_1 + 0x50) == -1) && (*(int *)(param_1 + 0x54) == -1)) &&
             ((*(char *)(param_1 + 0x10c) == '\0' &&
              ((*(char *)(param_2 + 0x1d8) == '\0' && (*(int *)(param_2 + 0x13c) == 0xb)))))) &&
            ((*(uint *)(*(int *)(param_2 + 0x204) + 0x3c) & 0x40000) == 0)) &&
           (*(int *)(param_1 + 0x240) != 5)) {
          FUN_0045ced0(param_1,"no chunk, no close, no size. Assume close to signal end\n");
          *(undefined1 *)(param_2 + 0x1d8) = 1;
        }
      }
      iVar2 = FUN_00458a5c(param_2);
      if (iVar2 != 0) {
        iVar2 = *(int *)(param_1 + 200);
LAB_0045c040:
        FUN_0045cf40(param_1,"The requested URL returned error: %d",iVar2);
        return 0x16;
      }
      uVar11 = 2;
      if (*(char *)(param_1 + 700) != '\0') {
        uVar11 = 3;
      }
      iVar8 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x52c);
      iVar2 = FUN_0045d208(param_2,uVar11,*(int *)(param_1 + 0x52c),iVar8);
      if (iVar2 != 0) {
        return iVar2;
      }
      *(int *)(param_1 + 0x8680) = *(int *)(param_1 + 0x8680) + iVar8;
      iVar2 = iVar8 + *(int *)(param_1 + 0x80);
      *(int *)(param_1 + 0x80) = iVar2;
      if (99 < *(int *)(param_1 + 200) - 100U) {
        iVar2 = 0;
      }
      *(int *)(param_1 + 0x84) = iVar2;
      if (*param_4 == '\0') {
        iVar2 = FUN_00459464(param_2);
        if (iVar2 != 0) {
          return iVar2;
        }
        if (((*(int *)(param_1 + 200) < 300) || (*(char *)(param_2 + 0x1e6) != '\0')) ||
           (*(char *)(param_2 + 0x1d8) != '\0')) {
LAB_0045bdbc:
          cVar10 = *(char *)(param_2 + 0x1e7);
        }
        else {
          cVar10 = *(char *)(param_2 + 0x1e7);
          if (cVar10 == '\0') {
            if ((*(int *)(param_1 + 0x240) - 2U < 3) && (*(char *)(param_1 + 0xf8) == '\0')) {
              FUN_0045ced0(param_1,"HTTP error before end of send, stop sending\n");
              uVar3 = *(uint *)(param_1 + 0xf4);
              *(undefined1 *)(param_2 + 0x1d8) = 1;
              *(undefined1 *)(param_1 + 0xf8) = 1;
              *(uint *)(param_1 + 0xf4) = uVar3 & 0xfffffffd;
              if (*(char *)(param_1 + 0x8610) != '\0') {
                *(undefined4 *)(param_1 + 0xd4) = 3;
              }
            }
            goto LAB_0045bdbc;
          }
        }
        if (cVar10 != '\0') {
          FUN_0045ced0(param_1,"Keep sending data to get tossed away!\n");
          *(uint *)(param_1 + 0xf4) = *(uint *)(param_1 + 0xf4) | 2;
        }
      }
      if (*(char *)(param_1 + 0x98) == '\0') {
        if (*(char *)(param_1 + 0x2bf) == '\0') {
          if (*(char *)(param_1 + 0x10c) != '\0') {
            *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
            *(undefined4 *)(param_1 + 100) = 0xffffffff;
          }
        }
        else {
          *param_4 = '\x01';
        }
        if ((*(int *)(param_1 + 0x50) != -1) || (*(int *)(param_1 + 0x54) != -1)) {
          FUN_00456484(param_1);
          *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x50);
          *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
        }
        if (*(int *)(param_1 + 0x60) == 0 && *(int *)(param_1 + 100) == 0) {
          *param_4 = '\x01';
        }
        if (*param_4 != '\0') {
          *(uint *)(param_1 + 0xf4) = *(uint *)(param_1 + 0xf4) & 0xfffffffe;
        }
        if (*(char *)(param_1 + 0x2c8) == '\0') {
          return 0;
        }
        FUN_0045cde4(param_1,1,*(undefined4 *)(param_1 + 0xb0),iVar8,param_2);
        return 0;
      }
    }
    else {
      if (*pcVar5 == '\r') {
        *(char **)(param_1 + 0xb8) = pcVar5 + 1;
        goto LAB_0045bb7c;
      }
      iVar2 = *(int *)(param_1 + 0xa0);
      *(int *)(param_1 + 0xa0) = iVar2 + 1;
      if (iVar2 == 0) {
        uVar3 = *(uint *)(*(int *)(param_2 + 0x204) + 0x3c);
        if ((uVar3 & 3) == 0) {
          if (((uVar3 & 0x40000) == 0) ||
             (iVar2 = sscanf(pcVar5," RTSP/%d.%d %3d",&local_30,param_2 + 0x140,param_1 + 200),
             iVar2 != 3)) {
LAB_0045cab8:
            *(undefined1 *)(param_1 + 0x98) = 0;
            return 0;
          }
          *(int *)(param_2 + 0x140) = *(int *)(param_2 + 0x140) + local_30 * 10;
          iVar2 = 0xb;
LAB_0045bf94:
          *(int *)(param_2 + 0x13c) = iVar2;
        }
        else {
          iVar2 = sscanf(pcVar5," HTTP/%d.%d %3d",&local_2c,param_2 + 0x13c,param_1 + 200);
          if (iVar2 == 3) {
            iVar2 = *(int *)(param_2 + 0x13c) + local_2c * 10;
            goto LAB_0045bf94;
          }
          iVar2 = sscanf(*(undefined4 *)(param_1 + 0xb8)," HTTP %3d",param_1 + 200);
          *(undefined4 *)(param_2 + 0x13c) = 10;
          if (iVar2 == 0) {
            iVar2 = FUN_004590a8(*(undefined4 *)(param_1 + 0x290),*(undefined4 *)(param_1 + 0xb8));
            if (iVar2 == 0) goto LAB_0045cab8;
            *(undefined4 *)(param_1 + 200) = 200;
            *(undefined4 *)(param_2 + 0x13c) = 10;
          }
        }
        iVar2 = *(int *)(param_1 + 200);
        iVar8 = *(int *)(param_2 + 0x13c);
        *(int *)(param_1 + 0x866c) = iVar2;
        *(int *)(param_1 + 0x8674) = iVar8;
        if ((*(int *)(param_1 + 0x860c) == 0) || (iVar8 < *(int *)(param_1 + 0x860c))) {
          *(int *)(param_1 + 0x860c) = iVar8;
        }
        if ((*(char *)(param_1 + 0x2b8) != '\0') && (399 < iVar2)) {
          if (iVar2 == 0x191) {
            cVar10 = *(char *)(param_2 + 0x1dc);
LAB_0045bfec:
            if (cVar10 != '\0') goto LAB_0045c064;
          }
          else if (iVar2 == 0x197) {
            cVar10 = *(char *)(param_2 + 0x1dd);
            goto LAB_0045bfec;
          }
          if (((*(int *)(param_1 + 0x8630) == 0 && *(int *)(param_1 + 0x8634) == 0) ||
              (*(int *)(param_1 + 0x240) != 1)) || (iVar2 != 0x1a0)) {
            uVar11 = *(undefined4 *)(param_1 + 0xb8);
            iVar8 = strncmp(uVar11,&LAB_005399cc,4);
            if (((iVar8 == 0) && (iVar8 = strchr(uVar11,0x20), iVar8 != 0)) &&
               (*(char *)(iVar8 + 1) != '\0')) {
              iVar8 = iVar8 + 1;
              uVar6 = 0xd;
              puVar4 = (undefined1 *)strchr(iVar8,0xd);
              if (puVar4 == (undefined1 *)0x0) {
                puVar4 = (undefined1 *)strchr(iVar8,10);
                if (puVar4 == (undefined1 *)0x0) goto LAB_0045c040;
                uVar6 = 10;
              }
              *puVar4 = 0;
              FUN_0045cf40(param_1,"The requested URL returned error: %s",iVar8);
              *puVar4 = uVar6;
              return 0x16;
            }
            goto LAB_0045c040;
          }
        }
LAB_0045c064:
        if (iVar8 == 10) {
          FUN_0045ced0(param_1,"HTTP 1.0, assume close after body\n");
          *(undefined1 *)(param_2 + 0x1d8) = 1;
        }
        else if (((10 < iVar8) && (*(char *)(param_2 + 0x1d8) == '\0')) &&
                ((puVar4 = *(undefined1 **)(param_2 + 0x488), puVar4 != (undefined1 *)0x0 &&
                 (iVar2 = FUN_00453578(param_1,param_2), iVar2 == 0)))) {
          *puVar4 = 1;
        }
        if ((*(int *)(param_1 + 200) == 0xcc) || (*(int *)(param_1 + 200) == 0x130)) {
          if (*(int *)(param_1 + 0x238) != 0) {
            *(undefined1 *)(param_1 + 0x867c) = 1;
          }
          *(undefined4 *)(param_1 + 0x50) = 0;
          *(undefined4 *)(param_1 + 0x60) = 0;
          *(undefined4 *)(param_1 + 0x54) = 0;
          *(undefined4 *)(param_1 + 100) = 0;
          *(undefined1 *)(param_1 + 0xfa) = 1;
        }
      }
      if (((*(char *)(param_1 + 0xfa) == '\0') && (*(char *)(param_1 + 0x2df) == '\0')) &&
         (iVar2 = FUN_0046a7ac("Content-Length:",*(undefined4 *)(param_1 + 0xb8),0xf), iVar2 != 0))
      {
        lVar13 = strtoll(*(int *)(param_1 + 0xb8) + 0xf,0,10);
        iVar2 = (int)((ulonglong)lVar13 >> 0x20);
        iVar8 = *(int *)(param_1 + 0x29c);
        if ((*(uint *)(param_1 + 0x298) != 0 || iVar8 != 0) &&
           ((iVar8 < iVar2 || ((iVar2 == iVar8 && (*(uint *)(param_1 + 0x298) < (uint)lVar13)))))) {
          FUN_0045cf40(param_1,"Maximum file size exceeded");
          return 0x3f;
        }
        if (lVar13 < 0) {
          *(undefined1 *)(param_2 + 0x1d8) = 1;
          FUN_0045ced0(param_1,"Negative content-length: %lld, closing after transfer\n");
        }
        else {
          *(longlong *)(param_1 + 0x50) = lVar13;
          *(longlong *)(param_1 + 0x60) = lVar13;
          FUN_00456484();
        }
LAB_0045c1bc:
        cVar10 = *(char *)(param_1 + 700);
      }
      else {
        iVar2 = FUN_0046a7ac("Content-Type:",*(undefined4 *)(param_1 + 0xb8),0xd);
        if (iVar2 != 0) {
          pcVar5 = (char *)FUN_00459348(*(undefined4 *)(param_1 + 0xb8));
          if (pcVar5 == (char *)0x0) {
            return 0x1b;
          }
          if (*pcVar5 != '\0') {
            if (*(int *)(param_1 + 0x8694) != 0) {
              (*DAT_005605ec)();
            }
            *(char **)(param_1 + 0x8694) = pcVar5;
            goto LAB_0045c8f8;
          }
LAB_0045c1b4:
          (*DAT_005605ec)(pcVar5);
          goto LAB_0045c1bc;
        }
        iVar2 = FUN_0046a7ac("Server:",*(undefined4 *)(param_1 + 0xb8),7);
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_2 + 0x13c);
          if ((iVar2 == 10) && (*(char *)(param_2 + 0x1db) != '\0')) {
            iVar2 = FUN_00459f54(*(undefined4 *)(param_1 + 0xb8),"Proxy-FUN_0045a064:","keep-alive");
            if (iVar2 == 0) {
              iVar2 = *(int *)(param_2 + 0x13c);
              goto LAB_0045c2a0;
            }
            *(undefined1 *)(param_2 + 0x1d8) = 0;
            pcVar5 = "HTTP/1.0 proxy connection set to keep alive!\n";
          }
          else {
LAB_0045c2a0:
            if (((iVar2 == 0xb) && (*(char *)(param_2 + 0x1db) != '\0')) &&
               (iVar2 = FUN_00459f54(*(undefined4 *)(param_1 + 0xb8),"Proxy-FUN_0045a064:","close"),
               iVar2 != 0)) {
              *(undefined1 *)(param_2 + 0x1d8) = 1;
              pcVar5 = "HTTP/1.1 proxy connection set close!\n";
            }
            else {
              if ((*(int *)(param_2 + 0x13c) != 10) ||
                 (iVar2 = FUN_00459f54(*(undefined4 *)(param_1 + 0xb8),"FUN_0045a064:","keep-alive"),
                 iVar2 == 0)) {
                iVar2 = FUN_00459f54(*(undefined4 *)(param_1 + 0xb8),"FUN_0045a064:","close");
                if (iVar2 == 0) {
                  iVar2 = FUN_0046a7ac("Transfer-Encoding:",*(undefined4 *)(param_1 + 0xb8),0x12);
                  if (iVar2 == 0) {
                    iVar2 = FUN_0046a7ac("Content-Encoding:",*(int *)(param_1 + 0xb8),0x11);
                    if ((iVar2 == 0) ||
                       ((*(int *)(param_1 + 0x310) == 0 && (*(int *)(param_2 + 0x13c) != 0x14)))) {
                      iVar2 = FUN_0046a7ac("Content-Range:",*(int *)(param_1 + 0xb8),0xe);
                      if (iVar2 == 0) {
                        if ((*(int *)(param_1 + 0x400) != 0) &&
                           (iVar2 = FUN_0046a7ac("Set-Cookie:",*(int *)(param_1 + 0xb8),0xb),
                           iVar2 != 0)) {
                          FUN_00452058(param_1,2,2);
                          iVar2 = *(int *)(param_2 + 0x234);
                          if (iVar2 == 0) {
                            iVar2 = *(int *)(param_2 + 0x98);
                          }
                          domain(param_1,*(undefined4 *)(param_1 + 0x400),1,
                                 *(int *)(param_1 + 0xb8) + 0xb,iVar2,
                                 *(undefined4 *)(param_1 + 0x8624));
                          FUN_004520b8(param_1,2);
                          goto LAB_0045c1bc;
                        }
                        iVar2 = FUN_0046a7ac("Last-Modified:",*(undefined4 *)(param_1 + 0xb8),0xe);
                        if ((iVar2 != 0) &&
                           ((*(int *)(param_1 + 0x238) != 0 || (*(char *)(param_1 + 0x2b1) != '\0'))
                           )) {
                          local_30 = time(0);
                          uVar11 = FUN_00469f80(*(int *)(param_1 + 0xb8) + 0xe,&local_30);
                          *(undefined4 *)(param_1 + 0xe0) = uVar11;
                          if (*(char *)(param_1 + 0x2b1) != '\0') {
                            *(undefined4 *)(param_1 + 0x8678) = uVar11;
                          }
                          goto LAB_0045c8f8;
                        }
                        iVar2 = FUN_0046a7ac("WWW-Authenticate:",*(undefined4 *)(param_1 + 0xb8),
                                             0x11);
                        if ((iVar2 == 0) || (*(int *)(param_1 + 200) != 0x191)) {
                          iVar2 = FUN_0046a7ac("Proxy-authenticate:",*(undefined4 *)(param_1 + 0xb8)
                                               ,0x13);
                          if ((iVar2 != 0) && (*(int *)(param_1 + 200) == 0x197)) {
                            iVar2 = *(int *)(param_1 + 200);
                            goto LAB_0045c7c8;
                          }
                          if (((99 < *(int *)(param_1 + 200) - 300U) ||
                              (iVar2 = FUN_0046a7ac("Location:",*(undefined4 *)(param_1 + 0xb8),9),
                              iVar2 == 0)) || (*(int *)(param_1 + 0xfc) != 0)) {
                            if ((*(uint *)(*(int *)(param_2 + 0x204) + 0x3c) & 0x40000) != 0) {
                              return 4;
                            }
                            goto LAB_0045c8f8;
                          }
                          pcVar5 = (char *)FUN_00459348(*(undefined4 *)(param_1 + 0xb8));
                          if (pcVar5 == (char *)0x0) {
                            return 0x1b;
                          }
                          if (*pcVar5 == '\0') goto LAB_0045c1b4;
                          *(char **)(param_1 + 0xfc) = pcVar5;
                          if (*(char *)(param_1 + 0x2b9) == '\0') goto LAB_0045c8f8;
                          iVar2 = (*DAT_005605e4)(pcVar5);
                          *(int *)(param_1 + 0x100) = iVar2;
                          if (iVar2 == 0) {
                            return 0x1b;
                          }
                          iVar2 = FUN_00458c38(param_2);
                        }
                        else {
                          iVar2 = *(int *)(param_1 + 200);
LAB_0045c7c8:
                          iVar8 = FUN_00459348(*(undefined4 *)(param_1 + 0xb8));
                          if (iVar8 == 0) {
                            return 0x1b;
                          }
                          iVar2 = FUN_00459944(param_2,iVar2 == 0x197,iVar8);
                          (*DAT_005605ec)(iVar8);
                        }
                        if (iVar2 != 0) {
                          return iVar2;
                        }
                      }
                      else {
                        pbVar9 = (byte *)(*(int *)(param_1 + 0xb8) + 0xe);
                        while( true ) {
                          bVar1 = *pbVar9;
                          if (((bVar1 == 0) || ((*(ushort *)(__ctype_b + (uint)bVar1 * 2) & 8) != 0)
                              ) || (bVar1 == 0x2a)) break;
                          pbVar9 = pbVar9 + 1;
                        }
                        if ((*(ushort *)(__ctype_b + (uint)bVar1 * 2) & 8) == 0) {
                          *(undefined4 *)(param_1 + 0x8630) = 0;
                          *(undefined4 *)(param_1 + 0x8634) = 0;
                        }
                        else {
                          uVar14 = strtoll(pbVar9,0,10);
                          *(undefined8 *)(param_1 + 0xc0) = uVar14;
                          if ((*(int *)(param_1 + 0x8630) == (int)uVar14) &&
                             (*(int *)(param_1 + 0x8634) == (int)((ulonglong)uVar14 >> 0x20))) {
                            *(undefined1 *)(param_1 + 0xbc) = 1;
                          }
                        }
                      }
                    }
                    else {
                      pbVar9 = (byte *)(*(int *)(param_1 + 0xb8) + 0x11);
                      while ((*pbVar9 != 0 &&
                             ((*(ushort *)(__ctype_b + (uint)*pbVar9 * 2) & 0x20) != 0))) {
                        pbVar9 = pbVar9 + 1;
                      }
                      iVar2 = FUN_0046a7ac("identity",pbVar9,8);
                      if (iVar2 == 0) {
                        iVar2 = FUN_0046a7ac("deflate",pbVar9,7);
                        uVar11 = 1;
                        if (iVar2 == 0) {
                          iVar2 = FUN_0046a7ac(&DAT_00539b14,pbVar9,4);
                          if (iVar2 == 0) {
                            iVar2 = FUN_0046a7ac("x-gzip",pbVar9,6);
                            uVar11 = 2;
                            if (iVar2 == 0) {
                              iVar2 = FUN_0046a7ac("compress",pbVar9,8);
                              if (iVar2 == 0) {
                                iVar2 = FUN_0046a7ac("x-compress",pbVar9,10);
                                uVar11 = 3;
                                if (iVar2 == 0) {
                                  cVar10 = *(char *)(param_1 + 700);
                                  goto LAB_0045c900;
                                }
                              }
                              else {
                                uVar11 = 3;
                              }
                            }
                          }
                          else {
                            uVar11 = 2;
                          }
                        }
                        *(undefined4 *)(param_1 + 0xdc) = uVar11;
                      }
                      else {
                        *(undefined4 *)(param_1 + 0xdc) = 0;
                      }
                    }
                  }
                  else {
                    pbVar9 = (byte *)(*(int *)(param_1 + 0xb8) + 0x12);
                    while( true ) {
                      for (; (bVar1 = *pbVar9, bVar1 != 0 &&
                             (((*(ushort *)(__ctype_b + (uint)bVar1 * 2) & 0x20) != 0 ||
                              (bVar1 == 0x2c)))); pbVar9 = pbVar9 + 1) {
                      }
                      iVar2 = FUN_0046a7ac("FUN_0045a414",pbVar9,7);
                      if (iVar2 != 0) {
                        *(undefined1 *)(param_1 + 0x10c) = 1;
                        pbVar9 = pbVar9 + 7;
                        FUN_00467120(param_2);
                      }
                      if (*(int *)(param_1 + 0xdc) != 0) break;
                      iVar2 = FUN_0046a7ac("identity",pbVar9,8);
                      if (iVar2 == 0) {
                        iVar2 = FUN_0046a7ac("deflate",pbVar9,7);
                        if (iVar2 == 0) {
                          iVar2 = FUN_0046a7ac(&DAT_00539b14,pbVar9,4);
                          if (iVar2 == 0) {
                            iVar2 = FUN_0046a7ac("x-gzip",pbVar9,6);
                            if (iVar2 == 0) {
                              iVar2 = FUN_0046a7ac("compress",pbVar9,8);
                              if (iVar2 != 0) {
                                *(undefined4 *)(param_1 + 0xdc) = 3;
                                goto LAB_0045c498;
                              }
                              iVar2 = FUN_0046a7ac("x-compress",pbVar9,10);
                              if (iVar2 == 0) break;
                              pbVar9 = pbVar9 + 10;
                              *(undefined4 *)(param_1 + 0xdc) = 3;
                            }
                            else {
                              pbVar9 = pbVar9 + 6;
                              *(undefined4 *)(param_1 + 0xdc) = 2;
                            }
                          }
                          else {
                            pbVar9 = pbVar9 + 4;
                            *(undefined4 *)(param_1 + 0xdc) = 2;
                          }
                        }
                        else {
                          pbVar9 = pbVar9 + 7;
                          *(undefined4 *)(param_1 + 0xdc) = 1;
                        }
                      }
                      else {
                        *(undefined4 *)(param_1 + 0xdc) = 0;
LAB_0045c498:
                        pbVar9 = pbVar9 + 8;
                      }
                    }
                  }
                }
                else {
                  *(undefined1 *)(param_2 + 0x1d8) = 1;
                }
LAB_0045c8f8:
                cVar10 = *(char *)(param_1 + 700);
                goto LAB_0045c900;
              }
              *(undefined1 *)(param_2 + 0x1d8) = 0;
              pcVar5 = "HTTP/1.0 connection set to keep alive!\n";
            }
          }
          FUN_0045ced0(param_1,pcVar5);
          goto LAB_0045c1bc;
        }
        pcVar5 = (char *)FUN_00459348();
        if (((*(char **)(param_2 + 0x488) != (char *)0x0) && (**(char **)(param_2 + 0x488) != '\0'))
           && (iVar2 = FUN_0045378c(param_1,pcVar5), iVar2 != 0)) {
          **(undefined1 **)(param_2 + 0x488) = 0;
        }
        if (pcVar5 != (char *)0x0) goto LAB_0045c1b4;
        cVar10 = *(char *)(param_1 + 700);
      }
LAB_0045c900:
      uVar11 = 2;
      if (cVar10 != '\0') {
        uVar11 = 3;
      }
      if (*(char *)(param_1 + 0x2c8) != '\0') {
        FUN_0045cde4(param_1,1,*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xa8),
                     param_2);
      }
      iVar2 = FUN_0045d208(param_2,uVar11,*(undefined4 *)(param_1 + 0xb8),
                           *(undefined4 *)(param_1 + 0xa8));
      if (iVar2 != 0) {
        return iVar2;
      }
      *(int *)(param_1 + 0x8680) = *(int *)(param_1 + 0x8680) + *(int *)(param_1 + 0xa8);
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + *(int *)(param_1 + 0xa8);
    }
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x52c);
    if (*param_4 != '\0') {
      return 0;
    }
    if (**(char **)(param_1 + 0xac) == '\0') {
      return 0;
    }
  } while( true );
}



// ==== anonymous @ 004608ec size=7604

int anonymous(int param_1,int *param_2,char *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  byte bVar6;
  int *piVar7;
  uint uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  int *piVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  char *pcVar19;
  undefined4 *puVar20;
  int *piVar21;
  char *pcVar22;
  int iVar23;
  undefined **ppuVar24;
  int *piVar25;
  undefined1 *local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_87;
  char local_84 [16];
  char *local_74;
  int local_70;
  char *local_6c;
  int local_68 [2];
  int local_60;
  int local_5c;
  uint local_58;
  undefined4 *local_54;
  uint local_50;
  uint local_4c;
  int *local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  char *local_34;
  int local_30;
  
  uVar16 = *(undefined4 *)(param_1 + 0x40);
  *param_3 = '\0';
  iVar17 = 3;
  local_68[0] = 0;
  local_6c = (char *)0x0;
  local_50 = FUN_004507f8(uVar16);
  local_4c = FUN_00450810(*(undefined4 *)(param_1 + 0x40));
  iVar23 = *(int *)(param_1 + 1000);
  *param_3 = '\0';
  if (iVar23 != 0) {
    piVar7 = (int *)(*(code *)PTR_calloc_005605e0)(1,0x490);
    if (piVar7 == (int *)0x0) goto LAB_004617d0;
    piVar7[0x81] = (int)&PTR_s_<no_protocol>_0053a2bc;
    piVar7[0x55] = -1;
    piVar7[0x56] = -1;
    piVar7[0x57] = -1;
    piVar7[0x58] = -1;
    piVar7[0x11] = -1;
    piVar7[0x2c] = -1;
    piVar7[0x2d] = -1;
    *(undefined1 *)(piVar7 + 0x76) = 1;
    FUN_004551c0(&local_60);
    uVar16 = *(undefined4 *)(param_1 + 0x40);
    piVar7[0x53] = local_60;
    *piVar7 = param_1;
    piVar7[0x54] = local_5c;
    iVar17 = *(int *)(param_1 + 0x280);
    *(undefined1 *)((int)piVar7 + 0x1da) = 0;
    piVar7[0x4e] = iVar17;
    iVar17 = *(int *)(param_1 + 0x368);
    *(undefined1 *)((int)piVar7 + 0x1db) = 0;
    *(undefined1 *)((int)piVar7 + 0x1dd) = 0;
    *(bool *)(piVar7 + 0x77) = iVar17 != 0;
    uVar1 = *(undefined1 *)(param_1 + 0x2cc);
    *(undefined1 *)((int)piVar7 + 0x1e5) = 0;
    *(undefined1 *)(piVar7 + 0x7a) = uVar1;
    *(undefined1 *)((int)piVar7 + 0x1e9) = *(undefined1 *)(param_1 + 0x2cd);
    *(undefined1 *)(piVar7 + 0x11c) = *(undefined1 *)(param_1 + 0x250);
    *(undefined1 *)((int)piVar7 + 0x471) = *(undefined1 *)(param_1 + 0x251);
    piVar7[0x83] = *(int *)(param_1 + 0x294);
    iVar17 = FUN_0044f800(uVar16);
    if ((iVar17 != 0) && (piVar7[0x94] == 0)) {
      iVar17 = (*(code *)PTR_calloc_005605e0)(0x4000,1);
      piVar7[0x94] = iVar17;
      if (iVar17 != 0) goto LAB_00460a28;
      iVar17 = piVar7[0x92];
LAB_00460b0c:
      FUN_00467800(iVar17,0);
      FUN_00467800(piVar7[0x93],0);
      piVar7[0x92] = 0;
      piVar7[0x93] = 0;
      if (piVar7[0x94] != 0) {
        (*DAT_005605ec)();
        piVar7[0x94] = 0;
      }
      if (piVar7[0x11d] != 0) {
        (*DAT_005605ec)();
        piVar7[0x11d] = 0;
      }
      (*DAT_005605ec)(piVar7);
      iVar17 = 0x1b;
      goto LAB_004617d8;
    }
LAB_00460a28:
    iVar17 = FUN_00467630(&LAB_0045d784);
    piVar7[0x92] = iVar17;
    iVar17 = FUN_00467630(&LAB_0045d784);
    piVar7[0x93] = iVar17;
    if (piVar7[0x92] == 0) {
      iVar17 = piVar7[0x92];
      goto LAB_00460b0c;
    }
    if (iVar17 == 0) {
LAB_00460b08:
      iVar17 = piVar7[0x92];
      goto LAB_00460b0c;
    }
    if (*(int *)(param_1 + 0x30c) != 0) {
      iVar17 = (*DAT_005605e4)();
      piVar7[0x11d] = iVar17;
      if (iVar17 == 0) goto LAB_00460b08;
    }
    piVar7[0x11f] = *(int *)(param_1 + 0x16c);
    *(undefined2 *)(piVar7 + 0x11e) = *(undefined2 *)(param_1 + 0x168);
    piVar7[0xe] = *(int *)(param_1 + 0x1a8);
    piVar7[0xf] = *(int *)(param_1 + 0x1ac);
    *param_2 = (int)piVar7;
    uVar8 = strlen(*(undefined4 *)(param_1 + 1000));
    if (uVar8 < 0x100) {
      uVar8 = 0x100;
    }
    if (*(int *)(param_1 + 0x8620) != 0) {
      (*DAT_005605ec)();
      *(undefined4 *)(param_1 + 0x8620) = 0;
    }
    pcVar5 = DAT_005605f0;
    *(undefined4 *)(param_1 + 0x8624) = 0;
    iVar17 = (*pcVar5)(uVar8 + 2);
    *(int *)(param_1 + 0x8620) = iVar17;
    pcVar5 = DAT_005605f0;
    if (iVar17 == 0) {
LAB_004617d0:
      iVar17 = 0x1b;
      goto LAB_004617d8;
    }
    *(int *)(param_1 + 0x8624) = iVar17;
    puVar9 = (undefined1 *)(*pcVar5)(uVar8 + 2);
    piVar7[0x24] = (int)puVar9;
    if (puVar9 == (undefined1 *)0x0) {
      if (*(int *)(param_1 + 0x8620) != 0) {
        (*DAT_005605ec)();
        *(undefined4 *)(param_1 + 0x8620) = 0;
      }
      *(undefined4 *)(param_1 + 0x8624) = 0;
      goto LAB_004617d0;
    }
    piVar7[0x26] = (int)puVar9;
    *puVar9 = 0;
    local_68[0] = (*DAT_005605e4)(&DAT_0053b564);
    local_6c = (char *)(*DAT_005605e4)(&DAT_0053b564);
    pcVar10 = (char *)(*DAT_005605e4)(&DAT_0053b564);
    if ((local_68[0] != 0) && (local_6c != (char *)0x0)) {
      if (pcVar10 == (char *)0x0) goto LAB_004617d0;
      pcVar19 = *(char **)(param_1 + 0x8624);
      local_84[0] = '\0';
      local_84[1] = '\0';
      local_84[2] = '\0';
      local_84[3] = '\0';
      local_84[4] = '\0';
      local_84[5] = '\0';
      local_84[6] = '\0';
      local_84[7] = '\0';
      local_84[8] = '\0';
      local_84[9] = '\0';
      local_84[10] = '\0';
      local_84[0xb] = '\0';
      local_84[0xc] = '\0';
      local_84[0xd] = '\0';
      local_84[0xe] = '\0';
      local_84[0xf] = '\0';
      iVar17 = sscanf(*(undefined4 *)(param_1 + 1000),"%15[^:]:%[^\n]",local_84,pcVar19);
      if ((iVar17 == 2) && (iVar17 = FUN_0046a70c(local_84,"file"), iVar17 != 0)) {
        if ((*pcVar19 == '/') && (pcVar19[1] == '/')) {
          iVar17 = strlen(pcVar19 + 2);
          memmove(pcVar19,pcVar19 + 2,iVar17 + 1);
        }
        pcVar22 = "file";
        if ((*pcVar19 == '/') || (iVar17 = strchr(pcVar19,0x2f), iVar17 == 0)) {
          bVar4 = false;
        }
        else {
          iVar17 = iVar17 + (uint)(*(char *)(iVar17 + 1) == '/');
          iVar23 = strlen(iVar17);
          memmove(pcVar19,iVar17,iVar23 + 1);
          bVar4 = false;
        }
LAB_00460e68:
        iVar18 = piVar7[0x26];
        iVar23 = strchr(iVar18,0x40);
        iVar17 = iVar23 + 1;
        if (iVar23 == 0) {
          iVar17 = iVar18;
        }
        puVar9 = (undefined1 *)strchr(iVar17,0x3f);
        if (puVar9 == (undefined1 *)0x0) {
          bVar3 = false;
          if (*pcVar19 == '\0') {
            strcpy(pcVar19,&DAT_00539308);
            goto LAB_00460ef8;
          }
        }
        else {
          iVar17 = strlen(puVar9);
          iVar23 = strlen(pcVar19);
          memmove(pcVar19 + iVar17 + 1,pcVar19,iVar23 + 1);
          memcpy(pcVar19 + 1,puVar9,iVar17);
          *pcVar19 = '/';
          *puVar9 = 0;
LAB_00460ef8:
          bVar3 = true;
        }
        if (*pcVar19 == '?') {
          iVar17 = strlen();
          memmove(pcVar19 + 1,pcVar19,iVar17 + 1);
          *pcVar19 = '/';
          goto LAB_00460f8c;
        }
        pcVar11 = (char *)FUN_0046b030(pcVar19);
        if (pcVar11 == (char *)0x0) goto LAB_004617b4;
        iVar17 = strcmp(pcVar11,pcVar19);
        if (iVar17 == 0) {
          (*DAT_005605ec)(pcVar11);
          if (bVar3) goto LAB_00460f8c;
        }
        else {
          (*DAT_005605ec)(*(undefined4 *)(param_1 + 0x8620));
          *(char **)(param_1 + 0x8620) = pcVar11;
          *(char **)(param_1 + 0x8624) = pcVar11;
          pcVar19 = pcVar11;
LAB_00460f8c:
          local_58 = strlen(pcVar19);
          iVar17 = strlen(*(undefined4 *)(param_1 + 1000));
          iVar23 = strlen(piVar7[0x26]);
          if (!bVar4) {
            iVar18 = strlen(pcVar22);
            iVar23 = iVar23 + 3 + iVar18;
          }
          iVar17 = (*DAT_005605f0)(iVar17 + 2);
          if (iVar17 == 0) goto LAB_004617b4;
          memcpy(iVar17,*(undefined4 *)(param_1 + 1000),iVar23);
          memcpy(iVar17 + iVar23,pcVar19,local_58 + 1);
          if (*(char *)(param_1 + 0x3ec) != '\0') {
            if (*(int *)(param_1 + 1000) != 0) {
              (*DAT_005605ec)();
              *(undefined4 *)(param_1 + 1000) = 0;
            }
            *(undefined1 *)(param_1 + 0x3ec) = 0;
          }
          FUN_0045ced0(param_1,"Rebuilt URL to: %s\n",iVar17);
          *(int *)(param_1 + 1000) = iVar17;
          *(undefined1 *)(param_1 + 0x3ec) = 1;
        }
        local_74 = (char *)0x0;
        local_98 = (undefined1 *)0x0;
        iVar23 = piVar7[0x26];
        local_70 = 0;
        iVar17 = strchr(iVar23,0x40);
        if (iVar17 == 0) {
          iVar18 = 0;
        }
        else {
          iVar15 = *(int *)(param_1 + 0x2c4);
          iVar18 = 0;
          piVar7[0x26] = iVar17 + 1;
          if ((iVar15 != 2) &&
             (iVar18 = FUN_0045d78c(iVar23,((iVar17 + 1) - iVar23) + -1,&local_70,&local_74,
                                    &local_98), iVar18 == 0)) {
            if (local_70 == 0) {
LAB_004610ec:
              if (local_74 != (char *)0x0) {
                pcVar11 = (char *)FUN_00463074(param_1,local_74,0,0);
                if (pcVar11 == (char *)0x0) goto LAB_00461164;
                (*DAT_005605ec)(local_6c);
                local_6c = pcVar11;
              }
              if (local_98 != (undefined1 *)0x0) {
                pcVar11 = (char *)FUN_00463074(param_1,local_98,0,0);
                if (pcVar11 == (char *)0x0) goto LAB_00461164;
                (*DAT_005605ec)(pcVar10);
                pcVar10 = pcVar11;
              }
            }
            else {
              *(undefined1 *)((int)piVar7 + 0x1eb) = 1;
              *(undefined1 *)(piVar7 + 0x77) = 1;
              iVar17 = FUN_00463074(param_1,local_70,0,0);
              if (iVar17 != 0) {
                (*DAT_005605ec)(local_68[0]);
                local_68[0] = iVar17;
                goto LAB_004610ec;
              }
LAB_00461164:
              iVar18 = 0x1b;
            }
          }
        }
        if (local_70 != 0) {
          (*DAT_005605ec)();
          local_70 = 0;
        }
        if (local_74 != (char *)0x0) {
          (*DAT_005605ec)();
          local_74 = (char *)0x0;
        }
        if (local_98 != (undefined1 *)0x0) {
          (*DAT_005605ec)();
        }
        iVar17 = iVar18;
        if (iVar18 == 0) {
          if ((*(char *)piVar7[0x26] == '[') &&
             (iVar17 = strchr((char *)piVar7[0x26],0x25), iVar17 != 0)) {
            iVar23 = strncmp(&DAT_00539efc,iVar17,3);
            local_58 = 3;
            if (iVar23 != 0) {
              FUN_0045ced0(param_1,"Please URL encode %% as %%25, see RFC 6874.\n");
              local_58 = 1;
            }
            local_34 = (char *)(iVar17 + local_58);
            iVar23 = strtoul(local_34,&local_74,10);
            if (*local_74 == ']') {
              local_34 = local_74;
              local_30 = iVar23;
              iVar23 = strlen(local_74);
              memmove(iVar17,local_34,iVar23 + 1);
              piVar7[0x22] = local_30;
              goto LAB_00461308;
            }
            strncpy(&local_98,local_34,0x12);
            local_87 = 0;
            puVar9 = (undefined1 *)strchr(&local_98,0x5d);
            if (puVar9 != (undefined1 *)0x0) {
              *puVar9 = 0;
              pcVar11 = (char *)if_nametoindex(&local_98);
              if (pcVar11 != (char *)0x0) {
                local_34 = pcVar11;
                iVar23 = strlen(&local_98);
                memmove(iVar17,iVar17 + iVar23 + local_58);
                piVar7[0x22] = (int)local_34;
                goto LAB_00461308;
              }
              puVar20 = (undefined4 *)__errno_location();
              uVar16 = strerror(*puVar20);
              FUN_0045ced0(param_1,"Invalid network interface: %s; %s\n",&local_98,uVar16);
            }
            FUN_0045ced0(param_1,"Invalid IPv6 address format\n");
            iVar17 = *(int *)(param_1 + 0x398);
          }
          else {
LAB_00461308:
            iVar17 = *(int *)(param_1 + 0x398);
          }
          if (iVar17 != 0) {
            piVar7[0x22] = iVar17;
          }
          puVar9 = (undefined1 *)strchr(pcVar19,0x23);
          if (puVar9 != (undefined1 *)0x0) {
            *puVar9 = 0;
            puVar9 = (undefined1 *)strchr(*(undefined4 *)(param_1 + 1000),0x23);
            if (puVar9 != (undefined1 *)0x0) {
              *puVar9 = 0;
            }
          }
          for (ppuVar24 = &PTR_PTR_0053a300; puVar20 = (undefined4 *)*ppuVar24,
              puVar20 != (undefined4 *)0x0; ppuVar24 = ppuVar24 + 1) {
            iVar17 = FUN_0046a70c(*puVar20,pcVar22);
            if (iVar17 != 0) {
              if (((puVar20[0xf] & *(uint *)(param_1 + 0x39c)) != 0) &&
                 ((*(char *)(param_1 + 0x8540) == '\0' ||
                  ((puVar20[0xf] & *(uint *)(param_1 + 0x3a0)) != 0)))) {
                piVar7[0x82] = (int)puVar20;
                piVar7[0x81] = (int)puVar20;
                if (bVar4) {
                  iVar17 = FUN_00464504(&DAT_00539f88,*puVar20,*(undefined4 *)(param_1 + 1000));
                  if (iVar17 == 0) goto LAB_004617b4;
                  if ((*(char *)(param_1 + 0x3ec) != '\0') && (*(int *)(param_1 + 1000) != 0)) {
                    (*DAT_005605ec)();
                  }
                  *(int *)(param_1 + 1000) = iVar17;
                  *(undefined1 *)(param_1 + 0x3ec) = 1;
                }
                if (((*(uint *)(piVar7[0x82] + 0x40) & 0x40) != 0) &&
                   (puVar9 = (undefined1 *)strchr(*(undefined4 *)(*piVar7 + 0x8624),0x3f),
                   puVar9 != (undefined1 *)0x0)) {
                  *puVar9 = 0;
                }
                if (*(int *)(param_1 + 0x394) != 0) {
                  iVar17 = (*DAT_005605e4)();
                  piVar7[0x4b] = iVar17;
                  if (iVar17 == 0) {
                    iVar17 = 0x1b;
                    goto LAB_004617bc;
                  }
                }
                if ((*(uint *)(piVar7[0x82] + 0x40) & 1) == 0) {
                  iVar17 = piVar7[0x26];
                }
                else {
                  if (*(char *)((int)piVar7 + 0x1db) != '\0') {
                    *(undefined1 *)((int)piVar7 + 0x1e5) = 1;
                  }
                  iVar17 = piVar7[0x26];
                }
                iVar17 = sscanf(iVar17,"[%*45[0123456789abcdefABCDEF:.]%c",local_84);
                if ((iVar17 == 1) && (local_84[0] == ']')) {
                  iVar17 = piVar7[0x26] + 1;
                  *(undefined1 *)((int)piVar7 + 0x1de) = 1;
                  piVar7[0x26] = iVar17;
                  puVar12 = (undefined1 *)strchr(iVar17,0x5d);
                  puVar9 = puVar12;
                  if (puVar12 != (undefined1 *)0x0) {
                    puVar9 = puVar12 + 1;
                    *puVar12 = 0;
                    if (puVar12[1] != ':') {
                      puVar9 = (undefined1 *)0x0;
                    }
                  }
                }
                else {
                  puVar9 = (undefined1 *)strrchr(piVar7[0x26],0x3a);
                }
                if ((*(uint *)(param_1 + 0x138) == 0) || (*(char *)(param_1 + 0x856c) == '\0')) {
                  if (puVar9 != (undefined1 *)0x0) {
                    uVar8 = strtol(puVar9 + 1,&local_98,10);
                    if (0xffff < uVar8) {
                      pcVar19 = "Port number out of range";
                      goto LAB_0046168c;
                    }
                    *puVar9 = 0;
                    if (local_98 != puVar9 + 1) {
                      iVar17 = FUN_00452e30(uVar8);
                      piVar7[0x2d] = iVar17;
                    }
                  }
                }
                else {
                  piVar7[0x2d] = *(uint *)(param_1 + 0x138) & 0xffff;
                  if (puVar9 != (undefined1 *)0x0) {
                    *puVar9 = 0;
                  }
                  if (*(char *)((int)piVar7 + 0x1db) != '\0') {
                    local_98 = (undefined1 *)0x0;
                    local_94 = 0;
                    local_90 = 0;
                    if ((char)piVar7[0x7c] != '\0') {
                      uVar16 = 0x41;
                      if ((*(char *)(param_1 + 0x2b3) == '\0') &&
                         (uVar16 = 0x44, *(char *)(param_1 + 0x2b5) == '\0')) {
                        uVar16 = 0x49;
                      }
                      FUN_004632a0(&local_98,0xc,";type=%c",uVar16);
                    }
                    if (*(char *)((int)piVar7 + 0x1de) == '\0') {
                      puVar9 = &DAT_0053b564;
                    }
                    else {
                      puVar9 = &DAT_00549114;
                    }
                    if (*(char *)((int)piVar7 + 0x1de) == '\0') {
                      puVar13 = &DAT_0053b564;
                    }
                    else {
                      puVar13 = &DAT_005390f4;
                    }
                    if (*(char *)(param_1 + 0x8628) == '\0') {
                      puVar12 = &DAT_0053b564;
                    }
                    else {
                      puVar12 = &DAT_00539308;
                    }
                    iVar17 = FUN_00464504("%s://%s%s%s:%hu%s%s%s",*(undefined4 *)piVar7[0x82],puVar9
                                          ,piVar7[0x26],puVar13,piVar7[0x2d],puVar12,
                                          *(undefined4 *)(param_1 + 0x8624),&local_98);
                    if (iVar17 == 0) goto LAB_004617b4;
                    if ((*(char *)(param_1 + 0x3ec) != '\0') && (*(int *)(param_1 + 1000) != 0)) {
                      (*DAT_005605ec)();
                    }
                    *(int *)(param_1 + 1000) = iVar17;
                    *(undefined1 *)(param_1 + 0x3ec) = 1;
                  }
                }
                if (*(int *)(param_1 + 0x368) != 0) {
                  (*DAT_005605ec)(local_68[0]);
                  local_68[0] = (*DAT_005605e4)(*(undefined4 *)(param_1 + 0x368));
                  if (local_68[0] == 0) goto LAB_004617ac;
                }
                if (*(int *)(param_1 + 0x36c) == 0) {
                  iVar17 = *(int *)(param_1 + 0x370);
                }
                else {
                  (*DAT_005605ec)(local_6c);
                  local_6c = (char *)(*DAT_005605e4)(*(undefined4 *)(param_1 + 0x36c));
                  if (local_6c == (char *)0x0) goto LAB_004617ac;
                  iVar17 = *(int *)(param_1 + 0x370);
                }
                if (iVar17 != 0) {
                  (*DAT_005605ec)(pcVar10);
                  pcVar10 = (char *)(*DAT_005605e4)(*(undefined4 *)(param_1 + 0x370));
                  if (pcVar10 == (char *)0x0) goto LAB_004617d0;
                }
                iVar17 = *(int *)(param_1 + 0x2c4);
                *(undefined1 *)((int)piVar7 + 0x1ea) = 0;
                if (iVar17 == 0) {
LAB_004618a8:
                  iVar17 = piVar7[0x81];
                }
                else {
                  iVar17 = FUN_004647a0(piVar7[0x26],local_68,&local_6c,
                                        *(undefined4 *)(param_1 + 0x330));
                  if (iVar17 < 1) {
                    if (iVar17 == 0) {
                      *(undefined1 *)((int)piVar7 + 0x1ea) = 1;
                      *(undefined1 *)(piVar7 + 0x77) = 1;
                      goto LAB_004618a8;
                    }
                    goto LAB_004617ac;
                  }
                  FUN_0045ced0(param_1,"Couldn\'t find host %s in the .netrc file; using defaults\n"
                               ,piVar7[0x26]);
                  iVar17 = piVar7[0x81];
                }
                pcVar19 = local_6c;
                if (((*(uint *)(iVar17 + 0x40) & 0x20) == 0) || ((char)piVar7[0x77] != '\0')) {
                  iVar17 = (*DAT_005605e4)(local_68[0]);
                  piVar7[0x48] = iVar17;
                  if (iVar17 != 0) goto LAB_00461914;
LAB_00461924:
                  piVar7[0x49] = 0;
                }
                else {
                  iVar17 = (*DAT_005605e4)("anonymous");
                  piVar7[0x48] = iVar17;
                  if (iVar17 == 0) goto LAB_00461924;
                  pcVar19 = "ftp@example.com";
LAB_00461914:
                  iVar17 = (*DAT_005605e4)(pcVar19);
                  piVar7[0x49] = iVar17;
                }
                if ((piVar7[0x48] == 0) || (piVar7[0x49] == 0)) goto LAB_004617b4;
                if (*pcVar10 != '\0') {
                  iVar17 = (*DAT_005605e4)(pcVar10);
                  piVar7[0x4a] = iVar17;
                  if (iVar17 == 0) goto LAB_004617b4;
                }
                iVar17 = *piVar7;
                FUN_004604f0(iVar17);
                memset(iVar17 + 0x50,0,200);
                *(undefined4 *)(iVar17 + 0x60) = 0xffffffff;
                *(undefined4 *)(iVar17 + 100) = 0xffffffff;
                piVar7[0x23] = 2;
                iVar17 = piVar7[0x81];
                if (*(code **)(iVar17 + 4) != (code *)0x0) {
                  iVar17 = (**(code **)(iVar17 + 4))(piVar7);
                  if (iVar17 != 0) goto LAB_004617bc;
                  iVar17 = piVar7[0x81];
                }
                if (piVar7[0x2c] < 0) {
                  piVar7[0x2c] = *(int *)(iVar17 + 0x38);
                }
                if (piVar7[0x2d] < 0) {
                  piVar7[0x2d] = (uint)*(ushort *)(piVar7[0x82] + 0x38);
                }
                piVar7[0x5c] = (int)FUN_0045d014;
                local_48 = piVar7 + 0x68;
                piVar7[0x5d] = (int)FUN_0045d014;
                uVar16 = *(undefined4 *)(param_1 + 0x348);
                piVar7[0x5a] = (int)FUN_0045d130;
                piVar7[0x5b] = (int)FUN_0045d130;
                *(undefined4 *)(param_1 + 0x254) = uVar16;
                *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x34c);
                *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 0x360);
                *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_1 + 0x364);
                *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_1 + 0x358);
                *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_1 + 0x354);
                *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(param_1 + 0x350);
                iVar17 = FUN_00453a04(param_1 + 0x248,local_48);
                if (iVar17 == 0) goto LAB_004617b4;
                FUN_004551c0(&local_98);
                iVar17 = FUN_00455238(local_98,local_94,
                                      *(undefined4 *)(*(int *)(param_1 + 0x518) + 0xc),
                                      *(undefined4 *)(*(int *)(param_1 + 0x518) + 0x10));
                if (999 < iVar17) {
                  FUN_004531c8(*(undefined4 *)(param_1 + 0x518),param_1,FUN_004601a8);
                  iVar17 = *(int *)(param_1 + 0x518);
                  *(undefined1 **)(iVar17 + 0xc) = local_98;
                  *(undefined4 *)(iVar17 + 0x10) = local_94;
                }
                if ((*(char *)(param_1 + 0x2cb) != '\0') && (*(char *)(param_1 + 0x8540) == '\0'))
                goto LAB_004623d8;
                iVar17 = FUN_004086dc(param_1,piVar7[0x81]);
                local_40 = 0;
                if ((*(uint *)(param_1 + 0x85b8) & 0x28) != 0) {
                  local_40 = (uint)((*(uint *)(piVar7[0x81] + 0x3c) & 3) != 0);
                }
                bVar6 = 0;
                if (iVar17 != 0) {
                  bVar6 = FUN_00453578(param_1,piVar7);
                  bVar6 = bVar6 ^ 1;
                }
                pcVar19 = (char *)FUN_00453014(*(undefined4 *)(param_1 + 0x518),piVar7[0x26]);
                if (pcVar19 == (char *)0x0) goto LAB_004623d8;
                local_3c = FUN_00450828(*(undefined4 *)(param_1 + 0x40));
                FUN_0045ced0(param_1,"Found bundle for host %s: %p\n",piVar7[0x26],pcVar19);
                if ((bVar6 != 0) && (*pcVar19 == '\0')) {
                  bVar6 = 0;
                  FUN_0045ced0(param_1,"Server doesn\'t support pipelining\n");
                }
                local_54 = (undefined4 *)**(undefined4 **)(pcVar19 + 8);
                local_44 = local_3c;
                piVar21 = (int *)0x0;
                goto LAB_00461b90;
              }
              break;
            }
          }
          FUN_0045cf40(param_1,"Protocol \"%s\" not supported or disabled in libcurl",pcVar22);
          iVar17 = 1;
        }
      }
      else {
        *pcVar19 = '\0';
        pcVar22 = pcVar19;
        iVar17 = sscanf(*(undefined4 *)(param_1 + 1000),"%15[^\n:]://%[^\n/?]%[^\n]",local_84,
                        piVar7[0x26],pcVar19);
        bVar4 = false;
        if (1 < iVar17) {
          pcVar22 = local_84;
          goto LAB_00460e68;
        }
        iVar17 = sscanf(*(undefined4 *)(param_1 + 1000),"%[^\n/?]%[^\n]",piVar7[0x26],pcVar19,
                        pcVar22);
        if (0 < iVar17) {
          iVar17 = FUN_0046a7ac(&DAT_00539eb8,piVar7[0x26],4);
          if (iVar17 == 0) {
            iVar17 = FUN_0046a7ac("DICT.",piVar7[0x26],5);
            if (iVar17 == 0) {
              iVar17 = FUN_0046a7ac("LDAP.",piVar7[0x26],5);
              if (iVar17 == 0) {
                iVar17 = FUN_0046a7ac("IMAP.",piVar7[0x26],5);
                if (iVar17 == 0) {
                  iVar17 = FUN_0046a7ac("SMTP.",piVar7[0x26],5);
                  if (iVar17 == 0) {
                    bVar4 = true;
                    iVar17 = FUN_0046a7ac(&DAT_00539ee0,piVar7[0x26],5);
                    if (iVar17 == 0) {
                      pcVar22 = "http";
                    }
                    else {
                      pcVar22 = "pop3";
                    }
                  }
                  else {
                    bVar4 = true;
                    pcVar22 = "smtp";
                  }
                }
                else {
                  bVar4 = true;
                  pcVar22 = "IMAP";
                }
              }
              else {
                bVar4 = true;
                pcVar22 = "LDAP";
              }
            }
            else {
              bVar4 = true;
              pcVar22 = "DICT";
            }
          }
          else {
            bVar4 = true;
            pcVar22 = "ftp";
          }
          goto LAB_00460e68;
        }
        pcVar19 = "<url> malformed";
LAB_0046168c:
        FUN_0045cf40(param_1,pcVar19);
        iVar17 = 3;
      }
      goto LAB_004617bc;
    }
LAB_004617ac:
    if (pcVar10 == (char *)0x0) goto LAB_004617d0;
LAB_004617b4:
    iVar17 = 0x1b;
    goto LAB_004617bc;
  }
  goto LAB_004617d8;
LAB_004623d8:
  uVar16 = *(undefined4 *)(param_1 + 0x518);
LAB_004623dc:
  iVar17 = FUN_00453014(uVar16,piVar7[0x26]);
  if ((local_50 == 0) || (iVar17 == 0)) {
    piVar21 = (int *)0x0;
  }
  else {
    piVar21 = (int *)0x0;
    if (local_50 <= *(uint *)(iVar17 + 4)) {
      FUN_004551c0(&local_98);
      pcVar19 = (char *)0xffffffff;
      for (puVar20 = (undefined4 *)**(undefined4 **)(iVar17 + 8); puVar20 != (undefined4 *)0x0;
          puVar20 = (undefined4 *)puVar20[2]) {
        piVar25 = (int *)*puVar20;
        if (((char)piVar25[0x10] == '\0') &&
           (local_34 = pcVar19,
           pcVar22 = (char *)FUN_00455238(local_98,local_94,piVar25[0x51],piVar25[0x52]),
           pcVar19 = local_34, (int)local_34 < (int)pcVar22)) {
          piVar21 = piVar25;
          pcVar19 = pcVar22;
        }
      }
      if (piVar21 == (int *)0x0) {
        piVar21 = (int *)&_DYNAMIC_LINKING;
      }
      else {
        *piVar21 = param_1;
        FUN_00460014(piVar21,0);
        piVar21 = (int *)0x0;
      }
    }
  }
  if ((local_4c == 0) || (*(uint *)(*(int *)(param_1 + 0x518) + 4) < local_4c)) {
LAB_0046220c:
    if (piVar21 == (int *)0x0) {
      FUN_00453064(*(undefined4 *)(param_1 + 0x518),piVar7);
      if (((*(uint *)(param_1 + 0x85bc) & 0x28) != 0) && (*(char *)(param_1 + 0x85c4) != '\0')) {
        FUN_0045ced0(param_1,"NTLM picked AND auth done set, clear picked!\n");
        *(undefined4 *)(param_1 + 0x85bc) = 0;
      }
      if (((*(uint *)(param_1 + 0x85cc) & 0x28) != 0) && (*(char *)(param_1 + 0x85d4) != '\0')) {
        FUN_0045ced0(param_1,"NTLM-proxy picked AND auth done set, clear picked!\n");
        *(undefined4 *)(param_1 + 0x85cc) = 0;
      }
      iVar17 = *piVar7;
      goto LAB_00462254;
    }
  }
  else {
    piVar25 = (int *)FUN_0045dd74();
    if (piVar25 != (int *)0x0) {
      *piVar25 = param_1;
      FUN_00460014(piVar25,0);
      goto LAB_0046220c;
    }
  }
  iVar17 = 0x59;
  FUN_0045ced0(param_1,"No connections available.\n");
  FUN_0045da64(piVar7);
  *param_2 = 0;
  goto LAB_004617bc;
LAB_00461b90:
  do {
    if (local_54 == (undefined4 *)0x0) {
      piVar25 = piVar21;
      if (piVar21 == (int *)0x0) goto LAB_004623d8;
LAB_00461ef8:
      iVar17 = FUN_004086dc(param_1,piVar25[0x81]);
      if (((iVar17 != 0) &&
          ((*(int *)(piVar25[0x93] + 0xc) + *(int *)(piVar25[0x92] + 0xc) != 0 &&
           (FUN_0045ced0(param_1,"Found connection %ld, with requests in the pipe (%zu)\n",
                         piVar25[0x11]), *(uint *)(piVar25[0x122] + 4) < local_50)))) &&
         (*(uint *)(*(int *)(param_1 + 0x518) + 4) < local_4c)) {
        FUN_0045ced0(param_1,"We can reuse, but we want a new connection anyway\n");
        uVar16 = *(undefined4 *)(param_1 + 0x518);
        goto LAB_004623dc;
      }
      goto LAB_00461fe8;
    }
    piVar25 = (int *)*local_54;
    local_54 = (undefined4 *)local_54[2];
    iVar17 = FUN_004600ec(piVar25,param_1);
  } while (iVar17 != 0);
  local_58 = ((undefined4 *)piVar25[0x93])[3] + ((int *)piVar25[0x92])[3];
  if (bVar6 == 0) {
    if (local_58 != 0) goto LAB_00461b90;
    if ((piVar25[0x55] == -1) || ((char)piVar25[0x76] != '\0')) {
      FUN_0045ced0(param_1,"FUN_0045a064 #%ld isn\'t open enough, can\'t reuse\n",piVar25[0x11]);
      goto LAB_00461b90;
    }
  }
  else {
    piVar14 = *(int **)piVar25[0x92];
    if (piVar14 == (int *)0x0) {
      iVar17 = 0;
    }
    else {
      iVar17 = *piVar14;
    }
    piVar14 = *(int **)piVar25[0x93];
    iVar23 = iVar17;
    if ((((piVar14 != (int *)0x0) && (iVar23 = *piVar14, iVar17 != 0)) ||
        (iVar17 = iVar23, iVar17 != 0)) &&
       (iVar17 = FUN_004086dc(iVar17,piVar25[0x81]), iVar17 == 0)) goto LAB_00461b90;
  }
  pcVar19 = *(char **)(piVar7[0x81] + 0x40);
  if ((((((((uint)pcVar19 ^ *(uint *)(piVar25[0x81] + 0x40)) & 1) != 0) &&
        ((*(uint *)(piVar25[0x81] + 0x3c) & *(uint *)(piVar7[0x81] + 0x3c)) == 0)) ||
       ((((uint)pcVar19 & 1) != 0 && (*(short *)(param_1 + 0x250) != (short)piVar25[0x11c])))) ||
      (*(char *)((int)piVar7 + 0x1da) != *(char *)((int)piVar25 + 0x1da))) ||
     ((bVar6 == 0 && ((char)piVar25[0x10] != '\0')))) goto LAB_00461b90;
  if (((piVar7[0x11d] != 0) || ((short)piVar7[0x11e] != 0)) &&
     (((((short)piVar25[0x11e] != (short)piVar7[0x11e] || (piVar25[0x11f] != piVar7[0x11f])) ||
       (piVar25[0x11d] == 0)) ||
      ((piVar7[0x11d] == 0 ||
       (local_34 = pcVar19, iVar17 = strcmp(), pcVar19 = local_34, iVar17 != 0))))))
  goto LAB_00461b90;
  if ((((uint)pcVar19 & 0x80) == 0) || (local_40 != 0)) {
    iVar17 = FUN_00467000(piVar7[0x48],piVar25[0x48]);
    if ((iVar17 == 0) || (iVar17 = FUN_00467000(piVar7[0x49],piVar25[0x49]), iVar17 == 0))
    goto LAB_00461b90;
    local_38 = 1;
  }
  else {
    local_38 = 0;
  }
  if ((*(char *)((int)piVar7 + 0x1db) == '\0') || ((*(uint *)(piVar7[0x81] + 0x40) & 1) != 0)) {
    puVar20 = (undefined4 *)piVar7[0x81];
LAB_00461d94:
    iVar17 = FUN_0046a70c(*puVar20,*(undefined4 *)piVar25[0x81]);
    if (iVar17 == 0) {
      if ((*(uint *)(piVar25[0x81] + 0x3c) & *(uint *)(piVar7[0x81] + 0x3c)) == 0)
      goto LAB_00461b90;
      iVar17 = piVar7[0x26];
    }
    else {
      iVar17 = piVar7[0x26];
    }
    iVar17 = FUN_0046a70c(iVar17,piVar25[0x26]);
    if (((iVar17 == 0) || (piVar7[0x2d] != piVar25[0x2d])) ||
       (((*(uint *)(piVar7[0x81] + 0x40) & 1) != 0 &&
        ((iVar17 = FUN_00453950(local_48,piVar25 + 0x68), iVar17 == 0 || (piVar25[0x5f] != 2))))))
    goto LAB_00461b90;
  }
  else {
    if ((((*(char *)((int)piVar25 + 0x1db) != '\0') && (*(char *)((int)piVar7 + 0x1e5) != '\0')) &&
        (*(char *)((int)piVar25 + 0x1e5) != '\0')) &&
       ((iVar17 = FUN_0046a70c(piVar7[0x2a],piVar25[0x2a]), iVar17 != 0 &&
        (piVar7[0x2c] == piVar25[0x2c])))) {
      puVar20 = (undefined4 *)piVar7[0x81];
      goto LAB_00461d94;
    }
    if ((*(char *)((int)piVar25 + 0x1da) == '\0') ||
       ((((piVar7[0x4e] != piVar25[0x4e] ||
          (*(char *)((int)piVar7 + 0x1e5) != *(char *)((int)piVar25 + 0x1e5))) ||
         (iVar17 = FUN_0046a70c(piVar7[0x2a],piVar25[0x2a]), iVar17 == 0)) ||
        (piVar7[0x2c] != piVar25[0x2c])))) goto LAB_00461b90;
  }
  if (local_40 == 0) {
    if ((bVar6 == 0) || (local_58 == 0)) goto LAB_00461ef8;
    if (((local_58 < local_3c) && (iVar17 = FUN_0045332c(param_1,piVar25), iVar17 == 0)) &&
       (local_58 < local_44)) {
      local_44 = local_58;
      piVar21 = piVar25;
    }
    goto LAB_00461b90;
  }
  if ((local_38 == 0) || (piVar21 = piVar25, piVar25[0x9b] == 0)) goto LAB_00461b90;
LAB_00461fe8:
  iVar17 = piVar7[0x28];
  *(undefined1 *)(piVar25 + 0x10) = 1;
  if (iVar17 != 0) {
    (*DAT_005605ec)();
  }
  FUN_00453b2c(local_48);
  *piVar25 = *piVar7;
  iVar17 = piVar7[0x77];
  *(char *)(piVar25 + 0x77) = (char)iVar17;
  if ((char)iVar17 != '\0') {
    if (piVar25[0x48] != 0) {
      (*DAT_005605ec)();
      piVar25[0x48] = 0;
    }
    if (piVar25[0x49] != 0) {
      (*DAT_005605ec)();
      piVar25[0x49] = 0;
    }
    piVar25[0x48] = piVar7[0x48];
    piVar25[0x49] = piVar7[0x49];
    piVar7[0x48] = 0;
    piVar7[0x49] = 0;
  }
  cVar2 = *(char *)((int)piVar7 + 0x1dd);
  *(char *)((int)piVar25 + 0x1dd) = cVar2;
  if (cVar2 != '\0') {
    if (piVar25[0x4c] != 0) {
      (*DAT_005605ec)();
      piVar25[0x4c] = 0;
    }
    if (piVar25[0x4d] != 0) {
      (*DAT_005605ec)();
      piVar25[0x4d] = 0;
    }
    piVar25[0x4c] = piVar7[0x4c];
    piVar25[0x4d] = piVar7[0x4d];
    piVar7[0x4c] = 0;
    piVar7[0x4d] = 0;
  }
  if (piVar25[0x24] != 0) {
    (*DAT_005605ec)();
    piVar25[0x24] = 0;
  }
  memcpy(piVar25 + 0x24,piVar7 + 0x24,0x10);
  FUN_0044dd0c(piVar25);
  iVar17 = piVar7[0x48];
  *(undefined1 *)((int)piVar25 + 0x1d9) = 1;
  if (iVar17 != 0) {
    (*DAT_005605ec)();
    piVar7[0x48] = 0;
  }
  if (piVar7[0x49] != 0) {
    (*DAT_005605ec)();
    piVar7[0x49] = 0;
  }
  if (piVar7[0x4c] != 0) {
    (*DAT_005605ec)();
    piVar7[0x4c] = 0;
  }
  if (piVar7[0x4d] != 0) {
    (*DAT_005605ec)();
    piVar7[0x4d] = 0;
  }
  if (piVar7[0x11d] != 0) {
    (*DAT_005605ec)();
    piVar7[0x11d] = 0;
  }
  FUN_00467800(piVar7[0x92],0);
  FUN_00467800(piVar7[0x93],0);
  piVar7[0x92] = 0;
  piVar7[0x93] = 0;
  if (piVar7[0x94] != 0) {
    (*DAT_005605ec)();
    piVar7[0x94] = 0;
  }
  (*DAT_005605ec)(piVar7);
  *param_2 = (int)piVar25;
  FUN_0040863c(param_1,piVar25 + 0x24);
  if (piVar25[0x2a] == 0) {
    iVar17 = piVar25[0x27];
  }
  else {
    iVar17 = piVar25[0x2b];
  }
  FUN_0045ced0(param_1,"Re-using existing connection! (#%ld) with host %s\n",piVar25[0x11],iVar17);
  iVar17 = *piVar25;
  piVar7 = piVar25;
LAB_00462254:
  *(undefined1 *)(piVar7 + 0x10) = 1;
  *(undefined1 *)(piVar7 + 0x7b) = 0;
  *(undefined1 *)(piVar7 + 0x78) = 0;
  *(undefined1 *)(iVar17 + 0x8610) = 0;
  if (*(char *)(iVar17 + 0x2bf) == '\0') {
    uVar16 = 1;
    if (*(int *)(iVar17 + 0x240) == 5) goto LAB_00462294;
  }
  else {
    uVar16 = 5;
LAB_00462294:
    *(undefined4 *)(iVar17 + 0x240) = uVar16;
  }
  FUN_004551c0(&local_60);
  *(int *)(iVar17 + 0x88) = local_60;
  *(int *)(iVar17 + 0x8c) = local_5c;
  *(undefined4 *)(iVar17 + 0x74) = 0;
  *(undefined4 *)(iVar17 + 0x90) = *(undefined4 *)(iVar17 + 0x88);
  *(undefined1 *)(iVar17 + 0xf9) = 0;
  *(undefined4 *)(iVar17 + 0x94) = *(undefined4 *)(iVar17 + 0x8c);
  *(undefined1 *)(iVar17 + 0x98) = 1;
  *(undefined4 *)(iVar17 + 0x70) = 0;
  *(int *)(iVar17 + 0xe8) = iVar17 + 0x534;
  *(int *)(iVar17 + 0xec) = iVar17 + 0x4535;
  *(undefined4 *)(iVar17 + 0xa4) = *(undefined4 *)(iVar17 + 0x52c);
  FUN_00462be0(iVar17);
  FUN_00456478(iVar17);
  FUN_0045646c(iVar17);
  *(int *)(param_1 + 0x8630) = *(int *)(param_1 + 0x200);
  *(int *)(param_1 + 0x8634) = *(int *)(param_1 + 0x204);
  if ((*(int *)(param_1 + 0x200) == 0 && *(int *)(param_1 + 0x204) == 0) &&
     (*(int *)(param_1 + 0x33c) == 0)) {
    *(undefined1 *)(param_1 + 0x8629) = 0;
  }
  else {
    if (*(char *)(param_1 + 0x862a) != '\0') {
      (*DAT_005605ec)(*(undefined4 *)(param_1 + 0x862c));
    }
    if (*(int *)(param_1 + 0x8630) == 0 && *(int *)(param_1 + 0x8634) == 0) {
      uVar16 = (*DAT_005605e4)(*(undefined4 *)(param_1 + 0x33c));
    }
    else {
      uVar16 = FUN_00464504(&DAT_0053a1e0);
    }
    *(undefined4 *)(param_1 + 0x862c) = uVar16;
    *(bool *)(param_1 + 0x862a) = *(int *)(param_1 + 0x862c) != 0;
    if (*(int *)(param_1 + 0x862c) == 0) goto LAB_004617b4;
    *(undefined1 *)(param_1 + 0x8629) = 1;
  }
  piVar7[0x99] = *(int *)(param_1 + 0x17c);
  piVar7[0x9a] = *(int *)(param_1 + 300);
  piVar7[0x97] = *(int *)(param_1 + 0x158);
  piVar7[0x98] = *(int *)(param_1 + 0x1b0);
  uVar16 = FUN_0044dc14(param_1,0,1);
  if (*(char *)((int)piVar7 + 0x1d9) == '\0') {
    FUN_0040863c(param_1,piVar7 + 0x24);
    if (((char *)piVar7[0x2a] == (char *)0x0) || (*(char *)piVar7[0x2a] == '\0')) {
      piVar7[0x2c] = piVar7[0x2d];
      iVar17 = FUN_00455914(piVar7,piVar7[0x26],piVar7[0x2d],&local_98,uVar16);
      if (iVar17 == 1) goto LAB_004625b4;
      if (iVar17 == -2) goto LAB_004625cc;
      if (local_98 == (undefined1 *)0x0) {
        iVar18 = 6;
        FUN_0045cf40(param_1,"Couldn\'t resolve host \'%s\'",piVar7[0x27]);
      }
    }
    else {
      FUN_0040863c(param_1,piVar7 + 0x28);
      iVar17 = FUN_00455914(piVar7,piVar7[0x2a],piVar7[0x2c],&local_98,uVar16);
      if (iVar17 == 1) {
LAB_004625b4:
        *param_3 = '\x01';
      }
      else if (iVar17 == -2) {
LAB_004625cc:
        iVar18 = 0x1c;
      }
      else if (local_98 == (undefined1 *)0x0) {
        iVar18 = 5;
        FUN_0045cf40(param_1,"Couldn\'t resolve proxy \'%s\'",piVar7[0x2b]);
      }
    }
    piVar7[0x12] = (int)local_98;
    iVar17 = iVar18;
  }
  else {
    *param_3 = '\0';
    iVar17 = iVar18;
  }
LAB_004617bc:
  (*DAT_005605ec)(pcVar10);
LAB_004617d8:
  if (local_6c != (char *)0x0) {
    (*DAT_005605ec)();
    local_6c = (char *)0x0;
  }
  if (local_68[0] != 0) {
    (*DAT_005605ec)();
  }
  if (iVar17 == 0) {
    iVar17 = *param_2;
    if ((*(int *)(*(int *)(iVar17 + 0x248) + 0xc) != 0) ||
       (*(int *)(*(int *)(iVar17 + 0x24c) + 0xc) != 0)) {
      *param_4 = 1;
      return 0;
    }
    if (*param_3 != '\0') {
      return 0;
    }
    iVar17 = FUN_00460788(iVar17,param_4);
    if (iVar17 != 0x59) {
      if (iVar17 == 0) {
        return 0;
      }
LAB_00461878:
      if (*param_2 == 0) {
        return iVar17;
      }
      FUN_00460014(*param_2,0);
      *param_2 = 0;
      return iVar17;
    }
    *param_2 = 0;
  }
  else {
    if (iVar17 != 0x59) goto LAB_00461878;
    *param_2 = 0;
  }
  return 0x59;
}



// ==== d41d8cd98f00b204e9800998ecf8427e @ 0046873c size=1480

int d41d8cd98f00b204e9800998ecf8427e(int *param_1,char param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  code *pcVar14;
  undefined1 *puVar15;
  undefined1 auStack_e0 [36];
  undefined1 auStack_bc [36];
  undefined1 auStack_98 [36];
  undefined1 auStack_74 [36];
  undefined1 auStack_50 [16];
  undefined4 local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 *local_30;
  
  local_3c = 0;
  local_40 = 0;
  iVar12 = *param_1;
  if (param_2 == '\0') {
    piVar10 = param_1 + 0x89;
    pcVar11 = (char *)param_1[0x48];
    piVar9 = (int *)(iVar12 + 0x8570);
    puVar15 = (undefined1 *)param_1[0x49];
    iVar13 = 0x85b8;
  }
  else {
    piVar10 = param_1 + 0x86;
    piVar9 = (int *)(iVar12 + 0x8594);
    iVar13 = 0x85c8;
    pcVar11 = (char *)param_1[0x4c];
    puVar15 = (undefined1 *)param_1[0x4d];
  }
  iVar13 = iVar12 + iVar13;
  if (*piVar10 != 0) {
    (*DAT_005605ec)();
    *piVar10 = 0;
  }
  if (pcVar11 == (char *)0x0) {
    pcVar11 = "";
  }
  if (puVar15 == (undefined1 *)0x0) {
    puVar15 = &DAT_0053b564;
  }
  if (*piVar9 == 0) {
    *(undefined1 *)(iVar13 + 0xc) = 0;
LAB_00468cd0:
    iVar12 = 0;
  }
  else {
    *(undefined1 *)(iVar13 + 0xc) = 1;
    if (piVar9[8] == 0) {
      piVar9[8] = 1;
    }
    if (piVar9[1] == 0) {
      local_34 = FUN_00453bd8(iVar12);
      local_38 = FUN_00453bd8(iVar12);
      local_30 = (undefined4 *)FUN_00453bd8(iVar12);
      uVar4 = FUN_00453bd8(iVar12);
      FUN_004632a0(auStack_e0,0x21,"%08x%08x%08x%08x",local_34,local_38,local_30,uVar4);
      uVar4 = strlen(auStack_e0);
      iVar12 = FUN_0046b6d0(iVar12,auStack_e0,uVar4,&local_3c,&local_40);
      if (iVar12 != 0) {
        return iVar12;
      }
      piVar9[1] = local_3c;
    }
    local_30 = (undefined4 *)&DAT_00540000;
    iVar12 = FUN_00464504("%s:%s:%s",pcVar11,piVar9[2],puVar15);
    puVar2 = local_30;
    if (iVar12 != 0) {
      FUN_00469cbc(auStack_50,iVar12);
      local_30 = &DAT_00560000;
      (*DAT_005605ec)(iVar12);
      FUN_00468204(auStack_50,auStack_98);
      puVar3 = local_30;
      if (piVar9[3] == 1) {
        local_38 = FUN_00464504((undefined *)((int)puVar2 + -0x5358),auStack_98,*piVar9,piVar9[1]);
        if (local_38 == 0) goto LAB_004688e0;
        FUN_00469cbc(auStack_50,local_38);
        (*(code *)puVar3[0x17b])(local_38);
        FUN_00468204(auStack_50,auStack_98);
      }
      if (*(char *)(iVar13 + 0xe) == '\0') {
LAB_00468988:
        iVar13 = strlen(param_4);
      }
      else {
        iVar12 = strchr(param_4,0x3f);
        iVar13 = iVar12 - param_4;
        if (iVar12 == 0) goto LAB_00468988;
      }
      iVar5 = FUN_00464504("%s:%.*s",param_3,iVar13,param_4);
      iVar12 = iVar5;
      if ((piVar9[6] != 0) && (iVar6 = FUN_0046a70c(piVar9[6],"auth-int"), iVar6 != 0)) {
        iVar12 = FUN_00464504("%s:%s",iVar5,"d41d8cd98f00b204e9800998ecf8427e");
        if (iVar5 != 0) {
          local_38 = iVar12;
          (*(code *)puVar3[0x17b])(iVar5);
          iVar12 = local_38;
        }
      }
      if (iVar12 == 0) {
        return 0x1b;
      }
      FUN_00469cbc(auStack_50,iVar12);
      (*(code *)puVar3[0x17b])(iVar12);
      FUN_00468204(auStack_50,auStack_bc);
      if (piVar9[6] == 0) {
        local_38 = FUN_00464504((undefined *)((int)puVar2 + -0x5358),auStack_98,*piVar9,auStack_bc);
      }
      else {
        local_38 = FUN_00464504("%s:%s:%08x:%s:%s:%s",auStack_98,*piVar9,piVar9[8],piVar9[1],
                                piVar9[6],auStack_bc);
      }
      if (local_38 != 0) {
        FUN_00469cbc(auStack_50,local_38);
        (*(code *)puVar3[0x17b])(local_38);
        FUN_00468204(auStack_50,auStack_74);
        iVar12 = 1;
        for (pcVar7 = pcVar11; cVar1 = *pcVar7, cVar1 != '\0'; pcVar7 = pcVar7 + 1) {
          if ((cVar1 == '\"') || (cVar1 == '\\')) {
            iVar12 = iVar12 + 2;
          }
          else {
            iVar12 = iVar12 + 1;
          }
        }
        pcVar8 = (char *)(*DAT_005605f0)(iVar12);
        pcVar7 = pcVar8;
        if (pcVar8 != (char *)0x0) {
          for (; cVar1 = *pcVar11, cVar1 != '\0'; pcVar11 = pcVar11 + 1) {
            if ((cVar1 == '\"') || (cVar1 == '\\')) {
              *pcVar7 = '\\';
              pcVar7 = pcVar7 + 1;
            }
            *pcVar7 = *pcVar11;
            pcVar7 = pcVar7 + 1;
          }
          *pcVar7 = '\0';
          if (piVar9[6] == 0) {
            if (param_2 == '\0') {
              pcVar11 = "";
            }
            else {
              pcVar11 = "Proxy-";
            }
            iVar12 = FUN_00464504("%sAuthorization: Digest username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%.*s\", response=\"%s\""
                                  ,pcVar11,pcVar8,piVar9[2],*piVar9,iVar13,param_4,auStack_74);
            *piVar10 = iVar12;
LAB_00468c14:
            pcVar14 = (code *)puVar3[0x17b];
          }
          else {
            if (param_2 == '\0') {
              pcVar11 = "";
            }
            else {
              pcVar11 = "Proxy-";
            }
            iVar12 = FUN_00464504("%sAuthorization: Digest username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%.*s\", cnonce=\"%s\", nc=%08x, qop=%s, response=\"%s\""
                                  ,pcVar11,pcVar8,piVar9[2],*piVar9,iVar13,param_4,piVar9[1],
                                  piVar9[8],piVar9[6],auStack_74);
            *piVar10 = iVar12;
            iVar12 = FUN_0046a70c(piVar9[6],&DAT_0053ac5c);
            pcVar14 = (code *)puVar3[0x17b];
            if (iVar12 != 0) {
              piVar9[8] = piVar9[8] + 1;
              goto LAB_00468c14;
            }
          }
          (*pcVar14)(pcVar8);
          if (*piVar10 == 0) {
            return 0x1b;
          }
          if (piVar9[5] != 0) {
            iVar12 = FUN_00464504("%s, opaque=\"%s\"");
            if (iVar12 == 0) goto LAB_004688e0;
            (*DAT_005605ec)(*piVar10);
            *piVar10 = iVar12;
          }
          if (piVar9[7] != 0) {
            iVar12 = FUN_00464504("%s, algorithm=\"%s\"",*piVar10);
            if (iVar12 == 0) goto LAB_004688e0;
            (*(code *)puVar3[0x17b])(*piVar10);
            *piVar10 = iVar12;
          }
          iVar13 = *piVar10;
          iVar12 = strlen(iVar13);
          iVar13 = (*DAT_005605e8)(iVar13,iVar12 + 3);
          if (iVar13 != 0) {
            strcpy(iVar13 + iVar12,&DAT_0053b594);
            *piVar10 = iVar13;
            goto LAB_00468cd0;
          }
        }
      }
    }
LAB_004688e0:
    iVar12 = 0x1b;
  }
  return iVar12;
}



// ==== InitRng @ 0046dea4 size=508

int InitRng(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_40;
  undefined1 auStack_3c [52];
  
  if (param_1 != 0) {
    uVar1 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(0x108);
    *(undefined4 *)(param_1 + 4) = uVar1;
    if (*(int *)(param_1 + 4) == 0) {
      local_40 = -0x7d;
    }
    else {
      iVar2 = (*(code *)PTR_FUN_00560f7c)(param_1,auStack_3c,0x30);
      if ((iVar2 == 0) &&
         (iVar2 = (*(code *)(PTR_LAB_00560f68 + -0x230c))
                            (*(undefined4 *)(param_1 + 4),auStack_3c,0x30,0,0), iVar2 == 0)) {
        local_40 = (*(code *)(PTR_LAB_00560f68 + -0x2588))(*(undefined4 *)(param_1 + 4),0,0);
      }
      else {
        local_40 = 2;
      }
    }
    (*(code *)PTR_memset_00561588)(auStack_3c,0,0x30);
    if (local_40 == 0) {
      *(undefined1 *)(param_1 + 8) = 1;
      local_40 = 0;
    }
    else if (local_40 == 4) {
      *(undefined1 *)(param_1 + 8) = 3;
      local_40 = -0xd1;
    }
    else if (local_40 == 2) {
      *(undefined1 *)(param_1 + 8) = 2;
      local_40 = -199;
    }
    else {
      *(undefined1 *)(param_1 + 8) = 2;
    }
    return local_40;
  }
  return -0xad;
}



// ==== RNG_GenerateBlock @ 0046e0a0 size=600

undefined4 RNG_GenerateBlock(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int local_30;
  undefined1 auStack_2c [36];
  
  if (((param_1 == 0) || (param_2 == 0)) || (0x10000 < param_3)) {
    local_30 = 0xffffff53;
  }
  else if (*(char *)(param_1 + 8) == '\x01') {
    local_30 = (*(code *)(PTR_LAB_00560f68 + -0x2588))(*(undefined4 *)(param_1 + 4),param_2,param_3)
    ;
    if (local_30 == 3) {
      iVar1 = (*(code *)PTR_FUN_00560f7c)(param_1,auStack_2c,0x20);
      if ((iVar1 == 0) &&
         (iVar1 = (*(code *)(PTR_LAB_00560f68 + -0x2c30))
                            (*(undefined4 *)(param_1 + 4),auStack_2c,0x20), iVar1 == 0)) {
        local_30 = (*(code *)(PTR_LAB_00560f68 + -0x2588))(*(undefined4 *)(param_1 + 4),0,0);
        if (local_30 == 0) {
          local_30 = (*(code *)(PTR_LAB_00560f68 + -0x2588))
                               (*(undefined4 *)(param_1 + 4),param_2,param_3);
        }
      }
      else {
        local_30 = 2;
      }
      (*(code *)PTR_memset_00561588)(auStack_2c,0,0x20);
    }
    if (local_30 == 0) {
      local_30 = 0;
    }
    else if (local_30 == 4) {
      local_30 = 0xffffff2f;
      *(undefined1 *)(param_1 + 8) = 3;
    }
    else {
      local_30 = 0xffffff39;
      *(undefined1 *)(param_1 + 8) = 2;
    }
  }
  else {
    local_30 = 0xffffff39;
  }
  return local_30;
}



// ==== FreeRng @ 0046e360 size=220

undefined4 FreeRng(int param_1)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = 0xffffff53;
  if (param_1 != 0) {
    iVar1 = (*(code *)(PTR_LAB_00560f68 + -0x21c0))(*(undefined4 *)(param_1 + 4));
    if (iVar1 == 0) {
      local_10 = 0;
    }
    else {
      local_10 = 0xffffff39;
    }
    if (*(int *)(param_1 + 4) != 0) {
      (*(code *)PTR_CyaSSL_Free_00560f84)(*(int *)(param_1 + 4));
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return local_10;
}



// ==== InitSha256 @ 0046ea58 size=196

undefined4 InitSha256(undefined4 *param_1)

{
  param_1[3] = 0x6a09e667;
  param_1[4] = 0xbb67ae85;
  param_1[5] = 0x3c6ef372;
  param_1[6] = 0xa54ff53a;
  param_1[7] = 0x510e527f;
  param_1[8] = 0x9b05688c;
  param_1[9] = 0x1f83d9ab;
  param_1[10] = 0x5be0cd19;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return 0;
}



// ==== Sha256Update @ 0046fc74 size=432

int Sha256Update(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int local_res4;
  int local_res8;
  
  local_res4 = param_2;
  local_res8 = param_3;
  while( true ) {
    do {
      if (local_res8 == 0) {
        return 0;
      }
      iVar1 = (*(code *)(PTR_LAB_00560f68 + -0x15e8))(local_res8,0x40 - *param_1);
      (*(code *)PTR_memcpy_005615a4)((int)param_1 + *param_1 + 0x2c,local_res4,iVar1);
      *param_1 = *param_1 + iVar1;
      local_res4 = local_res4 + iVar1;
      local_res8 = local_res8 - iVar1;
    } while (*param_1 != 0x40);
    (*(code *)(PTR_LAB_00560f68 + -0x16b4))(param_1 + 0xb,param_1 + 0xb,0x40);
    iVar1 = (*(code *)(PTR_LAB_00560f68 + -0x14e4))(param_1);
    if (iVar1 != 0) break;
    (*(code *)(PTR_LAB_00560f68 + -0x404))(param_1,0x40);
    *param_1 = 0;
  }
  return iVar1;
}



// ==== Sha256Final @ 0046fe24 size=812

int Sha256Final(uint *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  (*(code *)(PTR_LAB_00560f68 + -0x404))(param_1,*param_1);
  uVar2 = *param_1;
  *param_1 = uVar2 + 1;
  *(undefined1 *)((int)param_1 + uVar2 + 0x2c) = 0x80;
  if (0x38 < *param_1) {
    (*(code *)PTR_memset_00561588)((int)param_1 + *param_1 + 0x2c,0,0x40 - *param_1);
    *param_1 = 0x40;
    (*(code *)(PTR_LAB_00560f68 + -0x16b4))(param_1 + 0xb,param_1 + 0xb,0x40);
    iVar1 = (*(code *)(PTR_LAB_00560f68 + -0x14e4))(param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
    *param_1 = 0;
  }
  (*(code *)PTR_memset_00561588)((int)param_1 + *param_1 + 0x2c,0,0x38 - *param_1);
  param_1[2] = (param_1[1] >> 0x1d) + param_1[2] * 8;
  param_1[1] = param_1[1] << 3;
  (*(code *)(PTR_LAB_00560f68 + -0x16b4))(param_1 + 0xb,param_1 + 0xb,0x40);
  (*(code *)PTR_memcpy_005615a4)(param_1 + 0x19,param_1 + 2,4);
  (*(code *)PTR_memcpy_005615a4)(param_1 + 0x1a,param_1 + 1,4);
  iVar1 = (*(code *)(PTR_LAB_00560f68 + -0x14e4))(param_1);
  if (iVar1 == 0) {
    (*(code *)(PTR_LAB_00560f68 + -0x16b4))(param_1 + 3,param_1 + 3,0x20);
    (*(code *)PTR_memcpy_005615a4)(param_2,param_1 + 3,0x20);
    iVar1 = (*(code *)PTR_InitSha256_00560f6c)(param_1);
  }
  return iVar1;
}



// ==== Sha256Hash @ 00470150 size=324

int Sha256Hash(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int local_78;
  undefined1 auStack_74 [108];
  
  local_78 = (*(code *)PTR_InitSha256_00560f6c)(auStack_74);
  if (local_78 == 0) {
    local_78 = (*(code *)PTR_Sha256Update_00560f70)(auStack_74,param_1,param_2);
    if (local_78 == 0) {
      local_78 = (*(code *)PTR_Sha256Final_00560f74)(auStack_74,param_3);
      if (local_78 != 0) {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x4838);
      }
    }
    else {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x484c);
    }
  }
  else {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x4860);
  }
  return local_78;
}



// ==== AddCA @ 00473468 size=1400

int AddCA(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_410;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3e0;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  char local_10d;
  char local_10c;
  ushort local_10a;
  
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x447c);
  (*(code *)PTR_InitDecodedCert_00561024)
            (&local_3fc,param_3,param_2,*(undefined4 *)(param_1 + 0x48));
  local_410 = (*(code *)PTR_ParseCert_00561028)(&local_3fc,4,param_5,param_1);
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x4470);
  if (((local_410 == 0) && (local_10d == '\0')) && (param_4 != 1)) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x445c);
    local_410 = -0x165;
  }
  else if (((local_410 == 0) && (local_10d == '\x01')) && ((param_4 != 1 && ((local_10a & 8) == 0)))
          ) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x4434);
    local_410 = -0x165;
  }
  else if ((local_410 == 0) && (iVar1 = (*(code *)PTR_FUN_0056102c)(param_1,&local_138), iVar1 != 0)
          ) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x4404);
  }
  else if (local_410 == 0) {
    puVar2 = (undefined4 *)(*(code *)PTR_MakeSigner_00561030)(*(undefined4 *)(param_1 + 0x48));
    if (puVar2 == (undefined4 *)0x0) {
      local_410 = -0x12f;
    }
    else {
      puVar2[1] = local_3e0;
      puVar2[3] = local_3fc;
      *puVar2 = local_3f8;
      puVar2[4] = local_398;
      puVar2[5] = local_39c;
      puVar2[6] = local_3d0;
      puVar2[7] = local_3cc;
      puVar2[0xd] = local_138;
      puVar2[0xe] = local_134;
      puVar2[0xf] = local_130;
      puVar2[0x10] = local_12c;
      puVar2[0x11] = local_128;
      puVar2[8] = local_3c8;
      puVar2[9] = local_3c4;
      puVar2[10] = local_3c0;
      puVar2[0xb] = local_3bc;
      puVar2[0xc] = local_3b8;
      if (local_10c == '\0') {
        local_10a = 0xffff;
      }
      *(ushort *)(puVar2 + 2) = local_10a;
      puVar2[0x12] = 0;
      local_3fc = 0;
      local_39c = 0;
      local_3d0 = 0;
      local_3cc = 0;
      iVar1 = (*(code *)(PTR_LAB_00560f68 + 0x2fc8))(puVar2 + 0xd);
      iVar3 = (*(code *)PTR_LockMutex_00560ff4)(param_1 + 0x2c);
      if (iVar3 == 0) {
        puVar2[0x12] = *(undefined4 *)(param_1 + iVar1 * 4);
        *(undefined4 **)(param_1 + iVar1 * 4) = puVar2;
        (*(code *)PTR_UnLockMutex_00560ff8)(param_1 + 0x2c);
        if (*(int *)(param_1 + 0x44) != 0) {
          (**(code **)(param_1 + 0x44))(param_3,param_2,param_4);
        }
      }
      else {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x43d8);
        local_410 = -0x6a;
        (*(code *)PTR_FreeSigner_00561034)(puVar2,*(undefined4 *)(param_1 + 0x48));
      }
    }
  }
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x43bc);
  (*(code *)PTR_FreeDecodedCert_00561038)(&local_3fc);
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x43a4);
  if (param_3 != 0) {
    (*(code *)PTR_CyaSSL_Free_00560f84)(param_3);
  }
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x4390);
  (*(code *)PTR_FUN_00560fa0)(PTR_DAT_00560f88 + -0x4374,local_410);
  if (local_410 == 0) {
    local_410 = 1;
  }
  return local_410;
}



// ==== CyaSSLv3_client_method @ 00477508 size=188

int CyaSSLv3_client_method(void)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(4);
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3ac8);
  if (iVar1 != 0) {
    (*(code *)PTR_MakeSSLv3_00561010)(&local_c);
    (*(code *)PTR_InitSSL_Method_005610a4)(iVar1,local_c);
  }
  return iVar1;
}



// ==== SSLv3_server_method @ 00477dc0 size=196

int SSLv3_server_method(void)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(4);
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3860);
  if (iVar1 != 0) {
    (*(code *)PTR_MakeSSLv3_00561010)(&local_c);
    (*(code *)PTR_InitSSL_Method_005610a4)(iVar1,local_c);
    *(undefined1 *)(iVar1 + 2) = 0;
  }
  return iVar1;
}



// ==== GetSessionClient @ 00478a78 size=1068

undefined * GetSessionClient(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *local_28;
  int local_24;
  int local_20;
  int local_14;
  uint local_10;
  
  local_28 = (undefined *)0x0;
  local_14 = 0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x35e4);
  if (*(char *)(param_1 + 0x4cc) == '\0') {
    local_28 = (undefined *)0x0;
  }
  else {
    uVar1 = (*(code *)(PTR_LAB_00560f68 + 0x900))(0x14,param_3);
    uVar2 = (*(code *)(PTR_LAB_005610e0 + -0x770c))(param_2,uVar1,&local_14);
    uVar2 = uVar2 % 0xb;
    if (local_14 == 0) {
      iVar3 = (*(code *)PTR_LockMutex_00560ff4)(PTR_DAT_00560988 + -0x5098);
      if (iVar3 == 0) {
        local_20 = (*(code *)(PTR_LAB_00560f68 + 0x900))
                             (*(undefined4 *)(PTR_DAT_00560988 + uVar2 * 0x14 + -0x507c),3);
        local_24 = *(int *)(PTR_DAT_00560988 + uVar2 * 0x14 + -0x5080) + -1;
        if (local_24 < 0) {
          local_24 = 2;
        }
        while (0 < local_20) {
          if ((2 < local_24) || (local_24 < 0)) {
            (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x35a0);
            break;
          }
          local_10 = *(uint *)(PTR_DAT_00560988 + (uVar2 * 5 + local_24 + 2) * 4 + -0x5080);
          puVar5 = PTR_DAT_00560988 +
                   (local_10 >> 0x10) * 0x74 + (local_10 & 0xffff) * 0x164 + -0x5fdc;
          iVar3 = (*(code *)PTR_memcmp_00561524)(puVar5 + 0x5c,param_2,uVar1);
          if (iVar3 == 0) {
            (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x3598);
            uVar4 = (*(code *)PTR_LowResTimer_005610e4)();
            if (uVar4 < (uint)(*(int *)(puVar5 + 0x54) + *(int *)(puVar5 + 0x58))) {
              (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x3574);
              local_28 = puVar5;
              break;
            }
            (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x3564);
          }
          else {
            (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x3550);
          }
          local_20 = local_20 + -1;
          if (local_24 == 0) {
            local_24 = 2;
          }
          else {
            local_24 = local_24 + -1;
          }
        }
        (*(code *)PTR_UnLockMutex_00560ff8)(PTR_DAT_00560988 + -0x5098);
      }
      else {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x35bc);
        local_28 = (undefined *)0x0;
      }
    }
    else {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x35d0);
      local_28 = (undefined *)0x0;
    }
  }
  return local_28;
}



// ==== RSA_generate_key @ 0047ad30 size=108

undefined4 RSA_generate_key(void)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x32a8);
  return 0;
}



// ==== X509_get_issuer_name @ 0047f840 size=100

int X509_get_issuer_name(int param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2be8);
  return param_1 + 4;
}



// ==== X509_get_subject_name @ 0047f8a4 size=100

int X509_get_subject_name(int param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2bd0);
  return param_1 + 0x16c;
}



// ==== RAND_bytes @ 00483594 size=348

undefined4 RAND_bytes(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 local_20;
  undefined *local_18;
  undefined1 auStack_14 [12];
  
  local_20 = 0;
  bVar1 = false;
  local_18 = (undefined *)0x0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x20a4);
  iVar2 = (*(code *)PTR_InitRng_005611e8)(auStack_14);
  if (iVar2 == 0) {
    local_18 = auStack_14;
    bVar1 = true;
  }
  else if (*(int *)(PTR_DAT_00560988 + -0x4f98) != 0) {
    local_18 = PTR_DAT_00560988 + -0x4fa4;
  }
  if (local_18 != (undefined *)0x0) {
    iVar2 = (*(code *)PTR_RNG_GenerateBlock_00560f80)(local_18,param_1,param_2);
    if (iVar2 == 0) {
      local_20 = 1;
    }
    else {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x2098);
    }
  }
  if (bVar1) {
    (*(code *)PTR_FreeRng_005611ec)(auStack_14);
  }
  return local_20;
}



// ==== InitCyaSSL_BigNum @ 00483800 size=116

void InitCyaSSL_BigNum(undefined4 *param_1)

{
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + -0x2044);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



// ==== CyaSSLv23_client_method @ 00488b68 size=172

int CyaSSLv23_client_method(void)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(4);
  if (iVar1 != 0) {
    (*(code *)PTR_MakeTLSv1_2_0056101c)(&local_c);
    (*(code *)PTR_InitSSL_Method_005610a4)(iVar1,local_c);
    *(undefined1 *)(iVar1 + 3) = 1;
  }
  return iVar1;
}



// ==== HmacSetKey @ 00489090 size=1340

int HmacSetKey(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)(PTR_LAB_0056125c + -0x7140))(param_1,param_2);
  if (iVar1 == 0) {
    if (*(byte *)(param_1 + 0x210) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x00489138 */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_00560f88 +
                                          (uint)*(byte *)(param_1 + 0x210) * 4 + -0x15a8)))();
      return iVar1;
    }
    iVar1 = -0xad;
  }
  return iVar1;
}



// ==== HmacUpdate @ 004897b0 size=508

int HmacUpdate(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x211) != '\0') ||
     (iVar1 = (*(code *)(PTR_LAB_0056125c + -0x6a34))(param_1), iVar1 == 0)) {
    if (*(byte *)(param_1 + 0x210) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x00489844 */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_00560f88 +
                                          (uint)*(byte *)(param_1 + 0x210) * 4 + -0x1578)))();
      return iVar1;
    }
    iVar1 = 0;
  }
  return iVar1;
}



// ==== HmacFinal @ 004899ac size=1384

int HmacFinal(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x211) != '\0') ||
     (iVar1 = (*(code *)(PTR_LAB_0056125c + -0x6a34))(param_1), iVar1 == 0)) {
    if (*(byte *)(param_1 + 0x210) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x00489a3c */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_00560f88 +
                                          (uint)*(byte *)(param_1 + 0x210) * 4 + -0x1560)))();
      return iVar1;
    }
    *(undefined1 *)(param_1 + 0x211) = 0;
    iVar1 = 0;
  }
  return iVar1;
}



// ==== InitRsaKey @ 00489f40 size=168

undefined4 InitRsaKey(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x6c);
  return 0;
}



// ==== FreeRsaKey @ 00489fe8 size=340

undefined4 FreeRsaKey(int param_1)

{
  if (*(int *)(param_1 + 0x80) == 1) {
    (*(code *)PTR_mp_clear_005611f8)(param_1 + 0x70);
    (*(code *)PTR_mp_clear_005611f8)(param_1 + 0x60);
    (*(code *)PTR_mp_clear_005611f8)(param_1 + 0x50);
    (*(code *)PTR_mp_clear_005611f8)(param_1 + 0x40);
    (*(code *)PTR_mp_clear_005611f8)(param_1 + 0x30);
    (*(code *)PTR_mp_clear_005611f8)(param_1 + 0x20);
  }
  (*(code *)PTR_mp_clear_005611f8)(param_1 + 0x10);
  (*(code *)PTR_mp_clear_005611f8)(param_1);
  return 0;
}



// ==== RsaPublicEncrypt @ 0048aab0 size=360

int RsaPublicEncrypt(undefined4 param_1,uint param_2,undefined4 param_3,int param_4,
                    undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_resc;
  
  local_resc = param_4;
  iVar1 = (*(code *)PTR_mp_unsigned_bin_size_0056120c)(param_5);
  if (local_resc < iVar1) {
    iVar2 = -0x83;
  }
  else if (iVar1 - 0xbU < param_2) {
    iVar2 = -0x83;
  }
  else {
    iVar2 = (*(code *)(PTR_LAB_0056125c + -0x5ec4))(param_1,param_2,param_3,iVar1,2,param_6);
    if ((iVar2 == 0) &&
       (iVar3 = (*(code *)(PTR_LAB_0056125c + -0x5a84))(param_3,iVar1,param_3,&local_resc,0,param_5)
       , iVar2 = iVar1, iVar3 < 0)) {
      iVar2 = iVar3;
    }
  }
  return iVar2;
}



// ==== RsaPrivateDecryptInline @ 0048ac18 size=216

int RsaPrivateDecryptInline
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_res4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_resc = param_4;
  iVar1 = (*(code *)(PTR_LAB_0056125c + -0x5a84))(param_1,param_2,param_1,&local_res4,3,param_4);
  if (-1 < iVar1) {
    iVar1 = (*(code *)(PTR_LAB_0056125c + -0x5cd4))(param_1,local_res4,local_res8,2);
  }
  return iVar1;
}



// ==== RsaSSL_VerifyInline @ 0048aea0 size=216

int RsaSSL_VerifyInline(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_res4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_resc = param_4;
  iVar1 = (*(code *)(PTR_LAB_0056125c + -0x5a84))(param_1,param_2,param_1,&local_res4,1,param_4);
  if (-1 < iVar1) {
    iVar1 = (*(code *)(PTR_LAB_0056125c + -0x5cd4))(param_1,local_res4,local_res8,1);
  }
  return iVar1;
}



// ==== RsaSSL_Sign @ 0048b128 size=364

int RsaSSL_Sign(undefined4 param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,
               undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_resc;
  
  local_resc = param_4;
  iVar1 = (*(code *)PTR_mp_unsigned_bin_size_0056120c)(param_5);
  if (local_resc < iVar1) {
    iVar2 = -0x83;
  }
  else if (iVar1 - 0xbU < param_2) {
    iVar2 = -0x83;
  }
  else {
    iVar2 = (*(code *)(PTR_LAB_0056125c + -0x5ec4))(param_1,param_2,param_3,iVar1,1,param_6);
    if ((iVar2 == 0) &&
       (iVar3 = (*(code *)(PTR_LAB_0056125c + -0x5a84))(param_3,iVar1,param_3,&local_resc,2,param_5)
       , iVar2 = iVar1, iVar3 < 0)) {
      iVar2 = iVar3;
    }
  }
  return iVar2;
}



// ==== RsaEncryptSize @ 0048b294 size=96

undefined4 RsaEncryptSize(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_mp_unsigned_bin_size_0056120c)(param_1);
  return uVar1;
}



// ==== MakeRsaKey @ 0048b7cc size=1972

int MakeRsaKey(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int local_60;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [20];
  
  if ((param_1 == 0) || (param_4 == 0)) {
    local_60 = -0xad;
  }
  else if ((param_2 < 0x200) || (0x1000 < param_2)) {
    local_60 = -0xad;
  }
  else if (((int)param_3 < 3) || ((param_3 & 1) == 0)) {
    local_60 = -0xad;
  }
  else {
    local_60 = (*(code *)PTR_mp_init_multi_00561288)
                         (auStack_5c,auStack_4c,auStack_3c,auStack_2c,auStack_1c,0);
    if (local_60 == 0) {
      local_60 = (*(code *)PTR_mp_set_int_00561208)(auStack_1c,param_3);
      if (local_60 == 0) {
        do {
          iVar1 = param_2;
          if (param_2 < 0) {
            iVar1 = param_2 + 0xf;
          }
          local_60 = (*(code *)(PTR_LAB_0056125c + -0x4b54))
                               (auStack_5c,iVar1 >> 4,param_4,*(undefined4 *)(param_1 + 0x84));
          if (local_60 == 0) {
            local_60 = (*(code *)PTR_mp_sub_d_0056123c)(auStack_5c,1,auStack_3c);
          }
          if (local_60 == 0) {
            local_60 = (*(code *)PTR_mp_gcd_0056128c)(auStack_3c,auStack_1c,auStack_2c);
          }
        } while ((local_60 == 0) &&
                (iVar1 = (*(code *)PTR_mp_cmp_d_00561214)(auStack_2c,1), iVar1 != 0));
      }
      if (local_60 == 0) {
        do {
          iVar1 = param_2;
          if (param_2 < 0) {
            iVar1 = param_2 + 0xf;
          }
          local_60 = (*(code *)(PTR_LAB_0056125c + -0x4b54))
                               (auStack_4c,iVar1 >> 4,param_4,*(undefined4 *)(param_1 + 0x84));
          if (local_60 == 0) {
            local_60 = (*(code *)PTR_mp_sub_d_0056123c)(auStack_4c,1,auStack_3c);
          }
          if (local_60 == 0) {
            local_60 = (*(code *)PTR_mp_gcd_0056128c)(auStack_3c,auStack_1c,auStack_2c);
          }
        } while ((local_60 == 0) &&
                (iVar1 = (*(code *)PTR_mp_cmp_d_00561214)(auStack_2c,1), iVar1 != 0));
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_init_multi_00561288)
                             (param_1,param_1 + 0x10,param_1 + 0x20,param_1 + 0x30,param_1 + 0x40,0)
        ;
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_init_multi_00561288)
                             (param_1 + 0x50,param_1 + 0x60,param_1 + 0x70,0,0,0);
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_sub_d_0056123c)(auStack_5c,1,auStack_2c);
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_lcm_00561290)(auStack_3c,auStack_2c,auStack_3c);
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_set_int_00561208)(param_1 + 0x10,param_3);
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_invmod_00561294)(param_1 + 0x10,auStack_3c,param_1 + 0x20);
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_mul_00561274)(auStack_5c,auStack_4c,param_1);
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_sub_d_0056123c)(auStack_5c,1,auStack_3c);
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_sub_d_0056123c)(auStack_4c,1,auStack_2c);
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_mod_00561200)(param_1 + 0x20,auStack_3c,param_1 + 0x50);
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_mod_00561200)(param_1 + 0x20,auStack_2c,param_1 + 0x60);
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_invmod_00561294)(auStack_4c,auStack_5c,param_1 + 0x70);
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_copy_00561228)(auStack_5c,param_1 + 0x30);
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_copy_00561228)(auStack_4c,param_1 + 0x40);
      }
      if (local_60 == 0) {
        *(undefined4 *)(param_1 + 0x80) = 1;
      }
      (*(code *)PTR_mp_clear_005611f8)(auStack_1c);
      (*(code *)PTR_mp_clear_005611f8)(auStack_2c);
      (*(code *)PTR_mp_clear_005611f8)(auStack_3c);
      (*(code *)PTR_mp_clear_005611f8)(auStack_4c);
      (*(code *)PTR_mp_clear_005611f8)(auStack_5c);
      if (local_60 == 0) {
        local_60 = 0;
      }
      else {
        (*(code *)PTR_FreeRsaKey_00561070)(param_1);
      }
    }
  }
  return local_60;
}



// ==== AesSetKey @ 0048eb54 size=188

undefined4
AesSetKey(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if (((param_3 == 0x10) || (param_3 == 0x18)) || (param_3 == 0x20)) {
    uVar1 = (*(code *)(PTR_LAB_0056125c + -0x23a0))(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    uVar1 = 0xffffff53;
  }
  return uVar1;
}



// ==== AesSetIV @ 0048ec90 size=196

undefined4 AesSetIV(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffff53;
  }
  else {
    if (param_2 == 0) {
      (*(code *)PTR_memset_00561588)(param_1 + 0xf4,0,0x10);
    }
    else {
      (*(code *)PTR_memcpy_005615a4)(param_1 + 0xf4,param_2,0x10);
    }
    uVar1 = 0;
  }
  return uVar1;
}



// ==== AesCbcDecryptWithKey @ 0048ed54 size=192

int AesCbcDecryptWithKey
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6)

{
  int local_128;
  undefined1 auStack_124 [284];
  
  local_128 = (*(code *)PTR_AesSetKey_00561144)(auStack_124,param_4,param_5,param_6,1);
  if (local_128 == 0) {
    local_128 = (*(code *)PTR_AesCbcDecrypt_00561164)(auStack_124,param_1,param_2,param_3);
  }
  return local_128;
}



// ==== AesCbcEncrypt @ 0048eeec size=280

undefined4 AesCbcEncrypt(int param_1,int param_2,int param_3,uint param_4)

{
  int local_res4;
  int local_res8;
  uint local_10;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_10 = param_4 >> 4;
  while (local_10 != 0) {
    (*(code *)(PTR_LAB_0056125c + -0x3e3c))(param_1 + 0xf4,local_res8,0x10);
    (*(code *)(PTR_LAB_0056125c + -0x3d30))(param_1,param_1 + 0xf4,param_1 + 0xf4);
    (*(code *)PTR_memcpy_005615a4)(local_res4,param_1 + 0xf4,0x10);
    local_res4 = local_res4 + 0x10;
    local_res8 = local_res8 + 0x10;
    local_10 = local_10 - 1;
  }
  return 0;
}



// ==== AesCbcDecrypt @ 0048f004 size=320

undefined4 AesCbcDecrypt(int param_1,int param_2,int param_3,uint param_4)

{
  int local_res4;
  int local_res8;
  uint local_10;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_10 = param_4 >> 4;
  while (local_10 != 0) {
    (*(code *)PTR_memcpy_005615a4)(param_1 + 0x104,local_res8,0x10);
    (*(code *)(PTR_LAB_0056125c + -0x3068))(param_1,param_1 + 0x104,local_res4);
    (*(code *)(PTR_LAB_0056125c + -0x3e3c))(local_res4,param_1 + 0xf4,0x10);
    (*(code *)PTR_memcpy_005615a4)(param_1 + 0xf4,param_1 + 0x104,0x10);
    local_res4 = local_res4 + 0x10;
    local_res8 = local_res8 + 0x10;
    local_10 = local_10 - 1;
  }
  return 0;
}



// ==== AesCtrEncrypt @ 0048f1c0 size=636

void AesCtrEncrypt(int param_1,byte *param_2,byte *param_3,uint param_4)

{
  byte *local_res4;
  byte *local_res8;
  uint local_resc;
  byte *local_10;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_10 = (byte *)((param_1 + 0x114) - *(int *)(param_1 + 0x114));
  for (local_resc = param_4; (*(int *)(param_1 + 0x114) != 0 && (local_resc != 0));
      local_resc = local_resc - 1) {
    *local_res4 = *local_res8 ^ *local_10;
    *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + -1;
    local_res4 = local_res4 + 1;
    local_res8 = local_res8 + 1;
    local_10 = local_10 + 1;
  }
  while (0xf < local_resc) {
    (*(code *)(PTR_LAB_0056125c + -0x3d30))(param_1,param_1 + 0xf4,local_res4);
    (*(code *)(PTR_LAB_0056125c + -0xebc))(param_1 + 0xf4);
    (*(code *)(PTR_LAB_0056125c + -0x3e3c))(local_res4,local_res8,0x10);
    local_res4 = local_res4 + 0x10;
    local_res8 = local_res8 + 0x10;
    local_resc = local_resc - 0x10;
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  if (local_resc != 0) {
    (*(code *)(PTR_LAB_0056125c + -0x3d30))(param_1,param_1 + 0xf4,param_1 + 0x104);
    (*(code *)(PTR_LAB_0056125c + -0xebc))(param_1 + 0xf4);
    *(undefined4 *)(param_1 + 0x114) = 0x10;
    local_10 = (byte *)(param_1 + 0x104);
    while (local_resc != 0) {
      *local_res4 = *local_res8 ^ *local_10;
      *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + -1;
      local_res4 = local_res4 + 1;
      local_res8 = local_res8 + 1;
      local_resc = local_resc - 1;
      local_10 = local_10 + 1;
    }
  }
  return;
}



// ==== InitSha @ 0049160c size=148

undefined4 InitSha(undefined4 *param_1)

{
  param_1[0x13] = 0x67452301;
  param_1[0x14] = 0xefcdab89;
  param_1[0x15] = 0x98badcfe;
  param_1[0x16] = 0x10325476;
  param_1[0x17] = 0xc3d2e1f0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return 0;
}



// ==== ShaUpdate @ 004953b0 size=404

undefined4 ShaUpdate(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int local_res4;
  int local_res8;
  
  local_res4 = param_2;
  local_res8 = param_3;
  while (local_res8 != 0) {
    iVar1 = (*(code *)(PTR_LAB_0056125c + 0x15cc))(local_res8,0x40 - *param_1);
    (*(code *)PTR_memcpy_005615a4)((int)param_1 + *param_1 + 0xc,local_res4,iVar1);
    *param_1 = *param_1 + iVar1;
    local_res4 = local_res4 + iVar1;
    local_res8 = local_res8 - iVar1;
    if (*param_1 == 0x40) {
      (*(code *)(PTR_LAB_0056125c + 0x1500))(param_1 + 3,param_1 + 3,0x40);
      (*(code *)(PTR_LAB_0056125c + 0x16a0))(param_1);
      (*(code *)(PTR_LAB_0056125c + 0x5338))(param_1,0x40);
      *param_1 = 0;
    }
  }
  return 0;
}



// ==== ShaFinal @ 00495544 size=756

undefined4 ShaFinal(uint *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  (*(code *)(PTR_LAB_0056125c + 0x5338))(param_1,*param_1);
  uVar2 = *param_1;
  *param_1 = uVar2 + 1;
  *(undefined1 *)((int)param_1 + uVar2 + 0xc) = 0x80;
  if (0x38 < *param_1) {
    (*(code *)PTR_memset_00561588)((int)param_1 + *param_1 + 0xc,0,0x40 - *param_1);
    *param_1 = 0x40;
    (*(code *)(PTR_LAB_0056125c + 0x1500))(param_1 + 3,param_1 + 3,0x40);
    (*(code *)(PTR_LAB_0056125c + 0x16a0))(param_1);
    *param_1 = 0;
  }
  (*(code *)PTR_memset_00561588)((int)param_1 + *param_1 + 0xc,0,0x38 - *param_1);
  param_1[2] = (param_1[1] >> 0x1d) + param_1[2] * 8;
  param_1[1] = param_1[1] << 3;
  (*(code *)(PTR_LAB_0056125c + 0x1500))(param_1 + 3,param_1 + 3,0x40);
  (*(code *)PTR_memcpy_005615a4)(param_1 + 0x11,param_1 + 2,4);
  (*(code *)PTR_memcpy_005615a4)(param_1 + 0x12,param_1 + 1,4);
  (*(code *)(PTR_LAB_0056125c + 0x16a0))(param_1);
  (*(code *)(PTR_LAB_0056125c + 0x1500))(param_1 + 0x13,param_1 + 0x13,0x14);
  (*(code *)PTR_memcpy_005615a4)(param_2,param_1 + 0x13,0x14);
  uVar1 = (*(code *)PTR_InitSha_00561114)(param_1);
  return uVar1;
}



// ==== ShaHash @ 00495838 size=228

int ShaHash(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_6c [100];
  
  iVar1 = (*(code *)PTR_InitSha_00561114)(auStack_6c);
  if (iVar1 == 0) {
    (*(code *)PTR_ShaUpdate_00561118)(auStack_6c,param_1,param_2);
    (*(code *)PTR_ShaFinal_0056111c)(auStack_6c,param_3);
  }
  else {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x1c20);
  }
  return iVar1;
}



// ==== InitSha512 @ 00495cfc size=420

undefined4 InitSha512(undefined4 *param_1)

{
  param_1[4] = 0xf3bcc908;
  param_1[5] = 0x6a09e667;
  param_1[6] = 0x84caa73b;
  param_1[7] = 0xbb67ae85;
  param_1[8] = 0xfe94f82b;
  param_1[9] = 0x3c6ef372;
  param_1[10] = 0x5f1d36f1;
  param_1[0xb] = 0xa54ff53a;
  param_1[0xc] = 0xade682d1;
  param_1[0xd] = 0x510e527f;
  param_1[0xe] = 0x2b3e6c1f;
  param_1[0xf] = 0x9b05688c;
  param_1[0x10] = 0xfb41bd6b;
  param_1[0x11] = 0x1f83d9ab;
  param_1[0x12] = 0x137e2179;
  param_1[0x13] = 0x5be0cd19;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return 0;
}



// ==== Sha512Update @ 0049cc20 size=432

int Sha512Update(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int local_res4;
  int local_res8;
  
  local_res4 = param_2;
  local_res8 = param_3;
  while( true ) {
    do {
      if (local_res8 == 0) {
        return 0;
      }
      iVar1 = (*(code *)(PTR_LAB_0056125c + 0x5cbc))(local_res8,0x80 - *param_1);
      (*(code *)PTR_memcpy_005615a4)((int)param_1 + *param_1 + 0x50,local_res4,iVar1);
      *param_1 = *param_1 + iVar1;
      local_res4 = local_res4 + iVar1;
      local_res8 = local_res8 - iVar1;
    } while (*param_1 != 0x80);
    (*(code *)(PTR_LAB_0056125c + 0x5bd0))(param_1 + 0x14,param_1 + 0x14,0x80);
    iVar1 = (*(code *)(PTR_LAB_0056125c + 0x5ea0))(param_1);
    if (iVar1 != 0) break;
    (*(code *)(PTR_LAB_00561298 + -0x3458))(param_1,0x80);
    *param_1 = 0;
  }
  return iVar1;
}



// ==== Sha512Final @ 0049cdd0 size=804

int Sha512Final(uint *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  (*(code *)(PTR_LAB_00561298 + -0x3458))(param_1,*param_1);
  uVar2 = *param_1;
  *param_1 = uVar2 + 1;
  *(undefined1 *)((int)param_1 + uVar2 + 0x50) = 0x80;
  if (0x70 < *param_1) {
    (*(code *)PTR_memset_00561588)((int)param_1 + *param_1 + 0x50,0,0x80 - *param_1);
    *param_1 = 0x80;
    (*(code *)(PTR_LAB_0056125c + 0x5bd0))(param_1 + 0x14,param_1 + 0x14,0x80);
    iVar1 = (*(code *)(PTR_LAB_0056125c + 0x5ea0))(param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
    *param_1 = 0;
  }
  (*(code *)PTR_memset_00561588)((int)param_1 + *param_1 + 0x50,0,0x70 - *param_1);
  param_1[2] = (param_1[1] >> 0x1d) + param_1[2] * 8;
  param_1[1] = param_1[1] << 3;
  (*(code *)(PTR_LAB_0056125c + 0x5bd0))(param_1 + 0x14,param_1 + 0x14,0x70);
  param_1[0x30] = param_1[2];
  param_1[0x31] = 0;
  param_1[0x32] = param_1[1];
  param_1[0x33] = 0;
  iVar1 = (*(code *)(PTR_LAB_0056125c + 0x5ea0))(param_1);
  if (iVar1 == 0) {
    (*(code *)(PTR_LAB_0056125c + 0x5bd0))(param_1 + 4,param_1 + 4,0x40);
    (*(code *)PTR_memcpy_005615a4)(param_2,param_1 + 4,0x40);
    iVar1 = (*(code *)PTR_InitSha512_00561138)(param_1);
  }
  return iVar1;
}



// ==== Sha512Hash @ 0049d0f4 size=324

int Sha512Hash(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int local_e0;
  undefined1 auStack_d8 [208];
  
  local_e0 = (*(code *)PTR_InitSha512_00561138)(auStack_d8);
  if (local_e0 == 0) {
    local_e0 = (*(code *)PTR_Sha512Update_0056113c)(auStack_d8,param_1,param_2);
    if (local_e0 == 0) {
      local_e0 = (*(code *)PTR_Sha512Final_00561140)(auStack_d8,param_3);
      if (local_e0 != 0) {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x1ed8);
      }
    }
    else {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x1ec4);
    }
  }
  else {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x1eb0);
  }
  return local_e0;
}



// ==== InitSha384 @ 0049d238 size=420

undefined4 InitSha384(undefined4 *param_1)

{
  param_1[4] = 0xc1059ed8;
  param_1[5] = 0xcbbb9d5d;
  param_1[6] = 0x367cd507;
  param_1[7] = 0x629a292a;
  param_1[8] = 0x3070dd17;
  param_1[9] = 0x9159015a;
  param_1[10] = 0xf70e5939;
  param_1[0xb] = 0x152fecd8;
  param_1[0xc] = 0xffc00b31;
  param_1[0xd] = 0x67332667;
  param_1[0xe] = 0x68581511;
  param_1[0xf] = 0x8eb44a87;
  param_1[0x10] = 0x64f98fa7;
  param_1[0x11] = 0xdb0c2e0d;
  param_1[0x12] = 0xbefa4fa4;
  param_1[0x13] = 0x47b5481d;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return 0;
}



// ==== Sha384Update @ 004a415c size=432

int Sha384Update(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int local_res4;
  int local_res8;
  
  local_res4 = param_2;
  local_res8 = param_3;
  while( true ) {
    do {
      if (local_res8 == 0) {
        return 0;
      }
      iVar1 = (*(code *)(PTR_LAB_0056125c + 0x5cbc))(local_res8,0x80 - *param_1);
      (*(code *)PTR_memcpy_005615a4)((int)param_1 + *param_1 + 0x50,local_res4,iVar1);
      *param_1 = *param_1 + iVar1;
      local_res4 = local_res4 + iVar1;
      local_res8 = local_res8 - iVar1;
    } while (*param_1 != 0x80);
    (*(code *)(PTR_LAB_0056125c + 0x5bd0))(param_1 + 0x14,param_1 + 0x14,0x80);
    iVar1 = (*(code *)(PTR_LAB_00561298 + -0x2c24))(param_1);
    if (iVar1 != 0) break;
    (*(code *)(PTR_LAB_00561298 + 0x40e4))(param_1,0x80);
    *param_1 = 0;
  }
  return iVar1;
}



// ==== Sha384Final @ 004a430c size=804

int Sha384Final(uint *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  (*(code *)(PTR_LAB_00561298 + 0x40e4))(param_1,*param_1);
  uVar2 = *param_1;
  *param_1 = uVar2 + 1;
  *(undefined1 *)((int)param_1 + uVar2 + 0x50) = 0x80;
  if (0x70 < *param_1) {
    (*(code *)PTR_memset_00561588)((int)param_1 + *param_1 + 0x50,0,0x80 - *param_1);
    *param_1 = 0x80;
    (*(code *)(PTR_LAB_0056125c + 0x5bd0))(param_1 + 0x14,param_1 + 0x14,0x80);
    iVar1 = (*(code *)(PTR_LAB_00561298 + -0x2c24))(param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
    *param_1 = 0;
  }
  (*(code *)PTR_memset_00561588)((int)param_1 + *param_1 + 0x50,0,0x70 - *param_1);
  param_1[2] = (param_1[1] >> 0x1d) + param_1[2] * 8;
  param_1[1] = param_1[1] << 3;
  (*(code *)(PTR_LAB_0056125c + 0x5bd0))(param_1 + 0x14,param_1 + 0x14,0x70);
  param_1[0x30] = param_1[2];
  param_1[0x31] = 0;
  param_1[0x32] = param_1[1];
  param_1[0x33] = 0;
  iVar1 = (*(code *)(PTR_LAB_00561298 + -0x2c24))(param_1);
  if (iVar1 == 0) {
    (*(code *)(PTR_LAB_0056125c + 0x5bd0))(param_1 + 4,param_1 + 4,0x30);
    (*(code *)PTR_memcpy_005615a4)(param_2,param_1 + 4,0x30);
    iVar1 = (*(code *)PTR_InitSha384_0056112c)(param_1);
  }
  return iVar1;
}



// ==== Sha384Hash @ 004a4630 size=324

int Sha384Hash(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int local_e0;
  undefined1 auStack_d8 [208];
  
  local_e0 = (*(code *)PTR_InitSha384_0056112c)(auStack_d8);
  if (local_e0 == 0) {
    local_e0 = (*(code *)PTR_Sha384Update_00561130)(auStack_d8,param_1,param_2);
    if (local_e0 == 0) {
      local_e0 = (*(code *)PTR_Sha384Final_00561134)(auStack_d8,param_3);
      if (local_e0 != 0) {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x1f14);
      }
    }
    else {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x1f00);
    }
  }
  else {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x1eec);
  }
  return local_e0;
}



// ==== InitMutex @ 004a4780 size=120

undefined4 InitMutex(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00561518)(param_1,0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffff96;
  }
  return uVar2;
}



// ==== FreeMutex @ 004a47f8 size=116

undefined4 FreeMutex(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_00561590)(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffff96;
  }
  return uVar2;
}



// ==== LockMutex @ 004a486c size=116

undefined4 LockMutex(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_005615f4)(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffff96;
  }
  return uVar2;
}



// ==== UnLockMutex @ 004a48e0 size=116

undefined4 UnLockMutex(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_0056159c)(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffff96;
  }
  return uVar2;
}



// ==== GetMyVersion @ 004a4e58 size=264

uint GetMyVersion(int param_1,int *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_2;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + 0x1f94);
  if (*(char *)(param_1 + iVar1) == '\x02') {
    if (*(char *)(param_1 + iVar1 + 1) == '\x01') {
      *param_3 = (uint)*(byte *)(param_1 + iVar1 + 2);
      *param_2 = iVar1 + 3;
      uVar2 = *param_3;
    }
    else {
      uVar2 = 0xffffff73;
    }
  }
  else {
    uVar2 = 0xffffff74;
  }
  return uVar2;
}



// ==== GetExplicitVersion @ 004a506c size=228

undefined4 GetExplicitVersion(int param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_2;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + 0x1fa4);
  if (*(char *)(param_1 + iVar2) == -0x60) {
    *param_2 = iVar2 + 2;
    uVar1 = (*(code *)PTR_GetMyVersion_005612a0)(param_1,param_2,param_3);
  }
  else {
    *param_3 = 0;
    uVar1 = 0;
  }
  return uVar1;
}



// ==== GetAlgoId @ 004a5448 size=516

undefined4 GetAlgoId(int param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_14;
  int local_10 [2];
  
  local_10[0] = *param_2;
  *param_3 = 0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + 0x1fb8);
  iVar1 = (*(code *)PTR_FUN_005612a4)(param_1,local_10,&local_14,param_4);
  if (iVar1 < 0) {
    uVar2 = 0xffffff74;
  }
  else if (*(char *)(param_1 + local_10[0]) == '\x06') {
    local_10[0] = local_10[0] + 1;
    iVar1 = (*(code *)PTR_FUN_0056129c)(param_1,local_10,&local_14,param_4);
    if (iVar1 < 0) {
      uVar2 = 0xffffff74;
    }
    else {
      while (local_14 != 0) {
        *param_3 = *param_3 + (uint)*(byte *)(param_1 + local_10[0]);
        local_10[0] = local_10[0] + 1;
        local_14 = local_14 + -1;
      }
      iVar1 = local_10[0] + 1;
      if ((*(char *)(param_1 + local_10[0]) == '\x05') &&
         (local_10[0] = local_10[0] + 2, *(char *)(param_1 + iVar1) != '\0')) {
        uVar2 = 0xffffff6e;
      }
      else {
        *param_2 = local_10[0];
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0xffffff70;
  }
  return uVar2;
}



// ==== RsaPrivateKeyDecode @ 004a564c size=672

undefined4 RsaPrivateKeyDecode(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  
  iVar1 = (*(code *)PTR_FUN_005612a4)(param_1,param_2,auStack_c,param_4);
  if (iVar1 < 0) {
    uVar2 = 0xffffff74;
  }
  else {
    iVar1 = (*(code *)PTR_GetMyVersion_005612a0)(param_1,param_2,auStack_10);
    if (iVar1 < 0) {
      uVar2 = 0xffffff74;
    }
    else {
      *(undefined4 *)(param_3 + 0x80) = 1;
      iVar1 = (*(code *)PTR_FUN_005612a8)(param_3,param_1,param_2,param_4);
      if (((((-1 < iVar1) &&
            (iVar1 = (*(code *)PTR_FUN_005612a8)(param_3 + 0x10,param_1,param_2,param_4), -1 < iVar1
            )) && (iVar1 = (*(code *)PTR_FUN_005612a8)(param_3 + 0x20,param_1,param_2,param_4),
                  -1 < iVar1)) &&
          ((iVar1 = (*(code *)PTR_FUN_005612a8)(param_3 + 0x30,param_1,param_2,param_4), -1 < iVar1
           && (iVar1 = (*(code *)PTR_FUN_005612a8)(param_3 + 0x40,param_1,param_2,param_4),
              -1 < iVar1)))) &&
         ((iVar1 = (*(code *)PTR_FUN_005612a8)(param_3 + 0x50,param_1,param_2,param_4), -1 < iVar1
          && ((iVar1 = (*(code *)PTR_FUN_005612a8)(param_3 + 0x60,param_1,param_2,param_4),
              -1 < iVar1 &&
              (iVar1 = (*(code *)PTR_FUN_005612a8)(param_3 + 0x70,param_1,param_2,param_4),
              -1 < iVar1)))))) {
        return 0;
      }
      uVar2 = 0xffffff71;
    }
  }
  return uVar2;
}



// ==== ToTraditional @ 004a58ec size=564

int ToTraditional(int param_1,undefined4 param_2)

{
  int iVar1;
  int local_18;
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  int local_c;
  
  local_18 = 0;
  iVar1 = (*(code *)PTR_FUN_005612a4)(param_1,&local_18,&local_c,param_2);
  if (iVar1 < 0) {
    local_c = -0x8c;
  }
  else {
    iVar1 = (*(code *)PTR_GetMyVersion_005612a0)(param_1,&local_18,auStack_10);
    if (iVar1 < 0) {
      local_c = -0x8c;
    }
    else {
      iVar1 = (*(code *)PTR_GetAlgoId_005612ac)(param_1,&local_18,auStack_14,param_2);
      if (iVar1 < 0) {
        local_c = -0x8c;
      }
      else {
        if (*(char *)(param_1 + local_18) == '\x06') {
          local_18 = local_18 + 1;
          iVar1 = (*(code *)PTR_FUN_0056129c)(param_1,&local_18,&local_c,param_2);
          if (iVar1 < 0) {
            return -0x8c;
          }
          local_18 = local_18 + local_c;
        }
        if (*(char *)(param_1 + local_18) == '\x04') {
          local_18 = local_18 + 1;
          iVar1 = (*(code *)PTR_FUN_0056129c)(param_1,&local_18,&local_c,param_2);
          if (iVar1 < 0) {
            local_c = -0x8c;
          }
          else {
            (*(code *)PTR_memmove_00561600)(param_1,param_1 + local_18,local_c);
          }
        }
        else {
          local_c = -0x8c;
        }
      }
    }
  }
  return local_c;
}



// ==== ToTraditionalEnc @ 004a62d4 size=1532

undefined4 ToTraditionalEnc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 auStack_8c [64];
  undefined1 auStack_4c [68];
  
  local_a8 = 0;
  local_90 = 0;
  iVar1 = (*(code *)PTR_FUN_005612a4)(param_1,&local_a8,&local_a0,param_2);
  if (iVar1 < 0) {
    uVar2 = 0xffffff74;
  }
  else {
    iVar1 = (*(code *)PTR_GetAlgoId_005612ac)(param_1,&local_a8,&local_a4,param_2);
    if (iVar1 < 0) {
      uVar2 = 0xffffff74;
    }
    else {
      iVar1 = (*(code *)(PTR_LAB_00561298 + 0x5b20))
                        (*(undefined1 *)(param_1 + local_a8 + -2),
                         *(undefined1 *)(param_1 + local_a8 + -1),&local_94,&local_9c);
      if (iVar1 < 0) {
        uVar2 = 0xffffff66;
      }
      else {
        if (local_9c == 6) {
          iVar1 = (*(code *)PTR_FUN_005612a4)(param_1,&local_a8,&local_a0,param_2);
          if (iVar1 < 0) {
            return 0xffffff74;
          }
          iVar1 = (*(code *)PTR_GetAlgoId_005612ac)(param_1,&local_a8,&local_a4,param_2);
          if (iVar1 < 0) {
            return 0xffffff74;
          }
          if (local_a4 != 0x294) {
            return 0xffffff74;
          }
        }
        iVar1 = (*(code *)PTR_FUN_005612a4)(param_1,&local_a8,&local_a0,param_2);
        if (iVar1 < 0) {
          uVar2 = 0xffffff74;
        }
        else if (*(char *)(param_1 + local_a8) == '\x04') {
          local_a8 = local_a8 + 1;
          iVar1 = (*(code *)PTR_FUN_0056129c)(param_1,&local_a8,&local_98,param_2);
          if (iVar1 < 0) {
            uVar2 = 0xffffff74;
          }
          else if (local_98 < 0x41) {
            (*(code *)PTR_memcpy_005615a4)(auStack_8c,param_1 + local_a8,local_98);
            local_a8 = local_a8 + local_98;
            iVar1 = (*(code *)(PTR_LAB_00561298 + 0x4f60))(param_1,&local_a8,&local_90);
            if (iVar1 < 0) {
              uVar2 = 0xffffff74;
            }
            else {
              if (local_9c == 6) {
                iVar1 = (*(code *)PTR_GetAlgoId_005612ac)(param_1,&local_a8,&local_a4,param_2);
                if (iVar1 < 0) {
                  return 0xffffff74;
                }
                iVar1 = (*(code *)(PTR_LAB_00561298 + 0x5c8c))(local_a4,&local_94);
                if (iVar1 < 0) {
                  return 0xffffff74;
                }
                if (*(char *)(param_1 + local_a8) != '\x04') {
                  return 0xffffff74;
                }
                local_a8 = local_a8 + 1;
                iVar1 = (*(code *)PTR_FUN_0056129c)(param_1,&local_a8,&local_a0,param_2);
                if (iVar1 < 0) {
                  return 0xffffff74;
                }
                (*(code *)PTR_memcpy_005615a4)(auStack_4c,param_1 + local_a8,local_a0);
                local_a8 = local_a8 + local_a0;
              }
              if (*(char *)(param_1 + local_a8) == '\x04') {
                local_a8 = local_a8 + 1;
                iVar1 = (*(code *)PTR_FUN_0056129c)(param_1,&local_a8,&local_a0,param_2);
                if (iVar1 < 0) {
                  uVar2 = 0xffffff74;
                }
                else {
                  iVar1 = (*(code *)(PTR_LAB_00561298 + 0x5d10))
                                    (param_3,param_4,auStack_8c,local_98,local_90,local_94,
                                     param_1 + local_a8,local_a0,local_9c,auStack_4c);
                  if (iVar1 < 0) {
                    uVar2 = 0xffffff66;
                  }
                  else {
                    (*(code *)PTR_memmove_00561600)(param_1,param_1 + local_a8,local_a0);
                    uVar2 = (*(code *)PTR_ToTraditional_00561044)(param_1,local_a0);
                  }
                }
              }
              else {
                uVar2 = 0xffffff74;
              }
            }
          }
          else {
            uVar2 = 0xffffff74;
          }
        }
        else {
          uVar2 = 0xffffff74;
        }
      }
    }
  }
  return uVar2;
}



// ==== RsaPublicKeyDecode @ 004a68d0 size=920

undefined4 RsaPublicKeyDecode(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  
  iVar1 = (*(code *)PTR_FUN_005612a4)(param_1,param_2,&local_c,param_4);
  if (iVar1 < 0) {
    return 0xffffff74;
  }
  *(undefined4 *)(param_3 + 0x80) = 0;
  if (*(char *)(param_1 + *param_2) != '\x02') {
    iVar1 = (*(code *)PTR_FUN_005612a4)(param_1,param_2,&local_c,param_4);
    if (iVar1 < 0) {
      return 0xffffff74;
    }
    iVar1 = *param_2;
    *param_2 = iVar1 + 1;
    if (*(char *)(param_1 + iVar1) != '\x06') {
      return 0xffffff70;
    }
    iVar1 = (*(code *)PTR_FUN_0056129c)(param_1,param_2,&local_c,param_4);
    if (iVar1 < 0) {
      return 0xffffff74;
    }
    *param_2 = *param_2 + local_c;
    iVar1 = *param_2;
    *param_2 = iVar1 + 1;
    if (*(char *)(param_1 + iVar1) == '\x05') {
      iVar1 = *param_2;
      *param_2 = iVar1 + 1;
      if (*(char *)(param_1 + iVar1) != '\0') {
        return 0xffffff6e;
      }
    }
    else {
      *param_2 = *param_2 + -1;
    }
    iVar1 = *param_2;
    *param_2 = iVar1 + 1;
    if (*(char *)(param_1 + iVar1) != '\x03') {
      return 0xffffff6d;
    }
    iVar1 = (*(code *)PTR_FUN_0056129c)(param_1,param_2,&local_c,param_4);
    if (iVar1 < 0) {
      return 0xffffff74;
    }
    iVar1 = *param_2;
    *param_2 = iVar1 + 1;
    if (*(char *)(param_1 + iVar1) != '\0') {
      *param_2 = *param_2 + -1;
    }
    iVar1 = (*(code *)PTR_FUN_005612a4)(param_1,param_2,&local_c,param_4);
    if (iVar1 < 0) {
      return 0xffffff74;
    }
  }
  iVar1 = (*(code *)PTR_FUN_005612a8)(param_3,param_1,param_2,param_4);
  if ((iVar1 < 0) ||
     (iVar1 = (*(code *)PTR_FUN_005612a8)(param_3 + 0x10,param_1,param_2,param_4), iVar1 < 0)) {
    uVar2 = 0xffffff71;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// ==== InitDecodedCert @ 004a6e54 size=736

void InitDecodedCert(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[8] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0xc;
  param_1[0x1b] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  param_1[0x9d] = param_2;
  param_1[0x9e] = 0;
  param_1[0x9f] = param_3;
  param_1[0xa0] = param_4;
  (*(code *)PTR_memset_00561588)(param_1 + 0xa1,0,0x20);
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  (*(code *)PTR_memset_00561588)(param_1 + 0xb1,0,0x14);
  *(undefined1 *)(param_1 + 0xb6) = 0;
  (*(code *)PTR_memset_00561588)((int)param_1 + 0x2d9,0,0x14);
  *(undefined1 *)((int)param_1 + 0x2ed) = 0;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  *(undefined2 *)((int)param_1 + 0x2f2) = 0;
  *(undefined1 *)(param_1 + 0xbd) = 0;
  *(undefined1 *)((int)param_1 + 0x2f5) = 0;
  *(undefined1 *)((int)param_1 + 0x2ef) = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  (*(code *)PTR_memset_00561588)(param_1 + 0xcf,0,0x5c);
  (*(code *)PTR_memset_00561588)(param_1 + 0xe6,0,0x5c);
  *(undefined1 *)((int)param_1 + 0x2f6) = 0;
  *(undefined1 *)((int)param_1 + 0x2f7) = 0;
  *(undefined1 *)(param_1 + 0xbe) = 0;
  param_1[0xbf] = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)((int)param_1 + 0x301) = 0;
  *(undefined1 *)((int)param_1 + 0x302) = 0;
  *(undefined1 *)(param_1 + 0xc1) = 0;
  *(undefined1 *)((int)param_1 + 0x305) = 0;
  *(undefined1 *)((int)param_1 + 0x306) = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  *(undefined1 *)((int)param_1 + 0x2ee) = 0;
  return;
}



// ==== FreeDecodedCert @ 004a72bc size=564

void FreeDecodedCert(int *param_1)

{
  if ((param_1[0x1b] == 1) && (param_1[0x18] != 0)) {
    (*(code *)PTR_CyaSSL_Free_00560f84)(param_1[0x18]);
  }
  if ((param_1[2] == 1) && (*param_1 != 0)) {
    (*(code *)PTR_CyaSSL_Free_00560f84)(*param_1);
  }
  if (param_1[9] != 0) {
    (*(code *)PTR_FUN_005612bc)(param_1[9],param_1[0xa0]);
  }
  if (param_1[10] != 0) {
    (*(code *)PTR_FUN_005612bc)(param_1[10],param_1[0xa0]);
  }
  if (param_1[0xb] != 0) {
    (*(code *)PTR_FUN_005612c0)(param_1[0xb],param_1[0xa0]);
  }
  if (param_1[0xc] != 0) {
    (*(code *)PTR_FUN_005612c0)(param_1[0xc],param_1[0xa0]);
  }
  if ((param_1[0xcf] != 0) && (param_1[0xcf] != 0)) {
    (*(code *)PTR_CyaSSL_Free_00560f84)(param_1[0xcf]);
  }
  if ((param_1[0xe6] != 0) && (param_1[0xe6] != 0)) {
    (*(code *)PTR_CyaSSL_Free_00560f84)(param_1[0xe6]);
  }
  return;
}



// ==== DecodeToKey @ 004a9ea0 size=592

int DecodeToKey(int param_1,undefined4 param_2)

{
  int iVar1;
  int local_10;
  
  local_10 = 0;
  iVar1 = (*(code *)(PTR_LAB_00561298 + 0x74f0))(param_1);
  if (-1 < iVar1) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x20fc);
    iVar1 = (*(code *)PTR_GetAlgoId_005612ac)
                      (*(undefined4 *)(param_1 + 0x274),param_1 + 0x278,param_1 + 0x18,
                       *(undefined4 *)(param_1 + 0x27c));
    if (-1 < iVar1) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x210c);
      iVar1 = (*(code *)(PTR_LAB_00561298 + 0x7ab0))(param_1,0);
      if (-1 < iVar1) {
        iVar1 = (*(code *)(PTR_LAB_005612c8 + -0x629c))(param_1,param_2);
        if (iVar1 < 0) {
          local_10 = iVar1;
        }
        iVar1 = (*(code *)(PTR_LAB_00561298 + 0x7ab0))(param_1,1);
        if (-1 < iVar1) {
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x2118);
          iVar1 = (*(code *)(PTR_LAB_00561298 + 0x78ac))(param_1);
          if ((-1 < iVar1) &&
             ((*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x212c), local_10 != 0)) {
            iVar1 = local_10;
          }
        }
      }
    }
  }
  return iVar1;
}



// ==== EncodeSignature @ 004aaca8 size=372

int EncodeSignature(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_74 [76];
  undefined1 auStack_28 [20];
  undefined1 auStack_14 [12];
  
  iVar1 = (*(code *)(PTR_LAB_005612c8 + -0x5d98))(param_2,param_3,auStack_74);
  iVar2 = (*(code *)PTR_FUN_005612d8)(param_4,auStack_28,0,0);
  iVar3 = (*(code *)PTR_FUN_005612d4)(iVar1 + iVar2,auStack_14);
  (*(code *)PTR_memcpy_005615a4)(param_1,auStack_14,iVar3);
  (*(code *)PTR_memcpy_005615a4)(param_1 + iVar3,auStack_28,iVar2);
  (*(code *)PTR_memcpy_005615a4)(param_1 + iVar3 + iVar2,auStack_74,iVar1);
  return iVar1 + iVar2 + iVar3;
}



// ==== DecodeAltNames @ 004abcc8 size=1484

undefined4 DecodeAltNames(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10 [2];
  
  local_20 = 0;
  local_1c = 0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + 0x22a4);
  iVar1 = (*(code *)PTR_FUN_005612a4)(param_1,&local_20,&local_1c,param_2);
  if (iVar1 < 0) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x22b4);
    uVar4 = 0xffffff74;
  }
  else {
    while (0 < local_1c) {
      iVar1 = local_20 + 1;
      local_1c = local_1c + -1;
      if (*(char *)(param_1 + local_20) == -0x7e) {
        local_20 = iVar1;
        iVar2 = (*(code *)PTR_FUN_0056129c)(param_1,&local_20,&local_18,param_2);
        if (iVar2 < 0) {
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x22c4);
          return 0xffffff74;
        }
        local_1c = (iVar1 - local_20) + local_1c;
        puVar3 = (undefined4 *)(*(code *)PTR_CyaSSL_Malloc_00560f78)(8);
        if (puVar3 == (undefined4 *)0x0) {
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x20b8);
          return 0xffffff74;
        }
        uVar4 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(local_18 + 1);
        puVar3[1] = uVar4;
        if (puVar3[1] == 0) {
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x20b8);
          if (puVar3 != (undefined4 *)0x0) {
            (*(code *)PTR_CyaSSL_Free_00560f84)(puVar3);
          }
          return 0xffffff74;
        }
        (*(code *)PTR_memcpy_005615a4)(puVar3[1],param_1 + local_20,local_18);
        *(undefined1 *)(puVar3[1] + local_18) = 0;
        *puVar3 = *(undefined4 *)(param_3 + 0x24);
        *(undefined4 **)(param_3 + 0x24) = puVar3;
        local_1c = local_1c - local_18;
        local_20 = local_20 + local_18;
      }
      else if (*(char *)(param_1 + local_20) == -0x7f) {
        local_20 = iVar1;
        iVar2 = (*(code *)PTR_FUN_0056129c)(param_1,&local_20,&local_14,param_2);
        if (iVar2 < 0) {
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x22c4);
          return 0xffffff74;
        }
        local_1c = (iVar1 - local_20) + local_1c;
        puVar3 = (undefined4 *)(*(code *)PTR_CyaSSL_Malloc_00560f78)(8);
        if (puVar3 == (undefined4 *)0x0) {
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x20b8);
          return 0xffffff74;
        }
        uVar4 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(local_14 + 1);
        puVar3[1] = uVar4;
        if (puVar3[1] == 0) {
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x20b8);
          if (puVar3 != (undefined4 *)0x0) {
            (*(code *)PTR_CyaSSL_Free_00560f84)(puVar3);
          }
          return 0xffffff74;
        }
        (*(code *)PTR_memcpy_005615a4)(puVar3[1],param_1 + local_20,local_14);
        *(undefined1 *)(puVar3[1] + local_14) = 0;
        *puVar3 = *(undefined4 *)(param_3 + 0x28);
        *(undefined4 **)(param_3 + 0x28) = puVar3;
        local_1c = local_1c - local_14;
        local_20 = local_20 + local_14;
      }
      else {
        local_20 = iVar1;
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x22d8);
        iVar2 = (*(code *)PTR_FUN_0056129c)(param_1,&local_20,local_10,param_2);
        if (iVar2 < 0) {
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x22fc);
          return 0xffffff74;
        }
        local_1c = (iVar1 - (local_10[0] + local_20)) + local_1c;
        local_20 = local_20 + local_10[0];
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}



// ==== DecodeBasicCaConstraint @ 004ac294 size=680

undefined4 DecodeBasicCaConstraint(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_c = 0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + 0x231c);
  iVar1 = (*(code *)PTR_FUN_005612a4)(param_1,&local_10,&local_c,param_2);
  if (iVar1 < 0) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x2334);
    uVar2 = 0xffffff74;
  }
  else if (local_c == 0) {
    uVar2 = 0;
  }
  else if (*(char *)(param_1 + local_10) == '\x01') {
    local_10 = local_10 + 1;
    iVar1 = (*(code *)PTR_FUN_0056129c)(param_1,&local_10,&local_c,param_2);
    if (iVar1 < 0) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x2368);
      uVar2 = 0xffffff74;
    }
    else {
      if (*(char *)(param_1 + local_10) != '\0') {
        *(undefined1 *)(param_3 + 0x2ef) = 1;
      }
      if (local_10 + 1U < param_2) {
        iVar1 = local_10 + 2;
        if (*(char *)(param_1 + local_10 + 1U) == '\x02') {
          local_10 = local_10 + 3;
          if (*(char *)(param_1 + iVar1) == '\x01') {
            *(uint *)(param_3 + 0x2fc) = (uint)*(byte *)(param_1 + local_10);
            *(undefined1 *)(param_3 + 0x2f8) = 1;
            uVar2 = 0;
          }
          else {
            (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x2394);
            uVar2 = 0xffffff74;
          }
        }
        else {
          local_10 = iVar1;
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x2378);
          uVar2 = 0xffffff74;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    local_10 = local_10 + 1;
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x2348);
    uVar2 = 0xffffff74;
  }
  return uVar2;
}



// ==== DecodeCrlDist @ 004ac53c size=1032

undefined4 DecodeCrlDist(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint local_10;
  int local_c;
  
  local_10 = 0;
  local_c = 0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + 0x23ac);
  iVar1 = (*(code *)PTR_FUN_005612a4)(param_1,&local_10,&local_c,param_2);
  if (iVar1 < 0) {
    uVar2 = 0xffffff74;
  }
  else {
    iVar1 = (*(code *)PTR_FUN_005612a4)(param_1,&local_10,&local_c,param_2);
    if (iVar1 < 0) {
      uVar2 = 0xffffff74;
    }
    else {
      if (*(char *)(param_1 + local_10) == -0x60) {
        local_10 = local_10 + 1;
        iVar1 = (*(code *)PTR_FUN_0056129c)(param_1,&local_10,&local_c,param_2);
        if (iVar1 < 0) {
          return 0xffffff74;
        }
        if (*(char *)(param_1 + local_10) == -0x60) {
          local_10 = local_10 + 1;
          iVar1 = (*(code *)PTR_FUN_0056129c)(param_1,&local_10,&local_c,param_2);
          if (iVar1 < 0) {
            return 0xffffff74;
          }
          if (*(char *)(param_1 + local_10) == -0x7a) {
            local_10 = local_10 + 1;
            iVar1 = (*(code *)PTR_FUN_0056129c)(param_1,&local_10,&local_c,param_2);
            if (iVar1 < 0) {
              return 0xffffff74;
            }
            *(int *)(param_3 + 0x2c0) = local_c;
            *(uint *)(param_3 + 700) = param_1 + local_10;
            local_10 = local_10 + local_c;
          }
          else {
            local_10 = local_10 + local_c;
          }
        }
        else {
          local_10 = local_10 + local_c;
        }
      }
      if ((local_10 < param_2) && (*(char *)(param_1 + local_10) == -0x5f)) {
        local_10 = local_10 + 1;
        iVar1 = (*(code *)PTR_FUN_0056129c)(param_1,&local_10,&local_c,param_2);
        if (iVar1 < 0) {
          return 0xffffff74;
        }
        local_10 = local_10 + local_c;
      }
      if ((local_10 < param_2) && (*(char *)(param_1 + local_10) == -0x5e)) {
        local_10 = local_10 + 1;
        iVar1 = (*(code *)PTR_FUN_0056129c)(param_1,&local_10,&local_c,param_2);
        if (iVar1 < 0) {
          return 0xffffff74;
        }
        local_10 = local_10 + local_c;
      }
      if (local_10 < param_2) {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x23bc);
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ==== DecodeAuthInfo @ 004ac944 size=552

undefined4 DecodeAuthInfo(int param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_10 = 0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + 0x240c);
  iVar2 = (*(code *)PTR_FUN_005612a4)(param_1,&local_14,&local_10,param_2);
  if (iVar2 < 0) {
    uVar3 = 0xffffff74;
  }
  else {
    for (; local_14 < param_2; local_14 = local_14 + local_10) {
      iVar2 = (*(code *)PTR_FUN_005612a4)(param_1,&local_14,&local_10,param_2);
      if (iVar2 < 0) {
        return 0xffffff74;
      }
      local_c = 0;
      iVar2 = (*(code *)(PTR_LAB_00561298 + 0x5314))(param_1,&local_14,&local_c,param_2);
      if (iVar2 < 0) {
        return 0xffffff74;
      }
      cVar1 = *(char *)(param_1 + local_14);
      local_14 = local_14 + 1;
      iVar2 = (*(code *)PTR_FUN_0056129c)(param_1,&local_14,&local_10,param_2);
      if (iVar2 < 0) {
        return 0xffffff74;
      }
      if ((cVar1 == -0x7a) && (local_c == 0x74)) {
        *(int *)(param_3 + 0x2b8) = local_10;
        *(uint *)(param_3 + 0x2b4) = param_1 + local_14;
        break;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



// ==== DecodeAuthKeyId @ 004acb6c size=656

int DecodeAuthKeyId(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int local_74;
  int local_70;
  undefined1 auStack_6c [100];
  
  local_74 = 0;
  local_70 = 0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + 0x241c);
  iVar1 = (*(code *)PTR_FUN_005612a4)(param_1,&local_74,&local_70,param_2);
  if (iVar1 < 0) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x242c);
    iVar1 = -0x8c;
  }
  else if (*(char *)(param_1 + local_74) == -0x80) {
    local_74 = local_74 + 1;
    iVar1 = (*(code *)PTR_FUN_0056129c)(param_1,&local_74,&local_70,param_2);
    if (iVar1 < 0) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x2474);
      iVar1 = -0x8c;
    }
    else {
      *(int *)(param_3 + 0x314) = param_1 + local_74;
      *(int *)(param_3 + 0x318) = local_70;
      if (local_70 == 0x14) {
        (*(code *)PTR_memcpy_005615a4)(param_3 + 0x2d9,param_1 + local_74,0x14);
      }
      else {
        iVar1 = (*(code *)PTR_InitSha_00561114)(auStack_6c);
        if (iVar1 != 0) {
          return iVar1;
        }
        (*(code *)PTR_ShaUpdate_00561118)(auStack_6c,param_1 + local_74,local_70);
        (*(code *)PTR_ShaFinal_0056111c)(auStack_6c,param_3 + 0x2d9);
      }
      iVar1 = 0;
    }
  }
  else {
    local_74 = local_74 + 1;
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x244c);
    iVar1 = 0;
  }
  return iVar1;
}



// ==== DecodeSubjKeyId @ 004acdfc size=556

int DecodeSubjKeyId(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int local_78;
  int local_74;
  int local_70;
  undefined1 auStack_6c [100];
  
  local_74 = 0;
  local_70 = 0;
  local_78 = 0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + 0x2494);
  if (*(char *)(param_1 + local_74) == '\x04') {
    local_74 = local_74 + 1;
    iVar1 = (*(code *)PTR_FUN_0056129c)(param_1,&local_74,&local_70,param_2);
    if (iVar1 < 0) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x2474);
      local_78 = -0x8c;
    }
    else {
      *(int *)(param_3 + 0x31c) = param_1 + local_74;
      *(int *)(param_3 + 800) = local_70;
      if (local_70 == 0x14) {
        (*(code *)PTR_memcpy_005615a4)(param_3 + 0x2c4,param_1 + local_74,0x14);
      }
      else {
        local_78 = (*(code *)PTR_InitSha_00561114)(auStack_6c);
        if (local_78 == 0) {
          (*(code *)PTR_ShaUpdate_00561118)(auStack_6c,param_1 + local_74,local_70);
          (*(code *)PTR_ShaFinal_0056111c)(auStack_6c,param_3 + 0x2c4);
        }
      }
    }
  }
  else {
    local_74 = local_74 + 1;
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x24a4);
    local_78 = -0x8c;
  }
  return local_78;
}



// ==== DecodeKeyUsage @ 004ad028 size=508

undefined4 DecodeKeyUsage(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int local_14;
  int local_10 [2];
  
  local_14 = 0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + 0x24c8);
  if (*(char *)(param_1 + local_14) == '\x03') {
    local_14 = local_14 + 1;
    iVar2 = (*(code *)PTR_FUN_0056129c)(param_1,&local_14,local_10,param_2);
    if (iVar2 < 0) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x2500);
      uVar3 = 0xffffff74;
    }
    else {
      bVar1 = *(byte *)(param_1 + local_14);
      if (local_10[0] == 3) {
        *(ushort *)(param_3 + 0x2f2) =
             (ushort)(((uint)*(byte *)(param_1 + local_14 + 1) << 0x18) >> 0x10) |
             (ushort)*(byte *)(param_1 + local_14 + 2);
        *(short *)(param_3 + 0x2f2) =
             (short)((int)(uint)*(ushort *)(param_3 + 0x2f2) >> (bVar1 & 0x1f));
      }
      else if (local_10[0] == 2) {
        *(ushort *)(param_3 + 0x2f2) = (ushort)*(byte *)(param_1 + local_14 + 1) << 1;
      }
      uVar3 = 0;
    }
  }
  else {
    local_14 = local_14 + 1;
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x24d8);
    uVar3 = 0xffffff74;
  }
  return uVar3;
}



// ==== DecodeExtKeyUsage @ 004ad224 size=564

undefined4 DecodeExtKeyUsage(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint local_18;
  uint local_14;
  undefined4 local_10 [2];
  
  local_18 = 0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + 0x251c);
  iVar1 = (*(code *)PTR_FUN_005612a4)(param_1,&local_18,local_10,param_2);
  if (iVar1 < 0) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x2530);
    uVar2 = 0xffffff74;
  }
  else {
    *(uint *)(param_3 + 0x308) = param_1 + local_18;
    *(undefined4 *)(param_3 + 0x30c) = local_10[0];
    while (local_18 < param_2) {
      iVar1 = (*(code *)(PTR_LAB_00561298 + 0x5314))(param_1,&local_18,&local_14,param_2);
      if (iVar1 < 0) {
        return 0xffffff74;
      }
      if (local_14 == 0x48) {
        *(byte *)(param_3 + 0x2f5) = *(byte *)(param_3 + 0x2f5) | 2;
      }
      else if (local_14 < 0x49) {
        if (local_14 == 0x47) {
          *(byte *)(param_3 + 0x2f5) = *(byte *)(param_3 + 0x2f5) | 1;
        }
      }
      else if (local_14 == 0x4f) {
        *(byte *)(param_3 + 0x2f5) = *(byte *)(param_3 + 0x2f5) | 4;
      }
      else if (local_14 == 0x97) {
        *(byte *)(param_3 + 0x2f5) = *(byte *)(param_3 + 0x2f5) | 8;
      }
      *(int *)(param_3 + 0x310) = *(int *)(param_3 + 0x310) + 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// ==== DecodeNameConstraints @ 004ad714 size=564

undefined4 DecodeNameConstraints(int param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_18;
  uint local_10;
  int local_c;
  
  local_10 = 0;
  local_c = 0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + 0x256c);
  iVar2 = (*(code *)PTR_FUN_005612a4)(param_1,&local_10,&local_c,param_2);
  if (iVar2 < 0) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x2530);
    uVar3 = 0xffffff74;
  }
  else {
    for (; local_10 < param_2; local_10 = local_10 + local_c) {
      cVar1 = *(char *)(param_1 + local_10);
      local_10 = local_10 + 1;
      iVar2 = (*(code *)PTR_FUN_0056129c)(param_1,&local_10,&local_c,param_2);
      if (iVar2 < 1) {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x254c);
        return 0xffffff74;
      }
      if (cVar1 == -0x60) {
        local_18 = param_3 + 0x2c;
      }
      else {
        if (cVar1 != -0x5f) {
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x2584);
          return 0xffffff74;
        }
        local_18 = param_3 + 0x30;
      }
      (*(code *)(PTR_LAB_005612c8 + -0x2ba8))
                (param_1 + local_10,local_c,local_18,*(undefined4 *)(param_3 + 0x280));
    }
    uVar3 = 0;
  }
  return uVar3;
}



// ==== DecodeCertExtensions @ 004ad948 size=1084

/* WARNING: Type propagation algorithm not settling */

undefined4 DecodeCertExtensions(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint local_1c;
  int local_18;
  int local_14 [3];
  
  local_1c = 0;
  uVar5 = *(uint *)(param_1 + 0x2ac);
  iVar6 = *(int *)(param_1 + 0x2a8);
  bVar2 = false;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + 0x2598);
  if ((iVar6 == 0) || (uVar5 == 0)) {
    uVar7 = 0xffffff53;
  }
  else if (*(char *)(iVar6 + local_1c) == -0x5d) {
    local_1c = local_1c + 1;
    iVar3 = (*(code *)PTR_FUN_0056129c)(iVar6,&local_1c,&local_18,uVar5);
    if (iVar3 < 0) {
      uVar7 = 0xffffff74;
    }
    else {
      iVar3 = (*(code *)PTR_FUN_005612a4)(iVar6,&local_1c,&local_18,uVar5);
      if (iVar3 < 0) {
        uVar7 = 0xffffff74;
      }
      else {
        for (; local_1c < uVar5; local_1c = local_1c + local_18) {
          iVar3 = (*(code *)PTR_FUN_005612a4)(iVar6,&local_1c,&local_18,uVar5);
          if (iVar3 < 0) {
            (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x2530);
            return 0xffffff74;
          }
          local_14[0] = 0;
          iVar3 = (*(code *)(PTR_LAB_00561298 + 0x5314))(iVar6,&local_1c,local_14,uVar5);
          if (iVar3 < 0) {
            (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x25b0);
            return 0xffffff74;
          }
          bVar1 = false;
          if (*(char *)(iVar6 + local_1c) == '\x01') {
            local_14[1] = 0;
            local_1c = local_1c + 1;
            iVar3 = (*(code *)PTR_FUN_0056129c)(iVar6,&local_1c,local_14 + 1,uVar5);
            if (iVar3 < 0) {
              (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x25c4);
              return 0xffffff74;
            }
            uVar4 = local_1c + 1;
            pcVar8 = (char *)(iVar6 + local_1c);
            local_1c = uVar4;
            if (*pcVar8 != '\0') {
              bVar1 = true;
            }
          }
          if (*(char *)(iVar6 + local_1c) != '\x04') {
            local_1c = local_1c + 1;
            (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x24a4);
            return 0xffffff74;
          }
          local_1c = local_1c + 1;
          iVar3 = (*(code *)PTR_FUN_0056129c)(iVar6,&local_1c,&local_18,uVar5);
          if (iVar3 < 0) {
            (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x2474);
            return 0xffffff74;
          }
          if (local_14[0] - 0x45U < 100) {
                    /* WARNING: Could not recover jumptable at 0x004add00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar7 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_00560f88 +
                                                (local_14[0] - 0x45U) * 4 + 0x2644)))();
            return uVar7;
          }
          if (bVar1) {
            bVar2 = true;
          }
        }
        if (bVar2) {
          uVar7 = 0xffffff60;
        }
        else {
          uVar7 = 0;
        }
      }
    }
  }
  else {
    uVar7 = 0xffffff74;
  }
  return uVar7;
}



// ==== ParseCert @ 004ae168 size=500

int ParseCert(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR_ParseCertRelative_00561078)(param_1,param_2,param_3,param_4);
  if (-1 < iVar1) {
    if (0 < param_1[0x19]) {
      iVar2 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(param_1[0x19] + 1);
      if (iVar2 == 0) {
        return -0x7d;
      }
      (*(code *)PTR_memcpy_005615a4)(iVar2,param_1[0x18],param_1[0x19]);
      *(undefined1 *)(iVar2 + param_1[0x19]) = 0;
      param_1[0x18] = iVar2;
      param_1[0x1b] = 1;
    }
    if (((param_1[7] == 0x285) && (*param_1 != 0)) && (param_1[1] != 0)) {
      iVar2 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(param_1[1]);
      if (iVar2 == 0) {
        iVar1 = -0x7d;
      }
      else {
        (*(code *)PTR_memcpy_005615a4)(iVar2,*param_1,param_1[1]);
        *param_1 = iVar2;
        param_1[2] = 1;
      }
    }
  }
  return iVar1;
}



// ==== ParseCertRelative @ 004ae35c size=1416

int ParseCertRelative(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_80;
  int local_7c;
  undefined4 *local_78;
  int local_70;
  undefined1 auStack_6c [100];
  
  local_80 = 0;
  local_7c = 0;
  iVar1 = (*(code *)PTR_DecodeToKey_00561074)(param_1,param_3);
  if (((iVar1 < 0) && (local_80 = iVar1, iVar1 != -0x96)) && (iVar1 != -0x97)) {
    return iVar1;
  }
  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x27d4);
  if ((uint)param_1[0x9e] < (uint)param_1[4]) {
    if (param_1[8] < 2) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x27e4);
      return -0x8d;
    }
    param_1[0xaa] = param_1[0x9d] + param_1[0x9e];
    param_1[0xab] = param_1[4] - param_1[0x9e];
    param_1[0xac] = param_1[0x9e];
    iVar1 = (*(code *)(PTR_LAB_005612c8 + -0x26b8))(param_1);
    if ((iVar1 < 0) && (local_7c = iVar1, iVar1 != -0xa0)) {
      return iVar1;
    }
    param_1[0x9e] = param_1[4];
  }
  iVar1 = (*(code *)PTR_GetAlgoId_005612ac)(param_1[0x9d],param_1 + 0x9e,&local_70,param_1[0x9f]);
  if ((-1 < iVar1) && (iVar1 = (*(code *)(PTR_LAB_005612c8 + -0x5f10))(param_1), -1 < iVar1)) {
    if (param_1[6] == local_70) {
      if ((((char)param_1[0xb6] == '\0') && (*param_1 != 0)) && (param_1[1] != 0)) {
        iVar1 = (*(code *)PTR_InitSha_00561114)(auStack_6c);
        if (iVar1 != 0) {
          return iVar1;
        }
        (*(code *)PTR_ShaUpdate_00561118)(auStack_6c,*param_1,param_1[1]);
        (*(code *)PTR_ShaFinal_0056111c)(auStack_6c,param_1 + 0xb1);
      }
      if ((param_3 != 0) && (param_2 != 4)) {
        local_78 = (undefined4 *)0x0;
        if (*(char *)((int)param_1 + 0x2ed) != '\0') {
          local_78 = (undefined4 *)(*(code *)PTR_FUN_005612f0)(param_4,(int)param_1 + 0x2d9);
        }
        if (local_78 == (undefined4 *)0x0) {
          local_78 = (undefined4 *)(*(code *)PTR_FUN_005612f4)(param_4,param_1 + 0x12);
        }
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x2810);
        if (local_78 == (undefined4 *)0x0) {
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x2874);
          return -0xbc;
        }
        iVar1 = (*(code *)(PTR_LAB_005612c8 + -0x513c))
                          (param_1[0x9d] + param_1[3],param_1[4] - param_1[3],local_78[3],*local_78,
                           local_78[1],param_1[0x17],param_1[5],param_1[6],param_1[0xa0]);
        if (iVar1 == 0) {
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x2838);
          return -0x9b;
        }
        iVar1 = (*(code *)(PTR_LAB_005612c8 + -0x48dc))(local_78,param_1);
        if (iVar1 == 0) {
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x2854);
          return -0xc6;
        }
      }
      iVar1 = local_80;
      if ((local_80 == 0) && (iVar1 = local_7c, local_7c == 0)) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = -0x98;
    }
  }
  return iVar1;
}



// ==== MakeSigner @ 004ae8e4 size=172

undefined4 * MakeSigner(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)PTR_CyaSSL_Malloc_00560f78)(0x4c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[0x12] = 0;
  }
  return puVar1;
}



// ==== FreeSigner @ 004ae990 size=308

void FreeSigner(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    (*(code *)PTR_CyaSSL_Free_00560f84)(*(int *)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*(code *)PTR_CyaSSL_Free_00560f84)(*(int *)(param_1 + 0xc));
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    (*(code *)PTR_FUN_005612c0)(*(undefined4 *)(param_1 + 0x18),param_2);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    (*(code *)PTR_FUN_005612c0)(*(undefined4 *)(param_1 + 0x1c),param_2);
  }
  if (param_1 != 0) {
    (*(code *)PTR_CyaSSL_Free_00560f84)(param_1);
  }
  return;
}



// ==== FreeSignerTable @ 004aeac4 size=224

void FreeSignerTable(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    local_14 = *(int *)(param_1 + local_18 * 4);
    while (local_14 != 0) {
      iVar1 = *(int *)(local_14 + 0x48);
      (*(code *)PTR_FreeSigner_00561034)(local_14,param_3);
      local_14 = iVar1;
    }
    *(undefined4 *)(param_1 + local_18 * 4) = 0;
  }
  return;
}



// ==== SetSerialNumber @ 004aec78 size=332

int SetSerialNumber(char *param_1,uint param_2,undefined1 *param_3)

{
  int local_10;
  
  local_10 = 0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + 0x2890);
  if (param_2 < 0x21) {
    *param_3 = 2;
    if (*param_1 < '\0') {
      param_3[1] = (char)param_2 + '\x01';
      param_3[2] = 0;
      (*(code *)PTR_memcpy_005615a4)(param_3 + 3,param_1,param_2);
      local_10 = param_2 + 3;
    }
    else {
      param_3[1] = (char)param_2;
      (*(code *)PTR_memcpy_005615a4)(param_3 + 2,param_1,param_2);
      local_10 = param_2 + 2;
    }
  }
  return local_10;
}



// ==== GetNameHash @ 004af7b0 size=556

int GetNameHash(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_70 [96];
  int local_10 [2];
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + 0x2920);
  if (*(char *)(param_1 + *param_2) == '\x06') {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x1fd8);
    iVar1 = (*(code *)PTR_FUN_0056129c)(param_1,param_2,local_10,param_4);
    if (iVar1 < 0) {
      return -0x8c;
    }
    *param_2 = *param_2 + local_10[0];
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x1ff4);
  }
  iVar2 = *param_2;
  iVar1 = (*(code *)PTR_FUN_005612a4)(param_1,param_2,local_10,param_4);
  if (iVar1 < 0) {
    iVar1 = -0x8c;
  }
  else {
    iVar1 = (*(code *)PTR_InitSha_00561114)(auStack_70);
    if (iVar1 == 0) {
      (*(code *)PTR_ShaUpdate_00561118)(auStack_70,param_1 + iVar2,(*param_2 + local_10[0]) - iVar2)
      ;
      (*(code *)PTR_ShaFinal_0056111c)(auStack_70,param_3);
      *param_2 = *param_2 + local_10[0];
      iVar1 = 0;
    }
  }
  return iVar1;
}



// ==== Base64_Decode @ 004af9e0 size=1412

undefined4 Base64_Decode(int param_1,uint param_2,int param_3,uint *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  undefined4 uVar9;
  uint uVar10;
  uint local_res4;
  uint local_28;
  int local_24;
  char local_18;
  
  local_28 = 0;
  local_24 = 0;
  uVar10 = param_2;
  iVar5 = local_24;
  if (*param_4 < ((param_2 - (param_2 + 0x3f >> 6)) + 1) * 3 >> 2) {
    uVar9 = 0xffffff53;
  }
  else {
    do {
      do {
        local_24 = iVar5;
        local_res4 = uVar10;
        if (local_res4 < 4) {
LAB_004aff38:
          *param_4 = local_28;
          return 0;
        }
        bVar1 = *(byte *)(param_1 + local_24);
        bVar2 = *(byte *)(param_1 + local_24 + 1);
        bVar3 = *(byte *)(param_1 + local_24 + 2);
        iVar5 = local_24 + 4;
        bVar4 = *(byte *)(param_1 + local_24 + 3);
        if (bVar1 == 0) goto LAB_004aff38;
        if ((((bVar1 < 0x2b) || (bVar2 < 0x2b)) || (bVar3 < 0x2b)) || (bVar4 < 0x2b)) {
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x2a20);
          return 0xffffff66;
        }
        if (((0x7a < bVar1) || (0x7a < bVar2)) || ((0x7a < bVar3 || (0x7a < bVar4)))) {
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x2a44);
          return 0xffffff66;
        }
        bVar2 = PTR_DAT_00560f88[bVar2 + 0x29a5];
        if (bVar3 == 0x3d) {
          bVar7 = 0;
        }
        else {
          bVar7 = PTR_DAT_00560f88[bVar3 + 0x29a5];
        }
        if (bVar4 == 0x3d) {
          bVar8 = 0;
        }
        else {
          bVar8 = PTR_DAT_00560f88[bVar4 + 0x29a5];
        }
        *(byte *)(param_3 + local_28) =
             (byte)(((uint)(byte)PTR_DAT_00560f88[bVar1 + 0x29a5] << 0x1a) >> 0x18) | bVar2 >> 4;
        uVar10 = local_28 + 1;
        if (bVar3 != 0x3d) {
          *(byte *)(param_3 + local_28 + 1) = (byte)(((uint)bVar2 << 0x1c) >> 0x18) | bVar7 >> 2;
          uVar10 = local_28 + 2;
        }
        local_28 = uVar10;
        if (bVar4 == 0x3d) goto LAB_004aff38;
        uVar6 = local_28 + 1;
        *(byte *)(param_3 + local_28) = (byte)(((uint)bVar7 << 0x1e) >> 0x18) | bVar8;
        uVar10 = local_res4 - 4;
        local_28 = uVar6;
      } while ((uVar10 == 0) ||
              (((*(char *)(param_1 + iVar5) != ' ' && (*(char *)(param_1 + iVar5) != '\r')) &&
               (*(char *)(param_1 + iVar5) != '\n'))));
      local_res4 = local_res4 - 5;
      local_18 = *(char *)(param_1 + iVar5);
      local_24 = local_24 + 5;
      while ((local_res4 != 0 && (local_18 == ' '))) {
        local_res4 = local_res4 - 1;
        local_18 = *(char *)(param_1 + local_24);
        local_24 = local_24 + 1;
      }
      if ((local_18 == '\r') && (local_res4 != 0)) {
        local_18 = *(char *)(param_1 + local_24);
        local_res4 = local_res4 - 1;
        local_24 = local_24 + 1;
      }
      uVar10 = local_res4;
      iVar5 = local_24;
    } while (local_18 == '\n');
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x2a64);
    uVar9 = 0xffffff66;
  }
  return uVar9;
}



// ==== Base64_Encode @ 004b08e4 size=124

undefined4
Base64_Encode(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(PTR_LAB_005612c8 + 0x22c))(param_1,param_2,param_3,param_4,0);
  return uVar1;
}



// ==== Base16_Decode @ 004b09e0 size=720

undefined4 Base16_Decode(char *param_1,uint param_2,char *param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint local_res4;
  int local_18;
  uint local_14;
  
  local_18 = 0;
  local_14 = 0;
  if (((param_2 == 1) && (*param_4 != 0)) && (param_1 != (char *)0x0)) {
    if ((byte)(*param_1 - 0x30U) < 0x37) {
      if (PTR_DAT_00560f88[(byte)(*param_1 - 0x30U) + 0x2ae4] == -1) {
        uVar2 = 0xffffff66;
      }
      else {
        *param_3 = PTR_DAT_00560f88[(byte)(*param_1 - 0x30U) + 0x2ae4];
        *param_4 = 1;
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0xffffff66;
    }
  }
  else if ((param_2 & 1) == 0) {
    local_res4 = param_2;
    if (*param_4 < param_2 >> 1) {
      uVar2 = 0xffffff53;
    }
    else {
      for (; local_res4 != 0; local_res4 = local_res4 - 2) {
        iVar1 = local_18 + 1;
        pcVar3 = param_1 + local_18;
        local_18 = local_18 + 2;
        if (0x36 < (byte)(*pcVar3 - 0x30U)) {
          return 0xffffff66;
        }
        if (0x36 < (byte)(param_1[iVar1] - 0x30U)) {
          return 0xffffff66;
        }
        if ((PTR_DAT_00560f88[(byte)(*pcVar3 - 0x30U) + 0x2ae4] == 0xff) ||
           (PTR_DAT_00560f88[(byte)(param_1[iVar1] - 0x30U) + 0x2ae4] == 0xff)) {
          return 0xffffff66;
        }
        param_3[local_14] =
             (byte)(((uint)(byte)PTR_DAT_00560f88[(byte)(*pcVar3 - 0x30U) + 0x2ae4] << 0x1c) >> 0x18
                   ) | PTR_DAT_00560f88[(byte)(param_1[iVar1] - 0x30U) + 0x2ae4];
        local_14 = local_14 + 1;
      }
      *param_4 = local_14;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffff53;
  }
  return uVar2;
}



// ==== Arc4SetKey @ 004b0cb0 size=340

void Arc4SetKey(undefined1 *param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint local_18;
  uint local_14;
  uint local_10;
  
  local_14 = 0;
  local_10 = 0;
  *param_1 = 1;
  param_1[1] = 0;
  for (local_18 = 0; local_18 < 0x100; local_18 = local_18 + 1) {
    param_1[local_18 + 2] = (char)local_18;
  }
  for (local_18 = 0; local_18 < 0x100; local_18 = local_18 + 1) {
    bVar1 = param_1[local_18 + 2];
    local_10 = local_10 + (uint)*(byte *)(param_2 + local_14) + (uint)bVar1 & 0xff;
    param_1[local_18 + 2] = param_1[local_10 + 2];
    param_1[local_10 + 2] = bVar1;
    local_14 = local_14 + 1;
    if (param_3 <= local_14) {
      local_14 = 0;
    }
  }
  return;
}



// ==== Arc4Process @ 004b0eec size=268

void Arc4Process(byte *param_1,byte *param_2,byte *param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte *local_res4;
  byte *local_res8;
  int local_resc;
  uint local_18;
  uint local_14;
  
  local_18 = (uint)*param_1;
  local_14 = (uint)param_1[1];
  local_res4 = param_2;
  local_res8 = param_3;
  local_resc = param_4;
  while (local_resc != 0) {
    bVar1 = *local_res8;
    bVar2 = (*(code *)(PTR_LAB_005612c8 + 0xe04))(&local_18,&local_14,param_1 + 2);
    *local_res4 = bVar1 ^ bVar2;
    local_res4 = local_res4 + 1;
    local_res8 = local_res8 + 1;
    local_resc = local_resc + -1;
  }
  *param_1 = (byte)local_18;
  param_1[1] = (byte)local_14;
  return;
}



// ==== InitMd5 @ 004b108c size=124

void InitMd5(undefined4 *param_1)

{
  param_1[0x13] = 0x67452301;
  param_1[0x14] = 0xefcdab89;
  param_1[0x15] = 0x98badcfe;
  param_1[0x16] = 0x10325476;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// ==== Md5Update @ 004b2b8c size=344

void Md5Update(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int local_res4;
  int local_res8;
  
  local_res4 = param_2;
  local_res8 = param_3;
  while (local_res8 != 0) {
    iVar1 = (*(code *)(PTR_LAB_005612c8 + 0x104c))(local_res8,0x40 - *param_1);
    (*(code *)PTR_memcpy_005615a4)((int)param_1 + *param_1 + 0xc,local_res4,iVar1);
    *param_1 = *param_1 + iVar1;
    local_res4 = local_res4 + iVar1;
    local_res8 = local_res8 - iVar1;
    if (*param_1 == 0x40) {
      (*(code *)(PTR_LAB_005612c8 + 0x1108))(param_1);
      (*(code *)(PTR_LAB_005612c8 + 0x2b14))(param_1,0x40);
      *param_1 = 0;
    }
  }
  return;
}



// ==== Md5Final @ 004b2ce4 size=592

void Md5Final(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  
  (*(code *)(PTR_LAB_005612c8 + 0x2b14))(param_1,*param_1);
  uVar1 = *param_1;
  *param_1 = uVar1 + 1;
  *(undefined1 *)((int)param_1 + uVar1 + 0xc) = 0x80;
  if (0x38 < *param_1) {
    (*(code *)PTR_memset_00561588)((int)param_1 + *param_1 + 0xc,0,0x40 - *param_1);
    *param_1 = 0x40;
    (*(code *)(PTR_LAB_005612c8 + 0x1108))(param_1);
    *param_1 = 0;
  }
  (*(code *)PTR_memset_00561588)((int)param_1 + *param_1 + 0xc,0,0x38 - *param_1);
  param_1[2] = (param_1[1] >> 0x1d) + param_1[2] * 8;
  param_1[1] = param_1[1] << 3;
  (*(code *)PTR_memcpy_005615a4)(param_1 + 0x11,param_1 + 1,4);
  (*(code *)PTR_memcpy_005615a4)(param_1 + 0x12,param_1 + 2,4);
  (*(code *)(PTR_LAB_005612c8 + 0x1108))(param_1);
  (*(code *)PTR_memcpy_005615a4)(param_2,param_1 + 0x13,0x10);
  (*(code *)PTR_InitMd5_00561108)(param_1);
  return;
}



// ==== Md5Hash @ 004b2f34 size=172

undefined4 Md5Hash(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [96];
  
  (*(code *)PTR_InitMd5_00561108)(auStack_68);
  (*(code *)PTR_Md5Update_0056110c)(auStack_68,param_1,param_2);
  (*(code *)PTR_Md5Final_00561110)(auStack_68,param_3);
  return 0;
}



// ==== PBKDF1 @ 004b31c4 size=816

int PBKDF1(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int local_e8;
  undefined1 auStack_dc [92];
  undefined1 auStack_80 [96];
  undefined1 auStack_20 [24];
  
  if (param_8 == 0) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    if (param_8 != 1) {
      return -0xad;
    }
  }
  if (iVar2 < param_7) {
    iVar2 = -0xad;
  }
  else if (param_6 < 1) {
    iVar2 = -0xad;
  }
  else {
    if (param_8 == 0) {
      (*(code *)PTR_InitMd5_00561108)(auStack_dc);
      (*(code *)PTR_Md5Update_0056110c)(auStack_dc,param_2,param_3);
      (*(code *)PTR_Md5Update_0056110c)(auStack_dc,param_4,param_5);
      (*(code *)PTR_Md5Final_00561110)(auStack_dc,auStack_20);
    }
    else {
      iVar1 = (*(code *)PTR_InitSha_00561114)(auStack_80);
      if (iVar1 != 0) {
        return iVar1;
      }
      (*(code *)PTR_ShaUpdate_00561118)(auStack_80,param_2,param_3);
      (*(code *)PTR_ShaUpdate_00561118)(auStack_80,param_4,param_5);
      (*(code *)PTR_ShaFinal_0056111c)(auStack_80,auStack_20);
    }
    for (local_e8 = 1; local_e8 < param_6; local_e8 = local_e8 + 1) {
      if (param_8 == 0) {
        (*(code *)PTR_Md5Update_0056110c)(auStack_dc,auStack_20,iVar2);
        (*(code *)PTR_Md5Final_00561110)(auStack_dc,auStack_20);
      }
      else {
        (*(code *)PTR_ShaUpdate_00561118)(auStack_80,auStack_20,iVar2);
        (*(code *)PTR_ShaFinal_0056111c)(auStack_80,auStack_20);
      }
    }
    (*(code *)PTR_memcpy_005615a4)(param_1,auStack_20,param_7);
    iVar2 = 0;
  }
  return iVar2;
}



// ==== PBKDF2 @ 004b34f4 size=948

int PBKDF2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          int param_6,int param_7,int param_8)

{
  int iVar1;
  int local_res0;
  uint local_280;
  undefined4 local_27c;
  int local_278;
  int local_274;
  undefined1 auStack_268 [536];
  undefined1 auStack_50 [64];
  undefined1 local_10 [8];
  
  local_280 = 1;
  if (param_8 == 0) {
    local_27c = 0x10;
  }
  else if (param_8 == 1) {
    local_27c = 0x14;
  }
  else if (param_8 == 2) {
    local_27c = 0x20;
  }
  else {
    if (param_8 != 4) {
      return -0xad;
    }
    local_27c = 0x40;
  }
  local_274 = (*(code *)PTR_HmacSetKey_005611b4)(auStack_268,param_8,param_2,param_3);
  local_res0 = param_1;
  if (local_274 == 0) {
    while ((param_7 != 0 &&
           (local_274 = (*(code *)PTR_HmacUpdate_005611b8)(auStack_268,param_4,param_5),
           local_274 == 0))) {
      local_274 = 0;
      for (local_278 = 0; local_278 < 4; local_278 = local_278 + 1) {
        local_10[0] = (undefined1)(local_280 >> ((3 - local_278) * 8 & 0x1fU));
        local_274 = (*(code *)PTR_HmacUpdate_005611b8)(auStack_268,local_10,1);
        if (local_274 != 0) break;
      }
      if (local_274 != 0) {
        return local_274;
      }
      iVar1 = (*(code *)PTR_HmacFinal_005611bc)(auStack_268,auStack_50);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = (*(code *)(PTR_LAB_005612c8 + 0x3184))(param_7,local_27c);
      (*(code *)PTR_memcpy_005615a4)(local_res0,auStack_50,iVar1);
      local_278 = 1;
      local_274 = 0;
      while (((local_278 < param_6 &&
              (local_274 = (*(code *)PTR_HmacUpdate_005611b8)(auStack_268,auStack_50,local_27c),
              local_274 == 0)) &&
             (local_274 = (*(code *)PTR_HmacFinal_005611bc)(auStack_268,auStack_50), local_274 == 0)
             )) {
        (*(code *)(PTR_LAB_005612c8 + 0x3078))(local_res0,auStack_50,iVar1);
        local_278 = local_278 + 1;
      }
      if (local_274 != 0) {
        return local_274;
      }
      local_res0 = local_res0 + iVar1;
      param_7 = param_7 - iVar1;
      local_280 = local_280 + 1;
    }
  }
  return local_274;
}



// ==== PKCS12_PBKDF @ 004b38a8 size=3376

int PKCS12_PBKDF(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                ,int param_8,undefined4 param_9)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int local_res0;
  uint local_650;
  uint local_64c;
  int local_648;
  int local_640;
  uint local_63c;
  undefined1 *local_638;
  undefined1 auStack_608 [1024];
  undefined1 auStack_208 [128];
  undefined1 auStack_188 [128];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 uStack_d8;
  undefined1 auStack_d7 [207];
  
  bVar2 = false;
  local_640 = 0;
  local_638 = auStack_608;
  if (param_6 == 0) {
    param_6 = 1;
  }
  if (param_8 == 0) {
    local_64c = 0x40;
    local_650 = 0x10;
  }
  else if (param_8 == 1) {
    local_64c = 0x40;
    local_650 = 0x14;
  }
  else if (param_8 == 2) {
    local_64c = 0x40;
    local_650 = 0x20;
  }
  else {
    if (param_8 != 4) {
      return -0xad;
    }
    local_64c = 0x80;
    local_650 = 0x40;
  }
  if (local_64c == 0) {
    trap(0x1c00);
  }
  iVar1 = (((param_5 + local_64c) - 1) / local_64c) * local_64c;
  if (param_3 == 0) {
    local_648 = 0;
  }
  else {
    if (local_64c == 0) {
      trap(0x1c00);
    }
    local_648 = (((param_3 + local_64c) - 1) / local_64c) * local_64c;
  }
  uVar4 = local_64c + iVar1 + local_648;
  if (0x400 < uVar4) {
    local_638 = (undefined1 *)(*(code *)PTR_CyaSSL_Malloc_00560f78)(uVar4);
    if (local_638 == (undefined1 *)0x0) {
      return -0x7d;
    }
    bVar2 = true;
  }
  (*(code *)PTR_memset_00561588)(local_638,param_9,local_64c);
  for (local_63c = 0; (int)local_63c < iVar1; local_63c = local_63c + 1) {
    if (param_5 == 0) {
      trap(0x1c00);
    }
    local_638[local_63c + local_64c] = *(undefined1 *)(param_4 + (int)local_63c % param_5);
  }
  for (local_63c = 0; local_res0 = param_1, (int)local_63c < local_648; local_63c = local_63c + 1) {
    if (param_3 == 0) {
      trap(0x1c00);
    }
    local_638[local_63c + iVar1 + local_64c] = *(undefined1 *)(param_2 + (int)local_63c % param_3);
  }
  do {
    if (param_7 < 1) {
LAB_004b4580:
      if ((bVar2) && (local_638 != (undefined1 *)0x0)) {
        (*(code *)PTR_CyaSSL_Free_00560f84)(local_638);
      }
      return local_640;
    }
    if (param_8 == 0) {
      (*(code *)PTR_InitMd5_00561108)(&uStack_d8);
      (*(code *)PTR_Md5Update_0056110c)(&uStack_d8,local_638,uVar4);
      (*(code *)PTR_Md5Final_00561110)(&uStack_d8,auStack_208);
      for (local_63c = 1; (int)local_63c < param_6; local_63c = local_63c + 1) {
        (*(code *)PTR_Md5Update_0056110c)(&uStack_d8,auStack_208,local_650);
        (*(code *)PTR_Md5Final_00561110)(&uStack_d8,auStack_208);
      }
    }
    else if (param_8 == 1) {
      local_640 = (*(code *)PTR_InitSha_00561114)(&uStack_d8);
      if (local_640 != 0) goto LAB_004b4580;
      (*(code *)PTR_ShaUpdate_00561118)(&uStack_d8,local_638,uVar4);
      (*(code *)PTR_ShaFinal_0056111c)(&uStack_d8,auStack_208);
      for (local_63c = 1; (int)local_63c < param_6; local_63c = local_63c + 1) {
        (*(code *)PTR_ShaUpdate_00561118)(&uStack_d8,auStack_208,local_650);
        (*(code *)PTR_ShaFinal_0056111c)(&uStack_d8,auStack_208);
      }
    }
    else if (param_8 == 2) {
      local_640 = (*(code *)PTR_InitSha256_00560f6c)(&uStack_d8);
      if (((local_640 != 0) ||
          (local_640 = (*(code *)PTR_Sha256Update_00560f70)(&uStack_d8,local_638,uVar4),
          local_640 != 0)) ||
         (local_640 = (*(code *)PTR_Sha256Final_00560f74)(&uStack_d8,auStack_208), local_640 != 0))
      goto LAB_004b4580;
      local_63c = 1;
      while ((((int)local_63c < param_6 &&
              (local_640 = (*(code *)PTR_Sha256Update_00560f70)(&uStack_d8,auStack_208,local_650),
              local_640 == 0)) &&
             (local_640 = (*(code *)PTR_Sha256Final_00560f74)(&uStack_d8,auStack_208),
             local_640 == 0))) {
        local_63c = local_63c + 1;
      }
    }
    else if (param_8 == 4) {
      local_640 = (*(code *)PTR_InitSha512_00561138)(&uStack_d8);
      if (((local_640 != 0) ||
          (local_640 = (*(code *)PTR_Sha512Update_0056113c)(&uStack_d8,local_638,uVar4),
          local_640 != 0)) ||
         (local_640 = (*(code *)PTR_Sha512Final_00561140)(&uStack_d8,auStack_208), local_640 != 0))
      goto LAB_004b4580;
      local_63c = 1;
      while ((((int)local_63c < param_6 &&
              (local_640 = (*(code *)PTR_Sha512Update_0056113c)(&uStack_d8,auStack_208,local_650),
              local_640 == 0)) &&
             (local_640 = (*(code *)PTR_Sha512Final_00561140)(&uStack_d8,auStack_208),
             local_640 == 0))) {
        local_63c = local_63c + 1;
      }
    }
    for (local_63c = 0; (int)local_63c < (int)local_64c; local_63c = local_63c + 1) {
      if (local_650 == 0) {
        trap(0x1c00);
      }
      auStack_188[local_63c] = auStack_208[local_63c % local_650];
    }
    iVar3 = (*(code *)PTR_mp_init_005611f0)(auStack_108);
    if (iVar3 == 0) {
      iVar3 = (*(code *)PTR_mp_read_unsigned_bin_00561220)(auStack_108,auStack_188,local_64c);
      if (iVar3 == 0) {
        iVar3 = (*(code *)PTR_mp_add_d_00561300)(auStack_108,1,auStack_108);
        if (iVar3 != 0) {
          local_640 = -0x73;
        }
      }
      else {
        local_640 = -0x6f;
      }
    }
    else {
      local_640 = -0x6e;
    }
    if (local_640 != 0) {
      (*(code *)PTR_mp_clear_005611f8)(auStack_108);
      goto LAB_004b4580;
    }
    for (local_63c = 0; (int)local_63c < iVar1 + local_648; local_63c = local_63c + local_64c) {
      iVar3 = (*(code *)PTR_mp_init_multi_00561288)(auStack_f8,auStack_e8,0,0,0,0);
      if (iVar3 != 0) {
        local_640 = -0x6e;
        break;
      }
      iVar3 = (*(code *)PTR_mp_read_unsigned_bin_00561220)
                        (auStack_f8,local_638 + local_63c + local_64c,local_64c);
      if (iVar3 == 0) {
        iVar3 = (*(code *)PTR_mp_add_00561278)(auStack_f8,auStack_108,auStack_e8);
        if (iVar3 == 0) {
          iVar3 = (*(code *)PTR_mp_unsigned_bin_size_0056120c)(auStack_e8);
          if (iVar3 < 0) {
            local_640 = -0x71;
          }
          else if ((int)local_64c < iVar3) {
            local_640 = (*(code *)PTR_mp_to_unsigned_bin_0056121c)(auStack_e8,&uStack_d8);
            (*(code *)PTR_memcpy_005615a4)(local_638 + local_63c + local_64c,auStack_d7,local_64c);
          }
          else if (iVar3 < (int)local_64c) {
            (*(code *)PTR_memset_00561588)(local_638 + local_63c + local_64c,0,local_64c - iVar3);
            local_640 = (*(code *)PTR_mp_to_unsigned_bin_0056121c)
                                  (auStack_e8,local_638 + ((local_63c + local_64c * 2) - iVar3));
          }
          else {
            local_640 = (*(code *)PTR_mp_to_unsigned_bin_0056121c)
                                  (auStack_e8,local_638 + local_63c + local_64c);
          }
        }
        else {
          local_640 = -0x73;
        }
      }
      else {
        local_640 = -0x6f;
      }
      (*(code *)PTR_mp_clear_005611f8)(auStack_f8);
      (*(code *)PTR_mp_clear_005611f8)(auStack_e8);
      if (local_640 < 0) break;
    }
    iVar3 = (*(code *)(PTR_LAB_005612c8 + 0x3184))(param_7,local_650);
    (*(code *)PTR_memcpy_005615a4)(local_res0,auStack_208,iVar3);
    local_res0 = local_res0 + iVar3;
    param_7 = param_7 - iVar3;
    (*(code *)PTR_mp_clear_005611f8)(auStack_108);
  } while( true );
}



// ==== IsAtLeastTLSv1_2 @ 004c071c size=148

undefined4 IsAtLeastTLSv1_2(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 8) == '\x03') && (2 < *(byte *)(param_1 + 9))) {
    uVar1 = 1;
  }
  else if ((*(char *)(param_1 + 8) == -2) && (*(byte *)(param_1 + 9) < 0xfe)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// ==== c32to24 @ 004c07b0 size=104

void c32to24(undefined4 param_1,undefined1 *param_2)

{
  *param_2 = (char)((uint)param_1 >> 0x10);
  param_2[1] = (char)((uint)param_1 >> 8);
  param_2[2] = (char)param_1;
  return;
}



// ==== FreeSSL_Ctx @ 004c0e0c size=404

void FreeSSL_Ctx(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_LockMutex_00560ff4)(param_1 + 4);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    iVar1 = *(int *)(param_1 + 0x1c);
    (*(code *)PTR_UnLockMutex_00560ff8)(param_1 + 4);
    if (iVar1 == 0) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x2fd4);
      (*(code *)PTR_FUN_005613e8)(param_1);
      (*(code *)PTR_FreeMutex_00560ff0)(param_1 + 4);
      if (param_1 != 0) {
        (*(code *)PTR_CyaSSL_Free_00560f84)(param_1);
      }
    }
    else {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x3000);
    }
  }
  else {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x2fb8);
  }
  return;
}



// ==== InitSuites @ 004c1394 size=900

void InitSuites(int *param_1,undefined2 param_2,char param_3)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  char local_res4;
  byte bStackX_5;
  char local_res8;
  char in_stack_00000018;
  char in_stack_0000001c;
  int in_stack_00000020;
  ushort local_28;
  undefined4 local_24;
  
  local_28 = 0;
  local_res4 = (char)param_2;
  bStackX_5 = (byte)((ushort)param_2 >> 8);
  if ((local_res4 == '\x03') && (bStackX_5 != 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((local_res4 == '\x03') && (2 < bStackX_5)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_24 = 1;
  if (param_1 == (int *)0x0) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x3024);
  }
  else if (*param_1 == 0) {
    local_res8 = param_3;
    if ((in_stack_00000020 == 0) && (in_stack_0000001c != '\0')) {
      local_res8 = '\0';
    }
    if ((in_stack_00000020 == 0) && (in_stack_00000018 != '\0')) {
      local_24 = 0;
    }
    if ((bVar1) && (local_res8 != '\0')) {
      *(undefined1 *)(param_1 + 1) = 0;
      local_28 = 2;
      *(undefined1 *)((int)param_1 + 5) = 0x3d;
    }
    if ((bVar1) && (local_res8 != '\0')) {
      uVar3 = local_28 + 1;
      *(undefined1 *)((int)param_1 + local_28 + 4) = 0;
      local_28 = local_28 + 2;
      *(undefined1 *)((int)param_1 + uVar3 + 4) = 0x3c;
    }
    if ((bVar2) && (local_res8 != '\0')) {
      uVar3 = local_28 + 1;
      *(undefined1 *)((int)param_1 + local_28 + 4) = 0;
      local_28 = local_28 + 2;
      *(undefined1 *)((int)param_1 + uVar3 + 4) = 0x35;
    }
    if ((bVar2) && (local_res8 != '\0')) {
      uVar3 = local_28 + 1;
      *(undefined1 *)((int)param_1 + local_28 + 4) = 0;
      local_28 = local_28 + 2;
      *(undefined1 *)((int)param_1 + uVar3 + 4) = 0x2f;
    }
    if (local_res8 != '\0') {
      *(undefined1 *)((int)param_1 + local_28 + 4) = 0;
      *(undefined1 *)((int)param_1 + (ushort)(local_28 + 1) + 4) = 5;
      *(undefined1 *)((int)param_1 + (ushort)(local_28 + 2) + 4) = 0;
      *(undefined1 *)((int)param_1 + (ushort)(local_28 + 3) + 4) = 4;
      uVar3 = local_28 + 5;
      *(undefined1 *)((int)param_1 + (ushort)(local_28 + 4) + 4) = 0;
      local_28 = local_28 + 6;
      *(undefined1 *)((int)param_1 + uVar3 + 4) = 10;
    }
    *(ushort *)(param_1 + 0x33) = local_28;
    (*(code *)(PTR_LAB_005613c8 + 0x11e8))(param_1,in_stack_00000018,local_24,0);
  }
  return;
}



// ==== InitX509 @ 004c186c size=344

void InitX509(undefined4 *param_1,undefined1 param_2)

{
  (*(code *)PTR_FUN_005613ec)(param_1 + 1,0);
  (*(code *)PTR_FUN_005613ec)(param_1 + 0x5b,0);
  *param_1 = 0;
  param_1[0x115] = 0;
  param_1[0x112] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  *(undefined1 *)(param_1 + 0x11a) = param_2;
  *(undefined1 *)((int)param_1 + 0x469) = 0;
  param_1[0x11b] = 0;
  *(undefined1 *)((int)param_1 + 0x472) = 0;
  *(undefined1 *)((int)param_1 + 0x473) = 0;
  *(undefined1 *)(param_1 + 0x11d) = 0;
  *(undefined1 *)((int)param_1 + 0x475) = 0;
  *(undefined1 *)((int)param_1 + 0x476) = 0;
  *(undefined1 *)((int)param_1 + 0x477) = 0;
  *(undefined1 *)(param_1 + 0x11e) = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  *(undefined1 *)(param_1 + 0x121) = 0;
  *(undefined1 *)((int)param_1 + 0x485) = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  *(undefined1 *)(param_1 + 0x124) = 0;
  *(undefined1 *)((int)param_1 + 0x491) = 0;
  *(undefined2 *)(param_1 + 0x11c) = 0;
  return;
}



// ==== FreeX509 @ 004c19c4 size=512

void FreeX509(int param_1)

{
  if (param_1 != 0) {
    (*(code *)PTR_FUN_005613f0)(param_1 + 4);
    (*(code *)PTR_FUN_005613f0)(param_1 + 0x16c);
    if ((*(int *)(param_1 + 0x454) != 0) && (*(int *)(param_1 + 0x454) != 0)) {
      (*(code *)PTR_CyaSSL_Free_00560f84)(*(int *)(param_1 + 0x454));
    }
    if (*(int *)(param_1 + 0x45c) != 0) {
      (*(code *)PTR_CyaSSL_Free_00560f84)(*(int *)(param_1 + 0x45c));
    }
    if (*(int *)(param_1 + 0x448) != 0) {
      (*(code *)PTR_CyaSSL_Free_00560f84)(*(int *)(param_1 + 0x448));
    }
    if (*(int *)(param_1 + 0x47c) != 0) {
      (*(code *)PTR_CyaSSL_Free_00560f84)(*(int *)(param_1 + 0x47c));
    }
    if (*(int *)(param_1 + 0x488) != 0) {
      (*(code *)PTR_CyaSSL_Free_00560f84)(*(int *)(param_1 + 0x488));
    }
    if (*(int *)(param_1 + 0x460) != 0) {
      (*(code *)PTR_FUN_005612bc)(*(undefined4 *)(param_1 + 0x460),0);
    }
    if ((*(char *)(param_1 + 0x468) != '\0') && (param_1 != 0)) {
      (*(code *)PTR_CyaSSL_Free_00560f84)(param_1);
    }
  }
  return;
}



// ==== FreeArrays @ 004c26f0 size=220

void FreeArrays(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x4f0) != 0) && (param_2 != 0)) {
    (*(code *)PTR_memcpy_005615a4)(param_1 + 0x4f4,*(int *)(param_1 + 0x4f0) + 0x40,0x20);
    *(undefined1 *)(param_1 + 0x514) = *(undefined1 *)(*(int *)(param_1 + 0x4f0) + 0x60);
  }
  if (*(int *)(param_1 + 0x4f0) != 0) {
    (*(code *)PTR_CyaSSL_Free_00560f84)(*(int *)(param_1 + 0x4f0));
  }
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  return;
}



// ==== FreeHandshakeResources @ 004c2bbc size=428

void FreeHandshakeResources(int param_1)

{
  if (*(char *)(param_1 + 0x495) != '\0') {
    (*(code *)PTR_FUN_00561404)(param_1,0);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*(code *)PTR_CyaSSL_Free_00560f84)(*(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((*(char *)(param_1 + 0x31) == '\0') || (*(char *)(param_1 + 0x4d6) == '\0')) {
    (*(code *)PTR_FreeRng_005611ec)(*(undefined4 *)(param_1 + 0x158));
    if (*(int *)(param_1 + 0x158) != 0) {
      (*(code *)PTR_CyaSSL_Free_00560f84)(*(int *)(param_1 + 0x158));
    }
    *(undefined4 *)(param_1 + 0x158) = 0;
  }
  if (*(char *)(param_1 + 0x4ef) != '\0') {
    (*(code *)PTR_FreeArrays_00560fe0)(param_1,1);
  }
  if (*(int *)(param_1 + 0x570) != 0) {
    (*(code *)PTR_FreeRsaKey_00561070)(*(undefined4 *)(param_1 + 0x570));
    if (*(int *)(param_1 + 0x570) != 0) {
      (*(code *)PTR_CyaSSL_Free_00560f84)(*(int *)(param_1 + 0x570));
    }
    *(undefined4 *)(param_1 + 0x570) = 0;
  }
  return;
}



// ==== FreeSSL @ 004c2d68 size=160

void FreeSSL(undefined4 *param_1)

{
  (*(code *)PTR_FreeSSL_Ctx_00560fa4)(*param_1);
  (*(code *)PTR_SSL_ResourceFree_0056140c)(param_1);
  if (param_1 != (undefined4 *)0x0) {
    (*(code *)PTR_CyaSSL_Free_00560f84)(param_1);
  }
  return;
}



// ==== MakeSSLv3 @ 004c2e08 size=72

undefined1 * MakeSSLv3(undefined1 *param_1)

{
  *param_1 = 3;
  param_1[1] = 0;
  return param_1;
}



// ==== LowResTimer @ 004c2e50 size=88

undefined4 LowResTimer(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_time_00561530)(0);
  return uVar1;
}



// ==== SendBuffered @ 004c3738 size=572

undefined4 SendBuffered(int *param_1)

{
  int iVar1;
  
  if (*(int *)(*param_1 + 0x158) == 0) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x316c);
    return 0xfffffecc;
  }
  do {
    while( true ) {
      if (param_1[0x126] == 0) {
        param_1[0x127] = 0;
        if (*(char *)((int)param_1 + 0x4ad) != '\0') {
          (*(code *)PTR_FUN_00561408)(param_1);
        }
        return 0;
      }
      iVar1 = (**(code **)(*param_1 + 0x158))
                        (param_1,param_1[0x128] + param_1[0x127],param_1[0x126],param_1[0x55]);
      if (iVar1 < 0) break;
      if (param_1[0x126] < iVar1) {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x3198);
        return 0xfffffe7d;
      }
      param_1[0x127] = param_1[0x127] + iVar1;
      param_1[0x126] = param_1[0x126] - iVar1;
    }
  } while (iVar1 == -4);
  if (iVar1 < -3) {
    if (iVar1 == -5) {
      *(undefined1 *)(param_1 + 0x136) = 1;
      return 0xfffffecc;
    }
  }
  else {
    if (iVar1 == -3) {
      *(undefined1 *)(param_1 + 0x136) = 1;
      return 0xfffffecc;
    }
    if (iVar1 == -2) {
      return 0xfffffeb9;
    }
  }
  return 0xfffffecc;
}



// ==== CopyDecodedToX509 @ 004c56ec size=2316

undefined4 CopyDecodedToX509(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = 0;
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    local_10 = 0xffffff53;
  }
  else {
    *param_1 = param_2[8] + 1;
    (*(code *)PTR_strncpy_00561528)(param_1[1],param_2 + 0x1c,0x100);
    *(undefined1 *)(param_1[1] + 0xff) = 0;
    iVar1 = (*(code *)PTR_strlen_00561504)(param_1[1]);
    param_1[0x43] = iVar1 + 1;
    if (param_2[0xcf] != 0) {
      (*(code *)PTR_memcpy_005615a4)(param_1 + 0x44,param_2 + 0xcf,0x5c);
      iVar1 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(param_2[0xd0]);
      param_1[0x44] = iVar1;
      if (param_1[0x44] != 0) {
        (*(code *)PTR_memcpy_005615a4)(param_1[0x44],param_2[0xcf],param_2[0xd0]);
      }
    }
    (*(code *)PTR_strncpy_00561528)(param_1[0x5b],param_2 + 0x5c,0x100);
    *(undefined1 *)(param_1[0x5b] + 0xff) = 0;
    iVar1 = (*(code *)PTR_strlen_00561504)(param_1[0x5b]);
    param_1[0x9d] = iVar1 + 1;
    if (param_2[0xe6] != 0) {
      (*(code *)PTR_memcpy_005615a4)(param_1 + 0x9e,param_2 + 0xe6,0x5c);
      iVar1 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(param_2[0xe7]);
      param_1[0x9e] = iVar1;
      if (param_1[0x9e] != 0) {
        (*(code *)PTR_memcpy_005615a4)(param_1[0x9e],param_2[0xe6],param_2[0xe7]);
      }
    }
    (*(code *)PTR_memcpy_005615a4)(param_1 + 0xb6,param_2 + 0xa1,0x20);
    param_1[0xb5] = param_2[0xa9];
    if (param_2[0x19] < 0x100) {
      (*(code *)PTR_memcpy_005615a4)(param_1 + 0xbe,param_2[0x18],param_2[0x19]);
      *(undefined1 *)((int)param_1 + param_2[0x19] + 0x2f8) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xbe) = 0;
    }
    iVar1 = (*(code *)(PTR_LAB_005613c8 + 0x680))(param_2[0xca],0x20);
    if (iVar1 == 0) {
      param_1[0xfe] = 0;
    }
    else {
      param_1[0xfe] = iVar1;
      (*(code *)PTR_memcpy_005615a4)(param_1 + 0xff,param_2[0xc9],iVar1);
    }
    iVar1 = (*(code *)(PTR_LAB_005613c8 + 0x680))(param_2[0xcc],0x20);
    if (iVar1 == 0) {
      param_1[0x107] = 0;
    }
    else {
      param_1[0x107] = iVar1;
      (*(code *)PTR_memcpy_005615a4)(param_1 + 0x108,param_2[0xcb],iVar1);
    }
    if ((*param_2 != 0) && (param_2[1] != 0)) {
      iVar1 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(param_2[1]);
      param_1[0x115] = iVar1;
      if (param_1[0x115] == 0) {
        local_10 = 0xffffff83;
      }
      else {
        param_1[0x113] = param_2[7];
        param_1[0x114] = param_2[1];
        (*(code *)PTR_memcpy_005615a4)(param_1[0x115],*param_2,param_2[1]);
      }
    }
    if ((param_2[0x17] != 0) && (param_2[5] != 0)) {
      iVar1 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(param_2[5]);
      param_1[0x112] = iVar1;
      if (param_1[0x112] == 0) {
        local_10 = 0xffffff83;
      }
      else {
        (*(code *)PTR_memcpy_005615a4)(param_1[0x112],param_2[0x17],param_2[5]);
        param_1[0x111] = param_2[5];
        param_1[0x110] = param_2[6];
      }
    }
    iVar1 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(param_2[0x9f]);
    param_1[0x117] = iVar1;
    if (param_1[0x117] == 0) {
      local_10 = 0xffffff83;
    }
    else {
      (*(code *)PTR_memcpy_005615a4)(param_1[0x117],param_2[0x9d],param_2[0x9f]);
      param_1[0x116] = param_2[0x9f];
    }
    param_1[0x118] = param_2[9];
    param_2[9] = 0;
    param_1[0x119] = param_1[0x118];
    *(undefined1 *)((int)param_1 + 0x469) = *(undefined1 *)((int)param_2 + 0x2ef);
    param_1[0x11b] = param_2[0xbf];
    *(undefined2 *)(param_1 + 0x11c) = *(undefined2 *)((int)param_2 + 0x2f2);
    *(undefined1 *)((int)param_1 + 0x472) = *(undefined1 *)((int)param_2 + 0x2f6);
    *(undefined1 *)((int)param_1 + 0x473) = *(undefined1 *)((int)param_2 + 0x2f7);
    *(char *)(param_1 + 0x11d) = (char)param_2[0xbe];
    *(char *)((int)param_1 + 0x475) = (char)param_2[0xc0];
    *(undefined1 *)((int)param_1 + 0x476) = *(undefined1 *)((int)param_2 + 0x301);
    *(undefined1 *)((int)param_1 + 0x477) = *(undefined1 *)((int)param_2 + 0x2ed);
    *(undefined1 *)(param_1 + 0x11e) = *(undefined1 *)((int)param_2 + 0x302);
    if ((param_2[0xc5] != 0) && (param_2[0xc6] != 0)) {
      iVar1 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(param_2[0xc6]);
      param_1[0x11f] = iVar1;
      if (param_1[0x11f] == 0) {
        local_10 = 0xffffff83;
      }
      else {
        (*(code *)PTR_memcpy_005615a4)(param_1[0x11f],param_2[0xc5],param_2[0xc6]);
        param_1[0x120] = param_2[0xc6];
      }
    }
    *(char *)(param_1 + 0x121) = (char)param_2[0xb6];
    *(char *)((int)param_1 + 0x485) = (char)param_2[0xc1];
    if ((param_2[199] != 0) && (param_2[200] != 0)) {
      iVar1 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(param_2[200]);
      param_1[0x122] = iVar1;
      if (param_1[0x122] == 0) {
        local_10 = 0xffffff83;
      }
      else {
        (*(code *)PTR_memcpy_005615a4)(param_1[0x122],param_2[199],param_2[200]);
        param_1[0x123] = param_2[200];
      }
    }
    *(char *)(param_1 + 0x124) = (char)param_2[0xbc];
    *(undefined1 *)((int)param_1 + 0x491) = *(undefined1 *)((int)param_2 + 0x305);
  }
  return local_10;
}



// ==== DoHandShakeMsgType @ 004c79b4 size=1892

int DoHandShakeMsgType(int param_1,int param_2,int *param_3,byte param_4,int param_5,uint param_6)

{
  int iVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + 0x41b0);
  if (param_6 < (uint)(*param_3 + param_5)) {
    iVar1 = -0x136;
  }
  else {
    iVar1 = (*(code *)(PTR_LAB_005613c8 + 0x7150))(param_1,param_4);
    if (iVar1 == 0) {
      if ((param_4 == 0) ||
         (iVar1 = (*(code *)(PTR_LAB_005613c8 + 0x3024))(param_1,param_2 + *param_3,param_5),
         iVar1 == 0)) {
        if ((*(char *)(param_1 + 0x4ca) == '\n') && (param_4 != 0)) {
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x41fc);
          (*(code *)PTR_SendAlert_00560fd0)(param_1,2,10);
          iVar1 = -0x175;
        }
        else if ((((*(char *)(param_1 + 0x4cc) == '\x01') && (*(char *)(param_1 + 0x4d7) == '\0'))
                 && (*(char *)(param_1 + 0x4c8) == '\0')) && (param_4 != 2)) {
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x4228);
          (*(code *)PTR_SendAlert_00560fd0)(param_1,2,10);
          iVar1 = -0x175;
        }
        else if ((((*(char *)(param_1 + 0x4cc) == '\x01') && (*(char *)(param_1 + 0x4d7) != '\0'))
                 && (param_4 == 0xe)) && (*(byte *)(param_1 + 0x4c8) < 2)) {
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x4250);
          (*(code *)PTR_SendAlert_00560fd0)(param_1,2,10);
          iVar1 = -0x175;
        }
        else if (((*(char *)(param_1 + 0x4cc) == '\0') && (*(char *)(param_1 + 0x4c9) == '\0')) &&
                (param_4 != 1)) {
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x4288);
          (*(code *)PTR_SendAlert_00560fd0)(param_1,2,10);
          iVar1 = -0x175;
        }
        else {
          if (param_4 < 0x15) {
                    /* WARNING: Could not emulate address calculation at 0x004c7d08 */
                    /* WARNING: Treating indirect jump as call */
            iVar1 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_00560f88 + (uint)param_4 * 4 + 0x4420)))();
            return iVar1;
          }
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x43e8);
          (*(code *)PTR_FUN_00560fa0)(PTR_DAT_00560f88 + 0x4408,0xfffffecd);
          iVar1 = -0x133;
        }
      }
    }
    else {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x41c4);
    }
  }
  return iVar1;
}



// ==== ProcessReply @ 004c9d78 size=2700

int ProcessReply(int param_1)

{
  byte bVar1;
  int iVar2;
  int local_20;
  int local_1c;
  int local_10 [2];
  
  local_20 = 0;
  local_1c = 0;
  if (((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 4) == -0x143)) ||
     (*(int *)(param_1 + 4) == -0x147)) {
LAB_004c9e0c:
    bVar1 = *(byte *)(param_1 + 0x4e9);
    if (bVar1 == 2) {
LAB_004c9eb4:
      iVar2 = (*(code *)(PTR_LAB_005613c8 + 0x3eb4))
                        (param_1,*(undefined4 *)(param_1 + 0x488),param_1 + 0x484,param_1 + 0x580,
                         param_1 + 0x586);
      if (iVar2 != 0) {
        return iVar2;
      }
      *(undefined1 *)(param_1 + 0x4e9) = 3;
      local_20 = 0;
LAB_004c9f28:
      if ((*(char *)(param_1 + 0x4d7) == '\0') &&
         (local_20 = (*(code *)(PTR_LAB_005613f4 + -0x689c))
                               (param_1,*(undefined2 *)(param_1 + 0x586)), local_20 < 0)) {
        return local_20;
      }
      *(undefined1 *)(param_1 + 0x4e9) = 4;
      local_1c = *(int *)(param_1 + 0x484);
    }
    else {
      if (bVar1 < 3) {
        if (bVar1 != 0) {
LAB_004ca7b8:
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x4764);
          return -0x12d;
        }
        if ((*(char *)(param_1 + 0x4d7) == '\0') &&
           (iVar2 = (*(code *)(PTR_LAB_005613f4 + -0x689c))(param_1,5), iVar2 < 0)) {
          return iVar2;
        }
        goto LAB_004c9eb4;
      }
      if (bVar1 == 3) goto LAB_004c9f28;
      if (bVar1 != 4) goto LAB_004ca7b8;
    }
    if ((*(char *)(param_1 + 0x130) != '\0') && (*(char *)(param_1 + 0x131) == '\0')) {
      iVar2 = (*(code *)(PTR_LAB_005613f4 + -0x7a40))(param_1,*(undefined2 *)(param_1 + 0x586));
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar2 = (*(code *)(PTR_LAB_005613f4 + -0x7bcc))
                        (param_1,*(int *)(param_1 + 0x488) + *(int *)(param_1 + 0x484),
                         *(int *)(param_1 + 0x488) + *(int *)(param_1 + 0x484),
                         *(undefined2 *)(param_1 + 0x586));
      if (iVar2 < 0) {
        (*(code *)PTR_FUN_00560fd4)(iVar2);
        return -0x138;
      }
      if ((*(char *)(param_1 + 0x4d6) != '\0') && (*(char *)(param_1 + 0x31) == '\x01')) {
        *(uint *)(param_1 + 0x484) = *(int *)(param_1 + 0x484) + (uint)*(ushort *)(param_1 + 0x3c);
      }
      if ((*(char *)(param_1 + 0x31) == '\x02') && (*(char *)(param_1 + 0x30) != '\n')) {
        *(int *)(param_1 + 0x484) = *(int *)(param_1 + 0x484) + 8;
      }
      local_20 = (*(code *)(PTR_LAB_005613f4 + -0x665c))
                           (param_1,*(int *)(param_1 + 0x488) + *(int *)(param_1 + 0x484),
                            *(undefined2 *)(param_1 + 0x586),*(undefined1 *)(param_1 + 0x580),
                            param_1 + 300);
      if (local_20 < 0) {
        (*(code *)PTR_FUN_00560fd4)(local_20);
        return -0x138;
      }
      *(uint *)(param_1 + 0x128) = (uint)*(ushort *)(param_1 + 0x586);
      *(undefined1 *)(param_1 + 0x131) = 1;
    }
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x466c);
    bVar1 = *(byte *)(param_1 + 0x580);
    if (bVar1 == 0x15) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x46f8);
      local_20 = (*(code *)(PTR_LAB_005613f4 + -0x6a6c))
                           (param_1,*(undefined4 *)(param_1 + 0x488),param_1 + 0x484,local_10,
                            *(undefined4 *)(param_1 + 0x480));
      if (local_20 == 2) {
        return -0x139;
      }
      if (local_20 < 0) {
        return local_20;
      }
      if (local_10[0] == 0) {
        *(undefined4 *)(param_1 + 4) = 0xfffffea9;
        return *(int *)(param_1 + 4);
      }
      if (local_10[0] == 0x33) {
        return -0x139;
      }
    }
    else {
      if (bVar1 < 0x16) {
        if (bVar1 != 0x14) {
LAB_004ca698:
          (*(code *)PTR_FUN_00560fd4)(0xfffffec9);
          return -0x137;
        }
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x4688);
        iVar2 = (*(code *)(PTR_LAB_005613c8 + 0x7150))(param_1,0x37);
        if (iVar2 != 0) {
          return iVar2;
        }
        if ((*(char *)(param_1 + 0x130) != '\0') && (*(char *)(param_1 + 0x4cb) != '\0')) {
          *(int *)(param_1 + 0x484) = *(int *)(param_1 + 0x484) + *(int *)(param_1 + 300);
          *(short *)(param_1 + 0x586) =
               *(short *)(param_1 + 0x586) - (short)*(undefined4 *)(param_1 + 0x484);
        }
        if (*(short *)(param_1 + 0x586) != 1) {
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x46a0);
          return -0x155;
        }
        if ((((*(char *)(param_1 + 0x4cc) == '\0') && (*(char *)(param_1 + 0x4cd) != '\0')) &&
            (*(char *)(param_1 + 0x4e4) != '\0')) && (*(char *)(param_1 + 0x4e5) == '\0')) {
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x46c8);
          return -0x17a;
        }
        *(int *)(param_1 + 0x484) = *(int *)(param_1 + 0x484) + 1;
        *(undefined1 *)(param_1 + 0x130) = 1;
        iVar2 = (*(code *)PTR_SetKeysSide_0056141c)(param_1,2);
        if (iVar2 != 0) {
          return iVar2;
        }
        if ((*(char *)(param_1 + 0x4d3) == '\0') || (*(char *)(param_1 + 0x4cc) != '\x01')) {
          local_20 = 0;
          if ((*(char *)(param_1 + 0x4d3) == '\0') && (*(char *)(param_1 + 0x4cc) == '\0')) {
            local_20 = (*(code *)(PTR_LAB_005613c8 + 0x450c))
                                 (param_1,param_1 + 0x358,PTR_DAT_00560f88 + 0x2f60);
          }
        }
        else {
          local_20 = (*(code *)(PTR_LAB_005613c8 + 0x450c))
                               (param_1,param_1 + 0x358,PTR_DAT_00560f88 + 0x2f64);
        }
      }
      else {
        if (bVar1 != 0x16) {
          if (bVar1 != 0x17) goto LAB_004ca698;
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x46e8);
          local_20 = (*(code *)PTR_FUN_00561420)
                               (param_1,*(undefined4 *)(param_1 + 0x488),param_1 + 0x484);
          if (local_20 != 0) {
            (*(code *)PTR_FUN_00560fd4)(local_20);
            return local_20;
          }
          goto LAB_004ca6bc;
        }
        if (*(char *)(param_1 + 0x4d7) == '\0') {
          local_20 = (*(code *)(PTR_LAB_005613f4 + -0x7ee8))
                               (param_1,*(undefined4 *)(param_1 + 0x488),param_1 + 0x484,
                                *(undefined4 *)(param_1 + 0x480));
        }
      }
      if (local_20 != 0) {
        return local_20;
      }
    }
LAB_004ca6bc:
    *(undefined1 *)(param_1 + 0x4e9) = 0;
    if (*(int *)(param_1 + 0x484) != *(int *)(param_1 + 0x480)) {
      if ((uint)(*(int *)(param_1 + 0x484) - local_1c) < (uint)*(ushort *)(param_1 + 0x586)) {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x4704);
        *(undefined1 *)(param_1 + 0x4e9) = 4;
        if (*(char *)(param_1 + 0x130) != '\0') {
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x471c);
          *(int *)(param_1 + 0x484) = *(int *)(param_1 + 0x484) - *(int *)(param_1 + 300);
        }
      }
      else {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x474c);
        *(undefined1 *)(param_1 + 0x4e9) = 0;
      }
      goto LAB_004c9e0c;
    }
    iVar2 = 0;
  }
  else {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x463c);
    iVar2 = *(int *)(param_1 + 4);
  }
  return iVar2;
}



// ==== SendChangeCipher @ 004ca804 size=480

int SendChangeCipher(int param_1)

{
  int iVar1;
  int local_20;
  undefined1 local_c [4];
  
  local_20 = 6;
  if ((*(char *)(param_1 + 0x130) != '\0') && (*(char *)(param_1 + 0x4cb) != '\0')) {
    local_20 = 0x6c;
  }
  iVar1 = (*(code *)PTR_FUN_00561424)(param_1,local_20);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4a0) + *(int *)(param_1 + 0x498);
    (*(code *)(PTR_LAB_005613c8 + 0x3194))(iVar1,1,0x14,param_1);
    *(undefined1 *)(iVar1 + 5) = 1;
    if ((*(char *)(param_1 + 0x130) != '\0') && (*(char *)(param_1 + 0x4cb) != '\0')) {
      local_c[0] = 1;
      local_20 = (*(code *)(PTR_LAB_005613f4 + -0x4b3c))(param_1,iVar1,local_20,local_c,1,0x14);
      if (local_20 < 0) {
        return local_20;
      }
    }
    *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + local_20;
    if (*(char *)(param_1 + 0x4ed) == '\0') {
      iVar1 = (*(code *)PTR_SendBuffered_005610a8)(param_1);
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}



// ==== SendFinished @ 004cb958 size=868

int SendFinished(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [48];
  
  if (*(char *)(param_1 + 0x4d5) == '\0') {
    iVar3 = 0x24;
  }
  else {
    iVar3 = 0xc;
  }
  iVar1 = (*(code *)PTR_SetKeysSide_0056141c)(param_1,1);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = (*(code *)PTR_FUN_00561424)(param_1,0x96);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x4a0);
  iVar4 = *(int *)(param_1 + 0x498);
  (*(code *)(PTR_LAB_005613c8 + 0x3258))(auStack_3c,iVar3,0x14,param_1);
  if (*(char *)(param_1 + 0x4cc) == '\x01') {
    puVar5 = PTR_DAT_00560f88 + 0x2f60;
  }
  else {
    puVar5 = PTR_DAT_00560f88 + 0x2f64;
  }
  iVar2 = (*(code *)(PTR_LAB_005613c8 + 0x450c))(param_1,auStack_38,puVar5);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar3 = (*(code *)(PTR_LAB_005613f4 + -0x4b3c))
                    (param_1,iVar1 + iVar4,0x96,auStack_3c,iVar3 + 4,0x16);
  if (iVar3 < 0) {
    return -0x140;
  }
  if (*(char *)(param_1 + 0x4d3) == '\0') {
    (*(code *)PTR_FUN_00561428)(param_1);
    if (*(char *)(param_1 + 0x4cc) != '\x01') {
      *(undefined1 *)(param_1 + 0x4ca) = 10;
      *(undefined1 *)(param_1 + 0x4cb) = 1;
      goto LAB_004cbc6c;
    }
    iVar1 = (*(code *)(PTR_LAB_005613c8 + 0x450c))
                      (param_1,param_1 + 0x358,PTR_DAT_00560f88 + 0x2f64);
  }
  else {
    if (*(char *)(param_1 + 0x4cc) == '\x01') {
      *(undefined1 *)(param_1 + 0x4ca) = 10;
      *(undefined1 *)(param_1 + 0x4cb) = 1;
      goto LAB_004cbc6c;
    }
    iVar1 = (*(code *)(PTR_LAB_005613c8 + 0x450c))
                      (param_1,param_1 + 0x358,PTR_DAT_00560f88 + 0x2f60);
  }
  if (iVar1 != 0) {
    return iVar1;
  }
LAB_004cbc6c:
  *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + iVar3;
  iVar3 = (*(code *)PTR_SendBuffered_005610a8)(param_1);
  return iVar3;
}



// ==== SendCertificate @ 004cbcbc size=1144

int SendCertificate(int param_1)

{
  int iVar1;
  int iVar2;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  if ((*(char *)(param_1 + 0x4e6) == '\0') && (*(char *)(param_1 + 0x4e7) == '\0')) {
    if (*(char *)(param_1 + 0x4d2) == '\x02') {
      local_24 = 0;
      local_2c = 3;
      local_20 = 0;
    }
    else {
      local_24 = *(int *)(param_1 + 0x440);
      local_2c = local_24 + 6;
      local_20 = local_24 + 3;
      if (*(int *)(param_1 + 0x454) != 0) {
        local_2c = *(int *)(param_1 + 0x450) + local_2c;
        local_20 = local_20 + *(int *)(param_1 + 0x450);
      }
    }
    local_30 = local_2c + 9;
    if (*(char *)(param_1 + 0x130) != '\0') {
      local_30 = local_2c + 0x6f;
    }
    iVar2 = (*(code *)PTR_FUN_00561424)(param_1,local_30);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x4a0) + *(int *)(param_1 + 0x498);
      (*(code *)(PTR_LAB_005613c8 + 0x32dc))(iVar2,local_2c,0xb,param_1);
      (*(code *)PTR_c32to24_0056104c)(local_20,iVar2 + 9);
      local_28 = 0xc;
      if (local_24 != 0) {
        (*(code *)PTR_c32to24_0056104c)(local_24,iVar2 + 0xc);
        (*(code *)PTR_memcpy_005615a4)(iVar2 + 0xf,*(undefined4 *)(param_1 + 0x444),local_24);
        local_28 = local_24 + 0xf;
        if (*(int *)(param_1 + 0x454) != 0) {
          (*(code *)PTR_memcpy_005615a4)
                    (iVar2 + local_28,*(undefined4 *)(param_1 + 0x454),
                     *(undefined4 *)(param_1 + 0x450));
          local_28 = local_28 + *(int *)(param_1 + 0x450);
        }
      }
      if (*(char *)(param_1 + 0x130) == '\0') {
        iVar2 = (*(code *)(PTR_LAB_005613c8 + 0x2ea8))(param_1,iVar2,local_30,0);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      else {
        local_28 = local_28 + -5;
        iVar1 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(local_28);
        if (iVar1 == 0) {
          return -0x7d;
        }
        (*(code *)PTR_memcpy_005615a4)(iVar1,iVar2 + 5,local_28);
        local_30 = (*(code *)(PTR_LAB_005613f4 + -0x4b3c))
                             (param_1,iVar2,local_30,iVar1,local_28,0x16);
        if (iVar1 != 0) {
          (*(code *)PTR_CyaSSL_Free_00560f84)(iVar1);
        }
        if (local_30 < 0) {
          return local_30;
        }
      }
      if (*(char *)(param_1 + 0x4cc) == '\0') {
        *(undefined1 *)(param_1 + 0x4c8) = 3;
      }
      *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + local_30;
      if (*(char *)(param_1 + 0x4ed) == '\0') {
        iVar2 = (*(code *)PTR_SendBuffered_005610a8)(param_1);
      }
      else {
        iVar2 = 0;
      }
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



// ==== SendCertificateRequest @ 004cc134 size=792

int SendCertificateRequest(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_20;
  int local_1c;
  
  local_1c = 4;
  iVar1 = (*(code *)PTR_IsAtLeastTLSv1_2_00561248)(param_1);
  if (iVar1 != 0) {
    local_1c = *(ushort *)(*(int *)(param_1 + 0xc) + 0xee) + 6;
  }
  if ((*(char *)(param_1 + 0x4e6) == '\0') && (*(char *)(param_1 + 0x4e7) == '\0')) {
    iVar2 = local_1c + 9;
    iVar1 = (*(code *)PTR_FUN_00561424)(param_1,iVar2);
    if (iVar1 == 0) {
      iVar3 = *(int *)(param_1 + 0x4a0) + *(int *)(param_1 + 0x498);
      (*(code *)(PTR_LAB_005613c8 + 0x32dc))(iVar3,local_1c,0xd,param_1);
      *(undefined1 *)(iVar3 + 9) = 1;
      local_20 = 0xb;
      *(undefined1 *)(iVar3 + 10) = 1;
      iVar1 = (*(code *)PTR_IsAtLeastTLSv1_2_00561248)(param_1);
      if (iVar1 != 0) {
        (*(code *)(PTR_LAB_005613c8 + 0x818))
                  (*(undefined2 *)(*(int *)(param_1 + 0xc) + 0xee),iVar3 + 0xb);
        (*(code *)PTR_memcpy_005615a4)
                  (iVar3 + 0xd,*(int *)(param_1 + 0xc) + 0xce,
                   *(undefined2 *)(*(int *)(param_1 + 0xc) + 0xee));
        local_20 = *(ushort *)(*(int *)(param_1 + 0xc) + 0xee) + 0xd;
      }
      (*(code *)(PTR_LAB_005613c8 + 0x818))(0,iVar3 + local_20);
      iVar1 = (*(code *)(PTR_LAB_005613c8 + 0x2ea8))(param_1,iVar3,iVar2,0);
      if (iVar1 == 0) {
        *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + iVar2;
        if (*(char *)(param_1 + 0x4ed) == '\0') {
          iVar1 = (*(code *)PTR_SendBuffered_005610a8)(param_1);
        }
        else {
          iVar1 = 0;
        }
      }
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



// ==== SendData @ 004cc44c size=1096

int SendData(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_30;
  
  local_30 = 0;
  if (*(int *)(param_1 + 4) == -0x147) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(char *)(param_1 + 0x4ca) != '\n') {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x47bc);
    iVar1 = (*(code *)PTR_CyaSSL_negotiate_0056142c)(param_1);
    if (iVar1 != 1) {
      return iVar1;
    }
  }
  if (*(int *)(param_1 + 0x498) != 0) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x47e8);
    uVar2 = (*(code *)PTR_SendBuffered_005610a8)(param_1);
    *(undefined4 *)(param_1 + 4) = uVar2;
    if (*(int *)(param_1 + 4) < 0) {
      (*(code *)PTR_FUN_00560fd4)(*(undefined4 *)(param_1 + 4));
      if ((*(int *)(param_1 + 4) == -0x134) && (*(char *)(param_1 + 0x4d8) != '\0')) {
        return 0;
      }
      return *(int *)(param_1 + 4);
    }
    local_30 = *(int *)(param_1 + 0x4b8) + *(int *)(param_1 + 0x4bc);
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x4818);
    if (param_3 < local_30) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x4834);
      *(undefined4 *)(param_1 + 4) = 0xffffff53;
      return *(int *)(param_1 + 4);
    }
  }
  while( true ) {
    iVar1 = (*(code *)(PTR_LAB_005613c8 + 0x680))(param_3 - local_30,0x4000);
    if (local_30 == param_3) {
      return local_30;
    }
    iVar3 = (*(code *)PTR_FUN_00561424)(param_1,iVar1 + 0x66);
    if (iVar3 != 0) {
      *(int *)(param_1 + 4) = iVar3;
      return *(int *)(param_1 + 4);
    }
    iVar3 = (*(code *)(PTR_LAB_005613f4 + -0x4b3c))
                      (param_1,*(int *)(param_1 + 0x4a0) + *(int *)(param_1 + 0x498),iVar1 + 0x66,
                       param_2 + local_30,iVar1,0x17);
    if (iVar3 < 0) {
      return -0x140;
    }
    *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + iVar3;
    iVar3 = (*(code *)PTR_SendBuffered_005610a8)(param_1);
    if (iVar3 < 0) break;
    local_30 = local_30 + iVar1;
    if (*(char *)(param_1 + 0x4ea) == '\x01') {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x4864);
      return local_30;
    }
  }
  (*(code *)PTR_FUN_00560fd4)(iVar3);
  *(int *)(param_1 + 0x4bc) = iVar1;
  *(int *)(param_1 + 0x4b8) = local_30;
  if ((iVar3 == -0x134) && (*(char *)(param_1 + 0x4d8) != '\0')) {
    return 0;
  }
  *(int *)(param_1 + 4) = iVar3;
  return *(int *)(param_1 + 4);
}



// ==== ReceiveData @ 004cc894 size=844

int ReceiveData(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int local_10;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + 0x4890);
  if (*(int *)(param_1 + 4) == -0x143) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 4) == -0x147)) {
    if (*(char *)(param_1 + 0x4ca) != '\n') {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x48d8);
      iVar2 = (*(code *)PTR_CyaSSL_negotiate_0056142c)(param_1);
      if (iVar2 != 1) {
        return iVar2;
      }
    }
    do {
      if (*(int *)(param_1 + 0x4b0) != 0) {
        local_10 = param_3;
        if (*(int *)(param_1 + 0x4b0) <= param_3) {
          local_10 = *(int *)(param_1 + 0x4b0);
        }
        (*(code *)PTR_memcpy_005615a4)(param_2,*(undefined4 *)(param_1 + 0x4b4),local_10);
        if (param_4 == 0) {
          *(int *)(param_1 + 0x4b0) = *(int *)(param_1 + 0x4b0) - local_10;
          *(int *)(param_1 + 0x4b4) = *(int *)(param_1 + 0x4b4) + local_10;
        }
        if ((*(int *)(param_1 + 0x4b0) == 0) && (*(char *)(param_1 + 0x495) != '\0')) {
          (*(code *)PTR_FUN_00561404)(param_1,0);
        }
        (*(code *)PTR_FUN_00560fa0)(PTR_DAT_00560f88 + 0x4890,local_10);
        return local_10;
      }
      uVar1 = (*(code *)PTR_ProcessReply_005610b0)(param_1);
      *(undefined4 *)(param_1 + 4) = uVar1;
    } while (-1 < *(int *)(param_1 + 4));
    (*(code *)PTR_FUN_00560fd4)(*(undefined4 *)(param_1 + 4));
    if (*(int *)(param_1 + 4) == -0x157) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x4904);
      iVar2 = 0;
    }
    else if ((*(int *)(param_1 + 4) == -0x134) &&
            ((*(char *)(param_1 + 0x4d8) != '\0' || (*(char *)(param_1 + 0x4d9) != '\0')))) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x4928);
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 4);
    }
  }
  else {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x48a0);
    iVar2 = *(int *)(param_1 + 4);
  }
  return iVar2;
}



// ==== SendAlert @ 004ccbe0 size=592

int SendAlert(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_20;
  undefined1 local_c;
  undefined1 local_b;
  
  if (*(char *)(param_1 + 0x4e8) == '\0') {
    iVar1 = (*(code *)PTR_FUN_00561424)(param_1,0x68);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x4a0) + *(int *)(param_1 + 0x498);
      local_c = (undefined1)param_2;
      local_b = (undefined1)param_3;
      *(undefined4 *)(param_1 + 0xa38) = param_3;
      *(int *)(param_1 + 0xa3c) = param_2;
      if (param_2 == 2) {
        *(undefined1 *)(param_1 + 0x4d9) = 1;
      }
      if ((*(char *)(param_1 + 0x130) == '\0') || (*(char *)(param_1 + 0x4cb) == '\0')) {
        (*(code *)(PTR_LAB_005613c8 + 0x3194))(iVar1,2,0x15,param_1);
        *(undefined1 *)(iVar1 + 5) = local_c;
        *(undefined1 *)(iVar1 + 6) = local_b;
        local_20 = 7;
      }
      else {
        local_20 = (*(code *)(PTR_LAB_005613f4 + -0x4b3c))(param_1,iVar1,0x68,&local_c,2,0x15);
      }
      if (local_20 < 0) {
        iVar1 = -0x140;
      }
      else {
        *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + local_20;
        *(undefined1 *)(param_1 + 0x4e8) = 1;
        iVar1 = (*(code *)PTR_SendBuffered_005610a8)(param_1);
      }
    }
  }
  else {
    iVar1 = (*(code *)PTR_SendBuffered_005610a8)(param_1);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x4e8) = 0;
    }
  }
  return iVar1;
}



// ==== SetErrorString @ 004cd4d8 size=128

void SetErrorString(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_CyaSSL_ERR_reason_error_string_00561434)(param_1);
  (*(code *)PTR_strncpy_00561528)(param_2,uVar1,0x50);
  return;
}



// ==== GetCipherNames @ 004cd558 size=56

undefined * GetCipherNames(void)

{
  return PTR_DAT_0056098c + -0xc24;
}



// ==== GetCipherNamesSize @ 004cd590 size=40

undefined4 GetCipherNamesSize(void)

{
  return 7;
}



// ==== SetCipherList @ 004cd5b8 size=1192

int SetCipherList(undefined4 *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  char *local_5c;
  int local_58;
  undefined1 auStack_48 [60];
  
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  iVar1 = (*(code *)PTR_GetCipherNamesSize_00560fb4)();
  if ((param_1 == (undefined4 *)0x0) || (param_2 == (char *)0x0)) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x5bcc);
    local_70 = 0;
  }
  else if ((*param_2 == '\0') ||
          (iVar2 = (*(code *)PTR_strncmp_005615d4)(param_2,PTR_DAT_00560f88 + 0x5bec,3),
          local_5c = param_2, iVar2 == 0)) {
    local_70 = 1;
  }
  else {
    do {
      iVar2 = (*(code *)PTR_strchr_005615dc)(local_5c,0x3a);
      if (iVar2 == 0) {
        iVar3 = (*(code *)PTR_strlen_00561504)(local_5c);
      }
      else {
        iVar3 = iVar2 - (int)local_5c;
      }
      iVar3 = (*(code *)(PTR_LAB_005613c8 + 0x680))(0x31,iVar3);
      (*(code *)PTR_strncpy_00561528)(auStack_48,local_5c,iVar3);
      if (iVar3 == 0x31) {
        iVar3 = 0x30;
      }
      auStack_48[iVar3] = 0;
      for (local_58 = 0; local_58 < iVar1; local_58 = local_58 + 1) {
        iVar3 = (*(code *)PTR_strncmp_005615d4)
                          (auStack_48,*(undefined4 *)(PTR_DAT_0056098c + local_58 * 4 + -0xc24),0x31
                          );
        if (iVar3 == 0) {
          iVar3 = (*(code *)PTR_strstr_005615ec)(auStack_48,PTR_DAT_00560f88 + 0x5bf0);
          if (iVar3 == 0) {
            iVar3 = (*(code *)PTR_strstr_005615ec)(auStack_48,PTR_DAT_00560f88 + 0x5bf8);
            if (iVar3 == 0) {
              iVar3 = (*(code *)PTR_strstr_005615ec)(auStack_48,PTR_DAT_00560f88 + 0x5bfc);
              if (iVar3 == 0) {
                uVar4 = 0;
              }
              else {
                uVar4 = 0xc0;
              }
            }
            else {
              uVar4 = 0xc0;
            }
          }
          else {
            uVar4 = 0xcc;
          }
          *(undefined1 *)((int)param_1 + local_6c + 4) = uVar4;
          *(char *)((int)param_1 + local_6c + 5) =
               (char)*(undefined4 *)(PTR_DAT_0056098c + local_58 * 4 + 0x690);
          if ((local_64 == 0) &&
             (iVar3 = (*(code *)PTR_strstr_005615ec)(auStack_48,PTR_DAT_00560f88 + 0x5c00),
             iVar3 != 0)) {
            local_64 = 1;
          }
          else {
            iVar3 = (*(code *)PTR_strstr_005615ec)(auStack_48,PTR_DAT_00560f88 + 0x5c08);
            if (iVar3 == 0) {
              if ((local_68 == 0) &&
                 (iVar3 = (*(code *)PTR_strstr_005615ec)(auStack_48,PTR_DAT_00560f88 + 0x5c0c),
                 iVar3 == 0)) {
                local_68 = 1;
              }
            }
            else {
              local_60 = 1;
            }
          }
          local_70 = 1;
          local_6c = local_6c + 2;
          break;
        }
      }
      local_5c = (char *)(iVar2 + 1);
    } while (iVar2 != 0);
    if (local_70 != 0) {
      *param_1 = 1;
      *(short *)(param_1 + 0x33) = (short)local_6c;
      (*(code *)(PTR_LAB_005613c8 + 0x11e8))(param_1,local_64,local_68,local_60);
    }
  }
  return local_70;
}



// ==== SendClientHello @ 004cdb90 size=1928

int SendClientHello(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  if (*(char *)(param_1 + 0x4d3) == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)*(byte *)(param_1 + 0x514);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x5c10);
    iVar4 = -0x173;
  }
  else {
    local_30 = *(ushort *)(*(int *)(param_1 + 0xc) + 0xcc) + uVar3 + 0x27;
    iVar4 = (*(code *)PTR_IsAtLeastTLSv1_2_00561248)(param_1);
    if ((iVar4 != 0) && (*(short *)(*(int *)(param_1 + 0xc) + 0xee) != 0)) {
      local_30 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + 0xee) + local_30 + 8;
    }
    local_28 = local_30 + 9;
    if (*(char *)(param_1 + 0x130) != '\0') {
      local_28 = local_30 + 0x6f;
    }
    iVar4 = (*(code *)PTR_FUN_00561424)(param_1,local_28);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x4a0) + *(int *)(param_1 + 0x498);
      (*(code *)(PTR_LAB_005613c8 + 0x32dc))(iVar4,local_30,1,param_1);
      *(undefined1 *)(iVar4 + 9) = *(undefined1 *)(param_1 + 8);
      *(undefined1 *)(iVar4 + 10) = *(undefined1 *)(param_1 + 9);
      *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_1 + 8);
      if (*(char *)(param_1 + 0x4dc) == '\0') {
        iVar1 = (*(code *)PTR_RNG_GenerateBlock_00560f80)
                          (*(undefined4 *)(param_1 + 0x158),iVar4 + 0xb,0x20);
        if (iVar1 != 0) {
          return iVar1;
        }
        (*(code *)PTR_memcpy_005615a4)(*(undefined4 *)(param_1 + 0x4f0),iVar4 + 0xb,0x20);
      }
      local_2c = 0x2c;
      *(char *)(iVar4 + 0x2b) = (char)uVar3;
      if (uVar3 != 0) {
        (*(code *)PTR_memcpy_005615a4)
                  (iVar4 + 0x2c,param_1 + 0x4f4,*(undefined1 *)(param_1 + 0x514));
        local_2c = *(byte *)(param_1 + 0x514) + 0x2c;
      }
      (*(code *)(PTR_LAB_005613c8 + 0x818))
                (*(undefined2 *)(*(int *)(param_1 + 0xc) + 0xcc),iVar4 + local_2c);
      (*(code *)PTR_memcpy_005615a4)
                (iVar4 + local_2c + 2,*(int *)(param_1 + 0xc) + 4,
                 *(undefined2 *)(*(int *)(param_1 + 0xc) + 0xcc));
      iVar1 = local_2c + 2 + (uint)*(ushort *)(*(int *)(param_1 + 0xc) + 0xcc);
      *(undefined1 *)(iVar4 + iVar1) = 1;
      if (*(char *)(param_1 + 0x4de) == '\0') {
        *(undefined1 *)(iVar4 + iVar1 + 1) = 0;
      }
      else {
        *(undefined1 *)(iVar4 + iVar1 + 1) = 0xdd;
      }
      local_2c = iVar1 + 2;
      iVar2 = (*(code *)PTR_IsAtLeastTLSv1_2_00561248)(param_1);
      if ((iVar2 != 0) && (*(short *)(*(int *)(param_1 + 0xc) + 0xee) != 0)) {
        (*(code *)(PTR_LAB_005613c8 + 0x818))
                  (*(short *)(*(int *)(param_1 + 0xc) + 0xee) + 6,iVar4 + local_2c);
        (*(code *)(PTR_LAB_005613c8 + 0x818))(0xd,iVar4 + iVar1 + 4);
        (*(code *)(PTR_LAB_005613c8 + 0x818))
                  (*(short *)(*(int *)(param_1 + 0xc) + 0xee) + 2,iVar4 + iVar1 + 6);
        (*(code *)(PTR_LAB_005613c8 + 0x818))
                  (*(undefined2 *)(*(int *)(param_1 + 0xc) + 0xee),iVar4 + iVar1 + 8);
        local_2c = iVar1 + 10;
        for (local_24 = 0; local_24 < (int)(uint)*(ushort *)(*(int *)(param_1 + 0xc) + 0xee);
            local_24 = local_24 + 1) {
          *(undefined1 *)(iVar4 + local_2c) =
               *(undefined1 *)(*(int *)(param_1 + 0xc) + local_24 + 0xce);
          local_2c = local_2c + 1;
        }
      }
      if (*(char *)(param_1 + 0x130) == '\0') {
        iVar4 = (*(code *)(PTR_LAB_005613c8 + 0x2ea8))(param_1,iVar4,local_28,0);
        if (iVar4 != 0) {
          return iVar4;
        }
      }
      else {
        local_2c = local_2c + -5;
        iVar1 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(local_2c);
        if (iVar1 == 0) {
          return -0x7d;
        }
        (*(code *)PTR_memcpy_005615a4)(iVar1,iVar4 + 5,local_2c);
        local_28 = (*(code *)(PTR_LAB_005613f4 + -0x4b3c))
                             (param_1,iVar4,local_28,iVar1,local_2c,0x16);
        if (iVar1 != 0) {
          (*(code *)PTR_CyaSSL_Free_00560f84)(iVar1);
        }
        if (local_28 < 0) {
          return local_28;
        }
      }
      *(undefined1 *)(param_1 + 0x4c9) = 7;
      *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + local_28;
      iVar4 = (*(code *)PTR_SendBuffered_005610a8)(param_1);
    }
  }
  return iVar4;
}



// ==== VerifyClientSuite @ 004ceb90 size=260

bool VerifyClientSuite(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  
  uVar1 = *(undefined1 *)(param_1 + 0x4c6);
  uVar2 = *(undefined1 *)(param_1 + 0x4c7);
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + 0x5db8);
  iVar3 = (*(code *)(PTR_LAB_005613c8 + 0x478c))(uVar1,uVar2,4);
  if (iVar3 != 0) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x5dcc);
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x5ddc);
  }
  return iVar3 == 0;
}



// ==== SendClientKeyExchange @ 004cf13c size=1420

uint SendClientKeyExchange(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_238;
  int local_234;
  uint local_230;
  uint local_22c;
  int local_228;
  undefined1 auStack_20c [516];
  
  local_238 = 0;
  if (*(char *)(param_1 + 0x33) == '\x01') {
    local_230 = (*(code *)PTR_RNG_GenerateBlock_00560f80)
                          (*(undefined4 *)(param_1 + 0x158),*(int *)(param_1 + 0x4f0) + 0x61,0x30);
    if (local_230 == 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x4f0) + 0x61) = *(undefined1 *)(param_1 + 10);
      *(undefined1 *)(*(int *)(param_1 + 0x4f0) + 0x62) = *(undefined1 *)(param_1 + 0xb);
      *(undefined4 *)(*(int *)(param_1 + 0x4f0) + 0x294) = 0x30;
      if (*(char *)(param_1 + 0x574) == '\0') {
        local_230 = 0xfffffec4;
      }
      else {
        uVar1 = (*(code *)PTR_RsaPublicEncrypt_00561444)
                          (*(int *)(param_1 + 0x4f0) + 0x61,0x30,auStack_20c,0x200,
                           *(undefined4 *)(param_1 + 0x570),*(undefined4 *)(param_1 + 0x158));
        local_230 = uVar1;
        if (0 < (int)uVar1) {
          local_230 = 0;
          local_238 = uVar1;
        }
        if (local_230 == 0) {
          local_228 = 0;
          if ((*(char *)(param_1 + 0x4d5) != '\0') || (*(char *)(param_1 + 0x33) == '\x02')) {
            local_228 = 2;
          }
          if ((*(char *)(param_1 + 0x33) == '\a') || (*(char *)(param_1 + 0x33) == '\x05')) {
            local_228 = 0;
          }
          local_22c = local_238 + local_228 + 9;
          local_234 = 9;
          if (*(char *)(param_1 + 0x130) != '\0') {
            local_22c = local_238 + local_228 + 0x6f;
          }
          uVar1 = (*(code *)PTR_FUN_00561424)(param_1,local_22c);
          if (uVar1 != 0) {
            return uVar1;
          }
          iVar3 = *(int *)(param_1 + 0x4a0) + *(int *)(param_1 + 0x498);
          (*(code *)(PTR_LAB_005613c8 + 0x32dc))(iVar3,local_238 + local_228,0x10,param_1);
          if (local_228 != 0) {
            (*(code *)(PTR_LAB_005613c8 + 0x818))(local_238 & 0xffff,iVar3 + 9);
            local_234 = 0xb;
          }
          (*(code *)PTR_memcpy_005615a4)(iVar3 + local_234,auStack_20c,local_238);
          if (*(char *)(param_1 + 0x130) == '\0') {
            uVar1 = (*(code *)(PTR_LAB_005613c8 + 0x2ea8))(param_1,iVar3,local_22c,0);
            if (uVar1 != 0) {
              return uVar1;
            }
          }
          else {
            iVar4 = local_234 + local_238 + -5;
            iVar2 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(iVar4);
            if (iVar2 == 0) {
              return 0xffffff83;
            }
            (*(code *)PTR_memcpy_005615a4)(iVar2,iVar3 + 5,iVar4);
            local_22c = (*(code *)(PTR_LAB_005613f4 + -0x4b3c))
                                  (param_1,iVar3,local_22c,iVar2,iVar4,0x16);
            if (iVar2 != 0) {
              (*(code *)PTR_CyaSSL_Free_00560f84)(iVar2);
            }
            if ((int)local_22c < 0) {
              return local_22c;
            }
          }
          *(uint *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + local_22c;
          if (*(char *)(param_1 + 0x4ed) == '\0') {
            local_230 = (*(code *)PTR_SendBuffered_005610a8)(param_1);
          }
          else {
            local_230 = 0;
          }
        }
        if ((local_230 == 0) || (local_230 == 0xfffffeb9)) {
          uVar1 = (*(code *)PTR_MakeMasterSecret_00561448)(param_1);
          if (uVar1 != 0) {
            local_230 = uVar1;
          }
          *(undefined1 *)(param_1 + 0x4c9) = 8;
        }
        (*(code *)PTR_memset_00561588)
                  (*(int *)(param_1 + 0x4f0) + 0x61,0,
                   *(undefined4 *)(*(int *)(param_1 + 0x4f0) + 0x294));
        *(undefined4 *)(*(int *)(param_1 + 0x4f0) + 0x294) = 0;
      }
    }
  }
  else {
    local_230 = 0xffffff7b;
  }
  return local_230;
}



// ==== SendCertificateVerify @ 004cf6c8 size=1656

/* WARNING: Removing unreachable block (ram,0x004cf910) */

int SendCertificateVerify(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int local_2e0;
  int local_2dc;
  undefined1 *local_2d0;
  undefined4 local_2cc;
  int local_2c8;
  int local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_298;
  undefined1 auStack_294 [136];
  undefined1 auStack_20c [516];
  
  local_2e0 = 0x400;
  local_298 = 0;
  if (*(char *)(param_1 + 0x4d2) == '\x02') {
    return 0;
  }
  if (*(char *)(param_1 + 0x130) != '\0') {
    local_2e0 = 0x466;
  }
  iVar2 = (*(code *)PTR_FUN_00561424)(param_1,local_2e0);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar4 = *(int *)(param_1 + 0x4a0) + *(int *)(param_1 + 0x498);
  iVar2 = (*(code *)(PTR_LAB_005613f4 + -0x4e94))(param_1,param_1 + 0x3cc);
  if (iVar2 != 0) {
    return iVar2;
  }
  local_2dc = (*(code *)PTR_InitRsaKey_00561068)(auStack_294,*(undefined4 *)(param_1 + 0x57c));
  bVar1 = local_2dc == 0;
  if (bVar1) {
    local_2dc = (*(code *)PTR_RsaPrivateKeyDecode_0056106c)
                          (*(undefined4 *)(param_1 + 0x44c),&local_298,auStack_294,
                           *(undefined4 *)(param_1 + 0x448));
  }
  iVar2 = local_2dc;
  if (local_2dc == 0) {
    uVar3 = (*(code *)PTR_RsaEncryptSize_0056144c)(auStack_294);
    puVar5 = (undefined1 *)(iVar4 + 9);
    local_2d0 = (undefined1 *)(param_1 + 0x3cc);
    local_2cc = 0x24;
    local_2c8 = 0;
    iVar2 = (*(code *)PTR_IsAtLeastTLSv1_2_00561248)(param_1);
    if (iVar2 != 0) {
      *puVar5 = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0xf0);
      *(undefined1 *)(iVar4 + 10) = 1;
      local_2c8 = 2;
    }
    iVar2 = (*(code *)PTR_IsAtLeastTLSv1_2_00561248)(param_1);
    if (iVar2 != 0) {
      local_2c4 = param_1 + 0x3dc;
      local_2c0 = 0x14;
      local_2bc = 0x58;
      if (*(char *)(*(int *)(param_1 + 0xc) + 0xf0) == '\x02') {
        local_2c4 = param_1 + 0x3dc;
        local_2bc = 0x58;
        local_2c0 = 0x14;
      }
      else if (*(char *)(*(int *)(param_1 + 0xc) + 0xf0) == '\x04') {
        local_2c4 = param_1 + 0x3f0;
        local_2bc = 0x19e;
        local_2c0 = 0x20;
      }
      else if (*(char *)(*(int *)(param_1 + 0xc) + 0xf0) == '\x05') {
        local_2c4 = param_1 + 0x410;
        local_2bc = 0x19f;
        local_2c0 = 0x30;
      }
      local_2cc = (*(code *)PTR_EncodeSignature_00561234)(auStack_20c,local_2c4,local_2c0,local_2bc)
      ;
      local_2d0 = auStack_20c;
    }
    (*(code *)(PTR_LAB_005613c8 + 0x818))(uVar3 & 0xffff,puVar5 + local_2c8);
    local_2dc = (*(code *)PTR_RsaSSL_Sign_00561238)
                          (local_2d0,local_2cc,puVar5 + local_2c8 + 2,0x200,auStack_294,
                           *(undefined4 *)(param_1 + 0x158));
    if (0 < local_2dc) {
      local_2dc = 0;
    }
    iVar2 = local_2dc;
    if (local_2dc == 0) {
      (*(code *)(PTR_LAB_005613c8 + 0x32dc))(iVar4,uVar3 + local_2c8 + 2,0xf,param_1);
      local_2e0 = uVar3 + local_2c8 + 0xb;
      if (*(char *)(param_1 + 0x130) == '\0') {
        iVar2 = (*(code *)(PTR_LAB_005613c8 + 0x2ea8))(param_1,iVar4,local_2e0,0);
      }
      else {
        iVar6 = uVar3 + local_2c8 + 6;
        iVar2 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(iVar6);
        if (iVar2 == 0) {
          local_2dc = -0x7d;
        }
        else {
          (*(code *)PTR_memcpy_005615a4)(iVar2,iVar4 + 5,iVar6);
          local_2e0 = (*(code *)(PTR_LAB_005613f4 + -0x4b3c))(param_1,iVar4,0x466,iVar2,iVar6,0x16);
          if (iVar2 != 0) {
            (*(code *)PTR_CyaSSL_Free_00560f84)(iVar2);
          }
          iVar2 = local_2e0;
          if (local_2e0 < 0) goto LAB_004cfc94;
        }
        iVar2 = local_2dc;
      }
    }
  }
LAB_004cfc94:
  local_2dc = iVar2;
  if (bVar1) {
    (*(code *)PTR_FreeRsaKey_00561070)(auStack_294);
  }
  if (local_2dc == 0) {
    *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + local_2e0;
    if (*(char *)(param_1 + 0x4ed) == '\0') {
      local_2dc = (*(code *)PTR_SendBuffered_005610a8)(param_1);
    }
    else {
      local_2dc = 0;
    }
  }
  return local_2dc;
}



// ==== SendServerHello @ 004cfd40 size=932

int SendServerHello(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR_FUN_00561424)(param_1,0x80);
  if (iVar1 == 0) {
    iVar2 = *(int *)(param_1 + 0x4a0) + *(int *)(param_1 + 0x498);
    (*(code *)(PTR_LAB_005613c8 + 0x32dc))(iVar2,0x46,2,param_1);
    *(undefined1 *)(iVar2 + 9) = *(undefined1 *)(param_1 + 8);
    *(undefined1 *)(iVar2 + 10) = *(undefined1 *)(param_1 + 9);
    if ((*(char *)(param_1 + 0x4d3) != '\0') ||
       (iVar1 = (*(code *)PTR_RNG_GenerateBlock_00560f80)
                          (*(undefined4 *)(param_1 + 0x158),*(int *)(param_1 + 0x4f0) + 0x20,0x20),
       iVar1 == 0)) {
      (*(code *)PTR_memcpy_005615a4)(iVar2 + 0xb,*(int *)(param_1 + 0x4f0) + 0x20,0x20);
      *(undefined1 *)(iVar2 + 0x2b) = 0x20;
      if ((*(char *)(param_1 + 0x4d3) != '\0') ||
         (iVar1 = (*(code *)PTR_RNG_GenerateBlock_00560f80)
                            (*(undefined4 *)(param_1 + 0x158),*(int *)(param_1 + 0x4f0) + 0x40,0x20)
         , iVar1 == 0)) {
        (*(code *)PTR_memcpy_005615a4)(iVar2 + 0x2c,*(int *)(param_1 + 0x4f0) + 0x40,0x20);
        *(undefined1 *)(iVar2 + 0x4c) = *(undefined1 *)(param_1 + 0x4c6);
        *(undefined1 *)(iVar2 + 0x4d) = *(undefined1 *)(param_1 + 0x4c7);
        if (*(char *)(param_1 + 0x4de) == '\0') {
          *(undefined1 *)(iVar2 + 0x4e) = 0;
        }
        else {
          *(undefined1 *)(iVar2 + 0x4e) = 0xdd;
        }
        *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + 0x4f;
        iVar1 = (*(code *)(PTR_LAB_005613c8 + 0x2ea8))(param_1,iVar2,0x4f,0);
        if (iVar1 == 0) {
          *(undefined1 *)(param_1 + 0x4c8) = 2;
          if (*(char *)(param_1 + 0x4ed) == '\0') {
            iVar1 = (*(code *)PTR_SendBuffered_005610a8)(param_1);
          }
          else {
            iVar1 = 0;
          }
        }
      }
    }
  }
  return iVar1;
}



// ==== SendServerKeyExchange @ 004d00e4 size=48

undefined4 SendServerKeyExchange(void)

{
  return 0;
}



// ==== VerifyServerSuite @ 004d0114 size=1248

undefined4 VerifyServerSuite(int param_1,ushort param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  
  cVar1 = *(char *)(param_1 + 0x4e3);
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + 0x5dec);
  if (*(int *)(param_1 + 0xc) == 0) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x5e00);
    uVar6 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(*(int *)(param_1 + 0xc) + (uint)param_2 + 4);
    uVar3 = *(undefined1 *)(*(int *)(param_1 + 0xc) + (uint)param_2 + 5);
    cVar4 = *(char *)(param_1 + 0x4e1);
    iVar5 = (*(code *)(PTR_LAB_005613c8 + 0x478c))(uVar2,uVar3,0);
    if ((iVar5 == 0) ||
       ((*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x5e18),
       cVar4 == '\0' && cVar1 == '\0')) {
      iVar5 = (*(code *)(PTR_LAB_005613c8 + 0x478c))(uVar2,uVar3,1);
      if ((iVar5 == 0) ||
         ((*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x5e38),
         *(char *)(param_1 + 0x4e0) != '\0')) {
        iVar5 = (*(code *)(PTR_LAB_005613c8 + 0x478c))(uVar2,uVar3,2);
        if ((iVar5 == 0) ||
           ((*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x5e58),
           *(char *)(param_1 + 0x4e2) != '\0')) {
          iVar5 = (*(code *)(PTR_LAB_005613c8 + 0x478c))(uVar2,uVar3,3);
          if ((iVar5 == 0) ||
             ((*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x5e7c),
             *(char *)(param_1 + 0x4e3) != '\0')) {
            iVar5 = (*(code *)(PTR_LAB_005613c8 + 0x478c))(uVar2,uVar3,4);
            if (iVar5 == 0) {
              iVar5 = (*(code *)(PTR_LAB_005613c8 + 0x478c))(uVar2,uVar3,5);
              if ((iVar5 == 0) ||
                 ((*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x5ea8),
                 *(char *)(param_1 + 0x4e1) != '\0')) {
                iVar5 = (*(code *)(PTR_LAB_005613c8 + 0x478c))(uVar2,uVar3,6);
                if ((iVar5 == 0) ||
                   (((*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x5ec8),
                    *(char *)(param_1 + 0x4cc) != '\0' || (*(char *)(param_1 + 0x4e2) != '\x01'))))
                {
                  uVar6 = 1;
                }
                else {
                  (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x5ee0);
                  uVar6 = 0;
                }
              }
              else {
                (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x5eb8);
                uVar6 = 0;
              }
            }
            else {
              (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x5dcc);
              (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x5ddc);
              uVar6 = 0;
            }
          }
          else {
            (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x5e90);
            uVar6 = 0;
          }
        }
        else {
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x5e68);
          uVar6 = 0;
        }
      }
      else {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x5e48);
        uVar6 = 0;
      }
    }
    else {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x5e28);
      uVar6 = 0;
    }
  }
  return uVar6;
}



// ==== MatchSuite @ 004d05f4 size=640

int MatchSuite(int param_1,int param_2)

{
  int iVar1;
  ushort local_10;
  ushort local_e;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + 0x5efc);
  if ((*(short *)(param_2 + 0xcc) == 0) || ((*(ushort *)(param_2 + 0xcc) & 1) != 0)) {
    iVar1 = -0x1f5;
  }
  else if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = -0x173;
  }
  else {
    for (local_10 = 0; local_10 < *(ushort *)(*(int *)(param_1 + 0xc) + 0xcc);
        local_10 = local_10 + 2) {
      for (local_e = 0; local_e < *(ushort *)(param_2 + 0xcc); local_e = local_e + 2) {
        if ((*(char *)(*(int *)(param_1 + 0xc) + (uint)local_10 + 4) ==
             *(char *)(param_2 + (uint)local_e + 4)) &&
           (*(char *)(*(int *)(param_1 + 0xc) + (uint)local_10 + 5) ==
            *(char *)(param_2 + (uint)local_e + 5))) {
          iVar1 = (*(code *)(PTR_LAB_005613f4 + 0x114))(param_1,local_10);
          if (iVar1 != 0) {
            (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x5f08);
            *(undefined1 *)(param_1 + 0x4c6) =
                 *(undefined1 *)(*(int *)(param_1 + 0xc) + (uint)local_10 + 4);
            *(undefined1 *)(param_1 + 0x4c7) =
                 *(undefined1 *)(*(int *)(param_1 + 0xc) + (uint)local_10 + 5);
            iVar1 = (*(code *)PTR_SetCipherSpecs_00561438)(param_1);
            if (iVar1 != 0) {
              return iVar1;
            }
            (*(code *)(PTR_LAB_005613f4 + -0x25a0))
                      (param_1,param_2 + 0xce,*(undefined2 *)(param_2 + 0xee));
            return 0;
          }
          (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x5f20);
        }
      }
    }
    iVar1 = -0x1f5;
  }
  return iVar1;
}



// ==== SendServerHelloDone @ 004d17fc size=324

int SendServerHelloDone(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_00561424)(param_1,9);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4a0) + *(int *)(param_1 + 0x498);
    (*(code *)(PTR_LAB_005613c8 + 0x32dc))(iVar1,0,0xe,param_1);
    iVar1 = (*(code *)(PTR_LAB_005613c8 + 0x2ea8))(param_1,iVar1,9,0);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x4c8) = 5;
      *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + 9;
      iVar1 = (*(code *)PTR_SendBuffered_005610a8)(param_1);
    }
  }
  return iVar1;
}



// ==== EmbedReceive @ 004d1f98 size=748

int EmbedReceive(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *param_4;
  uVar1 = (*(code *)PTR_recv_005615a0)(uVar3,param_2,param_3,*(undefined4 *)(param_1 + 0x140));
  iVar2 = (*(code *)(PTR_LAB_005613f4 + 0x1f10))(uVar1,uVar3);
  if (iVar2 < 0) {
    iVar2 = (*(code *)(PTR_LAB_005613f4 + 8000))();
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x6148);
    if ((iVar2 == 0xb) || (iVar2 == 0xb)) {
      iVar2 = (*(code *)PTR_CyaSSL_dtls_00561450)(param_1);
      if ((iVar2 == 0) ||
         (iVar2 = (*(code *)PTR_CyaSSL_get_using_nonblock_00561454)(param_1), iVar2 != 0)) {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x615c);
        iVar2 = -2;
      }
      else {
        (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x616c);
        iVar2 = -6;
      }
    }
    else if (iVar2 == 0x83) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x6180);
      iVar2 = -3;
    }
    else if (iVar2 == 4) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x6198);
      iVar2 = -4;
    }
    else if (iVar2 == 0x92) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x61b0);
      iVar2 = -2;
    }
    else if (iVar2 == 0x82) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x61c8);
      iVar2 = -5;
    }
    else {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x61e0);
      iVar2 = -1;
    }
  }
  else if (iVar2 == 0) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x61f4);
    iVar2 = -5;
  }
  return iVar2;
}



// ==== EmbedSend @ 004d2284 size=520

int EmbedSend(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_send_005614e8)(*param_4,param_2,param_3,*(undefined4 *)(param_1 + 0x144));
  if (iVar1 < 0) {
    iVar1 = (*(code *)(PTR_LAB_005613f4 + 8000))();
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x6214);
    if ((iVar1 == 0xb) || (iVar1 == 0xb)) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x6228);
      iVar1 = -2;
    }
    else if (iVar1 == 0x83) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x6180);
      iVar1 = -3;
    }
    else if (iVar1 == 4) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x6198);
      iVar1 = -4;
    }
    else if (iVar1 == 0x20) {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x6238);
      iVar1 = -5;
    }
    else {
      (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x61e0);
      iVar1 = -1;
    }
  }
  return iVar1;
}



// ==== SetCipherSpecs @ 004d2660 size=1440

undefined4 SetCipherSpecs(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((*(char *)(param_1 + 0x4cc) == '\x01') &&
     (iVar1 = (*(code *)PTR_VerifyClientSuite_00561458)(param_1), iVar1 != 1)) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x6278);
    return 0xfffffe0c;
  }
  if (*(char *)(param_1 + 0x4c6) == -0x34) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x62a8);
    uVar2 = 0xfffffe0c;
  }
  else if (*(char *)(param_1 + 0x4c6) == -0x40) {
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x62d8);
    uVar2 = 0xfffffe0c;
  }
  else if ((*(char *)(param_1 + 0x4c6) == -0x40) || (*(char *)(param_1 + 0x4c6) == -0x34)) {
    if ((*(char *)(param_1 + 8) == '\x03') && (*(char *)(param_1 + 9) != '\0')) {
      *(undefined1 *)(param_1 + 0x4d5) = 1;
      *(undefined **)(param_1 + 0x578) = PTR_FUN_0056145c;
      if (1 < *(byte *)(param_1 + 9)) {
        *(undefined1 *)(param_1 + 0x4d6) = 1;
      }
    }
    uVar2 = 0;
  }
  else {
    uVar3 = *(byte *)(param_1 + 0x4c7) - 4;
    if (uVar3 < 0x3a) {
                    /* WARNING: Could not emulate address calculation at 0x004d27a8 */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_00560f88 + uVar3 * 4 + 0x6334)))();
      return uVar2;
    }
    (*(code *)PTR_CYASSL_MSG_00560f8c)(PTR_DAT_00560f88 + 0x6308);
    uVar2 = 0xfffffe0c;
  }
  return uVar2;
}



// ==== SetKeysSide @ 004d3610 size=316

undefined4 SetKeysSide(int param_1,int param_2)

{
  undefined4 uVar1;
  int local_20;
  int local_1c;
  
  local_20 = 0;
  local_1c = 0;
  if (param_2 == 2) {
    local_1c = param_1 + 0x20;
  }
  else if (param_2 == 3) {
    local_20 = param_1 + 0x10;
    local_1c = param_1 + 0x20;
  }
  else {
    if (param_2 != 1) {
      return 0xffffff53;
    }
    local_20 = param_1 + 0x10;
  }
  uVar1 = (*(code *)(PTR_LAB_005613f4 + 0x2dd8))
                    (local_20,local_1c,param_1 + 0x40,param_1 + 0x30,
                     *(undefined1 *)(param_1 + 0x4cc),*(undefined4 *)(param_1 + 0x57c),0xfffffffe);
  return uVar1;
}



// ==== StoreKeys @ 004d374c size=556

undefined4 StoreKeys(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 local_18;
  
  local_18 = 0;
  if (*(char *)(param_1 + 0x31) != '\x02') {
    uVar1 = (uint)*(byte *)(param_1 + 0x35);
    (*(code *)PTR_memcpy_005615a4)(param_1 + 0x40,param_2,uVar1);
    (*(code *)PTR_memcpy_005615a4)(param_1 + 0x80,param_2 + uVar1,uVar1);
    local_18 = uVar1 * 2;
  }
  uVar1 = (uint)*(ushort *)(param_1 + 0x38);
  (*(code *)PTR_memcpy_005615a4)(param_1 + 0xc0,param_2 + local_18,uVar1);
  (*(code *)PTR_memcpy_005615a4)(param_1 + 0xe0,param_2 + local_18 + uVar1,uVar1);
  iVar2 = local_18 + uVar1 + uVar1;
  uVar1 = (uint)*(ushort *)(param_1 + 0x3a);
  (*(code *)PTR_memcpy_005615a4)(param_1 + 0x100,param_2 + iVar2,uVar1);
  (*(code *)PTR_memcpy_005615a4)(param_1 + 0x110,param_2 + iVar2 + uVar1,uVar1);
  return 0;
}



// ==== DeriveKeys @ 004d3978 size=868

/* WARNING: Removing unreachable block (ram,0x004d39d8) */

int DeriveKeys(int param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int local_220;
  int local_21c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined1 auStack_1f4 [48];
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined1 uStack_1b0;
  undefined1 auStack_1af [48];
  undefined1 auStack_17f [32];
  undefined1 auStack_15f [39];
  undefined1 auStack_138 [112];
  undefined1 auStack_c8 [92];
  undefined1 auStack_6c [100];
  
  bVar1 = *(byte *)(param_1 + 0x35);
  uVar2 = *(ushort *)(param_1 + 0x38);
  uVar3 = *(ushort *)(param_1 + 0x3a);
  (*(code *)PTR_InitMd5_00561108)(auStack_c8);
  local_21c = (*(code *)PTR_InitSha_00561114)(auStack_6c);
  if (local_21c == 0) {
    (*(code *)PTR_memcpy_005615a4)(auStack_1f4,*(int *)(param_1 + 0x4f0) + 0x261,0x30);
    for (local_220 = 0; local_220 < (int)(((uint)bVar1 + (uint)uVar2 + (uint)uVar3) * 2 + 0xf) >> 4;
        local_220 = local_220 + 1) {
      iVar4 = (*(code *)(PTR_LAB_005613f4 + 0x2c00))(&uStack_1b0,local_220);
      if (iVar4 == 0) {
        local_21c = -0x12e;
        break;
      }
      (*(code *)PTR_memcpy_005615a4)(auStack_1af + local_220,*(int *)(param_1 + 0x4f0) + 0x261,0x30)
      ;
      (*(code *)PTR_memcpy_005615a4)(auStack_17f + local_220,*(int *)(param_1 + 0x4f0) + 0x20,0x20);
      (*(code *)PTR_memcpy_005615a4)(auStack_15f + local_220,*(undefined4 *)(param_1 + 0x4f0),0x20);
      (*(code *)PTR_ShaUpdate_00561118)(auStack_6c,&uStack_1b0,local_220 + 0x71);
      (*(code *)PTR_ShaFinal_0056111c)(auStack_6c,&local_208);
      local_1c4 = local_208;
      local_1c0 = local_204;
      local_1bc = local_200;
      local_1b8 = local_1fc;
      local_1b4 = local_1f8;
      (*(code *)PTR_Md5Update_0056110c)(auStack_c8,auStack_1f4,0x44);
      (*(code *)PTR_Md5Final_00561110)(auStack_c8,auStack_138 + local_220 * 0x10);
    }
    if (local_21c == 0) {
      local_21c = (*(code *)PTR_StoreKeys_00561250)(param_1,auStack_138);
    }
  }
  return local_21c;
}



// ==== MakeMasterSecret @ 004d41d0 size=148

undefined4 MakeMasterSecret(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x4d5) == '\0') {
    uVar1 = (*(code *)(PTR_LAB_005613f4 + 0x3e04))(param_1);
  }
  else {
    uVar1 = (*(code *)PTR_FUN_00561460)(param_1);
  }
  return uVar1;
}



// ==== CTaoCryptGetErrorString @ 004d4270 size=1536

undefined * CTaoCryptGetErrorString(int param_1)

{
  undefined *puVar1;
  
  if (param_1 + 0xd2U < 0x6e) {
                    /* WARNING: Could not emulate address calculation at 0x004d42ac */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined *)
             (*(code *)(&_gp_1 + *(int *)(PTR_DAT_00560f88 + (param_1 + 0xd2U) * 4 + 0x7030)))();
    return puVar1;
  }
  return PTR_DAT_00560f88 + 0x7018;
}



// ==== NmToken @ 004de36c size=1072

int NmToken(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 local_98 [108];
  int local_2c;
  
  if ((*(int *)(param_1 + 0x124) == 0) &&
     (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) < 0xfa))
  {
    FUN_004d9b90();
  }
  if (*(int *)(param_1 + 0xac) != -1) {
    iVar2 = FUN_004d55a8(param_1,&local_2c);
    iVar8 = 0;
    iVar7 = 0;
    do {
      iVar3 = FUN_004d8af4(*(undefined4 *)(param_1 + 0x168),iVar2);
      bVar1 = 100 < iVar8;
      if (iVar3 == 0) {
        if (iVar7 == 0) {
          return 0;
        }
        if ((50000 < iVar7) && ((*(uint *)(param_1 + 0x168) & 0x80000) == 0)) {
          FUN_004d7f58(param_1,0x6e,"NmToken");
          return 0;
        }
        iVar2 = FUN_00519df0(local_98,iVar7);
        return iVar2;
      }
      iVar8 = iVar8 + 1;
      if (((bVar1) && (iVar8 = 0, *(int *)(param_1 + 0x124) == 0)) &&
         (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) <
          0xfa)) {
        FUN_004d9b90(param_1);
      }
      if (local_2c == 1) {
        puVar4 = local_98 + iVar7;
        iVar7 = iVar7 + 1;
        *puVar4 = (char)iVar2;
      }
      else {
        iVar2 = FUN_004d5bc8(local_98 + iVar7,iVar2);
        iVar7 = iVar7 + iVar2;
      }
      iVar2 = *(int *)(param_1 + 0x24);
      if (**(char **)(iVar2 + 0x10) == '\n') {
        *(undefined4 *)(iVar2 + 0x20) = 1;
        *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + 1;
      }
      else {
        *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
      }
      pcVar6 = *(char **)(iVar2 + 0x10) + local_2c;
      *(char **)(iVar2 + 0x10) = pcVar6;
      if (*pcVar6 == '%') {
        FUN_004daed4(param_1);
      }
      iVar2 = FUN_004d55a8(param_1,&local_2c);
      if (iVar2 == 0) {
        if ((*(int *)(param_1 + 0x124) == 0) &&
           (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) <
            0xfa)) {
          FUN_004d9b90(param_1);
        }
        if (*(int *)(param_1 + 0xac) == -1) {
          return 0;
        }
        iVar2 = FUN_004d55a8(param_1,&local_2c);
        iVar8 = 0;
      }
    } while (iVar7 < 100);
    iVar9 = iVar7 << 1;
    iVar3 = (*DAT_00560754)(iVar9);
    if (iVar3 == 0) {
      FUN_004d4d84(param_1,0);
    }
    else {
      memcpy(iVar3,local_98,iVar7);
      while( true ) {
        iVar5 = FUN_004d8af4(*(undefined4 *)(param_1 + 0x168),iVar2);
        if (iVar5 == 0) {
          *(undefined1 *)(iVar3 + iVar7) = 0;
          return iVar3;
        }
        if (100 < iVar8) break;
        iVar8 = iVar8 + 1;
LAB_004de5f4:
        iVar5 = iVar3;
        if (iVar9 <= iVar7 + 9) {
          if ((iVar9 < 0xc351) || ((*(uint *)(param_1 + 0x168) & 0x80000) != 0)) {
            iVar9 = iVar9 << 1;
            iVar5 = (*DAT_00560750)(iVar3,iVar9);
            if (iVar5 != 0) goto LAB_004de680;
            FUN_004d4d84(param_1,0);
          }
          else {
            FUN_004d7f58(param_1,0x6e,"NmToken");
          }
          goto LAB_004de660;
        }
LAB_004de680:
        if (local_2c == 1) {
          *(undefined1 *)(iVar5 + iVar7) = (char)iVar2;
          iVar7 = iVar7 + 1;
        }
        else {
          iVar2 = FUN_004d5bc8((undefined1 *)(iVar5 + iVar7),iVar2);
          iVar7 = iVar7 + iVar2;
        }
        iVar2 = *(int *)(param_1 + 0x24);
        if (**(char **)(iVar2 + 0x10) == '\n') {
          *(undefined4 *)(iVar2 + 0x20) = 1;
          *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + 1;
        }
        else {
          *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
        }
        pcVar6 = *(char **)(iVar2 + 0x10) + local_2c;
        *(char **)(iVar2 + 0x10) = pcVar6;
        if (*pcVar6 == '%') {
          FUN_004daed4(param_1);
        }
        iVar2 = FUN_004d55a8(param_1,&local_2c);
        iVar3 = iVar5;
      }
      if ((*(int *)(param_1 + 0x124) == 0) &&
         (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) <
          0xfa)) {
        FUN_004d9b90(param_1);
      }
      iVar8 = 0;
      if (*(int *)(param_1 + 0xac) != -1) goto LAB_004de5f4;
LAB_004de660:
      (*DAT_0056075c)(iVar3);
    }
  }
  return 0;
}



// ==== SystemLiteral @ 004dfe60 size=1172

int SystemLiteral(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int local_38 [2];
  int local_30;
  
  uVar10 = *(undefined4 *)(param_1 + 0xac);
  if (*(int *)(param_1 + 0x124) == 0) {
    iVar3 = *(int *)(param_1 + 0x24);
    if ((500 < *(int *)(iVar3 + 0x10) - *(int *)(iVar3 + 0xc)) &&
       (*(int *)(iVar3 + 0x14) - *(int *)(iVar3 + 0x10) < 500)) {
      FUN_004d9cc0();
    }
  }
  cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
  if (cVar1 == '\"') {
    FUN_004d51c0(param_1);
    local_30 = 0x22;
  }
  else {
    if (cVar1 != '\'') {
      FUN_004d7f58(param_1,0x2b,0);
      return 0;
    }
    FUN_004d51c0();
    local_30 = 0x27;
  }
  iVar3 = (*DAT_00560754)(100);
  if (iVar3 == 0) {
    FUN_004d4d84(param_1,0);
    return 0;
  }
  *(undefined4 *)(param_1 + 0xac) = 0xd;
  iVar4 = FUN_004d55a8(param_1,local_38);
  iVar9 = 0;
  iVar8 = 100;
  iVar7 = 0;
  do {
    if (iVar4 < 0x100) {
      bVar2 = true;
      if ((1 < iVar4 - 9U) && (bVar2 = true, iVar4 != 0xd)) {
        bVar2 = 0x1f < iVar4;
      }
    }
    else {
      bVar2 = true;
      if ((0xd6ff < iVar4 - 0x100U) && (0x1ffd < iVar4 - 0xe000U)) {
        bVar2 = iVar4 - 0x10000U < 0x100000;
      }
    }
    if ((!bVar2) || (iVar4 == local_30)) {
      *(undefined1 *)(iVar3 + iVar7) = 0;
      *(undefined4 *)(param_1 + 0xac) = uVar10;
      if (iVar4 < 0x100) {
        if (iVar4 - 9U < 2) {
          bVar2 = false;
        }
        else {
          bVar2 = iVar4 != 0xd && iVar4 < 0x20;
        }
      }
      else {
        bVar2 = false;
        if ((0xd6ff < iVar4 - 0x100U) && (bVar2 = false, 0x1ffd < iVar4 - 0xe000U)) {
          bVar2 = 0xfffff < iVar4 - 0x10000U;
        }
      }
      if (!bVar2) {
        FUN_004d51c0(param_1);
        return iVar3;
      }
      FUN_004d7f58(param_1,0x2c,0);
      return iVar3;
    }
    iVar5 = iVar3;
    if (iVar8 <= iVar7 + 5) {
      if ((50000 < iVar8) && ((*(uint *)(param_1 + 0x168) & 0x80000) == 0)) {
        FUN_004d7f58(param_1,0x6e,"SystemLiteral");
        (*DAT_0056075c)(iVar3);
LAB_004e015c:
        *(undefined4 *)(param_1 + 0xac) = uVar10;
        return 0;
      }
      iVar8 = iVar8 << 1;
      iVar5 = (*DAT_00560750)(iVar3,iVar8);
      if (iVar5 == 0) {
        (*DAT_0056075c)(iVar3);
        FUN_004d4d84(param_1,0);
        goto LAB_004e015c;
      }
    }
    iVar9 = iVar9 + 1;
    if (0x32 < iVar9) {
      if ((*(int *)(param_1 + 0x124) == 0) &&
         (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) <
          0xfa)) {
        FUN_004d9b90(param_1);
        iVar3 = *(int *)(param_1 + 0xac);
      }
      else {
        iVar3 = *(int *)(param_1 + 0xac);
      }
      iVar9 = 0;
      if (iVar3 == -1) {
        (*DAT_0056075c)(iVar5);
        return 0;
      }
    }
    if (local_38[0] == 1) {
      *(undefined1 *)(iVar5 + iVar7) = (char)iVar4;
      iVar7 = iVar7 + 1;
    }
    else {
      iVar3 = FUN_004d5bc8((undefined1 *)(iVar5 + iVar7),iVar4);
      iVar7 = iVar7 + iVar3;
    }
    iVar3 = *(int *)(param_1 + 0x24);
    if (**(char **)(iVar3 + 0x10) == '\n') {
      *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
      iVar4 = 1;
    }
    else {
      iVar4 = *(int *)(iVar3 + 0x20) + 1;
    }
    *(int *)(iVar3 + 0x20) = iVar4;
    pcVar6 = *(char **)(iVar3 + 0x10) + local_38[0];
    *(char **)(iVar3 + 0x10) = pcVar6;
    if (*pcVar6 == '%') {
      FUN_004daed4(param_1);
    }
    iVar4 = FUN_004d55a8(param_1,local_38);
    iVar3 = iVar5;
    if (iVar4 == 0) {
      if (*(int *)(param_1 + 0x124) == 0) {
        if (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) <
            0xfa) {
          FUN_004d9b90(param_1);
        }
        if (*(int *)(param_1 + 0x124) == 0) {
          iVar4 = *(int *)(param_1 + 0x24);
          if ((500 < *(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc)) &&
             (*(int *)(iVar4 + 0x14) - *(int *)(iVar4 + 0x10) < 500)) {
            FUN_004d9cc0(param_1);
          }
        }
      }
      iVar4 = FUN_004d55a8(param_1,local_38);
    }
  } while( true );
}



// ==== external @ 004e3a70 size=2116

void external(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  code *pcVar13;
  int local_40;
  int local_3c;
  int local_38 [2];
  int local_30;
  
  iVar8 = param_1[9];
  pcVar10 = *(char **)(iVar8 + 0x10);
  if ((((((*pcVar10 == '<') && (pcVar10[1] == '!')) && (pcVar10[2] == 'A')) &&
       ((pcVar10[3] == 'T' && (pcVar10[4] == 'T')))) && (pcVar10[5] == 'L')) &&
     (((pcVar10[6] == 'I' && (pcVar10[7] == 'S')) && (pcVar10[8] == 'T')))) {
    param_1[0x32] = param_1[0x32] + 9;
    *(char **)(iVar8 + 0x10) = pcVar10 + 9;
    *(int *)(iVar8 + 0x20) = *(int *)(iVar8 + 0x20) + 9;
    if (pcVar10[9] == '%') {
      FUN_004daed4(param_1);
    }
    if ((**(char **)(param_1[9] + 0x10) == '\0') &&
       (iVar1 = FUN_004d4fc4(param_1[9],0xfa), iVar1 < 1)) {
      FUN_004d9ac0(param_1);
    }
    uVar11 = (uint)**(byte **)(param_1[9] + 0x10);
    if (((uVar11 != 0x20) && (1 < uVar11 - 9)) && (uVar11 != 0xd)) {
      FUN_004d7c34(param_1,0x41,"Space required after \'<!ATTLIST\'\n");
    }
    FUN_004db2c0(param_1);
    iVar1 = FUN_004dcb74(param_1);
    if (iVar1 != 0) {
      FUN_004db2c0(param_1);
      if ((param_1[0x49] == 0) && (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)
         ) {
        FUN_004d9b90(param_1);
      }
LAB_004e3c28:
      iVar12 = param_1[9];
      do {
        pcVar10 = *(char **)(iVar12 + 0x10);
        if ((*pcVar10 == '>') || (param_1[0x2b] == -1)) {
LAB_004e4244:
          iVar1 = param_1[9];
          goto LAB_004e4248;
        }
        local_3c = 0;
        if ((param_1[0x49] == 0) && (*(int *)(iVar12 + 0x14) - (int)pcVar10 < 0xfa)) {
          FUN_004d9b90(param_1);
        }
        local_38[0] = 0;
        iVar12 = FUN_004dcb74(param_1);
        if (iVar12 == 0) {
          uVar7 = 0x44;
          pcVar10 = "ATTLIST: no name for Attribute\n";
LAB_004e3d04:
          FUN_004d7c34(param_1,uVar7,pcVar10);
LAB_004e3eac:
          iVar1 = param_1[9];
LAB_004e4248:
          if (**(char **)(iVar1 + 0x10) != '>') {
            return;
          }
          if (iVar8 != iVar1) {
            FUN_004d79e0(param_1,0x5a,
                         "Attribute list declaration doesn\'t start and stop in the same entity\n",0
                         ,0);
          }
          FUN_004d51c0(param_1);
          return;
        }
        if ((param_1[0x49] == 0) &&
           (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)) {
          FUN_004d9b90(param_1);
        }
        uVar11 = (uint)**(byte **)(param_1[9] + 0x10);
        if (((uVar11 != 0x20) && (1 < uVar11 - 9)) && (uVar11 != 0xd)) {
          uVar7 = 0x41;
          pcVar10 = "Space required after the attribute name\n";
          goto LAB_004e3d04;
        }
        FUN_004db2c0(param_1);
        iVar2 = FUN_004e348c(param_1,local_38);
        if (iVar2 < 1) goto LAB_004e4244;
        if ((param_1[0x49] == 0) &&
           (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)) {
          FUN_004d9b90(param_1);
        }
        uVar11 = (uint)**(byte **)(param_1[9] + 0x10);
        if (((uVar11 != 0x20) && (1 < uVar11 - 9)) && (uVar11 != 0xd)) {
          FUN_004d7c34(param_1,0x41,"Space required after the attribute type\n");
LAB_004e3e98:
          if (local_38[0] == 0) goto LAB_004e4244;
          FUN_005045f0();
          goto LAB_004e3eac;
        }
        FUN_004db2c0(param_1);
        iVar3 = FUN_004e3010(param_1,&local_3c);
        if (iVar3 < 1) {
LAB_004e3e80:
          if (local_3c != 0) {
            (*DAT_0056075c)();
          }
          goto LAB_004e3e98;
        }
        if ((iVar2 != 1) && (local_3c != 0)) {
          FUN_004d7190(local_3c,local_3c);
        }
        if ((param_1[0x49] == 0) &&
           (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)) {
          FUN_004d9b90(param_1);
        }
        uVar11 = (uint)**(byte **)(param_1[9] + 0x10);
        if (uVar11 != 0x3e) {
          if (((uVar11 != 0x20) && (1 < uVar11 - 9)) && (uVar11 != 0xd)) {
            FUN_004d7c34(param_1,0x41,"Space required after the attribute FUN_004f46fc value\n");
            goto LAB_004e3e80;
          }
          FUN_004db2c0(param_1);
        }
        if (pcVar10 == *(char **)(param_1[9] + 0x10)) {
          FUN_004d7f58(param_1,1,"in xmlParseAttributeListDecl\n");
          goto LAB_004e3e80;
        }
        if (((*param_1 == 0) || (param_1[0x35] != 0)) ||
           (pcVar13 = *(code **)(*param_1 + 0x20), pcVar13 == (code *)0x0)) {
          if (local_38[0] != 0) {
            FUN_005045f0(local_38[0]);
          }
        }
        else {
          (*pcVar13)(param_1[1],iVar1,iVar12,iVar2,iVar3,local_3c,local_38[0]);
        }
        iVar6 = 0;
        if (param_1[0x51] != 0) {
          local_30 = local_3c;
          if ((local_3c != 0) && (1 < iVar3 - 2U)) {
            if (param_1[0x58] == 0) {
              iVar3 = param_1[0x57];
            }
            else {
              iVar3 = FUN_004fb93c(param_1[0x58],iVar1,iVar12);
              if (iVar3 != 0) goto LAB_004e418c;
              iVar3 = param_1[0x57];
            }
            if (iVar3 == 0) {
              iVar3 = FUN_004fae40(10,param_1[0x4a]);
              param_1[0x57] = iVar3;
              if (iVar3 != 0) goto LAB_004e3f84;
            }
            else {
LAB_004e3f84:
              iVar3 = FUN_004ef15c(iVar1,&local_40);
              if (iVar3 == 0) {
                uVar7 = FUN_0051d5e4(param_1[0x4a],iVar1,0xffffffff);
                uVar9 = 0;
              }
              else {
                uVar7 = FUN_0051d5e4(param_1[0x4a],iVar3,0xffffffff);
                uVar9 = FUN_0051d5e4(param_1[0x4a],iVar1,local_40);
              }
              piVar4 = (int *)FUN_004fb93c(param_1[0x57],uVar7,uVar9);
              if (piVar4 == (int *)0x0) {
                piVar4 = (int *)(*DAT_00560758)(0x6c);
                if (piVar4 != (int *)0x0) {
                  *piVar4 = 0;
                  iVar3 = 4;
LAB_004e4050:
                  iVar6 = param_1[0x57];
                  piVar4[1] = iVar3;
                  iVar3 = FUN_004fb7f0(iVar6,uVar7,uVar9,piVar4,0);
                  if (-1 < iVar3) goto LAB_004e4088;
                  (*DAT_0056075c)(piVar4);
                }
              }
              else {
                if (*piVar4 < piVar4[1]) {
LAB_004e4088:
                  iVar3 = FUN_004ef15c(iVar12,&local_40);
                  if (iVar3 == 0) {
                    iVar3 = FUN_0051d5e4(param_1[0x4a],iVar12,0xffffffff);
                    iVar6 = 0;
                  }
                  else {
                    iVar3 = FUN_0051d5e4(param_1[0x4a],iVar3,0xffffffff);
                    iVar6 = FUN_0051d5e4(param_1[0x4a],iVar12,local_40);
                  }
                  iVar5 = *piVar4;
                  piVar4[iVar5 * 5 + 2] = iVar3;
                  piVar4[iVar5 * 5 + 3] = iVar6;
                  local_40 = FUN_0051a234(local_30);
                  iVar6 = FUN_0051d5e4(param_1[0x4a],local_30,local_40);
                  iVar5 = *piVar4;
                  iVar3 = iVar5 * 5;
                  piVar4[iVar3 + 4] = iVar6;
                  piVar4[iVar3 + 5] = iVar6 + local_40;
                  if (param_1[0x18] == 0) {
                    piVar4[iVar3 + 6] = 0;
                  }
                  else {
                    piVar4[iVar3 + 6] = (int)"external";
                  }
                  *piVar4 = iVar5 + 1;
                  goto LAB_004e418c;
                }
                piVar4 = (int *)(*DAT_00560750)(piVar4,piVar4[1] * 0x28 + 0x1c);
                if (piVar4 != (int *)0x0) {
                  iVar3 = piVar4[1] << 1;
                  goto LAB_004e4050;
                }
              }
            }
            FUN_004d4d84(param_1,0);
          }
LAB_004e418c:
          iVar6 = param_1[0x51];
        }
        if (iVar6 != 0) {
          if (param_1[0x58] == 0) {
            iVar3 = FUN_004fae40(10,param_1[0x4a]);
            param_1[0x58] = iVar3;
            if (iVar3 == 0) {
              FUN_004d4d84(param_1,0);
              goto LAB_004e41fc;
            }
          }
          iVar3 = FUN_004fb93c(param_1[0x58],iVar1,iVar12);
          if (iVar3 == 0) {
            FUN_004fb4ac(param_1[0x58],iVar1,iVar12,iVar2);
          }
        }
LAB_004e41fc:
        if (local_3c != 0) {
          (*DAT_0056075c)();
        }
        if ((param_1[0x49] != 0) ||
           (0xf9 < *(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10))) goto LAB_004e3c28;
        FUN_004d9b90(param_1);
        iVar12 = param_1[9];
      } while( true );
    }
    FUN_004d7c34(param_1,0x44,"ATTLIST: no name for Element\n");
  }
  return;
}



// ==== unparseable @ 004e6d24 size=1012

void unparseable(int *param_1,byte *param_2,undefined4 param_3,uint param_4,int param_5,int param_6)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  char *pcVar5;
  byte *pbVar6;
  uint uVar7;
  char *pcVar8;
  code *pcVar9;
  byte *local_28 [2];
  
  if ((param_1[0x49] == 0) && (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)) {
    FUN_004d9b90();
  }
  iVar2 = param_1[9];
  pcVar5 = *(char **)(iVar2 + 0x10);
  if ((*pcVar5 != '<') || (pcVar5[1] != '/')) {
    FUN_004d7f58(param_1,0x4a,0);
    return;
  }
  param_1[0x32] = param_1[0x32] + 2;
  *(char **)(iVar2 + 0x10) = pcVar5 + 2;
  *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 2;
  if (pcVar5[2] == '%') {
    FUN_004daed4(param_1);
  }
  if ((**(char **)(param_1[9] + 0x10) == '\0') && (iVar2 = FUN_004d4fc4(param_1[9],0xfa), iVar2 < 1)
     ) {
    FUN_004d9ac0(param_1);
  }
  if ((param_6 < 1) ||
     (iVar2 = FUN_0051a08c(*(undefined4 *)(param_1[9] + 0x10),param_1[0x2e],param_6), iVar2 != 0)) {
    pbVar4 = (byte *)param_1[0x2e];
    if (param_2 == (byte *)0x0) {
      pcVar5 = (char *)FUN_004de270(param_1,pbVar4);
    }
    else {
      if ((param_1[0x49] == 0) && (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)
         ) {
        FUN_004d9b90(param_1);
      }
      pbVar3 = *(byte **)(param_1[9] + 0x10);
      for (pbVar6 = param_2; (bVar1 = *pbVar3, bVar1 != 0 && (*pbVar6 == bVar1));
          pbVar6 = pbVar6 + 1) {
        pbVar3 = pbVar3 + 1;
      }
      if ((*pbVar6 == 0) && (pbVar6 = pbVar4, bVar1 == 0x3a)) {
        while( true ) {
          pbVar3 = pbVar3 + 1;
          uVar7 = (uint)*pbVar3;
          if ((uVar7 == 0) || (*pbVar6 != uVar7)) break;
          pbVar6 = pbVar6 + 1;
        }
        if ((*pbVar6 == 0) &&
           ((((uVar7 == 0x3e || (uVar7 == 0x20)) || (uVar7 - 9 < 2)) || (uVar7 == 0xd)))) {
          *(byte **)(param_1[9] + 0x10) = pbVar3;
          goto LAB_004e6f78;
        }
      }
      pcVar5 = (char *)FUN_004e5958(param_1,local_28);
      if (((byte *)pcVar5 == pbVar4) && (pcVar5 = &_DYNAMIC_LINKING, param_2 != local_28[0])) {
        pcVar5 = (char *)pbVar4;
      }
    }
  }
  else {
    iVar2 = param_1[9];
    pcVar5 = (char *)(*(int *)(iVar2 + 0x10) + param_6);
    if (*pcVar5 == '>') {
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + param_6 + 1;
      *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + param_6 + 1;
      goto LAB_004e70a0;
    }
    *(char **)(iVar2 + 0x10) = pcVar5;
    *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + param_6;
LAB_004e6f78:
    pcVar5 = &_DYNAMIC_LINKING;
  }
  if ((param_1[0x49] == 0) && (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)) {
    FUN_004d9b90(param_1);
  }
  if (param_1[0x2b] == -1) {
    return;
  }
  FUN_004db2c0(param_1);
  iVar2 = param_1[9];
  pcVar8 = *(char **)(iVar2 + 0x10);
  if (*pcVar8 == '>') {
    *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
    *(char **)(iVar2 + 0x10) = pcVar8 + 1;
    param_1[0x32] = param_1[0x32] + 1;
    if (pcVar8[1] == '\0') {
      FUN_004d4fc4(iVar2,0xfa);
    }
  }
  else {
    FUN_004d7f58(param_1,0x49,0);
  }
  if (pcVar5 != &_DYNAMIC_LINKING) {
    if ((byte *)pcVar5 == (byte *)0x0) {
      pcVar5 = "unparseable";
    }
    if ((param_4 == 0) && (param_1[0xd] != 0)) {
      param_4 = (uint)*(ushort *)(param_1[0xd] + 0x38);
    }
    FUN_004d7e98(param_1,0x4c,"Opening and ending tag mismatch: %s line %d and %s\n",param_1[0x2e],
                 param_4,pcVar5);
  }
LAB_004e70a0:
  if (((*param_1 != 0) && (pcVar9 = *(code **)(*param_1 + 0x78), pcVar9 != (code *)0x0)) &&
     (param_1[0x35] == 0)) {
    (*pcVar9)(param_1[1],param_1[0x2e],param_2,param_3);
  }
  FUN_004d72b8(param_1);
  if (param_5 != 0) {
    FUN_004d721c(param_1,param_5);
  }
  return;
}



// ==== nbktext @ 004e97a8 size=2096

void nbktext(int *param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int *piVar9;
  undefined1 *puVar10;
  int iVar11;
  int *piVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  code *pcVar16;
  undefined1 local_28 [12];
  int local_1c;
  
  local_1c = 0;
  pcVar13 = *(char **)(param_1[9] + 0x10);
  if (*pcVar13 != '&') {
    return;
  }
  if (pcVar13[1] == '#') {
    bVar2 = pcVar13[2];
    iVar3 = FUN_004db4b4();
    if (iVar3 == 0) {
      return;
    }
    if (param_1[0x40] == 1) {
      iVar3 = FUN_004d5bc8(local_28,iVar3);
      puVar10 = local_28;
      puVar10[iVar3] = 0;
      if (*param_1 == 0) {
        return;
      }
      pcVar16 = *(code **)(*param_1 + 0x44);
      if (pcVar16 == (code *)0x0) {
        return;
      }
      if (param_1[0x35] != 0) {
        return;
      }
      iVar6 = param_1[1];
    }
    else {
      if (0xff < iVar3) {
        if ((bVar2 & 0xdf) == 0x58) {
          puVar8 = &DAT_00548fe8;
        }
        else {
          puVar8 = &DAT_00548ff0;
        }
        snprintf(local_28,10,puVar8);
        if (*param_1 == 0) {
          return;
        }
        pcVar16 = *(code **)(*param_1 + 0x40);
        if (pcVar16 == (code *)0x0) {
          return;
        }
        if (param_1[0x35] != 0) {
          return;
        }
        iVar6 = param_1[1];
        puVar10 = local_28;
        goto LAB_004e98a8;
      }
      local_28[0] = (undefined1)iVar3;
      local_28[1] = 0;
      if (*param_1 == 0) {
        return;
      }
      pcVar16 = *(code **)(*param_1 + 0x44);
      if (pcVar16 == (code *)0x0) {
        return;
      }
      if (param_1[0x35] != 0) {
        return;
      }
      iVar6 = param_1[1];
      puVar10 = local_28;
      iVar3 = 1;
    }
LAB_004e9900:
    (*pcVar16)(iVar6,puVar10,iVar3);
  }
  else {
    iVar3 = FUN_004ddf0c();
    if (iVar3 == 0) {
      return;
    }
    if (param_1[3] == 0) {
      return;
    }
    iVar6 = *(int *)(iVar3 + 0x48);
    if ((*(int *)(iVar3 + 8) == 0) || (iVar14 = *(int *)(iVar3 + 0x30), iVar14 == 6)) {
      puVar10 = *(undefined1 **)(iVar3 + 0x28);
      if (puVar10 == (undefined1 *)0x0) {
        return;
      }
      if (*param_1 == 0) {
        return;
      }
      pcVar16 = *(code **)(*param_1 + 0x44);
      if (pcVar16 == (code *)0x0) {
        return;
      }
      if (param_1[0x35] != 0) {
        return;
      }
      iVar6 = param_1[1];
      iVar3 = FUN_0051a234(puVar10);
      goto LAB_004e9900;
    }
    if (((iVar6 == 0) || ((*(int *)(iVar3 + 0xc) == 0 && ((param_1[0x5a] & 2U) != 0)))) &&
       ((iVar14 != 2 || ((param_1[0x5a] & 0x12U) != 0)))) {
      piVar9 = (int *)param_1[1];
      if (piVar9 == param_1) {
        piVar9 = (int *)0x0;
      }
      iVar11 = param_1[0x6e];
      if (iVar14 == 1) {
        uVar7 = *(undefined4 *)(iVar3 + 0x28);
        param_1[0x3e] = param_1[0x3e] + 1;
        iVar14 = FUN_004e93bc(param_1,uVar7,piVar9,&local_1c);
        iVar15 = param_1[0x3e];
LAB_004e9a5c:
        param_1[0x3e] = iVar15 + -1;
      }
      else {
        if (iVar14 == 2) {
          iVar14 = param_1[0x3e];
          param_1[0x3e] = iVar14 + 1;
          iVar14 = FUN_004ea298(param_1[2],param_1,*param_1,piVar9,iVar14 + 1,
                                *(undefined4 *)(iVar3 + 0x40),*(undefined4 *)(iVar3 + 0x34),
                                &local_1c);
          iVar15 = param_1[0x3e];
          goto LAB_004e9a5c;
        }
        iVar14 = 0x58;
        FUN_004d7bac(param_1,1,"invalid entity type found\n",0);
      }
      *(int *)(iVar3 + 0x48) = ((param_1[0x6e] + 1) - iVar11) * 2;
      if ((*(int *)(iVar3 + 0x28) != 0) &&
         (iVar11 = FUN_0051a1b0(*(int *)(iVar3 + 0x28),0x3c), iVar11 != 0)) {
        *(uint *)(iVar3 + 0x48) = *(uint *)(iVar3 + 0x48) | 1;
      }
      if (iVar14 == 0x59) {
        FUN_004d7f58(param_1,0x59,0);
LAB_004e9af4:
        FUN_004f2b20(local_1c);
        return;
      }
      iVar11 = FUN_004dc8dc(param_1,0,iVar3,0);
      if (iVar11 != 0) goto LAB_004e9af4;
      if (iVar14 == 0) {
        if (local_1c == 0) {
LAB_004e9c38:
          if (local_1c != 0) goto LAB_004e9c40;
        }
        else if ((*(int *)(iVar3 + 0x30) - 1U < 2) && (*(int *)(iVar3 + 0xc) == 0)) {
          iVar14 = param_1[4];
          *(int *)(iVar3 + 0xc) = local_1c;
          if (iVar14 == 0) {
            *(undefined4 *)(iVar3 + 0x44) = 1;
            iVar14 = local_1c;
            while (local_1c = iVar14, local_1c != 0) {
              uVar7 = *(undefined4 *)(iVar3 + 0x20);
              *(int *)(local_1c + 0x14) = iVar3;
              FUN_004f22a4(local_1c,uVar7);
              iVar14 = *(int *)(local_1c + 0x18);
              if (iVar14 == 0) {
                *(int *)(iVar3 + 0x10) = local_1c;
              }
            }
          }
          else if (((*(int *)(local_1c + 4) == 3) && (*(int *)(local_1c + 0x18) == 0)) ||
                  (param_1[0x6d] == 5)) {
            *(int *)(local_1c + 0x14) = iVar3;
            local_1c = 0;
            *(undefined4 *)(iVar3 + 0x44) = 1;
          }
          else {
            *(undefined4 *)(iVar3 + 0x44) = 0;
            iVar14 = local_1c;
            while (iVar11 = iVar14, iVar11 != 0) {
              *(int *)(iVar11 + 0x14) = param_1[0xd];
              *(int *)(iVar11 + 0x20) = param_1[2];
              iVar14 = *(int *)(iVar11 + 0x18);
              if (iVar14 == 0) {
                *(int *)(iVar3 + 0x10) = iVar11;
              }
            }
          }
        }
        else {
LAB_004e9c40:
          FUN_004f2b20();
          local_1c = 0;
        }
        iVar14 = *(int *)(iVar3 + 0x48);
      }
      else {
        if (iVar14 == 0x1b) goto LAB_004e9c38;
        FUN_004d7afc(param_1,0x1a,"Entity \'%s\' failed to parse\n",*(undefined4 *)(iVar3 + 8));
        FUN_004dc8dc(param_1,0,iVar3,0);
        iVar14 = *(int *)(iVar3 + 0x48);
      }
      if (iVar14 == 0) {
        *(undefined4 *)(iVar3 + 0x48) = 2;
      }
    }
    else if (iVar6 != 1) {
      param_1[0x6e] = param_1[0x6e] + iVar6 / 2;
    }
    if (*(int *)(iVar3 + 0xc) == 0) {
      if (iVar6 != 0) {
        piVar9 = (int *)param_1[1];
        if (piVar9 == param_1) {
          piVar9 = (int *)0x0;
        }
        if (*(int *)(iVar3 + 0x30) == 1) {
          uVar7 = *(undefined4 *)(iVar3 + 0x28);
          param_1[0x3e] = param_1[0x3e] + 1;
          iVar6 = FUN_004e93bc(param_1,uVar7,piVar9,0);
          iVar14 = param_1[0x3e];
        }
        else {
          if (*(int *)(iVar3 + 0x30) != 2) {
            FUN_004d7bac(param_1,1,"invalid entity type found\n",0);
            goto LAB_004e9d50;
          }
          iVar6 = param_1[0x3e];
          param_1[0x3e] = iVar6 + 1;
          iVar6 = FUN_004ea298(param_1[2],param_1,*param_1,piVar9,iVar6 + 1,
                               *(undefined4 *)(iVar3 + 0x40),*(undefined4 *)(iVar3 + 0x34),0);
          iVar14 = param_1[0x3e];
        }
        param_1[0x3e] = iVar14 + -1;
        if (iVar6 == 0x59) {
          FUN_004d7f58(param_1,0x59,0);
          return;
        }
      }
LAB_004e9d50:
      if (*param_1 == 0) {
        return;
      }
      pcVar16 = *(code **)(*param_1 + 0x40);
      if (pcVar16 == (code *)0x0) {
        return;
      }
      if (param_1[4] != 0) {
        return;
      }
      iVar6 = param_1[0x35];
    }
    else {
      if (((*param_1 == 0) || (pcVar16 = *(code **)(*param_1 + 0x40), pcVar16 == (code *)0x0)) ||
         (param_1[4] != 0)) {
        if (param_1[4] == 0) {
          return;
        }
        if (param_1[0xd] == 0) {
          return;
        }
        if (((local_1c == 0) && (*(int *)(iVar3 + 0x44) == 0)) || (param_1[0x6d] == 5)) {
          param_1[0x75] = param_1[0x75] + 5 + *(int *)(iVar3 + 0x2c);
          iVar6 = FUN_004dc8dc(param_1,0,iVar3);
          if (iVar6 != 0) {
            return;
          }
          for (piVar9 = *(int **)(iVar3 + 0xc); piVar9 != (int *)0x0; piVar9 = (int *)piVar9[6]) {
            piVar4 = (int *)FUN_004f74a0(piVar9,param_1[2],1);
            iVar6 = 0;
            if (piVar4 != (int *)0x0) {
              if (*piVar4 == 0) {
                *piVar4 = *piVar9;
              }
              iVar6 = FUN_004f4e90(param_1[0xd],piVar4);
            }
            if (piVar9 == *(int **)(iVar3 + 0x10)) {
              if ((((param_1[0x6d] == 5) && (iVar6 != 0)) && (*(int *)(iVar6 + 4) == 1)) &&
                 (*(int *)(iVar6 + 0xc) == 0)) {
                *(undefined2 *)(iVar6 + 0x3a) = 1;
              }
              break;
            }
          }
        }
        else if ((local_1c == 0) || (0 < param_1[10])) {
          param_1[0x75] = param_1[0x75] + 5 + *(int *)(iVar3 + 0x2c);
          iVar6 = FUN_004dc8dc(param_1,0,iVar3);
          if (iVar6 != 0) {
            return;
          }
          piVar9 = *(int **)(iVar3 + 0xc);
          piVar4 = *(int **)(iVar3 + 0x10);
          *(undefined4 *)(iVar3 + 0xc) = 0;
          *(undefined4 *)(iVar3 + 0x10) = 0;
          do {
            if (piVar9 == (int *)0x0) break;
            iVar6 = param_1[2];
            piVar12 = (int *)piVar9[6];
            piVar9[6] = 0;
            piVar9[5] = 0;
            piVar5 = (int *)FUN_004f74a0(piVar9,iVar6,1);
            if (piVar5 != (int *)0x0) {
              if (*piVar5 == 0) {
                *piVar5 = *piVar9;
              }
              FUN_004f4e90(iVar3,piVar5);
              FUN_004f4e90(param_1[0xd],piVar9);
            }
            bVar1 = piVar9 != piVar4;
            piVar9 = piVar12;
          } while (bVar1);
          if (*(int *)(iVar3 + 0x44) == 0) {
            *(undefined4 *)(iVar3 + 0x44) = 1;
          }
        }
        else {
          uVar7 = FUN_0051d5e4(param_1[0x4a],"nbktext",0xffffffff);
          iVar6 = *(int *)(iVar3 + 0xc);
          if (*(int *)(iVar6 + 4) == 3) {
            *(undefined4 *)(iVar6 + 8) = uVar7;
          }
          iVar3 = *(int *)(iVar3 + 0x10);
          if ((iVar3 != iVar6) && (*(int *)(iVar3 + 4) == 3)) {
            *(undefined4 *)(iVar3 + 8) = uVar7;
          }
          FUN_004f6790(param_1[0xd]);
        }
        param_1[0x42] = 0;
        param_1[0x41] = 0;
        return;
      }
      iVar6 = param_1[0x35];
    }
    if (iVar6 != 0) {
      return;
    }
    iVar6 = param_1[1];
    puVar10 = *(undefined1 **)(iVar3 + 8);
LAB_004e98a8:
    (*pcVar16)(iVar6,puVar10);
  }
  return;
}



// ==== comment @ 004f2098 size=180

int comment(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*DAT_00560758)(0x3c);
  if (iVar1 == 0) {
    FUN_004ee9b8("building comment");
  }
  else {
    memset(iVar1,0,0x3c);
    *(undefined4 *)(iVar1 + 4) = 8;
    *(char **)(iVar1 + 8) = "comment";
    if (param_1 != 0) {
      uVar2 = FUN_00519e6c(param_1);
      *(undefined4 *)(iVar1 + 0x28) = uVar2;
    }
    if ((DAT_0056b090 != 0) && (DAT_0056b30c != (code *)0x0)) {
      (*DAT_0056b30c)(iVar1);
    }
  }
  return iVar1;
}



// ==== textnoenc @ 004f9610 size=2188

undefined4
textnoenc(int param_1,int param_2,int *param_3,int *param_4,int param_5,int param_6,int param_7)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  int local_res4;
  int *local_40;
  int *local_3c;
  int *local_38;
  int local_34;
  int local_30;
  int *local_2c;
  
  local_3c = (int *)0x0;
  if (param_3 != (int *)0x0) {
    if (param_4 == (int *)0x0) {
      return 0xffffffff;
    }
    if (param_5 != 0) {
      if (param_3[1] != 1) {
        return 1;
      }
      local_res4 = param_3[8];
      if (local_res4 == 0) {
        local_res4 = param_2;
        if (param_2 == 0) {
          return 0xffffffff;
        }
      }
      else if ((param_2 != 0) && (bVar1 = local_res4 != param_2, local_res4 = param_2, bVar1)) {
        return 0xffffffff;
      }
      iVar13 = *(int *)(param_5 + 0x50);
      if (param_1 != 0) {
        local_3c = *(int **)(param_1 + 8);
      }
      *param_4 = 0;
      iVar14 = -1;
      local_34 = 0;
      local_30 = 0;
      local_38 = (int *)0x0;
      piVar17 = param_3;
      iVar5 = 0;
      iVar15 = 0;
LAB_004f96e0:
      iVar11 = iVar5;
      piVar12 = piVar17;
      uVar10 = 0xffffffff;
      if (piVar12[8] == local_res4) {
        if (piVar12[1] - 1U < 0xb) {
          uVar2 = 1 << (piVar12[1] - 1U & 0x1f);
          if ((uVar2 & 0x4fd) == 0) {
            if ((uVar2 & 2) != 0) {
              iVar3 = (*DAT_00560758)(0x30);
              if (iVar3 != 0) {
                memset(iVar3,0,0x30);
                iVar5 = iVar3;
                if (local_34 != 0) {
                  *(int *)(iVar3 + 0x14) = iVar11;
                  if (iVar15 != 0) goto LAB_004f97c4;
                  *(int *)(iVar11 + 0x2c) = iVar3;
                  iVar5 = local_34;
                }
                goto LAB_004f97dc;
              }
              pcVar7 = "xmlDOMWrapCloneNode(): allocating an attr-node";
LAB_004f9790:
              FUN_004ee9b8(pcVar7);
LAB_004f9798:
              uVar10 = 0xffffffff;
            }
            goto LAB_004f9e04;
          }
          iVar3 = (*DAT_00560758)(0x3c);
          if (iVar3 == 0) {
            pcVar7 = "xmlDOMWrapCloneNode(): allocating a node";
            goto LAB_004f9790;
          }
          memset(iVar3,0,0x3c);
          iVar5 = iVar3;
          if (local_34 != 0) {
            *(int *)(iVar3 + 0x14) = iVar11;
            if (iVar15 == 0) {
              *(int *)(iVar11 + 0xc) = iVar3;
              iVar5 = local_34;
            }
            else {
LAB_004f97c4:
              *(int *)(iVar15 + 0x18) = iVar3;
              *(int *)(iVar3 + 0x1c) = iVar15;
              iVar5 = local_34;
            }
          }
LAB_004f97dc:
          local_34 = iVar5;
          pcVar7 = (char *)piVar12[2];
          *(int *)(iVar3 + 4) = piVar12[1];
          *(int *)(iVar3 + 0x20) = param_5;
          if (pcVar7 == "text") {
            *(undefined **)(iVar3 + 8) = &DAT_0054a3e8;
          }
          else {
            pcVar4 = "textnoenc";
            if (pcVar7 == "textnoenc") {
LAB_004f9860:
              *(char **)(iVar3 + 8) = pcVar4;
            }
            else if (pcVar7 == "comment") {
LAB_004f983c:
              *(char **)(iVar3 + 8) = pcVar7;
            }
            else if (pcVar7 != (char *)0x0) {
              if (iVar13 == 0) {
                pcVar4 = (char *)FUN_00519e6c(pcVar7);
              }
              else {
                iVar5 = FUN_0051e058(iVar13);
                pcVar7 = (char *)piVar12[2];
                if (iVar5 != 0) goto LAB_004f983c;
                pcVar4 = (char *)FUN_0051d5e4(iVar13,pcVar7,0xffffffff);
              }
              goto LAB_004f9860;
            }
          }
          piVar17 = local_38;
          switch(piVar12[1]) {
          case 1:
            goto switchD_004f9888_caseD_1;
          case 2:
            goto switchD_004f9888_caseD_2;
          case 3:
          case 4:
          case 7:
          case 8:
            if (piVar12[10] == 0) goto LAB_004f9d48;
            if (iVar13 == 0) {
              uVar10 = FUN_00519e6c(piVar12[10]);
              *(undefined4 *)(iVar3 + 0x28) = uVar10;
              goto switchD_004f9888_caseD_6;
            }
            iVar5 = FUN_0051e058(iVar13);
            if (iVar5 == 0) {
              uVar10 = FUN_0051d5e4(iVar13,piVar12[10],0xffffffff);
              *(undefined4 *)(iVar3 + 0x28) = uVar10;
              goto switchD_004f9888_caseD_6;
            }
            *(int *)(iVar3 + 0x28) = piVar12[10];
            goto switchD_004f9888_caseD_6;
          case 5:
            if (local_res4 == param_5) {
              *(int *)(iVar3 + 0x28) = piVar12[10];
              *(int *)(iVar3 + 0xc) = piVar12[3];
              *(int *)(iVar3 + 0x10) = piVar12[4];
              goto switchD_004f9888_caseD_6;
            }
            if ((*(int *)(param_5 + 0x2c) == 0) && (*(int *)(param_5 + 0x30) == 0))
            goto LAB_004f9d48;
            iVar5 = FUN_0052296c(param_5,piVar12[2]);
            if (iVar5 == 0) goto switchD_004f9888_caseD_6;
            uVar10 = *(undefined4 *)(iVar5 + 0x28);
            *(int *)(iVar3 + 0xc) = iVar5;
            *(undefined4 *)(iVar3 + 0x28) = uVar10;
            *(int *)(iVar3 + 0x10) = iVar5;
            goto switchD_004f9888_caseD_6;
          case 6:
            goto switchD_004f9888_caseD_6;
          FUN_004f46fc:
            break;
          case 0x13:
          case 0x14:
            goto switchD_004f9888_caseD_13;
          }
        }
switchD_004f9888_caseD_9:
        uVar10 = 0xffffffff;
      }
LAB_004f9e04:
      if (local_3c != (int *)0x0) {
        if ((param_1 == 0) || (piVar17 = *(int **)(param_1 + 8), piVar17 != local_3c)) {
          FUN_004ee928();
        }
        else {
          iVar13 = *piVar17;
          if (iVar13 != 0) {
            if (piVar17[2] != 0) {
              *(int *)piVar17[1] = piVar17[2];
            }
            piVar17[2] = iVar13;
            *piVar17 = 0;
          }
        }
      }
      *param_4 = local_34;
      return uVar10;
    }
  }
switchD_004f9888_caseD_13:
  return 0xffffffff;
switchD_004f9888_caseD_1:
  iVar14 = iVar14 + 1;
  piVar17 = piVar12;
  if (piVar12[0xc] != 0) {
    if (local_30 == 0) {
      if (((param_6 != 0) && (param_1 == 0)) &&
         (iVar5 = FUN_004eec8c(&local_3c,param_6), iVar5 == -1)) {
        uVar10 = 0xffffffff;
        goto LAB_004f9e04;
      }
      local_30 = 1;
    }
    local_38 = (int *)(iVar3 + 0x30);
    for (local_40 = (int *)piVar12[0xc]; local_40 != (int *)0x0; local_40 = (int *)*local_40) {
      piVar6 = (int *)(*DAT_00560758)(0x18);
      if (piVar6 == (int *)0x0) {
        FUN_004ee9b8("xmlDOMWrapCloneNode(): allocating namespace");
        return 0xffffffff;
      }
      memset(piVar6,0,0x18);
      piVar6[1] = 0x12;
      if (local_40[2] != 0) {
        iVar5 = FUN_00519e6c();
        piVar6[2] = iVar5;
      }
      if (local_40[3] != 0) {
        iVar5 = FUN_00519e6c();
        piVar6[3] = iVar5;
      }
      *local_38 = (int)piVar6;
      local_38 = piVar6;
      if ((param_1 == 0) || (*(int *)(param_1 + 0xc) == 0)) {
        piVar16 = local_3c;
        if (local_3c != (int *)0x0) {
LAB_004f99d4:
          do {
            piVar16 = (int *)*piVar16;
            while( true ) {
              if (piVar16 == (int *)0x0) goto LAB_004f99a4;
              if ((piVar16[5] < -1) || (piVar16[4] != -1)) goto LAB_004f99d4;
              if ((local_40[3] == *(int *)(piVar16[3] + 0xc)) ||
                 (local_2c = piVar16,
                 iVar5 = FUN_00519fa8(local_40[3],*(int *)(piVar16[3] + 0xc),local_40),
                 piVar16 = local_2c, iVar5 != 0)) break;
              piVar16 = (int *)*local_2c;
            }
            piVar16[4] = iVar14;
          } while( true );
        }
LAB_004f99a4:
        iVar5 = FUN_004eeb38(&local_3c,0xffffffff,local_40,piVar6,iVar14);
        if (iVar5 == 0) {
          uVar10 = 0xffffffff;
          goto LAB_004f9e04;
        }
      }
    }
  }
switchD_004f9888_caseD_2:
  local_38 = piVar17;
  if (piVar12[9] != 0) {
    if (local_30 == 0) {
      if (((param_6 != 0) && (param_1 == 0)) &&
         (iVar5 = FUN_004eec8c(&local_3c,param_6), iVar5 == -1)) {
        uVar10 = 0xffffffff;
        goto LAB_004f9e04;
      }
      local_30 = 1;
    }
    if (local_3c != (int *)0x0) {
      for (piVar17 = (int *)*local_3c; piVar17 != (int *)0x0; piVar17 = (int *)*piVar17) {
        if ((piVar17[4] == -1) && (piVar12[9] == piVar17[2])) {
          piVar17 = (int *)piVar17[3];
          goto LAB_004f9c38;
        }
      }
    }
    iVar5 = piVar12[9];
    if ((param_1 == 0) || (*(code **)(param_1 + 0xc) == (code *)0x0)) {
      piVar17 = local_38;
      if (param_6 == 0) {
        piVar17 = (int *)0x0;
      }
      iVar5 = FUN_004f0b0c(param_5,piVar17,iVar5,&local_40,&local_3c,iVar14,piVar12[1] == 2);
      piVar17 = local_40;
      if (iVar5 == -1) goto switchD_004f9888_caseD_9;
    }
    else {
      local_40 = (int *)(**(code **)(param_1 + 0xc))
                                  (param_1,piVar12,*(undefined4 *)(iVar5 + 8),
                                   *(undefined4 *)(iVar5 + 0xc));
      iVar5 = FUN_004eeb38(&local_3c,0xffffffff,piVar12[9],local_40,0xfffffffc);
      piVar17 = local_40;
      if (iVar5 == 0) {
        uVar10 = 0xffffffff;
        goto LAB_004f9e04;
      }
    }
LAB_004f9c38:
    *(int **)(iVar3 + 0x24) = piVar17;
  }
  if ((((*(int *)(iVar3 + 4) == 2) && (*(int *)(iVar3 + 0x14) != 0)) &&
      (iVar5 = FUN_00505980(param_5,*(int *)(iVar3 + 0x14),iVar3), iVar5 != 0)) &&
     (iVar5 = FUN_004f1248(piVar12[8],piVar12[3],1), iVar5 != 0)) {
    iVar15 = FUN_00505264(0,param_5,iVar5,piVar12);
    if (iVar15 != 0) {
      (*DAT_0056075c)(iVar5);
      goto LAB_004f9cb8;
    }
    (*DAT_0056075c)();
    goto LAB_004f9798;
  }
LAB_004f9cb8:
  if ((piVar12[1] != 1) || (piVar17 = (int *)piVar12[0xb], piVar17 == (int *)0x0)) {
    do {
      piVar17 = (int *)piVar12[3];
      if (piVar17 != (int *)0x0) {
        iVar15 = 0;
        if (param_7 != 0) break;
        iVar5 = iVar3;
        if (piVar12[1] == 2) goto LAB_004f96e0;
      }
switchD_004f9888_caseD_6:
LAB_004f9d48:
      while( true ) {
        if (piVar12 == param_3) {
          uVar10 = 0;
          goto LAB_004f9e04;
        }
        iVar8 = piVar12[1];
        if ((iVar8 == 1) || (iVar8 - 0x13U < 2)) {
          if ((local_3c != (int *)0x0) && (*local_3c != 0)) {
            while ((piVar17 = (int *)local_3c[1], piVar17 != (int *)0x0 && (iVar14 <= piVar17[5])))
            {
              puVar9 = (undefined4 *)piVar17[1];
              local_3c[1] = (int)puVar9;
              if (puVar9 == (undefined4 *)0x0) {
                *local_3c = 0;
              }
              else {
                *puVar9 = 0;
              }
              *piVar17 = local_3c[2];
              local_3c[2] = (int)piVar17;
            }
            for (piVar17 = (int *)*local_3c; piVar17 != (int *)0x0; piVar17 = (int *)*piVar17) {
              if (iVar14 <= piVar17[4]) {
                piVar17[4] = 0xffffffff;
              }
            }
          }
          iVar14 = iVar14 + -1;
        }
        piVar17 = (int *)piVar12[6];
        iVar5 = iVar11;
        iVar15 = iVar3;
        if ((int *)piVar12[6] != (int *)0x0) goto LAB_004f96e0;
        if (iVar8 == 2) break;
        iVar5 = *(int *)(iVar3 + 0x14);
        if (iVar5 != 0) {
          iVar11 = *(int *)(iVar5 + 0x14);
          *(int *)(iVar5 + 0x10) = iVar3;
        }
        piVar12 = (int *)piVar12[5];
        iVar3 = iVar5;
      }
      iVar3 = *(int *)(iVar3 + 0x14);
      piVar12 = (int *)piVar12[5];
      iVar11 = *(int *)(iVar3 + 0x14);
    } while( true );
  }
  iVar15 = 0;
  iVar5 = iVar3;
  goto LAB_004f96e0;
}



// ==== caseD_5 @ 0050f5ec size=64

undefined4 switchD_0050f5c4::caseD_5(void)

{
  (*(code *)PTR_FUN_00560724)(DAT_0056b2f8,"Unimplemented block at %s:%d\n","xpath.c",0x17b2);
  return 0;
}



// ==== caseD_5 @ 00510968 size=76

undefined8 switchD_00510920::caseD_5(void)

{
  (*(code *)PTR_FUN_00560724)(DAT_0056b2f8,"Unimplemented block at %s:%d\n","xpath.c",0x1742);
  return DAT_0056b2b0;
}



// ==== substring @ 00518fa8 size=704

void substring(undefined4 param_1)

{
  FUN_0050c3e4(param_1,"boolean",FUN_0050f970);
  FUN_0050c3e4(param_1,"ceiling",FUN_0051259c);
  FUN_0050c3e4(param_1,"count",FUN_0050ca78);
  FUN_0050c3e4(param_1,"concat",FUN_0050e4c0);
  FUN_0050c3e4(param_1,"contains",FUN_0050e650);
  FUN_0050c3e4(param_1,&DAT_0054c5d0,FUN_0050e024);
  FUN_0050c3e4(param_1,"false",FUN_0050cd70);
  FUN_0050c3e4(param_1,"floor",FUN_005124a0);
  FUN_0050c3e4(param_1,&DAT_0054bbc4,&LAB_0050c948);
  FUN_0050c3e4(param_1,&DAT_005489e8,FUN_0050f120);
  FUN_0050c3e4(param_1,"local-name",FUN_0050d2bc);
  FUN_0050c3e4(param_1,&DAT_0054bd80,FUN_0050fa60);
  FUN_0050c3e4(param_1,"name",FUN_0050d42c);
  FUN_0050c3e4(param_1,"namespace-uri",FUN_0050d17c);
  FUN_0050c3e4(param_1,"normalize-space",FUN_0050ec68);
  FUN_0050c3e4(param_1,"number",FUN_00510ad0);
  FUN_0050c3e4(param_1,"position",FUN_0050c9e0);
  FUN_0050c3e4(param_1,"round",FUN_005126bc);
  FUN_0050c3e4(param_1,"string",FUN_0050e230);
  FUN_0050c3e4(param_1,"string-length",FUN_0050e2f4);
  FUN_0050c3e4(param_1,"starts-with",FUN_0050e7cc);
  FUN_0050c3e4(param_1,"substring",FUN_00512174);
  FUN_0050c3e4(param_1,"substring-before",FUN_0050e950);
  FUN_0050c3e4(param_1,"substring-after",FUN_0050eac4);
  FUN_0050c3e4(param_1,&DAT_0054be08,FUN_00510748);
  FUN_0050c3e4(param_1,&DAT_005328d8,&LAB_0050ccfc);
  FUN_0050c3e4(param_1,"translate",FUN_0050ee60);
  FUN_0050c360(param_1,"escape-uri","http://www.w3.org/2002/08/xquery-functions",FUN_0050f6c8);
  return;
}



// ==== xmlSAX2TextNode @ 0051e9e0 size=676

int xmlSAX2TextNode(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x174);
  if (iVar4 == 0) {
    iVar4 = (*DAT_00560758)(0x3c);
    if (iVar4 == 0) {
      FUN_004d4d84(param_1,"xmlSAX2Characters");
      return 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(iVar4 + 0x18);
    *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + -1;
  }
  memset(iVar4,0,0x3c);
  iVar5 = 0;
  if (*(int *)(param_1 + 0x16c) == 0) goto LAB_0051eb98;
  pbVar2 = param_2 + param_3;
  bVar1 = *pbVar2;
  if (param_3 < 8) {
    if ((*(uint *)(param_1 + 0x168) & 0x10000) != 0) {
      iVar5 = memcpy(iVar4 + 0x2c,param_2,param_3);
      *(undefined1 *)(iVar5 + param_3) = 0;
      goto LAB_0051eb98;
    }
    if ((3 < param_3) ||
       (((bVar1 != 0x22 && (bVar1 != 0x27)) && ((bVar1 != 0x3c || (pbVar2[1] == 0x21))))))
    goto LAB_0051eb04;
  }
  else {
LAB_0051eb04:
    uVar3 = (uint)*param_2;
    if (((((uVar3 != 0x20) && (1 < uVar3 - 9)) && (iVar5 = 0, uVar3 != 0xd)) ||
        ((iVar5 = 0, 0x3b < param_3 || (bVar1 != 0x3c)))) || (pbVar2[1] == 0x21)) goto LAB_0051eb98;
    for (iVar5 = 1; iVar5 < param_3; iVar5 = iVar5 + 1) {
      uVar3 = (uint)param_2[iVar5];
      if (((uVar3 != 0x20) && (1 < uVar3 - 9)) && (uVar3 != 0xd)) {
        iVar5 = 0;
        goto LAB_0051eb98;
      }
    }
  }
  iVar5 = FUN_0051d5e4(*(undefined4 *)(param_1 + 0x128),param_2,param_3);
LAB_0051eb98:
  *(undefined4 *)(iVar4 + 4) = 3;
  *(undefined **)(iVar4 + 8) = &DAT_0054a3e8;
  if (iVar5 == 0) {
    iVar5 = FUN_00519df0(param_2,param_3);
    *(int *)(iVar4 + 0x28) = iVar5;
    if (iVar5 == 0) {
      FUN_0051e8bc(param_1,"xmlSAX2TextNode");
      (*DAT_0056075c)(iVar4);
      return 0;
    }
  }
  else {
    *(int *)(iVar4 + 0x28) = iVar5;
  }
  if ((*(int *)(param_1 + 0x118) != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    iVar5 = *(int *)(*(int *)(param_1 + 0x24) + 0x1c);
    if (iVar5 < 0xffff) {
      *(short *)(iVar4 + 0x38) = (short)iVar5;
    }
    else {
      *(undefined2 *)(iVar4 + 0x38) = 0xffff;
      if ((*(uint *)(param_1 + 0x168) & 0x400000) != 0) {
        *(int *)(iVar4 + 0x34) = iVar5;
      }
    }
  }
  if ((DAT_0056b090 != 0) && (DAT_0056b30c != (code *)0x0)) {
    (*DAT_0056b30c)(iVar4);
  }
  return iVar4;
}



// ==== xmlSAX2AttributeNs @ 0051ec84 size=876

void xmlSAX2AttributeNs(int param_1,char *param_2,int param_3,int param_4,char *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004f4278(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x34));
  }
  iVar3 = *(int *)(param_1 + 0x17c);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x16c) == 0) {
      iVar3 = FUN_004f1f40(*(undefined4 *)(param_1 + 0x34),uVar1,param_2,0);
    }
    else {
      iVar3 = FUN_004f1f6c();
    }
    if (iVar3 == 0) {
      FUN_004d4d84(param_1,"xmlSAX2AttributeNs");
      return;
    }
LAB_0051ee0c:
    iVar5 = *(int *)(param_1 + 0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(iVar3 + 0x18);
    *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + -1;
    memset(iVar3,0,0x30);
    *(undefined4 *)(iVar3 + 4) = 2;
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(param_1 + 0x34);
    uVar4 = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(iVar3 + 0x24) = uVar1;
    *(undefined4 *)(iVar3 + 0x20) = uVar4;
    if (*(int *)(param_1 + 0x16c) == 0) {
      uVar1 = FUN_00519e6c(param_2);
      *(undefined4 *)(iVar3 + 8) = uVar1;
    }
    else {
      *(char **)(iVar3 + 8) = param_2;
    }
    iVar5 = *(int *)(*(int *)(param_1 + 0x34) + 0x2c);
    if (iVar5 == 0) {
      *(int *)(*(int *)(param_1 + 0x34) + 0x2c) = iVar3;
    }
    else {
      do {
        iVar2 = iVar5;
        iVar5 = *(int *)(iVar2 + 0x18);
      } while (*(int *)(iVar2 + 0x18) != 0);
      *(int *)(iVar2 + 0x18) = iVar3;
      *(int *)(iVar3 + 0x1c) = iVar2;
    }
    if ((DAT_0056b090 == 0) || (DAT_0056b30c == (code *)0x0)) goto LAB_0051ee0c;
    (*DAT_0056b30c)(iVar3);
    iVar5 = *(int *)(param_1 + 0x10);
  }
  if ((iVar5 == 0) && (*(int *)(param_1 + 0x20) == 0)) {
    iVar5 = (int)param_5 - param_4;
    if (*param_5 == '\0') {
      iVar5 = FUN_004f5dd0(*(undefined4 *)(param_1 + 8),param_4,iVar5);
      *(int *)(iVar3 + 0xc) = iVar5;
      while (iVar2 = iVar5, iVar2 != 0) {
        uVar1 = *(undefined4 *)(iVar3 + 0x20);
        *(int *)(iVar2 + 0x14) = iVar3;
        *(undefined4 *)(iVar2 + 0x20) = uVar1;
        iVar5 = *(int *)(iVar2 + 0x18);
        if (iVar5 == 0) {
          *(int *)(iVar3 + 0x10) = iVar2;
        }
      }
      goto LAB_0051eea8;
    }
  }
  else {
    if (param_4 == 0) goto LAB_0051eea8;
    iVar5 = (int)param_5 - param_4;
  }
  iVar5 = xmlSAX2TextNode(param_1,param_4,iVar5);
  *(int *)(iVar3 + 0xc) = iVar5;
  *(int *)(iVar3 + 0x10) = iVar5;
  if (iVar5 != 0) {
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(int *)(iVar5 + 0x14) = iVar3;
    *(undefined4 *)(iVar5 + 0x20) = uVar1;
  }
LAB_0051eea8:
  if ((*(uint *)(param_1 + 0x114) & 8) == 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      if (*(int *)(param_1 + 0x60) == 2) {
        return;
      }
    }
    else if (*(int *)(param_1 + 0xd8) != 0) {
      return;
    }
    if (((((param_3 == *(int *)(param_1 + 0x138)) && (*param_2 == 'i')) && (param_2[1] == 'd')) &&
        (param_2[2] == '\0')) ||
       (iVar5 = FUN_00505980(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x34),iVar3),
       iVar5 != 0)) {
      iVar5 = FUN_00519df0(param_4,(int)param_5 - param_4);
      FUN_00505264(param_1 + 0x6c,*(undefined4 *)(param_1 + 8),iVar5,iVar3);
    }
    else {
      iVar5 = FUN_00505bb0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x34),iVar3);
      if (iVar5 == 0) {
        return;
      }
      iVar5 = FUN_00519df0(param_4,(int)param_5 - param_4);
      FUN_005054fc(param_1 + 0x6c,*(undefined4 *)(param_1 + 8),iVar5,iVar3);
    }
    if (iVar5 != 0) {
      (*DAT_0056075c)(iVar5);
      return;
    }
  }
  return;
}



// ==== xmlSAX2StartElementNs @ 0051eff0 size=1268

void xmlSAX2StartElementNs
               (int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,int param_7
               ,int param_8,int *param_9)

{
  int *piVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  
  if (param_1 == 0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x34);
  if (((*(int *)(param_1 + 0x68) != 0) && (*(int *)(*(int *)(param_1 + 8) + 0x30) == 0)) &&
     ((iVar7 = *(int *)(*(int *)(param_1 + 8) + 0x2c), iVar7 == 0 ||
      ((((*(int *)(iVar7 + 0x24) == 0 && (*(int *)(iVar7 + 0x28) == 0)) &&
        (*(int *)(iVar7 + 0x2c) == 0)) && (*(int *)(iVar7 + 0x30) == 0)))))) {
    FUN_0051e1c4(param_1,0x20a,"Validation failed: no DTD found !",0,0);
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  iVar7 = 0;
  if ((param_3 != 0) && (param_4 == 0)) {
    if (*(int *)(param_1 + 0x16c) == 0) {
      iVar7 = FUN_004eef6c(param_2,param_3,0);
    }
    else {
      iVar7 = FUN_0051db6c(*(undefined4 *)(param_1 + 0x128),param_3,param_2);
      if (iVar7 != 0) {
        param_2 = iVar7;
      }
      iVar7 = 0;
    }
  }
  iVar6 = *(int *)(param_1 + 0x174);
  if (iVar6 == 0) {
    iVar6 = param_2;
    if ((*(int *)(param_1 + 0x16c) == 0) && (iVar6 = iVar7, iVar7 == 0)) {
      iVar6 = FUN_004f58e8(*(undefined4 *)(param_1 + 8),0,param_2);
    }
    else {
      iVar6 = FUN_004f5bc4(*(undefined4 *)(param_1 + 8),0,iVar6,0);
    }
    if (iVar6 == 0) goto LAB_0051f180;
LAB_0051f224:
    iVar7 = *(int *)(param_1 + 0x118);
  }
  else {
    *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(iVar6 + 0x18);
    *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + -1;
    memset(iVar6,0,0x3c);
    *(undefined4 *)(iVar6 + 4) = 1;
    if (*(int *)(param_1 + 0x16c) == 0) {
      if (iVar7 == 0) {
        uVar2 = FUN_00519e6c(param_2);
        *(undefined4 *)(iVar6 + 8) = uVar2;
      }
      else {
        *(int *)(iVar6 + 8) = iVar7;
      }
      if (*(int *)(iVar6 + 8) == 0) goto LAB_0051f180;
    }
    else {
      *(int *)(iVar6 + 8) = param_2;
    }
    if ((DAT_0056b090 == 0) || (DAT_0056b30c == (code *)0x0)) goto LAB_0051f224;
    (*DAT_0056b30c)(iVar6);
    iVar7 = *(int *)(param_1 + 0x118);
  }
  if ((iVar7 != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    iVar7 = *(int *)(*(int *)(param_1 + 0x24) + 0x1c);
    if (0xfffe < iVar7) {
      iVar7 = -1;
    }
    *(short *)(iVar6 + 0x38) = (short)iVar7;
  }
  if (iVar5 == 0) {
    FUN_004f4e90(*(undefined4 *)(param_1 + 8),iVar6);
  }
  piVar9 = (int *)0x0;
  for (iVar7 = 0; iVar7 < param_5; iVar7 = iVar7 + 1) {
    iVar4 = *param_6;
    piVar1 = (int *)FUN_004f0654(0,param_6[1],iVar4);
    if (piVar1 != (int *)0x0) {
      if (piVar9 == (int *)0x0) {
        *(int **)(iVar6 + 0x30) = piVar1;
      }
      else {
        *piVar9 = (int)piVar1;
      }
      piVar9 = piVar1;
      if ((param_4 != 0) && (param_3 == iVar4)) {
        *(int **)(iVar6 + 0x24) = piVar1;
      }
    }
    param_6 = param_6 + 2;
  }
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  FUN_004d9884(param_1,iVar6);
  if (iVar5 != 0) {
    if (*(int *)(iVar5 + 4) == 1) {
      FUN_004f4e90();
    }
    else {
      FUN_004f6554(iVar5,iVar6);
    }
  }
  if ((param_8 != 0) && ((*(uint *)(param_1 + 0x114) & 4) == 0)) {
    param_7 = param_7 - param_8;
  }
  if ((param_4 != 0) && (*(int *)(iVar6 + 0x24) == 0)) {
    iVar5 = FUN_004f4278(*(undefined4 *)(param_1 + 8),iVar5,param_3);
    *(int *)(iVar6 + 0x24) = iVar5;
    if ((iVar5 == 0) && (iVar5 = FUN_00519fa8(param_3,"xml"), iVar5 != 0)) {
      uVar2 = FUN_004f4278(*(undefined4 *)(param_1 + 8),iVar6,param_3);
      *(undefined4 *)(iVar6 + 0x24) = uVar2;
    }
    if (*(int *)(iVar6 + 0x24) == 0) {
      iVar5 = FUN_004f0654(iVar6,0,param_3);
      if (iVar5 == 0) {
LAB_0051f180:
        FUN_0051e8bc(param_1,"xmlSAX2StartElementNs");
        return;
      }
      if (param_3 == 0) {
        param_3 = 0;
        pcVar3 = "Namespace FUN_004f46fc prefix was not found\n";
      }
      else {
        pcVar3 = "Namespace prefix %s was not found\n";
      }
      FUN_0051e2e0(param_1,0xc9,pcVar3,param_3,0);
    }
  }
  if (0 < param_7) {
    iVar5 = 0;
    do {
      if ((param_9[1] == 0) || (param_9[2] != 0)) {
LAB_0051f48c:
        iVar8 = param_9[4];
        iVar7 = *param_9;
        iVar6 = param_9[1];
        iVar4 = param_9[3];
LAB_0051f4a4:
        xmlSAX2AttributeNs(param_1,iVar7,iVar6,iVar4,iVar8);
      }
      else {
        if (*(int *)(param_1 + 0x16c) != 0) {
          iVar7 = FUN_0051db6c(*(undefined4 *)(param_1 + 0x128));
          if (iVar7 == 0) goto LAB_0051f48c;
          iVar8 = param_9[4];
          iVar4 = param_9[3];
          iVar6 = 0;
          goto LAB_0051f4a4;
        }
        iVar7 = FUN_004eef6c(*param_9,param_9[1],0,0);
        if (iVar7 == 0) goto LAB_0051f48c;
        xmlSAX2AttributeNs(param_1,iVar7,0,param_9[3],param_9[4]);
        (*DAT_0056075c)(iVar7);
      }
      iVar5 = iVar5 + 1;
      param_9 = param_9 + 5;
    } while (iVar5 != param_7);
  }
  return;
}



// ==== xmlSAX2Characters @ 0051f4e4 size=660

void xmlSAX2Characters(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    return;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x34) + 0x10);
  if (iVar5 == 0) {
    iVar5 = xmlSAX2TextNode();
    if (iVar5 != 0) {
      iVar6 = *(int *)(param_1 + 0x34);
      *(int *)(iVar6 + 0xc) = iVar5;
      *(int *)(iVar6 + 0x10) = iVar5;
      *(int *)(iVar5 + 0x14) = iVar6;
      *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar6 + 0x20);
LAB_0051f614:
      *(uint *)(param_1 + 0x104) = param_3;
      *(uint *)(param_1 + 0x108) = param_3 + 1;
      return;
    }
LAB_0051f550:
    pcVar4 = "xmlSAX2Characters";
  }
  else {
    if ((*(int *)(iVar5 + 4) != 3) || (*(undefined **)(iVar5 + 8) != &DAT_0054a3e8)) {
      iVar5 = xmlSAX2TextNode(param_1,param_2,param_3);
      if (iVar5 == 0) {
        return;
      }
      FUN_004f4e90(*(undefined4 *)(param_1 + 0x34),iVar5);
      if (*(int *)(*(int *)(param_1 + 0x34) + 0xc) == 0) {
        return;
      }
      goto LAB_0051f614;
    }
    if (*(int *)(param_1 + 0x108) == 0) {
      iVar6 = FUN_004f7fc0(iVar5);
      if (iVar6 != 0) {
        FUN_0051e8bc(param_1,"xmlSAX2Characters");
      }
      if (*(int *)(*(int *)(param_1 + 0x34) + 0xc) == 0) {
        return;
      }
      iVar5 = FUN_0051a234(*(undefined4 *)(iVar5 + 0x28));
      *(int *)(param_1 + 0x104) = iVar5;
      *(int *)(param_1 + 0x108) = iVar5 + 1;
      return;
    }
    if (*(int *)(iVar5 + 0x28) == iVar5 + 0x2c) {
      uVar1 = FUN_00519e6c(*(int *)(iVar5 + 0x28));
      *(undefined4 *)(iVar5 + 0x28) = uVar1;
      *(undefined4 *)(iVar5 + 0x2c) = 0;
    }
    else if ((*(int *)(param_1 + 0x108) == *(int *)(param_1 + 0x104) + 1) &&
            (iVar6 = FUN_0051e058(*(undefined4 *)(param_1 + 0x128)), iVar6 != 0)) {
      uVar1 = FUN_00519e6c(*(undefined4 *)(iVar5 + 0x28));
      *(undefined4 *)(iVar5 + 0x28) = uVar1;
    }
    if (*(int *)(iVar5 + 0x28) == 0) {
      pcVar4 = "xmlSAX2Characters: xmlStrdup returned NULL";
      goto LAB_0051f5c0;
    }
    uVar2 = param_3 + *(uint *)(param_1 + 0x104);
    if ((10000000 < uVar2) && ((*(uint *)(param_1 + 0x168) & 0x80000) == 0)) {
      pcVar4 = "xmlSAX2Characters: huge text node";
      goto LAB_0051f5c0;
    }
    if (*(uint *)(param_1 + 0x104) <= ~param_3) {
      iVar6 = param_3 + *(int *)(param_1 + 0x108);
      if (-1 < iVar6) {
        if ((int)uVar2 < *(int *)(param_1 + 0x108)) {
LAB_0051f6e4:
          memcpy(*(int *)(iVar5 + 0x28) + *(int *)(param_1 + 0x104),param_2,param_3);
          iVar6 = param_3 + *(int *)(param_1 + 0x104);
          iVar5 = *(int *)(iVar5 + 0x28);
          *(int *)(param_1 + 0x104) = iVar6;
          *(undefined1 *)(iVar5 + iVar6) = 0;
          return;
        }
        iVar6 = iVar6 * 2;
        iVar3 = (*DAT_00560750)(*(int *)(iVar5 + 0x28),iVar6);
        if (iVar3 != 0) {
          *(int *)(param_1 + 0x108) = iVar6;
          *(int *)(iVar5 + 0x28) = iVar3;
          goto LAB_0051f6e4;
        }
        goto LAB_0051f550;
      }
    }
    pcVar4 = "xmlSAX2Characters overflow prevented";
  }
LAB_0051f5c0:
  FUN_0051e8bc(param_1,pcVar4);
  return;
}



// ==== xmlSAX2InternalSubset @ 0051f778 size=220

void xmlSAX2InternalSubset(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) {
    iVar1 = FUN_004f0ed8();
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x20) != 0) {
        return;
      }
      FUN_004f256c(iVar1);
      FUN_004f272c(iVar1);
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x2c) = 0;
    }
    iVar1 = *(int *)(param_1 + 8);
    uVar2 = FUN_004f0f14(iVar1,param_2,param_3,param_4);
    iVar3 = *(int *)(param_1 + 8);
    *(undefined4 *)(iVar1 + 0x2c) = uVar2;
    if (*(int *)(iVar3 + 0x2c) == 0) {
      FUN_0051e8bc(param_1,"xmlSAX2InternalSubset");
      return;
    }
  }
  return;
}



// ==== xmlSAX2ExternalSubset @ 0051f854 size=616

void xmlSAX2ExternalSubset(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  
  if ((((param_1 != (int *)0x0) && ((param_3 != 0 || (param_4 != 0)))) &&
      ((param_1[0x1a] != 0 || (param_1[0x45] != 0)))) &&
     ((((param_1[3] != 0 && (param_1[2] != 0)) && (*param_1 != 0)) &&
      ((pcVar9 = *(code **)(*param_1 + 0x10), pcVar9 != (code *)0x0 &&
       (iVar1 = (*pcVar9)(param_1[1],param_3,param_4), iVar1 != 0)))))) {
    FUN_004f0dcc(param_1[2],param_2,param_3,param_4);
    pcVar9 = DAT_00560758;
    iVar8 = param_1[0x40];
    iVar4 = param_1[6];
    param_1[6] = 0;
    iVar10 = param_1[9];
    iVar7 = param_1[10];
    iVar6 = param_1[0xb];
    iVar5 = param_1[0xc];
    iVar2 = (*pcVar9)(0x14);
    param_1[0xc] = iVar2;
    if (iVar2 == 0) {
      FUN_0051e8bc(param_1,"xmlSAX2ExternalSubset");
      param_1[9] = iVar10;
      param_1[10] = iVar7;
      param_1[0xb] = iVar6;
      param_1[0xc] = iVar5;
      param_1[0x40] = iVar8;
    }
    else {
      param_1[10] = 0;
      param_1[0xb] = 5;
      param_1[9] = 0;
      FUN_004d9d18(param_1,iVar1);
      if (3 < *(int *)(param_1[9] + 0x18)) {
        uVar3 = FUN_00523cec(*(undefined4 *)(param_1[9] + 0x10),4);
        FUN_004d5ce8(param_1,uVar3);
      }
      if (*(int *)(iVar1 + 4) == 0) {
        uVar3 = FUN_00502cfc(param_4);
        *(undefined4 *)(iVar1 + 4) = uVar3;
      }
      *(undefined4 *)(iVar1 + 0x1c) = 1;
      *(undefined4 *)(iVar1 + 0x20) = 1;
      uVar3 = *(undefined4 *)(param_1[9] + 0x10);
      *(undefined4 *)(iVar1 + 0x28) = 0;
      *(undefined4 *)(iVar1 + 0xc) = uVar3;
      *(undefined4 *)(iVar1 + 0x10) = uVar3;
      FUN_004e80e8(param_1,param_3,param_4);
      iVar1 = param_1[10];
      while (1 < iVar1) {
        FUN_004d9ac0(param_1);
        iVar1 = param_1[10];
      }
      FUN_004d60ac(param_1[9]);
      (*DAT_0056075c)(param_1[0xc]);
      param_1[9] = iVar10;
      param_1[10] = iVar7;
      param_1[0xb] = iVar6;
      param_1[0xc] = iVar5;
      param_1[0x40] = iVar8;
      if ((param_1[6] != 0) && ((param_1[0x4a] == 0 || (iVar1 = FUN_0051e058(), iVar1 == 0)))) {
        (*DAT_0056075c)(param_1[6]);
        param_1[6] = iVar4;
        return;
      }
    }
    param_1[6] = iVar4;
  }
  return;
}



// ==== xmlSAX2StartDocument @ 0051fabc size=324

void xmlSAX2StartDocument(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x20) == 0) {
      iVar1 = FUN_004f114c(*(undefined4 *)(param_1 + 0x14));
      *(int *)(param_1 + 8) = iVar1;
      if (iVar1 == 0) {
LAB_0051fbcc:
        FUN_0051e8bc(param_1,"xmlSAX2StartDocument");
        return;
      }
      uVar4 = *(uint *)(param_1 + 0x168);
      *(undefined4 *)(iVar1 + 0x5c) = 0;
      if ((uVar4 & 0x20000) != 0) {
        *(undefined4 *)(iVar1 + 0x5c) = 4;
      }
      iVar3 = *(int *)(param_1 + 0x18);
      *(uint *)(iVar1 + 0x58) = uVar4;
      if (iVar3 == 0) {
        *(undefined4 *)(iVar1 + 0x3c) = 0;
      }
      else {
        uVar2 = FUN_00519e6c();
        *(undefined4 *)(iVar1 + 0x3c) = uVar2;
      }
      *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x1c);
      if (*(int *)(param_1 + 0x16c) != 0) {
        *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x128);
        FUN_0051d390();
      }
      iVar1 = *(int *)(param_1 + 8);
      if ((((iVar1 != 0) && (*(int *)(iVar1 + 0x48) == 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
         (*(int *)(*(int *)(param_1 + 0x24) + 4) != 0)) {
        uVar2 = FUN_00502e18();
        iVar3 = *(int *)(param_1 + 8);
        *(undefined4 *)(iVar1 + 0x48) = uVar2;
        if (*(int *)(iVar3 + 0x48) == 0) goto LAB_0051fbcc;
      }
    }
    else {
      (*(code *)PTR_FUN_00560724)(DAT_0056b2f8,"libxml2 built without HTML support\n");
      *(undefined4 *)(param_1 + 0x54) = 1;
      *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xd4) = 1;
    }
  }
  return;
}



// ==== xmlns @ 0051fc00 size=1648

void xmlns(int *param_1,undefined4 param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  char *local_28 [3];
  
  if (param_1[8] == 0) {
    pcVar1 = (char *)FUN_004d9e0c(param_1,param_2,local_28);
    if (pcVar1 == (char *)0x0) goto LAB_0051fc5c;
    if (*pcVar1 == '\0') {
      iVar6 = FUN_00519fa8(local_28[0],"xmlns");
      if (iVar6 == 0) {
        FUN_0051e2e0(param_1,0x6a,"Avoid attribute ending with \':\' like \'%s\'\n",param_2,0);
      }
      else {
        FUN_0051e370(param_1,0x23,"invalid namespace declaration \'%s\'\n",param_2);
      }
      if (local_28[0] != (char *)0x0) {
        (*DAT_0056075c)();
      }
      local_28[0] = (char *)0x0;
      (*DAT_0056075c)(pcVar1);
      pcVar1 = (char *)FUN_00519e6c(param_2);
      goto LAB_0051fcf8;
    }
LAB_0051fd00:
    if (param_1[8] == 0) {
      pcVar2 = param_3;
      if (local_28[0] == (char *)0x0) {
        iVar6 = 0;
        if (((((*pcVar1 != 'x') || (pcVar1[1] != 'm')) || (pcVar1[2] != 'l')) ||
            ((pcVar1[3] != 'n' || (pcVar1[4] != 's')))) || (pcVar1[5] != '\0')) goto LAB_005200c8;
        if (param_1[4] == 0) {
          param_1[0x3e] = param_1[0x3e] + 1;
          pcVar2 = (char *)FUN_004dc84c(param_1,param_3,1,0,0,0);
          param_1[0x3e] = param_1[0x3e] + -1;
          if (pcVar2 == (char *)0x0) {
            FUN_0051e8bc(param_1,"xmlSAX2StartElement");
            goto LAB_00520244;
          }
        }
        if (*pcVar2 != '\0') {
          piVar3 = (int *)FUN_00501c64(pcVar2);
          if (piVar3 == (int *)0x0) {
            if ((*param_1 != 0) && (pcVar7 = *(code **)(*param_1 + 0x54), pcVar7 != (code *)0x0)) {
              (*pcVar7)(param_1[1],"xmlns: %s not a valid URI\n",pcVar2);
            }
          }
          else {
            if (((*piVar3 == 0) && (*param_1 != 0)) &&
               (pcVar7 = *(code **)(*param_1 + 0x54), pcVar7 != (code *)0x0)) {
              (*pcVar7)(param_1[1],"xmlns: URI %s is not absolute\n",pcVar2);
            }
            FUN_0050056c(piVar3);
          }
        }
        FUN_004f0654(param_1[0xd],pcVar2,0);
      }
      else {
        if ((((*local_28[0] != 'x') || (local_28[0][1] != 'm')) || (local_28[0][2] != 'l')) ||
           (((local_28[0][3] != 'n' || (local_28[0][4] != 's')) || (local_28[0][5] != '\0'))))
        goto LAB_0051fff4;
        if (param_1[4] == 0) {
          param_1[0x3e] = param_1[0x3e] + 1;
          pcVar2 = (char *)FUN_004dc84c(param_1,param_3,1,0,0,0);
          param_1[0x3e] = param_1[0x3e] + -1;
          if (pcVar2 == (char *)0x0) {
            FUN_0051e8bc(param_1,"xmlSAX2StartElement");
            (*DAT_0056075c)(local_28[0]);
            goto LAB_00520244;
          }
        }
        if (*pcVar2 == '\0') {
          FUN_0051e370(param_1,0xcc,"Empty namespace name for prefix %s\n",pcVar1,0);
        }
        if ((param_1[0x43] != 0) && (*pcVar2 != '\0')) {
          piVar3 = (int *)FUN_00501c64(pcVar2);
          if (piVar3 == (int *)0x0) {
            FUN_0051e2e0(param_1,99,"xmlns:%s: %s not a valid URI\n",pcVar1,param_3);
          }
          else {
            if (*piVar3 == 0) {
              FUN_0051e2e0(param_1,100,"xmlns:%s: URI %s is not absolute\n",pcVar1,param_3);
            }
            FUN_0050056c(piVar3);
          }
        }
        FUN_004f0654(param_1[0xd],pcVar2,pcVar1);
        (*DAT_0056075c)(local_28[0]);
      }
      (*DAT_0056075c)(pcVar1);
      pcVar1 = pcVar2;
      if (pcVar2 == param_3) {
        return;
      }
      goto LAB_00520244;
    }
LAB_0051fff4:
    if (local_28[0] == (char *)0x0) {
      iVar6 = 0;
LAB_005200c8:
      iVar4 = param_1[0xd];
    }
    else {
      iVar6 = FUN_004f4278(param_1[2],param_1[0xd]);
      if (iVar6 != 0) {
        for (iVar4 = *(int *)(param_1[0xd] + 0x2c); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x18)) {
          if (((*(int *)(iVar4 + 0x24) != 0) &&
              (iVar5 = FUN_00519fa8(pcVar1,*(undefined4 *)(iVar4 + 8)), iVar5 != 0)) &&
             ((iVar6 == *(int *)(iVar4 + 0x24) ||
              (iVar5 = FUN_00519fa8(*(undefined4 *)(iVar6 + 8),
                                    *(undefined4 *)(*(int *)(iVar4 + 0x24) + 8)), iVar5 != 0)))) {
            FUN_0051e370(param_1,0x2a,"Attribute %s in %s redefined\n",pcVar1,
                         *(undefined4 *)(iVar6 + 8));
            param_1[3] = 0;
            if (param_1[0x48] == 0) {
              param_1[0x35] = 1;
            }
            goto LAB_00520238;
          }
        }
        goto LAB_005200c8;
      }
      FUN_0051e370(param_1,0xc9,"Namespace prefix %s of attribute %s is not defined\n",local_28[0],
                   pcVar1);
      iVar4 = param_1[0xd];
    }
    iVar6 = FUN_004f1f6c(iVar4,iVar6,pcVar1,0);
    if (iVar6 != 0) {
      if ((param_1[4] == 0) && (param_1[8] == 0)) {
        iVar4 = FUN_004f53b0(param_1[2],param_3);
        *(int *)(iVar6 + 0xc) = iVar4;
        while (iVar5 = iVar4, iVar5 != 0) {
          iVar4 = *(int *)(iVar5 + 0x18);
          *(int *)(iVar5 + 0x14) = iVar6;
          if (iVar4 == 0) {
            *(int *)(iVar6 + 0x10) = iVar5;
          }
        }
      }
      else if (param_3 != (char *)0x0) {
        iVar4 = FUN_004f1c20(param_1[2],param_3);
        *(int *)(iVar6 + 0xc) = iVar4;
        *(int *)(iVar6 + 0x10) = iVar4;
        if (iVar4 != 0) {
          *(int *)(iVar4 + 0x14) = iVar6;
        }
      }
    }
    if ((param_1[0x45] & 8U) == 0) {
      if (param_1[4] == 0) {
        if (param_1[0x18] != 2) {
LAB_0052018c:
          iVar4 = FUN_00519fa8(param_2,&DAT_0054c5cc);
          if (iVar4 == 0) {
            iVar4 = FUN_00505980(param_1[2],param_1[0xd],iVar6);
            iVar5 = param_1[2];
            if (iVar4 == 0) {
              iVar4 = FUN_00505bb0(iVar5,param_1[0xd],iVar6);
              if (iVar4 != 0) {
                FUN_005054fc(param_1 + 0x1b,param_1[2],param_3,iVar6);
              }
              goto LAB_00520238;
            }
          }
          else {
            iVar4 = FUN_004ef1b8(param_3,1);
            if (iVar4 != 0) {
              FUN_0051e1c4(param_1,0x21b,"xml:id : attribute value %s is not an NCName\n",param_3,0)
              ;
            }
            iVar5 = param_1[2];
          }
          FUN_00505264(param_1 + 0x1b,iVar5,param_3,iVar6);
        }
      }
      else if (param_1[0x36] == 0) goto LAB_0052018c;
    }
  }
  else {
    pcVar1 = (char *)FUN_00519e6c(param_2);
    local_28[0] = (char *)0x0;
LAB_0051fcf8:
    if (pcVar1 != (char *)0x0) goto LAB_0051fd00;
LAB_0051fc5c:
    FUN_0051e8bc(param_1,"xmlSAX2StartElement");
  }
LAB_00520238:
  pcVar1 = local_28[0];
  if (local_28[0] == (char *)0x0) {
    return;
  }
LAB_00520244:
  (*DAT_0056075c)(pcVar1);
  return;
}



// ==== MAX_ENCODING_HANDLERS @ 005247c8 size=172

void MAX_ENCODING_HANDLERS(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (DAT_0056b388 == 0) {
    FUN_005249bc();
  }
  if ((param_1 == 0) || (DAT_0056b388 == 0)) {
    uVar1 = 0x1771;
    pcVar2 = "xmlRegisterCharEncodingHandler: NULL handler !\n";
    pcVar3 = (char *)0x0;
  }
  else {
    if (DAT_0056b384 < 0x32) {
      *(int *)(DAT_0056b388 + DAT_0056b384 * 4) = param_1;
      DAT_0056b384 = DAT_0056b384 + 1;
      return;
    }
    uVar1 = 0x1772;
    pcVar2 = "xmlRegisterCharEncodingHandler: Too many handler registered, see %s\n";
    pcVar3 = "MAX_ENCODING_HANDLERS";
  }
  FUN_00523b7c(uVar1,pcVar2,pcVar3);
  return;
}



// ==== mxmlElementGetAttr @ 005282ec size=156

undefined4 mxmlElementGetAttr(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    if (param_2 != 0) {
      puVar2 = (undefined4 *)param_1[8];
      for (iVar3 = param_1[7]; 0 < iVar3; iVar3 = iVar3 + -1) {
        iVar1 = (*(code *)PTR_strcmp_005614e4)(*puVar2,param_2);
        if (iVar1 == 0) {
          return puVar2[1];
        }
        puVar2 = puVar2 + 2;
      }
    }
    return 0;
  }
  return 0;
}



// ==== mxmlElementSetAttr @ 0052840c size=176

void mxmlElementSetAttr(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((param_1 != (int *)0x0) && (*param_1 == 0)) && (param_2 != 0)) {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (*(code *)PTR_strdup_0056151c)(param_3);
    }
    iVar2 = (*(code *)(PTR_LAB_00560984 + -0x7f70))(param_1,param_2,uVar1);
    if (iVar2 != 0) {
      (*(code *)PTR_free_005615c0)(uVar1);
      return;
    }
  }
  return;
}



// ==== integer @ 00529fbc size=5068

undefined *
integer(undefined *param_1,undefined4 param_2,code *param_3,code *param_4,code *param_5,
       undefined4 param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined *puVar11;
  code *pcVar12;
  undefined4 local_78;
  undefined4 local_74;
  char *local_70;
  char *local_6c;
  char *local_68;
  char *local_64;
  char *local_60;
  char *local_5c;
  char *local_58 [2];
  char **local_50;
  char **local_4c;
  uint local_48;
  char **local_44;
  char **local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  char *local_30;
  
  local_38 = (*(code *)PTR__mxml_global_00560994)();
  local_58[0] = (char *)(*(code *)PTR_malloc_005614ec)(0x40);
  if (local_58[0] != (char *)0x0) {
    local_60 = (char *)0x40;
    local_64 = (char *)0x0;
    local_5c = local_58[0];
    if (param_3 == (code *)0x0) {
      iVar2 = 4;
      if (param_1 == (undefined *)0x0) {
        iVar2 = -1;
      }
    }
    else if (param_1 == (undefined *)0x0) {
      iVar2 = -1;
    }
    else {
      iVar2 = (*param_3)(param_1);
    }
    local_48 = 0;
    puVar5 = param_1;
    puVar7 = (undefined *)0x0;
    pcVar10 = local_5c;
LAB_0052a234:
    do {
      local_5c = pcVar10;
      iVar3 = (*param_4)(param_2,&local_64);
      if (iVar3 == -1) {
LAB_0052a6dc:
        (*(code *)PTR_free_005615c0)(local_58[0]);
        puVar9 = puVar5;
        if (puVar5 == (undefined *)0x0) {
          return puVar7;
        }
        goto LAB_0052a6f0;
      }
      if (((iVar3 == 0x3c) ||
          (((iVar4 = (*(code *)(PTR_LAB_00560984 + -0x607c))(iVar3), iVar4 != 0 && (iVar2 != 2)) &&
           (iVar2 != 5)))) && (local_58[0] < local_5c)) {
        *local_5c = '\0';
        if (iVar2 - 1U < 5) {
                    /* WARNING: Could not recover jumptable at 0x0052a2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar5 = (undefined *)
                   (*(code *)(&_gp_1 + *(int *)(PTR_DAT_00560998 + (iVar2 - 1U) * 4 + -0x2240)))();
          return puVar5;
        }
        if (*local_5c != '\0') {
          if (iVar2 == 1) {
            puVar9 = PTR_DAT_00560998 + -0x2678;
          }
          else {
            puVar9 = PTR_DAT_00560998 + -0x2670;
          }
          if (puVar5 == (undefined *)0x0) {
            puVar11 = PTR_LAB_00560984 + 0x28c8;
          }
          else {
            puVar11 = *(undefined **)(puVar5 + 0x18);
          }
          (*(code *)PTR_mxml_error_00561464)(PTR_DAT_00560998 + -0x2614,puVar9,local_58[0],puVar11);
          goto LAB_0052a6dc;
        }
        local_5c = local_58[0];
        iVar4 = (*(code *)(PTR_LAB_00560984 + -0x607c))(iVar3);
        local_48 = 0;
        if (iVar4 != 0) {
          local_48 = (uint)(iVar2 == 4);
        }
        if (iVar2 == -1) {
          if (param_5 != (code *)0x0) {
            (*param_5)(0,2,param_6);
            (*(code *)PTR_mxmlRelease_00561474)(0);
          }
          if (puVar7 == (undefined *)0x0) {
            puVar7 = (undefined *)0x0;
          }
          goto LAB_0052a508;
        }
        pcVar10 = *(char **)(PTR_DAT_0056098c + iVar2 * 4 + -0xc08);
        if (puVar5 == (undefined *)0x0) {
          puVar9 = PTR_LAB_00560984 + 0x28c8;
        }
        else {
          puVar9 = *(undefined **)(puVar5 + 0x18);
        }
        puVar5 = PTR_DAT_00560998 + -0x25f0;
        goto LAB_0052a638;
      }
      iVar4 = (*(code *)(PTR_LAB_00560984 + -0x607c))(iVar3);
      if ((iVar4 == 0) || (iVar2 != 4)) {
LAB_0052a508:
        if (iVar3 == 0x3c) {
          pcVar10 = local_58[0];
          if ((local_48 != 0) && (local_48 = 1, pcVar10 = local_58[0], iVar2 == 4))
          goto LAB_0052a530;
          goto LAB_0052a0f4;
        }
        if (iVar3 == 0x26) goto LAB_0052b180;
        if ((iVar2 != 2) && (iVar2 != 5)) goto LAB_0052b1c0;
      }
      else {
        if (iVar3 == 0x3c) {
LAB_0052a530:
          if (puVar5 == (undefined *)0x0) {
            local_48 = 0;
            pcVar10 = local_58[0];
          }
          else {
            puVar9 = (undefined *)
                     (*(code *)PTR_mxmlNewText_00560e40)(puVar5,1,PTR_DAT_00560f88 + -0x4a9c);
            if (param_5 != (code *)0x0) {
              (*param_5)(puVar9,2,param_6);
              iVar3 = (*(code *)PTR_mxmlRelease_00561474)(puVar9);
              if (iVar3 == 0) {
                puVar9 = (undefined *)0x0;
              }
            }
            local_48 = 0;
            pcVar10 = local_58[0];
            if (puVar7 == (undefined *)0x0) {
              pcVar10 = local_58[0];
              puVar7 = puVar9;
            }
          }
LAB_0052a0f4:
          do {
            local_5c = pcVar10;
            iVar3 = (*param_4)(param_2,&local_64);
            if (((iVar3 == -1) ||
                (iVar4 = (*(code *)(PTR_LAB_00560984 + -0x607c))(iVar3), iVar4 != 0)) ||
               (iVar3 == 0x3e)) break;
            if (iVar3 == 0x2f) {
              if (local_58[0] < local_5c) break;
            }
            else {
              if (iVar3 == 0x3c) {
                puVar9 = PTR_DAT_00560998 + -0x25bc;
                pcVar12 = (code *)PTR_mxml_error_00561464;
                goto LAB_0052a7fc;
              }
              if (iVar3 == 0x26) {
                iVar3 = (*(code *)(PTR_LAB_00560984 + -0x6e84))(puVar5,param_2,&local_64,param_4);
                if ((iVar3 == -1) ||
                   (iVar3 = (*(code *)(PTR_LAB_00560984 + -0x6c2c))
                                      (iVar3,&local_5c,local_58,&local_60), pcVar10 = local_5c,
                   iVar3 != 0)) goto LAB_0052a784;
                goto LAB_0052a0f4;
              }
              if ((iVar3 < 0x30) && ((iVar3 != 0x21 && (2 < iVar3 - 0x2dU)))) goto LAB_0052a784;
            }
            iVar4 = (*(code *)(PTR_LAB_00560984 + -0x6c2c))(iVar3,&local_5c,local_58,&local_60);
            if (iVar4 != 0) goto LAB_0052a784;
            iVar4 = (int)local_5c - (int)local_58[0];
            pcVar10 = local_5c;
            if (iVar4 == 1) {
              if (*local_58[0] == '?') break;
              goto LAB_0052a0f4;
            }
            if (iVar4 == 3) {
              uVar8 = 3;
              puVar9 = PTR_DAT_00560998 + -0x25a8;
            }
            else {
              if (iVar4 != 8) goto LAB_0052a0f4;
              uVar8 = 8;
              puVar9 = PTR_DAT_00560998 + -0x25a4;
            }
            iVar4 = (*(code *)PTR_strncmp_005615d4)(local_58[0],puVar9,uVar8);
            pcVar10 = local_5c;
          } while (iVar4 != 0);
          pcVar10 = local_58[0];
          puVar9 = PTR_DAT_00560998;
          *local_5c = '\0';
          iVar4 = (*(code *)PTR_strcmp_005614e4)(local_58[0],puVar9 + -0x25a8);
          puVar9 = PTR_LAB_00560984;
          if (iVar4 == 0) {
            local_50 = &local_5c;
            local_4c = &local_60;
            while( true ) {
              iVar3 = (*param_4)(param_2,&local_64);
              if (iVar3 == -1) {
                puVar9 = PTR_DAT_00560998 + -0x2318;
                pcVar12 = (code *)PTR_mxml_error_00561464;
                goto LAB_0052a7fc;
              }
              if ((((iVar3 == 0x3e) && (local_58[0] + 4 < local_5c)) && (local_5c[-3] != '-')) &&
                 ((local_5c[-2] == '-' && (local_5c[-1] == '-')))) break;
              iVar3 = (*(code *)(puVar9 + -0x6c2c))(iVar3,&local_5c,local_58,&local_60);
              if (iVar3 != 0) goto LAB_0052a784;
            }
            *local_5c = '\0';
            if ((puVar5 != (undefined *)0x0) || (pcVar10 = local_58[0], puVar7 == (undefined *)0x0))
            {
              puVar9 = (undefined *)(*(code *)PTR_mxmlNewElement_00560e3c)(puVar5,local_58[0]);
              if (puVar9 == (undefined *)0x0) {
                if (puVar5 == (undefined *)0x0) {
                  puVar9 = PTR_LAB_00560984 + 0x28c8;
                }
                else {
                  puVar9 = *(undefined **)(puVar5 + 0x18);
                }
                (*(code *)PTR_mxml_error_00561464)(PTR_DAT_00560998 + -0x2568,puVar9);
                goto LAB_0052a6dc;
              }
              if (param_5 != (code *)0x0) {
                uVar8 = 1;
                goto LAB_0052a20c;
              }
              goto LAB_0052b224;
            }
            goto LAB_0052a634;
          }
          iVar4 = (*(code *)PTR_strcmp_005614e4)(pcVar10,PTR_DAT_00560998 + -0x25a4);
          puVar9 = PTR_LAB_00560984;
          if (iVar4 == 0) {
            local_4c = local_58;
            puVar11 = PTR_DAT_00560998 + -0x253c;
            local_50 = &local_5c;
            do {
              iVar3 = (*param_4)(param_2,&local_64);
              if (iVar3 == -1) {
                puVar9 = PTR_DAT_00560998 + -0x22fc;
                pcVar12 = (code *)PTR_mxml_error_00561464;
                goto LAB_0052a7fc;
              }
              if (iVar3 == 0x3e) {
                local_30 = local_5c;
                iVar4 = (*(code *)PTR_strncmp_005615d4)(local_5c + -2,puVar11,2);
                if (iVar4 == 0) goto code_r0x0052a614;
              }
              iVar3 = (*(code *)(puVar9 + -0x6c2c))(iVar3,&local_5c,local_58,&local_60);
              if (iVar3 != 0) goto LAB_0052a784;
            } while( true );
          }
          cVar1 = *pcVar10;
          if (cVar1 != '?') {
            if (cVar1 == '!') {
              local_50 = &local_5c;
              local_4c = local_58;
              local_44 = &local_60;
              while (iVar3 != 0x3e) {
                if (((iVar3 == 0x26) &&
                    (iVar3 = (*(code *)(puVar9 + -0x6e84))(puVar5,param_2,&local_64,param_4),
                    iVar3 == -1)) ||
                   (iVar3 = (*(code *)(puVar9 + -0x6c2c))(iVar3,&local_5c,local_58,&local_60),
                   iVar3 != 0)) goto LAB_0052a784;
                iVar3 = (*param_4)(param_2,&local_64);
                if (iVar3 == -1) {
                  puVar9 = PTR_DAT_00560998 + -0x22b4;
                  pcVar12 = (code *)PTR_mxml_error_00561464;
                  goto LAB_0052a7fc;
                }
              }
              *local_5c = '\0';
              if ((puVar5 == (undefined *)0x0) &&
                 (pcVar10 = local_58[0], puVar7 != (undefined *)0x0)) goto LAB_0052a634;
              puVar9 = (undefined *)(*(code *)PTR_mxmlNewElement_00560e3c)(puVar5,local_58[0]);
              if (puVar9 != (undefined *)0x0) goto LAB_0052b2b8;
              if (puVar5 == (undefined *)0x0) {
                puVar5 = PTR_LAB_00560984 + 0x28c8;
              }
              else {
                puVar5 = *(undefined **)(puVar5 + 0x18);
              }
              puVar9 = PTR_DAT_00560998 + -0x24d0;
              goto LAB_0052abb0;
            }
            if (cVar1 == '/') {
              if (puVar5 == (undefined *)0x0) {
                puVar9 = PTR_DAT_00560998 + -0x2668;
              }
              else {
                puVar9 = *(undefined **)(puVar5 + 0x18);
                iVar4 = (*(code *)PTR_strcmp_005614e4)(pcVar10 + 1,puVar9);
                if (iVar4 == 0) {
                  while ((iVar3 != 0x3e && (iVar3 != -1))) {
                    iVar3 = (*param_4)(param_2,&local_64);
                  }
                  puVar9 = *(undefined **)(puVar5 + 0xc);
                  if (param_5 != (code *)0x0) {
                    (*param_5)(puVar5,4,param_6);
                    iVar3 = (*(code *)PTR_mxmlRelease_00561474)(puVar5);
                    if ((iVar3 == 0) && (puVar7 == puVar5)) {
                      puVar7 = (undefined *)0x0;
                    }
                  }
                  puVar5 = puVar9;
                  pcVar10 = local_58[0];
                  if (param_3 != (code *)0x0) {
                    if (puVar9 != (undefined *)0x0) goto LAB_0052ab4c;
                    puVar5 = (undefined *)0x0;
                    pcVar10 = local_58[0];
                  }
                  goto LAB_0052a234;
                }
              }
              puVar5 = PTR_DAT_00560998 + -0x24a0;
              goto LAB_0052a638;
            }
            if ((puVar5 == (undefined *)0x0) && (puVar7 != (undefined *)0x0)) goto LAB_0052a634;
            puVar9 = (undefined *)(*(code *)PTR_mxmlNewElement_00560e3c)(puVar5,pcVar10);
            if (puVar9 == (undefined *)0x0) {
              if (puVar5 == (undefined *)0x0) {
                puVar5 = PTR_LAB_00560984 + 0x28c8;
              }
              else {
                puVar5 = *(undefined **)(puVar5 + 0x18);
              }
              puVar9 = PTR_DAT_00560998 + -0x2470;
              goto LAB_0052abb0;
            }
            iVar4 = (*(code *)(PTR_LAB_00560984 + -0x607c))(iVar3);
            if (iVar4 == 0) {
              if ((iVar3 == 0x2f) && (iVar4 = (*param_4)(param_2,&local_64), iVar4 != 0x3e)) {
                (*(code *)PTR_mxml_error_00561464)(PTR_DAT_00560998 + -0x2378,iVar4,local_58[0]);
                pcVar12 = (code *)PTR_mxmlDelete_00560c2c;
LAB_0052a7fc:
                (*pcVar12)(puVar9);
                goto LAB_0052a784;
              }
            }
            else {
              pcVar10 = (char *)(*(code *)PTR_malloc_005614ec)(0x40);
              local_68 = pcVar10;
              if (pcVar10 == (char *)0x0) {
                puVar11 = PTR_DAT_00560998 + -0x2444;
LAB_0052ac40:
                (*(code *)PTR_mxml_error_00561464)(puVar11);
LAB_0052b0a0:
                iVar3 = -1;
              }
              else {
                local_74 = 0x40;
                local_6c = (char *)(*(code *)PTR_malloc_005614ec)(0x40);
                if (local_6c == (char *)0x0) {
                  (*(code *)PTR_free_005615c0)(pcVar10);
                  puVar11 = PTR_DAT_00560998 + -0x2420;
                  goto LAB_0052ac40;
                }
                local_4c = &local_70;
                local_44 = &local_68;
                local_34 = &local_74;
                local_78 = 0x40;
                do {
                  do {
                    pcVar10 = (char *)(*param_4)(param_2,&local_64);
                    if (pcVar10 == (char *)0xffffffff) {
LAB_0052b040:
                      iVar3 = -1;
                      goto LAB_0052a688;
                    }
                    iVar3 = (*(code *)(PTR_LAB_00560984 + -0x607c))(pcVar10);
                  } while (iVar3 != 0);
                  if (pcVar10 == (char *)0x2f) {
                    iVar3 = 0x2f;
LAB_0052acc8:
                    iVar4 = (*param_4)(param_2,&local_64);
                    if (iVar4 != 0x3e) {
                      (*(code *)PTR_mxml_error_00561464)
                                (PTR_DAT_00560998 + -0x23f8,iVar3,*(undefined4 *)(puVar9 + 0x18),
                                 iVar4);
LAB_0052b084:
                      (*(code *)PTR_free_005615c0)(local_68);
                      (*(code *)PTR_free_005615c0)(local_6c);
                      goto LAB_0052b0a0;
                    }
                    break;
                  }
                  if (pcVar10 == (char *)0x3f) {
                    iVar3 = 0x3f;
                    goto LAB_0052acc8;
                  }
                  if (pcVar10 == (char *)0x3c) {
                    (*(code *)PTR_mxml_error_00561464)
                              (PTR_DAT_00560998 + -0x23c0,*(undefined4 *)(puVar9 + 0x18));
                    goto LAB_0052b084;
                  }
                  if (pcVar10 == (char *)0x3e) {
                    iVar3 = 0x3e;
                    break;
                  }
                  *local_68 = (char)pcVar10;
                  local_70 = local_68 + 1;
                  if ((pcVar10 == (char *)0x22) || (pcVar10 == (char *)0x27)) {
                    do {
                      pcVar6 = (char *)(*param_4)(param_2,&local_64);
                      if (pcVar6 == (char *)0xffffffff) {
                        pcVar6 = (char *)0xffffffff;
                        break;
                      }
                      if (pcVar6 == (char *)0x26) {
                        local_30 = (char *)0xffffffff;
                        pcVar6 = (char *)(*(code *)(PTR_LAB_00560984 + -0x6e84))
                                                   (puVar9,param_2,&local_64,param_4);
                        if (pcVar6 == local_30) goto LAB_0052b084;
                      }
                      iVar3 = (*(code *)(PTR_LAB_00560984 + -0x6c2c))
                                        (pcVar6,&local_70,&local_68,&local_74);
                      if (iVar3 != 0) goto LAB_0052b084;
                    } while (pcVar6 != pcVar10);
                  }
                  else {
                    while (pcVar6 = (char *)(*param_4)(param_2,&local_64),
                          pcVar6 != (char *)0xffffffff) {
                      iVar3 = (*(code *)(PTR_LAB_00560984 + -0x607c))(pcVar6);
                      if ((((iVar3 != 0) || (pcVar6 == (char *)0x3d)) || (pcVar6 == (char *)0x2f))
                         || ((pcVar6 == (char *)0x3e || (pcVar6 == (char *)0x3f))))
                      goto LAB_0052aeb0;
                      if (((pcVar6 == (char *)0x26) &&
                          (pcVar6 = (char *)(*(code *)(PTR_LAB_00560984 + -0x6e84))
                                                      (puVar9,param_2,&local_64,param_4),
                          pcVar6 == (char *)0xffffffff)) ||
                         (iVar3 = (*(code *)(PTR_LAB_00560984 + -0x6c2c))
                                            (pcVar6,&local_70,&local_68,&local_74), iVar3 != 0))
                      goto LAB_0052b084;
                    }
                    pcVar6 = (char *)0xffffffff;
                  }
LAB_0052aeb0:
                  puVar11 = PTR_mxmlElementGetAttr_00560de0;
                  *local_70 = '\0';
                  iVar3 = (*(code *)puVar11)(puVar9,local_68);
                  if (iVar3 != 0) goto LAB_0052b084;
                  while( true ) {
                    if (pcVar6 == (char *)0xffffffff) goto LAB_0052af5c;
                    iVar3 = (*(code *)(PTR_LAB_00560984 + -0x607c))(pcVar6);
                    if (iVar3 == 0) break;
                    pcVar6 = (char *)(*param_4)(param_2,&local_64);
                  }
                  if (pcVar6 != (char *)0x3d) {
LAB_0052af5c:
                    (*(code *)PTR_mxml_error_00561464)
                              (PTR_DAT_00560998 + -0x23a8,local_68,*(undefined4 *)(puVar9 + 0x18));
                    goto LAB_0052b084;
                  }
                  do {
                    pcVar10 = (char *)(*param_4)(param_2,&local_64);
                    if (pcVar10 == (char *)0xffffffff) goto LAB_0052af5c;
                    iVar3 = (*(code *)(PTR_LAB_00560984 + -0x607c))(pcVar10);
                  } while (iVar3 != 0);
                  local_50 = &local_64;
                  if ((pcVar10 == (char *)0x27) || (local_3c = &local_78, pcVar10 == (char *)0x22))
                  {
                    local_70 = local_6c;
                    local_3c = &local_78;
                    local_40 = &local_6c;
                    while ((pcVar6 = (char *)(*param_4)(param_2,&local_64),
                           pcVar6 != (char *)0xffffffff && (pcVar6 != pcVar10))) {
                      if (pcVar6 == (char *)0x26) {
                        local_30 = (char *)0xffffffff;
                        pcVar6 = (char *)(*(code *)(PTR_LAB_00560984 + -0x6e84))
                                                   (puVar9,param_2,&local_64,param_4);
                        if (pcVar6 == local_30) goto LAB_0052b084;
                      }
                      iVar3 = (*(code *)(PTR_LAB_00560984 + -0x6c2c))
                                        (pcVar6,&local_70,&local_6c,&local_78);
                      if (iVar3 != 0) goto LAB_0052b084;
                    }
                  }
                  else {
                    *local_6c = (char)pcVar10;
                    local_70 = local_6c + 1;
                    local_40 = &local_6c;
                    while ((((pcVar6 = (char *)(*param_4)(param_2,&local_64),
                             pcVar6 != (char *)0xffffffff &&
                             (iVar3 = (*(code *)(PTR_LAB_00560984 + -0x607c))(pcVar6), iVar3 == 0))
                            && (pcVar6 != (char *)0x3d)) &&
                           ((pcVar6 != (char *)0x2f && (pcVar6 != (char *)0x3e))))) {
                      if (((pcVar6 == (char *)0x26) &&
                          (pcVar6 = (char *)(*(code *)(PTR_LAB_00560984 + -0x6e84))
                                                      (puVar9,param_2,&local_64,param_4),
                          pcVar6 == (char *)0xffffffff)) ||
                         (iVar3 = (*(code *)(PTR_LAB_00560984 + -0x6c2c))
                                            (pcVar6,&local_70,&local_6c,&local_78), iVar3 != 0))
                      goto LAB_0052b084;
                    }
                  }
                  puVar11 = PTR_mxmlElementSetAttr_00561488;
                  *local_70 = '\0';
                  (*(code *)puVar11)(puVar9,local_68,local_6c);
                  if (pcVar6 == (char *)0x2f) {
                    iVar3 = 0x2f;
LAB_0052b004:
                    iVar4 = (*param_4)(param_2,&local_64);
                    if (iVar4 != 0x3e) {
                      (*(code *)PTR_mxml_error_00561464)
                                (PTR_DAT_00560998 + -0x23f8,iVar3,*(undefined4 *)(puVar9 + 0x18),
                                 iVar4);
                      goto LAB_0052b040;
                    }
                    break;
                  }
                  if (pcVar6 == (char *)0x3f) {
                    iVar3 = 0x3f;
                    goto LAB_0052b004;
                  }
                  iVar3 = 0x3e;
                } while (pcVar6 != (char *)0x3e);
LAB_0052a688:
                (*(code *)PTR_free_005615c0)(local_68);
                (*(code *)PTR_free_005615c0)(local_6c);
              }
              if (iVar3 == -1) goto LAB_0052a784;
            }
            if (param_5 != (code *)0x0) {
              (*param_5)(puVar9,5,param_6);
            }
            if (puVar7 == (undefined *)0x0) {
              puVar7 = puVar9;
            }
            if (iVar3 == -1) goto LAB_0052a6dc;
            if (iVar3 == 0x2f) {
              pcVar10 = local_58[0];
              if (param_5 != (code *)0x0) {
                (*param_5)(puVar9,4,param_6);
                iVar3 = (*(code *)PTR_mxmlRelease_00561474)(puVar9);
                pcVar10 = local_58[0];
                if ((iVar3 == 0) && (pcVar10 = local_58[0], puVar7 == puVar9)) {
                  puVar7 = (undefined *)0x0;
                  pcVar10 = local_58[0];
                }
              }
            }
            else {
              if (param_3 == (code *)0x0) goto LAB_0052b170;
              iVar2 = (*param_3)(puVar9);
              puVar5 = puVar9;
              pcVar10 = local_58[0];
            }
            goto LAB_0052a234;
          }
          local_50 = &local_5c;
          local_4c = &local_60;
          while( true ) {
            iVar3 = (*param_4)(param_2,&local_64);
            if (iVar3 == -1) {
              puVar9 = PTR_DAT_00560998 + -0x22e0;
              pcVar12 = (code *)PTR_mxml_error_00561464;
              goto LAB_0052a7fc;
            }
            if (((iVar3 == 0x3e) && (local_58[0] < local_5c)) && (local_5c[-1] == '?')) break;
            iVar3 = (*(code *)(puVar9 + -0x6c2c))(iVar3,&local_5c,local_58,&local_60);
            if (iVar3 != 0) goto LAB_0052a784;
          }
          *local_5c = '\0';
          if ((puVar5 == (undefined *)0x0) && (pcVar10 = local_58[0], puVar7 != (undefined *)0x0))
          goto LAB_0052a634;
          puVar9 = (undefined *)(*(code *)PTR_mxmlNewElement_00560e3c)(puVar5,local_58[0]);
          if (puVar9 == (undefined *)0x0) {
            if (puVar5 == (undefined *)0x0) {
              puVar5 = PTR_LAB_00560984 + 0x28c8;
            }
            else {
              puVar5 = *(undefined **)(puVar5 + 0x18);
            }
            puVar9 = PTR_DAT_00560998 + -0x250c;
            goto LAB_0052abb0;
          }
LAB_0052b2b8:
          if (param_5 == (code *)0x0) {
            if (puVar7 == (undefined *)0x0) {
              puVar7 = puVar9;
            }
          }
          else {
            (*param_5)(puVar9,3,param_6);
            iVar3 = (*(code *)PTR_mxmlRelease_00561474)(puVar9);
            pcVar10 = local_58[0];
            if (iVar3 == 0) goto LAB_0052a234;
            if (puVar7 == (undefined *)0x0) {
              puVar7 = puVar9;
            }
          }
          pcVar10 = local_58[0];
          if (puVar5 == (undefined *)0x0) {
            if (param_3 == (code *)0x0) {
LAB_0052b170:
              iVar2 = 4;
              puVar5 = puVar9;
              pcVar10 = local_58[0];
            }
            else {
LAB_0052ab4c:
              iVar2 = (*param_3)(puVar9);
              puVar5 = puVar9;
              pcVar10 = local_58[0];
            }
          }
          goto LAB_0052a234;
        }
        if (iVar3 != 0x26) {
          local_48 = 1;
LAB_0052b1c0:
          iVar4 = (*(code *)(PTR_LAB_00560984 + -0x607c))(iVar3);
          pcVar10 = local_5c;
          if (iVar4 == 0) goto LAB_0052b1dc;
          goto LAB_0052a234;
        }
        local_48 = 1;
LAB_0052b180:
        iVar3 = (*(code *)(PTR_LAB_00560984 + -0x6e84))(puVar5,param_2,&local_64,param_4);
        if (iVar3 == -1) goto LAB_0052a784;
      }
LAB_0052b1dc:
      iVar3 = (*(code *)(PTR_LAB_00560984 + -0x6c2c))(iVar3,&local_5c,local_58,&local_60);
      pcVar10 = local_5c;
      if (iVar3 != 0) {
LAB_0052a784:
        (*(code *)PTR_mxmlDelete_00560c2c)(puVar7);
        (*(code *)PTR_free_005615c0)(local_58[0]);
        return (undefined *)0x0;
      }
    } while( true );
  }
  puVar7 = PTR_DAT_00560998 + -0x2660;
  pcVar12 = (code *)PTR_mxml_error_00561464;
  goto LAB_0052a754;
code_r0x0052a614:
  local_30[-2] = '\0';
  *local_5c = '\0';
  if ((puVar5 == (undefined *)0x0) && (pcVar10 = local_58[0], puVar7 != (undefined *)0x0)) {
LAB_0052a634:
    puVar5 = PTR_DAT_00560998 + -0x2598;
    puVar9 = *(undefined **)(puVar7 + 0x18);
LAB_0052a638:
    (*(code *)PTR_mxml_error_00561464)(puVar5,pcVar10,puVar9);
    goto LAB_0052a784;
  }
  puVar9 = (undefined *)(*(code *)PTR_mxmlNewElement_00560e3c)(puVar5,local_58[0]);
  if (puVar9 == (undefined *)0x0) {
    if (puVar5 == (undefined *)0x0) {
      puVar5 = PTR_LAB_00560984 + 0x28c8;
    }
    else {
      puVar5 = *(undefined **)(puVar5 + 0x18);
    }
    puVar9 = PTR_DAT_00560998 + -0x2538;
LAB_0052abb0:
    (*(code *)PTR_mxml_error_00561464)(puVar9,puVar5);
    goto LAB_0052a784;
  }
  if (param_5 != (code *)0x0) {
    uVar8 = 0;
LAB_0052a20c:
    (*param_5)(puVar9,uVar8,param_6);
    iVar3 = (*(code *)PTR_mxmlRelease_00561474)(puVar9);
    pcVar10 = local_58[0];
    if (iVar3 == 0) goto LAB_0052a234;
  }
LAB_0052b224:
  pcVar10 = local_58[0];
  if (puVar7 == (undefined *)0x0) {
    puVar7 = puVar9;
    pcVar10 = local_58[0];
  }
  goto LAB_0052a234;
  while (puVar9 = *(undefined **)(puVar11 + 0xc), *(undefined **)(puVar11 + 0xc) != (undefined *)0x0
        ) {
LAB_0052a6f0:
    puVar11 = puVar9;
    if (puVar11 == param_1) break;
  }
  if (puVar5 == puVar11) {
    return puVar5;
  }
  if (*(int *)(puVar5 + 0xc) == 0) {
    puVar9 = PTR_DAT_00560998 + -0x2668;
  }
  else {
    puVar9 = *(undefined **)(*(int *)(puVar5 + 0xc) + 0x18);
  }
  (*(code *)PTR_mxml_error_00561464)
            (PTR_DAT_00560998 + -0x2344,*(undefined4 *)(puVar5 + 0x18),puVar9);
  pcVar12 = (code *)PTR_mxmlDelete_00560c2c;
LAB_0052a754:
  (*pcVar12)(puVar7);
  return (undefined *)0x0;
}



// ==== mxmlLoadString @ 0052bde0 size=72

void mxmlLoadString(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_res4 [3];
  
  local_res4[0] = param_2;
  (*(code *)(PTR_LAB_00560984 + -0x6044))(param_1,local_res4,param_3,PTR_LAB_00560984 + -0x7968,0,0)
  ;
  return;
}



// ==== mxmlSaveString @ 0052bfd8 size=224

int mxmlSaveString(undefined4 param_1,undefined1 *param_2,int param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined4 local_20;
  
  local_20 = param_1;
  uVar2 = (*(code *)PTR__mxml_global_00560994)();
  puVar1 = PTR_LAB_00560984;
  local_28 = param_2;
  local_24 = param_2 + param_3;
  iVar3 = (*(code *)(PTR_LAB_00560984 + -0x4a1c))
                    (local_20,&local_28,param_4,PTR_LAB_00560984 + -0x7a70,uVar2);
  if (iVar3 < 0) {
    iVar3 = -1;
  }
  else {
    if (iVar3 != 0) {
      (*(code *)(puVar1 + -0x7a70))(10,&local_28);
    }
    if (local_28 < local_24) {
      *local_28 = 0;
    }
    else {
      (param_2 + param_3)[-1] = 0;
    }
    iVar3 = (int)local_28 - (int)param_2;
  }
  return iVar3;
}



// ==== mxmlRemove @ 0052c498 size=88

void mxmlRemove(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0xc), iVar1 != 0)) {
    iVar2 = *(int *)(param_1 + 8);
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 4);
    }
    else {
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 4);
    }
    if (*(int *)(param_1 + 4) == 0) {
      *(int *)(iVar1 + 0x14) = iVar2;
    }
    else {
      *(int *)(*(int *)(param_1 + 4) + 8) = iVar2;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



// ==== mxmlAdd @ 0052c4f0 size=336

void mxmlAdd(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != 0) && (param_4 != 0)) {
    if (*(int *)(param_4 + 0xc) != 0) {
      (*(code *)PTR_mxmlRemove_0056148c)(param_4);
    }
    *(int *)(param_4 + 0xc) = param_1;
    if (param_2 == 0) {
      iVar1 = *(int *)(param_1 + 0x10);
      if (((param_3 == 0) || (param_3 == iVar1)) || (*(int *)(param_3 + 0xc) != param_1)) {
        *(int *)(param_4 + 4) = iVar1;
        if (iVar1 == 0) {
          *(int *)(param_1 + 0x14) = param_4;
        }
        else {
          *(int *)(iVar1 + 8) = param_4;
        }
        *(int *)(param_1 + 0x10) = param_4;
      }
      else {
        uVar2 = *(undefined4 *)(param_3 + 8);
        *(int *)(param_4 + 4) = param_3;
        *(undefined4 *)(param_4 + 8) = uVar2;
        if (*(int *)(param_3 + 8) == 0) {
          *(int *)(param_1 + 0x10) = param_4;
        }
        else {
          *(int *)(*(int *)(param_3 + 8) + 4) = param_4;
        }
        *(int *)(param_3 + 8) = param_4;
      }
    }
    else if (param_2 == 1) {
      iVar1 = *(int *)(param_1 + 0x14);
      if (((param_3 == 0) || (param_3 == iVar1)) || (*(int *)(param_3 + 0xc) != param_1)) {
        *(int *)(param_4 + 8) = iVar1;
        if (iVar1 == 0) {
          *(int *)(param_1 + 0x10) = param_4;
        }
        else {
          *(int *)(iVar1 + 4) = param_4;
        }
        *(int *)(param_1 + 0x14) = param_4;
      }
      else {
        uVar2 = *(undefined4 *)(param_3 + 4);
        *(int *)(param_4 + 8) = param_3;
        *(undefined4 *)(param_4 + 4) = uVar2;
        if (*(int *)(param_3 + 4) == 0) {
          *(int *)(param_1 + 0x14) = param_4;
        }
        else {
          *(int *)(*(int *)(param_3 + 4) + 8) = param_4;
        }
        *(int *)(param_3 + 4) = param_4;
      }
    }
  }
  return;
}



// ==== mxmlNewCustom @ 0052c758 size=92

void mxmlNewCustom(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (*(code *)(PTR_LAB_00560984 + -0x39c0))(param_1,5);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x18) = param_2;
    *(undefined4 *)(iVar1 + 0x1c) = param_3;
  }
  return;
}



// ==== mxmlNewElement @ 0052c7b4 size=116

int mxmlNewElement(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 != 0) && (iVar1 = (*(code *)(PTR_LAB_00560984 + -0x39c0))(param_1,0), iVar1 != 0)) {
    uVar2 = (*(code *)PTR_strdup_0056151c)(param_2);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
    return iVar1;
  }
  return 0;
}



// ==== mxmlNewInteger @ 0052c828 size=76

void mxmlNewInteger(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)(PTR_LAB_00560984 + -0x39c0))(param_1,1);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x18) = param_2;
  }
  return;
}



// ==== mxmlNewOpaque @ 0052c874 size=116

int mxmlNewOpaque(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 != 0) && (iVar1 = (*(code *)(PTR_LAB_00560984 + -0x39c0))(param_1,2), iVar1 != 0)) {
    uVar2 = (*(code *)PTR_strdup_0056151c)(param_2);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
    return iVar1;
  }
  return 0;
}



// ==== mxmlNewReal @ 0052c96c size=80

void mxmlNewReal(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = (*(code *)(PTR_LAB_00560984 + -0x39c0))(param_1,3);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x18) = param_3;
    *(undefined4 *)(iVar1 + 0x1c) = param_4;
  }
  return;
}



// ==== mxmlNewText @ 0052c9bc size=132

int mxmlNewText(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_3 != 0) &&
     (iVar2 = (*(code *)(PTR_LAB_00560984 + -0x39c0))(param_1,4), puVar1 = PTR_strdup_0056151c,
     iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x18) = param_2;
    uVar3 = (*(code *)puVar1)(param_3);
    *(undefined4 *)(iVar2 + 0x1c) = uVar3;
    return iVar2;
  }
  return 0;
}



// ==== mxmlDelete @ 0052cad0 size=200

void mxmlDelete(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return;
  }
  (*(code *)PTR_mxmlRemove_0056148c)();
  puVar1 = PTR_LAB_00560984;
  iVar2 = *(int *)(param_1 + 0x10);
  while (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x10);
    if (iVar3 == 0) {
      iVar3 = *(int *)(iVar2 + 4);
      if ((*(int *)(iVar2 + 4) == 0) &&
         (iVar3 = *(int *)(iVar2 + 0xc), *(int *)(iVar2 + 0xc) == param_1)) {
        iVar3 = 0;
      }
      iVar2 = iVar3;
      (*(code *)(puVar1 + -0x3cd0))();
    }
    else {
      *(undefined4 *)(iVar2 + 0x10) = 0;
      iVar2 = iVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0052cb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_LAB_00560984 + -0x3cd0))(param_1);
  return;
}



// ==== mxmlNewXML @ 0052cb98 size=108

void mxmlNewXML(undefined *param_1)

{
  undefined1 auStack_408 [1024];
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_DAT_00560f88 + -0x6aac;
  }
  (*(code *)PTR_snprintf_00561544)(auStack_408,0x400,PTR_DAT_00560998 + -0x2200,param_1);
  (*(code *)PTR_mxmlNewElement_00560e3c)(0,auStack_408);
  return;
}



// ==== mxmlRelease @ 0052cc04 size=92

int mxmlRelease(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x28) + -1;
    *(int *)(param_1 + 0x28) = iVar1;
    if (iVar1 < 1) {
      (*(code *)PTR_mxmlDelete_00560c2c)();
      iVar1 = 0;
    }
    return iVar1;
  }
  return -1;
}



// ==== mxmlWalkNext @ 0052cc80 size=124

int mxmlWalkNext(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if ((iVar1 == 0) || (param_3 == 0)) {
    if (param_1 == param_2) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 4);
    if ((iVar1 == 0) && (iVar2 = *(int *)(param_1 + 0xc), iVar2 != 0)) {
      if (iVar2 == param_2) {
        return 0;
      }
      do {
        if (*(int *)(iVar2 + 4) != 0) {
          return *(int *)(iVar2 + 4);
        }
        iVar2 = *(int *)(iVar2 + 0xc);
        iVar1 = 0;
      } while ((iVar2 != param_2) && (iVar2 != 0));
    }
  }
  return iVar1;
}



// ==== mxmlFindElement @ 0052ccfc size=336

int * mxmlFindElement(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    piVar3 = (int *)0x0;
  }
  else if ((param_4 != 0) || (piVar3 = (int *)0x0, param_5 == 0)) {
    piVar1 = (int *)(*(code *)PTR_mxmlWalkNext_00561498)(param_1,param_2,param_6);
    while ((piVar3 = (int *)0x0, piVar1 != (int *)0x0 &&
           ((((*piVar1 != 0 || (piVar1[6] == 0)) ||
             ((param_3 != 0 &&
              (iVar2 = (*(code *)PTR_strcmp_005614e4)(piVar1[6],param_3), iVar2 != 0)))) ||
            ((piVar3 = piVar1, param_4 != 0 &&
             ((iVar2 = (*(code *)PTR_mxmlElementGetAttr_00560de0)(piVar1,param_4), iVar2 == 0 ||
              ((param_5 != 0 && (iVar2 = (*(code *)PTR_strcmp_005614e4)(param_5,iVar2), iVar2 != 0))
              ))))))))) {
      if (param_6 == 1) {
        piVar1 = (int *)(*(code *)PTR_mxmlWalkNext_00561498)(piVar1,param_2,1);
      }
      else {
        piVar1 = (int *)piVar1[1];
      }
    }
  }
  return piVar3;
}



// ==== mxmlEntityGetName @ 0052d32c size=116

undefined * mxmlEntityGetName(int param_1)

{
  if (param_1 == 0x26) {
    return PTR_DAT_00560998 + -0x301c;
  }
  if (param_1 < 0x27) {
    if (param_1 == 0x22) {
      return PTR_DAT_00560998 + -0x3010;
    }
  }
  else {
    if (param_1 == 0x3c) {
      return PTR_LAB_00560984 + 0x71ec;
    }
    if (param_1 == 0x3e) {
      return PTR_DAT_00560998 + -0x3020;
    }
  }
  return (undefined *)0x0;
}



// ==== mxmlEntityGetValue @ 0052d3a0 size=132

int mxmlEntityGetValue(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar1 = (*(code *)PTR__mxml_global_00560994)();
  iVar3 = *(int *)(iVar1 + 4);
  while( true ) {
    if (iVar3 <= iVar2) {
      return -1;
    }
    iVar3 = (**(code **)(iVar1 + iVar2 * 4 + 8))(param_1);
    iVar2 = iVar2 + 1;
    if (-1 < iVar3) break;
    iVar3 = *(int *)(iVar1 + 4);
  }
  return iVar3;
}



// ==== try_adjust_buf @ 0052da74 size=264

undefined4 try_adjust_buf(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*param_1 == 0) {
    param_3 = param_3 + *(int *)(*(int *)(PTR_DAT_0056098c + 0x900) + 8);
    if (param_3 < 1) {
      return 0;
    }
  }
  else {
    param_3 = param_3 + *(int *)(*(int *)(PTR_DAT_0056098c + 0x900) + 8);
    if (param_3 <= *param_2) {
      return 0;
    }
    if (param_3 < 1) {
      return 0;
    }
  }
  iVar1 = (*(code *)PTR_realloc_00561604)(*param_1,param_3);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_005614f0)();
    (*(code *)PTR_error_005615b8)
              (0,*puVar2,PTR_DAT_00560998 + -0x1ab8,PTR_DAT_00560998 + -0x19e0,param_3);
    return 0xffffffff;
  }
  *param_1 = iVar1;
  *param_2 = param_3;
  return 0;
}



// ==== ms_sleep @ 0052f858 size=104

void ms_sleep(uint param_1)

{
  uint local_10;
  int local_c;
  
  local_10 = param_1 / 1000;
  local_c = (param_1 % 1000) * 1000;
  select(0,0,0,0,&local_10);
  return;
}



// ==== __divdi3 @ 0052fe30 size=1472

void __divdi3(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  if ((int)param_2 < 0) {
    param_2 = -(uint)(param_1 != 0) - param_2;
  }
  if ((int)param_4 < 0) {
    param_3 = -param_3;
    param_4 = -(uint)(param_3 != 0) - param_4;
  }
  if (param_4 == 0) {
    if (param_2 < param_3) {
      if (param_3 < 0x10000) {
        iVar1 = 8;
        if (param_3 < 0x100) {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = 0x10;
        if (0xffffff < param_3) {
          iVar1 = 0x18;
        }
      }
      uVar2 = 0x20 - ((uint)(byte)PTR___clz_tab_005614ac[param_3 >> iVar1] + iVar1);
      if (uVar2 != 0) {
        param_3 = param_3 << (uVar2 & 0x1f);
      }
      if (param_3 >> 0x10 == 0) {
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
      }
    }
    else {
      if (param_3 == 0) {
        param_3 = 1 / 0;
        trap(0x1c00);
      }
      if (param_3 < 0x10000) {
        iVar1 = 8;
        if (param_3 < 0x100) {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = 0x10;
        if (0xffffff < param_3) {
          iVar1 = 0x18;
        }
      }
      uVar2 = 0x20 - ((uint)(byte)PTR___clz_tab_005614ac[param_3 >> iVar1] + iVar1);
      if ((uVar2 != 0) && (param_3 = param_3 << (uVar2 & 0x1f), param_3 >> 0x10 == 0)) {
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
      }
      if (param_3 >> 0x10 == 0) {
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
      }
    }
  }
  else if (param_4 <= param_2) {
    if (param_4 < 0x10000) {
      iVar1 = 8;
      if (param_4 < 0x100) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0x10;
      if (0xffffff < param_4) {
        iVar1 = 0x18;
      }
    }
    uVar2 = 0x20 - ((uint)(byte)PTR___clz_tab_005614ac[param_4 >> iVar1] + iVar1);
    if ((uVar2 != 0) &&
       ((param_4 << (uVar2 & 0x1f) |
        param_3 >> ((uint)(byte)PTR___clz_tab_005614ac[param_4 >> iVar1] + iVar1 & 0x1f)) >> 0x10 ==
        0)) {
      trap(0x1c00);
      trap(0x1c00);
      trap(0x1c00);
      trap(0x1c00);
    }
  }
  return;
}



// ==== __moddi3 @ 00530400 size=1456

void __moddi3(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  if ((int)param_2 < 0) {
    param_2 = -(uint)(param_1 != 0) - param_2;
  }
  if ((int)param_4 < 0) {
    param_3 = -param_3;
    param_4 = -(uint)(param_3 != 0) - param_4;
  }
  if (param_4 == 0) {
    if (param_2 < param_3) {
      if (param_3 < 0x10000) {
        iVar1 = 8;
        if (param_3 < 0x100) {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = 0x10;
        if (0xffffff < param_3) {
          iVar1 = 0x18;
        }
      }
      uVar2 = 0x20 - ((uint)(byte)PTR___clz_tab_005614ac[param_3 >> iVar1] + iVar1);
      if (uVar2 != 0) {
        param_3 = param_3 << (uVar2 & 0x1f);
      }
      if (param_3 >> 0x10 == 0) {
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
      }
    }
    else {
      if (param_3 == 0) {
        param_3 = 1 / 0;
        trap(0x1c00);
      }
      if (param_3 < 0x10000) {
        iVar1 = 8;
        if (param_3 < 0x100) {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = 0x10;
        if (0xffffff < param_3) {
          iVar1 = 0x18;
        }
      }
      uVar2 = 0x20 - ((uint)(byte)PTR___clz_tab_005614ac[param_3 >> iVar1] + iVar1);
      if ((uVar2 != 0) && (param_3 = param_3 << (uVar2 & 0x1f), param_3 >> 0x10 == 0)) {
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
      }
      if (param_3 >> 0x10 == 0) {
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
      }
    }
  }
  else if (param_4 <= param_2) {
    if (param_4 < 0x10000) {
      iVar1 = 8;
      if (param_4 < 0x100) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0x10;
      if (0xffffff < param_4) {
        iVar1 = 0x18;
      }
    }
    uVar2 = 0x20 - ((uint)(byte)PTR___clz_tab_005614ac[param_4 >> iVar1] + iVar1);
    if ((uVar2 != 0) &&
       ((param_4 << (uVar2 & 0x1f) |
        param_3 >> ((uint)(byte)PTR___clz_tab_005614ac[param_4 >> iVar1] + iVar1 & 0x1f)) >> 0x10 ==
        0)) {
      trap(0x1c00);
      trap(0x1c00);
      trap(0x1c00);
      trap(0x1c00);
    }
  }
  return;
}



// ==== __udivdi3 @ 005309c0 size=1388

undefined8 __udivdi3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if (param_4 == 0) {
    if (param_3 <= param_2) {
      if (param_3 == 0) {
        param_3 = 1 / 0;
        trap(0x1c00);
      }
      if (param_3 < 0x10000) {
        iVar3 = 8;
        if (param_3 < 0x100) {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = 0x10;
        if (0xffffff < param_3) {
          iVar3 = 0x18;
        }
      }
      uVar9 = (uint)(byte)PTR___clz_tab_005614ac[param_3 >> iVar3] + iVar3;
      uVar7 = 0x20 - uVar9;
      if (uVar7 == 0) {
        param_2 = param_2 - param_3;
        uVar7 = 1;
        uVar6 = param_1;
      }
      else {
        param_3 = param_3 << (uVar7 & 0x1f);
        uVar4 = param_2 >> (uVar9 & 0x1f);
        uVar6 = param_1 << (uVar7 & 0x1f);
        uVar2 = param_3 >> 0x10;
        uVar10 = uVar4 / uVar2;
        if (uVar2 == 0) {
          trap(0x1c00);
        }
        uVar7 = param_2 << (uVar7 & 0x1f) | param_1 >> (uVar9 & 0x1f);
        if (uVar2 == 0) {
          trap(0x1c00);
        }
        uVar5 = uVar4 % uVar2 << 0x10 | uVar7 >> 0x10;
        uVar9 = uVar10 * (param_3 & 0xffff);
        uVar4 = uVar10;
        if (uVar5 < uVar9) {
          uVar5 = uVar5 + param_3;
          uVar4 = uVar10 - 1;
          if ((param_3 <= uVar5) && (uVar5 < uVar9)) {
            uVar4 = uVar10 - 2;
            uVar5 = uVar5 + param_3;
          }
        }
        uVar10 = (uVar5 - uVar9) / uVar2;
        if (uVar2 == 0) {
          trap(0x1c00);
          trap(0x1c00);
        }
        param_2 = (uVar5 - uVar9) % uVar2 << 0x10 | uVar7 & 0xffff;
        uVar9 = uVar10 * (param_3 & 0xffff);
        uVar7 = uVar10;
        if (param_2 < uVar9) {
          param_2 = param_2 + param_3;
          uVar7 = uVar10 - 1;
          if ((param_3 <= param_2) && (param_2 < uVar9)) {
            uVar7 = uVar10 - 2;
            param_2 = param_2 + param_3;
          }
        }
        param_2 = param_2 - uVar9;
        uVar7 = uVar7 | uVar4 << 0x10;
      }
      uVar9 = param_3 >> 0x10;
      uVar2 = param_2 / uVar9;
      if (uVar9 == 0) {
        trap(0x1c00);
      }
      if (uVar9 == 0) {
        trap(0x1c00);
      }
      uVar5 = param_2 % uVar9 << 0x10 | uVar6 >> 0x10;
      uVar4 = uVar2 * (param_3 & 0xffff);
      uVar10 = uVar2;
      if (uVar5 < uVar4) {
        uVar5 = uVar5 + param_3;
        uVar10 = uVar2 - 1;
        if ((param_3 <= uVar5) && (uVar5 < uVar4)) {
          uVar10 = uVar2 - 2;
          uVar5 = uVar5 + param_3;
        }
      }
      uVar2 = (uVar5 - uVar4) / uVar9;
      if (uVar9 == 0) {
        trap(0x1c00);
        trap(0x1c00);
      }
      uVar4 = (uVar5 - uVar4) % uVar9 << 0x10 | uVar6 & 0xffff;
      uVar6 = uVar2 * (param_3 & 0xffff);
      uVar9 = uVar2;
      if (uVar4 < uVar6) {
        uVar4 = uVar4 + param_3;
        uVar9 = uVar2 - 1;
        if ((param_3 <= uVar4) && (uVar4 < uVar6)) {
          uVar9 = uVar2 - 2;
        }
      }
      uVar9 = uVar9 | uVar10 << 0x10;
      goto LAB_00530f24;
    }
    if (param_3 < 0x10000) {
      iVar3 = 8;
      if (param_3 < 0x100) {
        iVar3 = 0;
      }
    }
    else {
      iVar3 = 0x10;
      if (0xffffff < param_3) {
        iVar3 = 0x18;
      }
    }
    uVar9 = param_3 >> iVar3;
    uVar7 = 0x20 - ((uint)(byte)PTR___clz_tab_005614ac[uVar9] + iVar3);
    if (uVar7 != 0) {
      param_3 = param_3 << (uVar7 & 0x1f);
      param_2 = param_2 << (uVar7 & 0x1f) |
                param_1 >> ((uint)(byte)PTR___clz_tab_005614ac[uVar9] + iVar3 & 0x1f);
      param_1 = param_1 << (uVar7 & 0x1f);
    }
    uVar7 = param_3 >> 0x10;
    uVar9 = param_2 / uVar7;
    if (uVar7 == 0) {
      trap(0x1c00);
    }
    if (uVar7 == 0) {
      trap(0x1c00);
    }
    uVar4 = param_2 % uVar7 << 0x10 | param_1 >> 0x10;
    uVar6 = uVar9 * (param_3 & 0xffff);
    uVar2 = uVar9;
    if (uVar4 < uVar6) {
      uVar4 = uVar4 + param_3;
      uVar2 = uVar9 - 1;
      if ((param_3 <= uVar4) && (uVar4 < uVar6)) {
        uVar2 = uVar9 - 2;
        uVar4 = uVar4 + param_3;
      }
    }
    uVar10 = (uVar4 - uVar6) / uVar7;
    if (uVar7 == 0) {
      trap(0x1c00);
      trap(0x1c00);
    }
    uVar6 = (uVar4 - uVar6) % uVar7 << 0x10 | param_1 & 0xffff;
    uVar7 = uVar10 * (param_3 & 0xffff);
    uVar9 = uVar10;
    if (uVar6 < uVar7) {
      uVar6 = uVar6 + param_3;
      uVar9 = uVar10 - 1;
      if ((param_3 <= uVar6) && (uVar6 < uVar7)) {
        uVar9 = uVar10 - 2;
      }
    }
    uVar9 = uVar9 | uVar2 << 0x10;
  }
  else {
    uVar7 = 0;
    if (param_2 < param_4) {
      uVar9 = 0;
      goto LAB_00530f24;
    }
    if (param_4 < 0x10000) {
      iVar3 = 8;
      if (param_4 < 0x100) {
        iVar3 = 0;
      }
    }
    else {
      iVar3 = 0x10;
      if (0xffffff < param_4) {
        iVar3 = 0x18;
      }
    }
    uVar7 = (uint)(byte)PTR___clz_tab_005614ac[param_4 >> iVar3] + iVar3;
    uVar6 = 0x20 - uVar7;
    uVar9 = param_2 >> (uVar7 & 0x1f);
    if (uVar6 == 0) {
      if (param_4 < param_2) {
        uVar7 = 0;
        uVar9 = 1;
        goto LAB_00530f24;
      }
      uVar9 = param_1 < param_3 ^ 1;
    }
    else {
      uVar2 = param_4 << (uVar6 & 0x1f) | param_3 >> (uVar7 & 0x1f);
      uVar4 = uVar2 >> 0x10;
      uVar10 = uVar9 / uVar4;
      if (uVar4 == 0) {
        trap(0x1c00);
      }
      uVar7 = param_2 << (uVar6 & 0x1f) | param_1 >> (uVar7 & 0x1f);
      if (uVar4 == 0) {
        trap(0x1c00);
      }
      uVar8 = uVar9 % uVar4 << 0x10 | uVar7 >> 0x10;
      uVar9 = uVar10 * (uVar2 & 0xffff);
      uVar5 = uVar10;
      if (uVar8 < uVar9) {
        uVar8 = uVar8 + uVar2;
        uVar5 = uVar10 - 1;
        if ((uVar2 <= uVar8) && (uVar8 < uVar9)) {
          uVar5 = uVar10 - 2;
          uVar8 = uVar8 + uVar2;
        }
      }
      uVar10 = (uVar8 - uVar9) / uVar4;
      if (uVar4 == 0) {
        trap(0x1c00);
        trap(0x1c00);
      }
      uVar8 = (uVar8 - uVar9) % uVar4 << 0x10 | uVar7 & 0xffff;
      uVar4 = uVar10 * (uVar2 & 0xffff);
      uVar9 = uVar10;
      if (uVar8 < uVar4) {
        uVar8 = uVar8 + uVar2;
        uVar9 = uVar10 - 1;
        if ((uVar2 <= uVar8) && (uVar8 < uVar4)) {
          uVar9 = uVar10 - 2;
          uVar8 = uVar8 + uVar2;
        }
      }
      uVar9 = uVar9 | uVar5 << 0x10;
      lVar1 = (ulonglong)uVar9 * (ulonglong)(param_3 << (uVar6 & 0x1f));
      uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
      if ((uVar2 <= uVar8 - uVar4) &&
         ((uVar7 = 0, uVar2 != uVar8 - uVar4 || ((uint)lVar1 <= param_1 << (uVar6 & 0x1f)))))
      goto LAB_00530f24;
      uVar9 = uVar9 - 1;
    }
  }
  uVar7 = 0;
LAB_00530f24:
  return CONCAT44(uVar7,uVar9);
}



// ==== __umoddi3 @ 00530f40 size=1376

undefined8 __umoddi3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_4 == 0) {
    if (param_2 < param_3) {
      if (param_3 < 0x10000) {
        iVar2 = 8;
        if (param_3 < 0x100) {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = 0x10;
        if (0xffffff < param_3) {
          iVar2 = 0x18;
        }
      }
      uVar7 = param_3 >> iVar2;
      uVar8 = 0x20 - ((uint)(byte)PTR___clz_tab_005614ac[uVar7] + iVar2);
      if (uVar8 != 0) {
        param_3 = param_3 << (uVar8 & 0x1f);
        param_2 = param_2 << (uVar8 & 0x1f) |
                  param_1 >> ((uint)(byte)PTR___clz_tab_005614ac[uVar7] + iVar2 & 0x1f);
        param_1 = param_1 << (uVar8 & 0x1f);
      }
      uVar7 = param_3 >> 0x10;
      if (uVar7 == 0) {
        trap(0x1c00);
      }
      if (uVar7 == 0) {
        trap(0x1c00);
      }
      uVar4 = param_2 % uVar7 << 0x10 | param_1 >> 0x10;
      uVar6 = (param_2 / uVar7) * (param_3 & 0xffff);
      if (uVar4 < uVar6) {
        uVar4 = uVar4 + param_3;
        if ((param_3 <= uVar4) && (uVar4 < uVar6)) {
          uVar4 = uVar4 + param_3;
        }
      }
      if (uVar7 == 0) {
        trap(0x1c00);
        trap(0x1c00);
      }
      uVar3 = (uVar4 - uVar6) % uVar7 << 0x10 | param_1 & 0xffff;
      uVar7 = ((uVar4 - uVar6) / uVar7) * (param_3 & 0xffff);
      if (uVar3 < uVar7) {
        uVar3 = uVar3 + param_3;
        if ((param_3 <= uVar3) && (uVar3 < uVar7)) {
          uVar3 = uVar3 + param_3;
        }
      }
      uVar3 = uVar3 - uVar7;
    }
    else {
      if (param_3 == 0) {
        param_3 = 1 / 0;
        trap(0x1c00);
      }
      if (param_3 < 0x10000) {
        iVar2 = 8;
        if (param_3 < 0x100) {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = 0x10;
        if (0xffffff < param_3) {
          iVar2 = 0x18;
        }
      }
      uVar7 = (uint)(byte)PTR___clz_tab_005614ac[param_3 >> iVar2] + iVar2;
      uVar8 = 0x20 - uVar7;
      uVar6 = param_2 >> (uVar7 & 0x1f);
      if (uVar8 == 0) {
        param_2 = param_2 - param_3;
      }
      else {
        param_3 = param_3 << (uVar8 & 0x1f);
        uVar4 = param_2 << (uVar8 & 0x1f) | param_1 >> (uVar7 & 0x1f);
        uVar7 = param_3 >> 0x10;
        if (uVar7 == 0) {
          trap(0x1c00);
        }
        param_1 = param_1 << (uVar8 & 0x1f);
        if (uVar7 == 0) {
          trap(0x1c00);
        }
        uVar3 = uVar6 % uVar7 << 0x10 | uVar4 >> 0x10;
        uVar6 = (uVar6 / uVar7) * (param_3 & 0xffff);
        if (uVar3 < uVar6) {
          uVar3 = uVar3 + param_3;
          if ((param_3 <= uVar3) && (uVar3 < uVar6)) {
            uVar3 = uVar3 + param_3;
          }
        }
        if (uVar7 == 0) {
          trap(0x1c00);
          trap(0x1c00);
        }
        param_2 = (uVar3 - uVar6) % uVar7 << 0x10 | uVar4 & 0xffff;
        uVar7 = ((uVar3 - uVar6) / uVar7) * (param_3 & 0xffff);
        if (param_2 < uVar7) {
          param_2 = param_2 + param_3;
          if ((param_3 <= param_2) && (param_2 < uVar7)) {
            param_2 = param_2 + param_3;
          }
        }
        param_2 = param_2 - uVar7;
      }
      uVar7 = param_3 >> 0x10;
      if (uVar7 == 0) {
        trap(0x1c00);
      }
      if (uVar7 == 0) {
        trap(0x1c00);
      }
      uVar4 = param_2 % uVar7 << 0x10 | param_1 >> 0x10;
      uVar6 = (param_2 / uVar7) * (param_3 & 0xffff);
      if (uVar4 < uVar6) {
        uVar4 = uVar4 + param_3;
        if ((param_3 <= uVar4) && (uVar4 < uVar6)) {
          uVar4 = uVar4 + param_3;
        }
      }
      if (uVar7 == 0) {
        trap(0x1c00);
        trap(0x1c00);
      }
      uVar3 = (uVar4 - uVar6) % uVar7 << 0x10 | param_1 & 0xffff;
      uVar7 = ((uVar4 - uVar6) / uVar7) * (param_3 & 0xffff);
      if (uVar3 < uVar7) {
        uVar3 = uVar3 + param_3;
        if ((param_3 <= uVar3) && (uVar3 < uVar7)) {
          uVar3 = uVar3 + param_3;
        }
      }
      uVar3 = uVar3 - uVar7;
    }
    param_2 = 0;
    uVar7 = uVar3 >> (uVar8 & 0x1f);
  }
  else {
    uVar7 = param_1;
    if (param_4 <= param_2) {
      if (param_4 < 0x10000) {
        iVar2 = 8;
        if (param_4 < 0x100) {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = 0x10;
        if (0xffffff < param_4) {
          iVar2 = 0x18;
        }
      }
      uVar6 = (uint)(byte)PTR___clz_tab_005614ac[param_4 >> iVar2] + iVar2;
      uVar8 = 0x20 - uVar6;
      if (uVar8 == 0) {
        if ((param_4 < param_2) || (param_3 <= param_1)) {
          uVar7 = param_1 - param_3;
          param_2 = (param_2 - param_4) - (uint)(param_1 < uVar7);
        }
      }
      else {
        uVar7 = param_4 << (uVar8 & 0x1f) | param_3 >> (uVar6 & 0x1f);
        uVar4 = uVar7 >> 0x10;
        uVar3 = param_2 >> (uVar6 & 0x1f);
        uVar11 = uVar3 / uVar4;
        if (uVar4 == 0) {
          trap(0x1c00);
        }
        uVar5 = param_2 << (uVar8 & 0x1f) | param_1 >> (uVar6 & 0x1f);
        param_3 = param_3 << (uVar8 & 0x1f);
        param_1 = param_1 << (uVar8 & 0x1f);
        if (uVar4 == 0) {
          trap(0x1c00);
        }
        uVar9 = uVar3 % uVar4 << 0x10 | uVar5 >> 0x10;
        uVar3 = uVar11 * (uVar7 & 0xffff);
        uVar10 = uVar11;
        if (uVar9 < uVar3) {
          uVar9 = uVar9 + uVar7;
          uVar10 = uVar11 - 1;
          if ((uVar7 <= uVar9) && (uVar9 < uVar3)) {
            uVar10 = uVar11 - 2;
            uVar9 = uVar9 + uVar7;
          }
        }
        uVar11 = (uVar9 - uVar3) / uVar4;
        if (uVar4 == 0) {
          trap(0x1c00);
          trap(0x1c00);
        }
        uVar5 = (uVar9 - uVar3) % uVar4 << 0x10 | uVar5 & 0xffff;
        uVar4 = uVar11 * (uVar7 & 0xffff);
        uVar3 = uVar11;
        if (uVar5 < uVar4) {
          uVar5 = uVar5 + uVar7;
          uVar3 = uVar11 - 1;
          if ((uVar7 <= uVar5) && (uVar5 < uVar4)) {
            uVar3 = uVar11 - 2;
            uVar5 = uVar5 + uVar7;
          }
        }
        uVar5 = uVar5 - uVar4;
        lVar1 = (ulonglong)(uVar3 | uVar10 << 0x10) * (ulonglong)param_3;
        uVar3 = (uint)lVar1;
        uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
        if ((uVar5 < uVar4) || ((uVar4 == uVar5 && (param_1 < uVar3)))) {
          param_3 = uVar3 - param_3;
          lVar1 = CONCAT44((uVar4 - uVar7) - (uint)(uVar3 < param_3),param_3);
        }
        uVar4 = param_1 - (int)lVar1;
        uVar7 = (uVar5 - (int)((ulonglong)lVar1 >> 0x20)) - (uint)(param_1 < uVar4);
        param_2 = uVar7 >> (uVar8 & 0x1f);
        uVar7 = uVar7 << (uVar6 & 0x1f) | uVar4 >> (uVar8 & 0x1f);
      }
    }
  }
  return CONCAT44(param_2,uVar7);
}



// ==== __PLT_HEAD @ 0054ea60 size=48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __PLT_HEAD(void)

{
  (*___DT_MIPS_PLTGOT)();
  (*(code *)PTR_pthread_detach_0055fc20)();
  return;
}



// ==== printf @ 0054ea90 size=16

void printf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054ea9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_printf_0055fc24)();
  return;
}



// ==== exit @ 0054eaa0 size=4

void exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054eaac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_exit_0055fc28)();
  return;
}



// ==== alarm @ 0054eab0 size=16

void alarm(void)

{
  (*(code *)PTR_alarm_0055fc2c)();
  return;
}



// ==== memmove @ 0054ead0 size=16

void memmove(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054eadc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_memmove_0055fc34)();
  return;
}



// ==== __sigsetjmp @ 0054eaf0 size=4

void __sigsetjmp(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054eafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sigsetjmp_0055fc3c)();
  return;
}



// ==== ftruncate @ 0054eb00 size=16

void ftruncate(void)

{
  (*(code *)PTR_ftruncate_0055fc40)();
  return;
}



// ==== strstr @ 0054eb10 size=16

void strstr(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054eb1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strstr_0055fc44)();
  return;
}



// ==== clock_gettime @ 0054eb20 size=4

void clock_gettime(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054eb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_clock_gettime_0055fc48)();
  return;
}



// ==== fcntl64 @ 0054eb40 size=16

void fcntl64(void)

{
  (*(code *)PTR_fcntl64_0055fc50)();
  return;
}



// ==== fgets @ 0054eb50 size=16

void fgets(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054eb5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fgets_0055fc54)();
  return;
}



// ==== fopen64 @ 0054eb60 size=4

void fopen64(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054eb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fopen64_0055fc58)();
  return;
}



// ==== close @ 0054eb70 size=16

void close(void)

{
  (*(code *)PTR_close_0055fc5c)();
  return;
}



// ==== strchr @ 0054eb90 size=16

void strchr(void)

{
  (*(code *)PTR_strchr_0055fc64)();
  return;
}



// ==== siglongjmp @ 0054ebb0 size=4

void siglongjmp(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054ebbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_siglongjmp_0055fc6c)();
  return;
}



// ==== __fpclassify @ 0054ebd0 size=4

void __fpclassify(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054ebdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___fpclassify_0055fc74)();
  return;
}



// ==== strncmp @ 0054ebe0 size=16

void strncmp(void)

{
  (*(code *)PTR_strncmp_0055fc78)();
  return;
}



// ==== freeaddrinfo @ 0054ebf0 size=4

void freeaddrinfo(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054ebfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_freeaddrinfo_0055fc7c)();
  return;
}



// ==== strrchr @ 0054ec10 size=20

void strrchr(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054ec1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strrchr_0055fc84)();
  return;
}



// ==== strerror @ 0054ec30 size=16

void strerror(void)

{
  (*(code *)PTR_strerror_0055fc8c)();
  return;
}



// ==== fputs @ 0054ec50 size=4

void fputs(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054ec5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fputs_0055fc94)();
  return;
}



// ==== modf @ 0054ec70 size=4

void modf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054ec7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_modf_0055fc9c)();
  return;
}



// ==== unlink @ 0054ec80 size=16

void unlink(void)

{
  (*(code *)PTR_unlink_0055fca0)();
  return;
}



// ==== strtoll @ 0054ec90 size=16

void strtoll(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054ec9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strtoll_0055fca4)();
  return;
}



// ==== AES_set_encrypt_key @ 0054eca0 size=16

void AES_set_encrypt_key(void)

{
  (*(code *)PTR_AES_set_encrypt_key_0055fca8)();
  return;
}



// ==== __isinf @ 0054ecb0 size=4

void __isinf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054ecbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___isinf_0055fcac)();
  return;
}



// ==== mmap @ 0054ecc0 size=16

void mmap(void)

{
  (*(code *)PTR_mmap_0055fcb0)();
  return;
}



// ==== fflush @ 0054ece0 size=16

void fflush(void)

{
  (*(code *)PTR_fflush_0055fcb8)();
  return;
}



// ==== waitpid @ 0054ed00 size=16

void waitpid(void)

{
  (*(code *)PTR_waitpid_0055fcc0)();
  return;
}



// ==== memcpy @ 0054ed10 size=16

void memcpy(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054ed1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_memcpy_0055fcc4)();
  return;
}



// ==== fmod @ 0054ed20 size=4

void fmod(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054ed2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fmod_0055fcc8)();
  return;
}



// ==== getsockname @ 0054ed30 size=16

void getsockname(void)

{
  (*(code *)PTR_getsockname_0055fccc)();
  return;
}



// ==== usleep @ 0054ed40 size=16

void usleep(void)

{
  (*(code *)PTR_usleep_0055fcd0)();
  return;
}



// ==== stat64 @ 0054ed50 size=4

void stat64(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054ed5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_stat64_0055fcd4)();
  return;
}



// ==== pclose @ 0054ed60 size=16

void pclose(void)

{
  (*(code *)PTR_pclose_0055fcd8)();
  return;
}



// ==== recv @ 0054ed70 size=4

void recv(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054ed7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_recv_0055fcdc)();
  return;
}



// ==== tolower @ 0054ed90 size=4

void tolower(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054ed9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_tolower_0055fce4)();
  return;
}



// ==== localtime @ 0054eda0 size=16

void localtime(void)

{
  (*(code *)PTR_localtime_0055fce8)();
  return;
}



// ==== qsort @ 0054edb0 size=4

void qsort(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054edbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_qsort_0055fcec)();
  return;
}



// ==== fstat @ 0054edc0 size=16

void fstat(void)

{
  (*(code *)PTR_fstat_0055fcf0)();
  return;
}



// ==== fileno @ 0054ede0 size=16

void fileno(void)

{
  (*(code *)PTR_fileno_0055fcf8)();
  return;
}



// ==== putchar @ 0054edf0 size=4

void putchar(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054edfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_putchar_0055fcfc)();
  return;
}



// ==== memset @ 0054ee00 size=16

void memset(void)

{
  (*(code *)PTR_memset_0055fd00)();
  return;
}



// ==== sigaction @ 0054ee10 size=4

void sigaction(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054ee1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_sigaction_0055fd04)();
  return;
}



// ==== getenv @ 0054ee20 size=16

void getenv(void)

{
  (*(code *)PTR_getenv_0055fd08)();
  return;
}



// ==== strtok_r @ 0054ee30 size=4

void strtok_r(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054ee3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strtok_r_0055fd0c)();
  return;
}



// ==== __assert @ 0054ee40 size=16

void __assert(void)

{
  (*(code *)PTR___assert_0055fd10)();
  return;
}



// ==== __xpg_basename @ 0054ee50 size=4

void __xpg_basename(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054ee5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___xpg_basename_0055fd14)();
  return;
}



// ==== getcwd @ 0054ee60 size=16

void getcwd(void)

{
  (*(code *)PTR_getcwd_0055fd18)();
  return;
}



// ==== freeifaddrs @ 0054ee70 size=4

void freeifaddrs(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054ee7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_freeifaddrs_0055fd1c)();
  return;
}



// ==== AES_cbc_encrypt @ 0054ee80 size=16

void AES_cbc_encrypt(void)

{
  (*(code *)PTR_AES_cbc_encrypt_0055fd20)();
  return;
}



// ==== popen @ 0054ee90 size=4

void popen(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054ee9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_popen_0055fd24)();
  return;
}



// ==== perror @ 0054eeb0 size=16

void perror(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054eebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_perror_0055fd2c)();
  return;
}



// ==== strncasecmp @ 0054eec0 size=4

void strncasecmp(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054eecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strncasecmp_0055fd30)();
  return;
}



// ==== strcpy @ 0054eed0 size=16

void strcpy(void)

{
  (*(code *)PTR_strcpy_0055fd34)();
  return;
}



// ==== read @ 0054eee0 size=16

void read(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054eeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_read_0055fd38)();
  return;
}



// ==== system @ 0054eef0 size=4

void system(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054eefc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_system_0055fd3c)();
  return;
}



// ==== __signbit @ 0054ef00 size=16

void __signbit(void)

{
  (*(code *)PTR___signbit_0055fd40)();
  return;
}



// ==== setsockopt @ 0054ef10 size=16

void setsockopt(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054ef1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_setsockopt_0055fd44)();
  return;
}



// ==== sendto @ 0054ef20 size=16

void sendto(void)

{
  (*(code *)PTR_sendto_0055fd48)();
  return;
}



// ==== strcat @ 0054ef30 size=16

void strcat(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054ef3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strcat_0055fd4c)();
  return;
}



// ==== geteuid @ 0054ef40 size=20

void geteuid(void)

{
  (*(code *)PTR_geteuid_0055fd50)();
  return;
}



// ==== if_nametoindex @ 0054ef60 size=16

void if_nametoindex(void)

{
  (*(code *)PTR_if_nametoindex_0055fd58)();
  return;
}



// ==== getpwuid_r @ 0054ef70 size=4

void getpwuid_r(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054ef7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_getpwuid_r_0055fd5c)();
  return;
}



// ==== mq_send @ 0054ef80 size=16

void mq_send(void)

{
  (*(code *)PTR_mq_send_0055fd60)();
  return;
}



// ==== atoi @ 0054efa0 size=1

void atoi(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054efac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_atoi_0055fd68)();
  return;
}



// ==== puts @ 0054efd0 size=16

void puts(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054efdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_puts_0055fd74)();
  return;
}



// ==== vsnprintf @ 0054efe0 size=4

void vsnprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054efec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_vsnprintf_0055fd78)();
  return;
}



// ==== fopen @ 0054eff0 size=16

void fopen(void)

{
  (*(code *)PTR_fopen_0055fd7c)();
  return;
}



// ==== rand_r @ 0054f000 size=16

void rand_r(void)

{
  (*(code *)PTR_rand_r_0055fd80)();
  return;
}



// ==== ferror @ 0054f010 size=4

void ferror(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_ferror_0055fd84)();
  return;
}



// ==== snprintf @ 0054f020 size=16

void snprintf(void)

{
  (*(code *)PTR_snprintf_0055fd88)();
  return;
}



// ==== fcntl @ 0054f030 size=4

void fcntl(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fcntl_0055fd8c)();
  return;
}



// ==== access @ 0054f040 size=16

void access(void)

{
  (*(code *)PTR_access_0055fd90)();
  return;
}



// ==== getpid @ 0054f050 size=16

void getpid(void)

{
  (*(code *)PTR_getpid_0055fd94)();
  return;
}



// ==== __glibc_strerror_r @ 0054f060 size=4

void __glibc_strerror_r(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f06c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___glibc_strerror_r_0055fd98)();
  return;
}



// ==== memchr @ 0054f070 size=16

void memchr(void)

{
  (*(code *)PTR_memchr_0055fd9c)();
  return;
}



// ==== write @ 0054f080 size=4

void write(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0055fda0)();
  return;
}



// ==== strcasecmp @ 0054f090 size=16

void strcasecmp(void)

{
  (*(code *)PTR_strcasecmp_0055fda4)();
  return;
}



// ==== vfprintf @ 0054f0a0 size=16

void vfprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f0ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_vfprintf_0055fda8)();
  return;
}



// ==== socket @ 0054f0b0 size=4

void socket(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_socket_0055fdac)();
  return;
}



// ==== gettimeofday @ 0054f0e0 size=4

void gettimeofday(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_gettimeofday_0055fdb8)();
  return;
}



// ==== __xpg_strerror_r @ 0054f0f0 size=16

void __xpg_strerror_r(void)

{
  (*(code *)PTR___xpg_strerror_r_0055fdbc)();
  return;
}



// ==== time @ 0054f100 size=16

void time(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f10c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_time_0055fdc0)();
  return;
}



// ==== fseek @ 0054f110 size=4

void fseek(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f11c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fseek_0055fdc4)();
  return;
}



// ==== strncpy @ 0054f120 size=16

void strncpy(void)

{
  (*(code *)PTR_strncpy_0055fdc8)();
  return;
}



// ==== memcmp @ 0054f130 size=4

void memcmp(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0055fdcc)();
  return;
}



// ==== getifaddrs @ 0054f140 size=16

void getifaddrs(void)

{
  (*(code *)PTR_getifaddrs_0055fdd0)();
  return;
}



// ==== fclose @ 0054f150 size=16

void fclose(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fclose_0055fdd4)();
  return;
}



// ==== inet_ntop @ 0054f170 size=16

void inet_ntop(void)

{
  (*(code *)PTR_inet_ntop_0055fddc)();
  return;
}



// ==== getaddrinfo @ 0054f180 size=4

void getaddrinfo(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0055fde0)();
  return;
}



// ==== pow @ 0054f190 size=16

void pow(void)

{
  (*(code *)PTR_pow_0055fde4)();
  return;
}



// ==== gai_strerror @ 0054f1b0 size=4

void gai_strerror(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_gai_strerror_0055fdec)();
  return;
}



// ==== lseek @ 0054f1e0 size=16

void lseek(void)

{
  (*(code *)PTR_lseek_0055fdf8)();
  return;
}



// ==== kill @ 0054f1f0 size=16

void kill(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_kill_0055fdfc)();
  return;
}



// ==== strtoul @ 0054f200 size=4

void strtoul(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strtoul_0055fe00)();
  return;
}



// ==== open @ 0054f210 size=16

void open(void)

{
  (*(code *)PTR_open_0055fe04)();
  return;
}



// ==== sprintf @ 0054f220 size=4

void sprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0055fe08)();
  return;
}



// ==== sleep @ 0054f230 size=16

void sleep(void)

{
  (*(code *)PTR_sleep_0055fe0c)();
  return;
}



// ==== signal @ 0054f240 size=4

void signal(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0055fe10)();
  return;
}



// ==== iconv @ 0054f250 size=16

void iconv(void)

{
  (*(code *)PTR_iconv_0055fe14)();
  return;
}



// ==== connect @ 0054f260 size=4

void connect(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0055fe18)();
  return;
}



// ==== select @ 0054f270 size=16

void select(void)

{
  (*(code *)PTR_select_0055fe1c)();
  return;
}



// ==== poll @ 0054f280 size=4

void poll(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0055fe20)();
  return;
}



// ==== sscanf @ 0054f290 size=16

void sscanf(void)

{
  (*(code *)PTR_sscanf_0055fe24)();
  return;
}



// ==== bind @ 0054f2a0 size=4

void bind(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0055fe28)();
  return;
}



// ==== strlen @ 0054f2b0 size=16

void strlen(void)

{
  (*(code *)PTR_strlen_0055fe2c)();
  return;
}



// ==== strtol @ 0054f2c0 size=4

void strtol(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strtol_0055fe30)();
  return;
}



// ==== rename @ 0054f2f0 size=16

void rename(void)

{
  (*(code *)PTR_rename_0055fe3c)();
  return;
}



// ==== inet_pton @ 0054f300 size=16

void inet_pton(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f30c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_inet_pton_0055fe40)();
  return;
}



// ==== getsockopt @ 0054f310 size=4

void getsockopt(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_getsockopt_0055fe44)();
  return;
}



// ==== localtime_r @ 0054f320 size=16

void localtime_r(void)

{
  (*(code *)PTR_localtime_r_0055fe48)();
  return;
}



// ==== mq_open @ 0054f330 size=16

void mq_open(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_mq_open_0055fe4c)();
  return;
}



// ==== getpeername @ 0054f340 size=4

void getpeername(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_getpeername_0055fe50)();
  return;
}



// ==== gmtime_r @ 0054f350 size=20

void gmtime_r(void)

{
  (*(code *)PTR_gmtime_r_0055fe54)();
  return;
}



// ==== __errno_location @ 0054f370 size=16

void __errno_location(void)

{
  (*(code *)PTR___errno_location_0055fe5c)();
  return;
}



// ==== send @ 0054f390 size=4

void send(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054f39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0055fe64)();
  return;
}



// ==== strcmp @ 0054f3a0 size=20

void strcmp(void)

{
  (*(code *)PTR_strcmp_0055fe68)();
  return;
}



