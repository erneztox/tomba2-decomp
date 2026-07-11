// FUN_0801db5c

void FUN_0801db5c(int param_1)

{
  if (*(byte *)(param_1 + 5) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0801db8c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef65e8))();
    return;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x000517f8(param_1);
  return;
}

