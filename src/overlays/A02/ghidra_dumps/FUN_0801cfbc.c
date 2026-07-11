// FUN_0801cfbc

void FUN_0801cfbc(int param_1)

{
  if (*(byte *)(param_1 + 2) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0801d004 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 2) * 4 + -0x7fef6ad8))();
    return;
  }
  return;
}

