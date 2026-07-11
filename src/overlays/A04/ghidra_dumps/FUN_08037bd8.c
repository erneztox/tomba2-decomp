// FUN_08037bd8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08037bd8(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (param_1[5] == '\x02') {
      func_0x001308e8(param_1);
    }
    iVar2 = func_0x00116b48(param_1);
    if (iVar2 != 0) {
      func_0x0004190c(param_1);
      func_0x000518fc(param_1);
    }
    param_1[0x29] = 0;
    param_1[0x2b] = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar2 = func_0x0012fbd8(param_1);
      if (iVar2 == 0) {
        return;
      }
      param_1[0x7b] = 5;
      if (param_1[0x46] != -0x1e) {
        func_0x000416a8(param_1,0xffffffff,0);
        func_0x00041718(param_1,0xe2,0);
      }
      param_1[0x29] = 0;
      if ((DAT_800bf929 & 2) == 0) {
        *(undefined2 *)(param_1 + 0x2e) = 0x10a7;
        *(undefined2 *)(param_1 + 0x32) = 0xe2d2;
        *(undefined2 *)(param_1 + 0x36) = 0x1940;
        *param_1 = 5;
        param_1[0x2a] = 0x24;
        param_1[0xb] = param_1[0xb] & 0x3f;
        func_0x00041194(param_1,0x80,0,0);
        param_1[5] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x2e) = 0x15c0;
      *(undefined2 *)(param_1 + 0x32) = 0xe318;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x36) = 0x12b7;
      param_1[0x2a] = 1;
      func_0x00041194(param_1,0x80,1,0);
      param_1[5] = 1;
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
      func_0x00041938(param_1,0,0x80);
      func_0x0004130c(param_1,1);
      param_1[4] = param_1[4] + '\x01';
    }
  }
  else if (bVar1 == 2) {
    iVar2 = func_0x00116b48(param_1);
    if (iVar2 != 0) {
      func_0x0004190c(param_1);
      func_0x000518fc(param_1);
    }
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      if (param_1[6] != '\0') {
        return;
      }
      *(undefined2 *)(param_1 + 0x86) = 0x60;
      *(undefined2 *)(param_1 + 0x84) = 0;
      if (param_1[0x46] != '\x15') {
        func_0x000416a8(param_1,0xe,0x80144404);
        func_0x00041718(param_1,0x15,0);
      }
      param_1[6] = param_1[6] + '\x01';
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x00130344(param_1);
        param_1[0x29] = 0;
      }
    }
    else {
      if (bVar1 != 3) {
        return;
      }
      func_0x00042354(1,1);
      _DAT_800e7eb2 = 0xe22f;
      _DAT_800e7eb6 = 0x1268;
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x36) = 0x132e;
      *(undefined2 *)(param_1 + 0x84) = 0x80;
      *(undefined2 *)(param_1 + 0x86) = 0x100;
      *(undefined2 *)(param_1 + 0x32) = 0xe22f;
      param_1[0xbe] = 1;
      *(undefined2 *)(param_1 + 0x4a) = 0;
      *(undefined2 *)(param_1 + 0x50) = 0x180;
      func_0x0004130c(param_1,0);
      if (param_1[0x46] != '\x19') {
        func_0x000416a8(param_1,0xffffffff,0);
        func_0x00041718(param_1,0x19,0);
      }
      param_1[4] = 1;
      param_1[5] = 2;
      param_1[6] = 0;
      param_1[0xb] = param_1[0xb] & 0x3f;
    }
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

