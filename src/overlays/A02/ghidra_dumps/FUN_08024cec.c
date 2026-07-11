// FUN_08024cec

/* WARNING: Control flow encountered bad instruction data */

void FUN_08024cec(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    func_0x00041098(param_1);
    func_0x0004190c(param_1);
    bVar1 = *(byte *)(param_1 + 5);
    if (bVar1 == 1) {
      func_0x0011e2d8(param_1);
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x0011de1c(param_1);
      }
    }
    else if (bVar1 == 2) {
      func_0x0011e3a8(param_1);
      if (*(char *)(param_1 + 1) != '\0') {
        func_0x000518fc(param_1);
      }
      *(undefined1 *)(param_1 + 0x2b) = 0;
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x00051b04(*(undefined4 *)(param_1 + (*(byte *)(param_1 + 9) - 1) * 4 + 0xc0),0x1b,3);
      func_0x00040cdc(param_1,0x80139240,0x800a3cc0);
      if (DAT_800bf8be != -1) {
        *(undefined1 *)(param_1 + 0x5e) = 0xff;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 0x5e) = 0;
      func_0x00041718(param_1,0x21,0);
      *(undefined2 *)(param_1 + 0x56) = 0x300;
      *(undefined2 *)(param_1 + 0x40) = 0x78;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 != 2) {
    if (bVar1 != 3) {
      halt_baddata();
    }
    func_0x0007a624(param_1);
  }
  return;
}

