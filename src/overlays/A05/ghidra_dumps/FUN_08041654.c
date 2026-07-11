// FUN_08041654

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08041654(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar2 = _DAT_8013f81a;
  uVar1 = _DAT_8013f818;
  uVar4 = *(undefined4 *)(param_1 + 0x78);
  if (*(char *)(param_1 + 0x5e) != '\0') {
    local_28 = CONCAT22(*(undefined2 *)(param_1 + 0x32),*(undefined2 *)(param_1 + 0x2e));
    local_24 = CONCAT22(local_24._2_2_,*(undefined2 *)(param_1 + 0x36));
    func_0x000329e0(6);
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    iVar3 = func_0x0009a450();
    _DAT_1f800090 = (iVar3 >> 6) + 0x200;
    setCopReg(2,in_zero,local_28);
    setCopReg(2,extraout_at,local_24);
    iVar3 = func_0x000317cc(0xffffffce);
    if (iVar3 == 0) {
      _DAT_1f800084 = _DAT_1f800084 << 1;
      _DAT_1f800088 = _DAT_1f800084;
      iVar3 = func_0x00027a4c(uVar4,CONCAT22(uVar2,uVar1));
      *(int *)(param_1 + 0x78) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x78) = 0x8013f81c;
      }
    }
  }
  return;
}

