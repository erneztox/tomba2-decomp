// FUN_80126138

void FUN_80126138(short *param_1,int param_2,short *param_3,short *param_4)

{
  ushort uVar1;
  short sVar2;
  undefined2 in_v0;
  int iVar3;
  undefined2 *in_v1;
  int iVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  undefined2 *in_t0;
  undefined2 *puVar8;
  int in_t1;
  undefined2 *in_t2;
  int in_t3;
  undefined2 *in_t5;
  int in_t6;
  int in_t7;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int in_t8;
  int in_t9;
  int in_lo;
  
  *in_v1 = in_v0;
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 2) = *(undefined2 *)(unaff_s1 + 4);
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 4) = *(undefined2 *)(unaff_s1 + 6);
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 8) = 0;
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 10) = 0;
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0xc) = 0;
  *(undefined1 *)(*(int *)(unaff_s0 + 0xc0) + 0x3e) = 0;
  *(undefined1 *)(*(int *)(unaff_s0 + 0xc0) + 0x3f) = 0;
  psVar5 = param_1;
  psVar6 = param_3;
  puVar8 = in_t0;
  if (unaff_s2 == 1) {
    iVar4 = *(int *)(unaff_s3 + 0xc4);
    iVar3 = unaff_s5 +
            *(int *)(((*(ushort *)(unaff_s3 + 0x60) & 0xf00) >> 6) +
                    *(short *)(unaff_s4 + 0x12) * 4 + unaff_s6);
    goto LAB_8012f210;
  }
  if (unaff_s2 < 2) {
    if (unaff_s2 == 0) {
      iVar4 = *(int *)(unaff_s3 + 0xc0);
      iVar3 = unaff_s5 +
              *(int *)((uint)(*(byte *)(unaff_s3 + 0x60) >> 4) * 4 +
                      *(short *)(unaff_s4 + 8) * 4 + unaff_s6);
      goto LAB_8012f210;
    }
  }
  else {
    param_1 = (short *)(unaff_s3 + 8);
    if (unaff_s2 == 2) {
      *(undefined1 *)(*(int *)(unaff_s3 + 200) + 0x3f) = 3;
      iVar4 = *(int *)(unaff_s3 + 200);
      iVar3 = unaff_s5 +
              *(int *)((*(ushort *)(unaff_s3 + 0x60) & 4) + *(short *)(unaff_s7 + 8) * 4 + unaff_s6)
      ;
      psVar5 = param_1;
      goto LAB_8012f210;
    }
  }
  do {
    trap(0x1800);
    do {
      in_t0[-2] = (short)in_lo;
      iVar3 = (int)param_3[-1];
      iVar4 = (int)param_1[-1];
      psVar5 = param_1;
      psVar6 = param_3;
      puVar8 = in_t0;
LAB_8012f210:
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && (iVar3 - iVar4 == -0x80000000)) {
        trap(0x1800);
      }
      puVar8[-1] = (short)((iVar3 - iVar4) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)*psVar6 - (int)*psVar5 == -0x80000000)) {
        trap(0x1800);
      }
      *puVar8 = (short)(((int)*psVar6 - (int)*psVar5) / param_2);
      param_4[-8] = psVar5[-8];
      param_4[-7] = psVar5[-7];
      param_4[-6] = psVar5[-6];
      param_4[-4] = psVar5[-4];
      in_t1 = in_t1 + 1;
      param_4[-3] = psVar5[-3];
      in_t2 = in_t2 + 9;
      param_4[-5] = psVar5[-5];
      param_3 = psVar6 + 0x12;
      param_4[-2] = psVar5[-2];
      in_t0 = puVar8 + 9;
      param_4[-1] = psVar5[-1];
      param_1 = psVar5 + 0x12;
      *param_4 = *psVar5;
      param_4 = param_4 + 0x12;
      if (in_t3 <= in_t1) {
        uVar1 = *(ushort *)(in_t6 + 2);
        iVar3 = 0;
        if (uVar1 != 0) {
          iVar4 = (int)(short)unaff_s0;
          psVar7 = (short *)(in_t8 + 0x26);
          psVar6 = (short *)(in_t7 + 0x26);
          psVar5 = (short *)(in_t9 + 0x26);
          puVar8 = in_t5 + 0xb;
          do {
            if (iVar4 == 0) {
              trap(0x1c00);
            }
            if ((iVar4 == -1) && ((int)psVar6[-9] - (int)psVar5[-9] == -0x80000000)) {
              trap(0x1800);
            }
            *in_t5 = (short)(((int)psVar6[-9] - (int)psVar5[-9]) / iVar4);
            if (iVar4 == 0) {
              trap(0x1c00);
            }
            if ((iVar4 == -1) && ((int)psVar6[-8] - (int)psVar5[-8] == -0x80000000)) {
              trap(0x1800);
            }
            puVar8[-10] = (short)(((int)psVar6[-8] - (int)psVar5[-8]) / iVar4);
            if (iVar4 == 0) {
              trap(0x1c00);
            }
            if ((iVar4 == -1) && ((int)psVar6[-7] - (int)psVar5[-7] == -0x80000000)) {
              trap(0x1800);
            }
            puVar8[-9] = (short)(((int)psVar6[-7] - (int)psVar5[-7]) / iVar4);
            if (iVar4 == 0) {
              trap(0x1c00);
            }
            if ((iVar4 == -1) && ((int)psVar6[-5] - (int)psVar5[-5] == -0x80000000)) {
              trap(0x1800);
            }
            puVar8[-8] = (short)(((int)psVar6[-5] - (int)psVar5[-5]) / iVar4);
            if (iVar4 == 0) {
              trap(0x1c00);
            }
            if ((iVar4 == -1) && ((int)psVar6[-4] - (int)psVar5[-4] == -0x80000000)) {
              trap(0x1800);
            }
            puVar8[-7] = (short)(((int)psVar6[-4] - (int)psVar5[-4]) / iVar4);
            if (iVar4 == 0) {
              trap(0x1c00);
            }
            if ((iVar4 == -1) && ((int)psVar6[-6] - (int)psVar5[-6] == -0x80000000)) {
              trap(0x1800);
            }
            puVar8[-6] = (short)(((int)psVar6[-6] - (int)psVar5[-6]) / iVar4);
            if (iVar4 == 0) {
              trap(0x1c00);
            }
            if ((iVar4 == -1) && ((int)psVar6[-3] - (int)psVar5[-3] == -0x80000000)) {
              trap(0x1800);
            }
            puVar8[-5] = (short)(((int)psVar6[-3] - (int)psVar5[-3]) / iVar4);
            if (iVar4 == 0) {
              trap(0x1c00);
            }
            if ((iVar4 == -1) && ((int)psVar6[-2] - (int)psVar5[-2] == -0x80000000)) {
              trap(0x1800);
            }
            puVar8[-4] = (short)(((int)psVar6[-2] - (int)psVar5[-2]) / iVar4);
            if (iVar4 == 0) {
              trap(0x1c00);
            }
            if ((iVar4 == -1) && ((int)psVar6[-1] - (int)psVar5[-1] == -0x80000000)) {
              trap(0x1800);
            }
            puVar8[-3] = (short)(((int)psVar6[-1] - (int)psVar5[-1]) / iVar4);
            if (iVar4 == 0) {
              trap(0x1c00);
            }
            if ((iVar4 == -1) && ((int)psVar6[1] - (int)psVar5[1] == -0x80000000)) {
              trap(0x1800);
            }
            puVar8[-2] = (short)(((int)psVar6[1] - (int)psVar5[1]) / iVar4);
            if (iVar4 == 0) {
              trap(0x1c00);
            }
            if ((iVar4 == -1) && ((int)psVar6[2] - (int)psVar5[2] == -0x80000000)) {
              trap(0x1800);
            }
            puVar8[-1] = (short)(((int)psVar6[2] - (int)psVar5[2]) / iVar4);
            if (iVar4 == 0) {
              trap(0x1c00);
            }
            if ((iVar4 == -1) && ((int)*psVar6 - (int)*psVar5 == -0x80000000)) {
              trap(0x1800);
            }
            *puVar8 = (short)(((int)*psVar6 - (int)*psVar5) / iVar4);
            psVar7[-9] = psVar5[-9];
            psVar7[-8] = psVar5[-8];
            psVar7[-7] = psVar5[-7];
            psVar7[-5] = psVar5[-5];
            psVar7[-4] = psVar5[-4];
            psVar7[-6] = psVar5[-6];
            psVar7[-3] = psVar5[-3];
            iVar3 = iVar3 + 1;
            psVar7[-2] = psVar5[-2];
            in_t5 = in_t5 + 0xc;
            psVar7[-1] = psVar5[-1];
            psVar6 = psVar6 + 0x16;
            psVar7[1] = psVar5[1];
            puVar8 = puVar8 + 0xc;
            psVar7[2] = psVar5[2];
            sVar2 = *psVar5;
            psVar5 = psVar5 + 0x16;
            *psVar7 = sVar2;
            psVar7 = psVar7 + 0x16;
          } while (iVar3 < (int)(uint)uVar1);
        }
        return;
      }
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)psVar6[10] - (int)psVar5[10] == -0x80000000)) {
        trap(0x1800);
      }
      *in_t2 = (short)(((int)psVar6[10] - (int)psVar5[10]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)psVar6[0xb] - (int)psVar5[0xb] == -0x80000000)) {
        trap(0x1800);
      }
      puVar8[2] = (short)(((int)psVar6[0xb] - (int)psVar5[0xb]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)psVar6[0xc] - (int)psVar5[0xc] == -0x80000000)) {
        trap(0x1800);
      }
      puVar8[3] = (short)(((int)psVar6[0xc] - (int)psVar5[0xc]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)psVar6[0xe] - (int)psVar5[0xe] == -0x80000000)) {
        trap(0x1800);
      }
      puVar8[4] = (short)(((int)psVar6[0xe] - (int)psVar5[0xe]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)psVar6[0xf] - (int)psVar5[0xf] == -0x80000000)) {
        trap(0x1800);
      }
      puVar8[5] = (short)(((int)psVar6[0xf] - (int)psVar5[0xf]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)psVar6[0xd] - (int)psVar5[0xd] == -0x80000000)) {
        trap(0x1800);
      }
      puVar8[6] = (short)(((int)psVar6[0xd] - (int)psVar5[0xd]) / param_2);
      in_lo = ((int)psVar6[0x10] - (int)psVar5[0x10]) / param_2;
      if (param_2 == 0) {
        trap(0x1c00);
      }
    } while ((param_2 != -1) || ((int)psVar6[0x10] - (int)psVar5[0x10] != -0x80000000));
  } while( true );
}

