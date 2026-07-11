// FUN_0801543c

void FUN_0801543c(int param_1)

{
  if (*(byte *)(param_1 + 6) < 9) {
                    /* WARNING: Could not emulate address calculation at 0x08015474 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6f98))();
    return;
  }
  return;
}

