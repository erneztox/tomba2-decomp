// FUN_0801370c

void FUN_0801370c(int param_1)

{
  *(undefined2 *)(param_1 + 0x72) = 0xffff;
  DAT_1f80025c = 0xff;
  DAT_1f80025d = 0xff;
  DAT_1f80025e = 0xff;
  DAT_1f80025f = 0xff;
  if (DAT_800bf870 - 10 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x080137a4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((DAT_800bf870 - 10) * 4 + -0x7fef6fd8))();
    return;
  }
  return;
}

