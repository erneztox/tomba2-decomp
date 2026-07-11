/**
 * @brief MDEC flag get+clear: returns DAT_800abea0 then sets to 0
 * @note Original: func_8008695C at 0x8008695C
 */
// MDEC_GetAndClearFlag



s32 FUN_8008695c(void)

{
  s32 uVar1;
  
  uVar1 = DAT_800abea0;
  DAT_800abea0 = 0;
  return uVar1;
}
