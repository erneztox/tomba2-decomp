// FUN_08032e04

void FUN_08032e04(int param_1)

{
  func_0x0010f450(param_1);
  if (*(byte *)(param_1 + 6) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x08032e68 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6120))();
    return;
  }
  return;
}

