// A09_GTE_CoordTransform - GTE coordinate transform: 3D to 2D

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A09_GTE_CoordTransform(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined4 local_40;
  undefined4 local_3c;
  
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  func_0x000329e0(6,param_2,param_3,0);
  uVar14 = 0xba97;
  uVar12 = 0;
  sVar1 = *(short *)(param_1 + 0x50);
  sVar2 = *(short *)(param_1 + 0x2c);
  iVar15 = 0;
  sVar3 = *(short *)(param_1 + 0x52);
  sVar4 = *(short *)(param_1 + 0x2e);
  sVar5 = *(short *)(param_1 + 0x54);
  sVar6 = *(short *)(param_1 + 0x30);
  do {
    uVar11 = (uint)_DAT_1f80017c;
    uVar13 = uVar12 + uVar11 * -0x10 + (uint)*(byte *)(param_1 + 3) * 0x100 & 0xfff;
    iVar7 = func_0x00083e80(uVar13);
    iVar8 = func_0x00083f50(uVar13);
    iVar9 = func_0x00083e80(uVar13);
    iVar10 = func_0x00083f50((_DAT_1f80017c + uVar12) * 0x40);
    local_40 = CONCAT22(*(short *)(param_1 + 0x2e) +
                        (short)((int)(((int)sVar3 - (int)sVar4) * uVar12) >> 0xc) +
                        (short)((iVar7 * iVar10 >> 0xc) * 5 >> 10),
                        *(short *)(param_1 + 0x2c) +
                        (short)((int)(((int)sVar1 - (int)sVar2) * uVar12) >> 0xc) +
                        (short)((iVar7 * iVar8 >> 0xc) * 5 >> 10));
    local_3c = CONCAT22((short)((uint)local_3c >> 0x10),
                        *(short *)(param_1 + 0x30) +
                        (short)((int)(((int)sVar5 - (int)sVar6) * uVar12) >> 0xc) +
                        (short)((iVar7 * iVar9 >> 0xc) * 5 >> 10));
    setCopReg(2,in_zero,local_40);
    setCopReg(2,extraout_at,local_3c);
    iVar7 = func_0x000317cc(0xfffffff6);
    if ((iVar7 == 0) && (uVar12 < *(uint *)(param_1 + 0x58))) {
      if (uVar13 - 0x781 < 0xff) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      _DAT_1f800084 = (int)(_DAT_1f800084 * ((uVar14 & 0xff) + 0x180)) >> 10;
      _DAT_1f800090 = 0;
      _DAT_1f800088 = _DAT_1f800084;
      func_0x00027a4c(((iVar15 + uVar11 * 0x80 & 0xfff) * 9 >> 10) * 8 + -0x7ff62370,_DAT_8009dc8c);
      uVar14 = uVar14 * 5 + 1;
    }
    iVar15 = iVar15 + 0x766c;
    uVar12 = uVar12 + 0x7c;
  } while ((int)uVar12 < 0x1000);
  return;
}

