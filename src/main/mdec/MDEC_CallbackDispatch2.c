/**
 * @brief MDEC callback variant 2: calls funct ptr + dispatch with 2 params via MDEC_SetupCallback2
 * @note Original: func_80087E64 at 0x80087E64
 */
// MDEC_CallbackDispatch2



void MDEC_CallbackDispatch2(s32 param_1,u8 param_2,u8 param_3)

{
  s32 uVar1;
  
  uVar1 = (*DAT_800abe4c)();
  MDEC_SetupCallback2(uVar1,param_2,param_3);
  return;
}
