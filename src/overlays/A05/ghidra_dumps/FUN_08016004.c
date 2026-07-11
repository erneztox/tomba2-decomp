// FUN_08016004

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08016004(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  if ((*(char *)(param_2 + 0x5e) == '\0') &&
     (iVar3 = func_0x00024338(), iVar2 = _DAT_1f80008c, iVar3 != 0)) {
    *(undefined1 *)(param_2 + 0x29) = 1;
    *(char *)(param_2 + 0x2b) = (char)(iVar2 + 0x800 >> 4);
    *(undefined2 *)(param_1 + 0x156) = 0xffe5;
    sVar1 = *(short *)(param_2 + 0x80);
    *(undefined1 *)(param_1 + 0x164) = 1;
    *(undefined1 *)(param_1 + 0x15c) = 0;
    DAT_1f800182 = 0;
    _DAT_1f800080 = param_2;
    *(short *)(param_1 + 0x152) = sVar1 + *(short *)(param_1 + 0x80) + -0xc;
  }
  return;
}

