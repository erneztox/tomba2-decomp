// FUN_080200d4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080200d4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  uVar2 = _DAT_800ecf80;
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined1 *)(param_1 + 4) = 3;
        halt_baddata();
      }
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xb) = 0x10;
    *(undefined2 *)(param_1 + 0x5a) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x3c) = uVar2;
    func_0x00077b38(param_1,0x8013ff68,9);
    *(undefined2 *)(param_1 + 0x2e) = 0x1589;
    *(undefined2 *)(param_1 + 0x32) = 0xf337;
    *(undefined2 *)(param_1 + 0x5c) = 0;
    *(undefined1 *)(param_1 + 0x47) = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x36) = 0x275b;
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
  }
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x00077b5c(param_1);
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      bVar1 = *(byte *)(param_1 + 6);
      if (bVar1 == 3) {
        func_0x00077b38(param_1,0x8013ff68,9);
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        halt_baddata();
      }
      if (3 < bVar1) {
        if (bVar1 != 5) {
          halt_baddata();
        }
        *(undefined2 *)(param_1 + 0x40) = 0xf;
        *(undefined2 *)(param_1 + 0x42) = 0;
        *(undefined1 *)(param_1 + 6) = 0;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        halt_baddata();
      }
      if (bVar1 != 1) {
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 2) {
      halt_baddata();
    }
    func_0x001192f0(param_1);
    if (*(char *)(param_1 + 6) == '\0') {
      func_0x001193dc(param_1);
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
  }
  func_0x0011926c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

