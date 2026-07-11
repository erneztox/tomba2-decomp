// FUN_0801a390

void FUN_0801a390(int param_1)

{
  if (*(byte *)(param_1 + 5) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x0801a3c8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6ab0))();
    return;
  }
  return;
}

