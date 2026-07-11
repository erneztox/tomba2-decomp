// FUN_08024a90

void FUN_08024a90(int param_1)

{
  func_0x0007778c();
  if (*(byte *)(param_1 + 5) < 8) {
                    /* WARNING: Could not emulate address calculation at 0x08024ac4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef65b4))();
    return;
  }
  return;
}

