// FUN_0801b350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801b350(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint *puVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  
  puVar4 = _DAT_800bf544;
  iVar14 = (uint)*(byte *)(param_1 + 0x10) * 2;
  iVar3 = iVar14 * (uint)*(byte *)(param_1 + 0x11);
  uVar1 = *(ushort *)(param_1 + 0x28);
  uVar2 = *(ushort *)(param_1 + 0x2a);
  uVar17 = uVar1 - 0xa0;
  uVar11 = uVar2 - 0x78;
  iVar6 = (int)(uVar11 * 0x10000) >> 0x14;
  if (iVar6 < 0) {
    do {
      iVar6 = iVar6 + (uint)*(byte *)(param_1 + 0x11);
    } while (iVar6 * 0x10000 < 0);
  }
  sVar5 = (short)iVar6;
  if ((short)(ushort)*(byte *)(param_1 + 0x11) <= sVar5) {
    iVar6 = iVar6 - (uint)*(byte *)(param_1 + 0x11);
    do {
      sVar5 = (short)iVar6;
      iVar6 = iVar6 - (uint)*(byte *)(param_1 + 0x11);
    } while ((short)(ushort)*(byte *)(param_1 + 0x11) <= sVar5);
  }
  iVar6 = sVar5 * iVar14;
  iVar7 = (int)(uVar17 * 0x10000) >> 0x14;
  if (iVar7 < 0) {
    do {
      iVar7 = iVar7 + (uint)*(byte *)(param_1 + 0x10);
    } while (iVar7 * 0x10000 < 0);
  }
  if ((short)(ushort)*(byte *)(param_1 + 0x10) <= (short)iVar7) {
    iVar8 = iVar7 - (uint)*(byte *)(param_1 + 0x10);
    do {
      iVar7 = iVar8;
      iVar8 = iVar7 - (uint)*(byte *)(param_1 + 0x10);
    } while ((short)(ushort)*(byte *)(param_1 + 0x10) <= (short)iVar7);
  }
  puVar15 = _DAT_800bf544;
  uVar10 = uVar11;
  do {
    puVar12 = puVar15 + -4;
    iVar8 = iVar7 << 1;
    uVar9 = uVar17;
    do {
      puVar16 = puVar15;
      sVar5 = (short)iVar8;
      iVar8 = iVar8 + 2;
      uVar13 = (uint)*(ushort *)(*(int *)(param_1 + 0x14) + (int)(short)iVar6 + (int)sVar5);
      if (iVar14 <= iVar8 * 0x10000 >> 0x10) {
        iVar8 = 0;
      }
      puVar15 = puVar16 + 4;
      puVar12[6] = (uVar9 & 0xfff0) + ((int)((0x98 - (uint)uVar1) * 0x10000) >> 0x10) & 0xffff |
                   ((uVar10 & 0xfff0) + ((int)((0x70 - (uint)uVar2) * 0x10000) >> 0x10)) * 0x10000;
      *(ushort *)(puVar12 + 7) = (ushort)((uVar13 & 0xf) << 4) | (ushort)((uVar13 & 0xf0) << 8);
      uVar9 = uVar9 + 0x10;
      sVar5 = *(short *)(param_1 + 6);
      *(undefined1 *)((int)puVar12 + 0x13) = 3;
      puVar12[5] = 0x7d808080;
      *(undefined1 *)((int)puVar12 + 0x17) = 0x7c;
      *(short *)((int)puVar12 + 0x1e) = sVar5 + (short)((uVar13 & 0xf00) >> 2);
      puVar12 = puVar12 + 4;
      *puVar12 = (uint)puVar15 | 0x3000000;
    } while ((int)(uVar9 * 0x10000) >> 0x10 < (short)uVar17 + 0x160);
    iVar6 = iVar6 + iVar14;
    if (iVar3 <= iVar6 * 0x10000 >> 0x10) {
      iVar6 = iVar6 - iVar3;
    }
    uVar10 = uVar10 + 0x10;
  } while ((int)(uVar10 * 0x10000) >> 0x10 < (short)uVar11 + 0x100);
  *puVar16 = *puVar16 & 0xff000000 | *(uint *)(_DAT_800ed8c8 + 0x1ffc);
  func_0x00083de0(puVar15,0,0,*(undefined2 *)(param_1 + 4),0);
  *puVar15 = (uint)puVar4 | 0x2000000;
  *(uint **)(_DAT_800ed8c8 + 0x1ffc) = puVar15;
  _DAT_800bf544 = puVar16 + 7;
  return;
}

