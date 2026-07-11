// FUN_0803801c

void FUN_0803801c(short param_1)

{
  if ((uint)(int)param_1 < 0x14) {
                    /* WARNING: Could not emulate address calculation at 0x08038044 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 * 4 + -0x7fef59f0))();
    return;
  }
  return;
}

