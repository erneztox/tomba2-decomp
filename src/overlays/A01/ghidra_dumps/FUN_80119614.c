// FUN_80119614

void FUN_80119614(void)

{
  short sVar1;
  int in_v1;
  int unaff_s0;
  
  if (in_v1 != 1) {
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

