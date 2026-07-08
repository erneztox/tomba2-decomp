
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006a900(int param_1)

{
  short sVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined2 *)(param_1 + 0x40) = 1;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
    return;
  }
  sVar7 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar7 + -1;
  if (sVar7 == 1) {
    if (DAT_800e7f3e == '\0') {
      FUN_80074590(9,0,0);
      uVar3 = 0x12;
    }
    else {
      FUN_80074590(10,0,0);
      uVar3 = 10;
    }
    *(undefined2 *)(param_1 + 0x40) = uVar3;
  }
  iVar6 = 0x37;
  if (DAT_800e7f3e == '\0') {
    *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + 0x100;
    iVar8 = 0x41;
    sVar7 = _DAT_800e7ed6 + 0x200;
  }
  else {
    iVar6 = 0x6e;
    iVar8 = 0x78;
    if (*(char *)(param_1 + 0x5e) == '\0') {
      *(undefined1 *)(param_1 + 0x5e) = 1;
      FUN_8006a8c8(param_1);
    }
    *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + 0x1c0;
    sVar7 = _DAT_800e7ed6 + 0x180;
  }
  *(ushort *)(param_1 + 0x6a) = *(ushort *)(param_1 + 0x6a) & 0xfff;
  iVar4 = FUN_80083f50();
  iVar5 = FUN_80083f50((int)sVar7);
  iVar4 = (int)(short)(iVar6 * iVar4 >> 0xc);
  *(short *)(param_1 + 0x2e) = *(short *)(_DAT_800e7f5c + 0x2c) + (short)(iVar5 * iVar4 >> 0xc);
  iVar6 = FUN_80083e80((int)*(short *)(param_1 + 0x6a));
  *(short *)(param_1 + 0x32) = *(short *)(_DAT_800e7f5c + 0x30) + (short)(iVar8 * iVar6 >> 0xc);
  iVar6 = FUN_80083e80((int)sVar7);
  sVar1 = *(short *)(_DAT_800e7f5c + 0x34);
  *(short *)(param_1 + 0x56) = sVar7;
  *(short *)(param_1 + 0x36) = sVar1 - (short)(iVar6 * iVar4 >> 0xc);
  if (*(char *)(param_1 + 2) != '\x01') {
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = *(undefined2 *)(param_1 + 0x6a);
  }
  if ((DAT_800e7fc4 == '\x02') || (DAT_800e7fc6 == '\0')) {
    *(undefined1 *)(param_1 + 5) = 0;
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
  }
  else if (DAT_800e7fc6 == '\x03') {
    *(undefined2 *)(param_1 + 0x2e) = _DAT_800e7eae;
    *(undefined2 *)(param_1 + 0x32) = _DAT_800e7eb2;
    *(undefined2 *)(param_1 + 0x36) = _DAT_800e7eb6;
    uVar2 = DAT_800e7fca;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined1 *)(param_1 + 0x46) = uVar2;
    sVar7 = _DAT_800e7ed6;
    if (DAT_800e7e85 == '\t') {
      sVar7 = _DAT_800e7ed6 + -0x800;
    }
    *(short *)(param_1 + 0x56) = sVar7;
    *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_1 + 0x56);
    uVar2 = DAT_800e7eaa;
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined1 *)(param_1 + 0x2a) = uVar2;
    FUN_80069bec(param_1);
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0;
    *(undefined1 *)(param_1 + 6) = 1;
    FUN_80069688();
  }
  return;
}

