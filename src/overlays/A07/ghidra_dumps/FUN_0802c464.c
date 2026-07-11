// FUN_0802c464

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802c464(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  if (DAT_800bf8db == -1) {
    DAT_800bfa2e = 5;
    *(undefined2 *)(param_1 + 0x80) = 0xc0;
    *(undefined2 *)(param_1 + 0x82) = 0x180;
    param_1[5] = 0;
    param_1[0x5e] = 5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = param_1[5];
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    if (param_1[0x2b] != '\x03') goto LAB_0802c648;
    func_0x00130d80(1);
    func_0x00040d68(param_1,0x800a3d18);
    *param_1 = 3;
    param_1[0x70] = 2;
    param_1[6] = 0;
    param_1[5] = param_1[5] + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      param_1[0xb] = 0x40;
      *(undefined2 *)(param_1 + 0x80) = 0x180;
      *(undefined2 *)(param_1 + 0x82) = 0x300;
      *(undefined2 *)(param_1 + 0x56) = 0;
      param_1[0x7b] = 0x17;
      param_1[0x28] = param_1[0x28] & 0x7f;
      func_0x00041718(param_1,0x17,0);
      *(undefined2 *)(param_1 + 0x2e) = 0x1194;
      *(undefined2 *)(param_1 + 0x32) = 0xf578;
      *(undefined2 *)(param_1 + 0x36) = 0x1a2e;
      *(undefined2 *)(param_1 + 0x56) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    param_1[1] = 1;
    func_0x00077e7c(param_1);
    func_0x00041098(param_1);
    if (param_1[0x70] != -1) {
LAB_0802c648:
      func_0x0004190c(param_1);
      return;
    }
    if (param_1[6] == '\0') {
      iVar2 = func_0x00130cf8();
      if (iVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_1[0x7a] = 4;
      func_0x00040d68(param_1,0x80134820);
      param_1[0x70] = 2;
      param_1[6] = param_1[6] + '\x01';
    }
    else if (param_1[6] == '\x01') {
      iVar2 = func_0x00041438(param_1,0,0x100);
      if (iVar2 != 0) {
        *param_1 = 9;
        param_1[5] = 1;
      }
      goto LAB_0802c648;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

