// FUN_08014114

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x080141c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08014114(int param_1)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 local_30;
  undefined4 local_2c;
  
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  func_0x000329e0(6);
  iVar9 = 0;
  uVar10 = (uint)_DAT_1f80017c;
  do {
    iVar1 = func_0x00083f50(iVar9);
    iVar2 = func_0x00083e80(iVar9);
    iVar6 = iVar2 >> 8;
    if (iVar6 < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar11 = 0x1000 / iVar6;
    if (iVar6 == 0) {
      trap(0x1c00);
    }
    iVar6 = 0;
    uVar5 = uVar10;
    iVar3 = iVar11;
    while (iVar3 < 0x1000) {
      iVar3 = func_0x00083f50(uVar5);
      iVar4 = func_0x00083e80(uVar5);
      iVar8 = (int)*(short *)(param_1 + 0x4e);
      iVar7 = iVar2 * iVar8 >> 0xc;
      local_30 = CONCAT22((short)(iVar1 * iVar8 >> 0xc) + *(short *)(param_1 + 0x2e),
                          (short)(iVar3 * iVar7 >> 0xc) + *(short *)(param_1 + 0x2c));
      local_2c = CONCAT22((short)((uint)local_2c >> 0x10),
                          (short)(iVar4 * iVar7 >> 0xc) + *(short *)(param_1 + 0x30));
      if (iVar8 < 500) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar3 = (iVar8 + -500) * 0x10;
      if (0x1000 < iVar3) {
        iVar3 = 0x1000;
      }
      setCopReg(2,in_zero,local_30);
      setCopReg(2,extraout_at,local_2c);
      iVar4 = func_0x000317cc(0);
      if (iVar4 == 0) {
        _DAT_1f800088 = _DAT_1f800084;
        uVar5 = func_0x0009a450();
        _DAT_1f800090 = iVar3 + (uVar5 & 0x3ff);
        func_0x00027a4c(0x8010e534,_DAT_8010e530);
      }
      iVar6 = iVar6 + iVar11;
      uVar5 = iVar6 + uVar10;
      iVar3 = iVar6 + iVar11;
    }
    iVar9 = iVar9 + 0x100;
  } while (iVar9 < 0x800);
  return;
}

