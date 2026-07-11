// FUN_08031514

/* WARNING: Control flow encountered bad instruction data */

void FUN_08031514(undefined1 *param_1)

{
  if (param_1[3] != '\0') {
    if (param_1[3] != '\x01') {
      func_0x00040b48(0x57);
      func_0x00058304(&DAT_800e7e80,0xe);
      param_1[4] = 4;
      param_1[5] = 0;
      *param_1 = 2;
      func_0x000315d4(param_1 + 0x2c);
      return;
    }
    func_0x00040b48(0x56);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

