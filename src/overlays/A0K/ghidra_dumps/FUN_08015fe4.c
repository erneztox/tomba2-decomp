// FUN_08015fe4

void FUN_08015fe4(int param_1)

{
  if (*(byte *)(param_1 + 5) < 0x3b) {
                    /* WARNING: Could not emulate address calculation at 0x08016018 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6e60))();
    return;
  }
  return;
}

