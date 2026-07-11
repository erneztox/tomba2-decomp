/**
 * @brief MDEC command 1: calls FUN_8008dc00 with param
 * @note Original: func_8008DDA0 at 0x8008DDA0
 */
// MDEC_Cmd1



void FUN_8008dda0(s16 param_1)

{
  FUN_8008dc00((int)param_1);
  return;
}
