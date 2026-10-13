/* mp4record — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "mp4record.h"

// ==== entry @ 00401170 size=92

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = PTR__fini_0041a1f0;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_0041a22c)
            (PTR_main_0041a1e8,param_2,&stack0x00000004,PTR__init_0041a1ec);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ==== thread_short_record @ 00401f60 size=1036

undefined4 thread_short_record(short *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  undefined1 auStack_150 [128];
  undefined1 auStack_d0 [128];
  int local_50;
  int local_4c;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  int local_40;
  ushort local_3a;
  int local_38;
  
  FUN_004050a0(auStack_150,0x10c,0,0x10c);
  psVar5 = param_1 + 2;
  snprintf(auStack_d0,0x80,&DAT_004091e4,psVar5);
  snprintf(auStack_150,0x80,"%s.tmp",psVar5);
  uVar2 = FUN_00400e00();
  if (uVar2 < 0x1005) {
    FUN_00400e20(2,0);
    iVar4 = local_50;
    if (local_50 == 0) goto LAB_00402310;
LAB_00402004:
    local_50 = iVar4;
    iVar4 = local_50;
    if (DAT_0041a404 == 0) {
      trap(0x1c00);
    }
    FUN_00405d70(local_50,1,90000,90000 / DAT_0041a404,DAT_0041a400,DAT_0041a402,DAT_0041a3a9,
                 DAT_0041a3aa,DAT_0041a3ab);
    FUN_00405f14(iVar4,1,&DAT_0041a3a8,DAT_0041a3f8 + -4);
    FUN_00405fb4(iVar4,1,&DAT_0041a3e4,DAT_0041a3fc + -4);
    FUN_00405df8(iVar4,1,16000,0x400,0x10,0x40);
    FUN_00406054(iVar4,1,&DAT_0041a2e4,2);
    iVar3 = FUN_0040613c(iVar4,auStack_150);
    if (iVar3 != -1) {
      printf(&DAT_00409258,"thread_short_record",0x1b2,psVar5,(int)*param_1,(int)param_1[1]);
      if (param_1[1] != 0) {
        FUN_00401f18(0x1034);
      }
      FUN_00400de0(2,0x801);
      iVar6 = 0;
      _ftext(2,&local_4c,auStack_48,0,auStack_44);
      iVar4 = local_40;
      sVar1 = *param_1;
      iVar3 = 0;
      FUN_00400de0(2,0x900);
      uVar2 = sVar1 * 1000 + 300;
      do {
        while( true ) {
          if ((local_3a & 0x100) == 0) {
            if ((local_3a & 0xe) == 0) {
              iVar6 = iVar6 + 1;
              FUN_00401d20(local_4c,local_38);
              FUN_004062a8(local_50,1,local_4c,local_38,0xffffffff,local_3a & 1);
            }
          }
          else {
            iVar3 = iVar3 + 1;
            FUN_00406410(local_50,1,local_4c + 7,local_38 + -7,0xffffffff);
          }
          _ftext(2,&local_4c,auStack_48,0,auStack_44);
          if (*(int *)(DAT_0041a2d8 + 0x5d0) != 1) break;
          if (*(int *)(param_1 + 0x42) == 1) {
            uVar2 = 0x283c;
          }
          if (uVar2 < (uint)(local_40 - iVar4)) goto LAB_00402224;
        }
      } while ((uint)(local_40 - iVar4) <= uVar2);
LAB_00402224:
      FUN_00406528(local_50,0,0);
      FUN_004081d0(local_50);
      rename(auStack_150,auStack_d0);
      free(local_4c);
      printf(&DAT_004091f0,"thread_short_record",0x1dc,psVar5,iVar3,iVar6);
      if (param_1[1] != 0) {
        FUN_00401f18(0x1035);
      }
      goto LAB_00402280;
    }
    FUN_004081d0(iVar4);
    local_50 = 0;
  }
  else {
    FUN_00400e20(2,uVar2 - 0x1004);
    iVar4 = local_50;
    if (local_50 != 0) goto LAB_00402004;
LAB_00402310:
    iVar4 = FUN_00405ce4(1,1);
    if (iVar4 != 0) goto LAB_00402004;
  }
  FUN_004051f4("mp4record.c","thread_short_record",0x1ae,"mp4 shortrec file create failed");
LAB_00402280:
  free(param_1);
  return 0;
}



// ==== send_mp4rcd_heartbeat_msg @ 004023b8 size=156

int send_mp4rcd_heartbeat_msg(undefined4 param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  int local_10;
  
  local_20 = 1;
  local_14 = 0;
  local_18 = 0xe7;
  local_1c = 0x10;
  local_16 = 0xe7;
  local_10 = FUN_00405464(param_1,&local_20,0x10);
  if (-1 < local_10) {
    FUN_004051f4("mp4record.c","send_mp4rcd_heartbeat_msg",0x3aa,"msg snd success");
    return local_10;
  }
  FUN_004051f4("mp4record.c","send_mp4rcd_heartbeat_msg",0x3a6,"msg snd err, err no is %d",local_10)
  ;
  return local_10;
}



// ==== send_mp4rcd_costtime_msg @ 00402454 size=160

int send_mp4rcd_costtime_msg(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  undefined4 local_18;
  int local_10;
  
  local_28 = 1;
  local_20 = 0xe8;
  local_1c = 0;
  local_24 = 0x10;
  local_1e = 0xe8;
  local_18 = param_2;
  local_10 = FUN_00405464(param_1,&local_28,0x14);
  if (-1 < local_10) {
    FUN_004051f4("mp4record.c","send_mp4rcd_costtime_msg",0x3c5,"msg snd success");
    return local_10;
  }
  FUN_004051f4("mp4record.c","send_mp4rcd_costtime_msg",0x3c1,"msg snd err, err no is %d",local_10);
  return local_10;
}



// ==== record_file @ 004024f4 size=2540

/* WARNING: Removing unreachable block (ram,0x00402804) */
/* WARNING: Removing unreachable block (ram,0x00402df4) */
/* WARNING: Removing unreachable block (ram,0x00402818) */
/* WARNING: Removing unreachable block (ram,0x00402e08) */

