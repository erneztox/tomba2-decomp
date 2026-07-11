// FUN_0802e98c

void FUN_0802e98c(int param_1)

{
  func_0x0007778c();
  if (*(byte *)(param_1 + 5) < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0802e9c4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef626c))();
    return;
  }
  func_0x00041098(param_1);
  func_0x0004190c(param_1);
  return;
}

