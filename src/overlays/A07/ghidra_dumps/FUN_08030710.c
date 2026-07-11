// FUN_08030710

/* WARNING: Control flow encountered bad instruction data */

void FUN_08030710(undefined1 *param_1)

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
      func_0x0004190c(param_1);
      func_0x00041098(param_1);
      if (param_1[0x70] != -1) {
        return;
      }
      if (param_1[6] == '\0') {
        iVar2 = func_0x00130d44();
        if (iVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar2 = func_0x00128e04(param_1);
        if (iVar2 != 0) {
          iVar2 = 2;
          if ((DAT_800bf8dd != -1) &&
             (iVar2 = 0, (byte)(DAT_800bf8e4 | DAT_800bf8c7 | DAT_800bf8cf | DAT_800bf8d6) == 0xff))
          {
            iVar2 = 1;
          }
          if (iVar2 != 0) {
            if (iVar2 == 1) {
              param_1[0x7a] = 0x21;
              func_0x00040d68(param_1,0x80135764);
              param_1[0x70] = 2;
              param_1[6] = param_1[6] + '\x01';
              halt_baddata();
            }
            param_1[0x7a] = 0x22;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (param_1[6] != '\x01') {
        halt_baddata();
      }
      iVar2 = func_0x00041438(param_1,0x400,0x100);
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
    *(undefined2 *)(param_1 + 0x56) = 0x400;
    *(undefined2 *)(param_1 + 0x2e) = 0x1004;
    *(undefined2 *)(param_1 + 0x32) = 0xf0ac;
    *(undefined2 *)(param_1 + 0x36) = 0x2b60;
    param_1[6] = 0;
    param_1[0x28] = param_1[0x28] | 0x80;
    param_1[5] = param_1[5] + '\x01';
  }
  if ((((DAT_800bf816 != '\0') && (DAT_800bf817 == '\n')) &&
      (iVar2 = func_0x00130cb0(param_1), iVar2 != 0)) && (param_1[0x2b] == '\x03')) {
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

