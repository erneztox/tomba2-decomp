// FUN_80127384

void FUN_80127384(undefined4 param_1,int param_2)

{
  short sVar1;
  byte in_v1;
  int iVar2;
  int unaff_s0;
  
  if ((in_v1 & 0x80) != 0) {
    if ((in_v1 & 1) != 0) {
      sVar1 = FUN_80127384();
      if (sVar1 != 0) {
        *(undefined2 *)(unaff_s0 + 0x7a) = 0;
        iVar2 = *(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0);
        *(byte *)(iVar2 + 0x3e) = *(byte *)(iVar2 + 0x3e) & 0xfe;
        FUN_801303b0();
        return;
      }
      iVar2 = *(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0);
      *(byte *)(iVar2 + 0x3e) = *(byte *)(iVar2 + 0x3e) & 0x7f;
      FUN_801303bc();
      return;
    }
    if ((in_v1 & 0x10) == 0) {
      *(byte *)(param_2 + 0x3e) = in_v1 | 0x10;
      FUN_80131768();
    }
  }
  *(undefined1 *)(unaff_s0 + 5) = 0;
  *(undefined1 *)(unaff_s0 + 6) = 0;
  *(undefined1 *)(unaff_s0 + 0x5e) = 0;
  FUN_801303f8();
  return;
}

