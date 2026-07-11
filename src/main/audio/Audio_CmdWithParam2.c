/**
 * @brief Audio command with param 2: sets struct + 8 flag, calls FUN_80098330
 * @note Original: func_80092A30 at 0x80092A30
 */
// Audio_CmdWithParam2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80092a30(s16 param_1)

{
  _DAT_80105c04 = (int)param_1;
  _DAT_80105bf8 = 8;
  FUN_80098330(&DAT_80105bf8);
  return;
}
