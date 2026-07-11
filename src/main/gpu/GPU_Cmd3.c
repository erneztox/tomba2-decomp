/**
 * @brief GPU command wrapper: calls FUN_80082d04 with third param=0
 * @note Original: func_80082CE0 at 0x80082CE0
 */
// GPU_Cmd3



void FUN_80082ce0(s32 param_1,s32 param_2,s32 param_3)

{
  FUN_80082d04(param_1,param_2,0,param_3);
  return;
}
