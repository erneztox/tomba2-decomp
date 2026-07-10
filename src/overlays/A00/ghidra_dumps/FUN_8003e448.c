// FUN_8003e448

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003e448(ushort *param_1,undefined4 param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  short local_48;
  short local_44;
  short local_40;
  short local_3c;
  short local_38;
  short local_34;
  short local_30;
  short local_2c;
  
  puVar11 = _DAT_800bf544;
  iVar18 = (uint)(DAT_1f800135 == '\0') * 0x100;
  FUN_80083ca0(_DAT_800bf544);
  FUN_80083c70(puVar11,1);
  local_44 = _DAT_1f80008e;
  local_48 = _DAT_1f80008c;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  iVar16 = (int)_DAT_1f80008c;
  uVar3 = *param_1;
  uVar4 = param_1[2];
  uVar5 = param_1[1];
  uVar6 = param_1[3];
  uVar7 = *param_1;
  uVar8 = param_1[2];
  uVar9 = param_1[1];
  uVar10 = param_1[3];
  iVar17 = (int)_DAT_1f80008e;
  iVar13 = FUN_80083f50(param_2);
  iVar14 = FUN_80083e80(param_2);
  local_3c = _DAT_1f80008e;
  local_40 = _DAT_1f80008c;
  iVar15 = ((short)uVar1 - iVar16) + ((short)uVar1 - iVar16 >> 7);
  iVar16 = ((short)uVar2 - iVar17) + ((short)uVar2 - iVar17 >> 7);
  local_48 = (short)(iVar15 * iVar13 + iVar16 * iVar14 >> 0xc) + local_48;
  iVar17 = (int)_DAT_1f80008c;
  local_44 = (short)(iVar16 * iVar13 - iVar15 * iVar14 >> 0xc) + local_44;
  iVar16 = (int)_DAT_1f80008e;
  iVar13 = FUN_80083f50(param_2);
  iVar14 = FUN_80083e80(param_2);
  local_34 = _DAT_1f80008e;
  local_38 = _DAT_1f80008c;
  iVar17 = ((int)(short)uVar3 + (int)(short)uVar4) - iVar17;
  iVar17 = iVar17 + (iVar17 >> 7);
  iVar16 = (short)uVar5 - iVar16;
  iVar16 = iVar16 + (iVar16 >> 7);
  local_40 = (short)(iVar17 * iVar13 + iVar16 * iVar14 >> 0xc) + local_40;
  iVar15 = (int)_DAT_1f80008c;
  local_3c = (short)(iVar16 * iVar13 - iVar17 * iVar14 >> 0xc) + local_3c;
  iVar16 = (int)_DAT_1f80008e;
  iVar13 = FUN_80083f50(param_2);
  iVar14 = FUN_80083e80(param_2);
  local_2c = _DAT_1f80008e;
  local_30 = _DAT_1f80008c;
  iVar15 = (short)uVar3 - iVar15;
  iVar15 = iVar15 + (iVar15 >> 7);
  iVar16 = ((int)(short)uVar5 + (int)(short)uVar6) - iVar16;
  iVar16 = iVar16 + (iVar16 >> 7);
  local_38 = (short)(iVar15 * iVar13 + iVar16 * iVar14 >> 0xc) + local_38;
  iVar17 = (int)_DAT_1f80008c;
  local_34 = (short)(iVar16 * iVar13 - iVar15 * iVar14 >> 0xc) + local_34;
  iVar16 = (int)_DAT_1f80008e;
  iVar13 = FUN_80083f50(param_2);
  iVar14 = FUN_80083e80(param_2);
  iVar17 = ((int)(short)uVar7 + (int)(short)uVar8) - iVar17;
  iVar17 = iVar17 + (iVar17 >> 7);
  iVar16 = ((int)(short)uVar9 + (int)(short)uVar10) - iVar16;
  iVar16 = iVar16 + (iVar16 >> 7);
  local_30 = (short)(iVar17 * iVar13 + iVar16 * iVar14 >> 0xc) + local_30;
  local_2c = (short)(iVar16 * iVar13 - iVar17 * iVar14 >> 0xc) + local_2c;
  *(short *)(puVar11 + 2) = local_48;
  *(undefined1 *)(puVar11 + 9) = 0x3f;
  *(undefined1 *)(puVar11 + 5) = 0x3f;
  *(short *)((int)puVar11 + 0x12) = local_3c;
  *(short *)(puVar11 + 6) = local_38;
  *(short *)((int)puVar11 + 0x1a) = local_34;
  *(undefined1 *)(puVar11 + 7) = 0;
  *(undefined1 *)(puVar11 + 3) = 0;
  *(undefined1 *)((int)puVar11 + 0x15) = 0;
  *(undefined1 *)((int)puVar11 + 0xd) = 0;
  *(undefined1 *)((int)puVar11 + 0x25) = 0xff;
  *(undefined1 *)((int)puVar11 + 0x1d) = 0xff;
  *(short *)(puVar11 + 8) = local_30;
  *(short *)((int)puVar11 + 10) = local_44;
  *(short *)(puVar11 + 4) = local_40;
  *(short *)((int)puVar11 + 0x22) = local_2c;
  uVar2 = param_1[1];
  uVar1 = param_1[1];
  uVar3 = *param_1;
  *(undefined1 *)(puVar11 + 1) = 0x80;
  *(ushort *)((int)puVar11 + 0x16) =
       (ushort)((int)(iVar18 + (short)uVar1 & 0x100U) >> 4) | (ushort)((uVar3 & 0x3ff) >> 6) | 0x100
       | (ushort)(((uint)uVar2 + iVar18 & 0x200) << 2);
  *(undefined1 *)((int)puVar11 + 5) = 0x80;
  *(undefined1 *)((int)puVar11 + 6) = 0x80;
  puVar12 = _DAT_800ed8c8;
  *(undefined2 *)((int)puVar11 + 0xe) = 0;
  *puVar11 = *puVar11 & 0xff000000 | *puVar12 & 0xffffff;
  _DAT_800bf544 = puVar11 + 10;
  *puVar12 = *puVar12 & 0xff000000 | (uint)puVar11 & 0xffffff;
  return;
}

