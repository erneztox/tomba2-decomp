// FUN_8013bafc

void FUN_8013bafc(void)

{
  ushort uVar1;
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0x40) = 0x28;
  *(char *)(unaff_s0 + 7) = *(char *)(unaff_s0 + 7) + '\x01';
  uVar1 = *(short *)(unaff_s0 + 0x40) - 1;
  *(ushort *)(unaff_s0 + 0x40) = uVar1;
  if ((int)((uint)uVar1 << 0x10) < 1) {
    *(char *)(unaff_s0 + 7) = *(char *)(unaff_s0 + 7) + '\x01';
    FUN_80144b20();
    return;
  }
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x10;
  FUN_801406e4();
  return;
}

