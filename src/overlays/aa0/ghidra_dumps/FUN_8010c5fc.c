// FUN_8010c5fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010c5fc(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint *puVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  
  puVar5 = _DAT_800bf544;
  iVar14 = (uint)*(byte *)(param_1 + 0x10) * 2;
  iVar4 = iVar14 * (uint)*(byte *)(param_1 + 0x11);
  uVar1 = *(ushort *)(param_1 + 0x28);
  uVar2 = *(ushort *)(param_1 + 0x2a);
  uVar17 = uVar1 - 0xa0;
  uVar12 = uVar2 - 0x78;
  iVar7 = (int)(uVar12 * 0x10000) >> 0x14;
  if (iVar7 < 0) {
    do {
      iVar7 = iVar7 + (uint)*(byte *)(param_1 + 0x11);
    } while (iVar7 * 0x10000 < 0);
  }
  sVar6 = (short)iVar7;
  if ((short)(ushort)*(byte *)(param_1 + 0x11) <= sVar6) {
    iVar7 = iVar7 - (uint)*(byte *)(param_1 + 0x11);
    do {
      sVar6 = (short)iVar7;
      iVar7 = iVar7 - (uint)*(byte *)(param_1 + 0x11);
    } while ((short)(ushort)*(byte *)(param_1 + 0x11) <= sVar6);
  }
  iVar7 = sVar6 * iVar14;
  iVar8 = (int)(uVar17 * 0x10000) >> 0x14;
  if (iVar8 < 0) {
    do {
      iVar8 = iVar8 + (uint)*(byte *)(param_1 + 0x10);
    } while (iVar8 * 0x10000 < 0);
  }
  if ((short)(ushort)*(byte *)(param_1 + 0x10) <= (short)iVar8) {
    iVar9 = iVar8 - (uint)*(byte *)(param_1 + 0x10);
    do {
      iVar8 = iVar9;
      iVar9 = iVar8 - (uint)*(byte *)(param_1 + 0x10);
    } while ((short)(ushort)*(byte *)(param_1 + 0x10) <= (short)iVar8);
  }
  puVar15 = _DAT_800bf544;
  uVar11 = uVar12;
  do {
    puVar13 = puVar15 + -4;
    iVar9 = iVar8 << 1;
    uVar10 = uVar17;
    do {
      puVar16 = puVar15;
      sVar6 = (short)iVar9;
      iVar9 = iVar9 + 2;
      uVar3 = *(ushort *)(*(int *)(param_1 + 0x14) + (int)(short)iVar7 + (int)sVar6);
      if (iVar14 <= iVar9 * 0x10000 >> 0x10) {
        iVar9 = 0;
      }
      puVar15 = puVar16 + 4;
      puVar13[6] = (uVar10 & 0xfff0) + ((int)((0x98 - (uint)uVar1) * 0x10000) >> 0x10) & 0xffff |
                   ((uVar11 & 0xfff0) + ((int)((0x70 - (uint)uVar2) * 0x10000) >> 0x10)) * 0x10000;
      *(ushort *)(puVar13 + 7) = (ushort)((uVar3 & 0xf) << 4) | ((uVar3 & 0xf0) + 8) * 0x100;
      uVar10 = uVar10 + 0x10;
      sVar6 = *(short *)(param_1 + 6);
      *(undefined1 *)((int)puVar13 + 0x13) = 3;
      puVar13[5] = 0x7d808080;
      *(undefined1 *)((int)puVar13 + 0x17) = 0x7c;
      *(short *)((int)puVar13 + 0x1e) = sVar6 + (short)((uVar3 & 0xf00) >> 2);
      puVar13 = puVar13 + 4;
      *puVar13 = (uint)puVar15 | 0x3000000;
    } while ((int)(uVar10 * 0x10000) >> 0x10 < (short)uVar17 + 0x160);
    iVar7 = iVar7 + iVar14;
    if (iVar4 <= iVar7 * 0x10000 >> 0x10) {
      iVar7 = iVar7 - iVar4;
    }
    uVar11 = uVar11 + 0x10;
  } while ((int)(uVar11 * 0x10000) >> 0x10 < (short)uVar12 + 0x100);
  *puVar16 = *puVar16 & 0xff000000 | *(uint *)(_DAT_800ed8c8 + 0x1ffc);
  func_0x80083de0(puVar15,0,0,*(undefined2 *)(param_1 + 4),0);
  *puVar15 = (uint)puVar5 | 0x2000000;
  *(uint **)(_DAT_800ed8c8 + 0x1ffc) = puVar15;
  _DAT_800bf544 = puVar16 + 7;
  return;
}

