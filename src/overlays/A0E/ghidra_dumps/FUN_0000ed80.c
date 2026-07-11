// FUN_0000ed80

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000ed80(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
        return;
      }
      param_1[4] = 3;
      if (param_1[5] != '\0') {
        return;
      }
      if (param_1[0xbe] == '\0') {
        *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x60);
        func_0x000313a0(0xf01,param_1 + 0x2c,0xffffffe2,param_1 + 0x54);
        func_0x00074590(2,0xf,0x1e);
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x82) = 100;
    *(undefined2 *)(param_1 + 0x86) = 100;
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x80) = 0x32;
    *(undefined2 *)(param_1 + 0x84) = 0x32;
    param_1[0xb] = 0xff;
    iVar3 = func_0x000310f4(0xf00,0xffffffec);
    if (iVar3 != 0) {
      *(undefined1 **)(iVar3 + 0x10) = param_1;
    }
    *(int *)(param_1 + 0x10) = iVar3;
    *(undefined2 *)(param_1 + 0x42) = 0x5a;
    func_0x00041ac0(param_1);
    if (param_1[0xbe] != '\0') {
      *(undefined2 *)(param_1 + 0x44) = 0xd800;
      *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x60) + 0x800;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x44) = 0x2800;
    *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x60);
    param_1[0x5f] = 0;
    param_1[4] = 1;
  }
  func_0x00041a1c(param_1,1);
  func_0x00041ac0(param_1);
  iVar3 = func_0x0007778c(param_1);
  if ((iVar3 != 0) && ((_DAT_1f80017c & 3) == 0)) {
    func_0x000313a0(0xf01,param_1 + 0x2c,0xffffffe2,param_1 + 0x54);
  }
  if ((param_1[0x5f] == '\0') && (iVar3 = func_0x000495dc(param_1,0,0), iVar3 == 0)) {
    sVar2 = *(short *)(param_1 + 0x42);
    *(short *)(param_1 + 0x42) = sVar2 + -1;
    if (sVar2 != 1) {
      return;
    }
    *param_1 = 2;
    param_1[4] = 2;
    param_1[5] = 1;
  }
  else {
    *param_1 = 2;
    param_1[4] = 2;
    param_1[5] = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

