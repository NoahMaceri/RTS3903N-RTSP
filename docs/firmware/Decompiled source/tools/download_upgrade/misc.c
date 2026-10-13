/* download_upgrade — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "download_upgrade.h"

// ==== entry @ 00401ad0 size=92

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = DAT_004147d0;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_004147d4)
            (PTR__ftext_004147c8,param_2,&stack0x00000004,PTR__init_004147cc);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ==== md5_check_file @ 00401cb0 size=192

undefined4 md5_check_file(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_218 [256];
  undefined1 auStack_118 [256];
  undefined1 *local_18 [2];
  
  memset(auStack_118,0,0x100);
  memset(auStack_218,0,0x100);
  local_18[0] = (undefined1 *)0x0;
  snprintf(auStack_118,0x100,"md5sum %s | awk \'{print $1}\'",param_1);
  system_cmd_withret_timeout(auStack_118,auStack_218,0x100,0x3c);
  local_18[0] = auStack_218;
  rm_enter(local_18);
  iVar1 = strcmp(auStack_218,param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    printf("calc_md5 = %s, md5 = %s\n",auStack_218,param_2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ==== memset_s @ 00401ef8 size=28

void memset_s(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  if (param_2 <= param_4) {
    param_4 = param_2;
  }
  memset(param_1,param_3,param_4);
  return;
}



// ==== memcpy_s @ 00401f14 size=1

void memcpy_s(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  if (param_2 <= param_4) {
    param_4 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x0040441c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004146bc)(param_1,param_3,param_4);
  return;
}



// ==== InitLogClient @ 00401f30 size=284

undefined4 InitLogClient(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_80 [2];
  undefined2 local_78;
  char acStack_76 [4];
  char acStack_72 [4];
  char local_6e [4];
  char local_6a;
  int aiStack_10 [2];
  
  if (param_1 == (int *)0x0) {
    puts("invalid para, is null\r");
    uVar2 = 0xffffffff;
  }
  else {
    memset(local_80,0,0x78);
    local_78 = 1;
    acStack_76[0] = s__tmp_logsock_0040405c[0];
    acStack_76[1] = s__tmp_logsock_0040405c[1];
    acStack_76[2] = s__tmp_logsock_0040405c[2];
    acStack_76[3] = s__tmp_logsock_0040405c[3];
    acStack_72[0] = s__tmp_logsock_0040405c[4];
    acStack_72[1] = s__tmp_logsock_0040405c[5];
    acStack_72[2] = s__tmp_logsock_0040405c[6];
    acStack_72[3] = s__tmp_logsock_0040405c[7];
    local_6e[0] = s__tmp_logsock_0040405c[8];
    local_6e[1] = s__tmp_logsock_0040405c[9];
    local_6e[2] = s__tmp_logsock_0040405c[10];
    local_6e[3] = s__tmp_logsock_0040405c[0xb];
    local_6a = s__tmp_logsock_0040405c[0xc];
    local_80[1] = 0x6e;
    local_80[0] = socket(1,1,0);
    if (local_80[0] < 0) {
      puts("create socket fail\r");
      uVar2 = 0xffffffff;
    }
    else {
      piVar6 = local_80;
      do {
        piVar5 = piVar6;
        piVar4 = param_1;
        piVar6 = piVar5 + 4;
        iVar1 = piVar5[1];
        *piVar4 = *piVar5;
        iVar3 = piVar5[2];
        piVar4[1] = iVar1;
        iVar1 = piVar5[3];
        piVar4[2] = iVar3;
        piVar4[3] = iVar1;
        param_1 = piVar4 + 4;
      } while (piVar6 != aiStack_10);
      uVar2 = 0;
      iVar1 = piVar5[5];
      piVar4[4] = *piVar6;
      piVar4[5] = iVar1;
    }
  }
  return uVar2;
}



// ==== dump_string @ 0040204c size=536

void dump_string(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_2828;
  int local_2824 [2559];
  undefined1 *local_28;
  undefined1 auStack_24 [8];
  
  if (param_4 == 0) {
    return;
  }
  if (g_stSockLog == (undefined4 *)0x0) {
    iVar1 = InitLogClient(&stSockLog);
    if (iVar1 == 0) {
      g_stSockLog = (undefined4 *)&stSockLog;
    }
    else if (g_stSockLog == (undefined4 *)0x0) goto LAB_0040219c;
  }
  memset(&local_2828,0,0x2800);
  local_2828 = getpid();
  snprintf(local_2824,0x27fc,"%s:%d|%s() ",param_1,param_3,param_2);
  local_28 = &stack0x00000010;
  iVar1 = strlen(local_2824);
  vsnprintf((int)local_2824 + iVar1,0x27fc - iVar1,param_4,&stack0x00000010);
  uVar2 = strlen(local_2824);
  if ((uVar2 < 0x27fb) && (*(char *)((int)local_2824 + (uVar2 - 1)) != '\n')) {
    *(undefined1 *)((int)local_2824 + uVar2) = 10;
    uVar2 = uVar2 + 1;
  }
  iVar1 = sendto(*g_stSockLog,&local_2828,uVar2 + 4,0x40,g_stSockLog + 2,g_stSockLog[1]);
  if (0 < iVar1) {
    return;
  }
LAB_0040219c:
  time(auStack_24);
  puVar3 = (undefined4 *)localtime(auStack_24);
  if (puVar3 == (undefined4 *)0x0) {
    return;
  }
  gettimeofday(&local_2828,0);
  if (local_2824[0] < 0) {
    local_2824[0] = local_2824[0] + 0x3ff;
  }
  printf("%02d-%02d %02d:%02d:%02d.%03d %s:%d|%s() ",puVar3[4] + 1,puVar3[3],puVar3[2],puVar3[1],
         *puVar3,local_2824[0] >> 10,param_1,param_3,param_2);
  local_28 = &stack0x00000010;
  vfprintf(stdout,param_4,local_28);
  putchar(10);
  return;
}



// ==== dump_mem @ 00402264 size=1

void dump_mem(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 auStack_28 [8];
  
  if (param_1 != 0) {
    time(auStack_28);
    puVar1 = (undefined4 *)localtime(auStack_28);
    gettimeofday(auStack_30,0);
    if (puVar1 != (undefined4 *)0x0) {
      if (param_2 <= param_4) {
        param_4 = param_2;
      }
      printf("\nDUMP MEM [%d:%d:%d.%06d] size(%d):",puVar1[2],puVar1[1],*puVar1,uStack_2c,param_2);
      printf("%s",param_1);
      putchar(10);
      if (0 < param_4) {
        uVar2 = 1;
        do {
          while ((uVar2 & 0x1f) != 1) {
            if ((uVar2 & 3) == 1) {
              printf(&UNK_004040e4);
            }
            else if (uVar2 == 1) {
              printf(&UNK_004040e8,1);
            }
            iVar3 = param_3 + uVar2;
            uVar2 = uVar2 + 1;
            printf(&UNK_004040f0,(int)*(char *)(iVar3 + -1));
            if (param_4 < (int)uVar2) goto code_r0x0040239c;
          }
          putchar(10);
          printf(&UNK_004040dc,(int)uVar2 >> 5);
          iVar3 = param_3 + uVar2;
          uVar2 = uVar2 + 1;
          printf(&UNK_004040f0,(int)*(char *)(iVar3 + -1));
        } while ((int)uVar2 <= param_4);
      }
code_r0x0040239c:
      putchar(10);
    }
  }
  return;
}



// ==== gen_nonce @ 0040260c size=1

undefined4 gen_nonce(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar6;
  int iStack_20;
  int iStack_1c;
  char *pcVar5;
  
  if (param_3 < param_1) {
    uVar3 = 0xffffffff;
  }
  else {
    gettimeofday(&iStack_20,0);
    iVar1 = time(0);
    func_0x004045b0(iStack_1c + iStack_20 + iVar1);
    if (param_1 != 0) {
      pcVar6 = param_2 + param_1;
      pcVar5 = param_2;
      do {
        pcVar4 = pcVar5 + 1;
        uVar2 = func_0x00404520();
        *pcVar5 = NonceBase[uVar2 % 0x3e];
        pcVar5 = pcVar4;
        param_2 = pcVar6;
      } while (pcVar4 != pcVar6);
    }
    *param_2 = '\0';
    uVar3 = 0;
  }
  return uVar3;
}



// ==== filesize @ 004026e0 size=1

undefined4 filesize(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = func_0x004045a0();
  func_0x004044f0(param_1,0,2);
  uVar2 = func_0x004045a0(param_1);
  func_0x004044f0(param_1,uVar1,0);
  return uVar2;
}



// ==== init_mqueue @ 00402740 size=88

int init_mqueue(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_24 = 8;
  local_20 = 0x200;
  local_28 = 0;
  iVar1 = mq_open(param_2,0x182,0x1b6,&local_28);
  *param_1 = iVar1;
  return -(uint)(iVar1 == -1);
}



// ==== mqueue_send @ 00402798 size=1

undefined4 mqueue_send(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != -1) && (param_3 < 0x201)) {
                    /* WARNING: Could not recover jumptable at 0x0040447c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_LAB_004146d4)();
    return uVar1;
  }
  return 0xffffffff;
}



// ==== create_sharemem @ 004028b8 size=1

int create_sharemem(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = open(param_1,0x102,0x1ff);
  if (iVar1 == -1) {
    iVar2 = 0;
  }
  else {
    func_0x004044a0(iVar1,param_2 + -1,0);
    func_0x004044d0(iVar1,"",1);
    iVar2 = mmap(0,param_2,3,1,iVar1,0);
    if (iVar2 == -1) {
      close(iVar1);
      iVar2 = 0;
    }
  }
  return iVar2;
}



// ==== rm_enter @ 00402960 size=100

void rm_enter(int *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    iVar1 = strlen(iVar2);
    if ((1 < iVar1) && (pcVar3 = (char *)(iVar2 + iVar1 + -1), *pcVar3 == '\n')) {
      *pcVar3 = '\0';
      return;
    }
  }
  return;
}



// ==== ms_sleep @ 00402a34 size=104

void ms_sleep(uint param_1)

{
  uint local_10;
  int local_c;
  
  local_10 = param_1 / 1000;
  local_c = (param_1 % 1000) * 1000;
  select(0,0,0,0,&local_10);
  return;
}



// ==== calc_timecost_init @ 00402a9c size=1

void calc_timecost_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040456c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414710)(0x41480c,0);
  return;
}



// ==== calc_timecost_result @ 00402ab0 size=1

int calc_timecost_result(void)

{
  int iStack_10;
  int iStack_c;
  
  gettimeofday(&iStack_10,0);
  return (iStack_10 - iRam0041480c) * 1000 + (iStack_c - iRam00414810) / 1000;
}



// ==== mymktime @ 00403210 size=160

undefined4 mymktime(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6)

{
  undefined4 uVar1;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  if (param_1 - 0x7b2U < 0x89) {
    local_28 = param_2 - 1;
    if ((((local_28 < 0xc) && (param_3 - 1U < 0x1f)) && (param_4 < 0x18)) &&
       ((param_5 < 0x3c && (local_24 = param_1 + -0x76c, param_6 < 0x3c)))) {
      local_34 = param_5;
      local_38 = param_6;
      local_30 = param_4;
      local_2c = param_3;
      uVar1 = mktime(&local_38);
      return uVar1;
    }
  }
  return 0;
}



// ==== trans_json @ 004032b0 size=224

undefined4 trans_json(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) ||
     (iVar2 = strstr(param_3), iVar2 == 0)) {
    return 0;
  }
  iVar3 = strlen(param_2);
  pcVar6 = (char *)(iVar2 + iVar3 + 1);
  iVar5 = 2;
  do {
    iVar4 = iVar5;
    cVar1 = *pcVar6;
    if (((cVar1 != ':') && (cVar1 != '\'')) && (cVar1 != '\"')) goto LAB_0040332c;
    iVar5 = iVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (iVar5 != 0xc);
  pcVar6 = (char *)(iVar2 + iVar4 + iVar3);
LAB_0040332c:
  sscanf(pcVar6,"%[^\"\',}]",param_1);
  return 1;
}



// ==== trans_json_ex @ 00403390 size=892

/* WARNING: Type propagation algorithm not settling */

