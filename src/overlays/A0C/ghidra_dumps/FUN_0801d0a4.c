// FUN_0801d0a4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801d0a4(int param_1)

{
  if (*(byte *)(param_1 + 6) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0801d0e4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6d88))();
    return;
  }
  return;
}

