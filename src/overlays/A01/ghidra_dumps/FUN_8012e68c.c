// FUN_8012e68c

/* WARNING: Control flow encountered bad instruction data */

void FUN_8012e68c(void)

{
  undefined4 unaff_s2;
  int in_t8;
  
  *(undefined4 *)(in_t8 + 0x3741) = unaff_s2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

