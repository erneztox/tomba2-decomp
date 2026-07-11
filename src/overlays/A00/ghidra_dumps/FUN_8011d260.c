// FUN_8011d260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011d260(int param_1,undefined4 param_2,undefined4 param_3,short *param_4)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  code *pcVar6;
  int iVar7;
  short *psVar8;
  undefined2 *in_t0;
  undefined2 *puVar9;
  int in_t1;
  undefined2 *in_t2;
  int in_t3;
  undefined2 *in_t5;
  int in_t6;
  int in_t7;
  int unaff_s5;
  int unaff_s6;
  int in_t8;
  undefined8 uVar10;
  
  pcVar6 = FUN_8011d260;
  *(undefined1 *)(param_1 + 4) = 1;
  psVar5 = (short *)(int)_DAT_800e7ed6;
  iVar7 = (int)*(short *)(param_1 + 0x56);
  psVar8 = (short *)0x0;
  uVar10 = func_0x80077768();
  if ((int)uVar10 != 0) {
    iVar4 = *(int *)(psVar5 + 0x60);
    iVar3 = unaff_s5 +
            *(int *)((int)((ulonglong)uVar10 >> 0x20) +
                    *(short *)(param_1 + 0x56) + 0x800 + unaff_s6);
    while( true ) {
      if (iVar7 == 0) {
        trap(0x1c00);
      }
      if ((iVar7 == -1) && (iVar3 - iVar4 == -0x80000000)) {
        trap(0x1800);
      }
      in_t0[-1] = (short)((iVar3 - iVar4) / iVar7);
      if (iVar7 == 0) {
        trap(0x1c00);
      }
      if ((iVar7 == -1) && ((int)*psVar8 - (int)*psVar5 == -0x80000000)) {
        trap(0x1800);
      }
      *in_t0 = (short)(((int)*psVar8 - (int)*psVar5) / iVar7);
      param_4[-8] = psVar5[-8];
      param_4[-7] = psVar5[-7];
      param_4[-6] = psVar5[-6];
      param_4[-4] = psVar5[-4];
      in_t1 = in_t1 + 1;
      param_4[-3] = psVar5[-3];
      in_t2 = in_t2 + 9;
      param_4[-5] = psVar5[-5];
      param_4[-2] = psVar5[-2];
      param_4[-1] = psVar5[-1];
      *param_4 = *psVar5;
      param_4 = param_4 + 0x12;
      if (in_t3 <= in_t1) break;
      if (iVar7 == 0) {
        trap(0x1c00);
      }
      if ((iVar7 == -1) && ((int)psVar8[10] - (int)psVar5[10] == -0x80000000)) {
        trap(0x1800);
      }
      *in_t2 = (short)(((int)psVar8[10] - (int)psVar5[10]) / iVar7);
      if (iVar7 == 0) {
        trap(0x1c00);
      }
      if ((iVar7 == -1) && ((int)psVar8[0xb] - (int)psVar5[0xb] == -0x80000000)) {
        trap(0x1800);
      }
      in_t0[2] = (short)(((int)psVar8[0xb] - (int)psVar5[0xb]) / iVar7);
      if (iVar7 == 0) {
        trap(0x1c00);
      }
      if ((iVar7 == -1) && ((int)psVar8[0xc] - (int)psVar5[0xc] == -0x80000000)) {
        trap(0x1800);
      }
      in_t0[3] = (short)(((int)psVar8[0xc] - (int)psVar5[0xc]) / iVar7);
      if (iVar7 == 0) {
        trap(0x1c00);
      }
      if ((iVar7 == -1) && ((int)psVar8[0xe] - (int)psVar5[0xe] == -0x80000000)) {
        trap(0x1800);
      }
      in_t0[4] = (short)(((int)psVar8[0xe] - (int)psVar5[0xe]) / iVar7);
      if (iVar7 == 0) {
        trap(0x1c00);
      }
      if ((iVar7 == -1) && ((int)psVar8[0xf] - (int)psVar5[0xf] == -0x80000000)) {
        trap(0x1800);
      }
      in_t0[5] = (short)(((int)psVar8[0xf] - (int)psVar5[0xf]) / iVar7);
      if (iVar7 == 0) {
        trap(0x1c00);
      }
      if ((iVar7 == -1) && ((int)psVar8[0xd] - (int)psVar5[0xd] == -0x80000000)) {
        trap(0x1800);
      }
      in_t0[6] = (short)(((int)psVar8[0xd] - (int)psVar5[0xd]) / iVar7);
      if (iVar7 == 0) {
        trap(0x1c00);
      }
      if ((iVar7 == -1) && ((int)psVar8[0x10] - (int)psVar5[0x10] == -0x80000000)) {
        trap(0x1800);
      }
      in_t0[7] = (short)(((int)psVar8[0x10] - (int)psVar5[0x10]) / iVar7);
      iVar3 = (int)psVar8[0x11];
      iVar4 = (int)psVar5[0x11];
      psVar5 = psVar5 + 0x12;
      psVar8 = psVar8 + 0x12;
      in_t0 = in_t0 + 9;
    }
    uVar1 = *(ushort *)(in_t6 + 2);
    iVar7 = 0;
    if (uVar1 != 0) {
      iVar3 = (int)(short)param_1;
      psVar8 = (short *)(in_t8 + 0x26);
      psVar5 = (short *)(in_t7 + 0x26);
      pcVar6 = pcVar6 + 0x26;
      puVar9 = in_t5 + 0xb;
      do {
        if (iVar3 == 0) {
          trap(0x1c00);
        }
        if ((iVar3 == -1) && ((int)psVar5[-9] - (int)*(short *)(pcVar6 + -0x12) == -0x80000000)) {
          trap(0x1800);
        }
        *in_t5 = (short)(((int)psVar5[-9] - (int)*(short *)(pcVar6 + -0x12)) / iVar3);
        if (iVar3 == 0) {
          trap(0x1c00);
        }
        if ((iVar3 == -1) && ((int)psVar5[-8] - (int)*(short *)(pcVar6 + -0x10) == -0x80000000)) {
          trap(0x1800);
        }
        puVar9[-10] = (short)(((int)psVar5[-8] - (int)*(short *)(pcVar6 + -0x10)) / iVar3);
        if (iVar3 == 0) {
          trap(0x1c00);
        }
        if ((iVar3 == -1) && ((int)psVar5[-7] - (int)*(short *)(pcVar6 + -0xe) == -0x80000000)) {
          trap(0x1800);
        }
        puVar9[-9] = (short)(((int)psVar5[-7] - (int)*(short *)(pcVar6 + -0xe)) / iVar3);
        if (iVar3 == 0) {
          trap(0x1c00);
        }
        if ((iVar3 == -1) && ((int)psVar5[-5] - (int)*(short *)(pcVar6 + -10) == -0x80000000)) {
          trap(0x1800);
        }
        puVar9[-8] = (short)(((int)psVar5[-5] - (int)*(short *)(pcVar6 + -10)) / iVar3);
        if (iVar3 == 0) {
          trap(0x1c00);
        }
        if ((iVar3 == -1) && ((int)psVar5[-4] - (int)*(short *)(pcVar6 + -8) == -0x80000000)) {
          trap(0x1800);
        }
        puVar9[-7] = (short)(((int)psVar5[-4] - (int)*(short *)(pcVar6 + -8)) / iVar3);
        if (iVar3 == 0) {
          trap(0x1c00);
        }
        if ((iVar3 == -1) && ((int)psVar5[-6] - (int)*(short *)(pcVar6 + -0xc) == -0x80000000)) {
          trap(0x1800);
        }
        puVar9[-6] = (short)(((int)psVar5[-6] - (int)*(short *)(pcVar6 + -0xc)) / iVar3);
        if (iVar3 == 0) {
          trap(0x1c00);
        }
        if ((iVar3 == -1) && ((int)psVar5[-3] - (int)*(short *)(pcVar6 + -6) == -0x80000000)) {
          trap(0x1800);
        }
        puVar9[-5] = (short)(((int)psVar5[-3] - (int)*(short *)(pcVar6 + -6)) / iVar3);
        if (iVar3 == 0) {
          trap(0x1c00);
        }
        if ((iVar3 == -1) && ((int)psVar5[-2] - (int)*(short *)(pcVar6 + -4) == -0x80000000)) {
          trap(0x1800);
        }
        puVar9[-4] = (short)(((int)psVar5[-2] - (int)*(short *)(pcVar6 + -4)) / iVar3);
        if (iVar3 == 0) {
          trap(0x1c00);
        }
        if ((iVar3 == -1) && ((int)psVar5[-1] - (int)*(short *)(pcVar6 + -2) == -0x80000000)) {
          trap(0x1800);
        }
        puVar9[-3] = (short)(((int)psVar5[-1] - (int)*(short *)(pcVar6 + -2)) / iVar3);
        if (iVar3 == 0) {
          trap(0x1c00);
        }
        if ((iVar3 == -1) && ((int)psVar5[1] - (int)*(short *)(pcVar6 + 2) == -0x80000000)) {
          trap(0x1800);
        }
        puVar9[-2] = (short)(((int)psVar5[1] - (int)*(short *)(pcVar6 + 2)) / iVar3);
        if (iVar3 == 0) {
          trap(0x1c00);
        }
        if ((iVar3 == -1) && ((int)psVar5[2] - (int)*(short *)(pcVar6 + 4) == -0x80000000)) {
          trap(0x1800);
        }
        puVar9[-1] = (short)(((int)psVar5[2] - (int)*(short *)(pcVar6 + 4)) / iVar3);
        if (iVar3 == 0) {
          trap(0x1c00);
        }
        if ((iVar3 == -1) && ((int)*psVar5 - (int)*(short *)pcVar6 == -0x80000000)) {
          trap(0x1800);
        }
        *puVar9 = (short)(((int)*psVar5 - (int)*(short *)pcVar6) / iVar3);
        psVar8[-9] = *(short *)(pcVar6 + -0x12);
        psVar8[-8] = *(short *)(pcVar6 + -0x10);
        psVar8[-7] = *(short *)(pcVar6 + -0xe);
        psVar8[-5] = *(short *)(pcVar6 + -10);
        psVar8[-4] = *(short *)(pcVar6 + -8);
        psVar8[-6] = *(short *)(pcVar6 + -0xc);
        psVar8[-3] = *(short *)(pcVar6 + -6);
        iVar7 = iVar7 + 1;
        psVar8[-2] = *(short *)(pcVar6 + -4);
        in_t5 = in_t5 + 0xc;
        psVar8[-1] = *(short *)(pcVar6 + -2);
        psVar5 = psVar5 + 0x16;
        psVar8[1] = *(short *)(pcVar6 + 2);
        puVar9 = puVar9 + 0xc;
        psVar8[2] = *(short *)(pcVar6 + 4);
        sVar2 = *(short *)pcVar6;
        pcVar6 = pcVar6 + 0x2c;
        *psVar8 = sVar2;
        psVar8 = psVar8 + 0x16;
      } while (iVar7 < (int)(uint)uVar1);
    }
    return;
  }
  *(char *)(param_1 + 0x46) = (char)(*(ushort *)(param_1 + 0x56) >> 4);
  FUN_80125c4c(param_1);
  return;
}

