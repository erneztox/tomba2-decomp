/**
 * @brief Audio sequence main: manages full SEQ playback loop
 * @note Original: func_80090210 at 0x80090210
 */
// Audio_SeqMain



/* WARNING: Removing unreachable block (ram,0x800903b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80090210(ushort param_1,undefined1 param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  short sVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  int iVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  
  iVar10 = 0;
  puVar14 = *(undefined4 **)(&DAT_80104c30 + ((int)((uint)param_1 << 0x10) >> 0xe));
  *(undefined1 *)((int)puVar14 + 0x26) = param_2;
  *(undefined2 *)(puVar14 + 0x14) = 0;
  *(undefined1 *)(puVar14 + 6) = 0;
  *(undefined1 *)((int)puVar14 + 0x19) = 0;
  *(undefined1 *)((int)puVar14 + 0x1e) = 0;
  *(undefined1 *)((int)puVar14 + 0x1a) = 0;
  *(undefined1 *)((int)puVar14 + 0x1b) = 0;
  *(undefined1 *)((int)puVar14 + 0x1f) = 0;
  *(undefined1 *)((int)puVar14 + 0x17) = 0;
  puVar14[0x21] = 0;
  puVar14[0x22] = 0;
  puVar14[0x23] = 0;
  *(undefined2 *)((int)puVar14 + 0x56) = 0;
  *(undefined1 *)((int)puVar14 + 0x21) = 0;
  *(undefined1 *)(puVar14 + 8) = 1;
  *(undefined1 *)(puVar14 + 5) = 0;
  puVar14[0x24] = 0;
  *(undefined1 *)(puVar14 + 7) = 0;
  *(undefined1 *)((int)puVar14 + 0x1d) = 0;
  *(undefined1 *)((int)puVar14 + 0x15) = 0;
  *(undefined1 *)((int)puVar14 + 0x16) = 0;
  *(undefined2 *)(puVar14 + 0x20) = 0;
  *(undefined1 *)(puVar14 + 9) = 0;
  *(undefined1 *)((int)puVar14 + 0x25) = 0;
  puVar12 = puVar14;
  do {
    *(char *)((int)puVar14 + iVar10 + 0x37) = (char)iVar10;
    *(undefined1 *)((int)puVar14 + iVar10 + 0x27) = 0x40;
    *(undefined2 *)(puVar12 + 0x18) = 0x7f;
    iVar10 = iVar10 + 1;
    puVar12 = (undefined4 *)((int)puVar12 + 2);
  } while (iVar10 < 0x10);
  *(undefined2 *)((int)puVar14 + 0x52) = 1;
  *puVar14 = param_3;
  if ((*param_3 != 'S') && (*param_3 != 'p')) {
    FUN_8009a730(s_This_is_an_old_SEQ_Data_Format__8001c628);
    return 0;
  }
  *puVar14 = param_3 + 7;
  cVar1 = param_3[7];
  *puVar14 = param_3 + 8;
  if (cVar1 != '\x01') {
    FUN_8009a730(s_This_is_not_SEQ_Data__8001c610);
    return 0xffffffff;
  }
  cVar1 = param_3[8];
  *puVar14 = param_3 + 9;
  cVar2 = param_3[9];
  *puVar14 = param_3 + 10;
  pbVar11 = (byte *)*puVar14;
  *(ushort *)(puVar14 + 0x14) = CONCAT11(cVar1,cVar2);
  bVar3 = *pbVar11;
  *puVar14 = pbVar11 + 1;
  bVar4 = pbVar11[1];
  *puVar14 = pbVar11 + 2;
  uVar7 = (uint)pbVar11[2] | (uint)bVar3 << 0x10 | (uint)bVar4 << 8;
  if (uVar7 == 0) {
    trap(0x1c00);
  }
  *puVar14 = pbVar11 + 3;
  puVar14[0x23] = uVar7;
  if (uVar7 >> 1 < 60000000U % uVar7) {
    puVar14[0x23] = 60000000 / uVar7 + 1;
  }
  else {
    puVar14[0x23] = 60000000 / uVar7;
  }
  puVar8 = (undefined1 *)*puVar14;
  puVar14[0x25] = puVar14[0x23];
  uVar5 = *puVar8;
  *puVar14 = puVar8 + 1;
  *(undefined1 *)(puVar14 + 9) = uVar5;
  uVar5 = puVar8[1];
  *puVar14 = puVar8 + 2;
  *(undefined1 *)((int)puVar14 + 0x25) = uVar5;
  uVar9 = FUN_80090160((int)(short)param_1,0);
  uVar7 = (int)*(short *)(puVar14 + 0x14) * puVar14[0x23];
  puVar14[2] = *puVar14;
  iVar10 = _DAT_80104c2c;
  puVar14[0x21] = uVar9;
  puVar14[0x24] = uVar9;
  puVar14[4] = 0;
  puVar14[3] = *puVar14;
  puVar14[1] = *puVar14;
  uVar13 = iVar10 * 0x3c;
  if (uVar7 * 10 < uVar13) {
    if (uVar7 == 0) {
      trap(0x1c00);
    }
    sVar6 = (short)((uint)(iVar10 * 600) / uVar7);
    *(short *)((int)puVar14 + 0x52) = sVar6;
  }
  else {
    if (uVar13 == 0) {
      trap(0x1c00);
    }
    if (uVar13 == 0) {
      trap(0x1c00);
    }
    *(undefined2 *)((int)puVar14 + 0x52) = 0xffff;
    sVar6 = (short)((uint)((int)*(short *)(puVar14 + 0x14) * puVar14[0x23] * 10) / uVar13);
    *(short *)(puVar14 + 0x15) = sVar6;
    if ((uint)((int)*(short *)(puVar14 + 0x14) * puVar14[0x23] * 10) % uVar13 <=
        (uint)(iVar10 * 0x1e)) goto LAB_80090538;
    sVar6 = sVar6 + 1;
  }
  *(short *)(puVar14 + 0x15) = sVar6;
LAB_80090538:
  *(undefined2 *)((int)puVar14 + 0x56) = *(undefined2 *)(puVar14 + 0x15);
  return 0;
}
