// FUN_801282dc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801282dc(int param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 short param_6)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 in_zero;
  undefined4 extraout_at;
  uint in_v0;
  int iVar6;
  int iVar7;
  uint *puVar8;
  byte *pbVar9;
  uint uVar10;
  uint *in_t0;
  uint in_t1;
  int in_t2;
  int iVar11;
  ushort *puVar12;
  short *psVar13;
  short *psVar14;
  uint *puVar15;
  uint uVar16;
  int unaff_s7;
  uint uStack00000018;
  uint uStack0000001c;
  uint uStack00000020;
  
  in_t0[2] = 0;
  uStack00000018 = param_4 << 8 | in_t1 | 0x30730000;
  in_t0[1] = (param_2 >> 3) << 0xf | (in_v0 >> 3) << 10 | 0xe2000000 | (-param_1 & 0xf8U) << 2 |
             (int)(-(int)param_6 & 0xffU) >> 3;
  uStack0000001c = param_4 << 8 | in_t1 + 0x3f | 0xc0000;
  uVar10 = (param_4 + 0x3f) * 0x100;
  uStack00000020 = uVar10 | in_t1;
  *in_t0 = *(uint *)(unaff_s7 + 0x1ffc) | 0x2000000;
  *(uint **)(unaff_s7 + 0x1ffc) = in_t0;
  puVar15 = in_t0 + 3;
  uVar16 = 0;
  puVar12 = (ushort *)&DAT_80139014;
  psVar13 = (short *)&DAT_80139094;
  psVar14 = (short *)&DAT_801388f4;
  *(uint **)(in_t2 + -0xabc) = puVar15;
  do {
    uVar2 = *puVar12;
    iVar11 = (int)((uint)uVar2 << 0x10) >> 0x10;
    iVar6 = func_0x80083f50(iVar11);
    iVar11 = func_0x80083e80(iVar11);
    iVar7 = func_0x80083f50((int)((uint)uVar2 << 0x10) >> 0x12);
    *psVar13 = *psVar14 + (short)(iVar6 >> 4);
    sVar3 = psVar14[1];
    psVar13[1] = (short)(iVar7 >> 6) + -2000;
    psVar13[2] = sVar3 + (short)(iVar11 >> 4);
    if ((uVar16 & 1) != 0) {
      func_0x8009a450();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar6 = func_0x8009a450();
    *puVar12 = (*puVar12 - 0x10) - (short)(iVar6 >> 10);
    puVar12 = puVar12 + 1;
    psVar13 = psVar13 + 4;
    uVar16 = uVar16 + 1;
    psVar14 = psVar14 + 2;
  } while ((int)uVar16 < 0x3b);
  iVar6 = 0;
  pbVar9 = &DAT_801389e0;
  puVar8 = in_t0 + 4;
  do {
    setCopReg(2,in_zero,*(undefined4 *)(&DAT_80139094 + (uint)*pbVar9 * 8));
    setCopReg(2,extraout_at,*(undefined4 *)(&DAT_80139098 + (uint)*pbVar9 * 8));
    setCopReg(2,&DAT_80139094 + (uint)pbVar9[2] * 8,
              *(undefined4 *)(&DAT_80139094 + (uint)pbVar9[1] * 8));
    setCopReg(2,&DAT_80139094 + (uint)pbVar9[1] * 8,
              *(undefined4 *)(&DAT_80139098 + (uint)pbVar9[1] * 8));
    setCopReg(2,&DAT_80139094 + (uint)*pbVar9 * 8,
              *(undefined4 *)(&DAT_80139094 + (uint)pbVar9[2] * 8));
    setCopReg(2,puVar8,*(undefined4 *)(&DAT_80139098 + (uint)pbVar9[2] * 8));
    puVar8[2] = uStack00000018;
    copFunction(2,0x280030);
    puVar8[5] = uStack0000001c;
    uVar16 = getCopReg(2,0xc);
    puVar15[2] = uVar16;
    uVar16 = getCopReg(2,0xd);
    puVar15[5] = uVar16;
    uVar16 = getCopReg(2,0xe);
    puVar15[8] = uVar16;
    setCopReg(2,in_zero,*(undefined4 *)(&DAT_80139094 + (uint)pbVar9[3] * 8));
    setCopReg(2,extraout_at,*(undefined4 *)(&DAT_80139098 + (uint)pbVar9[3] * 8));
    puVar8[8] = uStack00000020;
    copFunction(2,0x180001);
    puVar8[0xb] = uVar10 | in_t1 + 0x3f;
    uVar16 = getCopReg(2,0xe);
    puVar15[0xb] = uVar16;
    if ((((((ushort)puVar8[1] < 0x140) || ((ushort)puVar8[4] < 0x140)) ||
         ((ushort)puVar8[7] < 0x140)) || ((ushort)puVar8[10] < 0x140)) &&
       (((*(ushort *)((int)puVar8 + 6) < 0xf0 || (*(ushort *)((int)puVar8 + 0x12) < 0xf0)) ||
        ((*(ushort *)((int)puVar8 + 0x1e) < 0xf0 || (*(ushort *)((int)puVar8 + 0x2a) < 0xf0)))))) {
      bVar1 = pbVar9[4];
      if ((bVar1 & 1) != 0) {
        puVar8[9] = 0x808080;
        FUN_8013155c();
        return;
      }
      puVar8[9] = 0;
      if ((bVar1 & 2) != 0) {
        puVar8[6] = 0x808080;
        FUN_80131574();
        return;
      }
      puVar8[6] = 0;
      if ((bVar1 & 4) != 0) {
        puVar8[3] = 0x808080;
        FUN_8013158c();
        return;
      }
      puVar8[3] = 0;
      if ((bVar1 & 8) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *puVar8 = 0x3c000000;
      *puVar15 = *(uint *)(unaff_s7 + 0x1ffc) | 0xc000000;
      *(uint **)(unaff_s7 + 0x1ffc) = puVar15;
      puVar8 = puVar8 + 0xd;
      puVar15 = puVar15 + 0xd;
    }
    uVar5 = _DAT_801388ee;
    uVar4 = _DAT_801388ec;
    iVar6 = iVar6 + 1;
    pbVar9 = pbVar9 + 5;
    if (0x2b < iVar6) {
      *(undefined1 *)((int)puVar15 + 3) = 2;
      param_5._2_1_ = (byte)uVar5;
      param_5._0_1_ = (byte)uVar4;
      puVar15[2] = 0;
      puVar15[1] = (uint)(param_5._2_1_ >> 3) << 0xf | (uint)((byte)param_5 >> 3) << 10 | 0xe2000000
                   | 0x318;
      *puVar15 = *(uint *)(unaff_s7 + 0x1ffc) | 0x2000000;
      *(uint **)(unaff_s7 + 0x1ffc) = puVar15;
      _DAT_800bf544 = puVar15 + 3;
      return;
    }
  } while( true );
}

