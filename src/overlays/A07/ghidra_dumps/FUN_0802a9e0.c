// FUN_0802a9e0

void FUN_0802a9e0(int param_1)

{
  if (*(byte *)(param_1 + 5) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0802aa20 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef665c))();
    return;
  }
  *(undefined1 *)(param_1 + 0x5f) = 0;
  func_0x0004190c(param_1);
  return;
}

