// FUN_80127510

void FUN_80127510(void)

{
  int iVar1;
  int unaff_s0;
  
  if (*(short *)(unaff_s0 + 0x74) == 0) {
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 10) = *(undefined2 *)(unaff_s0 + 0x70);
    FUN_80130514();
    return;
  }
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

