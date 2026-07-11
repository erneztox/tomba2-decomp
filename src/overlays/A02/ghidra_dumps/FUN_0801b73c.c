// FUN_0801b73c

void FUN_0801b73c(int param_1)

{
  int iVar1;
  
  if (*(byte *)(param_1 + 5) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0801b770 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6b5c))();
    return;
  }
  iVar1 = func_0x0007778c(param_1);
  if (iVar1 != 0) {
    func_0x000517f8(param_1);
  }
  return;
}

