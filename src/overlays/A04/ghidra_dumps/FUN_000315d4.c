// FUN_000315d4

/* WARNING: Control flow encountered bad instruction data */

void FUN_000315d4(undefined4 param_1)

{
  int unaff_s0;
  
  func_0x00040d68(param_1,0x80142478);
  DAT_800bfa51 = 2;
  *(undefined1 *)(unaff_s0 + 0x70) = 1;
  *(undefined1 *)(unaff_s0 + 5) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

