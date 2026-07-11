/**
 * @brief CD flag clearer: DAT_80105cd8 = 0
 * @note Original: func_80096390 at 0x80096390
 */
// CD_ClearFlagCD8



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CD_ClearFlagCD8(void)

{
  _DAT_80105cd8 = 0;
  return;
}
