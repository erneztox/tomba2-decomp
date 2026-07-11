// FUN_0802566c

void FUN_0802566c(int param_1)

{
  if (*(byte *)(param_1 + 5) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x080256a4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef63c4))(&DAT_800e7e80);
    return;
  }
  return;
}

