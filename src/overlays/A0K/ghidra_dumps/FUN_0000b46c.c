// FUN_0000b46c

void FUN_0000b46c(int param_1)

{
  if (*(byte *)(param_1 + 5) < 100) {
                    /* WARNING: Could not emulate address calculation at 0x0000b4a0 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6ca4))();
    return;
  }
  return;
}

