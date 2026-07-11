// FUN_08015d0c

void FUN_08015d0c(int param_1)

{
  if (*(byte *)(param_1 + 6) < 9) {
                    /* WARNING: Could not emulate address calculation at 0x08015d44 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6ea8))();
    return;
  }
  return;
}