undefined4 trans_json_ex(byte *param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  byte bVar11;
  
  if ((((param_1 == (byte *)0x0) || (param_2 == 0)) || (param_3 == 0)) ||
     (iVar3 = strstr(param_3), iVar3 == 0)) {
    return 0;
  }
  iVar4 = strlen(param_3);
  pbVar10 = (byte *)(param_3 + iVar4 + -1);
  iVar4 = strlen(param_2);
  pbVar5 = (byte *)(iVar3 + iVar4);
  bVar11 = *pbVar5;
  while (bVar11 != 0x3a) {
    if (pbVar10 < pbVar5) goto LAB_00403554;
    pbVar5 = pbVar5 + 1;
    bVar11 = *pbVar5;
  }
  iVar3 = 0;
  if (pbVar5 <= pbVar10) {
    bVar11 = *pbVar5;
    iVar4 = 0;
    iVar9 = 0;
    uVar8 = (uint)bVar11;
    bVar2 = false;
    bVar1 = false;
    pbVar7 = (byte *)0x0;
    if (uVar8 - 0x30 < 10) goto LAB_004034f4;
LAB_00403488:
    if (bVar11 == 0x2b) goto LAB_004034f4;
    if (bVar11 == 0x2d) goto LAB_004034f4;
    if ((uVar8 & 0xffffffdf) - 0x41 < 0x1a) goto LAB_00403510;
LAB_004034ac:
    pbVar6 = pbVar5;
    if (bVar11 == 0x22) goto LAB_00403598;
joined_r0x004034b4:
    pbVar5 = pbVar6;
    if (bVar11 == 0x5b) {
      iVar4 = iVar4 + 1;
      if (pbVar7 != (byte *)0x0) goto LAB_004034cc;
      pbVar7 = pbVar6;
      goto LAB_004034cc;
    }
LAB_004034bc:
    if (bVar11 != 0x7b) goto LAB_004035b0;
    iVar9 = iVar9 + 1;
    pbVar6 = pbVar5;
    if (pbVar7 == (byte *)0x0) {
      pbVar7 = pbVar5;
    }
LAB_004034cc:
    pbVar5 = pbVar6 + 1;
LAB_004034d0:
    do {
      if (pbVar10 < pbVar5) goto LAB_00403560;
      bVar11 = *pbVar5;
      uVar8 = (uint)bVar11;
      if (9 < uVar8 - 0x30) goto LAB_00403488;
LAB_004034f4:
      if (pbVar7 != (byte *)0x0) {
LAB_00403518:
        pbVar6 = pbVar5;
        if (bVar11 != 0x22) goto joined_r0x004034b4;
LAB_004035a0:
        if (iVar3 != 0) {
          iVar3 = iVar3 + -1;
          if (*pbVar7 != 0x22) goto LAB_004035b0;
          pbVar6 = pbVar5;
          if (iVar3 != 0) {
            if (bVar11 == 0x5d) goto LAB_004035b8;
            goto LAB_00403674;
          }
          goto joined_r0x00403540;
        }
        if (*pbVar7 != 0x22) goto LAB_004034bc;
LAB_00403538:
        pbVar6 = pbVar7;
        if (pbVar5 != (byte *)0x0) goto joined_r0x00403540;
        goto LAB_00403560;
      }
      bVar1 = true;
      pbVar7 = pbVar5;
      if (0x19 < (uVar8 & 0xffffffdf) - 0x41) goto LAB_004034ac;
LAB_00403510:
      if (pbVar7 != (byte *)0x0) goto LAB_00403518;
      bVar2 = true;
      pbVar7 = pbVar5;
      pbVar6 = pbVar5;
      if (bVar11 != 0x22) goto joined_r0x004034b4;
LAB_00403598:
      if (pbVar7 != (byte *)0x0) goto LAB_004035a0;
      iVar3 = iVar3 + 1;
      pbVar7 = pbVar5;
LAB_004035b0:
      pbVar6 = pbVar5;
      if (bVar11 != 0x5d) {
LAB_00403674:
        if (bVar11 == 0x7d) {
          if (!bVar1) {
            if (!bVar2) {
              iVar9 = iVar9 + -1;
              if (*pbVar7 != 0x7b) goto LAB_004034cc;
              pbVar5 = pbVar6 + 1;
              if (iVar9 == 0) {
                bVar2 = false;
                bVar1 = false;
                pbVar5 = pbVar6;
                goto joined_r0x00403540;
              }
              goto LAB_004034d0;
            }
LAB_004036d8:
            bVar1 = false;
          }
        }
        else {
          if (bVar11 != 0x2c) goto LAB_004034cc;
          if (!bVar1) {
            pbVar5 = pbVar6 + 1;
            if (bVar2) goto LAB_004036d8;
            goto LAB_004034d0;
          }
        }
LAB_004036dc:
        pbVar5 = pbVar6 + -1;
        goto LAB_00403538;
      }
LAB_004035b8:
      if (bVar1) goto LAB_004036dc;
      if (bVar2) goto LAB_004036d8;
      iVar4 = iVar4 + -1;
      if (*pbVar7 != 0x5b) goto LAB_004034cc;
      pbVar5 = pbVar6 + 1;
      if (iVar4 == 0) {
        bVar2 = false;
        bVar1 = false;
        pbVar5 = pbVar6;
        goto joined_r0x00403540;
      }
    } while( true );
  }
LAB_00403554:
  bVar2 = false;
  bVar1 = false;
  pbVar7 = (byte *)0x0;
LAB_00403560:
  if (!bVar1) {
    if (!bVar2) {
      return 0;
    }
    bVar1 = false;
  }
  pbVar5 = pbVar10;
  pbVar6 = pbVar10;
  if (pbVar7 == (byte *)0x0) {
    return 0;
  }
joined_r0x00403540:
  if (pbVar6 == (byte *)0x0) {
    return 0;
  }
  if (!bVar1) {
    bVar1 = pbVar5 < pbVar7;
    if (bVar2) goto LAB_00403614;
    pbVar7 = pbVar7 + 1;
    pbVar5 = pbVar5 + -1;
  }
  bVar1 = pbVar5 < pbVar7;
LAB_00403614:
  if (!bVar1) {
    do {
      pbVar10 = pbVar7 + 1;
      *param_1 = *pbVar7;
      pbVar7 = pbVar10;
      param_1 = param_1 + 1;
    } while (pbVar10 != pbVar5 + 1);
  }
  return 1;
}



