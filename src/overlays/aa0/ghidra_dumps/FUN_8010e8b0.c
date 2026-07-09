// FUN_8010e8b0

void FUN_8010e8b0(void)

{
  undefined1 *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  *(undefined2 *)(unaff_s2 + 0x18) = 0x24;
  *(undefined2 *)(unaff_s2 + 0x1a) = 0x580;
  *(undefined2 *)(unaff_s2 + 0x14) = 0x2800;
  if (*(byte *)(unaff_s1 + 5) != 0xffffffff) {
    func_0x80077cfc();
    *unaff_s0 = 7;
    *(undefined2 *)(unaff_s0 + 0x84) = 0x28;
    *(undefined2 *)(unaff_s0 + 0x86) = 0x50;
    *(ushort *)(unaff_s0 + 0x58) = *(ushort *)(unaff_s0 + 0x58) & 0xfff;
    unaff_s0[7] = unaff_s0[7] + '\x01';
    FUN_80120a38();
    return;
  }
  if (*(short *)(unaff_s0 + 0x72) == 0) {
    func_0x80076d68();
  }
  return;
}

