// FUN_08047898

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08047898(void)

{
  DAT_800bf4d4 = 2;
  DAT_800bf4df = 0;
  DAT_800bf4dd = 0;
  DAT_800bf4dc = 0;
  DAT_800bf4de = 0xff;
  DAT_800bf4d5 = 0;
  DAT_800bf4d7 = 100;
  DAT_800bf4d8 = 0;
  DAT_800bf4d9 = 0xff;
  DAT_800bf49b = 0;
  DAT_800bf49a = 0;
  DAT_800bf499 = 0;
  DAT_800bf498 = 100;
  _DAT_800bf4ac = 0x800d3267;
  _DAT_800bf4a8 = &DAT_800e7cd5;
  _DAT_800bf4a0 = 0;
  _DAT_800bf4a4 = &DAT_800e7d9e;
  DAT_800e7d9e = 0;
  DAT_800e7cd5 = 0;
  _DAT_800bf4b0 = -2;
  _DAT_800bf4b2 = -2;
  DAT_800bf4eb = 0;
  DAT_800bf4f3 = 0xff;
  func_0x0001cba8(&DAT_800bf498,0);
  func_0x0001cba8(&DAT_800bf498,1);
  *(undefined2 *)(_DAT_1f800138 + 0x50) = 1;
  if (_DAT_800bf4b0 != 0x30) {
    func_0x0009a5b0(_DAT_800bf4a4,_DAT_800a2914);
    _DAT_800bf4b0 = 0x30;
  }
  if (_DAT_800bf4b2 != -1) {
    *_DAT_800bf4a8 = 0;
    _DAT_800bf4b2 = -1;
  }
  return;
}

