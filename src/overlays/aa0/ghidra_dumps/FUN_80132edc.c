// FUN_80132edc

void FUN_80132edc(void)

{
  int in_v0;
  int in_v1;
  int unaff_s1;
  
  *(char *)(in_v1 + 0x28) = (char)in_v0;
  *(byte *)(in_v0 + 0x28) = *(byte *)(in_v0 + 0x28) | 0x80;
  func_0x80027144(*(undefined4 *)(*(int *)(unaff_s1 + 0xc0) + 0x40),&stack0x00000010,0x800,8);
  func_0x80074590(0xc,0,0);
  return;
}

