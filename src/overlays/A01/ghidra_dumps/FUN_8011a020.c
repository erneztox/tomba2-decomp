// FUN_8011a020

void FUN_8011a020(int param_1)

{
  short sVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 6) == '\0') {
    FUN_80113cb4(param_1);
    uVar2 = func_0x8009a450();
    *(ushort *)(param_1 + 0x40) = (ushort)*(byte *)((uVar2 & 3) + 0x80137230) << 6;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    FUN_80123060();
    return;
  }
  if (*(char *)(param_1 + 6) != '\x01') {
    FUN_80123060();
    return;
  }
  sVar1 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar1 + -1;
  if (sVar1 == 1) {
    *(undefined1 *)(param_1 + 5) = 2;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 3;
    }
  }
  FUN_801208b4(param_1);
  return;
}

