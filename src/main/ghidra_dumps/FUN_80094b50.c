
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80094b50(void)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  
  uVar2 = (uint)_DAT_80105d10;
  if (uVar2 < 0x10) {
    uVar4 = (ushort)(1 << (uVar2 & 0x1f));
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = (ushort)(1 << (uVar2 - 0x10 & 0x1f));
  }
  iVar1 = uVar2 * 0x38;
  (&DAT_801054e5)[iVar1] = 0;
  *(undefined2 *)(iVar1 + -0x7fefab34) = 0;
  *(undefined2 *)(iVar1 + -0x7fefab38) = 0;
  _DAT_80105bf0 = _DAT_80105bf0 | uVar4;
  _DAT_801054b8 = _DAT_801054b8 & ~_DAT_80105bf0;
  _DAT_80105bf2 = _DAT_80105bf2 | uVar3;
  _DAT_801054ba = _DAT_801054ba & ~_DAT_80105bf2;
  return;
}

