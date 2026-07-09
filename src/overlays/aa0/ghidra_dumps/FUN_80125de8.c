// FUN_80125de8

/* WARNING: Removing unreachable block (ram,0x80125f38) */
/* WARNING: Removing unreachable block (ram,0x80126224) */
/* WARNING: Removing unreachable block (ram,0x801261bc) */
/* WARNING: Removing unreachable block (ram,0x801261c4) */
/* WARNING: Removing unreachable block (ram,0x801261b4) */
/* WARNING: Removing unreachable block (ram,0x801261f8) */
/* WARNING: Removing unreachable block (ram,0x80126044) */
/* WARNING: Removing unreachable block (ram,0x80126050) */
/* WARNING: Removing unreachable block (ram,0x80125fe4) */
/* WARNING: Removing unreachable block (ram,0x80125ff0) */
/* WARNING: Removing unreachable block (ram,0x80125ff8) */
/* WARNING: Removing unreachable block (ram,0x80125fdc) */
/* WARNING: Removing unreachable block (ram,0x8012f01c) */
/* WARNING: Removing unreachable block (ram,0x80126020) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80125de8(undefined1 *param_1,undefined4 param_2,undefined4 param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  code *pcVar9;
  undefined1 *puVar10;
  short *psVar11;
  short *psVar12;
  undefined2 *in_t0;
  int in_t1;
  undefined2 *in_t2;
  uint in_t3;
  undefined2 *in_t5;
  int in_t6;
  int in_t7;
  undefined1 *unaff_s0;
  int iVar13;
  int in_t8;
  code *pcVar14;
  undefined2 in_lo;
  
  pcVar14 = FUN_80125de8;
  iVar13 = 0;
  psVar11 = (short *)&DAT_8014a340;
  puVar10 = &DAT_8014a334;
  puVar8 = param_1;
  do {
    iVar6 = (uint)(byte)(&DAT_8014a334)[(byte)param_1[3]] * 5 + iVar13;
    iVar13 = iVar13 + 1;
    *(undefined2 *)(puVar8 + 0x60) = *(undefined2 *)(&DAT_8014a340 + iVar6 * 2);
    puVar8 = puVar8 + 2;
  } while (iVar13 < 5);
  if (param_1[3] != '\0') {
    *(undefined2 *)(param_1 + 0x70) = 0;
    iVar13 = func_0x80072ddc(puVar8,2,2,0xe);
    if (iVar13 != 0) {
      *(undefined4 *)(iVar13 + 0x1c) = 0x801234a4;
      *(undefined2 *)(iVar13 + 0x48) =
           *(undefined2 *)(*(int *)(unaff_s0 + ((byte)unaff_s0[9] - 1) * 4 + 0xc0) + 0x2c);
      *(short *)(iVar13 + 0x4a) =
           *(short *)(*(int *)(unaff_s0 + ((byte)unaff_s0[9] - 1) * 4 + 0xc0) + 0x30) + -0x8c;
      *(undefined2 *)(iVar13 + 0x4c) =
           *(undefined2 *)(*(int *)(unaff_s0 + ((byte)unaff_s0[9] - 1) * 4 + 0xc0) + 0x34);
    }
    return;
  }
  *(undefined2 *)(param_1 + 0x70) = 0xff56;
  *param_1 = 1;
  uVar2 = *(ushort *)(param_1 + 0x60);
  param_1[4] = param_1[4] + '\x01';
  iVar13 = _DAT_800ecfac;
  pcVar9 = (code *)(uVar2 & 1);
  param_1[0xd] = 4;
  param_1[0xb] = 0;
  param_1[9] = 0;
  iVar6 = iVar13 + 4;
  if ((uVar2 & 1) == 0) {
    uVar4 = 7;
    if ((uVar2 & 4) == 0) {
      uVar4 = 3;
    }
    param_1[8] = uVar4;
    if (param_1[8] != '\0') {
      iVar7 = func_0x8007aae8();
      if (iVar7 != 0) {
        *(int *)(param_1 + 0xc0) = iVar7;
        *(undefined2 *)(iVar7 + 6) = _DAT_8014a2ec;
        **(undefined2 **)(param_1 + 0xc0) = _DAT_8014a2ee;
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = _DAT_8014a2f0;
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 4) = _DAT_8014a2f2;
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 8) = 0;
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 10) = 0;
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0;
        *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3e) = 0;
        *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0;
        iVar7 = *(int *)(param_1 + 0xc0);
        iVar13 = iVar13 + *(int *)((uint)((byte)param_1[0x60] >> 4) * 4 + _DAT_8014a2f4 * 4 + iVar6)
        ;
        goto LAB_8012f210;
      }
LAB_80126478:
      param_1[4] = 3;
      FUN_8012f464();
      return;
    }
  }
  else if (pcVar9 == (code *)0x1) {
    uVar4 = 0xc;
    if ((uVar2 & 2) == 0) {
      uVar4 = 7;
    }
    param_1[8] = uVar4;
    if (param_1[8] != '\0') {
      iVar13 = func_0x8007aae8();
      if (iVar13 != 0) {
        *(int *)(param_1 + 0xc0) = iVar13;
        *(undefined2 *)(iVar13 + 6) = _DAT_8014a274;
        **(undefined2 **)(param_1 + 0xc0) = _DAT_8014a276;
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = _DAT_8014a278;
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 4) = _DAT_8014a27a;
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 8) = 0;
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 10) = 0;
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0;
        *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3e) = 0;
        *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0;
        param_4 = (short *)&DAT_80150000;
        iVar13 = (uint)((byte)param_1[0x60] >> 4) * 4 + _DAT_8014a27c * 4 + iVar6;
        goto LAB_8012f02c;
      }
      goto LAB_80126478;
    }
  }
  *(undefined2 *)(param_1 + 0x80) = 100;
  *(undefined2 *)(param_1 + 0x82) = 200;
  *(undefined2 *)(param_1 + 0x84) = 0x7d;
  *(undefined2 *)(param_1 + 0x86) = 0xfa;
  if ((*(ushort *)(param_1 + 0x60) & 8) != 0) {
    uVar5 = 0xaa;
    if ((*(ushort *)(param_1 + 0x60) & 1) != 0) {
      *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xc) = 0xaa;
      psVar12 = psVar11;
      param_1 = unaff_s0;
      while( true ) {
        *in_t0 = uVar5;
        param_4[-8] = *(short *)(pcVar9 + -0x10);
        param_4[-7] = *(short *)(pcVar9 + -0xe);
        param_4[-6] = *(short *)(pcVar9 + -0xc);
        param_4[-4] = *(short *)(pcVar9 + -8);
        in_t1 = in_t1 + 1;
        param_4[-3] = *(short *)(pcVar9 + -6);
        in_t2 = in_t2 + 9;
        param_4[-5] = *(short *)(pcVar9 + -10);
        psVar11 = psVar12 + 0x12;
        param_4[-2] = *(short *)(pcVar9 + -4);
        in_t0 = in_t0 + 9;
        param_4[-1] = *(short *)(pcVar9 + -2);
        sVar3 = *(short *)pcVar9;
        pcVar9 = pcVar9 + 0x24;
        *param_4 = sVar3;
        param_4 = param_4 + 0x12;
        if ((int)in_t3 <= in_t1) break;
        iVar13 = (int)psVar12[10];
LAB_8012f02c:
        if (puVar10 == (undefined1 *)0x0) {
          trap(0x1c00);
        }
        if ((puVar10 == (undefined1 *)0xffffffff) &&
           (iVar13 - *(short *)(pcVar9 + -0x10) == -0x80000000)) {
          trap(0x1800);
        }
        *in_t2 = (short)((iVar13 - *(short *)(pcVar9 + -0x10)) / (int)puVar10);
        if (puVar10 == (undefined1 *)0x0) {
          trap(0x1c00);
        }
        if ((puVar10 == (undefined1 *)0xffffffff) &&
           ((int)psVar11[-7] - (int)*(short *)(pcVar9 + -0xe) == -0x80000000)) {
          trap(0x1800);
        }
        in_t0[-7] = (short)(((int)psVar11[-7] - (int)*(short *)(pcVar9 + -0xe)) / (int)puVar10);
        if (puVar10 == (undefined1 *)0x0) {
          trap(0x1c00);
        }
        if ((puVar10 == (undefined1 *)0xffffffff) &&
           ((int)psVar11[-6] - (int)*(short *)(pcVar9 + -0xc) == -0x80000000)) {
          trap(0x1800);
        }
        in_t0[-6] = (short)(((int)psVar11[-6] - (int)*(short *)(pcVar9 + -0xc)) / (int)puVar10);
        if (puVar10 == (undefined1 *)0x0) {
          trap(0x1c00);
        }
        if ((puVar10 == (undefined1 *)0xffffffff) &&
           ((int)psVar11[-4] - (int)*(short *)(pcVar9 + -8) == -0x80000000)) {
          trap(0x1800);
        }
        in_t0[-5] = (short)(((int)psVar11[-4] - (int)*(short *)(pcVar9 + -8)) / (int)puVar10);
        if (puVar10 == (undefined1 *)0x0) {
          trap(0x1c00);
        }
        if ((puVar10 == (undefined1 *)0xffffffff) &&
           ((int)psVar11[-3] - (int)*(short *)(pcVar9 + -6) == -0x80000000)) {
          trap(0x1800);
        }
        in_t0[-4] = (short)(((int)psVar11[-3] - (int)*(short *)(pcVar9 + -6)) / (int)puVar10);
        if (puVar10 == (undefined1 *)0x0) {
          trap(0x1c00);
        }
        if ((puVar10 == (undefined1 *)0xffffffff) &&
           ((int)psVar11[-5] - (int)*(short *)(pcVar9 + -10) == -0x80000000)) {
          trap(0x1800);
        }
        in_t0[-3] = (short)(((int)psVar11[-5] - (int)*(short *)(pcVar9 + -10)) / (int)puVar10);
        if (puVar10 == (undefined1 *)0x0) {
          trap(0x1c00);
        }
        if ((puVar10 == (undefined1 *)0xffffffff) &&
           ((int)psVar11[-2] - (int)*(short *)(pcVar9 + -4) == -0x80000000)) {
          trap(0x1800);
        }
        in_t0[-2] = (short)(((int)psVar11[-2] - (int)*(short *)(pcVar9 + -4)) / (int)puVar10);
        iVar13 = (int)psVar11[-1];
        iVar7 = (int)*(short *)(pcVar9 + -2);
LAB_8012f210:
        if (puVar10 == (undefined1 *)0x0) {
          trap(0x1c00);
        }
        if ((puVar10 == (undefined1 *)0xffffffff) && (iVar13 - iVar7 == -0x80000000)) {
          trap(0x1800);
        }
        in_t0[-1] = (short)((iVar13 - iVar7) / (int)puVar10);
        if (puVar10 == (undefined1 *)0x0) {
          trap(0x1c00);
        }
        if ((puVar10 == (undefined1 *)0xffffffff) &&
           ((int)*psVar11 - (int)*(short *)pcVar9 == -0x80000000)) {
          trap(0x1800);
        }
        uVar5 = (undefined2)(((int)*psVar11 - (int)*(short *)pcVar9) / (int)puVar10);
        psVar12 = psVar11;
      }
      in_t3 = (uint)*(ushort *)(in_t6 + 2);
      in_t1 = 0;
      if (in_t3 == 0) {
        return;
      }
      puVar10 = (undefined1 *)(int)(short)param_1;
      param_4 = (short *)(in_t8 + 0x26);
      psVar11 = (short *)(in_t7 + 0x26);
      pcVar9 = pcVar14 + 0x26;
      in_t0 = in_t5 + 0xb;
      goto LAB_8012f32c;
    }
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0xaa;
  }
  bVar1 = param_1[3];
  *(undefined2 *)(param_1 + 0x6a) = 0x2df;
  if (bVar1 == 3) {
    iVar6 = *(int *)(param_1 + 0xc4);
    iVar13 = -0xc0;
  }
  else {
    if (3 < bVar1) {
      iVar13 = 0x2de;
      if (bVar1 != 0xb) goto LAB_8012f330;
      *(undefined2 *)(param_1 + 0x6a) = 0x2de;
      *(undefined2 *)(*(int *)(param_1 + 200) + 4) = 0xfd22;
      iVar13 = *(int *)(param_1 + 0xc4);
      *(undefined2 *)(iVar13 + 8) = 0;
      goto LAB_8012f340;
    }
    iVar13 = 800;
    if (bVar1 != 0) goto LAB_8012f330;
    *(undefined2 *)(param_1 + 0x6a) = 800;
    *(undefined2 *)(*(int *)(param_1 + 200) + 4) = 0xfce0;
    *(undefined2 *)(*(int *)(param_1 + 0xcc) + 4) = *(undefined2 *)(param_1 + 0x6a);
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 10) = *(undefined2 *)(param_1 + 0x70);
    iVar6 = *(int *)(param_1 + 0xc4);
    iVar13 = 0xf0;
  }
  while( true ) {
    iVar13 = iVar13 - iVar6;
    in_lo = (undefined2)(iVar13 / (int)puVar10);
LAB_8012f340:
    if (puVar10 == (undefined1 *)0x0) {
      trap(0x1c00);
    }
    if ((puVar10 == (undefined1 *)0xffffffff) && (iVar13 == -0x80000000)) {
      trap(0x1800);
    }
    *in_t5 = in_lo;
    if (puVar10 == (undefined1 *)0x0) {
      trap(0x1c00);
    }
    if ((puVar10 == (undefined1 *)0xffffffff) &&
       ((int)psVar11[-8] - (int)*(short *)(pcVar9 + -0x10) == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-10] = (short)(((int)psVar11[-8] - (int)*(short *)(pcVar9 + -0x10)) / (int)puVar10);
    if (puVar10 == (undefined1 *)0x0) {
      trap(0x1c00);
    }
    if ((puVar10 == (undefined1 *)0xffffffff) &&
       ((int)psVar11[-7] - (int)*(short *)(pcVar9 + -0xe) == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-9] = (short)(((int)psVar11[-7] - (int)*(short *)(pcVar9 + -0xe)) / (int)puVar10);
    if (puVar10 == (undefined1 *)0x0) {
      trap(0x1c00);
    }
    if ((puVar10 == (undefined1 *)0xffffffff) &&
       ((int)psVar11[-5] - (int)*(short *)(pcVar9 + -10) == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-8] = (short)(((int)psVar11[-5] - (int)*(short *)(pcVar9 + -10)) / (int)puVar10);
    if (puVar10 == (undefined1 *)0x0) {
      trap(0x1c00);
    }
    if ((puVar10 == (undefined1 *)0xffffffff) &&
       ((int)psVar11[-4] - (int)*(short *)(pcVar9 + -8) == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-7] = (short)(((int)psVar11[-4] - (int)*(short *)(pcVar9 + -8)) / (int)puVar10);
    if (puVar10 == (undefined1 *)0x0) {
      trap(0x1c00);
    }
    if ((puVar10 == (undefined1 *)0xffffffff) &&
       ((int)psVar11[-6] - (int)*(short *)(pcVar9 + -0xc) == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-6] = (short)(((int)psVar11[-6] - (int)*(short *)(pcVar9 + -0xc)) / (int)puVar10);
    if (puVar10 == (undefined1 *)0x0) {
      trap(0x1c00);
    }
    if ((puVar10 == (undefined1 *)0xffffffff) &&
       ((int)psVar11[-3] - (int)*(short *)(pcVar9 + -6) == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-5] = (short)(((int)psVar11[-3] - (int)*(short *)(pcVar9 + -6)) / (int)puVar10);
    if (puVar10 == (undefined1 *)0x0) {
      trap(0x1c00);
    }
    if ((puVar10 == (undefined1 *)0xffffffff) &&
       ((int)psVar11[-2] - (int)*(short *)(pcVar9 + -4) == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-4] = (short)(((int)psVar11[-2] - (int)*(short *)(pcVar9 + -4)) / (int)puVar10);
    if (puVar10 == (undefined1 *)0x0) {
      trap(0x1c00);
    }
    if ((puVar10 == (undefined1 *)0xffffffff) &&
       ((int)psVar11[-1] - (int)*(short *)(pcVar9 + -2) == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-3] = (short)(((int)psVar11[-1] - (int)*(short *)(pcVar9 + -2)) / (int)puVar10);
    if (puVar10 == (undefined1 *)0x0) {
      trap(0x1c00);
    }
    if ((puVar10 == (undefined1 *)0xffffffff) &&
       ((int)psVar11[1] - (int)*(short *)(pcVar9 + 2) == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-2] = (short)(((int)psVar11[1] - (int)*(short *)(pcVar9 + 2)) / (int)puVar10);
    if (puVar10 == (undefined1 *)0x0) {
      trap(0x1c00);
    }
    if ((puVar10 == (undefined1 *)0xffffffff) &&
       ((int)psVar11[2] - (int)*(short *)(pcVar9 + 4) == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-1] = (short)(((int)psVar11[2] - (int)*(short *)(pcVar9 + 4)) / (int)puVar10);
    if (puVar10 == (undefined1 *)0x0) {
      trap(0x1c00);
    }
    if ((puVar10 == (undefined1 *)0xffffffff) &&
       ((int)*psVar11 - (int)*(short *)pcVar9 == -0x80000000)) {
      trap(0x1800);
    }
    *in_t0 = (short)(((int)*psVar11 - (int)*(short *)pcVar9) / (int)puVar10);
    param_4[-9] = *(short *)(pcVar9 + -0x12);
    param_4[-8] = *(short *)(pcVar9 + -0x10);
    param_4[-7] = *(short *)(pcVar9 + -0xe);
    param_4[-5] = *(short *)(pcVar9 + -10);
    param_4[-4] = *(short *)(pcVar9 + -8);
    param_4[-6] = *(short *)(pcVar9 + -0xc);
    param_4[-3] = *(short *)(pcVar9 + -6);
    in_t1 = in_t1 + 1;
    param_4[-2] = *(short *)(pcVar9 + -4);
    in_t5 = in_t5 + 0xc;
    param_4[-1] = *(short *)(pcVar9 + -2);
    psVar11 = psVar11 + 0x16;
    param_4[1] = *(short *)(pcVar9 + 2);
    in_t0 = in_t0 + 0xc;
    param_4[2] = *(short *)(pcVar9 + 4);
    sVar3 = *(short *)pcVar9;
    pcVar9 = pcVar9 + 0x2c;
    *param_4 = sVar3;
    param_4 = param_4 + 0x16;
    if ((int)in_t3 <= in_t1) break;
LAB_8012f32c:
    iVar13 = (int)psVar11[-9];
LAB_8012f330:
    iVar6 = (int)*(short *)(pcVar9 + -0x12);
  }
  return;
}

