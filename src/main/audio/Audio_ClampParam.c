/**
 * @brief Audio param clamp: clamps DAT_80105d09 to 0x7F, multiplies by 0x81
 * @note Original: func_800943C0 at 0x800943C0
 */
// Audio_ClampParam



s16 Audio_ClampParam(void)

{
  s16 uVar1;
  u8 bVar2;
  
  bVar2 = DAT_80105d09;
  if (0x7f < DAT_80105d09) {
    bVar2 = 0x7f;
  }
  uVar1 = Audio_ADSRCalc((int)DAT_80105cfa,0,DAT_80105d08,bVar2);
  return uVar1;
}
