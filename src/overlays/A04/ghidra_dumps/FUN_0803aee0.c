// FUN_0803aee0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803aee0(int param_1)

{
  short sVar1;
  
  if (*(char *)(param_1 + 6) == '\0') {
    sVar1 = func_0x00135250(param_1,0);
    if (sVar1 != 0) {
      *(undefined2 *)(param_1 + 0x42) = 0x3c;
      *(undefined1 *)(param_1 + 7) = 0;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return;
  }
  if (*(char *)(param_1 + 6) != '\x01') {
    halt_baddata();
  }
  if ((_DAT_1f80017c & 3) == 0) {
    func_0x001354b8(param_1,0);
  }
  if (*(char *)(param_1 + 7) == '\0') {
    sVar1 = *(short *)(param_1 + 0x42);
    *(short *)(param_1 + 0x42) = sVar1 + -1;
    if (sVar1 != 1) {
      sVar1 = func_0x00135250(param_1,1);
      if (sVar1 != 0) {
        *(undefined2 *)(param_1 + 0x42) = 0x3c;
        *(undefined2 *)(param_1 + 0x40) = 0;
        *(undefined2 *)(param_1 + 0x44) = 0x1000;
        *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
        halt_baddata();
      }
      return;
    }
  }
  else {
    if (*(char *)(param_1 + 7) != '\x01') {
      halt_baddata();
    }
    func_0x00134ebc(param_1,1);
    sVar1 = *(short *)(param_1 + 0x42);
    *(short *)(param_1 + 0x42) = sVar1 + -1;
    if (sVar1 != 1) {
      return;
    }
    if ((*(short *)(param_1 + 0x40) == 0) && (sVar1 = func_0x00135250(param_1,1), sVar1 != 0)) {
      *(undefined2 *)(param_1 + 0x42) = 0x3c;
      *(undefined2 *)(param_1 + 0x40) = 1;
      *(undefined2 *)(param_1 + 0x44) = 0xf000;
      halt_baddata();
    }
  }
  *(undefined1 *)(param_1 + 5) = 2;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}

