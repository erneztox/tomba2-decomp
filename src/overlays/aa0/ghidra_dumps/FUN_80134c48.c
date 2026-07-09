// FUN_80134c48

void FUN_80134c48(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
        FUN_8013dd1c();
        return;
      }
      return;
    }
    if (bVar1 != 0) {
      FUN_8013dd24();
      return;
    }
    *(undefined4 *)(param_1 + 0x50) = 0x8014bc68;
    *(undefined2 *)(param_1 + 0x48) =
         *(undefined2 *)((uint)*(byte *)(param_1 + 7) * 4 + -0x7feb431c);
    uVar3 = *(undefined2 *)((uint)*(byte *)(param_1 + 7) * 4 + -0x7feb431a);
    *(undefined2 *)(param_1 + 0x4c) = 0;
    *(undefined2 *)(param_1 + 0x32) = 0;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined2 *)(param_1 + 0x4a) = uVar3;
    uVar2 = *(undefined1 *)(*(byte *)(param_1 + 7) + 0x8014bcdc);
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 5) = uVar2;
  }
  if (*(char *)(param_1 + 5) != '\0') {
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + -1;
    FUN_8013dd24();
    return;
  }
  bVar1 = *(byte *)(param_1 + 6);
  *(byte *)(param_1 + 6) = bVar1 + 1;
  if (5 < bVar1) {
    *(undefined1 *)(param_1 + 4) = 2;
    FUN_8013dd24();
    return;
  }
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(*(byte *)(param_1 + 6) + 0x8014bccc);
  uVar2 = *(undefined1 *)(*(byte *)(param_1 + 6) + 0x8014bcd4);
  *(undefined1 *)(param_1 + 0x56) = uVar2;
  *(undefined1 *)(param_1 + 0x55) = uVar2;
  *(undefined1 *)(param_1 + 0x54) = uVar2;
  func_0x8002b278(param_1);
  FUN_8013dd24();
  return;
}

