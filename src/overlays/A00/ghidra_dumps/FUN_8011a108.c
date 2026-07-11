// FUN_8011a108

undefined4 FUN_8011a108(int param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint in_v1;
  uint extraout_v1;
  uint extraout_v1_00;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_s2;
  int unaff_s5;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    param_2 = &DAT_8014e4ec;
    param_3 = -0x7feb6a9c;
    *(undefined1 *)(param_1 + 6) = 2;
    sVar2 = func_0x80040cdc(param_1);
    *(undefined1 *)(param_1 + 0x70) = 1;
    goto LAB_80123168;
  }
  if (bVar1 < 2) {
    sVar2 = 0;
    if (bVar1 == 0) {
      if (*(char *)(param_1 + 0x2b) != '\x03') {
        return 0;
      }
      *(undefined1 *)(param_1 + 6) = 1;
      param_2 = (byte *)0x1;
      func_0x80042354();
      sVar2 = 0;
      in_v1 = extraout_v1;
    }
  }
  else {
    sVar2 = 0;
    if (bVar1 == 2) {
      func_0x80041098(param_1);
      if (*(char *)(param_1 + 0x70) != -1) {
        return 0;
      }
      func_0x80042310();
      sVar2 = 1;
      in_v1 = extraout_v1_00;
    }
  }
  while( true ) {
    *(short *)(param_1 + 2) = sVar2 + (short)in_v1;
    *(short *)(param_1 + 0x12) = (short)in_v1 + *(short *)(param_1 + 0x10);
    *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 0x40;
    iVar5 = (uint)*param_2 * 0x10 + param_3;
    if (*(short *)(iVar5 + 4) < *(short *)(param_1 + 2)) {
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(iVar5 + 4);
    }
    unaff_s2 = unaff_s2 + 1;
    if ((*(short *)(unaff_s5 + 0x40) < unaff_s2) ||
       (param_2 = (byte *)(unaff_s2 + param_4), (int)(*(byte *)(unaff_s5 + 8) - 2) <= unaff_s2))
    break;
    param_1 = *(int *)(unaff_s5 + (uint)*param_2 * 4 + 0xc0);
    sVar2 = *(short *)(param_1 + 2);
LAB_80123168:
    in_v1 = (uint)*(ushort *)(param_1 + 0x12);
  }
  uVar3 = *(short *)(unaff_s5 + 0x42) + 1;
  *(ushort *)(unaff_s5 + 0x42) = uVar3;
  if ((uVar3 & 3) == 0) {
    *(short *)(unaff_s5 + 0x40) = *(short *)(unaff_s5 + 0x40) + 1;
  }
  iVar5 = 2;
  if (DAT_800bf9de == '\x13') {
    *(char *)(unaff_s5 + 6) = *(char *)(unaff_s5 + 6) + '\x01';
    if (2 < (int)(*(byte *)(unaff_s5 + 8) - 2)) {
      iVar6 = -0x7feb6050;
      iVar7 = unaff_s5 + 8;
      do {
        iVar8 = *(int *)(iVar7 + 0xc0);
        *(undefined2 *)(iVar8 + 2) = 0xf6a0;
        *(undefined2 *)(iVar8 + 0x12) = 0x10;
        *(undefined2 *)(iVar8 + 0x10) = 2;
        *(undefined2 *)(iVar8 + 0x16) = 0;
        *(undefined2 *)(iVar8 + 0x14) = 0x40;
        *(undefined2 *)(iVar8 + 8) = *(undefined2 *)(iVar6 + 8);
        iVar7 = iVar7 + 4;
        *(undefined2 *)(iVar8 + 10) = *(undefined2 *)(iVar6 + 10);
        iVar5 = iVar5 + 1;
        *(undefined2 *)(iVar8 + 0xc) = *(undefined2 *)(iVar6 + 0xc);
        iVar6 = iVar6 + 0x10;
      } while (iVar5 < (int)(*(byte *)(unaff_s5 + 8) - 2));
    }
    *(undefined2 *)(unaff_s5 + 0x40) = 2;
    *(undefined2 *)(unaff_s5 + 0x42) = 0;
    *(undefined1 *)(unaff_s5 + 0x2b) = 0;
    *(undefined2 *)(unaff_s5 + 0x60) = 0;
    *(undefined2 *)(unaff_s5 + 0x62) = 0x1f;
    uVar4 = FUN_8012c6ac();
    return uVar4;
  }
  return 0x13;
}

