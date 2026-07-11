/**
 * @brief Audio volume clamp: negative→abs, positive→clamp to 0x7FFF
 * @note Original: func_80075CEC at 0x80075CEC
 */
// Audio_ClampVolume



void FUN_80075cec(int param_1)

{
  if (param_1 < 0) {
    DAT_800be222 = -(short)param_1;
    DAT_800be224 = -(short)param_1;
    return;
  }
  if (0x7fff < param_1) {
    param_1 = 0x7fff;
  }
  DAT_800be222 = (short)param_1;
  return;
}
