// FUN_080259f8

void FUN_080259f8(int param_1)

{
  if (*(byte *)(param_1 + 5) < 8) {
                    /* WARNING: Could not emulate address calculation at 0x08025a30 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef64c4))();
    return;
  }
  return;
}

