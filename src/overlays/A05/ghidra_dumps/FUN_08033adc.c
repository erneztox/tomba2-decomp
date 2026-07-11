// FUN_08033adc

void FUN_08033adc(int param_1)

{
  if (((1 < *(byte *)(param_1 + 3)) && (*(byte *)(param_1 + 3) != 4)) &&
     (*(byte *)(param_1 + 7) < 6)) {
                    /* WARNING: Could not emulate address calculation at 0x08033b44 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 7) * 4 + -0x7fef61fc))();
    return;
  }
  return;
}

