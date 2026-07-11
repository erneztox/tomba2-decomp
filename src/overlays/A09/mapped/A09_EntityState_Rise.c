// A09_EntityState_Rise - Entity rise/jump state: Y velocity, camera pos

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A09_EntityState_Rise(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    sVar3 = _DAT_800e7eb2 + -0x14;
    if (*(short *)(param_1 + 0x32) < _DAT_800e7eb2) {
      _DAT_800e7eb2 = sVar3;
      if (sVar3 < *(short *)(param_1 + 0x32)) {
        _DAT_800e7eb2 = *(undefined2 *)(param_1 + 0x32);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      sVar3 = _DAT_800e7eb2 + 0x14;
      if ((_DAT_800e7eb2 < *(short *)(param_1 + 0x32)) &&
         (_DAT_800e7eb2 = sVar3, *(short *)(param_1 + 0x32) < sVar3)) {
        _DAT_800e7eb2 = *(short *)(param_1 + 0x32);
      }
    }
    _DAT_800e7eac = _DAT_800e7eac + (int)*(short *)(param_1 + 0x44) * (int)_DAT_800e7ec8;
    _DAT_800e7eb4 = _DAT_800e7eb4 + (int)*(short *)(param_1 + 0x44) * (int)_DAT_800e7ecc;
    func_0x0004766c(&DAT_800e7e80);
    func_0x00048750(&DAT_800e7e80);
    _DAT_800e7f38 = _DAT_800e7f38 - 0x80;
    _DAT_800e7f3a = _DAT_800e7f3a + -0x80;
    _DAT_800e7f3c = _DAT_800e7f3c + -0x80;
    if (0x100 < _DAT_800e7f38) {
      return;
    }
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(char *)(param_1 + 0x29) == '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 5) = 1;
      sVar3 = func_0x00085690(-((int)(((uint)*(ushort *)(param_1 + 0x36) - (_DAT_800e7eb4 >> 0x10))
                                     * 0x10000) >> 0x10),
                              (int)(((uint)*(ushort *)(param_1 + 0x2e) - (_DAT_800e7eac >> 0x10)) *
                                   0x10000) >> 0x10);
      cVar2 = func_0x00077768((int)sVar3,(int)*(short *)(param_1 + 0x60),0);
      *(char *)(param_1 + 0x46) = cVar2;
      if (cVar2 == '\0') {
        *(undefined2 *)(param_1 + 0x44) = 0x800;
      }
      else {
        *(undefined2 *)(param_1 + 0x44) = 0xf800;
      }
    }
  }
  else if (bVar1 == 2) {
    *(undefined1 *)(param_1 + 5) = 3;
    DAT_1f800236 = 7;
    DAT_800bf839 = 1;
    _DAT_800bf83a = (ushort)*(byte *)(param_1 + 0xbf) << 4;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

