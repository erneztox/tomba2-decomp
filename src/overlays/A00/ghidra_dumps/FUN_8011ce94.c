// FUN_8011ce94

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011ce94(short *param_1,int param_2,short *param_3)

{
  short sVar1;
  ushort uVar2;
  int in_v0;
  int in_v1;
  int extraout_v1;
  int extraout_v1_00;
  int iVar3;
  int *piVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  undefined2 *in_t0;
  undefined2 *puVar8;
  int in_t1;
  undefined2 *in_t2;
  int in_t3;
  int in_t4;
  undefined2 *in_t5;
  int in_t6;
  int in_t7;
  int unaff_s0;
  short *unaff_s1;
  int unaff_s3;
  int unaff_s4;
  int iVar9;
  int unaff_s6;
  int unaff_s7;
  int in_t8;
  int in_t9;
  int unaff_s8;
  
  if (in_v0 == 0) {
    if (unaff_s0 == 2) {
      func_0x8007778c();
      if ((1 < *(byte *)((int)unaff_s1 + 5)) && (*(byte *)((int)unaff_s1 + 5) < 4)) {
        FUN_801261fc();
      }
      if (*(char *)((int)unaff_s1 + 1) == '\0') {
        return;
      }
      param_1 = unaff_s1;
      func_0x800518fc();
      in_v1 = extraout_v1_00;
    }
    else if (unaff_s0 == 3) {
      func_0x8007a624();
      return;
    }
  }
  else if (unaff_s0 == 0) {
    param_1 = unaff_s1;
    FUN_801253e8();
    in_v1 = extraout_v1;
  }
  iVar9 = unaff_s4 + 1;
  *(int *)(unaff_s0 + 0xc0) = in_v1;
  *(short *)(in_v1 + 6) = *unaff_s1;
  **(short **)(unaff_s0 + 0xc0) = unaff_s1[1];
  *(short *)(*(int *)(unaff_s0 + 0xc0) + 2) = unaff_s1[2];
  iVar3 = *(int *)(unaff_s0 + 0xc0);
  *(short *)(iVar3 + 4) = unaff_s1[3];
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 8) = 0;
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 10) = 0;
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0xc) = 0;
  *(undefined1 *)(*(int *)(unaff_s0 + 0xc0) + 0x3e) = 0;
  *(undefined1 *)(*(int *)(unaff_s0 + 0xc0) + 0x3f) = 0;
  psVar6 = (short *)&DAT_80150000;
  if (iVar9 == 1) {
    psVar6 = (short *)&DAT_8014a27e;
    iVar3 = ((*(ushort *)(unaff_s3 + 0x60) & 0xf00) >> 6) + _DAT_8014a286 * 4 + unaff_s6;
    goto LAB_8012f02c;
  }
  if (1 < iVar9) {
    if (iVar9 != 2) {
      if (iVar9 != unaff_s7) goto LAB_8012f01c;
      *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 10) = 0x800;
    }
    *(char *)(*(int *)(unaff_s0 + 0xc0) + 0x3f) = (char)unaff_s7;
    piVar4 = (int *)((*(ushort *)(unaff_s3 + 0x60) & 4) + unaff_s1[4] * 4 + unaff_s6);
    iVar3 = *piVar4;
    while( true ) {
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && (iVar3 - (int)piVar4 == -0x80000000)) {
        trap(0x1800);
      }
      *in_t2 = (short)((iVar3 - (int)piVar4) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)param_3[-7] - (int)param_1[-7] == -0x80000000)) {
        trap(0x1800);
      }
      in_t0[-7] = (short)(((int)param_3[-7] - (int)param_1[-7]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)param_3[-6] - (int)param_1[-6] == -0x80000000)) {
        trap(0x1800);
      }
      in_t0[-6] = (short)(((int)param_3[-6] - (int)param_1[-6]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)param_3[-4] - (int)param_1[-4] == -0x80000000)) {
        trap(0x1800);
      }
      in_t0[-5] = (short)(((int)param_3[-4] - (int)param_1[-4]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)param_3[-3] - (int)param_1[-3] == -0x80000000)) {
        trap(0x1800);
      }
      in_t0[-4] = (short)(((int)param_3[-3] - (int)param_1[-3]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)param_3[-5] - (int)param_1[-5] == -0x80000000)) {
        trap(0x1800);
      }
      in_t0[-3] = (short)(((int)param_3[-5] - (int)param_1[-5]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)param_3[-2] - (int)param_1[-2] == -0x80000000)) {
        trap(0x1800);
      }
      in_t0[-2] = (short)(((int)param_3[-2] - (int)param_1[-2]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)param_3[-1] - (int)param_1[-1] == -0x80000000)) {
        trap(0x1800);
      }
      in_t0[-1] = (short)(((int)param_3[-1] - (int)param_1[-1]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)*param_3 - (int)*param_1 == -0x80000000)) {
        trap(0x1800);
      }
      *in_t0 = (short)(((int)*param_3 - (int)*param_1) / param_2);
      psVar6[-8] = param_1[-8];
      psVar6[-7] = param_1[-7];
      psVar6[-6] = param_1[-6];
      psVar6[-4] = param_1[-4];
      in_t1 = in_t1 + 1;
      psVar6[-3] = param_1[-3];
      in_t2 = in_t2 + 9;
      psVar6[-5] = param_1[-5];
      param_3 = param_3 + 0x12;
      psVar6[-2] = param_1[-2];
      in_t0 = in_t0 + 9;
      psVar6[-1] = param_1[-1];
      sVar1 = *param_1;
      param_1 = param_1 + 0x12;
      *psVar6 = sVar1;
      psVar6 = psVar6 + 0x12;
      if (in_t3 <= in_t1) break;
