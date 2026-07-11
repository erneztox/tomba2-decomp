// FUN_08041310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08041310(int param_1)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  undefined4 extraout_at_01;
  undefined4 uVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    func_0x000329e0(6);
    puVar5 = (undefined4 *)(param_1 + 0x50);
    _DAT_1f800090 = 0;
    iVar4 = 0;
    psVar3 = (short *)(param_1 + 0x6e);
    uVar1 = extraout_at;
    do {
      setCopReg(2,in_zero,*puVar5);
      setCopReg(2,uVar1,puVar5[1]);
      iVar2 = func_0x000317cc((int)*(short *)(param_1 + 0x32));
      uVar1 = extraout_at_00;
      if (iVar2 == 0) {
        _DAT_1f800084 = _DAT_1f800084 * psVar3[-0xc] >> 9;
        iVar2 = func_0x00083e80((int)*psVar3);
        _DAT_1f800088 = _DAT_1f800084 + iVar2 * 2;
        iVar2 = func_0x00083f50((int)*psVar3);
        _DAT_1f800084 = _DAT_1f800084 + iVar2 * 2;
        func_0x000328bc(param_1,*(undefined4 *)(param_1 + 0x34));
        uVar1 = extraout_at_01;
      }
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 4;
      puVar5 = puVar5 + 2;
    } while (iVar4 < 3);
  }
  return;
}

