// FUN_0802a2f8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802a2f8(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    func_0x00122f88(param_1);
    if (*(char *)(param_1 + 1) != '\0') {
      func_0x000518fc(param_1);
    }
    *(undefined1 *)(param_1 + 0x2b) = 0;
  }
  else {
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
      func_0x00040cdc(param_1,0x8014005c,0x800a3d18);
      if ((_DAT_800bfe56 & 0x80) == 0) {
        *(undefined1 *)(param_1 + 0x7b) = 0x17;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 0x7b) = 1;
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x20;
      func_0x00041718(param_1,*(undefined1 *)(param_1 + 0x7b),0);
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0x578;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

