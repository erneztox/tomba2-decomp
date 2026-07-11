/**
 * @brief Audio command with param 2: sets struct + 8 flag, calls CD_Main
 * @note Original: func_80092A30 at 0x80092A30
 */
// Audio_CmdWithParam2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Audio_CmdWithParam2(s16 param_1)

{
  _DAT_80105c04 = (int)param_1;
  _DAT_80105bf8 = 8;
  CD_Main(&DAT_80105bf8);
  return;
}
