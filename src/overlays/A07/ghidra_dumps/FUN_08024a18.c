// FUN_08024a18

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08024a18(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    param_1[1] = 1;
    func_0x00077e7c(param_1);
    func_0x00041098(param_1);
    func_0x0004190c(param_1);
    func_0x000518fc(param_1);
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      func_0x0011dcec(param_1);
      param_1[0x2b] = 0;
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x0011dc14(param_1);
        param_1[0x2b] = 0;
      }
      else {
        param_1[0x2b] = 0;
      }
    }
    else if (bVar1 == 2) {
      func_0x0011dd48(param_1);
      param_1[0x2b] = 0;
    }
    else {
      param_1[0x2b] = 0;
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        return;
      }
      if (bVar1 == 3) {
        func_0x0007a624(param_1);
        return;
      }
      halt_baddata();
    }
    if (bVar1 == 0) {
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
      if (DAT_800bf913 == -1) {
        iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecfbc,0x801318e8);
        if (iVar2 == 0) {
          func_0x00040cdc(param_1,0x8014005c,0x801333f0);
          func_0x00041718(param_1,0,0);
          param_1[0x5e] = 4;
          param_1[0xb] = 0x40;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecfc0,0x801318e8);
        if (iVar2 == 0) {
          *(undefined4 *)(*(int *)(param_1 + 200) + 0x40) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0xcc) + 0x40) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0xd4) + 0x40) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x40) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0xe0) + 0x40) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x40) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x40) = 0;
          func_0x00040cdc(param_1,0x8014005c,0x801333f0);
          if (DAT_800bf913 == '\0') {
            func_0x00041718(param_1,0,0);
            param_1[0x5e] = 0;
            halt_baddata();
          }
          func_0x00041718(param_1,0xb,0);
          param_1[0x5e] = 1;
          *param_1 = 9;
          *(undefined2 *)(param_1 + 0x80) = 0x8c;
          *(undefined2 *)(param_1 + 0x82) = 0x118;
          *(undefined2 *)(param_1 + 0x84) = 0x8c;
          *(undefined2 *)(param_1 + 0x86) = 0x118;
          param_1[4] = param_1[4] + '\x01';
          halt_baddata();
        }
      }
      return;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

