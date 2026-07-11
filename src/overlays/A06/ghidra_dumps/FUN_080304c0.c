// FUN_080304c0

void FUN_080304c0(int param_1)

{
  if (*(byte *)(param_1 + 5) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x080304f0 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6208))();
    return;
  }
  return;
}

