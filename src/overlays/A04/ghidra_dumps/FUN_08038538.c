// FUN_08038538

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08038538(undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (param_1[5] == '\0') {
      func_0x00130f7c(param_1);
    }
    else if (param_1[5] == '\x02') {
      func_0x00131248(param_1);
      if (3 < DAT_1f800207 - 0x16) {
        func_0x00116b48(param_1);
        if (param_1[1] != '\0') {
          func_0x0004190c(param_1);
          func_0x000518fc(param_1);
        }
        param_1[0x29] = 0;
        param_1[0x2b] = 0;
        halt_baddata();
      }
      func_0x0007778c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar4 = func_0x0012ff68(param_1);
      if (iVar4 == 0) {
        return;
      }
      param_1[0x7b] = 2;
      if (param_1[0x46] != -0x1e) {
        func_0x000416a8(param_1,0xffffffff,0);
        func_0x00041718(param_1,0xe2,0);
      }
      param_1[0x29] = 0;
      param_1[6] = 0;
      if ((DAT_800bf929 & 8) == 0) {
        *(undefined2 *)(param_1 + 0x2e) = 0xfc0;
        *(undefined2 *)(param_1 + 0x32) = 0xd87c;
        *(undefined2 *)(param_1 + 0x36) = 0x2d1e;
        *param_1 = 2;
        param_1[0x2a] = 0x15;
        param_1[0xb] = param_1[0xb] & 0x3f;
        func_0x0004766c();
        *(undefined2 *)(param_1 + 0x56) = 0xc00;
        param_1[5] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x2e) = 0x1000;
      *(undefined2 *)(param_1 + 0x32) = 0xdb89;
      *(undefined2 *)(param_1 + 0x36) = 0x27de;
      *param_1 = 1;
      param_1[0x2a] = 0x13;
      func_0x00041194(param_1,0x60,1,1);
      func_0x0004130c(param_1,1);
      *(undefined2 *)(param_1 + 0x56) = 0x400;
      param_1[5] = 1;
      param_1[4] = param_1[4] + '\x01';
    }
  }
  else if (bVar1 == 2) {
    iVar4 = func_0x00116b48(param_1);
    if (iVar4 != 0) {
      func_0x0004190c(param_1);
      func_0x000518fc(param_1);
    }
    if (param_1[5] == '\x01') {
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
    else {
      if (param_1[5] != '\x03') {
        return;
      }
      func_0x00042354(1,1);
      uVar3 = _DAT_800e7eb4;
      _DAT_800e7eb0 = CONCAT22(0xda26,_DAT_800e7eb0);
      uVar2 = _DAT_800e7eb0;
      *(undefined4 *)(param_1 + 0x2c) = _DAT_800e7eac;
      *(undefined4 *)(param_1 + 0x30) = uVar2;
      *(undefined4 *)(param_1 + 0x34) = uVar3;
      *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + 100;
      _DAT_800e7eb4 = CONCAT22(_DAT_800e7eb6 + -100,_DAT_800e7eb4);
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x84) = 0x80;
      *(undefined2 *)(param_1 + 0x86) = 0xe0;
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

