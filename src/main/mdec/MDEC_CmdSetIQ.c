/**
 * @brief Sends MDEC set IQ table command (0x4C)
 * @note Original: func_80088A88 at 0x80088A88
 */
// MDEC_CmdSetIQ



void FUN_80088a88(int param_1,u8 param_2)

{
  *(u8 *)(param_1 + 0x37) = 0x4c;
  *(int *)(param_1 + 0x2c) = param_1 + 0x24;
  *(u8 *)(param_1 + 0x24) = param_2;
  *(u8 *)(param_1 + 0x36) = 1;
  return;
}
