// FUN_801077ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_801077ec(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(char *)(param_2 + 2) == '\x19') {
    return (uint)*(byte *)(param_2 + 0xbf);
  }
  uVar1 = (uint)*(byte *)(param_2 + 0x5e);
  if (uVar1 == 0) {
    iVar2 = func_0x8002300c(param_1,param_2,*(short *)(param_2 + 0x80) + 400);
    uVar1 = 0x1f800000;
    if (iVar2 != 0) {
      uVar1 = 0x1f800000;
      if (_DAT_1f80008c < _DAT_1f800084) {
        _DAT_1f800084 = _DAT_1f80008c;
        _DAT_1f800080 = param_2;
      }
    }
  }
  return uVar1;
}

