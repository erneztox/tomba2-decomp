// FUN_8001d7c4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8001d7c4(char param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_20 [16];
  
  bVar1 = false;
  if ((param_1 == '\x01') && ((*param_2 & 0x20) != 0)) {
    iVar2 = FUN_80089fec(1);
    if (iVar2 == 0) {
      FUN_80089f88(auStack_20,3);
      iVar2 = FUN_8008a110(auStack_20);
      if (iVar2 == DAT_800be0e0 + 1) {
        DAT_800be0e0 = iVar2;
        if (_DAT_1f8001f4 < 0x200) {
          if (0 < _DAT_1f8001f4) {
            bVar1 = true;
            FUN_80089f88(_DAT_1f8001f8,_DAT_1f8001f4);
            iVar2 = _DAT_1f8001f4;
            _DAT_1f8001f4 = 0;
            _DAT_1f8001f8 = _DAT_1f8001f8 + iVar2 * 4;
          }
        }
        else {
          FUN_80089f88(_DAT_1f8001f8,0x200);
          _DAT_1f8001f4 = _DAT_1f8001f4 + -0x200;
          _DAT_1f8001f8 = _DAT_1f8001f8 + 0x800;
          if (_DAT_1f8001f4 == 0) {
            bVar1 = true;
          }
        }
      }
      else {
        bVar1 = true;
        DAT_800be0ea = DAT_800be0ea | 2;
      }
    }
    else {
      bVar1 = true;
      DAT_800be0e6 = DAT_800be0e6 + 1;
    }
  }
  else {
    bVar1 = true;
    DAT_800be0e8 = DAT_800be0e8 + 1;
  }
  if (bVar1) {
    FUN_80089b98(0);
    FUN_80089ce8(9,0);
  }
  return;
}

