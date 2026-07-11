/**
 * @brief Event register with code 0: calls FUN_80085b80(0, callback)
 * @note Original: func_8009C898 at 0x8009C898
 */
// Sys_RegisterEvent0



void FUN_8009c898(s32 param_1)

{
  FUN_80085b80(0,param_1);
  return;
}
