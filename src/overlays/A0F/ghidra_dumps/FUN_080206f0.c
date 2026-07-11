// FUN_080206f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080206f0(int param_1)

{
  if (*(byte *)(param_1 + 6) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x08020734 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6d0c))();
    return;
  }
  return;
}

