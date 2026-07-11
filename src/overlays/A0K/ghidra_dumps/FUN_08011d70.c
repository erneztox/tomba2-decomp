// FUN_08011d70

void FUN_08011d70(int param_1)

{
  if (*(byte *)(param_1 + 2) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x08011db8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 2) * 4 + -0x7fef7018))();
    return;
  }
  return;
}

