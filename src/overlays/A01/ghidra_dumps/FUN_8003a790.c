// FUN_8003a790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003a790(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    iVar4 = 0;
    *(undefined1 *)(param_1 + 5) = 2;
    *(undefined2 *)(param_1 + 0x40) = 0x3c;
    iVar3 = param_1;
    if (*(char *)(param_1 + 8) != '\0') {
      do {
        *(undefined1 *)(*(int *)(iVar3 + 0xc0) + 0x3e) = 0;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < (int)(uint)*(byte *)(param_1 + 8));
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      iVar4 = 0;
      iVar3 = param_1;
      if (*(char *)(param_1 + 8) != '\0') {
        do {
          FUN_8003a290(param_1,*(undefined4 *)(iVar3 + 0xc0));
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar4 < (int)(uint)*(byte *)(param_1 + 8));
      }
      iVar3 = (int)_DAT_801003f8;
      sVar2 = *(short *)(param_1 + 0x36) + -0x10;
      *(short *)(param_1 + 0x36) = sVar2;
      if (iVar3 + 8 <= (int)sVar2) {
        return;
      }
      *(short *)(param_1 + 0x36) = _DAT_801003f8 + 8;
      *(undefined1 *)(param_1 + 0x5e) = 1;
      return;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return;
      }
      iVar4 = 0;
      iVar3 = param_1;
      if (*(char *)(param_1 + 8) == '\0') {
        return;
      }
      do {
        FUN_8003a5e4(param_1,*(undefined4 *)(iVar3 + 0xc0));
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < (int)(uint)*(byte *)(param_1 + 8));
      return;
    }
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

