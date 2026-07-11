// FUN_08030cb4

void FUN_08030cb4(int param_1)

{
  if (*(byte *)(param_1 + 4) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08030ce8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 4) * 4 + -0x7fef61c0))();
    return;
  }
  return;
}

