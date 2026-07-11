// FUN_08035e84

/* WARNING: Control flow encountered bad instruction data */

void FUN_08035e84(int param_1)

{
  if (*(char *)(param_1 + 5) == '\0') {
    if (DAT_800bfa42 == 0) {
      func_0x0012e82c(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 0x29) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    func_0x0012e82c(param_1);
    if ((*(byte *)(param_1 + 3) + 1) * 2 == (uint)DAT_800bfa42) {
      *(undefined1 *)(param_1 + 4) = 2;
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 0x29) = 2;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

