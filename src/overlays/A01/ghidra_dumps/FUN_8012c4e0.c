// FUN_8012c4e0

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_8012c4e0(void)

{
  undefined1 *in_a3;
  int unaff_s2;
  undefined4 in_f31;
  undefined1 auStackX_0 [16];
  
  *(undefined4 *)(unaff_s2 + 0x3040) = in_f31;
  if (auStackX_0 <= in_a3) {
    trap(0xcc);
  }
  SYNC(0);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}

