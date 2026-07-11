// FUN_0801c4c0

void FUN_0801c4c0(int param_1)

{
  if (*(byte *)(param_1 + 5) < 9) {
                    /* WARNING: Could not emulate address calculation at 0x0801c4f0 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6afc))();
    return;
  }
  return;
}

