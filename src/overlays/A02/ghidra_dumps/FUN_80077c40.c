// FUN_80077c40

void FUN_80077c40(int param_1,int param_2,int param_3)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_3 * 4 + param_2);
  uVar2 = *(ushort *)(iVar4 + 6);
  *(int *)(param_1 + 0x38) = iVar4;
  *(ushort *)(param_1 + 0xe) = uVar2 & 0xfff;
  FUN_80076904();
  uVar2 = *(ushort *)(iVar4 + 6);
  uVar3 = uVar2 & 0xc000;
  if ((uVar2 & 0x2000) == 0) {
    return;
  }
  if (uVar3 != 0x4000) {
    if (uVar3 < 0x4001) {
      if ((uVar2 & 0xc000) != 0) {
        return;
      }
      sVar1 = *(short *)(param_1 + 0xe);
      iVar4 = iVar4 + 8;
      goto LAB_80077ce0;
    }
    if (uVar3 == 0x8000) {
      return;
    }
    if (uVar3 != 0xc000) {
      return;
    }
  }
  iVar4 = *(int *)(iVar4 + 8);
  sVar1 = *(short *)(param_1 + 0xe);
LAB_80077ce0:
  FUN_80075ff8(param_1,iVar4,(int)sVar1);
  return;
}

