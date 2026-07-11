// FUN_8011ce70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011ce70(short *param_1,int param_2,short *param_3)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  uint in_v1;
  uint extraout_v1;
  uint extraout_v1_00;
  uint extraout_v1_01;
  uint extraout_v1_02;
  uint extraout_v1_03;
  int iVar4;
  int *piVar5;
  short *psVar6;
  code *pcVar7;
  int iVar8;
  short *psVar9;
  undefined2 *in_t0;
  undefined2 *puVar10;
  int in_t1;
  undefined2 *in_t2;
  int in_t3;
  int in_t4;
  undefined2 *in_t5;
  int in_t6;
  int in_t7;
  uint uVar11;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s6;
  int unaff_s7;
  int in_t8;
  int unaff_s8;
  
  pcVar7 = FUN_8011ce70;
  bVar1 = *(byte *)(param_1 + 2);
  uVar11 = (uint)bVar1;
  psVar6 = param_1;
  if (uVar11 == 1) {
    func_0x8007778c();
    in_v1 = (uint)*(byte *)((int)param_1 + 5);
    if (in_v1 == 1) {
      psVar6 = param_1;
      FUN_801255cc();
      in_v1 = extraout_v1_01;
    }
    else if (in_v1 < 2) {
      if (in_v1 == 0) {
        psVar6 = param_1;
        FUN_80125fe0();
        in_v1 = extraout_v1_00;
      }
    }
    else if (in_v1 == 2) {
      psVar6 = param_1;
      FUN_80125800();
      in_v1 = extraout_v1_02;
    }
    if (in_v1 == 0) {
      *(undefined1 *)(unaff_s3 + 4) = 3;
      FUN_8012f464();
      return;
    }
    if (((*(ushort *)(unaff_s3 + 0x60) & 2) == 0) && (unaff_s2 == unaff_s7)) {
      param_1 = param_1 + 5;
      goto LAB_80125f3c;
    }
  }
  else {
    if (uVar11 < 2) {
      if (uVar11 == 0) {
        FUN_801253e8();
        in_v1 = extraout_v1;
      }
    }
    else if (uVar11 == 2) {
      func_0x8007778c(param_1);
      if ((1 < *(byte *)((int)param_1 + 5)) && (*(byte *)((int)param_1 + 5) < 4)) {
        FUN_801261fc(param_1);
      }
      if (*(char *)((int)param_1 + 1) == '\0') {
        return;
      }
      func_0x800518fc();
      in_v1 = extraout_v1_03;
    }
    else if (uVar11 == 3) {
      func_0x8007a624(param_1);
      return;
    }
LAB_80125f3c:
    unaff_s4 = unaff_s4 + 1;
  }
  *(uint *)(uVar11 + 0xc0) = in_v1;
  *(short *)(in_v1 + 6) = *param_1;
  **(short **)(uVar11 + 0xc0) = param_1[1];
  *(short *)(*(int *)(uVar11 + 0xc0) + 2) = param_1[2];
  iVar4 = *(int *)(uVar11 + 0xc0);
  *(short *)(iVar4 + 4) = param_1[3];
  *(undefined2 *)(*(int *)(uVar11 + 0xc0) + 8) = 0;
  *(undefined2 *)(*(int *)(uVar11 + 0xc0) + 10) = 0;
  *(undefined2 *)(*(int *)(uVar11 + 0xc0) + 0xc) = 0;
  *(undefined1 *)(*(int *)(uVar11 + 0xc0) + 0x3e) = 0;
  *(undefined1 *)(*(int *)(uVar11 + 0xc0) + 0x3f) = 0;
  psVar9 = (short *)&DAT_80150000;
  if (unaff_s4 == 1) {
    psVar9 = (short *)&DAT_8014a27e;
    iVar4 = ((*(ushort *)(unaff_s3 + 0x60) & 0xf00) >> 6) + _DAT_8014a286 * 4 + unaff_s6;
    goto LAB_8012f02c;
  }
  if (1 < unaff_s4) {
    if (unaff_s4 != 2) {
      if (unaff_s4 != unaff_s7) goto LAB_8012f01c;
      *(undefined2 *)(*(int *)(uVar11 + 0xc0) + 10) = 0x800;
    }
    *(char *)(*(int *)(uVar11 + 0xc0) + 0x3f) = (char)unaff_s7;
    piVar5 = (int *)((*(ushort *)(unaff_s3 + 0x60) & 4) + param_1[4] * 4 + unaff_s6);
    iVar4 = *piVar5;
    while( true ) {
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && (iVar4 - (int)piVar5 == -0x80000000)) {
        trap(0x1800);
      }
      *in_t2 = (short)((iVar4 - (int)piVar5) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)param_3[-7] - (int)psVar6[-7] == -0x80000000)) {
        trap(0x1800);
      }
      in_t0[-7] = (short)(((int)param_3[-7] - (int)psVar6[-7]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)param_3[-6] - (int)psVar6[-6] == -0x80000000)) {
        trap(0x1800);
      }
      in_t0[-6] = (short)(((int)param_3[-6] - (int)psVar6[-6]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)param_3[-4] - (int)psVar6[-4] == -0x80000000)) {
        trap(0x1800);
      }
      in_t0[-5] = (short)(((int)param_3[-4] - (int)psVar6[-4]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)param_3[-3] - (int)psVar6[-3] == -0x80000000)) {
        trap(0x1800);
      }
      in_t0[-4] = (short)(((int)param_3[-3] - (int)psVar6[-3]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)param_3[-5] - (int)psVar6[-5] == -0x80000000)) {
        trap(0x1800);
      }
      in_t0[-3] = (short)(((int)param_3[-5] - (int)psVar6[-5]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)param_3[-2] - (int)psVar6[-2] == -0x80000000)) {
        trap(0x1800);
      }
      in_t0[-2] = (short)(((int)param_3[-2] - (int)psVar6[-2]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)param_3[-1] - (int)psVar6[-1] == -0x80000000)) {
        trap(0x1800);
      }
      in_t0[-1] = (short)(((int)param_3[-1] - (int)psVar6[-1]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)*param_3 - (int)*psVar6 == -0x80000000)) {
        trap(0x1800);
      }
      *in_t0 = (short)(((int)*param_3 - (int)*psVar6) / param_2);
      psVar9[-8] = psVar6[-8];
      psVar9[-7] = psVar6[-7];
      psVar9[-6] = psVar6[-6];
      psVar9[-4] = psVar6[-4];
      in_t1 = in_t1 + 1;
      psVar9[-3] = psVar6[-3];
      in_t2 = in_t2 + 9;
      psVar9[-5] = psVar6[-5];
      param_3 = param_3 + 0x12;
      psVar9[-2] = psVar6[-2];
      in_t0 = in_t0 + 9;
      psVar9[-1] = psVar6[-1];
      sVar2 = *psVar6;
      psVar6 = psVar6 + 0x12;
      *psVar9 = sVar2;
      psVar9 = psVar9 + 0x12;
      if (in_t3 <= in_t1) break;
