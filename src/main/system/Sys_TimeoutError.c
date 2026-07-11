/**
 * @brief Timeout error handler: prints '%s timeout', resets CD state regs at 0x800AD098
 * @note Original: func_8009CC2C at 0x8009CC2C
 */
// Sys_TimeoutError



s32 Sys_TimeoutError(s32 param_1)

{
  Debug_Printf(s__s_timeout__8001caac,param_1);
  *g_CD_Status = 0x80000000;
  *g_CD_IRQ = 0;
  *g_CD_Control = 0;
  *g_CD_Status = 0x60000000;
  return 0;
}
