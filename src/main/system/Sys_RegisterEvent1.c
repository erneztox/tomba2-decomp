/**
 * @brief Event register with code 1: calls FUN_80085b80(1, callback)
 * @note Original: func_8009C8BC at 0x8009C8BC
 */
// Sys_RegisterEvent1



void FUN_8009c8bc(s32 param_1)

{
  FUN_80085b80(1,param_1);
  return;
}
