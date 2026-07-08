
void FUN_8001f2cc(void)

{
  int iVar1;
  int iVar2;
  int in_v0;
  char *unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s6;
  char *unaff_s7;
  int unaff_s8;
  int in_stack_0000003c;
  int in_stack_00000040;
  int in_stack_00000044;
  
  if ((in_v0 == 0) && (iVar1 = unaff_s4, in_stack_00000044 != 0)) {
    for (; iVar1 < in_stack_00000044; iVar1 = iVar1 + 1) {
      FUN_8001ed8c(0x20);
    }
  }
  if (unaff_s8 != 0) {
    FUN_8001ed8c();
  }
  if ((unaff_s3 & 0x40) != 0) {
    FUN_8001ed8c(0x30);
    FUN_8001ed8c((int)*unaff_s7);
  }
  iVar1 = unaff_s4;
  iVar2 = unaff_s4;
  if ((unaff_s3 & 0x30) == 0x20) {
    for (; iVar1 < in_stack_00000044; iVar1 = iVar1 + 1) {
      FUN_8001ed8c(0x30);
    }
  }
  for (; iVar2 < in_stack_0000003c; iVar2 = iVar2 + 1) {
    FUN_8001ed8c(0x30);
  }
  if ((-1 < unaff_s6 + -1) && (FUN_8001ed8c((int)*unaff_s2), -1 < unaff_s6 + -2)) {
    FUN_8001ebb8();
    return;
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    FUN_8001ed8c(0x30);
  }
  if ((unaff_s3 & 0x10) != 0) {
    for (; unaff_s4 < in_stack_00000044; unaff_s4 = unaff_s4 + 1) {
      FUN_8001ed8c(0x20);
    }
  }
  FUN_8001ec88();
  return;
}

