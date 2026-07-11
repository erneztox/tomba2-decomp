/**
 * @brief Entity input updater: DAT_800bf819--, clears input flags
 * @note Original: func_80059D28 at 0x80059D28
 */
// Entity_InputUpdate



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80059d28(void)

{
  if (DAT_800bf819 != '\0') {
    DAT_800bf819 = DAT_800bf819 + -1;
    _DAT_800ecf54 = _DAT_800ecf54 & 0xfff;
    _DAT_800e7e68 = _DAT_800e7e68 & 0xfff;
  }
  DAT_800e7ff7 = 0;
  DAT_800e7ff9 = 0;
  DAT_800e7ffa = 0;
  DAT_800e7ffb = 0;
  DAT_1f80027a = 0;
  DAT_1f800247 = DAT_1f800247 + '\x01';
  if (DAT_800bf841 != '\0') goto LAB_80059e40;
  if (DAT_800bf870 == 3) {
    func_0x80109024(&DAT_800e7e80);
  }
  else if (DAT_800bf870 < 4) {
    if (DAT_800bf870 == 2) {
      func_0x8010f63c(&DAT_800e7e80);
    }
    else {
LAB_80059e30:
      FUN_8005950c(&DAT_800e7e80);
    }
  }
  else if (DAT_800bf870 == 7) {
    func_0x80112220(&DAT_800e7e80);
  }
  else {
    if (DAT_800bf870 != 0x14) goto LAB_80059e30;
    func_0x8010f654(&DAT_800e7e80);
  }
  DAT_1f800230 = 0;
LAB_80059e40:
  _DAT_1f800160 = _DAT_800e7eae;
  _DAT_1f800162 = _DAT_800e7eb2;
  _DAT_1f800164 = _DAT_800e7eb6;
  _DAT_1f80016a = _DAT_800e7ed8;
  _DAT_1f800168 = _DAT_800e7ed6;
  if ((DAT_800bf9c3 & 0x80) != 0) {
    DAT_800bf81e = 1;
  }
  if ((DAT_1f800137 == '\0') && (DAT_800e8000 != '\0')) {
    DAT_800e8000 = DAT_800e8000 + -1;
  }
  FUN_8009a450();
  return;
}
