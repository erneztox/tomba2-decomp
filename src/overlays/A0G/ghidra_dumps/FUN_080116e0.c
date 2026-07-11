// FUN_080116e0

void FUN_080116e0(int param_1)

{
  if (*(byte *)(param_1 + 5) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08011714 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6f50))(&DAT_800e7e80);
    return;
  }
  return;
}

