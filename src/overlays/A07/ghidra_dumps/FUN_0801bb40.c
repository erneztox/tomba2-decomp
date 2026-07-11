// FUN_0801bb40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801bb40(int param_1)

{
  short sVar1;
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  short local_40;
  short sStack_3e;
  short local_3c;
  short local_38;
  short local_36;
  short local_34;
  uint local_30;
  short *local_2c;
  
  uVar5 = *(uint *)(param_1 + 0x54);
  setCopControlWord(2,0xd800,6);
  setCopControlWord(2,0xe000,0);
  iVar11 = 0;
  local_2c = &local_40;
  do {
    iVar6 = uVar5 * 5 + 1;
    iVar7 = iVar6 * 5 + 1;
    uVar8 = iVar7 * 5 + 1;
    uVar9 = uVar8 * 5 + 1;
    uVar10 = uVar9 * 5 + 1;
    local_30 = uVar10 & 0x7ff;
    iVar4 = *(int *)(param_1 + 0x50);
    iVar3 = ((uVar5 & 0x1f) + 8) * iVar4;
    uVar5 = uVar10 * 5 + 1;
    local_38 = *(short *)(param_1 + 0x2c);
    local_36 = *(short *)(param_1 + 0x2e);
    local_34 = *(short *)(param_1 + 0x30);
    iVar2 = func_0x00083f50(iVar7);
    local_40 = local_38 + (short)(iVar2 * iVar3 >> 0xc);
    iVar2 = func_0x00083e80(iVar7);
    sVar1 = (short)iVar4;
    local_3c = local_34 + (short)(iVar2 * iVar3 >> 0xc);
    sStack_3e = local_36 + (sVar1 * 2 - ((ushort)iVar6 & 0x3f)) * sVar1;
    func_0x000318a0(local_2c,0x800a1cd4,param_1 + 0x48);
    setCopReg(2,in_zero,*(undefined4 *)local_2c);
    setCopReg(2,extraout_at,*(undefined4 *)(local_2c + 2));
    iVar3 = func_0x000317cc((int)*(short *)(param_1 + 0x32));
    if (iVar3 == 0) {
      _DAT_1f800088 = (int)(_DAT_1f800084 * ((uVar9 & 0xff) + 0x80)) >> 8;
      _DAT_1f800090 = local_30;
      _DAT_1f800084 = (int)(_DAT_1f800084 * ((uVar8 & 0xff) + 0x80)) >> 8;
      func_0x00027a4c(0x80132dd8,_DAT_80132dd4);
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 0x16);
  return;
}

