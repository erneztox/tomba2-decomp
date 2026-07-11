// FUN_08020e88

void FUN_08020e88(int param_1)

{
  if (*(byte *)(param_1 + 5) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x08020eb8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef665c))();
    return;
  }
  func_0x00041098(param_1);
  func_0x0004190c(param_1);
  return;
}

