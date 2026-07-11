// FUN_0801815c

void FUN_0801815c(int param_1)

{
  func_0x00076d68();
  if (*(byte *)(param_1 + 6) < 0x11) {
                    /* WARNING: Could not emulate address calculation at 0x08018198 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6de8))();
    return;
  }
  return;
}

