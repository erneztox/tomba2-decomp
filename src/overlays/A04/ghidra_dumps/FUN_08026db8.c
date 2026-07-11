// FUN_08026db8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08026db8(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if ((param_1[3] == '\x06') &&
       ((((_DAT_1f800164 - 0x1a2d < 0x8fb && (0x157c < _DAT_1f800160)) && (_DAT_1f8000f2 < 0x400))
        || ((_DAT_1f800164 - 0x2ee1 < 2999 && (0x400 < _DAT_1f8000f2)))))) {
      func_0x0007703c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x0007778c(param_1);
    if (param_1[1] == '\0') {
      return;
    }
    if (param_1[3] != '\b') {
      func_0x000517f8(param_1);
      halt_baddata();
    }
    bVar1 = param_1[5];
    if (bVar1 == 2) {
      param_1[5] = 3;
      if (_DAT_800bf850 == 4) {
        *(short *)(param_1 + 0x86) = *(short *)(param_1 + 0x86) + 200;
        *(short *)(param_1 + 0x84) = *(short *)(param_1 + 0x84) + 200;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (_DAT_800bf850 == 3) {
        *(short *)(param_1 + 0x86) = *(short *)(param_1 + 0x86) + 0x78;
        *(short *)(param_1 + 0x84) = *(short *)(param_1 + 0x84) + 0x78;
        halt_baddata();
      }
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a) = 0x1000;
    }
    else if (bVar1 < 3) {
      param_1[5] = bVar1 + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00051844(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (((int)(uint)_DAT_800bfe56 >> (DAT_800bf870 & 0x1f) & 1U) != 0) {
        func_0x0011f700(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      cVar2 = param_1[3];
      if (cVar2 == '\x06') {
        if ((DAT_800bf9b4 & 1) != 0) {
          param_1[4] = 3;
          halt_baddata();
        }
      }
      else if (cVar2 == '\a') {
        if (DAT_800bf8cb == '\x01') {
          iVar4 = func_0x00072ddc(0,2,2,0x30);
          if (iVar4 != 0) {
            *(undefined4 *)(iVar4 + 0x1c) = 0x80138140;
            *(undefined1 *)(iVar4 + 3) = 1;
            *(undefined1 **)(iVar4 + 0x10) = param_1;
          }
          *(undefined2 *)(iVar4 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
          *(undefined2 *)(iVar4 + 0x32) = *(undefined2 *)(param_1 + 0x32);
          *(undefined2 *)(iVar4 + 0x36) = *(undefined2 *)(param_1 + 0x36);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else if ((cVar2 == '\0') && ('\0' < DAT_800bf929)) {
        param_1[4] = 3;
        halt_baddata();
      }
      iVar4 = func_0x00051b70(param_1,0xc,(int)*(short *)((uint)(byte)param_1[3] * 2 + -0x7febec04))
      ;
      if (iVar4 != 0) {
        return;
      }
      *param_1 = 1;
      param_1[0x29] = 0;
      param_1[4] = param_1[4] + '\x01';
      sVar3 = *(short *)((uint)(byte)param_1[3] * 2 + -0x7febec04);
      if (sVar3 == 0) {
        *(undefined2 *)(param_1 + 0x80) = 0x6e;
        *(undefined2 *)(param_1 + 0x82) = 0xdc;
      }
      else {
        if (sVar3 != 1) {
          if (sVar3 == 0x1f) {
            *(undefined2 *)(param_1 + 0x80) = 0x136;
            *(undefined2 *)(param_1 + 0x82) = 0x26c;
            *(undefined2 *)(param_1 + 0x84) = 0x1d4;
            *(undefined2 *)(param_1 + 0x86) = 0x1d4;
          }
          if (param_1[3] == '\x06') {
            func_0x0004766c(param_1);
            func_0x00048750(param_1);
            *(undefined2 *)(param_1 + 0x56) = _DAT_1f8001a0;
            param_1[0xd] = param_1[0xd] | 4;
            *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0xf0;
            halt_baddata();
          }
          param_1[0x2a] = 0;
          func_0x00041194(param_1,(int)*(short *)(param_1 + 0x86) - (int)*(short *)(param_1 + 0x84),
                          1,0);
          halt_baddata();
        }
        *(undefined2 *)(param_1 + 0x80) = 0x8c;
        *(undefined2 *)(param_1 + 0x82) = 0x118;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    *param_1 = 2;
    func_0x0007778c(param_1);
    if (param_1[5] == '\x05') {
      func_0x0011fbd4(param_1);
    }
    else {
      func_0x0011fa5c(param_1);
    }
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

