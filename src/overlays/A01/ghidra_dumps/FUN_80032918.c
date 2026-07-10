// FUN_80032918

void FUN_80032918(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 6) = 0x10;
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x38);
    *(undefined1 *)(param_1 + 4) = 1;
    if (*(char *)(param_1 + 3) == '7') {
      *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + 0x40;
    }
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    iVar2 = FUN_8002b278(param_1);
    if (iVar2 == 0) {
      FUN_80031780(param_1);
    }
  }
  return;
}

