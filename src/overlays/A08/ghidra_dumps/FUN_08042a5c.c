// FUN_08042a5c

/* WARNING: Control flow encountered bad instruction data */

void FUN_08042a5c(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  if (DAT_1f800207 == '-') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = 2;
  if (param_1[5] == '\0') {
    iVar2 = func_0x0007778c(param_1);
    if ((iVar2 != 0) && (param_1[0x2b] == '\x03')) {
      func_0x00042354(1,2);
      func_0x00040d68(param_1,0x800a3d70);
      param_1[0x70] = 2;
      param_1[6] = 0;
      param_1[5] = 1;
      halt_baddata();
    }
  }
  else {
    if (param_1[5] != '\x01') {
      halt_baddata();
    }
    param_1[1] = 1;
    func_0x00077e7c(param_1);
    func_0x00041098(param_1);
    if (param_1[0x70] == -1) {
      bVar1 = param_1[6];
      if (bVar1 != 1) {
        if (bVar1 < 2) {
          if (bVar1 == 0) {
            if (DAT_800bfb51 != '\0') {
              func_0x00040d68(param_1,0x80147af4);
              param_1[6] = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            param_1[0x7a] = 0xc;
            func_0x00040d68(param_1,0x8014795c);
            param_1[6] = 1;
            param_1[0x70] = 2;
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar1 != 2) {
          halt_baddata();
        }
        param_1[0x5e] = 3;
      }
      param_1[5] = 0;
    }
  }
  func_0x0004190c(param_1);
  return;
}

