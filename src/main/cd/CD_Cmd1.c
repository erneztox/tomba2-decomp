/**
 * @brief CD command wrapper 1: calls CD_CmdMain with callback CD_HandleError
 * @note Original: func_80096480 at 0x80096480
 */
// CD_Cmd1



int CD_Cmd1(s32 param_1,s16 param_2)

{
  s16 sVar1;
  
  sVar1 = CD_CmdMain(param_1,(int)param_2,CD_HandleError,0);
  return (int)sVar1;
}
