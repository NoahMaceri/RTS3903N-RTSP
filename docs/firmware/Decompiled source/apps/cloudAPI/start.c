/* cloudAPI — C-runtime entry / init stubs
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "cloudAPI.h"

// ==== _init @ 004033ac size=72

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  FUN_00405f4c();
  iVar1 = FUN_004994c0();
  return iVar1;
}



// ==== _ftext @ 00403400 size=12

void _ftext(void)

{
  SSL_pending();
  return;
}



// ==== main @ 0040376c size=9796

void main(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *unaff_s0;
  code *unaff_s1;
  code *unaff_s2;
  undefined *unaff_s6;
  undefined *unaff_s7;
  code *pcVar5;
  undefined1 auStack_2e8 [16];
  undefined *puStack_2d8;
  undefined4 uStack_2d4;
  undefined1 *puStack_2d0;
  undefined4 uStack_2c8;
  undefined1 auStack_2c4 [12];
  char *local_2b8;
  char acStack_2a8 [512];
  undefined1 auStack_a8 [64];
  undefined1 auStack_68 [64];
  
  FUN_004982b0(&DAT_004bfd20,0x120,0,0x120);
  DAT_004bfdd4 = 5;
  pcVar5 = unaff_s1;
  if (param_1 < 2) goto LAB_004038b4;
  unaff_s0 = *(char **)(param_2 + 4);
  if (*unaff_s0 != '-') goto LAB_004038b4;
  unaff_s2 = (code *)0x1;
  unaff_s6 = &DAT_004a0000;
  unaff_s7 = &DAT_0049b4a0;
LAB_00403844:
  pcVar5 = DAT_004bfd20;
  iVar1 = strcmp(unaff_s0,unaff_s6 + -0x4b64);
  if (iVar1 == 0) goto LAB_00403ae8;
  iVar1 = strcmp(unaff_s0,unaff_s7);
  if (iVar1 == 0) {
    unaff_s1 = unaff_s2 + 1;
    if ((int)unaff_s1 < param_1) {
      DAT_004bfd20 = (code *)atoi(*(undefined4 *)(param_2 + (int)unaff_s1 * 4));
      goto LAB_00403818;
    }
  }
  else {
    unaff_s1 = unaff_s2 + 1;
    iVar1 = strcmp(unaff_s0,&DAT_0049b4a4);
    if (iVar1 == 0) {
      if ((int)unaff_s1 < param_1) {
        unaff_s2 = unaff_s2 + 2;
        DAT_004bfd24 = atoi(*(undefined4 *)(param_2 + (int)unaff_s1 * 4));
        pcVar5 = unaff_s1;
        if ((int)unaff_s2 < param_1) goto LAB_00403828;
LAB_004038b4:
        unaff_s1 = pcVar5;
        pcVar2 = DAT_004bfd30;
        iVar1 = DAT_004bfd28;
        pcVar5 = DAT_004bfd20;
        if (DAT_004bfd20 == (code *)0x0) goto LAB_00403ae8;
        if (DAT_004bfd20 == (code *)0x8c) {
          if (DAT_004bfd3c == 0) goto LAB_00404164;
          if (DAT_004bfd64 == 0) goto LAB_004043e8;
          if (DAT_004bfd6c == 0) {
LAB_00405134:
            pcVar5 = clock_gettime;
            fprintf(stderr,&DAT_0049b774,"Need version");
            FUN_00405fc4();
LAB_00405154:
            fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need p2p_status");
            FUN_00405fc4();
LAB_00405174:
            fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need tfstat");
            FUN_00405fc4();
LAB_00405194:
            fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need userid");
            FUN_00405fc4();
LAB_004051b4:
            fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need sname");
            FUN_00405fc4();
LAB_004051d4:
            iVar1 = strcmp(unaff_s0,"-media_id");
            if (iVar1 != 0) goto LAB_004052a4;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfda8 = *(undefined4 *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
          }
          else {
            pcVar5 = clock_gettime;
            if (DAT_004bfdec == 0) goto LAB_004051b4;
            pcVar5 = clock_gettime;
            if (DAT_004bfdf0 != 0) {
              FUN_0040b994();
              goto LAB_00403cf8;
            }
LAB_00405284:
            fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need protocol");
            FUN_00405fc4();
LAB_004052a4:
            iVar1 = strcmp(unaff_s0,"-content");
            if (iVar1 == 0) {
              if (param_1 <= (int)unaff_s1) goto LAB_00405384;
              DAT_004bfdac = *(undefined4 *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
          }
LAB_00405334:
          iVar1 = strcmp(unaff_s0,"-number");
          if (iVar1 == 0) {
            if ((int)unaff_s1 < param_1) {
              DAT_004bfdb0 = *(undefined4 *)(param_2 + (int)unaff_s1 * 4);
            }
            else {
LAB_00405abc:
              iVar1 = strcmp(unaff_s0,&DAT_0049b618);
              if (iVar1 != 0) goto LAB_004053f4;
              if (param_1 <= (int)unaff_s1) goto LAB_004054d4;
              DAT_004bfdb8 = *(int *)(param_2 + (int)unaff_s1 * 4);
            }
          }
          else {
LAB_00405384:
            iVar1 = strcmp(unaff_s0,"-ssid");
            if (iVar1 != 0) goto LAB_00405abc;
            if (param_1 <= (int)unaff_s1) goto LAB_004053f4;
            DAT_004bfdb4 = *(int *)(param_2 + (int)unaff_s1 * 4);
          }
        }
        else {
          if (DAT_004bfd20 < (code *)0x8d) {
            if (DAT_004bfd20 != (code *)0xc) {
              if (DAT_004bfd20 < (code *)0xd) {
                if (DAT_004bfd20 != (code *)0x6) {
                  if ((code *)0x6 < DAT_004bfd20) goto LAB_00403f24;
                  if (DAT_004bfd20 == (code *)0x3) {
LAB_00403ed4:
                    if (DAT_004bfd28 == 0) goto LAB_00403ad0;
                    if (DAT_004bfd2c == 0) {
LAB_004041fc:
                      pcVar5 = clock_gettime;
                      fprintf(stderr,&DAT_0049b774,"Need keySec");
                      pcVar2 = (code *)FUN_00405fc4();
                      goto LAB_0040421c;
                    }
                    if (DAT_004bfd30 != (code *)0x0) {
                      if (DAT_004bfd34 != 0) goto LAB_00403cf8;
LAB_00403f04:
                      do {
                        while( true ) {
                          pcVar5 = clock_gettime;
                          fprintf(stderr,&DAT_0049b774,"Need tokenSec");
                          FUN_00405fc4();
LAB_00403f24:
                          if (pcVar5 == (code *)0x9) break;
                          if ((code *)0x9 < pcVar5) {
                            if (pcVar5 == (code *)0xa) {
                              if (DAT_004bfd28 == 0) goto LAB_00403ad0;
                              if (DAT_004bfd2c == 0) goto LAB_004041fc;
                              pcVar5 = clock_gettime;
                              if (DAT_004bfd48 == 0) goto LAB_00405c2c;
                              if (DAT_004bfd4c != 0) goto LAB_00403cf8;
                              goto LAB_0040432c;
                            }
                            if (pcVar5 != (code *)0xb) goto LAB_00403ae8;
                            if (DAT_004bfd28 == 0) goto LAB_00403ad0;
                            if (DAT_004bfd2c == 0) goto LAB_004041fc;
                            FUN_00409924();
                            goto LAB_00403cf8;
                          }
                          if (pcVar5 == (code *)0x7) {
                            if (DAT_004bfd28 == 0) goto LAB_00403ad0;
                            if (DAT_004bfd2c == 0) goto LAB_004041fc;
                            if (DAT_004bfd30 == (code *)0x0) goto LAB_00404cd4;
                            if (DAT_004bfd34 != 0) {
                              if (DAT_004bfd38 == 0) goto LAB_00404fec;
                              if (DAT_004bfd40 == 0) goto LAB_00404f9c;
                              if (DAT_004bfd3c == 0) goto LAB_00404164;
                              pcVar5 = clock_gettime;
                              if (DAT_004bfd44 == 0) goto LAB_00405244;
                              FUN_0040a6d4();
                              goto LAB_00403cf8;
                            }
                          }
                          else {
                            if (pcVar5 != (code *)0x8) goto LAB_00403ae8;
                            if (DAT_004bfd28 == 0) goto LAB_00403ad0;
                            if (DAT_004bfd2c == 0) goto LAB_004041fc;
                            if (DAT_004bfd30 == (code *)0x0) goto LAB_00404cd4;
                            if (DAT_004bfd34 != 0) {
                              if (DAT_004bfd38 == 0) goto LAB_00404fec;
                              FUN_0040a010();
                              goto LAB_00403cf8;
                            }
                          }
                        }
                        if (DAT_004bfd28 == 0) goto LAB_00403ad0;
                        if (DAT_004bfd2c == 0) goto LAB_004041fc;
                        if (DAT_004bfd30 == (code *)0x0) goto LAB_00404cd4;
                      } while (DAT_004bfd34 == 0);
                      if (DAT_004bfd38 == 0) goto LAB_00404fec;
                      FUN_0040a284();
                      goto LAB_00403cf8;
                    }
                    goto LAB_00404cd4;
                  }
                  if (DAT_004bfd20 < (code *)0x4) {
                    if (DAT_004bfd20 == (code *)0x1) {
                      if (DAT_004bfd28 != 0) {
                        if (DAT_004bfd2c != 0) goto LAB_00403cf8;
                        goto LAB_004041fc;
                      }
                      goto LAB_00403ad0;
                    }
                    if (DAT_004bfd20 == (code *)0x2) goto LAB_00403ed4;
                  }
                  else {
                    if (DAT_004bfd20 == (code *)0x4) {
                      if (DAT_004bfd28 != 0) {
                        if (DAT_004bfd2c != 0) {
                          if (DAT_004bfd30 == (code *)0x0) goto LAB_00404cd4;
                          if (DAT_004bfd34 != 0) {
                            FUN_00409b70();
                            goto LAB_00403cf8;
                          }
                          goto LAB_00403f04;
                        }
                        goto LAB_004041fc;
                      }
                    }
                    else {
                      if (DAT_004bfd20 != (code *)0x5) goto LAB_00403ae8;
                      if (DAT_004bfd28 != 0) {
                        if (DAT_004bfd2c != 0) {
                          if (DAT_004bfd30 != (code *)0x0) {
                            if (DAT_004bfd34 == 0) goto LAB_00403f04;
                            if (DAT_004bfd38 == 0) goto LAB_00404fec;
                            FUN_00409db4();
                            goto LAB_00403cf8;
                          }
                          goto LAB_00404cd4;
                        }
                        goto LAB_004041fc;
                      }
                    }
LAB_00403ad0:
                    pcVar5 = clock_gettime;
                    fprintf(stderr,&DAT_0049b774,"Need key");
                  }
LAB_00403ae8:
                  FUN_00405fc4();
LAB_00403af0:
                  DAT_004bfd38 = *(int *)(pcVar5 + param_2);
                  goto LAB_00403818;
                }
                if (DAT_004bfd28 == 0) goto LAB_00403ad0;
                if (DAT_004bfd2c == 0) goto LAB_004041fc;
                if (DAT_004bfd30 != (code *)0x0) {
                  if (DAT_004bfd34 == 0) goto LAB_00403f04;
                  FUN_0040a490();
                  goto LAB_00403cf8;
                }
LAB_00404cd4:
                fprintf(stderr,&DAT_0049b774,"Need token");
                FUN_00405fc4();
LAB_00404cf4:
                if (DAT_004bfd3c != 0) {
                  FUN_0040b670();
                  goto LAB_00403cf8;
                }
LAB_00404164:
                fprintf(stderr,&DAT_0049b774,"Need url");
                FUN_00405fc4();
LAB_00404184:
                iVar1 = strcmp(unaff_s0,"-password");
                if (iVar1 != 0) {
LAB_004043b8:
                  iVar1 = strcmp(unaff_s0,"-verification_code");
                  if (iVar1 != 0) goto LAB_00404408;
                  if ((int)unaff_s1 < param_1) {
                    DAT_004bfd58 = *(int *)(param_2 + (int)unaff_s1 * 4);
                    goto LAB_00403818;
                  }
                  goto LAB_00404570;
                }
                if (param_1 <= (int)unaff_s1) goto LAB_00404408;
                DAT_004bfd4c = *(int *)(param_2 + (int)unaff_s1 * 4);
              }
              else {
                if (DAT_004bfd20 == (code *)0x85) {
                  if (DAT_004bfd28 == 0) goto LAB_00403ad0;
                  if (DAT_004bfd30 == (code *)0x0) goto LAB_00404cd4;
                  if (DAT_004bfd3c == 0) goto LAB_00404164;
                  pcVar5 = clock_gettime;
                  if (DAT_004bfd5c == 0) goto LAB_00405d8c;
                  pcVar5 = clock_gettime;
                  if (DAT_004bfd60 != 0) {
                    if (DAT_004bfd64 == 0) goto LAB_004043e8;
                    pcVar5 = clock_gettime;
                    if (DAT_004bfd68 != 0) {
                      FUN_0040d59c();
                      goto LAB_00403cf8;
                    }
                    goto LAB_00405094;
                  }
LAB_00405d6c:
                  fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need command");
                  FUN_00405fc4();
LAB_00405d8c:
                  fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need function");
                  uStack_2d4 = FUN_00405fc4();
                  puStack_2d0 = auStack_2e8;
                  puStack_2d8 = PTR__fini_004be620;
                  (*(code *)PTR___uClibc_main_004beba0)
                            (PTR_main_004be618,uStack_2c8,auStack_2c4,PTR__init_004be61c);
                  do {
                    /* WARNING: Do nothing block with infinite loop */
                  } while( true );
                }
                if (DAT_004bfd20 < (code *)0x86) {
                  if (DAT_004bfd20 == (code *)0x82) {
                    if (DAT_004bfd28 != 0) {
                      if (DAT_004bfd30 != (code *)0x0) {
                        if (DAT_004bfd3c != 0) {
                          pcVar5 = clock_gettime;
                          if (DAT_004bfd5c == 0) goto LAB_00405d8c;
                          pcVar5 = clock_gettime;
                          if (DAT_004bfd60 == 0) goto LAB_00405d6c;
                          if (DAT_004bfd64 != 0) {
                            pcVar5 = clock_gettime;
                            if (DAT_004bfd68 == 0) goto LAB_00405094;
                            FUN_0040c0b8();
                            goto LAB_00403cf8;
                          }
                          goto LAB_004043e8;
                        }
                        goto LAB_00404164;
                      }
                      goto LAB_00404cd4;
                    }
                    goto LAB_00403ad0;
                  }
                  pcVar2 = (code *)0x83;
                  if ((code *)0x82 < DAT_004bfd20) {
LAB_0040421c:
                    if (pcVar5 == pcVar2) {
                      if (DAT_004bfd28 != 0) {
                        if (DAT_004bfd30 != (code *)0x0) {
                          if (DAT_004bfd3c != 0) {
                            pcVar5 = clock_gettime;
                            if (DAT_004bfd5c == 0) goto LAB_00405d8c;
                            pcVar5 = clock_gettime;
                            if (DAT_004bfd60 != 0) {
                              if (DAT_004bfd64 != 0) {
                                pcVar5 = clock_gettime;
                                if (DAT_004bfd68 != 0) {
                                  FUN_0040c260();
                                  goto LAB_00403cf8;
                                }
LAB_00405094:
                                fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,
                                        "Need webaccount");
                                FUN_00405fc4();
                                goto LAB_004050b4;
                              }
                              goto LAB_004043e8;
                            }
                            goto LAB_00405d6c;
                          }
                          goto LAB_00404164;
                        }
                        goto LAB_00404cd4;
                      }
                      goto LAB_00403ad0;
                    }
                    if (pcVar5 != (code *)0x84) goto LAB_00403ae8;
                    if (DAT_004bfd28 == 0) goto LAB_00403ad0;
                    if (DAT_004bfd30 == (code *)0x0) goto LAB_00404cd4;
                    if (DAT_004bfd3c == 0) goto LAB_00404164;
                    pcVar5 = clock_gettime;
                    if (DAT_004bfd5c == 0) goto LAB_00405d8c;
                    pcVar5 = clock_gettime;
                    if (DAT_004bfd60 == 0) goto LAB_00405d6c;
                    if (DAT_004bfd64 == 0) goto LAB_004043e8;
                    pcVar5 = clock_gettime;
                    if (DAT_004bfd68 == 0) goto LAB_00405094;
                    pcVar5 = clock_gettime;
                    if (DAT_004bfd78 != 0) {
                      pcVar5 = clock_gettime;
                      if (DAT_004bfd7c == 0) goto LAB_00405b6c;
                      pcVar5 = clock_gettime;
                      if (DAT_004bfd80 == 0) goto LAB_00405264;
                      FUN_0040c408();
                      goto LAB_00403cf8;
                    }
                    goto LAB_00405b8c;
                  }
                  if (DAT_004bfd20 == (code *)0x80) {
                    if (DAT_004bfd28 == 0) goto LAB_00403ad0;
                    if (DAT_004bfd3c == 0) goto LAB_00404164;
                    if (DAT_004bfd64 == 0) goto LAB_004043e8;
                    if (DAT_004bfd6c == 0) goto LAB_00405134;
                    pcVar5 = clock_gettime;
                    if (DAT_004bfdb8 == 0) goto LAB_00405c0c;
                    pcVar5 = clock_gettime;
                    if (DAT_004bfdc4 != 0) {
                      pcVar5 = clock_gettime;
                      if (DAT_004bfdc8 != 0) {
                        pcVar5 = clock_gettime;
                        if (DAT_004bfdcc != 0) {
                          pcVar5 = clock_gettime;
                          if (DAT_004bfdd0 != 0) {
                            FUN_0040a970();
                            goto LAB_00403cf8;
                          }
                          goto LAB_00405174;
                        }
                        goto LAB_00405bac;
                      }
                      goto LAB_00405bcc;
                    }
                    goto LAB_00405bec;
                  }
                  if (DAT_004bfd20 != (code *)0x81) goto LAB_00403ae8;
                  if (DAT_004bfd28 == 0) goto LAB_00403ad0;
                  if (DAT_004bfd30 == (code *)0x0) goto LAB_00404cd4;
                  if (DAT_004bfd3c == 0) goto LAB_00404164;
                  pcVar5 = clock_gettime;
                  if (DAT_004bfd5c == 0) goto LAB_00405d8c;
                  pcVar5 = clock_gettime;
                  if (DAT_004bfd60 == 0) goto LAB_00405d6c;
                  if (DAT_004bfd64 == 0) goto LAB_004043e8;
                  pcVar5 = clock_gettime;
                  if (DAT_004bfd68 == 0) goto LAB_00405094;
                  if (DAT_004bfd6c == 0) goto LAB_00405134;
                  pcVar5 = clock_gettime;
                  if (DAT_004bfd70 != 0) {
                    pcVar5 = clock_gettime;
                    if (DAT_004bfd74 == 0) goto LAB_00405224;
                    FUN_0040b7bc();
                    goto LAB_00403cf8;
                  }
                  goto LAB_00405c4c;
                }
                if (DAT_004bfd20 == (code *)0x88) goto LAB_00404cf4;
                if (DAT_004bfd20 < (code *)0x89) {
                  if (DAT_004bfd20 == (code *)0x86) {
                    if (DAT_004bfd28 == 0) goto LAB_00403ad0;
                    if (DAT_004bfd30 == (code *)0x0) goto LAB_00404cd4;
                    if (DAT_004bfd3c == 0) goto LAB_00404164;
                    pcVar5 = clock_gettime;
                    if (DAT_004bfd5c == 0) goto LAB_00405d8c;
                    pcVar5 = clock_gettime;
                    if (DAT_004bfd60 == 0) goto LAB_00405d6c;
                    if (DAT_004bfd64 == 0) goto LAB_004043e8;
                    pcVar5 = clock_gettime;
                    if (DAT_004bfd68 == 0) goto LAB_00405094;
                    pcVar5 = clock_gettime;
                    if (DAT_004bfd80 == 0) goto LAB_00405264;
                    FUN_0040d8b0();
                  }
                  else {
                    if (DAT_004bfd20 != (code *)0x87) goto LAB_00403ae8;
                    if (DAT_004bfd3c == 0) goto LAB_00404164;
                    if (DAT_004bfd64 == 0) goto LAB_004043e8;
                    FUN_0040aee4();
                  }
                  goto LAB_00403cf8;
                }
                if (DAT_004bfd20 == (code *)0x8a) {
                  if (DAT_004bfd28 == 0) goto LAB_00403ad0;
                  if (DAT_004bfd2c == 0) goto LAB_004041fc;
                  if (DAT_004bfd3c == 0) goto LAB_00404164;
                  if (DAT_004bfd64 == 0) goto LAB_004043e8;
                  if (DAT_004bfd6c == 0) goto LAB_00405134;
                  pcVar5 = clock_gettime;
                  if (DAT_004bfdb4 != 0) {
                    pcVar5 = clock_gettime;
                    if (DAT_004bfdb8 == 0) goto LAB_00405c0c;
                    pcVar5 = clock_gettime;
                    if (DAT_004bfdbc != 0) {
                      pcVar5 = clock_gettime;
                      if (DAT_004bfdc0 != 0) {
                        pcVar5 = clock_gettime;
                        if (DAT_004bfdc4 == 0) goto LAB_00405bec;
                        pcVar5 = clock_gettime;
                        if (DAT_004bfdc8 == 0) goto LAB_00405bcc;
                        pcVar5 = clock_gettime;
                        if (DAT_004bfdcc == 0) goto LAB_00405bac;
                        pcVar5 = clock_gettime;
                        if (DAT_004bfdd0 == 0) goto LAB_00405174;
                        pcVar5 = clock_gettime;
                        if (DAT_004bfe3c != 0) {
                          FUN_0040abc4();
                          goto LAB_00403cf8;
                        }
                        goto LAB_00405cac;
                      }
                      goto LAB_00405ccc;
                    }
                    goto LAB_00405cec;
                  }
                  goto LAB_00405d0c;
                }
                if (DAT_004bfd20 < (code *)0x8b) {
                  if (DAT_004bfd3c == 0) goto LAB_00404164;
                  if (DAT_004bfd64 != 0) {
                    if (DAT_004bfd2c == 0) goto LAB_004041fc;
                    if (DAT_004bfd28 != 0) {
                      FUN_0040b230();
                      goto LAB_00403cf8;
                    }
                    goto LAB_00403ad0;
                  }
                }
                else {
                  if (DAT_004bfd3c == 0) goto LAB_00404164;
                  if (DAT_004bfd64 != 0) {
                    if (DAT_004bfd2c != 0) {
                      FUN_0040b080();
                      goto LAB_00403cf8;
                    }
                    goto LAB_004041fc;
                  }
                }
