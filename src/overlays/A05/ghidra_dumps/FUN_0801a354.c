// FUN_0801a354

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801a354(undefined1 *param_1)

{
  if (param_1[5] == '\0') {
    param_1[5] = 1;
    *param_1 = 1;
  }
  else if (param_1[5] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0007778c(param_1);
  func_0x00077b5c(param_1);
  return;
}

