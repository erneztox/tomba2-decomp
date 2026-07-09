// FUN_80126040

void FUN_80126040(short *param_1,int param_2,short *param_3,short *param_4)

{
  ushort uVar1;
  short sVar2;
  short in_v0;
  int iVar3;
  short in_v1;
  int *piVar4;
  short *psVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  undefined2 *in_t0;
  undefined2 *puVar9;
  int in_t1;
  undefined2 *in_t2;
  int in_t3;
  undefined2 *in_t5;
  int in_t6;
  int in_t7;
  int unaff_s0;
  int unaff_s1;
  int unaff_s3;
  int unaff_s6;
  undefined1 unaff_s7;
  int in_t8;
  
  *(short *)(*(int *)(unaff_s0 + 0xc0) + 10) = in_v0 + in_v1;
  *(undefined1 *)(*(int *)(unaff_s0 + 0xc0) + 0x3f) = unaff_s7;
  piVar4 = (int *)((*(ushort *)(unaff_s3 + 0x60) & 4) + *(short *)(unaff_s1 + 8) * 4 + unaff_s6);
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
    param_4[-8] = param_1[-8];
    param_4[-7] = param_1[-7];
    param_4[-6] = param_1[-6];
    param_4[-4] = param_1[-4];
    in_t1 = in_t1 + 1;
    param_4[-3] = param_1[-3];
    in_t2 = in_t2 + 9;
    param_4[-5] = param_1[-5];
    param_4[-2] = param_1[-2];
    in_t0 = in_t0 + 9;
    param_4[-1] = param_1[-1];
    *param_4 = *param_1;
    param_4 = param_4 + 0x12;
    if (in_t3 <= in_t1) break;
    iVar3 = (int)param_3[10];
    piVar4 = (int *)(int)param_1[10];
    param_1 = param_1 + 0x12;
    param_3 = param_3 + 0x12;
  }
  uVar1 = *(ushort *)(in_t6 + 2);
  iVar3 = 0;
  if (uVar1 != 0) {
    iVar6 = (int)(short)unaff_s0;
    psVar8 = (short *)(in_t8 + 0x26);
    psVar7 = (short *)(in_t7 + 0x26);
    psVar5 = (short *)0x80126066;
    puVar9 = in_t5 + 0xb;
    do {
      if (iVar6 == 0) {
        trap(0x1c00);
      }
      if ((iVar6 == -1) && ((int)psVar7[-9] - (int)psVar5[-9] == -0x80000000)) {
        trap(0x1800);
      }
      *in_t5 = (short)(((int)psVar7[-9] - (int)psVar5[-9]) / iVar6);
      if (iVar6 == 0) {
        trap(0x1c00);
      }
      if ((iVar6 == -1) && ((int)psVar7[-8] - (int)psVar5[-8] == -0x80000000)) {
        trap(0x1800);
      }
      puVar9[-10] = (short)(((int)psVar7[-8] - (int)psVar5[-8]) / iVar6);
      if (iVar6 == 0) {
        trap(0x1c00);
      }
      if ((iVar6 == -1) && ((int)psVar7[-7] - (int)psVar5[-7] == -0x80000000)) {
        trap(0x1800);
      }
      puVar9[-9] = (short)(((int)psVar7[-7] - (int)psVar5[-7]) / iVar6);
      if (iVar6 == 0) {
        trap(0x1c00);
      }
      if ((iVar6 == -1) && ((int)psVar7[-5] - (int)psVar5[-5] == -0x80000000)) {
        trap(0x1800);
      }
      puVar9[-8] = (short)(((int)psVar7[-5] - (int)psVar5[-5]) / iVar6);
      if (iVar6 == 0) {
        trap(0x1c00);
      }
      if ((iVar6 == -1) && ((int)psVar7[-4] - (int)psVar5[-4] == -0x80000000)) {
        trap(0x1800);
      }
      puVar9[-7] = (short)(((int)psVar7[-4] - (int)psVar5[-4]) / iVar6);
      if (iVar6 == 0) {
        trap(0x1c00);
      }
      if ((iVar6 == -1) && ((int)psVar7[-6] - (int)psVar5[-6] == -0x80000000)) {
        trap(0x1800);
      }
      puVar9[-6] = (short)(((int)psVar7[-6] - (int)psVar5[-6]) / iVar6);
      if (iVar6 == 0) {
        trap(0x1c00);
      }
      if ((iVar6 == -1) && ((int)psVar7[-3] - (int)psVar5[-3] == -0x80000000)) {
        trap(0x1800);
      }
      puVar9[-5] = (short)(((int)psVar7[-3] - (int)psVar5[-3]) / iVar6);
      if (iVar6 == 0) {
        trap(0x1c00);
      }
      if ((iVar6 == -1) && ((int)psVar7[-2] - (int)psVar5[-2] == -0x80000000)) {
        trap(0x1800);
      }
      puVar9[-4] = (short)(((int)psVar7[-2] - (int)psVar5[-2]) / iVar6);
      if (iVar6 == 0) {
        trap(0x1c00);
      }
      if ((iVar6 == -1) && ((int)psVar7[-1] - (int)psVar5[-1] == -0x80000000)) {
        trap(0x1800);
      }
      puVar9[-3] = (short)(((int)psVar7[-1] - (int)psVar5[-1]) / iVar6);
      if (iVar6 == 0) {
        trap(0x1c00);
      }
      if ((iVar6 == -1) && ((int)psVar7[1] - (int)psVar5[1] == -0x80000000)) {
        trap(0x1800);
      }
      puVar9[-2] = (short)(((int)psVar7[1] - (int)psVar5[1]) / iVar6);
      if (iVar6 == 0) {
        trap(0x1c00);
      }
      if ((iVar6 == -1) && ((int)psVar7[2] - (int)psVar5[2] == -0x80000000)) {
        trap(0x1800);
      }
      puVar9[-1] = (short)(((int)psVar7[2] - (int)psVar5[2]) / iVar6);
      if (iVar6 == 0) {
        trap(0x1c00);
      }
      if ((iVar6 == -1) && ((int)*psVar7 - (int)*psVar5 == -0x80000000)) {
        trap(0x1800);
      }
      *puVar9 = (short)(((int)*psVar7 - (int)*psVar5) / iVar6);
      psVar8[-9] = psVar5[-9];
      psVar8[-8] = psVar5[-8];
      psVar8[-7] = psVar5[-7];
      psVar8[-5] = psVar5[-5];
      psVar8[-4] = psVar5[-4];
      psVar8[-6] = psVar5[-6];
      psVar8[-3] = psVar5[-3];
      iVar3 = iVar3 + 1;
      psVar8[-2] = psVar5[-2];
      in_t5 = in_t5 + 0xc;
      psVar8[-1] = psVar5[-1];
      psVar7 = psVar7 + 0x16;
      psVar8[1] = psVar5[1];
      puVar9 = puVar9 + 0xc;
      psVar8[2] = psVar5[2];
      sVar2 = *psVar5;
      psVar5 = psVar5 + 0x16;
      *psVar8 = sVar2;
      psVar8 = psVar8 + 0x16;
    } while (iVar3 < (int)(uint)uVar1);
  }
  return;
}

