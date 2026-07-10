// FUN_00002ea4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002ea4(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if ((_DAT_800e7ffc & 0x1800000) == 0) {
      if (param_1[6] == '\0') {
        if (param_1[0x2b] == '\x03') {
          param_1[6] = 1;
          func_0x00042354(1,2);
          func_0x00040cdc(param_1,0x8010d904,0x8010d7e4);
          param_1[0x70] = 1;
          halt_baddata();
        }
      }
      else {
        if (param_1[6] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        func_0x00041098(param_1);
        if (param_1[0x70] == -1) {
          param_1[6] = 0;
          func_0x00042310();
        }
      }
    }
    else if ((byte)param_1[5] < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0000304c */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef6f50))();
      return;
    }
    iVar2 = func_0x0007778c(param_1);
    if (iVar2 != 0) {
      func_0x0004190c(param_1);
      func_0x000518fc(param_1);
    }
    param_1[0x2b] = 0;
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
      iVar2 = func_0x000519e0(param_1,0x10,_DAT_800ecfa0,0x8010d288);
      if (iVar2 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
      func_0x00077c40(param_1,0x8010d904,0);
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x80) = 0x8c;
      *(undefined2 *)(param_1 + 0x82) = 0x118;
      *(undefined2 *)(param_1 + 0x84) = 0x50;
      *(undefined2 *)(param_1 + 0x86) = 0x90;
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      param_1[4] = param_1[4] + '\x01';
      if (DAT_800bfa34 == '\0') {
        param_1[5] = 0;
      }
      else if (DAT_800bfa34 == '\x01') {
        param_1[5] = 2;
      }
      else {
        if (DAT_800bfa34 != -1) {
          return;
        }
        param_1[5] = 4;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

