
undefined4 FUN_80077b5c(int param_1)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  
  sVar1 = *(short *)(param_1 + 0xe);
  *(short *)(param_1 + 0xe) = sVar1 + -1;
  if (sVar1 != 1) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x38);
  uVar2 = *(ushort *)(iVar4 + 2);
  uVar3 = uVar2 & 0xc000;
  if (uVar3 == 0x4000) {
    *(int *)(param_1 + 0x38) = iVar4 + 4;
    iVar4 = *(int *)(iVar4 + 4);
  }
  else {
    if (0x4000 < uVar3) {
      if (uVar3 == 0x8000) {
        *(ushort *)(param_1 + 0xe) = uVar2 & 0x3fff;
        return 1;
      }
      if (uVar3 != 0xc000) {
        return 0;
      }
      *(int *)(param_1 + 0x38) = iVar4 + 4;
      iVar4 = *(int *)(iVar4 + 4);
      *(int *)(param_1 + 0x38) = iVar4;
      *(ushort *)(param_1 + 0xe) = *(ushort *)(iVar4 + 2) & 0x3fff;
      return 1;
    }
    if ((uVar2 & 0xc000) != 0) {
      return 0;
    }
    iVar4 = iVar4 + 4;
  }
  *(int *)(param_1 + 0x38) = iVar4;
  *(ushort *)(param_1 + 0xe) = *(ushort *)(iVar4 + 2) & 0x3fff;
  return 0;
}

