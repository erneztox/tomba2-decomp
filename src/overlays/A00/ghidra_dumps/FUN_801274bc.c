// FUN_801274bc

void FUN_801274bc(undefined4 param_1,uint param_2)

{
  int in_v0;
  int iVar1;
  int unaff_s0;
  
  if (*(short *)(*(int *)(unaff_s0 + in_v0 * 4 + 0xc0) + 0xc) == 0) {
    FUN_801304a8((uint)DAT_800bf9d2 & ~(1 << (param_2 & 0x1f)));
    return;
  }
  DAT_800bf9d2 = DAT_800bf9d2 | (byte)(1 << (param_2 & 0x1f));
  if (*(short *)(unaff_s0 + 0x74) != 0) {
    if (*(short *)(unaff_s0 + 0x74) != 1) {
      FUN_80130514();
      return;
    }
    iVar1 = *(int *)(unaff_s0 + 0xc4);
    *(short *)(iVar1 + 10) = *(short *)(iVar1 + 10) + *(short *)(iVar1 + 0x12);
    iVar1 = *(int *)(unaff_s0 + 0xc4);
    *(short *)(iVar1 + 0x12) = *(short *)(iVar1 + 0x12) + *(short *)(iVar1 + 0x14);
    return;
  }
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 10) = *(undefined2 *)(unaff_s0 + 0x70);
  FUN_80130514();
  return;
}

