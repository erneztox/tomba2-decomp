// FUN_08033aa4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08033aa4(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    func_0x00041098(param_1);
    func_0x0004190c(param_1);
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      func_0x0012d000(param_1);
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x0012cf20(param_1);
      }
    }
    else if (bVar1 == 2) {
      func_0x0012d060(param_1);
    }
    else if (bVar1 == 3) {
      func_0x0012d144(param_1);
      param_1[0x2b] = 0;
      if (param_1[1] == '\0') {
        return;
      }
      func_0x000518fc(param_1);
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecfc4,0x8014159c);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
      func_0x00040cdc(param_1,0x80148790,0x800a3d90);
      if (DAT_800bf915 == -1) {
        func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0x1b,0xf);
        func_0x00041718(param_1,0,0);
        param_1[0x5e] = 5;
      }
      else {
        func_0x00041718(param_1,0xb,0);
        if (DAT_800bf914 == -1) {
          if (DAT_800bfb06 == '\0') {
            param_1[0x5e] = 3;
          }
          else {
            param_1[0x5e] = 4;
          }
        }
        else {
          if (DAT_800bf914 == '\0') {
            param_1[0x5e] = 0;
            *param_1 = 9;
            *(undefined2 *)(param_1 + 0x80) = 0x8c;
            *(undefined2 *)(param_1 + 0x82) = 0x118;
            *(undefined2 *)(param_1 + 0x84) = 0x78;
            *(undefined2 *)(param_1 + 0x86) = 0xf0;
            *(undefined2 *)(param_1 + 0x56) = 0x6d2;
            param_1[0x2b] = 0;
            param_1[0x29] = 0;
            *(undefined2 *)(param_1 + 0x54) = 0;
            *(undefined2 *)(param_1 + 0x58) = 0;
            param_1[4] = param_1[4] + '\x01';
            if (DAT_1f800207 != '\'') {
              return;
            }
            param_1[5] = 3;
            func_0x00040d68(param_1,0x80145ef8);
            param_1[0x70] = 1;
            *param_1 = 2;
            halt_baddata();
          }
          param_1[0x5e] = 1;
        }
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

