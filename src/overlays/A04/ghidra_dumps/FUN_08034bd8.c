// FUN_08034bd8

/* WARNING: Control flow encountered bad instruction data */

void FUN_08034bd8(void)

{
  short in_v0;
  int unaff_s1;
  
  *(short *)(unaff_s1 + 0x42) = in_v0 + -1;
  if ((short)(in_v0 + -1) == 0) {
    func_0x0012e9ec();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

