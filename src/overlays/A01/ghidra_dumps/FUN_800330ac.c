// FUN_800330ac

void FUN_800330ac(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624();
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    *(undefined **)(param_1 + 0x40) = &DAT_800a1eb8;
    *(undefined ***)(param_1 + 0x50) = &PTR_DAT_800a1ea0;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined2 *)(param_1 + 0x32) = 0xffce;
    *(undefined4 *)(param_1 + 0x34) = 0x1000100;
  }
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x40) == 0) {
    *(undefined1 *)(param_1 + 4) = 3;
  }
  else {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}

