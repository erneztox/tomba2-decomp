// FUN_0802735c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802735c(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      if (param_1[0x5f] == '\0') {
        param_1[5] = 0;
      }
      else if (*(short *)(param_1 + 0x40) == 0) {
        *(undefined2 *)(param_1 + 0x44) = 0xfc00;
        param_1[5] = param_1[5] + '\x01';
      }
      else {
        *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 < 2) {
      if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (param_1[0x5f] != '\0') {
        param_1[5] = 1;
        *(undefined2 *)(param_1 + 0x40) = 10;
        *(undefined2 *)(param_1 + 0x4e) = 0;
        halt_baddata();
      }
    }
    else {
      if (bVar1 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      sVar2 = *(short *)(param_1 + 0x44);
      *(short *)(param_1 + 0x44) = sVar2 + -0x80;
      if ((short)(sVar2 + -0x80) < -0x1000) {
        *(undefined2 *)(param_1 + 0x44) = 0xf000;
      }
      func_0x00041a1c(param_1,1);
      iVar3 = func_0x0004954c(param_1,(int)-*(short *)(param_1 + 0x80),0xffffff60);
      if (iVar3 != 0) {
        param_1[5] = param_1[5] + '\x01';
      }
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x10;
      func_0x00041938(param_1,0,(int)*(short *)(param_1 + 0x86) - (int)*(short *)(param_1 + 0x84));
    }
    param_1[0x5f] = 0;
    param_1[0x29] = 0;
    param_1[1] = 1;
    func_0x00077ebc(param_1);
    func_0x000517f8(param_1);
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
      iVar3 = func_0x00051b70(param_1,0xc,0xd);
      if (iVar3 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x80) = 0xa0;
      *(undefined2 *)(param_1 + 0x86) = 0x140;
      *(undefined2 *)(param_1 + 0x84) = 0x140;
      *(undefined2 *)(param_1 + 0x82) = 0x140;
      param_1[0x2a] = 0x2b;
      *param_1 = 1;
      param_1[0x5f] = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      param_1[0x29] = 0;
      param_1[4] = param_1[4] + '\x01';
      func_0x00041194(param_1,(int)*(short *)(param_1 + 0x86) - (int)*(short *)(param_1 + 0x84),0,0)
      ;
      func_0x0004130c(param_1,1);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

