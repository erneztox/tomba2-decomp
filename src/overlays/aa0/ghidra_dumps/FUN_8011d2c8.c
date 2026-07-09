// FUN_8011d2c8

void FUN_8011d2c8(short *param_1,int param_2,short *param_3,short *param_4)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  uint extraout_v1;
  uint extraout_v1_00;
  uint extraout_v1_01;
  int iVar5;
  short *psVar6;
  undefined4 uVar7;
  short *psVar8;
  short *psVar9;
  undefined2 *in_t0;
  int in_t1;
  int in_t3;
  undefined2 *in_t5;
  short *unaff_s3;
  undefined2 in_lo;
  
  bVar1 = *(byte *)(param_1 + 2);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        FUN_80126468(param_1);
      }
    }
    else if (bVar1 == 2) {
      if ((*(byte *)((int)param_1 + 5) < 4) && (1 < *(byte *)((int)param_1 + 5))) {
        if (DAT_800bf8f1 == '\0') {
          func_0x80040b48(0x3d);
          FUN_801263a0();
          return;
        }
        iVar3 = func_0x80040c00(0x3c);
        if (-1 < iVar3) {
          uVar7 = 0x38;
          if ((char)param_1[0x2f] == '\0') {
            uVar7 = 0x39;
          }
          func_0x8004d4c4(uVar7,1);
          func_0x8004b0d8(param_1);
          bVar1 = *(byte *)(param_1 + 0x2f);
          *(byte *)(param_1 + 0x2f) = bVar1 | 8;
          if (*(char *)((int)param_1 + 3) == '\x01') {
            *(byte *)(param_1 + 0x2f) = (bVar1 | 8) << 4;
            FUN_80126414();
            return;
          }
          DAT_800bf9f2 = DAT_800bf9f2 & 0xf0 | *(byte *)(param_1 + 0x2f);
        }
        *(undefined1 *)(param_1 + 2) = 3;
      }
      func_0x8007778c(param_1);
    }
    else if (bVar1 == 3) {
      func_0x8007a624(param_1);
      return;
    }
