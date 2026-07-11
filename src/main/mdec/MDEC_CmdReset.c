/**
 * @brief Sends MDEC reset command (0x45), clears pointer
 * @note Original: func_80088A74 at 0x80088A74
 */
// MDEC_CmdReset



void MDEC_CmdReset(int param_1)

{
  param_1->state = 0x45;
  param_1->state = 0;
  param_1->state = 0;
  return;
}
