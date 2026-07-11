// FUN_08025d2c

void FUN_08025d2c(int param_1)

{
  if (3 < *(byte *)(param_1 + 6)) {
    func_0x0006cba8(param_1 + 0x2c);
  }
  if (*(byte *)(param_1 + 6) < 9) {
                    /* WARNING: Could not emulate address calculation at 0x08025d7c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef68e8))();
    return;
  }
  return;
}

