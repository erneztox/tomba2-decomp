// FUN_08021474

void FUN_08021474(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x0007778c();
  if (iVar1 != 0) {
    if (*(byte *)(param_1 + 5) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x080214b4 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6940))();
      return;
    }
    func_0x000517f8(param_1);
  }
  return;
}

