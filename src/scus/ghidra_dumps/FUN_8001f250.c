
void FUN_8001f250(char param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *unaff_s2;
  uint unaff_s3;
  int iVar4;
  char *unaff_s7;
  int unaff_s8;
  undefined1 auStackX_0 [16];
  int in_stack_0000003c;
  int in_stack_00000040;
  int in_stack_00000044;
  char *pcStack00000048;
  
  *unaff_s2 = param_1;
  pcStack00000048 = s_DrawOTag__08x_____80010ac4 + 0x10;
  if ((unaff_s3 & 8) != 0) {
    iVar2 = (int)auStackX_0 - (int)unaff_s2;
    if ((param_2 != 8) || (iVar2 = (int)auStackX_0 - (int)unaff_s2, param_1 == '0'))
    goto LAB_8001f294;
    unaff_s2 = unaff_s2 + -1;
    *unaff_s2 = '0';
  }
  iVar2 = (int)auStackX_0 - (int)unaff_s2;
LAB_8001f294:
  iVar4 = iVar2 + 0x38 + in_stack_00000040;
  if (unaff_s8 != 0) {
    iVar4 = iVar4 + 1;
  }
  if ((unaff_s3 & 0x40) != 0) {
    iVar4 = iVar4 + 2;
  }
  iVar3 = in_stack_0000003c;
  if (in_stack_0000003c < iVar4) {
    iVar3 = iVar4;
  }
  if (((unaff_s3 & 0x30) == 0) && (iVar1 = iVar3, in_stack_00000044 != 0)) {
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
  iVar1 = iVar3;
  if ((unaff_s3 & 0x30) == 0x20) {
    for (; iVar1 < in_stack_00000044; iVar1 = iVar1 + 1) {
      FUN_8001ed8c(0x30);
    }
  }
  for (; iVar4 < in_stack_0000003c; iVar4 = iVar4 + 1) {
    FUN_8001ed8c(0x30);
  }
  if ((-1 < iVar2 + 0x37) && (FUN_8001ed8c((int)*unaff_s2), -1 < iVar2 + 0x36)) {
    FUN_8001ebb8();
    return;
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    FUN_8001ed8c(0x30);
  }
  if ((unaff_s3 & 0x10) != 0) {
    for (; iVar3 < in_stack_00000044; iVar3 = iVar3 + 1) {
      FUN_8001ed8c(0x20);
    }
  }
  FUN_8001ec88();
  return;
}

