// FUN_08030364

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x080303cc) */

void FUN_08030364(void)

{
  int in_v0;
  int unaff_s0;
  
  if (in_v0 == 0) {
    *(undefined1 *)(unaff_s0 + 5) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

