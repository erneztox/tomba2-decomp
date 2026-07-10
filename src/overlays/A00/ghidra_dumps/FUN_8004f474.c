// FUN_8004f474

void FUN_8004f474(int param_1)

{
  int iVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  
  iVar4 = param_1 + 0xc;
  iVar1 = 0;
  if (0 < *(short *)(param_1 + 8)) {
    psVar3 = (short *)(param_1 + 0xe);
    do {
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + 0x8c;
      *psVar3 = *psVar3 + 2;
      psVar3 = psVar3 + 0x46;
    } while (iVar1 < *(short *)(param_1 + 8));
  }
  if (0x9d < *(short *)(iVar4 + -0x8a)) {
    iVar1 = 0;
    if (0 < *(short *)(param_1 + 8)) {
      sVar2 = 0x9e;
      do {
        *(short *)(iVar4 + -0x8a) = sVar2;
        sVar2 = sVar2 + 0x12;
        iVar1 = iVar1 + 1;
        iVar4 = iVar4 + -0x8c;
      } while (iVar1 < *(short *)(param_1 + 8));
    }
    *(undefined2 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 1) = 2;
  }
  return;
}

