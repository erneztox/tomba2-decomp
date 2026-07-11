// FUN_0803b058

void FUN_0803b058(int param_1)

{
  if (0 < *(short *)(param_1 + 0x42)) {
    *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + -1;
  }
  if (*(byte *)(param_1 + 6) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0803b0a4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef5d74))();
    return;
  }
  return;
}

