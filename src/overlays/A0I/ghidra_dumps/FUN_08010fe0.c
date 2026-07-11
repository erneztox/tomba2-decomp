// FUN_08010fe0

void FUN_08010fe0(int param_1)

{
  if (*(byte *)(param_1 + 6) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08011014 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6f3c))();
    return;
  }
  func_0x000551c4(param_1);
  return;
}

