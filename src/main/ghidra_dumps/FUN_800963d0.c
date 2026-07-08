
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800963d0(ushort param_1)

{
  int iVar1;
  
  if (param_1 < 0x10) {
    iVar1 = (int)(short)param_1;
    if ((*(byte *)(iVar1 + -0x7fefa2e8) < 3) && (*(byte *)(iVar1 + -0x7fefa2e8) != 0)) {
      FUN_80097d90(*(undefined4 *)(iVar1 * 4 + -0x7fefa288));
      *(undefined1 *)(iVar1 + -0x7fefa2e8) = 0;
      _DAT_80105d70 = _DAT_80105d70 + -1;
      iVar1 = FUN_80099478();
      if (iVar1 == 1) {
        FUN_80099450(0);
      }
    }
  }
  return;
}

