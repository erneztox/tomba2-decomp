// FUN_801110a8

undefined4 FUN_801110a8(undefined1 param_1,byte *param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  short sVar2;
  ushort uVar3;
  int in_v0;
  undefined4 uVar4;
  undefined2 in_v1;
  uint uVar5;
  uint extraout_v1;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_s0;
  int unaff_s1;
  int iVar9;
  int unaff_s2;
  int unaff_s5;
  
  *(undefined2 *)(unaff_s0 + 0x2e) = in_v1;
  uVar5 = (uint)*(ushort *)(in_v0 + 0xe);
  *(ushort *)(unaff_s0 + 0x32) = *(ushort *)(in_v0 + 0xe);
  uVar1 = *(undefined2 *)(in_v0 + 0x10);
  *(undefined2 *)(unaff_s0 + 0x56) = 0;
  *(undefined2 *)(unaff_s0 + 0x36) = uVar1;
  *(undefined2 *)(unaff_s1 + 0x2e) = 0x4fc2;
  *(undefined2 *)(unaff_s1 + 0x32) = 0xf5b4;
  *(undefined2 *)(unaff_s1 + 0x36) = 0x1a00;
  *(undefined2 *)(unaff_s1 + 0x56) = 0x400;
  sVar2 = 0;
  if (unaff_s0 == 0) {
    if (*(char *)(unaff_s1 + 0x2b) != '\x03') {
      return 0;
    }
    *(undefined1 *)(unaff_s1 + 6) = param_1;
    param_2 = (byte *)0x1;
    func_0x80042354();
    sVar2 = 0;
    uVar5 = extraout_v1;
  }
  while( true ) {
    *(short *)(unaff_s1 + 2) = sVar2 + (short)uVar5;
    *(short *)(unaff_s1 + 0x12) = (short)uVar5 + *(short *)(unaff_s1 + 0x10);
    *(short *)(unaff_s1 + 0xc) = *(short *)(unaff_s1 + 0xc) + 0x40;
    iVar6 = (uint)*param_2 * 0x10 + param_3;
    if (*(short *)(iVar6 + 4) < *(short *)(unaff_s1 + 2)) {
      *(undefined2 *)(unaff_s1 + 2) = *(undefined2 *)(iVar6 + 4);
    }
    unaff_s2 = unaff_s2 + 1;
    if ((*(short *)(unaff_s5 + 0x40) < unaff_s2) ||
       (param_2 = (byte *)(unaff_s2 + param_4), (int)(*(byte *)(unaff_s5 + 8) - 2) <= unaff_s2))
    break;
    unaff_s1 = *(int *)(unaff_s5 + (uint)*param_2 * 4 + 0xc0);
    sVar2 = *(short *)(unaff_s1 + 2);
    uVar5 = (uint)*(ushort *)(unaff_s1 + 0x12);
  }
  uVar3 = *(short *)(unaff_s5 + 0x42) + 1;
  *(ushort *)(unaff_s5 + 0x42) = uVar3;
  if ((uVar3 & 3) == 0) {
    *(short *)(unaff_s5 + 0x40) = *(short *)(unaff_s5 + 0x40) + 1;
  }
  iVar6 = 2;
  if (DAT_800bf9de != '\x13') {
    return 0x13;
  }
  *(char *)(unaff_s5 + 6) = *(char *)(unaff_s5 + 6) + '\x01';
  if (2 < (int)(*(byte *)(unaff_s5 + 8) - 2)) {
    iVar7 = -0x7feb6050;
    iVar8 = unaff_s5 + 8;
    do {
      iVar9 = *(int *)(iVar8 + 0xc0);
      *(undefined2 *)(iVar9 + 2) = 0xf6a0;
      *(undefined2 *)(iVar9 + 0x12) = 0x10;
      *(undefined2 *)(iVar9 + 0x10) = 2;
      *(undefined2 *)(iVar9 + 0x16) = 0;
      *(undefined2 *)(iVar9 + 0x14) = 0x40;
      *(undefined2 *)(iVar9 + 8) = *(undefined2 *)(iVar7 + 8);
      iVar8 = iVar8 + 4;
      *(undefined2 *)(iVar9 + 10) = *(undefined2 *)(iVar7 + 10);
      iVar6 = iVar6 + 1;
      *(undefined2 *)(iVar9 + 0xc) = *(undefined2 *)(iVar7 + 0xc);
      iVar7 = iVar7 + 0x10;
    } while (iVar6 < (int)(*(byte *)(unaff_s5 + 8) - 2));
  }
  *(undefined2 *)(unaff_s5 + 0x40) = 2;
  *(undefined2 *)(unaff_s5 + 0x42) = 0;
  *(undefined1 *)(unaff_s5 + 0x2b) = 0;
  *(undefined2 *)(unaff_s5 + 0x60) = 0;
  *(undefined2 *)(unaff_s5 + 0x62) = 0x1f;
  uVar4 = FUN_8012c6ac();
  return uVar4;
}

