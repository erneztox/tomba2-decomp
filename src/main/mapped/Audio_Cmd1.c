/**
 * @brief Audio command 1: calls FUN_80091970(param1, param2)
 * @note Original: func_80091B18 at 0x80091B18
 */
// Audio_Cmd1



void FUN_80091b18(short param_1,short param_2)

{
  FUN_80091970((int)param_1,(int)param_2);
  return;
}
