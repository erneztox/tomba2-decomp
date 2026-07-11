// FUN_0801e908

void FUN_0801e908(int param_1)

{
  if (*(byte *)(param_1 + 6) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0801e938 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef65b8))();
    return;
  }
  return;
}

