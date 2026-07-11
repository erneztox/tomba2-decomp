// FUN_08017c78

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08017c78(int param_1)

{
  short sVar1;
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  short sVar7;
  undefined4 local_30;
  undefined4 local_2c;
  
  func_0x000329e0(6);
  _DAT_1f800090 = 0;
  sVar7 = 0x400;
  iVar6 = 0;
  do {
    pbVar5 = (byte *)(((iVar6 << 0x10) >> 0xe) + param_1 + 0x34);
    iVar4 = ((int)((uint)pbVar5[2] * (uint)*pbVar5) >> 5) + (int)*(short *)(param_1 + 0x32);
    iVar2 = func_0x00083e80((int)sVar7);
    iVar3 = func_0x00083f50((int)sVar7);
    sVar1 = *(short *)(param_1 + 0x2c);
    local_2c = CONCAT22(local_2c._2_2_,*(short *)(param_1 + 0x30) + (short)(iVar3 * iVar4 >> 0xc));
    iVar3 = func_0x00083e80((uint)pbVar5[2] << 4);
    local_30 = CONCAT22(*(short *)(param_1 + 0x2e) - (short)((int)(iVar3 * (uint)pbVar5[1]) >> 0xc),
                        sVar1 + (short)(iVar2 * iVar4 >> 0xc));
    setCopReg(2,in_zero,local_30);
    setCopReg(2,extraout_at,local_2c);
    iVar2 = func_0x000317cc(0xffffffce);
    if (iVar2 == 0) {
      _DAT_1f800084 = (int)(_DAT_1f800084 * (uint)pbVar5[3]) >> 7;
      _DAT_1f800088 = _DAT_1f800084;
      func_0x00027a4c((pbVar5[2] & 0xf0) + 0x8009d5fc,_DAT_8009d5f8);
    }
    iVar6 = iVar6 + 1;
    sVar7 = sVar7 + 0x61;
  } while (iVar6 * 0x10000 >> 0x10 < 0x15);
  return;
}

