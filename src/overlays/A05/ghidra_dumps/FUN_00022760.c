// FUN_00022760

/* WARNING: Control flow encountered bad instruction data */

void FUN_00022760(void)

{
  short in_v0;
  int unaff_s1;
  
  *(ushort *)(unaff_s1 + 0x5c) = (in_v0 + 0xbd) * 0x40 | 0x2f;
  *(undefined2 *)(unaff_s1 + 0xe) = *(undefined2 *)(*(short *)(unaff_s1 + 0x42) * 2 + -0x7fec0e60);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

