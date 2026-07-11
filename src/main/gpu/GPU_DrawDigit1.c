/**
 * @brief Digit draw variant 1: calls FUN_8007c2a4 with DAT_800bfa21 | 0x80
 * @note Original: func_8007C620 at 0x8007C620
 */
// GPU_DrawDigit1



void FUN_8007c620(s32 param_1,s32 param_2,u8 param_3)

{
  FUN_8007c2a4(param_1,param_2,param_3,DAT_800bfa21 | 0x80,1);
  return;
}
