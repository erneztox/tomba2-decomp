/**
 * @brief Event register with code 1: calls CD_Dispatch04(1, callback)
 * @note Original: func_8009C8BC at 0x8009C8BC
 */
// Sys_RegisterEvent1



void Sys_RegisterEvent1(s32 param_1)

{
  CD_Dispatch04(1,param_1);
  return;
}
