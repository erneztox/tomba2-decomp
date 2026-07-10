// FUN_80048b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_80048b30(void)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  short unaff_s1;
  
  bVar3 = true;
  uVar4 = FUN_80048360();
  iVar5 = 0;
  _DAT_1f8001ec = (ushort *)(_DAT_1f8001d8 + (uint)_DAT_1f8001e0[1] * 8);
  if (_DAT_1f8001e0[2] != 0) {
    iVar6 = (int)(short)(uVar4 ^ 0x3f);
    do {
      if ((*_DAT_1f8001ec & 1) != 0) {
        if ((*_DAT_1f8001e0 & 8) == 0) {
          iVar2 = (int)(short)_DAT_1f8001ec[2] * ((int)_DAT_1f8001c2 - (int)(short)uVar4);
          _DAT_1f8001a4 = (short)(iVar2 / iVar6);
          if (iVar6 == 0) {
            trap(0x1c00);
          }
          if ((iVar6 == -1) && (iVar2 == -0x80000000)) {
            trap(0x1800);
          }
          uVar1 = _DAT_1f8001ec[1];
        }
        else {
          uVar1 = _DAT_1f8001ec[1];
          _DAT_1f8001a4 = (short)((int)(short)_DAT_1f8001ec[2] * (int)_DAT_1f8001c2 >> 6);
        }
        _DAT_1f8001a4 = uVar1 + _DAT_1f8001a4;
        if (_DAT_1f8001a4 + 0x80 < (int)_DAT_1f8001be) {
          if (bVar3) {
            _DAT_1f8001a6 = *_DAT_1f8001ec;
            _DAT_1f8001e8 = _DAT_1f8001dc + (uint)_DAT_1f8001ec[3] * 3;
            return true;
          }
          _DAT_1f8001a4 = unaff_s1;
          return true;
        }
        bVar3 = false;
        _DAT_1f8001a6 = *_DAT_1f8001ec;
        _DAT_1f8001e8 = _DAT_1f8001dc + (uint)_DAT_1f8001ec[3] * 3;
        unaff_s1 = _DAT_1f8001a4;
      }
      iVar5 = iVar5 + 1;
      _DAT_1f8001ec = _DAT_1f8001ec + 4;
    } while (iVar5 < (int)(uint)_DAT_1f8001e0[2]);
  }
  if (bVar3) {
    _DAT_1f8001a6 = 0;
    _DAT_1f8001a4 = 0;
  }
  return !bVar3;
}

