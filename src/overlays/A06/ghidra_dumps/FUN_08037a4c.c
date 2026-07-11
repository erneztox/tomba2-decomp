// FUN_08037a4c

void FUN_08037a4c(void)

{
  short sVar1;
  int iVar2;
  int unaff_s1;
  
  sVar1 = *(short *)(unaff_s1 + 0x42) + 0x1f;
  *(short *)(unaff_s1 + 0x42) = sVar1;
  iVar2 = func_0x00083e80((int)sVar1);
  *(short *)(unaff_s1 + 0x32) = *(short *)(unaff_s1 + 0x32) + (short)(iVar2 >> 10);
  return;
}

