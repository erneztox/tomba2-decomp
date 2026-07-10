// FUN_80060a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80060a80(int param_1,uint param_2)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = (int)((*(ushort *)(param_1 + 0x4e) - 0x400) * 0x10000) >> 0x10;
  iVar3 = FUN_80083f50(iVar8);
  iVar9 = iVar3 * _DAT_1f80020c >> 0xc;
  iVar3 = FUN_80083e80(iVar8);
  uVar1 = iVar3 * _DAT_1f80020c;
  if ((int)param_2 < 2) {
    if (DAT_1f800237 == '\0') {
      iVar8 = (uint)*(ushort *)(param_1 + 0x140) << 0x10;
    }
    else {
      iVar8 = (*(ushort *)(param_1 + 0x140) + 0x800) * 0x10000;
    }
    iVar8 = iVar8 >> 0x10;
    iVar3 = FUN_80083f50(iVar8);
  }
  else {
    iVar3 = FUN_80083f50((int)_DAT_1f800178);
    iVar8 = (int)_DAT_1f800178;
  }
  iVar8 = FUN_80083e80(iVar8);
  if ((param_2 & 1) == 0) {
    iVar4 = *(int *)(param_1 + 0xdc);
    sVar7 = *(short *)(param_1 + 0x2e) - *(short *)(iVar4 + 0x2c);
    sVar6 = *(short *)(param_1 + 0x32) - *(short *)(iVar4 + 0x30);
    sVar5 = *(short *)(param_1 + 0x36) - *(short *)(iVar4 + 0x34);
  }
  else {
    sVar7 = *(short *)(param_1 + 0x2e) - *(short *)(param_1 + 0x14c);
    sVar6 = *(short *)(param_1 + 0x32) - *(short *)(param_1 + 0x14e);
    sVar5 = *(short *)(param_1 + 0x36) - *(short *)(param_1 + 0x150);
  }
  sVar2 = _DAT_1f800202 - (short)(uVar1 >> 0xc);
  *(short *)(param_1 + 0x2e) = sVar7 + (_DAT_1f800200 - (short)((uint)(iVar3 * iVar9) >> 0xc));
  sVar7 = _DAT_1f800204;
  *(short *)(param_1 + 0x32) = sVar6 + sVar2;
  *(short *)(param_1 + 0x36) = sVar5 + (sVar7 - (short)((uint)-(iVar8 * iVar9) >> 0xc));
  if ((int)param_2 < 2) {
    FUN_80055d5c(param_1);
    FUN_800541f4(param_1,1);
    FUN_80054650(param_1,0);
    FUN_8005444c(param_1);
  }
  return;
}

