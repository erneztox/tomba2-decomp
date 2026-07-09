// FUN_80120590

void FUN_80120590(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_s0;
  int unaff_s1;
  
  iVar2 = 0;
  iVar4 = unaff_s0;
  do {
    iVar3 = *(int *)(iVar4 + 0xc0);
    if (0xc0 < *(short *)(iVar3 + 8)) {
      *(short *)(iVar3 + 8) = *(short *)(iVar3 + 8) + -0x40;
    }
    iVar2 = iVar2 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar2 < (int)(uint)*(byte *)(unaff_s0 + 8));
  *(undefined2 *)(unaff_s0 + 0x56) = *(undefined2 *)(unaff_s1 + 10);
  *(undefined2 *)(unaff_s0 + 0x2e) = *(undefined2 *)(unaff_s1 + 0x2c);
  *(undefined2 *)(unaff_s0 + 0x32) = *(undefined2 *)(unaff_s1 + 0x30);
  uVar1 = *(undefined2 *)(unaff_s1 + 0x34);
  *(undefined1 *)(unaff_s0 + 1) = 1;
  *(undefined2 *)(unaff_s0 + 0x36) = uVar1;
  func_0x80051c8c();
  return;
}

