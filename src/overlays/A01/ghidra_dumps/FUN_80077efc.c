// FUN_80077efc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80077efc(undefined4 param_1)

{
  undefined4 *puVar1;
  
  if (_DAT_1f80015c < 0x1c) {
    _DAT_1f80015c = _DAT_1f80015c + 1;
    puVar1 = (undefined4 *)(_DAT_1f800154 + -4);
    _DAT_1f800154 = _DAT_1f800154 + -4;
    *puVar1 = param_1;
  }
  return;
}

