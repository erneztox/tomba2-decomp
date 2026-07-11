// FUN_08028848

void FUN_08028848(int param_1)

{
  if (*(byte *)(param_1 + 5) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x08028888 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6368))();
    return;
  }
  return;
}