undefined4 record_file(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 **ppuVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int local_178;
  undefined1 auStack_174 [128];
  undefined1 auStack_f4 [128];
  undefined4 *local_74;
  int local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined4 *local_64 [2];
  ushort local_5c;
  ushort local_5a;
  int local_58;
  char local_52;
  char local_51;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48 [2];
  int local_40;
  int local_3c;
  uint local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  
  DAT_0041a408 = 0;
  FUN_004051f4("mp4record.c","record_file",0x3e3,"record_init finish");
  FUN_004050a0(&local_178,0x114,0,0x114);
  iVar7 = 0;
  snprintf(auStack_174,0x80,"%s/tmp.mp4.tmp","/tmp/sd/record");
  local_70 = DAT_0041a280 + 0x800c;
  FUN_0040192c();
  FUN_00400e20(1,0xffffffff);
  FUN_00400de0(1,0xd00);
  local_3c = 0;
  local_40 = 1;
LAB_004025f4:
  do {
    iVar7 = iVar7 + 1;
    if (*(int *)(DAT_0041a2d8 + 0x608) == 1) {
      iVar7 = FUN_004018a4();
      if ((iVar7 != 0) && (local_40 == 0)) {
        local_48[0] = 0;
        local_4c = 0;
        FUN_00406528(local_74,local_48,&local_4c);
        uVar2 = (local_4c + 500U) / 1000;
        uVar4 = 0x3c - local_178 % 0x3c;
        if ((int)uVar2 <= (int)uVar4) {
          uVar4 = uVar2;
        }
        if (uVar4 == 0) {
          printf(&DAT_00409348,"record_file",0x406);
        }
        else {
          FUN_00401ddc(&local_178,uVar4);
          printf(&DAT_00409308,"record_file",0x3fd,auStack_f4);
          rename(auStack_174,auStack_f4);
          recordevent_add_file_info(local_178,uVar4);
          DAT_0041a408 = 0;
          send_mp4rcd_costtime_msg(DAT_0041a2d0,local_48[0]);
          FUN_004051f4("mp4record.c","record_file",0x402,"mp4 file end record: %s",auStack_f4);
        }
      }
      return 0;
    }
    if (iVar7 < 0x3e9) {
      iVar8 = *(int *)(DAT_0041a2d8 + 0x5ac);
      if (iVar8 == 1) goto LAB_00402630;
LAB_004025e0:
      if (iVar8 != 0) goto LAB_00402648;
    }
    else {
      iVar7 = 0;
      send_mp4rcd_heartbeat_msg(DAT_0041a2d0);
      iVar8 = *(int *)(DAT_0041a2d8 + 0x5ac);
      if (iVar8 != 1) goto LAB_004025e0;
LAB_00402630:
      if (0x19000 < *(uint *)(DAT_0041a2d8 + 0x5a8)) {
        iVar8 = FUN_00406288(local_74);
        if (iVar8 == 0) {
          if (*(int *)(DAT_0041a2d8 + 0x614) != 1) {
            if (*(int *)(DAT_0041a2d8 + 0x5cc) != 1) goto LAB_004026d4;
            if (DAT_0041a408 != 1) {
              uVar4 = FUN_00400e00();
              iVar8 = uVar4 - 3000;
              if (uVar4 < 0xbb9) {
                iVar8 = 0;
              }
              FUN_00400e20(1,iVar8);
            }
          }
          puVar3 = local_74;
          if ((local_74 != (undefined4 *)0x0) ||
             (puVar3 = (undefined4 *)FUN_00405ce4(1,2), puVar3 != (undefined4 *)0x0)) {
            local_74 = puVar3;
            local_30 = local_74;
            iVar8 = access(auStack_174,0);
            if (iVar8 == 0) {
              remove(auStack_174);
            }
            iVar8 = FUN_0040613c(local_30,auStack_174);
            if (iVar8 != -1) {
              local_40 = 1;
              goto LAB_004026d4;
            }
          }
          FUN_004051f4("mp4record.c","record_file",0x427,"mp4 file create failed");
        }
LAB_004026d4:
        iVar8 = FUN_00406288(local_74);
        if (iVar8 == 0) {
          DAT_0041a408 = 0;
          ms_sleep(0x28);
        }
        else {
          ppuVar5 = local_64;
          iVar8 = FUN_00400df0(1,&DAT_0041a2dc,&DAT_0041a2e0,0,ppuVar5);
          if (iVar8 < 0) {
            printf(&DAT_0040939c,"record_file",0x435);
            FUN_004051f4("mp4record.c","record_file",0x436,"fshare_read_ex timeout!");
          }
          else {
            if ((local_5a & 0x400) == 0) {
              if ((local_5a & 0x800) != 0) {
                if (DAT_0041a288 == 0) {
                  DAT_0041a288 = (uint)local_5c;
                }
                else {
                  DAT_0041a288 = DAT_0041a288 + 1;
                  if (DAT_0041a288 != local_5c) {
                    DAT_0041a284 = (undefined4 **)((int)DAT_0041a284 + 1);
                    DAT_0041a288 = (uint)local_5c;
                    ppuVar5 = DAT_0041a284;
                    FUN_004051f4("mp4record.c","record_file",0x45a,
                                 "sub video frame lost: sub_lost=%d\n",DAT_0041a284);
                  }
                }
              }
            }
            else if (DAT_0041a290 == 0) {
              DAT_0041a290 = (uint)local_5c;
            }
            else {
              DAT_0041a290 = DAT_0041a290 + 1;
              if (DAT_0041a290 != local_5c) {
                DAT_0041a28c = (undefined4 **)((int)DAT_0041a28c + 1);
                DAT_0041a290 = (uint)local_5c;
                ppuVar5 = DAT_0041a28c;
                FUN_004051f4("mp4record.c","record_file",0x449,
                             "main video frame lost: main_lost=%d\n",DAT_0041a28c);
              }
            }
            iVar8 = DAT_0041a2dc;
            if (0x59a8327f < (int)local_64[0]) {
              if ((local_5a & 0xe) == 0) {
                if (local_40 != 0) {
                  if (((local_5a & 0x401) != 0x401) ||
                     (local_30 = local_64[0], iVar8 = FUN_004018a4(), puVar3 = local_74, iVar8 == 0)
                     ) goto LAB_004025f4;
                  if (local_74 != (undefined4 *)0x0) {
                    if (DAT_0041a374 == 0) {
                      trap(0x1c00);
                    }
                    local_178 = (int)local_30 + *(int *)(DAT_0041a2d8 + 0x4b4);
                    local_6c = DAT_0041a2e8;
                    local_68 = DAT_0041a372;
                    FUN_00405d70(local_74,1,90000,90000 / DAT_0041a374,DAT_0041a370,DAT_0041a372,
                                 DAT_0041a319,DAT_0041a31a,DAT_0041a31b);
                    if (DAT_0041a364 < 1) {
                      FUN_00405e50(puVar3,1,0,0);
                    }
                    else {
                      FUN_00405e50(puVar3,1,&DAT_0041a2f0,DAT_0041a364 + -4);
                    }
                    FUN_00405f14(puVar3,1,&DAT_0041a318,DAT_0041a368 + -4);
                    FUN_00405fb4(puVar3,1,&DAT_0041a354,DAT_0041a36c + -4);
                    FUN_00405df8(puVar3,1,16000,0x400,0x10,0x40);
                    FUN_00406054(puVar3,1,&DAT_0041a2e4,2);
                    ppuVar5 = (undefined4 **)(uint)DAT_0041a400;
                    if (DAT_0041a404 == 0) {
                      trap(0x1c00);
                    }
                    FUN_00405d70(puVar3,2,90000,90000 / DAT_0041a404,ppuVar5,DAT_0041a402,
                                 DAT_0041a3a9,DAT_0041a3aa,DAT_0041a3ab);
                    FUN_00405f14(puVar3,2,&DAT_0041a3a8,DAT_0041a3f8 + -4);
                    FUN_00405fb4(puVar3,2,&DAT_0041a3e4,DAT_0041a3fc + -4);
                  }
                  FUN_004051f4("mp4record.c","record_file",0x4c6,"mp4 file begin record: ...",
                               ppuVar5);
                }
                if ((local_5a & 0x100) == 0) {
                  FUN_00401d20(DAT_0041a2dc,local_58);
                  uVar6 = 2;
                  if ((local_5a & 0x400) != 0) {
                    uVar6 = 1;
                  }
                  FUN_004062a8(local_74,uVar6,DAT_0041a2dc,local_58,0xffffffff,local_5a & 1);
                  local_40 = 0;
                }
                else {
                  FUN_00406410(local_74,1,DAT_0041a2dc + 7,local_58 + -7,0xffffffff);
                  local_40 = 0;
                }
                goto LAB_004025f4;
              }
              uVar4 = (local_5a >> 10 ^ 1) & 1;
              iVar1 = uVar4 * 0x90;
              puVar3 = &DAT_0041a2e8 + uVar4 * 0x24;
              if ((local_5a & 2) == 0) {
                if ((local_5a & 4) == 0) {
                  if ((&DAT_0041a364)[uVar4 * 0x24] == 0) {
                    local_30 = puVar3;
                    memcpy(&DAT_0041a2ec + iVar1,DAT_0041a2dc,local_58);
                    local_30[0x1f] = local_58;
                  }
                }
                else if ((&DAT_0041a36c)[uVar4 * 0x24] == 0) {
                  local_30 = puVar3;
                  memcpy(&DAT_0041a350 + iVar1,DAT_0041a2dc,local_58);
                  local_30[0x21] = local_58;
                }
LAB_004027a0:
                if (local_3c == 0) goto LAB_004025f4;
              }
              else {
                if ((local_52 == '\x01') &&
                   (((uVar2 = local_5a >> 6 & 1, (&DAT_0041a2e8)[uVar4 * 0x24] != uVar2 ||
                     (*(int *)(&DAT_0041a370 + uVar4 * 0x48) != local_50)) ||
                    ((&DAT_0041a374)[iVar1] != local_51)))) {
                  (&DAT_0041a2e8)[uVar4 * 0x24] = uVar2;
                  (&DAT_0041a370)[uVar4 * 0x48] = (undefined2)local_50;
                  (&DAT_0041a372)[uVar4 * 0x48] = local_50._2_2_;
                  (&DAT_0041a374)[iVar1] = local_51;
                  local_38 = uVar4;
                  local_34 = &DAT_0041a2d0 + uVar4 * 0x24;
                  local_30 = puVar3;
                  memcpy(&DAT_0041a314 + iVar1,iVar8,local_58);
                  uVar6 = local_34[6];
                  local_30[0x20] = local_58;
                  local_30[0x21] = 0;
                  local_30[0x1f] = 0;
                  FUN_004051f4("mp4record.c","record_file",0x47f,
                               "video %d config changed: type=%u width=%u height=%u framerate=%u",
                               local_38,uVar6,*(undefined2 *)(local_30 + 0x22),
                               *(undefined2 *)((int)local_30 + 0x8a),
                               *(undefined1 *)(local_30 + 0x23));
                  local_3c = 1;
                }
                if ((local_5a & 0x480) != 0x480) goto LAB_004027a0;
                local_3c = 1;
              }
              iVar8 = FUN_004018a4();
              if (iVar8 != 0) {
                if (local_40 == 0) {
                  local_48[0] = 0;
                  local_4c = 0;
                  FUN_00406528(local_74,local_48,&local_4c);
                  local_30 = (undefined4 *)((local_4c + 999U) / 1000);
                  puVar3 = (undefined4 *)(0x3c - local_178 % 0x3c);
                  if ((int)puVar3 < (int)local_30) {
                    local_30 = puVar3;
                  }
                  FUN_00401ddc(&local_178,local_30);
                  printf(&DAT_00409308,"record_file",0x4aa,auStack_f4);
                  rename(auStack_174,auStack_f4);
                  recordevent_add_file_info(local_178,local_30);
                  DAT_0041a408 = 1;
                  send_mp4rcd_costtime_msg(DAT_0041a2d0,local_48[0]);
                  FUN_004051f4("mp4record.c","record_file",0x4b3,"mp4 file end record: %s",
                               auStack_f4);
                  local_3c = 0;
                }
                else {
                  local_3c = 0;
                }
              }
            }
          }
        }
        goto LAB_004025f4;
      }
LAB_00402648:
      printf(&DAT_00409378,"record_file",0x417);
    }
    ms_sleep(1000);
  } while( true );
}



