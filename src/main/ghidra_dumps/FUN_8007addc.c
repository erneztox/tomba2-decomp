
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007addc(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)*(byte *)(param_1 + 9);
  if (uVar2 != 0) {
    iVar3 = uVar2 * 4 + param_1;
    do {
      uVar2 = uVar2 - 1;
      _DAT_800ed098 = _DAT_800ed098 + 1;
      puVar1 = (undefined4 *)(_DAT_800e7e74 + -4);
      _DAT_800e7e74 = _DAT_800e7e74 + -4;
      *puVar1 = *(undefined4 *)(iVar3 + 0xbc);
      iVar3 = iVar3 + -4;
    } while (uVar2 != 0);
  }
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}

