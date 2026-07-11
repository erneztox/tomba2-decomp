// FUN_08018f38

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08018f38(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(char *)(param_2 + 0x5e) == '\0') &&
     (iVar1 = func_0x0010e7d4(param_1,param_2,*(undefined4 *)(param_2 + 0xc0)), iVar1 != 0)) {
    _DAT_1f800080 = param_2;
    *(undefined1 *)(param_1 + 0x164) = 0xb;
    *(undefined1 *)(param_1 + 0x15c) = 0;
    *(undefined1 *)(param_2 + 0x29) = 1;
  }
  return;
}

