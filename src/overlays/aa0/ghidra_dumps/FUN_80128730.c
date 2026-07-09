// FUN_80128730

void FUN_80128730(int param_1)

{
  short sVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  
  iVar4 = 2;
  if ((*(ushort *)(param_1 + 0x60) & 4) != 0) {
    iVar2 = 0x20000;
    do {
      sVar1 = (short)(iVar2 >> 0xe);
      sVar3 = sVar1 + -4;
      if ((*(ushort *)(param_1 + 0x60) & 2) == 0) {
        sVar3 = sVar1 + -5;
      }
      FUN_80130d5c(param_1,(int)sVar3);
      iVar4 = iVar4 + 1;
    } while (((*(ushort *)(param_1 + 0x60) & 2) != 0) &&
            (iVar2 = iVar4 * 0x10000, iVar4 * 0x10000 >> 0x10 < 4));
  }
  return;
}

