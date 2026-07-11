// FUN_080446d4

void FUN_080446d4(short param_1)

{
  if ((uint)(int)param_1 < 0x13) {
                    /* WARNING: Could not emulate address calculation at 0x080446fc */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 * 4 + -0x7fef5c38))();
    return;
  }
  return;
}

