// FUN_80107a7c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80107a7c(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  if ((*(char *)(param_2 + 0xbf) != '\0') &&
     (iVar2 = func_0x80024bd8(param_1,param_2,*(undefined4 *)(param_2 + 0xc0)), iVar2 != 0)) {
    *(undefined2 *)(param_1 + 0x156) = 0x14;
    sVar1 = *(short *)(param_2 + 0x80);
    *(undefined1 *)(param_1 + 0x164) = 2;
    DAT_1f800182 = 0;
    _DAT_1f800080 = param_2;
    *(short *)(param_1 + 0x152) = sVar1 + *(short *)(param_1 + 0x80) + -0x28;
  }
  return;
}

