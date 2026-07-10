// FUN_00007708

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00007708(int param_1)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  undefined4 extraout_at_01;
  undefined4 uVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined4 local_28;
  undefined4 local_24;
  
  func_0x000329e0(6);
  pbVar3 = (byte *)(param_1 + 0x50);
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  iVar5 = 0;
  iVar4 = 0x80;
  _DAT_1f800090 = 0;
  uVar1 = extraout_at;
  do {
    if (-1 < (char)pbVar3[3]) {
      local_28 = CONCAT22(*(short *)(param_1 + 0x2e) +
                          (short)((int)((uint)pbVar3[1] << 0x18) >> 0x17),
                          *(short *)(param_1 + 0x2c) + (short)((int)((uint)*pbVar3 << 0x18) >> 0x17)
                         );
      local_24 = CONCAT22(local_24._2_2_,
                          *(short *)(param_1 + 0x30) +
                          (short)((int)((uint)pbVar3[2] << 0x18) >> 0x17));
      setCopReg(2,in_zero,local_28);
      setCopReg(2,uVar1,local_24);
      iVar2 = func_0x000317cc((int)*(short *)(param_1 + 0x32));
      uVar1 = extraout_at_00;
      if (iVar2 == 0) {
        _DAT_1f800084 = _DAT_1f800084 * iVar4 >> 8;
        _DAT_1f800088 = _DAT_1f800084;
        func_0x000328bc(param_1,(char)pbVar3[3] * 8 + -0x7fee5724);
        uVar1 = extraout_at_01;
      }
    }
    iVar4 = iVar4 + 0x10;
    iVar5 = iVar5 + 1;
    pbVar3 = pbVar3 + 4;
  } while (iVar5 < 0xe);
  return;
}

