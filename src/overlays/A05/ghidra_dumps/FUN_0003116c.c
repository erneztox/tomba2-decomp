// FUN_0003116c

void FUN_0003116c(int param_1)

{
  int iVar1;
  uint uVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  FUN_000329e0(6);
  iVar5 = 0;
  psVar4 = (short *)(param_1 + 0x50);
  do {
    iVar1 = (iVar5 + 1) * 8;
    if (6 < iVar5 + 1) {
      iVar1 = 0;
    }
    psVar3 = (short *)(param_1 + 0x50 + iVar1);
    if ((*psVar4 != 0) && (*psVar3 != 0)) {
      uVar2 = (uint)psVar4[3];
      func_0x00137bdc(psVar4,psVar3,0,uVar2 << 0x10 | uVar2 << 8 | uVar2);
      psVar4[3] = psVar4[3] + -0x15;
    }
    iVar5 = iVar5 + 1;
    psVar4 = psVar4 + 4;
  } while (iVar5 < 7);
  return;
}

