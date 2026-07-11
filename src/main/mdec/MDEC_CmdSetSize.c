/**
 * @brief Sends MDEC set size command (0x47)
 * @note Original: func_80088AC8 at 0x80088AC8
 */
// MDEC_CmdSetSize



void FUN_80088ac8(int param_1,u8 param_2)

{
  *(u8 *)(param_1 + 0x37) = 0x47;
  *(int *)(param_1 + 0x2c) = param_1 + 0x24;
  *(u8 *)(param_1 + 0x24) = param_2;
  *(u8 *)(param_1 + 0x36) = 1;
  return;
}
