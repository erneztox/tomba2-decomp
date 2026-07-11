// FUN_0802d2d4

void FUN_0802d2d4(int param_1)

{
  func_0x0004190c();
  if (*(byte *)(param_1 + 5) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0802d30c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef65dc))();
    return;
  }
  return;
}

