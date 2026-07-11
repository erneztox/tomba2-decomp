// FUN_0803313c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803313c(void)

{
  char in_v0;
  int in_v1;
  int unaff_s1;
  
  *(char *)(unaff_s1 + 4) = in_v0 + '\x01';
  if (in_v1 == 0) {
    *(undefined1 *)(unaff_s1 + 5) = 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

