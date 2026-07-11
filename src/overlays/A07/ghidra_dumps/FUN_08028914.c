// FUN_08028914

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08028914(undefined1 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  
  bVar1 = param_1[5];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      param_1[1] = 1;
      func_0x00077e7c(param_1);
      func_0x00041098(param_1);
      if (param_1[0x70] == -1) {
        if (param_1[6] == '\0') {
          iVar4 = func_0x00130cf8();
          if (iVar4 != 0) {
            uVar2 = 9;
            if (DAT_800bf91b == -1) {
              uVar2 = 10;
            }
            param_1[0x7a] = uVar2;
            func_0x00040d68(param_1,0x80134020);
            param_1[0x70] = 2;
            param_1[6] = param_1[6] + '\x01';
            halt_baddata();
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (param_1[6] != '\x01') {
          halt_baddata();
        }
        iVar4 = func_0x00041438(param_1,0x400,0x100);
        if (iVar4 != 0) {
          *param_1 = 9;
          param_1[5] = 1;
        }
      }
      goto LAB_08028af4;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x2e) = 0x718;
    *(undefined2 *)(param_1 + 0x36) = 0x1868;
    uVar3 = 0xf560;
    if ((_DAT_800bfe56 & 0x80) == 0) {
      uVar3 = 0xf580;
    }
    *(undefined2 *)(param_1 + 0x32) = uVar3;
    *(undefined2 *)(param_1 + 0x56) = 0x400;
    param_1[0x28] = param_1[0x28] | 0x80;
    param_1[5] = param_1[5] + '\x01';
  }
  if (DAT_800bf816 == '\0') {
    return;
  }
  if (DAT_800bf817 != '\x06') {
    return;
  }
  iVar4 = func_0x0007778c(param_1);
  if (iVar4 == 0) {
    return;
  }
  if (param_1[0x2b] == '\x03') {
    func_0x00130d80(1);
    func_0x00040d68(param_1,0x800a3d18);
    *param_1 = 3;
    param_1[0x70] = 2;
    param_1[6] = 0;
    param_1[5] = param_1[5] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_08028af4:
  func_0x0004190c(param_1);
  return;
}

