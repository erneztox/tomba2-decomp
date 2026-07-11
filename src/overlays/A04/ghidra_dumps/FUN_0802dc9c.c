// FUN_0802dc9c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802dc9c(void)

{
  int unaff_s0;
  int unaff_s1;
  
  *(undefined2 *)(unaff_s0 + 0x84) = 0x8c;
  *(undefined2 *)(unaff_s0 + 0x86) = 0xf0;
  *(undefined2 *)(unaff_s1 + 0x1c) = 0;
  *(undefined2 *)(unaff_s1 + 0x1e) = 0;
  *(ushort *)(unaff_s1 + 2) = *(ushort *)(unaff_s1 + 2) & 0xfff7;
  *(undefined2 *)(unaff_s0 + 0x50) = 0xffe1;
  *(undefined2 *)(unaff_s0 + 0x4e) = 0xe494;
  *(char *)(unaff_s0 + 7) = *(char *)(unaff_s0 + 7) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

