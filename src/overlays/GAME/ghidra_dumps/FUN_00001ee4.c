// FUN_00001ee4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001ee4(void)

{
  if (*(byte *)(_DAT_1f800138 + 0x6b) < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x00001f1c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(_DAT_1f800138 + 0x6b) * 4 + -0x7fef9d14))();
    return;
  }
  DAT_1f800232 = 0;
  DAT_800bf81e = DAT_800bf81e & 2;
  return;
}

