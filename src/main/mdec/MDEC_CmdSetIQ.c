/**
 * @brief Sends MDEC set IQ table command (0x4C)
 * @note Original: func_80088A88 at 0x80088A88
 */
// MDEC_CmdSetIQ



void FUN_80088a88(int param_1,u8 param_2)

{
  param_1->state = 0x4c;
  param_1->state = param_1 + 0x24;
  *(u8 *)(param_1 + 0x24) = param_2;
  param_1->state = 1;
  return;
}
