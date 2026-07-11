/**
 * @brief Audio command wrapper: calls FUN_80091120(param1, param2)
 * @note Original: func_800910F0 at 0x800910F0
 */
// Audio_Cmd4



void FUN_800910f0(short param_1,short param_2)

{
  FUN_80091120((int)param_1,(int)param_2);
  return;
}
