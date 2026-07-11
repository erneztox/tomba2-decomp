// FUN_8012e454

void FUN_8012e454(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined2 in_v0;
  ushort uVar1;
  int unaff_s0;
  int unaff_s1;
  undefined2 unaff_s5;
  
  *(undefined2 *)(unaff_s1 + 0x6a) = in_v0;
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x10) = unaff_s5;
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x12) = 0x1400;
  uVar1 = *(short *)(unaff_s1 + 0x6c) + 1;
  *(ushort *)(unaff_s1 + 0x6c) = uVar1;
  if ((uVar1 & 0x80) != 0) {
    FUN_8014041c();
    return;
  }
  *(int *)(*(int *)(unaff_s0 + 0xfc) + 0x40) = param_3 + *(int *)(param_2 + 0x3c);
  if ((*(byte *)(param_4 * 8 + -0x7feb40f5) & 0x10) != 0) {
    FUN_80140464();
    return;
  }
  *(ushort *)(unaff_s0 + 0x62) = *(ushort *)(unaff_s0 + 0x62) & 0xfff7;
  return;
}

