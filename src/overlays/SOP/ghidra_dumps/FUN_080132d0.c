// FUN_080132d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080132d0(int param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint *puVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  uint *puVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  undefined2 *puVar17;
  int *piVar18;
  uint *puVar19;
  uint *puVar20;
  int iVar21;
  uint uVar22;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  
  puVar4 = _DAT_800bf544;
  iVar16 = (uint)*(byte *)(param_1 + 0x10) * 2;
  iVar21 = iVar16 * (uint)*(byte *)(param_1 + 0x11);
  uVar2 = *(ushort *)(param_1 + 0x28);
  uVar3 = *(ushort *)(param_1 + 0x2a);
  uVar22 = uVar2 - 0xa0;
  uVar11 = uVar3 - 0x78;
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
  iVar6 = sVar5 * iVar16;
  iVar7 = (int)(uVar22 * 0x10000) >> 0x14;
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
  uVar10 = uVar11;
  puVar19 = _DAT_800bf544;
  do {
    puVar13 = puVar19 + -4;
    iVar8 = iVar7 << 1;
    uVar9 = uVar22;
    do {
      puVar20 = puVar19;
      sVar5 = (short)iVar8;
      iVar8 = iVar8 + 2;
      uVar15 = (uint)*(ushort *)(*(int *)(param_1 + 0x14) + (int)(short)iVar6 + (int)sVar5);
      if (iVar16 <= iVar8 * 0x10000 >> 0x10) {
        iVar8 = 0;
      }
      puVar19 = puVar20 + 4;
      puVar13[6] = (uVar9 & 0xfff0) + ((int)((0x98 - (uint)uVar2) * 0x10000) >> 0x10) & 0xffff |
                   ((uVar10 & 0xfff0) + ((int)((0x70 - (uint)uVar3) * 0x10000) >> 0x10)) * 0x10000;
      *(ushort *)(puVar13 + 7) = (ushort)((uVar15 & 0xf) << 4) | (ushort)((uVar15 & 0xf0) << 8);
      uVar9 = uVar9 + 0x10;
      sVar5 = *(short *)(param_1 + 6);
      *(undefined1 *)((int)puVar13 + 0x13) = 3;
      puVar13[5] = 0x7d808080;
      *(undefined1 *)((int)puVar13 + 0x17) = 0x7c;
      *(short *)((int)puVar13 + 0x1e) = sVar5 + (short)((uVar15 & 0xf00) >> 2);
      puVar13 = puVar13 + 4;
      *puVar13 = (uint)puVar19 | 0x3000000;
    } while ((int)(uVar9 * 0x10000) >> 0x10 < (short)uVar22 + 0x160);
    iVar6 = iVar6 + iVar16;
    if (iVar21 <= iVar6 * 0x10000 >> 0x10) {
      iVar6 = iVar6 - iVar21;
    }
    uVar10 = uVar10 + 0x10;
  } while ((int)(uVar10 * 0x10000) >> 0x10 < (short)uVar11 + 0x100);
  iVar21 = 0;
  *puVar20 = *puVar20 & 0xff000000 | *(uint *)(_DAT_800ed8c8 + 0x1ffc);
  func_0x00083de0(puVar19,0,0,*(undefined2 *)(param_1 + 4),0);
  *puVar19 = (uint)puVar4 | 0x2000000;
  _DAT_800bf544 = puVar20 + 7;
  piVar18 = (int *)&DAT_8010d2fc;
  puVar17 = (undefined2 *)&DAT_8010d306;
  *(uint **)(_DAT_800ed8c8 + 0x1ffc) = puVar19;
  do {
    pbVar14 = (byte *)(iVar21 + -0x7fef2c70);
    bVar1 = *pbVar14;
    *pbVar14 = bVar1 - 1;
    if ((int)((uint)(byte)(bVar1 - 1) << 0x18) < 1) {
      pcVar12 = (char *)*piVar18;
      if (*pcVar12 == -1) {
        *piVar18 = (int)pcVar12 - (uint)(byte)pcVar12[1];
      }
      iVar6 = *(int *)(puVar17 + -3);
      bVar1 = *(byte *)*piVar18;
      *pbVar14 = ((byte *)*piVar18)[1];
      local_40 = puVar17[-1];
      local_3e = *puVar17;
      local_3c = 0x10;
      local_3a = 1;
      func_0x00081218(&local_40,iVar6 + (uint)bVar1 * 0x20);
      *piVar18 = *piVar18 + 2;
    }
    iVar21 = iVar21 + 1;
    puVar17 = puVar17 + 6;
    piVar18 = piVar18 + 3;
  } while (iVar21 < 3);
  return;
}

