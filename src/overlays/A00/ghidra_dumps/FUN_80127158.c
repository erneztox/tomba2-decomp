// FUN_80127158

void FUN_80127158(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int unaff_s0;
  
  if (*(short *)(param_1 + 0xc) <= *(short *)(unaff_s0 + 0x6e)) {
    iVar3 = *(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0);
    iVar2 = (uint)*(ushort *)(iVar3 + 0x14) << 0x10;
    *(short *)(iVar3 + 0x12) = (short)((iVar2 >> 0x10) - (iVar2 >> 0x1f) >> 1);
    *(undefined2 *)(unaff_s0 + 0x74) = 0;
    *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
    *(byte *)(unaff_s0 + 0x5e) = *(byte *)(unaff_s0 + 0x5e) | 0x80;
    FUN_801303f8();
    return;
  }
  iVar2 = *(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0);
  sVar1 = *(short *)(iVar2 + 0x14);
  *(short *)(iVar2 + 0x14) = sVar1 - (sVar1 >> 3);
  FUN_801303f8();
  return;
}

