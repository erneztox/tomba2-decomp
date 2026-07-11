// FUN_0802bfa8

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802bfa8(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
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
        bVar1 = param_1[6];
        if (bVar1 == 1) {
          func_0x00040d68(param_1,0x80134acc);
          param_1[0x70] = 2;
          param_1[6] = 2;
          halt_baddata();
        }
        if (bVar1 < 2) {
          if (bVar1 != 0) {
            halt_baddata();
          }
          iVar2 = func_0x00041438(param_1,0x800,0x100);
          if (iVar2 != 0) {
            *param_1 = 9;
            param_1[5] = 1;
            halt_baddata();
          }
        }
        else {
          if (bVar1 != 2) {
            halt_baddata();
          }
          DAT_800bfa2e = 3;
          param_1[0x5e] = 3;
          param_1[6] = 0;
          param_1[5] = 0;
        }
      }
      goto LAB_0802c1c4;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *param_1 = 9;
    param_1[0x7b] = 0x17;
    func_0x00041718(param_1,0x17,0);
    *(undefined2 *)(param_1 + 0x2e) = 0x16a8;
    *(undefined2 *)(param_1 + 0x32) = 0xf322;
    *(undefined2 *)(param_1 + 0x36) = 0x1eaa;
    *(undefined2 *)(param_1 + 0x56) = 0x800;
    func_0x00130ba4(param_1);
    param_1[6] = 0;
    param_1[5] = param_1[5] + '\x01';
  }
  func_0x0007778c(param_1);
  if (DAT_800bf9d8 == '\n') {
    func_0x00040d68(param_1,0x800a3cd0);
    DAT_800bf9eb = DAT_800bf9eb + '\x01';
    param_1[0x70] = 2;
    param_1[6] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1[0x2b] == '\x03') {
    func_0x00130d80(3);
    iVar2 = func_0x00130cf8();
    if (iVar2 != 0) {
      func_0x00040d68(param_1,0x800a3cd0);
      DAT_800bf9eb = 0;
      DAT_800bf9d8 = 10;
      param_1[6] = 1;
      param_1[0x70] = 2;
      param_1[5] = param_1[5] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_1 = 3;
    func_0x00040d68(param_1,0x8013f730);
    param_1[6] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_0802c1c4:
  func_0x0004190c(param_1);
  return;
}

