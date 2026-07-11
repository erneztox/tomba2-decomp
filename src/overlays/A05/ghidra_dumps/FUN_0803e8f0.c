// FUN_0803e8f0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803e8f0(int param_1)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  undefined4 extraout_at_01;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_38;
  undefined4 local_34;
  int local_30 [4];
  
  local_30[0] = _DAT_8010a110;
  local_30[1] = _DAT_8010a114;
  local_30[2] = _DAT_8010a118;
  iVar4 = *(int *)(param_1 + 0x60);
  if (iVar4 != 0) {
    local_38 = CONCAT22(*(undefined2 *)(param_1 + 0x32),*(undefined2 *)(param_1 + 0x2e));
    local_34 = CONCAT22(local_34._2_2_,*(undefined2 *)(param_1 + 0x36));
    func_0x000329e0(6);
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    iVar3 = 0;
    _DAT_1f800090 = 0;
    uVar2 = extraout_at;
    do {
      setCopReg(2,in_zero,local_38);
      setCopReg(2,uVar2,local_34);
      iVar1 = func_0x000317cc(0xffffffce);
      uVar2 = extraout_at_00;
      if (iVar1 == 0) {
        _DAT_1f800084 = _DAT_1f800084 * local_30[iVar3] >> 8;
        _DAT_1f800088 = _DAT_1f800084;
        uVar2 = func_0x00027a4c(iVar4,*(undefined4 *)(param_1 + 0x68));
        *(undefined4 *)(param_1 + 100) = uVar2;
        if (iVar3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        local_38 = CONCAT22(local_38._2_2_ - (char)((ushort)*(undefined2 *)(param_1 + 0x50) >> 8),
                            (short)local_38 - (char)((ushort)*(undefined2 *)(param_1 + 0x4e) >> 8));
        local_34 = CONCAT22(local_34._2_2_,
                            (short)local_34 - (char)((ushort)*(undefined2 *)(param_1 + 0x52) >> 8));
        uVar2 = extraout_at_01;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
  }
  return;
}

