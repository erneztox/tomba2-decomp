// FUN_80116094

void FUN_80116094(void)

{
  undefined2 uVar1;
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0x4a) = 0;
  uVar1 = *(undefined2 *)
           (*(int *)((uint)*(byte *)(unaff_s0 + 3) * 4 + -0x7feb6ba0) +
           *(short *)(unaff_s0 + 0x6c) * 6 + 2);
  *(undefined2 *)(unaff_s0 + 0x40) = 1;
  *(undefined2 *)(unaff_s0 + 0x32) = uVar1;
  return;
}

