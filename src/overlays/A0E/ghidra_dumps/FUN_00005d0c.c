// FUN_00005d0c

void FUN_00005d0c(int param_1)

{
  if (*(byte *)(param_1 + 6) < 9) {
                    /* WARNING: Could not emulate address calculation at 0x00005d44 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6ea8))();
    return;
  }
  return;
}

