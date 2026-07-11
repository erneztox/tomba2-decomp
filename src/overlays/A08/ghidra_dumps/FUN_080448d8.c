// FUN_080448d8

void FUN_080448d8(int param_1)

{
  if (*(byte *)(param_1 + 5) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x08044908 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef5bec))();
    return;
  }
  return;
}

