// FUN_08022fc4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08022fc4(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  short sVar4;
  
  uVar3 = _DAT_800ecf80;
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        return;
      }
      if (bVar1 == 3) {
        func_0x0007a624(param_1);
        return;
      }
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xb) = 0x10;
    *(undefined2 *)(param_1 + 0x5a) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
    func_0x00077b38(param_1,0x80144360,9);
    *(undefined2 *)(param_1 + 0x40) = 0xf;
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    *(undefined2 *)(param_1 + 0x5c) = 0;
    *(undefined1 *)(param_1 + 0x47) = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x42) = 0;
    if (*(char *)(param_1 + 5) == '\x02') {
      *(undefined2 *)(param_1 + 0x2e) = 0x1194;
      *(undefined2 *)(param_1 + 0x32) = 0xe4fd;
      *(undefined2 *)(param_1 + 0x36) = 0x24b8;
    }
    func_0x0011c31c(param_1);
  }
  if (DAT_800bf816 == '\0') {
    *(undefined1 *)(param_1 + 4) = 3;
  }
  else {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077b5c(param_1);
    bVar1 = *(byte *)(param_1 + 5);
    if (bVar1 == 1) {
      if (*(char *)(param_1 + 6) == '\0') {
        *(undefined2 *)(param_1 + 0x50) = 0xfff0;
        *(undefined2 *)(param_1 + 0x44) = 0x20;
        *(short *)(param_1 + 0x48) = (short)(0x1194 - *(short *)(param_1 + 0x2e) >> 5);
        *(short *)(param_1 + 0x4a) = (short)(-0x1b03 - *(short *)(param_1 + 0x32) >> 5);
        *(short *)(param_1 + 0x4c) = (short)(0x24b8 - *(short *)(param_1 + 0x36) >> 5);
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(char *)(param_1 + 6) != '\x01') {
        halt_baddata();
      }
      *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + *(short *)(param_1 + 0x48);
      *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + *(short *)(param_1 + 0x4c);
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x4a);
      sVar2 = *(short *)(param_1 + 0x44);
      sVar4 = *(short *)(param_1 + 0x50) + 1;
      *(short *)(param_1 + 0x50) = sVar4;
      *(short *)(param_1 + 0x44) = sVar2 + -1;
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + sVar4;
      if (sVar2 == 1) {
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      }
    }
    else if ((bVar1 < 2) && (bVar1 == 0)) {
      func_0x0011c204(param_1);
      halt_baddata();
    }
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 != 1) {
      return;
    }
    *(undefined2 *)(param_1 + 0x40) = 0xf;
    if (*(short *)(param_1 + 0x42) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00077b38(param_1,0x80144360,9);
    *(ushort *)(param_1 + 0x42) = *(ushort *)(param_1 + 0x42) ^ 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

