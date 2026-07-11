// FUN_80117a14

void FUN_80117a14(void)

{
  int iVar1;
  undefined1 *unaff_s0;
  
  iVar1 = func_0x80049250();
  if (iVar1 != 0) {
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

