// FUN_0000ade0

void FUN_0000ade0(int param_1)

{
  if (*(byte *)(param_1 + 7) < 10) {
                    /* WARNING: Could not emulate address calculation at 0x0000ae14 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 7) * 4 + -0x7fef6ccc))();
    return;
  }
  return;
}

