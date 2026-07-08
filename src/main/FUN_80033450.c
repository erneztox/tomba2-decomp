
void FUN_80033450(int param_1)

{
  byte bVar1;
  int iVar2;
  
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
    *(undefined4 *)(param_1 + 0x5c) = 0xc010c;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0x1000;
  }
  bVar1 = *(char *)(param_1 + 5) + 1;
  *(byte *)(param_1 + 5) = bVar1;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(&DAT_800a2068 + (uint)bVar1 * 4);
  if (*(byte *)(param_1 + 5) < 4) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -0x300;
    iVar2 = *(int *)(param_1 + 0x58) + 0xcc;
  }
  else {
    if (0xf < *(byte *)(param_1 + 5)) {
      *(undefined1 *)(param_1 + 4) = 2;
      return;
    }
    iVar2 = *(int *)(param_1 + 0x58) + 0x174;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0x200;
  }
  *(int *)(param_1 + 0x58) = iVar2;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

