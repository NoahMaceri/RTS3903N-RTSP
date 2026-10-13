/* oss — "build" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "oss.h"

// ==== build_complete_multipart_upload_xml @ 00436b90 size=580

undefined4 build_complete_multipart_upload_xml(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *local_30;
  undefined4 local_10;
  int local_c;
  
  uVar1 = (*(code *)PTR_mxmlNewXML_00560e38)(PTR_LAB_00560984 + 0x5d0c);
  uVar2 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar1,PTR_LAB_00560984 + 0x5d10);
  for (local_30 = (undefined4 *)*param_2; local_30 != param_2; local_30 = (undefined4 *)*local_30) {
    uVar3 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar2,PTR_LAB_00560984 + 0x5d28);
    uVar4 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar3,PTR_LAB_00560984 + 0x5cac);
    uVar3 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar3,PTR_LAB_00560984 + 0x5c48);
    (*(code *)PTR_mxmlNewText_00560e40)(uVar4,0,local_30[3]);
    (*(code *)PTR_mxmlNewText_00560e40)(uVar3,0,local_30[5]);
  }
  iVar5 = (*(code *)(PTR_LAB_00560cb0 + 0x3f18))(uVar1);
  if (iVar5 == 0) {
    (*(code *)PTR_mxmlDelete_00560c2c)(uVar1);
    uVar2 = 0;
  }
  else {
    local_10 = (*(code *)PTR_strlen_00561504)(iVar5);
    local_c = iVar5;
    uVar2 = (*(code *)PTR_cos_pstrdup_00560b2c)(param_1,&local_10);
    (*(code *)PTR_free_005615c0)(iVar5);
    (*(code *)PTR_mxmlDelete_00560c2c)(uVar1);
  }
  return uVar2;
}



// ==== build_complete_multipart_upload_body @ 00436dd4 size=224

void build_complete_multipart_upload_body(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (*(code *)PTR_build_complete_multipart_upload_xml_00560e44)(param_1,param_2);
  *(int *)param_3 = param_3;
  *(int *)(param_3 + 4) = param_3;
  uVar2 = (*(code *)PTR_strlen_00561504)(uVar1);
  uVar1 = (*(code *)PTR_cos_buf_pack_00560a00)(param_1,uVar1,uVar2);
  (*(code *)(PTR_LAB_00560cb0 + 0x3dbc))(uVar1,param_3);
  return;
}



// ==== build_lifecycle_xml @ 00436eb4 size=1692

undefined4 build_lifecycle_xml(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *local_a0;
  int local_9c;
  undefined4 local_50;
  int local_4c;
  undefined1 auStack_48 [64];
  
  local_9c = 0;
  uVar1 = (*(code *)PTR_mxmlNewXML_00560e38)(PTR_LAB_00560984 + 0x5d0c);
  uVar2 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar1,PTR_LAB_00560984 + 0x5d30);
  for (local_a0 = (undefined4 *)*param_2; local_a0 != param_2; local_a0 = (undefined4 *)*local_a0) {
    uVar3 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar2,PTR_LAB_00560984 + 0x5c40);
    uVar4 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar3,PTR_LAB_00560984 + 0x5bcc);
    uVar5 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar3,PTR_LAB_00560984 + 0x5d48);
    uVar5 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar5,PTR_LAB_00560984 + 0x5c18);
    uVar6 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar3,PTR_LAB_00560984 + 0x5c10);
    (*(code *)PTR_mxmlNewText_00560e40)(uVar4,0,local_a0[3]);
    (*(code *)PTR_mxmlNewText_00560e40)(uVar5,0,local_a0[5]);
    (*(code *)PTR_mxmlNewText_00560e40)(uVar6,0,local_a0[7]);
    if (local_a0[8] == 0x7fffffff) {
      if ((local_a0[9] != 0) && (*(char *)local_a0[10] != '\0')) {
        uVar4 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar3,PTR_LAB_00560984 + 0x5d50);
        uVar4 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar4,PTR_LAB_00560984 + 0x5d68);
        (*(code *)PTR_mxmlNewText_00560e40)(uVar4,0,local_a0[10]);
      }
    }
    else {
      uVar4 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar3,PTR_LAB_00560984 + 0x5d50);
      uVar4 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar4,PTR_LAB_00560984 + 0x5d5c);
      (*(code *)PTR_apr_snprintf_00560ab0)(auStack_48,0x40,PTR_LAB_00560984 + 0x5d64,local_a0[8]);
      (*(code *)PTR_mxmlNewText_00560e40)(uVar4,0,auStack_48);
    }
    if (local_a0[0xd] == 0x7fffffff) {
      if ((local_a0[0xe] != 0) && (*(char *)local_a0[0xf] != '\0')) {
        local_9c = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar3,PTR_LAB_00560984 + 0x5d70);
        uVar4 = (*(code *)PTR_mxmlNewElement_00560e3c)(local_9c,PTR_LAB_00560984 + 0x5d68);
        (*(code *)PTR_mxmlNewText_00560e40)(uVar4,0,local_a0[0xf]);
      }
    }
    else {
      local_9c = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar3,PTR_LAB_00560984 + 0x5d70);
      uVar4 = (*(code *)PTR_mxmlNewElement_00560e3c)(local_9c,PTR_LAB_00560984 + 0x5d5c);
      (*(code *)PTR_apr_snprintf_00560ab0)(auStack_48,0x40,PTR_LAB_00560984 + 0x5d64,local_a0[0xd]);
      (*(code *)PTR_mxmlNewText_00560e40)(uVar4,0,auStack_48);
    }
    if (((local_9c != 0) && (local_a0[0x10] != 0)) && (*(char *)local_a0[0x11] != '\0')) {
      uVar4 = (*(code *)PTR_mxmlNewElement_00560e3c)(local_9c,PTR_LAB_00560984 + 0x5c28);
      (*(code *)PTR_mxmlNewText_00560e40)(uVar4,0,local_a0[0x11]);
    }
    if (local_a0[0x12] != 0x7fffffff) {
      uVar3 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar3,PTR_LAB_00560984 + 0x5d7c);
      uVar3 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar3,PTR_LAB_00560984 + 0x5d9c);
      (*(code *)PTR_apr_snprintf_00560ab0)(auStack_48,0x40,PTR_LAB_00560984 + 0x5d64,local_a0[0x12])
      ;
      (*(code *)PTR_mxmlNewText_00560e40)(uVar3,0,auStack_48);
    }
  }
  iVar7 = (*(code *)(PTR_LAB_00560cb0 + 0x3f18))(uVar1);
  if (iVar7 == 0) {
    (*(code *)PTR_mxmlDelete_00560c2c)(uVar1);
    uVar2 = 0;
  }
  else {
    local_50 = (*(code *)PTR_strlen_00561504)(iVar7);
    local_4c = iVar7;
    uVar2 = (*(code *)PTR_cos_pstrdup_00560b2c)(param_1,&local_50);
    (*(code *)PTR_free_005615c0)(iVar7);
    (*(code *)PTR_mxmlDelete_00560c2c)(uVar1);
  }
  return uVar2;
}



// ==== build_versioning_xml @ 00437710 size=420

undefined4 build_versioning_xml(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_14;
  int local_10;
  
  uVar1 = (*(code *)PTR_mxmlNewXML_00560e38)(PTR_LAB_00560984 + 0x5d0c);
  uVar2 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar1,PTR_LAB_00560984 + 0x5db0);
  uVar2 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar2,PTR_LAB_00560984 + 0x5c10);
  (*(code *)PTR_mxmlNewText_00560e40)(uVar2,0,*(undefined4 *)(param_2 + 4));
  iVar3 = (*(code *)(PTR_LAB_00560cb0 + 0x3f18))(uVar1);
  if (iVar3 == 0) {
    (*(code *)PTR_mxmlDelete_00560c2c)(uVar1);
    uVar2 = 0;
  }
  else {
    local_14 = (*(code *)PTR_strlen_00561504)(iVar3);
    local_10 = iVar3;
    uVar2 = (*(code *)PTR_cos_pstrdup_00560b2c)(param_1,&local_14);
    (*(code *)PTR_free_005615c0)(iVar3);
    (*(code *)PTR_mxmlDelete_00560c2c)(uVar1);
  }
  return uVar2;
}



// ==== build_cors_xml @ 004378b4 size=1064

undefined4 build_cors_xml(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *local_80;
  undefined4 local_50;
  int local_4c;
  undefined1 auStack_48 [64];
  
  uVar1 = (*(code *)PTR_mxmlNewXML_00560e38)(PTR_LAB_00560984 + 0x5d0c);
  uVar2 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar1,PTR_LAB_00560984 + 0x5dc8);
  for (local_80 = (undefined4 *)*param_2; local_80 != param_2; local_80 = (undefined4 *)*local_80) {
    uVar3 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar2,PTR_LAB_00560984 + 0x5ddc);
    if ((local_80[2] != 0) && (*(char *)local_80[3] != '\0')) {
      uVar4 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar3,PTR_LAB_00560984 + 0x5bcc);
      (*(code *)PTR_mxmlNewText_00560e40)(uVar4,0,local_80[3]);
    }
    uVar4 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar3,PTR_LAB_00560984 + 0x5de8);
    (*(code *)PTR_mxmlNewText_00560e40)(uVar4,0,local_80[5]);
    uVar4 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar3,PTR_LAB_00560984 + 0x5df8);
    (*(code *)PTR_mxmlNewText_00560e40)(uVar4,0,local_80[7]);
    if ((local_80[8] != 0) && (*(char *)local_80[9] != '\0')) {
      uVar4 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar3,PTR_LAB_00560984 + 0x5e08);
      (*(code *)PTR_mxmlNewText_00560e40)(uVar4,0,local_80[9]);
    }
    if (local_80[0xc] != 0x7fffffff) {
      uVar4 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar3,PTR_LAB_00560984 + 0x5e18);
      (*(code *)PTR_apr_snprintf_00560ab0)(auStack_48,0x40,PTR_LAB_00560984 + 0x5d64,local_80[0xc]);
      (*(code *)PTR_mxmlNewText_00560e40)(uVar4,0,auStack_48);
    }
    if ((local_80[10] != 0) && (*(char *)local_80[0xb] != '\0')) {
      uVar3 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar3,PTR_LAB_00560984 + 0x5e28);
      (*(code *)PTR_mxmlNewText_00560e40)(uVar3,0,local_80[0xb]);
    }
  }
  iVar5 = (*(code *)(PTR_LAB_00560cb0 + 0x3f18))(uVar1);
  if (iVar5 == 0) {
    (*(code *)PTR_mxmlDelete_00560c2c)(uVar1);
    uVar2 = 0;
  }
  else {
    local_50 = (*(code *)PTR_strlen_00561504)(iVar5);
    local_4c = iVar5;
    uVar2 = (*(code *)PTR_cos_pstrdup_00560b2c)(param_1,&local_50);
    (*(code *)PTR_free_005615c0)(iVar5);
    (*(code *)PTR_mxmlDelete_00560c2c)(uVar1);
  }
  return uVar2;
}



// ==== build_replication_xml @ 00437dbc size=1144

undefined4 build_replication_xml(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *local_48;
  undefined4 local_14;
  int local_10;
  
  uVar1 = (*(code *)PTR_mxmlNewXML_00560e38)(PTR_LAB_00560984 + 0x5d0c);
  uVar2 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar1,PTR_LAB_00560984 + 0x5e38);
  if ((*param_2 != 0) && (*(char *)param_2[1] != '\0')) {
    uVar3 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar2,PTR_LAB_00560984 + 0x5c38);
    (*(code *)PTR_mxmlNewText_00560e40)(uVar3,0,param_2[1]);
  }
  for (local_48 = (int *)param_2[2]; local_48 != param_2 + 2; local_48 = (int *)*local_48) {
    uVar3 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar2,PTR_LAB_00560984 + 0x5c40);
    if ((local_48[2] != 0) && (*(char *)local_48[3] != '\0')) {
      uVar4 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar3,PTR_LAB_00560984 + 0x5bcc);
      (*(code *)PTR_mxmlNewText_00560e40)(uVar4,0,local_48[3]);
    }
    if ((local_48[4] != 0) && (*(char *)local_48[5] != '\0')) {
      uVar4 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar3,PTR_LAB_00560984 + 0x5c10);
      (*(code *)PTR_mxmlNewText_00560e40)(uVar4,0,local_48[5]);
    }
    if ((local_48[6] != 0) && (*(char *)local_48[7] != '\0')) {
      uVar4 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar3,PTR_LAB_00560984 + 0x5c18);
      (*(code *)PTR_mxmlNewText_00560e40)(uVar4,0,local_48[7]);
    }
    uVar3 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar3,PTR_LAB_00560984 + 0x5e54);
    if ((local_48[8] != 0) && (*(char *)local_48[9] != '\0')) {
      uVar4 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar3,PTR_LAB_00560984 + 0x5c20);
      (*(code *)PTR_mxmlNewText_00560e40)(uVar4,0,local_48[9]);
    }
    if ((local_48[10] != 0) && (*(char *)local_48[0xb] != '\0')) {
      uVar3 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar3,PTR_LAB_00560984 + 0x5c28);
      (*(code *)PTR_mxmlNewText_00560e40)(uVar3,0,local_48[0xb]);
    }
  }
  iVar5 = (*(code *)(PTR_LAB_00560cb0 + 0x3f18))(uVar1);
  if (iVar5 == 0) {
    (*(code *)PTR_mxmlDelete_00560c2c)(uVar1);
    uVar2 = 0;
  }
  else {
    local_14 = (*(code *)PTR_strlen_00561504)(iVar5);
    local_10 = iVar5;
    uVar2 = (*(code *)PTR_cos_pstrdup_00560b2c)(param_1,&local_14);
    (*(code *)PTR_free_005615c0)(iVar5);
    (*(code *)PTR_mxmlDelete_00560c2c)(uVar1);
  }
  return uVar2;
}



// ==== build_object_restore_body @ 00438314 size=756

void build_object_restore_body(undefined4 param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_50;
  int local_4c;
  undefined1 auStack_48 [64];
  
  uVar1 = (*(code *)PTR_mxmlNewXML_00560e38)(PTR_LAB_00560984 + 0x5d0c);
  uVar2 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar1,PTR_LAB_00560984 + 0x5e60);
  if (*param_2 != 0x7fffffff) {
    uVar3 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar2,PTR_LAB_00560984 + 0x5d5c);
    (*(code *)PTR_apr_snprintf_00560ab0)(auStack_48,0x40,PTR_LAB_00560984 + 0x5d64,*param_2);
    (*(code *)PTR_mxmlNewText_00560e40)(uVar3,0,auStack_48);
  }
  if ((param_2[1] != 0) && (*(char *)param_2[2] != '\0')) {
    uVar2 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar2,PTR_LAB_00560984 + 0x5e70);
    uVar2 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar2,PTR_LAB_00560984 + 0x5e84);
    (*(code *)PTR_mxmlNewText_00560e40)(uVar2,0,param_2[2]);
  }
  iVar4 = (*(code *)(PTR_LAB_00560cb0 + 0x3f18))(uVar1);
  if (iVar4 == 0) {
    (*(code *)PTR_mxmlDelete_00560c2c)(uVar1);
  }
  else {
    local_50 = (*(code *)PTR_strlen_00561504)(iVar4);
    local_4c = iVar4;
    uVar2 = (*(code *)PTR_cos_pstrdup_00560b2c)(param_1,&local_50);
    *(int *)param_3 = param_3;
    *(int *)(param_3 + 4) = param_3;
    uVar3 = (*(code *)PTR_strlen_00561504)(uVar2);
    uVar2 = (*(code *)PTR_cos_buf_pack_00560a00)(param_1,uVar2,uVar3);
    (*(code *)(PTR_LAB_00560cb0 + 0x3dbc))(uVar2,param_3);
    (*(code *)PTR_free_005615c0)(iVar4);
    (*(code *)PTR_mxmlDelete_00560c2c)(uVar1);
  }
  return;
}



// ==== build_objects_xml @ 00439ba8 size=552

undefined4 build_objects_xml(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *local_30;
  undefined4 local_10;
  int local_c;
  
  uVar1 = (*(code *)PTR_mxmlNewXML_00560e38)(PTR_LAB_00560984 + 0x5d0c);
  uVar2 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar1,PTR_LAB_00560984 + 0x5e94);
  uVar3 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar2,PTR_LAB_00560984 + 0x5e9c);
  (*(code *)PTR_mxmlNewText_00560e40)(uVar3,0,param_3);
  for (local_30 = (undefined4 *)*param_2; local_30 != param_2; local_30 = (undefined4 *)*local_30) {
    uVar3 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar2,PTR_LAB_00560984 + 0x5ea4);
    uVar3 = (*(code *)PTR_mxmlNewElement_00560e3c)(uVar3,PTR_LAB_00560984 + 0x5c60);
    (*(code *)PTR_mxmlNewText_00560e40)(uVar3,0,local_30[3]);
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



