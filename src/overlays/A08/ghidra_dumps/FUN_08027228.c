// FUN_08027228

/* WARNING: Control flow encountered bad instruction data */

void FUN_08027228(int param_1)

{
  if (*(char *)(param_1 + 0x5e) == '\0') {
    func_0x0011ee7c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x5e) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0011f030(param_1);
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x00077ebc(param_1);
  return;
}

