// FUN_0801cb8c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801cb8c(int param_1)

{
  if (*(byte *)(param_1 + 6) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0801cbcc */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6da0))();
    return;
  }
  return;
}

