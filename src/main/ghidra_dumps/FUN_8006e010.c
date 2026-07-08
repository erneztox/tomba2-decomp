
void FUN_8006e010(int param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_800e7fe4 == '\x03') {
    switch(DAT_800e7fe8) {
    case 0:
    case 1:
      sVar2 = 0;
      break;
    case 2:
      sVar2 = -0x80;
      break;
    case 3:
      sVar2 = -0x100;
      break;
    default:
      sVar2 = -0x180;
    }
    iVar3 = *(int *)(param_1 + 0x34);
    iVar4 = (int)sVar2;
    if (iVar4 < iVar3) {
      *(int *)(param_1 + 0x34) = iVar3 + -8;
      bVar1 = iVar4 < iVar3 + -8;
    }
    else {
      *(int *)(param_1 + 0x34) = iVar3 + 8;
      bVar1 = iVar3 + 8 < iVar4;
    }
    if (!bVar1) {
      *(int *)(param_1 + 0x34) = iVar4;
      return;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x34);
    if (iVar3 < 1) {
      *(int *)(param_1 + 0x34) = iVar3 + 8;
      if (-1 < iVar3 + 8) {
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
    }
    else {
      *(int *)(param_1 + 0x34) = iVar3 + -8;
      if (iVar3 + -8 < 1) {
        *(undefined4 *)(param_1 + 0x34) = 0;
        return;
      }
    }
  }
  return;
}

