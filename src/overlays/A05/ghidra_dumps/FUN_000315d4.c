// FUN_000315d4

/* WARNING: Control flow encountered bad instruction data */

void FUN_000315d4(void)

{
  int in_v0;
  uint unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  undefined4 uStack00000010;
  
  uStack00000010 = *(undefined4 *)(in_v0 + -0x5d5c);
  do {
    FUN_000318a0(unaff_s1,&stack0x00000010,unaff_s2 + 0x48);
    if ((unaff_s0 & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x0003f698(*(undefined4 *)(unaff_s2 + 0x3c),*(undefined4 *)(unaff_s3 + -0x2738),0);
    unaff_s0 = unaff_s0 + 1;
    unaff_s1 = unaff_s1 + 0x10;
  } while ((int)unaff_s0 < 3);
  return;
}