LAB_8012f028:
      iVar3 = (int)param_3[-8];
LAB_8012f02c:
      piVar4 = (int *)(int)param_1[-8];
    }
    uVar2 = *(ushort *)(in_t6 + 2);
    iVar3 = 0;
    if (uVar2 != 0) {
      iVar9 = (int)(short)unaff_s0;
      psVar7 = (short *)(in_t8 + 0x26);
      psVar5 = (short *)(in_t7 + 0x26);
      psVar6 = (short *)(in_t9 + 0x26);
      puVar8 = in_t5 + 0xb;
      do {
        if (iVar9 == 0) {
          trap(0x1c00);
        }
        if ((iVar9 == -1) && ((int)psVar5[-9] - (int)psVar6[-9] == -0x80000000)) {
          trap(0x1800);
        }
        *in_t5 = (short)(((int)psVar5[-9] - (int)psVar6[-9]) / iVar9);
        if (iVar9 == 0) {
          trap(0x1c00);
        }
        if ((iVar9 == -1) && ((int)psVar5[-8] - (int)psVar6[-8] == -0x80000000)) {
          trap(0x1800);
        }
        puVar8[-10] = (short)(((int)psVar5[-8] - (int)psVar6[-8]) / iVar9);
        if (iVar9 == 0) {
          trap(0x1c00);
        }
        if ((iVar9 == -1) && ((int)psVar5[-7] - (int)psVar6[-7] == -0x80000000)) {
          trap(0x1800);
        }
        puVar8[-9] = (short)(((int)psVar5[-7] - (int)psVar6[-7]) / iVar9);
        if (iVar9 == 0) {
          trap(0x1c00);
        }
        if ((iVar9 == -1) && ((int)psVar5[-5] - (int)psVar6[-5] == -0x80000000)) {
          trap(0x1800);
        }
        puVar8[-8] = (short)(((int)psVar5[-5] - (int)psVar6[-5]) / iVar9);
        if (iVar9 == 0) {
          trap(0x1c00);
        }
        if ((iVar9 == -1) && ((int)psVar5[-4] - (int)psVar6[-4] == -0x80000000)) {
          trap(0x1800);
        }
        puVar8[-7] = (short)(((int)psVar5[-4] - (int)psVar6[-4]) / iVar9);
        if (iVar9 == 0) {
          trap(0x1c00);
        }
        if ((iVar9 == -1) && ((int)psVar5[-6] - (int)psVar6[-6] == -0x80000000)) {
          trap(0x1800);
        }
        puVar8[-6] = (short)(((int)psVar5[-6] - (int)psVar6[-6]) / iVar9);
        if (iVar9 == 0) {
          trap(0x1c00);
        }
        if ((iVar9 == -1) && ((int)psVar5[-3] - (int)psVar6[-3] == -0x80000000)) {
          trap(0x1800);
        }
        puVar8[-5] = (short)(((int)psVar5[-3] - (int)psVar6[-3]) / iVar9);
        if (iVar9 == 0) {
          trap(0x1c00);
        }
        if ((iVar9 == -1) && ((int)psVar5[-2] - (int)psVar6[-2] == -0x80000000)) {
          trap(0x1800);
        }
        puVar8[-4] = (short)(((int)psVar5[-2] - (int)psVar6[-2]) / iVar9);
        if (iVar9 == 0) {
          trap(0x1c00);
        }
        if ((iVar9 == -1) && ((int)psVar5[-1] - (int)psVar6[-1] == -0x80000000)) {
          trap(0x1800);
        }
        puVar8[-3] = (short)(((int)psVar5[-1] - (int)psVar6[-1]) / iVar9);
        if (iVar9 == 0) {
          trap(0x1c00);
        }
        if ((iVar9 == -1) && ((int)psVar5[1] - (int)psVar6[1] == -0x80000000)) {
          trap(0x1800);
        }
        puVar8[-2] = (short)(((int)psVar5[1] - (int)psVar6[1]) / iVar9);
        if (iVar9 == 0) {
          trap(0x1c00);
        }
        if ((iVar9 == -1) && ((int)psVar5[2] - (int)psVar6[2] == -0x80000000)) {
          trap(0x1800);
        }
        puVar8[-1] = (short)(((int)psVar5[2] - (int)psVar6[2]) / iVar9);
        if (iVar9 == 0) {
          trap(0x1c00);
        }
        if ((iVar9 == -1) && ((int)*psVar5 - (int)*psVar6 == -0x80000000)) {
          trap(0x1800);
        }
        *puVar8 = (short)(((int)*psVar5 - (int)*psVar6) / iVar9);
        psVar7[-9] = psVar6[-9];
        psVar7[-8] = psVar6[-8];
        psVar7[-7] = psVar6[-7];
        psVar7[-5] = psVar6[-5];
        psVar7[-4] = psVar6[-4];
        psVar7[-6] = psVar6[-6];
        psVar7[-3] = psVar6[-3];
        iVar3 = iVar3 + 1;
        psVar7[-2] = psVar6[-2];
        in_t5 = in_t5 + 0xc;
        psVar7[-1] = psVar6[-1];
        psVar5 = psVar5 + 0x16;
        psVar7[1] = psVar6[1];
        puVar8 = puVar8 + 0xc;
        psVar7[2] = psVar6[2];
        sVar1 = *psVar6;
        psVar6 = psVar6 + 0x16;
        *psVar7 = sVar1;
        psVar7 = psVar7 + 0x16;
      } while (iVar3 < (int)(uint)uVar2);
    }
    return;
  }
  if (unaff_s4 == -1) {
    iVar3 = (uint)(*(byte *)(unaff_s3 + 0x60) >> 4) * 4 + *(short *)(unaff_s8 + 8) * 4 + unaff_s6;
    goto LAB_8012f02c;
  }
LAB_8012f01c:
  param_3 = (short *)(iVar3 + 0x20);
  param_1 = (short *)(in_t4 + 0x20);
  in_t0 = in_t2 + 8;
  goto LAB_8012f028;
}

