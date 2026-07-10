// FUN_8004766c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8004766c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  short sVar3;
  
  _DAT_1f8001bc = *(short *)(param_1 + 0x2e);
  _DAT_1f8001be = *(undefined2 *)(param_1 + 0x32);
  _DAT_1f8001c0 = *(short *)(param_1 + 0x36);
  do {
    uVar1 = FUN_80047778(param_1);
    FUN_80049968(*(undefined1 *)(param_1 + 0x2a));
    iVar2 = FUN_80047cbc();
    if (iVar2 == 0) {
      return 0;
    }
  } while (((*_DAT_1f8001e0 & 0x4000) != 0) &&
          (*(char *)(param_1 + 0x2a) = (char)*_DAT_1f8001e0, (*_DAT_1f8001e0 & 0x4000) != 0));
  FUN_80048134();
  FUN_80048034();
  _DAT_1f8001bc = _DAT_1f8001bc + _DAT_1f8001c2;
  sVar3 = _DAT_1f8001c0 + _DAT_1f8001c6;
  _DAT_1f8001c0 = sVar3;
  *(short *)(param_1 + 0x2e) = _DAT_1f8001bc;
  *(short *)(param_1 + 0x36) = sVar3;
  return uVar1;
}

