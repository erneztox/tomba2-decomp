// FUN_0801b7d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801b7d4(int param_1,undefined4 param_2)

{
  char cVar1;
  short sVar2;
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_30;
  undefined4 local_2c;
  
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  func_0x000329e0(6,param_2,0,0,_DAT_80109500);
  iVar7 = 0;
  iVar6 = (int)*(short *)(param_1 + 0x4a);
  do {
    cVar1 = *(char *)(param_1 + iVar7 + 0x52);
    if (-1 < cVar1) {
      iVar3 = func_0x00083f50(iVar6);
      sVar2 = *(short *)(param_1 + 0x2c);
      iVar4 = func_0x00083e80(iVar6);
      local_2c = CONCAT22(local_2c._2_2_,*(short *)(param_1 + 0x30) + (short)(iVar4 * 200 >> 0xc));
      local_30 = CONCAT22(*(short *)(param_1 + 0x2e) + cVar1 * -0x10,
                          sVar2 + (short)(iVar3 * 200 >> 0xc));
      setCopReg(2,in_zero,local_30);
      setCopReg(2,extraout_at,local_2c);
      iVar3 = func_0x000317cc(0xffffffce);
      if (iVar3 == 0) {
        _DAT_1f800088 = _DAT_1f800084 << 1;
        uVar5 = func_0x0009a450();
        _DAT_1f800090 = cVar1 * 0x10 + (uVar5 & 0x1ff);
        func_0x00027a4c(0x80132da0,_DAT_80132d9c);
      }
    }
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + 0x88;
  } while (iVar7 < 0x1e);
  return;
}

