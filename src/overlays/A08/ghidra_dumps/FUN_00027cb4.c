// FUN_00027cb4

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00027cb4(void)

{
  int in_v0;
  int unaff_s0;
  
  if (in_v0 != 0) {
    *(undefined1 *)(*(int *)(unaff_s0 + 0x14) + 5) = 1;
    func_0x000440e4();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

