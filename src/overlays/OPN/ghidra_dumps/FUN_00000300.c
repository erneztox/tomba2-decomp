// FUN_00000300

void FUN_00000300(int param_1)

{
  if (*(byte *)(param_1 + 6) < 0xf) {
                    /* WARNING: Could not emulate address calculation at 0x00000338 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fe75ffc))();
    return;
  }
  return;
}

