// FUN_80139dec

/* WARNING: Control flow encountered bad instruction data */

void FUN_80139dec(void)

{
  undefined1 in_v0;
  int unaff_s0;
  
  *(undefined1 *)(unaff_s0 + 7) = in_v0;
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x10;
  *(short *)(unaff_s0 + 0x4e) =
       *(short *)(unaff_s0 + 0x4e) + (short)(0x500 - *(short *)(unaff_s0 + 0x4e) >> 6);
  FUN_801406e4();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

