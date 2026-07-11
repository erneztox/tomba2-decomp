// FUN_0801184c

void FUN_0801184c(int param_1)

{
  if (*(byte *)(param_1 + 0x5e) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x08011884 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 0x5e) * 4 + -0x7fef6f38))();
    return;
  }
  return;
}

