/* librtsaec — recovered function prototypes
 * Acoustic echo cancellation (RLX DSP; partial decode)
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef LIBRTSAEC_H
#define LIBRTSAEC_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
int _init(EVP_PKEY_CTX *ctx);  /* @ 00016374 */
void _fini(void);  /* @ 0002b5c0 */
void _fini(void);  /* @ 0003b5c0 */

/* ---- ipcam ---- */
void IPCam_751(void);  /* @ 00010230 */
void IPCam_318(void);  /* @ 0001653c */
void IPCam_100(undefined4 *param_1);  /* @ 000165b0 */
void IPCam_101(int param_1);  /* @ 0001666c */
void IPCam_102(int param_1);  /* @ 00016718 */
undefined4 IPCam_103(int param_1);  /* @ 000168d4 */
undefined4 IPCam_319(undefined4 param_1,int param_2,int param_3,int param_4,int param_5);  /* @ 00016950 */
undefined4 IPCam_104(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7);  /* @ 00016dd0 */
undefined4 IPCam_320(void);  /* @ 00016fac */
void IPCam_105(int param_1);  /* @ 00017190 */
void IPCam_106(int param_1);  /* @ 00017280 */
void IPCam_107(int param_1,int param_2);  /* @ 000172ac */
void IPCam_321(uint param_1,int param_2,int param_3);  /* @ 00017848 */
void IPCam_919(undefined4 param_1,uint *param_2,uint param_3);  /* @ 00017940 */
void IPCam_920(int *param_1,int param_2,int *param_3);  /* @ 000179e8 */
void IPCam_921(void);  /* @ 00017a94 */
void IPCam_922(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 00017b8c */
void IPCam_108(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,undefined4 param_6 ,int param_7,undefined4 *param_8,undefined4 *param_9,undefined4 *param_10);  /* @ 00017c20 */
void IPCam_923(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5, undefined4 param_6,int param_7);  /* @ 00017e5c */
void IPCam_517(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5, undefined4 param_6,int param_7);  /* @ 00017ed0 */
void IPCam_516(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 00017f4c */
void IPCam_519(int param_1);  /* @ 000180cc */
void IPCam_518(void);  /* @ 000181f8 */
void IPCam_520(void);  /* @ 000184e8 */
void IPCam_222(void);  /* @ 00018590 */
void IPCam_223(void);  /* @ 000185ec */
int IPCam_109(int param_1,int param_2,undefined4 param_3,undefined4 param_4);  /* @ 00018670 */
int IPCam_110(int param_1);  /* @ 00018700 */
int IPCam_111(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6);  /* @ 000187a4 */
undefined4 IPCam_401(undefined4 param_1,undefined4 *param_2);  /* @ 00018890 */
int IPCam_403(uint param_1,int param_2);  /* @ 000188a8 */
void IPCam_402(int *param_1,int *param_2,uint *param_3,int *param_4);  /* @ 00018994 */
void IPCam_224(uint param_1);  /* @ 00018a38 */
void IPCam_225(int param_1);  /* @ 00018a48 */
void IPCam_226(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);  /* @ 00018a58 */
void IPCam_405(undefined4 *param_1);  /* @ 00018ad0 */
undefined4 IPCam_406(undefined4 param_1,undefined4 *param_2);  /* @ 00018ad8 */
void IPCam_228(int *param_1,int param_2,int *param_3,int *param_4,int *param_5);  /* @ 00018ae0 */
void IPCam_407(int *param_1,int param_2,int *param_3,int *param_4,int *param_5);  /* @ 00018ae4 */
void IPCam_229(int *param_1,int param_2,int *param_3,int *param_4);  /* @ 00018af4 */
void IPCam_230(int *param_1,int param_2,int *param_3,int *param_4);  /* @ 00018b04 */
void IPCam_231(int *param_1,int param_2,int *param_3,int *param_4);  /* @ 00018b14 */
void IPCam_232(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4,int param_5);  /* @ 00018b24 */
void IPCam_233(void);  /* @ 00018b34 */
void IPCam_234(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, int param_5);  /* @ 00018b44 */
void IPCam_235(void);  /* @ 00018b54 */
void IPCam_236(void);  /* @ 00018b64 */
void IPCam_237(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);  /* @ 00018b74 */
void IPCam_238(uint param_1);  /* @ 00018b84 */
void IPCam_239(void);  /* @ 00018b94 */
void IPCam_240(void);  /* @ 00018ba4 */
void IPCam_241(void);  /* @ 00018bb4 */
void IPCam_242(void);  /* @ 00018bc4 */
void IPCam_243(void);  /* @ 00018bd4 */
void IPCam_244(void);  /* @ 00018be4 */
void IPCam_245(undefined4 *param_1);  /* @ 00018c98 */
void IPCam_174(undefined4 *param_1);  /* @ 00018ca0 */
void IPCam_246(undefined4 *param_1);  /* @ 00018ca8 */
void IPCam_176(undefined4 *param_1);  /* @ 00018cb8 */
void IPCam_175(int param_1,int param_2);  /* @ 00018cc4 */
void IPCam_177(int *param_1,int param_2,int param_3,int param_4);  /* @ 00018d44 */
void IPCam_628(int *param_1,int param_2,int param_3,int param_4);  /* @ 00018da0 */
int IPCam_178(undefined4 param_1);  /* @ 00018dd0 */
void IPCam_629(void);  /* @ 00018e20 */
int IPCam_179(int param_1);  /* @ 00018e44 */
void IPCam_409(int param_1);  /* @ 00018ef0 */
void IPCam_630(int param_1,undefined4 param_2,undefined4 param_3);  /* @ 00018f60 */
void IPCam_631(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8, undefined4 param_9,undefined4 param_10);  /* @ 00018fdc */
void IPCam_632(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8, undefined4 param_9,undefined4 param_10,undefined4 param_11);  /* @ 00019004 */
void IPCam_633(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8, undefined4 param_9,undefined4 param_10,undefined4 param_11);  /* @ 0001913c */
void IPCam_634(void);  /* @ 00019174 */
void IPCam_635(void);  /* @ 000191ac */
void IPCam_636(void);  /* @ 000191e0 */
void IPCam_192(void);  /* @ 00019280 */
void IPCam_488(int param_1);  /* @ 0001929c */
undefined4 IPCam_487(int param_1,int param_2,int param_3,int *param_4);  /* @ 0001931c */
undefined4 IPCam_193(void);  /* @ 000193ec */
void IPCam_194(undefined4 param_1,undefined4 param_2,int *param_3);  /* @ 0001945c */
void IPCam_489(undefined4 param_1,undefined4 param_2,int *param_3);  /* @ 00019460 */
void IPCam_195(undefined4 param_1);  /* @ 00019584 */
void IPCam_490(undefined4 param_1,int param_2);  /* @ 000195d0 */
int * IPCam_491(int *param_1);  /* @ 000195ec */
int IPCam_492(undefined4 param_1,undefined4 param_2);  /* @ 00019648 */
void IPCam_113(undefined4 *param_1);  /* @ 000196e0 */
undefined4 IPCam_114(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4);  /* @ 000196f4 */
undefined4 IPCam_196(void);  /* @ 00019704 */
void IPCam_115(int param_1);  /* @ 000197e0 */
void IPCam_116(undefined4 *param_1);  /* @ 00019800 */
void IPCam_117(int param_1);  /* @ 00019810 */
int IPCam_118(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0001986c */
int IPCam_201(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 00019874 */
void IPCam_202(void);  /* @ 000198f8 */
void IPCam_120(undefined4 *param_1);  /* @ 00019920 */
void IPCam_203(int param_1);  /* @ 00019978 */
void IPCam_122(int param_1);  /* @ 0001999c */
undefined4 IPCam_121(int *param_1,int param_2,int param_3);  /* @ 000199e4 */
void IPCam_123(int param_1);  /* @ 00019ae4 */
void IPCam_204(int param_1);  /* @ 00019ae8 */
void IPCam_205(int param_1);  /* @ 00019af0 */
void IPCam_124(int param_1);  /* @ 00019b10 */
void IPCam_125(int param_1,int param_2);  /* @ 00019cbc */
void IPCam_126(int *param_1,int param_2,int param_3,int param_4,int param_5);  /* @ 00019e08 */
void IPCam_206(undefined4 param_1,int param_2);  /* @ 00019fc0 */
void IPCam_207(void);  /* @ 0001a490 */
void IPCam_208(void);  /* @ 0001a4f8 */
void IPCam_209(void);  /* @ 0001a514 */
void IPCam_210(int param_1);  /* @ 0001a540 */
void IPCam_211(void);  /* @ 0001a570 */
void IPCam_212(undefined4 param_1);  /* @ 0001a59c */
void IPCam_213(int param_1,int param_2);  /* @ 0001a5cc */
void IPCam_214(uint param_1,int param_2);  /* @ 0001a5d4 */
void IPCam_215(undefined4 param_1,int param_2);  /* @ 0001a5dc */
void IPCam_216(void);  /* @ 0001a5e4 */
void IPCam_217(void);  /* @ 0001a5ec */
void IPCam_218(void);  /* @ 0001a5fc */
void IPCam_197(void);  /* @ 0001a640 */
void IPCam_128(undefined4 *param_1);  /* @ 0001a680 */
undefined4 IPCam_129(undefined4 *param_1,int param_2,undefined4 param_3);  /* @ 0001a690 */
void IPCam_130(int param_1);  /* @ 0001a754 */
void IPCam_131(undefined4 *param_1);  /* @ 0001a774 */
void IPCam_132(int param_1);  /* @ 0001a784 */
int IPCam_133(undefined4 param_1,undefined4 param_2);  /* @ 0001a7cc */
void IPCam_135(undefined4 *param_1);  /* @ 0001a870 */
undefined4 IPCam_136(int param_1,int param_2);  /* @ 0001a8a8 */
void IPCam_137(int param_1);  /* @ 0001a8d8 */
void IPCam_138(int param_1);  /* @ 0001a8e8 */
void IPCam_139(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5, undefined4 param_6,undefined4 param_7,int param_8);  /* @ 0001a95c */
void IPCam_200(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,int param_7);  /* @ 0001a9d4 */
void IPCam_198(int param_1,undefined4 param_2,int param_3);  /* @ 0001aa80 */
void IPCam_199(void);  /* @ 0001ad38 */
void IPCam_496(int param_1);  /* @ 0001ad70 */
undefined4 IPCam_495(int param_1,int param_2,int *param_3);  /* @ 0001add4 */
void IPCam_497(int *param_1,int *param_2,undefined4 param_3,int *param_4,int *param_5,int *param_6);  /* @ 0001ae94 */
void IPCam_219(int *param_1,int *param_2,undefined4 param_3,int *param_4);  /* @ 0001aeb0 */
void IPCam_248(void);  /* @ 0001af60 */
void IPCam_249(void);  /* @ 0001b0c4 */
void IPCam_250(void);  /* @ 0001b200 */
void IPCam_001(undefined4 *param_1);  /* @ 0001b210 */
void IPCam_005(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);  /* @ 0001b234 */
void IPCam_006(undefined4 *param_1);  /* @ 0001b328 */
void IPCam_007(int param_1);  /* @ 0001b35c */
void IPCam_255(int param_1);  /* @ 0001b39c */
undefined4 IPCam_002(int *param_1,int param_2,int param_3,int param_4,int param_5);  /* @ 0001b3c0 */
undefined4 IPCam_256(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5);  /* @ 0001b420 */
undefined4 IPCam_257(int param_1);  /* @ 0001b4a0 */
int IPCam_008(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 0001b568 */
undefined4 IPCam_258(void);  /* @ 0001b610 */
undefined4 IPCam_259(void);  /* @ 0001b618 */
void IPCam_009(undefined4 *param_1);  /* @ 0001b62c */
void IPCam_011(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);  /* @ 0001b650 */
void IPCam_012(undefined4 *param_1);  /* @ 0001b728 */
void IPCam_013(int param_1);  /* @ 0001b75c */
undefined4 IPCam_010(int *param_1,int param_2,int param_3,int param_4,int param_5);  /* @ 0001b7c0 */
int IPCam_014(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 0001b968 */
void IPCam_323(undefined4 *param_1);  /* @ 0001ba30 */
void IPCam_324(int param_1);  /* @ 0001ba94 */
undefined4 IPCam_325(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7);  /* @ 0001bbc8 */
void IPCam_261(void);  /* @ 0001bdb0 */
int IPCam_262(void);  /* @ 0001be18 */
undefined4 IPCam_263(void);  /* @ 0001be34 */
undefined4 IPCam_264(void);  /* @ 0001be60 */
void IPCam_326(void);  /* @ 0001be78 */
void IPCam_327(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,undefined4 param_6 ,undefined4 param_7,undefined4 *param_8,int *param_9,int *param_10);  /* @ 0001be80 */
void IPCam_265(int param_1,int param_2,int param_3,undefined4 param_4);  /* @ 0001be90 */
void IPCam_266(int param_1,int param_2,int param_3,undefined4 param_4);  /* @ 0001bebc */
void IPCam_267(undefined4 param_1);  /* @ 0001beec */
void IPCam_268(undefined4 param_1);  /* @ 0001bef4 */
void IPCam_269(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 0001befc */
void IPCam_270(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 0001bf04 */
void IPCam_271(undefined4 param_1,undefined4 param_2);  /* @ 0001bf0c */
void IPCam_272(undefined4 param_1);  /* @ 0001bf1c */
void IPCam_251(void);  /* @ 0001bf60 */
void IPCam_253(undefined4 param_1,int param_2);  /* @ 0001c198 */
void IPCam_252(void);  /* @ 0001c280 */
void IPCam_328(int param_1);  /* @ 0001c328 */
int IPCam_329(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6);  /* @ 0001c354 */
undefined4 IPCam_694(int param_1);  /* @ 0001c440 */
void IPCam_697(int param_1);  /* @ 0001c488 */
undefined4 * IPCam_699(int param_1);  /* @ 0001c4c0 */
void IPCam_700(int param_1);  /* @ 0001c5b4 */
void IPCam_254(int param_1);  /* @ 0001c5c0 */
void IPCam_702(undefined4 param_1,int param_2);  /* @ 0001c684 */
void IPCam_273(void);  /* @ 0001c6ac */
void IPCam_703(undefined4 param_1,int param_2);  /* @ 0001c6b4 */
void IPCam_704(int param_1,int param_2,int param_3);  /* @ 0001c6e4 */
void IPCam_705(undefined4 param_1,undefined4 *param_2,int param_3);  /* @ 0001c714 */
void IPCam_706(undefined4 *param_1,int param_2,int param_3,int param_4);  /* @ 0001c73c */
void IPCam_523(undefined4 *param_1,int param_2,int param_3,int param_4);  /* @ 0001c760 */
void IPCam_522(int param_1,int param_2,int param_3,int param_4);  /* @ 0001c78c */
void IPCam_524(int param_1,int param_2,int param_3,undefined4 *param_4);  /* @ 0001c808 */
void IPCam_707(int param_1,int param_2,undefined4 *param_3,int param_4);  /* @ 0001c890 */
void IPCam_708(int param_1,uint param_2,int param_3,int param_4);  /* @ 0001c9e4 */
void IPCam_779(int param_1,uint param_2,int param_3,int param_4);  /* @ 0001c9f0 */
void IPCam_709(int param_1,uint param_2,int param_3,int param_4);  /* @ 0001ca18 */
void IPCam_710(int param_1,int param_2,int param_3,int param_4);  /* @ 0001ca4c */
void IPCam_711(int param_1,int param_2,int param_3,int param_4);  /* @ 0001ca88 */
void IPCam_712(int param_1,int param_2,int param_3,int param_4);  /* @ 0001cabc */
void IPCam_714(int param_1,int param_2,int param_3,int param_4,undefined4 param_5);  /* @ 0001cb10 */
void IPCam_924(void);  /* @ 0001cbd0 */
void IPCam_784(void);  /* @ 0001cc04 */
undefined4 IPCam_721(void);  /* @ 0001cc50 */
undefined4 IPCam_785(void);  /* @ 0001cc88 */
void IPCam_724(void);  /* @ 0001cd50 */
void IPCam_725(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0001cda0 */
void IPCam_726(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0001cdc4 */
uint IPCam_727(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);  /* @ 0001cde8 */
void IPCam_786(void);  /* @ 0001cef8 */
void IPCam_730(int *param_1,int param_2);  /* @ 0001cf00 */
void IPCam_731(int *param_1,int param_2);  /* @ 0001cf2c */
uint IPCam_732(uint param_1,int param_2,uint param_3);  /* @ 0001cf58 */
void IPCam_733(int *param_1,int *param_2,int *param_3,int param_4);  /* @ 0001cfd8 */
void IPCam_734(int *param_1,int *param_2,int param_3);  /* @ 0001d020 */
void IPCam_735(int *param_1,int *param_2,int param_3);  /* @ 0001d064 */
void IPCam_736(int *param_1,int *param_2,undefined4 *param_3,int param_4,undefined4 param_5);  /* @ 0001d0a8 */
void IPCam_787(void);  /* @ 0001d150 */
void IPCam_737(int *param_1,undefined4 *param_2,int param_3,undefined4 param_4);  /* @ 0001d1cc */
void IPCam_788(void);  /* @ 0001d280 */
void IPCam_738(int *param_1,int *param_2,int param_3,uint param_4,int param_5);  /* @ 0001d288 */
void IPCam_789(int *param_1,int *param_2,int param_3,uint param_4);  /* @ 0001d300 */
void IPCam_739(int *param_1,int *param_2,int param_3,uint param_4,int param_5);  /* @ 0001d33c */
void IPCam_790(int *param_1,int *param_2,int param_3,uint param_4);  /* @ 0001d380 */
void IPCam_740(int *param_1,int *param_2,int param_3,uint param_4,int param_5);  /* @ 0001d3f0 */
void IPCam_791(int *param_1,int *param_2,int param_3,uint param_4);  /* @ 0001d400 */
void IPCam_792(int *param_1,int *param_2,int param_3,uint param_4);  /* @ 0001d480 */
void IPCam_741(int *param_1,int *param_2,int param_3,uint param_4,int param_5);  /* @ 0001d500 */
void IPCam_794(int *param_1,int *param_2,int param_3,int param_4);  /* @ 0001d580 */
void IPCam_742(int *param_1,int *param_2,int param_3,uint param_4,int param_5);  /* @ 0001d5dc */
void IPCam_795(int param_1,int param_2,int param_3,uint param_4);  /* @ 0001d604 */
void IPCam_743(int *param_1,int param_2);  /* @ 0001d6b8 */
void IPCam_744(int *param_1,int param_2,uint param_3);  /* @ 0001d734 */
void IPCam_745(int *param_1,int param_2,uint param_3);  /* @ 0001d7b4 */
float IPCam_746(int param_1,uint param_2);  /* @ 0001d85c */
float IPCam_796(undefined4 param_1,uint param_2);  /* @ 0001d874 */
int IPCam_747(float param_1,undefined4 param_2,uint param_3);  /* @ 0001d904 */
void IPCam_748(undefined4 *param_1,int param_2);  /* @ 0001d9a8 */
int IPCam_749(int param_1,int param_2,int param_3,int param_4,int param_5);  /* @ 0001d9d0 */
void IPCam_598(void);  /* @ 0001da20 */
void IPCam_797(void);  /* @ 0001dacc */
void IPCam_599(void);  /* @ 0001db60 */
void IPCam_798(void);  /* @ 0001dbfc */
void IPCam_600(void);  /* @ 0001dc24 */
void IPCam_799(void);  /* @ 0001dc7c */
void IPCam_800(int param_1);  /* @ 0001dcfc */
void IPCam_601(void);  /* @ 0001dd58 */
void IPCam_801(void);  /* @ 0001dd7c */
void IPCam_802(void);  /* @ 0001ddfc */
void IPCam_803(void);  /* @ 0001de7c */
void IPCam_602(void);  /* @ 0001de90 */
void IPCam_804(void);  /* @ 0001defc */
void IPCam_603(void);  /* @ 0001df74 */
void IPCam_604(void);  /* @ 0001e054 */
void IPCam_605(void);  /* @ 0001e114 */
void IPCam_805(void);  /* @ 0001e150 */
void IPCam_606(void);  /* @ 0001e1d4 */
void IPCam_607(void);  /* @ 0001e304 */
void IPCam_806(void);  /* @ 0001e350 */
void IPCam_608(void);  /* @ 0001e434 */
void IPCam_807(void);  /* @ 0001e58c */
void IPCam_609(void);  /* @ 0001e5cc */
void IPCam_808(void);  /* @ 0001e600 */
void IPCam_610(void);  /* @ 0001e6f8 */
void IPCam_611(void);  /* @ 0001e764 */
void IPCam_612(void);  /* @ 0001e7bc */
void IPCam_809(void);  /* @ 0001e7e0 */
void IPCam_613(void);  /* @ 0001e824 */
void IPCam_614(void);  /* @ 0001e8d8 */
void IPCam_810(void);  /* @ 0001e948 */
void IPCam_615(void);  /* @ 0001e978 */
void IPCam_616(void);  /* @ 0001e9d4 */
void IPCam_617(void);  /* @ 0001ea24 */
void IPCam_618(void);  /* @ 0001ea74 */
void IPCam_619(void);  /* @ 0001eac4 */
void IPCam_620(uint param_1,int param_2,uint param_3);  /* @ 0001eb24 */
void IPCam_811(uint param_1,undefined4 param_2,uint param_3);  /* @ 0001eb30 */
void IPCam_500(int param_1);  /* @ 0001ecb0 */
undefined4 IPCam_812(int *param_1);  /* @ 0001ed58 */
undefined4 IPCam_501(int *param_1);  /* @ 0001ed5c */
undefined4 IPCam_813(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5);  /* @ 0001ef08 */
undefined4 IPCam_502(int param_1,int param_2,int param_3,int *param_4);  /* @ 0001f014 */
undefined4 IPCam_061(void);  /* @ 0001f0c0 */
undefined4 IPCam_062(void);  /* @ 0001f0e4 */
void IPCam_503(int param_1,int param_2,int *param_3);  /* @ 0001f130 */
void IPCam_063(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5);  /* @ 0001f1b8 */
void IPCam_504(int param_1,int param_2,int *param_3);  /* @ 0001f274 */
void IPCam_141(int param_1,int param_2,int param_3);  /* @ 0001f280 */
void IPCam_142(int param_1,int param_2);  /* @ 0001f294 */
void IPCam_143(int param_1,int param_2,int param_3,int *param_4);  /* @ 0001f2a4 */
void IPCam_507(int param_1);  /* @ 0001f2f0 */
void IPCam_144(int param_1);  /* @ 0001f300 */
void IPCam_145(int param_1);  /* @ 0001f310 */
undefined4 IPCam_506(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4);  /* @ 0001f3d8 */
undefined4 IPCam_146(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4);  /* @ 0001f3ec */
undefined4 IPCam_148(void);  /* @ 0001f4a0 */
undefined4 IPCam_150(void);  /* @ 0001f4ac */
undefined4 IPCam_149(void);  /* @ 0001f4b4 */
undefined4 IPCam_151(void);  /* @ 0001f4f4 */
undefined4 IPCam_152(void);  /* @ 0001f4fc */
undefined4 IPCam_160(void);  /* @ 0001f510 */
void IPCam_508(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,int *param_7);  /* @ 0001f568 */
void IPCam_162(undefined4 param_1);  /* @ 0001f5d4 */
void IPCam_161(void);  /* @ 0001f660 */
void IPCam_509(undefined4 param_1,int param_2);  /* @ 0001f7c4 */
undefined4 IPCam_511(undefined4 param_1,undefined4 *param_2);  /* @ 0001f7e0 */
undefined4 IPCam_163(undefined4 param_1,undefined4 *param_2);  /* @ 0001f800 */
void IPCam_512(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,int *param_5);  /* @ 0001f858 */
void IPCam_164(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);  /* @ 0001f86c */
void IPCam_513(int param_1,int param_2);  /* @ 0001fa00 */
void IPCam_016(undefined4 *param_1);  /* @ 0001fa90 */
int * IPCam_032(int *param_1,int param_2,int *param_3,int *param_4);  /* @ 0001fab4 */
void IPCam_033(int param_1,int param_2,int param_3,int param_4);  /* @ 0001fcf0 */
void IPCam_165(int param_1,int param_2,int param_3,int param_4);  /* @ 0001fe30 */
void IPCam_034(undefined4 *param_1);  /* @ 0001fe98 */
void IPCam_035(int param_1);  /* @ 0001fefc */
undefined4 IPCam_166(int param_1,int param_2,int param_3,int param_4);  /* @ 0001ff40 */
undefined4 IPCam_018(int param_1,int param_2,int param_3,int param_4,int *param_5);  /* @ 0001ff44 */
undefined4 IPCam_167(int param_1,int param_2,int param_3,int param_4,int *param_5);  /* @ 0001ff48 */
undefined4 IPCam_168(int param_1,int param_2,int param_3,int param_4,int *param_5);  /* @ 0001ff50 */
undefined4 IPCam_169(int param_1,int param_2,int param_3,int param_4);  /* @ 0001ff58 */
undefined4 IPCam_170(int param_1,int param_2,int param_3,int param_4);  /* @ 0001ff60 */
undefined4 IPCam_171(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5);  /* @ 0001ff84 */
undefined4 IPCam_172(void);  /* @ 0001ff98 */
undefined4 IPCam_337(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);  /* @ 00020060 */
undefined4 IPCam_017(void);  /* @ 000200c0 */
undefined4 IPCam_019(int param_1,int param_2,undefined4 param_3);  /* @ 0002010c */
undefined4 IPCam_339(int param_1,int param_2,undefined4 param_3);  /* @ 00020110 */
undefined4 IPCam_338(void);  /* @ 0002019c */
int IPCam_751(uint param_1);  /* @ 00020230 */
int IPCam_752(int param_1,int param_2);  /* @ 000202c0 */
int IPCam_753(int param_1);  /* @ 0002033c */
void IPCam_340(int param_1,uint param_2);  /* @ 00020354 */
int IPCam_754(int param_1,int param_2);  /* @ 000203b0 */
int IPCam_341(int param_1,int param_2);  /* @ 000203c0 */
int IPCam_755(int param_1);  /* @ 000204e8 */
int IPCam_756(int param_1,uint param_2);  /* @ 00020774 */
int IPCam_757(uint param_1);  /* @ 0002085c */
int IPCam_342(int param_1,uint param_2,uint param_3);  /* @ 000209fc */
int IPCam_758(int param_1,uint param_2);  /* @ 00020a24 */
int IPCam_759(int param_1);  /* @ 00020aa0 */
int IPCam_343(int param_1);  /* @ 00020ae0 */
int IPCam_344(int param_1);  /* @ 00020ae8 */
int IPCam_345(int param_1,int param_2);  /* @ 00020af0 */
int IPCam_346(int param_1);  /* @ 00020af8 */
int IPCam_347(int param_1);  /* @ 00020b00 */
int IPCam_348(int param_1);  /* @ 00020b24 */
int IPCam_349(int param_1);  /* @ 00020b2c */
int IPCam_350(int param_1);  /* @ 00020b34 */
int IPCam_057(undefined4 param_1,int param_2,uint param_3,int param_4);  /* @ 00020c00 */
int IPCam_058(int param_1,int param_2,uint param_3,int param_4);  /* @ 00020c24 */
int IPCam_760(int param_1);  /* @ 00020eb4 */
int IPCam_059(int param_1);  /* @ 00020f24 */
int IPCam_037(int param_1,int param_2,int param_3);  /* @ 000211f0 */
int IPCam_039(int param_1,int param_2,int param_3);  /* @ 0002123c */
int IPCam_761(int param_1,uint param_2);  /* @ 00021294 */
int IPCam_038(undefined4 param_1,uint param_2);  /* @ 00021338 */
uint IPCam_762(int param_1);  /* @ 00021364 */
uint IPCam_763(int param_1);  /* @ 000213c4 */
int IPCam_764(int param_1,uint param_2);  /* @ 00021424 */
int IPCam_040(undefined4 param_1,uint param_2);  /* @ 00021474 */
undefined4 IPCam_041(void);  /* @ 00021480 */
void IPCam_042(void);  /* @ 0002148c */
int IPCam_043(undefined4 param_1,uint param_2);  /* @ 000214a8 */
int IPCam_765(uint param_1,uint param_2,uint param_3);  /* @ 000214d8 */
int IPCam_044(uint param_1);  /* @ 00021580 */
int IPCam_766(uint param_1,uint param_2,int *param_3);  /* @ 000216f4 */
int IPCam_048(undefined4 param_1,uint param_2);  /* @ 00021790 */
int IPCam_049(void);  /* @ 000217e0 */
int IPCam_767(uint param_1,uint param_2,uint param_3,uint param_4,int *param_5);  /* @ 000217ec */
int IPCam_050(void);  /* @ 0002197c */
uint IPCam_770(int param_1,int param_2,uint param_3);  /* @ 0002199c */
int IPCam_771(int param_1,uint param_2);  /* @ 00021a30 */
int IPCam_768(uint param_1,uint param_2,int param_3);  /* @ 00021ad8 */
int IPCam_051(void);  /* @ 00021b58 */
int IPCam_052(uint param_1);  /* @ 00021b74 */
int IPCam_053(void);  /* @ 00021b88 */
int IPCam_769(uint param_1,uint param_2,uint param_3,uint param_4,int param_5);  /* @ 00021bdc */
int IPCam_054(int param_1,uint param_2,uint param_3,uint param_4);  /* @ 00021cb8 */
undefined8 IPCam_773(uint param_1,uint param_2,uint param_3);  /* @ 00021d9c */
uint IPCam_772(void);  /* @ 00021ef0 */
uint IPCam_055(void);  /* @ 00021f08 */
void IPCam_774(int *param_1,int param_2,uint param_3);  /* @ 00021f80 */
void IPCam_527(undefined4 param_1,int param_2);  /* @ 00021fd0 */
void IPCam_526(int *param_1);  /* @ 00021ffc */
void IPCam_528(int *param_1,uint param_2,int param_3,int param_4);  /* @ 00022084 */
void IPCam_775(int *param_1,int param_2,uint param_3);  /* @ 000220a4 */
void IPCam_154(int *param_1,int *param_2,uint param_3);  /* @ 00022100 */
void IPCam_156(int *param_1,int *param_2,uint param_3);  /* @ 00022118 */
void IPCam_776(int *param_1,int param_2,int *param_3,int param_4,uint param_5);  /* @ 000221f0 */
void IPCam_157(int *param_1,int param_2,int *param_3,int param_4,uint param_5);  /* @ 000221f4 */
void IPCam_155(int *param_1,undefined4 param_2,int *param_3,int param_4);  /* @ 000221fc */
uint IPCam_777(uint param_1,int param_2);  /* @ 00022254 */
uint IPCam_158(uint param_1,int param_2);  /* @ 0002225c */
void IPCam_302(undefined4 *param_1);  /* @ 000222e0 */
void IPCam_331(int param_1);  /* @ 00022300 */
void IPCam_333(int param_1);  /* @ 00022314 */
void IPCam_303(int param_1);  /* @ 00022380 */
void IPCam_334(undefined4 param_1);  /* @ 000223a8 */
void IPCam_332(void);  /* @ 000223b0 */
void IPCam_335(void);  /* @ 0002240c */
void IPCam_181(void);  /* @ 000224b0 */
void IPCam_183(void);  /* @ 000224bc */
void IPCam_182(void);  /* @ 000224c4 */
void IPCam_184(void);  /* @ 000224e0 */
void IPCam_185(void);  /* @ 00022538 */
void IPCam_186(void);  /* @ 000225ac */
undefined4 IPCam_188(int *param_1,int param_2,int param_3,int param_4);  /* @ 000225b8 */
undefined4 IPCam_304(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7, int param_8);  /* @ 000225bc */
undefined4 IPCam_187(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7, int param_8);  /* @ 000225c0 */
undefined4 IPCam_189(int *param_1,int param_2,int param_3,int param_4);  /* @ 000225dc */
undefined4 IPCam_190(int param_1,undefined4 param_2,undefined4 param_3,int param_4);  /* @ 00022634 */
undefined4 IPCam_065(void);  /* @ 000226b0 */
undefined4 IPCam_066(void);  /* @ 000226d8 */
undefined4 IPCam_067(void);  /* @ 00022790 */
undefined4 IPCam_068(void);  /* @ 00022904 */
undefined4 IPCam_069(void);  /* @ 00022960 */
undefined4 IPCam_070(void);  /* @ 00022a38 */
void IPCam_305(int param_1);  /* @ 00022a90 */
void IPCam_306(int param_1);  /* @ 00022b80 */
void IPCam_307(int param_1,int param_2);  /* @ 00022bac */
void IPCam_071(int param_1,int param_2,uint param_3);  /* @ 00022c20 */
void IPCam_072(int param_1,int param_2);  /* @ 00022c48 */
void IPCam_073(undefined4 param_1,undefined4 param_2,code *param_3);  /* @ 00022d00 */
void IPCam_074(int param_1);  /* @ 00022e74 */
void IPCam_075(undefined4 param_1,int param_2);  /* @ 00022ed0 */
void IPCam_076(void);  /* @ 00022fac */
void IPCam_077(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 0002319c */
void IPCam_078(int param_1);  /* @ 000231c4 */
void IPCam_079(undefined4 param_1,uint *param_2);  /* @ 0002327c */
void IPCam_080(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 000233f0 */
void IPCam_081(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 0002344c */
void IPCam_308(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5, undefined4 *param_6,int param_7,undefined4 *param_8,undefined4 *param_9, undefined4 param_10,int param_11,undefined4 *param_12,undefined4 *param_13);  /* @ 00023520 */
void IPCam_082(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5, undefined4 *param_6,int param_7,undefined4 *param_8,undefined4 *param_9, undefined4 param_10,int param_11,undefined4 *param_12,undefined4 *param_13);  /* @ 00023524 */
void IPCam_084(void);  /* @ 00023710 */
void IPCam_086(void);  /* @ 00023794 */
void IPCam_087(undefined4 param_1);  /* @ 00023804 */
void IPCam_085(void);  /* @ 000238b0 */
void IPCam_088(undefined4 param_1);  /* @ 00023afc */
void IPCam_091(void);  /* @ 00023b20 */
void IPCam_092(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 00023b48 */
void IPCam_093(undefined4 param_1);  /* @ 00023b7c */
void IPCam_094(undefined4 param_1,int param_2,int param_3);  /* @ 00023bac */
void IPCam_089(void);  /* @ 00023be0 */
int IPCam_309(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7);  /* @ 00023e9c */
void IPCam_275(undefined4 *param_1);  /* @ 00023f90 */
void IPCam_090(int param_1);  /* @ 00023ff8 */
void IPCam_276(int param_1);  /* @ 000240a0 */
void IPCam_277(int param_1);  /* @ 000241b4 */
void IPCam_282(int param_1);  /* @ 00024380 */
void IPCam_283(int param_1);  /* @ 00024404 */
void IPCam_284(int param_1);  /* @ 00024484 */
void IPCam_285(void);  /* @ 000245f4 */
void IPCam_286(int param_1);  /* @ 000245fc */
void IPCam_095(void);  /* @ 000247bc */
void IPCam_352(void);  /* @ 000248a0 */
void IPCam_354(void);  /* @ 00024954 */
void IPCam_353(undefined4 param_1);  /* @ 00024a40 */
void IPCam_287(int param_1,undefined4 *param_2,undefined4 *param_3);  /* @ 00024bb0 */
void IPCam_355(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 00024d20 */
void IPCam_356(void);  /* @ 00024d44 */
void IPCam_357(undefined4 param_1,undefined4 param_2);  /* @ 00024f0c */
uint IPCam_288(int param_1,undefined4 param_2,uint param_3,int param_4);  /* @ 00024f30 */
uint IPCam_289(int param_1,undefined4 param_2,uint param_3);  /* @ 00024f98 */
undefined4 IPCam_290(int param_1,int *param_2,int param_3);  /* @ 00024fb4 */
undefined4 IPCam_291(int param_1,undefined4 *param_2,int *param_3);  /* @ 00024fe0 */
undefined4 IPCam_292(int param_1,int *param_2,int param_3);  /* @ 00025010 */
undefined4 IPCam_293(int param_1,undefined4 *param_2,int *param_3);  /* @ 0002503c */
undefined4 IPCam_294(int param_1);  /* @ 0002506c */
undefined4 IPCam_295(int param_1);  /* @ 00025074 */
undefined4 IPCam_296(int param_1);  /* @ 0002507c */
undefined4 IPCam_297(int param_1);  /* @ 00025084 */
int IPCam_298(int param_1);  /* @ 0002508c */
void IPCam_299(undefined4 param_1);  /* @ 0002509c */
undefined4 IPCam_278(undefined4 *param_1);  /* @ 000250e0 */
undefined4 IPCam_358(void);  /* @ 000251b0 */
undefined4 IPCam_280(int param_1,int param_2);  /* @ 000252c0 */
undefined4 IPCam_279(undefined4 *param_1);  /* @ 000253a8 */
undefined4 IPCam_359(void);  /* @ 0002545c */
undefined4 IPCam_281(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5, undefined4 param_6,undefined4 param_7);  /* @ 00025748 */
void IPCam_300(int param_1,int param_2);  /* @ 00025828 */
void IPCam_360(void);  /* @ 00025870 */
void IPCam_311(undefined4 *param_1);  /* @ 000258e0 */
void IPCam_312(undefined4 *param_1);  /* @ 00025974 */
undefined4 IPCam_313(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6, int param_7,int param_8);  /* @ 00025a8c */
void IPCam_314(int param_1);  /* @ 00025db0 */
void IPCam_315(int param_1,int *param_2,undefined4 *param_3);  /* @ 00025e24 */
void IPCam_361(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);  /* @ 00025edc */
void IPCam_316(int param_1,int *param_2,int param_3,int param_4);  /* @ 00025fec */
void IPCam_317(int param_1,int *param_2,int param_3,int param_4);  /* @ 00026290 */
void IPCam_318(int param_1,int *param_2,int param_3,int param_4);  /* @ 0002653c */
void IPCam_362(void);  /* @ 00026944 */
void IPCam_319(int *param_1,int param_2,int param_3,int *param_4,int *param_5,int param_6);  /* @ 00026950 */
void IPCam_624(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6 ,int param_7,undefined4 param_8,int param_9,undefined4 param_10,undefined4 param_11, int param_12,int param_13);  /* @ 00026a30 */
void IPCam_387(undefined4 param_1,int param_2);  /* @ 00026ad0 */
void IPCam_388(void);  /* @ 00026d10 */
void IPCam_389(int param_1,int param_2);  /* @ 00026df8 */
void IPCam_390(undefined4 param_1,int param_2);  /* @ 00026f88 */
void IPCam_320(int *param_1,undefined4 *param_2,int param_3,int *param_4,int param_5);  /* @ 00026fac */
void IPCam_391(undefined4 param_1,int param_2,int param_3);  /* @ 00027128 */
void IPCam_392(void);  /* @ 00027370 */
void IPCam_393(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5, undefined4 param_6,int param_7,undefined4 param_8,int param_9,undefined4 param_10, int param_11,int param_12,int param_13,int param_14,int param_15,int param_16, int param_17,undefined4 param_18,int param_19);  /* @ 000274a8 */
void IPCam_856(void);  /* @ 000276e0 */
void IPCam_857(void);  /* @ 00027840 */
int IPCam_321(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7);  /* @ 00027848 */
int IPCam_919(undefined4 param_1,undefined4 param_2,uint *param_3);  /* @ 00027940 */
int IPCam_920(undefined4 param_1,int param_2,undefined4 *param_3);  /* @ 000279e8 */
undefined4 IPCam_858(int param_1,undefined4 param_2);  /* @ 00027a78 */
int IPCam_921(undefined4 param_1,int param_2,undefined4 *param_3);  /* @ 00027a94 */
int IPCam_859(void);  /* @ 00027b38 */
int IPCam_922(undefined4 param_1,int param_2,undefined4 *param_3);  /* @ 00027b8c */
int IPCam_860(void);  /* @ 00027c10 */
undefined4 IPCam_861(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);  /* @ 00027ce8 */
void IPCam_862(void);  /* @ 00027dd0 */
undefined4 IPCam_923(void);  /* @ 00027e5c */
undefined4 IPCam_863(void);  /* @ 00027e88 */
void IPCam_517(int param_1);  /* @ 00027ed0 */
undefined4 IPCam_516(int param_1,int param_2,int *param_3);  /* @ 00027f4c */
undefined4 IPCam_864(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);  /* @ 00028000 */
void IPCam_865(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7, int param_8);  /* @ 000280c8 */
void IPCam_519(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7, int param_8);  /* @ 000280cc */
void IPCam_647(void);  /* @ 00028140 */
void IPCam_648(void);  /* @ 000281c8 */
void IPCam_518(undefined4 param_1,int param_2,int *param_3);  /* @ 000281f8 */
void IPCam_649(undefined4 param_1,int param_2,int *param_3);  /* @ 00028210 */
void IPCam_650(void);  /* @ 00028258 */
void IPCam_651(void);  /* @ 000282a0 */
void IPCam_880(void);  /* @ 00028310 */
void IPCam_881(void);  /* @ 00028398 */
void IPCam_520(int param_1,uint *param_2,int param_3,int param_4,int param_5);  /* @ 000284e8 */
void IPCam_882(int param_1,int *param_2,int param_3,int param_4);  /* @ 00028528 */
void IPCam_222(undefined4 *param_1);  /* @ 00028590 */
void IPCam_884(int param_1);  /* @ 00028598 */
undefined4 IPCam_223(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8);  /* @ 000285ec */
void IPCam_885(void);  /* @ 00028650 */
undefined4 IPCam_886(void);  /* @ 000287d0 */
void IPCam_224(int param_1);  /* @ 00028a38 */
void IPCam_225(int param_1);  /* @ 00028a48 */
void IPCam_226(int param_1,undefined4 param_2,undefined4 param_3);  /* @ 00028a58 */
void IPCam_887(void);  /* @ 00028aa8 */
void IPCam_227(int param_1);  /* @ 00028ad0 */
void IPCam_228(int param_1);  /* @ 00028ae0 */
void IPCam_229(int param_1);  /* @ 00028af4 */
void IPCam_230(int param_1);  /* @ 00028b04 */
void IPCam_231(int param_1);  /* @ 00028b14 */
void IPCam_232(int param_1);  /* @ 00028b24 */
void IPCam_233(int param_1);  /* @ 00028b34 */
void IPCam_234(int param_1);  /* @ 00028b44 */
void IPCam_235(int param_1);  /* @ 00028b54 */
void IPCam_236(int param_1);  /* @ 00028b64 */
void IPCam_237(int param_1);  /* @ 00028b74 */
void IPCam_238(int param_1);  /* @ 00028b84 */
void IPCam_239(undefined4 *param_1);  /* @ 00028b94 */
void IPCam_240(int param_1);  /* @ 00028ba4 */
void IPCam_241(int param_1);  /* @ 00028bb4 */
void IPCam_242(int param_1);  /* @ 00028bc4 */
void IPCam_243(int param_1);  /* @ 00028bd4 */
void IPCam_244(int param_1);  /* @ 00028be4 */
void IPCam_245(int param_1);  /* @ 00028c98 */
int IPCam_246(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7);  /* @ 00028ca8 */
void IPCam_628(int param_1,uint param_2);  /* @ 00028da0 */
void IPCam_629(int *param_1,int param_2,uint param_3);  /* @ 00028e20 */
void IPCam_630(undefined4 *param_1,int param_2,undefined4 param_3);  /* @ 00028f60 */
void IPCam_631(undefined4 param_1,undefined4 *param_2,int param_3);  /* @ 00028fdc */
undefined4 IPCam_632(int param_1,uint param_2,int param_3);  /* @ 00029004 */
undefined4 IPCam_883(int param_1,uint param_2);  /* @ 00029068 */
void IPCam_633(int *param_1,int *param_2,int param_3);  /* @ 0002913c */
void IPCam_634(int *param_1,int *param_2,int param_3);  /* @ 00029174 */
void IPCam_635(int param_1,int param_2,int param_3,int param_4);  /* @ 000291ac */
void IPCam_636(int param_1,int param_2,int param_3,uint param_4);  /* @ 000291e0 */
void IPCam_888(int param_1,int param_2,int param_3,uint param_4);  /* @ 00029220 */
void IPCam_889(undefined4 *param_1);  /* @ 00029278 */
void IPCam_192(undefined4 *param_1);  /* @ 00029280 */
void IPCam_890(int param_1);  /* @ 000292c8 */
void IPCam_193(int *param_1,int param_2,int param_3);  /* @ 000293ec */
void IPCam_891(int param_1,int param_2,int param_3);  /* @ 00029420 */
undefined4 IPCam_194(int param_1,undefined4 *param_2);  /* @ 0002945c */
void IPCam_892(void);  /* @ 00029540 */
void IPCam_195(int param_1);  /* @ 00029584 */
void IPCam_893(void);  /* @ 00029690 */
void IPCam_894(int param_1);  /* @ 00029700 */
void IPCam_196(int param_1);  /* @ 00029704 */
void IPCam_895(void);  /* @ 000297e8 */
void IPCam_201(int param_1);  /* @ 00029874 */
void IPCam_896(void);  /* @ 000298d0 */
void IPCam_202(int param_1);  /* @ 000298f8 */
void IPCam_203(int param_1);  /* @ 00029978 */
void IPCam_897(void);  /* @ 000299b8 */
void IPCam_898(void);  /* @ 00029aa0 */
void IPCam_204(void);  /* @ 00029ae8 */
void IPCam_205(int param_1);  /* @ 00029af0 */
void IPCam_899(void);  /* @ 00029bb0 */
void IPCam_900(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 00029cc0 */
void IPCam_901(int param_1,undefined4 param_2,int param_3,undefined4 param_4);  /* @ 00029dd0 */
void IPCam_902(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4);  /* @ 00029ee0 */
void IPCam_903(int param_1,undefined4 param_2,int param_3,undefined4 param_4);  /* @ 00029fa8 */
void IPCam_206(int param_1,undefined4 *param_2,undefined4 *param_3);  /* @ 00029fc0 */
void IPCam_904(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5, undefined4 param_6,int param_7);  /* @ 0002a070 */
void IPCam_905(void);  /* @ 0002a138 */
void IPCam_906(void);  /* @ 0002a1f8 */
void IPCam_907(void);  /* @ 0002a2d0 */
void IPCam_908(void);  /* @ 0002a3a8 */
void IPCam_909(void);  /* @ 0002a480 */
uint IPCam_207(int param_1,undefined4 param_2,uint param_3,int param_4);  /* @ 0002a490 */
uint IPCam_208(int param_1,undefined4 param_2,uint param_3);  /* @ 0002a4f8 */
undefined4 IPCam_209(int param_1,int *param_2,int param_3);  /* @ 0002a514 */
undefined4 IPCam_210(int param_1,undefined4 *param_2,int *param_3);  /* @ 0002a540 */
undefined4 IPCam_910(int param_1,undefined4 param_2,int *param_3);  /* @ 0002a558 */
undefined4 IPCam_211(int param_1,int *param_2,int param_3);  /* @ 0002a570 */
undefined4 IPCam_212(int param_1,undefined4 *param_2,int *param_3);  /* @ 0002a59c */
undefined4 IPCam_213(int param_1);  /* @ 0002a5cc */
undefined4 IPCam_214(int param_1);  /* @ 0002a5d4 */
undefined4 IPCam_215(int param_1);  /* @ 0002a5dc */
undefined4 IPCam_216(int param_1);  /* @ 0002a5e4 */
int IPCam_217(int param_1);  /* @ 0002a5ec */
void IPCam_218(undefined4 param_1);  /* @ 0002a5fc */
undefined4 IPCam_197(undefined4 *param_1);  /* @ 0002a640 */
undefined4 IPCam_911(int param_1);  /* @ 0002a660 */
undefined4 IPCam_912(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 0002a768 */
undefined4 IPCam_913(void);  /* @ 0002a870 */
undefined4 IPCam_914(void);  /* @ 0002a978 */
undefined4 IPCam_200(int param_1,int param_2);  /* @ 0002a9d4 */
void IPCam_915(void);  /* @ 0002aa48 */
undefined4 IPCam_198(undefined4 *param_1);  /* @ 0002aa80 */
undefined4 IPCam_916(void);  /* @ 0002ab18 */
undefined4 IPCam_917(void);  /* @ 0002abe8 */
undefined4 IPCam_397(void);  /* @ 0002acc0 */
undefined4 IPCam_398(void);  /* @ 0002accc */
undefined4 IPCam_199(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7);  /* @ 0002ad38 */
void IPCam_219(int param_1,int param_2);  /* @ 0002aeb0 */
void IPCam_248(undefined4 *param_1);  /* @ 0002af60 */
void IPCam_249(int param_1);  /* @ 0002b0c4 */
void IPCam_250(int param_1);  /* @ 0002b200 */
void IPCam_255(int param_1);  /* @ 0002b39c */
void IPCam_256(int param_1);  /* @ 0002b420 */
void IPCam_257(int param_1);  /* @ 0002b4a0 */
void IPCam_258(void);  /* @ 0002b610 */
void IPCam_259(int param_1);  /* @ 0002b618 */
void IPCam_260(int param_1,undefined4 *param_2,undefined4 *param_3);  /* @ 0002ba30 */
uint IPCam_261(int param_1,undefined4 param_2,uint param_3,int param_4);  /* @ 0002bdb0 */
uint IPCam_262(int param_1,undefined4 param_2,uint param_3);  /* @ 0002be18 */
undefined4 IPCam_263(int param_1,int *param_2,int param_3);  /* @ 0002be34 */
undefined4 IPCam_264(int param_1,undefined4 *param_2,int *param_3);  /* @ 0002be60 */
undefined4 IPCam_265(int param_1,int *param_2,int param_3);  /* @ 0002be90 */
undefined4 IPCam_266(int param_1,undefined4 *param_2,int *param_3);  /* @ 0002bebc */
undefined4 IPCam_267(int param_1);  /* @ 0002beec */
undefined4 IPCam_268(int param_1);  /* @ 0002bef4 */
undefined4 IPCam_269(int param_1);  /* @ 0002befc */
undefined4 IPCam_270(int param_1);  /* @ 0002bf04 */
int IPCam_271(int param_1);  /* @ 0002bf0c */
void IPCam_272(undefined4 param_1);  /* @ 0002bf1c */
undefined4 IPCam_251(undefined4 *param_1);  /* @ 0002bf60 */
undefined4 IPCam_253(int param_1,int param_2);  /* @ 0002c198 */
undefined4 IPCam_252(undefined4 *param_1);  /* @ 0002c280 */
undefined4 IPCam_254(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5, undefined4 param_6,undefined4 param_7);  /* @ 0002c5c0 */
void IPCam_273(int param_1,int param_2);  /* @ 0002c6ac */
void IPCam_523(int param_1);  /* @ 0002c760 */
undefined4 IPCam_522(int param_1,int *param_2);  /* @ 0002c78c */
void IPCam_524(undefined4 param_1,int *param_2,int *param_3,int *param_4);  /* @ 0002c808 */
void IPCam_779(undefined *param_1);  /* @ 0002c9f0 */
void IPCam_924(void);  /* @ 0002cbd0 */
void IPCam_784(int *param_1,int *param_2);  /* @ 0002cc04 */
void IPCam_785(int *param_1,int *param_2);  /* @ 0002cc88 */
void IPCam_786(int *param_1,int *param_2,int param_3);  /* @ 0002cef8 */
void IPCam_787(int param_1,int param_2,uint param_3);  /* @ 0002d150 */
void IPCam_788(int param_1,int param_2);  /* @ 0002d280 */
void IPCam_789(int param_1,int param_2);  /* @ 0002d300 */
void IPCam_790(int param_1,int param_2);  /* @ 0002d380 */
void IPCam_791(int param_1,int param_2);  /* @ 0002d400 */
void IPCam_792(int param_1,int param_2);  /* @ 0002d480 */
void IPCam_793(int param_1,int param_2);  /* @ 0002d500 */
void IPCam_794(int *param_1,int *param_2);  /* @ 0002d580 */
void IPCam_795(int *param_1,int *param_2);  /* @ 0002d604 */
void IPCam_796(int *param_1,int *param_2,int param_3);  /* @ 0002d874 */
void IPCam_797(int param_1,int param_2,uint param_3);  /* @ 0002dacc */
void IPCam_798(int param_1,int param_2);  /* @ 0002dbfc */
void IPCam_799(int param_1,int param_2);  /* @ 0002dc7c */
void IPCam_800(int param_1,int param_2);  /* @ 0002dcfc */
void IPCam_801(int param_1,int param_2);  /* @ 0002dd7c */
void IPCam_802(int param_1,int param_2);  /* @ 0002ddfc */
void IPCam_803(int param_1,int param_2);  /* @ 0002de7c */
void IPCam_804(int *param_1,int *param_2,uint param_3);  /* @ 0002defc */
void IPCam_805(int *param_1,int *param_2,uint param_3);  /* @ 0002e150 */
void IPCam_806(int *param_1,int *param_2,uint param_3,uint param_4);  /* @ 0002e350 */
void IPCam_807(undefined4 *param_1,int param_2,uint param_3);  /* @ 0002e58c */
void IPCam_808(int *param_1,undefined4 param_2,int *param_3,int param_4);  /* @ 0002e600 */
void IPCam_809(undefined4 param_1,int param_2,undefined4 param_3,int param_4);  /* @ 0002e7e0 */
void IPCam_810(int *param_1,undefined4 param_2,int *param_3,uint param_4);  /* @ 0002e948 */
void IPCam_811(undefined4 param_1,int *param_2,undefined4 param_3,uint param_4);  /* @ 0002eb30 */
void IPCam_812(int *param_1,undefined4 param_2,int *param_3,int param_4,uint param_5);  /* @ 0002ed58 */
void IPCam_813(undefined4 param_1,int *param_2,undefined4 param_3,uint param_4,uint param_5);  /* @ 0002ef08 */
int IPCam_061(int param_1);  /* @ 0002f0c0 */
void IPCam_062(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,uint param_6,int param_7);  /* @ 0002f0e4 */
void IPCam_063(undefined4 param_1,int param_2,undefined4 param_3,int param_4,uint param_5, int param_6);  /* @ 0002f1b8 */
void IPCam_141(undefined4 *param_1);  /* @ 0002f280 */
void IPCam_142(int param_1);  /* @ 0002f294 */
void IPCam_143(int param_1);  /* @ 0002f2a4 */
void IPCam_144(undefined4 *param_1);  /* @ 0002f300 */
undefined4 IPCam_145(undefined4 *param_1,int param_2,undefined4 param_3);  /* @ 0002f310 */
int IPCam_146(undefined4 param_1,undefined4 param_2);  /* @ 0002f3ec */
void IPCam_148(undefined4 *param_1);  /* @ 0002f4a0 */
void IPCam_150(void);  /* @ 0002f4ac */
undefined4 IPCam_149(uint *param_1,uint param_2);  /* @ 0002f4b4 */
void IPCam_151(void);  /* @ 0002f4f4 */
void IPCam_152(void);  /* @ 0002f4fc */
void IPCam_160(undefined4 *param_1);  /* @ 0002f510 */
void IPCam_162(int param_1);  /* @ 0002f5d4 */
undefined4 IPCam_161(int *param_1,int param_2,int param_3,uint param_4);  /* @ 0002f660 */
void IPCam_163(int param_1);  /* @ 0002f800 */
void IPCam_164(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,int param_6,int param_7);  /* @ 0002f86c */
void IPCam_165(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);  /* @ 0002fe30 */
undefined4 IPCam_166(int param_1);  /* @ 0002ff40 */
void IPCam_167(int param_1,undefined4 param_2);  /* @ 0002ff48 */
undefined4 IPCam_168(int param_1);  /* @ 0002ff50 */
void IPCam_169(int param_1,undefined4 param_2);  /* @ 0002ff58 */
void IPCam_170(int param_1,undefined4 param_2);  /* @ 0002ff60 */
void IPCam_171(int param_1,undefined4 param_2,undefined4 param_3);  /* @ 0002ff84 */
int IPCam_172(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0002ff98 */
void IPCam_337(undefined4 *param_1);  /* @ 00030060 */
void IPCam_339(int param_1);  /* @ 00030110 */
undefined4 IPCam_338(int *param_1,int param_2,int param_3,uint param_4);  /* @ 0003019c */
void IPCam_340(int param_1);  /* @ 00030354 */
void IPCam_341(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,int param_6 );  /* @ 000303c0 */
void IPCam_342(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);  /* @ 000309fc */
undefined4 IPCam_343(int param_1);  /* @ 00030ae0 */
void IPCam_344(int param_1,undefined4 param_2);  /* @ 00030ae8 */
undefined4 IPCam_345(int param_1);  /* @ 00030af0 */
void IPCam_346(int param_1,undefined4 param_2);  /* @ 00030af8 */
void IPCam_347(int param_1,undefined4 param_2);  /* @ 00030b00 */
void IPCam_348(int param_1,undefined4 param_2);  /* @ 00030b24 */
void IPCam_349(int param_1,undefined4 param_2);  /* @ 00030b2c */
int IPCam_350(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 00030b34 */
void IPCam_057(undefined4 *param_1);  /* @ 00030c00 */
undefined4 IPCam_058(undefined4 param_1,int param_2);  /* @ 00030c24 */
undefined4 IPCam_059(void);  /* @ 00030f24 */
void IPCam_037(undefined4 *param_1);  /* @ 000311f0 */
void IPCam_039(undefined4 *param_1,undefined4 *param_2,int param_3);  /* @ 0003123c */
void IPCam_038(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4);  /* @ 00031338 */
void IPCam_040(int param_1,int param_2);  /* @ 00031474 */
void IPCam_041(int param_1,int param_2);  /* @ 00031480 */
void IPCam_042(undefined4 param_1,int param_2);  /* @ 0003148c */
void IPCam_043(int *param_1);  /* @ 000314a8 */
undefined4 IPCam_044(int param_1,int *param_2);  /* @ 00031580 */
void IPCam_048(undefined4 *param_1);  /* @ 00031790 */
void IPCam_049(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 000317e0 */
void IPCam_050(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4);  /* @ 0003197c */
void IPCam_051(undefined4 param_1,int param_2);  /* @ 00031b58 */
void IPCam_052(int param_1);  /* @ 00031b74 */
void IPCam_053(int param_1);  /* @ 00031b88 */
undefined4 IPCam_054(int param_1,int param_2,int param_3,undefined4 *param_4);  /* @ 00031cb8 */
int IPCam_055(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 00031f08 */
void IPCam_527(int param_1);  /* @ 00031fd0 */
undefined4 IPCam_526(int param_1,int *param_2);  /* @ 00031ffc */
void IPCam_528(undefined4 param_1,int *param_2);  /* @ 00032084 */
void IPCam_154(undefined4 *param_1);  /* @ 00032100 */
undefined4 IPCam_156(int param_1,int param_2,int param_3,int param_4,int param_5);  /* @ 00032118 */
void IPCam_157(void);  /* @ 000321f4 */
undefined4 IPCam_155(int *param_1,int param_2);  /* @ 000321fc */
int IPCam_158(undefined4 param_1);  /* @ 0003225c */
void IPCam_331(undefined4 *param_1);  /* @ 00032300 */
undefined4 IPCam_333(int param_1,int param_2,int param_3,int param_4,int param_5);  /* @ 00032314 */
void IPCam_334(void);  /* @ 000323a8 */
undefined4 IPCam_332(int *param_1,int param_2);  /* @ 000323b0 */
int IPCam_335(undefined4 param_1);  /* @ 0003240c */
void IPCam_181(undefined4 *param_1);  /* @ 000324b0 */
void IPCam_183(undefined4 *param_1);  /* @ 000324bc */
void IPCam_182(int param_1,undefined4 param_2);  /* @ 000324c4 */
void IPCam_184(int *param_1,int *param_2,int *param_3,int param_4);  /* @ 000324e0 */
int IPCam_185(undefined4 param_1);  /* @ 00032538 */
void IPCam_186(undefined4 *param_1);  /* @ 000325ac */
void IPCam_188(undefined4 *param_1);  /* @ 000325b8 */
void IPCam_187(int param_1,undefined4 param_2);  /* @ 000325c0 */
void IPCam_189(int *param_1,int param_2,int param_3,int param_4);  /* @ 000325dc */
int IPCam_190(undefined4 param_1);  /* @ 00032634 */
void IPCam_065(int param_1);  /* @ 000326b0 */
void IPCam_066(uint *param_1,int param_2);  /* @ 000326d8 */
void IPCam_067(undefined4 *param_1,int param_2,int param_3);  /* @ 00032790 */
int IPCam_068(int param_1);  /* @ 00032904 */
int * IPCam_069(int param_1,int param_2);  /* @ 00032960 */
int * IPCam_070(int param_1,int param_2,int param_3);  /* @ 00032a38 */
void IPCam_071(int param_1);  /* @ 00032c20 */
void IPCam_072(uint *param_1,int param_2);  /* @ 00032c48 */
void IPCam_073(undefined4 *param_1,int param_2,int param_3);  /* @ 00032d00 */
int IPCam_074(int param_1);  /* @ 00032e74 */
int * IPCam_075(int param_1,int param_2);  /* @ 00032ed0 */
int * IPCam_076(int param_1,int param_2,int param_3);  /* @ 00032fac */
void IPCam_077(int param_1);  /* @ 0003319c */
void IPCam_078(uint *param_1,int param_2);  /* @ 000331c4 */
void IPCam_079(undefined4 *param_1,int param_2,int param_3);  /* @ 0003327c */
int IPCam_080(int param_1);  /* @ 000333f0 */
int * IPCam_081(int param_1,int param_2);  /* @ 0003344c */
int * IPCam_082(int param_1,int param_2,int param_3);  /* @ 00033524 */
void IPCam_084(undefined4 *param_1);  /* @ 00033710 */
void IPCam_086(int param_1,int param_2);  /* @ 00033794 */
void IPCam_087(undefined4 *param_1);  /* @ 00033804 */
undefined4 IPCam_085(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6, int param_7);  /* @ 000338b0 */
void IPCam_088(int param_1);  /* @ 00033afc */
void IPCam_091(int param_1,undefined4 param_2,undefined4 param_3);  /* @ 00033b20 */
void IPCam_092(int param_1,undefined4 param_2,int param_3,int param_4);  /* @ 00033b48 */
void IPCam_093(int param_1,undefined4 param_2,int param_3,int param_4);  /* @ 00033b7c */
void IPCam_094(int param_1,undefined4 param_2,int param_3,int param_4);  /* @ 00033bac */
void IPCam_089(int *param_1,int param_2,int param_3,undefined4 *param_4,int param_5);  /* @ 00033be0 */
void IPCam_090(int *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5, undefined4 *param_6,int param_7);  /* @ 00033ff8 */
int IPCam_095(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6);  /* @ 000347bc */
void IPCam_352(undefined4 *param_1);  /* @ 000348a0 */
void IPCam_354(undefined4 *param_1);  /* @ 00034954 */
undefined4 IPCam_353(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6, int param_7);  /* @ 00034a40 */
void IPCam_355(int param_1);  /* @ 00034d20 */
void IPCam_356(int param_1,int *param_2,undefined4 *param_3);  /* @ 00034d44 */
void IPCam_357(int param_1,int *param_2,int param_3,int param_4);  /* @ 00034f0c */
void IPCam_358(int param_1,int *param_2,int param_3,int param_4);  /* @ 000351b0 */
void IPCam_359(int param_1,int *param_2,int param_3,int param_4);  /* @ 0003545c */
void IPCam_360(int *param_1,int param_2,int param_3,int *param_4,int param_5);  /* @ 00035870 */
void IPCam_361(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5);  /* @ 00035edc */
int IPCam_362(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6);  /* @ 00036944 */
void IPCam_624(void);  /* @ 00036a30 */
void IPCam_387(void);  /* @ 00036ad0 */
void IPCam_388(void);  /* @ 00036d10 */
void IPCam_389(void);  /* @ 00036df8 */
void IPCam_390(void);  /* @ 00036f88 */
void IPCam_391(void);  /* @ 00037128 */
void IPCam_392(void);  /* @ 00037370 */
void IPCam_393(void);  /* @ 000374a8 */
void IPCam_856(void);  /* @ 000376e0 */
void IPCam_857(void);  /* @ 00037840 */
void IPCam_858(void);  /* @ 00037a78 */
void IPCam_859(void);  /* @ 00037b38 */
void IPCam_860(void);  /* @ 00037c10 */
void IPCam_861(void);  /* @ 00037ce8 */
void IPCam_862(void);  /* @ 00037dd0 */
void IPCam_863(void);  /* @ 00037e88 */
void IPCam_864(void);  /* @ 00038000 */
void IPCam_865(void);  /* @ 000380c8 */
void IPCam_647(void);  /* @ 00038140 */
void IPCam_648(void);  /* @ 000381c8 */
void IPCam_649(void);  /* @ 00038210 */
void IPCam_650(void);  /* @ 00038258 */
void IPCam_651(void);  /* @ 000382a0 */
void IPCam_880(void);  /* @ 00038310 */
void IPCam_881(void);  /* @ 00038398 */
void IPCam_882(int param_1,int param_2);  /* @ 00038528 */
void IPCam_884(int param_1,int param_2);  /* @ 00038598 */
void IPCam_885(int param_1,int param_2);  /* @ 00038650 */
void IPCam_886(int param_1,int param_2);  /* @ 000387d0 */
void IPCam_887(int param_1,int param_2);  /* @ 00038aa8 */
void IPCam_883(int *param_1,int *param_2,int param_3,int param_4);  /* @ 00039068 */
void IPCam_888(undefined4 param_1,int param_2,int param_3);  /* @ 00039220 */
void IPCam_889(void);  /* @ 00039278 */
void IPCam_890(int param_1);  /* @ 000392c8 */
void IPCam_891(int param_1);  /* @ 00039420 */
void IPCam_892(int param_1);  /* @ 00039540 */
void IPCam_893(void);  /* @ 00039690 */
void IPCam_894(void);  /* @ 00039700 */
void IPCam_895(void);  /* @ 000397e8 */
void IPCam_896(void);  /* @ 000398d0 */
void IPCam_897(void);  /* @ 000399b8 */
void IPCam_898(void);  /* @ 00039aa0 */
void IPCam_899(void);  /* @ 00039bb0 */
void IPCam_900(void);  /* @ 00039cc0 */
void IPCam_901(void);  /* @ 00039dd0 */
void IPCam_902(void);  /* @ 00039ee0 */
void IPCam_903(void);  /* @ 00039fa8 */
void IPCam_904(void);  /* @ 0003a070 */
void IPCam_905(void);  /* @ 0003a138 */
void IPCam_906(void);  /* @ 0003a1f8 */
void IPCam_907(void);  /* @ 0003a2d0 */
void IPCam_908(void);  /* @ 0003a3a8 */
void IPCam_909(void);  /* @ 0003a480 */
void IPCam_910(void);  /* @ 0003a558 */
void IPCam_911(void);  /* @ 0003a660 */
void IPCam_912(void);  /* @ 0003a768 */
void IPCam_913(void);  /* @ 0003a870 */
void IPCam_914(void);  /* @ 0003a978 */
void IPCam_915(void);  /* @ 0003aa48 */
void IPCam_916(void);  /* @ 0003ab18 */
void IPCam_917(void);  /* @ 0003abe8 */
undefined4 IPCam_397(undefined4 param_1,undefined4 *param_2);  /* @ 0003acc0 */
void IPCam_398(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, int *param_5,int *param_6);  /* @ 0003accc */

/* ---- rtaecns ---- */
int RTAecNs_API_Process(int param_1,int param_2,undefined4 param_3,int param_4);  /* @ 00020d44 */
int RTAecNs_API_Set(uint param_1,int param_2,int param_3,int param_4);  /* @ 00020dc8 */
int RTAecNs_API_free(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 00020fbc */
int RTAecNs_API_context_Create(void);  /* @ 000210c0 */
undefined4 RTAecNs_API_Process(int param_1,int *param_2,int *param_3,undefined4 *param_4);  /* @ 00030d44 */
undefined4 RTAecNs_API_Set(void);  /* @ 00030dc8 */
void RTAecNs_API_free(int param_1);  /* @ 00030fbc */
int RTAecNs_API_context_Create(undefined4 param_1);  /* @ 000310c0 */

/* ---- misc ---- */
void processEntry entry(void);  /* @ 000163f0 */

#endif /* LIBRTSAEC_H */
