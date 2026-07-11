// FUN_0801c960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801c960(int param_1)

{
  if (*(byte *)(param_1 + 6) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0801c9a0 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6d58))();
    return;
  }
  return;
}

