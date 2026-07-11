// FUN_0801cd24

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801cd24(int param_1)

{
  if (*(byte *)(param_1 + 6) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0801cd68 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6d28))();
    return;
  }
  return;
}

