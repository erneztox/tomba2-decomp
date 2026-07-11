// FUN_08014974

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08014d14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08014974(int param_1)

{
  undefined4 uVar1;
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  undefined4 extraout_at_01;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
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
  iVar7 = getCopControlWord(2,0xf800);
  if (-1 < iVar7) {
    uVar3 = getCopReg(2,0xe);
    local_40 = (short)uVar3;
    iVar9 = (int)local_40;
    iVar7 = 0;
    if (iVar9 < 0) {
      iVar7 = iVar9;
    }
    sStack_3e = (short)((uint)uVar3 >> 0x10);
    iVar8 = (int)sStack_3e;
    if (iVar8 < 0) {
      iVar7 = iVar7 + iVar8;
    }
    if (0x13f < iVar9) {
      iVar7 = (iVar7 + 0x140) - iVar9;
    }
    if (0xef < iVar8) {
      iVar7 = (iVar7 + 0xf0) - iVar8;
    }
    if (-0x33 < iVar7) {
      if (*(char *)(param_1 + 4) == '\x01') {
        uVar2 = func_0x0009a450();
        iVar7 = iVar7 + (uVar2 & 0x1f);
        iVar10 = (iVar7 + 0x30) * 0x10000 >> 0x10;
        uVar3 = func_0x0010d7d4(uVar1,(((0xa0 - iVar9) * 7 >> 3) + (int)local_40) * 0x10000 >> 0x10,
                                (((0x78 - iVar8) * 7 >> 3) + (int)sStack_3e) * 0x10000 >> 0x10,0xc,
                                0xc,iVar10,6);
        iVar9 = (0xa0 - iVar9) * 3;
        iVar8 = (0x78 - iVar8) * 3;
        uVar3 = func_0x0010d7d4(uVar3,((iVar9 >> 3) + (int)local_40) * 0x10000 >> 0x10,
                                ((iVar8 >> 3) + (int)sStack_3e) * 0x10000 >> 0x10,0x20,0x20,iVar10,6
                               );
        _DAT_800bf544 =
             func_0x0010d7d4(uVar3,((iVar9 >> 1) + (int)local_40) * 0x10000 >> 0x10,
                             ((iVar8 >> 1) + (int)sStack_3e) * 0x10000 >> 0x10,0x30,0x30,
                             (iVar7 + 0x28) * 0x10000 >> 0x10,7);
      }
      if (*(int *)(param_1 + 0x34) != 0) {
        func_0x000329e0(6);
        setCopControlWord(2,0xa800,0);
        setCopControlWord(2,0xb000,0);
        setCopControlWord(2,0xb800,0);
        setCopReg(2,in_zero,*(undefined4 *)(param_1 + 0x2c));
        setCopReg(2,extraout_at_00,*(undefined4 *)(param_1 + 0x30));
        iVar7 = func_0x000317cc((int)*(short *)(param_1 + 0x32));
        if (iVar7 != 0) {
          func_0x00031780(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        _DAT_1f800088 = _DAT_1f800084 * *(int *)(param_1 + 0x54) >> 8;
        _DAT_1f800084 = _DAT_1f800084 * *(int *)(param_1 + 0x50) >> 8;
        uVar2 = func_0x0009a450();
        _DAT_1f800090 = (0x100 - *(int *)(param_1 + 0x50)) * 0x10 + (uVar2 & 0x3ff);
        uVar3 = func_0x000328bc(param_1,*(undefined4 *)(param_1 + 0x34));
        *(undefined4 *)(param_1 + 0x38) = uVar3;
        setCopControlWord(2,0xa800,0);
        setCopControlWord(2,0xb000,0);
        setCopControlWord(2,0xb800,0x3fc);
        func_0x000329e0(6);
        iVar7 = 0;
        uVar2 = (uint)_DAT_1f80017c;
        do {
          iVar9 = func_0x00083f50((uint)_DAT_1f80017c << 6);
          iVar8 = ((iVar9 << 7) >> 0xc) + iVar7;
          iVar9 = func_0x00083f50(iVar8);
          iVar8 = func_0x00083e80(iVar8);
          iVar10 = iVar8 >> 9;
          iVar12 = 0x1000;
          if ((0 < iVar10) && (iVar12 = 0x1000 / iVar10, iVar10 == 0)) {
            trap(0x1c00);
          }
          iVar11 = 0;
          iVar10 = uVar2 * 0x20;
          iVar4 = iVar12;
          while (iVar4 < 0x1000) {
            iVar4 = func_0x00083f50(iVar10);
            iVar10 = func_0x00083e80(iVar10);
            iVar6 = iVar8 * *(short *)(param_1 + 0x4e) >> 0xc;
            local_38 = CONCAT22((short)(iVar9 * *(short *)(param_1 + 0x4e) >> 0xc) +
                                *(short *)(param_1 + 0x2e),
                                (short)(iVar4 * iVar6 >> 0xc) + *(short *)(param_1 + 0x2c));
            local_34 = CONCAT22((short)((uint)local_34 >> 0x10),
                                (short)(iVar10 * iVar6 >> 0xc) + *(short *)(param_1 + 0x30));
            iVar10 = *(int *)(param_1 + 0x50);
            setCopReg(2,in_zero,local_38);
            setCopReg(2,extraout_at_01,local_34);
            iVar4 = func_0x000317cc(0);
            if (iVar4 == 0) {
              _DAT_1f800084 = (int)_DAT_1f800084 >> 2;
              _DAT_1f800088 = _DAT_1f800084;
              uVar5 = func_0x0009a450();
              _DAT_1f800090 = iVar10 * -0x10 + 0x1000 + (uVar5 & 0x7ff);
              func_0x00027a4c(0x8010e534,_DAT_8010e530);
            }
            iVar11 = iVar11 + iVar12;
            iVar10 = iVar11 + uVar2 * 0x20;
            iVar4 = iVar11 + iVar12;
          }
          iVar7 = iVar7 + 0x100;
        } while (iVar7 < 0x800);
      }
    }
  }
  return;
}

