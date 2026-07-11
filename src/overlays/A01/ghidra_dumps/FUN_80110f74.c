// FUN_80110f74

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80110f74(int param_1)

{
  int iVar1;
  
  FUN_80116620();
  func_0x8004766c(param_1);
  func_0x80049760(param_1);
  *(undefined2 *)(param_1 + 100) = _DAT_1f8001a0;
  iVar1 = func_0x800493e8(param_1,0,0xffffffa6);
  if ((iVar1 != 0) || (iVar1 = func_0x80049250(param_1,0,0x5a), iVar1 != 0)) {
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  *(undefined1 *)(param_1 + 0x29) = 0;
  return;
}

