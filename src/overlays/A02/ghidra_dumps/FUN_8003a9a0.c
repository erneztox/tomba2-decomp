// FUN_8003a9a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003a9a0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 5)) {
  case 0:
    iVar3 = 0;
    iVar2 = param_1;
    if (*(char *)(param_1 + 8) != '\0') {
      do {
        FUN_8003a290(param_1,*(undefined4 *)(iVar2 + 0xc0));
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar3 < (int)(uint)*(byte *)(param_1 + 8));
    }
    iVar2 = (int)_DAT_801003f8;
    sVar1 = *(short *)(param_1 + 0x36) + -0x10;
    *(short *)(param_1 + 0x36) = sVar1;
    if ((int)sVar1 < iVar2 + 8) {
      *(short *)(param_1 + 0x36) = _DAT_801003f8 + 8;
      *(undefined1 *)(param_1 + 0x5e) = 1;
    }
    break;
  case 1:
    iVar3 = 0;
    *(undefined2 *)(param_1 + 0x40) = 0x28;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    iVar2 = param_1;
    if (*(char *)(param_1 + 8) != '\0') {
      do {
        *(undefined1 *)(*(int *)(iVar2 + 0xc0) + 0x3e) = 0;
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar3 < (int)(uint)*(byte *)(param_1 + 8));
    }
  case 2:
    sVar1 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar1;
    if (sVar1 == -1) {
      iVar3 = 0;
      iVar2 = param_1;
      if (*(char *)(param_1 + 8) != '\0') {
        do {
          *(undefined1 *)(*(int *)(iVar2 + 0xc0) + 0x3e) = 0;
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar3 < (int)(uint)*(byte *)(param_1 + 8));
      }
      FUN_80040aa4((int)*(short *)(param_1 + 0x60),2);
      DAT_800ed06c = DAT_800ed06c + '\x01';
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
    else {
      iVar3 = 0;
      iVar2 = param_1;
      if (*(char *)(param_1 + 8) != '\0') {
        do {
          FUN_8003a3e8(param_1,*(undefined4 *)(iVar2 + 0xc0));
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar3 < (int)(uint)*(byte *)(param_1 + 8));
      }
    }
    break;
  case 3:
  case 4:
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  case 5:
    iVar3 = 0;
    *(undefined1 *)(param_1 + 0x5e) = 2;
    iVar2 = param_1;
    if (*(char *)(param_1 + 8) != '\0') {
      do {
        FUN_8003a470(param_1,*(undefined4 *)(iVar2 + 0xc0));
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar3 < (int)(uint)*(byte *)(param_1 + 8));
    }
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + -4;
  }
  return;
}

