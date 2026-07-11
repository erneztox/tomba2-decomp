// FUN_080390a0

void FUN_080390a0(int param_1)

{
  if (*(byte *)(param_1 + 6) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x080390e0 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef5f74))();
    return;
  }
  return;
}

