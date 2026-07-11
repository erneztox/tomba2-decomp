// FUN_80120200

void FUN_80120200(void)

{
  int in_v0;
  int in_v1;
  int iVar1;
  int unaff_s0;
  int unaff_s1;
  
  *(int *)(unaff_s0 + 0x14) = in_v0 + in_v1;
  iVar1 = *(int *)(unaff_s1 + 0x44);
  *(int *)(unaff_s0 + 0x18) = *(int *)(unaff_s0 + 0x18) + *(int *)(unaff_s1 + 0x40);
  *(int *)(unaff_s0 + 0x1c) = *(int *)(unaff_s0 + 0x1c) + iVar1;
  func_0x80084660();
  func_0x80084690();
  FUN_80128b08();
  return;
}

