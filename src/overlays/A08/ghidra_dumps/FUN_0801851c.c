// FUN_0801851c

void FUN_0801851c(int param_1)

{
  if (*(byte *)(param_1 + 6) < 0xe) {
                    /* WARNING: Could not emulate address calculation at 0x08018554 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6b30))();
    return;
  }
  return;
}

