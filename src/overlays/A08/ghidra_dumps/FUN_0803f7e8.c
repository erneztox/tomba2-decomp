// FUN_0803f7e8

void FUN_0803f7e8(int param_1)

{
  if (*(byte *)(param_1 + 6) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0803f818 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef5cb4))();
    return;
  }
  if (*(byte *)(param_1 + 7) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0803f91c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 7) * 4 + -0x7fef5c9c))();
    return;
  }
  return;
}

