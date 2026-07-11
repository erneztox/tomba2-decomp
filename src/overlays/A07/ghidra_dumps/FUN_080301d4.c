// FUN_080301d4

/* WARNING: Control flow encountered bad instruction data */

void FUN_080301d4(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  if (DAT_800bf8db == -1) {
    param_1[0x5e] = 2;
    param_1[5] = 0;
    halt_baddata();
  }
  bVar1 = param_1[5];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      param_1[1] = 1;
      func_0x00077e7c(param_1);
      func_0x0004190c(param_1);
      func_0x00041098(param_1);
      if (param_1[0x70] != -1) {
        return;
      }
      if (param_1[6] == '\0') {
        iVar2 = func_0x00130d44();
        if ((iVar2 != 0) && (DAT_800bfae6 != '\0')) {
          param_1[0x7a] = 0x17;
          func_0x00040d68(param_1,0x80135764);
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
      iVar2 = func_0x00041438(param_1,0,0x100);
      if (iVar2 == 0) {
        return;
      }
      *param_1 = 9;
      param_1[5] = 1;
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x2e) = 0x13ba;
    *(undefined2 *)(param_1 + 0x32) = 0xf0ac;
    *(undefined2 *)(param_1 + 0x36) = 0x3034;
    *(undefined2 *)(param_1 + 0x56) = 0;
    param_1[6] = 0;
    param_1[0x28] = param_1[0x28] & 0x7f;
    param_1[5] = param_1[5] + '\x01';
  }
  iVar2 = func_0x00130cb0(param_1);
  if ((iVar2 != 0) && (param_1[0x2b] == '\x03')) {
    *param_1 = 3;
    func_0x00130dd8(1);
    func_0x00040d68(param_1,0x800a3d18);
    param_1[0x70] = 2;
    param_1[6] = 0;
    param_1[5] = param_1[5] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

