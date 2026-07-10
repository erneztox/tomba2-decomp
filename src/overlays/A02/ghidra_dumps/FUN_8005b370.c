// FUN_8005b370

void FUN_8005b370(int param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  FUN_80055d5c();
  iVar7 = *(int *)(param_1 + 0x10);
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar7 + 0x2c);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar7 + 0x34);
    if (*(short *)(param_1 + 0x17e) < 0) {
      sVar3 = *(short *)(param_1 + 0x32) + *(short *)(iVar7 + 0x84) + 0x28;
    }
    else {
      sVar3 = *(short *)(param_1 + 0x32) + *(short *)(iVar7 + 0x84) + 0x50;
    }
    *(short *)(iVar7 + 0x32) = sVar3;
    *(undefined2 *)(iVar7 + 0x58) = *(undefined2 *)(param_1 + 0x58);
  }
  else if (param_2 < 2) {
    if (param_2 == 0) {
      uVar1 = *(ushort *)(iVar7 + 0x84);
      iVar4 = (uint)*(ushort *)(param_1 + 0x62) << 0x10;
      iVar5 = FUN_80083e80(*(short *)(iVar7 + 0x58) + 0x400);
      iVar6 = (int)(((uint)uVar1 + ((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1)) * 0x10000) >> 0x10;
      iVar4 = FUN_80083f50(*(short *)(iVar7 + 0x58) + 0x400);
      *(short *)(param_1 + 0x32) = *(short *)(iVar7 + 0x32) - (short)(iVar5 * iVar6 >> 0xc);
      iVar5 = FUN_80083f50((int)*(short *)(iVar7 + 0x56));
      iVar6 = (int)(short)(-(iVar4 * iVar6) >> 0xc);
      iVar4 = FUN_80083e80((int)*(short *)(iVar7 + 0x56));
      *(short *)(param_1 + 0x2e) = *(short *)(iVar7 + 0x2e) + (short)(iVar5 * iVar6 >> 0xc);
      *(short *)(param_1 + 0x36) = *(short *)(iVar7 + 0x36) - (short)(iVar4 * iVar6 >> 0xc);
      uVar2 = *(undefined2 *)(iVar7 + 0x58);
      *(undefined1 *)(param_1 + 0x29) = 1;
      *(undefined2 *)(param_1 + 0x142) = uVar2;
    }
  }
  else if (param_2 == 2) {
    uVar1 = *(ushort *)(iVar7 + 0x84);
    iVar4 = (uint)*(ushort *)(param_1 + 0x62) << 0x10;
    iVar5 = FUN_80083e80(*(short *)(iVar7 + 0x58) + 0x400);
    iVar6 = (int)(((uint)uVar1 + ((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1)) * 0x10000) >> 0x10;
    iVar4 = FUN_80083f50(*(short *)(iVar7 + 0x58) + 0x400);
    *(short *)(param_1 + 0x32) = *(short *)(iVar7 + 0x32) - (short)(iVar5 * iVar6 >> 0xc);
    iVar5 = FUN_80083f50((int)*(short *)(iVar7 + 0x56));
    iVar6 = (int)(short)(-(iVar4 * iVar6) >> 0xc);
    iVar4 = FUN_80083e80((int)*(short *)(iVar7 + 0x56));
    *(short *)(param_1 + 0x2e) = *(short *)(iVar7 + 0x2e) + (short)(iVar5 * iVar6 >> 0xc);
    *(short *)(param_1 + 0x36) = *(short *)(iVar7 + 0x36) - (short)(iVar4 * iVar6 >> 0xc);
    uVar2 = *(undefined2 *)(iVar7 + 0x58);
    *(undefined2 *)(iVar7 + 0x56) = *(undefined2 *)(param_1 + 0x56);
    *(undefined1 *)(param_1 + 0x29) = 1;
    *(undefined2 *)(param_1 + 0x142) = uVar2;
  }
  return;
}

