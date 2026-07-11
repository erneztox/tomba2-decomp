// FUN_08026248

void FUN_08026248(int param_1)

{
  if (*(byte *)(param_1 + 6) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0802627c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef646c))(&DAT_800e7e80);
    return;
  }
  func_0x000735f4(param_1,99);
  return;
}

