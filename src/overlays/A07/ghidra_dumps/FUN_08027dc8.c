// FUN_08027dc8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08027dc8(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    func_0x00041098(param_1);
    func_0x0004190c(param_1);
    bVar1 = *(byte *)(param_1 + 5);
    if (bVar1 == 1) {
      func_0x00120f38(param_1);
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x00120ec8(param_1);
      }
    }
    else if (bVar1 == 2) {
      func_0x00120fa4(param_1);
      func_0x000518fc(param_1);
      *(undefined1 *)(param_1 + 0x2b) = 0;
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x00040cdc(param_1,0x8014005c,0x800a3cd0);
      if ((_DAT_800bfe56 & 0x80) != 0) {
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x19;
      }
      func_0x00041718(param_1,0x17,0);
      *(undefined1 *)(param_1 + 0x5e) = DAT_800bf90f;
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

