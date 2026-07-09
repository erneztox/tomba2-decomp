// FUN_8011ff68

void FUN_8011ff68(undefined4 param_1,undefined4 param_2)

{
  ushort in_v0;
  int unaff_s0;
  int unaff_s1;
  
  *(ushort *)(unaff_s0 + 0x56) = in_v0 & 0xfff;
  DAT_800bf80f = 3;
  func_0x80041768(param_1,param_2,4);
  *(ushort *)(*(int *)(unaff_s1 + 0xc4) + 10) =
       *(short *)(*(int *)(unaff_s1 + 0xc4) + 10) - 0x20U & 0xfff;
  func_0x800517f8();
  return;
}

