// FUN_80033630

void FUN_80033630(int param_1)

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
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined2 *)(param_1 + 0x4c) = 0;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0xff;
    *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + 0x78;
  }
  bVar1 = *(char *)(param_1 + 5) + 1;
  *(byte *)(param_1 + 5) = bVar1;
  if (bVar1 < 6) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  return;
}

