// FUN_080224e4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080224e4(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    if (param_1[5] == '\0') {
      if (param_1[0x2b] == '\x01') {
        func_0x00040cdc(param_1,0,0x80133114);
        param_1[0x70] = 2;
        *param_1 = 2;
        param_1[0x2b] = 0;
        param_1[5] = param_1[5] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (param_1[5] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (param_1[0x70] == -1) {
        DAT_800bfa45 = DAT_800bfa45 | 2;
        param_1[4] = 2;
      }
      func_0x00041098(param_1);
    }
    func_0x0004b374(param_1,0);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
      func_0x00077b38(param_1,0x8013ff68,4);
      param_1[0xb] = 0x10;
      *(undefined2 *)(param_1 + 0x80) = 0xaa;
      *(undefined2 *)(param_1 + 0x82) = 0x154;
      *(undefined2 *)(param_1 + 0x84) = 100;
      param_1[0xd] = 0;
      *(undefined2 *)(param_1 + 0x5c) = 0;
      *(undefined2 *)(param_1 + 0x5a) = 0;
      param_1[0x47] = 0;
      param_1[8] = 0;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x86) = 200;
      param_1[0x2b] = 0;
      func_0x0004b354(param_1,0);
      param_1[4] = param_1[4] + '\x01';
    }
  }
  else if (bVar1 == 2) {
    func_0x00042310();
    *(undefined2 *)(param_1 + 0x68) = 0x33;
    func_0x0004a3d4(param_1);
    param_1[4] = 3;
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

