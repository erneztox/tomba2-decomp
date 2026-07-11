// FUN_08028620

void FUN_08028620(int param_1)

{
  if (*(byte *)(param_1 + 6) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08028654 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef64b4))();
    return;
  }
  return;
}

