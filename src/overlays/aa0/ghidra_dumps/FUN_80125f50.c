// FUN_80125f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80125f50(short *param_1,int param_2,short *param_3)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  undefined2 *in_t0;
  undefined2 *puVar9;
  int in_t1;
  undefined2 *in_t2;
  int in_t3;
  int in_t4;
  undefined2 *in_t5;
  int in_t6;
  int in_t7;
  int unaff_s0;
  int unaff_s1;
  int unaff_s3;
  int unaff_s4;
  int unaff_s6;
  int unaff_s7;
  int in_t8;
  int in_t9;
  int unaff_s8;
  
  **(undefined2 **)(unaff_s0 + 0xc0) = *(undefined2 *)(unaff_s1 + 2);
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 2) = *(undefined2 *)(unaff_s1 + 4);
  iVar3 = *(int *)(unaff_s0 + 0xc0);
  *(undefined2 *)(iVar3 + 4) = *(undefined2 *)(unaff_s1 + 6);
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 8) = 0;
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 10) = 0;
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0xc) = 0;
  *(undefined1 *)(*(int *)(unaff_s0 + 0xc0) + 0x3e) = 0;
  *(undefined1 *)(*(int *)(unaff_s0 + 0xc0) + 0x3f) = 0;
  psVar7 = (short *)&DAT_80150000;
  if (unaff_s4 == 1) {
    psVar7 = (short *)&DAT_8014a27e;
    iVar3 = ((*(ushort *)(unaff_s3 + 0x60) & 0xf00) >> 6) + _DAT_8014a286 * 4 + unaff_s6;
    goto LAB_8012f02c;
  }
  if (1 < unaff_s4) {
    if (unaff_s4 != 2) {
      if (unaff_s4 != unaff_s7) goto LAB_8012f01c;
      *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 10) = 0x800;
    }
    *(char *)(*(int *)(unaff_s0 + 0xc0) + 0x3f) = (char)unaff_s7;
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
      psVar7[-8] = param_1[-8];
      psVar7[-7] = param_1[-7];
      psVar7[-6] = param_1[-6];
      psVar7[-4] = param_1[-4];
      in_t1 = in_t1 + 1;
      psVar7[-3] = param_1[-3];
      in_t2 = in_t2 + 9;
      psVar7[-5] = param_1[-5];
      param_3 = param_3 + 0x12;
      psVar7[-2] = param_1[-2];
      in_t0 = in_t0 + 9;
      psVar7[-1] = param_1[-1];
      sVar1 = *param_1;
      param_1 = param_1 + 0x12;
      *psVar7 = sVar1;
      psVar7 = psVar7 + 0x12;
      if (in_t3 <= in_t1) break;
LAB_8012f028:
      iVar3 = (int)param_3[-8];
LAB_8012f02c:
      piVar4 = (int *)(int)param_1[-8];
    }
    uVar2 = *(ushort *)(in_t6 + 2);
    iVar3 = 0;
    if (uVar2 != 0) {
      iVar5 = (int)(short)unaff_s0;
      psVar8 = (short *)(in_t8 + 0x26);
      psVar6 = (short *)(in_t7 + 0x26);
      psVar7 = (short *)(in_t9 + 0x26);
      puVar9 = in_t5 + 0xb;
      do {
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[-9] - (int)psVar7[-9] == -0x80000000)) {
          trap(0x1800);
        }
        *in_t5 = (short)(((int)psVar6[-9] - (int)psVar7[-9]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[-8] - (int)psVar7[-8] == -0x80000000)) {
          trap(0x1800);
        }
        puVar9[-10] = (short)(((int)psVar6[-8] - (int)psVar7[-8]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[-7] - (int)psVar7[-7] == -0x80000000)) {
          trap(0x1800);
        }
        puVar9[-9] = (short)(((int)psVar6[-7] - (int)psVar7[-7]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[-5] - (int)psVar7[-5] == -0x80000000)) {
          trap(0x1800);
        }
        puVar9[-8] = (short)(((int)psVar6[-5] - (int)psVar7[-5]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[-4] - (int)psVar7[-4] == -0x80000000)) {
          trap(0x1800);
        }
        puVar9[-7] = (short)(((int)psVar6[-4] - (int)psVar7[-4]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[-6] - (int)psVar7[-6] == -0x80000000)) {
          trap(0x1800);
        }
        puVar9[-6] = (short)(((int)psVar6[-6] - (int)psVar7[-6]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[-3] - (int)psVar7[-3] == -0x80000000)) {
          trap(0x1800);
        }
        puVar9[-5] = (short)(((int)psVar6[-3] - (int)psVar7[-3]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[-2] - (int)psVar7[-2] == -0x80000000)) {
          trap(0x1800);
        }
        puVar9[-4] = (short)(((int)psVar6[-2] - (int)psVar7[-2]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[-1] - (int)psVar7[-1] == -0x80000000)) {
          trap(0x1800);
        }
        puVar9[-3] = (short)(((int)psVar6[-1] - (int)psVar7[-1]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[1] - (int)psVar7[1] == -0x80000000)) {
          trap(0x1800);
        }
        puVar9[-2] = (short)(((int)psVar6[1] - (int)psVar7[1]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[2] - (int)psVar7[2] == -0x80000000)) {
          trap(0x1800);
        }
        puVar9[-1] = (short)(((int)psVar6[2] - (int)psVar7[2]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)*psVar6 - (int)*psVar7 == -0x80000000)) {
          trap(0x1800);
        }
        *puVar9 = (short)(((int)*psVar6 - (int)*psVar7) / iVar5);
        psVar8[-9] = psVar7[-9];
        psVar8[-8] = psVar7[-8];
        psVar8[-7] = psVar7[-7];
        psVar8[-5] = psVar7[-5];
        psVar8[-4] = psVar7[-4];
        psVar8[-6] = psVar7[-6];
        psVar8[-3] = psVar7[-3];
        iVar3 = iVar3 + 1;
        psVar8[-2] = psVar7[-2];
        in_t5 = in_t5 + 0xc;
        psVar8[-1] = psVar7[-1];
        psVar6 = psVar6 + 0x16;
        psVar8[1] = psVar7[1];
        puVar9 = puVar9 + 0xc;
        psVar8[2] = psVar7[2];
        sVar1 = *psVar7;
        psVar7 = psVar7 + 0x16;
        *psVar8 = sVar1;
        psVar8 = psVar8 + 0x16;
      } while (iVar3 < (int)(uint)uVar2);
    }
    return;
  }
  if (unaff_s4 == 0) {
    iVar3 = (uint)(*(byte *)(unaff_s3 + 0x60) >> 4) * 4 + *(short *)(unaff_s8 + 8) * 4 + unaff_s6;
    goto LAB_8012f02c;
  }
LAB_8012f01c:
  param_3 = (short *)(iVar3 + 0x20);
  param_1 = (short *)(in_t4 + 0x20);
  in_t0 = in_t2 + 8;
  goto LAB_8012f028;
}

