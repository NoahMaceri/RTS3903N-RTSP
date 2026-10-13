/* libaacenc — recovered function prototypes
 * AAC audio encoder (RLX DSP; partial decode)
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef LIBAACENC_H
#define LIBAACENC_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
int _init(EVP_PKEY_CTX *ctx);  /* @ 000126c4 */
void _fini(void);  /* @ 00021350 */

/* ---- aac ---- */
undefined4 AAC_002(void);  /* @ 00012900 */
undefined4 AAC_004(void);  /* @ 00012a10 */
undefined4 AAC_005(void);  /* @ 00012a24 */
void AAC_006(void);  /* @ 00012a38 */
undefined4 AAC_007(int param_1);  /* @ 00012a48 */
void AAC_008(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 00012b4c */
void AAC_003(undefined4 *param_1,undefined4 param_2);  /* @ 00012c68 */
undefined4 AAC_101(char *param_1);  /* @ 00012e00 */
undefined4 AAC_102(int param_1);  /* @ 00012ed0 */
undefined4 AAC_104(void);  /* @ 00012efc */
undefined4 AAC_105(int param_1);  /* @ 00012f10 */
undefined4 * AAC_Malloc(int param_1);  /* @ 00012f40 */
void AAC_Free(int param_1);  /* @ 00013018 */
void AAC_108(undefined4 *param_1,undefined4 *param_2);  /* @ 00013098 */
void AAC_109(void);  /* @ 000130f8 */
void AAC_110(int param_1,int param_2);  /* @ 00013108 */
void AAC_113(int param_1,undefined4 param_2);  /* @ 00013124 */
void AAC_114(int param_1,int param_2,int param_3);  /* @ 0001313c */
int AAC_115(int param_1);  /* @ 0001320c */
void AAC_116(void);  /* @ 00013234 */
void AAC_117(void);  /* @ 00013244 */
undefined4 AAC_118(int param_1);  /* @ 0001327c */
undefined4 AAC_119(void);  /* @ 00013290 */
undefined4 AAC_120(void);  /* @ 000132a4 */
void AAC_121(int param_1);  /* @ 000132b8 */
void AAC_122(void);  /* @ 000132dc */
void AAC_123(void);  /* @ 000132ec */
void AAC_165(int *param_1);  /* @ 00013300 */
void AAC_166(void);  /* @ 00013358 */
void AAC_167(int *param_1,int *param_2);  /* @ 000133f8 */
void AAC_168(undefined4 param_1,undefined4 param_2,uint param_3);  /* @ 0001346c */
void AAC_169(int *param_1,int param_2,uint param_3);  /* @ 000135b0 */
void AAC_171(void);  /* @ 0001370c */
void AAC_172(int param_1,undefined4 param_2);  /* @ 0001371c */
void AAC_175(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4, undefined4 *param_5,undefined4 *param_6);  /* @ 000137c4 */
void AAC_178(void);  /* @ 000139a0 */
void AAC_180(void);  /* @ 00013a20 */
void AAC_181(int param_1,int param_2);  /* @ 00013aa0 */
void AAC_182(int param_1,int param_2);  /* @ 00013b28 */
void AAC_183(int *param_1,int param_2,int *param_3);  /* @ 00013bac */
void AAC_184(short *param_1,int param_2,short *param_3);  /* @ 00013c28 */
void AAC_185(int param_1,int param_2);  /* @ 00013ca4 */
void AAC_186(void);  /* @ 00013d2c */
void AAC_188(int param_1,int param_2);  /* @ 00013da8 */
void AAC_189(int param_1);  /* @ 00013e30 */
void AAC_192(void);  /* @ 00013ea8 */
void AAC_193(int param_1);  /* @ 00013eb8 */
void AAC_194(void);  /* @ 00013f00 */
int AAC_197(int param_1);  /* @ 00013f10 */
void AAC_198(int *param_1,int *param_2,int *param_3);  /* @ 00013f3c */
void AAC_200(int *param_1,int *param_2,int *param_3);  /* @ 0001410c */
void AAC_201(int *param_1,uint *param_2);  /* @ 000142d0 */
void AAC_202(int param_1);  /* @ 00014360 */
void AAC_203(int *param_1,uint *param_2,int param_3);  /* @ 000146a8 */
void AAC_204(int param_1,int param_2);  /* @ 00014aac */
void AAC_205(int param_1,int param_2);  /* @ 00014b2c */
void AAC_206(int param_1,int param_2);  /* @ 00014bac */
void AAC_207(int param_1,int param_2);  /* @ 00014c2c */
void AAC_208(int param_1,int param_2);  /* @ 00014cac */
void AAC_209(int param_1,int param_2);  /* @ 00014d2c */
void AAC_210(int param_1,int param_2,uint param_3);  /* @ 00014dac */
void AAC_211(int *param_1,uint *param_2);  /* @ 00015024 */
void AAC_212(int param_1);  /* @ 000150b4 */
void AAC_213(int *param_1,uint *param_2,int param_3);  /* @ 000153f8 */
void AAC_214(int param_1,int param_2);  /* @ 000157fc */
void AAC_215(int param_1,int param_2);  /* @ 0001587c */
void AAC_216(int param_1,int param_2);  /* @ 000158fc */
void AAC_217(int param_1,int param_2);  /* @ 0001597c */
void AAC_218(int param_1,int param_2);  /* @ 000159fc */
void AAC_219(int param_1,int param_2);  /* @ 00015a7c */
void AAC_220(int param_1,int param_2,uint param_3);  /* @ 00015afc */
void AAC_221(void);  /* @ 00015d74 */
void AAC_222(int *param_1,undefined4 param_2,uint param_3);  /* @ 00016168 */
void AAC_223(undefined4 param_1,undefined4 param_2,uint param_3);  /* @ 00016444 */
void AAC_224(int *param_1,undefined4 param_2,int *param_3,int param_4);  /* @ 000164d0 */
void AAC_225(int *param_1,int *param_2,int *param_3,uint param_4);  /* @ 00016650 */
void AAC_226(undefined4 param_1,int *param_2,undefined4 param_3,int param_4);  /* @ 00016810 */
void AAC_227(undefined4 param_1,uint *param_2,undefined4 param_3,uint param_4);  /* @ 00016950 */
void AAC_228(int *param_1,undefined4 param_2,int *param_3,int param_4,uint param_5);  /* @ 00016b34 */
void AAC_229(undefined4 param_1,uint *param_2,undefined4 param_3,uint param_4,uint param_5);  /* @ 00016ce0 */
void AAC_273(undefined4 *param_1);  /* @ 00016ec0 */
undefined4 AAC_274(undefined4 *param_1);  /* @ 0001723c */
void AAC_010(void);  /* @ 00017460 */
void AAC_011(void);  /* @ 00017470 */
void AAC_012(void);  /* @ 000174fc */
void AAC_013(void);  /* @ 0001752c */
void AAC_014(void);  /* @ 00017540 */
void AAC_015(void);  /* @ 00017594 */
void AAC_016(void);  /* @ 000175f0 */
int AAC_017(uint param_1,uint param_2);  /* @ 00017650 */
void AAC_018(void);  /* @ 000176f8 */
void AAC_019(void);  /* @ 000177e8 */
void AAC_020(void);  /* @ 000178d8 */
undefined4 AAC_021(int param_1);  /* @ 000179c8 */
void AAC_022(int param_1);  /* @ 00017ae4 */
void AAC_023(int param_1);  /* @ 00017d10 */
void AAC_024(int param_1,short param_2,short param_3);  /* @ 000182dc */
int AAC_025(int param_1);  /* @ 00018870 */
void AAC_026(int param_1,short param_2);  /* @ 00018c60 */
int AAC_276(undefined4 param_1,undefined4 param_2,uint *param_3);  /* @ 00018e20 */
int AAC_277(undefined4 param_1,int param_2,undefined4 *param_3);  /* @ 00018ec8 */
undefined4 AAC_278(undefined4 param_1,int param_2,undefined4 *param_3);  /* @ 00018f74 */
int AAC_279(undefined4 param_1,int param_2,undefined4 *param_3);  /* @ 0001906c */
void AAC_028(undefined4 param_1,int param_2);  /* @ 000193b0 */
void AAC_029(int param_1,int param_2,int param_3);  /* @ 00019428 */
void AAC_030(void);  /* @ 00019828 */
undefined4 AAC_032(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,int *param_6);  /* @ 00019e30 */
void AAC_033(undefined4 param_1,int param_2);  /* @ 0001a790 */
void AAC_036(int param_1);  /* @ 0001a99c */
undefined4 AAC_039(undefined4 param_1,undefined4 *param_2,int param_3);  /* @ 0001aaa0 */
undefined4 AAC_040(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5);  /* @ 0001ac50 */
undefined4 AAC_041(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 0001ad20 */
undefined8 AAC_042(undefined4 param_1,int param_2,int param_3);  /* @ 0001ad68 */
undefined4 AAC_043(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 0001b0d0 */
undefined4 AAC_044(undefined4 param_1,int param_2,int param_3);  /* @ 0001b118 */
void AAC_045(undefined4 param_1,int param_2,int param_3,undefined4 param_4,uint param_5,char param_6 );  /* @ 0001b22c */
void AAC_046(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4, undefined4 param_5,int param_6);  /* @ 0001b38c */
int AAC_047(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,int param_5 ,char param_6);  /* @ 0001b5f0 */
int AAC_048(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,int param_5 ,char param_6);  /* @ 0001b6a8 */
void AAC_049(undefined4 param_1,int param_2,int param_3);  /* @ 0001b760 */
void AAC_050(uint param_1,int param_2);  /* @ 0001b920 */
void AAC_051(void);  /* @ 0001b9ac */
void AAC_052(undefined4 param_1,int param_2,int param_3,int param_4,int param_5);  /* @ 0001ba80 */
void AAC_053(undefined4 param_1,int param_2,int param_3,int param_4,int param_5);  /* @ 0001bcb0 */
void AAC_055(undefined4 *param_1,int param_2,int param_3);  /* @ 0001bf00 */
void AAC_057(uint *param_1,uint param_2,uint param_3);  /* @ 0001c020 */
undefined4 AAC_058(undefined4 *param_1);  /* @ 0001c160 */
int AAC_059(undefined4 param_1,int *param_2,undefined4 *param_3);  /* @ 0001c198 */
void AAC_067(int param_1,int param_2);  /* @ 0001c890 */
void AAC_066(int param_1,int param_2);  /* @ 0001c928 */
void AAC_068(void);  /* @ 0001ca80 */
undefined4 AAC_069(undefined4 param_1,uint param_2);  /* @ 0001caf4 */
undefined4 AAC_070(undefined4 param_1,uint param_2);  /* @ 0001da04 */
undefined4 AAC_071(int param_1,int param_2,uint param_3,undefined1 *param_4);  /* @ 0001e298 */
void AAC_072(undefined4 param_1,int param_2);  /* @ 0001e768 */
void AAC_073(void);  /* @ 0001e8cc */
undefined4 AAC_074(undefined4 param_1,int param_2,int param_3);  /* @ 0001ec40 */
void AAC_076(void);  /* @ 0001eef0 */
void AAC_078(void);  /* @ 0001f170 */
void AAC_079(uint param_1,int param_2,int param_3,uint param_4);  /* @ 0001f1ac */
void AAC_080(int param_1,uint param_2,int param_3);  /* @ 0001f1d4 */
bool AAC_081(int param_1,int param_2,int param_3);  /* @ 0001f1fc */
void AAC_082(undefined4 param_1,int param_2,uint param_3,int param_4);  /* @ 0001f264 */
void AAC_086(int *param_1);  /* @ 0001f2a0 */
void AAC_087(int param_1,int param_2,int *param_3,int *param_4);  /* @ 0001f354 */
undefined4 AAC_090(int param_1,undefined4 param_2,int param_3);  /* @ 0001f4e8 */
void AAC_091(int param_1,undefined4 param_2,int param_3,undefined4 *param_4);  /* @ 0001f558 */
void AAC_092(int param_1,int param_2,int param_3,int param_4,short param_5);  /* @ 0001f7dc */
undefined4 AAC_093(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5);  /* @ 0001f8d0 */
void AAC_097(int param_1,undefined4 *param_2,undefined4 *param_3);  /* @ 0002094c */
void AAC_098(void);  /* @ 00020a84 */

/* ---- aacencoder ---- */
void AACEncoder_API_Process(int param_1,short *param_2,undefined4 param_3,int param_4);  /* @ 00016ef8 */
undefined4 AACEncoder_API_Set(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4);  /* @ 00017008 */
undefined4 AACEncoder_API_Get(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4);  /* @ 00017150 */
int AACEncoder_API_GetBlockLen(int param_1);  /* @ 00017198 */
void AACEncoder_API_free(int param_1);  /* @ 000171b0 */
int AACEncoder_API_context_Create(void);  /* @ 00017348 */

/* ---- misc ---- */
void processEntry entry(void);  /* @ 00012740 */
int AACENC_context_create(undefined4 param_1);  /* @ 00012918 */
void AACENC_context_free(undefined4 param_1,undefined4 *param_2);  /* @ 00012998 */
undefined4 get_hw_version(void);  /* @ 0001933c */

#endif /* LIBAACENC_H */
