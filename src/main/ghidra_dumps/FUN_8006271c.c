
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8006271c(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = *(int *)(param_1 + 0x10);
  iVar7 = *(int *)(param_1 + 0x158);
  iVar8 = 0x20;
  if (-1 < *(short *)(param_1 + 0x17e)) {
    iVar8 = 0x40;
  }
  iVar2 = *(ushort *)(param_1 + 0x56) + 0x800;
  iVar5 = iVar2 * 0x10000 >> 0x10;
  iVar3 = FUN_80083f50(iVar5);
  *(short *)(param_1 + 0x2e) = *(short *)(iVar6 + 0x2c) + (short)(iVar3 * iVar8 >> 0xc);
  iVar3 = FUN_80083e80(iVar5);
  *(short *)(param_1 + 0x36) = *(short *)(iVar6 + 0x34) - (short)(iVar3 * iVar8 >> 0xc);
  iVar3 = param_2;
  if (*(char *)(param_1 + 0x165) != '\0') {
    iVar3 = param_2 + 3;
  }
  if (param_2 == 0) {
    sVar1 = *(short *)(param_1 + 0x156) + (short)(char)(&DAT_800a4700)[iVar3];
    *(short *)(param_1 + 0x156) = sVar1;
    if ((int)sVar1 < -(int)*(short *)(iVar7 + 0x84)) {
      *(short *)(param_1 + 0x156) = -*(short *)(iVar7 + 0x84);
    }
  }
  else if (param_2 == 1) {
    *(short *)(param_1 + 0x156) = *(short *)(param_1 + 0x156) + (short)(char)(&DAT_800a4700)[iVar3];
  }
  *(short *)(param_1 + 0x32) = *(short *)(iVar6 + 0x30) + *(short *)(param_1 + 0x156);
  FUN_80024af0(param_1);
  sVar1 = (short)iVar2;
  if (DAT_800bf870 == '\0') {
    iVar7 = func_0x801148d8(param_1,iVar7);
    iVar6 = _DAT_1f800084;
    if (iVar7 == 0) {
LAB_800629f0:
      *(undefined1 *)(param_1 + 0x164) = 0;
      *(undefined4 *)(param_1 + 0x158) = 0;
      FUN_80056d44(param_1,0);
      return 0;
    }
    *(int *)(param_1 + 0x10) = _DAT_1f800084;
    iVar7 = FUN_80083f50((int)sVar1);
    *(short *)(param_1 + 0x2e) = *(short *)(iVar6 + 0x2c) + (short)(iVar7 * iVar8 >> 0xc);
    iVar7 = FUN_80083e80((int)sVar1);
    *(short *)(param_1 + 0x36) = *(short *)(iVar6 + 0x34) - (short)(iVar7 * iVar8 >> 0xc);
    *(short *)(param_1 + 0x32) = *(short *)(iVar6 + 0x30) + *(short *)(param_1 + 0x156);
    uVar4 = FUN_8005444c(param_1);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x164) = 0;
      *(undefined4 *)(param_1 + 0x158) = 0;
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      FUN_80054d14(param_1,2,3);
      return 0;
    }
  }
  else {
    if ((DAT_800bf870 != '\x06') ||
       (iVar7 = func_0x80110e60(param_1,iVar7), iVar6 = _DAT_1f800084, iVar7 == 0))
    goto LAB_800629f0;
    *(int *)(param_1 + 0x10) = _DAT_1f800084;
    iVar7 = FUN_80083f50((int)sVar1);
    *(short *)(param_1 + 0x2e) = *(short *)(iVar6 + 0x2c) + (short)(iVar7 * iVar8 >> 0xc);
    iVar7 = FUN_80083e80((int)sVar1);
    *(short *)(param_1 + 0x36) = *(short *)(iVar6 + 0x34) - (short)(iVar7 * iVar8 >> 0xc);
    *(short *)(param_1 + 0x32) = *(short *)(iVar6 + 0x30) + *(short *)(param_1 + 0x156);
    uVar4 = FUN_8005444c(param_1);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x164) = 0;
      *(undefined4 *)(param_1 + 0x158) = 0;
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      FUN_80054d14(param_1,2,3);
      return 0;
    }
  }
  return 1;
}

