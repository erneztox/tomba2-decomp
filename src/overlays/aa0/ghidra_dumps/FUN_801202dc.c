// FUN_801202dc

void FUN_801202dc(void)

{
  int unaff_s0;
  
  *(uint *)(unaff_s0 + 0x30) = *(int *)(unaff_s0 + 0x30) + (*(byte *)(unaff_s0 + 5) + 1) * 0x100;
  *(undefined1 *)(unaff_s0 + 0x5e) = 2;
  FUN_801322a8((int)*(short *)(unaff_s0 + 0x32));
  return;
}

