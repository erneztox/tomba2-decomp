// FUN_801321d0

void FUN_801321d0(int param_1)

{
  undefined2 uVar1;
  undefined2 in_v0;
  int iVar2;
  int unaff_s0;
  
  *(undefined2 *)(param_1 + 0x2e) = in_v0;
  *(short *)(param_1 + 0x32) = *(short *)(unaff_s0 + 0x32) + -0x78;
  uVar1 = *(undefined2 *)(unaff_s0 + 0x36);
  *(undefined1 *)(param_1 + 3) = 0xc;
  *(undefined2 *)(param_1 + 0x36) = uVar1;
  *(int *)(unaff_s0 + 0x10) = param_1;
  iVar2 = func_0x80083e80((int)*(short *)(unaff_s0 + 0x50));
  *(short *)(unaff_s0 + 0xba) = *(short *)(unaff_s0 + 0xba) + (short)((iVar2 << 8) >> 0xc);
  FUN_8013b2d0();
  return;
}

