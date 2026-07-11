/**
 * @brief CD command wrapper 1: calls FUN_80096590 with callback FUN_800964b4
 * @note Original: func_80096480 at 0x80096480
 */
// CD_Cmd1



int FUN_80096480(undefined4 param_1,short param_2)

{
  short sVar1;
  
  sVar1 = FUN_80096590(param_1,(int)param_2,FUN_800964b4,0);
  return (int)sVar1;
}
