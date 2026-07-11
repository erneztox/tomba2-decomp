// FUN_08030744

/* WARNING: Control flow encountered bad instruction data */

void FUN_08030744(int param_1)

{
  if (DAT_800bfa3a == '\v') {
    *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x000517f8();
  return;
}

