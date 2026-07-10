// FUN_8007b2c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007b2c0(int param_1)

{
  if (param_1 == 0) {
    _DAT_1f800170 = 0x8000;
    _DAT_1f800172 = 0x4000;
    _DAT_1f800174 = 0x2000;
    _DAT_1f800176 = 0x1000;
    return;
  }
  _DAT_1f800170 = 0x1000;
  _DAT_1f800172 = 0x2000;
  _DAT_1f800174 = 0x4000;
  _DAT_1f800176 = 0x8000;
  return;
}

