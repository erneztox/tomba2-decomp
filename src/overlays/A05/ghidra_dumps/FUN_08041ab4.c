// FUN_08041ab4

void FUN_08041ab4(short param_1)

{
  if ((uint)(int)param_1 < 0x12) {
                    /* WARNING: Could not emulate address calculation at 0x08041adc */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 * 4 + -0x7fef5d1c))();
    return;
  }
  return;
}

