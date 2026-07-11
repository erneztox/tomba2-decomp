// FUN_0802f1d0

void FUN_0802f1d0(short param_1)

{
  if ((uint)(int)param_1 < 0x19) {
                    /* WARNING: Could not emulate address calculation at 0x0802f1f8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 * 4 + -0x7fef5b3c))();
    return;
  }
  return;
}

