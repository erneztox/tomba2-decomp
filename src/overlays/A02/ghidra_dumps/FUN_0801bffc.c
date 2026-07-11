// FUN_0801bffc

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801bffc(int param_1)

{
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined1 *)(param_1 + 6) = 1;
    func_0x00040cdc(param_1,0,0x80129a7c);
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) == -1) {
      *(undefined1 *)(param_1 + 4) = 3;
      func_0x00042310();
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

