// FUN_08013948

void FUN_08013948(int param_1)

{
  if (*(byte *)(param_1 + 6) < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x08013980 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6ff8))();
    return;
  }
  return;
}

