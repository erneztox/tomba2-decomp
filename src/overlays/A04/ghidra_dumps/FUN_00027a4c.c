// FUN_00027a4c

/* WARNING: Control flow encountered bad instruction data */

void FUN_00027a4c(void)

{
  byte in_v0;
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0x4a) = 0;
  *(byte *)(unaff_s0 + 0xb) = in_v0 & 0xc0 | 0x40;
  if (*(char *)(unaff_s0 + 0x46) != -0x3d) {
    func_0x000416a8();
    func_0x00041718();
  }
  *(short *)(unaff_s0 + 0x56) = *(short *)(unaff_s0 + 0x56) + -200;
  DAT_800bf929 = DAT_800bf929 | 4;
  *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

