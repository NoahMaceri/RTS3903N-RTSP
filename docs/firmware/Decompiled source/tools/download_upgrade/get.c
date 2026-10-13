/* download_upgrade — "get" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "download_upgrade.h"

// ==== get_upgrade_file @ 00401d70 size=392

undefined4 get_upgrade_file(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_510 [512];
  undefined1 auStack_310 [512];
  undefined1 auStack_110 [128];
  undefined1 auStack_90 [128];
  
  memset(auStack_90,0,0x80);
  memset(auStack_110,0,0x80);
  memset(auStack_310,0,0x200);
  memset(auStack_510,0,0x200);
  snprintf(auStack_90,0x80,"%s/%s","/tmp/update","firmware_m.bin");
  snprintf(auStack_110,0x80,"%s.tmp",auStack_90);
  snprintf(auStack_310,0x200,"%s -c 300 -url %shome_r10m -filename %s","/backup/cloudAPI",param_1,
           auStack_110);
  printf("downloading file(%s)\n",auStack_310);
  system_cmd_withret_timeout(auStack_310,auStack_510,0x200,0xb4);
  iVar1 = strstr(auStack_510,"success");
  if (iVar1 == 0) {
    puts("download fail");
    uVar2 = 0xfffffffe;
  }
  else {
    puts("download success");
    iVar1 = md5_check_file(auStack_110,param_2);
    if (iVar1 == 0) {
      puts("md5_check_file success");
      puts("get_upgrade_file ok!");
      rename(auStack_110,auStack_90);
      uVar2 = 0;
    }
    else {
      puts("md5_check_file fail!");
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



// ==== get_sharemem @ 004027c4 size=244

int get_sharemem(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 10;
  do {
    iVar1 = open(param_1,0);
    iVar2 = iVar2 + -1;
    if (iVar1 != -1) {
      iVar2 = mmap(0,param_2,1,1,iVar1,0);
      if (iVar2 == -1) {
        close(iVar1);
        return 0;
      }
      close(iVar1);
      return iVar2;
    }
    usleep(100000);
  } while (iVar2 != 0);
  return 0;
}



// ==== get_cur_time_ms @ 004029c4 size=112

void get_cur_time_ms(void)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  local_c = 0;
  gettimeofday(&local_10,0);
  return;
}



// ==== get_filename_by_time @ 00402f20 size=1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int get_filename_by_time(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int aiStackX_0 [4];
  int aiStack_28 [3];
  
  aiStack_28[0] = 0;
  aiStackX_0[0] = param_1;
  if ((___bss_start != (int *)0x0) ||
     (___bss_start = (int *)get_sharemem("/tmp/record_event",0x8010), ___bss_start != (int *)0x0)) {
    if (*___bss_start == 0) {
code_r0x00402fe0:
      uVar1 = func_0x004044e0(aiStackX_0);
      printf(&UNK_00404224,"get_filename_by_time",0x27b,uVar1);
    }
    else {
      uVar7 = ___bss_start[2] + 1;
      if (___bss_start[uVar7 * 2 + 2] < aiStackX_0[0]) {
        iVar3 = 0;
        do {
          uVar8 = uVar7 & 0x80000fff;
          uVar7 = uVar8 + 1;
          if ((int)uVar8 < 0) {
            uVar7 = (uVar8 - 1 | 0xfffff000) + 2;
          }
          if (iVar3 == *___bss_start + -1) goto code_r0x00402fe0;
          iVar3 = iVar3 + 1;
        } while (___bss_start[uVar7 * 2 + 2] < aiStackX_0[0]);
      }
      iVar4 = ___bss_start[uVar7 * 2 + 1];
      iVar6 = ___bss_start[uVar7 * 2 + 2];
      iVar3 = (aiStackX_0[0] / 0x3c) * 0x3c;
      iVar5 = iVar4;
      if (iVar4 <= iVar3) {
        iVar5 = iVar3;
      }
      aiStack_28[0] = iVar5;
      printf(&UNK_00404180,"get_filename_by_time",0x25a,iVar4,iVar6);
      puVar2 = (undefined4 *)localtime(aiStack_28);
      iVar3 = ((iVar5 + 0x3c) / 0x3c) * 0x3c + -1;
      if (iVar3 <= iVar6) {
        iVar6 = iVar3;
      }
      snprintf(param_2,param_3,&UNK_004041a4,"/tmp/sd/record",puVar2[5] + 0x76c,puVar2[4] + 1,
               puVar2[3],puVar2[2],puVar2[1],*puVar2,(iVar6 - iVar5) + 1);
      iVar3 = access(param_2,0);
      if (iVar3 == 0) {
        printf(&UNK_004041e0,"get_filename_by_time",0x271,param_2);
        return aiStack_28[0];
      }
      printf(&UNK_00404200,"get_filename_by_time",0x276,param_2);
    }
  }
  return -1;
}



// ==== get_event_mmap @ 004031c4 size=1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_event_mmap(void)

{
  if (___bss_start != 0) {
    return;
  }
  ___bss_start = get_sharemem("/tmp/record_event",0x8010);
  return;
}



// ==== get_cur_ms @ 00403980 size=84

int get_cur_ms(void)

{
  int local_10;
  int local_c;
  
  gettimeofday(&local_10,0);
  return local_c / 1000 + local_10 * 1000;
}



