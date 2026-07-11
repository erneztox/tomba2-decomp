// FUN_08015628

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08015628(undefined4 param_1)

{
  undefined4 *puVar1;
  
  if (_DAT_80140e38 < 0x40) {
    _DAT_80140e38 = _DAT_80140e38 + 1;
    puVar1 = (undefined4 *)(_DAT_80140e3c + -4);
    _DAT_80140e3c = _DAT_80140e3c + -4;
    *puVar1 = param_1;
  }
  return;
}

