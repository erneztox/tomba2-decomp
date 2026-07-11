// FUN_08017864

void FUN_08017864(int param_1)

{
  if (*(byte *)(param_1 + 2) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0801789c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 2) * 4 + -0x7fef6550))();
    return;
  }
  return;
}

