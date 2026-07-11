// FUN_0801ee5c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801ee5c(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      func_0x00117bf4(param_1);
      halt_baddata();
    }
    if (bVar1 == 2) {
      if ((param_1[0x5e] == '\0') && (DAT_1f80025a < 4)) {
        func_0x00117ac8(param_1,param_1 + 0x2c);
      }
      func_0x0003116c(0xd02,param_1 + 0x2c,0xffffffec);
      param_1[4] = param_1[4] + '\x01';
      halt_baddata();
    }
    if (bVar1 != 3) {
      halt_baddata();
    }
    func_0x0007a624(param_1);
    return;
  }
  if (DAT_1f800259 != '\0') {
    *param_1 = 2;
    param_1[4] = 2;
    param_1[0x5e] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (DAT_800bf809 != '\0') goto LAB_0801f144;
  if (param_1[5] == '\0') {
    sVar2 = *(short *)(param_1 + 0x60);
    iVar6 = func_0x00083f50((int)sVar2);
    sVar3 = *(short *)(param_1 + 0x4e);
    iVar7 = func_0x00083e80((int)sVar2);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x1000;
    *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + 0x2d;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar6 * sVar3;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -iVar7 * (int)*(short *)(param_1 + 0x4e);
    func_0x0004766c(param_1);
    func_0x00049760(param_1);
    uVar4 = _DAT_1f8001a0;
    *(undefined2 *)(param_1 + 0x60) = _DAT_1f8001a0;
    *(undefined2 *)(param_1 + 0x56) = uVar4;
    if (param_1[0x29] == '\0') {
      cVar5 = func_0x000495dc(param_1,0,0);
      param_1[0x29] = cVar5;
      if ((cVar5 != '\0') && (((int)_DAT_1f8001a6 & 0x8000U) != 0)) {
        param_1[0x5e] = 1;
      }
    }
    if (param_1[0x29] == '\0') {
      if (*(short *)(param_1 + 0x50) < 0x81) goto LAB_0801f134;
      if ((param_1[0x5e] != '\0') || (3 < DAT_1f80025a)) {
        param_1[0x5e] = 1;
        param_1[5] = param_1[5] + '\x01';
        halt_baddata();
      }
    }
LAB_0801f12c:
    *param_1 = 2;
    param_1[4] = 2;
  }
  else {
    if (param_1[5] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar2 = *(short *)(param_1 + 0x60);
    iVar6 = func_0x00083f50((int)sVar2);
    sVar3 = *(short *)(param_1 + 0x4e);
    iVar7 = func_0x00083e80((int)sVar2);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x1000;
    *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + 0x2d;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar6 * sVar3;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -iVar7 * (int)*(short *)(param_1 + 0x4e);
    func_0x0004766c(param_1);
    func_0x00049760(param_1);
    uVar4 = _DAT_1f8001a0;
    *(undefined2 *)(param_1 + 0x60) = _DAT_1f8001a0;
    *(undefined2 *)(param_1 + 0x56) = uVar4;
    if (param_1[0x29] == '\0') {
      cVar5 = func_0x000495dc(param_1,0,0);
      param_1[0x29] = cVar5;
      if ((cVar5 != '\0') && (((int)_DAT_1f8001a6 & 0x8000U) != 0)) {
        param_1[0x5e] = 1;
      }
    }
    if (param_1[0x29] != '\0') goto LAB_0801f12c;
  }
LAB_0801f134:
  *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x111;
LAB_0801f144:
  func_0x0007778c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

