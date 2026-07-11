// FUN_08017afc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08017afc(undefined4 param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  if (_DAT_800bfa26 < 999) {
    uVar2 = _DAT_800bfa26 + 1;
    uVar1 = _DAT_800bfa26 + 1;
    _DAT_800bfa26 = uVar2;
    if (_DAT_800bfa24 < uVar1) {
      _DAT_800bf854 = 1;
      _DAT_800bfa24 = uVar2;
    }
  }
  func_0x001133c4(param_1,_DAT_800bfa26);
  return;
}

