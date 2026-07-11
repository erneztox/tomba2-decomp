// FUN_0801902c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801902c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = func_0x0010ed04(param_1,param_2,*(undefined4 *)(param_2 + 0xc0));
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x164) = 3;
    DAT_1f800182 = 0;
    _DAT_1f800080 = param_2;
  }
  return;
}

