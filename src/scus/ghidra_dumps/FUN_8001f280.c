
void FUN_8001f280(void)

{
  int in_v0;
  int in_v1;
  int iVar1;
  char *unaff_s2;
  uint unaff_s3;
  int iVar2;
  int iVar3;
  char *unaff_s7;
  int unaff_s8;
  int in_stack_00000038;
  int in_stack_0000003c;
  int in_stack_00000040;
  int in_stack_00000044;
  
  if (in_v0 != in_v1) {
    unaff_s2 = unaff_s2 + -1;
    *unaff_s2 = (char)in_v1;
  }
  iVar2 = (int)&stack0x00000038 + (in_stack_00000040 - (int)unaff_s2);
  if (unaff_s8 != 0) {
    iVar2 = iVar2 + 1;
  }
  if ((unaff_s3 & 0x40) != 0) {
    iVar2 = iVar2 + 2;
  }
  iVar3 = in_stack_0000003c;
  if (in_stack_0000003c < iVar2) {
    iVar3 = iVar2;
  }
  if ((unaff_s3 & 0x30) == 0) {
    if ((in_stack_00000044 != 0) && (iVar1 = iVar3, iVar3 < in_stack_00000044)) {
      do {
        FUN_8001ed8c(0x20);
        iVar1 = iVar1 + 1;
      } while (iVar1 < in_stack_00000044);
    }
  }
  if (unaff_s8 != 0) {
    FUN_8001ed8c();
  }
  if ((unaff_s3 & 0x40) != 0) {
    FUN_8001ed8c(0x30);
    FUN_8001ed8c((int)*unaff_s7);
  }
  if (((unaff_s3 & 0x30) == 0x20) && (iVar1 = iVar3, iVar3 < in_stack_00000044)) {
    do {
      FUN_8001ed8c(0x30);
      iVar1 = iVar1 + 1;
    } while (iVar1 < in_stack_00000044);
  }
  if (iVar2 < in_stack_0000003c) {
    do {
      FUN_8001ed8c(0x30);
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_stack_0000003c);
  }
  if ((-1 < (int)(&stack0x00000037 + -(int)unaff_s2)) &&
     (FUN_8001ed8c((int)*unaff_s2), -1 < (int)(&stack0x00000036 + -(int)unaff_s2))) {
    FUN_8001ebb8();
    return;
  }
  while( true ) {
    in_stack_00000040 = in_stack_00000040 + -1;
    if (in_stack_00000040 < 0) break;
    FUN_8001ed8c(0x30);
  }
  if (((unaff_s3 & 0x10) != 0) && (iVar2 = iVar3, iVar3 < in_stack_00000044)) {
    do {
      FUN_8001ed8c(0x20);
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_stack_00000044);
  }
  iVar2 = in_stack_00000044;
  if (in_stack_00000044 < iVar3) {
    iVar2 = iVar3;
  }
  in_stack_00000038 = in_stack_00000038 + iVar2;
  FUN_8001ec88();
  return;
}

