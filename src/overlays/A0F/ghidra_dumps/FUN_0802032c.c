// FUN_0802032c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802032c(int param_1)

{
  if (*(byte *)(param_1 + 6) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0802036c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6d3c))();
    return;
  }
  return;
}

