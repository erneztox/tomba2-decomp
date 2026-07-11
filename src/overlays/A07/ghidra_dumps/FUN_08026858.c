// FUN_08026858

/* WARNING: Control flow encountered bad instruction data */

void FUN_08026858(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[5];
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (param_1[0xbf] == -1) {
          param_1[5] = 1;
        }
        if (DAT_800bf816 == '\0') {
          return;
        }
        if (DAT_800bf817 != param_1[0xbf]) {
          return;
        }
        func_0x00130ba4(param_1);
        param_1[5] = param_1[5] + '\x01';
      }
    }
    else if (bVar1 == 2) {
      iVar2 = func_0x0011eff8(param_1);
      if (iVar2 == 0) {
        return;
      }
      param_1[5] = 1;
    }
    else if (bVar1 == 3) {
      if (((param_1[0xbf] == -1) || ((DAT_800bf816 != '\0' && (DAT_800bf817 == param_1[0xbf])))) &&
         (iVar2 = func_0x0007778c(param_1), iVar2 != 0)) {
        func_0x00076d68(param_1);
        if (((param_1[0x2b] & 2) != 0) || (DAT_1f800137 != '\0')) {
          *param_1 = 9;
          func_0x00041768(param_1,param_1[0x7b],8);
          param_1[5] = 1;
          halt_baddata();
        }
        func_0x0011f190(param_1);
      }
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1[0xbf] != -1) {
    if (DAT_800bf816 == '\0') {
      return;
    }
    if (DAT_800bf817 != param_1[0xbf]) {
      return;
    }
  }
  iVar2 = func_0x0007778c(param_1);
  if (iVar2 == 0) {
    return;
  }
  func_0x00076d68(param_1);
  if (DAT_1f800137 != '\0') {
    return;
  }
  if ((param_1[0x2b] & 2) == 0) {
    *param_1 = 3;
    param_1[6] = 0;
    param_1[5] = 3;
  }
  if (param_1[0x2b] != '\x03') {
    return;
  }
  func_0x00130d80(1);
  param_1[6] = 0;
  param_1[5] = 2;
  halt_baddata();
}

