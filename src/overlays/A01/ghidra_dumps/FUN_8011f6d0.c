// FUN_8011f6d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011f6d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  func_0x80051d20(iVar1,param_1 + 0x88,&DAT_1f8000c0);
  *(undefined2 *)(param_1 + 0x2e) = _DAT_1f8000c0;
  *(undefined2 *)(param_1 + 0x32) = _DAT_1f8000c2;
  *(undefined2 *)(param_1 + 0x36) = _DAT_1f8000c4;
  *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(iVar1 + 0x56);
  func_0x800517f8();
  return;
}

