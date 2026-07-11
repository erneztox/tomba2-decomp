// FUN_80119608

void FUN_80119608(void)

{
  short sVar1;
  uint uVar2;
  int unaff_s0;
  
  if (*(char *)(unaff_s0 + 6) == '\0') {
    FUN_80113cb4();
    uVar2 = func_0x8009a450();
    *(ushort *)(unaff_s0 + 0x40) = (ushort)*(byte *)((uVar2 & 3) + 0x80137230) << 6;
    *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
    FUN_80122638();
    return;
  }
  if (*(char *)(unaff_s0 + 6) != '\x01') {
    FUN_80122638();
    return;
  }
  sVar1 = *(short *)(unaff_s0 + 0x40);
  *(short *)(unaff_s0 + 0x40) = sVar1 + -1;
  if (sVar1 == 1) {
    *(undefined1 *)(unaff_s0 + 5) = 2;
    *(undefined1 *)(unaff_s0 + 6) = 0;
    *(undefined1 *)(unaff_s0 + 7) = 0;
    if (*(int *)(unaff_s0 + 0x14) != 0) {
      *(undefined1 *)(*(int *)(unaff_s0 + 0x14) + 4) = 3;
    }
  }
  FUN_801208b4();
  FUN_801226ac();
  return;
}

