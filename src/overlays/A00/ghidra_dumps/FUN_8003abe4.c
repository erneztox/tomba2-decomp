// FUN_8003abe4

void FUN_8003abe4(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return;
      }
      iVar4 = 0;
      iVar3 = param_1;
      if (*(char *)(param_1 + 8) != '\0') {
        do {
          FUN_8003a470(param_1,*(undefined4 *)(iVar3 + 0xc0));
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar4 < (int)(uint)*(byte *)(param_1 + 8));
      }
      *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + -4;
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined2 *)(param_1 + 0x40) = 0x28;
  }
  sVar2 = *(short *)(param_1 + 0x40) + -1;
  *(short *)(param_1 + 0x40) = sVar2;
  if (sVar2 == -1) {
    iVar4 = 0;
    iVar3 = param_1;
    if (*(char *)(param_1 + 8) != '\0') {
      do {
        *(undefined1 *)(*(int *)(iVar3 + 0xc0) + 0x3e) = 0;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < (int)(uint)*(byte *)(param_1 + 8));
    }
    *(undefined1 *)(param_1 + 0x5e) = 2;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else {
    iVar4 = 0;
    iVar3 = param_1;
    if (*(char *)(param_1 + 8) != '\0') {
      do {
        FUN_8003a3e8(param_1,*(undefined4 *)(iVar3 + 0xc0));
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < (int)(uint)*(byte *)(param_1 + 8));
    }
  }
  return;
}

