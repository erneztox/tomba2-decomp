/**
 * @brief Event register with code 0: calls CD_Dispatch04(0, callback)
 * @note Original: func_8009C898 at 0x8009C898
 */
// Sys_RegisterEvent0



void Sys_RegisterEvent0(s32 param_1)

{
  CD_Dispatch04(0,param_1);
  return;
}
