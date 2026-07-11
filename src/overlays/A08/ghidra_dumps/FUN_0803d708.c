// FUN_0803d708

void FUN_0803d708(int param_1)

{
  if (*(byte *)(param_1 + 6) < 9) {
                    /* WARNING: Could not emulate address calculation at 0x0803d738 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef5cf0))();
    return;
  }
  return;
}

