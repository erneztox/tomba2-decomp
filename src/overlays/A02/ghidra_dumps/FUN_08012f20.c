// FUN_08012f20

void FUN_08012f20(int param_1)

{
  if (*(byte *)(param_1 + 6) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x08012f58 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef7028))();
    return;
  }
  return;
}

