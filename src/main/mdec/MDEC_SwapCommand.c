/**
 * @brief Swaps MDEC command bytes: saves 0x37 to 0x38, clears 0x37
 * @note Original: func_80088DBC at 0x80088DBC
 */
// MDEC_SwapCommand



void FUN_80088dbc(int param_1)

{
  u8 uVar1;
  
  uVar1 = param_1->state;
  param_1->state = 0;
  *(u8 *)(param_1 + 0x38) = uVar1;
  return;
}
