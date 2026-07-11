// FUN_0802e1d4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0802e538) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802e1d4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  undefined4 extraout_at_01;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 local_44;
  short local_40;
  short sStack_3e;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  local_44 = CONCAT22(local_44._2_2_,*(undefined2 *)(param_1 + 0x30));
  func_0x000329e0(6);
  uVar1 = _DAT_800bf544;
  setCopReg(2,in_zero,uVar3);
  setCopReg(2,extraout_at,local_44);
  copFunction(2,0x180001);
  iVar8 = getCopControlWord(2,0xf800);
  if (-1 < iVar8) {
    uVar3 = getCopReg(2,0xe);
    local_40 = (short)uVar3;
    iVar10 = (int)local_40;
    iVar8 = 0;
    if (iVar10 < 0) {
      iVar8 = iVar10;
    }
    sStack_3e = (short)((uint)uVar3 >> 0x10);
    iVar9 = (int)sStack_3e;
    if (iVar9 < 0) {
      iVar8 = iVar8 + iVar9;
    }
    if (0x13f < iVar10) {
      iVar8 = (iVar8 + 0x140) - iVar10;
    }
    if (0xef < iVar9) {
      iVar8 = (iVar8 + 0xf0) - iVar9;
    }
    if (-0x33 < iVar8) {
      if (*(char *)(param_1 + 4) == '\x01') {
        uVar2 = func_0x0009a450();
        iVar8 = iVar8 + (uVar2 & 0x1f);
        iVar11 = (iVar8 + 0x30) * 0x10000 >> 0x10;
        uVar3 = func_0x00127034(uVar1,(((0xa0 - iVar10) * 7 >> 3) + (int)local_40) * 0x10000 >> 0x10
                                ,(((0x78 - iVar9) * 7 >> 3) + (int)sStack_3e) * 0x10000 >> 0x10,0xc,
                                0xc,iVar11,6);
        iVar10 = (0xa0 - iVar10) * 3;
        iVar9 = (0x78 - iVar9) * 3;
        uVar3 = func_0x00127034(uVar3,((iVar10 >> 3) + (int)local_40) * 0x10000 >> 0x10,
                                ((iVar9 >> 3) + (int)sStack_3e) * 0x10000 >> 0x10,0x20,0x20,iVar11,6
                               );
        _DAT_800bf544 =
             func_0x00127034(uVar3,((iVar10 >> 1) + (int)local_40) * 0x10000 >> 0x10,
                             ((iVar9 >> 1) + (int)sStack_3e) * 0x10000 >> 0x10,0x30,0x30,
                             (iVar8 + 0x28) * 0x10000 >> 0x10,7);
      }
      if (*(int *)(param_1 + 0x34) != 0) {
        func_0x000329e0(6);
        setCopControlWord(2,0xa800,0);
        setCopControlWord(2,0xb000,0);
        setCopControlWord(2,0xb800,0);
        setCopReg(2,in_zero,*(undefined4 *)(param_1 + 0x2c));
        setCopReg(2,extraout_at_00,*(undefined4 *)(param_1 + 0x30));
        iVar8 = func_0x000317cc((int)*(short *)(param_1 + 0x32));
        if (iVar8 != 0) {
          func_0x00031780(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        _DAT_1f800090 = 0;
        _DAT_1f800088 = _DAT_1f800084 * *(int *)(param_1 + 0x54) >> 8;
        _DAT_1f800084 = _DAT_1f800084 * *(int *)(param_1 + 0x50) >> 8;
        uVar3 = func_0x000328bc(param_1,*(undefined4 *)(param_1 + 0x34));
        *(undefined4 *)(param_1 + 0x38) = uVar3;
        setCopControlWord(2,0xa800,0);
        setCopControlWord(2,0xb000,0);
        setCopControlWord(2,0xb800,0x3fc);
        func_0x000329e0(6);
        iVar8 = 0;
        iVar10 = (uint)_DAT_1f80017c * 0x80;
        do {
          iVar9 = func_0x00083f50(iVar8);
          iVar11 = func_0x00083e80(iVar8);
          iVar4 = iVar11 >> 9;
          iVar13 = 0x1000;
          if ((0 < iVar4) && (iVar13 = 0x1000 / iVar4, iVar4 == 0)) {
            trap(0x1c00);
          }
          iVar12 = 0;
          iVar4 = iVar10;
          iVar5 = iVar13;
          while (iVar5 < 0x1000) {
            iVar5 = func_0x00083f50(iVar4);
            iVar4 = func_0x00083e80(iVar4);
            iVar6 = func_0x00083f50(iVar10 + (iVar12 + iVar8) * 7);
            iVar6 = *(short *)(param_1 + 0x4e) * iVar6 >> 0xc;
            iVar7 = iVar11 * iVar6 >> 0xc;
            local_38 = CONCAT22((short)(iVar9 * iVar6 >> 0xc) + *(short *)(param_1 + 0x2e),
                                (short)(iVar5 * iVar7 >> 0xc) + *(short *)(param_1 + 0x2c));
            local_34 = CONCAT22((short)((uint)local_34 >> 0x10),
                                (short)(iVar4 * iVar7 >> 0xc) + *(short *)(param_1 + 0x30));
            iVar4 = *(int *)(param_1 + 0x50);
            setCopReg(2,in_zero,local_38);
            setCopReg(2,extraout_at_01,local_34);
            iVar5 = func_0x000317cc(0);
            if (iVar5 == 0) {
              _DAT_1f800084 = (int)_DAT_1f800084 >> 2;
              _DAT_1f800088 = _DAT_1f800084;
              uVar2 = func_0x0009a450();
              _DAT_1f800090 = iVar4 * -0x10 + 0x1000 + (uVar2 & 0x7ff);
              func_0x00027a4c(0x801389c4,_DAT_801389c0);
            }
            iVar12 = iVar12 + iVar13;
            iVar4 = iVar12 + iVar10;
            iVar5 = iVar12 + iVar13;
          }
          iVar8 = iVar8 + 0x100;
        } while (iVar8 < 0x800);
      }
    }
  }
  return;
}

