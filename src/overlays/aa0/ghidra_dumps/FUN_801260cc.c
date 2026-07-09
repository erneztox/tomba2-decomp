// FUN_801260cc

/* WARNING: Removing unreachable block (ram,0x801261f8) */
/* WARNING: Removing unreachable block (ram,0x801261bc) */
/* WARNING: Removing unreachable block (ram,0x801261c4) */
/* WARNING: Removing unreachable block (ram,0x801261b4) */
/* WARNING: Removing unreachable block (ram,0x80126224) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801260cc(code *param_1,int param_2,short *param_3,short *param_4)

{
  byte bVar1;
  short sVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  uint in_v1;
  int iVar6;
  code *pcVar7;
  short *psVar8;
  undefined2 *in_t0;
  undefined2 *puVar9;
  int in_t1;
  undefined2 *in_t2;
  uint in_t3;
  undefined2 *in_t5;
  int in_t6;
  int in_t7;
  int unaff_s0;
  int unaff_s3;
  int unaff_s5;
  int unaff_s6;
  int in_t8;
  code *pcVar10;
  undefined2 in_lo;
  
  pcVar10 = FUN_801260cc;
  uVar3 = 7;
  if ((in_v1 & 4) == 0) {
    uVar3 = 3;
  }
  *(undefined1 *)(unaff_s3 + 8) = uVar3;
  if (*(char *)(unaff_s3 + 8) != '\0') {
    iVar5 = func_0x8007aae8();
    if (iVar5 != 0) {
      *(int *)(unaff_s3 + 0xc0) = iVar5;
      *(undefined2 *)(iVar5 + 6) = _DAT_8014a2ec;
      **(undefined2 **)(unaff_s3 + 0xc0) = _DAT_8014a2ee;
      *(undefined2 *)(*(int *)(unaff_s3 + 0xc0) + 2) = _DAT_8014a2f0;
      *(undefined2 *)(*(int *)(unaff_s3 + 0xc0) + 4) = _DAT_8014a2f2;
      *(undefined2 *)(*(int *)(unaff_s3 + 0xc0) + 8) = 0;
      *(undefined2 *)(*(int *)(unaff_s3 + 0xc0) + 10) = 0;
      *(undefined2 *)(*(int *)(unaff_s3 + 0xc0) + 0xc) = 0;
      *(undefined1 *)(*(int *)(unaff_s3 + 0xc0) + 0x3e) = 0;
      *(undefined1 *)(*(int *)(unaff_s3 + 0xc0) + 0x3f) = 0;
      iVar6 = *(int *)(unaff_s3 + 0xc0);
      iVar5 = unaff_s5 +
              *(int *)((uint)(*(byte *)(unaff_s3 + 0x60) >> 4) * 4 + _DAT_8014a2f4 * 4 + unaff_s6);
      goto LAB_8012f210;
    }
    *(undefined1 *)(unaff_s3 + 4) = 3;
    FUN_8012f464();
    return;
  }
  *(undefined2 *)(unaff_s3 + 0x80) = 100;
  *(undefined2 *)(unaff_s3 + 0x82) = 200;
  *(undefined2 *)(unaff_s3 + 0x84) = 0x7d;
  *(undefined2 *)(unaff_s3 + 0x86) = 0xfa;
  if ((*(ushort *)(unaff_s3 + 0x60) & 8) != 0) {
    uVar4 = 0xaa;
    if ((*(ushort *)(unaff_s3 + 0x60) & 1) != 0) {
      *(undefined2 *)(*(int *)(unaff_s3 + 0xc4) + 0xc) = 0xaa;
      pcVar7 = param_1;
      psVar8 = param_3;
      puVar9 = in_t0;
      unaff_s3 = unaff_s0;
      while( true ) {
        *puVar9 = uVar4;
        param_4[-8] = *(short *)(pcVar7 + -0x10);
        param_4[-7] = *(short *)(pcVar7 + -0xe);
        param_4[-6] = *(short *)(pcVar7 + -0xc);
        param_4[-4] = *(short *)(pcVar7 + -8);
        in_t1 = in_t1 + 1;
        param_4[-3] = *(short *)(pcVar7 + -6);
        in_t2 = in_t2 + 9;
        param_4[-5] = *(short *)(pcVar7 + -10);
        param_3 = psVar8 + 0x12;
        param_4[-2] = *(short *)(pcVar7 + -4);
        in_t0 = puVar9 + 9;
        param_4[-1] = *(short *)(pcVar7 + -2);
        param_1 = pcVar7 + 0x24;
        *param_4 = *(short *)pcVar7;
        param_4 = param_4 + 0x12;
        if ((int)in_t3 <= in_t1) break;
        if (param_2 == 0) {
          trap(0x1c00);
        }
        if ((param_2 == -1) && ((int)psVar8[10] - (int)*(short *)(pcVar7 + 0x14) == -0x80000000)) {
          trap(0x1800);
        }
        *in_t2 = (short)(((int)psVar8[10] - (int)*(short *)(pcVar7 + 0x14)) / param_2);
        if (param_2 == 0) {
          trap(0x1c00);
        }
        if ((param_2 == -1) && ((int)psVar8[0xb] - (int)*(short *)(pcVar7 + 0x16) == -0x80000000)) {
          trap(0x1800);
        }
        puVar9[2] = (short)(((int)psVar8[0xb] - (int)*(short *)(pcVar7 + 0x16)) / param_2);
        if (param_2 == 0) {
          trap(0x1c00);
        }
        if ((param_2 == -1) && ((int)psVar8[0xc] - (int)*(short *)(pcVar7 + 0x18) == -0x80000000)) {
          trap(0x1800);
        }
        puVar9[3] = (short)(((int)psVar8[0xc] - (int)*(short *)(pcVar7 + 0x18)) / param_2);
        if (param_2 == 0) {
          trap(0x1c00);
        }
        if ((param_2 == -1) && ((int)psVar8[0xe] - (int)*(short *)(pcVar7 + 0x1c) == -0x80000000)) {
          trap(0x1800);
        }
        puVar9[4] = (short)(((int)psVar8[0xe] - (int)*(short *)(pcVar7 + 0x1c)) / param_2);
        if (param_2 == 0) {
          trap(0x1c00);
        }
        if ((param_2 == -1) && ((int)psVar8[0xf] - (int)*(short *)(pcVar7 + 0x1e) == -0x80000000)) {
          trap(0x1800);
        }
        puVar9[5] = (short)(((int)psVar8[0xf] - (int)*(short *)(pcVar7 + 0x1e)) / param_2);
        if (param_2 == 0) {
          trap(0x1c00);
        }
        if ((param_2 == -1) && ((int)psVar8[0xd] - (int)*(short *)(pcVar7 + 0x1a) == -0x80000000)) {
          trap(0x1800);
        }
        puVar9[6] = (short)(((int)psVar8[0xd] - (int)*(short *)(pcVar7 + 0x1a)) / param_2);
        if (param_2 == 0) {
          trap(0x1c00);
        }
        if ((param_2 == -1) && ((int)psVar8[0x10] - (int)*(short *)(pcVar7 + 0x20) == -0x80000000))
        {
          trap(0x1800);
        }
        puVar9[7] = (short)(((int)psVar8[0x10] - (int)*(short *)(pcVar7 + 0x20)) / param_2);
        iVar5 = (int)psVar8[0x11];
        iVar6 = (int)*(short *)(pcVar7 + 0x22);
LAB_8012f210:
        if (param_2 == 0) {
          trap(0x1c00);
        }
        if ((param_2 == -1) && (iVar5 - iVar6 == -0x80000000)) {
          trap(0x1800);
        }
        in_t0[-1] = (short)((iVar5 - iVar6) / param_2);
        if (param_2 == 0) {
          trap(0x1c00);
        }
        if ((param_2 == -1) && ((int)*param_3 - (int)*(short *)param_1 == -0x80000000)) {
          trap(0x1800);
        }
        uVar4 = (undefined2)(((int)*param_3 - (int)*(short *)param_1) / param_2);
        pcVar7 = param_1;
        psVar8 = param_3;
        puVar9 = in_t0;
      }
      in_t3 = (uint)*(ushort *)(in_t6 + 2);
      in_t1 = 0;
      if (in_t3 == 0) {
        return;
      }
      param_2 = (int)(short)unaff_s3;
      param_4 = (short *)(in_t8 + 0x26);
      param_3 = (short *)(in_t7 + 0x26);
      param_1 = pcVar10 + 0x26;
      in_t0 = in_t5 + 0xb;
      goto LAB_8012f32c;
    }
    *(undefined2 *)(*(int *)(unaff_s3 + 0xc0) + 0xc) = 0xaa;
  }
  bVar1 = *(byte *)(unaff_s3 + 3);
  *(undefined2 *)(unaff_s3 + 0x6a) = 0x2df;
  if (bVar1 == 3) {
    iVar6 = *(int *)(unaff_s3 + 0xc4);
    iVar5 = -0xc0;
  }
  else {
    if (3 < bVar1) {
      iVar5 = 0x2de;
      if (bVar1 != 0xb) goto LAB_8012f330;
      *(undefined2 *)(unaff_s3 + 0x6a) = 0x2de;
      *(undefined2 *)(*(int *)(unaff_s3 + 200) + 4) = 0xfd22;
      iVar5 = *(int *)(unaff_s3 + 0xc4);
      *(undefined2 *)(iVar5 + 8) = 0;
      goto LAB_8012f340;
    }
    iVar5 = 800;
    if (bVar1 != 0) goto LAB_8012f330;
    *(undefined2 *)(unaff_s3 + 0x6a) = 800;
    *(undefined2 *)(*(int *)(unaff_s3 + 200) + 4) = 0xfce0;
    *(undefined2 *)(*(int *)(unaff_s3 + 0xcc) + 4) = *(undefined2 *)(unaff_s3 + 0x6a);
    *(undefined2 *)(*(int *)(unaff_s3 + 0xc4) + 10) = *(undefined2 *)(unaff_s3 + 0x70);
    iVar6 = *(int *)(unaff_s3 + 0xc4);
    iVar5 = 0xf0;
  }
  while( true ) {
    iVar5 = iVar5 - iVar6;
    in_lo = (undefined2)(iVar5 / param_2);
LAB_8012f340:
    if (param_2 == 0) {
      trap(0x1c00);
    }
    if ((param_2 == -1) && (iVar5 == -0x80000000)) {
      trap(0x1800);
    }
    *in_t5 = in_lo;
    if (param_2 == 0) {
      trap(0x1c00);
    }
    if ((param_2 == -1) && ((int)param_3[-8] - (int)*(short *)(param_1 + -0x10) == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-10] = (short)(((int)param_3[-8] - (int)*(short *)(param_1 + -0x10)) / param_2);
    if (param_2 == 0) {
      trap(0x1c00);
    }
    if ((param_2 == -1) && ((int)param_3[-7] - (int)*(short *)(param_1 + -0xe) == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-9] = (short)(((int)param_3[-7] - (int)*(short *)(param_1 + -0xe)) / param_2);
    if (param_2 == 0) {
      trap(0x1c00);
    }
    if ((param_2 == -1) && ((int)param_3[-5] - (int)*(short *)(param_1 + -10) == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-8] = (short)(((int)param_3[-5] - (int)*(short *)(param_1 + -10)) / param_2);
    if (param_2 == 0) {
      trap(0x1c00);
    }
    if ((param_2 == -1) && ((int)param_3[-4] - (int)*(short *)(param_1 + -8) == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-7] = (short)(((int)param_3[-4] - (int)*(short *)(param_1 + -8)) / param_2);
    if (param_2 == 0) {
      trap(0x1c00);
    }
    if ((param_2 == -1) && ((int)param_3[-6] - (int)*(short *)(param_1 + -0xc) == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-6] = (short)(((int)param_3[-6] - (int)*(short *)(param_1 + -0xc)) / param_2);
    if (param_2 == 0) {
      trap(0x1c00);
    }
    if ((param_2 == -1) && ((int)param_3[-3] - (int)*(short *)(param_1 + -6) == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-5] = (short)(((int)param_3[-3] - (int)*(short *)(param_1 + -6)) / param_2);
    if (param_2 == 0) {
      trap(0x1c00);
    }
    if ((param_2 == -1) && ((int)param_3[-2] - (int)*(short *)(param_1 + -4) == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-4] = (short)(((int)param_3[-2] - (int)*(short *)(param_1 + -4)) / param_2);
    if (param_2 == 0) {
      trap(0x1c00);
    }
    if ((param_2 == -1) && ((int)param_3[-1] - (int)*(short *)(param_1 + -2) == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-3] = (short)(((int)param_3[-1] - (int)*(short *)(param_1 + -2)) / param_2);
    if (param_2 == 0) {
      trap(0x1c00);
    }
    if ((param_2 == -1) && ((int)param_3[1] - (int)*(short *)(param_1 + 2) == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-2] = (short)(((int)param_3[1] - (int)*(short *)(param_1 + 2)) / param_2);
    if (param_2 == 0) {
      trap(0x1c00);
    }
    if ((param_2 == -1) && ((int)param_3[2] - (int)*(short *)(param_1 + 4) == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-1] = (short)(((int)param_3[2] - (int)*(short *)(param_1 + 4)) / param_2);
    if (param_2 == 0) {
      trap(0x1c00);
    }
    if ((param_2 == -1) && ((int)*param_3 - (int)*(short *)param_1 == -0x80000000)) {
      trap(0x1800);
    }
    *in_t0 = (short)(((int)*param_3 - (int)*(short *)param_1) / param_2);
    param_4[-9] = *(short *)(param_1 + -0x12);
    param_4[-8] = *(short *)(param_1 + -0x10);
    param_4[-7] = *(short *)(param_1 + -0xe);
    param_4[-5] = *(short *)(param_1 + -10);
    param_4[-4] = *(short *)(param_1 + -8);
    param_4[-6] = *(short *)(param_1 + -0xc);
    param_4[-3] = *(short *)(param_1 + -6);
    in_t1 = in_t1 + 1;
    param_4[-2] = *(short *)(param_1 + -4);
    in_t5 = in_t5 + 0xc;
    param_4[-1] = *(short *)(param_1 + -2);
    param_3 = param_3 + 0x16;
    param_4[1] = *(short *)(param_1 + 2);
    in_t0 = in_t0 + 0xc;
    param_4[2] = *(short *)(param_1 + 4);
    sVar2 = *(short *)param_1;
    param_1 = param_1 + 0x2c;
    *param_4 = sVar2;
    param_4 = param_4 + 0x16;
    if ((int)in_t3 <= in_t1) break;
LAB_8012f32c:
    iVar5 = (int)param_3[-9];
LAB_8012f330:
    iVar6 = (int)*(short *)(param_1 + -0x12);
  }
  return;
}

