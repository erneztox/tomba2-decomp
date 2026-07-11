// FUN_08047540

void FUN_08047540(short param_1)

{
  if ((uint)(int)param_1 < 0x10) {
                    /* WARNING: Could not emulate address calculation at 0x08047568 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 * 4 + -0x7fef5b7c))();
    return;
  }
  return;
}

