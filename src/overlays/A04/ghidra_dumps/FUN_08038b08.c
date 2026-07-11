// FUN_08038b08

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08038b08(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x00116b48(param_1);
    if (param_1[5] == '\x01') {
      func_0x00131848(param_1);
    }
    if (param_1[1] != '\0') {
      func_0x0004190c(param_1);
      func_0x000518fc(param_1);
    }
    param_1[0x2b] = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar2 = func_0x00130290(param_1);
      if (iVar2 == 0) {
        return;
      }
      *param_1 = 1;
      param_1[0x7b] = 0;
      func_0x000416a8(param_1,0xffffffff,0);
      func_0x00041718(param_1,0xe2,0);
      param_1[0x2a] = 3;
      func_0x00041194(param_1,0x50,1,0);
      param_1[4] = param_1[4] + '\x01';
    }
  }
  else if (bVar1 == 2) {
    iVar2 = func_0x00116b48(param_1);
    if (iVar2 != 0) {
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
      _DAT_800e7eae = 0x14c1;
      _DAT_800e7eb6 = 0x3a3b;
      _DAT_800e7eb2 = 0xdf30;
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x2e) = 0x1473;
      *(undefined2 *)(param_1 + 0x36) = 0x3b26;
      *(undefined2 *)(param_1 + 0x84) = 0x80;
      *(undefined2 *)(param_1 + 0x86) = 0xd0;
      *(undefined2 *)(param_1 + 0x32) = 0xdf30;
      param_1[0xbe] = 1;
      *(undefined2 *)(param_1 + 0x4a) = 0;
      *(undefined2 *)(param_1 + 0x50) = 0x180;
      func_0x0004130c(param_1,0);
      if (param_1[0x46] != '\x19') {
        func_0x000416a8(param_1,0xffffffff,0);
        func_0x00041718(param_1,0x19,0);
      }
      param_1[4] = 1;
      param_1[5] = 1;
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

