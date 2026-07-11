// FUN_0803107c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803107c(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    func_0x00041098(param_1);
    func_0x0004190c(param_1);
    bVar1 = *(byte *)(param_1 + 5);
    if (bVar1 == 1) {
      func_0x0012a894(param_1);
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (*(char *)(param_1 + 0x5e) == '\a') {
          func_0x0012a308(param_1);
        }
        else {
          func_0x0012a7a4(param_1);
        }
      }
    }
    else if (bVar1 == 2) {
      func_0x0012a520(param_1);
    }
    else if (bVar1 == 3) {
      func_0x0012a8f0(param_1);
      func_0x000518fc(param_1);
      *(undefined1 *)(param_1 + 0x2b) = 0;
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (1 < bVar1) {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
    }
    return;
  }
  if (bVar1 == 0) {
    func_0x00120004(param_1);
    if ((_DAT_800bfe56 & 0x80) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 0xb) = 0x40;
    *(undefined2 *)(param_1 + 0x80) = 0xc0;
    *(undefined2 *)(param_1 + 0x82) = 0x180;
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x19;
    iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecfb0,0x80131690);
    if (iVar2 != 0) {
      return;
    }
    *(undefined2 *)(param_1 + 0x56) = 0xc80;
    func_0x00040cdc(param_1,0x8014005c,0x800a3cd0);
    func_0x00041718(param_1,0x17,0);
    *(undefined2 *)(param_1 + 0x60) = 0xffff;
    *(undefined2 *)(param_1 + 0x62) = 0;
    if (DAT_800bf935 == 0xff) {
      if (DAT_800bfb2a == 0) {
        if (DAT_800bf936 == -1) {
          *(undefined1 *)(param_1 + 0x5e) = 7;
          *(undefined2 *)(param_1 + 0x40) = 0;
        }
        else if (DAT_800bfa2f == '\0') {
          *(undefined1 *)(param_1 + 0x5e) = 5;
        }
        else {
          *(undefined1 *)(param_1 + 0x5e) = 6;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 0x5e) = 4;
      if (9 < DAT_800bfb2a) {
        *(undefined2 *)(param_1 + 0x62) = 1;
        halt_baddata();
      }
    }
    else {
      if ((DAT_800bf935 & 2) != 0) {
        if (DAT_800bfb2a != 0) {
          *(undefined1 *)(param_1 + 0x5e) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (DAT_800bfa2a == '\0') {
          *(undefined1 *)(param_1 + 0x5e) = 1;
          halt_baddata();
        }
        *(undefined1 *)(param_1 + 0x5e) = 3;
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 0x5e) = 0;
      if (DAT_800bfb2a != 0) {
        *(undefined2 *)(param_1 + 0x62) = 1;
      }
    }
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

