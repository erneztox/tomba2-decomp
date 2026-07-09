// FUN_80116740

void FUN_80116740(void)

{
  int in_v0;
  int unaff_s1;
  
  *(short *)(unaff_s1 + 0x4a) = (short)(in_v0 >> 4);
  if (0 < *(short *)(unaff_s1 + 0x58)) {
    *(undefined2 *)(unaff_s1 + 0x58) = 0;
    func_0x8009a450();
    return;
  }
  func_0x80076d68();
  return;
}

