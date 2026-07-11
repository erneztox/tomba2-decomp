/**
 * @brief GPU draw mode setup variant 2: builds GP0(0xE1) cmd with extra params
 * @note Original: func_80083DE0 at 0x80083DE0
 */
// GPU_SetupDrawMode2



void FUN_80083de0(int param_1,int param_2,int param_3,uint param_4,byte *param_5)

{
  uint uVar1;
  
  uVar1 = 0xe1000000;
  param_1->sub_type = 2;
  if (param_3 != 0) {
    uVar1 = 0xe1000200;
  }
  param_4 = param_4 & 0x9ff;
  if (param_2 != 0) {
    param_4 = param_4 | 0x400;
  }
  *(uint *)(param_1 + 4) = uVar1 | param_4;
  if (param_5 == (byte *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    *(uint *)(param_1 + 8) =
         (uint)(param_5->kind >> 3) << 0xf | (uint)(*param_5 >> 3) << 10 | 0xe2000000 |
         (-(int)*(short *)(param_5 + 6) & 0xf8U) << 2 |
         (int)(-(int)*(short *)(param_5 + 4) & 0xffU) >> 3;
  }
  return;
}
