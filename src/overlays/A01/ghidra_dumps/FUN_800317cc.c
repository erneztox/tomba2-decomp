// FUN_800317cc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_800317cc(short param_1)

{
  copFunction(2,0x180001);
  _DAT_1f800080 = getCopControlWord(2,0xf800);
  if (-1 < _DAT_1f800080) {
    _DAT_1f800080 = getCopReg(2,0x13);
    if (0 < _DAT_1f800080) {
      _DAT_1f800080 = (_DAT_1f800080 >> 2) + (int)param_1;
      if (_DAT_1f800080 < 4) {
        _DAT_1f800080 = 4;
      }
      _DAT_1f800080 =
           (_DAT_1f800080 >> (_DAT_1f800080 >> 10 & 0x1fU)) + (_DAT_1f800080 >> 10) * 0x200;
      if (0x7fb < _DAT_1f800080 - 4U) {
        _DAT_1f800080 = -1;
      }
      if (-1 < _DAT_1f800080) {
        _DAT_1f80008c = getCopReg(2,0xe);
        _DAT_1f800084 = getCopReg(2,0x18);
        return 0;
      }
      return 1;
    }
  }
  return 1;
}

