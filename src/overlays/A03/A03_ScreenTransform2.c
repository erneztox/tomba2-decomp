// A03_ScreenTransform2 - Screen-space coordinate transform variant

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A03_ScreenTransform2(s32 param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  short sVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  int iVar22;
  uint local_80 [16];
  int local_40;
  int local_3c;
  short *local_38;
  uint *local_34;
  uint *local_30;
  uint local_2c;
  
  puVar20 = g_OrderingTable;
  uVar21 = 0;
  puVar10 = local_80;
  puVar8 = (uint *)&DAT_80108fdc;
  do {
    uVar12 = puVar8->flags;
    uVar13 = puVar8->kind;
    uVar14 = puVar8->sub_type;
    *puVar10 = *puVar8;
    puVar10->flags = uVar12;
    puVar10->kind = uVar13;
    puVar10->sub_type = uVar14;
    puVar8 = puVar8 + 4;
    puVar10 = puVar10 + 4;
  } while (puVar8 != (uint *)0x8010901c);
  if (DAT_1f800135 != '\0') {
    if (g_OrderingTable < (uint *)0xe6c50) {
      local_40 = 0;
      sVar1 = *param_2;
      sVar2 = param_2->flags;
      *(short *)(g_OrderingTable + 0xf) = sVar1;
      *(short *)(puVar20 + 6) = sVar1;
      *(short *)((int)puVar20 + 0x3e) = sVar2;
      *(short *)((int)puVar20 + 0x1a) = sVar2;
      if ((sVar1 == 0) && (sVar2 == 0)) {
        uVar21 = 1;
      }
      local_2c = 0x8000000;
      local_30 = local_80;
      local_38 = param_2 + 2;
      puVar8 = puVar20 + 0x1b;
      local_34 = puVar20 + 9;
      local_3c = 1;
      iVar15 = (int)sVar1;
      iVar17 = (int)sVar2;
      iVar22 = 0;
      do {
        local_30 = local_30 + 1;
        sVar1 = *local_38;
        iVar18 = (int)sVar1;
        sVar2 = local_38->flags;
        iVar19 = (int)sVar2;
        uVar21 = (uVar21 & 1) << 1;
        if ((iVar18 == 0) && (iVar19 == 0)) {
          uVar21 = uVar21 | 1;
        }
        iVar11 = iVar19 - iVar17;
        if ((iVar18 == iVar15) && (iVar19 == iVar17)) {
          uVar21 = uVar21 | 1;
          iVar11 = iVar19 - iVar17;
        }
        iVar11 = Math_Atan2(iVar11,iVar18 - iVar15);
        iVar9 = Math_CosGTE(iVar11 + 0x400);
        iVar9 = iVar9 * 2 + 0x800 >> 0xc;
        iVar11 = Math_Cos(iVar11 + 0x400);
        iVar11 = iVar11 * 2 + 0x800 >> 0xc;
        sVar5 = (short)iVar22;
        sVar7 = (short)iVar9;
        sVar6 = (short)iVar11;
        sVar4 = (short)local_40;
        if (uVar21 == 0) {
          puVar8[-0xf] = 0;
          puVar8[-0x11] = 0;
          puVar8[-0x18] = 0;
          puVar8[-0x1a] = 0;
          uVar12 = local_30[-1];
          puVar8[-0xd] = uVar12;
          puVar8[-0x16] = uVar12;
          uVar12 = *local_30;
          puVar8->sub_type = 0;
          puVar8->flags = 0;
          puVar8[-6] = 0;
          puVar8[-8] = 0;
          puVar8[-0xb] = uVar12;
          puVar8[-0x14] = uVar12;
          uVar12 = local_30[-1] >> 1 & 0xff7f7f7f;
          puVar8->behavior_state = uVar12;
          puVar8[-4] = uVar12;
          uVar12 = *local_30 >> 1 & 0xff7f7f7f;
          puVar8->sub_action = uVar12;
          puVar8[-2] = uVar12;
          sVar3 = (short)iVar15;
          sVar16 = (short)iVar17;
          if (local_3c == 1) {
            *(short *)(puVar8 + -0x19) = sVar3 - sVar7;
            *(short *)((int)puVar8 + -0x62) = sVar16 - sVar6;
            *(short *)(puVar8 + -0x10) = sVar3 + sVar7;
            *(short *)((int)puVar8 + -0x3e) = sVar16 + sVar6;
            *(short *)(puVar8 + -7) = sVar3 + sVar7 * -4;
            *(short *)((int)puVar8 + -0x1a) = sVar16 + sVar6 * -4;
            *(short *)(puVar8 + 2) = sVar3 + sVar7 * 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(short *)(puVar8 + -0x19) = sVar3 - sVar5;
          *(short *)((int)puVar8 + -0x62) = sVar16 - sVar4;
          *(short *)(puVar8 + -0x10) = sVar3 + sVar5;
          *(short *)((int)puVar8 + -0x3e) = sVar16 + sVar4;
          *(short *)(puVar8 + -7) = sVar3 + sVar5 * -4;
          *(short *)((int)puVar8 + -0x1a) = sVar16 + sVar4 * -4;
          *(short *)(puVar8 + 2) = sVar3 + sVar5 * 4;
          *(short *)((int)puVar8 + 10) = sVar16 + sVar4 * 4;
          *(short *)(puVar8 + -0x17) = sVar1 - sVar7;
          *(short *)((int)puVar8 + -0x5a) = sVar2 - sVar6;
          *(short *)(puVar8 + -0xe) = sVar1 + sVar7;
          *(short *)((int)puVar8 + -0x36) = sVar2 + sVar6;
          *(short *)(puVar8 + -5) = sVar1 + sVar7 * -4;
          *(short *)((int)puVar8 + -0x12) = sVar2 + sVar6 * -4;
          *(short *)(puVar8 + 4) = sVar1 + sVar7 * 4;
          *(short *)((int)puVar8 + 0x12) = sVar2 + sVar6 * 4;
          *(short *)(puVar8 + -0xc) = sVar3;
          *(short *)(puVar8 + -0x15) = sVar3;
          *(short *)((int)puVar8 + -0x2e) = sVar16;
          *(short *)((int)puVar8 + -0x52) = sVar16;
          *(short *)(puVar8 + -10) = sVar1;
          *(short *)(puVar8 + -0x13) = sVar1;
          *(short *)((int)puVar8 + -0x26) = sVar2;
          *(short *)((int)puVar8 + -0x4a) = sVar2;
          *(short *)(puVar8 + 6) = sVar3;
          *(short *)(puVar8 + -3) = sVar3;
          *(short *)((int)puVar8 + 0x1a) = sVar16;
          *(short *)((int)puVar8 + -10) = sVar16;
          *(short *)(puVar8 + 8) = sVar1;
          *(short *)(puVar8 + -1) = sVar1;
          *(short *)((int)puVar8 + 0x22) = sVar2;
          *(short *)((int)puVar8 + -2) = sVar2;
          *(u8 *)((int)puVar8 + -0x65) = 0x3a;
          *(u8 *)((int)puVar8 + -0x41) = 0x3a;
          *(u8 *)((int)puVar8 + -0x1d) = 0x3a;
          *(u8 *)((int)puVar8 + 7) = 0x3a;
          iVar15 = g_OrderingTableEnd;
          *puVar20 = g_OrderingTableEnd->parent | local_2c;
          iVar15->parent = puVar20;
          iVar15 = g_OrderingTableEnd;
          puVar8[-0x12] = g_OrderingTableEnd->parent | local_2c;
          iVar15->parent = local_34;
          puVar8[-9] = (uint)local_34 | local_2c;
          iVar15->parent = puVar20 + 0x12;
          *puVar8 = (uint)(puVar20 + 0x12) | local_2c;
          iVar15->parent = puVar8;
          puVar8 = puVar8 + 0x24;
          local_34 = local_34 + 0x24;
          puVar20 = puVar20 + 0x24;
        }
        local_38 = local_38 + 2;
        local_3c = local_3c + 1;
        iVar15 = iVar18;
        iVar17 = iVar19;
        iVar22 = iVar9;
        local_40 = iVar11;
      } while (local_3c < 0xb);
      GPU_SetupDrawMode2(puVar20,0,1,0x35,0);
      iVar15 = g_OrderingTableEnd;
      *puVar20 = g_OrderingTableEnd->parent | 0x2000000;
      iVar15->parent = puVar20;
      g_OrderingTable = puVar20 + 3;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

