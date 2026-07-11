// FUN_801173f0

undefined4 FUN_801173f0(undefined4 param_1)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_s0;
  int unaff_s1;
  short unaff_s2;
  int unaff_s3;
  int unaff_s5;
  int unaff_s6;
  
  uVar1 = func_0x80085690(param_1,(int)unaff_s2);
  *(undefined2 *)(unaff_s1 + 0x6a) = uVar1;
  sVar2 = func_0x80084080(unaff_s3 + unaff_s0 * unaff_s0);
  iVar5 = (unaff_s5 << 0x10) >> 8;
  iVar3 = (int)sVar2;
  if (iVar3 == 0) {
    trap(0x1c00);
  }
  if ((iVar3 == -1) && (iVar5 == -0x80000000)) {
    trap(0x1800);
  }
  if (iVar3 == 0) {
    trap(0x1c00);
  }
  if ((iVar3 == -1) && (unaff_s0 << 8 == -0x80000000)) {
    trap(0x1800);
  }
  iVar4 = (unaff_s6 << 0x10) >> 8;
  if (iVar3 == 0) {
    trap(0x1c00);
  }
  if ((iVar3 == -1) && (iVar4 == -0x80000000)) {
    trap(0x1800);
  }
  *(undefined2 *)(unaff_s1 + 0x40) = 4;
  *(short *)(unaff_s1 + 0x42) = sVar2;
  *(short *)(unaff_s1 + 0x48) = (short)(iVar5 / iVar3);
  *(short *)(unaff_s1 + 0x4a) = (short)((unaff_s0 << 8) / iVar3);
  *(short *)(unaff_s1 + 0x4c) = (short)(iVar4 / iVar3);
  return 1;
}

