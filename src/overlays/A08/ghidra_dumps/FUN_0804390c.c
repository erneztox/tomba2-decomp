// FUN_0804390c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0804390c(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    param_1[1] = 1;
    func_0x00077e7c(param_1);
    func_0x00041098(param_1);
    func_0x0004190c(param_1);
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      func_0x0013cb14(param_1);
      param_1[0x2b] = 0;
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x0013cac0(param_1);
        param_1[0x2b] = 0;
      }
      else {
        param_1[0x2b] = 0;
      }
    }
    else {
      if (bVar1 == 2) {
        func_0x0013cb70(param_1);
        param_1[0x2b] = 0;
        func_0x000518fc(param_1);
        halt_baddata();
      }
      param_1[0x2b] = 0;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecf94,0x80141614);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
      func_0x00040cdc(param_1,0x80148790,0x800a3d90);
      func_0x00041718(param_1,0xb,0);
      *(undefined2 *)(param_1 + 0x56) = 0x140;
      if (DAT_800bf93d == 0xff) {
        param_1[0x5e] = 3;
        func_0x00041768(param_1,0,0);
      }
      else if ((DAT_800bf93d & 0x40) == 0) {
        param_1[0x5e] = 0;
      }
      else {
        if (DAT_800bfb59 == '\0') {
          param_1[0x5e] = 1;
          *param_1 = 9;
          *(undefined2 *)(param_1 + 0x80) = 0x8c;
          *(undefined2 *)(param_1 + 0x82) = 0x118;
          *(undefined2 *)(param_1 + 0x84) = 0x50;
          *(undefined2 *)(param_1 + 0x86) = 0x90;
          param_1[0x2b] = 0;
          param_1[0x29] = 0;
          *(undefined2 *)(param_1 + 0x54) = 0;
          *(undefined2 *)(param_1 + 0x56) = 0x800;
          *(undefined2 *)(param_1 + 0x58) = 0;
          param_1[4] = param_1[4] + '\x01';
          halt_baddata();
        }
        param_1[0x5e] = 2;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 != 2) {
    if (bVar1 != 3) {
      halt_baddata();
    }
    func_0x0007a624(param_1);
  }
  return;
}

