// FUN_00008c98

/* WARNING: Control flow encountered bad instruction data */

void FUN_00008c98(int param_1)

{
  if (*(char *)(param_1 + 5) == '\0') {
    if (1 < DAT_800bfa58) {
      *(undefined1 *)(param_1 + 5) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 5) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)(*(int *)(param_1 + 0xc4) + 8) = *(short *)(*(int *)(param_1 + 0xc4) + 8) + -0x80;
    if (*(short *)(*(int *)(param_1 + 0xc4) + 8) < -0x6ff) {
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      DAT_800bfa58 = 3;
    }
  }
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x00077e7c(param_1);
  func_0x000517f8(param_1);
  return;
}

