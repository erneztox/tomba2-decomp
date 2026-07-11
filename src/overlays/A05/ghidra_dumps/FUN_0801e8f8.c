// FUN_0801e8f8

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801e8f8(int param_1)

{
  if (*(char *)(param_1 + 6) == '\0') {
    if (*(char *)(param_1 + 0x2b) == '\x03') {
      func_0x00042354(1,1);
      func_0x00040d68(param_1,0x800a3d40);
      *(undefined1 *)(param_1 + 0x70) = 2;
      *(undefined1 *)(param_1 + 7) = 0;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 6) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(param_1 + 0x70) == -1) {
      if (*(char *)(param_1 + 7) == '\0') {
        *(undefined1 *)(param_1 + 0x7a) = 0xc;
        func_0x00040d68(param_1,0x8013d2b4);
        *(undefined1 *)(param_1 + 0x70) = 2;
        *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(char *)(param_1 + 7) != '\x01') {
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 6) = 0;
    }
    func_0x00041098(param_1);
  }
  return;
}

