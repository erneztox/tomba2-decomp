// FUN_8012a2d8

void FUN_8012a2d8(int param_1,int param_2)

{
  byte bVar1;
  uint in_v0;
  byte in_v1;
  int unaff_s1;
  
  *(byte *)(param_2 + 0x15c) = in_v1 | (byte)(param_1 << (in_v0 & 0x1f));
  bVar1 = *(char *)(param_2 + 0x1c1) + 1;
  *(byte *)(param_2 + 0x1c1) = bVar1;
  if (9 < bVar1) {
    func_0x8004ed94(0x6e,0x41);
  }
  *(undefined1 *)(unaff_s1 + 4) = 3;
  return;
}

