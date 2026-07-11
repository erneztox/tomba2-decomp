// FUN_8013ac34

/* WARNING: Control flow encountered bad instruction data */

void FUN_8013ac34(void)

{
  int in_v1;
  int unaff_s0;
  
  if (in_v1 == 0) {
    *(undefined2 *)(unaff_s0 + 6) = 1;
  }
  else if (in_v1 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_801425f0();
  FUN_801448fc();
  return;
}

