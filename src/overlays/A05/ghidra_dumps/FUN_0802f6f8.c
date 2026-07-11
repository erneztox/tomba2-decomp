// FUN_0802f6f8

void FUN_0802f6f8(int param_1)

{
  if (*(byte *)(param_1 + 5) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0802f72c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6360))(&DAT_800e7e80);
    return;
  }
  func_0x000735f4(param_1,0x57);
  return;
}

