
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80077e7c(undefined4 param_1)

{
  undefined4 *puVar1;
  
  if (_DAT_1f800144 < 0x18) {
    _DAT_1f800144 = _DAT_1f800144 + 1;
    puVar1 = (undefined4 *)(_DAT_1f80013c + -4);
    _DAT_1f80013c = _DAT_1f80013c + -4;
    *puVar1 = param_1;
  }
  return;
}

