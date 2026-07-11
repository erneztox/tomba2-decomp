// FUN_8012a2c4

void FUN_8012a2c4(void)

{
  int unaff_s1;
  
  DAT_800bf9cc = DAT_800bf9cc | (byte)(1 << (*(byte *)(unaff_s1 + 3) & 0x1f));
  DAT_800bfa31 = DAT_800bfa31 + 1;
  if (9 < DAT_800bfa31) {
    func_0x8004ed94(0x6e,0x41);
  }
  *(undefined1 *)(unaff_s1 + 4) = 3;
  return;
}

