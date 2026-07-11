// FUN_08017b64

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08017b64(undefined4 param_1,short *param_2)

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
  
  puVar20 = _DAT_800bf544;
  uVar21 = 0;
  puVar10 = local_80;
  puVar8 = (uint *)&DAT_80108fdc;
  do {
    uVar12 = puVar8[1];
    uVar13 = puVar8[2];
    uVar14 = puVar8[3];
    *puVar10 = *puVar8;
    puVar10[1] = uVar12;
    puVar10[2] = uVar13;
    puVar10[3] = uVar14;
    puVar8 = puVar8 + 4;
    puVar10 = puVar10 + 4;
  } while (puVar8 != (uint *)0x8010901c);
  if (DAT_1f800135 != '\0') {
    if (_DAT_800bf544 < (uint *)0xe6c50) {
      local_40 = 0;
      sVar1 = *param_2;
      sVar2 = param_2[1];
      *(short *)(_DAT_800bf544 + 0xf) = sVar1;
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
        sVar2 = local_38[1];
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
        iVar11 = func_0x00085690(iVar11,iVar18 - iVar15);
        iVar9 = func_0x00083f50(iVar11 + 0x400);
        iVar9 = iVar9 * 2 + 0x800 >> 0xc;
        iVar11 = func_0x00083e80(iVar11 + 0x400);
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
          puVar8[3] = 0;
          puVar8[1] = 0;
          puVar8[-6] = 0;
          puVar8[-8] = 0;
          puVar8[-0xb] = uVar12;
          puVar8[-0x14] = uVar12;
          uVar12 = local_30[-1] >> 1 & 0xff7f7f7f;
          puVar8[5] = uVar12;
          puVar8[-4] = uVar12;
          uVar12 = *local_30 >> 1 & 0xff7f7f7f;
          puVar8[7] = uVar12;
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
          *(undefined1 *)((int)puVar8 + -0x65) = 0x3a;
          *(undefined1 *)((int)puVar8 + -0x41) = 0x3a;
          *(undefined1 *)((int)puVar8 + -0x1d) = 0x3a;
          *(undefined1 *)((int)puVar8 + 7) = 0x3a;
          iVar15 = _DAT_800ed8c8;
          *puVar20 = *(uint *)(_DAT_800ed8c8 + 0x10) | local_2c;
          *(uint **)(iVar15 + 0x10) = puVar20;
          iVar15 = _DAT_800ed8c8;
          puVar8[-0x12] = *(uint *)(_DAT_800ed8c8 + 0x10) | local_2c;
          *(uint **)(iVar15 + 0x10) = local_34;
          puVar8[-9] = (uint)local_34 | local_2c;
          *(uint **)(iVar15 + 0x10) = puVar20 + 0x12;
          *puVar8 = (uint)(puVar20 + 0x12) | local_2c;
          *(uint **)(iVar15 + 0x10) = puVar8;
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
      func_0x00083de0(puVar20,0,1,0x35,0);
      iVar15 = _DAT_800ed8c8;
      *puVar20 = *(uint *)(_DAT_800ed8c8 + 0x10) | 0x2000000;
      *(uint **)(iVar15 + 0x10) = puVar20;
      _DAT_800bf544 = puVar20 + 3;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

