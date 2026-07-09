// FUN_8011cfb4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_8011cfb4(short *param_1,int param_2,short *param_3)

{
  short sVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  int in_v1;
  int *piVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
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
  int unaff_s3;
  int unaff_s4;
  int unaff_s6;
  int unaff_s7;
  int in_t8;
  int unaff_s8;
  
  if (*(char *)((int)param_1 + 3) != '\0') {
    bVar3 = DAT_800bf9f2 >> 4;
    if ((bVar3 == 0) && (iVar4 = func_0x80072ddc(param_1,2,2,0x13), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x1c) = 0x80125e0c;
      *(undefined1 *)(iVar4 + 3) = *(undefined1 *)((int)param_1 + 3);
    }
    return bVar3;
  }
  uVar11 = DAT_800bf9f2 & 0xf;
  *(undefined2 *)(*(int *)(uVar11 + 0xc0) + 10) = 0;
  *(undefined2 *)(*(int *)(uVar11 + 0xc0) + 0xc) = 0;
  *(undefined1 *)(*(int *)(uVar11 + 0xc0) + 0x3e) = 0;
  *(undefined1 *)(*(int *)(uVar11 + 0xc0) + 0x3f) = 0;
  psVar8 = (short *)&DAT_80150000;
  if (unaff_s4 == 1) {
    psVar8 = (short *)&DAT_8014a27e;
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
      psVar8[-8] = param_1[-8];
      psVar8[-7] = param_1[-7];
      psVar8[-6] = param_1[-6];
      psVar8[-4] = param_1[-4];
      in_t1 = in_t1 + 1;
      psVar8[-3] = param_1[-3];
      in_t2 = in_t2 + 9;
      psVar8[-5] = param_1[-5];
      param_3 = param_3 + 0x12;
      psVar8[-2] = param_1[-2];
      in_t0 = in_t0 + 9;
      psVar8[-1] = param_1[-1];
      sVar1 = *param_1;
      param_1 = param_1 + 0x12;
      *psVar8 = sVar1;
      psVar8 = psVar8 + 0x12;
      if (in_t3 <= in_t1) break;
LAB_8012f028:
      iVar4 = (int)param_3[-8];
LAB_8012f02c:
      piVar5 = (int *)(int)param_1[-8];
    }
    uVar2 = *(ushort *)(in_t6 + 2);
    iVar4 = 0;
    if (uVar2 != 0) {
      iVar6 = (int)(short)uVar11;
      psVar9 = (short *)(in_t8 + 0x26);
      psVar7 = (short *)(in_t7 + 0x26);
      psVar8 = (short *)0x8011cfda;
      puVar10 = in_t5 + 0xb;
      do {
        if (iVar6 == 0) {
          trap(0x1c00);
        }
        if ((iVar6 == -1) && ((int)psVar7[-9] - (int)psVar8[-9] == -0x80000000)) {
          trap(0x1800);
        }
        *in_t5 = (short)(((int)psVar7[-9] - (int)psVar8[-9]) / iVar6);
        if (iVar6 == 0) {
          trap(0x1c00);
        }
        if ((iVar6 == -1) && ((int)psVar7[-8] - (int)psVar8[-8] == -0x80000000)) {
          trap(0x1800);
        }
        puVar10[-10] = (short)(((int)psVar7[-8] - (int)psVar8[-8]) / iVar6);
        if (iVar6 == 0) {
          trap(0x1c00);
        }
        if ((iVar6 == -1) && ((int)psVar7[-7] - (int)psVar8[-7] == -0x80000000)) {
          trap(0x1800);
        }
        puVar10[-9] = (short)(((int)psVar7[-7] - (int)psVar8[-7]) / iVar6);
        if (iVar6 == 0) {
          trap(0x1c00);
        }
        if ((iVar6 == -1) && ((int)psVar7[-5] - (int)psVar8[-5] == -0x80000000)) {
          trap(0x1800);
        }
        puVar10[-8] = (short)(((int)psVar7[-5] - (int)psVar8[-5]) / iVar6);
        if (iVar6 == 0) {
          trap(0x1c00);
        }
        if ((iVar6 == -1) && ((int)psVar7[-4] - (int)psVar8[-4] == -0x80000000)) {
          trap(0x1800);
        }
        puVar10[-7] = (short)(((int)psVar7[-4] - (int)psVar8[-4]) / iVar6);
        if (iVar6 == 0) {
          trap(0x1c00);
        }
        if ((iVar6 == -1) && ((int)psVar7[-6] - (int)psVar8[-6] == -0x80000000)) {
          trap(0x1800);
        }
        puVar10[-6] = (short)(((int)psVar7[-6] - (int)psVar8[-6]) / iVar6);
        if (iVar6 == 0) {
          trap(0x1c00);
        }
        if ((iVar6 == -1) && ((int)psVar7[-3] - (int)psVar8[-3] == -0x80000000)) {
          trap(0x1800);
        }
        puVar10[-5] = (short)(((int)psVar7[-3] - (int)psVar8[-3]) / iVar6);
        if (iVar6 == 0) {
          trap(0x1c00);
        }
        if ((iVar6 == -1) && ((int)psVar7[-2] - (int)psVar8[-2] == -0x80000000)) {
          trap(0x1800);
        }
        puVar10[-4] = (short)(((int)psVar7[-2] - (int)psVar8[-2]) / iVar6);
        if (iVar6 == 0) {
          trap(0x1c00);
        }
        if ((iVar6 == -1) && ((int)psVar7[-1] - (int)psVar8[-1] == -0x80000000)) {
          trap(0x1800);
        }
        puVar10[-3] = (short)(((int)psVar7[-1] - (int)psVar8[-1]) / iVar6);
        if (iVar6 == 0) {
          trap(0x1c00);
        }
        if ((iVar6 == -1) && ((int)psVar7[1] - (int)psVar8[1] == -0x80000000)) {
          trap(0x1800);
        }
        puVar10[-2] = (short)(((int)psVar7[1] - (int)psVar8[1]) / iVar6);
        if (iVar6 == 0) {
          trap(0x1c00);
        }
        if ((iVar6 == -1) && ((int)psVar7[2] - (int)psVar8[2] == -0x80000000)) {
          trap(0x1800);
        }
        puVar10[-1] = (short)(((int)psVar7[2] - (int)psVar8[2]) / iVar6);
        if (iVar6 == 0) {
          trap(0x1c00);
        }
        if ((iVar6 == -1) && ((int)*psVar7 - (int)*psVar8 == -0x80000000)) {
          trap(0x1800);
        }
        *puVar10 = (short)(((int)*psVar7 - (int)*psVar8) / iVar6);
        psVar9[-9] = psVar8[-9];
        psVar9[-8] = psVar8[-8];
        psVar9[-7] = psVar8[-7];
        psVar9[-5] = psVar8[-5];
        psVar9[-4] = psVar8[-4];
        psVar9[-6] = psVar8[-6];
        psVar9[-3] = psVar8[-3];
        iVar4 = iVar4 + 1;
        psVar9[-2] = psVar8[-2];
        in_t5 = in_t5 + 0xc;
        psVar9[-1] = psVar8[-1];
        psVar7 = psVar7 + 0x16;
        psVar9[1] = psVar8[1];
        puVar10 = puVar10 + 0xc;
        psVar9[2] = psVar8[2];
        sVar1 = *psVar8;
        psVar8 = psVar8 + 0x16;
        *psVar9 = sVar1;
        psVar9 = psVar9 + 0x16;
      } while (iVar4 < (int)(uint)uVar2);
    }
    return 0;
  }
  if (unaff_s4 == 0) {
    iVar4 = (uint)(*(byte *)(unaff_s3 + 0x60) >> 4) * 4 + *(short *)(unaff_s8 + 8) * 4 + unaff_s6;
    goto LAB_8012f02c;
  }
LAB_8012f01c:
  param_3 = (short *)(in_v1 + 0x20);
  param_1 = (short *)(in_t4 + 0x20);
  in_t0 = in_t2 + 8;
  goto LAB_8012f028;
}

