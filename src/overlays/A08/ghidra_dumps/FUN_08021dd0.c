// FUN_08021dd0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08021dd0(int param_1)

{
  short sVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  short sVar17;
  int iVar18;
  undefined4 local_48;
  undefined4 local_44;
  
  iVar8 = (int)*(short *)(param_1 + 0x48);
  sVar1 = *(short *)(param_1 + 0x4e);
  sVar3 = (short)(sVar1 * 5 >> 9);
  iVar12 = *(int *)(param_1 + 0x48);
  if ((*(ushort *)(param_1 + 0x50) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((*(ushort *)(param_1 + 0x50) & 2) == 0) {
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    _DAT_1f800090 = 0;
    func_0x000329e0(6);
    for (iVar18 = (int)*(short *)(param_1 + 0x5a); 0 < iVar18; iVar18 = iVar18 + -1) {
      iVar13 = iVar12 * 5 + 1;
      iVar14 = iVar13 * 5 + 1;
      iVar15 = iVar14 * 5 + 1;
      uVar2 = *(ushort *)(param_1 + 0x5e);
      uVar4 = (uint)iVar12 >> 8;
      iVar12 = (uint)*(ushort *)(param_1 + 0x5c) << 0x10;
      iVar10 = (iVar13 >> 8 & iVar12 >> 0x10) - (iVar12 >> 0x11);
      iVar12 = (uint)*(ushort *)(param_1 + 0x60) << 0x10;
      iVar11 = (iVar14 >> 8 & iVar12 >> 0x10) - (iVar12 >> 0x11);
      iVar13 = func_0x00083f50(0xed2);
      iVar14 = func_0x00083e80(0xed2);
      iVar5 = func_0x00083e80(0xed2);
      iVar6 = func_0x00083f50(0xed2);
      iVar16 = iVar15 * 5 + 1;
      iVar12 = iVar16 * 5 + 1;
      sVar17 = (short)(iVar15 >> 0x1a) - *(short *)(param_1 + 0x58);
      iVar15 = (uint)*(ushort *)(param_1 + 0x54) << 0x10;
      iVar8 = iVar8 + (((int)*(short *)(param_1 + 0x52) + (iVar16 >> 8 & iVar15 >> 0x10)) -
                      (iVar15 >> 0x11));
      iVar16 = (iVar12 >> 8 & 0xfU) + (int)*(short *)(param_1 + 0x56);
      iVar15 = func_0x00083e80(iVar8);
      sVar9 = (short)(iVar15 * iVar16 >> 0xc);
      iVar15 = func_0x00083f50(iVar8);
      sVar7 = (short)(iVar15 * iVar16 >> 0xc);
      if ((*(ushort *)(param_1 + 0x50) & 2) != 0) {
        sVar7 = 0;
        sVar17 = 0;
        sVar9 = 0;
      }
      local_48 = CONCAT22(*(short *)(param_1 + 0x2e) +
                          (((ushort)uVar4 & uVar2) - ((short)uVar2 >> 1)) + sVar17 * sVar3 +
                          sVar3 * sVar3,
                          *(short *)(param_1 + 0x2c) +
                          (short)(iVar10 * iVar13 - iVar11 * iVar14 >> 0xc) + sVar9 * sVar3);
      uVar4 = (uint)local_44 >> 0x10;
      local_44 = CONCAT22((short)uVar4,
                          *(short *)(param_1 + 0x30) +
                          (short)(iVar10 * iVar5 + iVar11 * iVar6 >> 0xc) + sVar7 * sVar3);
      setCopReg(2,in_zero,local_48);
      setCopReg(2,extraout_at,local_44);
      iVar13 = func_0x000317cc(0xffffffb0);
      if (iVar13 == 0) {
        _DAT_1f800084 = _DAT_1f800084 * *(short *)(param_1 + 0x62) >> 8;
        _DAT_1f800088 = _DAT_1f800084;
        func_0x00027a4c((sVar1 * 0xd >> 0xc) * 0x10 + -0x7ff62a04,_DAT_8009d5f8);
      }
    }
    return;
  }
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0xf00);
  _DAT_1f800090 = 0x400;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

