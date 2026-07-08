
void FUN_8006c608(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if (*(short *)(param_1 + 0x60) < 0xe) {
          *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + 2;
          return;
        }
      }
      else if (bVar1 != 3) {
        return;
      }
      FUN_8007ab44(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    FUN_8006c59c(param_1);
  }
  param_1[1] = 1;
  if (param_1[0x2b] == '\0') {
    sVar2 = *(short *)(param_1 + 0x42);
    if ((*(short *)(param_1 + 0x42) != 0) && (*(short *)(param_1 + 0x42) = sVar2 + -1, sVar2 == 1))
    {
      param_1[0x2b] = 0;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x42) = 2;
  }
  sVar2 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar2 + -1;
  if (sVar2 == 1) {
    *param_1 = 2;
    param_1[4] = 2;
  }
  iVar3 = FUN_80083f50((int)*(short *)(param_1 + 0x56));
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (iVar3 * *(short *)(param_1 + 0x44) >> 4);
  iVar3 = FUN_80083e80((int)*(short *)(param_1 + 0x56));
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - (iVar3 * *(short *)(param_1 + 0x44) >> 4);
  if (*(short *)(param_1 + 0x60) < 4) {
    *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + 2;
  }
  *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) ^ 1;
  return;
}

