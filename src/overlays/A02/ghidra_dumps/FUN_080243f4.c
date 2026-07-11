// FUN_080243f4

/* WARNING: Control flow encountered bad instruction data */

void FUN_080243f4(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[5];
  if (bVar1 == 1) {
    iVar2 = func_0x0011cd14(param_1);
    if (iVar2 == 0) {
      return;
    }
    param_1[5] = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar2 = func_0x0007778c(param_1);
      if ((iVar2 != 0) && (func_0x00076d68(param_1), DAT_1f800137 == '\0')) {
        if ((param_1[0x2b] & 2) == 0) {
          *param_1 = 3;
          param_1[6] = 0;
          param_1[5] = 2;
        }
        if (param_1[0x2b] == '\x03') {
          func_0x00042354(1,1);
          param_1[6] = 0;
          param_1[5] = param_1[5] + '\x01';
          halt_baddata();
        }
      }
      return;
    }
  }
  else if (bVar1 == 2) {
    iVar2 = func_0x0007778c(param_1);
    if (iVar2 == 0) {
      return;
    }
    func_0x00076d68(param_1);
    if (((param_1[0x2b] & 2) == 0) && (DAT_1f800137 == '\0')) {
      func_0x0011ce8c(param_1);
      return;
    }
    *param_1 = 9;
    func_0x00041768(param_1,param_1[0x7b],8);
    param_1[5] = 0;
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

