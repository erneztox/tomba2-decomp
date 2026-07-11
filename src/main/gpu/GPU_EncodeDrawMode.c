/**
 * @brief GPU draw mode encoder: builds GP0(0xE1) cmd from tpage/display params
 * @note Original: func_80082220 at 0x80082220
 */
// GPU_EncodeDrawMode



uint GPU_EncodeDrawMode(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0xe1000000;
  if (param_2 != 0) {
    uVar1 = 0xe1000200;
  }
  param_3 = param_3 & 0x9ff;
  if (param_1 != 0) {
    param_3 = param_3 | 0x400;
  }
  return uVar1 | param_3;
}
