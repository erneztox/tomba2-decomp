// FUN_80106bec

/* WARNING: Removing unreachable block (ram,0x80107030) */

uint FUN_80106bec(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  uint extraout_v1;
  byte *pbVar12;
  uint uVar13;
  byte bVar14;
  byte *pbVar15;
  int iVar16;
  
  if (600 < (ushort)((*(short *)(param_1 + 0x2e) - *(short *)(param_3 + 0x2c)) + 600U)) {
    return 0;
  }
  iVar3 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34);
  uVar4 = (uint)((int)*(short *)(param_2 + 0x82) <
                (int)((uint)*(ushort *)(param_2 + 0x80) + iVar3 & 0xffff));
  if (uVar4 != 0) {
    return uVar4;
  }
  iVar5 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30);
  uVar4 = (uint)((int)*(short *)(param_2 + 0x82) <
                (int)((uint)*(ushort *)(param_2 + 0x80) + iVar5 & 0xffff));
  if (uVar4 != 0) {
    return uVar4;
  }
  iVar6 = func_0x80083f50((int)*(short *)(param_3 + 0xc));
  pbVar15 = (byte *)(iVar6 * *(short *)(param_2 + 0x80) >> 0xc);
  iVar6 = func_0x80083e80((int)*(short *)(param_3 + 0xc));
  iVar6 = -(iVar6 * *(short *)(param_2 + 0x80)) >> 0xc;
  pbVar12 = pbVar15;
  if ((int)pbVar15 << 0x10 < 0) {
    pbVar12 = (byte *)-(int)pbVar15;
  }
  iVar11 = iVar6;
  if (iVar6 << 0x10 < 0) {
    iVar11 = -iVar6;
  }
  uVar4 = (uint)(short)pbVar12;
  bVar14 = (int)uVar4 < (int)(short)iVar11;
  if (uVar4 == 0) {
    uVar4 = FUN_8010fcd8();
    return uVar4;
  }
  if ((short)iVar11 == 0) {
    bVar14 = 2;
  }
  if (bVar14 == 1) {
    sVar2 = (short)iVar5;
    if (sVar2 < 0) {
      iVar5 = -iVar5;
    }
    if (iVar11 << 0x10 < iVar5 << 0x10) {
      return (int)pbVar15 << 0x10;
    }
    iVar3 = (int)sVar2 * (((int)pbVar15 << 0x10) >> 0x10);
    iVar5 = (int)(short)iVar6;
    if (iVar5 == 0) {
      trap(0x1c00);
    }
    if ((iVar5 == -1) && (iVar3 == -0x80000000)) {
      trap(0x1800);
    }
    uVar13 = (uint)*(ushort *)(param_1 + 0x80) +
             ((uint)*(ushort *)(param_1 + 0x36) -
             ((uint)*(ushort *)(param_3 + 0x34) - iVar3 / iVar5)) + 0x40;
LAB_8010ff04:
    uVar1 = *(undefined2 *)(uVar13 + 0x34);
    pbVar15[0x4a] = 0;
    pbVar15[0x4b] = 0x10;
    pbVar15[0x50] = 0;
    pbVar15[0x51] = 2;
    *(undefined2 *)(pbVar15 + 0x36) = uVar1;
    uVar4 = FUN_80118f20();
    return uVar4;
  }
  if (bVar14 < 2) {
    if (bVar14 != 0) {
      uVar4 = FUN_8010ff1c();
      return uVar4;
    }
    iVar11 = iVar3;
    if ((short)iVar3 < 0) {
      iVar11 = -iVar3;
    }
    if ((int)pbVar12 << 0x10 < iVar11 << 0x10) {
      return iVar6 << 0x10;
    }
    iVar11 = (int)(short)iVar3 * ((iVar6 << 0x10) >> 0x10);
    iVar7 = (int)(short)pbVar15;
    iVar16 = iVar11 / iVar7;
    if (iVar7 == 0) {
      trap(0x1c00);
    }
    if ((iVar7 == -1) && (iVar11 == -0x80000000)) {
      trap(0x1800);
    }
    uVar4 = (uint)*(ushort *)(param_3 + 0x30);
    uVar13 = (uint)*(ushort *)(param_1 + 0x32);
    if (*(short *)(param_1 + 0x86) + 0x80 <
        (int)((uint)*(ushort *)(param_1 + 0x84) + (uVar13 - (uVar4 - iVar16)) + 0x40 & 0xffff)) {
      return 0x10;
    }
    if ((*(char *)(param_1 + 0x5f) == '\x10') &&
       (uVar13 = (uint)(short)iVar16,
       (int)((int)(short)*(ushort *)(param_3 + 0x30) - uVar13) <
       (int)(short)*(ushort *)(param_1 + 0x32))) {
      pbVar15[0x2a] =
           *(byte *)((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84));
      *(undefined2 *)(pbVar15 + 0x2e) = *(undefined2 *)(uVar13 + 0x2c);
      *(short *)(pbVar15 + 0x32) = *(short *)(uVar13 + 0x30) + 0xf0;
      goto LAB_8010ff04;
    }
  }
  else if (bVar14 == 2) {
    uVar4 = (uint)*(ushort *)(param_1 + 0x32);
    uVar13 = (uint)*(ushort *)(param_3 + 0x30);
    if (*(short *)(param_1 + 0x86) + 0x80 <
        (int)((uint)*(ushort *)(param_1 + 0x84) + (uVar4 - uVar13) + 0x40 & 0xffff)) {
      return 0x10;
    }
    if ((*(char *)(param_1 + 0x5f) == '\x10') && ((int)(uVar13 << 0x10) < (int)(uVar4 << 0x10))) {
      *(ushort *)(param_1 + 0x32) =
           *(ushort *)(param_3 + 0x30) +
           (*(short *)(param_1 + 0x86) - *(ushort *)(param_1 + 0x84)) + 0x40;
      uVar4 = FUN_8010ff1c();
      return uVar4;
    }
  }
  else {
    if (bVar14 != 3) {
      uVar4 = FUN_8010ff1c();
      return uVar4;
    }
    uVar13 = (uint)*(ushort *)(param_1 + 0x80) +
             ((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34)) + 0x40;
    uVar8 = (uint)(*(short *)(param_1 + 0x82) + 0x80 < (int)(uVar13 & 0xffff));
    if (uVar8 != 0) {
      return uVar8;
    }
  }
  uVar9 = *(ushort *)(param_3 + 0xc) >> 4 & 0xff;
  if ((bVar14 & 1) == 0) {
    iVar5 = iVar3 * 0x10000;
LAB_80106fbc:
    if (iVar5 < 0) {
      uVar9 = uVar9 + 0x80 & 0xff;
    }
  }
  else {
    iVar5 = iVar5 * 0x10000;
    if (iVar6 << 0x10 < 1) goto LAB_80106fbc;
    if (0 < iVar5) {
      iVar3 = func_0x80049250(uVar13,uVar9 + 0x80 & 0xff,(int)uVar4 >> 0x10);
      if (iVar3 != 0) {
        pbVar15[6] = pbVar15[6] + 1;
      }
      func_0x8007778c(pbVar15);
      uVar4 = 0;
      if (pbVar15[1] != 0) {
        uVar4 = func_0x80077b5c(pbVar15);
      }
      return uVar4;
    }
  }
  uVar10 = 0x40;
  if ((*(byte *)(param_1 + 0x46) & 8) == 0) {
    uVar10 = (ushort)*(byte *)((*(byte *)(param_1 + 0x46) & 7) + 0x80146f04);
  }
  iVar3 = 0xa00;
  if (*(char *)(param_1 + 0x5e) != '\0') {
    iVar3 = 0xe00;
  }
  if (0x7f < (uVar10 - uVar9 & 0xff)) {
    *(short *)(param_2 + 0x44) = (short)-iVar3;
    func_0x8001e860(param_1,param_2,param_3,0);
    DAT_1f800182 = 0;
    return 0x1f800000;
  }
  *(short *)(param_2 + 0x44) = (short)iVar3;
  uVar4 = (uint)pbVar15[5];
  iVar5 = *(int *)(pbVar15 + 0x10);
  if (uVar4 == -iVar3) {
    if (-1 < *(short *)(pbVar15 + 0x4a)) {
      *pbVar15 = pbVar15[5];
      pbVar15[5] = pbVar15[5] + 1;
    }
    iVar3 = (int)*(short *)(pbVar15 + 0x44);
    *(int *)(pbVar15 + 0x2c) = *(int *)(pbVar15 + 0x2c) + iVar3 * *(short *)(pbVar15 + 0x48);
    *(int *)(pbVar15 + 0x30) = *(int *)(pbVar15 + 0x30) + iVar3 * *(short *)(pbVar15 + 0x4a);
    *(int *)(pbVar15 + 0x34) = *(int *)(pbVar15 + 0x34) + iVar3 * *(short *)(pbVar15 + 0x4c);
    func_0x8004766c(pbVar15);
    iVar3 = func_0x80049250(pbVar15,0,0x32);
    if (iVar3 != 1) {
      sVar2 = *(short *)(pbVar15 + 0x4a);
      *(short *)(pbVar15 + 0x4a) = sVar2 + 0x30;
      if (0x1000 < (short)(sVar2 + 0x30)) {
        pbVar15[0x4a] = 0;
        pbVar15[0x4b] = 0x10;
      }
      goto LAB_80110198;
    }
    pbVar15[0x4a] = 0;
    pbVar15[0x4b] = 0xff;
    uVar13 = pbVar15[5] + 1;
    uVar4 = (int)((uint)*(ushort *)(pbVar15 + 0x44) << 0x10) >> 0x11;
    pbVar15[5] = (byte)uVar13;
    *(short *)(pbVar15 + 0x44) = (short)*(ushort *)(pbVar15 + 0x44) >> 1;
  }
  else {
    uVar13 = (uint)(uVar4 < 4);
    if (1 < uVar4) {
      if (uVar13 != 0) {
        uVar4 = FUN_801220ec();
        return uVar4;
      }
LAB_80110198:
      iVar3 = func_0x8007778c(pbVar15);
      uVar4 = 0;
      if (iVar3 != 0) {
        uVar4 = func_0x80077b5c(pbVar15);
      }
      return uVar4;
    }
    if (uVar4 == 0) {
      *(undefined2 *)(pbVar15 + 0x2e) = *(undefined2 *)(iVar5 + 0x2e);
      *(short *)(pbVar15 + 0x32) = *(short *)(iVar5 + 0x32) + -0xa0;
      *(undefined2 *)(pbVar15 + 0x36) = *(undefined2 *)(iVar5 + 0x36);
      if (0 < *(short *)(pbVar15 + 0x78)) {
        iVar3 = func_0x80083f50((int)*(short *)(iVar5 + 0x56));
        *(short *)(pbVar15 + 0x48) = (short)(iVar3 >> 4);
        func_0x80083e80((int)*(short *)(iVar5 + 0x56));
        uVar4 = FUN_80119014();
        return uVar4;
      }
      iVar3 = func_0x80083f50((int)*(short *)(iVar5 + 0x56));
      *(short *)(pbVar15 + 0x48) = (short)(-iVar3 >> 4);
      iVar3 = func_0x80083e80((int)*(short *)(iVar5 + 0x56));
      *(short *)(pbVar15 + 0x4c) = (short)(iVar3 >> 4);
      pbVar15[0x4a] = 0;
      pbVar15[0x4b] = 0xfe;
      pbVar15[0x44] = 0;
      pbVar15[0x45] = 0x10;
      pbVar15[0x29] = 0;
      func_0x8004766c(pbVar15);
      uVar13 = pbVar15[5] + 1;
      pbVar15[5] = (byte)uVar13;
      uVar4 = extraout_v1;
    }
  }
  if (uVar4 == uVar13) {
    func_0x80042310();
    uVar4 = FUN_801220ec();
    return uVar4;
  }
  return 0;
}

