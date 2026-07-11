/**
 * @brief Sends MDEC decode command (0x43) with data pointer
 * @note Original: func_80088A54 at 0x80088A54
 */
// MDEC_CmdDecode



void MDEC_CmdDecode(int param_1,u8 param_2)

{
  param_1->state = 0x43;
  param_1->state = param_1 + 0x24;
  *(u8 *)(param_1 + 0x24) = param_2;
  param_1->state = 1;
  return;
}
