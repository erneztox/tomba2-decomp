// FUN_8004798c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8004798c(int param_1)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0x2a) != DAT_1f8001fe) {
    FUN_80048ecc(*(char *)(param_1 + 0x2a));
  }
  if (_DAT_1f8001ae < _DAT_1f8001b0) {
    bVar1 = _DAT_1f8001b0 < (ushort)(_DAT_1f8001c0 - _DAT_1f8001ac);
  }
  else {
    bVar1 = _DAT_1f8001ae < (ushort)(_DAT_1f8001bc - _DAT_1f8001aa);
  }
  if (bVar1) {
    FUN_80048fc4(param_1,1);
  }
  if (_DAT_1f8001ae < _DAT_1f8001b0) {
    if ((int)_DAT_1f8001c0 < (int)_DAT_1f8001ac) {
      _DAT_1f8001c0 = _DAT_1f8001ac;
    }
    else if ((int)((int)_DAT_1f8001ac + (uint)_DAT_1f8001b0) < (int)_DAT_1f8001c0) {
      _DAT_1f8001c0 = _DAT_1f8001ac + _DAT_1f8001b0;
    }
    _DAT_1f8001bc =
         _DAT_1f8001b2 +
         (short)((int)(((int)_DAT_1f8001c0 - (uint)_DAT_1f8001b4) * (int)_DAT_1f8001ba) >> 0xe);
  }
  else {
    if ((int)_DAT_1f8001bc < (int)_DAT_1f8001aa) {
      _DAT_1f8001bc = _DAT_1f8001aa;
    }
    else if ((int)((int)_DAT_1f8001aa + (uint)_DAT_1f8001ae) < (int)_DAT_1f8001bc) {
      _DAT_1f8001bc = _DAT_1f8001aa + _DAT_1f8001ae;
    }
    _DAT_1f8001c0 =
         _DAT_1f8001b4 +
         (short)((int)(((int)_DAT_1f8001bc - (uint)_DAT_1f8001b2) * (int)_DAT_1f8001ba) >> 0xe);
  }
  return;
}

