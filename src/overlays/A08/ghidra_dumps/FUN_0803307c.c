// FUN_0803307c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803307c(int param_1)

{
  if (*(char *)(param_1 + 5) == '\0') {
    func_0x0007778c(param_1);
    if (*(char *)(param_1 + 0x2b) != '\x03') goto LAB_08033160;
    func_0x00042354(1,3);
    func_0x00040d68(param_1,0x800a3cf0);
    *(undefined1 *)(param_1 + 0x70) = 2;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) != -1) {
LAB_08033160:
      func_0x0004190c(param_1);
      return;
    }
    if (*(char *)(param_1 + 6) == '\0') {
      *(undefined1 *)(param_1 + 0x7a) = 0x13;
      func_0x00040d68(param_1,0x80145b24);
      *(undefined1 *)(param_1 + 0x70) = 2;
      *(undefined1 *)(param_1 + 6) = 1;
    }
    else if (*(char *)(param_1 + 6) == '\x01') {
      *(undefined1 *)(param_1 + 5) = 0;
      goto LAB_08033160;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

