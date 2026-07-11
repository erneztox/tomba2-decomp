// FUN_08048af8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08048af8(int param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  byte bVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  ushort uVar10;
  int iVar11;
  ushort uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  
  puVar7 = _DAT_800bf544;
  uVar2 = *(ushort *)(param_1 + 0x2a);
  iVar14 = (uint)*(byte *)(param_1 + 0x10) * 2;
  iVar18 = ((int)((uVar2 - 0x88) * 0x10000) >> 0x14) * iVar14;
  iVar17 = uVar2 - 0x78;
  bVar1 = *(byte *)(param_1 + 0x11);
  uVar3 = *(ushort *)(param_1 + 0x28);
  iVar11 = uVar3 - 0xa0;
  iVar8 = iVar11 * 0x10000 >> 0x14;
  uVar10 = (ushort)iVar11;
  if (iVar8 < 0) {
    do {
      iVar8 = iVar8 + (uint)*(byte *)(param_1 + 0x10);
    } while (iVar8 * 0x10000 < 0);
  }
  if ((short)(ushort)*(byte *)(param_1 + 0x10) <= (short)iVar8) {
    iVar11 = iVar8 - (uint)*(byte *)(param_1 + 0x10);
    do {
      iVar8 = iVar11;
      iVar11 = iVar8 - (uint)*(byte *)(param_1 + 0x10);
    } while ((short)(ushort)*(byte *)(param_1 + 0x10) <= (short)iVar8);
  }
  iVar11 = iVar17;
  puVar15 = _DAT_800bf544;
  if (DAT_800bf871 != '\x13') {
    do {
      iVar13 = (int)(short)iVar18;
      iVar9 = iVar8 << 1;
      uVar12 = uVar10;
      do {
        puVar16 = puVar15;
        if ((iVar13 < 1) || ((int)(iVar14 * (uint)bVar1) <= iVar13)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar4 = *(ushort *)(*(int *)(param_1 + 0x14) + iVar13 + (short)iVar9);
        iVar9 = iVar9 + 2;
        if (iVar14 <= iVar9 * 0x10000 >> 0x10) {
          iVar9 = 0;
        }
        *(ushort *)(puVar16 + 2) = (0x98 - uVar3) + (uVar12 & 0xfff0);
        bVar6 = (byte)uVar4;
        *(byte *)((int)puVar16 + 0xd) = bVar6 & 0xf0;
        uVar12 = uVar12 + 0x10;
        *(ushort *)((int)puVar16 + 10) = (0x70 - uVar2) + ((ushort)iVar11 & 0xfff0);
        *(byte *)(puVar16 + 3) = bVar6 << 4;
        sVar5 = *(short *)(param_1 + 6);
        *(undefined1 *)((int)puVar16 + 3) = 3;
        puVar16[1] = 0x7d808080;
        puVar15 = puVar16 + 4;
        *(undefined1 *)((int)puVar16 + 7) = 0x7c;
        *puVar16 = (uint)puVar15 | 0x3000000;
        *(short *)((int)puVar16 + 0xe) = sVar5 + (short)((uVar4 & 0xf00) >> 2);
      } while ((int)(short)uVar12 < (short)uVar10 + 0x160);
      iVar11 = iVar11 + 0x10;
      iVar18 = iVar18 + iVar14;
    } while (iVar11 * 0x10000 >> 0x10 < (iVar17 * 0x10000 >> 0x10) + 0x100);
    *puVar16 = *(uint *)(_DAT_800ed8c8 + 0x1ffc) | 0x3000000;
    func_0x00083de0(puVar15,0,0,*(undefined2 *)(param_1 + 4),0);
    iVar18 = _DAT_800ed8c8;
    *puVar15 = (uint)puVar7 | 0x2000000;
    *(uint **)(iVar18 + 0x1ffc) = puVar15;
    _DAT_800bf544 = puVar16 + 7;
  }
  return;
}

