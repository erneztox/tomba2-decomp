// FUN_0801229c

void FUN_0801229c(int param_1)

{
  if (*(byte *)(param_1 + 5) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x080122d4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef7020))();
    return;
  }
  return;
}

