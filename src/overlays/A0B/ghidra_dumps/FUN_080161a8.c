// FUN_080161a8

void FUN_080161a8(int param_1)

{
  if (*(byte *)(param_1 + 6) < 9) {
                    /* WARNING: Could not emulate address calculation at 0x080161e0 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6ec8))();
    return;
  }
  return;
}

