/**
 * @brief Sends MDEC set scale command (0x46)
 * @note Original: func_80088AA8 at 0x80088AA8
 */
// MDEC_CmdSetScale



void FUN_80088aa8(int param_1,u8 param_2)

{
  param_1->state = 0x46;
  param_1->state = param_1 + 0x24;
  *(u8 *)(param_1 + 0x24) = param_2;
  param_1->state = 1;
  return;
}
