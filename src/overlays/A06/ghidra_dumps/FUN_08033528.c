// FUN_08033528

void FUN_08033528(int param_1)

{
  if (*(byte *)(param_1 + 6) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x08033588 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef60e0))();
    return;
  }
  return;
}

