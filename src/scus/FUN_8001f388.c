
void FUN_8001f388(void)

{
  int in_v0;
  int unaff_s0;
  char *unaff_s2;
  uint unaff_s3;
  int unaff_s5;
  int unaff_s6;
  int in_stack_0000003c;
  int in_stack_00000040;
  int in_stack_00000044;
  
  if (in_v0 != 0) {
    do {
      FUN_8001ed8c(0x30);
      unaff_s0 = unaff_s0 + 1;
    } while (unaff_s0 < in_stack_0000003c);
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

