// FUN_8012c590

void FUN_8012c590(void)

{
  int in_v0;
  int iVar1;
  int iVar2;
  int unaff_s1;
  
  *(short *)(unaff_s1 + 0x42) = *(short *)(unaff_s1 + 0x42) + 0x22 + (short)(in_v0 >> 9);
  iVar2 = *(int *)(unaff_s1 + 0x10);
  iVar1 = func_0x80083e80((int)*(short *)(unaff_s1 + 0x48));
  *(short *)(unaff_s1 + 0x32) =
       *(short *)(unaff_s1 + 0x60) + (short)(iVar1 * *(short *)(unaff_s1 + 0x4a) >> 0xc);
  *(undefined2 *)(iVar2 + 0x4e) = *(undefined2 *)(unaff_s1 + 0x2e);
  *(short *)(iVar2 + 0x50) = *(short *)(unaff_s1 + 0x32) + 0x3c;
  *(undefined2 *)(iVar2 + 0x52) = *(undefined2 *)(unaff_s1 + 0x36);
  FUN_8013ecf8();
  return;
}

