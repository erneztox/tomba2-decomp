// FUN_08045438

void FUN_08045438(short param_1)

{
  if ((uint)(int)param_1 < 9) {
                    /* WARNING: Could not emulate address calculation at 0x08045460 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 * 4 + -0x7fef5b2c))();
    return;
  }
  return;
}

