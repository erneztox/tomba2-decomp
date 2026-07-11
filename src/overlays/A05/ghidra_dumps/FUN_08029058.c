// FUN_08029058

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08029058(undefined1 *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    if (param_1[3] == '\0') {
      bVar2 = param_1[6];
      if (bVar2 == 1) {
        param_1[6] = 2;
        func_0x00040cdc(param_1,0x80140f7c,0x8013e798);
        param_1[0x70] = 1;
        halt_baddata();
      }
      if (bVar2 < 2) {
        if (bVar2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (param_1[0x2b] == '\x03') {
          param_1[6] = 1;
          DAT_800bfa11 = bVar1;
          func_0x00042354(1,3);
          halt_baddata();
        }
      }
      else {
        if (bVar2 != 2) {
          halt_baddata();
        }
        func_0x00041098(param_1);
        if (param_1[0x70] == -1) {
          param_1[6] = param_1[6] + '\x01';
          func_0x00042310();
          param_1[4] = 3;
          halt_baddata();
        }
      }
    }
    else {
      if (param_1[3] != '\x01') {
        halt_baddata();
      }
      func_0x00121ba0(param_1);
    }
    if (param_1[1] != '\0') {
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
      if ((_DAT_800bfe56 & 0x20) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar5 = func_0x000519e0(param_1,0xf,_DAT_800ecfb8,0x8013b894);
      uVar3 = _DAT_800ecf90;
      if (iVar5 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x86) = 0x100;
      param_1[0xb] = 0xf;
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x84) = 0x80;
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      *(undefined4 *)(param_1 + 0x3c) = uVar3;
      param_1[4] = param_1[4] + '\x01';
      if (param_1[3] == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (param_1[3] == '\x01') {
        if ((DAT_800bf9c3 & 0x80) == 0) {
          if (DAT_800bf9c3 == 0) {
            if (DAT_800bf92e == -1) {
              if (DAT_800bf92f == '\0') {
                halt_baddata();
              }
              uVar4 = 3;
              if (DAT_800bf92f == -1) {
                param_1[5] = 9;
                halt_baddata();
              }
            }
            else {
              if (DAT_800bf92d == -1) {
                param_1[5] = 6;
                func_0x00077c40(param_1,0x80140f7c,0x14);
                *(undefined2 *)(param_1 + 0x2e) = 0x3b60;
                *(undefined2 *)(param_1 + 0x32) = 0xd38e;
                *(undefined2 *)(param_1 + 0x36) = 0x46d2;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              uVar4 = 3;
              if (DAT_800bf92d == '\0') {
                param_1[5] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
            }
          }
          else if (DAT_800bf9c3 == 1) {
            if (DAT_800bf9ca == '\x02') {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (DAT_800bf9ca != '\t') {
              param_1[5] = 1;
              halt_baddata();
            }
            uVar4 = 8;
            if (DAT_800bf92f == -1) {
              halt_baddata();
            }
          }
          else {
            uVar4 = 2;
            if (DAT_800bf92f == -1) {
              uVar4 = 0xb;
            }
          }
          param_1[5] = uVar4;
          func_0x00077c40(param_1,0x80140f7c,1);
          *(undefined2 *)(param_1 + 0x80) = 100;
          *(undefined2 *)(param_1 + 0x82) = 200;
        }
        else {
          _DAT_800bf858 = 0xa8c;
          param_1[5] = 4;
          *(undefined2 *)(param_1 + 0x2e) = 0x3a80;
          *(undefined2 *)(param_1 + 0x32) = 0xd374;
          *(undefined2 *)(param_1 + 0x36) = 0x41d0;
          param_1[0x2a] = 0;
          func_0x00041194(param_1,(int)(((uint)*(ushort *)(param_1 + 0x86) -
                                        (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10,0,0);
          *(undefined2 *)(param_1 + 0x80) = 0x40;
          *(undefined2 *)(param_1 + 0x82) = 0x80;
          func_0x00077c40(param_1,0x80140f7c,1);
        }
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

