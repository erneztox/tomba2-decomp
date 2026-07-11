/**
 * @brief Digit draw variant 2: calls GPU_DrawNumber with DAT_800bfa2a | 0x80
 * @note Original: func_8007C654 at 0x8007C654
 */
// GPU_DrawDigit2



void GPU_DrawDigit2(s32 param_1,s32 param_2,u8 param_3)

{
  GPU_DrawNumber(param_1,param_2,param_3,DAT_800bfa2a | 0x80,1);
  return;
}
