// FUN_80113b20

void FUN_80113b20(void)

{
  short sVar1;
  uint in_v0;
  int iVar2;
  int unaff_s0;
  int iVar3;
  int unaff_s1;
  short sStack0000001a;
  
  iVar3 = (int)((unaff_s0 + -0x1f + (in_v0 & 0x3f)) * 0x10000) >> 0x10;
  iVar2 = func_0x80083e80(iVar3);
  sStack0000001a = (short)(-iVar2 >> 4);
  func_0x80083f50(iVar3);
  func_0x80083f50((int)*(short *)(unaff_s1 + 0x56));
  func_0x80083e80((int)*(short *)(unaff_s1 + 0x56));
  sStack0000001a = sStack0000001a << 5;
  iVar2 = func_0x80133cac(1);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x5e) = *(undefined1 *)(unaff_s1 + 0x6c);
  }
  *(undefined2 *)(unaff_s1 + 0x42) = 4;
  if ((*(ushort *)(unaff_s1 + 0x40) & 0x1f) == 0) {
    func_0x80074590(0x8a,0,0);
  }
  sVar1 = *(short *)(unaff_s1 + 0x40);
  *(short *)(unaff_s1 + 0x40) = sVar1 + -1;
  if (sVar1 == 1) {
    FUN_8011cbe0();
    return;
  }
  return;
}

