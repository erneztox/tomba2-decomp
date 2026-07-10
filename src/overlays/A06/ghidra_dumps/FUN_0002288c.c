// FUN_0002288c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0002288c(void)

{
  int unaff_s0;
  
  *(undefined1 *)(unaff_s0 + 6) = 0;
  func_0x0007778c();
  func_0x00051844();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

