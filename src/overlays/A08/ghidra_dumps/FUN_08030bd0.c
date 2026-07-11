// FUN_08030bd0

/* WARNING: Control flow encountered bad instruction data */

void FUN_08030bd0(int param_1)

{
  if (DAT_800bf8e3 == -1) {
    *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x00077ebc();
  return;
}

