// FUN_000016e0

void FUN_000016e0(int param_1)

{
  if (*(byte *)(param_1 + 5) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x00001714 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6f50))(&DAT_800e7e80);
    return;
  }
  return;
}

