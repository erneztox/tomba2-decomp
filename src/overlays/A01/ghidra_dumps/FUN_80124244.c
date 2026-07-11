// FUN_80124244

void FUN_80124244(void)

{
  undefined2 in_v0;
  int unaff_s0;
  int unaff_s1;
  
  *(undefined2 *)(unaff_s0 + 0x32) = in_v0;
  *(int *)(unaff_s0 + 0x2c) =
       *(int *)(unaff_s0 + 0x2c) +
       (int)*(short *)(unaff_s1 + 0x44) * (int)*(short *)(unaff_s0 + 0x48);
  *(int *)(unaff_s0 + 0x34) =
       *(int *)(unaff_s0 + 0x34) +
       (int)*(short *)(unaff_s1 + 0x44) * (int)*(short *)(unaff_s0 + 0x4c);
  func_0x8004766c();
  func_0x80048750();
  *(short *)(unaff_s0 + 0xb8) = *(short *)(unaff_s0 + 0xb8) + -0x80;
  *(short *)(unaff_s0 + 0xba) = *(short *)(unaff_s0 + 0xba) + -0x80;
  *(short *)(unaff_s0 + 0xbc) = *(short *)(unaff_s0 + 0xbc) + -0x80;
  if (*(ushort *)(unaff_s0 + 0xb8) < 0x101) {
    *(char *)(unaff_s1 + 5) = *(char *)(unaff_s1 + 5) + '\x01';
    FUN_8012d2a8();
    return;
  }
  return;
}

