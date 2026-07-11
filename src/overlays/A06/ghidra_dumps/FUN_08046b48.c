// FUN_08046b48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08046b48(int param_1)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  undefined4 extraout_at_01;
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  func_0x000329e0(6);
  iVar5 = 0;
  iVar4 = 4;
  uVar1 = extraout_at;
  do {
    puVar3 = (undefined4 *)(param_1 + 0x2c + iVar4);
    if (-1 < *(short *)((int)puVar3 + 6)) {
      setCopReg(2,in_zero,*puVar3);
      setCopReg(2,uVar1,puVar3[1]);
      iVar2 = func_0x000317cc(0xfffffff6);
      uVar1 = extraout_at_00;
      if (iVar2 == 0) {
        _DAT_1f800090 = 0;
        _DAT_1f800084 = _DAT_1f800084 >> 1;
        _DAT_1f800088 = _DAT_1f800084;
        func_0x00027a4c(*(short *)((int)puVar3 + 6) * 8 + -0x7feb5abc,_DAT_8014a540);
        uVar1 = extraout_at_01;
      }
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 8;
  } while (iVar5 < 10);
  return;
}

