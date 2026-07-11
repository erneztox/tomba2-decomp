// FUN_080201d4

void FUN_080201d4(int param_1)

{
  if (*(byte *)(param_1 + 5) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08020204 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6250))();
    return;
  }
  func_0x0007778c(param_1);
  func_0x0004b374(param_1,0);
  return;
}

