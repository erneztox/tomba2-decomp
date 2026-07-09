// FUN_8013aeb0

/* WARNING: Control flow encountered bad instruction data */

void FUN_8013aeb0(void)

{
  int in_v0;
  int unaff_s0;
  
  if (in_v0 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(unaff_s0 + 4) = 0x101;
  return;
}

