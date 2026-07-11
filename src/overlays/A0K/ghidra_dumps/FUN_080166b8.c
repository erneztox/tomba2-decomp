// FUN_080166b8

void FUN_080166b8(int param_1)

{
  if (*(byte *)(param_1 + 4) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x080166f0 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 4) * 4 + -0x7fef6d70))();
    return;
  }
  return;
}

