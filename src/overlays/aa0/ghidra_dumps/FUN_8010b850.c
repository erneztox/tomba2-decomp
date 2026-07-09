// FUN_8010b850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010b850(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = func_0x80024bd8(param_1,param_2,*(undefined4 *)(param_2 + 0xc4));
  if (((iVar2 != 0) && (*(char *)(param_1 + 0x147) == '\0')) &&
     ((int)*(short *)(param_1 + 0x2e) <=
      *(int *)(*(int *)(param_2 + 0xc4) + 0x2c) - (int)*(short *)(param_2 + 0x80))) {
    *(undefined2 *)(param_1 + 0x156) = 0x14;
    sVar1 = *(short *)(param_2 + 0x80);
    *(undefined1 *)(param_1 + 0x164) = 2;
    DAT_1f800182 = 0;
    _DAT_1f800080 = param_2;
    *(short *)(param_1 + 0x152) = -(sVar1 + *(short *)(param_1 + 0x80));
  }
  return;
}

