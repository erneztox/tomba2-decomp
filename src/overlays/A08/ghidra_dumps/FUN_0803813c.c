// FUN_0803813c

void FUN_0803813c(int param_1)

{
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x00077e7c();
  if (*(byte *)(param_1 + 5) < 10) {
                    /* WARNING: Could not emulate address calculation at 0x08038180 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef5ed8))();
    return;
  }
  if (*(byte *)(param_1 + 0x46) < 10) {
                    /* WARNING: Could not emulate address calculation at 0x08038644 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 0x46) * 4 + -0x7fef5eb0))();
    return;
  }
  func_0x0004190c(param_1);
  return;
}