// ==== malloc_s @ 0040370c size=1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 malloc_s(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00404440(param_4);
  _t_malloc_size = param_4 + _t_malloc_size;
  if ((param_1 != 0) && (param_2 != 0)) {
    dump_string(param_1,param_2,param_3,"total malloc(%d) tmp_malloc(%d %p)\n",param_4,
                _t_malloc_size,uVar1);
  }
  return uVar1;
}



// ==== free_s @ 0040379c size=64

void free_s(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    dump_string();
  }
  free(param_4);
  return;
}



// ==== write_log @ 004037dc size=1

void write_log(void)

{
  return;
}



// ==== base64_decode @ 004037e4 size=412

int base64_decode(char *param_1,byte *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 local_8;
  
  iVar3 = 0;
  do {
    if (*param_1 == '\0') {
      return iVar3;
    }
    local_8 = 0xffffffff;
    iVar5 = 0;
    do {
      while( true ) {
        pcVar4 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/" + iVar5;
        uVar1 = (undefined1)iVar5;
        iVar5 = iVar5 + 1;
        if (*pcVar4 == *param_1) break;
        if (iVar5 == 0x40) {
          iVar5 = 0;
          goto LAB_0040383c;
        }
      }
      local_8 = CONCAT31(local_8._1_3_,uVar1);
    } while (iVar5 != 0x40);
    iVar5 = 0;
LAB_0040383c:
    do {
      pcVar4 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/" + iVar5;
      uVar1 = (undefined1)iVar5;
      iVar5 = iVar5 + 1;
      if (*pcVar4 == param_1[1]) {
        local_8._0_2_ = CONCAT11(uVar1,(char)local_8);
        if (iVar5 == 0x40) {
          iVar5 = 0;
          goto LAB_00403860;
        }
        goto LAB_0040383c;
      }
    } while (iVar5 != 0x40);
    iVar5 = 0;
LAB_00403860:
    do {
      pcVar4 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/" + iVar5;
      uVar1 = (undefined1)iVar5;
      iVar5 = iVar5 + 1;
      if (*pcVar4 == param_1[2]) {
        local_8._0_3_ = CONCAT12(uVar1,(undefined2)local_8);
        if (iVar5 == 0x40) {
          iVar5 = 0;
          goto LAB_00403884;
        }
        goto LAB_00403860;
      }
    } while (iVar5 != 0x40);
    iVar5 = 0;
LAB_00403884:
    do {
      pcVar4 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/" + iVar5;
      uVar1 = (undefined1)iVar5;
      iVar5 = iVar5 + 1;
      bVar2 = local_8._1_1_;
      if (*pcVar4 == param_1[3]) {
        local_8 = CONCAT13(uVar1,(undefined3)local_8);
        if (iVar5 == 0x40) break;
        goto LAB_00403884;
      }
    } while (iVar5 != 0x40);
    *param_2 = bVar2 >> 4 & 3 | (char)local_8 << 2;
    if (param_1[2] == '=') {
      return iVar3 + 1;
    }
    param_2[1] = local_8._2_1_ >> 2 & 0xf | bVar2 << 4;
    if (param_1[3] == '=') {
      return iVar3 + 2;
    }
    iVar3 = iVar3 + 3;
    param_1 = param_1 + 4;
    param_2[2] = local_8._3_1_ & 0x3f | local_8._2_1_ << 6;
    param_2 = param_2 + 3;
    if (iVar3 == 0x42) {
      return 0x42;
    }
  } while( true );
}



