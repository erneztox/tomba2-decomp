
void FUN_80075448(int param_1,undefined4 param_2,undefined2 param_3,short param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = (uint)DAT_800fb164;
  iVar4 = (param_1 << 0x10) >> 0xd;
  *(short *)(&DAT_800be36a + iVar4) = param_4;
  sVar1 = FUN_8008e100(param_2,(int)param_4);
  iVar3 = (int)(((uVar2 * 0x7f) / 9) * 0x10000) >> 0x10;
  *(short *)(&DAT_800be368 + iVar4) = sVar1;
  sVar1 = *(short *)(&DAT_800be368 + iVar4);
  *(undefined2 *)(&DAT_800be36c + iVar4) = param_3;
  *(undefined2 *)(iVar4 + -0x7ff41c92) = 1;
  FUN_80091f50((int)sVar1,iVar3,iVar3);
  return;
}