LAB_8012f028:
      iVar4 = (int)param_3[-8];
LAB_8012f02c:
      piVar5 = (int *)(int)psVar6[-8];
    }
    uVar3 = *(ushort *)(in_t6 + 2);
    iVar4 = 0;
    if (uVar3 != 0) {
      iVar8 = (int)(short)(ushort)bVar1;
      psVar9 = (short *)(in_t8 + 0x26);
      psVar6 = (short *)(in_t7 + 0x26);
      pcVar7 = pcVar7 + 0x26;
      puVar10 = in_t5 + 0xb;
      do {
        if (iVar8 == 0) {
          trap(0x1c00);
        }
        if ((iVar8 == -1) && ((int)psVar6[-9] - (int)*(short *)(pcVar7 + -0x12) == -0x80000000)) {
          trap(0x1800);
        }
        *in_t5 = (short)(((int)psVar6[-9] - (int)*(short *)(pcVar7 + -0x12)) / iVar8);
        if (iVar8 == 0) {
          trap(0x1c00);
        }
        if ((iVar8 == -1) && ((int)psVar6[-8] - (int)*(short *)(pcVar7 + -0x10) == -0x80000000)) {
          trap(0x1800);
        }
        puVar10[-10] = (short)(((int)psVar6[-8] - (int)*(short *)(pcVar7 + -0x10)) / iVar8);
        if (iVar8 == 0) {
          trap(0x1c00);
        }
        if ((iVar8 == -1) && ((int)psVar6[-7] - (int)*(short *)(pcVar7 + -0xe) == -0x80000000)) {
          trap(0x1800);
        }
        puVar10[-9] = (short)(((int)psVar6[-7] - (int)*(short *)(pcVar7 + -0xe)) / iVar8);
        if (iVar8 == 0) {
          trap(0x1c00);
        }
        if ((iVar8 == -1) && ((int)psVar6[-5] - (int)*(short *)(pcVar7 + -10) == -0x80000000)) {
          trap(0x1800);
        }
        puVar10[-8] = (short)(((int)psVar6[-5] - (int)*(short *)(pcVar7 + -10)) / iVar8);
        if (iVar8 == 0) {
          trap(0x1c00);
        }
        if ((iVar8 == -1) && ((int)psVar6[-4] - (int)*(short *)(pcVar7 + -8) == -0x80000000)) {
          trap(0x1800);
        }
        puVar10[-7] = (short)(((int)psVar6[-4] - (int)*(short *)(pcVar7 + -8)) / iVar8);
        if (iVar8 == 0) {
          trap(0x1c00);
        }
        if ((iVar8 == -1) && ((int)psVar6[-6] - (int)*(short *)(pcVar7 + -0xc) == -0x80000000)) {
          trap(0x1800);
        }
        puVar10[-6] = (short)(((int)psVar6[-6] - (int)*(short *)(pcVar7 + -0xc)) / iVar8);
        if (iVar8 == 0) {
          trap(0x1c00);
        }
        if ((iVar8 == -1) && ((int)psVar6[-3] - (int)*(short *)(pcVar7 + -6) == -0x80000000)) {
          trap(0x1800);
        }
        puVar10[-5] = (short)(((int)psVar6[-3] - (int)*(short *)(pcVar7 + -6)) / iVar8);
        if (iVar8 == 0) {
          trap(0x1c00);
        }
        if ((iVar8 == -1) && ((int)psVar6[-2] - (int)*(short *)(pcVar7 + -4) == -0x80000000)) {
          trap(0x1800);
        }
        puVar10[-4] = (short)(((int)psVar6[-2] - (int)*(short *)(pcVar7 + -4)) / iVar8);
        if (iVar8 == 0) {
          trap(0x1c00);
        }
        if ((iVar8 == -1) && ((int)psVar6[-1] - (int)*(short *)(pcVar7 + -2) == -0x80000000)) {
          trap(0x1800);
        }
        puVar10[-3] = (short)(((int)psVar6[-1] - (int)*(short *)(pcVar7 + -2)) / iVar8);
        if (iVar8 == 0) {
          trap(0x1c00);
        }
        if ((iVar8 == -1) && ((int)psVar6[1] - (int)*(short *)(pcVar7 + 2) == -0x80000000)) {
          trap(0x1800);
        }
        puVar10[-2] = (short)(((int)psVar6[1] - (int)*(short *)(pcVar7 + 2)) / iVar8);
        if (iVar8 == 0) {
          trap(0x1c00);
        }
        if ((iVar8 == -1) && ((int)psVar6[2] - (int)*(short *)(pcVar7 + 4) == -0x80000000)) {
          trap(0x1800);
        }
        puVar10[-1] = (short)(((int)psVar6[2] - (int)*(short *)(pcVar7 + 4)) / iVar8);
        if (iVar8 == 0) {
          trap(0x1c00);
        }
        if ((iVar8 == -1) && ((int)*psVar6 - (int)*(short *)pcVar7 == -0x80000000)) {
          trap(0x1800);
        }
        *puVar10 = (short)(((int)*psVar6 - (int)*(short *)pcVar7) / iVar8);
        psVar9[-9] = *(short *)(pcVar7 + -0x12);
        psVar9[-8] = *(short *)(pcVar7 + -0x10);
        psVar9[-7] = *(short *)(pcVar7 + -0xe);
        psVar9[-5] = *(short *)(pcVar7 + -10);
        psVar9[-4] = *(short *)(pcVar7 + -8);
        psVar9[-6] = *(short *)(pcVar7 + -0xc);
        psVar9[-3] = *(short *)(pcVar7 + -6);
        iVar4 = iVar4 + 1;
        psVar9[-2] = *(short *)(pcVar7 + -4);
        in_t5 = in_t5 + 0xc;
        psVar9[-1] = *(short *)(pcVar7 + -2);
        psVar6 = psVar6 + 0x16;
        psVar9[1] = *(short *)(pcVar7 + 2);
        puVar10 = puVar10 + 0xc;
        psVar9[2] = *(short *)(pcVar7 + 4);
        sVar2 = *(short *)pcVar7;
        pcVar7 = pcVar7 + 0x2c;
        *psVar9 = sVar2;
        psVar9 = psVar9 + 0x16;
      } while (iVar4 < (int)(uint)uVar3);
    }
    return;
  }
  if (unaff_s4 == 0) {
    iVar4 = (uint)(*(byte *)(unaff_s3 + 0x60) >> 4) * 4 + *(short *)(unaff_s8 + 8) * 4 + unaff_s6;
    goto LAB_8012f02c;
  }
LAB_8012f01c:
  param_3 = (short *)(iVar4 + 0x20);
  psVar6 = (short *)(in_t4 + 0x20);
  in_t0 = in_t2 + 8;
  goto LAB_8012f028;
}

