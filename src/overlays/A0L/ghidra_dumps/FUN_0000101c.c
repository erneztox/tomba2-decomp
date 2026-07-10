// FUN_0000101c

void FUN_0000101c(int param_1)

{
  if (*(byte *)(param_1 + 2) < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0000104c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 2) * 4 + -0x7fef6ff0))();
    return;
  }
  func_0x0006e3b0(param_1,param_1 + 0x38);
  return;
}

