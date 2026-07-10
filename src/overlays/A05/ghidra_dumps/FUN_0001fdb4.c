// FUN_0001fdb4

/* WARNING: Control flow encountered bad instruction data */

void FUN_0001fdb4(void)

{
  undefined1 in_v0;
  undefined1 *unaff_s0;
  
  unaff_s0[5] = in_v0;
  *unaff_s0 = 2;
  *(undefined2 *)(unaff_s0 + 0x50) = 0x400;
  func_0x00072efc();
  *(undefined2 *)(unaff_s0 + 0x42) = 0xf;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

