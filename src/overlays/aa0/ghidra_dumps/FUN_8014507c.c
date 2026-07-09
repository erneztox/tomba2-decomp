// FUN_8014507c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80145088) */

void FUN_8014507c(void)

{
  int in_at;
  int unaff_s5;
  
  if (0 < unaff_s5) {
    trap(0);
  }
  if (in_at == 0) {
    trap(0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

