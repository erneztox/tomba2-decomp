
void FUN_8004de04(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 5) == '\0') {
      iVar3 = FUN_8004daec(param_1);
      if (iVar3 != 0) {
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      }
    }
    else if (*(char *)(param_1 + 5) == '\x01') {
      FUN_8004dd90(param_1);
    }
    if (*(short *)(param_1 + 0x60) == 0x59) {
      FUN_80026100(DAT_800bf87f);
    }
    *(undefined1 *)(param_1 + 1) = 1;
    DAT_800ed061 = DAT_800ed061 | 2;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      sVar2 = *(short *)(param_1 + 0x60);
      *(undefined1 *)(param_1 + 0xb) = 0x10;
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0x47) = 0;
      *(undefined2 *)(param_1 + 0x5a) = 0;
      *(undefined2 *)(param_1 + 0x5c) = 0;
      if (sVar2 != 0x5a) {
        if (0x5a < sVar2) {
          if (sVar2 == 0x5b) {
            *(undefined2 *)(param_1 + 0x42) = 8;
            return;
          }
          if (sVar2 != 0x5c) {
            return;
          }
          *(undefined2 *)(param_1 + 0x42) = 4;
          return;
        }
        if (sVar2 != 0x59) {
          return;
        }
      }
      *(undefined2 *)(param_1 + 0x42) = 0x10;
    }
  }
  else if (bVar1 == 2) {
    *(undefined1 *)(param_1 + 4) = 3;
    DAT_1f800137 = 0;
    DAT_800ed061 = DAT_800ed061 & 0xfd;
  }
  else if (bVar1 == 3) {
    FUN_8007a624(param_1);
  }
  return;
}

