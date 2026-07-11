// FUN_080205dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080205dc(int param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined4 in_zero;
  undefined4 extraout_at;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 in_stack_ffffffd4;
  undefined2 uVar11;
  
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  func_0x000329e0(6,param_2,0,0);
  iVar9 = 0;
  sVar1 = *(short *)(param_1 + 0x50);
  sVar2 = *(short *)(param_1 + 0x2c);
  sVar3 = *(short *)(param_1 + 0x54);
  sVar4 = *(short *)(param_1 + 0x30);
  sVar5 = *(short *)(param_1 + 0x2e);
  sVar6 = *(short *)(param_1 + 0x52);
  if (0 < (int)*(short *)(param_1 + 0x4e) << 9) {
    do {
      uVar11 = (undefined2)((uint)in_stack_ffffffd4 >> 0x10);
      uVar7 = func_0x0009a450();
      uVar7 = iVar9 + (uVar7 & 0xff) + (uint)_DAT_1f80017c * 0x40 & 0x3ff;
      iVar8 = func_0x00083e80(uVar7 | 0x400);
      in_stack_ffffffd4 =
           CONCAT22(uVar11,*(short *)(param_1 + 0x30) +
                           (short)((int)(((int)sVar3 - (int)sVar4) * uVar7) >> 10));
      uVar10 = CONCAT22(*(short *)(param_1 + 0x52) +
                        (short)(iVar8 * ((int)sVar5 - (int)sVar6) >> 0xc),
                        *(short *)(param_1 + 0x2c) +
                        (short)((int)(((int)sVar1 - (int)sVar2) * uVar7) >> 10));
      setCopReg(2,in_zero,uVar10);
      setCopReg(2,extraout_at,in_stack_ffffffd4);
      iVar8 = func_0x000317cc(0xfffffff6);
      if (iVar8 == 0) {
        _DAT_1f800090 = 0;
        _DAT_1f800088 = _DAT_1f800084;
        func_0x00027a4c(((int)(uVar7 * 0xd) >> 10) * 8 + -0x7ff62a04,_DAT_8009d5f8,&DAT_1f800084,
                        &DAT_1f800090,uVar10,in_stack_ffffffd4);
      }
      iVar9 = iVar9 + 0x200;
    } while (iVar9 < (int)*(short *)(param_1 + 0x4e) << 9);
  }
  return;
}

