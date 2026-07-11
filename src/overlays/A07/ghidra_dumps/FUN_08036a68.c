// FUN_08036a68

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08036a68(undefined4 param_1,short param_2)

{
  ushort uVar1;
  byte bVar2;
  uint *puVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  short in_t1;
  int in_t5;
  uint *puVar13;
  int unaff_s2;
  short unaff_s3;
  int unaff_s4;
  int in_t8;
  undefined4 uStack00000010;
  
  puVar3 = _DAT_800bf544;
  iVar11 = in_t1 * in_t8;
  iVar7 = unaff_s2 + 0x10;
  uVar5 = param_2 + 0x10;
  iVar8 = iVar7 * 0x10000 >> 0x14;
  if (iVar8 < 0) {
    do {
      iVar8 = iVar8 + (uint)*(byte *)(in_t5 + 0x10);
    } while (iVar8 * 0x10000 < 0);
  }
  if ((short)(ushort)*(byte *)(in_t5 + 0x10) <= (short)iVar8) {
    iVar6 = iVar8 - (uint)*(byte *)(in_t5 + 0x10);
    do {
      iVar8 = iVar6;
      iVar6 = iVar8 - (uint)*(byte *)(in_t5 + 0x10);
    } while ((short)(ushort)*(byte *)(in_t5 + 0x10) <= (short)iVar8);
  }
  iVar6 = (int)(short)uVar5;
  iVar9 = iVar6 + 0x100;
  puVar12 = _DAT_800bf544;
  while (iVar6 < iVar9) {
    iVar6 = iVar8 << 1;
    iVar10 = iVar7;
    puVar13 = puVar12;
    do {
      sVar4 = (short)iVar6;
      iVar6 = iVar6 + 2;
      uVar1 = *(ushort *)(*(int *)(in_t5 + 0x14) + (int)(short)iVar11 + (int)sVar4);
      if (in_t8 <= iVar6 * 0x10000 >> 0x10) {
        iVar6 = 0;
      }
      *(ushort *)(puVar13 + 2) = ((ushort)iVar10 & 0xfff0) + 0x6a68;
      bVar2 = (byte)uVar1;
      *(byte *)((int)puVar13 + 0xd) = bVar2 & 0xf0;
      iVar10 = iVar10 + 0x10;
      *(ushort *)((int)puVar13 + 10) = unaff_s3 + (uVar5 & 0xfff0);
      *(byte *)(puVar13 + 3) = bVar2 << 4;
      sVar4 = *(short *)(in_t5 + 6);
      *(undefined1 *)((int)puVar13 + 3) = 3;
      puVar13[1] = 0x7d808080;
      puVar12 = puVar13 + 4;
      *(undefined1 *)((int)puVar13 + 7) = 0x7c;
      *puVar13 = (uint)puVar12 | 0x3000000;
      *(short *)((int)puVar13 + 0xe) = sVar4 + (short)((uVar1 & 0xf00) >> 2);
      puVar13 = puVar12;
    } while (iVar10 * 0x10000 >> 0x10 < (short)iVar7 + 0x160);
    iVar11 = iVar11 + in_t8;
    if (unaff_s4 <= iVar11 * 0x10000 >> 0x10) {
      iVar11 = iVar11 - unaff_s4;
    }
    uVar5 = uVar5 + 0x10;
    iVar6 = (int)(short)uVar5;
  }
  puVar12[-4] = *(uint *)(_DAT_800ed8c8 + 0x1ffc) | 0x3000000;
  uStack00000010 = 0;
  func_0x00083de0(puVar12,0,0,*(undefined2 *)(in_t5 + 4));
  iVar11 = _DAT_800ed8c8;
  *puVar12 = (uint)puVar3 | 0x2000000;
  *(uint **)(iVar11 + 0x1ffc) = puVar12;
  _DAT_800bf544 = puVar12 + 3;
  return;
}

