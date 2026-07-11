/**
 * @brief Audio param setter: stores value at 0x80105BF8, scales param to 0-0x7FFF range
 * @note Original: func_80092A70 at 0x80092A70
 */
// Audio_SetParam



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Audio_SetParam(s16 param_1,s16 param_2)

{
  _DAT_80105bf8 = 6;
  _DAT_80105c00 = (s16)((param_1 * 0x7fff) / 0x7f);
  _DAT_80105c02 = (s16)((param_2 * 0x7fff) / 0x7f);
  CD_Main();
  return;
}
