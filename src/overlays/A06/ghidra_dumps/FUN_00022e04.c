// FUN_00022e04

void FUN_00022e04(int param_1)

{
  func_0x0010f450(param_1);
  if (*(byte *)(param_1 + 6) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x00022e68 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6120))();
    return;
  }
  return;
}

