// FUN_080352d8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080352d8(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  byte *pbVar4;
  
  bVar1 = param_1[4];
  pbVar4 = param_1 + 0x60;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *param_1 = 2;
        param_1[4] = 3;
        if (param_1[3] != '\0') {
          func_0x000313a0(0x906,param_1 + 0x2c,0xffffffe2,param_1 + 0x54);
          func_0x00074590(0x88,0x19,0xffffffce);
        }
      }
      else if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *param_1 = 1;
    if (param_1[3] != '\0') {
      *(undefined2 *)(param_1 + 0x82) = 0x32;
      *(undefined2 *)(param_1 + 0x86) = 0x32;
      param_1[0xb] = 0x20;
      *(undefined4 *)(param_1 + 0x18) = 0x8011b654;
      *(undefined2 *)(param_1 + 0x80) = 0x19;
      *(undefined2 *)(param_1 + 0x84) = 0x19;
      param_1[0x60] = 0;
      *(undefined2 *)(param_1 + 0x42) = 0x1e;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar3 = func_0x00051b70(param_1,0x15,3);
    if (iVar3 != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfb0;
    **(short **)(param_1 + 0xc0) = **(short **)(param_1 + 0xc0) + -0x32;
    *(undefined2 *)(param_1 + 0x80) = 0x32;
    *(undefined2 *)(param_1 + 0x82) = 100;
    *(undefined2 *)(param_1 + 0x84) = 0xf;
    *(undefined2 *)(param_1 + 0x86) = 0x37;
    bVar1 = param_1[3];
    *(undefined2 *)(param_1 + 0x54) = 0;
    if (bVar1 == 1) {
      *(undefined2 *)(param_1 + 0x44) = 0x2f00;
      *(undefined2 *)(param_1 + 0x4a) = 0xff1c;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        *(undefined2 *)(param_1 + 0x58) = 0xefa;
        *(undefined2 *)(param_1 + 0x44) = 0x2d00;
        *(undefined2 *)(param_1 + 0x4a) = 0;
        *(undefined2 *)(param_1 + 0x50) = 0;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 2) {
      *(undefined2 *)(param_1 + 0x44) = 0x2f00;
      *(undefined2 *)(param_1 + 0x4a) = 0xfd56;
      halt_baddata();
    }
    if (bVar1 != 3) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x44) = 0x2f00;
    *(undefined2 *)(param_1 + 0x4a) = 0xfaac;
    *(undefined2 *)(param_1 + 0x50) = 0x50;
    iVar3 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
    *(short *)(param_1 + 0x48) = (short)(iVar3 >> 4);
    iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
    *(short *)(param_1 + 0x4c) = (short)(-iVar3 >> 4);
    param_1[0x2b] = 0;
    param_1[4] = 1;
  }
  if (DAT_1f800137 == '\0') {
    if (param_1[0x2b] == '\0') {
      if (param_1[3] != '\0') {
        sVar2 = *(short *)(param_1 + 0x4a);
        *(short *)(param_1 + 0x4a) = sVar2 + *(short *)(param_1 + 0x50);
        *(short *)(param_1 + 0x32) =
             *(short *)(param_1 + 0x32) + ((short)(sVar2 + *(short *)(param_1 + 0x50)) >> 4);
        *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x4a) >> 1;
      }
      *(int *)(param_1 + 0x2c) =
           *(int *)(param_1 + 0x2c) +
           (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x48);
      *(int *)(param_1 + 0x34) =
           *(int *)(param_1 + 0x34) +
           (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x4c);
      iVar3 = func_0x0007778c(param_1);
      if (iVar3 == 0) {
        *param_1 = 2;
        param_1[4] = 3;
        halt_baddata();
      }
      func_0x0004766c(param_1);
      iVar3 = func_0x000495dc(param_1,0,0);
      if (iVar3 != 0) {
        *param_1 = 2;
        param_1[4] = 3;
        if (param_1[3] != '\0') {
          func_0x000313a0(0x906,param_1 + 0x2c,0xffffffe2,param_1 + 0x54);
          func_0x00074590(0x88,0x19,0xffffffce);
          halt_baddata();
        }
        return;
      }
      if (param_1[3] == '\0') {
        func_0x000517f8(param_1);
        halt_baddata();
      }
      bVar1 = *pbVar4;
      *pbVar4 = bVar1 + 0x28;
      if (0xef < (byte)(bVar1 + 0x28)) {
        *pbVar4 = 0;
        halt_baddata();
      }
      return;
    }
    param_1[0x2b] = param_1[0x2b] + -1;
  }
  func_0x0007778c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

