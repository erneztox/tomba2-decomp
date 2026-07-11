// FUN_80132ec0

void FUN_80132ec0(void)

{
  int in_v0;
  int iVar1;
  int unaff_s1;
  
  *(byte *)(in_v0 + 0x28) = *(byte *)(in_v0 + 0x28) | 0x80;
  iVar1 = func_0x8003116c(0x24,&stack0x00000010,0xffffffce);
  *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
  func_0x80027144(*(undefined4 *)(*(int *)(unaff_s1 + 0xc0) + 0x40),&stack0x00000010,0x800,8);
  func_0x80074590(0xc,0,0);
  return;
}

