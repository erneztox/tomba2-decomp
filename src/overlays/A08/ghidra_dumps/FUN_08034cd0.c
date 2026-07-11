// FUN_08034cd0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08034cd0(void)

{
  int iVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  short unaff_s1;
  
  bVar2 = true;
  uVar3 = func_0x00048360();
  iVar4 = 0;
  _DAT_1f8001ec = (ushort *)(_DAT_1f8001d8 + (uint)_DAT_1f8001e0[1] * 8);
  if (_DAT_1f8001e0[2] != 0) {
    iVar5 = (int)(short)(uVar3 ^ 0x3f);
    do {
      if (((*_DAT_1f8001ec & 1) != 0) && ((*_DAT_1f8001ec & 0xf00) == 0x100)) {
        if ((*_DAT_1f8001e0 & 8) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar1 = (int)(short)_DAT_1f8001ec[2] * ((int)_DAT_1f8001c2 - (int)(short)uVar3);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && (iVar1 == -0x80000000)) {
          trap(0x1800);
        }
        _DAT_1f8001a4 = _DAT_1f8001ec[1] + (short)(iVar1 / iVar5);
        if (_DAT_1f8001a4 + 300 < (int)_DAT_1f8001be) {
          if (!bVar2) {
            _DAT_1f8001a4 = unaff_s1;
            halt_baddata();
          }
          _DAT_1f8001a6 = *_DAT_1f8001ec;
          _DAT_1f8001e8 = _DAT_1f8001dc + (uint)_DAT_1f8001ec[3] * 3;
          halt_baddata();
        }
        bVar2 = false;
        _DAT_1f8001a6 = *_DAT_1f8001ec;
        _DAT_1f8001e8 = _DAT_1f8001dc + (uint)_DAT_1f8001ec[3] * 3;
        unaff_s1 = _DAT_1f8001a4;
      }
      iVar4 = iVar4 + 1;
      _DAT_1f8001ec = _DAT_1f8001ec + 4;
    } while (iVar4 < (int)(uint)_DAT_1f8001e0[2]);
  }
  if (!bVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_1f8001a6 = 0;
  _DAT_1f8001a4 = 0;
  return 0;
}

