
void FUN_8001f318(void)

{
  int iVar1;
  char *unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  char *unaff_s7;
  int in_stack_0000003c;
  int in_stack_00000040;
  int in_stack_00000044;
  
  if ((unaff_s3 & 0x40) != 0) {
    FUN_8001ed8c(0x30);
    FUN_8001ed8c((int)*unaff_s7);
  }
  iVar1 = unaff_s5;
  if ((unaff_s3 & 0x30) == 0x20) {
    for (; iVar1 < in_stack_00000044; iVar1 = iVar1 + 1) {
      FUN_8001ed8c(0x30);
    }
  }
  for (; unaff_s4 < in_stack_0000003c; unaff_s4 = unaff_s4 + 1) {
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
    for (; unaff_s5 < in_stack_00000044; unaff_s5 = unaff_s5 + 1) {
      FUN_8001ed8c(0x20);
    }
  }
  FUN_8001ec88();
  return;
}

