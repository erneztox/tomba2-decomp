// FUN_80132e90

void FUN_80132e90(undefined4 param_1)

{
  char in_v0;
  int iVar1;
  int unaff_s1;
  undefined2 uStack00000012;
  short sStack00000016;
  undefined2 uStack0000001a;
  
  uStack00000012 = *(undefined2 *)(unaff_s1 + 0x2e);
  *(char *)(unaff_s1 + 5) = in_v0 + '\x01';
  sStack00000016 = *(short *)(unaff_s1 + 0x32) + 0x80;
  uStack0000001a = *(undefined2 *)(unaff_s1 + 0x36);
  iVar1 = func_0x8003116c(param_1,&stack0x00000010,0xffffffce);
  *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
  iVar1 = func_0x8003116c(0x24,&stack0x00000010,0xffffffce);
  *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
  func_0x80027144(*(undefined4 *)(*(int *)(unaff_s1 + 0xc0) + 0x40),&stack0x00000010,0x800,8);
  func_0x80074590(0xc,0,0);
  return;
}

