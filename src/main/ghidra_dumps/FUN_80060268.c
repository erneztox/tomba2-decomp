
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_80060268(int param_1)

{
  byte bVar1;
  byte bVar2;
  
  if ((_DAT_800ecf54 & 0x10) == 0) {
    if ((_DAT_800ecf54 & 0xa0) != 0) {
      if ((*(byte *)(param_1 + 0x5f) != 0) &&
         (*(byte *)(param_1 + 0x147) == (*(byte *)(param_1 + 0x5f) & 1))) {
        return 0;
      }
      if (*(byte *)(param_1 + 0x147) == (*(byte *)(param_1 + 0x14a) & 1)) {
        _DAT_1f800238 = _DAT_1f800238 + 1;
        if (5 < _DAT_1f800238) {
          *(undefined1 *)(param_1 + 0x169) = 1;
        }
        bVar1 = *(byte *)(param_1 + 0x169);
        bVar2 = 1;
      }
      else {
        _DAT_1f800238 = 0;
        bVar1 = *(byte *)(param_1 + 0x169);
        bVar2 = 2;
      }
      *(byte *)(param_1 + 0x169) = bVar1 | bVar2;
      return bVar2;
    }
  }
  else {
    *(byte *)(param_1 + 0x169) = *(byte *)(param_1 + 0x169) | 2;
  }
  return 0;
}

