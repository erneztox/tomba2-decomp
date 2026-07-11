// FUN_80130758

void FUN_80130758(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int unaff_s1;
  int unaff_s2;
  
  if (*(char *)(unaff_s1 + 3) == '\0') {
    if (*(char *)(unaff_s2 + 3) == '\0') {
      FUN_80139760(*(undefined2 *)(unaff_s2 + 0x2e),
                   (uint)*(ushort *)(unaff_s1 + 0x4e) - (uint)*(ushort *)(unaff_s1 + 0x80));
      return;
    }
    FUN_80139778(*(undefined2 *)(unaff_s2 + 0x2e),
                 (uint)*(ushort *)(unaff_s1 + 0x82) - (uint)*(ushort *)(unaff_s1 + 0x4e));
    return;
  }
  if (*(char *)(unaff_s2 + 3) == '\0') {
    FUN_8013977c(*(undefined2 *)(unaff_s2 + 0x36),
                 (uint)*(ushort *)(unaff_s1 + 0x52) - (uint)*(ushort *)(unaff_s1 + 0x84));
    return;
  }
  iVar4 = (int)(((uint)*(ushort *)(unaff_s1 + 0x86) - (uint)*(ushort *)(unaff_s2 + 0x36)) * 0x10000)
          >> 6;
  iVar3 = (int)(((uint)*(ushort *)(unaff_s1 + 0x86) - (uint)*(ushort *)(unaff_s1 + 0x52)) * 0x10000)
          >> 0x10;
  if (iVar3 == 0) {
    trap(0x1c00);
  }
  if ((iVar3 == -1) && (iVar4 == -0x80000000)) {
    trap(0x1800);
  }
  uVar1 = *(ushort *)(unaff_s1 + 0x50);
  uVar2 = *(ushort *)(unaff_s1 + 0x32);
  iVar3 = func_0x80083e80((int)(short)(iVar4 / iVar3));
  *(short *)(unaff_s2 + 0x32) =
       *(short *)(unaff_s1 + 0x32) +
       (short)(((int)(((uint)uVar1 - (uint)uVar2) * 0x10000) >> 0x10) * iVar3 >> 0xc) + -0x60;
  iVar3 = func_0x8007778c();
  if (iVar3 != 0) {
    func_0x800517f8();
    FUN_80139820();
    return;
  }
  return;
}

