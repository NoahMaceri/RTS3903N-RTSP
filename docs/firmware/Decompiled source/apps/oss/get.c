/* oss — "get" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "oss.h"

// ==== get_ststoken @ 00409520 size=1744

int get_ststoken(int param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  byte bVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  char *pcVar18;
  undefined1 *puVar19;
  undefined1 auStack_ce8 [2048];
  undefined1 auStack_4e8 [1024];
  undefined4 local_e8 [32];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  char local_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  memset(auStack_4e8,0,0x400);
  puVar14 = local_e8 + 0x10;
  memset(auStack_ce8,0,0x800);
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  memset(puVar14,0,0x40);
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  memset(local_e8,0,0x40);
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  FUN_00408f64();
  if (DAT_0055fff0 == 0x1000) {
    uVar3 = 8;
  }
  else {
    uVar3 = 4;
    if (DAT_0055fff0 != 0x2000) {
      uVar3 = 1;
    }
  }
  iVar12 = 5;
  snprintf(auStack_4e8,0x400,
           "%s -c 312 -url %s/v4/ipc/STSToken -uid %s -keySec %s -oss_scene_type %d",
           "/backup/cloudAPI",DAT_00561918 + 0xc,DAT_00561918 + 0x235,DAT_00561918 + 0x295,uVar3);
  iVar13 = -1;
  FUN_0052f238("oss.c","get_ststoken",0x126,"cmd=%s",auStack_4e8);
  do {
    FUN_0052f480(auStack_4e8,auStack_ce8,0x800,10);
    puVar19 = auStack_ce8;
    FUN_0052f238("oss.c","get_ststoken",0x12d,"ret_string = %s",puVar19);
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    iVar4 = FUN_0052f8c0(&local_38,"\"code\"",auStack_ce8);
    if (iVar4 == 1) {
      iVar4 = atoi(&local_38);
      if (iVar4 != 20000) {
        if (iVar4 - 0x9dd1U < 2) {
          FUN_0052f238("oss.c","get_ststoken",0x19d,"set lapse video off",puVar19);
          oss_set_lapse_video_off();
        }
        goto LAB_004096f8;
      }
      if (param_1 == 1) {
        memset(local_e8,0,0x40);
        puVar7 = local_e8;
        puVar16 = &DAT_0056b400;
        do {
          puVar17 = puVar16 + 4;
          uVar11 = puVar16[1];
          uVar10 = puVar16[2];
          uVar3 = puVar16[3];
          *puVar7 = *puVar16;
          puVar7[1] = uVar11;
          puVar7[2] = uVar10;
          puVar7[3] = uVar3;
          puVar7 = puVar7 + 4;
          puVar16 = puVar17;
        } while (puVar17 != (undefined4 *)&DAT_0056b440);
        local_68 = DAT_0056b4c0;
        local_64 = DAT_0056b4c4;
        local_60 = DAT_0056b4c8;
        local_5c = DAT_0056b4cc;
        local_58 = DAT_0056b4d0;
        local_54 = DAT_0056b4d4;
        local_50 = DAT_0056b4d8;
        local_4c = DAT_0056b4dc;
      }
      pbVar15 = (byte *)&DAT_0056b400;
      memset(&DAT_0056b3e0,0,2000);
      FUN_0052f8c0(&DAT_0056b3e0,"\"ossBucketName\"",auStack_ce8);
      FUN_0052f8c0(&DAT_0056b400,"\"tsSecret\"",auStack_ce8);
      FUN_0052f8c0(&DAT_0056b440,"\"ossObjPrefix\"",auStack_ce8);
      FUN_0052f8c0(&DAT_0056b480,"\"accessKeyId\"",auStack_ce8);
      FUN_0052f8c0(&DAT_0056b4c0,"\"tsNonce\"",auStack_ce8);
      FUN_0052f8c0(&DAT_0056b4e0,"\"ossEndPoint\"",auStack_ce8);
      FUN_0052f8c0(&DAT_0056b520,"\"ossCallback\"",auStack_ce8);
      FUN_0052f8c0(&DAT_0056b720,"\"accessSecurityToken\"",auStack_ce8);
      FUN_0052f8c0(&DAT_0056bb20,"\"accessKeySecret\"",auStack_ce8);
      FUN_0052f8c0(&DAT_0056bb60,"\"m3u8ObjKey\"",auStack_ce8);
      memset(puVar14,0,0x40);
      FUN_0052f8c0(puVar14,"\"memoStartTime\"",auStack_ce8);
      DAT_0056bba0 = atoi(puVar14);
      memset(puVar14,0,0x40);
      FUN_0052f8c0(puVar14,"\"memoEndTime\"",auStack_ce8);
      DAT_0056bba4 = atoi(puVar14);
      memset(puVar14,0,0x40);
      FUN_0052f8c0(puVar14,"\"memoDuration\"",auStack_ce8);
      DAT_0056bba8 = atoi(puVar14);
      memset(puVar14,0,0x40);
      FUN_0052f8c0(puVar14,"\"imageInterval\"",auStack_ce8);
      DAT_0056bbac = atoi(puVar14);
      if (((DAT_0055fff0 == 0x400) || (DAT_0055fff0 == 0x800)) &&
         (DAT_0056bbac != *(int *)(DAT_00561918 + 0x4d4))) {
        oss_set_cloud_pic_index_interval();
      }
      if (param_1 == 1) {
        memset(&DAT_0056b400,0,0x40);
        pbVar6 = pbVar15;
        puVar7 = local_e8;
        do {
          puVar16 = puVar7 + 4;
          uVar11 = puVar7[1];
          uVar10 = puVar7[2];
          uVar3 = puVar7[3];
          *(undefined4 *)pbVar6 = *puVar7;
          *(undefined4 *)(pbVar6 + 4) = uVar11;
          *(undefined4 *)(pbVar6 + 8) = uVar10;
          *(undefined4 *)(pbVar6 + 0xc) = uVar3;
          pbVar6 = pbVar6 + 0x10;
          puVar7 = puVar16;
        } while (puVar16 != puVar14);
        DAT_0056b4c0 = local_68;
        DAT_0056b4c4 = local_64;
        DAT_0056b4c8 = local_60;
        DAT_0056b4cc = local_5c;
        DAT_0056b4d0 = local_58;
        DAT_0056b4d4 = local_54;
        DAT_0056b4d8 = local_50;
        DAT_0056b4dc = local_4c;
      }
      pcVar18 = local_48;
      do {
        while( true ) {
          uVar5 = (uint)*pbVar15;
          if (uVar5 - 0x41 < 6) break;
          cVar1 = FUN_00408f34(uVar5);
          bVar8 = pbVar15[1];
          uVar9 = (uint)bVar8;
          cVar1 = cVar1 << 4;
          if (uVar9 - 0x41 < 6) goto LAB_00409978;
LAB_004099d0:
          pbVar15 = pbVar15 + 2;
          cVar2 = FUN_00408f34(uVar9);
          *pcVar18 = cVar2 + cVar1;
          pcVar18 = pcVar18 + 1;
          if (pbVar15 == (byte *)0x56b420) goto LAB_004099e8;
        }
        bVar8 = pbVar15[1];
        uVar9 = (uint)bVar8;
        cVar1 = (char)((uVar5 - 0x37 & 0xff) << 4);
        if (5 < uVar9 - 0x41) goto LAB_004099d0;
LAB_00409978:
        pbVar15 = pbVar15 + 2;
        *pcVar18 = (bVar8 - 0x37) + cVar1;
        pcVar18 = pcVar18 + 1;
      } while (pbVar15 != (byte *)0x56b420);
LAB_004099e8:
      DAT_0056bbb0 = 0x61616161;
      DAT_0056bbb4 = 0x61616161;
      DAT_0056bbb8 = 0x61616161;
      DAT_0056bbbc = 0x61616161;
      iVar13 = AES_set_encrypt_key(local_48,0x80,&DAT_0056bbd8);
      if (iVar13 == 0) break;
      FUN_0052f238("oss.c","get_ststoken",0x16f,"AesSetKey error, ret = %d",iVar13);
      sleep(3);
    }
    else {
LAB_004096f8:
      sleep(3);
    }
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  FUN_00408f98();
  return iVar13;
}



// ==== get_cos_acl_str @ 00428f3c size=152

undefined * get_cos_acl_str(int param_1)

{
  undefined *puVar1;
  
  if (param_1 == 1) {
    puVar1 = PTR_LAB_00560984 + 0x5724;
  }
  else if (param_1 == 0) {
    puVar1 = PTR_LAB_00560984 + 0x571c;
  }
  else if (param_1 == 2) {
    puVar1 = PTR_LAB_00560984 + 0x5730;
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



// ==== get_content_type_by_suffix @ 00429924 size=184

int get_content_type_by_suffix(undefined4 param_1)

{
  int iVar1;
  int *local_10;
  
  local_10 = (int *)(PTR_DAT_0056098c + 0x24c);
  while( true ) {
    if (*local_10 == 0) {
      return *(int *)(PTR_DAT_0056098c + 0x248);
    }
    iVar1 = (*(code *)PTR_strcasecmp_00561534)(*local_10,param_1);
    if (iVar1 == 0) break;
    local_10 = local_10 + 2;
  }
  return local_10[1];
}



// ==== get_content_type @ 004299dc size=152

undefined4 get_content_type(undefined4 param_1)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = 0;
  iVar1 = (*(code *)PTR_strrchr_005615cc)(param_1,0x2e);
  if (iVar1 != 0) {
    local_10 = (*(code *)PTR_get_content_type_by_suffix_00560c9c)(iVar1 + 1);
  }
  return local_10;
}



// ==== get_xmldoc @ 00434044 size=180

undefined4 get_xmldoc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)(PTR_LAB_00560cb0 + 0x3e28))(param_1);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_cos_parse_xml_body_00560c24)(param_1,param_2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffc2c;
    }
  }
  else {
    uVar2 = 0xfffffc2c;
  }
  return uVar2;
}



// ==== get_xmlnode_value @ 004340f8 size=208

undefined4 get_xmlnode_value(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_18;
  
  local_18 = 0;
  iVar1 = (*(code *)PTR_mxmlFindElement_00560c28)(param_2,param_2,param_3,0,0,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    local_18 = (*(code *)PTR_apr_pstrdup_00560b3c)
                         (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18));
  }
  return local_18;
}



// ==== get_xmlnode_value_str @ 0043a148 size=192

bool get_xmlnode_value_str
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_get_xmlnode_value_00560dd8)(param_1,param_2,param_3);
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_strlen_00561504)(iVar1);
    *param_4 = uVar2;
    param_4[1] = iVar1;
  }
  return iVar1 != 0;
}



// ==== get_xmlnode_value_int @ 0043a208 size=172

bool get_xmlnode_value_int
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_get_xmlnode_value_00560dd8)(param_1,param_2,param_3);
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_atoi_00561564)(iVar1);
    *param_4 = uVar2;
  }
  return iVar1 != 0;
}



// ==== get_xmlnode_value_int64 @ 0043a2b4 size=192

bool get_xmlnode_value_int64
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (*(code *)PTR_get_xmlnode_value_00560dd8)(param_1,param_2,param_3);
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_cos_atoi64_00560b40)(iVar1);
    *param_4 = uVar2;
  }
  return iVar1 != 0;
}



