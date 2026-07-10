// FUN_00001264

void FUN_00001264(int param_1)

{
  if (*(byte *)(param_1 + 2) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x000012a0 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 2) * 4 + -0x7fef6fd0))();
    return;
  }
  func_0x0006e3b0(param_1,param_1 + 0x38);
  return;
}

