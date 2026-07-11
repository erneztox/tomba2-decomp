/**
 * @brief CD command wrapper 3: calls FUN_80096590 with callback LAB_80096588 + param
 * @note Original: func_80096554 at 0x80096554
 */
// CD_Cmd3



int FUN_80096554(s32 param_1,s16 param_2,s32 param_3)

{
  s16 sVar1;
  
  sVar1 = FUN_80096590(param_1,(int)param_2,&LAB_80096588,param_3);
  return (int)sVar1;
}
