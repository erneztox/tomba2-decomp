// FUN_000027f0

void FUN_000027f0(int param_1)

{
  if (*(byte *)(param_1 + 3) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x00002828 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef7008))();
    return;
  }
  return;
}

