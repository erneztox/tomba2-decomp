// FUN_08027000

/* WARNING: Control flow encountered bad instruction data */

void FUN_08027000(undefined1 *param_1)

{
  if (param_1[0x5e] == '\0') {
    if (DAT_800bf8e2 != -1) {
      return;
    }
    if (DAT_800bf873 != '\0') {
      return;
    }
    *param_1 = 1;
    param_1[0x5e] = 1;
  }
  else if (param_1[0x5e] == '\x01') {
    if ((DAT_800bf816 != '\0') && (DAT_800bf817 == param_1[3])) {
      *(undefined2 *)(param_1 + 0x2e) = 0x3312;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x2e) = 0x31e0;
    *(undefined2 *)(param_1 + 0x36) = 0x1a36;
    func_0x00073328(param_1);
    func_0x000735f4(param_1,0x82);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

