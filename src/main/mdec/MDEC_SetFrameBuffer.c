/**
 * @brief Sets MDEC frame buffer pointer and status byte
 * @note Original: func_80087F00 at 0x80087F00
 */
// MDEC_SetFrameBuffer



void FUN_80087f00(int param_1,undefined4 param_2,undefined1 param_3)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined1 *)(param_1 + 0x34) = param_3;
  return;
}
