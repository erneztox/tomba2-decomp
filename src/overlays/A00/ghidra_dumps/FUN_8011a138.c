// FUN_8011a138

void FUN_8011a138(undefined4 param_1,byte *param_2,int param_3,int param_4)

{
  short sVar1;
  ushort uVar2;
  short in_v1;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_s1;
  int iVar6;
  int unaff_s2;
  int unaff_s5;
  
  sVar1 = 0;
  while( true ) {
    *(short *)(unaff_s1 + 2) = sVar1 + in_v1;
    *(short *)(unaff_s1 + 0x12) = in_v1 + *(short *)(unaff_s1 + 0x10);
    *(short *)(unaff_s1 + 0xc) = *(short *)(unaff_s1 + 0xc) + 0x40;
    iVar3 = (uint)*param_2 * 0x10 + param_3;
    if (*(short *)(iVar3 + 4) < *(short *)(unaff_s1 + 2)) {
      *(undefined2 *)(unaff_s1 + 2) = *(undefined2 *)(iVar3 + 4);
    }
    unaff_s2 = unaff_s2 + 1;
    if ((*(short *)(unaff_s5 + 0x40) < unaff_s2) ||
       (param_2 = (byte *)(unaff_s2 + param_4), (int)(*(byte *)(unaff_s5 + 8) - 2) <= unaff_s2))
    break;
    unaff_s1 = *(int *)(unaff_s5 + (uint)*param_2 * 4 + 0xc0);
    sVar1 = *(short *)(unaff_s1 + 2);
    in_v1 = *(short *)(unaff_s1 + 0x12);
  }
  uVar2 = *(short *)(unaff_s5 + 0x42) + 1;
  *(ushort *)(unaff_s5 + 0x42) = uVar2;
  if ((uVar2 & 3) == 0) {
    *(short *)(unaff_s5 + 0x40) = *(short *)(unaff_s5 + 0x40) + 1;
  }
  iVar3 = 2;
  if (DAT_800bf9de == '\x13') {
    *(char *)(unaff_s5 + 6) = *(char *)(unaff_s5 + 6) + '\x01';
    if (2 < (int)(*(byte *)(unaff_s5 + 8) - 2)) {
      iVar4 = -0x7feb6050;
      iVar5 = unaff_s5 + 8;
      do {
        iVar6 = *(int *)(iVar5 + 0xc0);
        *(undefined2 *)(iVar6 + 2) = 0xf6a0;
        *(undefined2 *)(iVar6 + 0x12) = 0x10;
        *(undefined2 *)(iVar6 + 0x10) = 2;
        *(undefined2 *)(iVar6 + 0x16) = 0;
        *(undefined2 *)(iVar6 + 0x14) = 0x40;
        *(undefined2 *)(iVar6 + 8) = *(undefined2 *)(iVar4 + 8);
        iVar5 = iVar5 + 4;
        *(undefined2 *)(iVar6 + 10) = *(undefined2 *)(iVar4 + 10);
        iVar3 = iVar3 + 1;
        *(undefined2 *)(iVar6 + 0xc) = *(undefined2 *)(iVar4 + 0xc);
        iVar4 = iVar4 + 0x10;
      } while (iVar3 < (int)(*(byte *)(unaff_s5 + 8) - 2));
    }
    *(undefined2 *)(unaff_s5 + 0x40) = 2;
    *(undefined2 *)(unaff_s5 + 0x42) = 0;
    *(undefined1 *)(unaff_s5 + 0x2b) = 0;
    *(undefined2 *)(unaff_s5 + 0x60) = 0;
    *(undefined2 *)(unaff_s5 + 0x62) = 0x1f;
    FUN_8012c6ac();
    return;
  }
  return;
}

