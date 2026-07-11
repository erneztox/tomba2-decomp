// FUN_0801fc88

void FUN_0801fc88(int param_1)

{
  if (*(byte *)(param_1 + 6) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x0801fcb8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6714))();
    return;
  }
  func_0x0004190c(param_1);
  return;
}

