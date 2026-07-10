// FUN_0000034c

void FUN_0000034c(int param_1)

{
  DAT_800bfe55 = 0;
  func_0x00055284();
  if (DAT_800bf871 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0000039c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)DAT_800bf871 * 4 + -0x7fef7060))();
    return;
  }
  *(undefined2 *)(param_1 + 0x142) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  func_0x00054198(param_1);
  func_0x00054d14(param_1,2,0);
  DAT_1f800137 = 1;
  *(undefined1 *)(param_1 + 4) = 4;
  *(undefined1 *)(param_1 + 5) = 0x21;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}

