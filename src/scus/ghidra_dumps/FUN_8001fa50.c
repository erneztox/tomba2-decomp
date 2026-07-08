
void FUN_8001fa50(uint *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  char *unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s6;
  char *unaff_s7;
  int unaff_s8;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  
  if ((param_2 & 1) != 0) {
    FUN_8001f280();
    return;
  }
  *param_1 = *param_1 | 0x8000000;
  if ((param_2 & 2) == 0) {
    *param_1 = *param_1 & 0xfdffffff;
    FUN_8001f49c(param_1,(short)*param_1);
    return;
  }
  if ((*param_1 | 0x2000000) != 0) {
    unaff_s4 = unaff_s4 + 2;
  }
  iVar2 = in_stack_00000024;
  if (in_stack_00000024 < unaff_s4) {
    iVar2 = unaff_s4;
  }
  if (((unaff_s3 & 0x30) == 0) && (iVar1 = iVar2, in_stack_0000002c != 0)) {
    for (; iVar1 < in_stack_0000002c; iVar1 = iVar1 + 1) {
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
  iVar1 = iVar2;
  if ((unaff_s3 & 0x30) == 0x20) {
    for (; iVar1 < in_stack_0000002c; iVar1 = iVar1 + 1) {
      FUN_8001ed8c(0x30);
    }
  }
  for (; unaff_s4 < in_stack_00000024; unaff_s4 = unaff_s4 + 1) {
    FUN_8001ed8c(0x30);
  }
  if ((-1 < unaff_s6 + -1) && (FUN_8001ed8c((int)*unaff_s2), -1 < unaff_s6 + -2)) {
    FUN_8001ebb8();
    return;
  }
  while (in_stack_00000028 = in_stack_00000028 + -1, -1 < in_stack_00000028) {
    FUN_8001ed8c(0x30);
  }
  if ((unaff_s3 & 0x10) != 0) {
    for (; iVar2 < in_stack_0000002c; iVar2 = iVar2 + 1) {
      FUN_8001ed8c(0x20);
    }
  }
  FUN_8001ec88();
  return;
}

