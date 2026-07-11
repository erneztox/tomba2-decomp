// FUN_0802909c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802909c(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    bVar1 = param_1[3];
    if (bVar1 == 1) {
      func_0x001217e4(param_1);
      halt_baddata();
    }
    if (bVar1 < 2) {
      if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      bVar1 = param_1[5];
      if (bVar1 == 1) {
        func_0x001210cc(param_1);
        halt_baddata();
      }
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          halt_baddata();
        }
        if ((DAT_800bf871 == '\x02') && (DAT_800bfa2b != '\0')) {
          param_1[5] = 2;
          halt_baddata();
        }
        param_1[5] = 1;
        halt_baddata();
      }
      if (bVar1 != 2) {
        halt_baddata();
      }
      iVar2 = func_0x001214c0(param_1);
      if (iVar2 != 0) {
        param_1[5] = 1;
        DAT_800bfa2b = 0;
        halt_baddata();
      }
    }
    else {
      if (bVar1 != 2) {
        halt_baddata();
      }
      func_0x00121c1c(param_1);
    }
    func_0x0007778c(param_1);
    param_1[0x29] = 0;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      param_1[4] = 1;
      *param_1 = 1;
      if (param_1[3] == 0) {
        *(undefined2 *)(param_1 + 0x80) = 0x78;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((byte)param_1[3] < 3) {
        *(undefined2 *)(param_1 + 0x80) = 0x40;
        *(undefined2 *)(param_1 + 0x82) = 0x80;
        *(undefined2 *)(param_1 + 0x84) = 200;
        *(undefined2 *)(param_1 + 0x86) = 400;
      }
      param_1[0x29] = 0;
      func_0x0004766c(param_1);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

