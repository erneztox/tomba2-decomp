// FUN_0802f968

void FUN_0802f968(int param_1)

{
  if (*(byte *)(param_1 + 5) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0802f9a0 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6348))(&DAT_800e7e80);
    return;
  }
  return;
}

