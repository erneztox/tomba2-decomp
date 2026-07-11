// FUN_080271a8

/* WARNING: Control flow encountered bad instruction data */

void FUN_080271a8(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  undefined1 uVar3;
  int iVar4;
  
  if (param_1[5] == '\0') {
    iVar4 = func_0x0007778c(param_1);
    if (iVar4 == 0) {
      return;
    }
    func_0x0004190c(param_1);
    if (DAT_1f800137 != '\0') {
      return;
    }
    if (param_1[0x2b] == '\x03') {
      *param_1 = 3;
      func_0x00042354(1,1);
      func_0x00040d68(param_1,0x800a3d18);
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
    func_0x0004190c(param_1);
    if (param_1[0x70] == -1) {
      bVar1 = param_1[6];
      if (bVar1 == 1) {
        *(undefined2 *)(param_1 + 0x40) = 0x10;
        param_1[6] = param_1[6] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          halt_baddata();
        }
        if (DAT_800bf901 != '\0') {
          uVar3 = 0xb;
          if (DAT_800bf901 == -1) {
            uVar3 = 0xc;
          }
          param_1[0x7a] = uVar3;
        }
        func_0x00040d68(param_1,0x8012b4e0);
        param_1[0x70] = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 != 2) {
        halt_baddata();
      }
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if (sVar2 == 1) {
        *param_1 = 9;
        param_1[5] = 0;
      }
    }
  }
  func_0x00041098(param_1);
  return;
}

