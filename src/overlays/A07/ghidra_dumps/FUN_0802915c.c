// FUN_0802915c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802915c(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    func_0x00041098(param_1);
    func_0x0004190c(param_1);
    bVar1 = *(byte *)(param_1 + 5);
    if (bVar1 == 1) {
      func_0x00122558(param_1);
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x001224e8(param_1);
      }
    }
    else if (bVar1 == 2) {
      func_0x001222a4(param_1);
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
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00040cdc(param_1,0x8014005c,0x800a3cd0);
    if ((_DAT_800bfe56 & 0x80) != 0) {
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x14;
    }
    func_0x00041718(param_1,0x17,0);
    if ((DAT_800bf939 & 0x20) == 0) {
      if (DAT_800bfb48 == '\0') {
        *(undefined1 *)(param_1 + 0x5e) = 0;
        *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 0x5e) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x5e) = 2;
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

