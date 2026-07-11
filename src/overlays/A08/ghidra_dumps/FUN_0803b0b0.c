// FUN_0803b0b0

void FUN_0803b0b0(int param_1)

{
  func_0x0004766c();
  if (*(byte *)(param_1 + 6) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0803b0e8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef5d70))();
    return;
  }
  return;
}

