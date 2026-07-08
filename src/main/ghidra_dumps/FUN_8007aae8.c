
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8007aae8(void)

{
  undefined4 uVar1;
  
  if (_DAT_800ed098 < 1) {
    return 0;
  }
  _DAT_800ed098 = _DAT_800ed098 + -1;
  uVar1 = *_DAT_800e7e74;
  _DAT_800e7e74 = _DAT_800e7e74 + 1;
  return uVar1;
}