LAB_004043e8:
                fprintf(stderr,&DAT_0049b774,"Need uid");
                FUN_00405fc4();
LAB_00404408:
                iVar1 = strcmp(unaff_s0,"-authid");
                if (iVar1 == 0) {
                  if ((int)unaff_s1 < param_1) {
                    DAT_004bfd50 = *(int *)(param_2 + (int)unaff_s1 * 4);
                    goto LAB_00403818;
                  }
LAB_00404f6c:
                  iVar1 = strcmp(unaff_s0,"-Fileexttype");
                  if (iVar1 == 0) {
                    if (param_1 <= (int)unaff_s1) goto LAB_0040500c;
                    DAT_004bfd84 = *(undefined4 *)(param_2 + (int)unaff_s1 * 4);
                    goto LAB_00403818;
                  }
                }
                else {
LAB_00404570:
                  iVar1 = strcmp(unaff_s0,"-device_id");
                  if (iVar1 != 0) goto LAB_00404f6c;
                  if ((int)unaff_s1 < param_1) {
                    DAT_004bfd54 = *(int *)(param_2 + (int)unaff_s1 * 4);
                    goto LAB_00403818;
                  }
                }
LAB_00404fbc:
                iVar1 = strcmp(unaff_s0,"-Filefullname");
                if (iVar1 != 0) {
LAB_0040500c:
                  iVar1 = strcmp(unaff_s0,"-Duration");
                  if (iVar1 == 0) {
                    if ((int)unaff_s1 < param_1) {
                      DAT_004bfd8c = *(undefined4 *)(param_2 + (int)unaff_s1 * 4);
                      goto LAB_00403818;
                    }
LAB_004050d4:
                    iVar1 = strcmp(unaff_s0,"-filetype");
                    if (iVar1 != 0) goto LAB_00405108;
                    if ((int)unaff_s1 < param_1) {
                      DAT_004bfda0 = *(undefined4 *)(param_2 + (int)unaff_s1 * 4);
                      goto LAB_00403818;
                    }
                  }
                  else {
LAB_0040503c:
                    iVar1 = strcmp(unaff_s0,"-pthread");
                    if (iVar1 != 0) goto LAB_004050d4;
                    if ((int)unaff_s1 < param_1) {
                      DAT_004bfdd4 = atoi(*(undefined4 *)(param_2 + (int)unaff_s1 * 4));
                      goto LAB_00403818;
                    }
LAB_00405108:
                    iVar1 = strcmp(unaff_s0,"-reftoken");
                    if (iVar1 == 0) {
                      if (param_1 <= (int)unaff_s1) goto LAB_004052a4;
                      DAT_004bfda4 = *(undefined4 *)(param_2 + (int)unaff_s1 * 4);
                      goto LAB_00403818;
                    }
                  }
                  goto LAB_004051d4;
                }
                if (param_1 <= (int)unaff_s1) goto LAB_0040503c;
                DAT_004bfd88 = *(undefined4 *)(param_2 + (int)unaff_s1 * 4);
              }
              goto LAB_00403818;
            }
            if (DAT_004bfd28 == 0) goto LAB_00403ad0;
            if (DAT_004bfd2c == 0) goto LAB_004041fc;
            pcVar5 = clock_gettime;
            if (DAT_004bfd48 == 0) goto LAB_00405c2c;
            if (DAT_004bfd4c == 0) {
LAB_0040432c:
              pcVar5 = clock_gettime;
              fprintf(stderr,&DAT_0049b774,"Need password");
              pcVar2 = (code *)FUN_00405fc4();
LAB_0040434c:
              if (pcVar5 == pcVar2) {
                if (DAT_004bfd3c == 0) goto LAB_00404164;
                if (DAT_004bfd64 == 0) goto LAB_004043e8;
                if (DAT_004bfd2c == 0) goto LAB_004041fc;
                pcVar5 = clock_gettime;
                if (DAT_004bfdf4 == 0) goto LAB_00405484;
                pcVar5 = clock_gettime;
                if (DAT_004bfdf8 != 0) {
                  pcVar5 = clock_gettime;
                  if (DAT_004bfdfc == 0) goto LAB_00405c6c;
                  pcVar5 = clock_gettime;
                  if (DAT_004bfe00 == 0) goto LAB_004050b4;
                  FUN_0040ccd8();
                  goto LAB_00403cf8;
                }
                goto LAB_00405c8c;
              }
              if (pcVar5 != (code *)0x136) goto LAB_00403ae8;
              if (DAT_004bfd3c == 0) goto LAB_00404164;
              if (DAT_004bfd64 == 0) goto LAB_004043e8;
              pcVar5 = clock_gettime;
              if (DAT_004bfde4 != 0) {
                pcVar5 = clock_gettime;
                if (DAT_004bfde8 != 0) {
                  if (DAT_004bfd30 == (code *)0x0) goto LAB_00404cd4;
                  FUN_0040d0e8();
                  goto LAB_00403cf8;
                }
                goto LAB_00405d2c;
              }
              goto LAB_00405d4c;
            }
            pcVar5 = clock_gettime;
            if (DAT_004bfd58 != 0) {
              pcVar5 = clock_gettime;
              if (DAT_004bfd50 != 0) {
                if (DAT_004bfd54 != 0) goto LAB_00403cf8;
LAB_00404e3c:
                fprintf(stderr,&DAT_0049b774,"Need device_id");
                FUN_00405fc4();
                goto LAB_00404e5c;
              }
              fprintf(stderr,&DAT_0049b774,"Need authid");
              FUN_00405fc4();
            }
            fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need verification_code");
            FUN_00405fc4();
