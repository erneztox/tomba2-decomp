/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_800147A4 at 0x800147A4
 */
// Sys_CheckSign



uint Sys_CheckSign(void)

{
  uint uVar1;
  
  uVar1 = (**(code **)(DAT_8002550c + 0x38))();
  return uVar1 >> 0x1f;
}
