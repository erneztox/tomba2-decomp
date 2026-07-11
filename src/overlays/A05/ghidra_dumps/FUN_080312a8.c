// FUN_080312a8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_080312a8(undefined1 *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  if ((param_1[0x29] & 0x80) == 0) {
    iVar7 = *(ushort *)(param_1 + 0x32) + 0x10 +
            ((int)((uint)*(ushort *)(param_1 + 0x50) << 0x10) >> 0x14);
    *(short *)(param_1 + 0x32) = (short)iVar7;
    if ((((param_1[0x2a] == '\x01') && (11000 < *(short *)(param_1 + 0x36))) &&
        (*(short *)(param_1 + 0x36) < 0x2d50)) && (-0x23e1 < iVar7 * 0x10000 >> 0x10)) {
      *(undefined2 *)(param_1 + 0x32) = 0xdc20;
      param_1[0x29] = param_1[0x29] | 0x40;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = *(ushort *)(param_1 + 0x80);
    uVar2 = *(ushort *)(param_1 + 0x86);
    uVar3 = *(ushort *)(param_1 + 0x84);
    func_0x00083f50((int)*(short *)(param_1 + 0x62));
    iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x62));
    iVar11 = (int)(((uint)uVar2 - (uint)uVar3) * 0x10000) >> 0x10;
    iVar5 = func_0x00083e80((int)*(short *)(param_1 + 0x62));
    iVar6 = func_0x00083f50((int)*(short *)(param_1 + 0x62));
    iVar7 = iVar11 * iVar6;
    iVar4 = func_0x000492b0(param_1,(int)(short)(-(iVar11 * iVar4) >> 0xc),iVar7 * 0x10 >> 0x10,
                            (int)*(short *)(param_1 + 0x60));
    iVar10 = (int)((uVar1 - 0x46) * 0x10000) >> 0x10;
    uVar12 = (uint)(iVar4 == 1);
    iVar4 = func_0x000492b0(param_1,(iVar10 * iVar6 - iVar11 * iVar5) * 0x10 >> 0x10,
                            (iVar10 * iVar5 + iVar7) * 0x10 >> 0x10,(int)*(short *)(param_1 + 0x60))
    ;
    if (iVar4 == 1) {
      uVar12 = uVar12 | 2;
    }
    sVar8 = (short)(-iVar10 * iVar6 - iVar11 * iVar5 >> 0xc);
    sVar9 = (short)(-iVar10 * iVar5 + iVar7 >> 0xc);
    iVar7 = func_0x000492b0(param_1,(int)sVar8,(int)sVar9,(int)*(short *)(param_1 + 0x60));
    if (iVar7 == 1) {
      uVar12 = uVar12 | 4;
    }
    if (uVar12 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x080314cc */
                    /* WARNING: Treating indirect jump as call */
      uVar12 = (**(code **)(uVar12 * 4 + -0x7fef62b4))();
      return uVar12;
    }
    iVar7 = func_0x000455c0(param_1,(int)sVar8,(int)sVar9,(int)*(short *)(param_1 + 0x60));
    if (iVar7 != 0) {
      param_1[0x29] = param_1[0x29] | 0x40;
      func_0x00049674(param_1);
      iVar7 = (int)*(short *)(param_1 + 0x44);
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      *(undefined2 *)(param_1 + 0x60) = _DAT_1f8001a0;
      if (0x2ff < iVar7) {
        *(undefined2 *)(param_1 + 0x62) = _DAT_1f8001a2;
      }
      if ((((_DAT_1f8001a6 & 0xf00) == 0) && ((param_1[3] & 0x40) == 0)) &&
         ((param_1[3] & 0x1f) != 0x18)) {
        param_1[4] = 2;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 2;
        *param_1 = 2;
      }
    }
  }
  return (uint)(byte)param_1[0x29];
}

