// FUN_0802e52c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802e52c(undefined1 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((param_1[3] == '\x01') && (DAT_800bf9d5 == '\x03')) {
    *(undefined2 *)(param_1 + 0x2e) = 0x1d5b;
    *(undefined2 *)(param_1 + 0x32) = 0xf546;
    *(undefined2 *)(param_1 + 0x36) = 0x39ec;
    param_1[3] = 0;
  }
  if (param_1[5] == '\0') {
    iVar2 = func_0x00130cb0(param_1);
    if ((iVar2 != 0) && (param_1[0x2b] == '\x03')) {
      *param_1 = 3;
      func_0x00042354(1,1);
      func_0x00040d68(param_1,0x800a3d08);
      param_1[0x70] = 2;
      param_1[6] = 0;
      param_1[5] = param_1[5] + '\x01';
      halt_baddata();
    }
  }
  else {
    if (param_1[5] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[1] = 1;
    func_0x00077e7c(param_1);
    func_0x0004190c(param_1);
    if (param_1[0x70] == -1) {
      if (param_1[6] == '\0') {
        uVar1 = 0xb;
        if ((((DAT_800bf8d8 != '\0') && (uVar1 = 0xc, DAT_800bf8d8 == -1)) &&
            (uVar1 = 0xd, DAT_800bfac4 != '\0' || DAT_800bfac5 != '\0')) &&
           ((uVar1 = 0xf, DAT_800bf934 == -1 && (uVar1 = 0x10, DAT_800bf8dd == -1)))) {
          uVar1 = 0x11;
        }
        param_1[0x7a] = uVar1;
        func_0x00040d68(param_1,0x80134fdc);
        param_1[0x70] = 2;
        param_1[6] = param_1[6] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (param_1[6] != '\x01') {
        halt_baddata();
      }
      iVar2 = func_0x00041438(param_1,0,0x100);
      if (iVar2 != 0) {
        *param_1 = 9;
        param_1[5] = 0;
      }
    }
    func_0x00041098(param_1);
  }
  return;
}