LAB_004053f4:
            iVar1 = strcmp(unaff_s0,&DAT_0049b620);
            if (iVar1 == 0) {
              if ((int)unaff_s1 < param_1) {
                DAT_004bfdbc = *(int *)(param_2 + (int)unaff_s1 * 4);
                goto LAB_00403818;
              }
              goto LAB_004054a4;
            }
LAB_004054d4:
            iVar1 = strcmp(unaff_s0,"-signal_quality");
            if (iVar1 != 0) goto LAB_004054a4;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfdc0 = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_00405534:
            iVar1 = strcmp(unaff_s0,"-p2pconnect");
            if (iVar1 != 0) goto LAB_00405504;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfdc8 = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_00405594:
            iVar1 = strcmp(unaff_s0,"-tfstat");
            if (iVar1 != 0) goto LAB_00405564;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfdd0 = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_004055f4:
            iVar1 = strcmp(unaff_s0,"-name");
            if (iVar1 != 0) goto LAB_004055c4;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfddc = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_00405654:
            iVar1 = strcmp(unaff_s0,"-vendor");
            if (iVar1 != 0) goto LAB_00405624;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfde4 = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_004056b4:
            iVar1 = strcmp(unaff_s0,"-sname");
            if (iVar1 != 0) goto LAB_00405684;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfdec = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_00405714:
            iVar1 = strcmp(unaff_s0,"-type");
            if (iVar1 != 0) goto LAB_004056e4;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfdf4 = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_00405774:
            iVar1 = strcmp(unaff_s0,"-suffix");
            if (iVar1 != 0) goto LAB_00405744;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfdfc = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_004057d4:
            iVar1 = strcmp(unaff_s0,"-pic_url");
            if (iVar1 != 0) goto LAB_004057a4;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfe04 = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_00405838:
            iVar1 = strcmp(unaff_s0,"-pic_pwd");
            if (iVar1 != 0) goto LAB_00405804;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfe0c = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_00405894:
            iVar1 = strcmp(unaff_s0,"-oss_scene_type");
            if (iVar1 != 0) goto LAB_00405868;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfe14 = *(undefined4 *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_004058f8:
            iVar1 = strcmp(unaff_s0,&DAT_0049b718);
            if (iVar1 != 0) goto LAB_004058c8;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfe1c = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_00405958:
            iVar1 = strcmp(unaff_s0,"-targetCode");
            if (iVar1 != 0) goto LAB_00405928;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfe24 = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_004059b8:
            iVar1 = strcmp(unaff_s0,"-status");
            if (iVar1 != 0) goto LAB_00405988;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfe2c = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_00405a18:
            iVar1 = strcmp(unaff_s0,"-p2p_status");
            pcVar5 = unaff_s1;
            if (iVar1 != 0) goto LAB_004059e8;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfe34 = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
          }
          else {
            if (DAT_004bfd20 != (code *)0x12e) {
              if ((code *)0x12e < DAT_004bfd20) {
                if (DAT_004bfd20 == (code *)0x137) {
                  if (DAT_004bfd3c == 0) goto LAB_00404164;
                  if (DAT_004bfd64 == 0) goto LAB_004043e8;
                  if (DAT_004bfd2c == 0) goto LAB_004041fc;
                  FUN_0040d22c();
LAB_00403cf8:
                  exit(0);
LAB_00403d00:
                  iVar1 = strcmp(unaff_s0,"-model");
                  if (iVar1 == 0) {
                    if (param_1 <= (int)unaff_s1) {
LAB_00403d20:
                      iVar1 = strcmp(unaff_s0,"-SensorID");
                      if (iVar1 != 0) goto LAB_00403d38;
                      if ((int)unaff_s1 < param_1) {
                        DAT_004bfd78 = *(int *)(param_2 + (int)unaff_s1 * 4);
                        goto LAB_00403818;
                      }
                      goto LAB_00403d54;
                    }
                    DAT_004bfd70 = *(int *)(param_2 + (int)unaff_s1 * 4);
                  }
                  else {
LAB_00403c34:
                    iVar1 = strcmp(unaff_s0,"-port");
                    if (iVar1 != 0) goto LAB_00403d20;
                    if ((int)unaff_s1 < param_1) {
                      DAT_004bfd74 = *(int *)(param_2 + (int)unaff_s1 * 4);
                      goto LAB_00403818;
                    }
LAB_00403d38:
                    iVar1 = strcmp(unaff_s0,"-EventStat");
                    if (iVar1 == 0) {
                      if ((int)unaff_s1 < param_1) {
                        DAT_004bfd7c = *(int *)(param_2 + (int)unaff_s1 * 4);
                        goto LAB_00403818;
                      }
                    }
                    else {
LAB_00403d54:
                      iVar1 = strcmp(unaff_s0,"-EventTime");
                      if (iVar1 == 0) {
                        if (param_1 <= (int)unaff_s1) goto LAB_00404184;
                        DAT_004bfd80 = *(int *)(param_2 + (int)unaff_s1 * 4);
                        goto LAB_00403818;
                      }
                    }
                    iVar1 = strcmp(unaff_s0,"-username");
                    if (iVar1 != 0) goto LAB_00404184;
                    if (param_1 <= (int)unaff_s1) goto LAB_004043b8;
                    DAT_004bfd48 = *(int *)(param_2 + (int)unaff_s1 * 4);
                  }
                  goto LAB_00403818;
                }
                if ((code *)0x137 < DAT_004bfd20) {
                  if (DAT_004bfd20 == (code *)0x19b) {
                    if (DAT_004bfd3c == 0) goto LAB_00404164;
                    if (DAT_004bfd40 == 0) goto LAB_00404f9c;
                    xiaomi();
                  }
                  else if (DAT_004bfd20 < (code *)0x19c) {
                    if (DAT_004bfd20 == (code *)0x138) {
                      if (DAT_004bfd3c == 0) goto LAB_00404164;
                      if (DAT_004bfd64 == 0) goto LAB_004043e8;
                      if (DAT_004bfd2c == 0) goto LAB_004041fc;
                      FUN_0040d3e4();
                    }
                    else {
                      if (DAT_004bfd20 != (code *)0x19a) goto LAB_00403ae8;
                      if (DAT_004bfd3c == 0) goto LAB_00404164;
                      if (DAT_004bfd28 == 0) goto LAB_00403ad0;
                      if (DAT_004bfd40 == 0) goto LAB_00404f9c;
                      FUN_0040df14();
                    }
                  }
                  else if (DAT_004bfd20 == (code *)0x19d) {
                    if (DAT_004bfd3c == 0) goto LAB_00404164;
                    if (DAT_004bfd40 == 0) goto LAB_00404f9c;
                    if (DAT_004bfd54 == 0) goto LAB_00404e3c;
                    devlog();
                  }
                  else if (DAT_004bfd20 < (code *)0x19d) {
                    if (DAT_004bfd3c == 0) goto LAB_00404164;
                    if (DAT_004bfd64 == 0) goto LAB_004043e8;
                    FUN_0040e334();
                  }
                  else {
                    if (DAT_004bfd20 != (code *)0x19e) goto LAB_00403ae8;
                    if (DAT_004bfd3c == 0) goto LAB_00404164;
                    if (DAT_004bfd64 == 0) goto LAB_004043e8;
                    if (DAT_004bfd2c == 0) goto LAB_004041fc;
                    if (DAT_004bfd40 == 0) goto LAB_00404f9c;
                    FUN_0040e45c();
                  }
                  goto LAB_00403cf8;
                }
                if (DAT_004bfd20 == (code *)0x131) {
                  if (DAT_004bfd3c == 0) goto LAB_00404164;
                  if (DAT_004bfd64 == 0) goto LAB_004043e8;
                  if (DAT_004bfd2c == 0) goto LAB_004041fc;
                  pcVar5 = clock_gettime;
                  if (DAT_004bfdfc == 0) goto LAB_00405c6c;
                  pcVar5 = clock_gettime;
                  if (DAT_004bfe00 != 0) {
                    FUN_0040cafc();
                    goto LAB_00403cf8;
                  }
LAB_004050b4:
                  fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need time");
                  FUN_00405fc4();
                  goto LAB_004050d4;
                }
                pcVar2 = (code *)0x132;
                if ((code *)0x131 < DAT_004bfd20) goto LAB_0040434c;
                if (DAT_004bfd20 != (code *)0x12f) {
                  if (DAT_004bfd20 != (code *)0x130) goto LAB_00403ae8;
                  if (DAT_004bfd3c != 0) {
                    if (DAT_004bfd64 != 0) {
                      pcVar5 = clock_gettime;
                      if (DAT_004bfdf4 == 0) goto LAB_00405484;
                      pcVar5 = clock_gettime;
                      if (DAT_004bfdf8 == 0) goto LAB_00405c8c;
                      if (DAT_004bfd2c == 0) goto LAB_004041fc;
                      pcVar5 = clock_gettime;
                      if (DAT_004bfd80 == 0) goto LAB_00405264;
                      pcVar5 = clock_gettime;
                      if (DAT_004bfd7c != 0) {
                        pcVar5 = clock_gettime;
                        if (DAT_004bfe04 != 0) {
                          pcVar5 = clock_gettime;
                          if (DAT_004bfe08 == 0) goto LAB_00405314;
                          pcVar5 = clock_gettime;
                          if (DAT_004bfe0c != 0) {
                            pcVar5 = clock_gettime;
                            if (DAT_004bfe10 == 0) goto LAB_004052f4;
                            FUN_0040c834();
                            goto LAB_00403cf8;
                          }
                          fprintf(stderr,&DAT_0049b774,"Need pic_pwd");
                          FUN_00405fc4();
                        }
                        goto LAB_00405444;
                      }
                      goto LAB_00405b6c;
                    }
                    goto LAB_004043e8;
                  }
                  goto LAB_00404164;
                }
                if (DAT_004bfd3c == 0) goto LAB_00404164;
                pcVar5 = clock_gettime;
                if (DAT_004bfdd8 == 0) goto LAB_00405194;
                if (DAT_004bfd30 == (code *)0x0) goto LAB_00404cd4;
                if (DAT_004bfd34 == 0) goto LAB_00403f04;
                if (DAT_004bfd64 == 0) goto LAB_004043e8;
                if (DAT_004bfddc != 0) {
                  pcVar5 = clock_gettime;
                  if (DAT_004bfde0 != 0) {
                    FUN_0040ced4();
                    goto LAB_00403cf8;
                  }
                  fprintf(stderr,&DAT_0049b774,"Need message");
                  FUN_00405fc4();
LAB_00405224:
                  fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need port");
                  FUN_00405fc4();
LAB_00405244:
                  fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need overwrite");
                  FUN_00405fc4();
                  goto LAB_00405264;
                }
                fprintf(stderr,&DAT_0049b774,"Need name");
                FUN_00405fc4();
                goto LAB_00405abc;
              }
              if (DAT_004bfd20 == (code *)0xc0) {
                if (DAT_004bfe1c == 0) goto LAB_00405074;
                if (DAT_004bfd6c == 0) goto LAB_00405134;
                pcVar5 = clock_gettime;
                if (DAT_004bfdb8 != 0) {
                  pcVar5 = clock_gettime;
                  if (DAT_004bfe30 != 0) {
                    pcVar5 = clock_gettime;
                    if (DAT_004bfe34 != 0) {
                      FUN_0040bdc8();
                      goto LAB_00403cf8;
                    }
                    goto LAB_00405154;
                  }
                  goto LAB_00405464;
                }
LAB_00405c0c:
                fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need mac");
                FUN_00405fc4();
LAB_00405c2c:
                fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need username");
                FUN_00405fc4();
LAB_00405c4c:
                fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need model");
                FUN_00405fc4();
LAB_00405c6c:
                fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need suffix");
                FUN_00405fc4();
LAB_00405c8c:
                fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need sub_type");
                FUN_00405fc4();
LAB_00405cac:
                fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need apmode");
                FUN_00405fc4();
LAB_00405ccc:
                fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need signal_quality");
                FUN_00405fc4();
LAB_00405cec:
                fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need ip");
                FUN_00405fc4();
LAB_00405d0c:
                fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need ssid");
                FUN_00405fc4();
LAB_00405d2c:
                fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need timestamp");
                FUN_00405fc4();
LAB_00405d4c:
                fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need vendor");
                FUN_00405fc4();
                goto LAB_00405d6c;
              }
              if ((code *)0xc0 < DAT_004bfd20) {
                if (DAT_004bfd20 != (code *)0xc9) {
                  if (DAT_004bfd20 < (code *)0xca) {
                    if (DAT_004bfd20 == (code *)0xc1) {
                      if (DAT_004bfd3c == 0) goto LAB_00404164;
                      pcVar5 = clock_gettime;
                      if (DAT_004bfe38 == 0) {
                        fprintf(stderr,&DAT_0049b774,"Need param");
                        FUN_00405fc4();
LAB_004052f4:
                        fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need video_pwd");
                        FUN_00405fc4();
                        goto LAB_00405314;
                      }
                      FUN_0040bf2c();
                    }
                    else {
                      if (DAT_004bfd20 != (code *)0xc8) goto LAB_00403ae8;
                      if (DAT_004bfd3c == 0) goto LAB_00404164;
                      FUN_0040db78();
                    }
                  }
                  else if (DAT_004bfd20 == (code *)0x12c) {
                    if (DAT_004bfd3c == 0) goto LAB_00404164;
                    if (DAT_004bfd40 == 0) goto LAB_00404f9c;
                    FUN_0040e628(DAT_004bfdd4);
                  }
                  else if (DAT_004bfd20 < (code *)0x12d) {
                    if (DAT_004bfd20 != (code *)0xff) goto LAB_00403ae8;
                    param_1 = DAT_004bfd28;
                    if (DAT_004bfd28 == 0) goto LAB_00403ad0;
                    unaff_s2 = DAT_004bfd30;
                    if (DAT_004bfd30 == (code *)0x0) goto LAB_00404cd4;
                    unaff_s0 = acStack_2a8;
                    uVar3 = strlen(DAT_004bfd28);
                    uVar4 = strlen(pcVar2);
                    unaff_s1 = clock_gettime;
                    local_2b8 = unaff_s0;
                    FUN_00408b74(iVar1,uVar3,pcVar2,uVar4);
                    fwrite("\ndo_hmac_sha_test:\n",1,0x13,stderr);
                    fprintf(stderr,"got key=%s\n",iVar1);
                    fprintf(stderr,"got encode string=%s\n",pcVar2);
                    FUN_00406834("result=",unaff_s0,0x200);
                    FUN_00408ff4(unaff_s0,auStack_68,0x14);
                    fprintf(stderr,"base64_encode=%s\n",auStack_68);
                    uVar3 = strlen(auStack_68);
                    FUN_00408e74(auStack_68,uVar3,auStack_a8,0x40);
                    fprintf(stderr,"hmac=%s\n",auStack_a8);
                    FUN_00406ac8(DAT_004bfd28,DAT_004bfd30);
                    memset(unaff_s0,0,0x80);
                    FUN_00409468(DAT_004bfd30,DAT_004bfd28,unaff_s0);
                    FUN_00409538("123456789012345",DAT_004bfd28,unaff_s0);
                    unaff_s2 = pcVar2;
                    param_1 = iVar1;
                  }
                  else {
                    if (DAT_004bfd3c == 0) goto LAB_00404164;
                    FUN_0040e850();
                  }
                  goto LAB_00403cf8;
                }
                if (DAT_004bfd3c == 0) goto LAB_00404164;
                if (DAT_004bfd40 == 0) {
LAB_00404f9c:
                  fprintf(stderr,&DAT_0049b774,"Need filename");
                  FUN_00405fc4();
                  goto LAB_00404fbc;
                }
                if (DAT_004bfd38 != 0) {
                  FUN_0040dca4();
                  goto LAB_00403cf8;
                }
LAB_00404fec:
                fprintf(stderr,&DAT_0049b774,"Need path");
                FUN_00405fc4();
                goto LAB_0040500c;
              }
              if (DAT_004bfd20 == (code *)0x8f) {
                if (DAT_004bfd3c != 0) {
                  if (DAT_004bfd64 != 0) {
                    FUN_0040b574();
                    goto LAB_00403cf8;
                  }
                  goto LAB_004043e8;
                }
                goto LAB_00404164;
              }
              if (DAT_004bfd20 < (code *)0x90) {
                if (DAT_004bfd20 == (code *)0x8d) {
                  if (DAT_004bfd3c == 0) goto LAB_00404164;
                  if (DAT_004bfd2c == 0) goto LAB_004041fc;
                  if (DAT_004bfd64 != 0) {
                    if (DAT_004bfd6c == 0) goto LAB_00405134;
                    FUN_0040bbfc();
                    goto LAB_00403cf8;
                  }
                }
                else {
                  if (DAT_004bfd20 != (code *)0x8e) goto LAB_00403ae8;
                  if (DAT_004bfd3c == 0) goto LAB_00404164;
                  if (DAT_004bfd64 != 0) {
                    if (DAT_004bfd2c != 0) {
                      FUN_0040b3dc();
                      goto LAB_00403cf8;
                    }
                    goto LAB_004041fc;
                  }
                }
                goto LAB_004043e8;
              }
              if (DAT_004bfd20 != (code *)0x90) {
                if (DAT_004bfd20 != (code *)0x91) goto LAB_00403ae8;
                if (DAT_004bfd3c != 0) {
                  if (DAT_004bfe1c != 0) {
                    if (DAT_004bfd6c == 0) goto LAB_00405134;
                    pcVar5 = clock_gettime;
                    if (DAT_004bfdec == 0) goto LAB_004051b4;
                    FUN_0040bacc();
                    goto LAB_00403cf8;
                  }
                  goto LAB_00405074;
                }
                goto LAB_00404164;
              }
              if (DAT_004bfd3c == 0) goto LAB_00404164;
              if (DAT_004bfe1c == 0) {
LAB_00405074:
                pcVar5 = clock_gettime;
                fprintf(stderr,&DAT_0049b774,"Need did");
                FUN_00405fc4();
                goto LAB_00405094;
              }
              pcVar5 = clock_gettime;
              if (DAT_004bfe18 == 0) {
LAB_00405b4c:
                fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need seq");
                FUN_00405fc4();
                goto LAB_00405b6c;
              }
              pcVar5 = clock_gettime;
              if (DAT_004bfe20 == 0) {
LAB_00405b2c:
                fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need currentCode");
                FUN_00405fc4();
                goto LAB_00405b4c;
              }
              pcVar5 = clock_gettime;
              if (DAT_004bfe24 == 0) {
LAB_00405b0c:
                fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need targetCode");
                FUN_00405fc4();
                goto LAB_00405b2c;
              }
              pcVar5 = clock_gettime;
              if (DAT_004bfe28 == 0) {
                fprintf(stderr,&DAT_0049b774,"Need region");
                FUN_00405fc4();
                goto LAB_00405b0c;
              }
              if (DAT_004bfe2c != 0) {
                FUN_0040d744();
                goto LAB_00403cf8;
              }
              fprintf(stderr,&DAT_0049b774,"Need status");
              FUN_00405fc4();
              goto LAB_00405384;
            }
LAB_00404e5c:
            if (DAT_004bfd3c == 0) goto LAB_00404164;
            if (DAT_004bfd64 == 0) goto LAB_004043e8;
            pcVar5 = clock_gettime;
            if (DAT_004bfd80 == 0) {
LAB_00405264:
              fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need EventTime");
              FUN_00405fc4();
              goto LAB_00405284;
            }
            pcVar5 = clock_gettime;
            if (DAT_004bfd7c == 0) {
LAB_00405b6c:
              fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need EventStat");
              FUN_00405fc4();
LAB_00405b8c:
              fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need SensorID");
              FUN_00405fc4();
LAB_00405bac:
              fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need p2pconnect_success");
              FUN_00405fc4();
LAB_00405bcc:
              fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need p2pconnect");
              FUN_00405fc4();
LAB_00405bec:
              fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need packetloss");
              FUN_00405fc4();
              goto LAB_00405c0c;
            }
            pcVar5 = clock_gettime;
            if (DAT_004bfe04 != 0) {
              pcVar5 = clock_gettime;
              if (DAT_004bfe08 != 0) {
                FUN_0040c5e0();
                goto LAB_00403cf8;
              }
LAB_00405314:
              fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need video_url");
              FUN_00405fc4();
              goto LAB_00405334;
            }
LAB_00405444:
            fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need pic_url");
            FUN_00405fc4();
LAB_00405464:
            fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need heart_time");
            FUN_00405fc4();
LAB_00405484:
            fprintf(*(undefined4 *)(pcVar5 + -0x13e8),&DAT_0049b774,"Need type");
            FUN_00405fc4();
LAB_004054a4:
            iVar1 = strcmp(unaff_s0,"-packetloss");
            if (iVar1 != 0) goto LAB_00405534;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfdc4 = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_00405504:
            iVar1 = strcmp(unaff_s0,"-p2pconnect_success");
            if (iVar1 != 0) goto LAB_00405594;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfdcc = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_00405564:
            iVar1 = strcmp(unaff_s0,"-userid");
            if (iVar1 != 0) goto LAB_004055f4;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfdd8 = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_004055c4:
            iVar1 = strcmp(unaff_s0,"-message");
            if (iVar1 != 0) goto LAB_00405654;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfde0 = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_00405624:
            iVar1 = strcmp(unaff_s0,"-timestamp");
            if (iVar1 != 0) goto LAB_004056b4;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfde8 = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_00405684:
            iVar1 = strcmp(unaff_s0,"-protocol");
            if (iVar1 != 0) goto LAB_00405714;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfdf0 = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_004056e4:
            iVar1 = strcmp(unaff_s0,"-sub_type");
            if (iVar1 != 0) goto LAB_00405774;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfdf8 = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_00405744:
            iVar1 = strcmp(unaff_s0,"-time");
            if (iVar1 != 0) goto LAB_004057d4;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfe00 = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_004057a4:
            iVar1 = strcmp(unaff_s0,"-video_url");
            if (iVar1 != 0) goto LAB_00405838;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfe08 = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_00405804:
            iVar1 = strcmp(unaff_s0,"-video_pwd");
            if (iVar1 != 0) goto LAB_00405894;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfe10 = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_00405868:
            iVar1 = strcmp(unaff_s0,&DAT_0049b710);
            if (iVar1 != 0) goto LAB_004058f8;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfe18 = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_004058c8:
            iVar1 = strcmp(unaff_s0,"-currentCode");
            if (iVar1 != 0) goto LAB_00405958;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfe20 = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_00405928:
            iVar1 = strcmp(unaff_s0,"-region");
            if (iVar1 != 0) goto LAB_004059b8;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfe28 = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_00405988:
            iVar1 = strcmp(unaff_s0,"-heart_time");
            if (iVar1 != 0) goto LAB_00405a18;
            pcVar5 = unaff_s1;
            if ((int)unaff_s1 < param_1) {
              DAT_004bfe30 = *(int *)(param_2 + (int)unaff_s1 * 4);
              goto LAB_00403818;
            }
LAB_004059e8:
            unaff_s1 = unaff_s2;
            iVar1 = strcmp(unaff_s0,"-param");
            unaff_s2 = unaff_s1;
            if (iVar1 == 0) {
              if (param_1 <= (int)pcVar5) {
                iVar1 = strcmp(unaff_s0,"-apmode");
                if (iVar1 != 0) goto LAB_00403818;
                goto LAB_004038b4;
              }
              DAT_004bfe38 = *(int *)(param_2 + (int)pcVar5 * 4);
              unaff_s1 = pcVar5;
              goto LAB_00403818;
            }
          }
          unaff_s1 = unaff_s2;
          iVar1 = strcmp(unaff_s0,"-apmode");
          if (iVar1 == 0) {
            unaff_s2 = unaff_s1;
            if (param_1 <= (int)pcVar5) goto LAB_004038b4;
            DAT_004bfe3c = *(int *)(param_2 + (int)pcVar5 * 4);
            unaff_s1 = pcVar5;
          }
        }
