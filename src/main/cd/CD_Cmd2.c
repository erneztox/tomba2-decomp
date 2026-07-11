/**
 * @brief CD command wrapper 2: calls FUN_80096590 with callback LAB_80096588 + param
 * @note Original: func_80096520 at 0x80096520
 */
// CD_Cmd2



int FUN_80096520(s32 param_1,s16 param_2,s32 param_3)

{
  s16 sVar1;
  
  sVar1 = FUN_80096590(param_1,(int)param_2,&LAB_80096588,param_3);
  return (int)sVar1;
}
