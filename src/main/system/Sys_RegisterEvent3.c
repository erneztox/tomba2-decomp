/**
 * @brief Event register with code 3: calls CD_Dispatch04(3, callback)
 * @note Original: func_8009D06C at 0x8009D06C
 */
// Sys_RegisterEvent3



void Sys_RegisterEvent3(s32 param_1)

{
  CD_Dispatch04(3,param_1);
  return;
}
