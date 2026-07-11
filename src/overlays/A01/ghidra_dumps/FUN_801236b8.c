// FUN_801236b8

/* WARNING: Control flow encountered bad instruction data */

void FUN_801236b8(void)

{
  int unaff_s0;
  int unaff_s1;
  
  *(char *)(unaff_s0 + 5) = *(char *)(unaff_s0 + 5) + '\x01';
  FUN_8012c4f4();
  func_0x80077c40();
  DAT_800bfa13 = DAT_800bfa13 | (byte)(unaff_s1 << (*(byte *)(unaff_s0 + 3) & 0x1f));
  func_0x8004ed94(0x5b,0x41);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

