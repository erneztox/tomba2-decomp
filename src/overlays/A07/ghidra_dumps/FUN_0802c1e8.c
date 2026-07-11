// FUN_0802c1e8

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802c1e8(undefined1 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  
  bVar1 = param_1[5];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        param_1[1] = 1;
        func_0x00077e7c(param_1);
        func_0x00041098(param_1);
        if (param_1[0x70] == -1) {
          if (param_1[6] == '\0') {
            iVar3 = func_0x00130cf8();
            if (iVar3 != 0) {
              uVar2 = 0x1a;
              if (DAT_800bf8dc == '\0') {
                uVar2 = 0x18;
              }
              param_1[0x7a] = uVar2;
              func_0x00040d68(param_1,0x801347d8);
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
          iVar3 = func_0x00041438(param_1,0x800,0x100);
          if (iVar3 != 0) {
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
          DAT_800bfa2e = 4;
          param_1[0x5e] = 4;
          param_1[5] = 0;
        }
      }
      goto LAB_0802c448;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *param_1 = 9;
    param_1[0x7b] = 0x17;
    param_1[0x28] = param_1[0x28] | 0x80;
    func_0x00041718(param_1,0x17,0);
    *(undefined2 *)(param_1 + 0x2e) = 0x8a8;
    *(undefined2 *)(param_1 + 0x32) = 0xf578;
    *(undefined2 *)(param_1 + 0x36) = 0x1480;
    *(undefined2 *)(param_1 + 0x56) = 0x800;
    param_1[6] = 0;
    param_1[5] = param_1[5] + '\x01';
  }
  if (DAT_800bfa2c != '\0') {
    func_0x00040d68(param_1,0x80134cbc);
    param_1[0x70] = 2;
    param_1[6] = 0;
    param_1[5] = 3;
    func_0x0007778c();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (DAT_800bf816 == '\0') {
    return;
  }
  if (DAT_800bf817 != '\x06') {
    return;
  }
  func_0x0007778c(param_1);
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
LAB_0802c448:
  func_0x0004190c(param_1);
  return;
}