LAB_80126454:
    FUN_801312cc();
    if (*(char *)((int)unaff_s3 + 3) == '\0') {
      param_2 = 0;
      psVar6 = unaff_s3;
      goto LAB_8012f42c;
    }
    if (*(char *)((int)unaff_s3 + 3) == '\x01') {
      func_0x8004cbd8();
    }
    if ((DAT_800bf89c == '\x02') && (*(char *)((int)unaff_s3 + 3) == '\0')) {
      *(undefined1 *)((int)unaff_s3 + 5) = 5;
    }
    *(undefined1 *)((int)unaff_s3 + 0x29) = 0;
    *(undefined1 *)((int)unaff_s3 + 0x2b) = 0;
    return;
  }
  psVar6 = param_1;
  func_0x8007778c();
  uVar4 = (uint)*(byte *)((int)param_1 + 5);
  if (uVar4 == 1) {
    uVar2 = FUN_801266c8();
    uVar4 = extraout_v1_00;
    psVar6 = param_1;
  }
  else {
    uVar2 = 2;
    if (uVar4 < 2) {
      if (uVar4 == 0) {
        uVar2 = FUN_80127420();
        uVar4 = extraout_v1;
        psVar6 = param_1;
      }
    }
    else {
      uVar2 = 3;
      if (uVar4 == 2) {
        uVar2 = FUN_8012681c();
        uVar4 = extraout_v1_01;
        psVar6 = param_1;
      }
      else if (uVar4 == 3) {
        FUN_80126f9c(param_1);
        func_0x80077b5c(param_1);
        goto LAB_80126454;
      }
    }
  }
  *(undefined2 *)(uVar4 + 4) = uVar2;
  *(short *)(*(int *)(unaff_s3 + 0x62) + 10) = unaff_s3[0x38];
  iVar5 = *(int *)(unaff_s3 + 0x62);
  iVar3 = 0xf0;
  while( true ) {
    if (param_2 == 0) {
      trap(0x1c00);
    }
    if ((param_2 == -1) && (iVar3 - iVar5 == -0x80000000)) {
      trap(0x1800);
    }
    *in_t5 = (short)((iVar3 - iVar5) / param_2);
    if (param_2 == 0) {
      trap(0x1c00);
    }
    if ((param_2 == -1) && ((int)param_3[-8] - (int)psVar6[-8] == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-10] = (short)(((int)param_3[-8] - (int)psVar6[-8]) / param_2);
    if (param_2 == 0) {
      trap(0x1c00);
    }
    if ((param_2 == -1) && ((int)param_3[-7] - (int)psVar6[-7] == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-9] = (short)(((int)param_3[-7] - (int)psVar6[-7]) / param_2);
    in_lo = (undefined2)(((int)param_3[-5] - (int)psVar6[-5]) / param_2);
    if (param_2 == 0) {
      trap(0x1c00);
    }
    psVar8 = psVar6;
    psVar9 = param_3;
    if ((param_2 == -1) && ((int)param_3[-5] - (int)psVar6[-5] == -0x80000000)) {
LAB_8012f42c:
      trap(0x1800);
      psVar8 = psVar6;
      psVar9 = param_3;
    }
    in_t0[-8] = in_lo;
    if (param_2 == 0) {
      trap(0x1c00);
    }
    if ((param_2 == -1) && ((int)psVar9[-4] - (int)psVar8[-4] == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-7] = (short)(((int)psVar9[-4] - (int)psVar8[-4]) / param_2);
    if (param_2 == 0) {
      trap(0x1c00);
    }
    if ((param_2 == -1) && ((int)psVar9[-6] - (int)psVar8[-6] == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-6] = (short)(((int)psVar9[-6] - (int)psVar8[-6]) / param_2);
    if (param_2 == 0) {
      trap(0x1c00);
    }
    if ((param_2 == -1) && ((int)psVar9[-3] - (int)psVar8[-3] == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-5] = (short)(((int)psVar9[-3] - (int)psVar8[-3]) / param_2);
    if (param_2 == 0) {
      trap(0x1c00);
    }
    if ((param_2 == -1) && ((int)psVar9[-2] - (int)psVar8[-2] == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-4] = (short)(((int)psVar9[-2] - (int)psVar8[-2]) / param_2);
    if (param_2 == 0) {
      trap(0x1c00);
    }
    if ((param_2 == -1) && ((int)psVar9[-1] - (int)psVar8[-1] == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-3] = (short)(((int)psVar9[-1] - (int)psVar8[-1]) / param_2);
    if (param_2 == 0) {
      trap(0x1c00);
    }
    if ((param_2 == -1) && ((int)psVar9[1] - (int)psVar8[1] == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-2] = (short)(((int)psVar9[1] - (int)psVar8[1]) / param_2);
    if (param_2 == 0) {
      trap(0x1c00);
    }
    if ((param_2 == -1) && ((int)psVar9[2] - (int)psVar8[2] == -0x80000000)) {
      trap(0x1800);
    }
    in_t0[-1] = (short)(((int)psVar9[2] - (int)psVar8[2]) / param_2);
    if (param_2 == 0) {
      trap(0x1c00);
    }
    if ((param_2 == -1) && ((int)*psVar9 - (int)*psVar8 == -0x80000000)) {
      trap(0x1800);
    }
    *in_t0 = (short)(((int)*psVar9 - (int)*psVar8) / param_2);
    param_4[-9] = psVar8[-9];
    param_4[-8] = psVar8[-8];
    param_4[-7] = psVar8[-7];
    param_4[-5] = psVar8[-5];
    param_4[-4] = psVar8[-4];
    param_4[-6] = psVar8[-6];
    param_4[-3] = psVar8[-3];
    in_t1 = in_t1 + 1;
    param_4[-2] = psVar8[-2];
    in_t5 = in_t5 + 0xc;
    param_4[-1] = psVar8[-1];
    param_3 = psVar9 + 0x16;
    param_4[1] = psVar8[1];
    in_t0 = in_t0 + 0xc;
    param_4[2] = psVar8[2];
    psVar6 = psVar8 + 0x16;
    *param_4 = *psVar8;
    param_4 = param_4 + 0x16;
    if (in_t3 <= in_t1) break;
    iVar3 = (int)psVar9[0xd];
    iVar5 = (int)psVar8[0xd];
  }
  return;
}

