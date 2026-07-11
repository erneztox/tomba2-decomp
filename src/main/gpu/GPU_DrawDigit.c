/**
 * @brief Digit draw: calls GPU_DrawNumber with DAT_800bf9ca+1 | 0x80, param 3
 * @note Original: func_8007C5E4 at 0x8007C5E4
 */
// GPU_DrawDigit



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GPU_DrawDigit(s32 param_1,s32 param_2,u8 param_3)

{
  GPU_DrawNumber(param_1,param_2,param_3,_DAT_800bf9ca + 1U & 0xff | 0x80,3);
  return;
}
