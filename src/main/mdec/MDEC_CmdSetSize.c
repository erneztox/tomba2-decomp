/**
 * @brief Sends MDEC set size command (0x47)
 * @note Original: func_80088AC8 at 0x80088AC8
 */
// MDEC_CmdSetSize



void MDEC_CmdSetSize(int param_1,u8 param_2)

{
  param_1->state = 0x47;
  param_1->state = param_1 + 0x24;
  *(u8 *)(param_1 + 0x24) = param_2;
  param_1->state = 1;
  return;
}
