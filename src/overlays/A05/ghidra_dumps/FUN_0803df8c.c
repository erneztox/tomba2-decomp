// FUN_0803df8c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803df8c(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  byte bVar5;
  uint *puVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  
  puVar6 = _DAT_800bf544;
  iVar17 = (uint)*(byte *)(param_1 + 0x10) * 2;
  iVar4 = iVar17 * (uint)*(byte *)(param_1 + 0x11);
  uVar1 = *(ushort *)(param_1 + 0x28);
  uVar2 = *(ushort *)(param_1 + 0x2a);
  if (2 < DAT_800bf871 - 1) {
    iVar8 = (int)((uVar2 - 0x88) * 0x10000) >> 0x14;
    if (iVar8 < 0) {
      do {
        iVar8 = iVar8 + (uint)*(byte *)(param_1 + 0x11);
      } while (iVar8 * 0x10000 < 0);
    }
    sVar7 = (short)iVar8;
    if ((short)(ushort)*(byte *)(param_1 + 0x11) <= sVar7) {
      iVar8 = iVar8 - (uint)*(byte *)(param_1 + 0x11);
      do {
        sVar7 = (short)iVar8;
        iVar8 = iVar8 - (uint)*(byte *)(param_1 + 0x11);
      } while ((short)(ushort)*(byte *)(param_1 + 0x11) <= sVar7);
    }
    iVar8 = sVar7 * iVar17;
    iVar10 = uVar1 - 0xa0;
    iVar15 = uVar2 - 0x78;
    iVar11 = iVar10 * 0x10000 >> 0x14;
    if (iVar11 < 0) {
      do {
        iVar11 = iVar11 + (uint)*(byte *)(param_1 + 0x10);
      } while (iVar11 * 0x10000 < 0);
    }
    if ((short)(ushort)*(byte *)(param_1 + 0x10) <= (short)iVar11) {
      iVar9 = iVar11 - (uint)*(byte *)(param_1 + 0x10);
      do {
        iVar11 = iVar9;
        iVar9 = iVar11 - (uint)*(byte *)(param_1 + 0x10);
      } while ((short)(ushort)*(byte *)(param_1 + 0x10) <= (short)iVar11);
    }
    iVar9 = (int)(short)iVar15;
    iVar12 = iVar9 + 0x100;
    puVar14 = _DAT_800bf544;
    while (iVar9 < iVar12) {
      iVar9 = iVar11 << 1;
      iVar13 = iVar10;
      puVar16 = puVar14;
      do {
        sVar7 = (short)iVar9;
        iVar9 = iVar9 + 2;
        uVar3 = *(ushort *)(*(int *)(param_1 + 0x14) + (int)(short)iVar8 + (int)sVar7);
        if (iVar17 <= iVar9 * 0x10000 >> 0x10) {
          iVar9 = 0;
        }
        *(ushort *)(puVar16 + 2) = (0x98 - uVar1) + ((ushort)iVar13 & 0xfff0);
        bVar5 = (byte)uVar3;
        *(byte *)((int)puVar16 + 0xd) = bVar5 & 0xf0;
        iVar13 = iVar13 + 0x10;
        *(ushort *)((int)puVar16 + 10) = (0x70 - uVar2) + ((ushort)iVar15 & 0xfff0);
        *(byte *)(puVar16 + 3) = bVar5 << 4;
        sVar7 = *(short *)(param_1 + 6);
        *(undefined1 *)((int)puVar16 + 3) = 3;
        puVar16[1] = 0x7d808080;
        puVar14 = puVar16 + 4;
        *(undefined1 *)((int)puVar16 + 7) = 0x7c;
        *puVar16 = (uint)puVar14 | 0x3000000;
        *(short *)((int)puVar16 + 0xe) = sVar7 + (short)((uVar3 & 0xf00) >> 2);
        puVar16 = puVar14;
      } while (iVar13 * 0x10000 >> 0x10 < (short)iVar10 + 0x160);
      iVar8 = iVar8 + iVar17;
      if (iVar4 <= iVar8 * 0x10000 >> 0x10) {
        iVar8 = iVar8 - iVar4;
      }
      iVar15 = iVar15 + 0x10;
      iVar9 = iVar15 * 0x10000 >> 0x10;
    }
    puVar14[-4] = *(uint *)(_DAT_800ed8c8 + 0x1ffc) | 0x3000000;
    func_0x00083de0(puVar14,0,0,*(undefined2 *)(param_1 + 4),0);
    iVar4 = _DAT_800ed8c8;
    *puVar14 = (uint)puVar6 | 0x2000000;
    *(uint **)(iVar4 + 0x1ffc) = puVar14;
    _DAT_800bf544 = puVar14 + 3;
  }
  return;
}