// ==== recordevent_add_file_info @ 0040329c size=100

void recordevent_add_file_info(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printf("%s(%d) start:%d,duration:%d\n","recordevent_add_file_info",0xc1,param_1,param_2);
  local_18 = param_1;
  local_14 = param_2;
  FUN_00403144(&local_18);
  return;
}



// ==== mmap_init @ 00403300 size=288

undefined4 mmap_init(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_420 [1024];
  int local_20 [4];
  
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  puVar1 = (undefined4 *)FUN_00405584(param_2,0x8010);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_004051f4("recordevent.c","mmap_init",0x27,"failed create_sharemem(): %s",param_2);
    uVar3 = 0xffffffff;
  }
  else {
    DAT_0041a2a0 = puVar1;
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    iVar2 = strlen(param_1);
    DAT_0041a2a4 = iVar2;
    memcpy(auStack_420,param_1,iVar2);
    auStack_420[iVar2] = 0;
    FUN_00402ef0(local_20,auStack_420,iVar2);
    qsort(local_20[0],local_20[2],8,&LAB_00402ee0);
    iVar2 = local_20[2];
    if (0 < local_20[2]) {
      iVar4 = 0;
      iVar5 = local_20[0];
      do {
        iVar4 = iVar4 + 1;
        FUN_00403144(iVar5);
        iVar5 = iVar5 + 8;
      } while (iVar4 != iVar2);
    }
    free(local_20[0]);
    uVar3 = 0;
  }
  return uVar3;
}



