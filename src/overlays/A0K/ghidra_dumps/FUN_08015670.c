// FUN_08015670

/* WARNING: Control flow encountered bad instruction data */

void FUN_08015670(byte *param_1)

{
  byte bVar1;
  int iVar2;
  
  DAT_1f80027a = 1;
  param_1[0x17b] = 1;
  if ((2 < DAT_800bf80a) && (param_1[6] != 0)) {
    func_0x0005fb54();
    halt_baddata();
  }
  bVar1 = param_1[6];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x00076d68(param_1);
        return;
      }
      iVar2 = func_0x00076d68(param_1);
      if (iVar2 != 1) {
        return;
      }
      if (DAT_800bf80a != 2) {
        param_1[6] = param_1[6] + 1;
        DAT_800bf80a = 0;
        DAT_800bf80e = 1;
        halt_baddata();
      }
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      *param_1 = *param_1 & 1;
      func_0x00054d14(param_1,2,5);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    DAT_800bf80e = 0;
    func_0x0004ed0c(DAT_800bf80b,1);
    if (DAT_800bf80a == 2) {
      *param_1 = *param_1 | 2;
    }
    else if (DAT_800bf80a == 3) {
      func_0x00054198(param_1);
      func_0x0005fa84(param_1);
      halt_baddata();
    }
    func_0x00054d14(param_1,0x72,0);
    param_1[6] = param_1[6] + 1;
  }
  iVar2 = func_0x00076d68(param_1);
  if (iVar2 == 1) {
    param_1[6] = param_1[6] + 1;
    func_0x00054d14(param_1,0x73,2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

