// FUN_08023d64

void FUN_08023d64(int param_1)

{
  func_0x0007778c();
  if (*(byte *)(param_1 + 5) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x08023d98 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6488))();
    return;
  }
  return;
}

