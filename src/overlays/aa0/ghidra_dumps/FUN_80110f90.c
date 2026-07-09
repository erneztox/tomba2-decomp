// FUN_80110f90

/* WARNING: Removing unreachable block (ram,0x8011a154) */
/* WARNING: Removing unreachable block (ram,0x8011a1d0) */
/* WARNING: Removing unreachable block (ram,0x8011a164) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80110f90(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint extraout_v1;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int unaff_s2;
  int unaff_s5;
  
  iVar8 = 0xa00;
  *(undefined2 *)(param_1 + 0x56) = 0xa00;
  func_0x80054d14(param_1,param_2,0);
  pbVar6 = &DAT_00000008;
  iVar7 = 0;
  func_0x80041768();
  *(undefined2 *)(_DAT_1f800214 + 0x56) = 0xa00;
  sVar1 = 0;
  uVar4 = extraout_v1;
  while( true ) {
    *(short *)(iVar8 + 2) = sVar1 + (short)uVar4;
    *(short *)(iVar8 + 0x12) = (short)uVar4 + *(short *)(iVar8 + 0x10);
    *(short *)(iVar8 + 0xc) = *(short *)(iVar8 + 0xc) + 0x40;
    iVar5 = (uint)*pbVar6 * 0x10 + iVar7;
    if (*(short *)(iVar5 + 4) < *(short *)(iVar8 + 2)) {
      *(undefined2 *)(iVar8 + 2) = *(undefined2 *)(iVar5 + 4);
    }
    unaff_s2 = unaff_s2 + 1;
    if ((*(short *)(unaff_s5 + 0x40) < unaff_s2) ||
       (pbVar6 = (byte *)(unaff_s2 + param_4), (int)(*(byte *)(unaff_s5 + 8) - 2) <= unaff_s2))
    break;
    iVar8 = *(int *)(unaff_s5 + (uint)*pbVar6 * 4 + 0xc0);
    sVar1 = *(short *)(iVar8 + 2);
    uVar4 = (uint)*(ushort *)(iVar8 + 0x12);
  }
  uVar2 = *(short *)(unaff_s5 + 0x42) + 1;
  *(ushort *)(unaff_s5 + 0x42) = uVar2;
  if ((uVar2 & 3) == 0) {
    *(short *)(unaff_s5 + 0x40) = *(short *)(unaff_s5 + 0x40) + 1;
  }
  iVar7 = 2;
  if (DAT_800bf9de != '\x13') {
    return 0x13;
  }
  *(char *)(unaff_s5 + 6) = *(char *)(unaff_s5 + 6) + '\x01';
  if (2 < (int)(*(byte *)(unaff_s5 + 8) - 2)) {
    iVar8 = -0x7feb6050;
    iVar5 = unaff_s5 + 8;
    do {
      iVar9 = *(int *)(iVar5 + 0xc0);
      *(undefined2 *)(iVar9 + 2) = 0xf6a0;
      *(undefined2 *)(iVar9 + 0x12) = 0x10;
      *(undefined2 *)(iVar9 + 0x10) = 2;
      *(undefined2 *)(iVar9 + 0x16) = 0;
      *(undefined2 *)(iVar9 + 0x14) = 0x40;
      *(undefined2 *)(iVar9 + 8) = *(undefined2 *)(iVar8 + 8);
      iVar5 = iVar5 + 4;
      *(undefined2 *)(iVar9 + 10) = *(undefined2 *)(iVar8 + 10);
      iVar7 = iVar7 + 1;
      *(undefined2 *)(iVar9 + 0xc) = *(undefined2 *)(iVar8 + 0xc);
      iVar8 = iVar8 + 0x10;
    } while (iVar7 < (int)(*(byte *)(unaff_s5 + 8) - 2));
  }
  *(undefined2 *)(unaff_s5 + 0x40) = 2;
  *(undefined2 *)(unaff_s5 + 0x42) = 0;
  *(undefined1 *)(unaff_s5 + 0x2b) = 0;
  *(undefined2 *)(unaff_s5 + 0x60) = 0;
  *(undefined2 *)(unaff_s5 + 0x62) = 0x1f;
  uVar3 = FUN_8012c6ac();
  return uVar3;
}