// ==== try_adjust_buf @ 00403a14 size=264

undefined4 try_adjust_buf(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*param_1 == 0) {
    param_3 = param_3 + *(int *)(*(int *)(PTR_DAT_0041a1f4 + -0x5e90) + 8);
    if (param_3 < 1) {
      return 0;
    }
  }
  else {
    param_3 = param_3 + *(int *)(*(int *)(PTR_DAT_0041a1f4 + -0x5e90) + 8);
    if (param_3 <= *param_2) {
      return 0;
    }
    if (param_3 < 1) {
      return 0;
    }
  }
  iVar1 = (*(code *)PTR_realloc_0041a230)(*param_1,param_3);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_0041a220)();
    (*(code *)PTR_error_0041a224)
              (0,*puVar2,PTR_DAT_0041a1fc + -0x67c0,PTR_DAT_0041a1fc + -0x66f0,param_3);
    return 0xffffffff;
  }
  *param_1 = iVar1;
  *param_2 = param_3;
  return 0;
}



// ==== ms_sleep @ 0040562c size=104

void ms_sleep(uint param_1)

{
  uint local_10;
  int local_c;
  
  local_10 = param_1 / 1000;
  local_c = (param_1 % 1000) * 1000;
  select(0,0,0,0,&local_10);
  return;
}