// ==== putchar @ 004043a0 size=16

void putchar(void)

{
                    /* WARNING: Could not recover jumptable at 0x004043ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004146a0)();
  return;
}



// ==== popen @ 004043b0 size=16

void popen(void)

{
                    /* WARNING: Could not recover jumptable at 0x004043bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004146a4)();
  return;
}



// ==== printf @ 004043c0 size=4

void printf(void)

{
                    /* WARNING: Could not recover jumptable at 0x004043cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004146a8)();
  return;
}



// ==== pclose @ 004043d0 size=16

void pclose(void)

{
                    /* WARNING: Could not recover jumptable at 0x004043dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004146ac)();
  return;
}



// ==== snprintf @ 004043e0 size=4

void snprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x004043ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004146b0)();
  return;
}



// ==== usleep @ 004043f0 size=16

void usleep(void)

{
                    /* WARNING: Could not recover jumptable at 0x004043fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004146b4)();
  return;
}



// ==== getpid @ 00404400 size=4

void getpid(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040440c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004146b8)();
  return;
}



// ==== puts @ 00404420 size=16

void puts(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040442c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004146c0)();
  return;
}



// ==== sleep @ 00404450 size=16

void sleep(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040445c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004146cc)();
  return;
}



// ==== vsnprintf @ 00404460 size=4

void vsnprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040446c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004146d0)();
  return;
}



// ==== socket @ 00404480 size=16

void socket(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040448c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004146d8)();
  return;
}



// ==== select @ 00404490 size=20

void select(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040449c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004146dc)();
  return;
}



// ==== mmap @ 004044b0 size=16

void mmap(void)

{
                    /* WARNING: Could not recover jumptable at 0x004044bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004146e4)();
  return;
}



// ==== rename @ 004044c0 size=20

void rename(void)

{
                    /* WARNING: Could not recover jumptable at 0x004044cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004146e8)();
  return;
}



// ==== mktime @ 00404500 size=16

void mktime(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040450c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004146f8)();
  return;
}



// ==== strstr @ 00404510 size=20

void strstr(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040451c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004146fc)();
  return;
}



// ==== sendto @ 00404530 size=16

void sendto(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040453c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414704)();
  return;
}



// ==== sscanf @ 00404540 size=16

void sscanf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040454c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414708)();
  return;
}



// ==== fread @ 00404550 size=4

void fread(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040455c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041470c)();
  return;
}



// ==== gettimeofday @ 00404560 size=16

void gettimeofday(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040456c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414710)();
  return;
}



// ==== fopen @ 00404570 size=16

void fopen(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040457c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414714)();
  return;
}



// ==== localtime @ 00404580 size=4

void localtime(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040458c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414718)();
  return;
}



// ==== memset @ 00404590 size=20

void memset(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040459c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041471c)();
  return;
}



// ==== time @ 004045c0 size=16

void time(void)

{
                    /* WARNING: Could not recover jumptable at 0x004045cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414728)();
  return;
}



// ==== strcmp @ 004045d0 size=16

void strcmp(void)

{
                    /* WARNING: Could not recover jumptable at 0x004045dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041472c)();
  return;
}



// ==== sprintf @ 004045e0 size=4

void sprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x004045ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414730)();
  return;
}



// ==== access @ 004045f0 size=16

void access(void)

{
                    /* WARNING: Could not recover jumptable at 0x004045fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414734)();
  return;
}



// ==== atoi @ 00404600 size=4

void atoi(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040460c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414738)();
  return;
}



// ==== fileno @ 00404610 size=16

void fileno(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040461c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041473c)();
  return;
}



// ==== strlen @ 00404620 size=4

void strlen(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040462c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414740)();
  return;
}



// ==== open @ 00404630 size=16

void open(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040463c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414744)();
  return;
}



// ==== mq_open @ 00404640 size=16

void mq_open(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040464c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414748)();
  return;
}



// ==== close @ 00404650 size=16

void close(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040465c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041474c)();
  return;
}



// ==== vfprintf @ 00404660 size=4

void vfprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040466c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414750)();
  return;
}



// ==== free @ 00404670 size=20

void free(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040467c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414754)();
  return;
}



