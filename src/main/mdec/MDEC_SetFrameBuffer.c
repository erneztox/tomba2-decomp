/**
 * @brief Sets MDEC frame buffer pointer and status u8
 * @note Original: func_80087F00 at 0x80087F00
 */
// MDEC_SetFrameBuffer



void MDEC_SetFrameBuffer(int param_1,s32 param_2,u8 param_3)

{
  *(s32 *)(param_1 + 0x28) = param_2;
  *(u8 *)(param_1 + 0x34) = param_3;
  return;
}
