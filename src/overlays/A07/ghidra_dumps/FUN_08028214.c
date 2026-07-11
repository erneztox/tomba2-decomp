// FUN_08028214

void FUN_08028214(int param_1)

{
  if (*(byte *)(param_1 + 5) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08028248 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef66f8))();
    return;
  }
  func_0x0004190c(param_1);
  return;
}

