// FUN_80077ebc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80077ebc(undefined4 param_1)

{
  undefined4 *puVar1;
  
  if (_DAT_1f800150 < 0x28) {
    _DAT_1f800150 = _DAT_1f800150 + 1;
    puVar1 = (undefined4 *)(_DAT_1f800148 + -4);
    _DAT_1f800148 = _DAT_1f800148 + -4;
    *puVar1 = param_1;
  }
  return;
}

