// FUN_0801d3b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801d3b4(int param_1)

{
  if (*(byte *)(param_1 + 6) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0801d3f4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6d54))();
    return;
  }
  return;
}

