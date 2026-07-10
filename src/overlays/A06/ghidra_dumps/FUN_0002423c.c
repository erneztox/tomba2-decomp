// FUN_0002423c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0002423c(void)

{
  int in_v0;
  int unaff_s1;
  int unaff_s2;
  
  if (*(char *)(in_v0 + -0x7f1) == '\x02') {
    *(char *)(unaff_s1 + 6) = *(char *)(unaff_s1 + 6) + '\x01';
  }
  if (2 < *(byte *)(unaff_s1 + 0xe) - 1) {
    *(short *)(unaff_s1 + 0x36) = *(short *)(unaff_s1 + 0x36) + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(byte *)(unaff_s1 + 6) < 8) {
    *(undefined2 *)(unaff_s2 + 0x58) = 0xff00;
  }
  return;
}

