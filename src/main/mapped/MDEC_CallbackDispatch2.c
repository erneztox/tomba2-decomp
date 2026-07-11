/**
 * @brief MDEC callback variant 2: calls funct ptr + dispatch with 2 params via FUN_80088908
 * @note Original: func_80087E64 at 0x80087E64
 */
// MDEC_CallbackDispatch2



void FUN_80087e64(undefined4 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_800abe4c)();
  FUN_80088908(uVar1,param_2,param_3);
  return;
}
