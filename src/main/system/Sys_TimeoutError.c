/**
 * @brief Timeout error handler: prints '%s timeout', resets CD state regs at 0x800AD098
 * @note Original: func_8009CC2C at 0x8009CC2C
 */
// Sys_TimeoutError



undefined4 FUN_8009cc2c(undefined4 param_1)

{
  FUN_8009a730(s__s_timeout__8001caac,param_1);
  *DAT_800ad098 = 0x80000000;
  *DAT_800ad06c = 0;
  *DAT_800ad078 = 0;
  *DAT_800ad098 = 0x60000000;
  return 0;
}
