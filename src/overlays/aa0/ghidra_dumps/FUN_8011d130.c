// FUN_8011d130

void FUN_8011d130(int param_1,undefined4 param_2,undefined4 param_3,short *param_4)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  code *pcVar7;
  int iVar8;
  short *psVar9;
  short *psVar10;
  undefined2 *in_t0;
  undefined2 *puVar11;
  int in_t1;
  undefined2 *in_t2;
  int in_t3;
  undefined2 *in_t5;
  int in_t6;
  int in_t7;
  undefined2 *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int in_t8;
  int in_lo;
  undefined8 uVar12;
  
  pcVar7 = FUN_8011d130;
  psVar9 = (short *)0x0;
  iVar8 = (int)*(short *)(param_1 + 0x56);
  psVar5 = (short *)((uint)*(byte *)(param_1 + 0x46) << 4);
  uVar12 = func_0x80077768();
  iVar3 = (int)((ulonglong)uVar12 >> 0x20);
  if ((int)uVar12 == 0) {
    *(undefined2 *)(param_1 + 0x44) = 0x800;
    *(undefined1 *)(param_1 + 0x5f) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0xe800;
    *(undefined1 *)(param_1 + 0xbf) = 1;
    *(undefined1 *)(param_1 + 0x2b) = 0;
    return;
  }
  *(undefined2 *)(param_1 + 0x44) = 0xf800;
  *(undefined1 *)(param_1 + 0x5f) = 1;
  if (iVar3 == 0) {
    *(undefined1 *)(unaff_s3 + 4) = 3;
    FUN_8012f464();
    return;
  }
  *(int *)(param_1 + 0xc0) = iVar3;
  *(undefined2 *)(iVar3 + 6) = *unaff_s1;
  **(undefined2 **)(param_1 + 0xc0) = unaff_s1[1];
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = unaff_s1[2];
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 4) = unaff_s1[3];
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 8) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 10) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3e) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0;
  psVar6 = psVar5;
  psVar10 = psVar9;
  puVar11 = in_t0;
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
    psVar5 = (short *)(unaff_s3 + 8);
    if (unaff_s2 == 2) {
      *(undefined1 *)(*(int *)(unaff_s3 + 200) + 0x3f) = 3;
      iVar4 = *(int *)(unaff_s3 + 200);
      iVar3 = unaff_s5 +
              *(int *)((*(ushort *)(unaff_s3 + 0x60) & 4) + *(short *)(unaff_s7 + 8) * 4 + unaff_s6)
      ;
      psVar6 = psVar5;
      goto LAB_8012f210;
    }
  }
  do {
    trap(0x1800);
    do {
      in_t0[-2] = (short)in_lo;
      iVar3 = (int)psVar9[-1];
      iVar4 = (int)psVar5[-1];
      psVar6 = psVar5;
      psVar10 = psVar9;
      puVar11 = in_t0;
LAB_8012f210:
      if (iVar8 == 0) {
        trap(0x1c00);
      }
      if ((iVar8 == -1) && (iVar3 - iVar4 == -0x80000000)) {
        trap(0x1800);
      }
      puVar11[-1] = (short)((iVar3 - iVar4) / iVar8);
      if (iVar8 == 0) {
        trap(0x1c00);
      }
      if ((iVar8 == -1) && ((int)*psVar10 - (int)*psVar6 == -0x80000000)) {
        trap(0x1800);
      }
      *puVar11 = (short)(((int)*psVar10 - (int)*psVar6) / iVar8);
      param_4[-8] = psVar6[-8];
      param_4[-7] = psVar6[-7];
      param_4[-6] = psVar6[-6];
      param_4[-4] = psVar6[-4];
      in_t1 = in_t1 + 1;
      param_4[-3] = psVar6[-3];
      in_t2 = in_t2 + 9;
      param_4[-5] = psVar6[-5];
      psVar9 = psVar10 + 0x12;
      param_4[-2] = psVar6[-2];
      in_t0 = puVar11 + 9;
      param_4[-1] = psVar6[-1];
      psVar5 = psVar6 + 0x12;
      *param_4 = *psVar6;
      param_4 = param_4 + 0x12;
      if (in_t3 <= in_t1) {
        uVar1 = *(ushort *)(in_t6 + 2);
        iVar3 = 0;
        if (uVar1 != 0) {
          iVar8 = (int)(short)param_1;
          psVar9 = (short *)(in_t8 + 0x26);
          psVar5 = (short *)(in_t7 + 0x26);
          pcVar7 = pcVar7 + 0x26;
          puVar11 = in_t5 + 0xb;
          do {
            if (iVar8 == 0) {
              trap(0x1c00);
            }
            if ((iVar8 == -1) && ((int)psVar5[-9] - (int)*(short *)(pcVar7 + -0x12) == -0x80000000))
            {
              trap(0x1800);
            }
            *in_t5 = (short)(((int)psVar5[-9] - (int)*(short *)(pcVar7 + -0x12)) / iVar8);
            if (iVar8 == 0) {
              trap(0x1c00);
            }
            if ((iVar8 == -1) && ((int)psVar5[-8] - (int)*(short *)(pcVar7 + -0x10) == -0x80000000))
            {
              trap(0x1800);
            }
            puVar11[-10] = (short)(((int)psVar5[-8] - (int)*(short *)(pcVar7 + -0x10)) / iVar8);
            if (iVar8 == 0) {
              trap(0x1c00);
            }
            if ((iVar8 == -1) && ((int)psVar5[-7] - (int)*(short *)(pcVar7 + -0xe) == -0x80000000))
            {
              trap(0x1800);
            }
            puVar11[-9] = (short)(((int)psVar5[-7] - (int)*(short *)(pcVar7 + -0xe)) / iVar8);
            if (iVar8 == 0) {
              trap(0x1c00);
            }
            if ((iVar8 == -1) && ((int)psVar5[-5] - (int)*(short *)(pcVar7 + -10) == -0x80000000)) {
              trap(0x1800);
            }
            puVar11[-8] = (short)(((int)psVar5[-5] - (int)*(short *)(pcVar7 + -10)) / iVar8);
            if (iVar8 == 0) {
              trap(0x1c00);
            }
            if ((iVar8 == -1) && ((int)psVar5[-4] - (int)*(short *)(pcVar7 + -8) == -0x80000000)) {
              trap(0x1800);
            }
            puVar11[-7] = (short)(((int)psVar5[-4] - (int)*(short *)(pcVar7 + -8)) / iVar8);
            if (iVar8 == 0) {
              trap(0x1c00);
            }
            if ((iVar8 == -1) && ((int)psVar5[-6] - (int)*(short *)(pcVar7 + -0xc) == -0x80000000))
            {
              trap(0x1800);
            }
            puVar11[-6] = (short)(((int)psVar5[-6] - (int)*(short *)(pcVar7 + -0xc)) / iVar8);
            if (iVar8 == 0) {
              trap(0x1c00);
            }
            if ((iVar8 == -1) && ((int)psVar5[-3] - (int)*(short *)(pcVar7 + -6) == -0x80000000)) {
              trap(0x1800);
            }
            puVar11[-5] = (short)(((int)psVar5[-3] - (int)*(short *)(pcVar7 + -6)) / iVar8);
            if (iVar8 == 0) {
              trap(0x1c00);
            }
            if ((iVar8 == -1) && ((int)psVar5[-2] - (int)*(short *)(pcVar7 + -4) == -0x80000000)) {
              trap(0x1800);
            }
            puVar11[-4] = (short)(((int)psVar5[-2] - (int)*(short *)(pcVar7 + -4)) / iVar8);
            if (iVar8 == 0) {
              trap(0x1c00);
            }
            if ((iVar8 == -1) && ((int)psVar5[-1] - (int)*(short *)(pcVar7 + -2) == -0x80000000)) {
              trap(0x1800);
            }
            puVar11[-3] = (short)(((int)psVar5[-1] - (int)*(short *)(pcVar7 + -2)) / iVar8);
            if (iVar8 == 0) {
              trap(0x1c00);
            }
            if ((iVar8 == -1) && ((int)psVar5[1] - (int)*(short *)(pcVar7 + 2) == -0x80000000)) {
              trap(0x1800);
            }
            puVar11[-2] = (short)(((int)psVar5[1] - (int)*(short *)(pcVar7 + 2)) / iVar8);
            if (iVar8 == 0) {
              trap(0x1c00);
            }
            if ((iVar8 == -1) && ((int)psVar5[2] - (int)*(short *)(pcVar7 + 4) == -0x80000000)) {
              trap(0x1800);
            }
            puVar11[-1] = (short)(((int)psVar5[2] - (int)*(short *)(pcVar7 + 4)) / iVar8);
            if (iVar8 == 0) {
              trap(0x1c00);
            }
            if ((iVar8 == -1) && ((int)*psVar5 - (int)*(short *)pcVar7 == -0x80000000)) {
              trap(0x1800);
            }
            *puVar11 = (short)(((int)*psVar5 - (int)*(short *)pcVar7) / iVar8);
            psVar9[-9] = *(short *)(pcVar7 + -0x12);
            psVar9[-8] = *(short *)(pcVar7 + -0x10);
            psVar9[-7] = *(short *)(pcVar7 + -0xe);
            psVar9[-5] = *(short *)(pcVar7 + -10);
            psVar9[-4] = *(short *)(pcVar7 + -8);
            psVar9[-6] = *(short *)(pcVar7 + -0xc);
            psVar9[-3] = *(short *)(pcVar7 + -6);
            iVar3 = iVar3 + 1;
            psVar9[-2] = *(short *)(pcVar7 + -4);
            in_t5 = in_t5 + 0xc;
            psVar9[-1] = *(short *)(pcVar7 + -2);
            psVar5 = psVar5 + 0x16;
            psVar9[1] = *(short *)(pcVar7 + 2);
            puVar11 = puVar11 + 0xc;
            psVar9[2] = *(short *)(pcVar7 + 4);
            sVar2 = *(short *)pcVar7;
            pcVar7 = pcVar7 + 0x2c;
            *psVar9 = sVar2;
            psVar9 = psVar9 + 0x16;
          } while (iVar3 < (int)(uint)uVar1);
        }
        return;
      }
      if (iVar8 == 0) {
        trap(0x1c00);
      }
      if ((iVar8 == -1) && ((int)psVar10[10] - (int)psVar6[10] == -0x80000000)) {
        trap(0x1800);
      }
      *in_t2 = (short)(((int)psVar10[10] - (int)psVar6[10]) / iVar8);
      if (iVar8 == 0) {
        trap(0x1c00);
      }
      if ((iVar8 == -1) && ((int)psVar10[0xb] - (int)psVar6[0xb] == -0x80000000)) {
        trap(0x1800);
      }
      puVar11[2] = (short)(((int)psVar10[0xb] - (int)psVar6[0xb]) / iVar8);
      if (iVar8 == 0) {
        trap(0x1c00);
      }
      if ((iVar8 == -1) && ((int)psVar10[0xc] - (int)psVar6[0xc] == -0x80000000)) {
        trap(0x1800);
      }
      puVar11[3] = (short)(((int)psVar10[0xc] - (int)psVar6[0xc]) / iVar8);
      if (iVar8 == 0) {
        trap(0x1c00);
      }
      if ((iVar8 == -1) && ((int)psVar10[0xe] - (int)psVar6[0xe] == -0x80000000)) {
        trap(0x1800);
      }
      puVar11[4] = (short)(((int)psVar10[0xe] - (int)psVar6[0xe]) / iVar8);
      if (iVar8 == 0) {
        trap(0x1c00);
      }
      if ((iVar8 == -1) && ((int)psVar10[0xf] - (int)psVar6[0xf] == -0x80000000)) {
        trap(0x1800);
      }
      puVar11[5] = (short)(((int)psVar10[0xf] - (int)psVar6[0xf]) / iVar8);
      if (iVar8 == 0) {
        trap(0x1c00);
      }
      if ((iVar8 == -1) && ((int)psVar10[0xd] - (int)psVar6[0xd] == -0x80000000)) {
        trap(0x1800);
      }
      puVar11[6] = (short)(((int)psVar10[0xd] - (int)psVar6[0xd]) / iVar8);
      in_lo = ((int)psVar10[0x10] - (int)psVar6[0x10]) / iVar8;
      if (iVar8 == 0) {
        trap(0x1c00);
      }
    } while ((iVar8 != -1) || ((int)psVar10[0x10] - (int)psVar6[0x10] != -0x80000000));
  } while( true );
}

