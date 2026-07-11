// FUN_0801371c

void FUN_0801371c(int param_1)

{
  if (*(byte *)(param_1 + 4) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08013754 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 4) * 4 + -0x7fef6fa4))();
    return;
  }
  return;
}

