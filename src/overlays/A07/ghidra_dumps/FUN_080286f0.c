// FUN_080286f0

/* WARNING: Control flow encountered bad instruction data */

void FUN_080286f0(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[5];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        param_1[1] = 1;
        func_0x00077e7c(param_1);
        func_0x00041098(param_1);
        if (param_1[0x70] == -1) {
          if (param_1[6] == '\0') {
            iVar2 = func_0x00130cf8();
            if (iVar2 != 0) {
              param_1[0x7a] = 3;
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
          iVar2 = func_0x00041438(param_1,0x400,0x100);
          if (iVar2 != 0) {
            *param_1 = 9;
            param_1[5] = 1;
            halt_baddata();
          }
        }
      }
      else {
        if (bVar1 != 3) {
          halt_baddata();
        }
        param_1[1] = 1;
        func_0x00077e7c(param_1);
        func_0x00041098(param_1);
        if (param_1[0x70] == -1) {
          param_1[0x5e] = 3;
          param_1[5] = 0;
          param_1[0x28] = param_1[0x28] | 0x80;
        }
      }
      goto LAB_080288f4;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x56) = 0x400;
    *(undefined2 *)(param_1 + 0x2e) = 0x2244;
    *(undefined2 *)(param_1 + 0x32) = 0xf580;
    *(undefined2 *)(param_1 + 0x36) = 0x3802;
    param_1[0x28] = param_1[0x28] & 0x7f;
    param_1[5] = param_1[5] + '\x01';
  }
  iVar2 = func_0x0007778c(param_1);
  if (iVar2 == 0) {
    return;
  }
  if (DAT_800bfa2c == '\n') {
    func_0x00040d68(param_1,0x8013413c);
    param_1[0x70] = 2;
    param_1[6] = 0;
    param_1[5] = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1[0x2b] == '\x03') {
    func_0x00130d80(1);
    func_0x00040d68(param_1,0x800a3d18);
    *param_1 = 3;
    param_1[0x70] = 2;
    param_1[6] = 0;
    param_1[5] = param_1[5] + '\x01';
    halt_baddata();
  }
LAB_080288f4:
  func_0x0004190c(param_1);
  return;
}

