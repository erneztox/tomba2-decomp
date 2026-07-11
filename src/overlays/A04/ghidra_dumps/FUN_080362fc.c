// FUN_080362fc

/* WARNING: Control flow encountered bad instruction data */

void FUN_080362fc(int param_1)

{
  uint uVar1;
  
  uVar1 = func_0x0009a450();
  if ((uVar1 & 0xf) < 10) {
    if (6 < (uVar1 & 0xf)) {
      func_0x0012f41c(param_1,2,0);
      *(undefined2 *)(param_1 + 0x42) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x42) = 0;
    *(undefined2 *)(param_1 + 0x40) = 0x3c;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  else if (*(char *)(param_1 + 2) == '\x1c') {
    func_0x0012f41c(param_1,0,0);
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined2 *)(param_1 + 0x72) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

