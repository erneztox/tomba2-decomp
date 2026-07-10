// FUN_800929bc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_800929bc(ushort param_1)

{
  undefined4 uVar1;
  
  if (_DAT_80104c24 == 1) {
    uVar1 = 0xffffffff;
  }
  else {
    _DAT_80104c24 = 1;
    uVar1 = 0xffffffff;
    if (param_1 < 0x18) {
      _DAT_80105d10 = param_1;
      FUN_80094b50(0);
      uVar1 = 0;
      _DAT_80104c24 = 0;
    }
    else {
      _DAT_80104c24 = 0;
    }
  }
  return uVar1;
}

