/* cloud — "yi" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "cloud.h"

// ==== yi_push_rcd_file @ 00405040 size=828

void yi_push_rcd_file(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_c38 [2048];
  undefined1 auStack_438 [512];
  char local_238 [4];
  char local_234 [4];
  char local_230 [4];
  char local_22c [4];
  char local_228 [4];
  char local_224 [4];
  char local_220 [488];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  memset(auStack_c38,0,0x800);
  memset(local_238,0,0x200);
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  memset(auStack_438,0,0x200);
  iVar1 = strrchr(&DAT_004237ac,0x2f);
  if (iVar1 + 1 == 0) {
    FUN_0040b244("cloud.c","yi_push_rcd_file",0xe2a,"rcd_file_path invalid = %s\n",&DAT_004237ac);
    return;
  }
  snprintf(local_238,0x200,"%s -c 414 -url %s/v4/ipc/upload_data -uid %s -keySec %s -filename %s",
           "/backup/cloudAPI",DAT_00423a48 + 0xc,DAT_00423a48 + 0x235,DAT_00423a48 + 0x295,iVar1 + 1
          );
  iVar1 = 3;
  FUN_0040b244("cloud.c","yi_push_rcd_file",0xe34,"cmd=%s\n",local_238);
  do {
    iVar1 = iVar1 + -1;
    memset(auStack_c38,0,0x800);
    FUN_0040b48c(local_238,auStack_c38,0x800,10);
    FUN_0040b244("cloud.c","yi_push_rcd_file",0xe3c,"%s\n",auStack_c38);
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    memset(auStack_438,0,0x200);
    iVar2 = FUN_0040b9ac(&local_38,"\"code\"",auStack_c38);
    if (((iVar2 == 1) && (iVar2 = atoi(&local_38), iVar2 == 20000)) &&
       (iVar2 = FUN_0040b9ac(auStack_438,"\"uploadUrl\"",auStack_c38), iVar2 == 1)) {
      iVar1 = 3;
      FUN_0040b244("cloud.c","yi_push_rcd_file",0xe46,"gen_file_url success \n");
      goto LAB_004052d8;
    }
    sleep(5);
  } while (iVar1 != 0);
  goto LAB_004051e4;
  while (sleep(3), iVar1 != 0) {
LAB_004052d8:
    iVar2 = webapi_do_event_upload(auStack_438,&DAT_004237ac);
    iVar1 = iVar1 + -1;
    printf(&DAT_0040f424,"yi_push_rcd_file",0xe58,&DAT_004237ac,iVar2);
    if (-1 < iVar2) break;
  }
LAB_004051e4:
  remove(&DAT_004237ac);
  memset(local_238,0,0x200);
  local_238[0] = s_rm__f__tmp_recorddata_rcd___0040f408[0];
  local_238[1] = s_rm__f__tmp_recorddata_rcd___0040f408[1];
  local_238[2] = s_rm__f__tmp_recorddata_rcd___0040f408[2];
  local_238[3] = s_rm__f__tmp_recorddata_rcd___0040f408[3];
  local_234[0] = s_rm__f__tmp_recorddata_rcd___0040f408[4];
  local_234[1] = s_rm__f__tmp_recorddata_rcd___0040f408[5];
  local_234[2] = s_rm__f__tmp_recorddata_rcd___0040f408[6];
  local_234[3] = s_rm__f__tmp_recorddata_rcd___0040f408[7];
  local_230[0] = s_rm__f__tmp_recorddata_rcd___0040f408[8];
  local_230[1] = s_rm__f__tmp_recorddata_rcd___0040f408[9];
  local_230[2] = s_rm__f__tmp_recorddata_rcd___0040f408[10];
  local_230[3] = s_rm__f__tmp_recorddata_rcd___0040f408[0xb];
  local_22c[0] = s_rm__f__tmp_recorddata_rcd___0040f408[0xc];
  local_22c[1] = s_rm__f__tmp_recorddata_rcd___0040f408[0xd];
  local_22c[2] = s_rm__f__tmp_recorddata_rcd___0040f408[0xe];
  local_22c[3] = s_rm__f__tmp_recorddata_rcd___0040f408[0xf];
  local_228[0] = s_rm__f__tmp_recorddata_rcd___0040f408[0x10];
  local_228[1] = s_rm__f__tmp_recorddata_rcd___0040f408[0x11];
  local_228[2] = s_rm__f__tmp_recorddata_rcd___0040f408[0x12];
  local_228[3] = s_rm__f__tmp_recorddata_rcd___0040f408[0x13];
  local_224[0] = s_rm__f__tmp_recorddata_rcd___0040f408[0x14];
  local_224[1] = s_rm__f__tmp_recorddata_rcd___0040f408[0x15];
  local_224[2] = s_rm__f__tmp_recorddata_rcd___0040f408[0x16];
  local_224[3] = s_rm__f__tmp_recorddata_rcd___0040f408[0x17];
  local_220[0] = s_rm__f__tmp_recorddata_rcd___0040f408[0x18];
  local_220[1] = s_rm__f__tmp_recorddata_rcd___0040f408[0x19];
  local_220[2] = s_rm__f__tmp_recorddata_rcd___0040f408[0x1a];
  local_220[3] = s_rm__f__tmp_recorddata_rcd___0040f408[0x1b];
  FUN_0040b244("cloud.c","yi_push_rcd_file",0xe68,"cmd=%s\n",local_238);
  system(local_238);
  return;
}



// ==== yi_motion_push @ 00405428 size=2864

void yi_motion_push(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_2268 [2048];
  undefined1 auStack_1a68 [2048];
  undefined1 auStack_1268 [1024];
  undefined1 auStack_e68 [1024];
  char local_a68 [512];
  char local_868 [512];
  undefined1 auStack_668 [512];
  undefined1 auStack_468 [512];
  undefined1 auStack_268 [64];
  char local_228 [4];
  char local_224 [4];
  char local_220 [4];
  char local_21c [4];
  char local_218 [4];
  char local_214 [44];
  undefined1 auStack_1e8 [64];
  char local_1a8 [4];
  char local_1a4 [4];
  char local_1a0 [4];
  char local_19c [4];
  char local_198 [4];
  char local_194 [44];
  undefined1 auStack_168 [64];
  undefined1 auStack_128 [64];
  char local_e8 [64];
  char local_a8 [64];
  undefined4 local_68;
  undefined4 local_64;
  undefined2 local_60;
  undefined2 local_5e;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  memset(auStack_1a68,0,0x800);
  memset(auStack_468,0,0x200);
  memset(auStack_668,0,0x200);
  local_48 = 0;
  iVar3 = 1;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  memset(auStack_2268,0,0x800);
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  memset(auStack_e68,0,0x400);
  memset(auStack_1268,0,0x400);
  memset(local_868,0,0x200);
  memset(local_a68,0,0x200);
  memset(local_a8,0,0x40);
  memset(local_e8,0,0x40);
  memset(auStack_128,0,0x40);
  memset(auStack_168,0,0x40);
  memset(local_1a8,0,0x40);
  memset(auStack_1e8,0,0x40);
  memset(local_228,0,0x40);
  memset(auStack_268,0,0x40);
  if (param_1 == 1) {
    local_38 = time(0);
    local_218[0] = s__tmp_babycry_mp4_0040f4cc[0x10];
    local_1a8[0] = s__tmp_babycry_jpg_0040f4b8[0];
    local_1a8[1] = s__tmp_babycry_jpg_0040f4b8[1];
    local_1a8[2] = s__tmp_babycry_jpg_0040f4b8[2];
    local_1a8[3] = s__tmp_babycry_jpg_0040f4b8[3];
    local_1a4[0] = s__tmp_babycry_jpg_0040f4b8[4];
    local_1a4[1] = s__tmp_babycry_jpg_0040f4b8[5];
    local_1a4[2] = s__tmp_babycry_jpg_0040f4b8[6];
    local_1a4[3] = s__tmp_babycry_jpg_0040f4b8[7];
    local_1a0[0] = s__tmp_babycry_jpg_0040f4b8[8];
    local_1a0[1] = s__tmp_babycry_jpg_0040f4b8[9];
    local_1a0[2] = s__tmp_babycry_jpg_0040f4b8[10];
    local_1a0[3] = s__tmp_babycry_jpg_0040f4b8[0xb];
    local_19c[0] = s__tmp_babycry_jpg_0040f4b8[0xc];
    local_19c[1] = s__tmp_babycry_jpg_0040f4b8[0xd];
    local_19c[2] = s__tmp_babycry_jpg_0040f4b8[0xe];
    local_19c[3] = s__tmp_babycry_jpg_0040f4b8[0xf];
    local_198[0] = s__tmp_babycry_jpg_0040f4b8[0x10];
    local_228[0] = s__tmp_babycry_mp4_0040f4cc[0];
    local_228[1] = s__tmp_babycry_mp4_0040f4cc[1];
    local_228[2] = s__tmp_babycry_mp4_0040f4cc[2];
    local_228[3] = s__tmp_babycry_mp4_0040f4cc[3];
    local_224[0] = s__tmp_babycry_mp4_0040f4cc[4];
    local_224[1] = s__tmp_babycry_mp4_0040f4cc[5];
    local_224[2] = s__tmp_babycry_mp4_0040f4cc[6];
    local_224[3] = s__tmp_babycry_mp4_0040f4cc[7];
    local_220[0] = s__tmp_babycry_mp4_0040f4cc[8];
    local_220[1] = s__tmp_babycry_mp4_0040f4cc[9];
    local_220[2] = s__tmp_babycry_mp4_0040f4cc[10];
    local_220[3] = s__tmp_babycry_mp4_0040f4cc[0xb];
    local_21c[0] = s__tmp_babycry_mp4_0040f4cc[0xc];
    local_21c[1] = s__tmp_babycry_mp4_0040f4cc[0xd];
    local_21c[2] = s__tmp_babycry_mp4_0040f4cc[0xe];
    local_21c[3] = s__tmp_babycry_mp4_0040f4cc[0xf];
    snprintf(auStack_1e8,0x40,"%s.crypt","/tmp/babycry.jpg");
    snprintf(auStack_268,0x40,"%s.crypt","/tmp/babycry.mp4");
    iVar3 = 3;
    snprintf(auStack_468,0x200,"rm -f %s* %s*","/tmp/babycry.jpg","/tmp/babycry.mp4");
    local_30 = 4;
LAB_00405b70:
    FUN_0040b48c(auStack_468,auStack_1a68,0x800,10);
    cloud_cap_pic(local_1a8);
    cloud_send_shortrec_msg(local_228,iVar3);
    local_34 = 0x420000;
  }
  else {
    if (param_1 == 2) {
      local_38 = time(0);
      local_214[0] = s__tmp_abnormal_sound_mp4_0040f514[0x14];
      local_214[1] = s__tmp_abnormal_sound_mp4_0040f514[0x15];
      local_214[2] = s__tmp_abnormal_sound_mp4_0040f514[0x16];
      local_214[3] = s__tmp_abnormal_sound_mp4_0040f514[0x17];
      local_1a8[0] = s__tmp_abnormal_sound_jpg_0040f4fc[0];
      local_1a8[1] = s__tmp_abnormal_sound_jpg_0040f4fc[1];
      local_1a8[2] = s__tmp_abnormal_sound_jpg_0040f4fc[2];
      local_1a8[3] = s__tmp_abnormal_sound_jpg_0040f4fc[3];
      local_1a4[0] = s__tmp_abnormal_sound_jpg_0040f4fc[4];
      local_1a4[1] = s__tmp_abnormal_sound_jpg_0040f4fc[5];
      local_1a4[2] = s__tmp_abnormal_sound_jpg_0040f4fc[6];
      local_1a4[3] = s__tmp_abnormal_sound_jpg_0040f4fc[7];
      local_1a0[0] = s__tmp_abnormal_sound_jpg_0040f4fc[8];
      local_1a0[1] = s__tmp_abnormal_sound_jpg_0040f4fc[9];
      local_1a0[2] = s__tmp_abnormal_sound_jpg_0040f4fc[10];
      local_1a0[3] = s__tmp_abnormal_sound_jpg_0040f4fc[0xb];
      local_19c[0] = s__tmp_abnormal_sound_jpg_0040f4fc[0xc];
      local_19c[1] = s__tmp_abnormal_sound_jpg_0040f4fc[0xd];
      local_19c[2] = s__tmp_abnormal_sound_jpg_0040f4fc[0xe];
      local_19c[3] = s__tmp_abnormal_sound_jpg_0040f4fc[0xf];
      local_198[0] = s__tmp_abnormal_sound_jpg_0040f4fc[0x10];
      local_198[1] = s__tmp_abnormal_sound_jpg_0040f4fc[0x11];
      local_198[2] = s__tmp_abnormal_sound_jpg_0040f4fc[0x12];
      local_198[3] = s__tmp_abnormal_sound_jpg_0040f4fc[0x13];
      local_194[0] = s__tmp_abnormal_sound_jpg_0040f4fc[0x14];
      local_194[1] = s__tmp_abnormal_sound_jpg_0040f4fc[0x15];
      local_194[2] = s__tmp_abnormal_sound_jpg_0040f4fc[0x16];
      local_194[3] = s__tmp_abnormal_sound_jpg_0040f4fc[0x17];
      local_228[0] = s__tmp_abnormal_sound_mp4_0040f514[0];
      local_228[1] = s__tmp_abnormal_sound_mp4_0040f514[1];
      local_228[2] = s__tmp_abnormal_sound_mp4_0040f514[2];
      local_228[3] = s__tmp_abnormal_sound_mp4_0040f514[3];
      local_224[0] = s__tmp_abnormal_sound_mp4_0040f514[4];
      local_224[1] = s__tmp_abnormal_sound_mp4_0040f514[5];
      local_224[2] = s__tmp_abnormal_sound_mp4_0040f514[6];
      local_224[3] = s__tmp_abnormal_sound_mp4_0040f514[7];
      local_220[0] = s__tmp_abnormal_sound_mp4_0040f514[8];
      local_220[1] = s__tmp_abnormal_sound_mp4_0040f514[9];
      local_220[2] = s__tmp_abnormal_sound_mp4_0040f514[10];
      local_220[3] = s__tmp_abnormal_sound_mp4_0040f514[0xb];
      local_21c[0] = s__tmp_abnormal_sound_mp4_0040f514[0xc];
      local_21c[1] = s__tmp_abnormal_sound_mp4_0040f514[0xd];
      local_21c[2] = s__tmp_abnormal_sound_mp4_0040f514[0xe];
      local_21c[3] = s__tmp_abnormal_sound_mp4_0040f514[0xf];
      local_218[0] = s__tmp_abnormal_sound_mp4_0040f514[0x10];
      local_218[1] = s__tmp_abnormal_sound_mp4_0040f514[0x11];
      local_218[2] = s__tmp_abnormal_sound_mp4_0040f514[0x12];
      local_218[3] = s__tmp_abnormal_sound_mp4_0040f514[0x13];
      snprintf(auStack_1e8,0x40,"%s.crypt","/tmp/abnormal_sound.jpg");
      snprintf(auStack_268,0x40,"%s.crypt","/tmp/abnormal_sound.mp4");
      iVar3 = 5;
      snprintf(auStack_468,0x200,"rm -f %s* %s*","/tmp/abnormal_sound.jpg","/tmp/abnormal_sound.mp4"
              );
      local_30 = 5;
      goto LAB_00405b70;
    }
    local_34 = 0x420000;
    if (*(int *)(DAT_00423a48 + 0x5d0) == 1) {
      iVar3 = 4;
      local_30 = 3;
LAB_00405918:
      local_38 = *(int *)(DAT_00423a48 + 0x5d4);
      local_1a8[0] = s__tmp_motion_jpg_0040f610[0];
      local_1a8[1] = s__tmp_motion_jpg_0040f610[1];
      local_1a8[2] = s__tmp_motion_jpg_0040f610[2];
      local_1a8[3] = s__tmp_motion_jpg_0040f610[3];
      local_1a4[0] = s__tmp_motion_jpg_0040f610[4];
      local_1a4[1] = s__tmp_motion_jpg_0040f610[5];
      local_1a4[2] = s__tmp_motion_jpg_0040f610[6];
      local_1a4[3] = s__tmp_motion_jpg_0040f610[7];
      local_1a0[0] = s__tmp_motion_jpg_0040f610[8];
      local_1a0[1] = s__tmp_motion_jpg_0040f610[9];
      local_1a0[2] = s__tmp_motion_jpg_0040f610[10];
      local_1a0[3] = s__tmp_motion_jpg_0040f610[0xb];
      local_19c[0] = s__tmp_motion_jpg_0040f610[0xc];
      local_19c[1] = s__tmp_motion_jpg_0040f610[0xd];
      local_19c[2] = s__tmp_motion_jpg_0040f610[0xe];
      local_19c[3] = s__tmp_motion_jpg_0040f610[0xf];
      local_228[0] = s__tmp_motion_mp4_0040f620[0];
      local_228[1] = s__tmp_motion_mp4_0040f620[1];
      local_228[2] = s__tmp_motion_mp4_0040f620[2];
      local_228[3] = s__tmp_motion_mp4_0040f620[3];
      local_224[0] = s__tmp_motion_mp4_0040f620[4];
      local_224[1] = s__tmp_motion_mp4_0040f620[5];
      local_224[2] = s__tmp_motion_mp4_0040f620[6];
      local_224[3] = s__tmp_motion_mp4_0040f620[7];
      local_220[0] = s__tmp_motion_mp4_0040f620[8];
      local_220[1] = s__tmp_motion_mp4_0040f620[9];
      local_220[2] = s__tmp_motion_mp4_0040f620[10];
      local_220[3] = s__tmp_motion_mp4_0040f620[0xb];
      local_21c[0] = s__tmp_motion_mp4_0040f620[0xc];
      local_21c[1] = s__tmp_motion_mp4_0040f620[0xd];
      local_21c[2] = s__tmp_motion_mp4_0040f620[0xe];
      local_21c[3] = s__tmp_motion_mp4_0040f620[0xf];
      snprintf(auStack_1e8,0x40,"%s.crypt","/tmp/motion.jpg");
      snprintf(auStack_268,0x40,"%s.crypt","/tmp/motion.mp4");
      snprintf(auStack_468,0x200,"rm -f %s* %s*","/tmp/motion.jpg","/tmp/motion.mp4");
      FUN_0040b48c(auStack_468,auStack_1a68,0x800,10);
      cloud_cap_pic(local_1a8);
      cloud_send_shortrec_msg(local_228,iVar3);
    }
    else {
      if (*(int *)(DAT_00423a48 + 0x5d0) == 2) {
        iVar3 = 2;
        local_30 = 2;
        goto LAB_00405918;
      }
      local_38 = *(int *)(DAT_00423a48 + 0x5d4);
      local_1a8[0] = s__tmp_motion_jpg_0040f610[0];
      local_1a8[1] = s__tmp_motion_jpg_0040f610[1];
      local_1a8[2] = s__tmp_motion_jpg_0040f610[2];
      local_1a8[3] = s__tmp_motion_jpg_0040f610[3];
      local_1a4[0] = s__tmp_motion_jpg_0040f610[4];
      local_1a4[1] = s__tmp_motion_jpg_0040f610[5];
      local_1a4[2] = s__tmp_motion_jpg_0040f610[6];
      local_1a4[3] = s__tmp_motion_jpg_0040f610[7];
      local_1a0[0] = s__tmp_motion_jpg_0040f610[8];
      local_1a0[1] = s__tmp_motion_jpg_0040f610[9];
      local_1a0[2] = s__tmp_motion_jpg_0040f610[10];
      local_1a0[3] = s__tmp_motion_jpg_0040f610[0xb];
      local_19c[0] = s__tmp_motion_jpg_0040f610[0xc];
      local_19c[1] = s__tmp_motion_jpg_0040f610[0xd];
      local_19c[2] = s__tmp_motion_jpg_0040f610[0xe];
      local_19c[3] = s__tmp_motion_jpg_0040f610[0xf];
      local_228[0] = s__tmp_motion_mp4_0040f620[0];
      local_228[1] = s__tmp_motion_mp4_0040f620[1];
      local_228[2] = s__tmp_motion_mp4_0040f620[2];
      local_228[3] = s__tmp_motion_mp4_0040f620[3];
      local_224[0] = s__tmp_motion_mp4_0040f620[4];
      local_224[1] = s__tmp_motion_mp4_0040f620[5];
      local_224[2] = s__tmp_motion_mp4_0040f620[6];
      local_224[3] = s__tmp_motion_mp4_0040f620[7];
      local_220[0] = s__tmp_motion_mp4_0040f620[8];
      local_220[1] = s__tmp_motion_mp4_0040f620[9];
      local_220[2] = s__tmp_motion_mp4_0040f620[10];
      local_220[3] = s__tmp_motion_mp4_0040f620[0xb];
      local_21c[0] = s__tmp_motion_mp4_0040f620[0xc];
      local_21c[1] = s__tmp_motion_mp4_0040f620[0xd];
      local_21c[2] = s__tmp_motion_mp4_0040f620[0xe];
      local_21c[3] = s__tmp_motion_mp4_0040f620[0xf];
      snprintf(auStack_1e8,0x40,"%s.crypt","/tmp/motion.jpg");
      snprintf(auStack_268,0x40,"%s.crypt","/tmp/motion.mp4");
      snprintf(auStack_468,0x200,"rm -f %s* %s*","/tmp/motion.jpg","/tmp/motion.mp4");
      FUN_0040b48c(auStack_468,auStack_1a68,0x800,10);
      cloud_cap_pic(local_1a8);
      cloud_send_shortrec_msg(local_228,1);
      sleep(3);
      if (*(int *)(DAT_00423a48 + 0x5d0) == 1) {
        iVar3 = 4;
        local_30 = 3;
      }
      else {
        local_30 = iVar3;
        if (*(int *)(DAT_00423a48 + 0x5d0) == 2) {
          iVar3 = 2;
          local_30 = iVar3;
        }
      }
    }
  }
  iVar4 = 3;
  snprintf(auStack_668,0x200,
           "%s -c 306 -url %s/v5/alert/gen_presigned_url -uid %s -keySec %s -type %d -sub_type %d -suffix %s -time %d"
           ,"/backup/cloudAPI",DAT_00423a48 + 0xc,DAT_00423a48 + 0x235,DAT_00423a48 + 0x295,0,iVar3,
           "jpg,mp4",local_38);
  FUN_0040b244("cloud.c","yi_motion_push",0xef6,"cmd=%s\n",auStack_668);
  do {
    DAT_004239c0 = DAT_004239c0 + 1;
    iVar4 = iVar4 + -1;
    memset(auStack_1a68,0,0x800);
    FUN_0040b48c(auStack_668,auStack_1a68,0x800,10);
    FUN_0040b244("cloud.c","yi_motion_push",0xeff,"%s\n",auStack_1a68);
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    memset(auStack_2268,0,0x800);
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4c = 0;
    memset(auStack_e68,0,0x400);
    memset(auStack_1268,0,0x400);
    memset(local_868,0,0x200);
    memset(local_a8,0,0x40);
    memset(local_a68,0,0x200);
    memset(local_e8,0,0x40);
    iVar1 = FUN_0040b9ac(&local_48,"\"code\"",auStack_1a68);
    if (((iVar1 == 1) && (local_2c = iVar1, iVar1 = atoi(&local_48), iVar1 == 20000)) &&
       (iVar1 = FUN_0040b9ac(auStack_2268,"\"data\"",auStack_1a68), iVar1 == local_2c)) {
      local_2c = iVar1;
      FUN_0040b244("cloud.c","yi_motion_push",0xf0f,"gen_presigned_url success \n");
      iVar4 = FUN_0040b9ac(&local_58,&DAT_0040f5bc,auStack_2268);
      if ((iVar4 != local_2c) || (iVar1 = strcmp(&local_58,&DAT_0040e934), iVar1 != 0)) {
        iVar3 = 10;
        cloud_report_alarm_upload_status(4,local_30,0);
        goto LAB_00405a78;
      }
      iVar1 = FUN_0040b9ac(auStack_e68,"\"jpg\"",auStack_2268);
      if (iVar1 == iVar4) {
        FUN_0040b9ac(local_868,"\"url\"",auStack_e68);
        FUN_0040b9ac(local_a8,"\"pwd\"",auStack_e68);
      }
      iVar4 = FUN_0040b9ac(auStack_1268,"\"mp4\"",auStack_2268);
      if (iVar4 == 1) {
        FUN_0040b9ac(local_a68,"\"url\"",auStack_1268);
        FUN_0040b9ac(local_e8,"\"pwd\"",auStack_1268);
      }
      iVar4 = webapi_do_event_update(local_868,local_a68,local_a8,local_e8,0,iVar3,local_38);
      if (iVar4 != 1) {
        cloud_report_alarm_upload_status(6,0,0);
        cloud_report_alarm_upload_status(7,0,0);
        cloud_report_alarm_upload_status(8,0,0);
      }
      iVar1 = 100;
      local_38 = -(uint)(local_a68[0] == '\0');
      iVar4 = -(uint)(local_868[0] == '\0');
      goto LAB_00405d54;
    }
    DAT_004239c4 = DAT_004239c4 + 1;
    cloud_report_alarm_upload_status(5,0,0);
    sleep(5);
  } while (iVar4 != 0);
  goto LAB_00405868;
  while (sleep(1), iVar3 != 0) {
LAB_00405a78:
    iVar4 = access(local_228,0);
    iVar3 = iVar3 + -1;
    if (iVar4 == 0) break;
  }
  goto LAB_00405868;
LAB_00405d54:
  do {
    if (((iVar3 != 3) && (iVar3 != 5)) && (DAT_00423a5c < *(int *)(DAT_00423a48 + 0x18c) + 0x4b0U))
    break;
    if (iVar4 == 0) {
      iVar2 = access(local_1a8,0);
      if (iVar2 == 0) {
        if (local_a8[0] == '\0') {
          strcpy(auStack_128,local_1a8);
          iVar4 = webapi_do_event_upload(local_868,auStack_128);
        }
        else {
          FUN_00404fd4(local_1a8,auStack_1e8,local_a8);
          strcpy(auStack_128,auStack_1e8);
          iVar4 = webapi_do_event_upload(local_868,auStack_128);
        }
        if (iVar4 < 0) {
          iVar4 = -1;
          cloud_report_alarm_upload_status(7,0,0);
        }
        else {
          iVar4 = 1;
          DAT_004239c8 = DAT_004239c8 + 1;
        }
        goto LAB_00405d8c;
      }
      if (local_38 == 0) goto LAB_00405d94;
    }
    else {
LAB_00405d8c:
      if (local_38 != 0) break;
LAB_00405d94:
      iVar2 = access(local_228,0);
      if (iVar2 == 0) {
        if (local_e8[0] == '\0') {
          strcpy(auStack_168,local_228);
          iVar2 = webapi_do_event_upload(local_a68,auStack_168);
          if (-1 < iVar2) goto LAB_00405eb0;
LAB_00405de0:
          cloud_report_alarm_upload_status(8,0,0);
          local_38 = -1;
        }
        else {
          FUN_00404fd4(local_228,auStack_268,local_e8);
          strcpy(auStack_168,auStack_268);
          iVar2 = webapi_do_event_upload(local_a68,auStack_168);
          if (iVar2 < 0) goto LAB_00405de0;
LAB_00405eb0:
          local_38 = 1;
          DAT_004239cc = DAT_004239cc + 1;
        }
        if (iVar4 != 0) break;
      }
      else {
        local_38 = 0;
      }
    }
    iVar1 = iVar1 + -1;
    usleep(100000);
  } while (iVar1 != 0);
LAB_00405868:
  if (*(char *)(DAT_00423a48 + 0x9ee) != '\0') {
    local_68 = 2;
    local_64 = 4;
    local_60 = 0x103d;
    local_5e = 0;
    local_5c = 0;
    iVar3 = FUN_0040b6d4(*(undefined4 *)(local_34 + 0x3a40),&local_68,0x10);
    if (iVar3 < 0) {
      FUN_0040b244("cloud.c","yi_motion_push",0xf97,"mqueue_send RMM_SHORT_RECORD_WARNING err");
    }
  }
  FUN_0040b48c(auStack_468,auStack_1a68,0x800,10);
  return;
}



// ==== yi_push_voicecmd_file @ 00405f58 size=1956

void yi_push_voicecmd_file(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auStack_17b8 [2048];
  undefined1 auStack_fb8 [2048];
  undefined1 auStack_7b8 [512];
  undefined1 auStack_5b8 [512];
  undefined1 auStack_3b8 [512];
  undefined1 auStack_1b8 [128];
  undefined1 auStack_138 [64];
  char local_f8 [64];
  char local_b8 [64];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  char *local_68;
  undefined1 *local_64;
  char *local_60;
  undefined1 *local_5c;
  char *local_58;
  char *local_54;
  char *local_50;
  char *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  char *local_40;
  char *local_3c;
  undefined1 *local_38;
  char *local_34;
  int local_30;
  
  memset(auStack_fb8,0,0x800);
  memset(auStack_3b8,0,0x200);
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  memset(auStack_17b8,0,0x800);
  local_64 = auStack_5b8;
  if (param_1 == 0) {
    local_5c = auStack_7b8;
    local_68 = local_b8;
    memset(local_64,0,0x200);
    local_60 = local_f8;
    memset(local_5c,0,0x200);
    memset(local_68,0,0x40);
    memset(local_60,0,0x40);
    local_48 = time(0);
    local_4c = "/tmp/mmap.info";
    printf(&DAT_0040f6fc,"yi_push_voicecmd_file",0xfb2,0);
    pcVar4 = "/tmp/vc_capture.jpg";
    remove();
    local_54 = "/tmp/mmap.info";
    local_34 = "/tmp/vc_capture.jpg.crypt";
    remove();
    local_58 = "/tmp/mmap.info";
    remove("/tmp/vc_record.mp4");
    local_50 = "/tmp/mmap.info";
    remove("/tmp/vc_record.mp4.crypt");
    cloud_cap_pic("/tmp/vc_capture.jpg");
    local_3c = local_68;
    local_44 = 3;
    local_38 = local_64;
    pcVar7 = "jpg";
  }
  else {
    local_5c = auStack_7b8;
    local_68 = local_b8;
    memset(local_64,0,0x200);
    local_60 = local_f8;
    memset(local_5c,0,0x200);
    memset(local_68,0,0x40);
    memset(local_60,0,0x40);
    local_48 = time(0);
    local_4c = "/tmp/mmap.info";
    printf(&DAT_0040f6fc,"yi_push_voicecmd_file",0xfb2,param_1);
    remove("/tmp/vc_capture.jpg");
    local_54 = "/tmp/mmap.info";
    remove("/tmp/vc_capture.jpg.crypt");
    pcVar4 = "/tmp/vc_record.mp4";
    local_58 = "/tmp/mmap.info";
    remove();
    local_50 = "/tmp/mmap.info";
    local_34 = "/tmp/vc_record.mp4.crypt";
    remove();
    cloud_cap_pic("/tmp/vc_capture.jpg");
    cloud_make_video(local_58 + -0x9b4,0xf);
    local_3c = local_60;
    local_44 = 4;
    local_38 = local_5c;
    pcVar7 = "jpg,mp4";
  }
  iVar5 = 3;
  snprintf(auStack_3b8,0x200,
           "%s -c 306 -url %s/v5/alert/gen_presigned_url -uid %s -keySec %s -type %d -sub_type %d -suffix %s -time %d"
           ,"/backup/cloudAPI",DAT_00423a48 + 0xc,DAT_00423a48 + 0x235,DAT_00423a48 + 0x295,2,
           local_44,pcVar7,local_48);
  FUN_0040b244("cloud.c","yi_push_voicecmd_file",0xfc6,"cmd=%s\n",auStack_3b8);
  local_40 = pcVar4;
  do {
    DAT_004239c0 = DAT_004239c0 + 1;
    iVar5 = iVar5 + -1;
    memset(auStack_fb8,0,0x800);
    FUN_0040b48c(auStack_3b8,auStack_fb8,0x800,10);
    FUN_0040b244("cloud.c","yi_push_voicecmd_file",0xfcf,"%s\n",auStack_fb8);
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    memset(auStack_17b8,0,0x800);
    memset(local_64,0,0x200);
    memset(local_5c,0,0x200);
    memset(local_68,0,0x40);
    memset(local_60,0,0x40);
    iVar2 = FUN_0040b9ac(&local_78,"\"code\"",auStack_fb8);
    if (((iVar2 == 1) && (iVar2 = atoi(&local_78), iVar2 == 20000)) &&
       (iVar2 = FUN_0040b9ac(auStack_17b8,"\"data\"",auStack_fb8), pcVar4 = local_40, iVar2 == 1)) {
      local_30 = iVar2;
      memset(auStack_138,0,0x40);
      FUN_0040b244("cloud.c","yi_push_voicecmd_file",0xfdd,"gen_presigned_url success \n");
      iVar5 = FUN_0040b9ac(auStack_138,&DAT_0040f5bc,auStack_17b8);
      if ((iVar5 == local_30) && (iVar2 = strcmp(auStack_138,&DAT_0040e934), iVar2 == 0)) {
        memset(auStack_1b8,0,0x80);
        iVar2 = FUN_0040b9ac(auStack_1b8,"\"mp4\"",auStack_17b8);
        if (iVar2 == iVar5) {
          FUN_0040b9ac(local_5c,"\"url\"",auStack_1b8);
          FUN_0040b9ac(local_60,"\"pwd\"",auStack_1b8);
        }
        memset(auStack_1b8,0,0x80);
        iVar5 = FUN_0040b9ac(auStack_1b8,"\"jpg\"",auStack_17b8);
        if (iVar5 == 1) {
          FUN_0040b9ac(local_64,"\"url\"",auStack_1b8);
          FUN_0040b9ac(local_68,"\"pwd\"",auStack_1b8);
        }
        bVar1 = true;
        webapi_do_event_update(local_64,local_5c,local_68,local_60,2,local_44,local_48);
        goto LAB_00406278;
      }
      break;
    }
    DAT_004239c4 = DAT_004239c4 + 1;
    sleep(5);
    pcVar4 = local_40;
  } while (iVar5 != 0);
  bVar1 = false;
LAB_00406278:
  iVar5 = 0x12;
  if (param_1 == 0) {
    iVar5 = 3;
  }
  do {
    iVar2 = access(pcVar4,0);
    iVar5 = iVar5 + -1;
    if (iVar2 == 0) goto LAB_004062c0;
    sleep(1);
  } while (0 < iVar5);
  printf(&DAT_0040f71c,local_4c + 0x5e0,0x1007);
LAB_004062c0:
  if (!bVar1) {
LAB_004062c8:
    remove("/tmp/vc_capture.jpg");
    remove(local_54 + -0x9a0);
    remove(local_58 + -0x9b4);
    remove(local_50 + -0x9d0);
    return;
  }
  bVar1 = param_1 == 0;
  printf(&DAT_0040f690,local_4c + 0x5e0,0x1011);
  if (*local_3c != '\0') {
    FUN_00404fd4(pcVar4,local_34,local_3c);
    pcVar4 = local_34;
  }
  if ((param_1 == 0) || (local_b8[0] == '\0')) {
    pcVar7 = "/tmp/vc_capture.jpg";
  }
  else {
    pcVar7 = local_54 + -0x9a0;
    FUN_00404fd4("/tmp/vc_capture.jpg",pcVar7,local_68);
  }
  iVar5 = 3;
  pcVar6 = local_4c + 0x5e0;
  do {
    uVar3 = webapi_do_event_upload(local_38,pcVar4);
    printf(&DAT_0040f6c4,pcVar6,0x1025,pcVar4,uVar3);
    iVar2 = -((int)~uVar3 >> 0x1f);
    if (param_1 != 0) goto LAB_00406508;
    if (iVar2 != 0) goto LAB_004064b0;
LAB_004064bc:
    while( true ) {
      iVar5 = iVar5 + -1;
      sleep(3);
      if (iVar5 == 0) goto LAB_004062c8;
      if (iVar2 == 0) break;
      iVar2 = 1;
      if (param_1 != 0) {
LAB_00406508:
        if (!bVar1) goto LAB_00406664;
        goto joined_r0x00406694;
      }
LAB_004064b0:
      if (bVar1) goto LAB_004062c8;
    }
  } while( true );
LAB_00406664:
  local_30 = webapi_do_event_upload(local_64,pcVar7);
  printf(&DAT_0040f6c4,pcVar6,0x102e,pcVar7,local_30);
  if (-1 < local_30) {
joined_r0x00406694:
    bVar1 = true;
    if (iVar2 != 0) goto LAB_004062c8;
  }
  goto LAB_004064bc;
}



// ==== yi_proc @ 00406fcc size=1900

void yi_proc(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int unaff_s1;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_158 [64];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_58 = 0;
  iVar11 = DAT_00423a48[0x15c];
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  gettimeofday(&local_38,0);
  srand(local_34 + local_38);
  iVar2 = rand();
  iVar2 = iVar2 % 0x78;
  local_2c = iVar2;
  FUN_0040b244("cloud.c","yi_proc",0x1153,"yi_proc ok, update time[%d]\n",iVar2);
  DAT_00423a68 = 1;
  if ((*DAT_00423a48 == 1) && (iVar3 = webapi_do_check_did(), iVar3 == -1)) {
    iVar11 = 10;
    do {
      if (0 < iVar11) {
        if (DAT_00423a48[0x12f] == 0) {
          iVar3 = FUN_00401918(DAT_00423a40,0x88,0,0);
          if (iVar3 < 0) {
            FUN_0040b244("cloud.c","yi_proc",0x116c,
                         "cloud_set_ban_device send_msg DISPATCH_SET_BAN_DEVICE fail!\n",iVar2);
          }
          FUN_0040b244("cloud.c","yi_proc",0x116f,"ban region!\n");
        }
        iVar3 = FUN_00401918(DAT_00423a40,0x100d,0,0);
        if (iVar3 < 0) {
          FUN_0040b244("cloud.c","yi_proc",0x1174,
                       "cloud_set_ban_device send_msg RMM_SPEAK_BAN_DEVICE fail!\n");
          iVar11 = iVar11 + -1;
        }
        else {
          iVar11 = iVar11 + -1;
        }
      }
      sleep(0x14);
    } while( true );
  }
  if (DAT_00423a48[0x16f] == 1) {
    if ((char)DAT_00423a48[0x23] != '\0') {
      iVar3 = webapi_do_reset_by_specified_server(DAT_00423a48 + 0x23,1);
      if (iVar3 == 0) {
        FUN_0040b244("cloud.c","yi_proc",0x1185,"webapi_do_reset last_api_server fail",iVar2);
      }
      else {
        cloud_clear_api_server();
      }
    }
    iVar3 = webapi_do_reset_by_specified_server(DAT_00423a48 + 3,3);
    if (iVar3 == 0) {
      FUN_0040b244("cloud.c","yi_proc",0x1190,"webapi_do_reset fail",iVar2);
      cloud_set_bind_result(0x98);
      do {
        sleep(10);
      } while( true );
    }
    iVar2 = webapi_do_login();
    if (iVar2 == 0) {
      FUN_0040b244("cloud.c","yi_proc",0x119c,"webapi_do_login fail");
      cloud_set_bind_result(0x98);
      do {
        sleep(10);
        sleep(10);
      } while( true );
    }
    iVar2 = webapi_do_bindkey();
    if (iVar2 == 0) {
      FUN_0040b244("cloud.c","yi_proc",0x11a8,"webapi_do_bindkey fail");
      cloud_set_bind_result(0x98);
      do {
        sleep(10);
      } while( true );
    }
    cloud_save_api_server();
LAB_00407130:
    unaff_s1 = 0x420000;
    FUN_004049c8();
    if (*(char *)((int)DAT_00423a48 + 499) != '\x01') goto LAB_0040714c;
  }
  else {
    iVar3 = webapi_do_login();
    if (iVar3 != 0) goto LAB_00407130;
    FUN_0040b244("cloud.c","yi_proc",0x11ba,"webapi_do_login fail",iVar2);
    sleep(10);
    exit(0);
  }
  iVar2 = strcmp();
  if (iVar2 == 0) {
    iVar2 = FUN_00401918(*(undefined4 *)(unaff_s1 + 0x3a40),0x600f,0,0);
    if (iVar2 < 0) {
      FUN_0040b244("cloud.c","yi_proc",0x11c7,
                   "cloud_update_upgrade send_msg CLOUD_UPDATE_SUCCESS fail!\n");
    }
    FUN_0040b244("cloud.c","yi_proc",0x11c9,
                 "cloud_update_upgrade send_msg CLOUD_UPDATE_SUCCESS success!\n");
  }
  else {
    iVar2 = FUN_00401918(*(undefined4 *)(unaff_s1 + 0x3a40),0x6010,0,0);
    if (iVar2 < 0) {
      FUN_0040b244("cloud.c","yi_proc",0x11cf,
                   "cloud_update_upgrade send_msg CLOUD_UPDATE_FAILED fail!\n");
    }
    FUN_0040b244("cloud.c","yi_proc",0x11d1,
                 "cloud_update_upgrade send_msg CLOUD_UPDATE_FAILED success!\n");
  }
  iVar2 = FUN_00401918(DAT_00423a40,0xf8,0,0);
  if (iVar2 < 0) {
    FUN_0040b244("cloud.c","yi_proc",0x11d5,
                 "cloud_clr_update_status send_msg DISPATCH_CLR_UPDATE_STATUS fail!\n");
  }
  FUN_0040b244("cloud.c","yi_proc",0x11d7,
               "cloud_clr_update_status send_msg DISPATCH_CLR_UPDATE_STATUS success!\n");
LAB_0040714c:
  iVar2 = 0x1c20;
  if (DAT_004237a0 == 1) {
    iVar2 = 300;
  }
  FUN_0040bd28(DAT_00423a48[0x16b],"first_login");
  bVar1 = false;
  iVar3 = 5;
  strncpy(&local_58,DAT_00423a48 + 0xf0,0x1f);
  local_30 = 0;
LAB_004072f8:
  DAT_00423a68 = 1;
  iVar7 = webapi_do_tnp_on_line();
  if (iVar7 == 1) {
    iVar7 = 0x1c1f;
    FUN_0040b244("cloud.c","yi_proc",0x11ec,"tnp online ok!");
    goto LAB_004071a4;
  }
  iVar7 = 0x1c1f;
  report_tnp_on_line_status(1);
  if (0 < iVar2) goto LAB_004071ac;
LAB_00407318:
  piVar8 = DAT_00423a48 + 0xf0;
  do {
    DAT_00423a68 = 1;
    strncpy(&local_58,piVar8,0x1f);
    iVar2 = webapi_do_login();
    if (iVar2 == 1) {
      FUN_00401918(DAT_00423a44,0x6007,0,0);
      FUN_0040b244("cloud.c","yi_proc",0x11fc,"login ok!");
      FUN_0040bd28(DAT_00423a48[0x16b],"login");
      piVar6 = DAT_00423a48;
      if (DAT_004237a0 != 1) {
        iVar10 = DAT_00423a48[0x130];
        iVar2 = 0x1c1f;
        iVar3 = 5;
        iVar4 = iVar11;
        goto joined_r0x004073e0;
      }
      iVar2 = 299;
      iVar3 = 5;
    }
    else {
      iVar2 = iVar3 + -1;
      iVar4 = rand();
      if (iVar3 == 0) {
        trap(0x1c00);
      }
      iVar3 = iVar3 * 4 + iVar4 % iVar3;
      piVar6 = DAT_00423a48;
      if (0x1c20 < iVar3) {
        iVar3 = 0x1c20;
      }
    }
    while( true ) {
      iVar10 = piVar6[0x130];
      iVar4 = iVar11;
joined_r0x004073e0:
      if (iVar10 == 1) {
        DAT_00423a68 = 1;
        iVar11 = FUN_004049c8();
        piVar6 = DAT_00423a48;
        if (iVar11 == 1) {
          FUN_0040b244("cloud.c","yi_proc",0x1217,"sync info from server ok!");
          cloud_finish_sync_info_from_server();
          piVar6 = DAT_00423a48;
        }
      }
      iVar11 = piVar6[0x15c];
      DAT_00423a68 = 0;
      iVar10 = access("/tmp/cloud_init_finish",0);
      if (iVar11 != iVar4) {
        iVar2 = 0;
      }
      if (iVar10 != 0) {
        memset(local_158,0,0x100);
        FUN_0040b48c("echo 1 > /tmp/cloud_init_finish",local_158,0x100,10);
      }
      local_158[0] = time(0);
      local_158[0] = local_158[0] + DAT_00423a48[0x12e];
      puVar5 = (undefined4 *)localtime(local_158);
      iVar10 = puVar5[2];
      iVar9 = iVar10 * 0x3c + puVar5[1];
      iVar4 = iVar9;
      if (local_30 != iVar9) {
        printf("\n[%02d:%02d:%02d]:\n",iVar10,puVar5[1],*puVar5);
        iVar10 = puVar5[2];
        iVar4 = iVar10 * 0x3c + puVar5[1];
      }
      if (((local_2c != iVar4) || (bVar1)) || (0 < DAT_00423a48[0x16c])) {
        if (1 < iVar10) {
          bVar1 = false;
        }
      }
      else {
        bVar1 = true;
        do_need_update();
      }
      sleep(1);
      local_30 = iVar9;
      if (iVar7 == 0) goto LAB_004072f8;
      iVar7 = iVar7 + -1;
LAB_004071a4:
      if (iVar2 < 1) goto LAB_00407318;
LAB_004071ac:
      piVar6 = DAT_00423a48;
      if (DAT_00423a6c != 0) goto LAB_00407318;
      piVar8 = DAT_00423a48 + 0xf0;
      iVar4 = strcmp(&local_58,piVar8);
      if ((iVar4 != 0) || (*(char *)((int)piVar6 + 0xa33) != (char)piVar6[0x27c])) break;
      iVar2 = iVar2 + -1;
    }
  } while( true );
}



// ==== yi_sync_time @ 004082bc size=660

undefined4 yi_sync_time(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double in_f0_1;
  double dVar4;
  undefined1 *puVar5;
  undefined1 auStack_ca0 [2048];
  undefined1 auStack_4a0 [1024];
  undefined1 auStack_a0 [64];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  memset(auStack_4a0,0,0x400);
  memset(auStack_ca0,0,0x800);
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  memset(auStack_a0,0,0x40);
  iVar3 = DAT_00423a48;
  iVar2 = DAT_00423a48 + 0xc;
  iVar1 = strncmp("https://",iVar2,8);
  if (iVar1 == 0) {
    snprintf(auStack_a0,0x40,"http://%s",iVar3 + 0x14);
  }
  else {
    snprintf(auStack_a0,0x40,"%s",iVar2);
  }
  sprintf(auStack_4a0,"%s -c 136 -url %s/v2/ipc/sync_time ","/backup/cloudAPI",auStack_a0);
  FUN_0040b244("cloud.c","yi_sync_time",0x14a8,"cmd=%s\n",auStack_4a0);
  iVar3 = 5;
  dVar4 = DAT_00410ca0;
  do {
    FUN_0040b48c(auStack_4a0,auStack_ca0,0x800,10);
    puVar5 = auStack_ca0;
    iVar3 = iVar3 + -1;
    FUN_0040b244("cloud.c","yi_sync_time",0x14af,"%s\n",puVar5);
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    iVar1 = FUN_0040b8cc(&local_40,"\"code\"",auStack_ca0);
    if (iVar1 == 1) {
      iVar1 = atoi(&local_40);
      if (iVar1 == 20000) {
        local_60 = 0;
        local_5c = 0;
        local_58 = 0;
        local_54 = 0;
        local_50 = 0;
        local_4c = 0;
        local_48 = 0;
        local_44 = 0;
        iVar1 = FUN_0040b8cc(&local_60,"\"time\"",auStack_ca0);
        if (iVar1 == 1) {
          atof(&local_60);
          iVar1 = (int)(in_f0_1 / dVar4);
          in_f0_1 = (double)CONCAT44(iVar1,SUB84(in_f0_1 / dVar4,0));
          iVar1 = cloud_set_time(iVar1);
          if (iVar1 == 0) {
            FUN_0040b244("cloud.c","yi_sync_time",0x14bb,"yi_sync_time ok!\n");
            return 0;
          }
        }
      }
    }
    FUN_0040b864(3000);
  } while (iVar3 != 0);
  FUN_0040b244("cloud.c","yi_sync_time",0x14c3,"yi_sync_time fail!\n",puVar5);
  return 0xffffffff;
}



