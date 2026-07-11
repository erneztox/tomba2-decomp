// FUN_0000d778

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000d778(int param_1)

{
  if (*(byte *)(param_1 + 6) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0000d7bc */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6d24))();
    return;
  }
  return;
}

