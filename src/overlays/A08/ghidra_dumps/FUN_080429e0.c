// FUN_080429e0

undefined4 FUN_080429e0(void)

{
  ushort uVar1;
  int unaff_s1;
  int unaff_s3;
  
  uVar1 = func_0x0009a450();
  *(ushort *)(unaff_s3 + 0x3a) = *(short *)(unaff_s1 + 0x4e) + (3 - (uVar1 & 7));
  uVar1 = func_0x0009a450();
  *(ushort *)(unaff_s3 + 0x3e) = *(short *)(unaff_s1 + 0x50) + (3 - (uVar1 & 7));
  uVar1 = func_0x0009a450();
  *(ushort *)(unaff_s3 + 0x42) = *(short *)(unaff_s1 + 0x52) + (3 - (uVar1 & 7));
  return 0;
}

