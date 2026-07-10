// FUN_8002f738

void FUN_8002f738(int param_1)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  
  bVar2 = *(byte *)(param_1 + 4);
  iVar4 = *(int *)(param_1 + 0x10);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 != 2) {
        if (bVar2 != 3) {
          return;
        }
        FUN_8007a624(param_1);
        return;
      }
      if (*(char *)(param_1 + 5) == '\0') {
        *(undefined1 *)(param_1 + 5) = 1;
        *(undefined1 *)(param_1 + 7) = 0;
      }
      else if (*(char *)(param_1 + 5) != '\x01') {
        return;
      }
      iVar4 = FUN_80049e54(param_1,1);
      if (iVar4 == 0) {
        return;
      }
      *(undefined1 *)(param_1 + 4) = 3;
      return;
    }
    if (bVar2 != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 0x20;
    *(undefined1 *)(param_1 + 7) = 0;
    uVar3 = FUN_8009a450();
    *(ushort *)(param_1 + 0x32) = (uVar3 & 0x1ff) + 0x100;
    *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(iVar4 + 0x2e);
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar4 + 0x32);
    *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(iVar4 + 0x36);
  }
  if (*(char *)(param_1 + 5) == '\0') {
    cVar1 = *(char *)(param_1 + 6) + -1;
    *(char *)(param_1 + 6) = cVar1;
    if (cVar1 == '\0') {
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      FUN_8002343c(iVar4);
    }
  }
  else if ((*(char *)(param_1 + 5) == '\x01') &&
          (bVar2 = *(char *)(param_1 + 7) + 0xc, *(byte *)(param_1 + 7) = bVar2, 0x9f < bVar2)) {
    *(undefined1 *)(param_1 + 4) = 2;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 7) = 0xa0;
  }
  *(undefined1 *)(param_1 + 1) = DAT_800e7e81;
  return;
}

