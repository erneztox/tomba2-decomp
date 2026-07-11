// FUN_08025220

void FUN_08025220(int param_1)

{
  if (*(byte *)(param_1 + 6) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x0802525c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef63e4))(&DAT_800e7e80);
    return;
  }
  return;
}

