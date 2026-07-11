/**
 * @brief MDEC command 2: calls FUN_8008dc00 with param (same as Cmd1)
 * @note Original: func_8008DD7C at 0x8008DD7C
 */
// MDEC_Cmd2



void FUN_8008dd7c(short param_1)

{
  FUN_8008dc00((int)param_1);
  return;
}
