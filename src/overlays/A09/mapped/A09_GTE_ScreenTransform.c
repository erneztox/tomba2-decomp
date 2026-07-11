// A09_GTE_ScreenTransform - GTE screen-space transform for entities

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A09_GTE_ScreenTransform(int param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined4 in_zero;
  undefined4 extraout_at;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar7 = (ushort *)(param_1 + 0x50);
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  func_0x000329e0(6,param_2,param_3,0);
  iVar9 = 0;
  iVar6 = 0xfedcba9;
  do {
    iVar8 = iVar6 * 5 + 1;
    uVar1 = *puVar7;
    iVar3 = func_0x00083f50(iVar6);
    iVar4 = func_0x00083f50(iVar8);
    iVar5 = func_0x00083e80(iVar8);
    sVar2 = func_0x00083e80(iVar6);
    iVar6 = (int)((uint)uVar1 << 0x10) >> 0x10;
    local_30 = CONCAT22((short)(sVar2 * iVar6 >> 0xc) + *(short *)(param_1 + 0x2e),
                        (short)((short)(iVar4 * iVar3 >> 0xc) * iVar6 >> 0xc) +
                        *(short *)(param_1 + 0x2c));
    iVar4 = (int)((uint)uVar1 << 0x10) >> 0x13;
    local_2c = CONCAT22((short)((uint)local_2c >> 0x10),
                        (short)((short)(iVar5 * iVar3 >> 0xc) * iVar6 >> 0xc) +
                        *(short *)(param_1 + 0x30));
    if (0xff < iVar4) {
      iVar4 = 0xff;
    }
    setCopReg(2,in_zero,local_30);
    setCopReg(2,extraout_at,local_2c);
    iVar6 = func_0x000317cc(0xfffffff6);
    if (iVar6 == 0) {
      _DAT_1f800090 = iVar4 << 4;
      _DAT_1f800088 = _DAT_1f800084;
      func_0x00027a4c(0x8010e534,_DAT_8010e530);
    }
    iVar9 = iVar9 + 1;
    puVar7 = puVar7 + 1;
    iVar6 = iVar8 * 5 + 1;
  } while (iVar9 < 0x1c);
  return;
}

