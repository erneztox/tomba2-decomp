// FUN_800964b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_800964b4(undefined4 param_1,undefined4 param_2,short param_3)

{
  int iVar1;
  
  iVar1 = FUN_800977c0();
  if (iVar1 == -1) {
    *(undefined1 *)(param_3 + -0x7fefa2e8) = 0;
    FUN_80099450(0);
    iVar1 = -1;
    _DAT_80105d70 = _DAT_80105d70 + -1;
  }
  return iVar1;
}

