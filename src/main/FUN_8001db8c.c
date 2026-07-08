
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_8001db8c(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_80052010(1);
  _DAT_1f8001f4 = param_3 + 3;
  if (_DAT_1f8001f4 < 0) {
    _DAT_1f8001f4 = param_3 + 6;
  }
  _DAT_1f8001f4 = _DAT_1f8001f4 >> 2;
  _DAT_1f8001f0 = param_2;
  _DAT_1f8001f8 = param_1;
  FUN_80051f14(1,FUN_8001db38);
  while (_DAT_801fe070 != 0) {
    FUN_80051f80(1);
  }
  return param_3;
}

