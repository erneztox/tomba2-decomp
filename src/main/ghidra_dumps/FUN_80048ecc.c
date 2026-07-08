
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80048ecc(byte param_1)

{
  ushort *puVar1;
  
  DAT_1f8001fe = param_1;
  puVar1 = (ushort *)(_DAT_1f8001c8 + (uint)*(ushort *)((uint)param_1 * 2 + _DAT_1f8001c8) * 2);
  _DAT_1f8001b2 = *puVar1;
  _DAT_1f8001aa = puVar1[1];
  _DAT_1f8001b4 = puVar1[2];
  _DAT_1f8001b6 = _DAT_1f8001aa;
  _DAT_1f8001b8 = puVar1[3];
  _DAT_1f8001ba = puVar1[4];
  DAT_1f8001fc = (char)puVar1[5];
  DAT_1f8001fd = (char)(puVar1[5] >> 8);
  if (_DAT_1f8001aa < _DAT_1f8001b2) {
    _DAT_1f8001ae = _DAT_1f8001b2 - _DAT_1f8001aa;
  }
  else {
    _DAT_1f8001ae = _DAT_1f8001aa - _DAT_1f8001b2;
    _DAT_1f8001aa = _DAT_1f8001b2;
  }
  if (_DAT_1f8001b4 <= _DAT_1f8001b8) {
    _DAT_1f8001ac = _DAT_1f8001b4;
    _DAT_1f8001b0 = _DAT_1f8001b8 - _DAT_1f8001b4;
    return;
  }
  _DAT_1f8001ac = _DAT_1f8001b8;
  _DAT_1f8001b0 = _DAT_1f8001b4 - _DAT_1f8001b8;
  return;
}

