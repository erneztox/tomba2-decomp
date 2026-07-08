
void FUN_80064358(int param_1,byte param_2,int param_3)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  short sVar7;
  
  *(undefined1 *)(param_3 + 0x29) = 0;
  iVar4 = (uint)param_2 * 6;
  *(undefined1 *)(param_1 + 0x144) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  sVar7 = *(short *)(&DAT_800a47c4 + iVar4);
  uVar6 = *(ushort *)(&DAT_800a47c6 + iVar4);
  sVar1 = *(short *)(&DAT_800a47c8 + iVar4);
  if (param_2 == 0) {
    FUN_80055f48(param_1,0);
    uVar6 = *(short *)(param_1 + 0x4a) + 0xa80;
  }
  FUN_80054d14(param_1,(int)sVar1,0);
  if (sVar7 != 0) {
    sVar7 = sVar7 + (ushort)*(byte *)(param_1 + 0x168) * 0x400;
  }
  if ((int)((uint)uVar6 << 0x10) < 0) {
    uVar6 = uVar6 + (ushort)*(byte *)(param_1 + 0x168) * -0x400;
  }
  if (*(char *)(param_1 + 0x147) == '\0') {
    *(short *)(param_1 + 0x44) = sVar7;
  }
  else {
    *(short *)(param_1 + 0x44) = -sVar7;
  }
  uVar2 = *(ushort *)(param_1 + 0x58);
  *(ushort *)(param_1 + 0x4a) = uVar6;
  uVar5 = uVar2 & 0xfff;
  *(short *)(param_1 + 0x58) = (short)uVar5;
  if ((uVar2 & 0xfff) != 0) {
    if (uVar5 < 0x801) {
      *(short *)(param_1 + 0x58) = (short)(uVar5 - 0x100);
      if ((int)((uVar5 - 0x100) * 0x10000) < 0) {
        *(undefined2 *)(param_1 + 0x58) = 0;
      }
    }
    else {
      *(short *)(param_1 + 0x58) = (short)(uVar5 + 0x100);
      if (0xfff < uVar5 + 0x100) {
        *(undefined2 *)(param_1 + 0x58) = 0;
      }
    }
  }
  if (param_2 == 0) {
    iVar4 = FUN_80083f50((int)*(short *)(param_1 + 0x56));
    sVar7 = *(short *)(param_3 + 0x80);
    iVar3 = FUN_80083e80((int)*(short *)(param_1 + 0x56));
    sVar1 = *(short *)(param_3 + 0x80);
    *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) - (short)(iVar4 * sVar7 >> 0xc);
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + (short)(iVar3 * sVar1 >> 0xc);
  }
  return;
}

