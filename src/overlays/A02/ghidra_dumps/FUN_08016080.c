// FUN_08016080

void FUN_08016080(int param_1)

{
  if (*(byte *)(param_1 + 5) < 0x3b) {
                    /* WARNING: Could not emulate address calculation at 0x080160b4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6e80))();
    return;
  }
  return;
}

