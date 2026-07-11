/**
 * @brief Audio command 2: calls FUN_80091970(param1, 0)
 * @note Original: func_80091AF0 at 0x80091AF0
 */
// Audio_Cmd2



void FUN_80091af0(s16 param_1)

{
  FUN_80091970((int)param_1,0);
  return;
}
