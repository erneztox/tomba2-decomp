/**
 * @brief MDEC status check variant: reads CD_GetReg, extracts status bits
 * @note Original: func_8009C85C at 0x8009C85C
 */
// MDEC_CheckStatus



uint FUN_8009c85c(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = FUN_8009cb80();
  }
  else {
    uVar1 = FUN_8009cc14();
    uVar1 = uVar1 >> 0x18 & 1;
  }
  return uVar1;
}
