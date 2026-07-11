// FUN_80108684

/* WARNING: Removing unreachable block (ram,0x80108bf4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80108684(short *param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  short extraout_v1;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint extraout_v1_00;
  int extraout_v1_01;
  undefined1 uVar10;
  short *unaff_s1;
  short *psVar11;
  char *pcVar12;
  int iVar13;
  short *local_30;
  
  uVar7 = (uint)*(byte *)(param_1 + 2);
  if (uVar7 != 1) {
    if (1 < uVar7) {
      if (uVar7 < 4) {
        uVar6 = FUN_80111ba8();
        return uVar6;
      }
      return 0;
    }
    local_30 = param_1;
    if (uVar7 != 0) goto LAB_80111bb0;
    func_0x800752b4(3);
    iVar13 = 0;
    do {
      iVar3 = iVar13 << 0x10;
      iVar13 = iVar13 + 1;
      iVar3 = iVar3 >> 0xd;
      *(undefined1 *)(iVar3 + -0x7fec7020) = 0;
      *(undefined1 *)(iVar3 + -0x7fec701f) = 0;
      *(undefined4 *)(iVar3 + -0x7fec701c) = 0;
    } while (iVar13 * 0x10000 >> 0x10 < 3);
    *(undefined1 *)(param_1 + 2) = 1;
  }
  iVar3 = 0;
  iVar13 = 0;
  do {
    iVar13 = iVar13 >> 0x10;
    uVar7 = iVar13 * 8;
    pcVar12 = (char *)(uVar7 + 0x80138fe0);
    if (((DAT_800bf873 == '\0') && (DAT_800bf80d < '\x02')) && (DAT_800bf816 == '\0')) {
      if (iVar13 == 1) {
        uVar4 = 0;
        if ((_DAT_800bfe56 & 2) == 0) {
          uVar4 = 0x216 - (0xdac - _DAT_1f800162 >> 4);
          if ((int)uVar4 < 0) {
            uVar6 = FUN_80111860(8,0);
            return uVar6;
          }
          uVar8 = uVar4 * 0x10000;
          if (0x7f < (int)uVar4) {
            uVar4 = 0x7f;
            goto LAB_801088c4;
          }
        }
        else {
LAB_801088c4:
          uVar8 = uVar4 << 0x10;
        }
        uVar8 = uVar8 | uVar4;
      }
      else if (iVar13 < 2) {
        uVar8 = 0;
        if (iVar13 != 0) {
          uVar4 = 0x1f800000;
          goto LAB_80111a80;
        }
        if (((_DAT_800bfe56 & 2) != 0) && (0xe < DAT_800bf871)) {
          uVar6 = FUN_80111808(0,0);
          return uVar6;
        }
        uVar7 = (uint)_DAT_1f800160;
        iVar13 = 0x60 - ((int)(20000 - uVar7) >> 4);
        uVar8 = 0x40 - ((int)(19000 - uVar7) >> 3);
        if (iVar13 < 0) {
          uVar6 = FUN_801117ec(uVar7,0);
          return uVar6;
        }
        if (0x3c < iVar13) {
          iVar13 = 0x3c;
        }
        if ((int)uVar8 < 0) {
          uVar6 = FUN_80111808();
          return uVar6;
        }
        if (0x3c < (int)uVar8) {
          uVar8 = 0x3c;
        }
        uVar8 = iVar13 << 0x10 | uVar8;
      }
      else {
        uVar8 = 0;
        if (iVar13 != 2) {
          uVar4 = 0x1f800000;
          goto LAB_80111a80;
        }
        psVar11 = (short *)&DAT_80135318;
        unaff_s1 = (short *)0x1;
        iVar13 = func_0x800781e0((int)_DAT_1f800160 - (int)_DAT_80135318,
                                 (int)_DAT_1f800164 - (int)_DAT_8013531c);
        bVar1 = true;
        do {
          if ((bVar1) || (((int)(uint)DAT_800bf9f4 >> ((uint)(unaff_s1 + -1) & 0x1f) & 1U) != 0)) {
            param_1 = (short *)(&DAT_80135318 + (int)unaff_s1 * 8);
            iVar5 = func_0x800781e0((int)_DAT_1f800160 - (int)*param_1,
                                    (int)_DAT_1f800164 -
                                    (int)*(short *)(&DAT_8013531c + (int)unaff_s1 * 8));
            if (iVar5 < iVar13) {
              psVar11 = param_1;
              iVar13 = iVar5;
            }
          }
          unaff_s1 = (short *)((int)unaff_s1 + 1);
          bVar1 = (int)unaff_s1 < 2;
        } while ((int)unaff_s1 < 10);
        iVar5 = (int)_DAT_1f800162 - (int)psVar11[1] >> 5;
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        if ((0x400 < iVar13) || (param_1 = (short *)&DAT_1f800000, 0x40 < iVar5)) goto LAB_80108adc;
        iVar3 = func_0x80085690((int)psVar11[2] - (int)_DAT_1f8000da,
                                (int)*psVar11 - (int)_DAT_1f8000d2);
        iVar9 = (int)_DAT_1f8000f2;
        iVar13 = func_0x80083e80(iVar13);
        psVar11 = (short *)((0x28 - (iVar13 >> 6)) - (iVar5 >> 1));
        if ((int)psVar11 < 0) {
          psVar11 = (short *)0x0;
        }
        uVar7 = iVar3 - iVar9 & 0xfff;
        if (0x800 < uVar7) {
          uVar7 = 0x1000 - uVar7;
        }
        if (uVar7 - 0x381 < 0xff) {
          uVar6 = FUN_80111a64();
          return uVar6;
        }
        if ((int)uVar7 < 0x400) {
          iVar13 = func_0x80083e80();
          param_1 = (short *)((int)psVar11 * iVar13 >> 0xc);
          sVar2 = (short)param_1;
          if (0x7f < sVar2) {
            uVar6 = FUN_80111a64();
            return uVar6;
          }
          unaff_s1 = psVar11;
          if (sVar2 < 0) {
            uVar6 = FUN_80111a64();
            return uVar6;
          }
        }
        else {
          iVar13 = func_0x80083e80();
          unaff_s1 = (short *)((int)psVar11 * iVar13 >> 0xc);
          if (0x7f < (short)unaff_s1) {
            uVar6 = FUN_80111a64();
            return uVar6;
          }
          param_1 = psVar11;
          if ((short)unaff_s1 < 0) {
            unaff_s1 = (short *)0x0;
          }
        }
        uVar8 = (int)param_1 << 0x10 | (int)(short)unaff_s1;
      }
      uVar4 = 3;
LAB_80111a80:
      if (uVar8 == uVar4) {
        *(char *)(unaff_s1 + 3) = (char)uVar7;
        uVar10 = 1;
        func_0x80042354();
        *(undefined1 *)(extraout_v1_01 + 4) = uVar10;
        uVar6 = func_0x8007a624(param_1);
        return uVar6;
      }
      return 0;
    }
LAB_80108adc:
    if (*pcVar12 == '\0') {
      *pcVar12 = '\x01';
      if (*(int *)(uVar7 + 0x80138fe4) != 0) {
        func_0x80074af0();
      }
      sVar2 = (short)iVar3;
      if (sVar2 == 1) {
LAB_80111b20:
        local_30 = (short *)0x1;
        if (param_1 == (short *)0x1) {
          *(undefined1 *)(unaff_s1 + 3) = 2;
          local_30 = unaff_s1;
          func_0x80040cdc(unaff_s1,0x8013995c,0x80135f24);
          *(undefined1 *)(unaff_s1 + 0x38) = 1;
          local_30[0x18] = extraout_v1;
          goto LAB_8011ab6c;
        }
        if (1 < (int)param_1) {
          if (param_1 != (short *)0x2) goto LAB_8011ab6c;
          local_30 = unaff_s1;
          func_0x80041098();
          uVar7 = (uint)*(byte *)(unaff_s1 + 0x38);
          goto LAB_80111bb0;
        }
        if (param_1 != (short *)0x0) goto LAB_8011ab6c;
        if (*(char *)((int)unaff_s1 + 0x2b) != '\x03') {
          return 0;
        }
        *(undefined1 *)(unaff_s1 + 3) = 1;
      }
      else if (sVar2 < 2) {
        if (sVar2 == 0) goto LAB_80111b20;
      }
      else if (sVar2 == 2) {
        uVar6 = func_0x80074590(0x85,0,0xffffff81);
        *(undefined4 *)(uVar7 + 0x80138fe4) = uVar6;
        uVar6 = FUN_80111b60();
        return uVar6;
      }
LAB_80111b68:
      local_30 = (short *)0x1;
      func_0x80042354(1,1);
      goto LAB_8011ab6c;
    }
    if (*pcVar12 != '\x01') goto LAB_80111b68;
    iVar13 = func_0x8007496c(*(undefined4 *)(uVar7 + 0x80138fe4),0,0);
    if (iVar13 == 0) {
      *pcVar12 = '\0';
      uVar6 = FUN_80111b60();
      return uVar6;
    }
    func_0x80074a38(*(undefined4 *)(uVar7 + 0x80138fe4));
    iVar3 = iVar3 + 1;
    iVar13 = iVar3 * 0x10000;
  } while (iVar3 * 0x10000 >> 0x10 < 3);
  local_30 = (short *)0x1fff;
  func_0x80075d24();
  uVar7 = extraout_v1_00;
LAB_80111bb0:
  if (uVar7 != 0xff) {
    return 0;
  }
  *(undefined1 *)(unaff_s1 + 3) = 0;
  func_0x80042310();
LAB_8011ab6c:
  param_1[0x40] = 200;
  param_1[0x41] = 400;
  param_1[0x42] = 0x2d0;
  *(short **)(param_1 + 10) = local_30;
  param_1[0x43] = 0x310;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  return 0x310;
}

