// FUN_80124108

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80124108(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    sVar3 = _DAT_800e7eb2 + -0x14;
    if (*(short *)(param_1 + 0x32) < _DAT_800e7eb2) {
      _DAT_800e7eb2 = *(undefined2 *)(param_1 + 0x32);
      if (sVar3 < *(short *)(param_1 + 0x32)) {
        FUN_8012d1e8();
        return;
      }
    }
    else {
      sVar3 = _DAT_800e7eb2;
      if (_DAT_800e7eb2 < *(short *)(param_1 + 0x32)) {
        sVar3 = _DAT_800e7eb2 + 0x14;
        if (*(short *)(param_1 + 0x32) < (short)(_DAT_800e7eb2 + 0x14)) {
          sVar3 = *(short *)(param_1 + 0x32);
        }
      }
    }
    _DAT_800e7eb2 = sVar3;
    _DAT_800e7eac = _DAT_800e7eac + (int)*(short *)(param_1 + 0x44) * (int)_DAT_800e7ec8;
    _DAT_800e7eb4 = _DAT_800e7eb4 + (int)*(short *)(param_1 + 0x44) * (int)_DAT_800e7ecc;
    func_0x8004766c(&DAT_800e7e80);
    func_0x80048750(&DAT_800e7e80);
    _DAT_800e7f38 = _DAT_800e7f38 - 0x80;
    _DAT_800e7f3a = _DAT_800e7f3a + -0x80;
    _DAT_800e7f3c = _DAT_800e7f3c + -0x80;
    if (_DAT_800e7f38 < 0x101) {
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      FUN_8012d2a8();
      return;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      FUN_8012d2a8();
      return;
    }
    if (*(char *)(param_1 + 0x29) != '\0') {
      *(undefined1 *)(param_1 + 5) = 1;
      sVar3 = func_0x80085690(-((int)(((uint)*(ushort *)(param_1 + 0x36) - (_DAT_800e7eb4 >> 0x10))
                                     * 0x10000) >> 0x10),
                              (int)(((uint)*(ushort *)(param_1 + 0x2e) - (_DAT_800e7eac >> 0x10)) *
                                   0x10000) >> 0x10);
      cVar2 = func_0x80077768((int)sVar3,(int)*(short *)(param_1 + 0x60),0);
      *(char *)(param_1 + 0x46) = cVar2;
      if (cVar2 == '\0') {
        *(undefined2 *)(param_1 + 0x44) = 0x800;
        FUN_8012d2a8();
        return;
      }
      *(undefined2 *)(param_1 + 0x44) = 0xf800;
      FUN_8012d2a8();
      return;
    }
  }
  else {
    if (bVar1 != 2) {
      FUN_8012d2a8();
      return;
    }
    *(undefined1 *)(param_1 + 5) = 3;
    DAT_1f800236 = 7;
    DAT_800bf839 = 1;
    _DAT_800bf83a = (ushort)*(byte *)(param_1 + 0xbf) << 4;
  }
  return;
}

