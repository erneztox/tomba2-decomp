// FUN_080118a4

void FUN_080118a4(int param_1)

{
  if (*(byte *)(param_1 + 5) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x080118d4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6f28))();
    return;
  }
  return;
}

