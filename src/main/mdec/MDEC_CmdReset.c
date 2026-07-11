/**
 * @brief Sends MDEC reset command (0x45), clears pointer
 * @note Original: func_80088A74 at 0x80088A74
 */
// MDEC_CmdReset



void FUN_80088a74(int param_1)

{
  *(u8 *)(param_1 + 0x37) = 0x45;
  *(s32 *)(param_1 + 0x2c) = 0;
  *(u8 *)(param_1 + 0x36) = 0;
  return;
}
