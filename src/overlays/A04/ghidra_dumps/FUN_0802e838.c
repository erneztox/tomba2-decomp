// FUN_0802e838

void FUN_0802e838(int param_1)

{
  if (*(byte *)(param_1 + 5) < 0xf) {
                    /* WARNING: Could not emulate address calculation at 0x0802e874 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef5fd8))();
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0x101;
  return;
}

