// FUN_8010b2f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010b2f4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_80111a00(param_1,param_2,*(undefined4 *)(param_2 + 200));
  if (iVar1 != 0) {
    _DAT_1f800080 = param_2;
    *(undefined1 *)(param_1 + 0x15c) = 0;
    *(undefined1 *)(param_1 + 0x164) = 1;
    FUN_80114308();
    return;
  }
  if (((*(ushort *)(param_2 + 0x60) & 2) != 0) &&
     (iVar1 = FUN_80111a00(param_1,param_2,*(undefined4 *)(param_2 + 0xcc)), iVar1 != 0)) {
    _DAT_1f800080 = param_2;
    *(undefined1 *)(param_1 + 0x15c) = 1;
    *(undefined1 *)(param_1 + 0x164) = 1;
    *(undefined1 *)(param_2 + 0x29) = 0x81;
  }
  return;
}

