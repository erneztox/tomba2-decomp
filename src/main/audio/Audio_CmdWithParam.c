/**
 * @brief Audio command with param: sets struct + 0x10 flag, calls CD_Main
 * @note Original: func_80092BB0 at 0x80092BB0
 */
// Audio_CmdWithParam



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Audio_CmdWithParam(s16 param_1)

{
  _DAT_80105c08 = (int)param_1;
  _DAT_80105bf8 = 0x10;
  CD_Main(&DAT_80105bf8);
  return;
}
