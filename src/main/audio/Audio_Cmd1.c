/**
 * @brief Audio command 1: calls FUN_80091970(param1, param2)
 * @note Original: func_80091B18 at 0x80091B18
 */
// Audio_Cmd1



void FUN_80091b18(s16 param_1,s16 param_2)

{
  FUN_80091970((int)param_1,(int)param_2);
  return;
}
