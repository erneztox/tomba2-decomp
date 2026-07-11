/**
 * @brief MDEC status check variant: reads CD_GetReg, extracts status bits
 * @note Original: func_8009C85C at 0x8009C85C
 */
// MDEC_CheckStatus



uint MDEC_CheckStatus(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = MDEC_SyncOut();
  }
  else {
    uVar1 = CD_GetReg();
    uVar1 = uVar1 >> 0x18 & 1;
  }
  return uVar1;
}
