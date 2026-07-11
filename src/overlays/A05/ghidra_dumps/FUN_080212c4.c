// FUN_080212c4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080212c4(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    if (((int)(uint)_DAT_800bfe56 >> (DAT_800bf870 & 0x1f) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[3] = 2;
    iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecf94,0x8013b7a4);
    if (iVar2 != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
    func_0x00040cdc(param_1,0x80140f7c,0x800a3d18);
    *(undefined2 *)(param_1 + 0x80) = 0x78;
    *(undefined2 *)(param_1 + 0x82) = 0xf0;
    *(undefined2 *)(param_1 + 0x84) = 0x90;
    param_1[0xb] = 0;
    *(undefined2 *)(param_1 + 0x86) = 0x154;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0xe88;
    bVar1 = param_1[3];
    *param_1 = 9;
    param_1[0x2b] = 0;
    param_1[0x29] = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    param_1[0xb] = param_1[0xb] & 0xc0 | 0x80;
    if (bVar1 == 1) {
      *(undefined4 *)(param_1 + 0x2c) = 0x2cfd0000;
      *(undefined4 *)(param_1 + 0x30) = 0xd0300000;
      *(undefined4 *)(param_1 + 0x34) = 0x484f0000;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined4 *)(param_1 + 0x2c) = 0x31fc0000;
        *(undefined4 *)(param_1 + 0x34) = 0x40cb0000;
        *(undefined4 *)(param_1 + 0x30) = 0xd0300000;
        param_1[0x7b] = 2;
        func_0x00041718(param_1,2,0);
        param_1[4] = param_1[4] + '\x01';
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (DAT_800bf8cd != '\0') {
      *(undefined4 *)(param_1 + 0x2c) = 0x31fc0000;
      *(undefined4 *)(param_1 + 0x34) = 0x40cb0000;
      if ((_DAT_800bf850 & 0xf) == 0) {
        param_1[5] = 5;
      }
      else {
        param_1[5] = 9;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined4 *)(param_1 + 0x2c) = 0x32890000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = param_1[3];
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      func_0x00119e24(param_1);
      halt_baddata();
    }
    if (bVar1 != 2) {
      halt_baddata();
    }
    func_0x0011a03c(param_1);
LAB_08021618:
    if (param_1[1] != '\0') {
      func_0x000518fc(param_1);
    }
    param_1[0x2b] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1[5] == '\0') {
    iVar2 = func_0x0007778c(param_1);
    if (iVar2 == 0) goto LAB_08021618;
    if (param_1[0x2b] == '\x03') {
      func_0x00042354(1,1);
      func_0x00040d68(param_1,0x8013d8ac);
      param_1[0x70] = 2;
      param_1[6] = 0;
      param_1[5] = param_1[5] + '\x01';
      halt_baddata();
    }
  }
  else {
    if (param_1[5] != '\x01') {
      halt_baddata();
    }
    param_1[1] = 1;
    func_0x00077e7c(param_1);
    if (param_1[0x70] == -1) {
      if (param_1[6] == '\0') {
        param_1[0x7a] = 0x18;
        func_0x00040d68(param_1,0x8013d8c4);
        param_1[0x70] = 2;
        param_1[6] = param_1[6] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (param_1[6] != '\x01') {
        halt_baddata();
      }
      param_1[5] = 0;
    }
  }
  func_0x00041098(param_1);
  func_0x0004190c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