// ==== __PLT_HEAD @ 00409d60 size=32

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __PLT_HEAD(void)

{
  (*___DT_MIPS_PLTGOT)();
  (*(code *)PTR_putchar_0041a0a0)();
  return;
}



// ==== putchar @ 00409d80 size=16

void putchar(void)

{
  (*(code *)PTR_putchar_0041a0a0)();
  return;
}



// ==== clock_gettime @ 00409d90 size=4

void clock_gettime(void)

{
                    /* WARNING: Could not recover jumptable at 0x00409d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_clock_gettime_0041a0a4)();
  return;
}



// ==== strcpy @ 00409da0 size=16

void strcpy(void)

{
  (*(code *)PTR_strcpy_0041a0a8)();
  return;
}



// ==== printf @ 00409db0 size=16

void printf(void)

{
  (*(code *)PTR_printf_0041a0ac)();
  return;
}



// ==== pthread_create @ 00409dc0 size=4

void pthread_create(void)

{
                    /* WARNING: Could not recover jumptable at 0x00409dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_create_0041a0b0)();
  return;
}



// ==== snprintf @ 00409dd0 size=16

void snprintf(void)

{
  (*(code *)PTR_snprintf_0041a0b4)();
  return;
}



// ==== memmem @ 00409de0 size=4

void memmem(void)

{
                    /* WARNING: Could not recover jumptable at 0x00409dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_memmem_0041a0b8)();
  return;
}



// ==== usleep @ 00409df0 size=16

void usleep(void)

{
  (*(code *)PTR_usleep_0041a0bc)();
  return;
}



// ==== getpid @ 00409e00 size=4

void getpid(void)

{
                    /* WARNING: Could not recover jumptable at 0x00409e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_getpid_0041a0c0)();
  return;
}



// ==== qsort @ 00409e10 size=16

void qsort(void)

{
  (*(code *)PTR_qsort_0041a0c4)();
  return;
}



// ==== memcpy @ 00409e20 size=16

void memcpy(void)

{
                    /* WARNING: Could not recover jumptable at 0x00409e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_memcpy_0041a0c8)();
  return;
}



// ==== puts @ 00409e40 size=16

void puts(void)

{
  (*(code *)PTR_puts_0041a0d0)();
  return;
}



// ==== remove @ 00409e50 size=4

void remove(void)

{
                    /* WARNING: Could not recover jumptable at 0x00409e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_remove_0041a0d4)();
  return;
}



// ==== vsnprintf @ 00409e60 size=16

void vsnprintf(void)

{
  (*(code *)PTR_vsnprintf_0041a0d8)();
  return;
}



// ==== socket @ 00409e80 size=4

void socket(void)

{
                    /* WARNING: Could not recover jumptable at 0x00409e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_socket_0041a0e0)();
  return;
}



// ==== select @ 00409e90 size=16

void select(void)

{
  (*(code *)PTR_select_0041a0e4)();
  return;
}



// ==== readdir @ 00409ea0 size=4

void readdir(void)

{
                    /* WARNING: Could not recover jumptable at 0x00409eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_readdir_0041a0e8)();
  return;
}



// ==== lseek @ 00409eb0 size=16

void lseek(void)

{
  (*(code *)PTR_lseek_0041a0ec)();
  return;
}



// ==== mmap @ 00409ec0 size=4

void mmap(void)

{
                    /* WARNING: Could not recover jumptable at 0x00409ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_mmap_0041a0f0)();
  return;
}



// ==== pthread_detach @ 00409ed0 size=16

void pthread_detach(void)

{
  (*(code *)PTR_pthread_detach_0041a0f4)();
  return;
}



// ==== rename @ 00409ee0 size=4

void rename(void)

{
                    /* WARNING: Could not recover jumptable at 0x00409eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rename_0041a0f8)();
  return;
}



// ==== calloc @ 00409ef0 size=16

void calloc(void)

{
  (*(code *)PTR_calloc_0041a0fc)();
  return;
}



// ==== write @ 00409f00 size=4

void write(void)

{
                    /* WARNING: Could not recover jumptable at 0x00409f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_write_0041a100)();
  return;
}



// ==== mktime @ 00409f10 size=16

void mktime(void)

{
  (*(code *)PTR_mktime_0041a104)();
  return;
}



// ==== signal @ 00409f20 size=4

void signal(void)

{
                    /* WARNING: Could not recover jumptable at 0x00409f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_signal_0041a108)();
  return;
}



// ==== sendto @ 00409f30 size=16

void sendto(void)

{
  (*(code *)PTR_sendto_0041a10c)();
  return;
}



// ==== realloc @ 00409f40 size=4

void realloc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00409f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_realloc_0041a110)();
  return;
}



// ==== sscanf @ 00409f50 size=16

void sscanf(void)

{
  (*(code *)PTR_sscanf_0041a114)();
  return;
}



// ==== gettimeofday @ 00409f60 size=4

void gettimeofday(void)

{
                    /* WARNING: Could not recover jumptable at 0x00409f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_gettimeofday_0041a118)();
  return;
}



// ==== localtime @ 00409f70 size=16

void localtime(void)

{
  (*(code *)PTR_localtime_0041a11c)();
  return;
}



// ==== memset @ 00409f80 size=16

void memset(void)

{
                    /* WARNING: Could not recover jumptable at 0x00409f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_memset_0041a120)();
  return;
}



// ==== time @ 00409f90 size=4

void time(void)

{
                    /* WARNING: Could not recover jumptable at 0x00409f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_time_0041a124)();
  return;
}



// ==== opendir @ 00409fa0 size=16

void opendir(void)

{
  (*(code *)PTR_opendir_0041a128)();
  return;
}



// ==== localtime_r @ 00409fb0 size=4

void localtime_r(void)

{
                    /* WARNING: Could not recover jumptable at 0x00409fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_localtime_r_0041a12c)();
  return;
}



// ==== stat @ 00409fc0 size=16

void stat(void)

{
  (*(code *)PTR_stat_0041a130)();
  return;
}



// ==== access @ 00409fd0 size=16

void access(void)

{
  (*(code *)PTR_access_0041a134)();
  return;
}



// ==== __errno_location @ 00409fe0 size=4

void __errno_location(void)

{
                    /* WARNING: Could not recover jumptable at 0x00409fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___errno_location_0041a138)();
  return;
}



// ==== strlen @ 00409ff0 size=16

void strlen(void)

{
  (*(code *)PTR_strlen_0041a13c)();
  return;
}



// ==== open @ 0040a000 size=4

void open(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_open_0041a140)();
  return;
}



// ==== closedir @ 0040a010 size=16

void closedir(void)

{
  (*(code *)PTR_closedir_0041a144)();
  return;
}



// ==== fcntl @ 0040a020 size=16

void fcntl(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fcntl_0041a148)();
  return;
}



// ==== mkdir @ 0040a040 size=16

void mkdir(void)

{
  (*(code *)PTR_mkdir_0041a150)();
  return;
}



// ==== close @ 0040a050 size=4

void close(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_close_0041a154)();
  return;
}



// ==== vfprintf @ 0040a060 size=16

void vfprintf(void)

{
  (*(code *)PTR_vfprintf_0041a158)();
  return;
}



// ==== free @ 0040a070 size=4

void free(void)

{
  (*(code *)PTR_free_0041a15c)();
  return;
}