LAB_00403818:
        unaff_s2 = unaff_s1 + 1;
        pcVar5 = unaff_s1;
        if (param_1 <= (int)unaff_s2) goto LAB_004038b4;
LAB_00403828:
        unaff_s0 = *(char **)(param_2 + (int)unaff_s2 * 4);
        pcVar5 = unaff_s1;
        if (*unaff_s0 == '-') goto LAB_00403844;
        goto LAB_004038b4;
      }
      goto LAB_00403974;
    }
  }
  unaff_s1 = unaff_s2 + 1;
  iVar1 = strcmp(unaff_s0,&DAT_0049b4a8);
  if (iVar1 == 0) {
    if ((int)unaff_s1 < param_1) {
      DAT_004bfd28 = *(int *)(param_2 + (int)unaff_s1 * 4);
      goto LAB_00403818;
    }
    goto LAB_004039a0;
  }
LAB_00403974:
  unaff_s1 = unaff_s2 + 1;
  iVar1 = strcmp(unaff_s0,"-keySec");
  if (iVar1 == 0) {
    if ((int)unaff_s1 < param_1) {
      DAT_004bfd2c = *(int *)(param_2 + (int)unaff_s1 * 4);
      goto LAB_00403818;
    }
LAB_004039d0:
    unaff_s1 = unaff_s2 + 1;
    iVar1 = strcmp(unaff_s0,"-tokenSec");
    if (iVar1 != 0) goto LAB_00403a00;
    if ((int)unaff_s1 < param_1) {
      DAT_004bfd34 = *(int *)(param_2 + (int)unaff_s1 * 4);
      goto LAB_00403818;
    }
LAB_00403a50:
    unaff_s1 = unaff_s2 + 1;
    iVar1 = strcmp(unaff_s0,&DAT_0049b4d4);
    if (iVar1 != 0) goto LAB_00403a20;
    if ((int)unaff_s1 < param_1) {
      DAT_004bfd3c = *(int *)(param_2 + (int)unaff_s1 * 4);
      goto LAB_00403818;
    }
LAB_00403a70:
    unaff_s1 = unaff_s2 + 1;
    iVar1 = strcmp(unaff_s0,"-overwrite");
    if (iVar1 != 0) goto LAB_00403a88;
    if ((int)unaff_s1 < param_1) {
      DAT_004bfd44 = *(int *)(param_2 + (int)unaff_s1 * 4);
      goto LAB_00403818;
    }
LAB_00403aa4:
    unaff_s1 = unaff_s2 + 1;
    iVar1 = strcmp(unaff_s0,"-command");
    if (iVar1 != 0) goto LAB_00403b4c;
    if ((int)unaff_s1 < param_1) {
      DAT_004bfd60 = *(int *)(param_2 + (int)unaff_s1 * 4);
      goto LAB_00403818;
    }
  }
  else {
LAB_004039a0:
    unaff_s1 = unaff_s2 + 1;
    iVar1 = strcmp(unaff_s0,"-token");
    if (iVar1 != 0) goto LAB_004039d0;
    if ((int)unaff_s1 < param_1) {
      DAT_004bfd30 = *(code **)(param_2 + (int)unaff_s1 * 4);
      goto LAB_00403818;
    }
LAB_00403a00:
    unaff_s1 = unaff_s2 + 1;
    iVar1 = strcmp(unaff_s0,"-path");
    if (iVar1 != 0) goto LAB_00403a50;
    pcVar5 = (code *)((int)unaff_s1 * 4);
    if ((int)unaff_s1 < param_1) goto LAB_00403af0;
LAB_00403a20:
    unaff_s1 = unaff_s2 + 1;
    iVar1 = strcmp(unaff_s0,"-filename");
    if (iVar1 != 0) goto LAB_00403a70;
    if ((int)unaff_s1 < param_1) {
      DAT_004bfd40 = *(int *)(param_2 + (int)unaff_s1 * 4);
      goto LAB_00403818;
    }
LAB_00403a88:
    unaff_s1 = unaff_s2 + 1;
    iVar1 = strcmp(unaff_s0,"-function");
    if (iVar1 != 0) goto LAB_00403aa4;
    if ((int)unaff_s1 < param_1) {
      DAT_004bfd5c = *(int *)(param_2 + (int)unaff_s1 * 4);
      goto LAB_00403818;
    }
LAB_00403b4c:
    unaff_s1 = unaff_s2 + 1;
    iVar1 = strcmp(unaff_s0,&DAT_0049b50c);
    if (iVar1 == 0) {
      if ((int)unaff_s1 < param_1) {
        DAT_004bfd64 = *(int *)(param_2 + (int)unaff_s1 * 4);
        goto LAB_00403818;
      }
      goto LAB_00403c14;
    }
  }
  unaff_s1 = unaff_s2 + 1;
  iVar1 = strcmp(unaff_s0,"-webaccount");
  if (iVar1 == 0) {
    if (param_1 <= (int)unaff_s1) goto LAB_00403d00;
    DAT_004bfd68 = *(int *)(param_2 + (int)unaff_s1 * 4);
    goto LAB_00403818;
  }
LAB_00403c14:
  unaff_s1 = unaff_s2 + 1;
  iVar1 = strcmp(unaff_s0,"-version");
  if (iVar1 != 0) goto LAB_00403d00;
  if (param_1 <= (int)unaff_s1) goto LAB_00403c34;
  DAT_004bfd6c = *(int *)(param_2 + (int)unaff_s1 * 4);
  goto LAB_00403818;
}



// ==== _fini @ 004995d0 size=56

void _fini(void)

{
  FUN_00405e9c();
  return;
}



