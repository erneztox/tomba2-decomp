// FUN_0801d374

void FUN_0801d374(int param_1)

{
  if (*(byte *)(param_1 + 5) < 9) {
                    /* WARNING: Could not emulate address calculation at 0x0801d3a4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef666c))();
    return;
  }
  return;
}

