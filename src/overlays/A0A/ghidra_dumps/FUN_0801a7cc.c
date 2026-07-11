// FUN_0801a7cc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801a7cc(int param_1)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x34);
  if (iVar3 != 0) {
    func_0x000329e0(6);
    setCopReg(2,in_zero,*(undefined4 *)(param_1 + 0x2c));
    setCopReg(2,extraout_at,*(undefined4 *)(param_1 + 0x30));
    iVar1 = func_0x000317cc((int)*(short *)(param_1 + 0x32));
    if (iVar1 != 0) {
      func_0x00031780(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_1f800088 = (_DAT_1f800084 >> 8) * (int)*(short *)(param_1 + 0x4a);
    _DAT_1f800084 = (_DAT_1f800084 >> 8) * (int)*(short *)(param_1 + 0x48);
    _DAT_1f800090 = (uint)*(byte *)(param_1 + 7) << 5;
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    uVar2 = func_0x000328bc(param_1,iVar3,0,0);
    *(undefined4 *)(param_1 + 0x38) = uVar2;
  }
  return;
}

