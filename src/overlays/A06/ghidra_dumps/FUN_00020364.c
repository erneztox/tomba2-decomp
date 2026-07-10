// FUN_00020364

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000203cc) */

void FUN_00020364(void)

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

