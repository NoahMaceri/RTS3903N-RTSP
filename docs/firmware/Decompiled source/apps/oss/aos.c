/* oss — "aos" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "oss.h"

// ==== aos_init_curl_url @ 00408450 size=320

int aos_init_curl_url(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_1818 [6148];
  int local_14;
  undefined4 local_10;
  
  local_1818[0] = 0;
  local_14 = 0;
  local_10 = 0;
  iVar2 = FUN_00418b30(local_1818,*(undefined4 *)(*param_1 + 0x10),0x800);
  if (iVar2 == 0) {
    iVar2 = aos_query_params_to_string(param_1[2],*(undefined4 *)(*param_1 + 0x1c),&local_14);
    if (iVar2 == 0) {
      uVar4 = *(undefined4 *)*param_1;
      uVar1 = *(undefined1 *)((undefined4 *)*param_1 + 1);
      if (local_14 == 0) {
        iVar2 = apr_psprintf(param_1[2],"http://%s:%d/%s",uVar4,uVar1,local_1818);
        param_1[8] = iVar2;
      }
      else {
        iVar2 = apr_psprintf(param_1[2],"http://%s:%d/%s%.*s",uVar4,uVar1,local_1818,local_14,
                             local_10);
        param_1[8] = iVar2;
      }
      if (aos_log_level < 6) {
        iVar2 = 0;
      }
      else {
        (*(code *)aos_log_format)
                  (6,"src/aos_transport.c",0x4e,"aos_init_curl_url","url:%s.",param_1[8]);
        iVar2 = 0;
      }
    }
    else {
      iVar3 = param_1[6];
      *(int *)(iVar3 + 0x28) = iVar2;
      *(char **)(iVar3 + 0x2c) = "query params invalid argument.";
    }
  }
  else {
    iVar3 = param_1[6];
    *(int *)(iVar3 + 0x28) = iVar2;
    *(char **)(iVar3 + 0x2c) = "uri invalid argument.";
  }
  return iVar2;
}



// ==== aos_buf_pack @ 0041627c size=84

void aos_buf_pack(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = apr_palloc(param_1,0x18);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 8) = param_2;
    *(int *)(iVar1 + 0x10) = param_2;
    *(int *)(iVar1 + 0xc) = param_2 + param_3;
    *(int *)(iVar1 + 0x14) = param_2 + param_3;
    *(int *)iVar1 = iVar1;
    *(int *)(iVar1 + 4) = iVar1;
  }
  return;
}



// ==== aos_http_controller_create @ 00416730 size=224

undefined4 * aos_http_controller_create(int param_1,byte param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_res0 [4];
  
  local_res0[0] = param_1;
  if ((param_1 == 0) && (iVar3 = apr_pool_create_ex(local_res0,0,0,0), iVar3 != 0)) {
    if (aos_log_level < 2) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      (*(code *)aos_log_format)
                (2,"src/aos_http_io.c",0x65,"aos_http_controller_create","aos_pool_create failure.")
      ;
      puVar2 = (undefined4 *)0x0;
    }
  }
  else {
    uVar1 = apr_palloc(local_res0[0],0x30);
    puVar2 = (undefined4 *)memset(uVar1,0,0x30);
    *puVar2 = DAT_00561994;
    puVar2[1] = local_res0[0];
    *(byte *)(puVar2 + 8) = *(byte *)(puVar2 + 8) & 0xfe | param_2 & 1;
  }
  return puVar2;
}



// ==== aos_http_io_initialize @ 00416944 size=684

undefined4 aos_http_io_initialize(char *param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  char *pcVar6;
  undefined1 auStack_110 [256];
  
  pthread_mutex_init(&DAT_00561b24,0);
  uVar3 = 3;
  if ((param_2 & 1) == 0) {
    uVar3 = 1;
  }
  DAT_00561aa0 = 0;
  iVar2 = curl_global_init(uVar3);
  puVar1 = aos_log_format;
  if (iVar2 == 0) {
    FUN_004ed3c8();
    iVar2 = apr_initialize();
    if (iVar2 == 0) {
      if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
        param_1 = "Unknown";
      }
      iVar2 = apr_pool_create_ex(&DAT_0056199c,0,0,0);
      pcVar5 = (code *)aos_log_format;
      if (iVar2 == 0) {
        apr_snprintf(&DAT_005619a0,0xff,"%s(Compatible %s)","aliyun-sdk-c/0.0.7",param_1);
        iVar2 = FUN_00449098(&DAT_00561998,DAT_0056199c);
        pcVar5 = (code *)aos_log_format;
        if (iVar2 == 0) {
          uVar3 = FUN_004166d4(DAT_0056199c);
          DAT_00561990 = (undefined4 *)apr_palloc(DAT_0056199c,0xc);
          *DAT_00561990 = &DAT_005619a0;
          DAT_00561994 = uVar3;
          *(undefined1 *)(DAT_00561990 + 1) = 0;
          *(undefined1 *)((int)DAT_00561990 + 5) = 0;
          *(undefined1 *)((int)DAT_00561990 + 6) = 0;
          *(undefined1 *)((int)DAT_00561990 + 7) = 0;
          *(undefined1 *)(DAT_00561990 + 2) = 0;
          *(undefined1 *)((int)DAT_00561990 + 9) = 0;
          *(undefined1 *)((int)DAT_00561990 + 10) = 0;
          *(undefined1 *)((int)DAT_00561990 + 0xb) = 0;
          return 0;
        }
        if (2 < aos_log_level) {
          uVar3 = apr_strerror(iVar2,auStack_110,0x100);
          pcVar6 = "apr_file_open_stderr failure, code:%d %s.\n";
          uVar4 = 0x11f;
          goto LAB_00416aa0;
        }
      }
      else if (2 < aos_log_level) {
        uVar3 = apr_strerror(iVar2,auStack_110,0x100);
        pcVar6 = "aos_pool_create failure, code:%d %s.\n";
        uVar4 = 0x119;
LAB_00416aa0:
        (*pcVar5)(3,"src/aos_http_io.c",uVar4,"aos_http_io_initialize",pcVar6,iVar2,uVar3);
        return 0xfffffc1c;
      }
    }
    else if (2 < aos_log_level) {
      (*(code *)aos_log_format)
                (3,"src/aos_http_io.c",0x110,"aos_http_io_initialize","apr_initialize failue.\n");
      return 0xfffffc1c;
    }
  }
  else if (2 < aos_log_level) {
    uVar3 = curl_easy_strerror(iVar2);
    (*(code *)puVar1)(3,"src/aos_http_io.c",0x109,"aos_http_io_initialize",
                      "curl_global_init failure, code:%d %s.\n",iVar2,uVar3);
    return 0xfffffc1c;
  }
  return 0xfffffc1c;
}



// ==== aos_http_io_deinitialize @ 00416bf0 size=172

void aos_http_io_deinitialize(void)

{
  bool bVar1;
  
  pthread_mutex_destroy(&DAT_00561b24);
  while (bVar1 = DAT_00561aa0 != 0, DAT_00561aa0 = DAT_00561aa0 + -1, bVar1) {
    curl_easy_cleanup(*(undefined4 *)(&DAT_00561aa4 + DAT_00561aa0 * 4));
  }
  if (DAT_00561998 != 0) {
    apr_file_close();
    DAT_00561998 = 0;
  }
  if (DAT_0056199c != 0) {
    apr_pool_destroy();
    DAT_0056199c = 0;
  }
  apr_terminate();
  FUN_004edad8();
  return;
}



// ==== aos_log_set_level @ 00416ef4 size=12

void aos_log_set_level(undefined4 param_1)

{
  aos_log_level = param_1;
  return;
}



// ==== aos_log_set_output @ 00416f00 size=12

void aos_log_set_output(undefined4 param_1)

{
  DAT_00561998 = param_1;
  return;
}



// ==== aos_curl_default_read_callback @ 00416f0c size=304

int aos_curl_default_read_callback(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  
  if (*(int *)(param_4[6] + 0x28) == 0) {
    iVar1 = (**(code **)(*param_4 + 0x40))(*param_4,param_1,param_2 * param_3);
    if (iVar1 < 0) {
      if (5 < aos_log_level) {
        (*(code *)aos_log_format)
                  (6,"src/aos_transport.c",0x116,"aos_curl_default_read_callback",
                   "read body failure, %d.",iVar1);
      }
      iVar1 = param_4[6];
      *(undefined4 *)(iVar1 + 0x28) = 0xfffffc25;
      *(char **)(iVar1 + 0x2c) = "read body failure.";
      return 0x10000000;
    }
    if ((uint)param_4[3] < 3) {
      param_4[3] = 3;
    }
  }
  else {
    iVar1 = 0x10000000;
    if (5 < aos_log_level) {
      (*(code *)aos_log_format)
                (6,"src/aos_transport.c",0x111,"aos_curl_default_read_callback",
                 "abort read callback.");
      return 0x10000000;
    }
  }
  return iVar1;
}



// ==== aos_curl_transport_headers_done @ 0041703c size=360

void aos_curl_transport_headers_done(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined4 local_18 [2];
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x18) + 0x28);
  if (iVar4 == 0) {
    iVar4 = **(int **)(param_1 + 4);
    if (iVar4 < 1) {
      uVar1 = *(undefined4 *)(param_1 + 0x1c);
      **(int **)(param_1 + 4) = 0;
      iVar4 = curl_easy_getinfo(uVar1,0x200002,local_18);
      if (iVar4 == 0) {
        puVar5 = *(undefined4 **)(param_1 + 4);
        *puVar5 = local_18[0];
        iVar4 = apr_table_get(puVar5[1],"Content-Length");
        if (iVar4 != 0) {
          iVar3 = *(int *)(param_1 + 4);
          uVar6 = FUN_00447678(iVar4);
          *(undefined8 *)(iVar3 + 0x20) = uVar6;
        }
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 8);
        iVar3 = *(int *)(param_1 + 0x18);
        uVar1 = curl_easy_strerror(iVar4);
        uVar1 = apr_pstrdup(uVar2,uVar1);
        iVar4 = *(int *)(param_1 + 0x18);
        *(undefined4 *)(iVar3 + 0x2c) = uVar1;
        *(undefined4 *)(iVar4 + 0x28) = 0xfffffc1c;
      }
    }
    else if (6 < aos_log_level) {
      uVar1 = 7;
      uVar2 = 0xc3;
      pcVar7 = "http response status %d.";
      goto LAB_004170f8;
    }
  }
  else if (5 < aos_log_level) {
    uVar1 = 6;
    uVar2 = 0xbe;
    pcVar7 = "has error %d.";
LAB_004170f8:
    (*(code *)aos_log_format)
              (uVar1,"src/aos_transport.c",uVar2,"aos_curl_transport_headers_done",pcVar7,iVar4);
    return;
  }
  return;
}



// ==== aos_parse_xml_body @ 004187a8 size=436

undefined4 aos_parse_xml_body(int *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  *param_3 = 0;
  iVar1 = FUN_004e8dc8(0,0,0,0,0);
  if (iVar1 == 0) {
    if (2 < aos_log_level) {
      (*(code *)aos_log_format)
                (3,"src/aos_util.c",0x18,"aos_parse_xml_body","Failed to create parser context.");
    }
  }
  else {
    for (piVar2 = (int *)*param_1; piVar2 != param_1; piVar2 = (int *)*piVar2) {
      FUN_004ec9b8(iVar1,piVar2[2],piVar2[3] - piVar2[2],0);
    }
    FUN_004ec9b8(iVar1,0,0,1);
    iVar4 = *(int *)(iVar1 + 0xc);
    uVar3 = *(undefined4 *)(iVar1 + 8);
    FUN_004d6678(iVar1);
    if (iVar4 != 0) {
      iVar1 = FUN_004f39a8(uVar3);
      *param_3 = iVar1;
      if (iVar1 != 0) {
        *param_2 = uVar3;
        return 0;
      }
    }
    FUN_004f2928(uVar3);
    if (2 < aos_log_level) {
      (*(code *)aos_log_format)(3,"src/aos_util.c",0x32,"aos_parse_xml_body","Failed to parse xml.")
      ;
      return 0xfffffc1c;
    }
  }
  return 0xfffffc1c;
}



// ==== aos_get_gmt_str_time @ 004189f0 size=320

int aos_get_gmt_str_time(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_c8 [128];
  undefined1 auStack_48 [48];
  int local_18;
  
  apr_time_now();
  iVar2 = apr_time_exp_gmt(auStack_48);
  puVar1 = aos_log_format;
  if (iVar2 == 0) {
    local_18 = FUN_0041895c(param_1,"%s, %.2d %s %.4d %.2d:%.2d:%.2d GMT",auStack_48);
    if (local_18 == 0) {
      return 0;
    }
    if (2 < aos_log_level) {
      (*(code *)aos_log_format)
                (3,"src/aos_util.c",0x51,"aos_get_gmt_str_time",
                 "aos_convert_to_GMT failure, code:%d.",local_18);
    }
  }
  else {
    if (2 < aos_log_level) {
      uVar3 = apr_strerror(iVar2,auStack_c8,0x80);
      (*(code *)puVar1)(3,"src/aos_util.c",0x4b,"aos_get_gmt_str_time",
                        "apr_time_exp_gmt fialure, code:%d %s.",iVar2,uVar3);
      return -0x3e4;
    }
    local_18 = -0x3e4;
  }
  return local_18;
}



// ==== aos_query_params_to_string @ 00418c7c size=736

undefined4 aos_query_params_to_string(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined1 auStack_24b0 [6272];
  undefined1 auStack_c30 [3080];
  
  iVar1 = apr_is_empty_table(param_2);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = FUN_00416230(param_1,0x100);
  *param_3 = 0;
  param_3[1] = 0;
  iVar2 = apr_table_elts(param_2);
  piVar6 = *(int **)(iVar2 + 0x10);
  if (0 < *(int *)(iVar2 + 8)) {
    uVar9 = 0x3f;
    iVar7 = 0;
    do {
      iVar7 = iVar7 + 1;
      iVar3 = FUN_00418b30(auStack_c30,*piVar6,0x400);
      if (iVar3 != 0) {
        if (aos_log_level < 3) {
          return 0xfffffc1e;
        }
        pcVar5 = "query params args too big, key:%s.";
        puVar8 = (undefined1 *)*piVar6;
        uVar9 = 0x95;
        goto LAB_00418f00;
      }
      puVar8 = auStack_c30;
      iVar3 = apr_snprintf(auStack_24b0,0x187f,&DAT_005337d4,uVar9,puVar8);
      pcVar5 = (char *)piVar6[1];
      if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
        iVar4 = FUN_00418b30(auStack_c30,pcVar5,0x400,iVar3);
        if (iVar4 != 0) {
          if (aos_log_level < 3) {
            return 0xfffffc1e;
          }
          pcVar5 = "query params args too big, value:%s.";
          puVar8 = (undefined1 *)piVar6[1];
          uVar9 = 0x9b;
LAB_00418f00:
          (*(code *)aos_log_format)
                    (3,"src/aos_util.c",uVar9,"aos_query_params_to_string",pcVar5,puVar8);
          return 0xfffffc1e;
        }
        iVar4 = apr_snprintf(auStack_24b0 + iVar3,0x187f - iVar3,&DAT_00533cb0,auStack_c30,puVar8);
        iVar3 = iVar3 + iVar4;
        if (0x3ff < iVar3) {
          if (aos_log_level < 3) {
            return 0xfffffc1e;
          }
          pcVar5 = "query params args too big, %s.";
          puVar8 = auStack_24b0;
          uVar9 = 0xa0;
          goto LAB_00418f00;
        }
      }
      piVar6 = piVar6 + 3;
      uVar9 = 0x26;
      FUN_00416314(param_1,iVar1,auStack_24b0,iVar3);
    } while (iVar7 < *(int *)(iVar2 + 8));
  }
  iVar2 = *(int *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 8);
  param_3[1] = iVar1;
  *param_3 = iVar2 - iVar1;
  return 0;
}



