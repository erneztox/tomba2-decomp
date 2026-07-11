/**
 * @brief Sends MDEC decode command (0x43) with data pointer
 * @note Original: func_80088A54 at 0x80088A54
 */
// MDEC_CmdDecode



void FUN_80088a54(int param_1,u8 param_2)

{
  *(u8 *)(param_1 + 0x37) = 0x43;
  *(int *)(param_1 + 0x2c) = param_1 + 0x24;
  *(u8 *)(param_1 + 0x24) = param_2;
  *(u8 *)(param_1 + 0x36) = 1;
  return;
}
