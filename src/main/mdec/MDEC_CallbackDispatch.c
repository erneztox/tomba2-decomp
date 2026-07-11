/**
 * @brief MDEC callback: calls function ptr at 0x800ABE4C, dispatches result via FUN_800887bc
 * @note Original: func_80087E2C at 0x80087E2C
 */
// MDEC_CallbackDispatch



void FUN_80087e2c(s32 param_1,s32 param_2)

{
  s32 uVar1;
  
  uVar1 = (*DAT_800abe4c)();
  FUN_800887bc(uVar1,param_2);
  return;
}
