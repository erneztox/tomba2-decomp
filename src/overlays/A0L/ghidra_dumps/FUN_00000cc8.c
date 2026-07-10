// FUN_00000cc8

void FUN_00000cc8(int param_1)

{
  if (*(byte *)(param_1 + 2) < 10) {
                    /* WARNING: Could not emulate address calculation at 0x00000cf8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 2) * 4 + -0x7fef7018))();
    return;
  }
  func_0x0006e3b0(param_1,param_1 + 0x38);
  return;
}

