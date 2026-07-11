// FUN_08020374

void FUN_08020374(int param_1)

{
  if (*(byte *)(param_1 + 6) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x080203a4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef66c8))();
    return;
  }
  func_0x0004190c(param_1);
  return;
}

