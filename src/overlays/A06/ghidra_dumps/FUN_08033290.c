// FUN_08033290

/* WARNING: Control flow encountered bad instruction data */

void FUN_08033290(void)

{
  int in_v0;
  int in_v1;
  int unaff_s0;
  short unaff_s1;
  
  if (in_v1 <= in_v0) {
    *(short *)(unaff_s0 + 0x58) = unaff_s1 + -0x800;
    *(undefined1 *)(unaff_s0 + 0x46) = 1;
    *(undefined1 *)(unaff_s0 + 6) = 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

